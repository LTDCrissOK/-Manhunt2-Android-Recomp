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

// Function: sub_0015E720
// Address: 0x15e720 - 0x15ec10
void sub_0015E720_0x15e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E720_0x15e720");
#endif

    switch (ctx->pc) {
        case 0x15e764u: goto label_15e764;
        case 0x15e820u: goto label_15e820;
        case 0x15e83cu: goto label_15e83c;
        case 0x15e84cu: goto label_15e84c;
        case 0x15e854u: goto label_15e854;
        case 0x15e8f8u: goto label_15e8f8;
        case 0x15e918u: goto label_15e918;
        case 0x15e9d4u: goto label_15e9d4;
        case 0x15ea04u: goto label_15ea04;
        case 0x15eb00u: goto label_15eb00;
        case 0x15eba8u: goto label_15eba8;
        case 0x15ebc0u: goto label_15ebc0;
        case 0x15ebd4u: goto label_15ebd4;
        default: break;
    }

    ctx->pc = 0x15e720u;

    // 0x15e720: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x15e724: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x15e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x15e728: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x15e728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x15e72c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15e72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e730: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x15e730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x15e734: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15e734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e738: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e73c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x15e73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x15e740: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x15e740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x15e744: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x15e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x15e748: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x15e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x15e74c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x15e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x15e750: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x15e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x15e754: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x15e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x15e758: 0x7e400000  sq          $zero, 0x0($s2)
    ctx->pc = 0x15e758u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 0));
    // 0x15e75c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15E75Cu;
    SET_GPR_U32(ctx, 31, 0x15E764u);
    ctx->pc = 0x15E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E75Cu;
    // 0x15e760: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15E75Cu, 0x15E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E764u;
label_15e764:
    // 0x15e764: 0x8e6302e4  lw          $v1, 0x2E4($s3)
    ctx->pc = 0x15e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    // 0x15e768: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x15e768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e76c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15e76cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e770: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15e770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e774: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e778: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e77c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e780: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e784: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e784u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e788: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e788u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e78c: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x15e78cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e790: 0x46050144  c1          0x50144
    ctx->pc = 0x15e790u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x15e794: 0xc66002ec  lwc1        $f0, 0x2EC($s3)
    ctx->pc = 0x15e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e798: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e79c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x15e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e7a0: 0x0  nop
    ctx->pc = 0x15e7a0u;
    // NOP
    // 0x15e7a4: 0x0  nop
    ctx->pc = 0x15e7a4u;
    // NOP
    // 0x15e7a8: 0x46050103  div.s       $f4, $f0, $f5
    ctx->pc = 0x15e7a8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x15e7ac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x15e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e7b0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x15e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e7b4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x15e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7b8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x15e7b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x15e7bc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15e7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15e7c0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15e7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15e7c4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x15e7c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15e7c8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x15e7c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15e7cc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x15e7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x15e7d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15e7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15e7d4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x15e7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15e7d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x15e7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e7dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15e7dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e7e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15e7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e7e4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15e7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e7e8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x15e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7ec: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x15e7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e7f0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x15e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e7f8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x15e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e7fc: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x15e7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x15e800: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x15e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e804: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x15e804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e808: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15e80c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x15e80cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e810: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x15e810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15e814: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x15e814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15e818: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15E818u;
    SET_GPR_U32(ctx, 31, 0x15E820u);
    ctx->pc = 0x15E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E818u;
    // 0x15e81c: 0xe7a30028  swc1        $f3, 0x28($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15E818u, 0x15E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E820u;
label_15e820:
    // 0x15e820: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x15e820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e828: 0xc621c6a4  lwc1        $f1, -0x395C($s1)
    ctx->pc = 0x15e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15e830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15e834: 0xc057ec6  jal         func_15FB18
    ctx->pc = 0x15E834u;
    SET_GPR_U32(ctx, 31, 0x15E83Cu);
    ctx->pc = 0x15E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E834u;
    // 0x15e838: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB18u, 0x15E834u, 0x15E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E83Cu;
label_15e83c:
    // 0x15e83c: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x15E83Cu;
    {
        const bool branch_taken_0x15e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E83Cu;
        // 0x15e840: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e83c) {
            ctx->pc = 0x15EBB8u;
            goto label_15ebb8;
        }
    }
    ctx->pc = 0x15E844u;
    // 0x15e844: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15E844u;
    SET_GPR_U32(ctx, 31, 0x15E84Cu);
    ctx->pc = 0x15E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E844u;
    // 0x15e848: 0x8e7002e4  lw          $s0, 0x2E4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15E844u, 0x15E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E84Cu;
label_15e84c:
    // 0x15e84c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15E84Cu;
    SET_GPR_U32(ctx, 31, 0x15E854u);
    ctx->pc = 0x15E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E84Cu;
    // 0x15e850: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15E84Cu, 0x15E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E854u;
label_15e854:
    // 0x15e854: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x15e854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e858: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15e858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e85c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x15e85cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e860: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15e864: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x15e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x15e868: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e86c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x15e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x15e870: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x15e870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e874: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x15e874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e878: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15e878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e87c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x15e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e880: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x15e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e884: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x15e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e888: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x15e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e88c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e88cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e890: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e890u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e894: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15e894u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e898: 0x0  nop
    ctx->pc = 0x15e898u;
    // NOP
    // 0x15e89c: 0x0  nop
    ctx->pc = 0x15e89cu;
    // NOP
    // 0x15e8a0: 0x46010084  c1          0x10084
    ctx->pc = 0x15e8a0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x15e8a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15e8a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15e8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e8ac: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x15e8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x15e8b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15e8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e8b4: 0x0  nop
    ctx->pc = 0x15e8b4u;
    // NOP
    // 0x15e8b8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15E8B8u;
    {
        const bool branch_taken_0x15e8b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8B8u;
        // 0x15e8bc: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8b8) {
            ctx->pc = 0x15E8E4u;
            goto label_15e8e4;
        }
    }
    ctx->pc = 0x15E8C0u;
    // 0x15e8c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15e8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15e8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e8c8: 0x0  nop
    ctx->pc = 0x15e8c8u;
    // NOP
    // 0x15e8cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x15e8ccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x15e8d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15e8d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15e8d4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x15e8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15e8d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15e8d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15e8dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15e8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e8e0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x15e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_15e8e4:
    // 0x15e8e4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15e8e8: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x15e8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8f0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x15E8F0u;
    SET_GPR_U32(ctx, 31, 0x15E8F8u);
    ctx->pc = 0x15E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E8F0u;
    // 0x15e8f4: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x15E8F0u, 0x15E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E8F8u;
label_15e8f8:
    // 0x15e8f8: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x15e8f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8fc: 0xc620eed8  lwc1        $f0, -0x1128($s1)
    ctx->pc = 0x15e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294962904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e904: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x15e904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15e908: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e90c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x15e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15e910: 0xc077824  jal         func_1DE090
    ctx->pc = 0x15E910u;
    SET_GPR_U32(ctx, 31, 0x15E918u);
    ctx->pc = 0x15E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E910u;
    // 0x15e914: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x15E910u, 0x15E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E918u;
label_15e918:
    // 0x15e918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e91c: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x15E91Cu;
    {
        const bool branch_taken_0x15e91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E91Cu;
        // 0x15e920: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e91c) {
            ctx->pc = 0x15E9E4u;
            goto label_15e9e4;
        }
    }
    ctx->pc = 0x15E924u;
    // 0x15e924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15e928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15e928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e92c: 0x0  nop
    ctx->pc = 0x15e92cu;
    // NOP
    // 0x15e930: 0x0  nop
    ctx->pc = 0x15e930u;
    // NOP
    // 0x15e934: 0x46000144  c1          0x144
    ctx->pc = 0x15e934u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x15e938: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x15e938u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x15e93c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x15e93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e940: 0x0  nop
    ctx->pc = 0x15e940u;
    // NOP
    // 0x15e944: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15E944u;
    {
        const bool branch_taken_0x15e944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e944) {
            ctx->pc = 0x15E96Cu;
            goto label_15e96c;
        }
    }
    ctx->pc = 0x15E94Cu;
    // 0x15e94c: 0x8e6202e4  lw          $v0, 0x2E4($s3)
    ctx->pc = 0x15e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    // 0x15e950: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15e950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e954: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15e954u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e958: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15e958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15e95c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x15e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e960: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e964: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15E964u;
    {
        const bool branch_taken_0x15e964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E964u;
        // 0x15e968: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e964) {
            ctx->pc = 0x15E9CCu;
            goto label_15e9cc;
        }
    }
    ctx->pc = 0x15E96Cu;
label_15e96c:
    // 0x15e96c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e970: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e974: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15e974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e978: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e978u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e97c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e97cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e980: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15e980u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e984: 0x46000004  c1          0x4
    ctx->pc = 0x15e984u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x15e988: 0x0  nop
    ctx->pc = 0x15e988u;
    // NOP
    // 0x15e98c: 0x0  nop
    ctx->pc = 0x15e98cu;
    // NOP
    // 0x15e990: 0x46002903  div.s       $f4, $f5, $f0
    ctx->pc = 0x15e990u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x15e994: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x15e994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15e998: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15e998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e99c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x15e99cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15e9a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15e9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e9a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x15e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e9a8: 0x8e6202e4  lw          $v0, 0x2E4($s3)
    ctx->pc = 0x15e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    // 0x15e9ac: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e9b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15e9b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e9b4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15e9b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e9b8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15e9b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e9bc: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e9c0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15e9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15e9c4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x15e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e9c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e9cc:
    // 0x15e9cc: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15E9CCu;
    SET_GPR_U32(ctx, 31, 0x15E9D4u);
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15E9CCu, 0x15E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E9D4u;
label_15e9d4:
    // 0x15e9d4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x15e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e9d8: 0xc6c1c6a4  lwc1        $f1, -0x395C($s6)
    ctx->pc = 0x15e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e9dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15e9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15e9e0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15e9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_15e9e4:
    // 0x15e9e4: 0x12200074  beqz        $s1, . + 4 + (0x74 << 2)
    ctx->pc = 0x15E9E4u;
    {
        const bool branch_taken_0x15e9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9e4) {
            ctx->pc = 0x15EBB8u;
            goto label_15ebb8;
        }
    }
    ctx->pc = 0x15E9ECu;
    // 0x15e9ec: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15E9ECu;
    {
        const bool branch_taken_0x15e9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9ec) {
            ctx->pc = 0x15E9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E9ECu;
            // 0x15e9f0: 0x8e6402e4  lw          $a0, 0x2E4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA18u;
            goto label_15ea18;
        }
    }
    ctx->pc = 0x15E9F4u;
    // 0x15e9f4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15e9f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15e9f8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x15e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e9fc: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15E9FCu;
    SET_GPR_U32(ctx, 31, 0x15EA04u);
    ctx->pc = 0x15EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E9FCu;
    // 0x15ea00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15E9FCu, 0x15EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA04u;
label_15ea04:
    // 0x15ea04: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x15ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ea08: 0xc6c1c6a4  lwc1        $f1, -0x395C($s6)
    ctx->pc = 0x15ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ea0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15ea0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15ea10: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15ea10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15ea14: 0x8e6402e4  lw          $a0, 0x2E4($s3)
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
label_15ea18:
    // 0x15ea18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x15ea18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ea1c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x15ea1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ea20: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x15ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x15ea24: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x15ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x15ea28: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x15ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ea2c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ea30: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15ea30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ea34: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15ea34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ea38: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15ea38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15ea3c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x15ea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ea40: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x15ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ea44: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x15ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ea48: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x15ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ea4c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15ea4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15ea50: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15ea50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15ea54: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15ea54u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15ea58: 0x0  nop
    ctx->pc = 0x15ea58u;
    // NOP
    // 0x15ea5c: 0x0  nop
    ctx->pc = 0x15ea5cu;
    // NOP
    // 0x15ea60: 0x46010084  c1          0x10084
    ctx->pc = 0x15ea60u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x15ea64: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x15ea64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x15ea68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ea68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea6c: 0x0  nop
    ctx->pc = 0x15ea6cu;
    // NOP
    // 0x15ea70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15ea70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ea74: 0x0  nop
    ctx->pc = 0x15ea74u;
    // NOP
    // 0x15ea78: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15EA78u;
    {
        const bool branch_taken_0x15ea78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA78u;
        // 0x15ea7c: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea78) {
            ctx->pc = 0x15EAA4u;
            goto label_15eaa4;
        }
    }
    ctx->pc = 0x15EA80u;
    // 0x15ea80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ea84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ea84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea88: 0x0  nop
    ctx->pc = 0x15ea88u;
    // NOP
    // 0x15ea8c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x15ea8cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x15ea90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15ea90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15ea94: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x15ea94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15ea98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15ea98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15ea9c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15ea9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15eaa0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x15eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_15eaa4:
    // 0x15eaa4: 0xc7c0eed8  lwc1        $f0, -0x1128($fp)
    ctx->pc = 0x15eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eaa8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x15eaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15eaac: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x15eaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x15eab0: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x15eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x15eab4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15eab8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15eabc: 0xaee20044  sw          $v0, 0x44($s7)
    ctx->pc = 0x15eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 2));
    // 0x15eac0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15eac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eac4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15eac8: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x15eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x15eacc: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x15eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x15ead0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ead4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x15ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x15ead8: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x15eadc: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x15eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x15eae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15eae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eae4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x15eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x15eae8: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x15eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x15eaec: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x15eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x15eaf0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x15eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x15eaf4: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x15eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x15eaf8: 0xc077dac  jal         func_1DF6B0
    ctx->pc = 0x15EAF8u;
    SET_GPR_U32(ctx, 31, 0x15EB00u);
    ctx->pc = 0x15EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAF8u;
    // 0x15eafc: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6B0u, 0x15EAF8u, 0x15EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB00u;
label_15eb00:
    // 0x15eb00: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x15EB00u;
    {
        const bool branch_taken_0x15eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB00u;
        // 0x15eb04: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb00) {
            ctx->pc = 0x15EBB8u;
            goto label_15ebb8;
        }
    }
    ctx->pc = 0x15EB08u;
    // 0x15eb08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15eb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15eb0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15eb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eb10: 0x0  nop
    ctx->pc = 0x15eb10u;
    // NOP
    // 0x15eb14: 0x0  nop
    ctx->pc = 0x15eb14u;
    // NOP
    // 0x15eb18: 0x46000144  c1          0x144
    ctx->pc = 0x15eb18u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x15eb1c: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x15eb1cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x15eb20: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x15eb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15eb24: 0x0  nop
    ctx->pc = 0x15eb24u;
    // NOP
    // 0x15eb28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15EB28u;
    {
        const bool branch_taken_0x15eb28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15eb28) {
            ctx->pc = 0x15EB44u;
            goto label_15eb44;
        }
    }
    ctx->pc = 0x15EB30u;
    // 0x15eb30: 0x8e6202e4  lw          $v0, 0x2E4($s3)
    ctx->pc = 0x15eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    // 0x15eb34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15eb34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15eb38: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15eb3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15EB3Cu;
    {
        const bool branch_taken_0x15eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb3c) {
            ctx->pc = 0x15EB98u;
            goto label_15eb98;
        }
    }
    ctx->pc = 0x15EB44u;
label_15eb44:
    // 0x15eb44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15eb48: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15eb4c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15eb50: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15eb50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15eb54: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15eb54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15eb58: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15eb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15eb5c: 0x46000004  c1          0x4
    ctx->pc = 0x15eb5cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x15eb60: 0x0  nop
    ctx->pc = 0x15eb60u;
    // NOP
    // 0x15eb64: 0x0  nop
    ctx->pc = 0x15eb64u;
    // NOP
    // 0x15eb68: 0x46002903  div.s       $f4, $f5, $f0
    ctx->pc = 0x15eb68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x15eb6c: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x15eb6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15eb70: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15eb70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eb74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x15eb74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15eb78: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15eb78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15eb7c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x15eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15eb80: 0x8e6202e4  lw          $v0, 0x2E4($s3)
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    // 0x15eb84: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x15eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15eb88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15eb88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15eb8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15eb8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15eb90: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15eb90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15eb94: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_15eb98:
    // 0x15eb98: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15eb98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15eb9c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x15eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15eba0: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15EBA0u;
    SET_GPR_U32(ctx, 31, 0x15EBA8u);
    ctx->pc = 0x15EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBA0u;
    // 0x15eba4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15EBA0u, 0x15EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBA8u;
label_15eba8:
    // 0x15eba8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x15eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ebac: 0xc6c1c6a4  lwc1        $f1, -0x395C($s6)
    ctx->pc = 0x15ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ebb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15ebb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15ebb4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15ebb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_15ebb8:
    // 0x15ebb8: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15EBB8u;
    SET_GPR_U32(ctx, 31, 0x15EBC0u);
    ctx->pc = 0x15EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBB8u;
    // 0x15ebbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15EBB8u, 0x15EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBC0u;
label_15ebc0:
    // 0x15ebc0: 0xc66c02ec  lwc1        $f12, 0x2EC($s3)
    ctx->pc = 0x15ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ebc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebc8: 0x8e6502e0  lw          $a1, 0x2E0($s3)
    ctx->pc = 0x15ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
    // 0x15ebcc: 0xc040f64  jal         func_103D90
    ctx->pc = 0x15EBCCu;
    SET_GPR_U32(ctx, 31, 0x15EBD4u);
    ctx->pc = 0x15EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBCCu;
    // 0x15ebd0: 0x460c6302  mul.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D90u, 0x15EBCCu, 0x15EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBD4u;
label_15ebd4:
    // 0x15ebd4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15EBD4u;
    {
        const bool branch_taken_0x15ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ebd4) {
            ctx->pc = 0x15EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EBD4u;
            // 0x15ebd8: 0x8e6202e0  lw          $v0, 0x2E0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EBDCu;
            goto label_15ebdc;
        }
    }
    ctx->pc = 0x15EBDCu;
label_15ebdc:
    // 0x15ebdc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x15ebdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15ebe0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x15ebe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x15ebe4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x15ebe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15ebe8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x15ebe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15ebec: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x15ebecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15ebf0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x15ebf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x15ebf4: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x15ebf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15ebf8: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x15ebf8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x15ebfc: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x15ebfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15ec00: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x15ec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x15ec04: 0x3e00008  jr          $ra
    ctx->pc = 0x15EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC04u;
        // 0x15ec08: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EC0Cu;
    // 0x15ec0c: 0x0  nop
    ctx->pc = 0x15ec0cu;
    // NOP
    ctx->pc = 0x15ec10u;
}
