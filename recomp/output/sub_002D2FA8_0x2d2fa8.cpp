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

// Function: sub_002D2FA8
// Address: 0x2d2fa8 - 0x2d2fd0
void sub_002D2FA8_0x2d2fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2FA8_0x2d2fa8");
#endif

    switch (ctx->pc) {
        case 0x2d2fbcu: goto label_2d2fbc;
        default: break;
    }

    ctx->pc = 0x2d2fa8u;

    // 0x2d2fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d2fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d2facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d2fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d2fb4: 0xc0b4bfe  jal         func_2D2FF8
    ctx->pc = 0x2D2FB4u;
    SET_GPR_U32(ctx, 31, 0x2D2FBCu);
    ctx->pc = 0x2D2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2FB4u;
    // 0x2d2fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2FF8u, 0x2D2FB4u, 0x2D2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FBCu;
label_2d2fbc:
    // 0x2d2fbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d2fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d2fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FC8u;
        // 0x2d2fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2FD0u;
}
