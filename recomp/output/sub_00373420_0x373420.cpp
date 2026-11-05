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

// Function: sub_00373420
// Address: 0x373420 - 0x3734b0
void sub_00373420_0x373420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373420_0x373420");
#endif

    switch (ctx->pc) {
        case 0x373450u: goto label_373450;
        case 0x37345cu: goto label_37345c;
        case 0x373490u: goto label_373490;
        default: break;
    }

    ctx->pc = 0x373420u;

    // 0x373420: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x373420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x373424: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x373424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x373428: 0x2442ccd8  addiu       $v0, $v0, -0x3328
    ctx->pc = 0x373428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954200));
    // 0x37342c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x37342cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x373430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x373430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373434: 0x34c6e020  ori         $a2, $a2, 0xE020
    ctx->pc = 0x373434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57376);
    // 0x373438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37343c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37343cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373440: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x373440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x373444: 0xf  sync
    ctx->pc = 0x373444u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x373448: 0x40f  sync.p
    ctx->pc = 0x373448u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x37344c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_373450:
    // 0x373450: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x373450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373454: 0x31080100  andi        $t0, $t0, 0x100
    ctx->pc = 0x373454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
    // 0x373458: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_37345c:
    if (ctx->pc == 0x37345Cu) {
        ctx->pc = 0x37345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373458u;
        // 0x37345c: 0x30a8007f  andi        $t0, $a1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x373460u;
        goto label_fallthrough_0x373458;
    }
    ctx->pc = 0x373458u;
    {
        const bool branch_taken_0x373458 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x37345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373458u;
        // 0x37345c: 0x30a8007f  andi        $t0, $a1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373458) {
            ctx->pc = 0x37347Cu;
            goto label_37347c;
        }
    }
label_fallthrough_0x373458:
    ctx->pc = 0x373460u;
    // 0x373460: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x373460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x373464: 0x1100fffa  beqz        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x373464u;
    {
        const bool branch_taken_0x373464 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x373464) {
            ctx->pc = 0x373450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373450;
        }
    }
    ctx->pc = 0x37346Cu;
    // 0x37346c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37346Cu;
    {
        const bool branch_taken_0x37346c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37346c) {
            ctx->pc = 0x37347Cu;
            goto label_37347c;
        }
    }
    ctx->pc = 0x373474u;
    // 0x373474: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x373474u;
    {
        const bool branch_taken_0x373474 = (false);
        if (branch_taken_0x373474) {
            ctx->pc = 0x37345Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37345c;
        }
    }
    ctx->pc = 0x37347Cu;
label_37347c:
    // 0x37347c: 0xa02820  add         $a1, $a1, $zero
    ctx->pc = 0x37347cu;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x373480: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x373480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x373484: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x373484u;
    {
        const bool branch_taken_0x373484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x373488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373484u;
        // 0x373488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373484) {
            ctx->pc = 0x3734A8u;
            goto label_3734a8;
        }
    }
    ctx->pc = 0x37348Cu;
    // 0x37348c: 0x0  nop
    ctx->pc = 0x37348cu;
    // NOP
label_373490:
    // 0x373490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373494: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x373494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x373498: 0x0  nop
    ctx->pc = 0x373498u;
    // NOP
    // 0x37349c: 0x0  nop
    ctx->pc = 0x37349cu;
    // NOP
    // 0x3734a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3734A0u;
    {
        const bool branch_taken_0x3734a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3734A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734A0u;
        // 0x3734a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3734a0) {
            ctx->pc = 0x373490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373490;
        }
    }
    ctx->pc = 0x3734A8u;
label_3734a8:
    // 0x3734a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3734A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3734A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3734B0u;
}
