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

// Function: sub_00214D10
// Address: 0x214d10 - 0x215108
void sub_00214D10_0x214d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D10_0x214d10");
#endif

    switch (ctx->pc) {
        case 0x214d4cu: goto label_214d4c;
        case 0x214d64u: goto label_214d64;
        case 0x214d78u: goto label_214d78;
        case 0x214d8cu: goto label_214d8c;
        case 0x214d94u: goto label_214d94;
        case 0x214d9cu: goto label_214d9c;
        case 0x214da8u: goto label_214da8;
        case 0x214db8u: goto label_214db8;
        case 0x214fccu: goto label_214fcc;
        default: break;
    }

    ctx->pc = 0x214d10u;

    // 0x214d10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x214d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x214d14: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x214d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x214d18: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x214d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x214d1c: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x214d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x214d20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x214d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d24: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x214d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x214d28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x214d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d2c: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x214d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x214d30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x214d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d34: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x214d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x214d38: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x214d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x214d3c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x214d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x214d40: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x214d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x214d44: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x214D44u;
    SET_GPR_U32(ctx, 31, 0x214D4Cu);
    ctx->pc = 0x214D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D44u;
    // 0x214d48: 0x245321d0  addiu       $s3, $v0, 0x21D0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x214D44u, 0x214D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D4Cu;
label_214d4c:
    // 0x214d4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214d50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214d54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214d5c: 0xc0c63f8  jal         func_318FE0
    ctx->pc = 0x214D5Cu;
    SET_GPR_U32(ctx, 31, 0x214D64u);
    ctx->pc = 0x214D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D5Cu;
    // 0x214d60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318FE0u, 0x214D5Cu, 0x214D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D64u;
label_214d64:
    // 0x214d64: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x214d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x214d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x214d6c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x214d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x214d70: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x214D70u;
    SET_GPR_U32(ctx, 31, 0x214D78u);
    ctx->pc = 0x214D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D70u;
    // 0x214d74: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x214D70u, 0x214D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D78u;
label_214d78:
    // 0x214d78: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x214d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214d7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x214d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x214d80: 0x8c51bd48  lw          $s1, -0x42B8($v0)
    ctx->pc = 0x214d80u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x214d84: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x214D84u;
    SET_GPR_U32(ctx, 31, 0x214D8Cu);
    ctx->pc = 0x214D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D84u;
    // 0x214d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x214D84u, 0x214D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D8Cu;
label_214d8c:
    // 0x214d8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x214D8Cu;
    SET_GPR_U32(ctx, 31, 0x214D94u);
    ctx->pc = 0x214D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D8Cu;
    // 0x214d90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x214D8Cu, 0x214D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D94u;
label_214d94:
    // 0x214d94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x214D94u;
    SET_GPR_U32(ctx, 31, 0x214D9Cu);
    ctx->pc = 0x214D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D94u;
    // 0x214d98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x214D94u, 0x214D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D9Cu;
label_214d9c:
    // 0x214d9c: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x214da0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x214DA0u;
    SET_GPR_U32(ctx, 31, 0x214DA8u);
    ctx->pc = 0x214DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DA0u;
    // 0x214da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x214DA0u, 0x214DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DA8u;
label_214da8:
    // 0x214da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214DA8u;
    {
        const bool branch_taken_0x214da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA8u;
        // 0x214dac: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da8) {
            ctx->pc = 0x214DBCu;
            goto label_214dbc;
        }
    }
    ctx->pc = 0x214DB0u;
    // 0x214db0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x214DB0u;
    SET_GPR_U32(ctx, 31, 0x214DB8u);
    ctx->pc = 0x214DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DB0u;
    // 0x214db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x214DB0u, 0x214DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DB8u;
label_214db8:
    // 0x214db8: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x214db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_214dbc:
    // 0x214dbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214dc0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x214dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214dc4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x214dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x214dc8: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x214dcc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214dd0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x214dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214dd4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x214dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x214dd8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x214dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x214ddc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214de0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x214de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214de4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x214de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x214de8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x214de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x214dec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x214decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214df0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x214df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214df4: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x214df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214df8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x214dfc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x214dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x214e00: 0x0  nop
    ctx->pc = 0x214e00u;
    // NOP
    // 0x214e04: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x214e04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x214e08: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x214e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x214e0c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x214e0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214e10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x214e10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x214e14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x214e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214e18: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x214e18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214e1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x214e20: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x214e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x214e24: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x214e28: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x214e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x214e2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x214e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214e30: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x214e30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x214e34: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x214e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214e38: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x214e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214e3c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x214e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x214e40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214e40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e44: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x214e44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214e48: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214e4c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x214e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214e50: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x214e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214e54: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x214e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x214e58: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x214e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214e5c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x214e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214e60: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x214e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214e64: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x214e64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x214e68: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x214e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x214e6c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x214e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x214e70: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x214e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x214e74: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x214e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214e78: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x214e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214e7c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x214e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214e80: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x214e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214e84: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x214e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214e88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x214e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x214e8c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x214e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x214e90: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x214e90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x214e94: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x214e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214e98: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x214e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214e9c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x214e9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214ea0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x214ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214ea4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x214ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214ea8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x214ea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x214eac: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x214eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214eb0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x214eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214eb4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x214eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214eb8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x214eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x214ebc: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x214ebcu;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x214ec0: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x214ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x214ec4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x214ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x214ec8: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x214ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214ecc: 0x0  nop
    ctx->pc = 0x214eccu;
    // NOP
    // 0x214ed0: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x214ed0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x214ed4: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x214ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x214ed8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x214ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x214edc: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x214edcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x214ee0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x214ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214ee4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x214ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214ee8: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x214ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x214eec: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x214eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214ef0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x214ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x214ef4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x214ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214ef8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x214ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214efc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f00: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x214f00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214f04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214f08: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x214f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214f0c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x214f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214f10: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x214f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214f14: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x214f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214f18: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x214f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214f1c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x214f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x214f20: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x214f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x214f24: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x214f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x214f28: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x214f28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x214f2c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x214f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214f30: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x214f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214f34: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x214f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214f38: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x214f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214f3c: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x214f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214f40: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x214f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x214f44: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x214f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x214f48: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x214f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x214f4c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x214f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214f50: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x214f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214f54: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x214f54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214f58: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x214f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214f5c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x214f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214f60: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x214f60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x214f64: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x214f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214f68: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x214f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214f6c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x214f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214f70: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x214f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x214f74: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x214f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214f78: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x214f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214f7c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x214f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214f80: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x214f80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x214f84: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x214f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x214f88: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x214f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x214f8c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x214f8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x214f90: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x214f90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x214f94: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x214f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214f98: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x214f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214f9c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x214f9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214fa0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x214fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214fa4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x214fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214fa8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x214fa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x214fac: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x214facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214fb0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x214fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214fb4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x214fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214fb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x214fb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x214fbc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x214fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x214fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fc4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x214FC4u;
    SET_GPR_U32(ctx, 31, 0x214FCCu);
    ctx->pc = 0x214FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FC4u;
    // 0x214fc8: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x214FC4u, 0x214FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FCCu;
label_214fcc:
    // 0x214fcc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x214fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214fd0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x214fd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214fd4: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x214fd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214fd8: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x214fd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x214fdc: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x214fdcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x214fe0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x214fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x214fe4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x214fe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x214fe8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x214fe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x214fec: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x214fecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214ff0: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x214ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214ff4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x214ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214ffc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x214ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x215000: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x215000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x215004: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21500c: 0x0  nop
    ctx->pc = 0x21500cu;
    // NOP
    // 0x215010: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x215010u;
    {
        const bool branch_taken_0x215010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215010) {
            ctx->pc = 0x215014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215010u;
            // 0x215014: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x215018u;
    // 0x215018: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x215018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x21501c: 0x30621001  andi        $v0, $v1, 0x1001
    ctx->pc = 0x21501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
    // 0x215020: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x215020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x215024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215024u;
    {
        const bool branch_taken_0x215024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215024u;
        // 0x215028: 0xc6a10030  lwc1        $f1, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215024) {
            ctx->pc = 0x215040u;
            goto label_215040;
        }
    }
    ctx->pc = 0x21502Cu;
    // 0x21502c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x21502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x215030: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x215030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x215034: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x215034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x215038: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215038u;
    {
        const bool branch_taken_0x215038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215038u;
        // 0x21503c: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215038) {
            ctx->pc = 0x215048u;
            goto label_215048;
        }
    }
    ctx->pc = 0x215040u;
label_215040:
    // 0x215040: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x215040u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x215044: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x215044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215048:
    // 0x215048: 0x0  nop
    ctx->pc = 0x215048u;
    // NOP
    // 0x21504c: 0x0  nop
    ctx->pc = 0x21504cu;
    // NOP
    // 0x215050: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x215050u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x215054: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x215054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215058:
    // 0x215058: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x215058u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21505c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x21505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215060: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x215060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215064: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215068: 0x0  nop
    ctx->pc = 0x215068u;
    // NOP
    // 0x21506c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x21506Cu;
    {
        const bool branch_taken_0x21506c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21506c) {
            ctx->pc = 0x215070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21506Cu;
            // 0x215070: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21508Cu;
            goto label_21508c;
        }
    }
    ctx->pc = 0x215074u;
    // 0x215074: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x215074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21507c: 0x0  nop
    ctx->pc = 0x21507cu;
    // NOP
    // 0x215080: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x215080u;
    {
        const bool branch_taken_0x215080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215080) {
            ctx->pc = 0x215084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215080u;
            // 0x215084: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215094u;
            goto label_215094;
        }
    }
    ctx->pc = 0x215088u;
    // 0x215088: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x215088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_21508c:
    // 0x21508c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x21508cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x215090: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x215090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215094:
    // 0x215094: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x215094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21509c: 0x0  nop
    ctx->pc = 0x21509cu;
    // NOP
    // 0x2150a0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2150A0u;
    {
        const bool branch_taken_0x2150a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2150a0) {
            ctx->pc = 0x2150A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2150A0u;
            // 0x2150a4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2150C0u;
            goto label_2150c0;
        }
    }
    ctx->pc = 0x2150A8u;
    // 0x2150a8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2150a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2150ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2150acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2150b0: 0x0  nop
    ctx->pc = 0x2150b0u;
    // NOP
    // 0x2150b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2150B4u;
    {
        const bool branch_taken_0x2150b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2150b4) {
            ctx->pc = 0x2150C8u;
            goto label_2150c8;
        }
    }
    ctx->pc = 0x2150BCu;
    // 0x2150bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2150bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2150c0:
    // 0x2150c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2150c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2150c4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2150c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2150c8:
    // 0x2150c8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x2150c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2150cc: 0x0  nop
    ctx->pc = 0x2150ccu;
    // NOP
    // 0x2150d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2150D0u;
    {
        const bool branch_taken_0x2150d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2150D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150D0u;
        // 0x2150d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150d0) {
            ctx->pc = 0x2150DCu;
            goto label_2150dc;
        }
    }
    ctx->pc = 0x2150D8u;
    // 0x2150d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2150d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2150dc:
    // 0x2150dc: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2150dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2150e0: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x2150e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2150e4: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2150e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2150e8: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x2150e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2150ec: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2150ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2150f0: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x2150f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2150f4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2150f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2150f8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2150f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2150fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2150FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150FCu;
        // 0x215100: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2150FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215104u;
    // 0x215104: 0x0  nop
    ctx->pc = 0x215104u;
    // NOP
    ctx->pc = 0x215108u;
}
