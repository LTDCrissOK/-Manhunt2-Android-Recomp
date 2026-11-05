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

// Function: sub_002C2068
// Address: 0x2c2068 - 0x2c21e8
void sub_002C2068_0x2c2068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2068_0x2c2068");
#endif

    switch (ctx->pc) {
        case 0x2c20e0u: goto label_2c20e0;
        case 0x2c2114u: goto label_2c2114;
        case 0x2c2120u: goto label_2c2120;
        case 0x2c2138u: goto label_2c2138;
        case 0x2c21a8u: goto label_2c21a8;
        default: break;
    }

    ctx->pc = 0x2c2068u;

    // 0x2c2068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c2068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c206c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2070: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c2070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c2074: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c2074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c2078: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c207c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c207cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2080: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2c2080u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c2084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c208c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2c2090: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2c2090u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c2094: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2c2094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c2098: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c2098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c209c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2c209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c20a0: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x2c20a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c20a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c20a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c20a8: 0xc60300f4  lwc1        $f3, 0xF4($s0)
    ctx->pc = 0x2c20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c20ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c20acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c20b0: 0x8e120100  lw          $s2, 0x100($s0)
    ctx->pc = 0x2c20b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2c20b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c20b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c20b8: 0x0  nop
    ctx->pc = 0x2c20b8u;
    // NOP
    // 0x2c20bc: 0x0  nop
    ctx->pc = 0x2c20bcu;
    // NOP
    // 0x2c20c0: 0x46010304  c1          0x10304
    ctx->pc = 0x2c20c0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c20c4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2c20c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2c20c8: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x2c20c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c20cc: 0x0  nop
    ctx->pc = 0x2c20ccu;
    // NOP
    // 0x2c20d0: 0x0  nop
    ctx->pc = 0x2c20d0u;
    // NOP
    // 0x2c20d4: 0x46000004  c1          0x4
    ctx->pc = 0x2c20d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c20d8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C20D8u;
    SET_GPR_U32(ctx, 31, 0x2C20E0u);
    ctx->pc = 0x2C20DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20D8u;
    // 0x2c20dc: 0x460305c2  mul.s       $f23, $f0, $f3 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C20D8u, 0x2C20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20E0u;
label_2c20e0:
    // 0x2c20e0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c20e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c20e4: 0x3421fa2e  ori         $at, $at, 0xFA2E
    ctx->pc = 0x2c20e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64046);
    // 0x2c20e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2c20e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2c20ec: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2c20ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2c20f0: 0x34212eed  ori         $at, $at, 0x2EED
    ctx->pc = 0x2c20f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12013);
    // 0x2c20f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c20f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c20f8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2c20f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2c20fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c20fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2100: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2c2100u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c2104: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x2c2104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2c2108: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c2108u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c210c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C210Cu;
    SET_GPR_U32(ctx, 31, 0x2C2114u);
    ctx->pc = 0x2C2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C210Cu;
    // 0x2c2110: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C210Cu, 0x2C2114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2114u;
label_2c2114:
    // 0x2c2114: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x2c2114u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2c2118: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C2118u;
    SET_GPR_U32(ctx, 31, 0x2C2120u);
    ctx->pc = 0x2C211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2118u;
    // 0x2c211c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C2118u, 0x2C2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2120u;
label_2c2120:
    // 0x2c2120: 0x0  nop
    ctx->pc = 0x2c2120u;
    // NOP
    // 0x2c2124: 0x0  nop
    ctx->pc = 0x2c2124u;
    // NOP
    // 0x2c2128: 0x4615bd43  div.s       $f21, $f23, $f21
    ctx->pc = 0x2c2128u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[23], ctx->f[21]); }
    // 0x2c212c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2130: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C2130u;
    SET_GPR_U32(ctx, 31, 0x2C2138u);
    ctx->pc = 0x2C2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2130u;
    // 0x2c2134: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C2130u, 0x2C2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2138u;
label_2c2138:
    // 0x2c2138: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x2c2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2c213c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x2c213cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c2140: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c2140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2144: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2c2144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2c2148: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2c2148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c214c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c2150: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x2c2150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c2154: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c2154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2158: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2c2158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c215c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2c215cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c2160: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c2160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c2164: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c2164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2168: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x2c2168u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c216c: 0xe6350050  swc1        $f21, 0x50($s1)
    ctx->pc = 0x2c216cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2c2170: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x2c2170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2c2174: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c2174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2178: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x2c2178u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c217c: 0x26030170  addiu       $v1, $s0, 0x170
    ctx->pc = 0x2c217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2c2180: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c2180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2184: 0xfa210080  sqc2        $vf1, 0x80($s1)
    ctx->pc = 0x2c2184u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c2188: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x2c2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x2c218c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c218cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2190: 0xfa2100a0  sqc2        $vf1, 0xA0($s1)
    ctx->pc = 0x2c2190u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c2194: 0x26030180  addiu       $v1, $s0, 0x180
    ctx->pc = 0x2c2194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x2c2198: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c2198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c219c: 0xfa2100c0  sqc2        $vf1, 0xC0($s1)
    ctx->pc = 0x2c219cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c21a0: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2c21a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c21a8:
    // 0x2c21a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c21ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c21b0: 0x0  nop
    ctx->pc = 0x2c21b0u;
    // NOP
    // 0x2c21b4: 0x0  nop
    ctx->pc = 0x2c21b4u;
    // NOP
    // 0x2c21b8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C21B8u;
    {
        const bool branch_taken_0x2c21b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21B8u;
        // 0x2c21bc: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21b8) {
            ctx->pc = 0x2C21A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c21a8;
        }
    }
    ctx->pc = 0x2C21C0u;
    // 0x2c21c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c21c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c21c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c21c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c21c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c21c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c21cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c21ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c21d0: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2c21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c21d4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2c21d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c21d8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2c21d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c21dc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c21dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c21e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C21E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21E0u;
        // 0x2c21e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C21E8u;
}
