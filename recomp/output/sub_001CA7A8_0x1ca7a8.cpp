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

// Function: sub_001CA7A8
// Address: 0x1ca7a8 - 0x1ca7e8
void sub_001CA7A8_0x1ca7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA7A8_0x1ca7a8");
#endif

    switch (ctx->pc) {
        case 0x1ca7c0u: goto label_1ca7c0;
        case 0x1ca7c8u: goto label_1ca7c8;
        case 0x1ca7d0u: goto label_1ca7d0;
        default: break;
    }

    ctx->pc = 0x1ca7a8u;

    // 0x1ca7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca7b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CA7B8u;
    SET_GPR_U32(ctx, 31, 0x1CA7C0u);
    ctx->pc = 0x1CA7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7B8u;
    // 0x1ca7bc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CA7B8u, 0x1CA7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7C0u;
label_1ca7c0:
    // 0x1ca7c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CA7C0u;
    SET_GPR_U32(ctx, 31, 0x1CA7C8u);
    ctx->pc = 0x1CA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7C0u;
    // 0x1ca7c4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CA7C0u, 0x1CA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7C8u;
label_1ca7c8:
    // 0x1ca7c8: 0xc072a0e  jal         func_1CA838
    ctx->pc = 0x1CA7C8u;
    SET_GPR_U32(ctx, 31, 0x1CA7D0u);
    ctx->pc = 0x1CA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7C8u;
    // 0x1ca7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA838u, 0x1CA7C8u, 0x1CA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7D0u;
label_1ca7d0:
    // 0x1ca7d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ca7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7DCu;
        // 0x1ca7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA7E4u;
    // 0x1ca7e4: 0x0  nop
    ctx->pc = 0x1ca7e4u;
    // NOP
    ctx->pc = 0x1ca7e8u;
}
