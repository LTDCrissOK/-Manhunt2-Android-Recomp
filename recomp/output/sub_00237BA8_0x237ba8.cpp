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

// Function: sub_00237BA8
// Address: 0x237ba8 - 0x237bc8
void sub_00237BA8_0x237ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237BA8_0x237ba8");
#endif

    switch (ctx->pc) {
        case 0x237bacu: goto label_237bac;
        case 0x237bb0u: goto label_237bb0;
        default: break;
    }

    ctx->pc = 0x237ba8u;

    // 0x237ba8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237bac:
    // 0x237bac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x237bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_237bb0:
    // 0x237bb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237bb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x237bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237bb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237bbc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x237bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x237BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BC0u;
        // 0x237bc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237BC8u;
}
