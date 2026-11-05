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

// Function: sub_003DEDB8
// Address: 0x3dedb8 - 0x3dedd8
void sub_003DEDB8_0x3dedb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEDB8_0x3dedb8");
#endif

    switch (ctx->pc) {
        case 0x3dedc8u: goto label_3dedc8;
        default: break;
    }

    ctx->pc = 0x3dedb8u;

    // 0x3dedb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dedb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dedbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dedbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dedc0: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DEDC0u;
    SET_GPR_U32(ctx, 31, 0x3DEDC8u);
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DEDC0u, 0x3DEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEDC8u;
label_3dedc8:
    // 0x3dedc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dedc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dedcc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDCCu;
        // 0x3dedd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEDD4u;
    // 0x3dedd4: 0x0  nop
    ctx->pc = 0x3dedd4u;
    // NOP
    ctx->pc = 0x3dedd8u;
}
