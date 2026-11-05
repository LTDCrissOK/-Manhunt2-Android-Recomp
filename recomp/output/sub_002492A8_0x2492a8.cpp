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

// Function: sub_002492A8
// Address: 0x2492a8 - 0x2493c8
void sub_002492A8_0x2492a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002492A8_0x2492a8");
#endif

    switch (ctx->pc) {
        case 0x2492c0u: goto label_2492c0;
        case 0x24931cu: goto label_24931c;
        case 0x24932cu: goto label_24932c;
        case 0x249378u: goto label_249378;
        case 0x24939cu: goto label_24939c;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b8u: goto label_2493b8;
        default: break;
    }

    ctx->pc = 0x2492a8u;

    // 0x2492a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2492a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2492ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2492acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2492b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2492b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2492b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2492b8: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2492B8u;
    SET_GPR_U32(ctx, 31, 0x2492C0u);
    ctx->pc = 0x2492BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492B8u;
    // 0x2492bc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2492B8u, 0x2492C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492C0u;
label_2492c0:
    // 0x2492c0: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2492C0u;
    {
        const bool branch_taken_0x2492c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2492c0) {
            ctx->pc = 0x2492C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492C0u;
            // 0x2492c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493BCu;
            goto label_2493bc;
        }
    }
    ctx->pc = 0x2492C8u;
    // 0x2492c8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2492c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2492cc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2492ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2492d0: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2492D0u;
    {
        const bool branch_taken_0x2492d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2492d0) {
            ctx->pc = 0x2492D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492D0u;
            // 0x2492d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493BCu;
            goto label_2493bc;
        }
    }
    ctx->pc = 0x2492D8u;
    // 0x2492d8: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x2492d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2492dc: 0x240207e8  addiu       $v0, $zero, 0x7E8
    ctx->pc = 0x2492dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
    // 0x2492e0: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2492e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2492e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2492e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2492ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2492ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2492f0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2492F0u;
    {
        const bool branch_taken_0x2492f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2492f0) {
            ctx->pc = 0x2492F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492F0u;
            // 0x2492f4: 0x92020298  lbu         $v0, 0x298($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249308u;
            goto label_249308;
        }
    }
    ctx->pc = 0x2492F8u;
    // 0x2492f8: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x2492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2492fc: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2492FCu;
    {
        const bool branch_taken_0x2492fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2492fc) {
            ctx->pc = 0x249300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492FCu;
            // 0x249300: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493BCu;
            goto label_2493bc;
        }
    }
    ctx->pc = 0x249304u;
    // 0x249304: 0x92020298  lbu         $v0, 0x298($s0)
    ctx->pc = 0x249304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
label_249308:
    // 0x249308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249308u;
    {
        const bool branch_taken_0x249308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249308) {
            ctx->pc = 0x249324u;
            goto label_249324;
        }
    }
    ctx->pc = 0x249310u;
    // 0x249310: 0x8ca401e4  lw          $a0, 0x1E4($a1)
    ctx->pc = 0x249310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x249314: 0xc092288  jal         func_248A20
    ctx->pc = 0x249314u;
    SET_GPR_U32(ctx, 31, 0x24931Cu);
    ctx->pc = 0x249318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249314u;
    // 0x249318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A20u, 0x249314u, 0x24931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24931Cu;
label_24931c:
    // 0x24931c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24931Cu;
    {
        const bool branch_taken_0x24931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24931Cu;
        // 0x249320: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24931c) {
            ctx->pc = 0x2493BCu;
            goto label_2493bc;
        }
    }
    ctx->pc = 0x249324u;
label_249324:
    // 0x249324: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x249324u;
    SET_GPR_U32(ctx, 31, 0x24932Cu);
    ctx->pc = 0x249328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249324u;
    // 0x249328: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x249324u, 0x24932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24932Cu;
label_24932c:
    // 0x24932c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x249330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249334: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x249334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x249338: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x249338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24933c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249348: 0x0  nop
    ctx->pc = 0x249348u;
    // NOP
    // 0x24934c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24934cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x249350: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x249350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249354: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x249354u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x249358: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x249358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24935c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249360: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x249364: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x249368: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x249368u;
    {
        const bool branch_taken_0x249368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x249368) {
            ctx->pc = 0x24936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249368u;
            // 0x24936c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493BCu;
            goto label_2493bc;
        }
    }
    ctx->pc = 0x249370u;
    // 0x249370: 0xc092432  jal         func_2490C8
    ctx->pc = 0x249370u;
    SET_GPR_U32(ctx, 31, 0x249378u);
    ctx->pc = 0x249374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249370u;
    // 0x249374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x249370u, 0x249378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249378u;
label_249378:
    // 0x249378: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x249378u;
    {
        const bool branch_taken_0x249378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249378) {
            ctx->pc = 0x24937Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249378u;
            // 0x24937c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493BCu;
            goto label_2493bc;
        }
    }
    ctx->pc = 0x249380u;
    // 0x249380: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x249380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249388: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x249388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24938c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249390: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x249390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x249394: 0xc0923b4  jal         func_248ED0
    ctx->pc = 0x249394u;
    SET_GPR_U32(ctx, 31, 0x24939Cu);
    ctx->pc = 0x249398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249394u;
    // 0x249398: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x248ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248ED0u, 0x249394u, 0x24939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24939Cu;
label_24939c:
    // 0x24939c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24939Cu;
    {
        const bool branch_taken_0x24939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2493A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24939Cu;
        // 0x2493a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24939c) {
            ctx->pc = 0x2493B8u;
            goto label_2493b8;
        }
    }
    ctx->pc = 0x2493A4u;
    // 0x2493a4: 0xc092542  jal         func_249508
    ctx->pc = 0x2493A4u;
    SET_GPR_U32(ctx, 31, 0x2493ACu);
    ctx->pc = 0x2493A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493A4u;
    // 0x2493a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249508u, 0x2493A4u, 0x2493ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493ACu;
label_2493ac:
    // 0x2493ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2493acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493b0: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2493B0u;
    SET_GPR_U32(ctx, 31, 0x2493B8u);
    ctx->pc = 0x2493B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493B0u;
    // 0x2493b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2493B0u, 0x2493B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493B8u;
label_2493b8:
    // 0x2493b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2493b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2493bc:
    // 0x2493bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2493bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2493c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2493C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C0u;
        // 0x2493c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2493C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2493C8u;
}
