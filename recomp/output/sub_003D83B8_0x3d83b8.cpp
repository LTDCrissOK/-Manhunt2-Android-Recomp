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

// Function: sub_003D83B8
// Address: 0x3d83b8 - 0x3d83d8
void sub_003D83B8_0x3d83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D83B8_0x3d83b8");
#endif

    switch (ctx->pc) {
        case 0x3d83c8u: goto label_3d83c8;
        default: break;
    }

    ctx->pc = 0x3d83b8u;

    // 0x3d83b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d83b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d83bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d83bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d83c0: 0xc0f5c8a  jal         func_3D7228
    ctx->pc = 0x3D83C0u;
    SET_GPR_U32(ctx, 31, 0x3D83C8u);
    ctx->pc = 0x3D7228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7228u, 0x3D83C0u, 0x3D83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83C8u;
label_3d83c8:
    // 0x3d83c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d83c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d83cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D83CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83CCu;
        // 0x3d83d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D83CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D83D4u;
    // 0x3d83d4: 0x0  nop
    ctx->pc = 0x3d83d4u;
    // NOP
    ctx->pc = 0x3d83d8u;
}
