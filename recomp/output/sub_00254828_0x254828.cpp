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

// Function: sub_00254828
// Address: 0x254828 - 0x254858
void sub_00254828_0x254828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254828_0x254828");
#endif

    switch (ctx->pc) {
        case 0x254838u: goto label_254838;
        default: break;
    }

    ctx->pc = 0x254828u;

    // 0x254828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25482c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254830: 0xc06ee70  jal         func_1BB9C0
    ctx->pc = 0x254830u;
    SET_GPR_U32(ctx, 31, 0x254838u);
    ctx->pc = 0x254834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254830u;
    // 0x254834: 0x8c840fec  lw          $a0, 0xFEC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x254830u, 0x254838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254838u;
label_254838:
    // 0x254838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25483c: 0x3e00008  jr          $ra
    ctx->pc = 0x25483Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25483Cu;
        // 0x254840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25483Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254844u;
    // 0x254844: 0x0  nop
    ctx->pc = 0x254844u;
    // NOP
    // 0x254848: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x254848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x25484c: 0x0  nop
    ctx->pc = 0x25484cu;
    // NOP
    // 0x254850: 0xe44c0050  swc1        $f12, 0x50($v0)
    ctx->pc = 0x254850u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x254854: 0x0  nop
    ctx->pc = 0x254854u;
    // NOP
    ctx->pc = 0x254858u;
}
