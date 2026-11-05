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

// Function: sub_00357428
// Address: 0x357428 - 0x357698
void sub_00357428_0x357428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357428_0x357428");
#endif

    switch (ctx->pc) {
        case 0x357428u: goto label_357428;
        case 0x35742cu: goto label_35742c;
        case 0x357430u: goto label_357430;
        case 0x357434u: goto label_357434;
        case 0x357438u: goto label_357438;
        case 0x35743cu: goto label_35743c;
        case 0x357440u: goto label_357440;
        case 0x357444u: goto label_357444;
        case 0x357448u: goto label_357448;
        case 0x35744cu: goto label_35744c;
        case 0x357450u: goto label_357450;
        case 0x357454u: goto label_357454;
        case 0x357458u: goto label_357458;
        case 0x35745cu: goto label_35745c;
        case 0x357460u: goto label_357460;
        case 0x357464u: goto label_357464;
        case 0x357468u: goto label_357468;
        case 0x35746cu: goto label_35746c;
        case 0x357470u: goto label_357470;
        case 0x357474u: goto label_357474;
        case 0x357478u: goto label_357478;
        case 0x35747cu: goto label_35747c;
        case 0x357480u: goto label_357480;
        case 0x357484u: goto label_357484;
        case 0x357488u: goto label_357488;
        case 0x35748cu: goto label_35748c;
        case 0x357490u: goto label_357490;
        case 0x357494u: goto label_357494;
        case 0x357498u: goto label_357498;
        case 0x35749cu: goto label_35749c;
        case 0x3574a0u: goto label_3574a0;
        case 0x3574a4u: goto label_3574a4;
        case 0x3574a8u: goto label_3574a8;
        case 0x3574acu: goto label_3574ac;
        case 0x3574b0u: goto label_3574b0;
        case 0x3574b4u: goto label_3574b4;
        case 0x3574b8u: goto label_3574b8;
        case 0x3574bcu: goto label_3574bc;
        case 0x3574c0u: goto label_3574c0;
        case 0x3574c4u: goto label_3574c4;
        case 0x3574c8u: goto label_3574c8;
        case 0x3574ccu: goto label_3574cc;
        case 0x3574d0u: goto label_3574d0;
        case 0x3574d4u: goto label_3574d4;
        case 0x3574d8u: goto label_3574d8;
        case 0x3574dcu: goto label_3574dc;
        case 0x3574e0u: goto label_3574e0;
        case 0x3574e4u: goto label_3574e4;
        case 0x3574e8u: goto label_3574e8;
        case 0x3574ecu: goto label_3574ec;
        case 0x3574f0u: goto label_3574f0;
        case 0x3574f4u: goto label_3574f4;
        case 0x3574f8u: goto label_3574f8;
        case 0x3574fcu: goto label_3574fc;
        case 0x357500u: goto label_357500;
        case 0x357504u: goto label_357504;
        case 0x357508u: goto label_357508;
        case 0x35750cu: goto label_35750c;
        case 0x357510u: goto label_357510;
        case 0x357514u: goto label_357514;
        case 0x357518u: goto label_357518;
        case 0x35751cu: goto label_35751c;
        case 0x357520u: goto label_357520;
        case 0x357524u: goto label_357524;
        case 0x357528u: goto label_357528;
        case 0x35752cu: goto label_35752c;
        case 0x357530u: goto label_357530;
        case 0x357534u: goto label_357534;
        case 0x357538u: goto label_357538;
        case 0x35753cu: goto label_35753c;
        case 0x357540u: goto label_357540;
        case 0x357544u: goto label_357544;
        case 0x357548u: goto label_357548;
        case 0x35754cu: goto label_35754c;
        case 0x357550u: goto label_357550;
        case 0x357554u: goto label_357554;
        case 0x357558u: goto label_357558;
        case 0x35755cu: goto label_35755c;
        case 0x357560u: goto label_357560;
        case 0x357564u: goto label_357564;
        case 0x357568u: goto label_357568;
        case 0x35756cu: goto label_35756c;
        case 0x357570u: goto label_357570;
        case 0x357574u: goto label_357574;
        case 0x357578u: goto label_357578;
        case 0x35757cu: goto label_35757c;
        case 0x357580u: goto label_357580;
        case 0x357584u: goto label_357584;
        case 0x357588u: goto label_357588;
        case 0x35758cu: goto label_35758c;
        case 0x357590u: goto label_357590;
        case 0x357594u: goto label_357594;
        case 0x357598u: goto label_357598;
        case 0x35759cu: goto label_35759c;
        case 0x3575a0u: goto label_3575a0;
        case 0x3575a4u: goto label_3575a4;
        case 0x3575a8u: goto label_3575a8;
        case 0x3575acu: goto label_3575ac;
        case 0x3575b0u: goto label_3575b0;
        case 0x3575b4u: goto label_3575b4;
        case 0x3575b8u: goto label_3575b8;
        case 0x3575bcu: goto label_3575bc;
        case 0x3575c0u: goto label_3575c0;
        case 0x3575c4u: goto label_3575c4;
        case 0x3575c8u: goto label_3575c8;
        case 0x3575ccu: goto label_3575cc;
        case 0x3575d0u: goto label_3575d0;
        case 0x3575d4u: goto label_3575d4;
        case 0x3575d8u: goto label_3575d8;
        case 0x3575dcu: goto label_3575dc;
        case 0x3575e0u: goto label_3575e0;
        case 0x3575e4u: goto label_3575e4;
        case 0x3575e8u: goto label_3575e8;
        case 0x3575ecu: goto label_3575ec;
        case 0x3575f0u: goto label_3575f0;
        case 0x3575f4u: goto label_3575f4;
        case 0x3575f8u: goto label_3575f8;
        case 0x3575fcu: goto label_3575fc;
        case 0x357600u: goto label_357600;
        case 0x357604u: goto label_357604;
        case 0x357608u: goto label_357608;
        case 0x35760cu: goto label_35760c;
        case 0x357610u: goto label_357610;
        case 0x357614u: goto label_357614;
        case 0x357618u: goto label_357618;
        case 0x35761cu: goto label_35761c;
        case 0x357620u: goto label_357620;
        case 0x357624u: goto label_357624;
        case 0x357628u: goto label_357628;
        case 0x35762cu: goto label_35762c;
        case 0x357630u: goto label_357630;
        case 0x357634u: goto label_357634;
        case 0x357638u: goto label_357638;
        case 0x35763cu: goto label_35763c;
        case 0x357640u: goto label_357640;
        case 0x357644u: goto label_357644;
        case 0x357648u: goto label_357648;
        case 0x35764cu: goto label_35764c;
        case 0x357650u: goto label_357650;
        case 0x357654u: goto label_357654;
        case 0x357658u: goto label_357658;
        case 0x35765cu: goto label_35765c;
        case 0x357660u: goto label_357660;
        case 0x357664u: goto label_357664;
        case 0x357668u: goto label_357668;
        case 0x35766cu: goto label_35766c;
        case 0x357670u: goto label_357670;
        case 0x357674u: goto label_357674;
        case 0x357678u: goto label_357678;
        case 0x35767cu: goto label_35767c;
        case 0x357680u: goto label_357680;
        case 0x357684u: goto label_357684;
        case 0x357688u: goto label_357688;
        case 0x35768cu: goto label_35768c;
        case 0x357690u: goto label_357690;
        case 0x357694u: goto label_357694;
        default: break;
    }

    ctx->pc = 0x357428u;

label_357428:
    // 0x357428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x357428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_35742c:
    // 0x35742c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35742cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_357430:
    // 0x357430: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x357430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_357434:
    // 0x357434: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x357434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_357438:
    // 0x357438: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x357438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_35743c:
    // 0x35743c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35743cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357440:
    // 0x357440: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x357440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_357444:
    // 0x357444: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x357444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357448:
    // 0x357448: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x357448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_35744c:
    // 0x35744c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x35744cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_357450:
    // 0x357450: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x357450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_357454:
    // 0x357454: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x357454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_357458:
    // 0x357458: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x357458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_35745c:
    // 0x35745c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_357460:
    if (ctx->pc == 0x357460u) {
        ctx->pc = 0x357460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35745Cu;
        // 0x357460: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357464u;
        goto label_357464;
    }
    ctx->pc = 0x35745Cu;
    {
        const bool branch_taken_0x35745c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35745Cu;
        // 0x357460: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35745c) {
            ctx->pc = 0x357488u;
            goto label_357488;
        }
    }
    ctx->pc = 0x357464u;
label_357464:
    // 0x357464: 0xc0bf280  jal         func_2FCA00
label_357468:
    if (ctx->pc == 0x357468u) {
        ctx->pc = 0x357468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357464u;
        // 0x357468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35746Cu;
        goto label_35746c;
    }
    ctx->pc = 0x357464u;
    SET_GPR_U32(ctx, 31, 0x35746Cu);
    ctx->pc = 0x357468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357464u;
    // 0x357468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCA00u, 0x357464u, 0x35746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35746Cu;
label_35746c:
    // 0x35746c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_357470:
    if (ctx->pc == 0x357470u) {
        ctx->pc = 0x357474u;
        goto label_357474;
    }
    ctx->pc = 0x35746Cu;
    {
        const bool branch_taken_0x35746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35746c) {
            ctx->pc = 0x357488u;
            goto label_357488;
        }
    }
    ctx->pc = 0x357474u;
label_357474:
    // 0x357474: 0x8e1011e8  lw          $s0, 0x11E8($s0)
    ctx->pc = 0x357474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_357478:
    // 0x357478: 0xc0d5c30  jal         func_3570C0
label_35747c:
    if (ctx->pc == 0x35747Cu) {
        ctx->pc = 0x35747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357478u;
        // 0x35747c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357480u;
        goto label_357480;
    }
    ctx->pc = 0x357478u;
    SET_GPR_U32(ctx, 31, 0x357480u);
    ctx->pc = 0x35747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357478u;
    // 0x35747c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x357478u, 0x357480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357480u;
label_357480:
    // 0x357480: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x357480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_357484:
    // 0x357484: 0x2e150001  sltiu       $s5, $s0, 0x1
    ctx->pc = 0x357484u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_357488:
    // 0x357488: 0xc081d36  jal         func_2074D8
label_35748c:
    if (ctx->pc == 0x35748Cu) {
        ctx->pc = 0x35748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357488u;
        // 0x35748c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357490u;
        goto label_357490;
    }
    ctx->pc = 0x357488u;
    SET_GPR_U32(ctx, 31, 0x357490u);
    ctx->pc = 0x35748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357488u;
    // 0x35748c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x357488u, 0x357490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357490u;
label_357490:
    // 0x357490: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x357490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357494:
    // 0x357494: 0xc0d5c30  jal         func_3570C0
label_357498:
    if (ctx->pc == 0x357498u) {
        ctx->pc = 0x357498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357494u;
        // 0x357498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35749Cu;
        goto label_35749c;
    }
    ctx->pc = 0x357494u;
    SET_GPR_U32(ctx, 31, 0x35749Cu);
    ctx->pc = 0x357498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357494u;
    // 0x357498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x357494u, 0x35749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35749Cu;
label_35749c:
    // 0x35749c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35749cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3574a0:
    // 0x3574a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3574a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3574a4:
    // 0x3574a4: 0xc082452  jal         func_209148
label_3574a8:
    if (ctx->pc == 0x3574A8u) {
        ctx->pc = 0x3574A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574A4u;
        // 0x3574a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574ACu;
        goto label_3574ac;
    }
    ctx->pc = 0x3574A4u;
    SET_GPR_U32(ctx, 31, 0x3574ACu);
    ctx->pc = 0x3574A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574A4u;
    // 0x3574a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209148u, 0x3574A4u, 0x3574ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3574ACu;
label_3574ac:
    // 0x3574ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3574acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3574b0:
    // 0x3574b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3574b4:
    if (ctx->pc == 0x3574B4u) {
        ctx->pc = 0x3574B8u;
        goto label_3574b8;
    }
    ctx->pc = 0x3574B0u;
    {
        const bool branch_taken_0x3574b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574b0) {
            ctx->pc = 0x3574D8u;
            goto label_3574d8;
        }
    }
    ctx->pc = 0x3574B8u;
label_3574b8:
    // 0x3574b8: 0xc081a5e  jal         func_206978
label_3574bc:
    if (ctx->pc == 0x3574BCu) {
        ctx->pc = 0x3574BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574B8u;
        // 0x3574bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574C0u;
        goto label_3574c0;
    }
    ctx->pc = 0x3574B8u;
    SET_GPR_U32(ctx, 31, 0x3574C0u);
    ctx->pc = 0x3574BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574B8u;
    // 0x3574bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206978u, 0x3574B8u, 0x3574C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3574C0u;
label_3574c0:
    // 0x3574c0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3574c4:
    if (ctx->pc == 0x3574C4u) {
        ctx->pc = 0x3574C8u;
        goto label_3574c8;
    }
    ctx->pc = 0x3574C0u;
    {
        const bool branch_taken_0x3574c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574c0) {
            ctx->pc = 0x35754Cu;
            goto label_35754c;
        }
    }
    ctx->pc = 0x3574C8u;
label_3574c8:
    // 0x3574c8: 0xc081a3c  jal         func_2068F0
label_3574cc:
    if (ctx->pc == 0x3574CCu) {
        ctx->pc = 0x3574CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574C8u;
        // 0x3574cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574D0u;
        goto label_3574d0;
    }
    ctx->pc = 0x3574C8u;
    SET_GPR_U32(ctx, 31, 0x3574D0u);
    ctx->pc = 0x3574CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574C8u;
    // 0x3574cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2068F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2068F0u, 0x3574C8u, 0x3574D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3574D0u;
label_3574d0:
    // 0x3574d0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3574d4:
    if (ctx->pc == 0x3574D4u) {
        ctx->pc = 0x3574D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574D0u;
        // 0x3574d4: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574D8u;
        goto label_3574d8;
    }
    ctx->pc = 0x3574D0u;
    {
        const bool branch_taken_0x3574d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3574D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574D0u;
        // 0x3574d4: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574d0) {
            ctx->pc = 0x35754Cu;
            goto label_35754c;
        }
    }
    ctx->pc = 0x3574D8u;
label_3574d8:
    // 0x3574d8: 0xc0d5c30  jal         func_3570C0
label_3574dc:
    if (ctx->pc == 0x3574DCu) {
        ctx->pc = 0x3574DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574D8u;
        // 0x3574dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574E0u;
        goto label_3574e0;
    }
    ctx->pc = 0x3574D8u;
    SET_GPR_U32(ctx, 31, 0x3574E0u);
    ctx->pc = 0x3574DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574D8u;
    // 0x3574dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x3574D8u, 0x3574E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3574E0u;
label_3574e0:
    // 0x3574e0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x3574e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3574e4:
    // 0x3574e4: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x3574e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_3574e8:
    // 0x3574e8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_3574ec:
    if (ctx->pc == 0x3574ECu) {
        ctx->pc = 0x3574F0u;
        goto label_3574f0;
    }
    ctx->pc = 0x3574E8u;
    {
        const bool branch_taken_0x3574e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3574e8) {
            ctx->pc = 0x35754Cu;
            goto label_35754c;
        }
    }
    ctx->pc = 0x3574F0u;
label_3574f0:
    // 0x3574f0: 0xc0d5c30  jal         func_3570C0
label_3574f4:
    if (ctx->pc == 0x3574F4u) {
        ctx->pc = 0x3574F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574F0u;
        // 0x3574f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3574F8u;
        goto label_3574f8;
    }
    ctx->pc = 0x3574F0u;
    SET_GPR_U32(ctx, 31, 0x3574F8u);
    ctx->pc = 0x3574F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574F0u;
    // 0x3574f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x3574F0u, 0x3574F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3574F8u;
label_3574f8:
    // 0x3574f8: 0xc08fcf0  jal         func_23F3C0
label_3574fc:
    if (ctx->pc == 0x3574FCu) {
        ctx->pc = 0x3574FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574F8u;
        // 0x3574fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357500u;
        goto label_357500;
    }
    ctx->pc = 0x3574F8u;
    SET_GPR_U32(ctx, 31, 0x357500u);
    ctx->pc = 0x3574FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574F8u;
    // 0x3574fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x3574F8u, 0x357500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357500u;
label_357500:
    // 0x357500: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x357500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357504:
    // 0x357504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x357504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_357508:
    // 0x357508: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_35750c:
    if (ctx->pc == 0x35750Cu) {
        ctx->pc = 0x35750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357508u;
        // 0x35750c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357510u;
        goto label_357510;
    }
    ctx->pc = 0x357508u;
    {
        const bool branch_taken_0x357508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357508u;
        // 0x35750c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357508) {
            ctx->pc = 0x357518u;
            goto label_357518;
        }
    }
    ctx->pc = 0x357510u;
label_357510:
    // 0x357510: 0x10000003  b           . + 4 + (0x3 << 2)
label_357514:
    if (ctx->pc == 0x357514u) {
        ctx->pc = 0x357514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357510u;
        // 0x357514: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357518u;
        goto label_357518;
    }
    ctx->pc = 0x357510u;
    {
        const bool branch_taken_0x357510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357510u;
        // 0x357514: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357510) {
            ctx->pc = 0x357520u;
            goto label_357520;
        }
    }
    ctx->pc = 0x357518u;
label_357518:
    // 0x357518: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x357518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_35751c:
    // 0x35751c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x35751cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_357520:
    // 0x357520: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_357524:
    if (ctx->pc == 0x357524u) {
        ctx->pc = 0x357524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357520u;
        // 0x357524: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357528u;
        goto label_357528;
    }
    ctx->pc = 0x357520u;
    {
        const bool branch_taken_0x357520 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x357524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357520u;
        // 0x357524: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357520) {
            ctx->pc = 0x35754Cu;
            goto label_35754c;
        }
    }
    ctx->pc = 0x357528u;
label_357528:
    // 0x357528: 0xc08153c  jal         func_2054F0
label_35752c:
    if (ctx->pc == 0x35752Cu) {
        ctx->pc = 0x35752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357528u;
        // 0x35752c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357530u;
        goto label_357530;
    }
    ctx->pc = 0x357528u;
    SET_GPR_U32(ctx, 31, 0x357530u);
    ctx->pc = 0x35752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357528u;
    // 0x35752c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2054F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054F0u, 0x357528u, 0x357530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357530u;
label_357530:
    // 0x357530: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_357534:
    if (ctx->pc == 0x357534u) {
        ctx->pc = 0x357538u;
        goto label_357538;
    }
    ctx->pc = 0x357530u;
    {
        const bool branch_taken_0x357530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357530) {
            ctx->pc = 0x35754Cu;
            goto label_35754c;
        }
    }
    ctx->pc = 0x357538u;
label_357538:
    // 0x357538: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x357538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_35753c:
    // 0x35753c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x35753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_357540:
    // 0x357540: 0x40f809  jalr        $v0
label_357544:
    if (ctx->pc == 0x357544u) {
        ctx->pc = 0x357544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357540u;
        // 0x357544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357548u;
        goto label_357548;
    }
    ctx->pc = 0x357540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357548u);
        ctx->pc = 0x357544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357540u;
        // 0x357544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357540u, 0x357548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357548u;
label_357548:
    // 0x357548: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x357548u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35754c:
    // 0x35754c: 0xc0d5c40  jal         func_357100
label_357550:
    if (ctx->pc == 0x357550u) {
        ctx->pc = 0x357550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35754Cu;
        // 0x357550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357554u;
        goto label_357554;
    }
    ctx->pc = 0x35754Cu;
    SET_GPR_U32(ctx, 31, 0x357554u);
    ctx->pc = 0x357550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35754Cu;
    // 0x357550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357100u, 0x35754Cu, 0x357554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357554u;
label_357554:
    // 0x357554: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_357558:
    if (ctx->pc == 0x357558u) {
        ctx->pc = 0x35755Cu;
        goto label_35755c;
    }
    ctx->pc = 0x357554u;
    {
        const bool branch_taken_0x357554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357554) {
            ctx->pc = 0x35758Cu;
            goto label_35758c;
        }
    }
    ctx->pc = 0x35755Cu;
label_35755c:
    // 0x35755c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_357560:
    if (ctx->pc == 0x357560u) {
        ctx->pc = 0x357564u;
        goto label_357564;
    }
    ctx->pc = 0x35755Cu;
    {
        const bool branch_taken_0x35755c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35755c) {
            ctx->pc = 0x35758Cu;
            goto label_35758c;
        }
    }
    ctx->pc = 0x357564u;
label_357564:
    // 0x357564: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
label_357568:
    if (ctx->pc == 0x357568u) {
        ctx->pc = 0x35756Cu;
        goto label_35756c;
    }
    ctx->pc = 0x357564u;
    {
        const bool branch_taken_0x357564 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x357564) {
            ctx->pc = 0x35758Cu;
            goto label_35758c;
        }
    }
    ctx->pc = 0x35756Cu;
label_35756c:
    // 0x35756c: 0xc0d5c42  jal         func_357108
label_357570:
    if (ctx->pc == 0x357570u) {
        ctx->pc = 0x357570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35756Cu;
        // 0x357570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357574u;
        goto label_357574;
    }
    ctx->pc = 0x35756Cu;
    SET_GPR_U32(ctx, 31, 0x357574u);
    ctx->pc = 0x357570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35756Cu;
    // 0x357570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357108u, 0x35756Cu, 0x357574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357574u;
label_357574:
    // 0x357574: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_357578:
    if (ctx->pc == 0x357578u) {
        ctx->pc = 0x35757Cu;
        goto label_35757c;
    }
    ctx->pc = 0x357574u;
    {
        const bool branch_taken_0x357574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357574) {
            ctx->pc = 0x35758Cu;
            goto label_35758c;
        }
    }
    ctx->pc = 0x35757Cu;
label_35757c:
    // 0x35757c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_357580:
    if (ctx->pc == 0x357580u) {
        ctx->pc = 0x357584u;
        goto label_357584;
    }
    ctx->pc = 0x35757Cu;
    {
        const bool branch_taken_0x35757c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35757c) {
            ctx->pc = 0x35758Cu;
            goto label_35758c;
        }
    }
    ctx->pc = 0x357584u;
label_357584:
    // 0x357584: 0xc08244e  jal         func_209138
label_357588:
    if (ctx->pc == 0x357588u) {
        ctx->pc = 0x357588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357584u;
        // 0x357588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35758Cu;
        goto label_35758c;
    }
    ctx->pc = 0x357584u;
    SET_GPR_U32(ctx, 31, 0x35758Cu);
    ctx->pc = 0x357588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357584u;
    // 0x357588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209138u, 0x357584u, 0x35758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35758Cu;
label_35758c:
    // 0x35758c: 0xc0d5c40  jal         func_357100
label_357590:
    if (ctx->pc == 0x357590u) {
        ctx->pc = 0x357590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35758Cu;
        // 0x357590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357594u;
        goto label_357594;
    }
    ctx->pc = 0x35758Cu;
    SET_GPR_U32(ctx, 31, 0x357594u);
    ctx->pc = 0x357590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35758Cu;
    // 0x357590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357100u, 0x35758Cu, 0x357594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357594u;
label_357594:
    // 0x357594: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_357598:
    if (ctx->pc == 0x357598u) {
        ctx->pc = 0x35759Cu;
        goto label_35759c;
    }
    ctx->pc = 0x357594u;
    {
        const bool branch_taken_0x357594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357594) {
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x35759Cu;
label_35759c:
    // 0x35759c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_3575a0:
    if (ctx->pc == 0x3575A0u) {
        ctx->pc = 0x3575A4u;
        goto label_3575a4;
    }
    ctx->pc = 0x35759Cu;
    {
        const bool branch_taken_0x35759c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35759c) {
            ctx->pc = 0x3575ACu;
            goto label_3575ac;
        }
    }
    ctx->pc = 0x3575A4u;
label_3575a4:
    // 0x3575a4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_3575a8:
    if (ctx->pc == 0x3575A8u) {
        ctx->pc = 0x3575ACu;
        goto label_3575ac;
    }
    ctx->pc = 0x3575A4u;
    {
        const bool branch_taken_0x3575a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575a4) {
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x3575ACu;
label_3575ac:
    // 0x3575ac: 0xc0d5cd0  jal         func_357340
label_3575b0:
    if (ctx->pc == 0x3575B0u) {
        ctx->pc = 0x3575B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575ACu;
        // 0x3575b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575B4u;
        goto label_3575b4;
    }
    ctx->pc = 0x3575ACu;
    SET_GPR_U32(ctx, 31, 0x3575B4u);
    ctx->pc = 0x3575B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575ACu;
    // 0x3575b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357340u, 0x3575ACu, 0x3575B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575B4u;
label_3575b4:
    // 0x3575b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3575b8:
    if (ctx->pc == 0x3575B8u) {
        ctx->pc = 0x3575BCu;
        goto label_3575bc;
    }
    ctx->pc = 0x3575B4u;
    {
        const bool branch_taken_0x3575b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575b4) {
            ctx->pc = 0x3575C4u;
            goto label_3575c4;
        }
    }
    ctx->pc = 0x3575BCu;
label_3575bc:
    // 0x3575bc: 0xc08244e  jal         func_209138
label_3575c0:
    if (ctx->pc == 0x3575C0u) {
        ctx->pc = 0x3575C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575BCu;
        // 0x3575c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575C4u;
        goto label_3575c4;
    }
    ctx->pc = 0x3575BCu;
    SET_GPR_U32(ctx, 31, 0x3575C4u);
    ctx->pc = 0x3575C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575BCu;
    // 0x3575c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209138u, 0x3575BCu, 0x3575C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575C4u;
label_3575c4:
    // 0x3575c4: 0xc0d5c40  jal         func_357100
label_3575c8:
    if (ctx->pc == 0x3575C8u) {
        ctx->pc = 0x3575C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575C4u;
        // 0x3575c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575CCu;
        goto label_3575cc;
    }
    ctx->pc = 0x3575C4u;
    SET_GPR_U32(ctx, 31, 0x3575CCu);
    ctx->pc = 0x3575C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575C4u;
    // 0x3575c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357100u, 0x3575C4u, 0x3575CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575CCu;
label_3575cc:
    // 0x3575cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3575d0:
    if (ctx->pc == 0x3575D0u) {
        ctx->pc = 0x3575D4u;
        goto label_3575d4;
    }
    ctx->pc = 0x3575CCu;
    {
        const bool branch_taken_0x3575cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575cc) {
            ctx->pc = 0x357638u;
            goto label_357638;
        }
    }
    ctx->pc = 0x3575D4u;
label_3575d4:
    // 0x3575d4: 0xc0d5c30  jal         func_3570C0
label_3575d8:
    if (ctx->pc == 0x3575D8u) {
        ctx->pc = 0x3575D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575D4u;
        // 0x3575d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575DCu;
        goto label_3575dc;
    }
    ctx->pc = 0x3575D4u;
    SET_GPR_U32(ctx, 31, 0x3575DCu);
    ctx->pc = 0x3575D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575D4u;
    // 0x3575d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x3575D4u, 0x3575DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575DCu;
label_3575dc:
    // 0x3575dc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x3575dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_3575e0:
    // 0x3575e0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3575e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3575e4:
    // 0x3575e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3575e8:
    if (ctx->pc == 0x3575E8u) {
        ctx->pc = 0x3575E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575E4u;
        // 0x3575e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575ECu;
        goto label_3575ec;
    }
    ctx->pc = 0x3575E4u;
    {
        const bool branch_taken_0x3575e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3575E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575E4u;
        // 0x3575e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575e4) {
            ctx->pc = 0x3575F8u;
            goto label_3575f8;
        }
    }
    ctx->pc = 0x3575ECu;
label_3575ec:
    // 0x3575ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3575ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3575f0:
    // 0x3575f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3575f4:
    if (ctx->pc == 0x3575F4u) {
        ctx->pc = 0x3575F8u;
        goto label_3575f8;
    }
    ctx->pc = 0x3575F0u;
    {
        const bool branch_taken_0x3575f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575f0) {
            ctx->pc = 0x3575FCu;
            goto label_3575fc;
        }
    }
    ctx->pc = 0x3575F8u;
label_3575f8:
    // 0x3575f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3575f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3575fc:
    // 0x3575fc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_357600:
    if (ctx->pc == 0x357600u) {
        ctx->pc = 0x357604u;
        goto label_357604;
    }
    ctx->pc = 0x3575FCu;
    {
        const bool branch_taken_0x3575fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575fc) {
            ctx->pc = 0x357638u;
            goto label_357638;
        }
    }
    ctx->pc = 0x357604u;
label_357604:
    // 0x357604: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_357608:
    if (ctx->pc == 0x357608u) {
        ctx->pc = 0x35760Cu;
        goto label_35760c;
    }
    ctx->pc = 0x357604u;
    {
        const bool branch_taken_0x357604 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x357604) {
            ctx->pc = 0x35761Cu;
            goto label_35761c;
        }
    }
    ctx->pc = 0x35760Cu;
label_35760c:
    // 0x35760c: 0xc081584  jal         func_205610
label_357610:
    if (ctx->pc == 0x357610u) {
        ctx->pc = 0x357610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35760Cu;
        // 0x357610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357614u;
        goto label_357614;
    }
    ctx->pc = 0x35760Cu;
    SET_GPR_U32(ctx, 31, 0x357614u);
    ctx->pc = 0x357610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35760Cu;
    // 0x357610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205610u, 0x35760Cu, 0x357614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357614u;
label_357614:
    // 0x357614: 0x10000006  b           . + 4 + (0x6 << 2)
label_357618:
    if (ctx->pc == 0x357618u) {
        ctx->pc = 0x357618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357614u;
        // 0x357618: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35761Cu;
        goto label_35761c;
    }
    ctx->pc = 0x357614u;
    {
        const bool branch_taken_0x357614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357614u;
        // 0x357618: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357614) {
            ctx->pc = 0x357630u;
            goto label_357630;
        }
    }
    ctx->pc = 0x35761Cu;
label_35761c:
    // 0x35761c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_357620:
    if (ctx->pc == 0x357620u) {
        ctx->pc = 0x357624u;
        goto label_357624;
    }
    ctx->pc = 0x35761Cu;
    {
        const bool branch_taken_0x35761c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35761c) {
            ctx->pc = 0x357630u;
            goto label_357630;
        }
    }
    ctx->pc = 0x357624u;
label_357624:
    // 0x357624: 0xc081a7e  jal         func_2069F8
label_357628:
    if (ctx->pc == 0x357628u) {
        ctx->pc = 0x357628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357624u;
        // 0x357628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35762Cu;
        goto label_35762c;
    }
    ctx->pc = 0x357624u;
    SET_GPR_U32(ctx, 31, 0x35762Cu);
    ctx->pc = 0x357628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357624u;
    // 0x357628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2069F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2069F8u, 0x357624u, 0x35762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35762Cu;
label_35762c:
    // 0x35762c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x35762cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_357630:
    // 0x357630: 0xc0d5da6  jal         func_357698
label_357634:
    if (ctx->pc == 0x357634u) {
        ctx->pc = 0x357634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357630u;
        // 0x357634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357638u;
        goto label_357638;
    }
    ctx->pc = 0x357630u;
    SET_GPR_U32(ctx, 31, 0x357638u);
    ctx->pc = 0x357634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357630u;
    // 0x357634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357698u, 0x357630u, 0x357638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357638u;
label_357638:
    // 0x357638: 0xc0d5ee2  jal         func_357B88
label_35763c:
    if (ctx->pc == 0x35763Cu) {
        ctx->pc = 0x35763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357638u;
        // 0x35763c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357640u;
        goto label_357640;
    }
    ctx->pc = 0x357638u;
    SET_GPR_U32(ctx, 31, 0x357640u);
    ctx->pc = 0x35763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357638u;
    // 0x35763c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357B88u, 0x357638u, 0x357640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357640u;
label_357640:
    // 0x357640: 0xc0d5c32  jal         func_3570C8
label_357644:
    if (ctx->pc == 0x357644u) {
        ctx->pc = 0x357644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357640u;
        // 0x357644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357648u;
        goto label_357648;
    }
    ctx->pc = 0x357640u;
    SET_GPR_U32(ctx, 31, 0x357648u);
    ctx->pc = 0x357644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357640u;
    // 0x357644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C8u, 0x357640u, 0x357648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357648u;
label_357648:
    // 0x357648: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_35764c:
    if (ctx->pc == 0x35764Cu) {
        ctx->pc = 0x35764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357648u;
        // 0x35764c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357650u;
        goto label_357650;
    }
    ctx->pc = 0x357648u;
    {
        const bool branch_taken_0x357648 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x35764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357648u;
        // 0x35764c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357648) {
            ctx->pc = 0x357670u;
            goto label_357670;
        }
    }
    ctx->pc = 0x357650u;
label_357650:
    // 0x357650: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_357654:
    if (ctx->pc == 0x357654u) {
        ctx->pc = 0x357654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357650u;
        // 0x357654: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357658u;
        goto label_357658;
    }
    ctx->pc = 0x357650u;
    {
        const bool branch_taken_0x357650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357650u;
        // 0x357654: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357650) {
            ctx->pc = 0x357670u;
            goto label_357670;
        }
    }
    ctx->pc = 0x357658u;
label_357658:
    // 0x357658: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x357658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_35765c:
    // 0x35765c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_357660:
    if (ctx->pc == 0x357660u) {
        ctx->pc = 0x357660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35765Cu;
        // 0x357660: 0xc44c2b30  lwc1        $f12, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x357664u;
        goto label_357664;
    }
    ctx->pc = 0x35765Cu;
    {
        const bool branch_taken_0x35765c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x357660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35765Cu;
        // 0x357660: 0xc44c2b30  lwc1        $f12, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35765c) {
            ctx->pc = 0x357670u;
            goto label_357670;
        }
    }
    ctx->pc = 0x357664u;
label_357664:
    // 0x357664: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x357664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_357668:
    // 0x357668: 0xc07466e  jal         func_1D19B8
label_35766c:
    if (ctx->pc == 0x35766Cu) {
        ctx->pc = 0x35766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357668u;
        // 0x35766c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357670u;
        goto label_357670;
    }
    ctx->pc = 0x357668u;
    SET_GPR_U32(ctx, 31, 0x357670u);
    ctx->pc = 0x35766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357668u;
    // 0x35766c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x357668u, 0x357670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357670u;
label_357670:
    // 0x357670: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x357670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357674:
    // 0x357674: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x357674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_357678:
    // 0x357678: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x357678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35767c:
    // 0x35767c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35767cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_357680:
    // 0x357680: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x357680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_357684:
    // 0x357684: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x357684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_357688:
    // 0x357688: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x357688u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35768c:
    // 0x35768c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x35768cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_357690:
    // 0x357690: 0x3e00008  jr          $ra
label_357694:
    if (ctx->pc == 0x357694u) {
        ctx->pc = 0x357694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357690u;
        // 0x357694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357698u;
        goto label_fallthrough_0x357690;
    }
    ctx->pc = 0x357690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357690u;
        // 0x357694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357690:
    ctx->pc = 0x357698u;
}
