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

// Function: sub_00318FE0
// Address: 0x318fe0 - 0x319440
void sub_00318FE0_0x318fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318FE0_0x318fe0");
#endif

    switch (ctx->pc) {
        case 0x319014u: goto label_319014;
        case 0x319030u: goto label_319030;
        case 0x319038u: goto label_319038;
        case 0x319040u: goto label_319040;
        case 0x31904cu: goto label_31904c;
        case 0x31905cu: goto label_31905c;
        case 0x31926cu: goto label_31926c;
        case 0x319278u: goto label_319278;
        default: break;
    }

    ctx->pc = 0x318fe0u;

    // 0x318fe0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x318fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x318fe4: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x318fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x318fe8: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x318fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x318fec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x318fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ff0: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x318ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x318ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x318ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ff8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x318ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x318ffc: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x318ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x319000: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x319000u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x319004: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x319004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x319008: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x319008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x31900c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x31900Cu;
    SET_GPR_U32(ctx, 31, 0x319014u);
    ctx->pc = 0x319010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31900Cu;
    // 0x319010: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x31900Cu, 0x319014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319014u;
label_319014:
    // 0x319014: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319018: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x319018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31901c: 0x8c52bd48  lw          $s2, -0x42B8($v0)
    ctx->pc = 0x31901cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x319020: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x319020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319024: 0xc65400f0  lwc1        $f20, 0xF0($s2)
    ctx->pc = 0x319024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x319028: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x319028u;
    SET_GPR_U32(ctx, 31, 0x319030u);
    ctx->pc = 0x31902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319028u;
    // 0x31902c: 0xc65500f4  lwc1        $f21, 0xF4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x319028u, 0x319030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319030u;
label_319030:
    // 0x319030: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x319030u;
    SET_GPR_U32(ctx, 31, 0x319038u);
    ctx->pc = 0x319034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319030u;
    // 0x319034: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x319030u, 0x319038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319038u;
label_319038:
    // 0x319038: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x319038u;
    SET_GPR_U32(ctx, 31, 0x319040u);
    ctx->pc = 0x31903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319038u;
    // 0x31903c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x319038u, 0x319040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319040u;
label_319040:
    // 0x319040: 0x8e500100  lw          $s0, 0x100($s2)
    ctx->pc = 0x319040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x319044: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x319044u;
    SET_GPR_U32(ctx, 31, 0x31904Cu);
    ctx->pc = 0x319048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319044u;
    // 0x319048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x319044u, 0x31904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31904Cu;
label_31904c:
    // 0x31904c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31904Cu;
    {
        const bool branch_taken_0x31904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31904Cu;
        // 0x319050: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31904c) {
            ctx->pc = 0x319060u;
            goto label_319060;
        }
    }
    ctx->pc = 0x319054u;
    // 0x319054: 0xc0c4900  jal         func_312400
    ctx->pc = 0x319054u;
    SET_GPR_U32(ctx, 31, 0x31905Cu);
    ctx->pc = 0x319058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319054u;
    // 0x319058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x319054u, 0x31905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31905Cu;
label_31905c:
    // 0x31905c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_319060:
    // 0x319060: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x319060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319064: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x319064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x319068: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x319068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31906c: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x31906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x319070: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x319070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319074: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x319074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x319078: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31907c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x31907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x319080: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x319080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319084: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x319084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x319088: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x319088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31908c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x31908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x319090: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x319090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319094: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x319094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x319098: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x319098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31909c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x31909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3190a0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3190a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3190a4: 0x0  nop
    ctx->pc = 0x3190a4u;
    // NOP
    // 0x3190a8: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x3190a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x3190ac: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x3190acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3190b0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3190b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3190b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3190b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3190b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3190b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3190bc: 0xfa610040  sqc2        $vf1, 0x40($s3)
    ctx->pc = 0x3190bcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3190c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3190c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3190c4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3190c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3190c8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x3190c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3190cc: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x3190ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3190d0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3190d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3190d4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3190d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3190d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3190d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3190dc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x3190dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3190e0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3190e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3190e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3190e8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3190e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3190ec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3190ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3190f0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x3190f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3190f4: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x3190f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3190f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3190f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3190fc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3190fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319100: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x319100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319104: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x319104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319108: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x319108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x31910c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x31910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x319110: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x319110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x319114: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x319114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x319118: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x319118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31911c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x31911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x319120: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x319120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319124: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x319124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319128: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x319128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31912c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x31912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x319130: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x319130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x319134: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x319134u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x319138: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x319138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31913c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x31913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319140: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x319140u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x319144: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x319144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319148: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x319148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31914c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x31914cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x319150: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x319150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319154: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x319154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319158: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x319158u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x31915c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31915cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x319160: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x319160u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x319164: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x319164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x319168: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x319168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31916c: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x31916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319170: 0x0  nop
    ctx->pc = 0x319170u;
    // NOP
    // 0x319174: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x319174u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x319178: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x319178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31917c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x31917cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x319180: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x319180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x319184: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x319184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x319188: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x319188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31918c: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x31918cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x319190: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x319190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x319194: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x319194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x319198: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x319198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31919c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x31919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3191a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3191a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3191a4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3191a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3191a8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3191a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3191ac: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x3191acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3191b0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x3191b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3191b4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3191b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3191b8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x3191b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3191bc: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x3191bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3191c0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3191c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3191c4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3191c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3191c8: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x3191c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3191cc: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x3191ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3191d0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3191d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3191d4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3191d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3191d8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3191d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3191dc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x3191dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3191e0: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x3191e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3191e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3191e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3191e8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3191e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3191ec: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x3191ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3191f0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3191f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3191f4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3191f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3191f8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3191f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3191fc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3191fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319200: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x319200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319204: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x319204u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x319208: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x319208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31920c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x31920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319210: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x319210u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x319214: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x319214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x319218: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31921c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x31921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319220: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x319220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319224: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x319224u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x319228: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x319228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31922c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x31922cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x319230: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x319230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x319234: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x319234u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x319238: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x319238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31923c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x31923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319240: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x319240u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x319244: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x319244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319248: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x319248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31924c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x31924cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x319250: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x319250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319254: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x319254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319258: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x319258u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x31925c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31925cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x319260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319264: 0xc0c2d8e  jal         func_30B638
    ctx->pc = 0x319264u;
    SET_GPR_U32(ctx, 31, 0x31926Cu);
    ctx->pc = 0x319268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319264u;
    // 0x319268: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B638u, 0x319264u, 0x31926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31926Cu;
label_31926c:
    // 0x31926c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319270: 0xc0c2d92  jal         func_30B648
    ctx->pc = 0x319270u;
    SET_GPR_U32(ctx, 31, 0x319278u);
    ctx->pc = 0x319274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319270u;
    // 0x319274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B648u, 0x319270u, 0x319278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319278u;
label_319278:
    // 0x319278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31927c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x31927cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x319280: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x319280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319284: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x319284u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319288: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x319288u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31928c: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x31928cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319290: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x319290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x319294: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x319294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x319298: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x319298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31929c: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x31929cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3192a0: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3192a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3192a4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3192a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3192a8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3192a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3192ac: 0x0  nop
    ctx->pc = 0x3192acu;
    // NOP
    // 0x3192b0: 0x45020058  bc1fl       . + 4 + (0x58 << 2)
    ctx->pc = 0x3192B0u;
    {
        const bool branch_taken_0x3192b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3192b0) {
            ctx->pc = 0x3192B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3192B0u;
            // 0x3192b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319414u;
            goto label_319414;
        }
    }
    ctx->pc = 0x3192B8u;
    // 0x3192b8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x3192b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3192bc: 0x0  nop
    ctx->pc = 0x3192bcu;
    // NOP
    // 0x3192c0: 0x45020054  bc1fl       . + 4 + (0x54 << 2)
    ctx->pc = 0x3192C0u;
    {
        const bool branch_taken_0x3192c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3192c0) {
            ctx->pc = 0x3192C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3192C0u;
            // 0x3192c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319414u;
            goto label_319414;
        }
    }
    ctx->pc = 0x3192C8u;
    // 0x3192c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3192c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3192cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3192ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3192d0: 0x0  nop
    ctx->pc = 0x3192d0u;
    // NOP
    // 0x3192d4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x3192d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3192d8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3192D8u;
    {
        const bool branch_taken_0x3192d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3192DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192D8u;
        // 0x3192dc: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192d8) {
            ctx->pc = 0x3192F4u;
            goto label_3192f4;
        }
    }
    ctx->pc = 0x3192E0u;
    // 0x3192e0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3192e0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3192e4: 0x0  nop
    ctx->pc = 0x3192e4u;
    // NOP
    // 0x3192e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3192e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3192ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3192ECu;
    {
        const bool branch_taken_0x3192ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3192F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192ECu;
        // 0x3192f0: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192ec) {
            ctx->pc = 0x319310u;
            goto label_319310;
        }
    }
    ctx->pc = 0x3192F4u;
label_3192f4:
    // 0x3192f4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3192f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3192f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3192f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3192fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3192fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319300: 0x0  nop
    ctx->pc = 0x319300u;
    // NOP
    // 0x319304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319308: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x319308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31930c: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x31930cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_319310:
    // 0x319310: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x319310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319314: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x319314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x319318: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319318u;
    {
        const bool branch_taken_0x319318 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319318u;
        // 0x31931c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319318) {
            ctx->pc = 0x319334u;
            goto label_319334;
        }
    }
    ctx->pc = 0x319320u;
    // 0x319320: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319324: 0x0  nop
    ctx->pc = 0x319324u;
    // NOP
    // 0x319328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31932c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31932Cu;
    {
        const bool branch_taken_0x31932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31932Cu;
        // 0x319330: 0x46001842  mul.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31932c) {
            ctx->pc = 0x319354u;
            goto label_319354;
        }
    }
    ctx->pc = 0x319334u;
label_319334:
    // 0x319334: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x319334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x319338: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x319338u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x31933c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x319340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319344: 0x0  nop
    ctx->pc = 0x319344u;
    // NOP
    // 0x319348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31934c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31934cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x319350: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x319350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_319354:
    // 0x319354: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x319354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319358: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x319358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31935c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x31935cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x319360: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x319360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x319364: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x319364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x319368: 0xc64100ec  lwc1        $f1, 0xEC($s2)
    ctx->pc = 0x319368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31936c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x31936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319370: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x319370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x319374: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319374u;
    {
        const bool branch_taken_0x319374 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x319378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319374u;
        // 0x319378: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319374) {
            ctx->pc = 0x319390u;
            goto label_319390;
        }
    }
    ctx->pc = 0x31937Cu;
    // 0x31937c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x31937cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319380: 0x0  nop
    ctx->pc = 0x319380u;
    // NOP
    // 0x319384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x319384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x319388: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x319388u;
    {
        const bool branch_taken_0x319388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319388u;
        // 0x31938c: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319388) {
            ctx->pc = 0x3193B0u;
            goto label_3193b0;
        }
    }
    ctx->pc = 0x319390u;
label_319390:
    // 0x319390: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x319390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x319394: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x319394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x319398: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31939c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31939cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3193a0: 0x0  nop
    ctx->pc = 0x3193a0u;
    // NOP
    // 0x3193a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3193a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3193a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3193a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3193ac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3193acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3193b0:
    // 0x3193b0: 0x0  nop
    ctx->pc = 0x3193b0u;
    // NOP
    // 0x3193b4: 0x0  nop
    ctx->pc = 0x3193b4u;
    // NOP
    // 0x3193b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3193b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3193bc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3193BCu;
    {
        const bool branch_taken_0x3193bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3193C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193BCu;
        // 0x3193c0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193bc) {
            ctx->pc = 0x3193D8u;
            goto label_3193d8;
        }
    }
    ctx->pc = 0x3193C4u;
    // 0x3193c4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3193c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3193c8: 0x0  nop
    ctx->pc = 0x3193c8u;
    // NOP
    // 0x3193cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3193ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3193d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3193D0u;
    {
        const bool branch_taken_0x3193d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3193D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193D0u;
        // 0x3193d4: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193d0) {
            ctx->pc = 0x3193F8u;
            goto label_3193f8;
        }
    }
    ctx->pc = 0x3193D8u;
label_3193d8:
    // 0x3193d8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3193d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3193dc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3193dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3193e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3193e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3193e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3193e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3193e8: 0x0  nop
    ctx->pc = 0x3193e8u;
    // NOP
    // 0x3193ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3193ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3193f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3193f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x3193f4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3193f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3193f8:
    // 0x3193f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3193f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3193fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3193fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319404: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x319404u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x319408: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x319408u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x31940c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31940cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x319410: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x319410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_319414:
    // 0x319414: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x319414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x319418: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x319418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31941c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x31941cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x319420: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x319420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x319424: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x319424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x319428: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x319428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31942c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x31942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x319430: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x319430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x319434: 0x3e00008  jr          $ra
    ctx->pc = 0x319434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319434u;
        // 0x319438: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31943Cu;
    // 0x31943c: 0x0  nop
    ctx->pc = 0x31943cu;
    // NOP
    ctx->pc = 0x319440u;
}
