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

// Function: sub_002729C0
// Address: 0x2729c0 - 0x272d80
void sub_002729C0_0x2729c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002729C0_0x2729c0");
#endif

    switch (ctx->pc) {
        case 0x272a4cu: goto label_272a4c;
        case 0x272a5cu: goto label_272a5c;
        default: break;
    }

    ctx->pc = 0x2729c0u;

    // 0x2729c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2729c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2729c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2729c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2729c8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2729c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2729cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2729ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729d0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2729d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2729d4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2729d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2729d8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2729d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2729dc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2729dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2729e0: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x2729E0u;
    {
        const bool branch_taken_0x2729e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E0u;
        // 0x2729e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729e0) {
            ctx->pc = 0x272D60u;
            goto label_272d60;
        }
    }
    ctx->pc = 0x2729E8u;
    // 0x2729e8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2729e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2729ec: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2729ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2729f0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2729f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2729f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2729f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2729f8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2729f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2729fc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2729fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272a00: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x272a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272a04: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x272a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272a08: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x272a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272a0c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x272a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272a10: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x272a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272a14: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x272a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x272a18: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x272a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x272a1c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x272a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x272a20: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x272A20u;
    {
        const bool branch_taken_0x272a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A20u;
        // 0x272a24: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a20) {
            ctx->pc = 0x272BD0u;
            goto label_272bd0;
        }
    }
    ctx->pc = 0x272A28u;
    // 0x272a28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x272a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x272a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272a30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272A30u;
    {
        const bool branch_taken_0x272a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A30u;
        // 0x272a34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a30) {
            ctx->pc = 0x272A40u;
            goto label_272a40;
        }
    }
    ctx->pc = 0x272A38u;
    // 0x272a38: 0x54620066  bnel        $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x272A38u;
    {
        const bool branch_taken_0x272a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272a38) {
            ctx->pc = 0x272A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A38u;
            // 0x272a3c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272BD4u;
            goto label_272bd4;
        }
    }
    ctx->pc = 0x272A40u;
label_272a40:
    // 0x272a40: 0xc60d0060  lwc1        $f13, 0x60($s0)
    ctx->pc = 0x272a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x272a44: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x272A44u;
    SET_GPR_U32(ctx, 31, 0x272A4Cu);
    ctx->pc = 0x272A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A44u;
    // 0x272a48: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x272A44u, 0x272A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A4Cu;
label_272a4c:
    // 0x272a4c: 0xc60d0060  lwc1        $f13, 0x60($s0)
    ctx->pc = 0x272a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x272a50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x272a50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x272a54: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x272A54u;
    SET_GPR_U32(ctx, 31, 0x272A5Cu);
    ctx->pc = 0x272A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A54u;
    // 0x272a58: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x272A54u, 0x272A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A5Cu;
label_272a5c:
    // 0x272a5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x272a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x272a60: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x272a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272a64: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x272a64u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272a68: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x272a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x272a6c: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x272a6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x272a70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x272a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x272a74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x272a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x272a78: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x272a78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x272a7c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x272a7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x272a80: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x272a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x272a84: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x272a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x272a88: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x272a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272a8c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x272a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272a90: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x272a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272a94: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x272a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272a98: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x272a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272a9c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x272a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272aa0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x272aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272aa4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x272aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x272aa8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x272aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272aac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x272aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272ab0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x272ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272ab4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x272ab4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x272ab8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x272ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x272abc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x272abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x272ac0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x272ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x272ac4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x272ac4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272ac8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x272ac8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x272acc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x272accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272ad0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x272ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272ad4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x272ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272ad8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x272ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272adc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x272adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272ae0: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x272ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x272ae4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x272ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272ae8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x272ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x272aec: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x272aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x272af0: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x272af0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x272af4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x272af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272af8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x272af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272afc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x272afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x272b00: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x272b00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x272b04: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x272b04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x272b08: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x272b08u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x272b0c: 0x46010044  c1          0x10044
    ctx->pc = 0x272b0cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x272b10: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x272b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272b14: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x272b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x272b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272b1c: 0x0  nop
    ctx->pc = 0x272b1cu;
    // NOP
    // 0x272b20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x272B20u;
    {
        const bool branch_taken_0x272b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B20u;
        // 0x272b24: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b20) {
            ctx->pc = 0x272B40u;
            goto label_272b40;
        }
    }
    ctx->pc = 0x272B28u;
    // 0x272b28: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x272b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x272b2c: 0xfa010080  sqc2        $vf1, 0x80($s0)
    ctx->pc = 0x272b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272b30: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x272b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x272b34: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x272b34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272b38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x272B38u;
    {
        const bool branch_taken_0x272b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b38) {
            ctx->pc = 0x272B70u;
            goto label_272b70;
        }
    }
    ctx->pc = 0x272B40u;
label_272b40:
    // 0x272b40: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x272b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272b44: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x272b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272b48: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x272b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x272b50: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x272b50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x272b54: 0xe7b5004c  swc1        $f21, 0x4C($sp)
    ctx->pc = 0x272b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x272b58: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x272b58u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x272b5c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x272b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272b60: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x272b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x272b64: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x272b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272b68: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x272b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272b6c: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x272b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_272b70:
    // 0x272b70: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x272b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272b74: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x272b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272b78: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x272b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x272b7c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x272b7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x272b80: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x272b80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x272b84: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x272b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x272b88: 0x46010044  c1          0x10044
    ctx->pc = 0x272b88u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x272b8c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x272b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x272b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272b94: 0x0  nop
    ctx->pc = 0x272b94u;
    // NOP
    // 0x272b98: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x272B98u;
    {
        const bool branch_taken_0x272b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272b98) {
            ctx->pc = 0x272BC0u;
            goto label_272bc0;
        }
    }
    ctx->pc = 0x272BA0u;
    // 0x272ba0: 0x0  nop
    ctx->pc = 0x272ba0u;
    // NOP
    // 0x272ba4: 0x0  nop
    ctx->pc = 0x272ba4u;
    // NOP
    // 0x272ba8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x272ba8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x272bac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x272bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x272bb0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x272bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272bb4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x272bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x272bb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x272bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272bbc: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x272bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_272bc0:
    // 0x272bc0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x272bc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272bc4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x272bc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272bc8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x272bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272bcc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x272bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_272bd0:
    // 0x272bd0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272bd4:
    // 0x272bd4: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x272bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x272bd8: 0x8c450220  lw          $a1, 0x220($v0)
    ctx->pc = 0x272bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x272bdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x272bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272be0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x272be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272be4: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x272be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272be8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x272be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x272bec: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x272becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x272bf0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x272bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x272bf4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x272bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272bf8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x272bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x272bfc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x272bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272c00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x272c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x272c04: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x272c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272c08: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x272c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x272c0c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x272c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272c10: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x272c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x272c14: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x272c14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272c18: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x272c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272c1c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x272c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272c20: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x272c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x272c24: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x272c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x272c28: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x272c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x272c2c: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x272c2cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x272c30: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x272c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272c34: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x272c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272c38: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x272c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x272c3c: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x272c3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272c40: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x272c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x272c44: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x272c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x272c48: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x272c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x272c4c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x272c4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x272c50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x272c50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272c54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x272c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272c58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x272c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272c5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x272c5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x272c60: 0x4a0003bf  vwaitq
    ctx->pc = 0x272c60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x272c64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x272c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272c68: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x272c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272c6c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x272c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272c70: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x272c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x272c74: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x272c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272c78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x272c78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x272c7c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x272c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272c80: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x272c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x272c84: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x272c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x272c88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x272c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272c8c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x272c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x272c90: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x272c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x272c94: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x272c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x272c98: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x272c98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x272c9c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x272c9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272ca0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x272ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272ca4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x272ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272ca8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x272ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272cac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x272cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272cb0: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x272cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272cb4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x272cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272cb8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x272cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x272cbc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x272cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272cc0: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x272cc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x272cc4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x272cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272cc8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x272cc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272ccc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x272cccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272cd0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x272cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272cd4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x272cd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x272cd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x272cd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x272cdc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x272cdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272ce0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x272ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272ce4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x272ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x272ce8: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x272ce8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272cec: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x272cecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x272cf0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x272cf0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272cf4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x272cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272cf8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x272cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272cfc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x272cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272d00: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x272d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272d04: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x272d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272d08: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x272d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x272d0c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x272d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x272d10: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x272d10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x272d14: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x272d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x272d18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x272d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272d1c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x272d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272d20: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x272d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272d24: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x272d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272d28: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x272d28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x272d2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x272d2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x272d30: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x272d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272d34: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x272d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272d38: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x272d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x272d3c: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x272d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272d40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x272d40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272d44: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x272d44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272d48: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x272d48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x272d4c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x272d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272d50: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x272d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x272d54: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x272d54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272d58: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x272d58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x272d5c: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x272d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_272d60:
    // 0x272d60: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x272d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x272d64: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x272d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x272d68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x272d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x272d6c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x272d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x272d70: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x272d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x272d74: 0x3e00008  jr          $ra
    ctx->pc = 0x272D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D74u;
        // 0x272d78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272D7Cu;
    // 0x272d7c: 0x0  nop
    ctx->pc = 0x272d7cu;
    // NOP
    ctx->pc = 0x272d80u;
}
