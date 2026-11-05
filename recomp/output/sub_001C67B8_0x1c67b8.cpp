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

// Function: sub_001C67B8
// Address: 0x1c67b8 - 0x1c6b60
void sub_001C67B8_0x1c67b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C67B8_0x1c67b8");
#endif

    switch (ctx->pc) {
        case 0x1c67f4u: goto label_1c67f4;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6818u: goto label_1c6818;
        case 0x1c6820u: goto label_1c6820;
        case 0x1c6868u: goto label_1c6868;
        case 0x1c6954u: goto label_1c6954;
        case 0x1c6980u: goto label_1c6980;
        case 0x1c6a78u: goto label_1c6a78;
        case 0x1c6af8u: goto label_1c6af8;
        case 0x1c6b20u: goto label_1c6b20;
        default: break;
    }

    ctx->pc = 0x1c67b8u;

    // 0x1c67b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c67b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c67bc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c67bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c67c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c67c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c67c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c67c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67c8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c67cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c67ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c67d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c67d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c67d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67d8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c67d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c67dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c67dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67e0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c67e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c67e4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1c67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1c67e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c67e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c67ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C67ECu;
    SET_GPR_U32(ctx, 31, 0x1C67F4u);
    ctx->pc = 0x1C67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67ECu;
    // 0x1c67f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C67ECu, 0x1C67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67F4u;
label_1c67f4:
    // 0x1c67f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C67F4u;
    SET_GPR_U32(ctx, 31, 0x1C67FCu);
    ctx->pc = 0x1C67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67F4u;
    // 0x1c67f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C67F4u, 0x1C67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67FCu;
label_1c67fc:
    // 0x1c67fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c6800: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c6800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c6804: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C6804u;
    {
        const bool branch_taken_0x1c6804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6804u;
        // 0x1c6808: 0xc454c750  lwc1        $f20, -0x38B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6804) {
            ctx->pc = 0x1C6888u;
            goto label_1c6888;
        }
    }
    ctx->pc = 0x1C680Cu;
    // 0x1c680c: 0x26740320  addiu       $s4, $s3, 0x320
    ctx->pc = 0x1c680cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x1c6810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6814: 0x0  nop
    ctx->pc = 0x1c6814u;
    // NOP
label_1c6818:
    // 0x1c6818: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1C6818u;
    SET_GPR_U32(ctx, 31, 0x1C6820u);
    ctx->pc = 0x1C681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6818u;
    // 0x1c681c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1C6818u, 0x1C6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6820u;
label_1c6820:
    // 0x1c6820: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c6824: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1c6824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c6828: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c6828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c682c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c682cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6830: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6834: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6838: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c683c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6840: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c6840u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c6844: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c6844u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c6848: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c6848u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c684c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c684cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6850: 0x0  nop
    ctx->pc = 0x1c6850u;
    // NOP
    // 0x1c6854: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6854u;
    {
        const bool branch_taken_0x1c6854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6854u;
        // 0x1c6858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6854) {
            ctx->pc = 0x1C6874u;
            goto label_1c6874;
        }
    }
    ctx->pc = 0x1C685Cu;
    // 0x1c685c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c685cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c6860: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1C6860u;
    SET_GPR_U32(ctx, 31, 0x1C6868u);
    ctx->pc = 0x1C6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6860u;
    // 0x1c6864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1C6860u, 0x1C6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6868u;
label_1c6868:
    // 0x1c6868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c686c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c686cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6870: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c6870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c6874:
    // 0x1c6874: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c6874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c6878: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c6878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c687c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1c687cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c6880: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C6880u;
    {
        const bool branch_taken_0x1c6880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6880u;
        // 0x1c6884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6880) {
            ctx->pc = 0x1C6818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6818;
        }
    }
    ctx->pc = 0x1C6888u;
label_1c6888:
    // 0x1c6888: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x1c6888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1c688c: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1c688cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6890: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1c6890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6894: 0x50e2001c  beql        $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6894u;
    {
        const bool branch_taken_0x1c6894 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6894) {
            ctx->pc = 0x1C6898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6894u;
            // 0x1c6898: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6908u;
            goto label_1c6908;
        }
    }
    ctx->pc = 0x1C689Cu;
    // 0x1c689c: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C689Cu;
    {
        const bool branch_taken_0x1c689c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C689Cu;
        // 0x1c68a0: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c689c) {
            ctx->pc = 0x1C68F8u;
            goto label_1c68f8;
        }
    }
    ctx->pc = 0x1C68A4u;
    // 0x1c68a4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1c68a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c68a8: 0x24e50040  addiu       $a1, $a3, 0x40
    ctx->pc = 0x1c68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1c68ac: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x1c68acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c68b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c68b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c68b4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1c68b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c68b8: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1c68b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c68bc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1c68bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c68c0: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1c68c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c68c4: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1c68c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1c68c8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x1c68c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c68cc: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c68ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c68d0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1c68d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c68d4: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x1c68d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x1c68d8: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1c68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c68dc: 0xe4e10040  swc1        $f1, 0x40($a3)
    ctx->pc = 0x1c68dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x1c68e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1c68e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c68e4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c68e8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c68ec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c68ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c68f0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1c68f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c68f4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1c68f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1c68f8:
    // 0x1c68f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c68fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1c68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1c6900: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1C6900u;
    {
        const bool branch_taken_0x1c6900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6900u;
        // 0x1c6904: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6900) {
            ctx->pc = 0x1C6B38u;
            goto label_1c6b38;
        }
    }
    ctx->pc = 0x1C6908u;
label_1c6908:
    // 0x1c6908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c690c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1c690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1c6910: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x1c6910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x1c6914: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c6914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c6918: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c691c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6920: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c6920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c6924: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c6924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c6928: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1c6928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c692c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c692cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c6930: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1c6930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1c6934: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x1c6934u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1c6938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c6938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c693c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1c693cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6940: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6940u;
    {
        const bool branch_taken_0x1c6940 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6940u;
        // 0x1c6944: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6940) {
            ctx->pc = 0x1C695Cu;
            goto label_1c695c;
        }
    }
    ctx->pc = 0x1C6948u;
    // 0x1c6948: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1c6948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c694c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C694Cu;
    SET_GPR_U32(ctx, 31, 0x1C6954u);
    ctx->pc = 0x1C6950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C694Cu;
    // 0x1c6950: 0x2842018  mult        $a0, $s4, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C694Cu, 0x1C6954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6954u;
label_1c6954:
    // 0x1c6954: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6954u;
    {
        const bool branch_taken_0x1c6954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6954u;
        // 0x1c6958: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6954) {
            ctx->pc = 0x1C6964u;
            goto label_1c6964;
        }
    }
    ctx->pc = 0x1C695Cu;
label_1c695c:
    // 0x1c695c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c695cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6964:
    // 0x1c6964: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1c6964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6968: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1c6968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c696c: 0x10f3001f  beq         $a3, $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C696Cu;
    {
        const bool branch_taken_0x1c696c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C696Cu;
        // 0x1c6970: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c696c) {
            ctx->pc = 0x1C69ECu;
            goto label_1c69ec;
        }
    }
    ctx->pc = 0x1C6974u;
    // 0x1c6974: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c6974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c6978: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x1c6978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1c697c: 0x0  nop
    ctx->pc = 0x1c697cu;
    // NOP
label_1c6980:
    // 0x1c6980: 0x51000016  beql        $t0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C6980u;
    {
        const bool branch_taken_0x1c6980 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6980) {
            ctx->pc = 0x1C6984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6980u;
            // 0x1c6984: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C69DCu;
            goto label_1c69dc;
        }
    }
    ctx->pc = 0x1C6988u;
    // 0x1c6988: 0x90a2ffc0  lbu         $v0, -0x40($a1)
    ctx->pc = 0x1c6988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x1c698c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1c698cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6990: 0x90c3ffc0  lbu         $v1, -0x40($a2)
    ctx->pc = 0x1c6990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967232)));
    // 0x1c6994: 0xa0a3ffc0  sb          $v1, -0x40($a1)
    ctx->pc = 0x1c6994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967232), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6998: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x1c6998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c699c: 0xa0a4ffc0  sb          $a0, -0x40($a1)
    ctx->pc = 0x1c699cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967232), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c69a0: 0x78c2ffd0  lq          $v0, -0x30($a2)
    ctx->pc = 0x1c69a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 4294967248)));
    // 0x1c69a4: 0x7ca2ffd0  sq          $v0, -0x30($a1)
    ctx->pc = 0x1c69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294967248), GPR_VEC(ctx, 2));
    // 0x1c69a8: 0x78c3ffe0  lq          $v1, -0x20($a2)
    ctx->pc = 0x1c69a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 4294967264)));
    // 0x1c69ac: 0x7ca3ffe0  sq          $v1, -0x20($a1)
    ctx->pc = 0x1c69acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294967264), GPR_VEC(ctx, 3));
    // 0x1c69b0: 0xc4c0fff0  lwc1        $f0, -0x10($a2)
    ctx->pc = 0x1c69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c69b4: 0xe4a0fff0  swc1        $f0, -0x10($a1)
    ctx->pc = 0x1c69b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), bits); }
    // 0x1c69b8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1c69b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c69bc: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1c69bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c69c0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1c69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c69c4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c69c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c69c8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1c69c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c69cc: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c69ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c69d0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1c69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c69d4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1c69d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1c69d8: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x1c69d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_1c69dc:
    // 0x1c69dc: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x1c69dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1c69e0: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1c69e4: 0x14f3ffe6  bne         $a3, $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C69E4u;
    {
        const bool branch_taken_0x1c69e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69E4u;
        // 0x1c69e8: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69e4) {
            ctx->pc = 0x1C6980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6980;
        }
    }
    ctx->pc = 0x1C69ECu;
label_1c69ec:
    // 0x1c69ec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1c69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1c69f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c69f4: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C69F4u;
    {
        const bool branch_taken_0x1c69f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69F4u;
        // 0x1c69f8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69f4) {
            ctx->pc = 0x1C6A60u;
            goto label_1c6a60;
        }
    }
    ctx->pc = 0x1C69FCu;
    // 0x1c69fc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C69FCu;
    {
        const bool branch_taken_0x1c69fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69FCu;
        // 0x1c6a00: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69fc) {
            ctx->pc = 0x1C6A58u;
            goto label_1c6a58;
        }
    }
    ctx->pc = 0x1C6A04u;
    // 0x1c6a04: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1c6a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6a08: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c6a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c6a0c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x1c6a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6a10: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c6a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6a14: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c6a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6a18: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1c6a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6a1c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1c6a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6a20: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1c6a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c6a24: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1c6a24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1c6a28: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x1c6a28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c6a2c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x1c6a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x1c6a30: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1c6a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a34: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c6a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c6a38: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1c6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6a3c: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x1c6a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1c6a40: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1c6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a44: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c6a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c6a48: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6a4c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c6a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c6a50: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1c6a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a54: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1c6a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1c6a58:
    // 0x1c6a58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C6A58u;
    {
        const bool branch_taken_0x1c6a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A58u;
        // 0x1c6a5c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a58) {
            ctx->pc = 0x1C6AE0u;
            goto label_1c6ae0;
        }
    }
    ctx->pc = 0x1C6A60u;
label_1c6a60:
    // 0x1c6a60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c6a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a64: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6A64u;
    {
        const bool branch_taken_0x1c6a64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A64u;
        // 0x1c6a68: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a64) {
            ctx->pc = 0x1C6ADCu;
            goto label_1c6adc;
        }
    }
    ctx->pc = 0x1C6A6Cu;
    // 0x1c6a6c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c6a70: 0x26280040  addiu       $t0, $s1, 0x40
    ctx->pc = 0x1c6a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c6a74: 0x0  nop
    ctx->pc = 0x1c6a74u;
    // NOP
label_1c6a78:
    // 0x1c6a78: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6A78u;
    {
        const bool branch_taken_0x1c6a78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A78u;
        // 0x1c6a7c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a78) {
            ctx->pc = 0x1C6AD0u;
            goto label_1c6ad0;
        }
    }
    ctx->pc = 0x1C6A80u;
    // 0x1c6a80: 0x90a2ffc0  lbu         $v0, -0x40($a1)
    ctx->pc = 0x1c6a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x1c6a84: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1c6a84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6a88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c6a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6a8c: 0xa0a3ffc0  sb          $v1, -0x40($a1)
    ctx->pc = 0x1c6a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967232), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6a90: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x1c6a90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6a94: 0xa0a4ffc0  sb          $a0, -0x40($a1)
    ctx->pc = 0x1c6a94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967232), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6a98: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1c6a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c6a9c: 0x7ca2ffd0  sq          $v0, -0x30($a1)
    ctx->pc = 0x1c6a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294967248), GPR_VEC(ctx, 2));
    // 0x1c6aa0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x1c6aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c6aa4: 0x7ca3ffe0  sq          $v1, -0x20($a1)
    ctx->pc = 0x1c6aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294967264), GPR_VEC(ctx, 3));
    // 0x1c6aa8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1c6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6aac: 0xe4a0fff0  swc1        $f0, -0x10($a1)
    ctx->pc = 0x1c6aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), bits); }
    // 0x1c6ab0: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1c6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6ab4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1c6ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c6ab8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1c6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6abc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c6abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c6ac0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x1c6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6ac4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c6ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c6ac8: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1c6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6acc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1c6accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1c6ad0:
    // 0x1c6ad0: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x1c6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1c6ad4: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C6AD4u;
    {
        const bool branch_taken_0x1c6ad4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AD4u;
        // 0x1c6ad8: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ad4) {
            ctx->pc = 0x1C6A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6a78;
        }
    }
    ctx->pc = 0x1C6ADCu;
label_1c6adc:
    // 0x1c6adc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c6adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ae0:
    // 0x1c6ae0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6ae4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6ae8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6AE8u;
    {
        const bool branch_taken_0x1c6ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AE8u;
        // 0x1c6aec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ae8) {
            ctx->pc = 0x1C6B10u;
            goto label_1c6b10;
        }
    }
    ctx->pc = 0x1C6AF0u;
    // 0x1c6af0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1c6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1c6af4: 0x0  nop
    ctx->pc = 0x1c6af4u;
    // NOP
label_1c6af8:
    // 0x1c6af8: 0x0  nop
    ctx->pc = 0x1c6af8u;
    // NOP
    // 0x1c6afc: 0x0  nop
    ctx->pc = 0x1c6afcu;
    // NOP
    // 0x1c6b00: 0x0  nop
    ctx->pc = 0x1c6b00u;
    // NOP
    // 0x1c6b04: 0x0  nop
    ctx->pc = 0x1c6b04u;
    // NOP
    // 0x1c6b08: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C6B08u;
    {
        const bool branch_taken_0x1c6b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B08u;
        // 0x1c6b0c: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b08) {
            ctx->pc = 0x1C6AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6af8;
        }
    }
    ctx->pc = 0x1C6B10u;
label_1c6b10:
    // 0x1c6b10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6B10u;
    {
        const bool branch_taken_0x1c6b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B10u;
        // 0x1c6b14: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b10) {
            ctx->pc = 0x1C6B24u;
            goto label_1c6b24;
        }
    }
    ctx->pc = 0x1C6B18u;
    // 0x1c6b18: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C6B18u;
    SET_GPR_U32(ctx, 31, 0x1C6B20u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C6B18u, 0x1C6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B20u;
label_1c6b20:
    // 0x1c6b20: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1c6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1c6b24:
    // 0x1c6b24: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x1c6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x1c6b28: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x1c6b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c6b2c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1c6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1c6b30: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1c6b34: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1c6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1c6b38:
    // 0x1c6b38: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c6b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6b3c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c6b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b40: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c6b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6b44: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c6b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c6b48: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c6b48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6b4c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1c6b4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6b50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c6b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6b54: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c6b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B58u;
        // 0x1c6b5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B60u;
}
