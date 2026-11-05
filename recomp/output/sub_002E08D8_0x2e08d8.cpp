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

// Function: sub_002E08D8
// Address: 0x2e08d8 - 0x2e09b0
void sub_002E08D8_0x2e08d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E08D8_0x2e08d8");
#endif

    switch (ctx->pc) {
        case 0x2e095cu: goto label_2e095c;
        case 0x2e0994u: goto label_2e0994;
        default: break;
    }

    ctx->pc = 0x2e08d8u;

    // 0x2e08d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e08d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e08dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e08dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e08e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e08e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e08e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e08e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e08e8: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2e08e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e08ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e08ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08f0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2e08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e08f4: 0xc444006c  lwc1        $f4, 0x6C($v0)
    ctx->pc = 0x2e08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e08f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e08f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e08fc: 0x460c20c1  sub.s       $f3, $f4, $f12
    ctx->pc = 0x2e08fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x2e0900: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2e0900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0904: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e0904u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e0908: 0xc60500f0  lwc1        $f5, 0xF0($s0)
    ctx->pc = 0x2e0908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e090c: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2e090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0910: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2e0910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2e0914: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x2e0914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2e0918: 0xe60200b4  swc1        $f2, 0xB4($s0)
    ctx->pc = 0x2e0918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x2e091c: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x2e091cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0920: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2e0920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2e0924: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0924u;
    {
        const bool branch_taken_0x2e0924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0924u;
        // 0x2e0928: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0924) {
            ctx->pc = 0x2E0934u;
            goto label_2e0934;
        }
    }
    ctx->pc = 0x2E092Cu;
    // 0x2e092c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E092Cu;
    {
        const bool branch_taken_0x2e092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E092Cu;
        // 0x2e0930: 0xe60500b8  swc1        $f5, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e092c) {
            ctx->pc = 0x2E0954u;
            goto label_2e0954;
        }
    }
    ctx->pc = 0x2E0934u;
label_2e0934:
    // 0x2e0934: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2e0934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0938: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2e0938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2e093c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e093cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0940: 0x0  nop
    ctx->pc = 0x2e0940u;
    // NOP
    // 0x2e0944: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0944u;
    {
        const bool branch_taken_0x2e0944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0944u;
        // 0x2e0948: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0944) {
            ctx->pc = 0x2E0950u;
            goto label_2e0950;
        }
    }
    ctx->pc = 0x2E094Cu;
    // 0x2e094c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2e094cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2e0950:
    // 0x2e0950: 0xe60200b8  swc1        $f2, 0xB8($s0)
    ctx->pc = 0x2e0950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_2e0954:
    // 0x2e0954: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E0954u;
    SET_GPR_U32(ctx, 31, 0x2E095Cu);
    ctx->pc = 0x2E0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0954u;
    // 0x2e0958: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E0954u, 0x2E095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E095Cu;
label_2e095c:
    // 0x2e095c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2e095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2e0960: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0964: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e0964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0968: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e0968u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e096c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e096cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e0970: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e0970u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e0974: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e0974u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e0978: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e0978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e097c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e097cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e0980: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e0980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e0984: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e0984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e0988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e098c: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E098Cu;
    SET_GPR_U32(ctx, 31, 0x2E0994u);
    ctx->pc = 0x2E0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E098Cu;
    // 0x2e0990: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E098Cu, 0x2E0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0994u;
label_2e0994:
    // 0x2e0994: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0998: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e0998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e099c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E099Cu;
        // 0x2e09a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E099Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E09A4u;
    // 0x2e09a4: 0x0  nop
    ctx->pc = 0x2e09a4u;
    // NOP
    // 0x2e09a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e09a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e09ac: 0x0  nop
    ctx->pc = 0x2e09acu;
    // NOP
    ctx->pc = 0x2e09b0u;
}
