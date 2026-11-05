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

// Function: sub_0019A458
// Address: 0x19a458 - 0x19a5a0
void sub_0019A458_0x19a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A458_0x19a458");
#endif

    switch (ctx->pc) {
        case 0x19a458u: goto label_19a458;
        case 0x19a45cu: goto label_19a45c;
        case 0x19a460u: goto label_19a460;
        case 0x19a464u: goto label_19a464;
        case 0x19a468u: goto label_19a468;
        case 0x19a46cu: goto label_19a46c;
        case 0x19a470u: goto label_19a470;
        case 0x19a474u: goto label_19a474;
        case 0x19a478u: goto label_19a478;
        case 0x19a47cu: goto label_19a47c;
        case 0x19a480u: goto label_19a480;
        case 0x19a484u: goto label_19a484;
        case 0x19a488u: goto label_19a488;
        case 0x19a48cu: goto label_19a48c;
        case 0x19a490u: goto label_19a490;
        case 0x19a494u: goto label_19a494;
        case 0x19a498u: goto label_19a498;
        case 0x19a49cu: goto label_19a49c;
        case 0x19a4a0u: goto label_19a4a0;
        case 0x19a4a4u: goto label_19a4a4;
        case 0x19a4a8u: goto label_19a4a8;
        case 0x19a4acu: goto label_19a4ac;
        case 0x19a4b0u: goto label_19a4b0;
        case 0x19a4b4u: goto label_19a4b4;
        case 0x19a4b8u: goto label_19a4b8;
        case 0x19a4bcu: goto label_19a4bc;
        case 0x19a4c0u: goto label_19a4c0;
        case 0x19a4c4u: goto label_19a4c4;
        case 0x19a4c8u: goto label_19a4c8;
        case 0x19a4ccu: goto label_19a4cc;
        case 0x19a4d0u: goto label_19a4d0;
        case 0x19a4d4u: goto label_19a4d4;
        case 0x19a4d8u: goto label_19a4d8;
        case 0x19a4dcu: goto label_19a4dc;
        case 0x19a4e0u: goto label_19a4e0;
        case 0x19a4e4u: goto label_19a4e4;
        case 0x19a4e8u: goto label_19a4e8;
        case 0x19a4ecu: goto label_19a4ec;
        case 0x19a4f0u: goto label_19a4f0;
        case 0x19a4f4u: goto label_19a4f4;
        case 0x19a4f8u: goto label_19a4f8;
        case 0x19a4fcu: goto label_19a4fc;
        case 0x19a500u: goto label_19a500;
        case 0x19a504u: goto label_19a504;
        case 0x19a508u: goto label_19a508;
        case 0x19a50cu: goto label_19a50c;
        case 0x19a510u: goto label_19a510;
        case 0x19a514u: goto label_19a514;
        case 0x19a518u: goto label_19a518;
        case 0x19a51cu: goto label_19a51c;
        case 0x19a520u: goto label_19a520;
        case 0x19a524u: goto label_19a524;
        case 0x19a528u: goto label_19a528;
        case 0x19a52cu: goto label_19a52c;
        case 0x19a530u: goto label_19a530;
        case 0x19a534u: goto label_19a534;
        case 0x19a538u: goto label_19a538;
        case 0x19a53cu: goto label_19a53c;
        case 0x19a540u: goto label_19a540;
        case 0x19a544u: goto label_19a544;
        case 0x19a548u: goto label_19a548;
        case 0x19a54cu: goto label_19a54c;
        case 0x19a550u: goto label_19a550;
        case 0x19a554u: goto label_19a554;
        case 0x19a558u: goto label_19a558;
        case 0x19a55cu: goto label_19a55c;
        case 0x19a560u: goto label_19a560;
        case 0x19a564u: goto label_19a564;
        case 0x19a568u: goto label_19a568;
        case 0x19a56cu: goto label_19a56c;
        case 0x19a570u: goto label_19a570;
        case 0x19a574u: goto label_19a574;
        case 0x19a578u: goto label_19a578;
        case 0x19a57cu: goto label_19a57c;
        case 0x19a580u: goto label_19a580;
        case 0x19a584u: goto label_19a584;
        case 0x19a588u: goto label_19a588;
        case 0x19a58cu: goto label_19a58c;
        case 0x19a590u: goto label_19a590;
        case 0x19a594u: goto label_19a594;
        case 0x19a598u: goto label_19a598;
        case 0x19a59cu: goto label_19a59c;
        default: break;
    }

    ctx->pc = 0x19a458u;

label_19a458:
    // 0x19a458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19a45c:
    // 0x19a45c: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19a460:
    // 0x19a460: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x19a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_19a464:
    // 0x19a464: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x19a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_19a468:
    // 0x19a468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a46c:
    // 0x19a46c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19a470:
    // 0x19a470: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19a470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19a474:
    // 0x19a474: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_19a478:
    // 0x19a478: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19a478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19a47c:
    // 0x19a47c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19a480:
    // 0x19a480: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x19a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19a484:
    // 0x19a484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19a488:
    // 0x19a488: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x19a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a48c:
    // 0x19a48c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19a490:
    // 0x19a490: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x19a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19a494:
    // 0x19a494: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a498:
    // 0x19a498: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x19a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a49c:
    // 0x19a49c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19a4a0:
    // 0x19a4a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19a4a4:
    // 0x19a4a4: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x19a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_19a4a8:
    // 0x19a4a8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19a4a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19a4ac:
    // 0x19a4ac: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x19a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_19a4b0:
    // 0x19a4b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19a4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19a4b4:
    // 0x19a4b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19a4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19a4b8:
    // 0x19a4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19a4bc:
    // 0x19a4bc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x19a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_19a4c0:
    // 0x19a4c0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x19a4c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19a4c4:
    // 0x19a4c4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x19a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19a4c8:
    // 0x19a4c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19a4cc:
    if (ctx->pc == 0x19A4CCu) {
        ctx->pc = 0x19A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4C8u;
        // 0x19a4cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A4D0u;
        goto label_19a4d0;
    }
    ctx->pc = 0x19A4C8u;
    {
        const bool branch_taken_0x19a4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4C8u;
        // 0x19a4cc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4c8) {
            ctx->pc = 0x19A4E0u;
            goto label_19a4e0;
        }
    }
    ctx->pc = 0x19A4D0u;
label_19a4d0:
    // 0x19a4d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19a4d4:
    // 0x19a4d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19a4d8:
    // 0x19a4d8: 0x40f809  jalr        $v0
label_19a4dc:
    if (ctx->pc == 0x19A4DCu) {
        ctx->pc = 0x19A4E0u;
        goto label_19a4e0;
    }
    ctx->pc = 0x19A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A4E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A4D8u, 0x19A4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A4E0u;
label_19a4e0:
    // 0x19a4e0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x19a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19a4e4:
    // 0x19a4e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19a4e8:
    // 0x19a4e8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a4ec:
    // 0x19a4ec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x19a4ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a4f0:
    // 0x19a4f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19a4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a4f4:
    // 0x19a4f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19a4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a4f8:
    // 0x19a4f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19a4f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_19a4fc:
    // 0x19a4fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x19a4fcu;
    // VWAITQ (Q already resolved in this runtime)
label_19a500:
    // 0x19a500: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x19a500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19a504:
    // 0x19a504: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_19a508:
    // 0x19a508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19a50c:
    // 0x19a50c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x19a50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19a510:
    // 0x19a510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a514:
    // 0x19a514: 0xc06faee  jal         func_1BEBB8
label_19a518:
    if (ctx->pc == 0x19A518u) {
        ctx->pc = 0x19A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A514u;
        // 0x19a518: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A51Cu;
        goto label_19a51c;
    }
    ctx->pc = 0x19A514u;
    SET_GPR_U32(ctx, 31, 0x19A51Cu);
    ctx->pc = 0x19A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A514u;
    // 0x19a518: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x19A514u, 0x19A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A51Cu;
label_19a51c:
    // 0x19a51c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x19a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19a520:
    // 0x19a520: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a524:
    // 0x19a524: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x19a524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a528:
    // 0x19a528: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_19a52c:
    // 0x19a52c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19a530:
    // 0x19a530: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19a534:
    // 0x19a534: 0x40f809  jalr        $v0
label_19a538:
    if (ctx->pc == 0x19A538u) {
        ctx->pc = 0x19A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A534u;
        // 0x19a538: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A53Cu;
        goto label_19a53c;
    }
    ctx->pc = 0x19A534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A53Cu);
        ctx->pc = 0x19A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A534u;
        // 0x19a538: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A534u, 0x19A53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A53Cu;
label_19a53c:
    // 0x19a53c: 0xc061a16  jal         func_186858
label_19a540:
    if (ctx->pc == 0x19A540u) {
        ctx->pc = 0x19A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A53Cu;
        // 0x19a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A544u;
        goto label_19a544;
    }
    ctx->pc = 0x19A53Cu;
    SET_GPR_U32(ctx, 31, 0x19A544u);
    ctx->pc = 0x19A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A53Cu;
    // 0x19a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19A53Cu, 0x19A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A544u;
label_19a544:
    // 0x19a544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a548:
    // 0x19a548: 0xc06ee66  jal         func_1BB998
label_19a54c:
    if (ctx->pc == 0x19A54Cu) {
        ctx->pc = 0x19A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A548u;
        // 0x19a54c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A550u;
        goto label_19a550;
    }
    ctx->pc = 0x19A548u;
    SET_GPR_U32(ctx, 31, 0x19A550u);
    ctx->pc = 0x19A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A548u;
    // 0x19a54c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x19A548u, 0x19A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A550u;
label_19a550:
    // 0x19a550: 0xc061a16  jal         func_186858
label_19a554:
    if (ctx->pc == 0x19A554u) {
        ctx->pc = 0x19A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A550u;
        // 0x19a554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A558u;
        goto label_19a558;
    }
    ctx->pc = 0x19A550u;
    SET_GPR_U32(ctx, 31, 0x19A558u);
    ctx->pc = 0x19A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A550u;
    // 0x19a554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19A550u, 0x19A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A558u;
label_19a558:
    // 0x19a558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a55c:
    // 0x19a55c: 0xc06eebe  jal         func_1BBAF8
label_19a560:
    if (ctx->pc == 0x19A560u) {
        ctx->pc = 0x19A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A55Cu;
        // 0x19a560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A564u;
        goto label_19a564;
    }
    ctx->pc = 0x19A55Cu;
    SET_GPR_U32(ctx, 31, 0x19A564u);
    ctx->pc = 0x19A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A55Cu;
    // 0x19a560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19A55Cu, 0x19A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A564u;
label_19a564:
    // 0x19a564: 0xc061a16  jal         func_186858
label_19a568:
    if (ctx->pc == 0x19A568u) {
        ctx->pc = 0x19A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A564u;
        // 0x19a568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A56Cu;
        goto label_19a56c;
    }
    ctx->pc = 0x19A564u;
    SET_GPR_U32(ctx, 31, 0x19A56Cu);
    ctx->pc = 0x19A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A564u;
    // 0x19a568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19A564u, 0x19A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A56Cu;
label_19a56c:
    // 0x19a56c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19a56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19a570:
    // 0x19a570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a574:
    // 0x19a574: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_19a578:
    // 0x19a578: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x19a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
label_19a57c:
    // 0x19a57c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19a57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19a580:
    // 0x19a580: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19a584:
    // 0x19a584: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x19a584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_19a588:
    // 0x19a588: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x19a588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_19a58c:
    // 0x19a58c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19a58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19a590:
    // 0x19a590: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19a590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19a594:
    // 0x19a594: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x19a594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_19a598:
    // 0x19a598: 0x3e00008  jr          $ra
label_19a59c:
    if (ctx->pc == 0x19A59Cu) {
        ctx->pc = 0x19A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A598u;
        // 0x19a59c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A5A0u;
        goto label_fallthrough_0x19a598;
    }
    ctx->pc = 0x19A598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A598u;
        // 0x19a59c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a598:
    ctx->pc = 0x19A5A0u;
}
