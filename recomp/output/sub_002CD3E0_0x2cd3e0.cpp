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

// Function: sub_002CD3E0
// Address: 0x2cd3e0 - 0x2cd410
void sub_002CD3E0_0x2cd3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD3E0_0x2cd3e0");
#endif

    switch (ctx->pc) {
        case 0x2cd3f0u: goto label_2cd3f0;
        case 0x2cd3fcu: goto label_2cd3fc;
        case 0x2cd404u: goto label_2cd404;
        default: break;
    }

    ctx->pc = 0x2cd3e0u;

    // 0x2cd3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd3e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cd3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd3e8: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x2CD3E8u;
    SET_GPR_U32(ctx, 31, 0x2CD3F0u);
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x2CD3E8u, 0x2CD3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3F0u;
label_2cd3f0:
    // 0x2cd3f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cd3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3f4: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x2CD3F4u;
    SET_GPR_U32(ctx, 31, 0x2CD3FCu);
    ctx->pc = 0x2CD3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3F4u;
    // 0x2cd3f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x2CD3F4u, 0x2CD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3FCu;
label_2cd3fc:
    // 0x2cd3fc: 0xc0f2614  jal         func_3C9850
    ctx->pc = 0x2CD3FCu;
    SET_GPR_U32(ctx, 31, 0x2CD404u);
    ctx->pc = 0x2CD400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3FCu;
    // 0x2cd400: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9850u, 0x2CD3FCu, 0x2CD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD404u;
label_2cd404:
    // 0x2cd404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cd404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd408: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD408u;
        // 0x2cd40c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD410u;
}
