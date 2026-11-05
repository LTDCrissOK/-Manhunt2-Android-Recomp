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

// Function: sub_00239868
// Address: 0x239868 - 0x23a580
void sub_00239868_0x239868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239868_0x239868");
#endif

    switch (ctx->pc) {
        case 0x2398b4u: goto label_2398b4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f8u: goto label_2398f8;
        case 0x239900u: goto label_239900;
        case 0x2399b8u: goto label_2399b8;
        case 0x2399c0u: goto label_2399c0;
        case 0x239a60u: goto label_239a60;
        case 0x239a8cu: goto label_239a8c;
        case 0x239a98u: goto label_239a98;
        case 0x239ab8u: goto label_239ab8;
        case 0x239ac4u: goto label_239ac4;
        case 0x239ad4u: goto label_239ad4;
        case 0x239e08u: goto label_239e08;
        case 0x239e10u: goto label_239e10;
        case 0x239ef4u: goto label_239ef4;
        case 0x239f1cu: goto label_239f1c;
        case 0x239f28u: goto label_239f28;
        case 0x239fe0u: goto label_239fe0;
        case 0x239fe8u: goto label_239fe8;
        case 0x23a0acu: goto label_23a0ac;
        case 0x23a0d4u: goto label_23a0d4;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a11cu: goto label_23a11c;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3e8u: goto label_23a3e8;
        case 0x23a488u: goto label_23a488;
        case 0x23a4b0u: goto label_23a4b0;
        case 0x23a4bcu: goto label_23a4bc;
        case 0x23a4e0u: goto label_23a4e0;
        case 0x23a508u: goto label_23a508;
        case 0x23a530u: goto label_23a530;
        case 0x23a540u: goto label_23a540;
        default: break;
    }

    ctx->pc = 0x239868u;

    // 0x239868: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x23986c: 0xffb20280  sd          $s2, 0x280($sp)
    ctx->pc = 0x23986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
    // 0x239870: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x239870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239874: 0xffb10278  sd          $s1, 0x278($sp)
    ctx->pc = 0x239874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 17));
    // 0x239878: 0xffb30288  sd          $s3, 0x288($sp)
    ctx->pc = 0x239878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 19));
    // 0x23987c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239880: 0xe7b602d0  swc1        $f22, 0x2D0($sp)
    ctx->pc = 0x239880u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x239884: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x239884u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x239888: 0xe7b502c8  swc1        $f21, 0x2C8($sp)
    ctx->pc = 0x239888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x23988c: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x23988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x239890: 0xffb40290  sd          $s4, 0x290($sp)
    ctx->pc = 0x239890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
    // 0x239894: 0xffb50298  sd          $s5, 0x298($sp)
    ctx->pc = 0x239894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 21));
    // 0x239898: 0xffb602a0  sd          $s6, 0x2A0($sp)
    ctx->pc = 0x239898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 22));
    // 0x23989c: 0xffb702a8  sd          $s7, 0x2A8($sp)
    ctx->pc = 0x23989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 23));
    // 0x2398a0: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x2398a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x2398a4: 0xffbf02b8  sd          $ra, 0x2B8($sp)
    ctx->pc = 0x2398a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 31));
    // 0x2398a8: 0xe7b702d8  swc1        $f23, 0x2D8($sp)
    ctx->pc = 0x2398a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x2398ac: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x2398ACu;
    SET_GPR_U32(ctx, 31, 0x2398B4u);
    ctx->pc = 0x2398B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398ACu;
    // 0x2398b0: 0xe7b402c0  swc1        $f20, 0x2C0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2398ACu, 0x2398B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398B4u;
label_2398b4:
    // 0x2398b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2398b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2398b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2398b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2398bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2398c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2398c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2398c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2398c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2398c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2398c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2398cc: 0xc636500c  lwc1        $f22, 0x500C($s1)
    ctx->pc = 0x2398ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2398d0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2398d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2398d4: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x2398d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2398d8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2398d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2398dc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2398dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2398e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2398E0u;
    SET_GPR_U32(ctx, 31, 0x2398E8u);
    ctx->pc = 0x2398E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398E0u;
    // 0x2398e4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2398E0u, 0x2398E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398E8u;
label_2398e8:
    // 0x2398e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2398E8u;
    SET_GPR_U32(ctx, 31, 0x2398F0u);
    ctx->pc = 0x2398ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398E8u;
    // 0x2398ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2398E8u, 0x2398F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398F0u;
label_2398f0:
    // 0x2398f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2398F0u;
    SET_GPR_U32(ctx, 31, 0x2398F8u);
    ctx->pc = 0x2398F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F0u;
    // 0x2398f4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2398F0u, 0x2398F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398F8u;
label_2398f8:
    // 0x2398f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2398F8u;
    SET_GPR_U32(ctx, 31, 0x239900u);
    ctx->pc = 0x2398FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F8u;
    // 0x2398fc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2398F8u, 0x239900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239900u;
label_239900:
    // 0x239900: 0xae4004a0  sw          $zero, 0x4A0($s2)
    ctx->pc = 0x239900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1184), GPR_U32(ctx, 0));
    // 0x239904: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x239904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x239908: 0xae4004ac  sw          $zero, 0x4AC($s2)
    ctx->pc = 0x239908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 0));
    // 0x23990c: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x239910: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x239910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x239914: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x239914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239918: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x239918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x23991c: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x23991cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x239920: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x239920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x239924: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x239924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x239928: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x239928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x23992c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23992cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239930: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x239930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239934: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239938: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x239938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23993c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x23993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239940: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x239940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x239944: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x239944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239948: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x239948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23994c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x23994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239950: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x239950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x239954: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x239954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x239958: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x239958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x23995c: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x23995cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x239960: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x239964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x239968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23996c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x23996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x239970: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x239970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x239974: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x239978: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x239978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x23997c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x23997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x239980: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239984: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x239984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x239988: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23998c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x23998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239990: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x239990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239994: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x239994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x239998: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x239998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23999c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x23999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2399a0: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x2399a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2399a4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2399a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2399a8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2399a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2399ac: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2399acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2399b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2399B0u;
    SET_GPR_U32(ctx, 31, 0x2399B8u);
    ctx->pc = 0x2399B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399B0u;
    // 0x2399b4: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2399B0u, 0x2399B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399B8u;
label_2399b8:
    // 0x2399b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2399B8u;
    SET_GPR_U32(ctx, 31, 0x2399C0u);
    ctx->pc = 0x2399BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399B8u;
    // 0x2399bc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2399B8u, 0x2399C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399C0u;
label_2399c0:
    // 0x2399c0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2399c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2399c4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2399c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2399c8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2399c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2399cc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2399ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2399d0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2399d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2399d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2399d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2399d8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x2399d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x2399dc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2399dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2399e0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2399e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2399e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2399e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2399e8: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2399e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2399ec: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2399ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2399f0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2399f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2399f4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2399f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2399f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2399f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2399fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2399fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x239a00: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x239a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x239a04: 0x0  nop
    ctx->pc = 0x239a04u;
    // NOP
    // 0x239a08: 0x0  nop
    ctx->pc = 0x239a08u;
    // NOP
    // 0x239a0c: 0x46000044  c1          0x44
    ctx->pc = 0x239a0cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x239a10: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x239a10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x239a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239a18: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x239a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x239a1c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x239a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239a20: 0x0  nop
    ctx->pc = 0x239a20u;
    // NOP
    // 0x239a24: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x239A24u;
    {
        const bool branch_taken_0x239a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x239A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A24u;
        // 0x239a28: 0xe7a10140  swc1        $f1, 0x140($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a24) {
            ctx->pc = 0x239A4Cu;
            goto label_239a4c;
        }
    }
    ctx->pc = 0x239A2Cu;
    // 0x239a2c: 0x0  nop
    ctx->pc = 0x239a2cu;
    // NOP
    // 0x239a30: 0x0  nop
    ctx->pc = 0x239a30u;
    // NOP
    // 0x239a34: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x239a34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x239a38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x239a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x239a3c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x239a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x239a40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x239a40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x239a44: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x239a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239a48: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x239a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_239a4c:
    // 0x239a4c: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x239a50: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x239a50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x239a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a58: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x239A58u;
    SET_GPR_U32(ctx, 31, 0x239A60u);
    ctx->pc = 0x239A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A58u;
    // 0x239a5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x239A58u, 0x239A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A60u;
label_239a60:
    // 0x239a60: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x239a60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a64: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x239a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x239a68: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x239a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x239a6c: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x239a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x239a70: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x239a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x239a74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x239a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a7c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x239a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x239a80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a84: 0xc077940  jal         func_1DE500
    ctx->pc = 0x239A84u;
    SET_GPR_U32(ctx, 31, 0x239A8Cu);
    ctx->pc = 0x239A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A84u;
    // 0x239a88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x239A84u, 0x239A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A8Cu;
label_239a8c:
    // 0x239a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a90: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x239A90u;
    SET_GPR_U32(ctx, 31, 0x239A98u);
    ctx->pc = 0x239A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A90u;
    // 0x239a94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x239A90u, 0x239A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A98u;
label_239a98:
    // 0x239a98: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x239a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x239a9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x239A9Cu;
    {
        const bool branch_taken_0x239a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a9c) {
            ctx->pc = 0x239AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239A9Cu;
            // 0x239aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239AB0u;
            goto label_239ab0;
        }
    }
    ctx->pc = 0x239AA4u;
    // 0x239aa4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x239aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239aa8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x239aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239ab0:
    // 0x239ab0: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x239AB0u;
    SET_GPR_U32(ctx, 31, 0x239AB8u);
    ctx->pc = 0x239AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AB0u;
    // 0x239ab4: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x239AB0u, 0x239AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AB8u;
label_239ab8:
    // 0x239ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239abc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x239ABCu;
    SET_GPR_U32(ctx, 31, 0x239AC4u);
    ctx->pc = 0x239AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ABCu;
    // 0x239ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x239ABCu, 0x239AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AC4u;
label_239ac4:
    // 0x239ac4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x239AC4u;
    {
        const bool branch_taken_0x239ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ac4) {
            ctx->pc = 0x239AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239AC4u;
            // 0x239ac8: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239AD8u;
            goto label_239ad8;
        }
    }
    ctx->pc = 0x239ACCu;
    // 0x239acc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x239ACCu;
    SET_GPR_U32(ctx, 31, 0x239AD4u);
    ctx->pc = 0x239AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ACCu;
    // 0x239ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x239ACCu, 0x239AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AD4u;
label_239ad4:
    // 0x239ad4: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x239ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_239ad8:
    // 0x239ad8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x239adc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239ae0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x239ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x239ae4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x239ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239ae8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x239ae8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239aec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239aecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239af0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x239af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239af4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x239af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239af8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x239af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239afc: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x239afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239b00: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x239b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x239b04: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x239b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x239b08: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x239b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x239b0c: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x239b0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x239b10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239b14: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x239b18: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x239b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239b1c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x239b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239b20: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x239b20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x239b24: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x239b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239b28: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x239b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239b2c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x239b2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x239b30: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x239b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239b34: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x239b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239b38: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x239b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x239b3c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x239b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239b40: 0x0  nop
    ctx->pc = 0x239b40u;
    // NOP
    // 0x239b44: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x239B44u;
    {
        const bool branch_taken_0x239b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x239B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B44u;
        // 0x239b48: 0xc4440060  lwc1        $f4, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b44) {
            ctx->pc = 0x239C58u;
            goto label_239c58;
        }
    }
    ctx->pc = 0x239B4Cu;
    // 0x239b4c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x239b50: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b54: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x239b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x239b58: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x239b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239b5c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x239b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239b60: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x239b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x239b64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x239b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x239b68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239b6c: 0x0  nop
    ctx->pc = 0x239b6cu;
    // NOP
    // 0x239b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x239b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x239b74: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x239b74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x239b78: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x239b78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x239b7c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x239b7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x239b80: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x239b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x239b84: 0xe7a40160  swc1        $f4, 0x160($sp)
    ctx->pc = 0x239b84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x239b88: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x239b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x239b8c: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x239b8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x239b90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239b94: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x239b94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239b98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239b9c: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239ba0: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239ba4: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239ba8: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239bac: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239bb0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239bb4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239bb8: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239bbc: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239bbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239bc0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239bc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239bc4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x239bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239bc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x239bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239bcc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x239bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x239bd0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x239bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x239bd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x239bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x239bd8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x239bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x239bdc: 0xc4630060  lwc1        $f3, 0x60($v1)
    ctx->pc = 0x239bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239be0: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x239be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x239be4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x239be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x239be8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x239be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239bec: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x239becu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x239bf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x239bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239bf4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x239bf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x239bf8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x239bf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x239bfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x239bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x239c00: 0xe7a30160  swc1        $f3, 0x160($sp)
    ctx->pc = 0x239c00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x239c04: 0xe7a4016c  swc1        $f4, 0x16C($sp)
    ctx->pc = 0x239c04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x239c08: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x239c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x239c0c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x239c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x239c10: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x239c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239c14: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x239c14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239c18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239c18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239c1c: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239c20: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239c24: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239c28: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239c2c: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239c30: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239c34: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239c38: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239c3c: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239c3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239c40: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239c44: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x239c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x239c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c50: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x239C50u;
    {
        const bool branch_taken_0x239c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C50u;
        // 0x239c54: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c50) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239C58u;
label_239c58:
    // 0x239c58: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x239c5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239c60: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x239c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x239c64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x239c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239c68: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x239c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239c6c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x239c70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x239c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x239c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239c78: 0x0  nop
    ctx->pc = 0x239c78u;
    // NOP
    // 0x239c7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x239c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x239c80: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x239c80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x239c84: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x239c84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x239c88: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x239c88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x239c8c: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x239c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x239c90: 0xe7a40160  swc1        $f4, 0x160($sp)
    ctx->pc = 0x239c90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x239c94: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x239c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x239c98: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x239c98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x239c9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239ca0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x239ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239ca4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239ca8: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239cac: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239cb0: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239cb4: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239cb8: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239cbc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239cc0: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239cc4: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239cc8: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239cc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239ccc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239cd0: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x239cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239cd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x239cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239cd8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x239cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x239cdc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x239cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x239ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x239ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x239ce4: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x239ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x239ce8: 0xc4630060  lwc1        $f3, 0x60($v1)
    ctx->pc = 0x239ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239cec: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x239cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x239cf0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x239cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x239cf4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x239cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239cf8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x239cf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x239cfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x239cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239d00: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x239d00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x239d04: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x239d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x239d08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x239d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x239d0c: 0xe7a30160  swc1        $f3, 0x160($sp)
    ctx->pc = 0x239d0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x239d10: 0xe7a4016c  swc1        $f4, 0x16C($sp)
    ctx->pc = 0x239d10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x239d14: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x239d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x239d18: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x239d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x239d1c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x239d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239d20: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x239d20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239d24: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239d28: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239d2c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239d30: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239d34: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239d38: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239d3c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239d40: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239d44: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239d48: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239d4c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239d50: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x239d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239d54: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x239d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
    // 0x239d58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x239d58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239d5c:
    // 0x239d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239d60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x239d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x239d64: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x239d68: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x239d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x239d6c: 0xe6b50004  swc1        $f21, 0x4($s5)
    ctx->pc = 0x239d6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x239d70: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x239d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x239d74: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x239d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x239d78: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x239d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x239d7c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x239d7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x239d80: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239d84: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239d88: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239d8c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239d90: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239d94: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239d98: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239d9c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239da0: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239da4: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239da4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239da8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239dac: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x239dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239db0: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x239db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x239db4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x239db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x239db8: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x239db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x239dbc: 0xe6b70004  swc1        $f23, 0x4($s5)
    ctx->pc = 0x239dbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x239dc0: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x239dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x239dc4: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x239dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x239dc8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x239dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x239dcc: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x239dccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x239dd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239dd4: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239dd8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239ddc: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239de0: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239de4: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239de8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239dec: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239df0: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239df4: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239df4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239df8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239dfc: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x239dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239e00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x239E00u;
    SET_GPR_U32(ctx, 31, 0x239E08u);
    ctx->pc = 0x239E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E00u;
    // 0x239e04: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239E00u, 0x239E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E08u;
label_239e08:
    // 0x239e08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x239E08u;
    SET_GPR_U32(ctx, 31, 0x239E10u);
    ctx->pc = 0x239E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E08u;
    // 0x239e0c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239E08u, 0x239E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E10u;
label_239e10:
    // 0x239e10: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x239e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x239e14: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x239e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x239e18: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x239e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x239e1c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x239e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x239e20: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x239e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x239e24: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x239e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x239e28: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x239e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
    // 0x239e2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x239e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239e30: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x239e30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239e34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239e34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239e38: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x239e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239e3c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x239e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239e40: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x239e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239e44: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x239e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x239e48: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x239e48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x239e4c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x239e4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x239e50: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x239e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x239e54: 0x0  nop
    ctx->pc = 0x239e54u;
    // NOP
    // 0x239e58: 0x0  nop
    ctx->pc = 0x239e58u;
    // NOP
    // 0x239e5c: 0x46000044  c1          0x44
    ctx->pc = 0x239e5cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x239e60: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x239e60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x239e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239e68: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x239e68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e6c: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x239e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x239e70: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x239e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239e74: 0x0  nop
    ctx->pc = 0x239e74u;
    // NOP
    // 0x239e78: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x239E78u;
    {
        const bool branch_taken_0x239e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x239E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E78u;
        // 0x239e7c: 0xe7a101d0  swc1        $f1, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e78) {
            ctx->pc = 0x239EA0u;
            goto label_239ea0;
        }
    }
    ctx->pc = 0x239E80u;
    // 0x239e80: 0x0  nop
    ctx->pc = 0x239e80u;
    // NOP
    // 0x239e84: 0x0  nop
    ctx->pc = 0x239e84u;
    // NOP
    // 0x239e88: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x239e88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x239e8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x239e8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x239e90: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x239e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x239e94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x239e94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x239e98: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x239e98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239e9c: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x239e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
label_239ea0:
    // 0x239ea0: 0x93a400f0  lbu         $a0, 0xF0($sp)
    ctx->pc = 0x239ea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x239ea4: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x239ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x239ea8: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x239ea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x239eac: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x239eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x239eb0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x239eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x239eb4: 0xa3a400e0  sb          $a0, 0xE0($sp)
    ctx->pc = 0x239eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x239eb8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x239eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x239ebc: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x239ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239ec0: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x239ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x239ec4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239ec8: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x239ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239ecc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x239ed0: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x239ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239ed4: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x239ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239ed8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x239ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239edc: 0xc456500c  lwc1        $f22, 0x500C($v0)
    ctx->pc = 0x239edcu;
    { uint32_t bits = FAST_READ32(0x46500Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x239ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ee4: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x239ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x239ee8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x239ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x239eec: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x239EECu;
    SET_GPR_U32(ctx, 31, 0x239EF4u);
    ctx->pc = 0x239EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EECu;
    // 0x239ef0: 0xe7b60260  swc1        $f22, 0x260($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x239EECu, 0x239EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EF4u;
label_239ef4:
    // 0x239ef4: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x239ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x239ef8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x239ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x239efc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x239efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x239f00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x239f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f08: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x239f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f0c: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x239f10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x239f10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f14: 0xc077940  jal         func_1DE500
    ctx->pc = 0x239F14u;
    SET_GPR_U32(ctx, 31, 0x239F1Cu);
    ctx->pc = 0x239F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F14u;
    // 0x239f18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x239F14u, 0x239F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F1Cu;
label_239f1c:
    // 0x239f1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x239f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f20: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x239F20u;
    SET_GPR_U32(ctx, 31, 0x239F28u);
    ctx->pc = 0x239F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F20u;
    // 0x239f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x239F20u, 0x239F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F28u;
label_239f28:
    // 0x239f28: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x239f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x239f2c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x239F2Cu;
    {
        const bool branch_taken_0x239f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F2Cu;
        // 0x239f30: 0x27b00180  addiu       $s0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f2c) {
            ctx->pc = 0x23A11Cu;
            goto label_23a11c;
        }
    }
    ctx->pc = 0x239F34u;
    // 0x239f34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x239f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239f38: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x239f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239f3c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x239f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239f44: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x239f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x239f48: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x239f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x239f4c: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x239f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x239f50: 0xe7b40168  swc1        $f20, 0x168($sp)
    ctx->pc = 0x239f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x239f54: 0xe7b4016c  swc1        $f20, 0x16C($sp)
    ctx->pc = 0x239f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x239f58: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x239f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239f5c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x239f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x239f60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239f64: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239f68: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239f6c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239f70: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239f74: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239f78: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239f7c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239f80: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239f84: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239f84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239f88: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239f8c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x239f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239f90: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x239f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x239f94: 0xe6b70004  swc1        $f23, 0x4($s5)
    ctx->pc = 0x239f94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x239f98: 0xe7b40168  swc1        $f20, 0x168($sp)
    ctx->pc = 0x239f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x239f9c: 0xe7b4016c  swc1        $f20, 0x16C($sp)
    ctx->pc = 0x239f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x239fa0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x239fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239fa4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x239fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x239fa8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x239fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x239fac: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x239facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239fb0: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x239fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239fb4: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x239fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239fb8: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x239fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239fbc: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x239fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239fc0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x239fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x239fc4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x239fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x239fc8: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x239fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x239fcc: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x239fccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x239fd0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x239fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x239fd4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x239fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239fd8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x239FD8u;
    SET_GPR_U32(ctx, 31, 0x239FE0u);
    ctx->pc = 0x239FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FD8u;
    // 0x239fdc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239FD8u, 0x239FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FE0u;
label_239fe0:
    // 0x239fe0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x239FE0u;
    SET_GPR_U32(ctx, 31, 0x239FE8u);
    ctx->pc = 0x239FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FE0u;
    // 0x239fe4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x239FE0u, 0x239FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FE8u;
label_239fe8:
    // 0x239fe8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x239fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x239fec: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x239fecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x239ff0: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x239ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x239ff4: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x239ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x239ff8: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x239ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x239ffc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x239ffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a000: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23a000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a004: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a004u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a008: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x23a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a00c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x23a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a010: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x23a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a014: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x23a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23a018: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23a018u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23a01c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23a01cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23a020: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x23a020u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23a024: 0x0  nop
    ctx->pc = 0x23a024u;
    // NOP
    // 0x23a028: 0x0  nop
    ctx->pc = 0x23a028u;
    // NOP
    // 0x23a02c: 0x46000044  c1          0x44
    ctx->pc = 0x23a02cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x23a030: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x23a030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x23a034: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x23a034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a038: 0x0  nop
    ctx->pc = 0x23a038u;
    // NOP
    // 0x23a03c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x23A03Cu;
    {
        const bool branch_taken_0x23a03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A03Cu;
        // 0x23a040: 0xe7a101b0  swc1        $f1, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a03c) {
            ctx->pc = 0x23A064u;
            goto label_23a064;
        }
    }
    ctx->pc = 0x23A044u;
    // 0x23a044: 0x0  nop
    ctx->pc = 0x23a044u;
    // NOP
    // 0x23a048: 0x0  nop
    ctx->pc = 0x23a048u;
    // NOP
    // 0x23a04c: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x23a04cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x23a050: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23a050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23a054: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x23a054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23a058: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23a058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23a05c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23a05cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a060: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x23a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
label_23a064:
    // 0x23a064: 0x93a400f0  lbu         $a0, 0xF0($sp)
    ctx->pc = 0x23a064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23a068: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x23a068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x23a06c: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x23a06cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x23a070: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x23a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x23a074: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x23a074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x23a078: 0xa3a400e0  sb          $a0, 0xE0($sp)
    ctx->pc = 0x23a078u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a07c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x23a07cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23a080: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x23a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a084: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x23a084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x23a088: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x23a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a08c: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x23a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a090: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a094: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x23a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a09c: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x23a09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x23a0a0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x23a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x23a0a4: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x23A0A4u;
    SET_GPR_U32(ctx, 31, 0x23A0ACu);
    ctx->pc = 0x23A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0A4u;
    // 0x23a0a8: 0xe7b60260  swc1        $f22, 0x260($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23A0A4u, 0x23A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0ACu;
label_23a0ac:
    // 0x23a0ac: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x23a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x23a0b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x23a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x23a0b4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x23a0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x23a0b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0c0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x23a0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0c4: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x23a0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x23a0c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23a0c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0cc: 0xc077940  jal         func_1DE500
    ctx->pc = 0x23A0CCu;
    SET_GPR_U32(ctx, 31, 0x23A0D4u);
    ctx->pc = 0x23A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0CCu;
    // 0x23a0d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x23A0CCu, 0x23A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0D4u;
label_23a0d4:
    // 0x23a0d4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23a0d8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23A0D8u;
    {
        const bool branch_taken_0x23a0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0D8u;
        // 0x23a0dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0d8) {
            ctx->pc = 0x23A114u;
            goto label_23a114;
        }
    }
    ctx->pc = 0x23A0E0u;
    // 0x23a0e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x23a0e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a0e4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x23a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a0e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23a0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0f4: 0xc08e572  jal         func_2395C8
    ctx->pc = 0x23A0F4u;
    SET_GPR_U32(ctx, 31, 0x23A0FCu);
    ctx->pc = 0x23A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0F4u;
    // 0x23a0f8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C8u, 0x23A0F4u, 0x23A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0FCu;
label_23a0fc:
    // 0x23a0fc: 0xe64004a0  swc1        $f0, 0x4A0($s2)
    ctx->pc = 0x23a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
    // 0x23a100: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x23a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x23a104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A114u;
            goto label_23a114;
        }
    }
    ctx->pc = 0x23A10Cu;
    // 0x23a10c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23a10cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x23a110: 0xe64004a0  swc1        $f0, 0x4A0($s2)
    ctx->pc = 0x23a110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
label_23a114:
    // 0x23a114: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x23A114u;
    SET_GPR_U32(ctx, 31, 0x23A11Cu);
    ctx->pc = 0x23A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A114u;
    // 0x23a118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23A114u, 0x23A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A11Cu;
label_23a11c:
    // 0x23a11c: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x23a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x23a120: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x23a120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x23a124: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23a124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23a128: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23a128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23a12c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23a130: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x23a134: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a138: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x23a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a13c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x23a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a140: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x23a140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x23a144: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a148: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x23a148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x23a14c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x23a14cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x23a150: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a154: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x23a154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x23a158: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x23a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x23a15c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23a160: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x23a160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x23a164: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x23a164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x23a168: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x23a168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x23a16c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23a16cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a170: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x23a170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23a174: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a178: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x23a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a17c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x23a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a180: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x23a180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a184: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x23a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a188: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x23a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a18c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x23a18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x23a190: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x23a190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x23a194: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x23a194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x23a198: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x23a198u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x23a19c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23a1a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a1a4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x23a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a1a8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x23a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a1ac: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x23a1b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a1b4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x23a1b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x23a1b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a1bc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x23a1bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x23a1c0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x23a1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x23a1c4: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x23a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x23a1c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x23a1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x23a1cc: 0xe7a2017c  swc1        $f2, 0x17C($sp)
    ctx->pc = 0x23a1ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x23a1d0: 0xe7a30170  swc1        $f3, 0x170($sp)
    ctx->pc = 0x23a1d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x23a1d4: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x23a1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x23a1d8: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x23a1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x23a1dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23a1dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a1e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23a1e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a1e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a1e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a1e8: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x23a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a1ec: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x23a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a1f0: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x23a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a1f4: 0xc7a3018c  lwc1        $f3, 0x18C($sp)
    ctx->pc = 0x23a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a1f8: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x23a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a1fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23a200: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x23a200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x23a204: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x23a204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x23a208: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x23a208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x23a20c: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x23a20cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x23a210: 0xe7a3016c  swc1        $f3, 0x16C($sp)
    ctx->pc = 0x23a210u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x23a214: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x23a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x23a218: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x23a218u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x23a21c: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x23a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x23a220: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x23a220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x23a224: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x23a224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23a228: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x23a228u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a22c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a230: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x23a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a234: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x23a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a238: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x23a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a23c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x23a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a240: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x23a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a244: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x23a244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x23a248: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x23a248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x23a24c: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x23a24cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x23a250: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x23a250u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x23a254: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23a254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a258: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a25c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x23a25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x23a260: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x23a260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x23a264: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x23a264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x23a268: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x23a268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x23a26c: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x23a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x23a270: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x23a270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x23a274: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x23a274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23a278: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x23a278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a27c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a27cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a280: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x23a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a284: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x23a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a288: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x23a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a28c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x23a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a290: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x23a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a294: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x23a294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x23a298: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x23a298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x23a29c: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x23a29cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x23a2a0: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x23a2a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x23a2a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23a2a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a2a8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x23a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a2ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23A2ACu;
    SET_GPR_U32(ctx, 31, 0x23A2B4u);
    ctx->pc = 0x23A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2ACu;
    // 0x23a2b0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23A2ACu, 0x23A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2B4u;
label_23a2b4:
    // 0x23a2b4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23A2B4u;
    SET_GPR_U32(ctx, 31, 0x23A2BCu);
    ctx->pc = 0x23A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2B4u;
    // 0x23a2b8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23A2B4u, 0x23A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2BCu;
label_23a2bc:
    // 0x23a2bc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x23a2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a2c0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x23a2c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23a2c4: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x23a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x23a2c8: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x23a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x23a2cc: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x23a2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23a2d0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x23a2d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a2d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a2d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a2d8: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x23a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a2dc: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x23a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a2e0: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x23a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a2e4: 0xc7c40008  lwc1        $f4, 0x8($fp)
    ctx->pc = 0x23a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23a2e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23a2e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23a2ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23a2ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23a2f0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x23a2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23a2f4: 0x0  nop
    ctx->pc = 0x23a2f4u;
    // NOP
    // 0x23a2f8: 0x0  nop
    ctx->pc = 0x23a2f8u;
    // NOP
    // 0x23a2fc: 0x46000044  c1          0x44
    ctx->pc = 0x23a2fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x23a300: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x23a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x23a304: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23a304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23a308: 0x0  nop
    ctx->pc = 0x23a308u;
    // NOP
    // 0x23a30c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x23a30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a310: 0x0  nop
    ctx->pc = 0x23a310u;
    // NOP
    // 0x23a314: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x23A314u;
    {
        const bool branch_taken_0x23a314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A314u;
        // 0x23a318: 0xe7a101c0  swc1        $f1, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a314) {
            ctx->pc = 0x23A340u;
            goto label_23a340;
        }
    }
    ctx->pc = 0x23A31Cu;
    // 0x23a31c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a324: 0x0  nop
    ctx->pc = 0x23a324u;
    // NOP
    // 0x23a328: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a328u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a32c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23a32cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23a330: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x23a330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x23a334: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23a334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23a338: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23a338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a33c: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x23a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
label_23a340:
    // 0x23a340: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x23a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x23a344: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x23a344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x23a348: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x23a348u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23a34c: 0xe7b401e8  swc1        $f20, 0x1E8($sp)
    ctx->pc = 0x23a34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x23a350: 0xe7b401ec  swc1        $f20, 0x1EC($sp)
    ctx->pc = 0x23a350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x23a354: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x23a354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23a358: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23a358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a35c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a35cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a360: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x23a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a364: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x23a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a368: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x23a36c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x23a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a370: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x23a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a374: 0xc7a201fc  lwc1        $f2, 0x1FC($sp)
    ctx->pc = 0x23a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a378: 0xe7a301d0  swc1        $f3, 0x1D0($sp)
    ctx->pc = 0x23a378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x23a37c: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x23a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x23a380: 0xe7a101d8  swc1        $f1, 0x1D8($sp)
    ctx->pc = 0x23a380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x23a384: 0xe7a201dc  swc1        $f2, 0x1DC($sp)
    ctx->pc = 0x23a384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x23a388: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23a388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a38c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a390: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x23a390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x23a394: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x23a394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23a398: 0xe7b401e8  swc1        $f20, 0x1E8($sp)
    ctx->pc = 0x23a398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x23a39c: 0xe7b401ec  swc1        $f20, 0x1EC($sp)
    ctx->pc = 0x23a39cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x23a3a0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x23a3a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23a3a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23a3a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a3a8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a3a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a3ac: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x23a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a3b0: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x23a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a3b4: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x23a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a3b8: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x23a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a3bc: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x23a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a3c0: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x23a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x23a3c4: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x23a3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x23a3c8: 0xe7a201d8  swc1        $f2, 0x1D8($sp)
    ctx->pc = 0x23a3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x23a3cc: 0xe7a301dc  swc1        $f3, 0x1DC($sp)
    ctx->pc = 0x23a3ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x23a3d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23a3d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a3d4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x23a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a3d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23A3D8u;
    SET_GPR_U32(ctx, 31, 0x23A3E0u);
    ctx->pc = 0x23A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3D8u;
    // 0x23a3dc: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23A3D8u, 0x23A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3E0u;
label_23a3e0:
    // 0x23a3e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23A3E0u;
    SET_GPR_U32(ctx, 31, 0x23A3E8u);
    ctx->pc = 0x23A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3E0u;
    // 0x23a3e4: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23A3E0u, 0x23A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3E8u;
label_23a3e8:
    // 0x23a3e8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x23a3e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a3ec: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x23a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x23a3f0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x23a3f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23a3f4: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x23a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x23a3f8: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x23a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x23a3fc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x23a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x23a400: 0x7fa30220  sq          $v1, 0x220($sp)
    ctx->pc = 0x23a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
    // 0x23a404: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23a404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a408: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23a408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a40c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23a40cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a410: 0xfba10230  sqc2        $vf1, 0x230($sp)
    ctx->pc = 0x23a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a414: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x23a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a418: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x23a418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23a41c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x23a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23a420: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23a420u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23a424: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23a424u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23a428: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x23a428u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23a42c: 0x0  nop
    ctx->pc = 0x23a42cu;
    // NOP
    // 0x23a430: 0x0  nop
    ctx->pc = 0x23a430u;
    // NOP
    // 0x23a434: 0x46000044  c1          0x44
    ctx->pc = 0x23a434u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x23a438: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x23a438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x23a43c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x23a43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a440: 0x0  nop
    ctx->pc = 0x23a440u;
    // NOP
    // 0x23a444: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x23A444u;
    {
        const bool branch_taken_0x23a444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A444u;
        // 0x23a448: 0xe7a10250  swc1        $f1, 0x250($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a444) {
            ctx->pc = 0x23A470u;
            goto label_23a470;
        }
    }
    ctx->pc = 0x23A44Cu;
    // 0x23a44c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a454: 0x0  nop
    ctx->pc = 0x23a454u;
    // NOP
    // 0x23a458: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a458u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a45c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23a45cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23a460: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x23a460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23a464: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23a464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23a468: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23a468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23a46c: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x23a46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
label_23a470:
    // 0x23a470: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x23a474: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a478: 0xc455500c  lwc1        $f21, 0x500C($v0)
    ctx->pc = 0x23a478u;
    { uint32_t bits = FAST_READ32(0x46500Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23a47c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a480: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x23A480u;
    SET_GPR_U32(ctx, 31, 0x23A488u);
    ctx->pc = 0x23A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A480u;
    // 0x23a484: 0xe7b50260  swc1        $f21, 0x260($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23A480u, 0x23A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A488u;
label_23a488:
    // 0x23a488: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x23a488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x23a48c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x23a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x23a490: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x23a490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x23a494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23a494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a49c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x23a49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4a0: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x23a4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x23a4a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23a4a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4a8: 0xc077940  jal         func_1DE500
    ctx->pc = 0x23A4A8u;
    SET_GPR_U32(ctx, 31, 0x23A4B0u);
    ctx->pc = 0x23A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4A8u;
    // 0x23a4ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x23A4A8u, 0x23A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4B0u;
label_23a4b0:
    // 0x23a4b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23a4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4b4: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x23A4B4u;
    SET_GPR_U32(ctx, 31, 0x23A4BCu);
    ctx->pc = 0x23A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4B4u;
    // 0x23a4b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23A4B4u, 0x23A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4BCu;
label_23a4bc:
    // 0x23a4bc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x23a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23a4c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23A4C0u;
    {
        const bool branch_taken_0x23a4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4C0u;
        // 0x23a4c4: 0xe65404ac  swc1        $f20, 0x4AC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4c0) {
            ctx->pc = 0x23A540u;
            goto label_23a540;
        }
    }
    ctx->pc = 0x23A4C8u;
    // 0x23a4c8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x23a4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a4cc: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x23a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a4d0: 0xe7b50260  swc1        $f21, 0x260($sp)
    ctx->pc = 0x23a4d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x23a4d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4d8: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x23A4D8u;
    SET_GPR_U32(ctx, 31, 0x23A4E0u);
    ctx->pc = 0x23A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4D8u;
    // 0x23a4dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23A4D8u, 0x23A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4E0u;
label_23a4e0:
    // 0x23a4e0: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x23a4e4: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x23a4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x23a4e8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x23a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x23a4ec: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x23a4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x23a4f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4f8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x23a4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23a4fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a500: 0xc077940  jal         func_1DE500
    ctx->pc = 0x23A500u;
    SET_GPR_U32(ctx, 31, 0x23A508u);
    ctx->pc = 0x23A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A500u;
    // 0x23a504: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x23A500u, 0x23A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A508u;
label_23a508:
    // 0x23a508: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x23a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23a50c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23A50Cu;
    {
        const bool branch_taken_0x23a50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A50Cu;
        // 0x23a510: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a50c) {
            ctx->pc = 0x23A538u;
            goto label_23a538;
        }
    }
    ctx->pc = 0x23A514u;
    // 0x23a514: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x23a514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a518: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x23a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23a51c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23a51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a520: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x23a520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a528: 0xc08e572  jal         func_2395C8
    ctx->pc = 0x23A528u;
    SET_GPR_U32(ctx, 31, 0x23A530u);
    ctx->pc = 0x23A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A528u;
    // 0x23a52c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C8u, 0x23A528u, 0x23A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A530u;
label_23a530:
    // 0x23a530: 0xe64004ac  swc1        $f0, 0x4AC($s2)
    ctx->pc = 0x23a530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1196), bits); }
    // 0x23a534: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23a538:
    // 0x23a538: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x23A538u;
    SET_GPR_U32(ctx, 31, 0x23A540u);
    ctx->pc = 0x23A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A538u;
    // 0x23a53c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23A538u, 0x23A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A540u;
label_23a540:
    // 0x23a540: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x23a540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x23a544: 0xdfb10278  ld          $s1, 0x278($sp)
    ctx->pc = 0x23a544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x23a548: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x23a548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x23a54c: 0xdfb30288  ld          $s3, 0x288($sp)
    ctx->pc = 0x23a54cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x23a550: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x23a550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x23a554: 0xdfb50298  ld          $s5, 0x298($sp)
    ctx->pc = 0x23a554u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x23a558: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x23a558u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x23a55c: 0xdfb702a8  ld          $s7, 0x2A8($sp)
    ctx->pc = 0x23a55cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x23a560: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x23a560u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x23a564: 0xdfbf02b8  ld          $ra, 0x2B8($sp)
    ctx->pc = 0x23a564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x23a568: 0xc7b702d8  lwc1        $f23, 0x2D8($sp)
    ctx->pc = 0x23a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23a56c: 0xc7b602d0  lwc1        $f22, 0x2D0($sp)
    ctx->pc = 0x23a56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23a570: 0xc7b502c8  lwc1        $f21, 0x2C8($sp)
    ctx->pc = 0x23a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23a574: 0xc7b402c0  lwc1        $f20, 0x2C0($sp)
    ctx->pc = 0x23a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a578: 0x3e00008  jr          $ra
    ctx->pc = 0x23A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A578u;
        // 0x23a57c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A580u;
}
