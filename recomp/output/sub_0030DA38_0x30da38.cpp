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

// Function: sub_0030DA38
// Address: 0x30da38 - 0x30dce8
void sub_0030DA38_0x30da38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DA38_0x30da38");
#endif

    switch (ctx->pc) {
        case 0x30da5cu: goto label_30da5c;
        case 0x30da64u: goto label_30da64;
        case 0x30da6cu: goto label_30da6c;
        case 0x30da78u: goto label_30da78;
        case 0x30da88u: goto label_30da88;
        case 0x30dcd0u: goto label_30dcd0;
        default: break;
    }

    ctx->pc = 0x30da38u;

    // 0x30da38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30da3c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x30da3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x30da40: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x30da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x30da44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30da44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da48: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x30da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x30da4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30da4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da50: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x30da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x30da54: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30DA54u;
    SET_GPR_U32(ctx, 31, 0x30DA5Cu);
    ctx->pc = 0x30DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA54u;
    // 0x30da58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30DA54u, 0x30DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA5Cu;
label_30da5c:
    // 0x30da5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30DA5Cu;
    SET_GPR_U32(ctx, 31, 0x30DA64u);
    ctx->pc = 0x30DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA5Cu;
    // 0x30da60: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30DA5Cu, 0x30DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA64u;
label_30da64:
    // 0x30da64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30DA64u;
    SET_GPR_U32(ctx, 31, 0x30DA6Cu);
    ctx->pc = 0x30DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA64u;
    // 0x30da68: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30DA64u, 0x30DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA6Cu;
label_30da6c:
    // 0x30da6c: 0x8e500100  lw          $s0, 0x100($s2)
    ctx->pc = 0x30da6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x30da70: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30DA70u;
    SET_GPR_U32(ctx, 31, 0x30DA78u);
    ctx->pc = 0x30DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA70u;
    // 0x30da74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30DA70u, 0x30DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA78u;
label_30da78:
    // 0x30da78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DA78u;
    {
        const bool branch_taken_0x30da78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA78u;
        // 0x30da7c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da78) {
            ctx->pc = 0x30DA8Cu;
            goto label_30da8c;
        }
    }
    ctx->pc = 0x30DA80u;
    // 0x30da80: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30DA80u;
    SET_GPR_U32(ctx, 31, 0x30DA88u);
    ctx->pc = 0x30DA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA80u;
    // 0x30da84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30DA80u, 0x30DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA88u;
label_30da88:
    // 0x30da88: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x30da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_30da8c:
    // 0x30da8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30da8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30da90: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30da94: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x30da94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30da98: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x30da98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x30da9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30da9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30daa0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x30daa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30daa4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30daa8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x30daac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30daacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30dab0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x30dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dab4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x30dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30dab8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x30dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30dabc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30dabcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30dac0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x30dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dac4: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x30dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dac8: 0x264700e0  addiu       $a3, $s2, 0xE0
    ctx->pc = 0x30dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x30dacc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x30daccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x30dad0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30dad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30dad4: 0x0  nop
    ctx->pc = 0x30dad4u;
    // NOP
    // 0x30dad8: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x30dad8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x30dadc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30dadcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30dae0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30dae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dae4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x30dae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30dae8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x30dae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30daec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x30daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30daf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30daf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30daf4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30daf8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30daf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30dafc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x30dafcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30db00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x30db00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30db04: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x30db04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30db08: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x30db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30db0c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x30db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30db10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30db10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30db14: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x30db14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30db18: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30db18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30db1c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x30db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30db20: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x30db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30db24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30db24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30db28: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x30db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30db2c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x30db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30db30: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x30db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30db34: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x30db34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30db38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x30db38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30db3c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x30db3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30db40: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x30db40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30db44: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x30db44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30db48: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x30db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30db4c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x30db4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30db50: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x30db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30db54: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x30db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30db58: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x30db58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x30db5c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x30db5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x30db60: 0xe6240020  swc1        $f4, 0x20($s1)
    ctx->pc = 0x30db60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x30db64: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x30db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30db68: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x30db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30db6c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x30db6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30db70: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x30db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30db74: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30db78: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x30db78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x30db7c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x30db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30db80: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x30db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30db84: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x30db84u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30db88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30db88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30db8c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30db8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30db90: 0x0  nop
    ctx->pc = 0x30db90u;
    // NOP
    // 0x30db94: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x30db94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30db98: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x30db98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x30db9c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x30db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dba0: 0x0  nop
    ctx->pc = 0x30dba0u;
    // NOP
    // 0x30dba4: 0x46013003  div.s       $f0, $f6, $f1
    ctx->pc = 0x30dba4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x30dba8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x30dba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x30dbac: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x30dbacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30dbb0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x30dbb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x30dbb4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x30dbb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30dbb8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x30dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dbbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30dbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30dbc0: 0x0  nop
    ctx->pc = 0x30dbc0u;
    // NOP
    // 0x30dbc4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x30dbc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x30dbc8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x30dbc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30dbcc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x30dbccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x30dbd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x30dbd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30dbd4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x30dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dbd8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30dbd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30dbdc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x30dbdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30dbe0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30dbe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30dbe4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x30dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dbe8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x30dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dbec: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x30dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dbf0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x30dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dbf4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x30dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dbf8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x30dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30dbfc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x30dbfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30dc00: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x30dc00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30dc04: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x30dc04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30dc08: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x30dc08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30dc0c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x30dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dc10: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x30dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dc14: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x30dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dc18: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x30dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30dc1c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x30dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x30dc20: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x30dc20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x30dc24: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x30dc24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x30dc28: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x30dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dc2c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x30dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dc30: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x30dc30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30dc34: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x30dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dc38: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30dc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dc3c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x30dc3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x30dc40: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x30dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dc44: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x30dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dc48: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x30dc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30dc4c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x30dc4cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x30dc50: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x30dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dc54: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x30dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dc58: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x30dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30dc5c: 0xe6250034  swc1        $f5, 0x34($s1)
    ctx->pc = 0x30dc5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x30dc60: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x30dc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x30dc64: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x30dc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x30dc68: 0xe6240028  swc1        $f4, 0x28($s1)
    ctx->pc = 0x30dc68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x30dc6c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x30dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dc70: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x30dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dc74: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x30dc74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30dc78: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x30dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dc7c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x30dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dc80: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x30dc80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x30dc84: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x30dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dc88: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x30dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dc8c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x30dc8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30dc90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30dc90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30dc94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30dc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc98: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x30dc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30dc9c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x30dc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30dca0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x30dca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x30dca4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x30dca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x30dca8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x30dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30dcac: 0x3e00008  jr          $ra
    ctx->pc = 0x30DCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCACu;
        // 0x30dcb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DCB4u;
    // 0x30dcb4: 0x0  nop
    ctx->pc = 0x30dcb4u;
    // NOP
    // 0x30dcb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30dcbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dcc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30dcc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30dcc8: 0xc0c23da  jal         func_308F68
    ctx->pc = 0x30DCC8u;
    SET_GPR_U32(ctx, 31, 0x30DCD0u);
    ctx->pc = 0x30DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCC8u;
    // 0x30dccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F68u, 0x30DCC8u, 0x30DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCD0u;
label_30dcd0:
    // 0x30dcd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30dcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30dcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30dcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30dcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x30DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCDCu;
        // 0x30dce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DCE4u;
    // 0x30dce4: 0x0  nop
    ctx->pc = 0x30dce4u;
    // NOP
    ctx->pc = 0x30dce8u;
}
