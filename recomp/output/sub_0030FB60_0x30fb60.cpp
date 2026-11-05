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

// Function: sub_0030FB60
// Address: 0x30fb60 - 0x30fce0
void sub_0030FB60_0x30fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FB60_0x30fb60");
#endif

    ctx->pc = 0x30fb60u;

    // 0x30fb60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30fb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fb64: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x30fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fb68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30fb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fb6c: 0x0  nop
    ctx->pc = 0x30fb6cu;
    // NOP
    // 0x30fb70: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x30FB70u;
    {
        const bool branch_taken_0x30fb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fb70) {
            ctx->pc = 0x30FCD8u;
            goto label_30fcd8;
        }
    }
    ctx->pc = 0x30FB78u;
    // 0x30fb78: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x30fb7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30fb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30fb80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30fb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30fb84: 0x0  nop
    ctx->pc = 0x30fb84u;
    // NOP
    // 0x30fb88: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x30fb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fb8c: 0x0  nop
    ctx->pc = 0x30fb8cu;
    // NOP
    // 0x30fb90: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x30FB90u;
    {
        const bool branch_taken_0x30fb90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fb90) {
            ctx->pc = 0x30FCD8u;
            goto label_30fcd8;
        }
    }
    ctx->pc = 0x30FB98u;
    // 0x30fb98: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x30fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fb9c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x30fb9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fba0: 0x0  nop
    ctx->pc = 0x30fba0u;
    // NOP
    // 0x30fba4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x30FBA4u;
    {
        const bool branch_taken_0x30fba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBA4u;
        // 0x30fba8: 0xe4a30004  swc1        $f3, 0x4($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fba4) {
            ctx->pc = 0x30FC34u;
            goto label_30fc34;
        }
    }
    ctx->pc = 0x30FBACu;
    // 0x30fbac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fbb0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x30fbb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fbb4: 0x0  nop
    ctx->pc = 0x30fbb4u;
    // NOP
    // 0x30fbb8: 0x0  nop
    ctx->pc = 0x30fbb8u;
    // NOP
    // 0x30fbbc: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x30fbbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30fbc0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30FBC0u;
    {
        const bool branch_taken_0x30fbc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBC0u;
        // 0x30fbc4: 0x46031802  mul.s       $f0, $f3, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbc0) {
            ctx->pc = 0x30FBF8u;
            goto label_30fbf8;
        }
    }
    ctx->pc = 0x30FBC8u;
    // 0x30fbc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30fbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fbd0: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x30fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x30fbd4: 0x342151ea  ori         $at, $at, 0x51EA
    ctx->pc = 0x30fbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20970);
    // 0x30fbd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30fbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fbdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30fbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30fbe0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30fbe0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30fbe4: 0x0  nop
    ctx->pc = 0x30fbe4u;
    // NOP
    // 0x30fbe8: 0x0  nop
    ctx->pc = 0x30fbe8u;
    // NOP
    // 0x30fbec: 0x46010044  c1          0x10044
    ctx->pc = 0x30fbecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x30fbf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30FBF0u;
    {
        const bool branch_taken_0x30fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBF0u;
        // 0x30fbf4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbf0) {
            ctx->pc = 0x30FC20u;
            goto label_30fc20;
        }
    }
    ctx->pc = 0x30FBF8u;
label_30fbf8:
    // 0x30fbf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30fbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fc00: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x30fc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x30fc04: 0x342151ea  ori         $at, $at, 0x51EA
    ctx->pc = 0x30fc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20970);
    // 0x30fc08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30fc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fc0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30fc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30fc10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30fc10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30fc14: 0x0  nop
    ctx->pc = 0x30fc14u;
    // NOP
    // 0x30fc18: 0x0  nop
    ctx->pc = 0x30fc18u;
    // NOP
    // 0x30fc1c: 0x46010044  c1          0x10044
    ctx->pc = 0x30fc1cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_30fc20:
    // 0x30fc20: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x30fc20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30fc24: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fc28: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x30fc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30fc2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30FC2Cu;
    {
        const bool branch_taken_0x30fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC2Cu;
        // 0x30fc30: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc2c) {
            ctx->pc = 0x30FCB8u;
            goto label_30fcb8;
        }
    }
    ctx->pc = 0x30FC34u;
label_30fc34:
    // 0x30fc34: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fc38: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30fc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fc3c: 0x0  nop
    ctx->pc = 0x30fc3cu;
    // NOP
    // 0x30fc40: 0x0  nop
    ctx->pc = 0x30fc40u;
    // NOP
    // 0x30fc44: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x30fc44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30fc48: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30FC48u;
    {
        const bool branch_taken_0x30fc48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC48u;
        // 0x30fc4c: 0x46031802  mul.s       $f0, $f3, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc48) {
            ctx->pc = 0x30FC80u;
            goto label_30fc80;
        }
    }
    ctx->pc = 0x30FC50u;
    // 0x30fc50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fc54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30fc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fc58: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x30fc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x30fc5c: 0x342151ea  ori         $at, $at, 0x51EA
    ctx->pc = 0x30fc5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20970);
    // 0x30fc60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30fc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fc64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30fc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30fc68: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30fc68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30fc6c: 0x0  nop
    ctx->pc = 0x30fc6cu;
    // NOP
    // 0x30fc70: 0x0  nop
    ctx->pc = 0x30fc70u;
    // NOP
    // 0x30fc74: 0x46010044  c1          0x10044
    ctx->pc = 0x30fc74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x30fc78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30FC78u;
    {
        const bool branch_taken_0x30fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC78u;
        // 0x30fc7c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc78) {
            ctx->pc = 0x30FCA8u;
            goto label_30fca8;
        }
    }
    ctx->pc = 0x30FC80u;
label_30fc80:
    // 0x30fc80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30fc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30fc84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30fc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fc88: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x30fc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x30fc8c: 0x342151ea  ori         $at, $at, 0x51EA
    ctx->pc = 0x30fc8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20970);
    // 0x30fc90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30fc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30fc94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30fc94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30fc98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30fc98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30fc9c: 0x0  nop
    ctx->pc = 0x30fc9cu;
    // NOP
    // 0x30fca0: 0x0  nop
    ctx->pc = 0x30fca0u;
    // NOP
    // 0x30fca4: 0x46010044  c1          0x10044
    ctx->pc = 0x30fca4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_30fca8:
    // 0x30fca8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x30fca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30fcac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fcb0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x30fcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30fcb4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x30fcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_30fcb8:
    // 0x30fcb8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x30fcb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30fcbc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x30fcbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30fcc0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x30fcc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30fcc4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x30fcc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30fcc8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x30fcc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x30fccc: 0x4a0003bf  vwaitq
    ctx->pc = 0x30fcccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x30fcd0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x30fcd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30fcd4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x30fcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_30fcd8:
    // 0x30fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x30FCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FCE0u;
}
