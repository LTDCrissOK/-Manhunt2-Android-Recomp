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

// Function: sub_003147B8
// Address: 0x3147b8 - 0x3147e0
void sub_003147B8_0x3147b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003147B8_0x3147b8");
#endif

    ctx->pc = 0x3147b8u;

    // 0x3147b8: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x3147b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3147bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3147BCu;
    {
        const bool branch_taken_0x3147bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3147bc) {
            ctx->pc = 0x3147D4u;
            goto label_3147d4;
        }
    }
    ctx->pc = 0x3147C4u;
    // 0x3147c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3147c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3147c8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3147c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3147cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3147CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147CCu;
        // 0x3147d0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3147D4u;
label_3147d4:
    // 0x3147d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3147D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3147D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147D4u;
        // 0x3147d8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3147DCu;
    // 0x3147dc: 0x0  nop
    ctx->pc = 0x3147dcu;
    // NOP
    ctx->pc = 0x3147e0u;
}
