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

// Function: sub_002132E8
// Address: 0x2132e8 - 0x2136c0
void sub_002132E8_0x2132e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002132E8_0x2132e8");
#endif

    switch (ctx->pc) {
        case 0x213334u: goto label_213334;
        case 0x21334cu: goto label_21334c;
        case 0x213360u: goto label_213360;
        case 0x2133f0u: goto label_2133f0;
        case 0x213404u: goto label_213404;
        case 0x213414u: goto label_213414;
        case 0x213428u: goto label_213428;
        case 0x213448u: goto label_213448;
        case 0x213464u: goto label_213464;
        case 0x21346cu: goto label_21346c;
        case 0x213484u: goto label_213484;
        case 0x2134a4u: goto label_2134a4;
        case 0x213594u: goto label_213594;
        case 0x2135a8u: goto label_2135a8;
        case 0x2135b0u: goto label_2135b0;
        case 0x2135e0u: goto label_2135e0;
        case 0x2135f8u: goto label_2135f8;
        case 0x21360cu: goto label_21360c;
        case 0x213614u: goto label_213614;
        case 0x21362cu: goto label_21362c;
        case 0x213644u: goto label_213644;
        case 0x213688u: goto label_213688;
        default: break;
    }

    ctx->pc = 0x2132e8u;

    // 0x2132e8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2132e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2132ec: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2132ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2132f0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2132f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2132f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2132f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132f8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2132f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2132fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2132fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213300: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x213300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x213304: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x213304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213308: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x213308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x21330c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x21330cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213310: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x213310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x213314: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x213318: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x213318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x21331c: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x21331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x213320: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x213320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x213324: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x213324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x213328: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x213328u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x21332c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21332Cu;
    SET_GPR_U32(ctx, 31, 0x213334u);
    ctx->pc = 0x213330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21332Cu;
    // 0x213330: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21332Cu, 0x213334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213334u;
label_213334:
    // 0x213334: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x213334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x213338: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x213338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x21333c: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x21333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x213340: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x213340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x213344: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x213344u;
    SET_GPR_U32(ctx, 31, 0x21334Cu);
    ctx->pc = 0x213348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213344u;
    // 0x213348: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x213344u, 0x21334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21334Cu;
label_21334c:
    // 0x21334c: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x21334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x213350: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x213350u;
    {
        const bool branch_taken_0x213350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213350u;
        // 0x213354: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213350) {
            ctx->pc = 0x213688u;
            goto label_213688;
        }
    }
    ctx->pc = 0x213358u;
    // 0x213358: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x213358u;
    SET_GPR_U32(ctx, 31, 0x213360u);
    ctx->pc = 0x21335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213358u;
    // 0x21335c: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x213358u, 0x213360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213360u;
label_213360:
    // 0x213360: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x213360u;
    {
        const bool branch_taken_0x213360 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x213364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213360u;
        // 0x213364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213360) {
            ctx->pc = 0x213398u;
            goto label_213398;
        }
    }
    ctx->pc = 0x213368u;
    // 0x213368: 0x8ee30104  lw          $v1, 0x104($s7)
    ctx->pc = 0x213368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x21336c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213370: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x213370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x213374: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x213374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213378: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x213378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21337c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x21337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213384: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213388: 0x0  nop
    ctx->pc = 0x213388u;
    // NOP
    // 0x21338c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21338cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213390u;
    {
        const bool branch_taken_0x213390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213390u;
        // 0x213394: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213390) {
            ctx->pc = 0x2133A0u;
            goto label_2133a0;
        }
    }
    ctx->pc = 0x213398u;
label_213398:
    // 0x213398: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x213398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21339c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x21339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2133a0:
    // 0x2133a0: 0x12400070  beqz        $s2, . + 4 + (0x70 << 2)
    ctx->pc = 0x2133A0u;
    {
        const bool branch_taken_0x2133a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2133A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133A0u;
        // 0x2133a4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133a0) {
            ctx->pc = 0x213564u;
            goto label_213564;
        }
    }
    ctx->pc = 0x2133A8u;
    // 0x2133a8: 0x8e6500c4  lw          $a1, 0xC4($s3)
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x2133ac: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2133acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2133b0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2133b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2133b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2133b8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2133b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133bc: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x2133bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x2133c0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2133c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2133c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2133c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2133c8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2133c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2133cc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2133ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2133d0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2133d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2133d4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2133d8: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2133d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2133dc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2133dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2133e0: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x2133e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2133e4: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2133e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2133e8: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x2133e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2133ec: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2133ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2133f0:
    // 0x2133f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2133f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2133f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2133f8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2133f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2133fc: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x2133FCu;
    SET_GPR_U32(ctx, 31, 0x213404u);
    ctx->pc = 0x213400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133FCu;
    // 0x213400: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x2133FCu, 0x213404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213404u;
label_213404:
    // 0x213404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x213404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213408: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x213408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x21340c: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x21340Cu;
    SET_GPR_U32(ctx, 31, 0x213414u);
    ctx->pc = 0x213410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21340Cu;
    // 0x213410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x21340Cu, 0x213414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213414u;
label_213414:
    // 0x213414: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x213414u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213418: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x213418u;
    {
        const bool branch_taken_0x213418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x213418) {
            ctx->pc = 0x21345Cu;
            goto label_21345c;
        }
    }
    ctx->pc = 0x213420u;
    // 0x213420: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x213420u;
    SET_GPR_U32(ctx, 31, 0x213428u);
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x213420u, 0x213428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213428u;
label_213428:
    // 0x213428: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x213428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x21342c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x21342cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x213430: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x213430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B20u));
    // 0x213434: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x213434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213438: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x213438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x21343c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213440: 0xc07a8cc  jal         func_1EA330
    ctx->pc = 0x213440u;
    SET_GPR_U32(ctx, 31, 0x213448u);
    ctx->pc = 0x213444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213440u;
    // 0x213444: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA330u, 0x213440u, 0x213448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213448u;
label_213448:
    // 0x213448: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x213448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21344c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x21344cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x213450: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x213450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213454: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x213454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213458: 0x8fd22b1c  lw          $s2, 0x2B1C($fp)
    ctx->pc = 0x213458u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
label_21345c:
    // 0x21345c: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x21345Cu;
    SET_GPR_U32(ctx, 31, 0x213464u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x21345Cu, 0x213464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213464u;
label_213464:
    // 0x213464: 0xc07a4fc  jal         func_1E93F0
    ctx->pc = 0x213464u;
    SET_GPR_U32(ctx, 31, 0x21346Cu);
    ctx->pc = 0x213468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213464u;
    // 0x213468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93F0u, 0x213464u, 0x21346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21346Cu;
label_21346c:
    // 0x21346c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21346Cu;
    {
        const bool branch_taken_0x21346c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x213470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21346Cu;
        // 0x213470: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21346c) {
            ctx->pc = 0x21347Cu;
            goto label_21347c;
        }
    }
    ctx->pc = 0x213474u;
    // 0x213474: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x213474u;
    {
        const bool branch_taken_0x213474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213474u;
        // 0x213478: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213474) {
            ctx->pc = 0x21368Cu;
            goto label_21368c;
        }
    }
    ctx->pc = 0x21347Cu;
label_21347c:
    // 0x21347c: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x21347Cu;
    SET_GPR_U32(ctx, 31, 0x213484u);
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x21347Cu, 0x213484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213484u;
label_213484:
    // 0x213484: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x213484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x213488: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x213488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x21348c: 0x8c622b20  lw          $v0, 0x2B20($v1)
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
    // 0x213490: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x213490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213494: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x213494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x213498: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x213498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21349c: 0xc07a8cc  jal         func_1EA330
    ctx->pc = 0x21349Cu;
    SET_GPR_U32(ctx, 31, 0x2134A4u);
    ctx->pc = 0x2134A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21349Cu;
    // 0x2134a0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA330u, 0x21349Cu, 0x2134A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134A4u;
label_2134a4:
    // 0x2134a4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2134a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2134a8: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2134a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2134ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2134acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2134b0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2134b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2134b4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2134b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2134b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2134b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2134bc: 0x8fc22b1c  lw          $v0, 0x2B1C($fp)
    ctx->pc = 0x2134bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
    // 0x2134c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2134c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2134c4: 0x0  nop
    ctx->pc = 0x2134c4u;
    // NOP
    // 0x2134c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2134C8u;
    {
        const bool branch_taken_0x2134c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2134CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134C8u;
        // 0x2134cc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134c8) {
            ctx->pc = 0x2134E4u;
            goto label_2134e4;
        }
    }
    ctx->pc = 0x2134D0u;
    // 0x2134d0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2134d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2134d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2134d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2134d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2134d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2134dc: 0x0  nop
    ctx->pc = 0x2134dcu;
    // NOP
    // 0x2134e0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2134e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2134e4:
    // 0x2134e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2134e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2134e8: 0x0  nop
    ctx->pc = 0x2134e8u;
    // NOP
    // 0x2134ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2134ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2134f0: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2134f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2134f4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x2134f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2134f8: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x2134f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2134fc: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2134fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213500: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x213500u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x213504: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x213504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x213508: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x213508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21350c: 0x0  nop
    ctx->pc = 0x21350cu;
    // NOP
    // 0x213510: 0x0  nop
    ctx->pc = 0x213510u;
    // NOP
    // 0x213514: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x213514u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x213518: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x213518u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x21351c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x21351cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x213520: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x213520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x213524: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x213524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x213528: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x213528u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21352c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x21352cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213530: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x213530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213534: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x213534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213538: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x213538u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21353c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x21353cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213540: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x213540u;
    {
        const bool branch_taken_0x213540 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x213544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213540u;
        // 0x213544: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213540) {
            ctx->pc = 0x213550u;
            goto label_213550;
        }
    }
    ctx->pc = 0x213548u;
    // 0x213548: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x213548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21354c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x21354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_213550:
    // 0x213550: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x213550u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x213554: 0x56a0ffa6  bnel        $s5, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x213554u;
    {
        const bool branch_taken_0x213554 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x213554) {
            ctx->pc = 0x213558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213554u;
            // 0x213558: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2133F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2133f0;
        }
    }
    ctx->pc = 0x21355Cu;
    // 0x21355c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x21355Cu;
    {
        const bool branch_taken_0x21355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21355Cu;
        // 0x213560: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21355c) {
            ctx->pc = 0x21368Cu;
            goto label_21368c;
        }
    }
    ctx->pc = 0x213564u;
label_213564:
    // 0x213564: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x213564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21356c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x21356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213570: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x213570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213574: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x213574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213578: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x213578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21357c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x21357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x213580: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x213580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x213584: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x213584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x213588: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x213588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x21358c: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x21358Cu;
    SET_GPR_U32(ctx, 31, 0x213594u);
    ctx->pc = 0x213590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21358Cu;
    // 0x213590: 0x8c970018  lw          $s7, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x21358Cu, 0x213594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213594u;
label_213594:
    // 0x213594: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x213594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x213598: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x213598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21359c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x21359cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2135a0: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2135A0u;
    SET_GPR_U32(ctx, 31, 0x2135A8u);
    ctx->pc = 0x2135A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135A0u;
    // 0x2135a4: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2135A0u, 0x2135A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135A8u;
label_2135a8:
    // 0x2135a8: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x2135A8u;
    SET_GPR_U32(ctx, 31, 0x2135B0u);
    ctx->pc = 0x2135ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135A8u;
    // 0x2135ac: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2135A8u, 0x2135B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135B0u;
label_2135b0:
    // 0x2135b0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2135b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2135b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2135b8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2135b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2135bc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2135bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2135c0: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x2135c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x2135c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2135c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2135c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2135c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2135cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2135ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2135d0: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2135d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2135d4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2135d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2135d8: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x2135d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2135dc: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x2135dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_2135e0:
    // 0x2135e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2135e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135e4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2135e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2135e8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2135e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2135ec: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2135ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2135f0: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2135F0u;
    SET_GPR_U32(ctx, 31, 0x2135F8u);
    ctx->pc = 0x2135F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135F0u;
    // 0x2135f4: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2135F0u, 0x2135F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135F8u;
label_2135f8:
    // 0x2135f8: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x2135f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x2135fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2135fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213600: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213604: 0xc0768be  jal         func_1DA2F8
    ctx->pc = 0x213604u;
    SET_GPR_U32(ctx, 31, 0x21360Cu);
    ctx->pc = 0x213608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213604u;
    // 0x213608: 0x24063210  addiu       $a2, $zero, 0x3210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2F8u, 0x213604u, 0x21360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21360Cu;
label_21360c:
    // 0x21360c: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x21360Cu;
    SET_GPR_U32(ctx, 31, 0x213614u);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x21360Cu, 0x213614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213614u;
label_213614:
    // 0x213614: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x213614u;
    {
        const bool branch_taken_0x213614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213614u;
        // 0x213618: 0x8ec291dc  lw          $v0, -0x6E24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213614) {
            ctx->pc = 0x213648u;
            goto label_213648;
        }
    }
    ctx->pc = 0x21361Cu;
    // 0x21361c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21361cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x213620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213624: 0xc07a8cc  jal         func_1EA330
    ctx->pc = 0x213624u;
    SET_GPR_U32(ctx, 31, 0x21362Cu);
    ctx->pc = 0x213628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213624u;
    // 0x213628: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA330u, 0x213624u, 0x21362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21362Cu;
label_21362c:
    // 0x21362c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x21362cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213630: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x213630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x213634: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x213634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213638: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x213638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21363c: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x21363Cu;
    SET_GPR_U32(ctx, 31, 0x213644u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x21363Cu, 0x213644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213644u;
label_213644:
    // 0x213644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x213644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213648:
    // 0x213648: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x213648u;
    {
        const bool branch_taken_0x213648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213648u;
        // 0x21364c: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213648) {
            ctx->pc = 0x21367Cu;
            goto label_21367c;
        }
    }
    ctx->pc = 0x213650u;
    // 0x213650: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x213650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213654: 0x0  nop
    ctx->pc = 0x213654u;
    // NOP
    // 0x213658: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x213658u;
    {
        const bool branch_taken_0x213658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213658) {
            ctx->pc = 0x21365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213658u;
            // 0x21365c: 0xe7b40084  swc1        $f20, 0x84($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x213660u;
            goto label_213660;
        }
    }
    ctx->pc = 0x213660u;
label_213660:
    // 0x213660: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x213660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213664: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x213664u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x213668: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x213668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21366c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x21366cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213670: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x213670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x213674: 0x56a0ffda  bnel        $s5, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x213674u;
    {
        const bool branch_taken_0x213674 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x213674) {
            ctx->pc = 0x213678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213674u;
            // 0x213678: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2135E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2135e0;
        }
    }
    ctx->pc = 0x21367Cu;
label_21367c:
    // 0x21367c: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x21367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x213680: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x213680u;
    SET_GPR_U32(ctx, 31, 0x213688u);
    ctx->pc = 0x213684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213680u;
    // 0x213684: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x213680u, 0x213688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213688u;
label_213688:
    // 0x213688: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x213688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21368c:
    // 0x21368c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x21368cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x213690: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x213690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x213694: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x213694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x213698: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x213698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21369c: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x21369cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2136a0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2136a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2136a4: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x2136a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2136a8: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x2136a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2136ac: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x2136acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2136b0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2136b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2136b4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2136b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2136b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2136B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2136BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136B8u;
        // 0x2136bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2136B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2136C0u;
}
