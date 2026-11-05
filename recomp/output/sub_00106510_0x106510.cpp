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

// Function: sub_00106510
// Address: 0x106510 - 0x106668
void sub_00106510_0x106510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106510_0x106510");
#endif

    switch (ctx->pc) {
        case 0x106540u: goto label_106540;
        case 0x106578u: goto label_106578;
        case 0x106580u: goto label_106580;
        case 0x10661cu: goto label_10661c;
        case 0x10664cu: goto label_10664c;
        default: break;
    }

    ctx->pc = 0x106510u;

    // 0x106510: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x106510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x106514: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x106514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x106518: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x106518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x10651c: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x10651cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x106520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106524: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x106524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x106528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106528u;
    {
        const bool branch_taken_0x106528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106528u;
        // 0x10652c: 0xffbf00f0  sd          $ra, 0xF0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106528) {
            ctx->pc = 0x106538u;
            goto label_106538;
        }
    }
    ctx->pc = 0x106530u;
    // 0x106530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106530u;
    {
        const bool branch_taken_0x106530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106530u;
        // 0x106534: 0xc6200034  lwc1        $f0, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106530) {
            ctx->pc = 0x106544u;
            goto label_106544;
        }
    }
    ctx->pc = 0x106538u;
label_106538:
    // 0x106538: 0xc0c4b0a  jal         func_312C28
    ctx->pc = 0x106538u;
    SET_GPR_U32(ctx, 31, 0x106540u);
    ctx->pc = 0x10653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106538u;
    // 0x10653c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C28u, 0x106538u, 0x106540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106540u;
label_106540:
    // 0x106540: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x106540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_106544:
    // 0x106544: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x106544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x106548: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x106548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x10654c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10654cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106550: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x106550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x106554: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x106554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x106558: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x106558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10655c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10655cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x106560: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x106560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106564: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x106564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106568: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x106568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10656c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x10656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x106570: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x106570u;
    SET_GPR_U32(ctx, 31, 0x106578u);
    ctx->pc = 0x106574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106570u;
    // 0x106574: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x106570u, 0x106578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106578u;
label_106578:
    // 0x106578: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x106578u;
    SET_GPR_U32(ctx, 31, 0x106580u);
    ctx->pc = 0x10657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106578u;
    // 0x10657c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x106578u, 0x106580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106580u;
label_106580:
    // 0x106580: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x106580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106584: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x106584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106588: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x106588u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10658c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x10658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106590: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x106590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x106594: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x106594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106598: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x106598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x10659c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x10659cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1065a0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1065a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1065a4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1065a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1065a8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1065a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1065ac: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1065acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1065b0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1065b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1065b4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1065b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1065b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1065b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1065bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1065bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1065c0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1065c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1065c4: 0x0  nop
    ctx->pc = 0x1065c4u;
    // NOP
    // 0x1065c8: 0x0  nop
    ctx->pc = 0x1065c8u;
    // NOP
    // 0x1065cc: 0x46010084  c1          0x10084
    ctx->pc = 0x1065ccu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1065d0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1065d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1065d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1065d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1065d8: 0x0  nop
    ctx->pc = 0x1065d8u;
    // NOP
    // 0x1065dc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1065dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1065e0: 0x0  nop
    ctx->pc = 0x1065e0u;
    // NOP
    // 0x1065e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1065E4u;
    {
        const bool branch_taken_0x1065e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1065E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E4u;
        // 0x1065e8: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065e4) {
            ctx->pc = 0x106610u;
            goto label_106610;
        }
    }
    ctx->pc = 0x1065ECu;
    // 0x1065ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1065ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1065f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1065f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1065f4: 0x0  nop
    ctx->pc = 0x1065f4u;
    // NOP
    // 0x1065f8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1065f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1065fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1065fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x106600: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x106600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106604: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x106604u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x106608: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x106608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10660c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x10660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_106610:
    // 0x106610: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x106610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x106614: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x106614u;
    SET_GPR_U32(ctx, 31, 0x10661Cu);
    ctx->pc = 0x106618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106614u;
    // 0x106618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x106614u, 0x10661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10661Cu;
label_10661c:
    // 0x10661c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x10661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x106620: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x106620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x106624: 0xc460a564  lwc1        $f0, -0x5A9C($v1)
    ctx->pc = 0x106624u;
    { uint32_t bits = FAST_READ32(0x43A564u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106628: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x106628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10662c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x10662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x106630: 0x34a5ff7f  ori         $a1, $a1, 0xFF7F
    ctx->pc = 0x106630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65407);
    // 0x106634: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x106634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x106638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x106638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10663c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10663cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106640: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x106640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x106644: 0xc077b2a  jal         func_1DECA8
    ctx->pc = 0x106644u;
    SET_GPR_U32(ctx, 31, 0x10664Cu);
    ctx->pc = 0x106648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106644u;
    // 0x106648: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DECA8u, 0x106644u, 0x10664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10664Cu;
label_10664c:
    // 0x10664c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10664cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106650: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x106650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x106654: 0xa2220038  sb          $v0, 0x38($s1)
    ctx->pc = 0x106654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x106658: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x106658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x10665c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x10665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x106660: 0x3e00008  jr          $ra
    ctx->pc = 0x106660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106660u;
        // 0x106664: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106668u;
}
