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

// Function: sub_001DC850
// Address: 0x1dc850 - 0x1dc9f8
void sub_001DC850_0x1dc850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC850_0x1dc850");
#endif

    switch (ctx->pc) {
        case 0x1dc878u: goto label_1dc878;
        default: break;
    }

    ctx->pc = 0x1dc850u;

    // 0x1dc850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc854: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dc854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dc858: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dc858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dc85c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc860: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dc860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dc864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dc864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc868: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dc868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dc86c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dc86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc870: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DC870u;
    SET_GPR_U32(ctx, 31, 0x1DC878u);
    ctx->pc = 0x1DC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC870u;
    // 0x1dc874: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DC870u, 0x1DC878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC878u;
label_1dc878:
    // 0x1dc878: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1dc878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1dc87c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1dc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc880: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1dc880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dc884: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc888: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dc888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc88c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dc88cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc890: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc890u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc894: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dc894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc898: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1dc898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1dc89c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dc89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc8a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc8a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc8a8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dc8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc8b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc8b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc8b4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8b8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc8bc: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1dc8bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc8c0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1dc8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8c4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1dc8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1dc8c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc8cc: 0x0  nop
    ctx->pc = 0x1dc8ccu;
    // NOP
    // 0x1dc8d0: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x1DC8D0u;
    {
        const bool branch_taken_0x1dc8d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8D0u;
        // 0x1dc8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8d0) {
            ctx->pc = 0x1DC9D8u;
            goto label_1dc9d8;
        }
    }
    ctx->pc = 0x1DC8D8u;
    // 0x1dc8d8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1dc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1dc8dc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dc8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8e0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc8e4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc8e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc8e8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dc8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8ec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc8f0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc8f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc8f4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8f8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc8fc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dc8fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc904: 0x0  nop
    ctx->pc = 0x1dc904u;
    // NOP
    // 0x1dc908: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x1DC908u;
    {
        const bool branch_taken_0x1dc908 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC908u;
        // 0x1dc90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc908) {
            ctx->pc = 0x1DC9D8u;
            goto label_1dc9d8;
        }
    }
    ctx->pc = 0x1DC910u;
    // 0x1dc910: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1dc910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1dc914: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dc914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc918: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc91c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc91cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc920: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dc920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc924: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc928: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc928u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc92c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dc92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc930: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc934: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dc934u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc93c: 0x0  nop
    ctx->pc = 0x1dc93cu;
    // NOP
    // 0x1dc940: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1DC940u;
    {
        const bool branch_taken_0x1dc940 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC940u;
        // 0x1dc944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc940) {
            ctx->pc = 0x1DC9D8u;
            goto label_1dc9d8;
        }
    }
    ctx->pc = 0x1DC948u;
    // 0x1dc948: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dc94c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dc94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc950: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc954: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc954u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc958: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dc958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc95c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc960: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc960u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc964: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dc964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc968: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc96c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dc96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc974: 0x0  nop
    ctx->pc = 0x1dc974u;
    // NOP
    // 0x1dc978: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC978u;
    {
        const bool branch_taken_0x1dc978 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC978u;
        // 0x1dc97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc978) {
            ctx->pc = 0x1DC9D8u;
            goto label_1dc9d8;
        }
    }
    ctx->pc = 0x1DC980u;
    // 0x1dc980: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1dc980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1dc984: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc988: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc98c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc98cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc990: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dc990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc994: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc998: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc998u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc99c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dc99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc9a0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc9a4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dc9a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc9a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc9a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc9ac: 0x0  nop
    ctx->pc = 0x1dc9acu;
    // NOP
    // 0x1dc9b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC9B0u;
    {
        const bool branch_taken_0x1dc9b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B0u;
        // 0x1dc9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9b0) {
            ctx->pc = 0x1DC9D8u;
            goto label_1dc9d8;
        }
    }
    ctx->pc = 0x1DC9B8u;
    // 0x1dc9b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1dc9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc9bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1dc9bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc9c0: 0x0  nop
    ctx->pc = 0x1dc9c0u;
    // NOP
    // 0x1dc9c4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC9C4u;
    {
        const bool branch_taken_0x1dc9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc9c4) {
            ctx->pc = 0x1DC9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC9C4u;
            // 0x1dc9c8: 0xe6440000  swc1        $f4, 0x0($s2) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC9D4u;
            goto label_1dc9d4;
        }
    }
    ctx->pc = 0x1DC9CCu;
    // 0x1dc9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC9CCu;
    {
        const bool branch_taken_0x1dc9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9CCu;
        // 0x1dc9d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9cc) {
            ctx->pc = 0x1DC9DCu;
            goto label_1dc9dc;
        }
    }
    ctx->pc = 0x1DC9D4u;
label_1dc9d4:
    // 0x1dc9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc9d8:
    // 0x1dc9d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dc9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc9dc:
    // 0x1dc9dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dc9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc9e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dc9e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc9e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dc9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dc9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E8u;
        // 0x1dc9ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC9F0u;
    // 0x1dc9f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc9f4: 0x0  nop
    ctx->pc = 0x1dc9f4u;
    // NOP
    ctx->pc = 0x1dc9f8u;
}
