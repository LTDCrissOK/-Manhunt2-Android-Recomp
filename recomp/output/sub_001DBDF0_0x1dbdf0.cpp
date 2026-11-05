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

// Function: sub_001DBDF0
// Address: 0x1dbdf0 - 0x1dc110
void sub_001DBDF0_0x1dbdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBDF0_0x1dbdf0");
#endif

    switch (ctx->pc) {
        case 0x1dbeb4u: goto label_1dbeb4;
        case 0x1dbebcu: goto label_1dbebc;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbeccu: goto label_1dbecc;
        default: break;
    }

    ctx->pc = 0x1dbdf0u;

    // 0x1dbdf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1dbdf4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1dbdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1dbdf8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1dbdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1dbdfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dbe04: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1dbe08: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1dbe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbe0c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x1dbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1dbe10: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1dbe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbe14: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1dbe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbe18: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1dbe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dbe1c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1dbe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dbe20: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1dbe20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1dbe24: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x1dbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dbe28: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1dbe28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1dbe2c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1dbe2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1dbe30: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x1dbe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbe34: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1dbe34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1dbe38: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1dbe38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dbe3c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1dbe3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1dbe40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dbe40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dbe44: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1dbe44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dbe48: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dbe48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1dbe4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1dbe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbe50: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1dbe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbe54: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1dbe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbe58: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dbe58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dbe5c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x1dbe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dbe60: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1dbe60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1dbe64: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1dbe64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1dbe68: 0xc6050098  lwc1        $f5, 0x98($s0)
    ctx->pc = 0x1dbe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dbe6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1dbe6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1dbe70: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1dbe70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbe74: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1dbe74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dbe78: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x1dbe78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dbe7c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1dbe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1dbe80: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1dbe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbe84: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1dbe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbe88: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1dbe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbe8c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1dbe8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1dbe90: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1dbe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbe94: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1dbe94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1dbe98: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1dbe98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1dbe9c: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x1dbe9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1dbea0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1dbea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dbea4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1dbea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1dbea8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1dbea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1dbeac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DBEACu;
    SET_GPR_U32(ctx, 31, 0x1DBEB4u);
    ctx->pc = 0x1DBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEACu;
    // 0x1dbeb0: 0xe7a50028  swc1        $f5, 0x28($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DBEACu, 0x1DBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEB4u;
label_1dbeb4:
    // 0x1dbeb4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DBEB4u;
    SET_GPR_U32(ctx, 31, 0x1DBEBCu);
    ctx->pc = 0x1DBEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEB4u;
    // 0x1dbeb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DBEB4u, 0x1DBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEBCu;
label_1dbebc:
    // 0x1dbebc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DBEBCu;
    SET_GPR_U32(ctx, 31, 0x1DBEC4u);
    ctx->pc = 0x1DBEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEBCu;
    // 0x1dbec0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DBEBCu, 0x1DBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEC4u;
label_1dbec4:
    // 0x1dbec4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DBEC4u;
    SET_GPR_U32(ctx, 31, 0x1DBECCu);
    ctx->pc = 0x1DBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEC4u;
    // 0x1dbec8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DBEC4u, 0x1DBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBECCu;
label_1dbecc:
    // 0x1dbecc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1dbeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dbed0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1dbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dbed4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dbed8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dbed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbedc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dbedcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbee0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbee4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1dbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbee8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dbee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbeec: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbeecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbef0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbef4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1dbef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbef8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1dbef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dbefc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dbefcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbf00: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dbf00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbf04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbf04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf08: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1dbf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf0c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dbf0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbf10: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbf10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbf14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbf14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf18: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1dbf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dbf20: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dbf20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbf24: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dbf24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbf28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbf28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf2c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1dbf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf30: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dbf30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbf34: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbf34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbf38: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbf38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf3c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1dbf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf40: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dbf44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dbf44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbf48: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dbf48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbf4c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbf4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf50: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dbf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf54: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dbf54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbf58: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dbf58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbf5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbf5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf60: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dbf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf64: 0x26080030  addiu       $t0, $s0, 0x30
    ctx->pc = 0x1dbf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbf68: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dbf68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbf6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1dbf6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbf70: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbf70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbf74: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbf74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf78: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1dbf78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf7c: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1dbf80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dbf80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbf84: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1dbf84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbf88: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbf88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbf8c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbf8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbf90: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1dbf90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbf94: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1dbf98: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dbf98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbf9c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dbf9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbfa0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbfa0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbfa4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbfa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfa8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1dbfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbfac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1dbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dbfb0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dbfb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbfb4: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1dbfb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbfb8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbfb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbfbc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbfbcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfc0: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1dbfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbfc4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1dbfc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dbfc8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dbfc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfcc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dbfccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfd0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dbfd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfd4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dbfd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dbfd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dbfd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dbfdc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dbfdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfe0: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1dbfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbfe4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1dbfe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1dbfe8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dbfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbfec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dbfecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbff0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dbff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbff4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dbff4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dbff8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dbff8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dbffc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dbffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc000: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1dc000u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc004: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dc004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc008: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dc008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc00c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dc00cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc010: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dc010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc014: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dc014u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dc018: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dc018u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dc01c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dc01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc020: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1dc020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc024: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dc024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc028: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dc028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc02c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dc02cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc030: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dc030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc034: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dc034u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dc038: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dc038u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dc03c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dc03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc040: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1dc040u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc044: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1dc044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1dc048: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1dc048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc04c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1dc04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc050: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc054: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc054u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc058: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x1dc058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc05c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc060: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc060u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc064: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1dc064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc068: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc06c: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x1dc06cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc070: 0xe6050074  swc1        $f5, 0x74($s0)
    ctx->pc = 0x1dc070u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1dc074: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1dc074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc078: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc07c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc07cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc080: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1dc080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc084: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc088: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc088u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc08c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1dc08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc090: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc094: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1dc094u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc098: 0xe6040078  swc1        $f4, 0x78($s0)
    ctx->pc = 0x1dc098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1dc09c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1dc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc0a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc0a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc0a8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1dc0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc0b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc0b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc0b4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1dc0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0b8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc0bc: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1dc0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc0c0: 0xe601007c  swc1        $f1, 0x7C($s0)
    ctx->pc = 0x1dc0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1dc0c4: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1dc0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0c8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc0cc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc0ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc0d0: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x1dc0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0d4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc0d8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc0d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc0dc: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x1dc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0e0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc0e4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dc0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc0e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1dc0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1dc0ec: 0xe6050084  swc1        $f5, 0x84($s0)
    ctx->pc = 0x1dc0ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1dc0f0: 0xe6040088  swc1        $f4, 0x88($s0)
    ctx->pc = 0x1dc0f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x1dc0f4: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x1dc0f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x1dc0f8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1dc0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1dc0fc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1dc0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dc100: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1dc100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1dc104: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC104u;
        // 0x1dc108: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC10Cu;
    // 0x1dc10c: 0x0  nop
    ctx->pc = 0x1dc10cu;
    // NOP
    ctx->pc = 0x1dc110u;
}
