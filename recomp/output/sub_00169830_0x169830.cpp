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

// Function: sub_00169830
// Address: 0x169830 - 0x169858
void sub_00169830_0x169830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169830_0x169830");
#endif

    switch (ctx->pc) {
        case 0x169848u: goto label_169848;
        default: break;
    }

    ctx->pc = 0x169830u;

    // 0x169830: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x169830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169838: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x169838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16983c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169840: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x169840u;
    SET_GPR_U32(ctx, 31, 0x169848u);
    ctx->pc = 0x169844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169840u;
    // 0x169844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x169840u, 0x169848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169848u;
label_169848:
    // 0x169848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16984c: 0x3e00008  jr          $ra
    ctx->pc = 0x16984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16984Cu;
        // 0x169850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169854u;
    // 0x169854: 0x0  nop
    ctx->pc = 0x169854u;
    // NOP
    ctx->pc = 0x169858u;
}
