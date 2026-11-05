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

// Function: sub_00352878
// Address: 0x352878 - 0x352b18
void sub_00352878_0x352878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352878_0x352878");
#endif

    switch (ctx->pc) {
        case 0x3528f0u: goto label_3528f0;
        case 0x352914u: goto label_352914;
        case 0x352950u: goto label_352950;
        case 0x352af4u: goto label_352af4;
        default: break;
    }

    ctx->pc = 0x352878u;

    // 0x352878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x352878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35287c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x352880: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x352880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x352884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x352884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352888: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x352888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35288c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x352890: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x352890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x352894: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x352894u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x352898: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x352898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35289c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x35289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3528a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3528A0u;
    {
        const bool branch_taken_0x3528a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3528A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3528A0u;
        // 0x3528a4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3528a0) {
            ctx->pc = 0x3528BCu;
            goto label_3528bc;
        }
    }
    ctx->pc = 0x3528A8u;
    // 0x3528a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3528a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3528ac: 0x0  nop
    ctx->pc = 0x3528acu;
    // NOP
    // 0x3528b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3528b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3528b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3528B4u;
    {
        const bool branch_taken_0x3528b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3528B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3528B4u;
        // 0x3528b8: 0xc6200144  lwc1        $f0, 0x144($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3528b4) {
            ctx->pc = 0x3528DCu;
            goto label_3528dc;
        }
    }
    ctx->pc = 0x3528BCu;
label_3528bc:
    // 0x3528bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3528bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3528c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3528c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3528c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3528c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3528c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3528c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3528cc: 0x0  nop
    ctx->pc = 0x3528ccu;
    // NOP
    // 0x3528d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3528d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3528d4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3528d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x3528d8: 0xc6200144  lwc1        $f0, 0x144($s1)
    ctx->pc = 0x3528d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3528dc:
    // 0x3528dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3528dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3528e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528e4: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x3528e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3528e8: 0xc0d17e8  jal         func_345FA0
    ctx->pc = 0x3528E8u;
    SET_GPR_U32(ctx, 31, 0x3528F0u);
    ctx->pc = 0x3528ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3528E8u;
    // 0x3528ec: 0x460c0542  mul.s       $f21, $f0, $f12 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x345FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345FA0u, 0x3528E8u, 0x3528F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3528F0u;
label_3528f0:
    // 0x3528f0: 0x8e300118  lw          $s0, 0x118($s1)
    ctx->pc = 0x3528f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x3528f4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3528f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x3528f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3528f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3528fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3528fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x352900: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x352900u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x352904: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x352904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x352908: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x352908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x35290c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x35290Cu;
    SET_GPR_U32(ctx, 31, 0x352914u);
    ctx->pc = 0x352910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35290Cu;
    // 0x352910: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x35290Cu, 0x352914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352914u;
label_352914:
    // 0x352914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x352914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x352918: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x352918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35291c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35291cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352920: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x352920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x352924: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x352924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352928: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352928u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35292c: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x35292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x352930: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x352930u;
    {
        const bool branch_taken_0x352930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352930u;
        // 0x352934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352930) {
            ctx->pc = 0x352AE4u;
            goto label_352ae4;
        }
    }
    ctx->pc = 0x352938u;
    // 0x352938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x352938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35293c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x35293cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x352940: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x352940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352944: 0x262800c0  addiu       $t0, $s1, 0xC0
    ctx->pc = 0x352944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x352948: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x352948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x35294c: 0x0  nop
    ctx->pc = 0x35294cu;
    // NOP
label_352950:
    // 0x352950: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x352950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x352954: 0xe61818  mult        $v1, $a3, $a2
    ctx->pc = 0x352954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x352958: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x352958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35295c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352960: 0x733021  addu        $a2, $v1, $s3
    ctx->pc = 0x352960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x352964: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x352964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x352968: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x35296c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x35296cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x352970: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x352970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x352974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352978: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x352978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35297c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x35297cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352980: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352984: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x352984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x352988: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x352988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35298c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x35298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x352990: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x352990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352994: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x352998: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35299c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35299cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3529a0: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3529a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x3529a4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x3529a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3529a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3529a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3529ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3529acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3529b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3529b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3529b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3529b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3529b8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3529b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529bc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3529bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3529c0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3529c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3529c4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x3529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3529c8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x3529c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3529ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3529d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3529d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3529d4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x3529d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x3529d8: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x3529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3529dc: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x3529dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3529e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3529e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3529e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3529e8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x3529e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x3529ec: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x3529ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3529f0: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x3529f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x3529f4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3529f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3529f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3529fc: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x3529fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x352a00: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x352a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a04: 0x8e24014c  lw          $a0, 0x14C($s1)
    ctx->pc = 0x352a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352a08: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x352a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x352a0c: 0xc6210144  lwc1        $f1, 0x144($s1)
    ctx->pc = 0x352a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352a10: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x352a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x352a14: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x352a14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x352a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x352a1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x352a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x352a20: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352a20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352a24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x352a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x352a28: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x352a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352a2c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352a30: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x352a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352a34: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x352a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a38: 0xc503000c  lwc1        $f3, 0xC($t0)
    ctx->pc = 0x352a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x352a3c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x352a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x352a40: 0xc62200c0  lwc1        $f2, 0xC0($s1)
    ctx->pc = 0x352a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352a44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x352a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x352a48: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x352a48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x352a4c: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352a50: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x352a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x352a54: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x352a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x352a58: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x352a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x352a5c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x352a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x352a60: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x352a60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x352a64: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x352a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x352a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352a6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352a70: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x352a70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352a74: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352a78: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352a78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352a7c: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352a80: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x352a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x352a84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x352a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352a88: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x352a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352a8c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x352a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352a90: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x352a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x352a94: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x352a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x352a98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x352a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352a9c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x352a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x352aa0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x352aa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x352aa4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x352aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x352aa8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x352aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x352aac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x352aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x352ab0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x352ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x352ab4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x352ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x352ab8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x352ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352abc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x352abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x352ac0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352ac4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x352ac4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352ac8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352acc: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x352accu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352ad0: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x352ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x352ad4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x352ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x352ad8: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x352ad8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x352adc: 0x5460ff9c  bnel        $v1, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x352ADCu;
    {
        const bool branch_taken_0x352adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352adc) {
            ctx->pc = 0x352AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352ADCu;
            // 0x352ae0: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352950;
        }
    }
    ctx->pc = 0x352AE4u;
label_352ae4:
    // 0x352ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x352ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352aec: 0xc0d18a2  jal         func_346288
    ctx->pc = 0x352AECu;
    SET_GPR_U32(ctx, 31, 0x352AF4u);
    ctx->pc = 0x352AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352AECu;
    // 0x352af0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x346288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346288u, 0x352AECu, 0x352AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352AF4u;
label_352af4:
    // 0x352af4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x352af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352af8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x352af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352afc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x352afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352b00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x352b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x352b04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x352b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352b08: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x352b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x352b0c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x352b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x352b10: 0x3e00008  jr          $ra
    ctx->pc = 0x352B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B10u;
        // 0x352b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352B18u;
}
