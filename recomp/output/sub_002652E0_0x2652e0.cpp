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

// Function: sub_002652E0
// Address: 0x2652e0 - 0x265410
void sub_002652E0_0x2652e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002652E0_0x2652e0");
#endif

    switch (ctx->pc) {
        case 0x2652e0u: goto label_2652e0;
        case 0x2652e4u: goto label_2652e4;
        case 0x2652e8u: goto label_2652e8;
        case 0x2652ecu: goto label_2652ec;
        case 0x2652f0u: goto label_2652f0;
        case 0x2652f4u: goto label_2652f4;
        case 0x2652f8u: goto label_2652f8;
        case 0x2652fcu: goto label_2652fc;
        case 0x265300u: goto label_265300;
        case 0x265304u: goto label_265304;
        case 0x265308u: goto label_265308;
        case 0x26530cu: goto label_26530c;
        case 0x265310u: goto label_265310;
        case 0x265314u: goto label_265314;
        case 0x265318u: goto label_265318;
        case 0x26531cu: goto label_26531c;
        case 0x265320u: goto label_265320;
        case 0x265324u: goto label_265324;
        case 0x265328u: goto label_265328;
        case 0x26532cu: goto label_26532c;
        case 0x265330u: goto label_265330;
        case 0x265334u: goto label_265334;
        case 0x265338u: goto label_265338;
        case 0x26533cu: goto label_26533c;
        case 0x265340u: goto label_265340;
        case 0x265344u: goto label_265344;
        case 0x265348u: goto label_265348;
        case 0x26534cu: goto label_26534c;
        case 0x265350u: goto label_265350;
        case 0x265354u: goto label_265354;
        case 0x265358u: goto label_265358;
        case 0x26535cu: goto label_26535c;
        case 0x265360u: goto label_265360;
        case 0x265364u: goto label_265364;
        case 0x265368u: goto label_265368;
        case 0x26536cu: goto label_26536c;
        case 0x265370u: goto label_265370;
        case 0x265374u: goto label_265374;
        case 0x265378u: goto label_265378;
        case 0x26537cu: goto label_26537c;
        case 0x265380u: goto label_265380;
        case 0x265384u: goto label_265384;
        case 0x265388u: goto label_265388;
        case 0x26538cu: goto label_26538c;
        case 0x265390u: goto label_265390;
        case 0x265394u: goto label_265394;
        case 0x265398u: goto label_265398;
        case 0x26539cu: goto label_26539c;
        case 0x2653a0u: goto label_2653a0;
        case 0x2653a4u: goto label_2653a4;
        case 0x2653a8u: goto label_2653a8;
        case 0x2653acu: goto label_2653ac;
        case 0x2653b0u: goto label_2653b0;
        case 0x2653b4u: goto label_2653b4;
        case 0x2653b8u: goto label_2653b8;
        case 0x2653bcu: goto label_2653bc;
        case 0x2653c0u: goto label_2653c0;
        case 0x2653c4u: goto label_2653c4;
        case 0x2653c8u: goto label_2653c8;
        case 0x2653ccu: goto label_2653cc;
        case 0x2653d0u: goto label_2653d0;
        case 0x2653d4u: goto label_2653d4;
        case 0x2653d8u: goto label_2653d8;
        case 0x2653dcu: goto label_2653dc;
        case 0x2653e0u: goto label_2653e0;
        case 0x2653e4u: goto label_2653e4;
        case 0x2653e8u: goto label_2653e8;
        case 0x2653ecu: goto label_2653ec;
        case 0x2653f0u: goto label_2653f0;
        case 0x2653f4u: goto label_2653f4;
        case 0x2653f8u: goto label_2653f8;
        case 0x2653fcu: goto label_2653fc;
        case 0x265400u: goto label_265400;
        case 0x265404u: goto label_265404;
        case 0x265408u: goto label_265408;
        case 0x26540cu: goto label_26540c;
        default: break;
    }

    ctx->pc = 0x2652e0u;

label_2652e0:
    // 0x2652e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2652e4:
    // 0x2652e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2652e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2652e8:
    // 0x2652e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2652e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2652ec:
    // 0x2652ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2652ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2652f0:
    // 0x2652f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2652f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2652f4:
    // 0x2652f4: 0xc0845aa  jal         func_2116A8
label_2652f8:
    if (ctx->pc == 0x2652F8u) {
        ctx->pc = 0x2652F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652F4u;
        // 0x2652f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2652FCu;
        goto label_2652fc;
    }
    ctx->pc = 0x2652F4u;
    SET_GPR_U32(ctx, 31, 0x2652FCu);
    ctx->pc = 0x2652F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2652F4u;
    // 0x2652f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x2652F4u, 0x2652FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652FCu;
label_2652fc:
    // 0x2652fc: 0x8e2402d4  lw          $a0, 0x2D4($s1)
    ctx->pc = 0x2652fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
label_265300:
    // 0x265300: 0xc0b1680  jal         func_2C5A00
label_265304:
    if (ctx->pc == 0x265304u) {
        ctx->pc = 0x265304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265300u;
        // 0x265304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265308u;
        goto label_265308;
    }
    ctx->pc = 0x265300u;
    SET_GPR_U32(ctx, 31, 0x265308u);
    ctx->pc = 0x265304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265300u;
    // 0x265304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x265300u, 0x265308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265308u;
label_265308:
    // 0x265308: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x265308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26530c:
    // 0x26530c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x26530cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_265310:
    // 0x265310: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x265310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_265314:
    // 0x265314: 0xc0b845e  jal         func_2E1178
label_265318:
    if (ctx->pc == 0x265318u) {
        ctx->pc = 0x265318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265314u;
        // 0x265318: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26531Cu;
        goto label_26531c;
    }
    ctx->pc = 0x265314u;
    SET_GPR_U32(ctx, 31, 0x26531Cu);
    ctx->pc = 0x265318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265314u;
    // 0x265318: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1178u, 0x265314u, 0x26531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26531Cu;
label_26531c:
    // 0x26531c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26531cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_265320:
    // 0x265320: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x265320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_265324:
    // 0x265324: 0xc0c2e94  jal         func_30BA50
label_265328:
    if (ctx->pc == 0x265328u) {
        ctx->pc = 0x265328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265324u;
        // 0x265328: 0x24a57810  addiu       $a1, $a1, 0x7810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26532Cu;
        goto label_26532c;
    }
    ctx->pc = 0x265324u;
    SET_GPR_U32(ctx, 31, 0x26532Cu);
    ctx->pc = 0x265328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265324u;
    // 0x265328: 0x24a57810  addiu       $a1, $a1, 0x7810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x265324u, 0x26532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26532Cu;
label_26532c:
    // 0x26532c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26532cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265330:
    // 0x265330: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_265334:
    if (ctx->pc == 0x265334u) {
        ctx->pc = 0x265334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265330u;
        // 0x265334: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265338u;
        goto label_265338;
    }
    ctx->pc = 0x265330u;
    {
        const bool branch_taken_0x265330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x265334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265330u;
        // 0x265334: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265330) {
            ctx->pc = 0x265360u;
            goto label_265360;
        }
    }
    ctx->pc = 0x265338u;
label_265338:
    // 0x265338: 0xc0f70ce  jal         func_3DC338
label_26533c:
    if (ctx->pc == 0x26533Cu) {
        ctx->pc = 0x26533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265338u;
        // 0x26533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265340u;
        goto label_265340;
    }
    ctx->pc = 0x265338u;
    SET_GPR_U32(ctx, 31, 0x265340u);
    ctx->pc = 0x26533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265338u;
    // 0x26533c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x265338u, 0x265340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265340u;
label_265340:
    // 0x265340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_265344:
    if (ctx->pc == 0x265344u) {
        ctx->pc = 0x265344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265340u;
        // 0x265344: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265348u;
        goto label_265348;
    }
    ctx->pc = 0x265340u;
    {
        const bool branch_taken_0x265340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265340u;
        // 0x265344: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265340) {
            ctx->pc = 0x265354u;
            goto label_265354;
        }
    }
    ctx->pc = 0x265348u;
label_265348:
    // 0x265348: 0xc0c4900  jal         func_312400
label_26534c:
    if (ctx->pc == 0x26534Cu) {
        ctx->pc = 0x26534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265348u;
        // 0x26534c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265350u;
        goto label_265350;
    }
    ctx->pc = 0x265348u;
    SET_GPR_U32(ctx, 31, 0x265350u);
    ctx->pc = 0x26534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265348u;
    // 0x26534c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x265348u, 0x265350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265350u;
label_265350:
    // 0x265350: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x265350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_265354:
    // 0x265354: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x265354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265358:
    // 0x265358: 0xfa2102f0  sqc2        $vf1, 0x2F0($s1)
    ctx->pc = 0x265358u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_26535c:
    // 0x26535c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26535cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_265360:
    // 0x265360: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_265364:
    // 0x265364: 0xc0c2e94  jal         func_30BA50
label_265368:
    if (ctx->pc == 0x265368u) {
        ctx->pc = 0x265368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265364u;
        // 0x265368: 0x24a57818  addiu       $a1, $a1, 0x7818 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26536Cu;
        goto label_26536c;
    }
    ctx->pc = 0x265364u;
    SET_GPR_U32(ctx, 31, 0x26536Cu);
    ctx->pc = 0x265368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265364u;
    // 0x265368: 0x24a57818  addiu       $a1, $a1, 0x7818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x265364u, 0x26536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26536Cu;
label_26536c:
    // 0x26536c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265370:
    // 0x265370: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_265374:
    if (ctx->pc == 0x265374u) {
        ctx->pc = 0x265374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265370u;
        // 0x265374: 0x922202bc  lbu         $v0, 0x2BC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265378u;
        goto label_265378;
    }
    ctx->pc = 0x265370u;
    {
        const bool branch_taken_0x265370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x265370) {
            ctx->pc = 0x265374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265370u;
            // 0x265374: 0x922202bc  lbu         $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2653ACu;
            goto label_2653ac;
        }
    }
    ctx->pc = 0x265378u;
label_265378:
    // 0x265378: 0xc0f70ce  jal         func_3DC338
label_26537c:
    if (ctx->pc == 0x26537Cu) {
        ctx->pc = 0x26537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265378u;
        // 0x26537c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265380u;
        goto label_265380;
    }
    ctx->pc = 0x265378u;
    SET_GPR_U32(ctx, 31, 0x265380u);
    ctx->pc = 0x26537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265378u;
    // 0x26537c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x265378u, 0x265380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265380u;
label_265380:
    // 0x265380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_265384:
    if (ctx->pc == 0x265384u) {
        ctx->pc = 0x265384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265380u;
        // 0x265384: 0x26230310  addiu       $v1, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265388u;
        goto label_265388;
    }
    ctx->pc = 0x265380u;
    {
        const bool branch_taken_0x265380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265380u;
        // 0x265384: 0x26230310  addiu       $v1, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265380) {
            ctx->pc = 0x265394u;
            goto label_265394;
        }
    }
    ctx->pc = 0x265388u;
label_265388:
    // 0x265388: 0xc0c4900  jal         func_312400
label_26538c:
    if (ctx->pc == 0x26538Cu) {
        ctx->pc = 0x26538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265388u;
        // 0x26538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265390u;
        goto label_265390;
    }
    ctx->pc = 0x265388u;
    SET_GPR_U32(ctx, 31, 0x265390u);
    ctx->pc = 0x26538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265388u;
    // 0x26538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x265388u, 0x265390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265390u;
label_265390:
    // 0x265390: 0x26230310  addiu       $v1, $s1, 0x310
    ctx->pc = 0x265390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_265394:
    // 0x265394: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x265394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_265398:
    // 0x265398: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x265398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26539c:
    // 0x26539c: 0xfa210310  sqc2        $vf1, 0x310($s1)
    ctx->pc = 0x26539cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 784), _mm_castps_si128(ctx->vu0_vf[1]));
label_2653a0:
    // 0x2653a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2653a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2653a4:
    // 0x2653a4: 0xfa210330  sqc2        $vf1, 0x330($s1)
    ctx->pc = 0x2653a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 816), _mm_castps_si128(ctx->vu0_vf[1]));
label_2653a8:
    // 0x2653a8: 0x922202bc  lbu         $v0, 0x2BC($s1)
    ctx->pc = 0x2653a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
label_2653ac:
    // 0x2653ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2653b0:
    if (ctx->pc == 0x2653B0u) {
        ctx->pc = 0x2653B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653ACu;
        // 0x2653b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2653B4u;
        goto label_2653b4;
    }
    ctx->pc = 0x2653ACu;
    {
        const bool branch_taken_0x2653ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653ACu;
        // 0x2653b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653ac) {
            ctx->pc = 0x2653F0u;
            goto label_2653f0;
        }
    }
    ctx->pc = 0x2653B4u;
label_2653b4:
    // 0x2653b4: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2653b8:
    // 0x2653b8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2653b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2653bc:
    // 0x2653bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2653c0:
    if (ctx->pc == 0x2653C0u) {
        ctx->pc = 0x2653C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653BCu;
        // 0x2653c0: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2653C4u;
        goto label_2653c4;
    }
    ctx->pc = 0x2653BCu;
    {
        const bool branch_taken_0x2653bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2653C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653BCu;
        // 0x2653c0: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653bc) {
            ctx->pc = 0x2653F0u;
            goto label_2653f0;
        }
    }
    ctx->pc = 0x2653C4u;
label_2653c4:
    // 0x2653c4: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2653c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2653c8:
    // 0x2653c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2653cc:
    if (ctx->pc == 0x2653CCu) {
        ctx->pc = 0x2653CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653C8u;
        // 0x2653cc: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2653D0u;
        goto label_2653d0;
    }
    ctx->pc = 0x2653C8u;
    {
        const bool branch_taken_0x2653c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653C8u;
        // 0x2653cc: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653c8) {
            ctx->pc = 0x2653D8u;
            goto label_2653d8;
        }
    }
    ctx->pc = 0x2653D0u;
label_2653d0:
    // 0x2653d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2653d4:
    // 0x2653d4: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2653d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2653d8:
    // 0x2653d8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2653d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2653dc:
    // 0x2653dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2653dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2653e0:
    // 0x2653e0: 0x40f809  jalr        $v0
label_2653e4:
    if (ctx->pc == 0x2653E4u) {
        ctx->pc = 0x2653E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653E0u;
        // 0x2653e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2653E8u;
        goto label_2653e8;
    }
    ctx->pc = 0x2653E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2653E8u);
        ctx->pc = 0x2653E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653E0u;
        // 0x2653e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2653E0u, 0x2653E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2653E8u;
label_2653e8:
    // 0x2653e8: 0xa22002bc  sb          $zero, 0x2BC($s1)
    ctx->pc = 0x2653e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 700), (uint8_t)GPR_U32(ctx, 0));
label_2653ec:
    // 0x2653ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2653ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2653f0:
    // 0x2653f0: 0xc09967c  jal         func_2659F0
label_2653f4:
    if (ctx->pc == 0x2653F4u) {
        ctx->pc = 0x2653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653F0u;
        // 0x2653f4: 0x8c8502d4  lw          $a1, 0x2D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2653F8u;
        goto label_2653f8;
    }
    ctx->pc = 0x2653F0u;
    SET_GPR_U32(ctx, 31, 0x2653F8u);
    ctx->pc = 0x2653F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2653F0u;
    // 0x2653f4: 0x8c8502d4  lw          $a1, 0x2D4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2659F0u, 0x2653F0u, 0x2653F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653F8u;
label_2653f8:
    // 0x2653f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2653f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2653fc:
    // 0x2653fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2653fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_265400:
    // 0x265400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_265404:
    // 0x265404: 0x3e00008  jr          $ra
label_265408:
    if (ctx->pc == 0x265408u) {
        ctx->pc = 0x265408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265404u;
        // 0x265408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26540Cu;
        goto label_26540c;
    }
    ctx->pc = 0x265404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265404u;
        // 0x265408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26540Cu;
label_26540c:
    // 0x26540c: 0x0  nop
    ctx->pc = 0x26540cu;
    // NOP
    ctx->pc = 0x265410u;
}
