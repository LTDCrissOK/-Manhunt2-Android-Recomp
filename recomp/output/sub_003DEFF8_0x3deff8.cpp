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

// Function: sub_003DEFF8
// Address: 0x3deff8 - 0x3df080
void sub_003DEFF8_0x3deff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEFF8_0x3deff8");
#endif

    switch (ctx->pc) {
        case 0x3df028u: goto label_3df028;
        case 0x3df034u: goto label_3df034;
        case 0x3df040u: goto label_3df040;
        case 0x3df04cu: goto label_3df04c;
        case 0x3df060u: goto label_3df060;
        default: break;
    }

    ctx->pc = 0x3deff8u;

    // 0x3deff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3deff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3deffc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3deffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3df000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3df004: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x3df004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x3df008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3df008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3df00c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3df00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df018: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3df018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x3df01c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x3df01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x3df020: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF020u;
    SET_GPR_U32(ctx, 31, 0x3DF028u);
    ctx->pc = 0x3DF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF020u;
    // 0x3df024: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF020u, 0x3DF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF028u;
label_3df028:
    // 0x3df028: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3df028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3df02c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF02Cu;
    SET_GPR_U32(ctx, 31, 0x3DF034u);
    ctx->pc = 0x3DF030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF02Cu;
    // 0x3df030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF02Cu, 0x3DF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF034u;
label_3df034:
    // 0x3df034: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3df034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3df038: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF038u;
    SET_GPR_U32(ctx, 31, 0x3DF040u);
    ctx->pc = 0x3DF03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF038u;
    // 0x3df03c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF038u, 0x3DF040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF040u;
label_3df040:
    // 0x3df040: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3df040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3df044: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF044u;
    SET_GPR_U32(ctx, 31, 0x3DF04Cu);
    ctx->pc = 0x3DF048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF044u;
    // 0x3df048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF044u, 0x3DF04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF04Cu;
label_3df04c:
    // 0x3df04c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3df04cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3df050: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF050u;
    {
        const bool branch_taken_0x3df050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF050u;
        // 0x3df054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df050) {
            ctx->pc = 0x3DF064u;
            goto label_3df064;
        }
    }
    ctx->pc = 0x3DF058u;
    // 0x3df058: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DF058u;
    SET_GPR_U32(ctx, 31, 0x3DF060u);
    ctx->pc = 0x3DF05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF058u;
    // 0x3df05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DF058u, 0x3DF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF060u;
label_3df060:
    // 0x3df060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df064:
    // 0x3df064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3df064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3df068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df06c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF06Cu;
        // 0x3df070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF074u;
    // 0x3df074: 0x0  nop
    ctx->pc = 0x3df074u;
    // NOP
    // 0x3df078: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df07c: 0x0  nop
    ctx->pc = 0x3df07cu;
    // NOP
    ctx->pc = 0x3df080u;
}
