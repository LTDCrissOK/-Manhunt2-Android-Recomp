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

// Function: sub_003DCD90
// Address: 0x3dcd90 - 0x3dcda8
void sub_003DCD90_0x3dcd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCD90_0x3dcd90");
#endif

    ctx->pc = 0x3dcd90u;

    // 0x3dcd90: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3dcd90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3dcd94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3dcd94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3dcd98: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3dcd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3dcd9c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3dcd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3dcda0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCDA0u;
        // 0x3dcda4: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCDA8u;
}
