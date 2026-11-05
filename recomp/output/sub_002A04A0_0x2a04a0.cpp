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

// Function: sub_002A04A0
// Address: 0x2a04a0 - 0x2a07a8
void sub_002A04A0_0x2a04a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A04A0_0x2a04a0");
#endif

    switch (ctx->pc) {
        case 0x2a04c0u: goto label_2a04c0;
        case 0x2a04d0u: goto label_2a04d0;
        case 0x2a0518u: goto label_2a0518;
        case 0x2a0530u: goto label_2a0530;
        case 0x2a0540u: goto label_2a0540;
        case 0x2a0678u: goto label_2a0678;
        case 0x2a06bcu: goto label_2a06bc;
        case 0x2a06f0u: goto label_2a06f0;
        case 0x2a0784u: goto label_2a0784;
        case 0x2a078cu: goto label_2a078c;
        default: break;
    }

    ctx->pc = 0x2a04a0u;

    // 0x2a04a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a04a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a04a4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a04a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a04ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a04acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a04b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2a04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2a04b8: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x2A04B8u;
    SET_GPR_U32(ctx, 31, 0x2A04C0u);
    ctx->pc = 0x2A04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04B8u;
    // 0x2a04bc: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x2A04B8u, 0x2A04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04C0u;
label_2a04c0:
    // 0x2a04c0: 0x1c4000b3  bgtz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2A04C0u;
    {
        const bool branch_taken_0x2a04c0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04C0u;
        // 0x2a04c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04c0) {
            ctx->pc = 0x2A0790u;
            goto label_2a0790;
        }
    }
    ctx->pc = 0x2A04C8u;
    // 0x2a04c8: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x2A04C8u;
    SET_GPR_U32(ctx, 31, 0x2A04D0u);
    ctx->pc = 0x2A04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04C8u;
    // 0x2a04cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x2A04C8u, 0x2A04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04D0u;
label_2a04d0:
    // 0x2a04d0: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2A04D0u;
    {
        const bool branch_taken_0x2a04d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04D0u;
        // 0x2a04d4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04d0) {
            ctx->pc = 0x2A078Cu;
            goto label_2a078c;
        }
    }
    ctx->pc = 0x2A04D8u;
    // 0x2a04d8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2a04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a04dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a04dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04e0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a04e4: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x2a04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x2a04e8: 0x8c68f4fc  lw          $t0, -0xB04($v1)
    ctx->pc = 0x2a04e8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF4FCu));
    // 0x2a04ec: 0xc44e001c  lwc1        $f14, 0x1C($v0)
    ctx->pc = 0x2a04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a04f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a04f4: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x2a04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a04f8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a04fc: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x2a04fcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2a0500: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x2a0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a0504: 0xc62f0018  lwc1        $f15, 0x18($s1)
    ctx->pc = 0x2a0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a0508: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a050c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a0510: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2A0510u;
    SET_GPR_U32(ctx, 31, 0x2A0518u);
    ctx->pc = 0x2A0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0510u;
    // 0x2a0514: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A0510u, 0x2A0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0518u;
label_2a0518:
    // 0x2a0518: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a0518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a051c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a0520: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2a0520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2a0524: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x2a0524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2a0528: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2A0528u;
    SET_GPR_U32(ctx, 31, 0x2A0530u);
    ctx->pc = 0x2A052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0528u;
    // 0x2a052c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2A0528u, 0x2A0530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0530u;
label_2a0530:
    // 0x2a0530: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0530u;
    {
        const bool branch_taken_0x2a0530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0530) {
            ctx->pc = 0x2A0534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0530u;
            // 0x2a0534: 0xc60100a0  lwc1        $f1, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0544u;
            goto label_2a0544;
        }
    }
    ctx->pc = 0x2A0538u;
    // 0x2a0538: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2A0538u;
    SET_GPR_U32(ctx, 31, 0x2A0540u);
    ctx->pc = 0x2A053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0538u;
    // 0x2a053c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2A0538u, 0x2A0540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0540u;
label_2a0540:
    // 0x2a0540: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2a0540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a0544:
    // 0x2a0544: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2a0548: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2a0548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2a054c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a054cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a0550: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a0550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a0554: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0558: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a0558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a055c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0560: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a0560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a0564: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0568: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a0568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a056c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2a056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a0570: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2a0570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0574: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a0574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a0578: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a0578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2a057c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2a057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2a0580: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a0580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0584: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2a0584u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0588: 0x0  nop
    ctx->pc = 0x2a0588u;
    // NOP
    // 0x2a058c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A058Cu;
    {
        const bool branch_taken_0x2a058c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A058Cu;
        // 0x2a0590: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a058c) {
            ctx->pc = 0x2A05A8u;
            goto label_2a05a8;
        }
    }
    ctx->pc = 0x2A0594u;
    // 0x2a0594: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0598: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2a0598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a059c: 0x0  nop
    ctx->pc = 0x2a059cu;
    // NOP
    // 0x2a05a0: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x2A05A0u;
    {
        const bool branch_taken_0x2a05a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a05a0) {
            ctx->pc = 0x2A05A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A05A0u;
            // 0x2a05a4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A05CCu;
            goto label_2a05cc;
        }
    }
    ctx->pc = 0x2A05A8u;
label_2a05a8:
    // 0x2a05a8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2a05a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a05ac: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2a05acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2a05b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2a05b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2a05b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2a05b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2a05b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2a05b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2a05bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2a05bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2a05c0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2a05c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2a05c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2a05c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2a05c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2a05cc:
    // 0x2a05cc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a05d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a05d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a05d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a05d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a05d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a05dc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a05e0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2a05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a05e4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2a05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a05e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a05e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a05ec: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2a05ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a05f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2a05f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2a05f4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2a05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a05f8: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x2a05f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x2a05fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a05fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a0600: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a0600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a0604: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x2a0604u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0608: 0x460d2834  c.lt.s      $f5, $f13
    ctx->pc = 0x2a0608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a060c: 0x0  nop
    ctx->pc = 0x2a060cu;
    // NOP
    // 0x2a0610: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0610u;
    {
        const bool branch_taken_0x2a0610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0610u;
        // 0x2a0614: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0610) {
            ctx->pc = 0x2A0620u;
            goto label_2a0620;
        }
    }
    ctx->pc = 0x2A0618u;
    // 0x2a0618: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0618u;
    {
        const bool branch_taken_0x2a0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0618u;
        // 0x2a061c: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0618) {
            ctx->pc = 0x2A063Cu;
            goto label_2a063c;
        }
    }
    ctx->pc = 0x2A0620u;
label_2a0620:
    // 0x2a0620: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a0624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a0624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0628: 0x0  nop
    ctx->pc = 0x2a0628u;
    // NOP
    // 0x2a062c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2a062cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0630: 0x0  nop
    ctx->pc = 0x2a0630u;
    // NOP
    // 0x2a0634: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A0634u;
    {
        const bool branch_taken_0x2a0634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0634) {
            ctx->pc = 0x2A0638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0634u;
            // 0x2a0638: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A063Cu;
            goto label_2a063c;
        }
    }
    ctx->pc = 0x2A063Cu;
label_2a063c:
    // 0x2a063c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0640: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a0640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0644: 0x0  nop
    ctx->pc = 0x2a0644u;
    // NOP
    // 0x2a0648: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a064c: 0x0  nop
    ctx->pc = 0x2a064cu;
    // NOP
    // 0x2a0650: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2A0650u;
    {
        const bool branch_taken_0x2a0650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0650) {
            ctx->pc = 0x2A068Cu;
            goto label_2a068c;
        }
    }
    ctx->pc = 0x2A0658u;
    // 0x2a0658: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2a0658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2a065c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a065cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0664: 0x0  nop
    ctx->pc = 0x2a0664u;
    // NOP
    // 0x2a0668: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2a0668u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2a066c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2a066cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a0670: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2A0670u;
    SET_GPR_U32(ctx, 31, 0x2A0678u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2A0670u, 0x2A0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0678u;
label_2a0678:
    // 0x2a0678: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2a0678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2a067c: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x2a067cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x2a0680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a0680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0684: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A0684u;
    {
        const bool branch_taken_0x2a0684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0684u;
        // 0x2a0688: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0684) {
            ctx->pc = 0x2A06D8u;
            goto label_2a06d8;
        }
    }
    ctx->pc = 0x2A068Cu;
label_2a068c:
    // 0x2a068c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a068cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0690: 0x0  nop
    ctx->pc = 0x2a0690u;
    // NOP
    // 0x2a0694: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2A0694u;
    {
        const bool branch_taken_0x2a0694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0694u;
        // 0x2a0698: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0694) {
            ctx->pc = 0x2A06DCu;
            goto label_2a06dc;
        }
    }
    ctx->pc = 0x2A069Cu;
    // 0x2a069c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2a069cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2a06a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a06a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a06a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a06a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a06a8: 0x0  nop
    ctx->pc = 0x2a06a8u;
    // NOP
    // 0x2a06ac: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2a06acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2a06b0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2a06b0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2a06b4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2A06B4u;
    SET_GPR_U32(ctx, 31, 0x2A06BCu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2A06B4u, 0x2A06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06BCu;
label_2a06bc:
    // 0x2a06bc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2a06bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2a06c0: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x2a06c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x2a06c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a06c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a06c8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2a06cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a06ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a06d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a06d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a06d4: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x2a06d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2a06d8:
    // 0x2a06d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2a06dc:
    // 0x2a06dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a06e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a06e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a06e4: 0xc44ca7c4  lwc1        $f12, -0x583C($v0)
    ctx->pc = 0x2a06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a06e8: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x2A06E8u;
    SET_GPR_U32(ctx, 31, 0x2A06F0u);
    ctx->pc = 0x2A06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06E8u;
    // 0x2a06ec: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x2A06E8u, 0x2A06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06F0u;
label_2a06f0:
    // 0x2a06f0: 0x2642ac50  addiu       $v0, $s2, -0x53B0
    ctx->pc = 0x2a06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945872));
    // 0x2a06f4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2a06f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a06f8: 0xc44e001c  lwc1        $f14, 0x1C($v0)
    ctx->pc = 0x2a06f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a06fc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a0700: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x2a0700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0704: 0x2464fd18  addiu       $a0, $v1, -0x2E8
    ctx->pc = 0x2a0704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966552));
    // 0x2a0708: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2a0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a070c: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x2a070cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x2a0710: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x2a0710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a0714: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a0718: 0xe463fd18  swc1        $f3, -0x2E8($v1)
    ctx->pc = 0x2a0718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4BFD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD18u, _value); } while (0); }
    // 0x2a071c: 0x2445fd20  addiu       $a1, $v0, -0x2E0
    ctx->pc = 0x2a071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x2a0720: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2a0720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4BFD1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD1Cu, _value); } while (0); }
    // 0x2a0724: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x2a0724u;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
    // 0x2a0728: 0xe441fd20  swc1        $f1, -0x2E0($v0)
    ctx->pc = 0x2a0728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4BFD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD20u, _value); } while (0); }
    // 0x2a072c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x2a072cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x2a0730: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x2a0730u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4BFD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD24u, _value); } while (0); }
    // 0x2a0734: 0x46008446  mov.s       $f17, $f16
    ctx->pc = 0x2a0734u;
    ctx->f[17] = FPU_MOV_S(ctx->f[16]);
    // 0x2a0738: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a0738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a073c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a073cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a0740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0744: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x2a0744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0748: 0x460d70c2  mul.s       $f3, $f14, $f13
    ctx->pc = 0x2a0748u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
    // 0x2a074c: 0xc62f0018  lwc1        $f15, 0x18($s1)
    ctx->pc = 0x2a074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a0750: 0x460e6382  mul.s       $f14, $f12, $f14
    ctx->pc = 0x2a0750u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x2a0754: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x2a0754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x2a0758: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a0758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a075c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a075cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a0760: 0x460d7b42  mul.s       $f13, $f15, $f13
    ctx->pc = 0x2a0760u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
    // 0x2a0764: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2a0764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0768: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x2a0768u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2a076c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2a076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0770: 0x46027bc0  add.s       $f15, $f15, $f2
    ctx->pc = 0x2a0770u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
    // 0x2a0774: 0x460d0b40  add.s       $f13, $f1, $f13
    ctx->pc = 0x2a0774u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x2a0778: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x2a0778u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2a077c: 0xc0a32d2  jal         func_28CB48
    ctx->pc = 0x2A077Cu;
    SET_GPR_U32(ctx, 31, 0x2A0784u);
    ctx->pc = 0x2A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A077Cu;
    // 0x2a0780: 0x46027380  add.s       $f14, $f14, $f2 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB48u, 0x2A077Cu, 0x2A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0784u;
label_2a0784:
    // 0x2a0784: 0xc0a32de  jal         func_28CB78
    ctx->pc = 0x2A0784u;
    SET_GPR_U32(ctx, 31, 0x2A078Cu);
    ctx->pc = 0x28CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB78u, 0x2A0784u, 0x2A078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A078Cu;
label_2a078c:
    // 0x2a078c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a078cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0790:
    // 0x2a0790: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2a0790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a0794: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a0794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0798: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2a0798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a079c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a07a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A07A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07A0u;
        // 0x2a07a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A07A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A07A8u;
}
