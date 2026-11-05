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

// Function: sub_0026E7B8
// Address: 0x26e7b8 - 0x26e820
void sub_0026E7B8_0x26e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E7B8_0x26e7b8");
#endif

    ctx->pc = 0x26e7b8u;

    // 0x26e7b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e7bc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x26e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e7c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e7c4: 0x0  nop
    ctx->pc = 0x26e7c4u;
    // NOP
    // 0x26e7c8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26E7C8u;
    {
        const bool branch_taken_0x26e7c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e7c8) {
            ctx->pc = 0x26E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E7C8u;
            // 0x26e7cc: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E7DCu;
            goto label_26e7dc;
        }
    }
    ctx->pc = 0x26E7D0u;
    // 0x26e7d0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26e7d4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x26e7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26e7d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x26e7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e7dc:
    // 0x26e7dc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x26e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e7e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e7e4: 0x0  nop
    ctx->pc = 0x26e7e4u;
    // NOP
    // 0x26e7e8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26E7E8u;
    {
        const bool branch_taken_0x26e7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e7e8) {
            ctx->pc = 0x26E7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E7E8u;
            // 0x26e7ec: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E7FCu;
            goto label_26e7fc;
        }
    }
    ctx->pc = 0x26E7F0u;
    // 0x26e7f0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x26e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x26e7f4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x26e7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x26e7f8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e7fc:
    // 0x26e7fc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x26e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e804: 0x0  nop
    ctx->pc = 0x26e804u;
    // NOP
    // 0x26e808: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26E808u;
    {
        const bool branch_taken_0x26e808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e808) {
            ctx->pc = 0x26E818u;
            goto label_26e818;
        }
    }
    ctx->pc = 0x26E810u;
    // 0x26e810: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x26e810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x26e814: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26e814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_26e818:
    // 0x26e818: 0x3e00008  jr          $ra
    ctx->pc = 0x26E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E820u;
}
