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

// Function: sub_002D3420
// Address: 0x2d3420 - 0x2d3450
void sub_002D3420_0x2d3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3420_0x2d3420");
#endif

    switch (ctx->pc) {
        case 0x2d343cu: goto label_2d343c;
        default: break;
    }

    ctx->pc = 0x2d3420u;

    // 0x2d3420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3428: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d3428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d342c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D342Cu;
    {
        const bool branch_taken_0x2d342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D342Cu;
        // 0x2d3430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d342c) {
            ctx->pc = 0x2D3444u;
            goto label_2d3444;
        }
    }
    ctx->pc = 0x2D3434u;
    // 0x2d3434: 0xc0e5656  jal         func_395958
    ctx->pc = 0x2D3434u;
    SET_GPR_U32(ctx, 31, 0x2D343Cu);
    ctx->pc = 0x395958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395958u, 0x2D3434u, 0x2D343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D343Cu;
label_2d343c:
    // 0x2d343c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D343Cu;
    {
        const bool branch_taken_0x2d343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D343Cu;
        // 0x2d3440: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d343c) {
            ctx->pc = 0x2D3448u;
            goto label_2d3448;
        }
    }
    ctx->pc = 0x2D3444u;
label_2d3444:
    // 0x2d3444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3448:
    // 0x2d3448: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3448u;
        // 0x2d344c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3450u;
}
