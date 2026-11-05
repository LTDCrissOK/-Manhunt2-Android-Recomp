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

// Function: sub_00344D58
// Address: 0x344d58 - 0x344ea0
void sub_00344D58_0x344d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344D58_0x344d58");
#endif

    switch (ctx->pc) {
        case 0x344d78u: goto label_344d78;
        case 0x344d80u: goto label_344d80;
        case 0x344d94u: goto label_344d94;
        case 0x344e8cu: goto label_344e8c;
        default: break;
    }

    ctx->pc = 0x344d58u;

    // 0x344d58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x344d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x344d5c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x344d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x344d60: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x344d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x344d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x344d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x344d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x344d70: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344D70u;
    SET_GPR_U32(ctx, 31, 0x344D78u);
    ctx->pc = 0x344D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D70u;
    // 0x344d74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344D70u, 0x344D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D78u;
label_344d78:
    // 0x344d78: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344D78u;
    SET_GPR_U32(ctx, 31, 0x344D80u);
    ctx->pc = 0x344D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D78u;
    // 0x344d7c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344D78u, 0x344D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D80u;
label_344d80:
    // 0x344d80: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344d84: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x344D84u;
    {
        const bool branch_taken_0x344d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344d84) {
            ctx->pc = 0x344D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344D84u;
            // 0x344d88: 0xc6020070  lwc1        $f2, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x344E24u;
            goto label_344e24;
        }
    }
    ctx->pc = 0x344D8Cu;
    // 0x344d8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344D8Cu;
    SET_GPR_U32(ctx, 31, 0x344D94u);
    ctx->pc = 0x344D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D8Cu;
    // 0x344d90: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344D8Cu, 0x344D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D94u;
label_344d94:
    // 0x344d94: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x344d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x344d98: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344d9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x344d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344da0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344da0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344da4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x344da4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x344da8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x344da8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x344dac: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x344dacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x344db0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344db4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344db4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344db8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x344db8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344dbc: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x344dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344dc0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x344dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344dc4: 0xc6050078  lwc1        $f5, 0x78($s0)
    ctx->pc = 0x344dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x344dc8: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x344dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344dcc: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x344dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344dd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344dd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344dd8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x344dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x344ddc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x344ddcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x344de0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x344de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344de4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x344de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x344de8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x344de8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x344dec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x344decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344df0: 0x46012180  add.s       $f6, $f4, $f1
    ctx->pc = 0x344df0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x344df4: 0x460219c0  add.s       $f7, $f3, $f2
    ctx->pc = 0x344df4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x344df8: 0x46050200  add.s       $f8, $f0, $f5
    ctx->pc = 0x344df8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x344dfc: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x344dfcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x344e00: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x344e00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344e04: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x344e04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x344e08: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x344e08u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x344e0c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x344e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x344e10: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x344e10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x344e14: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x344e14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x344e18: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x344e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x344e1c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x344E1Cu;
    {
        const bool branch_taken_0x344e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E1Cu;
        // 0x344e20: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e1c) {
            ctx->pc = 0x344E7Cu;
            goto label_344e7c;
        }
    }
    ctx->pc = 0x344E24u;
label_344e24:
    // 0x344e24: 0xc6030074  lwc1        $f3, 0x74($s0)
    ctx->pc = 0x344e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344e28: 0xc6040078  lwc1        $f4, 0x78($s0)
    ctx->pc = 0x344e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x344e2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344e34: 0xc6050058  lwc1        $f5, 0x58($s0)
    ctx->pc = 0x344e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x344e38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x344e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x344e3c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x344e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344e40: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x344e40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x344e44: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x344e44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x344e48: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x344e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344e4c: 0x46020980  add.s       $f6, $f1, $f2
    ctx->pc = 0x344e4cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x344e50: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x344e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x344e54: 0x460301c0  add.s       $f7, $f0, $f3
    ctx->pc = 0x344e54u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x344e58: 0x46042a00  add.s       $f8, $f5, $f4
    ctx->pc = 0x344e58u;
    ctx->f[8] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x344e5c: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x344e5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344e60: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x344e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x344e64: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x344e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x344e68: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x344e68u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x344e6c: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x344e6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x344e70: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x344e70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x344e74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x344e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x344e78: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x344e78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_344e7c:
    // 0x344e7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x344e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x344e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e84: 0xc0d1678  jal         func_3459E0
    ctx->pc = 0x344E84u;
    SET_GPR_U32(ctx, 31, 0x344E8Cu);
    ctx->pc = 0x344E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E84u;
    // 0x344e88: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459E0u, 0x344E84u, 0x344E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E8Cu;
label_344e8c:
    // 0x344e8c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x344e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344e90: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x344e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344e94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x344e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x344e98: 0x3e00008  jr          $ra
    ctx->pc = 0x344E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E98u;
        // 0x344e9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344EA0u;
}
