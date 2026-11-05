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

// Function: sub_00190808
// Address: 0x190808 - 0x1908f8
void sub_00190808_0x190808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190808_0x190808");
#endif

    switch (ctx->pc) {
        case 0x190808u: goto label_190808;
        case 0x19080cu: goto label_19080c;
        case 0x190810u: goto label_190810;
        case 0x190814u: goto label_190814;
        case 0x190818u: goto label_190818;
        case 0x19081cu: goto label_19081c;
        case 0x190820u: goto label_190820;
        case 0x190824u: goto label_190824;
        case 0x190828u: goto label_190828;
        case 0x19082cu: goto label_19082c;
        case 0x190830u: goto label_190830;
        case 0x190834u: goto label_190834;
        case 0x190838u: goto label_190838;
        case 0x19083cu: goto label_19083c;
        case 0x190840u: goto label_190840;
        case 0x190844u: goto label_190844;
        case 0x190848u: goto label_190848;
        case 0x19084cu: goto label_19084c;
        case 0x190850u: goto label_190850;
        case 0x190854u: goto label_190854;
        case 0x190858u: goto label_190858;
        case 0x19085cu: goto label_19085c;
        case 0x190860u: goto label_190860;
        case 0x190864u: goto label_190864;
        case 0x190868u: goto label_190868;
        case 0x19086cu: goto label_19086c;
        case 0x190870u: goto label_190870;
        case 0x190874u: goto label_190874;
        case 0x190878u: goto label_190878;
        case 0x19087cu: goto label_19087c;
        case 0x190880u: goto label_190880;
        case 0x190884u: goto label_190884;
        case 0x190888u: goto label_190888;
        case 0x19088cu: goto label_19088c;
        case 0x190890u: goto label_190890;
        case 0x190894u: goto label_190894;
        case 0x190898u: goto label_190898;
        case 0x19089cu: goto label_19089c;
        case 0x1908a0u: goto label_1908a0;
        case 0x1908a4u: goto label_1908a4;
        case 0x1908a8u: goto label_1908a8;
        case 0x1908acu: goto label_1908ac;
        case 0x1908b0u: goto label_1908b0;
        case 0x1908b4u: goto label_1908b4;
        case 0x1908b8u: goto label_1908b8;
        case 0x1908bcu: goto label_1908bc;
        case 0x1908c0u: goto label_1908c0;
        case 0x1908c4u: goto label_1908c4;
        case 0x1908c8u: goto label_1908c8;
        case 0x1908ccu: goto label_1908cc;
        case 0x1908d0u: goto label_1908d0;
        case 0x1908d4u: goto label_1908d4;
        case 0x1908d8u: goto label_1908d8;
        case 0x1908dcu: goto label_1908dc;
        case 0x1908e0u: goto label_1908e0;
        case 0x1908e4u: goto label_1908e4;
        case 0x1908e8u: goto label_1908e8;
        case 0x1908ecu: goto label_1908ec;
        case 0x1908f0u: goto label_1908f0;
        case 0x1908f4u: goto label_1908f4;
        default: break;
    }

    ctx->pc = 0x190808u;

label_190808:
    // 0x190808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19080c:
    // 0x19080c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x19080cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_190810:
    // 0x190810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x190810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_190814:
    // 0x190814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x190814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_190818:
    // 0x190818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19081c:
    // 0x19081c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_190820:
    // 0x190820: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x190820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190824:
    // 0x190824: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x190824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190828:
    // 0x190828: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x190828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_19082c:
    // 0x19082c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190830:
    // 0x190830: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x190830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_190834:
    // 0x190834: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x190834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190838:
    // 0x190838: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x190838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_19083c:
    // 0x19083c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_190840:
    // 0x190840: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x190840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_190844:
    // 0x190844: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x190844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_190848:
    // 0x190848: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x190848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_19084c:
    // 0x19084c: 0xe62c001c  swc1        $f12, 0x1C($s1)
    ctx->pc = 0x19084cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_190850:
    // 0x190850: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_190854:
    // 0x190854: 0xe62d0020  swc1        $f13, 0x20($s1)
    ctx->pc = 0x190854u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_190858:
    // 0x190858: 0xae260084  sw          $a2, 0x84($s1)
    ctx->pc = 0x190858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 6));
label_19085c:
    // 0x19085c: 0xe62c0014  swc1        $f12, 0x14($s1)
    ctx->pc = 0x19085cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_190860:
    // 0x190860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_190864:
    if (ctx->pc == 0x190864u) {
        ctx->pc = 0x190864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190860u;
        // 0x190864: 0xe62d0018  swc1        $f13, 0x18($s1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190868u;
        goto label_190868;
    }
    ctx->pc = 0x190860u;
    {
        const bool branch_taken_0x190860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190860u;
        // 0x190864: 0xe62d0018  swc1        $f13, 0x18($s1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190860) {
            ctx->pc = 0x190870u;
            goto label_190870;
        }
    }
    ctx->pc = 0x190868u;
label_190868:
    // 0x190868: 0xc06423e  jal         func_1908F8
label_19086c:
    if (ctx->pc == 0x19086Cu) {
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190870u;
        goto label_190870;
    }
    ctx->pc = 0x190868u;
    SET_GPR_U32(ctx, 31, 0x190870u);
    ctx->pc = 0x19086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190868u;
    // 0x19086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908F8u, 0x190868u, 0x190870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x190870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_190874:
    // 0x190874: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x190874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_190878:
    // 0x190878: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x190878u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_19087c:
    // 0x19087c: 0xc061a16  jal         func_186858
label_190880:
    if (ctx->pc == 0x190880u) {
        ctx->pc = 0x190880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19087Cu;
        // 0x190880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190884u;
        goto label_190884;
    }
    ctx->pc = 0x19087Cu;
    SET_GPR_U32(ctx, 31, 0x190884u);
    ctx->pc = 0x190880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19087Cu;
    // 0x190880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19087Cu, 0x190884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190884u;
label_190884:
    // 0x190884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190888:
    // 0x190888: 0xc06ee66  jal         func_1BB998
label_19088c:
    if (ctx->pc == 0x19088Cu) {
        ctx->pc = 0x19088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190888u;
        // 0x19088c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190890u;
        goto label_190890;
    }
    ctx->pc = 0x190888u;
    SET_GPR_U32(ctx, 31, 0x190890u);
    ctx->pc = 0x19088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190888u;
    // 0x19088c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x190888u, 0x190890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190890u;
label_190890:
    // 0x190890: 0xc061a16  jal         func_186858
label_190894:
    if (ctx->pc == 0x190894u) {
        ctx->pc = 0x190894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190890u;
        // 0x190894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190898u;
        goto label_190898;
    }
    ctx->pc = 0x190890u;
    SET_GPR_U32(ctx, 31, 0x190898u);
    ctx->pc = 0x190894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190890u;
    // 0x190894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x190890u, 0x190898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190898u;
label_190898:
    // 0x190898: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x190898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19089c:
    // 0x19089c: 0xc06eebe  jal         func_1BBAF8
label_1908a0:
    if (ctx->pc == 0x1908A0u) {
        ctx->pc = 0x1908A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19089Cu;
        // 0x1908a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908A4u;
        goto label_1908a4;
    }
    ctx->pc = 0x19089Cu;
    SET_GPR_U32(ctx, 31, 0x1908A4u);
    ctx->pc = 0x1908A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19089Cu;
    // 0x1908a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19089Cu, 0x1908A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908A4u;
label_1908a4:
    // 0x1908a4: 0xc061a16  jal         func_186858
label_1908a8:
    if (ctx->pc == 0x1908A8u) {
        ctx->pc = 0x1908A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908A4u;
        // 0x1908a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908ACu;
        goto label_1908ac;
    }
    ctx->pc = 0x1908A4u;
    SET_GPR_U32(ctx, 31, 0x1908ACu);
    ctx->pc = 0x1908A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908A4u;
    // 0x1908a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1908A4u, 0x1908ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908ACu;
label_1908ac:
    // 0x1908ac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1908acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1908b0:
    // 0x1908b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1908b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1908b4:
    // 0x1908b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1908b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1908b8:
    // 0x1908b8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1908b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1908bc:
    // 0x1908bc: 0xc061a12  jal         func_186848
label_1908c0:
    if (ctx->pc == 0x1908C0u) {
        ctx->pc = 0x1908C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908BCu;
        // 0x1908c0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908C4u;
        goto label_1908c4;
    }
    ctx->pc = 0x1908BCu;
    SET_GPR_U32(ctx, 31, 0x1908C4u);
    ctx->pc = 0x1908C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908BCu;
    // 0x1908c0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1908BCu, 0x1908C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908C4u;
label_1908c4:
    // 0x1908c4: 0xac400338  sw          $zero, 0x338($v0)
    ctx->pc = 0x1908c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
label_1908c8:
    // 0x1908c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1908c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1908cc:
    // 0x1908cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1908ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1908d0:
    // 0x1908d0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1908d4:
    // 0x1908d4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1908d8:
    // 0x1908d8: 0x60f809  jalr        $v1
label_1908dc:
    if (ctx->pc == 0x1908DCu) {
        ctx->pc = 0x1908DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908D8u;
        // 0x1908dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908E0u;
        goto label_1908e0;
    }
    ctx->pc = 0x1908D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1908E0u);
        ctx->pc = 0x1908DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908D8u;
        // 0x1908dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1908D8u, 0x1908E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1908E0u;
label_1908e0:
    // 0x1908e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1908e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1908e4:
    // 0x1908e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1908e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1908e8:
    // 0x1908e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1908e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1908ec:
    // 0x1908ec: 0x3e00008  jr          $ra
label_1908f0:
    if (ctx->pc == 0x1908F0u) {
        ctx->pc = 0x1908F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908ECu;
        // 0x1908f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908F4u;
        goto label_1908f4;
    }
    ctx->pc = 0x1908ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1908F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908ECu;
        // 0x1908f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1908ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1908F4u;
label_1908f4:
    // 0x1908f4: 0x0  nop
    ctx->pc = 0x1908f4u;
    // NOP
    ctx->pc = 0x1908f8u;
}
