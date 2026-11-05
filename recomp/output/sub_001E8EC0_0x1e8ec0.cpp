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

// Function: sub_001E8EC0
// Address: 0x1e8ec0 - 0x1e8fb8
void sub_001E8EC0_0x1e8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8EC0_0x1e8ec0");
#endif

    ctx->pc = 0x1e8ec0u;

    // 0x1e8ec0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1e8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8ec4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8ec8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e8ecc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8ed0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e8ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e8ed4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1e8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1e8ed8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e8ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8edc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e8ee0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8ee4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e8ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e8ee8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e8ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8eec: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e8eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e8ef0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e8ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8ef4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e8ef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8ef8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e8ef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8efc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e8efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f00: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x1e8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e8f04: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x1e8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e8f08: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x1e8f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e8f0c: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x1e8f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e8f10: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x1e8f10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8f14: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x1e8f14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8f18: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x1e8f18u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e8f1c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e8f1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e8f20: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8f24: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8f28: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e8f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8f2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e8f2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e8f30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e8f30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e8f34: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e8f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e8f38: 0x46010044  c1          0x10044
    ctx->pc = 0x1e8f38u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e8f3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e8f40: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e8f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8f44: 0xc4642b30  lwc1        $f4, 0x2B30($v1)
    ctx->pc = 0x1e8f44u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8f48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e8f4c: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x1e8f4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x1e8f50: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e8f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8f54: 0x0  nop
    ctx->pc = 0x1e8f54u;
    // NOP
    // 0x1e8f58: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8F58u;
    {
        const bool branch_taken_0x1e8f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F58u;
        // 0x1e8f5c: 0xe44191f8  swc1        $f1, -0x6E08($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f58) {
            ctx->pc = 0x1E8FA4u;
            goto label_1e8fa4;
        }
    }
    ctx->pc = 0x1E8F60u;
    // 0x1e8f60: 0x0  nop
    ctx->pc = 0x1e8f60u;
    // NOP
    // 0x1e8f64: 0x0  nop
    ctx->pc = 0x1e8f64u;
    // NOP
    // 0x1e8f68: 0x460428c3  div.s       $f3, $f5, $f4
    ctx->pc = 0x1e8f68u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x1e8f6c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1e8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1e8f70: 0x0  nop
    ctx->pc = 0x1e8f70u;
    // NOP
    // 0x1e8f74: 0x0  nop
    ctx->pc = 0x1e8f74u;
    // NOP
    // 0x1e8f78: 0x46043003  div.s       $f0, $f6, $f4
    ctx->pc = 0x1e8f78u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[4]); }
    // 0x1e8f7c: 0x46043843  div.s       $f1, $f7, $f4
    ctx->pc = 0x1e8f7cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[7], ctx->f[4]); }
    // 0x1e8f80: 0x46044083  div.s       $f2, $f8, $f4
    ctx->pc = 0x1e8f80u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[8], ctx->f[4]); }
    // 0x1e8f84: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1e8f84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e8f88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e8f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e8f8c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1e8f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e8f90: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1e8f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e8f94: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e8f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8f98: 0xf84102f0  sqc2        $vf1, 0x2F0($v0)
    ctx->pc = 0x1e8f98u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4902F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4902F0u, _value); } while (0);
    // 0x1e8f9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8F9Cu;
    {
        const bool branch_taken_0x1e8f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F9Cu;
        // 0x1e8fa0: 0x244202f0  addiu       $v0, $v0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f9c) {
            ctx->pc = 0x1E8FB0u;
            goto label_1e8fb0;
        }
    }
    ctx->pc = 0x1E8FA4u;
label_1e8fa4:
    // 0x1e8fa4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1e8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1e8fa8: 0x7c4002f0  sq          $zero, 0x2F0($v0)
    ctx->pc = 0x1e8fa8u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4902F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4902F0u, _value); } while (0);
    // 0x1e8fac: 0x244202f0  addiu       $v0, $v0, 0x2F0
    ctx->pc = 0x1e8facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
label_1e8fb0:
    // 0x1e8fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FB0u;
        // 0x1e8fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8FB8u;
}
