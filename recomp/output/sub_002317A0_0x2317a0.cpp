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

// Function: sub_002317A0
// Address: 0x2317a0 - 0x231a80
void sub_002317A0_0x2317a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002317A0_0x2317a0");
#endif

    switch (ctx->pc) {
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f8u: goto label_2317f8;
        case 0x231894u: goto label_231894;
        case 0x2318b4u: goto label_2318b4;
        case 0x2318c4u: goto label_2318c4;
        case 0x2318f0u: goto label_2318f0;
        case 0x231908u: goto label_231908;
        case 0x231a24u: goto label_231a24;
        case 0x231a4cu: goto label_231a4c;
        default: break;
    }

    ctx->pc = 0x2317a0u;

    // 0x2317a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2317a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2317a4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2317a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2317a8: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2317a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2317ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2317acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2317b0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2317b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2317b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2317b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317b8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2317b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2317bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2317bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317c0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2317c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2317c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2317c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317c8: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2317c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2317cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2317ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317d0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2317d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2317d4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2317d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317d8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2317d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2317dc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2317dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317e0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2317e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x2317e4: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2317e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x2317e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2317E8u;
    SET_GPR_U32(ctx, 31, 0x2317F0u);
    ctx->pc = 0x2317ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317E8u;
    // 0x2317ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2317E8u, 0x2317F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317F0u;
label_2317f0:
    // 0x2317f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2317F0u;
    SET_GPR_U32(ctx, 31, 0x2317F8u);
    ctx->pc = 0x2317F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F0u;
    // 0x2317f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2317F0u, 0x2317F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317F8u;
label_2317f8:
    // 0x2317f8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2317f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2317fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x231800: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x231800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231804: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x231804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x231808: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x231808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x23180c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x23180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x231810: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x231810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231814: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x231814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231818: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23181c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x23181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231820: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x231820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231824: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x231824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231828: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x231828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23182c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23182cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x231830: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x231830u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x231834: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x231834u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x231838: 0x0  nop
    ctx->pc = 0x231838u;
    // NOP
    // 0x23183c: 0x0  nop
    ctx->pc = 0x23183cu;
    // NOP
    // 0x231840: 0x46010084  c1          0x10084
    ctx->pc = 0x231840u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x231844: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x231844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x231848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23184c: 0x0  nop
    ctx->pc = 0x23184cu;
    // NOP
    // 0x231850: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x231850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231854: 0x0  nop
    ctx->pc = 0x231854u;
    // NOP
    // 0x231858: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x231858u;
    {
        const bool branch_taken_0x231858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231858u;
        // 0x23185c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231858) {
            ctx->pc = 0x231884u;
            goto label_231884;
        }
    }
    ctx->pc = 0x231860u;
    // 0x231860: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231868: 0x0  nop
    ctx->pc = 0x231868u;
    // NOP
    // 0x23186c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23186cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x231870: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x231870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x231874: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x231874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x231878: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x231878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23187c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23187cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231880: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x231880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_231884:
    // 0x231884: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x231884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x231888: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x231888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23188c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x23188Cu;
    SET_GPR_U32(ctx, 31, 0x231894u);
    ctx->pc = 0x231890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23188Cu;
    // 0x231890: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23188Cu, 0x231894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231894u;
label_231894:
    // 0x231894: 0x3c05fbfd  lui         $a1, 0xFBFD
    ctx->pc = 0x231894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64509 << 16));
    // 0x231898: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23189c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x23189cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x2318a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2318a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2318a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2318a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2318a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2318a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2318ac: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x2318ACu;
    SET_GPR_U32(ctx, 31, 0x2318B4u);
    ctx->pc = 0x2318B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318ACu;
    // 0x2318b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x2318ACu, 0x2318B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318B4u;
label_2318b4:
    // 0x2318b4: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2318B4u;
    {
        const bool branch_taken_0x2318b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318B4u;
        // 0x2318b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318b4) {
            ctx->pc = 0x231A44u;
            goto label_231a44;
        }
    }
    ctx->pc = 0x2318BCu;
    // 0x2318bc: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x2318BCu;
    SET_GPR_U32(ctx, 31, 0x2318C4u);
    ctx->pc = 0x2318C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318BCu;
    // 0x2318c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x2318BCu, 0x2318C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318C4u;
label_2318c4:
    // 0x2318c4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2318c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2318c8: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x2318c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x2318cc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2318CCu;
    {
        const bool branch_taken_0x2318cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318CCu;
        // 0x2318d0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318cc) {
            ctx->pc = 0x231A40u;
            goto label_231a40;
        }
    }
    ctx->pc = 0x2318D4u;
    // 0x2318d4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2318d8: 0x24577ee0  addiu       $s7, $v0, 0x7EE0
    ctx->pc = 0x2318d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x2318dc: 0x24762870  addiu       $s6, $v1, 0x2870
    ctx->pc = 0x2318dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 10352));
    // 0x2318e0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2318e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2318e4: 0x24552828  addiu       $s5, $v0, 0x2828
    ctx->pc = 0x2318e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
    // 0x2318e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2318ec: 0x0  nop
    ctx->pc = 0x2318ecu;
    // NOP
label_2318f0:
    // 0x2318f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2318f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2318f4: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x2318f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x2318f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2318f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2318fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2318fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231900: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x231900u;
    SET_GPR_U32(ctx, 31, 0x231908u);
    ctx->pc = 0x231904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231900u;
    // 0x231904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x231900u, 0x231908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231908u;
label_231908:
    // 0x231908: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x231908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23190c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x23190Cu;
    {
        const bool branch_taken_0x23190c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x231910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23190Cu;
        // 0x231910: 0x572821  addu        $a1, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23190c) {
            ctx->pc = 0x231938u;
            goto label_231938;
        }
    }
    ctx->pc = 0x231914u;
    // 0x231914: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x231914u;
    {
        const bool branch_taken_0x231914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x231914) {
            ctx->pc = 0x23199Cu;
            goto label_23199c;
        }
    }
    ctx->pc = 0x23191Cu;
    // 0x23191c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x23191cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231920: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x231924: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x231924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231928: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x231928u;
    {
        const bool branch_taken_0x231928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231928u;
        // 0x23192c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231928) {
            ctx->pc = 0x231A2Cu;
            goto label_231a2c;
        }
    }
    ctx->pc = 0x231930u;
    // 0x231930: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x231930u;
    {
        const bool branch_taken_0x231930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231930) {
            ctx->pc = 0x23199Cu;
            goto label_23199c;
        }
    }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x231938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x23193c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x23193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x231940: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x231940u;
    {
        const bool branch_taken_0x231940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231940) {
            ctx->pc = 0x231978u;
            goto label_231978;
        }
    }
    ctx->pc = 0x231948u;
    // 0x231948: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x231948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23194c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23194Cu;
    {
        const bool branch_taken_0x23194c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23194Cu;
        // 0x231950: 0x282102b  sltu        $v0, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23194c) {
            ctx->pc = 0x231978u;
            goto label_231978;
        }
    }
    ctx->pc = 0x231954u;
    // 0x231954: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x231954u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x231958: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x23195c: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x23195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x231960: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x231964: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x231964u;
    {
        const bool branch_taken_0x231964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231964) {
            ctx->pc = 0x231968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231964u;
            // 0x231968: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231A2Cu;
            goto label_231a2c;
        }
    }
    ctx->pc = 0x23196Cu;
    // 0x23196c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x23196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x231970: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x231970u;
    {
        const bool branch_taken_0x231970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231970u;
        // 0x231974: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231970) {
            ctx->pc = 0x231A2Cu;
            goto label_231a2c;
        }
    }
    ctx->pc = 0x231978u;
label_231978:
    // 0x231978: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x231978u;
    {
        const bool branch_taken_0x231978 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x231978) {
            ctx->pc = 0x23199Cu;
            goto label_23199c;
        }
    }
    ctx->pc = 0x231980u;
    // 0x231980: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231980u;
    {
        const bool branch_taken_0x231980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x231980) {
            ctx->pc = 0x23199Cu;
            goto label_23199c;
        }
    }
    ctx->pc = 0x231988u;
    // 0x231988: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23198c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x231990: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x231990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231994: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x231994u;
    {
        const bool branch_taken_0x231994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231994u;
        // 0x231998: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231994) {
            ctx->pc = 0x231A2Cu;
            goto label_231a2c;
        }
    }
    ctx->pc = 0x23199Cu;
label_23199c:
    // 0x23199c: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x23199Cu;
    {
        const bool branch_taken_0x23199c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23199Cu;
        // 0x2319a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23199c) {
            ctx->pc = 0x231A1Cu;
            goto label_231a1c;
        }
    }
    ctx->pc = 0x2319A4u;
    // 0x2319a4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2319a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2319a8: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2319a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2319ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2319acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2319b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2319b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2319b4: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x2319b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2319b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2319b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2319bc: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x2319bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x2319c0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2319c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2319c4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x2319c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x2319c8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2319cc: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2319ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x2319d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2319d4: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2319d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x2319d8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2319dc: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x2319dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x2319e0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2319e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2319e4: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x2319e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x2319e8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2319e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319ec: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2319ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2319f0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2319f4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x2319f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x2319f8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2319f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2319fc: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x2319fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x231a00: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x231a04: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x231a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x231a08: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x231a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x231a0c: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x231a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x231a10: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x231a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x231a14: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x231a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x231a18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231a1c:
    // 0x231a1c: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x231A1Cu;
    SET_GPR_U32(ctx, 31, 0x231A24u);
    ctx->pc = 0x231A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A1Cu;
    // 0x231a20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x231A1Cu, 0x231A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A24u;
label_231a24:
    // 0x231a24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x231A24u;
    {
        const bool branch_taken_0x231a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A24u;
        // 0x231a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a24) {
            ctx->pc = 0x231A50u;
            goto label_231a50;
        }
    }
    ctx->pc = 0x231A2Cu;
label_231a2c:
    // 0x231a2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x231a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x231a30: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x231a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x231a34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x231a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231a38: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x231A38u;
    {
        const bool branch_taken_0x231a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A38u;
        // 0x231a3c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a38) {
            ctx->pc = 0x2318F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2318f0;
        }
    }
    ctx->pc = 0x231A40u;
label_231a40:
    // 0x231a40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231a44:
    // 0x231a44: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x231A44u;
    SET_GPR_U32(ctx, 31, 0x231A4Cu);
    ctx->pc = 0x231A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A44u;
    // 0x231a48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x231A44u, 0x231A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A4Cu;
label_231a4c:
    // 0x231a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231a50:
    // 0x231a50: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x231a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x231a54: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x231a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x231a58: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x231a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x231a5c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x231a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x231a60: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x231a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x231a64: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x231a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x231a68: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x231a68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x231a6c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x231a6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x231a70: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x231a70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x231a74: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x231a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x231a78: 0x3e00008  jr          $ra
    ctx->pc = 0x231A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A78u;
        // 0x231a7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A80u;
}
