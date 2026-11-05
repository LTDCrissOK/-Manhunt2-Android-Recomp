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

// Function: sub_0018BD20
// Address: 0x18bd20 - 0x18bf08
void sub_0018BD20_0x18bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BD20_0x18bd20");
#endif

    switch (ctx->pc) {
        case 0x18bd6cu: goto label_18bd6c;
        case 0x18bde8u: goto label_18bde8;
        case 0x18be5cu: goto label_18be5c;
        default: break;
    }

    ctx->pc = 0x18bd20u;

    // 0x18bd20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18bd24: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x18bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x18bd28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x18bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x18bd2c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x18bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x18bd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18bd38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18bd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd3c: 0xc441405c  lwc1        $f1, 0x405C($v0)
    ctx->pc = 0x18bd3cu;
    { uint32_t bits = FAST_READ32(0x46405Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bd40: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x18bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18bd44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bd48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd4c: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x18bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x18bd50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18bd54: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x18bd54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x18bd58: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x18bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x18bd5c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x18bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bd60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18bd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18bd64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18BD64u;
    SET_GPR_U32(ctx, 31, 0x18BD6Cu);
    ctx->pc = 0x18BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD64u;
    // 0x18bd68: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18BD64u, 0x18BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD6Cu;
label_18bd6c:
    // 0x18bd6c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x18bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18bd74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18bd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bd78: 0x0  nop
    ctx->pc = 0x18bd78u;
    // NOP
    // 0x18bd7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18bd7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bd80: 0x0  nop
    ctx->pc = 0x18bd80u;
    // NOP
    // 0x18bd84: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x18BD84u;
    {
        const bool branch_taken_0x18bd84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18bd84) {
            ctx->pc = 0x18BD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BD84u;
            // 0x18bd88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BDC8u;
            goto label_18bdc8;
        }
    }
    ctx->pc = 0x18BD8Cu;
    // 0x18bd8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bd90: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x18bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x18bd94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18bd98: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18bd9c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x18bda0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18bda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bda4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18bda4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bda8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18bda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18bdac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18bdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18bdb0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x18bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bdb4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18bdb8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x18bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bdbc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bdc0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x18BDC0u;
    {
        const bool branch_taken_0x18bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDC0u;
        // 0x18bdc4: 0xc7a2002c  lwc1        $f2, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdc0) {
            ctx->pc = 0x18BEB8u;
            goto label_18beb8;
        }
    }
    ctx->pc = 0x18BDC8u;
label_18bdc8:
    // 0x18bdc8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18bdcc: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x18bdd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18bdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18bdd4: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18BDD4u;
    {
        const bool branch_taken_0x18bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDD4u;
        // 0x18bdd8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdd4) {
            ctx->pc = 0x18BE54u;
            goto label_18be54;
        }
    }
    ctx->pc = 0x18BDDCu;
    // 0x18bddc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x18bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x18bde0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x18BDE0u;
    SET_GPR_U32(ctx, 31, 0x18BDE8u);
    ctx->pc = 0x18BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BDE0u;
    // 0x18bde4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x18BDE0u, 0x18BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BDE8u;
label_18bde8:
    // 0x18bde8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bdec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18bdf0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x18bdf4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18bdf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x18bdf8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18bdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18bdfc: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x18be00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18be04: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18be08: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x18be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18be0c: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x18be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18be10: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x18be14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18be18: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x18be18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18be1c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18be20: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x18be20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x18be24: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x18be24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18be28: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x18be28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x18be2c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x18be2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18be30: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x18be30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18be34: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x18be34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18be38: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18be38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18be3c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x18be3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18be40: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18be40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18be44: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18be44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18be48: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x18be48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18be4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18BE4Cu;
    {
        const bool branch_taken_0x18be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE4Cu;
        // 0x18be50: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be4c) {
            ctx->pc = 0x18BEA8u;
            goto label_18bea8;
        }
    }
    ctx->pc = 0x18BE54u;
label_18be54:
    // 0x18be54: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x18BE54u;
    SET_GPR_U32(ctx, 31, 0x18BE5Cu);
    ctx->pc = 0x18BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE54u;
    // 0x18be58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x18BE54u, 0x18BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE5Cu;
label_18be5c:
    // 0x18be5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18be60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18be64: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x18be64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x18be68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18be6c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18be70: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x18be70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18be74: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x18be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18be78: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x18be7c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18be80: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18be84: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x18be84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18be88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x18be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18be8c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x18be8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18be90: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x18be90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18be94: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x18be94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18be98: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18be98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18be9c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18be9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18bea0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x18bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18bea4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x18bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18bea8:
    // 0x18bea8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18beac: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x18beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18beb0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x18beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18beb4: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x18beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18beb8:
    // 0x18beb8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x18beb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18bebc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18bec0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18bec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18bec4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x18bec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18bec8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18bec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18becc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18bed0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bed8: 0xc621405c  lwc1        $f1, 0x405C($s1)
    ctx->pc = 0x18bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bedc: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x18bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x18bee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18bee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18bee4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x18bee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18bee8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18bee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18beec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18beecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18bef0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x18bef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bef4: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x18bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x18bef8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x18bef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18befc: 0x3e00008  jr          $ra
    ctx->pc = 0x18BEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEFCu;
        // 0x18bf00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BF04u;
    // 0x18bf04: 0x0  nop
    ctx->pc = 0x18bf04u;
    // NOP
    ctx->pc = 0x18bf08u;
}
