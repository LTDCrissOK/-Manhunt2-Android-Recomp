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

// Function: sub_002830C0
// Address: 0x2830c0 - 0x2830e8
void sub_002830C0_0x2830c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002830C0_0x2830c0");
#endif

    ctx->pc = 0x2830c0u;

    // 0x2830c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2830c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2830c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2830c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2830c8: 0x2463b2e0  addiu       $v1, $v1, -0x4D20
    ctx->pc = 0x2830c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947552));
    // 0x2830cc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2830ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2830d0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2830d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2830d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2830d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2830d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2830d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2830dc: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x2830dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2830e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2830E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830E0u;
        // 0x2830e4: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830E8u;
}
