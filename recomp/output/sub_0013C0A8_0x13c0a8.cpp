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

// Function: sub_0013C0A8
// Address: 0x13c0a8 - 0x13c0c8
void sub_0013C0A8_0x13c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C0A8_0x13c0a8");
#endif

    switch (ctx->pc) {
        case 0x13c0b8u: goto label_13c0b8;
        default: break;
    }

    ctx->pc = 0x13c0a8u;

    // 0x13c0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c0b0: 0xc04f89c  jal         func_13E270
    ctx->pc = 0x13C0B0u;
    SET_GPR_U32(ctx, 31, 0x13C0B8u);
    ctx->pc = 0x13C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0B0u;
    // 0x13c0b4: 0x8c840218  lw          $a0, 0x218($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E270u, 0x13C0B0u, 0x13C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0B8u;
label_13c0b8:
    // 0x13c0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0BCu;
        // 0x13c0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C0C4u;
    // 0x13c0c4: 0x0  nop
    ctx->pc = 0x13c0c4u;
    // NOP
    ctx->pc = 0x13c0c8u;
}
