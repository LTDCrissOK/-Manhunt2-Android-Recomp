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

// Function: sub_0010E598
// Address: 0x10e598 - 0x10e5c0
void sub_0010E598_0x10e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E598_0x10e598");
#endif

    ctx->pc = 0x10e598u;

    // 0x10e598: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x10e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10e59c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E59Cu;
    {
        const bool branch_taken_0x10e59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e59c) {
            ctx->pc = 0x10E5B4u;
            goto label_10e5b4;
        }
    }
    ctx->pc = 0x10E5A4u;
    // 0x10e5a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e5a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10e5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10e5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ACu;
        // 0x10e5b0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E5B4u;
label_10e5b4:
    // 0x10e5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5B4u;
        // 0x10e5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E5BCu;
    // 0x10e5bc: 0x0  nop
    ctx->pc = 0x10e5bcu;
    // NOP
    ctx->pc = 0x10e5c0u;
}
