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

// Function: sub_003E0AA8
// Address: 0x3e0aa8 - 0x3e0ac8
void sub_003E0AA8_0x3e0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0AA8_0x3e0aa8");
#endif

    switch (ctx->pc) {
        case 0x3e0abcu: goto label_3e0abc;
        default: break;
    }

    ctx->pc = 0x3e0aa8u;

    // 0x3e0aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e0aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e0aac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3e0aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e0ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e0ab4: 0xc0f8236  jal         func_3E08D8
    ctx->pc = 0x3E0AB4u;
    SET_GPR_U32(ctx, 31, 0x3E0ABCu);
    ctx->pc = 0x3E0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0AB4u;
    // 0x3e0ab8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E08D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E08D8u, 0x3E0AB4u, 0x3E0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0ABCu;
label_3e0abc:
    // 0x3e0abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AC0u;
        // 0x3e0ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0AC8u;
}
