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

// Function: sub_001D5D68
// Address: 0x1d5d68 - 0x1d5db0
void sub_001D5D68_0x1d5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D68_0x1d5d68");
#endif

    ctx->pc = 0x1d5d68u;

    // 0x1d5d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5d6c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1d5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5d70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d5d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5d74: 0x0  nop
    ctx->pc = 0x1d5d74u;
    // NOP
    // 0x1d5d78: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5D78u;
    {
        const bool branch_taken_0x1d5d78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D78u;
        // 0x1d5d7c: 0xe4ad0010  swc1        $f13, 0x10($a1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d78) {
            ctx->pc = 0x1D5DA0u;
            goto label_1d5da0;
        }
    }
    ctx->pc = 0x1D5D80u;
    // 0x1d5d80: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d5d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5d88: 0x0  nop
    ctx->pc = 0x1d5d88u;
    // NOP
    // 0x1d5d8c: 0x0  nop
    ctx->pc = 0x1d5d8cu;
    // NOP
    // 0x1d5d90: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1d5d90u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1d5d94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d5d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d5d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D98u;
        // 0x1d5d9c: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DA0u;
label_1d5da0:
    // 0x1d5da0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d5da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DA8u;
        // 0x1d5dac: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DB0u;
}
