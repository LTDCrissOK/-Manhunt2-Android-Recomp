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

// Function: sub_002BCB60
// Address: 0x2bcb60 - 0x2bcba8
void sub_002BCB60_0x2bcb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCB60_0x2bcb60");
#endif

    switch (ctx->pc) {
        case 0x2bcb78u: goto label_2bcb78;
        default: break;
    }

    ctx->pc = 0x2bcb60u;

    // 0x2bcb60: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2bcb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2bcb64: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2BCB64u;
    {
        const bool branch_taken_0x2bcb64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB64u;
        // 0x2bcb68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb64) {
            ctx->pc = 0x2BCB9Cu;
            goto label_2bcb9c;
        }
    }
    ctx->pc = 0x2BCB6Cu;
    // 0x2bcb6c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x2bcb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2bcb70: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2bcb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb74: 0x0  nop
    ctx->pc = 0x2bcb74u;
    // NOP
label_2bcb78:
    // 0x2bcb78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bcb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bcb7c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2bcb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcb80: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCB80u;
    {
        const bool branch_taken_0x2bcb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB80u;
        // 0x2bcb84: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb80) {
            ctx->pc = 0x2BCB90u;
            goto label_2bcb90;
        }
    }
    ctx->pc = 0x2BCB88u;
    // 0x2bcb88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB88u;
        // 0x2bcb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB90u;
label_2bcb90:
    // 0x2bcb90: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2bcb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2bcb94: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BCB94u;
    {
        const bool branch_taken_0x2bcb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB94u;
        // 0x2bcb98: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb94) {
            ctx->pc = 0x2BCB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcb78;
        }
    }
    ctx->pc = 0x2BCB9Cu;
label_2bcb9c:
    // 0x2bcb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB9Cu;
        // 0x2bcba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCBA4u;
    // 0x2bcba4: 0x0  nop
    ctx->pc = 0x2bcba4u;
    // NOP
    ctx->pc = 0x2bcba8u;
}
