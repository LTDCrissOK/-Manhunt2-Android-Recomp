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

// Function: sub_00190780
// Address: 0x190780 - 0x1907b0
void sub_00190780_0x190780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190780_0x190780");
#endif

    switch (ctx->pc) {
        case 0x1907a0u: goto label_1907a0;
        default: break;
    }

    ctx->pc = 0x190780u;

    // 0x190780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190788: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x190788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x19078c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x19078cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190790: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x190790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190794: 0x7c800050  sq          $zero, 0x50($a0)
    ctx->pc = 0x190794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 0));
    // 0x190798: 0xc064202  jal         func_190808
    ctx->pc = 0x190798u;
    SET_GPR_U32(ctx, 31, 0x1907A0u);
    ctx->pc = 0x190808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190808u, 0x190798u, 0x1907A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907A0u;
label_1907a0:
    // 0x1907a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1907a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1907a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1907A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1907A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907A4u;
        // 0x1907a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1907ACu;
    // 0x1907ac: 0x0  nop
    ctx->pc = 0x1907acu;
    // NOP
    ctx->pc = 0x1907b0u;
}
