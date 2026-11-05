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

// Function: sub_001C9390
// Address: 0x1c9390 - 0x1c9658
void sub_001C9390_0x1c9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9390_0x1c9390");
#endif

    switch (ctx->pc) {
        case 0x1c9430u: goto label_1c9430;
        case 0x1c943cu: goto label_1c943c;
        case 0x1c94d8u: goto label_1c94d8;
        case 0x1c9578u: goto label_1c9578;
        case 0x1c9594u: goto label_1c9594;
        case 0x1c9608u: goto label_1c9608;
        default: break;
    }

    ctx->pc = 0x1c9390u;

    // 0x1c9390: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c9394: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c9394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c9398: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1c9398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1c939c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c939cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c93a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c93a4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1c93a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93a8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c93a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c93ac: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c93b0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c93b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c93b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c93b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93b8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1c93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1c93bc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1c93bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93c0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1c93c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1c93c4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1c93c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93c8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c93c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c93cc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1c93ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c93d4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1c93d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1c93d8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1c93d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1c93dc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1c93dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c93e0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1c93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1c93e4: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1c93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c93e8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1c93e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c93ec: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c93ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c93f0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1c93f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c93f4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1c93f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c93f8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c93f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c93fc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1c93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9400: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1c9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9404: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c9404u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c9408: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c9408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c940c: 0x0  nop
    ctx->pc = 0x1c940cu;
    // NOP
    // 0x1c9410: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c9410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9414: 0x0  nop
    ctx->pc = 0x1c9414u;
    // NOP
    // 0x1c9418: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x1C9418u;
    {
        const bool branch_taken_0x1c9418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9418u;
        // 0x1c941c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9418) {
            ctx->pc = 0x1C961Cu;
            goto label_1c961c;
        }
    }
    ctx->pc = 0x1C9420u;
    // 0x1c9420: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1c9424: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c9424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9428: 0xc078d78  jal         func_1E35E0
    ctx->pc = 0x1C9428u;
    SET_GPR_U32(ctx, 31, 0x1C9430u);
    ctx->pc = 0x1C942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9428u;
    // 0x1c942c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E35E0u, 0x1C9428u, 0x1C9430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9430u;
label_1c9430:
    // 0x1c9430: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c9430u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c9434: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C9434u;
    SET_GPR_U32(ctx, 31, 0x1C943Cu);
    ctx->pc = 0x1C9438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9434u;
    // 0x1c9438: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C9434u, 0x1C943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C943Cu;
label_1c943c:
    // 0x1c943c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x1c943cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x1c9440: 0xc6e40020  lwc1        $f4, 0x20($s7)
    ctx->pc = 0x1c9440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c9444: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1c9444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9448: 0x0  nop
    ctx->pc = 0x1c9448u;
    // NOP
    // 0x1c944c: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
    ctx->pc = 0x1C944Cu;
    {
        const bool branch_taken_0x1c944c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c944c) {
            ctx->pc = 0x1C9450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C944Cu;
            // 0x1c9450: 0xe6950000  swc1        $f21, 0x0($s4) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C94F4u;
            goto label_1c94f4;
        }
    }
    ctx->pc = 0x1C9454u;
    // 0x1c9454: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x1c9454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9458: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1c9458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c945c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1c945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9460: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1c9460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9464: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1c9464u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1c9468: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c9468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c946c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1c946cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c9470: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1c9470u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1c9474: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1c9474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1c9478: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1c9478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c947c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1c947cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c9480: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1c9480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c9484: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c9484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c9488: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c9488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c948c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c948cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9490: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c9490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9494: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c9494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9498: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1c9498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c949c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c94a0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1c94a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c94a4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1c94a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c94a8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1c94a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c94ac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c94acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c94b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c94b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c94b4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c94b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c94b8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c94b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c94bc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c94bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c94c0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c94c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c94c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c94c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c94c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c94ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94d0: 0xc078d86  jal         func_1E3618
    ctx->pc = 0x1C94D0u;
    SET_GPR_U32(ctx, 31, 0x1C94D8u);
    ctx->pc = 0x1C94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94D0u;
    // 0x1c94d4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3618u, 0x1C94D0u, 0x1C94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94D8u;
label_1c94d8:
    // 0x1c94d8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C94D8u;
    {
        const bool branch_taken_0x1c94d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94D8u;
        // 0x1c94dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94d8) {
            ctx->pc = 0x1C9570u;
            goto label_1c9570;
        }
    }
    ctx->pc = 0x1C94E0u;
    // 0x1c94e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c94e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c94e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c94e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c94e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c94e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94ec: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C94ECu;
    {
        const bool branch_taken_0x1c94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94ECu;
        // 0x1c94f0: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94ec) {
            ctx->pc = 0x1C961Cu;
            goto label_1c961c;
        }
    }
    ctx->pc = 0x1C94F4u;
label_1c94f4:
    // 0x1c94f4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1c94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c94f8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1c94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c94fc: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x1c94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9500: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1c9500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9504: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c9504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c9508: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c9508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c950c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c950cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c9510: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1c9510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1c9514: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c9514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c9518: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1c9518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c951c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c951cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c9520: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1c9520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c9524: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c9524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c9528: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c9528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c952c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c952cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9530: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c9530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9534: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c9534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9538: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1c9538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c953c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c9540: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1c9540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9544: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1c9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9548: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1c9548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c954c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c954cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c9550: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c9550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c9554: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c9554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c9558: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c9558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c955c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c955cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9560: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9564: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1c9564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c956c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9570:
    // 0x1c9570: 0xc078dca  jal         func_1E3728
    ctx->pc = 0x1C9570u;
    SET_GPR_U32(ctx, 31, 0x1C9578u);
    ctx->pc = 0x1C9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9570u;
    // 0x1c9574: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3728u, 0x1C9570u, 0x1C9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9578u;
label_1c9578:
    // 0x1c9578: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C9578u;
    {
        const bool branch_taken_0x1c9578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9578) {
            ctx->pc = 0x1C957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9578u;
            // 0x1c957c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9610u;
            goto label_1c9610;
        }
    }
    ctx->pc = 0x1C9580u;
    // 0x1c9580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9588: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1c9588u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1c958c: 0xc079282  jal         func_1E4A08
    ctx->pc = 0x1C958Cu;
    SET_GPR_U32(ctx, 31, 0x1C9594u);
    ctx->pc = 0x1C9590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C958Cu;
    // 0x1c9590: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4A08u, 0x1C958Cu, 0x1C9594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9594u;
label_1c9594:
    // 0x1c9594: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1c9594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9598: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1c9598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c959c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1c959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c95a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c95a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c95a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c95a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c95a8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1c95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1c95ac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c95acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c95b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1c95b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c95b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1c95b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c95b8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1c95b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c95bc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c95bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c95c0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c95c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c95c4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c95c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c95c8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c95c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c95cc: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1c95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c95d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c95d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95d4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1c95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c95d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c95d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95dc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1c95dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c95e0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1c95e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95e4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c95e8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1c95e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95ec: 0xc6ec0020  lwc1        $f12, 0x20($s7)
    ctx->pc = 0x1c95ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c95f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c95f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95f4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1c95f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c95f8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1c95f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c95fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c95fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c9600: 0xc079304  jal         func_1E4C10
    ctx->pc = 0x1C9600u;
    SET_GPR_U32(ctx, 31, 0x1C9608u);
    ctx->pc = 0x1C9604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9600u;
    // 0x1c9604: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4C10u, 0x1C9600u, 0x1C9608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9608u;
label_1c9608:
    // 0x1c9608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9608u;
    {
        const bool branch_taken_0x1c9608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9608u;
        // 0x1c960c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9608) {
            ctx->pc = 0x1C961Cu;
            goto label_1c961c;
        }
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c9610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9614: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1c9614u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c961c:
    // 0x1c961c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c961cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9620: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c9620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c9624: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c9624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9628: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c9628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c962c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c962cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9630: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c9634: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c9634u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9638: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1c9638u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c963c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1c963cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c9640: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1c9640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9644: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1c9644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c9648: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1c9648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c964c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C964Cu;
        // 0x1c9650: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C964Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9654u;
    // 0x1c9654: 0x0  nop
    ctx->pc = 0x1c9654u;
    // NOP
    ctx->pc = 0x1c9658u;
}
