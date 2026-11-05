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

// Function: sub_001DBA18
// Address: 0x1dba18 - 0x1dbdf0
void sub_001DBA18_0x1dba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBA18_0x1dba18");
#endif

    switch (ctx->pc) {
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba68u: goto label_1dba68;
        default: break;
    }

    ctx->pc = 0x1dba18u;

    // 0x1dba18: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dba1c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1dba1cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1dba20: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1dba20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1dba24: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x1dba28: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1dba28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1dba2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dba2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dba30: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1dba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1dba34: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1dba34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1dba38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dba38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba3c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1dba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1dba40: 0xe60e0008  swc1        $f14, 0x8($s0)
    ctx->pc = 0x1dba40u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1dba44: 0xe60d0004  swc1        $f13, 0x4($s0)
    ctx->pc = 0x1dba44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1dba48: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x1DBA48u;
    SET_GPR_U32(ctx, 31, 0x1DBA50u);
    ctx->pc = 0x1DBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA48u;
    // 0x1dba4c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x1DBA48u, 0x1DBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA50u;
label_1dba50:
    // 0x1dba50: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1dba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dba54: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1dba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dba58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dba58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dba5c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1dba5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1dba60: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x1DBA60u;
    SET_GPR_U32(ctx, 31, 0x1DBA68u);
    ctx->pc = 0x1DBA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA60u;
    // 0x1dba64: 0xe6010094  swc1        $f1, 0x94($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x1DBA60u, 0x1DBA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA68u;
label_1dba68:
    // 0x1dba68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dba6c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1dba6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1dba70: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1dba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dba74: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1dba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1dba78: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dba7c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1dba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1dba80: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dba84: 0xe4470008  swc1        $f7, 0x8($v0)
    ctx->pc = 0x1dba84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1dba88: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1dba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dba8c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dba90: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1dba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dba94: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1dba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dba98: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1dba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dba9c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dba9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dbaa0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x1dbaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbaa4: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x1dbaa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1dbaa8: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x1dbaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dbaac: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x1dbaacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1dbab0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1dbab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1dbab4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1dbab4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1dbab8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1dbab8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1dbabc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1dbabcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dbac0: 0xc7a6001c  lwc1        $f6, 0x1C($sp)
    ctx->pc = 0x1dbac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1dbac4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1dbac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbac8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1dbac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dbacc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1dbaccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1dbad0: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x1dbad0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dbad4: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x1dbad4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1dbad8: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x1dbad8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1dbadc: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x1dbadcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dbae0: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x1dbae0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dbae4: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x1dbae4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dbae8: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x1dbae8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1dbaec: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x1dbaecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1dbaf0: 0xe5270004  swc1        $f7, 0x4($t1)
    ctx->pc = 0x1dbaf0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1dbaf4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1dbaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1dbaf8: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x1dbaf8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dbafc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1dbafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb00: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1dbb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbb04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dbb04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dbb08: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x1dbb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dbb0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1dbb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1dbb10: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1dbb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbb14: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1dbb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbb18: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1dbb18u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1dbb1c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1dbb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dbb20: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1dbb20u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1dbb24: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1dbb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1dbb28: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1dbb28u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1dbb2c: 0xe7a6003c  swc1        $f6, 0x3C($sp)
    ctx->pc = 0x1dbb2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dbb30: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x1dbb30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1dbb34: 0xe7a6002c  swc1        $f6, 0x2C($sp)
    ctx->pc = 0x1dbb34u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1dbb38: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1dbb38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbb3c: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1dbb3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dbb40: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1dbb40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dbb44: 0xe7a6005c  swc1        $f6, 0x5C($sp)
    ctx->pc = 0x1dbb44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dbb48: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dbb48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbb4c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dbb4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbb50: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbb54: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dbb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbb58: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1dbb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbb5c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1dbb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dbb60: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1dbb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbb64: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1dbb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb68: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1dbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbb6c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1dbb6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dbb70: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1dbb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dbb74: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1dbb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dbb78: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1dbb78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dbb7c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dbb7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbb80: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbb80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbb84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbb88: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbb8c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dbb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbb90: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dbb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbb94: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dbb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbb98: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dbb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbb9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1dbb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dbba0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1dbba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dbba4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1dbba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dbba8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1dbba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dbbac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dbbacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbbb0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dbbb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbbb4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbbb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbbb8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbbbc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1dbbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbbc0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1dbbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbbc4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1dbbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbbc8: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dbbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbbcc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1dbbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbbd0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1dbbd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dbbd4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1dbbd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dbbd8: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x1dbbd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dbbdc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dbbdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbbe0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbbe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbe4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbbe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbbe8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dbbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbbec: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1dbbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbbf0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dbbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dbbf4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1dbbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbbf8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1dbbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbbfc: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1dbbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbc00: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1dbc00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dbc04: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1dbc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dbc08: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1dbc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dbc0c: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1dbc0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dbc10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dbc10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbc14: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dbc14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbc18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbc18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbc1c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dbc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbc20: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dbc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc24: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1dbc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbc28: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1dbc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbc2c: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dbc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbc30: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1dbc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dbc34: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1dbc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dbc38: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1dbc38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1dbc3c: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x1dbc3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1dbc40: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1dbc40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dbc44: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbc44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc48: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbc48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbc4c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dbc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbc50: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1dbc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbc54: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1dbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dbc58: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dbc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc5c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1dbc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbc60: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1dbc60u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1dbc64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dbc64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dbc68: 0xc7a70070  lwc1        $f7, 0x70($sp)
    ctx->pc = 0x1dbc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1dbc6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1dbc6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1dbc70: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1dbc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbc74: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1dbc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dbc78: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1dbc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dbc7c: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x1dbc7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dbc80: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1dbc80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dbc84: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x1dbc84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dbc88: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x1dbc88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dbc8c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x1dbc8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1dbc90: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1dbc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1dbc94: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1dbc94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1dbc98: 0xe7a6008c  swc1        $f6, 0x8C($sp)
    ctx->pc = 0x1dbc98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1dbc9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dbc9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbca0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dbca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbca4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbca8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1dbca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbcac: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1dbcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbcb0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1dbcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbcb4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1dbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbcb8: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x1dbcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbcbc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1dbcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1dbcc0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1dbcc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1dbcc4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1dbcc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1dbcc8: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dbcc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1dbccc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dbcccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbcd0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dbcd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcd4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dbcd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbcd8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1dbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbcdc: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x1dbcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dbce0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbce4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1dbce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbce8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1dbce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbcec: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1dbcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbcf0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1dbcf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dbcf4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1dbcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dbcf8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1dbcf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1dbcfc: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x1dbcfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1dbd00: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1dbd00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1dbd04: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x1dbd04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dbd08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbd08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbd0c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbd0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd10: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1dbd10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbd14: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1dbd18: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1dbd18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1dbd1c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1dbd1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbd20: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbd20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbd24: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbd24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd28: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1dbd28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbd2c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1dbd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1dbd30: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1dbd30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dbd34: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dbd34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbd38: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbd38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbd3c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbd3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd40: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1dbd40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbd44: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1dbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dbd48: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dbd48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbd4c: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x1dbd4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1dbd50: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1dbd50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dbd54: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1dbd54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd58: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1dbd58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbd5c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dbd5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbd60: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dbd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd64: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dbd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd68: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dbd68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd6c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dbd6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dbd70: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dbd70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dbd74: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dbd74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd78: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1dbd78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbd7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dbd7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dbd80: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dbd80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd84: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dbd84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd88: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dbd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd8c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dbd8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dbd90: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dbd90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dbd94: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dbd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbd98: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1dbd98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbd9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dbd9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbda0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dbda0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbda4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dbda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbda8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dbda8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbdac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dbdacu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dbdb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dbdb0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dbdb4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dbdb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbdb8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1dbdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbdbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dbdbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbdc0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dbdc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbdc4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dbdc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbdc8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dbdc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dbdcc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dbdccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dbdd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dbdd0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dbdd4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dbdd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dbdd8: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1dbdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dbddc: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1dbddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dbde0: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1dbde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dbde4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1dbde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbde8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE8u;
        // 0x1dbdec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDF0u;
}
