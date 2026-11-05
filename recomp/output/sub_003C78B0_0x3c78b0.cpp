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

// Function: sub_003C78B0
// Address: 0x3c78b0 - 0x3c78e8
void sub_003C78B0_0x3c78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C78B0_0x3c78b0");
#endif

    switch (ctx->pc) {
        case 0x3c78c8u: goto label_3c78c8;
        default: break;
    }

    ctx->pc = 0x3c78b0u;

    // 0x3c78b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c78b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c78b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c78b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c78bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c78c0: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C78C0u;
    SET_GPR_U32(ctx, 31, 0x3C78C8u);
    ctx->pc = 0x3C78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78C0u;
    // 0x3c78c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C78C0u, 0x3C78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78C8u;
label_3c78c8:
    // 0x3c78c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c78c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c78d0: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x3c78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x3c78d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c78d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c78d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c78d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c78dc: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x3c78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x3c78e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C78E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C78E0u;
        // 0x3c78e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C78E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C78E8u;
}
