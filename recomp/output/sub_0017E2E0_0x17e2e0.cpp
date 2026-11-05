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

// Function: sub_0017E2E0
// Address: 0x17e2e0 - 0x17e450
void sub_0017E2E0_0x17e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E2E0_0x17e2e0");
#endif

    switch (ctx->pc) {
        case 0x17e314u: goto label_17e314;
        case 0x17e368u: goto label_17e368;
        case 0x17e3bcu: goto label_17e3bc;
        case 0x17e3ccu: goto label_17e3cc;
        case 0x17e424u: goto label_17e424;
        default: break;
    }

    ctx->pc = 0x17e2e0u;

    // 0x17e2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e2e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e2e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e2ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e2f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e2f8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x17e2f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17e2fc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x17e2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17e300: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17e304: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E304u;
    {
        const bool branch_taken_0x17e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e304) {
            ctx->pc = 0x17E308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E304u;
            // 0x17e308: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E31Cu;
            goto label_17e31c;
        }
    }
    ctx->pc = 0x17E30Cu;
    // 0x17e30c: 0xc05f5ee  jal         func_17D7B8
    ctx->pc = 0x17E30Cu;
    SET_GPR_U32(ctx, 31, 0x17E314u);
    ctx->pc = 0x17D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7B8u, 0x17E30Cu, 0x17E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E314u;
label_17e314:
    // 0x17e314: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x17E314u;
    {
        const bool branch_taken_0x17e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E314u;
        // 0x17e318: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e314) {
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E31Cu;
label_17e31c:
    // 0x17e31c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x17e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x17e320: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x17e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17e324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e328: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e32c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x17e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17e330: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x17E330u;
    {
        const bool branch_taken_0x17e330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e330) {
            ctx->pc = 0x17E334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E330u;
            // 0x17e334: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E338u;
    // 0x17e338: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x17e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17e33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e344: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x17e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x17e348: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E348u;
    {
        const bool branch_taken_0x17e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e348) {
            ctx->pc = 0x17E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E348u;
            // 0x17e34c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E358u;
            goto label_17e358;
        }
    }
    ctx->pc = 0x17E350u;
    // 0x17e350: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E350u;
    {
        const bool branch_taken_0x17e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E350u;
        // 0x17e354: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e350) {
            ctx->pc = 0x17E360u;
            goto label_17e360;
        }
    }
    ctx->pc = 0x17E358u;
label_17e358:
    // 0x17e358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e35c: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x17e35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17e360:
    // 0x17e360: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17E360u;
    SET_GPR_U32(ctx, 31, 0x17E368u);
    ctx->pc = 0x17E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E360u;
    // 0x17e364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17E360u, 0x17E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E368u;
label_17e368:
    // 0x17e368: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17e36c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x17e36cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e370: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x17e370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e374: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x17e374u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17e378: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x17e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17e37c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17e37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e380: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e384: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e388: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17e388u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17e38c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17e38cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17e390: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x17e390u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17e394: 0x46140504  c1          0x140504
    ctx->pc = 0x17e394u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x17e398: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x17e39c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17e39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17e3a0: 0x0  nop
    ctx->pc = 0x17e3a0u;
    // NOP
    // 0x17e3a4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x17e3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e3a8: 0x0  nop
    ctx->pc = 0x17e3a8u;
    // NOP
    // 0x17e3ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17E3ACu;
    {
        const bool branch_taken_0x17e3ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3ACu;
        // 0x17e3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3ac) {
            ctx->pc = 0x17E3C4u;
            goto label_17e3c4;
        }
    }
    ctx->pc = 0x17E3B4u;
    // 0x17e3b4: 0xc05fafe  jal         func_17EBF8
    ctx->pc = 0x17E3B4u;
    SET_GPR_U32(ctx, 31, 0x17E3BCu);
    ctx->pc = 0x17E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3B4u;
    // 0x17e3b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBF8u, 0x17E3B4u, 0x17E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3BCu;
label_17e3bc:
    // 0x17e3bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E3BCu;
    {
        const bool branch_taken_0x17e3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3bc) {
            ctx->pc = 0x17E3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3BCu;
            // 0x17e3c0: 0xc6000090  lwc1        $f0, 0x90($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E3D4u;
            goto label_17e3d4;
        }
    }
    ctx->pc = 0x17E3C4u;
label_17e3c4:
    // 0x17e3c4: 0xc05f5ee  jal         func_17D7B8
    ctx->pc = 0x17E3C4u;
    SET_GPR_U32(ctx, 31, 0x17E3CCu);
    ctx->pc = 0x17E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3C4u;
    // 0x17e3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7B8u, 0x17E3C4u, 0x17E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3CCu;
label_17e3cc:
    // 0x17e3cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17E3CCu;
    {
        const bool branch_taken_0x17e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3CCu;
        // 0x17e3d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3cc) {
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E3D4u;
label_17e3d4:
    // 0x17e3d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17e3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17e3d8: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x17e3d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x17e3dc: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x17e3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e3e0: 0x0  nop
    ctx->pc = 0x17e3e0u;
    // NOP
    // 0x17e3e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17E3E4u;
    {
        const bool branch_taken_0x17e3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e3e4) {
            ctx->pc = 0x17E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3E4u;
            // 0x17e3e8: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E3ECu;
            goto label_17e3ec;
        }
    }
    ctx->pc = 0x17E3ECu;
label_17e3ec:
    // 0x17e3ec: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x17e3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e3f4: 0x0  nop
    ctx->pc = 0x17e3f4u;
    // NOP
    // 0x17e3f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17e3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e3fc: 0x0  nop
    ctx->pc = 0x17e3fcu;
    // NOP
    // 0x17e400: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x17E400u;
    {
        const bool branch_taken_0x17e400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e400) {
            ctx->pc = 0x17E404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E400u;
            // 0x17e404: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E408u;
    // 0x17e408: 0x4615a001  sub.s       $f0, $f20, $f21
    ctx->pc = 0x17e408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x17e40c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x17e40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x17e410: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x17e410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17e414: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x17e414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x17e418: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17e418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17e41c: 0xc040b90  jal         func_102E40
    ctx->pc = 0x17E41Cu;
    SET_GPR_U32(ctx, 31, 0x17E424u);
    ctx->pc = 0x17E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E41Cu;
    // 0x17e420: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x102E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102E40u, 0x17E41Cu, 0x17E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E424u;
label_17e424:
    // 0x17e424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e428: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x17e428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x17e42c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x17e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x17e430: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x17e430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x17e434: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17e434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e438:
    // 0x17e438: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17e438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e43c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e440: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x17e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e444: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x17e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e448: 0x3e00008  jr          $ra
    ctx->pc = 0x17E448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E448u;
        // 0x17e44c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E450u;
}
