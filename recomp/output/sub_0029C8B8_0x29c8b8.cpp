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

// Function: sub_0029C8B8
// Address: 0x29c8b8 - 0x29c8f0
void sub_0029C8B8_0x29c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C8B8_0x29c8b8");
#endif

    switch (ctx->pc) {
        case 0x29c8d8u: goto label_29c8d8;
        case 0x29c8e0u: goto label_29c8e0;
        default: break;
    }

    ctx->pc = 0x29c8b8u;

    // 0x29c8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29c8cc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x29c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x29c8d0: 0xc0acb96  jal         func_2B2E58
    ctx->pc = 0x29C8D0u;
    SET_GPR_U32(ctx, 31, 0x29C8D8u);
    ctx->pc = 0x29C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8D0u;
    // 0x29c8d4: 0x24842508  addiu       $a0, $a0, 0x2508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E58u, 0x29C8D0u, 0x29C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8D8u;
label_29c8d8:
    // 0x29c8d8: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x29C8D8u;
    SET_GPR_U32(ctx, 31, 0x29C8E0u);
    ctx->pc = 0x29C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8D8u;
    // 0x29c8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x29C8D8u, 0x29C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8E0u;
label_29c8e0:
    // 0x29c8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c8e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8E8u;
        // 0x29c8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8F0u;
}
