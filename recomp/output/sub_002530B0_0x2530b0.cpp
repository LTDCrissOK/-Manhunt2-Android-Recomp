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

// Function: sub_002530B0
// Address: 0x2530b0 - 0x253398
void sub_002530B0_0x2530b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002530B0_0x2530b0");
#endif

    switch (ctx->pc) {
        case 0x2530b0u: goto label_2530b0;
        case 0x2530b4u: goto label_2530b4;
        case 0x2530b8u: goto label_2530b8;
        case 0x2530bcu: goto label_2530bc;
        case 0x2530c0u: goto label_2530c0;
        case 0x2530c4u: goto label_2530c4;
        case 0x2530c8u: goto label_2530c8;
        case 0x2530ccu: goto label_2530cc;
        case 0x2530d0u: goto label_2530d0;
        case 0x2530d4u: goto label_2530d4;
        case 0x2530d8u: goto label_2530d8;
        case 0x2530dcu: goto label_2530dc;
        case 0x2530e0u: goto label_2530e0;
        case 0x2530e4u: goto label_2530e4;
        case 0x2530e8u: goto label_2530e8;
        case 0x2530ecu: goto label_2530ec;
        case 0x2530f0u: goto label_2530f0;
        case 0x2530f4u: goto label_2530f4;
        case 0x2530f8u: goto label_2530f8;
        case 0x2530fcu: goto label_2530fc;
        case 0x253100u: goto label_253100;
        case 0x253104u: goto label_253104;
        case 0x253108u: goto label_253108;
        case 0x25310cu: goto label_25310c;
        case 0x253110u: goto label_253110;
        case 0x253114u: goto label_253114;
        case 0x253118u: goto label_253118;
        case 0x25311cu: goto label_25311c;
        case 0x253120u: goto label_253120;
        case 0x253124u: goto label_253124;
        case 0x253128u: goto label_253128;
        case 0x25312cu: goto label_25312c;
        case 0x253130u: goto label_253130;
        case 0x253134u: goto label_253134;
        case 0x253138u: goto label_253138;
        case 0x25313cu: goto label_25313c;
        case 0x253140u: goto label_253140;
        case 0x253144u: goto label_253144;
        case 0x253148u: goto label_253148;
        case 0x25314cu: goto label_25314c;
        case 0x253150u: goto label_253150;
        case 0x253154u: goto label_253154;
        case 0x253158u: goto label_253158;
        case 0x25315cu: goto label_25315c;
        case 0x253160u: goto label_253160;
        case 0x253164u: goto label_253164;
        case 0x253168u: goto label_253168;
        case 0x25316cu: goto label_25316c;
        case 0x253170u: goto label_253170;
        case 0x253174u: goto label_253174;
        case 0x253178u: goto label_253178;
        case 0x25317cu: goto label_25317c;
        case 0x253180u: goto label_253180;
        case 0x253184u: goto label_253184;
        case 0x253188u: goto label_253188;
        case 0x25318cu: goto label_25318c;
        case 0x253190u: goto label_253190;
        case 0x253194u: goto label_253194;
        case 0x253198u: goto label_253198;
        case 0x25319cu: goto label_25319c;
        case 0x2531a0u: goto label_2531a0;
        case 0x2531a4u: goto label_2531a4;
        case 0x2531a8u: goto label_2531a8;
        case 0x2531acu: goto label_2531ac;
        case 0x2531b0u: goto label_2531b0;
        case 0x2531b4u: goto label_2531b4;
        case 0x2531b8u: goto label_2531b8;
        case 0x2531bcu: goto label_2531bc;
        case 0x2531c0u: goto label_2531c0;
        case 0x2531c4u: goto label_2531c4;
        case 0x2531c8u: goto label_2531c8;
        case 0x2531ccu: goto label_2531cc;
        case 0x2531d0u: goto label_2531d0;
        case 0x2531d4u: goto label_2531d4;
        case 0x2531d8u: goto label_2531d8;
        case 0x2531dcu: goto label_2531dc;
        case 0x2531e0u: goto label_2531e0;
        case 0x2531e4u: goto label_2531e4;
        case 0x2531e8u: goto label_2531e8;
        case 0x2531ecu: goto label_2531ec;
        case 0x2531f0u: goto label_2531f0;
        case 0x2531f4u: goto label_2531f4;
        case 0x2531f8u: goto label_2531f8;
        case 0x2531fcu: goto label_2531fc;
        case 0x253200u: goto label_253200;
        case 0x253204u: goto label_253204;
        case 0x253208u: goto label_253208;
        case 0x25320cu: goto label_25320c;
        case 0x253210u: goto label_253210;
        case 0x253214u: goto label_253214;
        case 0x253218u: goto label_253218;
        case 0x25321cu: goto label_25321c;
        case 0x253220u: goto label_253220;
        case 0x253224u: goto label_253224;
        case 0x253228u: goto label_253228;
        case 0x25322cu: goto label_25322c;
        case 0x253230u: goto label_253230;
        case 0x253234u: goto label_253234;
        case 0x253238u: goto label_253238;
        case 0x25323cu: goto label_25323c;
        case 0x253240u: goto label_253240;
        case 0x253244u: goto label_253244;
        case 0x253248u: goto label_253248;
        case 0x25324cu: goto label_25324c;
        case 0x253250u: goto label_253250;
        case 0x253254u: goto label_253254;
        case 0x253258u: goto label_253258;
        case 0x25325cu: goto label_25325c;
        case 0x253260u: goto label_253260;
        case 0x253264u: goto label_253264;
        case 0x253268u: goto label_253268;
        case 0x25326cu: goto label_25326c;
        case 0x253270u: goto label_253270;
        case 0x253274u: goto label_253274;
        case 0x253278u: goto label_253278;
        case 0x25327cu: goto label_25327c;
        case 0x253280u: goto label_253280;
        case 0x253284u: goto label_253284;
        case 0x253288u: goto label_253288;
        case 0x25328cu: goto label_25328c;
        case 0x253290u: goto label_253290;
        case 0x253294u: goto label_253294;
        case 0x253298u: goto label_253298;
        case 0x25329cu: goto label_25329c;
        case 0x2532a0u: goto label_2532a0;
        case 0x2532a4u: goto label_2532a4;
        case 0x2532a8u: goto label_2532a8;
        case 0x2532acu: goto label_2532ac;
        case 0x2532b0u: goto label_2532b0;
        case 0x2532b4u: goto label_2532b4;
        case 0x2532b8u: goto label_2532b8;
        case 0x2532bcu: goto label_2532bc;
        case 0x2532c0u: goto label_2532c0;
        case 0x2532c4u: goto label_2532c4;
        case 0x2532c8u: goto label_2532c8;
        case 0x2532ccu: goto label_2532cc;
        case 0x2532d0u: goto label_2532d0;
        case 0x2532d4u: goto label_2532d4;
        case 0x2532d8u: goto label_2532d8;
        case 0x2532dcu: goto label_2532dc;
        case 0x2532e0u: goto label_2532e0;
        case 0x2532e4u: goto label_2532e4;
        case 0x2532e8u: goto label_2532e8;
        case 0x2532ecu: goto label_2532ec;
        case 0x2532f0u: goto label_2532f0;
        case 0x2532f4u: goto label_2532f4;
        case 0x2532f8u: goto label_2532f8;
        case 0x2532fcu: goto label_2532fc;
        case 0x253300u: goto label_253300;
        case 0x253304u: goto label_253304;
        case 0x253308u: goto label_253308;
        case 0x25330cu: goto label_25330c;
        case 0x253310u: goto label_253310;
        case 0x253314u: goto label_253314;
        case 0x253318u: goto label_253318;
        case 0x25331cu: goto label_25331c;
        case 0x253320u: goto label_253320;
        case 0x253324u: goto label_253324;
        case 0x253328u: goto label_253328;
        case 0x25332cu: goto label_25332c;
        case 0x253330u: goto label_253330;
        case 0x253334u: goto label_253334;
        case 0x253338u: goto label_253338;
        case 0x25333cu: goto label_25333c;
        case 0x253340u: goto label_253340;
        case 0x253344u: goto label_253344;
        case 0x253348u: goto label_253348;
        case 0x25334cu: goto label_25334c;
        case 0x253350u: goto label_253350;
        case 0x253354u: goto label_253354;
        case 0x253358u: goto label_253358;
        case 0x25335cu: goto label_25335c;
        case 0x253360u: goto label_253360;
        case 0x253364u: goto label_253364;
        case 0x253368u: goto label_253368;
        case 0x25336cu: goto label_25336c;
        case 0x253370u: goto label_253370;
        case 0x253374u: goto label_253374;
        case 0x253378u: goto label_253378;
        case 0x25337cu: goto label_25337c;
        case 0x253380u: goto label_253380;
        case 0x253384u: goto label_253384;
        case 0x253388u: goto label_253388;
        case 0x25338cu: goto label_25338c;
        case 0x253390u: goto label_253390;
        case 0x253394u: goto label_253394;
        default: break;
    }

    ctx->pc = 0x2530b0u;

label_2530b0:
    // 0x2530b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2530b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2530b4:
    // 0x2530b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2530b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2530b8:
    // 0x2530b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2530b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2530bc:
    // 0x2530bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2530bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2530c0:
    // 0x2530c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2530c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2530c4:
    // 0x2530c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2530c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2530c8:
    // 0x2530c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2530c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2530cc:
    // 0x2530cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2530ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2530d0:
    // 0x2530d0: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2530d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2530d4:
    // 0x2530d4: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2530d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_2530d8:
    // 0x2530d8: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2530d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_2530dc:
    // 0x2530dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2530dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2530e0:
    // 0x2530e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2530e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2530e4:
    // 0x2530e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2530e8:
    if (ctx->pc == 0x2530E8u) {
        ctx->pc = 0x2530E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530E4u;
        // 0x2530e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530ECu;
        goto label_2530ec;
    }
    ctx->pc = 0x2530E4u;
    {
        const bool branch_taken_0x2530e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2530E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530E4u;
        // 0x2530e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530e4) {
            ctx->pc = 0x253104u;
            goto label_253104;
        }
    }
    ctx->pc = 0x2530ECu;
label_2530ec:
    // 0x2530ec: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2530ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2530f0:
    // 0x2530f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2530f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2530f4:
    // 0x2530f4: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2530f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2530f8:
    // 0x2530f8: 0x40f809  jalr        $v0
label_2530fc:
    if (ctx->pc == 0x2530FCu) {
        ctx->pc = 0x2530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530F8u;
        // 0x2530fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253100u;
        goto label_253100;
    }
    ctx->pc = 0x2530F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253100u);
        ctx->pc = 0x2530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530F8u;
        // 0x2530fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530F8u, 0x253100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253100u;
label_253100:
    // 0x253100: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x253100u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_253104:
    // 0x253104: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
label_253108:
    if (ctx->pc == 0x253108u) {
        ctx->pc = 0x25310Cu;
        goto label_25310c;
    }
    ctx->pc = 0x253104u;
    {
        const bool branch_taken_0x253104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253104) {
            ctx->pc = 0x253370u;
            goto label_253370;
        }
    }
    ctx->pc = 0x25310Cu;
label_25310c:
    // 0x25310c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x25310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_253110:
    // 0x253110: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x253110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_253114:
    // 0x253114: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x253114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_253118:
    // 0x253118: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_25311c:
    if (ctx->pc == 0x25311Cu) {
        ctx->pc = 0x25311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253118u;
        // 0x25311c: 0x8e321004  lw          $s2, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253120u;
        goto label_253120;
    }
    ctx->pc = 0x253118u;
    {
        const bool branch_taken_0x253118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253118u;
        // 0x25311c: 0x8e321004  lw          $s2, 0x1004($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253118) {
            ctx->pc = 0x2531B0u;
            goto label_2531b0;
        }
    }
    ctx->pc = 0x253120u;
label_253120:
    // 0x253120: 0x8e2312bc  lw          $v1, 0x12BC($s1)
    ctx->pc = 0x253120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_253124:
    // 0x253124: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x253124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_253128:
    // 0x253128: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_25312c:
    if (ctx->pc == 0x25312Cu) {
        ctx->pc = 0x25312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253128u;
        // 0x25312c: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253130u;
        goto label_253130;
    }
    ctx->pc = 0x253128u;
    {
        const bool branch_taken_0x253128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x253128) {
            ctx->pc = 0x25312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253128u;
            // 0x25312c: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253138u;
            goto label_253138;
        }
    }
    ctx->pc = 0x253130u;
label_253130:
    // 0x253130: 0x10000026  b           . + 4 + (0x26 << 2)
label_253134:
    if (ctx->pc == 0x253134u) {
        ctx->pc = 0x253134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253130u;
        // 0x253134: 0x8e320388  lw          $s2, 0x388($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253138u;
        goto label_253138;
    }
    ctx->pc = 0x253130u;
    {
        const bool branch_taken_0x253130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253130u;
        // 0x253134: 0x8e320388  lw          $s2, 0x388($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253130) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x253138u;
label_253138:
    // 0x253138: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_25313c:
    if (ctx->pc == 0x25313Cu) {
        ctx->pc = 0x25313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253138u;
        // 0x25313c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253140u;
        goto label_253140;
    }
    ctx->pc = 0x253138u;
    {
        const bool branch_taken_0x253138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253138) {
            ctx->pc = 0x25313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253138u;
            // 0x25313c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253148u;
            goto label_253148;
        }
    }
    ctx->pc = 0x253140u;
label_253140:
    // 0x253140: 0x10000022  b           . + 4 + (0x22 << 2)
label_253144:
    if (ctx->pc == 0x253144u) {
        ctx->pc = 0x253144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253140u;
        // 0x253144: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253148u;
        goto label_253148;
    }
    ctx->pc = 0x253140u;
    {
        const bool branch_taken_0x253140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253140u;
        // 0x253144: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253140) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x253148u;
label_253148:
    // 0x253148: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_25314c:
    if (ctx->pc == 0x25314Cu) {
        ctx->pc = 0x25314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253148u;
        // 0x25314c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253150u;
        goto label_253150;
    }
    ctx->pc = 0x253148u;
    {
        const bool branch_taken_0x253148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253148u;
        // 0x25314c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253148) {
            ctx->pc = 0x253158u;
            goto label_253158;
        }
    }
    ctx->pc = 0x253150u;
label_253150:
    // 0x253150: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_253154:
    if (ctx->pc == 0x253154u) {
        ctx->pc = 0x253158u;
        goto label_253158;
    }
    ctx->pc = 0x253150u;
    {
        const bool branch_taken_0x253150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x253150) {
            ctx->pc = 0x253160u;
            goto label_253160;
        }
    }
    ctx->pc = 0x253158u;
label_253158:
    // 0x253158: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25315c:
    if (ctx->pc == 0x25315Cu) {
        ctx->pc = 0x25315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253158u;
        // 0x25315c: 0x8e321200  lw          $s2, 0x1200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253160u;
        goto label_253160;
    }
    ctx->pc = 0x253158u;
    {
        const bool branch_taken_0x253158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253158u;
        // 0x25315c: 0x8e321200  lw          $s2, 0x1200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253158) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x253160u;
label_253160:
    // 0x253160: 0x5640001b  bnel        $s2, $zero, . + 4 + (0x1B << 2)
label_253164:
    if (ctx->pc == 0x253164u) {
        ctx->pc = 0x253164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253160u;
        // 0x253164: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253168u;
        goto label_253168;
    }
    ctx->pc = 0x253160u;
    {
        const bool branch_taken_0x253160 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x253160) {
            ctx->pc = 0x253164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253160u;
            // 0x253164: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2531D0u;
            goto label_2531d0;
        }
    }
    ctx->pc = 0x253168u;
label_253168:
    // 0x253168: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x253168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_25316c:
    // 0x25316c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253170:
    // 0x253170: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x253170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_253174:
    // 0x253174: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x253174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_253178:
    // 0x253178: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x253178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25317c:
    // 0x25317c: 0xc09c8da  jal         func_272368
label_253180:
    if (ctx->pc == 0x253180u) {
        ctx->pc = 0x253180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25317Cu;
        // 0x253180: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253184u;
        goto label_253184;
    }
    ctx->pc = 0x25317Cu;
    SET_GPR_U32(ctx, 31, 0x253184u);
    ctx->pc = 0x253180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25317Cu;
    // 0x253180: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272368u, 0x25317Cu, 0x253184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253184u;
label_253184:
    // 0x253184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_253188:
    // 0x253188: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_25318c:
    if (ctx->pc == 0x25318Cu) {
        ctx->pc = 0x25318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253188u;
        // 0x25318c: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253190u;
        goto label_253190;
    }
    ctx->pc = 0x253188u;
    {
        const bool branch_taken_0x253188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253188u;
        // 0x25318c: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253188) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x253190u;
label_253190:
    // 0x253190: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x253190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_253194:
    // 0x253194: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x253194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253198:
    // 0x253198: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x253198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25319c:
    // 0x25319c: 0xc0b4bc6  jal         func_2D2F18
label_2531a0:
    if (ctx->pc == 0x2531A0u) {
        ctx->pc = 0x2531A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25319Cu;
        // 0x2531a0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531A4u;
        goto label_2531a4;
    }
    ctx->pc = 0x25319Cu;
    SET_GPR_U32(ctx, 31, 0x2531A4u);
    ctx->pc = 0x2531A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25319Cu;
    // 0x2531a0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x25319Cu, 0x2531A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531A4u;
label_2531a4:
    // 0x2531a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2531a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2531a8:
    // 0x2531a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2531ac:
    if (ctx->pc == 0x2531ACu) {
        ctx->pc = 0x2531ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531A8u;
        // 0x2531ac: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531B0u;
        goto label_2531b0;
    }
    ctx->pc = 0x2531A8u;
    {
        const bool branch_taken_0x2531a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531A8u;
        // 0x2531ac: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531a8) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x2531B0u;
label_2531b0:
    // 0x2531b0: 0x8e23036c  lw          $v1, 0x36C($s1)
    ctx->pc = 0x2531b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2531b4:
    // 0x2531b4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2531b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2531b8:
    // 0x2531b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2531bc:
    if (ctx->pc == 0x2531BCu) {
        ctx->pc = 0x2531BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B8u;
        // 0x2531bc: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531C0u;
        goto label_2531c0;
    }
    ctx->pc = 0x2531B8u;
    {
        const bool branch_taken_0x2531b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B8u;
        // 0x2531bc: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531b8) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x2531C0u;
label_2531c0:
    // 0x2531c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2531c4:
    if (ctx->pc == 0x2531C4u) {
        ctx->pc = 0x2531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C0u;
        // 0x2531c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531C8u;
        goto label_2531c8;
    }
    ctx->pc = 0x2531C0u;
    {
        const bool branch_taken_0x2531c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C0u;
        // 0x2531c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531c0) {
            ctx->pc = 0x2531CCu;
            goto label_2531cc;
        }
    }
    ctx->pc = 0x2531C8u;
label_2531c8:
    // 0x2531c8: 0x8c52bd50  lw          $s2, -0x42B0($v0)
    ctx->pc = 0x2531c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2531cc:
    // 0x2531cc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2531ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2531d0:
    // 0x2531d0: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2531d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_2531d4:
    // 0x2531d4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2531d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2531d8:
    // 0x2531d8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2531dc:
    if (ctx->pc == 0x2531DCu) {
        ctx->pc = 0x2531E0u;
        goto label_2531e0;
    }
    ctx->pc = 0x2531D8u;
    {
        const bool branch_taken_0x2531d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2531d8) {
            ctx->pc = 0x25321Cu;
            goto label_25321c;
        }
    }
    ctx->pc = 0x2531E0u;
label_2531e0:
    // 0x2531e0: 0x5240004c  beql        $s2, $zero, . + 4 + (0x4C << 2)
label_2531e4:
    if (ctx->pc == 0x2531E4u) {
        ctx->pc = 0x2531E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531E0u;
        // 0x2531e4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531E8u;
        goto label_2531e8;
    }
    ctx->pc = 0x2531E0u;
    {
        const bool branch_taken_0x2531e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2531e0) {
            ctx->pc = 0x2531E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2531E0u;
            // 0x2531e4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253314u;
            goto label_253314;
        }
    }
    ctx->pc = 0x2531E8u;
label_2531e8:
    // 0x2531e8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2531e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_2531ec:
    // 0x2531ec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2531ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2531f0:
    // 0x2531f0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2531f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_2531f4:
    // 0x2531f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2531f8:
    if (ctx->pc == 0x2531F8u) {
        ctx->pc = 0x2531FCu;
        goto label_2531fc;
    }
    ctx->pc = 0x2531F4u;
    {
        const bool branch_taken_0x2531f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2531f4) {
            ctx->pc = 0x25321Cu;
            goto label_25321c;
        }
    }
    ctx->pc = 0x2531FCu;
label_2531fc:
    // 0x2531fc: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x2531fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_253200:
    // 0x253200: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x253200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_253204:
    // 0x253204: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_253208:
    if (ctx->pc == 0x253208u) {
        ctx->pc = 0x25320Cu;
        goto label_25320c;
    }
    ctx->pc = 0x253204u;
    {
        const bool branch_taken_0x253204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253204) {
            ctx->pc = 0x25321Cu;
            goto label_25321c;
        }
    }
    ctx->pc = 0x25320Cu;
label_25320c:
    // 0x25320c: 0xc06ccf2  jal         func_1B33C8
label_253210:
    if (ctx->pc == 0x253210u) {
        ctx->pc = 0x253210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25320Cu;
        // 0x253210: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253214u;
        goto label_253214;
    }
    ctx->pc = 0x25320Cu;
    SET_GPR_U32(ctx, 31, 0x253214u);
    ctx->pc = 0x253210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25320Cu;
    // 0x253210: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33C8u, 0x25320Cu, 0x253214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253214u;
label_253214:
    // 0x253214: 0x10000059  b           . + 4 + (0x59 << 2)
label_253218:
    if (ctx->pc == 0x253218u) {
        ctx->pc = 0x253218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253214u;
        // 0x253218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25321Cu;
        goto label_25321c;
    }
    ctx->pc = 0x253214u;
    {
        const bool branch_taken_0x253214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253214u;
        // 0x253218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253214) {
            ctx->pc = 0x25337Cu;
            goto label_25337c;
        }
    }
    ctx->pc = 0x25321Cu;
label_25321c:
    // 0x25321c: 0x5240003d  beql        $s2, $zero, . + 4 + (0x3D << 2)
label_253220:
    if (ctx->pc == 0x253220u) {
        ctx->pc = 0x253220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25321Cu;
        // 0x253220: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253224u;
        goto label_253224;
    }
    ctx->pc = 0x25321Cu;
    {
        const bool branch_taken_0x25321c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25321c) {
            ctx->pc = 0x253220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25321Cu;
            // 0x253220: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253314u;
            goto label_253314;
        }
    }
    ctx->pc = 0x253224u;
label_253224:
    // 0x253224: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x253224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_253228:
    // 0x253228: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x253228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_25322c:
    // 0x25322c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_253230:
    if (ctx->pc == 0x253230u) {
        ctx->pc = 0x253230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25322Cu;
        // 0x253230: 0x2462ffeb  addiu       $v0, $v1, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253234u;
        goto label_253234;
    }
    ctx->pc = 0x25322Cu;
    {
        const bool branch_taken_0x25322c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25322Cu;
        // 0x253230: 0x2462ffeb  addiu       $v0, $v1, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25322c) {
            ctx->pc = 0x253250u;
            goto label_253250;
        }
    }
    ctx->pc = 0x253234u;
label_253234:
    // 0x253234: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x253234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_253238:
    // 0x253238: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_25323c:
    if (ctx->pc == 0x25323Cu) {
        ctx->pc = 0x25323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253238u;
        // 0x25323c: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253240u;
        goto label_253240;
    }
    ctx->pc = 0x253238u;
    {
        const bool branch_taken_0x253238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253238) {
            ctx->pc = 0x25323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253238u;
            // 0x25323c: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253254u;
            goto label_253254;
        }
    }
    ctx->pc = 0x253240u;
label_253240:
    // 0x253240: 0x2462ffe5  addiu       $v0, $v1, -0x1B
    ctx->pc = 0x253240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967269));
label_253244:
    // 0x253244: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x253244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_253248:
    // 0x253248: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_25324c:
    if (ctx->pc == 0x25324Cu) {
        ctx->pc = 0x25324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253248u;
        // 0x25324c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253250u;
        goto label_253250;
    }
    ctx->pc = 0x253248u;
    {
        const bool branch_taken_0x253248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253248) {
            ctx->pc = 0x25324Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253248u;
            // 0x25324c: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253314u;
            goto label_253314;
        }
    }
    ctx->pc = 0x253250u;
label_253250:
    // 0x253250: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x253250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_253254:
    // 0x253254: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x253254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_253258:
    // 0x253258: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x253258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_25325c:
    // 0x25325c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_253260:
    if (ctx->pc == 0x253260u) {
        ctx->pc = 0x253260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25325Cu;
        // 0x253260: 0x2462fffa  addiu       $v0, $v1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253264u;
        goto label_253264;
    }
    ctx->pc = 0x25325Cu;
    {
        const bool branch_taken_0x25325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25325Cu;
        // 0x253260: 0x2462fffa  addiu       $v0, $v1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25325c) {
            ctx->pc = 0x2532D4u;
            goto label_2532d4;
        }
    }
    ctx->pc = 0x253264u;
label_253264:
    // 0x253264: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x253264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253268:
    // 0x253268: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x253268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_25326c:
    // 0x25326c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_253270:
    if (ctx->pc == 0x253270u) {
        ctx->pc = 0x253270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25326Cu;
        // 0x253270: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253274u;
        goto label_253274;
    }
    ctx->pc = 0x25326Cu;
    {
        const bool branch_taken_0x25326c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25326Cu;
        // 0x253270: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25326c) {
            ctx->pc = 0x2532A8u;
            goto label_2532a8;
        }
    }
    ctx->pc = 0x253274u;
label_253274:
    // 0x253274: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x253274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_253278:
    // 0x253278: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_25327c:
    if (ctx->pc == 0x25327Cu) {
        ctx->pc = 0x25327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253278u;
        // 0x25327c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253280u;
        goto label_253280;
    }
    ctx->pc = 0x253278u;
    {
        const bool branch_taken_0x253278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253278) {
            ctx->pc = 0x25327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253278u;
            // 0x25327c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532ACu;
            goto label_2532ac;
        }
    }
    ctx->pc = 0x253280u;
label_253280:
    // 0x253280: 0xc0924a8  jal         func_2492A0
label_253284:
    if (ctx->pc == 0x253284u) {
        ctx->pc = 0x253284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253280u;
        // 0x253284: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253288u;
        goto label_253288;
    }
    ctx->pc = 0x253280u;
    SET_GPR_U32(ctx, 31, 0x253288u);
    ctx->pc = 0x253284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253280u;
    // 0x253284: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x253280u, 0x253288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253288u;
label_253288:
    // 0x253288: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_25328c:
    if (ctx->pc == 0x25328Cu) {
        ctx->pc = 0x25328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253288u;
        // 0x25328c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253290u;
        goto label_253290;
    }
    ctx->pc = 0x253288u;
    {
        const bool branch_taken_0x253288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253288) {
            ctx->pc = 0x25328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253288u;
            // 0x25328c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532ACu;
            goto label_2532ac;
        }
    }
    ctx->pc = 0x253290u;
label_253290:
    // 0x253290: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x253290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_253294:
    // 0x253294: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x253294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_253298:
    // 0x253298: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_25329c:
    if (ctx->pc == 0x25329Cu) {
        ctx->pc = 0x25329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253298u;
        // 0x25329c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2532A0u;
        goto label_2532a0;
    }
    ctx->pc = 0x253298u;
    {
        const bool branch_taken_0x253298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253298u;
        // 0x25329c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253298) {
            ctx->pc = 0x2532A8u;
            goto label_2532a8;
        }
    }
    ctx->pc = 0x2532A0u;
label_2532a0:
    // 0x2532a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2532a4:
    if (ctx->pc == 0x2532A4u) {
        ctx->pc = 0x2532A8u;
        goto label_2532a8;
    }
    ctx->pc = 0x2532A0u;
    {
        const bool branch_taken_0x2532a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2532a0) {
            ctx->pc = 0x2532ACu;
            goto label_2532ac;
        }
    }
    ctx->pc = 0x2532A8u;
label_2532a8:
    // 0x2532a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2532a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2532ac:
    // 0x2532ac: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_2532b0:
    if (ctx->pc == 0x2532B0u) {
        ctx->pc = 0x2532B4u;
        goto label_2532b4;
    }
    ctx->pc = 0x2532ACu;
    {
        const bool branch_taken_0x2532ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2532ac) {
            ctx->pc = 0x2532CCu;
            goto label_2532cc;
        }
    }
    ctx->pc = 0x2532B4u;
label_2532b4:
    // 0x2532b4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2532b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2532b8:
    // 0x2532b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2532b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2532bc:
    // 0x2532bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2532bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2532c0:
    // 0x2532c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2532c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2532c4:
    // 0x2532c4: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2532c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_2532c8:
    // 0x2532c8: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x2532c8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2532cc:
    // 0x2532cc: 0x5280000b  beql        $s4, $zero, . + 4 + (0xB << 2)
label_2532d0:
    if (ctx->pc == 0x2532D0u) {
        ctx->pc = 0x2532D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532CCu;
        // 0x2532d0: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2532D4u;
        goto label_2532d4;
    }
    ctx->pc = 0x2532CCu;
    {
        const bool branch_taken_0x2532cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2532cc) {
            ctx->pc = 0x2532D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532CCu;
            // 0x2532d0: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532FCu;
            goto label_2532fc;
        }
    }
    ctx->pc = 0x2532D4u;
label_2532d4:
    // 0x2532d4: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2532d8:
    // 0x2532d8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2532d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2532dc:
    // 0x2532dc: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x2532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2532e0:
    // 0x2532e0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2532e4:
    if (ctx->pc == 0x2532E4u) {
        ctx->pc = 0x2532E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532E0u;
        // 0x2532e4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2532E8u;
        goto label_2532e8;
    }
    ctx->pc = 0x2532E0u;
    {
        const bool branch_taken_0x2532e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2532E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532E0u;
        // 0x2532e4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532e0) {
            ctx->pc = 0x2532F8u;
            goto label_2532f8;
        }
    }
    ctx->pc = 0x2532E8u;
label_2532e8:
    // 0x2532e8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2532ec:
    if (ctx->pc == 0x2532ECu) {
        ctx->pc = 0x2532ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532E8u;
        // 0x2532ec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2532F0u;
        goto label_2532f0;
    }
    ctx->pc = 0x2532E8u;
    {
        const bool branch_taken_0x2532e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2532ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532E8u;
        // 0x2532ec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532e8) {
            ctx->pc = 0x2532F8u;
            goto label_2532f8;
        }
    }
    ctx->pc = 0x2532F0u;
label_2532f0:
    // 0x2532f0: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
label_2532f4:
    if (ctx->pc == 0x2532F4u) {
        ctx->pc = 0x2532F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532F0u;
        // 0x2532f4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2532F8u;
        goto label_2532f8;
    }
    ctx->pc = 0x2532F0u;
    {
        const bool branch_taken_0x2532f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2532f0) {
            ctx->pc = 0x2532F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532F0u;
            // 0x2532f4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253314u;
            goto label_253314;
        }
    }
    ctx->pc = 0x2532F8u;
label_2532f8:
    // 0x2532f8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2532f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2532fc:
    // 0x2532fc: 0x8e240330  lw          $a0, 0x330($s1)
    ctx->pc = 0x2532fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
label_253300:
    // 0x253300: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x253300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_253304:
    // 0x253304: 0xc06cc90  jal         func_1B3240
label_253308:
    if (ctx->pc == 0x253308u) {
        ctx->pc = 0x253308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253304u;
        // 0x253308: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25330Cu;
        goto label_25330c;
    }
    ctx->pc = 0x253304u;
    SET_GPR_U32(ctx, 31, 0x25330Cu);
    ctx->pc = 0x253308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253304u;
    // 0x253308: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3240u, 0x253304u, 0x25330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25330Cu;
label_25330c:
    // 0x25330c: 0x10000014  b           . + 4 + (0x14 << 2)
label_253310:
    if (ctx->pc == 0x253310u) {
        ctx->pc = 0x253314u;
        goto label_253314;
    }
    ctx->pc = 0x25330Cu;
    {
        const bool branch_taken_0x25330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25330c) {
            ctx->pc = 0x253360u;
            goto label_253360;
        }
    }
    ctx->pc = 0x253314u;
label_253314:
    // 0x253314: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x253314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_253318:
    // 0x253318: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x253318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_25331c:
    // 0x25331c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_253320:
    if (ctx->pc == 0x253320u) {
        ctx->pc = 0x253320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25331Cu;
        // 0x253320: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253324u;
        goto label_253324;
    }
    ctx->pc = 0x25331Cu;
    {
        const bool branch_taken_0x25331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25331c) {
            ctx->pc = 0x253320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25331Cu;
            // 0x253320: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25334Cu;
            goto label_25334c;
        }
    }
    ctx->pc = 0x253324u;
label_253324:
    // 0x253324: 0x8e22053c  lw          $v0, 0x53C($s1)
    ctx->pc = 0x253324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1340)));
label_253328:
    // 0x253328: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_25332c:
    if (ctx->pc == 0x25332Cu) {
        ctx->pc = 0x25332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253328u;
        // 0x25332c: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253330u;
        goto label_253330;
    }
    ctx->pc = 0x253328u;
    {
        const bool branch_taken_0x253328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253328) {
            ctx->pc = 0x25332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253328u;
            // 0x25332c: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25334Cu;
            goto label_25334c;
        }
    }
    ctx->pc = 0x253330u;
label_253330:
    // 0x253330: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x253330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_253334:
    // 0x253334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x253334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_253338:
    // 0x253338: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x253338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25333c:
    // 0x25333c: 0xc06cc8a  jal         func_1B3228
label_253340:
    if (ctx->pc == 0x253340u) {
        ctx->pc = 0x253340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25333Cu;
        // 0x253340: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253344u;
        goto label_253344;
    }
    ctx->pc = 0x25333Cu;
    SET_GPR_U32(ctx, 31, 0x253344u);
    ctx->pc = 0x253340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25333Cu;
    // 0x253340: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3228u, 0x25333Cu, 0x253344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253344u;
label_253344:
    // 0x253344: 0x10000006  b           . + 4 + (0x6 << 2)
label_253348:
    if (ctx->pc == 0x253348u) {
        ctx->pc = 0x25334Cu;
        goto label_25334c;
    }
    ctx->pc = 0x253344u;
    {
        const bool branch_taken_0x253344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253344) {
            ctx->pc = 0x253360u;
            goto label_253360;
        }
    }
    ctx->pc = 0x25334Cu;
label_25334c:
    // 0x25334c: 0x90820049  lbu         $v0, 0x49($a0)
    ctx->pc = 0x25334cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
label_253350:
    // 0x253350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_253354:
    if (ctx->pc == 0x253354u) {
        ctx->pc = 0x253358u;
        goto label_253358;
    }
    ctx->pc = 0x253350u;
    {
        const bool branch_taken_0x253350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253350) {
            ctx->pc = 0x253360u;
            goto label_253360;
        }
    }
    ctx->pc = 0x253358u;
label_253358:
    // 0x253358: 0xc06ccf2  jal         func_1B33C8
label_25335c:
    if (ctx->pc == 0x25335Cu) {
        ctx->pc = 0x253360u;
        goto label_253360;
    }
    ctx->pc = 0x253358u;
    SET_GPR_U32(ctx, 31, 0x253360u);
    ctx->pc = 0x1B33C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33C8u, 0x253358u, 0x253360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253360u;
label_253360:
    // 0x253360: 0xc06ccf8  jal         func_1B33E0
label_253364:
    if (ctx->pc == 0x253364u) {
        ctx->pc = 0x253364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253360u;
        // 0x253364: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253368u;
        goto label_253368;
    }
    ctx->pc = 0x253360u;
    SET_GPR_U32(ctx, 31, 0x253368u);
    ctx->pc = 0x253364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253360u;
    // 0x253364: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33E0u, 0x253360u, 0x253368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253368u;
label_253368:
    // 0x253368: 0x10000004  b           . + 4 + (0x4 << 2)
label_25336c:
    if (ctx->pc == 0x25336Cu) {
        ctx->pc = 0x25336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253368u;
        // 0x25336c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253370u;
        goto label_253370;
    }
    ctx->pc = 0x253368u;
    {
        const bool branch_taken_0x253368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253368u;
        // 0x25336c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253368) {
            ctx->pc = 0x25337Cu;
            goto label_25337c;
        }
    }
    ctx->pc = 0x253370u;
label_253370:
    // 0x253370: 0xc06ccf2  jal         func_1B33C8
label_253374:
    if (ctx->pc == 0x253374u) {
        ctx->pc = 0x253374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253370u;
        // 0x253374: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253378u;
        goto label_253378;
    }
    ctx->pc = 0x253370u;
    SET_GPR_U32(ctx, 31, 0x253378u);
    ctx->pc = 0x253374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253370u;
    // 0x253374: 0x8e240330  lw          $a0, 0x330($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33C8u, 0x253370u, 0x253378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253378u;
label_253378:
    // 0x253378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25337c:
    // 0x25337c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25337cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_253380:
    // 0x253380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_253384:
    // 0x253384: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x253384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_253388:
    // 0x253388: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x253388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25338c:
    // 0x25338c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_253390:
    // 0x253390: 0x3e00008  jr          $ra
label_253394:
    if (ctx->pc == 0x253394u) {
        ctx->pc = 0x253394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253390u;
        // 0x253394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253398u;
        goto label_fallthrough_0x253390;
    }
    ctx->pc = 0x253390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253390u;
        // 0x253394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253390:
    ctx->pc = 0x253398u;
}
