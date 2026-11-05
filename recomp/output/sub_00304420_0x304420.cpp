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

// Function: sub_00304420
// Address: 0x304420 - 0x3044c8
void sub_00304420_0x304420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304420_0x304420");
#endif

    ctx->pc = 0x304420u;

    // 0x304420: 0xc4801160  lwc1        $f0, 0x1160($a0)
    ctx->pc = 0x304420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304424: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304428: 0xc4422b30  lwc1        $f2, 0x2B30($v0)
    ctx->pc = 0x304428u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30442c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x30442cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x304430: 0xc4811158  lwc1        $f1, 0x1158($a0)
    ctx->pc = 0x304430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304434: 0xc4801164  lwc1        $f0, 0x1164($a0)
    ctx->pc = 0x304434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304438: 0xc483115c  lwc1        $f3, 0x115C($a0)
    ctx->pc = 0x304438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30443c: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x30443cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x304440: 0xc4841168  lwc1        $f4, 0x1168($a0)
    ctx->pc = 0x304440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x304444: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x304444u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x304448: 0xc485116c  lwc1        $f5, 0x116C($a0)
    ctx->pc = 0x304448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30444c: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x30444cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x304450: 0xe4811158  swc1        $f1, 0x1158($a0)
    ctx->pc = 0x304450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4440), bits); }
    // 0x304454: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x304454u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304458: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x304458u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30445c: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x30445cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x304460: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x304460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304464: 0x0  nop
    ctx->pc = 0x304464u;
    // NOP
    // 0x304468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x304468u;
    {
        const bool branch_taken_0x304468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304468u;
        // 0x30446c: 0xe483115c  swc1        $f3, 0x115C($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304468) {
            ctx->pc = 0x304478u;
            goto label_304478;
        }
    }
    ctx->pc = 0x304470u;
    // 0x304470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x304470u;
    {
        const bool branch_taken_0x304470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304470u;
        // 0x304474: 0xe484115c  swc1        $f4, 0x115C($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304470) {
            ctx->pc = 0x304488u;
            goto label_304488;
        }
    }
    ctx->pc = 0x304478u;
label_304478:
    // 0x304478: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x304478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30447c: 0x0  nop
    ctx->pc = 0x30447cu;
    // NOP
    // 0x304480: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x304480u;
    {
        const bool branch_taken_0x304480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304480) {
            ctx->pc = 0x304484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304480u;
            // 0x304484: 0xe485115c  swc1        $f5, 0x115C($a0) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4444), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x304488u;
            goto label_304488;
        }
    }
    ctx->pc = 0x304488u;
label_304488:
    // 0x304488: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x304488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x30448c: 0xc4821158  lwc1        $f2, 0x1158($a0)
    ctx->pc = 0x30448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304490: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x304490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x304494: 0xc440044c  lwc1        $f0, 0x44C($v0)
    ctx->pc = 0x304494u;
    { uint32_t bits = FAST_READ32(0x595CBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304498: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x304498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30449c: 0x0  nop
    ctx->pc = 0x30449cu;
    // NOP
    // 0x3044a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3044A0u;
    {
        const bool branch_taken_0x3044a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044A0u;
        // 0x3044a4: 0xc4410450  lwc1        $f1, 0x450($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044a0) {
            ctx->pc = 0x3044B0u;
            goto label_3044b0;
        }
    }
    ctx->pc = 0x3044A8u;
    // 0x3044a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3044A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3044ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044A8u;
        // 0x3044ac: 0xe4801158  swc1        $f0, 0x1158($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4440), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3044A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3044B0u;
label_3044b0:
    // 0x3044b0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3044b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3044b4: 0x0  nop
    ctx->pc = 0x3044b4u;
    // NOP
    // 0x3044b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3044B8u;
    {
        const bool branch_taken_0x3044b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3044b8) {
            ctx->pc = 0x3044BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3044B8u;
            // 0x3044bc: 0xe4811158  swc1        $f1, 0x1158($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4440), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3044C0u;
            goto label_3044c0;
        }
    }
    ctx->pc = 0x3044C0u;
label_3044c0:
    // 0x3044c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3044C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3044C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3044C8u;
}
