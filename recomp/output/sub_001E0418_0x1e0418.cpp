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

// Function: sub_001E0418
// Address: 0x1e0418 - 0x1e07c8
void sub_001E0418_0x1e0418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0418_0x1e0418");
#endif

    switch (ctx->pc) {
        case 0x1e0454u: goto label_1e0454;
        case 0x1e045cu: goto label_1e045c;
        case 0x1e0504u: goto label_1e0504;
        case 0x1e0710u: goto label_1e0710;
        case 0x1e07a0u: goto label_1e07a0;
        default: break;
    }

    ctx->pc = 0x1e0418u;

    // 0x1e0418: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1e0418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1e041c: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1e041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1e0420: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1e0420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1e0424: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1e0424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e0428: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1e0428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1e042c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e042cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0430: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1e0430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1e0434: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e0434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0438: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1e0438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1e043c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e043cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0440: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e0440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0444: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1e0444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1e0448: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1e0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1e044c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E044Cu;
    SET_GPR_U32(ctx, 31, 0x1E0454u);
    ctx->pc = 0x1E0450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E044Cu;
    // 0x1e0450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E044Cu, 0x1E0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0454u;
label_1e0454:
    // 0x1e0454: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E0454u;
    SET_GPR_U32(ctx, 31, 0x1E045Cu);
    ctx->pc = 0x1E0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0454u;
    // 0x1e0458: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E0454u, 0x1E045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E045Cu;
label_1e045c:
    // 0x1e045c: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x1e045cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1e0460: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0464: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x1e0464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e0468: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e0468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e046c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1e046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1e0470: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e0470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e0474: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e0474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0478: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e0478u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e047c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e047cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0480: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e0480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0484: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1e0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0488: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1e0488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e048c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1e048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e0490: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e0490u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e0494: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e0494u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e0498: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e0498u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e049c: 0x0  nop
    ctx->pc = 0x1e049cu;
    // NOP
    // 0x1e04a0: 0x0  nop
    ctx->pc = 0x1e04a0u;
    // NOP
    // 0x1e04a4: 0x46010084  c1          0x10084
    ctx->pc = 0x1e04a4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e04a8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1e04a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e04ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e04acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e04b0: 0x0  nop
    ctx->pc = 0x1e04b0u;
    // NOP
    // 0x1e04b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e04b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e04b8: 0x0  nop
    ctx->pc = 0x1e04b8u;
    // NOP
    // 0x1e04bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E04BCu;
    {
        const bool branch_taken_0x1e04bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04BCu;
        // 0x1e04c0: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04bc) {
            ctx->pc = 0x1E04E8u;
            goto label_1e04e8;
        }
    }
    ctx->pc = 0x1E04C4u;
    // 0x1e04c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e04c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e04c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e04c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e04cc: 0x0  nop
    ctx->pc = 0x1e04ccu;
    // NOP
    // 0x1e04d0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1e04d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1e04d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e04d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e04d8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e04d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e04dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e04dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e04e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e04e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e04e4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e04e8:
    // 0x1e04e8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1e04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e04ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e04ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e04f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e04f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04f8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e04f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e04fc: 0xc078ad2  jal         func_1E2B48
    ctx->pc = 0x1E04FCu;
    SET_GPR_U32(ctx, 31, 0x1E0504u);
    ctx->pc = 0x1E0500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04FCu;
    // 0x1e0500: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B48u, 0x1E04FCu, 0x1E0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0504u;
label_1e0504:
    // 0x1e0504: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1E0504u;
    {
        const bool branch_taken_0x1e0504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0504u;
        // 0x1e0508: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0504) {
            ctx->pc = 0x1E078Cu;
            goto label_1e078c;
        }
    }
    ctx->pc = 0x1E050Cu;
    // 0x1e050c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e0510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0514: 0xc44191f8  lwc1        $f1, -0x6E08($v0)
    ctx->pc = 0x1e0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0518: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e0518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e051c: 0x0  nop
    ctx->pc = 0x1e051cu;
    // NOP
    // 0x1e0520: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0520u;
    {
        const bool branch_taken_0x1e0520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0520) {
            ctx->pc = 0x1E0524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0520u;
            // 0x1e0524: 0xe44191f8  swc1        $f1, -0x6E08($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939128), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0528u;
            goto label_1e0528;
        }
    }
    ctx->pc = 0x1E0528u;
label_1e0528:
    // 0x1e0528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e052c: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x1e052cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    // 0x1e0530: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e0530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1e0534: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x1e0534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e0538: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e0538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e053c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e053cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0540: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0544: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0548: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e054c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1e054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e0550: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1e0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0554: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0558: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1e0558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e055c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e0560: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1e0560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e0564: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1e0564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e0568: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1e0568u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e056c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0570: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0574: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e0578: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e0578u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e057c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e057cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e0580: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1e0580u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e0584: 0x46050144  c1          0x50144
    ctx->pc = 0x1e0584u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e0588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e058c: 0x0  nop
    ctx->pc = 0x1e058cu;
    // NOP
    // 0x1e0590: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x1e0590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0594: 0x0  nop
    ctx->pc = 0x1e0594u;
    // NOP
    // 0x1e0598: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0598u;
    {
        const bool branch_taken_0x1e0598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0598) {
            ctx->pc = 0x1E05B4u;
            goto label_1e05b4;
        }
    }
    ctx->pc = 0x1E05A0u;
    // 0x1e05a0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1e05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e05a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e05a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e05a8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e05a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e05ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E05ACu;
    {
        const bool branch_taken_0x1e05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05ACu;
        // 0x1e05b0: 0xc6440020  lwc1        $f4, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05ac) {
            ctx->pc = 0x1E05D8u;
            goto label_1e05d8;
        }
    }
    ctx->pc = 0x1E05B4u;
label_1e05b4:
    // 0x1e05b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e05b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e05b8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e05b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e05bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e05bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e05c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e05c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e05c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e05c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e05c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e05c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e05cc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e05ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e05d0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e05d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e05d4: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x1e05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e05d8:
    // 0x1e05d8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1e05d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e05dc: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1e05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e05e0: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x1e05e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e05e4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1e05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05e8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1e05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e05ec: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1e05ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e05f0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e05f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05f4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e05f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e05f8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e05f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e05fc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e05fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e0600: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x1e0600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e0604: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1e0604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e0608: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1e0608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e060c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1e060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1e0610: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e0610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0614: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e0614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0618: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0618u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e061c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0620: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e0624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0628: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e062c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1e062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0630: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1e0630u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e0634: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1e0634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0638: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e063c: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1e063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0640: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x1e0640u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1e0644: 0xc64b0010  lwc1        $f11, 0x10($s2)
    ctx->pc = 0x1e0644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e0648: 0xc46a0004  lwc1        $f10, 0x4($v1)
    ctx->pc = 0x1e0648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e064c: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x1e064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e0650: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e0650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e0654: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x1e0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e0658: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e0658u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e065c: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x1e065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e0660: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e0660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e0664: 0xc6280008  lwc1        $f8, 0x8($s1)
    ctx->pc = 0x1e0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e0668: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1e0668u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e066c: 0xc629000c  lwc1        $f9, 0xC($s1)
    ctx->pc = 0x1e066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1e0670: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x1e0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0674: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x1e0674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e0678: 0xc7ae0094  lwc1        $f14, 0x94($sp)
    ctx->pc = 0x1e0678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e067c: 0xc7af0098  lwc1        $f15, 0x98($sp)
    ctx->pc = 0x1e067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e0680: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x1e0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0684: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x1e0684u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e0688: 0xe7ae0074  swc1        $f14, 0x74($sp)
    ctx->pc = 0x1e0688u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e068c: 0xe7af0078  swc1        $f15, 0x78($sp)
    ctx->pc = 0x1e068cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e0690: 0xe7ac007c  swc1        $f12, 0x7C($sp)
    ctx->pc = 0x1e0690u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1e0694: 0xe7ab0080  swc1        $f11, 0x80($sp)
    ctx->pc = 0x1e0694u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e0698: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x1e0698u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e069c: 0xe7a50088  swc1        $f5, 0x88($sp)
    ctx->pc = 0x1e069cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e06a0: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x1e06a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1e06a4: 0xe7a60090  swc1        $f6, 0x90($sp)
    ctx->pc = 0x1e06a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e06a8: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x1e06a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e06ac: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x1e06acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e06b0: 0xe7a9009c  swc1        $f9, 0x9C($sp)
    ctx->pc = 0x1e06b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e06b4: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x1e06b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e06b8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1e06b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e06bc: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1e06bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e06c0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e06c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e06c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e06c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e06c8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e06c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e06cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e06ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e06d0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1e06d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e06d4: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x1e06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e06d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06dc: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1e06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e06e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e06e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06e4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e06e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e06e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06ec: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e06ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e06f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06f4: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x1e06f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e06f8: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x1e06f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e06fc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1e06fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e0700: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e0700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e0704: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1e0704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0708: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E0708u;
    SET_GPR_U32(ctx, 31, 0x1E0710u);
    ctx->pc = 0x1E070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0708u;
    // 0x1e070c: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E0708u, 0x1E0710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0710u;
label_1e0710:
    // 0x1e0710: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E0710u;
    {
        const bool branch_taken_0x1e0710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0710u;
        // 0x1e0714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0710) {
            ctx->pc = 0x1E077Cu;
            goto label_1e077c;
        }
    }
    ctx->pc = 0x1E0718u;
    // 0x1e0718: 0xae34002c  sw          $s4, 0x2C($s1)
    ctx->pc = 0x1e0718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 20));
    // 0x1e071c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1e071cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1e0720: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e0724: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e0724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0728: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e0728u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e072c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1e072cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0730: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x1e0730u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x1e0734: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0738: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1e0738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e073c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e073cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0740: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e0740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0744: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1e0744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0748: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1e0748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e074c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1e074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e0750: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e0750u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e0754: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e0754u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e0758: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e0758u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e075c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e075cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e0760: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1e0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0764: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e0764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0768: 0x0  nop
    ctx->pc = 0x1e0768u;
    // NOP
    // 0x1e076c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E076Cu;
    {
        const bool branch_taken_0x1e076c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e076c) {
            ctx->pc = 0x1E0770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E076Cu;
            // 0x1e0770: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0774u;
            goto label_1e0774;
        }
    }
    ctx->pc = 0x1E0774u;
label_1e0774:
    // 0x1e0774: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E0774u;
    {
        const bool branch_taken_0x1e0774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0774u;
        // 0x1e0778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0774) {
            ctx->pc = 0x1E07A0u;
            goto label_1e07a0;
        }
    }
    ctx->pc = 0x1E077Cu;
label_1e077c:
    // 0x1e077c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x1e077cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0784u;
    {
        const bool branch_taken_0x1e0784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0784u;
        // 0x1e0788: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0784) {
            ctx->pc = 0x1E07A0u;
            goto label_1e07a0;
        }
    }
    ctx->pc = 0x1E078Cu;
label_1e078c:
    // 0x1e078c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0790: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e0790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e0794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0798: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E0798u;
    SET_GPR_U32(ctx, 31, 0x1E07A0u);
    ctx->pc = 0x1E079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0798u;
    // 0x1e079c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E0798u, 0x1E07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E07A0u;
label_1e07a0:
    // 0x1e07a0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1e07a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e07a4: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1e07a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1e07a8: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1e07a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e07ac: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1e07acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1e07b0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1e07b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e07b4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1e07b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1e07b8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1e07b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e07bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E07BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07BCu;
        // 0x1e07c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E07C4u;
    // 0x1e07c4: 0x0  nop
    ctx->pc = 0x1e07c4u;
    // NOP
    ctx->pc = 0x1e07c8u;
}
