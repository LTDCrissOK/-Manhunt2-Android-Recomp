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

// Function: sub_002537C8
// Address: 0x2537c8 - 0x253910
void sub_002537C8_0x2537c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002537C8_0x2537c8");
#endif

    switch (ctx->pc) {
        case 0x2537f4u: goto label_2537f4;
        case 0x253800u: goto label_253800;
        case 0x253810u: goto label_253810;
        case 0x2538a8u: goto label_2538a8;
        case 0x2538b4u: goto label_2538b4;
        default: break;
    }

    ctx->pc = 0x2537c8u;

    // 0x2537c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2537c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2537cc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2537ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2537d0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2537d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2537d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2537d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2537d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2537dc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2537dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2537e0: 0x3842003f  xori        $v0, $v0, 0x3F
    ctx->pc = 0x2537e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)63);
    // 0x2537e4: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2537E4u;
    {
        const bool branch_taken_0x2537e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537e4) {
            ctx->pc = 0x2537E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2537E4u;
            // 0x2537e8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2538FCu;
            goto label_2538fc;
        }
    }
    ctx->pc = 0x2537ECu;
    // 0x2537ec: 0xc095368  jal         func_254DA0
    ctx->pc = 0x2537ECu;
    SET_GPR_U32(ctx, 31, 0x2537F4u);
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x2537ECu, 0x2537F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537F4u;
label_2537f4:
    // 0x2537f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2537f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537f8: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x2537F8u;
    SET_GPR_U32(ctx, 31, 0x253800u);
    ctx->pc = 0x2537FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537F8u;
    // 0x2537fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x2537F8u, 0x253800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253800u;
label_253800:
    // 0x253800: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x253800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x253804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253808: 0xc06fc04  jal         func_1BF010
    ctx->pc = 0x253808u;
    SET_GPR_U32(ctx, 31, 0x253810u);
    ctx->pc = 0x25380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253808u;
    // 0x25380c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF010u, 0x253808u, 0x253810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253810u;
label_253810:
    // 0x253810: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x253810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253814: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x253814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253818: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x253818u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25381c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25381cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x253820: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x253820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x253824: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x253824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253828: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x253828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25382c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x25382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253830: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x253830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253834: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x253834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x253838: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x253838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25383c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25383cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x253840: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x253840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x253844: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x253844u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x253848: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x253848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25384c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253850: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x253850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x253854: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x253854u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x253858: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x253858u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25385c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x25385cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x253860: 0x46010044  c1          0x10044
    ctx->pc = 0x253860u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x253864: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x253864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x253868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25386c: 0x0  nop
    ctx->pc = 0x25386cu;
    // NOP
    // 0x253870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x253870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253874: 0x0  nop
    ctx->pc = 0x253874u;
    // NOP
    // 0x253878: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x253878u;
    {
        const bool branch_taken_0x253878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253878) {
            ctx->pc = 0x25387Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253878u;
            // 0x25387c: 0xde031020  ld          $v1, 0x1020($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2538BCu;
            goto label_2538bc;
        }
    }
    ctx->pc = 0x253880u;
    // 0x253880: 0x8e100fe8  lw          $s0, 0xFE8($s0)
    ctx->pc = 0x253880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25388c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x25388cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x253890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253894: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x253894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x253898: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x253898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x25389c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25389cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2538a0: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x2538A0u;
    SET_GPR_U32(ctx, 31, 0x2538A8u);
    ctx->pc = 0x2538A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538A0u;
    // 0x2538a4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x2538A0u, 0x2538A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538A8u;
label_2538a8:
    // 0x2538a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538ac: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x2538ACu;
    SET_GPR_U32(ctx, 31, 0x2538B4u);
    ctx->pc = 0x2538B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538ACu;
    // 0x2538b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x2538ACu, 0x2538B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538B4u;
label_2538b4:
    // 0x2538b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2538B4u;
    {
        const bool branch_taken_0x2538b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B4u;
        // 0x2538b8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538b4) {
            ctx->pc = 0x2538ECu;
            goto label_2538ec;
        }
    }
    ctx->pc = 0x2538BCu;
label_2538bc:
    // 0x2538bc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2538bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2538c0: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x2538c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x2538c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2538c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2538c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2538C8u;
    {
        const bool branch_taken_0x2538c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C8u;
        // 0x2538cc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538c8) {
            ctx->pc = 0x2538ECu;
            goto label_2538ec;
        }
    }
    ctx->pc = 0x2538D0u;
    // 0x2538d0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2538d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2538d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2538d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2538d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2538d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2538dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2538dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2538e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2538e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2538e4: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x2538e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    // 0x2538e8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2538e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2538ec:
    // 0x2538ec: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x2538ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x2538f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2538f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2538f4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2538f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2538f8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2538f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2538fc:
    // 0x2538fc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2538fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x253900: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x253900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253904: 0x3e00008  jr          $ra
    ctx->pc = 0x253904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253904u;
        // 0x253908: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25390Cu;
    // 0x25390c: 0x0  nop
    ctx->pc = 0x25390cu;
    // NOP
    ctx->pc = 0x253910u;
}
