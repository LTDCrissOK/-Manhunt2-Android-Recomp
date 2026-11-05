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

// Function: sub_001044F8
// Address: 0x1044f8 - 0x104540
void sub_001044F8_0x1044f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001044F8_0x1044f8");
#endif

    ctx->pc = 0x1044f8u;

    // 0x1044f8: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x1044f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1044fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1044fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104500: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104500u;
    {
        const bool branch_taken_0x104500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104500u;
        // 0x104504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104500) {
            ctx->pc = 0x104514u;
            goto label_104514;
        }
    }
    ctx->pc = 0x104508u;
    // 0x104508: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x104508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10450c: 0x3e00008  jr          $ra
    ctx->pc = 0x10450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10450Cu;
        // 0x104510: 0xa0820014  sb          $v0, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10450Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104514u;
label_104514:
    // 0x104514: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104514u;
    {
        const bool branch_taken_0x104514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104514u;
        // 0x104518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104514) {
            ctx->pc = 0x104528u;
            goto label_104528;
        }
    }
    ctx->pc = 0x10451Cu;
    // 0x10451c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x10451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104520: 0x3e00008  jr          $ra
    ctx->pc = 0x104520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104520u;
        // 0x104524: 0xa0820014  sb          $v0, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104528u;
label_104528:
    // 0x104528: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104528u;
    {
        const bool branch_taken_0x104528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104528u;
        // 0x10452c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104528) {
            ctx->pc = 0x104534u;
            goto label_104534;
        }
    }
    ctx->pc = 0x104530u;
    // 0x104530: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x104530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
label_104534:
    // 0x104534: 0x3e00008  jr          $ra
    ctx->pc = 0x104534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10453Cu;
    // 0x10453c: 0x0  nop
    ctx->pc = 0x10453cu;
    // NOP
    ctx->pc = 0x104540u;
}
