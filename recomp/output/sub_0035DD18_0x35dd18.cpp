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

// Function: sub_0035DD18
// Address: 0x35dd18 - 0x35dea0
void sub_0035DD18_0x35dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DD18_0x35dd18");
#endif

    switch (ctx->pc) {
        case 0x35dd18u: goto label_35dd18;
        case 0x35dd1cu: goto label_35dd1c;
        case 0x35dd20u: goto label_35dd20;
        case 0x35dd24u: goto label_35dd24;
        case 0x35dd28u: goto label_35dd28;
        case 0x35dd2cu: goto label_35dd2c;
        case 0x35dd30u: goto label_35dd30;
        case 0x35dd34u: goto label_35dd34;
        case 0x35dd38u: goto label_35dd38;
        case 0x35dd3cu: goto label_35dd3c;
        case 0x35dd40u: goto label_35dd40;
        case 0x35dd44u: goto label_35dd44;
        case 0x35dd48u: goto label_35dd48;
        case 0x35dd4cu: goto label_35dd4c;
        case 0x35dd50u: goto label_35dd50;
        case 0x35dd54u: goto label_35dd54;
        case 0x35dd58u: goto label_35dd58;
        case 0x35dd5cu: goto label_35dd5c;
        case 0x35dd60u: goto label_35dd60;
        case 0x35dd64u: goto label_35dd64;
        case 0x35dd68u: goto label_35dd68;
        case 0x35dd6cu: goto label_35dd6c;
        case 0x35dd70u: goto label_35dd70;
        case 0x35dd74u: goto label_35dd74;
        case 0x35dd78u: goto label_35dd78;
        case 0x35dd7cu: goto label_35dd7c;
        case 0x35dd80u: goto label_35dd80;
        case 0x35dd84u: goto label_35dd84;
        case 0x35dd88u: goto label_35dd88;
        case 0x35dd8cu: goto label_35dd8c;
        case 0x35dd90u: goto label_35dd90;
        case 0x35dd94u: goto label_35dd94;
        case 0x35dd98u: goto label_35dd98;
        case 0x35dd9cu: goto label_35dd9c;
        case 0x35dda0u: goto label_35dda0;
        case 0x35dda4u: goto label_35dda4;
        case 0x35dda8u: goto label_35dda8;
        case 0x35ddacu: goto label_35ddac;
        case 0x35ddb0u: goto label_35ddb0;
        case 0x35ddb4u: goto label_35ddb4;
        case 0x35ddb8u: goto label_35ddb8;
        case 0x35ddbcu: goto label_35ddbc;
        case 0x35ddc0u: goto label_35ddc0;
        case 0x35ddc4u: goto label_35ddc4;
        case 0x35ddc8u: goto label_35ddc8;
        case 0x35ddccu: goto label_35ddcc;
        case 0x35ddd0u: goto label_35ddd0;
        case 0x35ddd4u: goto label_35ddd4;
        case 0x35ddd8u: goto label_35ddd8;
        case 0x35dddcu: goto label_35dddc;
        case 0x35dde0u: goto label_35dde0;
        case 0x35dde4u: goto label_35dde4;
        case 0x35dde8u: goto label_35dde8;
        case 0x35ddecu: goto label_35ddec;
        case 0x35ddf0u: goto label_35ddf0;
        case 0x35ddf4u: goto label_35ddf4;
        case 0x35ddf8u: goto label_35ddf8;
        case 0x35ddfcu: goto label_35ddfc;
        case 0x35de00u: goto label_35de00;
        case 0x35de04u: goto label_35de04;
        case 0x35de08u: goto label_35de08;
        case 0x35de0cu: goto label_35de0c;
        case 0x35de10u: goto label_35de10;
        case 0x35de14u: goto label_35de14;
        case 0x35de18u: goto label_35de18;
        case 0x35de1cu: goto label_35de1c;
        case 0x35de20u: goto label_35de20;
        case 0x35de24u: goto label_35de24;
        case 0x35de28u: goto label_35de28;
        case 0x35de2cu: goto label_35de2c;
        case 0x35de30u: goto label_35de30;
        case 0x35de34u: goto label_35de34;
        case 0x35de38u: goto label_35de38;
        case 0x35de3cu: goto label_35de3c;
        case 0x35de40u: goto label_35de40;
        case 0x35de44u: goto label_35de44;
        case 0x35de48u: goto label_35de48;
        case 0x35de4cu: goto label_35de4c;
        case 0x35de50u: goto label_35de50;
        case 0x35de54u: goto label_35de54;
        case 0x35de58u: goto label_35de58;
        case 0x35de5cu: goto label_35de5c;
        case 0x35de60u: goto label_35de60;
        case 0x35de64u: goto label_35de64;
        case 0x35de68u: goto label_35de68;
        case 0x35de6cu: goto label_35de6c;
        case 0x35de70u: goto label_35de70;
        case 0x35de74u: goto label_35de74;
        case 0x35de78u: goto label_35de78;
        case 0x35de7cu: goto label_35de7c;
        case 0x35de80u: goto label_35de80;
        case 0x35de84u: goto label_35de84;
        case 0x35de88u: goto label_35de88;
        case 0x35de8cu: goto label_35de8c;
        case 0x35de90u: goto label_35de90;
        case 0x35de94u: goto label_35de94;
        case 0x35de98u: goto label_35de98;
        case 0x35de9cu: goto label_35de9c;
        default: break;
    }

    ctx->pc = 0x35dd18u;

label_35dd18:
    // 0x35dd18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35dd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_35dd1c:
    // 0x35dd1c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x35dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_35dd20:
    // 0x35dd20: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x35dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_35dd24:
    // 0x35dd24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35dd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35dd28:
    // 0x35dd28: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x35dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_35dd2c:
    // 0x35dd2c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x35dd2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_35dd30:
    // 0x35dd30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35dd30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35dd34:
    // 0x35dd34: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x35dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_35dd38:
    // 0x35dd38: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35dd38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_35dd3c:
    // 0x35dd3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35dd40:
    // 0x35dd40: 0xc0d4338  jal         func_350CE0
label_35dd44:
    if (ctx->pc == 0x35DD44u) {
        ctx->pc = 0x35DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD40u;
        // 0x35dd44: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DD48u;
        goto label_35dd48;
    }
    ctx->pc = 0x35DD40u;
    SET_GPR_U32(ctx, 31, 0x35DD48u);
    ctx->pc = 0x35DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD40u;
    // 0x35dd44: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CE0u, 0x35DD40u, 0x35DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD48u;
label_35dd48:
    // 0x35dd48: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x35dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35dd4c:
    // 0x35dd4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35dd4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35dd50:
    // 0x35dd50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x35dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dd54:
    // 0x35dd54: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x35dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dd58:
    // 0x35dd58: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x35dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35dd5c:
    // 0x35dd5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35dd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35dd60:
    // 0x35dd60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35dd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35dd64:
    // 0x35dd64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x35dd64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_35dd68:
    // 0x35dd68: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x35dd68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_35dd6c:
    // 0x35dd6c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35dd6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35dd70:
    // 0x35dd70: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35dd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35dd74:
    // 0x35dd74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35dd74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35dd78:
    // 0x35dd78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35dd78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35dd7c:
    // 0x35dd7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35dd7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35dd80:
    // 0x35dd80: 0x4a0003bf  vwaitq
    ctx->pc = 0x35dd80u;
    // VWAITQ (Q already resolved in this runtime)
label_35dd84:
    // 0x35dd84: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35dd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35dd88:
    // 0x35dd88: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_35dd8c:
    // 0x35dd8c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35dd8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35dd90:
    // 0x35dd90: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x35dd90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35dd94:
    // 0x35dd94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x35dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35dd98:
    // 0x35dd98: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x35dd98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35dd9c:
    // 0x35dd9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35dd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35dda0:
    // 0x35dda0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x35dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_35dda4:
    // 0x35dda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35dda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35dda8:
    // 0x35dda8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x35dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_35ddac:
    // 0x35ddac: 0x40f809  jalr        $v0
label_35ddb0:
    if (ctx->pc == 0x35DDB0u) {
        ctx->pc = 0x35DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDACu;
        // 0x35ddb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DDB4u;
        goto label_35ddb4;
    }
    ctx->pc = 0x35DDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35DDB4u);
        ctx->pc = 0x35DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDACu;
        // 0x35ddb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DDACu, 0x35DDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35DDB4u;
label_35ddb4:
    // 0x35ddb4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x35ddb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_35ddb8:
    // 0x35ddb8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x35ddb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_35ddbc:
    // 0x35ddbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35ddbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ddc0:
    // 0x35ddc0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x35ddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_35ddc4:
    // 0x35ddc4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x35ddc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_35ddc8:
    // 0x35ddc8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x35ddc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35ddcc:
    // 0x35ddcc: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x35ddccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_35ddd0:
    // 0x35ddd0: 0xc0b12b0  jal         func_2C4AC0
label_35ddd4:
    if (ctx->pc == 0x35DDD4u) {
        ctx->pc = 0x35DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDD0u;
        // 0x35ddd4: 0x460da342  mul.s       $f13, $f20, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DDD8u;
        goto label_35ddd8;
    }
    ctx->pc = 0x35DDD0u;
    SET_GPR_U32(ctx, 31, 0x35DDD8u);
    ctx->pc = 0x35DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DDD0u;
    // 0x35ddd4: 0x460da342  mul.s       $f13, $f20, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x35DDD0u, 0x35DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DDD8u;
label_35ddd8:
    // 0x35ddd8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x35ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35dddc:
    // 0x35dddc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x35dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35dde0:
    // 0x35dde0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x35dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35dde4:
    // 0x35dde4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x35dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dde8:
    // 0x35dde8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x35dde8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_35ddec:
    // 0x35ddec: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x35ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35ddf0:
    // 0x35ddf0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x35ddf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_35ddf4:
    // 0x35ddf4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35ddf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35ddf8:
    // 0x35ddf8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x35ddf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_35ddfc:
    // 0x35ddfc: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35ddfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35de00:
    // 0x35de00: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x35de00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35de04:
    // 0x35de04: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35de04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35de08:
    // 0x35de08: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x35de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35de0c:
    // 0x35de0c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35de0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35de10:
    // 0x35de10: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35de10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35de14:
    // 0x35de14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35de14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35de18:
    // 0x35de18: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35de1c:
    // 0x35de1c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x35de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35de20:
    // 0x35de20: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x35de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35de24:
    // 0x35de24: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35de28:
    // 0x35de28: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x35de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35de2c:
    // 0x35de2c: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x35de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35de30:
    // 0x35de30: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x35de30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_35de34:
    // 0x35de34: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x35de34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_35de38:
    // 0x35de38: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x35de38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_35de3c:
    // 0x35de3c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x35de3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_35de40:
    // 0x35de40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35de40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35de44:
    // 0x35de44: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x35de44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35de48:
    // 0x35de48: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x35de48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_35de4c:
    // 0x35de4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x35de4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_35de50:
    // 0x35de50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35de50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35de54:
    // 0x35de54: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x35de54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_35de58:
    // 0x35de58: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x35de58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_35de5c:
    // 0x35de5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x35de5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35de60:
    // 0x35de60: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x35de60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_35de64:
    // 0x35de64: 0xc0b12b0  jal         func_2C4AC0
label_35de68:
    if (ctx->pc == 0x35DE68u) {
        ctx->pc = 0x35DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE64u;
        // 0x35de68: 0x460da342  mul.s       $f13, $f20, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DE6Cu;
        goto label_35de6c;
    }
    ctx->pc = 0x35DE64u;
    SET_GPR_U32(ctx, 31, 0x35DE6Cu);
    ctx->pc = 0x35DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE64u;
    // 0x35de68: 0x460da342  mul.s       $f13, $f20, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x35DE64u, 0x35DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE6Cu;
label_35de6c:
    // 0x35de6c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x35de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_35de70:
    // 0x35de70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x35de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35de74:
    // 0x35de74: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x35de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_35de78:
    // 0x35de78: 0x60f809  jalr        $v1
label_35de7c:
    if (ctx->pc == 0x35DE7Cu) {
        ctx->pc = 0x35DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE78u;
        // 0x35de7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DE80u;
        goto label_35de80;
    }
    ctx->pc = 0x35DE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35DE80u);
        ctx->pc = 0x35DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE78u;
        // 0x35de7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE78u, 0x35DE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35DE80u;
label_35de80:
    // 0x35de80: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x35de80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_35de84:
    // 0x35de84: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x35de84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_35de88:
    // 0x35de88: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x35de88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_35de8c:
    // 0x35de8c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x35de8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_35de90:
    // 0x35de90: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x35de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35de94:
    // 0x35de94: 0x3e00008  jr          $ra
label_35de98:
    if (ctx->pc == 0x35DE98u) {
        ctx->pc = 0x35DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE94u;
        // 0x35de98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35DE9Cu;
        goto label_35de9c;
    }
    ctx->pc = 0x35DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE94u;
        // 0x35de98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE9Cu;
label_35de9c:
    // 0x35de9c: 0x0  nop
    ctx->pc = 0x35de9cu;
    // NOP
    ctx->pc = 0x35dea0u;
}
