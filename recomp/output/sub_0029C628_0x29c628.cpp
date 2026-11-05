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

// Function: sub_0029C628
// Address: 0x29c628 - 0x29c658
void sub_0029C628_0x29c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C628_0x29c628");
#endif

    switch (ctx->pc) {
        case 0x29c63cu: goto label_29c63c;
        case 0x29c644u: goto label_29c644;
        default: break;
    }

    ctx->pc = 0x29c628u;

    // 0x29c628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29c634: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x29C634u;
    SET_GPR_U32(ctx, 31, 0x29C63Cu);
    ctx->pc = 0x29C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C634u;
    // 0x29c638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x29C634u, 0x29C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C63Cu;
label_29c63c:
    // 0x29c63c: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x29C63Cu;
    SET_GPR_U32(ctx, 31, 0x29C644u);
    ctx->pc = 0x29C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C63Cu;
    // 0x29c640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x29C63Cu, 0x29C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C644u;
label_29c644:
    // 0x29c644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C64Cu;
        // 0x29c650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C654u;
    // 0x29c654: 0x0  nop
    ctx->pc = 0x29c654u;
    // NOP
    ctx->pc = 0x29c658u;
}
