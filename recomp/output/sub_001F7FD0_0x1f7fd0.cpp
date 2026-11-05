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

// Function: sub_001F7FD0
// Address: 0x1f7fd0 - 0x1f8690
void sub_001F7FD0_0x1f7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7FD0_0x1f7fd0");
#endif

    switch (ctx->pc) {
        case 0x1f8038u: goto label_1f8038;
        case 0x1f8040u: goto label_1f8040;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f81c4u: goto label_1f81c4;
        case 0x1f82dcu: goto label_1f82dc;
        case 0x1f83f4u: goto label_1f83f4;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f8640u: goto label_1f8640;
        default: break;
    }

    ctx->pc = 0x1f7fd0u;

    // 0x1f7fd0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1f7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1f7fd4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7fd8: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1f7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1f7fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fe0: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1f7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1f7fe4: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1f7fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1f7fe8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f7fec: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1f7fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1f7ff0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7ff4: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1f7ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1f7ff8: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1f7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1f7ffc: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1f7ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x1f8000: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x1f8000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x1f8004: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1f8004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1f8008: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1f8008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1f800c: 0x8c4215f0  lw          $v0, 0x15F0($v0)
    ctx->pc = 0x1f800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5616)));
    // 0x1f8010: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1f8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f8014: 0x14640193  bne         $v1, $a0, . + 4 + (0x193 << 2)
    ctx->pc = 0x1F8014u;
    {
        const bool branch_taken_0x1f8014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8014u;
        // 0x1f8018: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8014) {
            ctx->pc = 0x1F8664u;
            goto label_1f8664;
        }
    }
    ctx->pc = 0x1F801Cu;
    // 0x1f801c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f801cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f8020: 0x2a0c2  srl         $s4, $v0, 3
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1f8024: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x1f8024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950216)));
    // 0x1f8028: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
    ctx->pc = 0x1F8028u;
    {
        const bool branch_taken_0x1f8028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8028u;
        // 0x1f802c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8028) {
            ctx->pc = 0x1F8660u;
            goto label_1f8660;
        }
    }
    ctx->pc = 0x1F8030u;
    // 0x1f8030: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F8030u;
    SET_GPR_U32(ctx, 31, 0x1F8038u);
    ctx->pc = 0x1F8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8030u;
    // 0x1f8034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F8030u, 0x1F8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8038u;
label_1f8038:
    // 0x1f8038: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F8038u;
    SET_GPR_U32(ctx, 31, 0x1F8040u);
    ctx->pc = 0x1F803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8038u;
    // 0x1f803c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F8038u, 0x1F8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8040u;
label_1f8040:
    // 0x1f8040: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1f8040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1f8044: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f8048: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1f8048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1f804c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1f804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1f8050: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1f8050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1f8054: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1f8054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8058: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1f8058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1f805c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1f805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1f8060: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f8064: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1f8064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1f8068: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1f8068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1f806c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1f806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1f8070: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f8070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8074: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f8074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8078: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1f8078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1f807c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1f807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1f8080: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1f8080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1f8084: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1f8084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1f8088: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f8088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f808c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8090: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8094: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1f8094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1f8098: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f8098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f809c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1f809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1f80a0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1F80A0u;
    SET_GPR_U32(ctx, 31, 0x1F80A8u);
    ctx->pc = 0x1F80A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80A0u;
    // 0x1f80a4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1F80A0u, 0x1F80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80A8u;
label_1f80a8:
    // 0x1f80a8: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x1f80a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1f80ac: 0x106000da  beqz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x1F80ACu;
    {
        const bool branch_taken_0x1f80ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80ACu;
        // 0x1f80b0: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80ac) {
            ctx->pc = 0x1F8418u;
            goto label_1f8418;
        }
    }
    ctx->pc = 0x1F80B4u;
    // 0x1f80b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f80b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f80b8: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1f80b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f80bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f80c0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f80c4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f80c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f80c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f80cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f80d0: 0x7a2200d0  lq          $v0, 0xD0($s1)
    ctx->pc = 0x1f80d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1f80d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f80d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f80d8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f80dc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1f80dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1f80e0: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x1f80e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f80e4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1f80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1f80e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f80e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f80ec: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1f80ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f80f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f80f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f80f4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f80f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f80f8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f80fc: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8100: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1f8100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8104: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1f8104u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1f8108: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f8108u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1f810c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1f810cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f8110: 0x0  nop
    ctx->pc = 0x1f8110u;
    // NOP
    // 0x1f8114: 0x0  nop
    ctx->pc = 0x1f8114u;
    // NOP
    // 0x1f8118: 0x46000044  c1          0x44
    ctx->pc = 0x1f8118u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f811c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1f811cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8120: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f8120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8124: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f8124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8128: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f8128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f812c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f812cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8130: 0x0  nop
    ctx->pc = 0x1f8130u;
    // NOP
    // 0x1f8134: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1F8134u;
    {
        const bool branch_taken_0x1f8134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8134u;
        // 0x1f8138: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8134) {
            ctx->pc = 0x1F8160u;
            goto label_1f8160;
        }
    }
    ctx->pc = 0x1F813Cu;
    // 0x1f813c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8144: 0x0  nop
    ctx->pc = 0x1f8144u;
    // NOP
    // 0x1f8148: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f8148u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f814c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f814cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8150: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f8150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8154: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f8154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f8158: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1f8158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f815c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f8160:
    // 0x1f8160: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f8160u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f8164: 0xc4e0fe44  lwc1        $f0, -0x1BC($a3)
    ctx->pc = 0x1f8164u;
    { uint32_t bits = FAST_READ32(0x45FE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8168: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f8168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f816c: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x1f816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x1f8170: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1f8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1f8174: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f8174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8178: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f8178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f817c: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1f817cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1f8180: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f8184: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f8184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f8188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f818c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f8190: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f8190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8194: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f8194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1f8198: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f8198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f819c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1f819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1f81a0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1f81a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81a4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1f81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1f81a8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f81a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1f81ac: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f81acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1f81b0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1f81b4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1f81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1f81b8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f81b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f81bc: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1F81BCu;
    SET_GPR_U32(ctx, 31, 0x1F81C4u);
    ctx->pc = 0x1F81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81BCu;
    // 0x1f81c0: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1F81BCu, 0x1F81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C4u;
label_1f81c4:
    // 0x1f81c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F81C4u;
    {
        const bool branch_taken_0x1f81c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81C4u;
        // 0x1f81c8: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81c4) {
            ctx->pc = 0x1F81E0u;
            goto label_1f81e0;
        }
    }
    ctx->pc = 0x1F81CCu;
    // 0x1f81cc: 0x0  nop
    ctx->pc = 0x1f81ccu;
    // NOP
    // 0x1f81d0: 0x0  nop
    ctx->pc = 0x1f81d0u;
    // NOP
    // 0x1f81d4: 0x46000004  c1          0x4
    ctx->pc = 0x1f81d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f81d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F81D8u;
    {
        const bool branch_taken_0x1f81d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D8u;
        // 0x1f81dc: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81d8) {
            ctx->pc = 0x1F81E4u;
            goto label_1f81e4;
        }
    }
    ctx->pc = 0x1F81E0u;
label_1f81e0:
    // 0x1f81e0: 0xe6340084  swc1        $f20, 0x84($s1)
    ctx->pc = 0x1f81e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_1f81e4:
    // 0x1f81e4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f81e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f81e8: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x1f81e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f81ec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f81f0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f81f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f81f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f81f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f81f8: 0x0  nop
    ctx->pc = 0x1f81f8u;
    // NOP
    // 0x1f81fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f81fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f8200: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1f8200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x1f8204: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1f8204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8208: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x1f8208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f820c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f8210: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1f8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1f8214: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1f8214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f8218: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1f8218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f821c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f821cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8220: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8224: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8228: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f822c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1f822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8230: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1f8230u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1f8234: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f8234u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1f8238: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1f8238u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f823c: 0x0  nop
    ctx->pc = 0x1f823cu;
    // NOP
    // 0x1f8240: 0x0  nop
    ctx->pc = 0x1f8240u;
    // NOP
    // 0x1f8244: 0x46000044  c1          0x44
    ctx->pc = 0x1f8244u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f8248: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f8248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f824c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f824cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8250: 0x0  nop
    ctx->pc = 0x1f8250u;
    // NOP
    // 0x1f8254: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f8254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8258: 0x0  nop
    ctx->pc = 0x1f8258u;
    // NOP
    // 0x1f825c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1F825Cu;
    {
        const bool branch_taken_0x1f825c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F825Cu;
        // 0x1f8260: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f825c) {
            ctx->pc = 0x1F8288u;
            goto label_1f8288;
        }
    }
    ctx->pc = 0x1F8264u;
    // 0x1f8264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f826c: 0x0  nop
    ctx->pc = 0x1f826cu;
    // NOP
    // 0x1f8270: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f8270u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f8274: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f8274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8278: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f8278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f827c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f827cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f8280: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1f8280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8284: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f8284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f8288:
    // 0x1f8288: 0xc680fe44  lwc1        $f0, -0x1BC($s4)
    ctx->pc = 0x1f8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294966852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f828c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f8290: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x1f8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x1f8294: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1f8294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1f8298: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f8298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f829c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f82a0: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1f82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1f82a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82a8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f82a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f82ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f82acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82b0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1f82b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f82b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82b8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1f82b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1f82bc: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1f82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1f82c0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1f82c4: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1f82c8: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f82c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1f82cc: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1f82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1f82d0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f82d4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1F82D4u;
    SET_GPR_U32(ctx, 31, 0x1F82DCu);
    ctx->pc = 0x1F82D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82D4u;
    // 0x1f82d8: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1F82D4u, 0x1F82DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82DCu;
label_1f82dc:
    // 0x1f82dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F82DCu;
    {
        const bool branch_taken_0x1f82dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82DCu;
        // 0x1f82e0: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82dc) {
            ctx->pc = 0x1F82F8u;
            goto label_1f82f8;
        }
    }
    ctx->pc = 0x1F82E4u;
    // 0x1f82e4: 0x0  nop
    ctx->pc = 0x1f82e4u;
    // NOP
    // 0x1f82e8: 0x0  nop
    ctx->pc = 0x1f82e8u;
    // NOP
    // 0x1f82ec: 0x46000004  c1          0x4
    ctx->pc = 0x1f82ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f82f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F82F0u;
    {
        const bool branch_taken_0x1f82f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82F0u;
        // 0x1f82f4: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82f0) {
            ctx->pc = 0x1F82FCu;
            goto label_1f82fc;
        }
    }
    ctx->pc = 0x1F82F8u;
label_1f82f8:
    // 0x1f82f8: 0xe6340088  swc1        $f20, 0x88($s1)
    ctx->pc = 0x1f82f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_1f82fc:
    // 0x1f82fc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f82fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8300: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x1f8300u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8304: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f8304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8308: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f8308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f830c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f830cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8310: 0x0  nop
    ctx->pc = 0x1f8310u;
    // NOP
    // 0x1f8314: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8318: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x1f8318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x1f831c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1f831cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8320: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x1f8320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1f8324: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f8324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f8328: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1f8328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1f832c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1f832cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f8330: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1f8330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f8334: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f8334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8338: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f8338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f833c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8340: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f8340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8344: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1f8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8348: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1f8348u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1f834c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f834cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1f8350: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1f8350u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f8354: 0x0  nop
    ctx->pc = 0x1f8354u;
    // NOP
    // 0x1f8358: 0x0  nop
    ctx->pc = 0x1f8358u;
    // NOP
    // 0x1f835c: 0x46000044  c1          0x44
    ctx->pc = 0x1f835cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f8360: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f8360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f8364: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f8364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8368: 0x0  nop
    ctx->pc = 0x1f8368u;
    // NOP
    // 0x1f836c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f836cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8370: 0x0  nop
    ctx->pc = 0x1f8370u;
    // NOP
    // 0x1f8374: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1F8374u;
    {
        const bool branch_taken_0x1f8374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8374u;
        // 0x1f8378: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8374) {
            ctx->pc = 0x1F83A0u;
            goto label_1f83a0;
        }
    }
    ctx->pc = 0x1F837Cu;
    // 0x1f837c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f837cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8384: 0x0  nop
    ctx->pc = 0x1f8384u;
    // NOP
    // 0x1f8388: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f8388u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f838c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f838cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8390: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f8390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8394: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f8394u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f8398: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1f8398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f839c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f83a0:
    // 0x1f83a0: 0xc680fe44  lwc1        $f0, -0x1BC($s4)
    ctx->pc = 0x1f83a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294966852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f83a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f83a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f83a8: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x1f83a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x1f83ac: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1f83acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1f83b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f83b4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f83b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f83b8: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1f83b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1f83bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f83bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f83c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83c4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f83c8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1f83cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f83ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83d0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1f83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1f83d4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1f83d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1f83d8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1f83dc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1f83e0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1f83e4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1f83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1f83e8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f83ec: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1F83ECu;
    SET_GPR_U32(ctx, 31, 0x1F83F4u);
    ctx->pc = 0x1F83F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83ECu;
    // 0x1f83f0: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1F83ECu, 0x1F83F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83F4u;
label_1f83f4:
    // 0x1f83f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F83F4u;
    {
        const bool branch_taken_0x1f83f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83F4u;
        // 0x1f83f8: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83f4) {
            ctx->pc = 0x1F8410u;
            goto label_1f8410;
        }
    }
    ctx->pc = 0x1F83FCu;
    // 0x1f83fc: 0x0  nop
    ctx->pc = 0x1f83fcu;
    // NOP
    // 0x1f8400: 0x0  nop
    ctx->pc = 0x1f8400u;
    // NOP
    // 0x1f8404: 0x46000004  c1          0x4
    ctx->pc = 0x1f8404u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f8408: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1F8408u;
    {
        const bool branch_taken_0x1f8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8408u;
        // 0x1f840c: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8408) {
            ctx->pc = 0x1F8660u;
            goto label_1f8660;
        }
    }
    ctx->pc = 0x1F8410u;
label_1f8410:
    // 0x1f8410: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1F8410u;
    {
        const bool branch_taken_0x1f8410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8410u;
        // 0x1f8414: 0xe6340094  swc1        $f20, 0x94($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8410) {
            ctx->pc = 0x1F8660u;
            goto label_1f8660;
        }
    }
    ctx->pc = 0x1F8418u;
label_1f8418:
    // 0x1f8418: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f8418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f841c: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1f841cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8420: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x1f8420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8424: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1f8424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8428: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f8428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f842c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f842cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8430: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f8430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f8434: 0x7a2200d0  lq          $v0, 0xD0($s1)
    ctx->pc = 0x1f8434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1f8438: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f843c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f8440: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1f8440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1f8444: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x1f8444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f8448: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1f8448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1f844c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f844cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8450: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1f8450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f8454: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f8454u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8458: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f8458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f845c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8460: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8464: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1f8464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8468: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1f8468u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1f846c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f846cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1f8470: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1f8470u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f8474: 0x0  nop
    ctx->pc = 0x1f8474u;
    // NOP
    // 0x1f8478: 0x0  nop
    ctx->pc = 0x1f8478u;
    // NOP
    // 0x1f847c: 0x46000044  c1          0x44
    ctx->pc = 0x1f847cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f8480: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1f8480u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8484: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f8484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8488: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f8488u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f848c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f848cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f8490: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f8490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8494: 0x0  nop
    ctx->pc = 0x1f8494u;
    // NOP
    // 0x1f8498: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1F8498u;
    {
        const bool branch_taken_0x1f8498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8498u;
        // 0x1f849c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8498) {
            ctx->pc = 0x1F84C4u;
            goto label_1f84c4;
        }
    }
    ctx->pc = 0x1F84A0u;
    // 0x1f84a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f84a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f84a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84a8: 0x0  nop
    ctx->pc = 0x1f84a8u;
    // NOP
    // 0x1f84ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f84acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f84b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f84b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f84b4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f84b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f84b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f84b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f84bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1f84bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f84c0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f84c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f84c4:
    // 0x1f84c4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f84c8: 0xc4e0fe44  lwc1        $f0, -0x1BC($a3)
    ctx->pc = 0x1f84c8u;
    { uint32_t bits = FAST_READ32(0x45FE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f84cc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f84ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f84d0: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x1f84d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x1f84d4: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1f84d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1f84d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f84dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f84dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f84e0: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1f84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1f84e4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f84e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f84e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f84ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84f0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f84f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f84f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84f8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1f84fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f84fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8500: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1f8500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1f8504: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1f8504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8508: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1f8508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1f850c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f850cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1f8510: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f8510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1f8514: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f8514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1f8518: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1f8518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1f851c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f8520: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1F8520u;
    SET_GPR_U32(ctx, 31, 0x1F8528u);
    ctx->pc = 0x1F8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8520u;
    // 0x1f8524: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1F8520u, 0x1F8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8528u;
label_1f8528:
    // 0x1f8528: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8528u;
    {
        const bool branch_taken_0x1f8528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8528u;
        // 0x1f852c: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8528) {
            ctx->pc = 0x1F8544u;
            goto label_1f8544;
        }
    }
    ctx->pc = 0x1F8530u;
    // 0x1f8530: 0x0  nop
    ctx->pc = 0x1f8530u;
    // NOP
    // 0x1f8534: 0x0  nop
    ctx->pc = 0x1f8534u;
    // NOP
    // 0x1f8538: 0x46000004  c1          0x4
    ctx->pc = 0x1f8538u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f853c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F853Cu;
    {
        const bool branch_taken_0x1f853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F853Cu;
        // 0x1f8540: 0xe620008c  swc1        $f0, 0x8C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f853c) {
            ctx->pc = 0x1F8548u;
            goto label_1f8548;
        }
    }
    ctx->pc = 0x1F8544u;
label_1f8544:
    // 0x1f8544: 0xe634008c  swc1        $f20, 0x8C($s1)
    ctx->pc = 0x1f8544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_1f8548:
    // 0x1f8548: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f8548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f854c: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x1f854cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8550: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8554: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f8558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f855c: 0x0  nop
    ctx->pc = 0x1f855cu;
    // NOP
    // 0x1f8560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8564: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x1f8564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x1f8568: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1f8568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f856c: 0x7a230060  lq          $v1, 0x60($s1)
    ctx->pc = 0x1f856cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1f8570: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f8570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f8574: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1f8574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1f8578: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1f8578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f857c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1f857cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f8580: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f8580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f8584: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f8584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8588: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f858c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8590: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1f8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f8594: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1f8594u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1f8598: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f8598u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1f859c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1f859cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f85a0: 0x0  nop
    ctx->pc = 0x1f85a0u;
    // NOP
    // 0x1f85a4: 0x0  nop
    ctx->pc = 0x1f85a4u;
    // NOP
    // 0x1f85a8: 0x46000044  c1          0x44
    ctx->pc = 0x1f85a8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f85ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f85acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f85b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f85b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f85b4: 0x0  nop
    ctx->pc = 0x1f85b4u;
    // NOP
    // 0x1f85b8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f85b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f85bc: 0x0  nop
    ctx->pc = 0x1f85bcu;
    // NOP
    // 0x1f85c0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1F85C0u;
    {
        const bool branch_taken_0x1f85c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85C0u;
        // 0x1f85c4: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85c0) {
            ctx->pc = 0x1F85ECu;
            goto label_1f85ec;
        }
    }
    ctx->pc = 0x1F85C8u;
    // 0x1f85c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f85c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f85cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f85ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f85d0: 0x0  nop
    ctx->pc = 0x1f85d0u;
    // NOP
    // 0x1f85d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f85d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f85d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f85d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f85dc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f85dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f85e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f85e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f85e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1f85e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f85e8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1f85e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f85ec:
    // 0x1f85ec: 0xc680fe44  lwc1        $f0, -0x1BC($s4)
    ctx->pc = 0x1f85ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294966852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f85f0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f85f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f85f4: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x1f85f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x1f85f8: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1f85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1f85fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8600: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f8600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f8604: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1f8604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1f8608: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f8608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f860c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f860cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8610: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f8610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f8614: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f8614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1f8618: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f8618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f861c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1f861cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1f8620: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1f8620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1f8624: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f8624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1f8628: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1f8628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1f862c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1f8630: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1f8630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1f8634: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f8634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f8638: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1F8638u;
    SET_GPR_U32(ctx, 31, 0x1F8640u);
    ctx->pc = 0x1F863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8638u;
    // 0x1f863c: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1F8638u, 0x1F8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8640u;
label_1f8640:
    // 0x1f8640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8640u;
    {
        const bool branch_taken_0x1f8640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8640u;
        // 0x1f8644: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8640) {
            ctx->pc = 0x1F865Cu;
            goto label_1f865c;
        }
    }
    ctx->pc = 0x1F8648u;
    // 0x1f8648: 0x0  nop
    ctx->pc = 0x1f8648u;
    // NOP
    // 0x1f864c: 0x0  nop
    ctx->pc = 0x1f864cu;
    // NOP
    // 0x1f8650: 0x46000004  c1          0x4
    ctx->pc = 0x1f8650u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f8654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8654u;
    {
        const bool branch_taken_0x1f8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8654u;
        // 0x1f8658: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8654) {
            ctx->pc = 0x1F8660u;
            goto label_1f8660;
        }
    }
    ctx->pc = 0x1F865Cu;
label_1f865c:
    // 0x1f865c: 0xe6340090  swc1        $f20, 0x90($s1)
    ctx->pc = 0x1f865cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_1f8660:
    // 0x1f8660: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1f8660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1f8664:
    // 0x1f8664: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1f8664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1f8668: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1f8668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f866c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1f866cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f8670: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1f8670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f8674: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1f8674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1f8678: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1f8678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f867c: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1f867cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f8680: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1f8680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f8684: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1f8684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8688: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8688u;
        // 0x1f868c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8690u;
}
