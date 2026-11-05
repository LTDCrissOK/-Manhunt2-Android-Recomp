#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155FD8
// Address: 0x155fd8 - 0x1560a8
void sub_00155FD8_0x155fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155FD8_0x155fd8");
#endif

    switch (ctx->pc) {
        case 0x155ff0u: goto label_155ff0;
        case 0x156030u: goto label_156030;
        case 0x156040u: goto label_156040;
        case 0x156050u: goto label_156050;
        case 0x156060u: goto label_156060;
        case 0x156070u: goto label_156070;
        case 0x156080u: goto label_156080;
        case 0x156090u: goto label_156090;
        default: break;
    }

    ctx->pc = 0x155fd8u;

    // 0x155fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155fe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x155fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x155fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fe8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x155FE8u;
    SET_GPR_U32(ctx, 31, 0x155FF0u);
    ctx->pc = 0x155FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FE8u;
    // 0x155fec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x155FE8u, 0x155FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FF0u;
label_155ff0:
    // 0x155ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155ff4: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x155FF4u;
    {
        const bool branch_taken_0x155ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x155FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FF4u;
        // 0x155ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ff4) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x155FFCu;
    // 0x155ffc: 0x8e020520  lw          $v0, 0x520($s0)
    ctx->pc = 0x155ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x156000: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156004: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x156004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x156008: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x156008u;
    {
        const bool branch_taken_0x156008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156008u;
        // 0x15600c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156008) {
            ctx->pc = 0x156090u;
            goto label_156090;
        }
    }
    ctx->pc = 0x156010u;
    // 0x156010: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x156010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156014: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x156014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x156018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x156018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15601c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156020: 0x800008  jr          $a0
    ctx->pc = 0x156020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156028u: goto label_156028;
            case 0x156038u: goto label_156038;
            case 0x156048u: goto label_156048;
            case 0x156058u: goto label_156058;
            case 0x156068u: goto label_156068;
            case 0x156078u: goto label_156078;
            case 0x156088u: goto label_156088;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x156028u;
label_156028:
    // 0x156028: 0xc055958  jal         func_156560
    ctx->pc = 0x156028u;
    SET_GPR_U32(ctx, 31, 0x156030u);
    ctx->pc = 0x15602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156028u;
    // 0x15602c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156560u, 0x156028u, 0x156030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156030u;
label_156030:
    // 0x156030: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x156030u;
    {
        const bool branch_taken_0x156030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156030u;
        // 0x156034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156030) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x156038u;
label_156038:
    // 0x156038: 0xc055998  jal         func_156660
    ctx->pc = 0x156038u;
    SET_GPR_U32(ctx, 31, 0x156040u);
    ctx->pc = 0x15603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156038u;
    // 0x15603c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156660u, 0x156038u, 0x156040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156040u;
label_156040:
    // 0x156040: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x156040u;
    {
        const bool branch_taken_0x156040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156040u;
        // 0x156044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156040) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x156048u;
label_156048:
    // 0x156048: 0xc0559d8  jal         func_156760
    ctx->pc = 0x156048u;
    SET_GPR_U32(ctx, 31, 0x156050u);
    ctx->pc = 0x15604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156048u;
    // 0x15604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156760u, 0x156048u, 0x156050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156050u;
label_156050:
    // 0x156050: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x156050u;
    {
        const bool branch_taken_0x156050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156050u;
        // 0x156054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156050) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x156058u;
label_156058:
    // 0x156058: 0xc055a28  jal         func_1568A0
    ctx->pc = 0x156058u;
    SET_GPR_U32(ctx, 31, 0x156060u);
    ctx->pc = 0x15605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156058u;
    // 0x15605c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568A0u, 0x156058u, 0x156060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156060u;
label_156060:
    // 0x156060: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156060u;
    {
        const bool branch_taken_0x156060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156060u;
        // 0x156064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156060) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x156068u;
label_156068:
    // 0x156068: 0xc055ae2  jal         func_156B88
    ctx->pc = 0x156068u;
    SET_GPR_U32(ctx, 31, 0x156070u);
    ctx->pc = 0x15606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156068u;
    // 0x15606c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B88u, 0x156068u, 0x156070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156070u;
label_156070:
    // 0x156070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156070u;
    {
        const bool branch_taken_0x156070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156070u;
        // 0x156074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156070) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x156078u;
label_156078:
    // 0x156078: 0xc055b1e  jal         func_156C78
    ctx->pc = 0x156078u;
    SET_GPR_U32(ctx, 31, 0x156080u);
    ctx->pc = 0x15607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156078u;
    // 0x15607c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156C78u, 0x156078u, 0x156080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156080u;
label_156080:
    // 0x156080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156080u;
    {
        const bool branch_taken_0x156080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156080u;
        // 0x156084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156080) {
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x156088u;
label_156088:
    // 0x156088: 0xc055b88  jal         func_156E20
    ctx->pc = 0x156088u;
    SET_GPR_U32(ctx, 31, 0x156090u);
    ctx->pc = 0x15608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156088u;
    // 0x15608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E20u, 0x156088u, 0x156090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156090u;
label_156090:
    // 0x156090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156094:
    // 0x156094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156098: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15609c: 0x3e00008  jr          $ra
    ctx->pc = 0x15609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15609Cu;
        // 0x1560a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1560A4u;
    // 0x1560a4: 0x0  nop
    ctx->pc = 0x1560a4u;
    // NOP
    ctx->pc = 0x1560a8u;
}
