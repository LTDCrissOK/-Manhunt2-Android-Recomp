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

// Function: sub_00344FB0
// Address: 0x344fb0 - 0x344fd0
void sub_00344FB0_0x344fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344FB0_0x344fb0");
#endif

    switch (ctx->pc) {
        case 0x344fc4u: goto label_344fc4;
        default: break;
    }

    ctx->pc = 0x344fb0u;

    // 0x344fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344fb8: 0xc48d001c  lwc1        $f13, 0x1C($a0)
    ctx->pc = 0x344fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344fbc: 0xc0d1656  jal         func_345958
    ctx->pc = 0x344FBCu;
    SET_GPR_U32(ctx, 31, 0x344FC4u);
    ctx->pc = 0x344FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344FBCu;
    // 0x344fc0: 0xc48c0018  lwc1        $f12, 0x18($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x345958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345958u, 0x344FBCu, 0x344FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FC4u;
label_344fc4:
    // 0x344fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x344FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FC8u;
        // 0x344fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344FD0u;
}
