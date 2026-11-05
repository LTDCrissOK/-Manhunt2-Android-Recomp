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

// Function: sub_002DEBB8
// Address: 0x2debb8 - 0x2dee20
void sub_002DEBB8_0x2debb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEBB8_0x2debb8");
#endif

    switch (ctx->pc) {
        case 0x2dec58u: goto label_2dec58;
        case 0x2deca0u: goto label_2deca0;
        case 0x2decd0u: goto label_2decd0;
        case 0x2decd8u: goto label_2decd8;
        case 0x2ded6cu: goto label_2ded6c;
        case 0x2dedbcu: goto label_2dedbc;
        case 0x2dedccu: goto label_2dedcc;
        default: break;
    }

    ctx->pc = 0x2debb8u;

    // 0x2debb8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2debb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2debbc: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x2debbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x2debc0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2debc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2debc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2debc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2debc8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2debc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2debcc: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2debccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2debd0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2debd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2debd4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2debd8: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2DEBD8u;
    {
        const bool branch_taken_0x2debd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBD8u;
        // 0x2debdc: 0x262200c0  addiu       $v0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debd8) {
            ctx->pc = 0x2DEE00u;
            goto label_2dee00;
        }
    }
    ctx->pc = 0x2DEBE0u;
    // 0x2debe0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2debe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2debe4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2debe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2debe8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2debe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2debec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2debecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2debf0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2debf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2debf4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2debf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2debf8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2debf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2debfc: 0xc62400c0  lwc1        $f4, 0xC0($s1)
    ctx->pc = 0x2debfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dec00: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2dec00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dec04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dec04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dec08: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2dec08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dec0c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2dec0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2dec10: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2dec10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2dec14: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2dec14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2dec18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2dec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2dec1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2dec1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dec20: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2dec20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dec24: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dec24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dec28: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dec2c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2dec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dec30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec34: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2dec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dec38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dec38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dec40: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2dec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dec44: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2dec44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dec48: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2dec48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dec4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2dec4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dec50: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2DEC50u;
    SET_GPR_U32(ctx, 31, 0x2DEC58u);
    ctx->pc = 0x2DEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC50u;
    // 0x2dec54: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2DEC50u, 0x2DEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC58u;
label_2dec58:
    // 0x2dec58: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x2dec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2dec5c: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x2dec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2dec60: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dec60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dec64: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dec64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dec68: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dec68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dec6c: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x2dec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dec70: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2dec74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEC74u;
    {
        const bool branch_taken_0x2dec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC74u;
        // 0x2dec78: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec74) {
            ctx->pc = 0x2DEC88u;
            goto label_2dec88;
        }
    }
    ctx->pc = 0x2DEC7Cu;
    // 0x2dec7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2dec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2dec80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEC80u;
    {
        const bool branch_taken_0x2dec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC80u;
        // 0x2dec84: 0xc4542b30  lwc1        $f20, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec80) {
            ctx->pc = 0x2DEC94u;
            goto label_2dec94;
        }
    }
    ctx->pc = 0x2DEC88u;
label_2dec88:
    // 0x2dec88: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2dec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2dec8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dec8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dec90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dec90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dec94:
    // 0x2dec94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dec98: 0xc0b72da  jal         func_2DCB68
    ctx->pc = 0x2DEC98u;
    SET_GPR_U32(ctx, 31, 0x2DECA0u);
    ctx->pc = 0x2DEC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEC98u;
    // 0x2dec9c: 0x263000a0  addiu       $s0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB68u, 0x2DEC98u, 0x2DECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECA0u;
label_2deca0:
    // 0x2deca0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2deca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2deca4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2deca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2deca8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2deca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2decac: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2decacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2decb0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2decb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2decb4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2decb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2decb8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2decb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2decbc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2decbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2decc0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2decc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2decc4: 0xfa2500a0  sqc2        $vf5, 0xA0($s1)
    ctx->pc = 0x2decc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2decc8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DECC8u;
    SET_GPR_U32(ctx, 31, 0x2DECD0u);
    ctx->pc = 0x2DECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECC8u;
    // 0x2deccc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DECC8u, 0x2DECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECD0u;
label_2decd0:
    // 0x2decd0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DECD0u;
    SET_GPR_U32(ctx, 31, 0x2DECD8u);
    ctx->pc = 0x2DECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DECD0u;
    // 0x2decd4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DECD0u, 0x2DECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECD8u;
label_2decd8:
    // 0x2decd8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2decd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2decdc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dece0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2dece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dece4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dece4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dece8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2dece8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2decec: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x2dececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2decf0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2decf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2decf4: 0xc62200a0  lwc1        $f2, 0xA0($s1)
    ctx->pc = 0x2decf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2decf8: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x2decf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x2decfc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2decfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2ded00: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2ded00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ded04: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2ded04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2ded08: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2ded08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ded0c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ded0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ded10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ded10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2ded14: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2ded14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ded18: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2ded18u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x2ded1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ded1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ded20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ded20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ded24: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2ded24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ded28: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2ded28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ded2c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2ded2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ded30: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2ded30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ded34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ded34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded38: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ded38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ded3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ded3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ded40: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2ded40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2ded44: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2ded44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded48: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2ded48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2ded4c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2ded4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ded50: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2ded50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ded54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ded58: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ded58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ded5c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2ded5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2ded60: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2ded60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2ded64: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2DED64u;
    SET_GPR_U32(ctx, 31, 0x2DED6Cu);
    ctx->pc = 0x2DED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED64u;
    // 0x2ded68: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2DED64u, 0x2DED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED6Cu;
label_2ded6c:
    // 0x2ded6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ded6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ded70: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2ded70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ded74: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2ded74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ded78: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2ded78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ded7c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2ded7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2ded80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2ded80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ded84: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2ded84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ded88: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ded88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ded8c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2ded8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ded90: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2ded90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ded94: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x2ded94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ded98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ded98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ded9c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2ded9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2deda0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2deda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2deda4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2deda4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2deda8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2deda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dedac: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2dedacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dedb0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2dedb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2dedb4: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x2DEDB4u;
    SET_GPR_U32(ctx, 31, 0x2DEDBCu);
    ctx->pc = 0x2DEDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDB4u;
    // 0x2dedb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x2DEDB4u, 0x2DEDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDBCu;
label_2dedbc:
    // 0x2dedbc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2dedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2dedc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dedc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dedc4: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x2DEDC4u;
    SET_GPR_U32(ctx, 31, 0x2DEDCCu);
    ctx->pc = 0x2DEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDC4u;
    // 0x2dedc8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x2DEDC4u, 0x2DEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDCCu;
label_2dedcc:
    // 0x2dedcc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2dedccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2dedd0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2dedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dedd4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2dedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2dedd8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2dedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2deddc: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2deddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2dede0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dede0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dede4: 0xfa2100c0  sqc2        $vf1, 0xC0($s1)
    ctx->pc = 0x2dede4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dede8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2dede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2dedec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2dedecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2dedf0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2dedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2dedf4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2dedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2dedf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dedf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dedfc: 0xfa2100d0  sqc2        $vf1, 0xD0($s1)
    ctx->pc = 0x2dedfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dee00:
    // 0x2dee00: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2dee00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dee04: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x2dee04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2dee08: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x2dee08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dee0c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2dee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2dee10: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2dee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dee14: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE14u;
        // 0x2dee18: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEE1Cu;
    // 0x2dee1c: 0x0  nop
    ctx->pc = 0x2dee1cu;
    // NOP
    ctx->pc = 0x2dee20u;
}
