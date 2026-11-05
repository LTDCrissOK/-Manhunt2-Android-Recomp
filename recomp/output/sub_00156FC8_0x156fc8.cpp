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

// Function: sub_00156FC8
// Address: 0x156fc8 - 0x157078
void sub_00156FC8_0x156fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156FC8_0x156fc8");
#endif

    switch (ctx->pc) {
        case 0x157004u: goto label_157004;
        case 0x157030u: goto label_157030;
        case 0x15705cu: goto label_15705c;
        default: break;
    }

    ctx->pc = 0x156fc8u;

    // 0x156fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156fcc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x156fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x156fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156fd4: 0x24420bd0  addiu       $v0, $v0, 0xBD0
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x156fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156fe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x156fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fe8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x156fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x156fec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x156fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x156ff0: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x156ff4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156FF4u;
    {
        const bool branch_taken_0x156ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FF4u;
        // 0x156ff8: 0x26120210  addiu       $s2, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ff4) {
            ctx->pc = 0x157004u;
            goto label_157004;
        }
    }
    ctx->pc = 0x156FFCu;
    // 0x156ffc: 0xc055c34  jal         func_1570D0
    ctx->pc = 0x156FFCu;
    SET_GPR_U32(ctx, 31, 0x157004u);
    ctx->pc = 0x1570D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1570D0u, 0x156FFCu, 0x157004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157004u;
label_157004:
    // 0x157004: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x157004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x157008: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x157008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x15700c: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x15700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x157010: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x157010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x157014: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x157014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x157018: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x157018u;
    {
        const bool branch_taken_0x157018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157018u;
        // 0x15701c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157018) {
            ctx->pc = 0x157048u;
            goto label_157048;
        }
    }
    ctx->pc = 0x157020u;
    // 0x157020: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x157020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157024: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x157024u;
    {
        const bool branch_taken_0x157024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157024) {
            ctx->pc = 0x157028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157024u;
            // 0x157028: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15704Cu;
            goto label_15704c;
        }
    }
    ctx->pc = 0x15702Cu;
    // 0x15702c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x15702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_157030:
    // 0x157030: 0x0  nop
    ctx->pc = 0x157030u;
    // NOP
    // 0x157034: 0x0  nop
    ctx->pc = 0x157034u;
    // NOP
    // 0x157038: 0x0  nop
    ctx->pc = 0x157038u;
    // NOP
    // 0x15703c: 0x0  nop
    ctx->pc = 0x15703cu;
    // NOP
    // 0x157040: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157040u;
    {
        const bool branch_taken_0x157040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x157040) {
            ctx->pc = 0x157044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157040u;
            // 0x157044: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157030;
        }
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x157048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_15704c:
    // 0x15704c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15704Cu;
    {
        const bool branch_taken_0x15704c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x157050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15704Cu;
        // 0x157050: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15704c) {
            ctx->pc = 0x15705Cu;
            goto label_15705c;
        }
    }
    ctx->pc = 0x157054u;
    // 0x157054: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x157054u;
    SET_GPR_U32(ctx, 31, 0x15705Cu);
    ctx->pc = 0x157058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157054u;
    // 0x157058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x157054u, 0x15705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15705Cu;
label_15705c:
    // 0x15705c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15705cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157064: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157068: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x157068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15706c: 0x3e00008  jr          $ra
    ctx->pc = 0x15706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15706Cu;
        // 0x157070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157074u;
    // 0x157074: 0x0  nop
    ctx->pc = 0x157074u;
    // NOP
    ctx->pc = 0x157078u;
}
