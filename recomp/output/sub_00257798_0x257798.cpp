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

// Function: sub_00257798
// Address: 0x257798 - 0x257898
void sub_00257798_0x257798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257798_0x257798");
#endif

    switch (ctx->pc) {
        case 0x257798u: goto label_257798;
        case 0x25779cu: goto label_25779c;
        case 0x2577a0u: goto label_2577a0;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577a8u: goto label_2577a8;
        case 0x2577acu: goto label_2577ac;
        case 0x2577b0u: goto label_2577b0;
        case 0x2577b4u: goto label_2577b4;
        case 0x2577b8u: goto label_2577b8;
        case 0x2577bcu: goto label_2577bc;
        case 0x2577c0u: goto label_2577c0;
        case 0x2577c4u: goto label_2577c4;
        case 0x2577c8u: goto label_2577c8;
        case 0x2577ccu: goto label_2577cc;
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d4u: goto label_2577d4;
        case 0x2577d8u: goto label_2577d8;
        case 0x2577dcu: goto label_2577dc;
        case 0x2577e0u: goto label_2577e0;
        case 0x2577e4u: goto label_2577e4;
        case 0x2577e8u: goto label_2577e8;
        case 0x2577ecu: goto label_2577ec;
        case 0x2577f0u: goto label_2577f0;
        case 0x2577f4u: goto label_2577f4;
        case 0x2577f8u: goto label_2577f8;
        case 0x2577fcu: goto label_2577fc;
        case 0x257800u: goto label_257800;
        case 0x257804u: goto label_257804;
        case 0x257808u: goto label_257808;
        case 0x25780cu: goto label_25780c;
        case 0x257810u: goto label_257810;
        case 0x257814u: goto label_257814;
        case 0x257818u: goto label_257818;
        case 0x25781cu: goto label_25781c;
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        default: break;
    }

    ctx->pc = 0x257798u;

label_257798:
    // 0x257798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25779c:
    // 0x25779c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x25779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_2577a0:
    // 0x2577a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2577a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2577a4:
    // 0x2577a4: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x2577a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
label_2577a8:
    // 0x2577a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2577a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2577ac:
    // 0x2577ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2577acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2577b0:
    // 0x2577b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2577b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2577b4:
    // 0x2577b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2577b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2577b8:
    // 0x2577b8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2577b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2577bc:
    // 0x2577bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2577bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2577c0:
    // 0x2577c0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2577c4:
    // 0x2577c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2577c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2577c8:
    // 0x2577c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2577c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2577cc:
    // 0x2577cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2577ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2577d0:
    // 0x2577d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2577d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2577d4:
    // 0x2577d4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2577d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2577d8:
    // 0x2577d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2577d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2577dc:
    // 0x2577dc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2577dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2577e0:
    // 0x2577e0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2577e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2577e4:
    // 0x2577e4: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2577e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2577e8:
    // 0x2577e8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2577e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2577ec:
    // 0x2577ec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2577ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2577f0:
    // 0x2577f0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2577f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2577f4:
    // 0x2577f4: 0xc0b5cee  jal         func_2D73B8
label_2577f8:
    if (ctx->pc == 0x2577F8u) {
        ctx->pc = 0x2577F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577F4u;
        // 0x2577f8: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2577FCu;
        goto label_2577fc;
    }
    ctx->pc = 0x2577F4u;
    SET_GPR_U32(ctx, 31, 0x2577FCu);
    ctx->pc = 0x2577F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577F4u;
    // 0x2577f8: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73B8u, 0x2577F4u, 0x2577FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577FCu;
label_2577fc:
    // 0x2577fc: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2577fcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_257800:
    // 0x257800: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x257800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_257804:
    // 0x257804: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x257804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_257808:
    // 0x257808: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_25780c:
    if (ctx->pc == 0x25780Cu) {
        ctx->pc = 0x25780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257808u;
        // 0x25780c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257810u;
        goto label_257810;
    }
    ctx->pc = 0x257808u;
    {
        const bool branch_taken_0x257808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257808u;
        // 0x25780c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257808) {
            ctx->pc = 0x25781Cu;
            goto label_25781c;
        }
    }
    ctx->pc = 0x257810u;
label_257810:
    // 0x257810: 0xc0b5cee  jal         func_2D73B8
label_257814:
    if (ctx->pc == 0x257814u) {
        ctx->pc = 0x257814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257810u;
        // 0x257814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257818u;
        goto label_257818;
    }
    ctx->pc = 0x257810u;
    SET_GPR_U32(ctx, 31, 0x257818u);
    ctx->pc = 0x257814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257810u;
    // 0x257814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73B8u, 0x257810u, 0x257818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257818u;
label_257818:
    // 0x257818: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x257818u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25781c:
    // 0x25781c: 0x920210c6  lbu         $v0, 0x10C6($s0)
    ctx->pc = 0x25781cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294)));
label_257820:
    // 0x257820: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_257824:
    if (ctx->pc == 0x257824u) {
        ctx->pc = 0x257824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257820u;
        // 0x257824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257828u;
        goto label_257828;
    }
    ctx->pc = 0x257820u;
    {
        const bool branch_taken_0x257820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257820u;
        // 0x257824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257820) {
            ctx->pc = 0x25782Cu;
            goto label_25782c;
        }
    }
    ctx->pc = 0x257828u;
label_257828:
    // 0x257828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25782c:
    // 0x25782c: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
label_257830:
    if (ctx->pc == 0x257830u) {
        ctx->pc = 0x257830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25782Cu;
        // 0x257830: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257834u;
        goto label_257834;
    }
    ctx->pc = 0x25782Cu;
    {
        const bool branch_taken_0x25782c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x257830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25782Cu;
        // 0x257830: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25782c) {
            ctx->pc = 0x257838u;
            goto label_257838;
        }
    }
    ctx->pc = 0x257834u;
label_257834:
    // 0x257834: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x257834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_257838:
    // 0x257838: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25783c:
    if (ctx->pc == 0x25783Cu) {
        ctx->pc = 0x25783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257838u;
        // 0x25783c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257840u;
        goto label_257840;
    }
    ctx->pc = 0x257838u;
    {
        const bool branch_taken_0x257838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257838u;
        // 0x25783c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257838) {
            ctx->pc = 0x257848u;
            goto label_257848;
        }
    }
    ctx->pc = 0x257840u;
label_257840:
    // 0x257840: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_257844:
    if (ctx->pc == 0x257844u) {
        ctx->pc = 0x257848u;
        goto label_257848;
    }
    ctx->pc = 0x257840u;
    {
        const bool branch_taken_0x257840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257840) {
            ctx->pc = 0x257858u;
            goto label_257858;
        }
    }
    ctx->pc = 0x257848u;
label_257848:
    // 0x257848: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x257848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_25784c:
    // 0x25784c: 0xc076934  jal         func_1DA4D0
label_257850:
    if (ctx->pc == 0x257850u) {
        ctx->pc = 0x257850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25784Cu;
        // 0x257850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257854u;
        goto label_257854;
    }
    ctx->pc = 0x25784Cu;
    SET_GPR_U32(ctx, 31, 0x257854u);
    ctx->pc = 0x257850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25784Cu;
    // 0x257850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4D0u, 0x25784Cu, 0x257854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257854u;
label_257854:
    // 0x257854: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x257854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_257858:
    // 0x257858: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_25785c:
    if (ctx->pc == 0x25785Cu) {
        ctx->pc = 0x25785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257858u;
        // 0x25785c: 0xa21210c6  sb          $s2, 0x10C6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257860u;
        goto label_257860;
    }
    ctx->pc = 0x257858u;
    {
        const bool branch_taken_0x257858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x257858) {
            ctx->pc = 0x25785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257858u;
            // 0x25785c: 0xa21210c6  sb          $s2, 0x10C6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 4294), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257880u;
            goto label_257880;
        }
    }
    ctx->pc = 0x257860u;
label_257860:
    // 0x257860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_257864:
    if (ctx->pc == 0x257864u) {
        ctx->pc = 0x257864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257860u;
        // 0x257864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257868u;
        goto label_257868;
    }
    ctx->pc = 0x257860u;
    {
        const bool branch_taken_0x257860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257860u;
        // 0x257864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257860) {
            ctx->pc = 0x25787Cu;
            goto label_25787c;
        }
    }
    ctx->pc = 0x257868u;
label_257868:
    // 0x257868: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x257868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_25786c:
    // 0x25786c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257870:
    // 0x257870: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x257870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_257874:
    // 0x257874: 0x40f809  jalr        $v0
label_257878:
    if (ctx->pc == 0x257878u) {
        ctx->pc = 0x257878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257874u;
        // 0x257878: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25787Cu;
        goto label_25787c;
    }
    ctx->pc = 0x257874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25787Cu);
        ctx->pc = 0x257878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257874u;
        // 0x257878: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257874u, 0x25787Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25787Cu;
label_25787c:
    // 0x25787c: 0xa21210c6  sb          $s2, 0x10C6($s0)
    ctx->pc = 0x25787cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294), (uint8_t)GPR_U32(ctx, 18));
label_257880:
    // 0x257880: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x257880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_257884:
    // 0x257884: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x257884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_257888:
    // 0x257888: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x257888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25788c:
    // 0x25788c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25788cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_257890:
    // 0x257890: 0x3e00008  jr          $ra
label_257894:
    if (ctx->pc == 0x257894u) {
        ctx->pc = 0x257894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257890u;
        // 0x257894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257898u;
        goto label_fallthrough_0x257890;
    }
    ctx->pc = 0x257890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257890u;
        // 0x257894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x257890:
    ctx->pc = 0x257898u;
}
