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

// Function: sub_002B61B0
// Address: 0x2b61b0 - 0x2b61e8
void sub_002B61B0_0x2b61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B61B0_0x2b61b0");
#endif

    switch (ctx->pc) {
        case 0x2b61c4u: goto label_2b61c4;
        default: break;
    }

    ctx->pc = 0x2b61b0u;

    // 0x2b61b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b61b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b61b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b61b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b61bc: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B61BCu;
    SET_GPR_U32(ctx, 31, 0x2B61C4u);
    ctx->pc = 0x2B61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61BCu;
    // 0x2b61c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B61BCu, 0x2B61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61C4u;
label_2b61c4:
    // 0x2b61c4: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x2b61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b61c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b61c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61cc: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x2b61ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b61d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b61d4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2b61d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b61d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b61dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B61DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61DCu;
        // 0x2b61e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B61DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B61E4u;
    // 0x2b61e4: 0x0  nop
    ctx->pc = 0x2b61e4u;
    // NOP
    ctx->pc = 0x2b61e8u;
}
