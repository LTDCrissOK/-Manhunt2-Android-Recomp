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

// Function: sub_001111D0
// Address: 0x1111d0 - 0x111210
void sub_001111D0_0x1111d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001111D0_0x1111d0");
#endif

    ctx->pc = 0x1111d0u;

    // 0x1111d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1111d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1111d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1111d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1111d8: 0xc4800230  lwc1        $f0, 0x230($a0)
    ctx->pc = 0x1111d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1111dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1111dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1111e0: 0x0  nop
    ctx->pc = 0x1111e0u;
    // NOP
    // 0x1111e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1111E4u;
    {
        const bool branch_taken_0x1111e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1111e4) {
            ctx->pc = 0x111208u;
            goto label_111208;
        }
    }
    ctx->pc = 0x1111ECu;
    // 0x1111ec: 0xc480022c  lwc1        $f0, 0x22C($a0)
    ctx->pc = 0x1111ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1111f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1111f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1111f4: 0x0  nop
    ctx->pc = 0x1111f4u;
    // NOP
    // 0x1111f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1111F8u;
    {
        const bool branch_taken_0x1111f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1111f8) {
            ctx->pc = 0x111208u;
            goto label_111208;
        }
    }
    ctx->pc = 0x111200u;
    // 0x111200: 0x3e00008  jr          $ra
    ctx->pc = 0x111200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111200u;
        // 0x111204: 0xc4800228  lwc1        $f0, 0x228($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111208u;
label_111208:
    // 0x111208: 0x3e00008  jr          $ra
    ctx->pc = 0x111208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111210u;
}
