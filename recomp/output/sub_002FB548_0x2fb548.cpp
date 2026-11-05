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

// Function: sub_002FB548
// Address: 0x2fb548 - 0x2fb9f8
void sub_002FB548_0x2fb548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB548_0x2fb548");
#endif

    switch (ctx->pc) {
        case 0x2fb548u: goto label_2fb548;
        case 0x2fb54cu: goto label_2fb54c;
        case 0x2fb550u: goto label_2fb550;
        case 0x2fb554u: goto label_2fb554;
        case 0x2fb558u: goto label_2fb558;
        case 0x2fb55cu: goto label_2fb55c;
        case 0x2fb560u: goto label_2fb560;
        case 0x2fb564u: goto label_2fb564;
        case 0x2fb568u: goto label_2fb568;
        case 0x2fb56cu: goto label_2fb56c;
        case 0x2fb570u: goto label_2fb570;
        case 0x2fb574u: goto label_2fb574;
        case 0x2fb578u: goto label_2fb578;
        case 0x2fb57cu: goto label_2fb57c;
        case 0x2fb580u: goto label_2fb580;
        case 0x2fb584u: goto label_2fb584;
        case 0x2fb588u: goto label_2fb588;
        case 0x2fb58cu: goto label_2fb58c;
        case 0x2fb590u: goto label_2fb590;
        case 0x2fb594u: goto label_2fb594;
        case 0x2fb598u: goto label_2fb598;
        case 0x2fb59cu: goto label_2fb59c;
        case 0x2fb5a0u: goto label_2fb5a0;
        case 0x2fb5a4u: goto label_2fb5a4;
        case 0x2fb5a8u: goto label_2fb5a8;
        case 0x2fb5acu: goto label_2fb5ac;
        case 0x2fb5b0u: goto label_2fb5b0;
        case 0x2fb5b4u: goto label_2fb5b4;
        case 0x2fb5b8u: goto label_2fb5b8;
        case 0x2fb5bcu: goto label_2fb5bc;
        case 0x2fb5c0u: goto label_2fb5c0;
        case 0x2fb5c4u: goto label_2fb5c4;
        case 0x2fb5c8u: goto label_2fb5c8;
        case 0x2fb5ccu: goto label_2fb5cc;
        case 0x2fb5d0u: goto label_2fb5d0;
        case 0x2fb5d4u: goto label_2fb5d4;
        case 0x2fb5d8u: goto label_2fb5d8;
        case 0x2fb5dcu: goto label_2fb5dc;
        case 0x2fb5e0u: goto label_2fb5e0;
        case 0x2fb5e4u: goto label_2fb5e4;
        case 0x2fb5e8u: goto label_2fb5e8;
        case 0x2fb5ecu: goto label_2fb5ec;
        case 0x2fb5f0u: goto label_2fb5f0;
        case 0x2fb5f4u: goto label_2fb5f4;
        case 0x2fb5f8u: goto label_2fb5f8;
        case 0x2fb5fcu: goto label_2fb5fc;
        case 0x2fb600u: goto label_2fb600;
        case 0x2fb604u: goto label_2fb604;
        case 0x2fb608u: goto label_2fb608;
        case 0x2fb60cu: goto label_2fb60c;
        case 0x2fb610u: goto label_2fb610;
        case 0x2fb614u: goto label_2fb614;
        case 0x2fb618u: goto label_2fb618;
        case 0x2fb61cu: goto label_2fb61c;
        case 0x2fb620u: goto label_2fb620;
        case 0x2fb624u: goto label_2fb624;
        case 0x2fb628u: goto label_2fb628;
        case 0x2fb62cu: goto label_2fb62c;
        case 0x2fb630u: goto label_2fb630;
        case 0x2fb634u: goto label_2fb634;
        case 0x2fb638u: goto label_2fb638;
        case 0x2fb63cu: goto label_2fb63c;
        case 0x2fb640u: goto label_2fb640;
        case 0x2fb644u: goto label_2fb644;
        case 0x2fb648u: goto label_2fb648;
        case 0x2fb64cu: goto label_2fb64c;
        case 0x2fb650u: goto label_2fb650;
        case 0x2fb654u: goto label_2fb654;
        case 0x2fb658u: goto label_2fb658;
        case 0x2fb65cu: goto label_2fb65c;
        case 0x2fb660u: goto label_2fb660;
        case 0x2fb664u: goto label_2fb664;
        case 0x2fb668u: goto label_2fb668;
        case 0x2fb66cu: goto label_2fb66c;
        case 0x2fb670u: goto label_2fb670;
        case 0x2fb674u: goto label_2fb674;
        case 0x2fb678u: goto label_2fb678;
        case 0x2fb67cu: goto label_2fb67c;
        case 0x2fb680u: goto label_2fb680;
        case 0x2fb684u: goto label_2fb684;
        case 0x2fb688u: goto label_2fb688;
        case 0x2fb68cu: goto label_2fb68c;
        case 0x2fb690u: goto label_2fb690;
        case 0x2fb694u: goto label_2fb694;
        case 0x2fb698u: goto label_2fb698;
        case 0x2fb69cu: goto label_2fb69c;
        case 0x2fb6a0u: goto label_2fb6a0;
        case 0x2fb6a4u: goto label_2fb6a4;
        case 0x2fb6a8u: goto label_2fb6a8;
        case 0x2fb6acu: goto label_2fb6ac;
        case 0x2fb6b0u: goto label_2fb6b0;
        case 0x2fb6b4u: goto label_2fb6b4;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb6bcu: goto label_2fb6bc;
        case 0x2fb6c0u: goto label_2fb6c0;
        case 0x2fb6c4u: goto label_2fb6c4;
        case 0x2fb6c8u: goto label_2fb6c8;
        case 0x2fb6ccu: goto label_2fb6cc;
        case 0x2fb6d0u: goto label_2fb6d0;
        case 0x2fb6d4u: goto label_2fb6d4;
        case 0x2fb6d8u: goto label_2fb6d8;
        case 0x2fb6dcu: goto label_2fb6dc;
        case 0x2fb6e0u: goto label_2fb6e0;
        case 0x2fb6e4u: goto label_2fb6e4;
        case 0x2fb6e8u: goto label_2fb6e8;
        case 0x2fb6ecu: goto label_2fb6ec;
        case 0x2fb6f0u: goto label_2fb6f0;
        case 0x2fb6f4u: goto label_2fb6f4;
        case 0x2fb6f8u: goto label_2fb6f8;
        case 0x2fb6fcu: goto label_2fb6fc;
        case 0x2fb700u: goto label_2fb700;
        case 0x2fb704u: goto label_2fb704;
        case 0x2fb708u: goto label_2fb708;
        case 0x2fb70cu: goto label_2fb70c;
        case 0x2fb710u: goto label_2fb710;
        case 0x2fb714u: goto label_2fb714;
        case 0x2fb718u: goto label_2fb718;
        case 0x2fb71cu: goto label_2fb71c;
        case 0x2fb720u: goto label_2fb720;
        case 0x2fb724u: goto label_2fb724;
        case 0x2fb728u: goto label_2fb728;
        case 0x2fb72cu: goto label_2fb72c;
        case 0x2fb730u: goto label_2fb730;
        case 0x2fb734u: goto label_2fb734;
        case 0x2fb738u: goto label_2fb738;
        case 0x2fb73cu: goto label_2fb73c;
        case 0x2fb740u: goto label_2fb740;
        case 0x2fb744u: goto label_2fb744;
        case 0x2fb748u: goto label_2fb748;
        case 0x2fb74cu: goto label_2fb74c;
        case 0x2fb750u: goto label_2fb750;
        case 0x2fb754u: goto label_2fb754;
        case 0x2fb758u: goto label_2fb758;
        case 0x2fb75cu: goto label_2fb75c;
        case 0x2fb760u: goto label_2fb760;
        case 0x2fb764u: goto label_2fb764;
        case 0x2fb768u: goto label_2fb768;
        case 0x2fb76cu: goto label_2fb76c;
        case 0x2fb770u: goto label_2fb770;
        case 0x2fb774u: goto label_2fb774;
        case 0x2fb778u: goto label_2fb778;
        case 0x2fb77cu: goto label_2fb77c;
        case 0x2fb780u: goto label_2fb780;
        case 0x2fb784u: goto label_2fb784;
        case 0x2fb788u: goto label_2fb788;
        case 0x2fb78cu: goto label_2fb78c;
        case 0x2fb790u: goto label_2fb790;
        case 0x2fb794u: goto label_2fb794;
        case 0x2fb798u: goto label_2fb798;
        case 0x2fb79cu: goto label_2fb79c;
        case 0x2fb7a0u: goto label_2fb7a0;
        case 0x2fb7a4u: goto label_2fb7a4;
        case 0x2fb7a8u: goto label_2fb7a8;
        case 0x2fb7acu: goto label_2fb7ac;
        case 0x2fb7b0u: goto label_2fb7b0;
        case 0x2fb7b4u: goto label_2fb7b4;
        case 0x2fb7b8u: goto label_2fb7b8;
        case 0x2fb7bcu: goto label_2fb7bc;
        case 0x2fb7c0u: goto label_2fb7c0;
        case 0x2fb7c4u: goto label_2fb7c4;
        case 0x2fb7c8u: goto label_2fb7c8;
        case 0x2fb7ccu: goto label_2fb7cc;
        case 0x2fb7d0u: goto label_2fb7d0;
        case 0x2fb7d4u: goto label_2fb7d4;
        case 0x2fb7d8u: goto label_2fb7d8;
        case 0x2fb7dcu: goto label_2fb7dc;
        case 0x2fb7e0u: goto label_2fb7e0;
        case 0x2fb7e4u: goto label_2fb7e4;
        case 0x2fb7e8u: goto label_2fb7e8;
        case 0x2fb7ecu: goto label_2fb7ec;
        case 0x2fb7f0u: goto label_2fb7f0;
        case 0x2fb7f4u: goto label_2fb7f4;
        case 0x2fb7f8u: goto label_2fb7f8;
        case 0x2fb7fcu: goto label_2fb7fc;
        case 0x2fb800u: goto label_2fb800;
        case 0x2fb804u: goto label_2fb804;
        case 0x2fb808u: goto label_2fb808;
        case 0x2fb80cu: goto label_2fb80c;
        case 0x2fb810u: goto label_2fb810;
        case 0x2fb814u: goto label_2fb814;
        case 0x2fb818u: goto label_2fb818;
        case 0x2fb81cu: goto label_2fb81c;
        case 0x2fb820u: goto label_2fb820;
        case 0x2fb824u: goto label_2fb824;
        case 0x2fb828u: goto label_2fb828;
        case 0x2fb82cu: goto label_2fb82c;
        case 0x2fb830u: goto label_2fb830;
        case 0x2fb834u: goto label_2fb834;
        case 0x2fb838u: goto label_2fb838;
        case 0x2fb83cu: goto label_2fb83c;
        case 0x2fb840u: goto label_2fb840;
        case 0x2fb844u: goto label_2fb844;
        case 0x2fb848u: goto label_2fb848;
        case 0x2fb84cu: goto label_2fb84c;
        case 0x2fb850u: goto label_2fb850;
        case 0x2fb854u: goto label_2fb854;
        case 0x2fb858u: goto label_2fb858;
        case 0x2fb85cu: goto label_2fb85c;
        case 0x2fb860u: goto label_2fb860;
        case 0x2fb864u: goto label_2fb864;
        case 0x2fb868u: goto label_2fb868;
        case 0x2fb86cu: goto label_2fb86c;
        case 0x2fb870u: goto label_2fb870;
        case 0x2fb874u: goto label_2fb874;
        case 0x2fb878u: goto label_2fb878;
        case 0x2fb87cu: goto label_2fb87c;
        case 0x2fb880u: goto label_2fb880;
        case 0x2fb884u: goto label_2fb884;
        case 0x2fb888u: goto label_2fb888;
        case 0x2fb88cu: goto label_2fb88c;
        case 0x2fb890u: goto label_2fb890;
        case 0x2fb894u: goto label_2fb894;
        case 0x2fb898u: goto label_2fb898;
        case 0x2fb89cu: goto label_2fb89c;
        case 0x2fb8a0u: goto label_2fb8a0;
        case 0x2fb8a4u: goto label_2fb8a4;
        case 0x2fb8a8u: goto label_2fb8a8;
        case 0x2fb8acu: goto label_2fb8ac;
        case 0x2fb8b0u: goto label_2fb8b0;
        case 0x2fb8b4u: goto label_2fb8b4;
        case 0x2fb8b8u: goto label_2fb8b8;
        case 0x2fb8bcu: goto label_2fb8bc;
        case 0x2fb8c0u: goto label_2fb8c0;
        case 0x2fb8c4u: goto label_2fb8c4;
        case 0x2fb8c8u: goto label_2fb8c8;
        case 0x2fb8ccu: goto label_2fb8cc;
        case 0x2fb8d0u: goto label_2fb8d0;
        case 0x2fb8d4u: goto label_2fb8d4;
        case 0x2fb8d8u: goto label_2fb8d8;
        case 0x2fb8dcu: goto label_2fb8dc;
        case 0x2fb8e0u: goto label_2fb8e0;
        case 0x2fb8e4u: goto label_2fb8e4;
        case 0x2fb8e8u: goto label_2fb8e8;
        case 0x2fb8ecu: goto label_2fb8ec;
        case 0x2fb8f0u: goto label_2fb8f0;
        case 0x2fb8f4u: goto label_2fb8f4;
        case 0x2fb8f8u: goto label_2fb8f8;
        case 0x2fb8fcu: goto label_2fb8fc;
        case 0x2fb900u: goto label_2fb900;
        case 0x2fb904u: goto label_2fb904;
        case 0x2fb908u: goto label_2fb908;
        case 0x2fb90cu: goto label_2fb90c;
        case 0x2fb910u: goto label_2fb910;
        case 0x2fb914u: goto label_2fb914;
        case 0x2fb918u: goto label_2fb918;
        case 0x2fb91cu: goto label_2fb91c;
        case 0x2fb920u: goto label_2fb920;
        case 0x2fb924u: goto label_2fb924;
        case 0x2fb928u: goto label_2fb928;
        case 0x2fb92cu: goto label_2fb92c;
        case 0x2fb930u: goto label_2fb930;
        case 0x2fb934u: goto label_2fb934;
        case 0x2fb938u: goto label_2fb938;
        case 0x2fb93cu: goto label_2fb93c;
        case 0x2fb940u: goto label_2fb940;
        case 0x2fb944u: goto label_2fb944;
        case 0x2fb948u: goto label_2fb948;
        case 0x2fb94cu: goto label_2fb94c;
        case 0x2fb950u: goto label_2fb950;
        case 0x2fb954u: goto label_2fb954;
        case 0x2fb958u: goto label_2fb958;
        case 0x2fb95cu: goto label_2fb95c;
        case 0x2fb960u: goto label_2fb960;
        case 0x2fb964u: goto label_2fb964;
        case 0x2fb968u: goto label_2fb968;
        case 0x2fb96cu: goto label_2fb96c;
        case 0x2fb970u: goto label_2fb970;
        case 0x2fb974u: goto label_2fb974;
        case 0x2fb978u: goto label_2fb978;
        case 0x2fb97cu: goto label_2fb97c;
        case 0x2fb980u: goto label_2fb980;
        case 0x2fb984u: goto label_2fb984;
        case 0x2fb988u: goto label_2fb988;
        case 0x2fb98cu: goto label_2fb98c;
        case 0x2fb990u: goto label_2fb990;
        case 0x2fb994u: goto label_2fb994;
        case 0x2fb998u: goto label_2fb998;
        case 0x2fb99cu: goto label_2fb99c;
        case 0x2fb9a0u: goto label_2fb9a0;
        case 0x2fb9a4u: goto label_2fb9a4;
        case 0x2fb9a8u: goto label_2fb9a8;
        case 0x2fb9acu: goto label_2fb9ac;
        case 0x2fb9b0u: goto label_2fb9b0;
        case 0x2fb9b4u: goto label_2fb9b4;
        case 0x2fb9b8u: goto label_2fb9b8;
        case 0x2fb9bcu: goto label_2fb9bc;
        case 0x2fb9c0u: goto label_2fb9c0;
        case 0x2fb9c4u: goto label_2fb9c4;
        case 0x2fb9c8u: goto label_2fb9c8;
        case 0x2fb9ccu: goto label_2fb9cc;
        case 0x2fb9d0u: goto label_2fb9d0;
        case 0x2fb9d4u: goto label_2fb9d4;
        case 0x2fb9d8u: goto label_2fb9d8;
        case 0x2fb9dcu: goto label_2fb9dc;
        case 0x2fb9e0u: goto label_2fb9e0;
        case 0x2fb9e4u: goto label_2fb9e4;
        case 0x2fb9e8u: goto label_2fb9e8;
        case 0x2fb9ecu: goto label_2fb9ec;
        case 0x2fb9f0u: goto label_2fb9f0;
        case 0x2fb9f4u: goto label_2fb9f4;
        default: break;
    }

    ctx->pc = 0x2fb548u;

label_2fb548:
    // 0x2fb548: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2fb548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_2fb54c:
    // 0x2fb54c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fb54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fb550:
    // 0x2fb550: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2fb550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
label_2fb554:
    // 0x2fb554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb558:
    // 0x2fb558: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2fb558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
label_2fb55c:
    // 0x2fb55c: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2fb55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
label_2fb560:
    // 0x2fb560: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2fb560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
label_2fb564:
    // 0x2fb564: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2fb564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
label_2fb568:
    // 0x2fb568: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2fb568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
label_2fb56c:
    // 0x2fb56c: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2fb56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
label_2fb570:
    // 0x2fb570: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x2fb570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
label_2fb574:
    // 0x2fb574: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2fb574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
label_2fb578:
    // 0x2fb578: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x2fb578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
label_2fb57c:
    // 0x2fb57c: 0xc0bfbbc  jal         func_2FEEF0
label_2fb580:
    if (ctx->pc == 0x2FB580u) {
        ctx->pc = 0x2FB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB57Cu;
        // 0x2fb580: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB584u;
        goto label_2fb584;
    }
    ctx->pc = 0x2FB57Cu;
    SET_GPR_U32(ctx, 31, 0x2FB584u);
    ctx->pc = 0x2FB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB57Cu;
    // 0x2fb580: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEF0u, 0x2FB57Cu, 0x2FB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB584u;
label_2fb584:
    // 0x2fb584: 0x8e24136c  lw          $a0, 0x136C($s1)
    ctx->pc = 0x2fb584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4972)));
label_2fb588:
    // 0x2fb588: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_2fb58c:
    if (ctx->pc == 0x2FB58Cu) {
        ctx->pc = 0x2FB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB588u;
        // 0x2fb58c: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB590u;
        goto label_2fb590;
    }
    ctx->pc = 0x2FB588u;
    {
        const bool branch_taken_0x2fb588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB588u;
        // 0x2fb58c: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb588) {
            ctx->pc = 0x2FB60Cu;
            goto label_2fb60c;
        }
    }
    ctx->pc = 0x2FB590u;
label_2fb590:
    // 0x2fb590: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x2fb590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_2fb594:
    // 0x2fb594: 0x2445002e  addiu       $a1, $v0, 0x2E
    ctx->pc = 0x2fb594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
label_2fb598:
    // 0x2fb598: 0x54a30009  bnel        $a1, $v1, . + 4 + (0x9 << 2)
label_2fb59c:
    if (ctx->pc == 0x2FB59Cu) {
        ctx->pc = 0x2FB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB598u;
        // 0x2fb59c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5A0u;
        goto label_2fb5a0;
    }
    ctx->pc = 0x2FB598u;
    {
        const bool branch_taken_0x2fb598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb598) {
            ctx->pc = 0x2FB59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB598u;
            // 0x2fb59c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB5C0u;
            goto label_2fb5c0;
        }
    }
    ctx->pc = 0x2FB5A0u;
label_2fb5a0:
    // 0x2fb5a0: 0xc0837b4  jal         func_20DED0
label_2fb5a4:
    if (ctx->pc == 0x2FB5A4u) {
        ctx->pc = 0x2FB5A8u;
        goto label_2fb5a8;
    }
    ctx->pc = 0x2FB5A0u;
    SET_GPR_U32(ctx, 31, 0x2FB5A8u);
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x2FB5A0u, 0x2FB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5A8u;
label_2fb5a8:
    // 0x2fb5a8: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2fb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2fb5ac:
    // 0x2fb5ac: 0xac401100  sw          $zero, 0x1100($v0)
    ctx->pc = 0x2fb5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4352), GPR_U32(ctx, 0));
label_2fb5b0:
    // 0x2fb5b0: 0xc095e50  jal         func_257940
label_2fb5b4:
    if (ctx->pc == 0x2FB5B4u) {
        ctx->pc = 0x2FB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5B0u;
        // 0x2fb5b4: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5B8u;
        goto label_2fb5b8;
    }
    ctx->pc = 0x2FB5B0u;
    SET_GPR_U32(ctx, 31, 0x2FB5B8u);
    ctx->pc = 0x2FB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5B0u;
    // 0x2fb5b4: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x2FB5B0u, 0x2FB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5B8u;
label_2fb5b8:
    // 0x2fb5b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2fb5bc:
    if (ctx->pc == 0x2FB5BCu) {
        ctx->pc = 0x2FB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5B8u;
        // 0x2fb5bc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5C0u;
        goto label_2fb5c0;
    }
    ctx->pc = 0x2FB5B8u;
    {
        const bool branch_taken_0x2fb5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5B8u;
        // 0x2fb5bc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5b8) {
            ctx->pc = 0x2FB5FCu;
            goto label_2fb5fc;
        }
    }
    ctx->pc = 0x2FB5C0u;
label_2fb5c0:
    // 0x2fb5c0: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
label_2fb5c4:
    if (ctx->pc == 0x2FB5C4u) {
        ctx->pc = 0x2FB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5C0u;
        // 0x2fb5c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5C8u;
        goto label_2fb5c8;
    }
    ctx->pc = 0x2FB5C0u;
    {
        const bool branch_taken_0x2fb5c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5C0u;
        // 0x2fb5c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5c0) {
            ctx->pc = 0x2FB5FCu;
            goto label_2fb5fc;
        }
    }
    ctx->pc = 0x2FB5C8u;
label_2fb5c8:
    // 0x2fb5c8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2fb5cc:
    // 0x2fb5cc: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
label_2fb5d0:
    if (ctx->pc == 0x2FB5D0u) {
        ctx->pc = 0x2FB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5CCu;
        // 0x2fb5d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5D4u;
        goto label_2fb5d4;
    }
    ctx->pc = 0x2FB5CCu;
    {
        const bool branch_taken_0x2fb5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5CCu;
        // 0x2fb5d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5cc) {
            ctx->pc = 0x2FB5FCu;
            goto label_2fb5fc;
        }
    }
    ctx->pc = 0x2FB5D4u;
label_2fb5d4:
    // 0x2fb5d4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2fb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2fb5d8:
    // 0x2fb5d8: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_2fb5dc:
    if (ctx->pc == 0x2FB5DCu) {
        ctx->pc = 0x2FB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5D8u;
        // 0x2fb5dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5E0u;
        goto label_2fb5e0;
    }
    ctx->pc = 0x2FB5D8u;
    {
        const bool branch_taken_0x2fb5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5D8u;
        // 0x2fb5dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5d8) {
            ctx->pc = 0x2FB5FCu;
            goto label_2fb5fc;
        }
    }
    ctx->pc = 0x2FB5E0u;
label_2fb5e0:
    // 0x2fb5e0: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2fb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2fb5e4:
    // 0x2fb5e4: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
label_2fb5e8:
    if (ctx->pc == 0x2FB5E8u) {
        ctx->pc = 0x2FB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5E4u;
        // 0x2fb5e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB5ECu;
        goto label_2fb5ec;
    }
    ctx->pc = 0x2FB5E4u;
    {
        const bool branch_taken_0x2fb5e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fb5e4) {
            ctx->pc = 0x2FB5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB5E4u;
            // 0x2fb5e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB5FCu;
            goto label_2fb5fc;
        }
    }
    ctx->pc = 0x2FB5ECu;
label_2fb5ec:
    // 0x2fb5ec: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x2fb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2fb5f0:
    // 0x2fb5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb5f4:
    // 0x2fb5f4: 0xa0621104  sb          $v0, 0x1104($v1)
    ctx->pc = 0x2fb5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4356), (uint8_t)GPR_U32(ctx, 2));
label_2fb5f8:
    // 0x2fb5f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fb5fc:
    // 0x2fb5fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fb5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fb600:
    // 0x2fb600: 0x8c43b754  lw          $v1, -0x48AC($v0)
    ctx->pc = 0x2fb600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948692)));
label_2fb604:
    // 0x2fb604: 0xac83bdcc  sw          $v1, -0x4234($a0)
    ctx->pc = 0x2fb604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950348), GPR_U32(ctx, 3));
label_2fb608:
    // 0x2fb608: 0xae20136c  sw          $zero, 0x136C($s1)
    ctx->pc = 0x2fb608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4972), GPR_U32(ctx, 0));
label_2fb60c:
    // 0x2fb60c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2fb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2fb610:
    // 0x2fb610: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2fb610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2fb614:
    // 0x2fb614: 0xae2004f4  sw          $zero, 0x4F4($s1)
    ctx->pc = 0x2fb614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
label_2fb618:
    // 0x2fb618: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2fb618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2fb61c:
    // 0x2fb61c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fb61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fb620:
    // 0x2fb620: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x2fb620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_2fb624:
    // 0x2fb624: 0xc04951c  jal         func_125470
label_2fb628:
    if (ctx->pc == 0x2FB628u) {
        ctx->pc = 0x2FB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB624u;
        // 0x2fb628: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB62Cu;
        goto label_2fb62c;
    }
    ctx->pc = 0x2FB624u;
    SET_GPR_U32(ctx, 31, 0x2FB62Cu);
    ctx->pc = 0x2FB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB624u;
    // 0x2fb628: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125470u, 0x2FB624u, 0x2FB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB62Cu;
label_2fb62c:
    // 0x2fb62c: 0xc0899bc  jal         func_2266F0
label_2fb630:
    if (ctx->pc == 0x2FB630u) {
        ctx->pc = 0x2FB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB62Cu;
        // 0x2fb630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB634u;
        goto label_2fb634;
    }
    ctx->pc = 0x2FB62Cu;
    SET_GPR_U32(ctx, 31, 0x2FB634u);
    ctx->pc = 0x2FB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB62Cu;
    // 0x2fb630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FB62Cu, 0x2FB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB634u;
label_2fb634:
    // 0x2fb634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fb634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb638:
    // 0x2fb638: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2fb638u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fb63c:
    // 0x2fb63c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2fb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2fb640:
    // 0x2fb640: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2fb640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fb644:
    // 0x2fb644: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x2fb644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_2fb648:
    // 0x2fb648: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2fb648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fb64c:
    // 0x2fb64c: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2fb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2fb650:
    // 0x2fb650: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x2fb650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fb654:
    // 0x2fb654: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2fb654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_2fb658:
    // 0x2fb658: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x2fb658u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2fb65c:
    // 0x2fb65c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x2fb65cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2fb660:
    // 0x2fb660: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x2fb660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2fb664:
    // 0x2fb664: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2fb664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2fb668:
    // 0x2fb668: 0x262210d6  addiu       $v0, $s1, 0x10D6
    ctx->pc = 0x2fb668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4310));
label_2fb66c:
    // 0x2fb66c: 0x0  nop
    ctx->pc = 0x2fb66cu;
    // NOP
label_2fb670:
    // 0x2fb670: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2fb670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2fb674:
    // 0x2fb674: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fb674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2fb678:
    // 0x2fb678: 0x0  nop
    ctx->pc = 0x2fb678u;
    // NOP
label_2fb67c:
    // 0x2fb67c: 0x0  nop
    ctx->pc = 0x2fb67cu;
    // NOP
label_2fb680:
    // 0x2fb680: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_2fb684:
    if (ctx->pc == 0x2FB684u) {
        ctx->pc = 0x2FB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB680u;
        // 0x2fb684: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB688u;
        goto label_2fb688;
    }
    ctx->pc = 0x2FB680u;
    {
        const bool branch_taken_0x2fb680 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2FB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB680u;
        // 0x2fb684: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb680) {
            ctx->pc = 0x2FB670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb670;
        }
    }
    ctx->pc = 0x2FB688u;
label_2fb688:
    // 0x2fb688: 0xc089f68  jal         func_227DA0
label_2fb68c:
    if (ctx->pc == 0x2FB68Cu) {
        ctx->pc = 0x2FB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB688u;
        // 0x2fb68c: 0xae2010d8  sw          $zero, 0x10D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB690u;
        goto label_2fb690;
    }
    ctx->pc = 0x2FB688u;
    SET_GPR_U32(ctx, 31, 0x2FB690u);
    ctx->pc = 0x2FB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB688u;
    // 0x2fb68c: 0xae2010d8  sw          $zero, 0x10D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DA0u, 0x2FB688u, 0x2FB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB690u;
label_2fb690:
    // 0x2fb690: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2fb690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2fb694:
    // 0x2fb694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb698:
    // 0x2fb698: 0xc098fae  jal         func_263EB8
label_2fb69c:
    if (ctx->pc == 0x2FB69Cu) {
        ctx->pc = 0x2FB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB698u;
        // 0x2fb69c: 0x8c4501cc  lw          $a1, 0x1CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6A0u;
        goto label_2fb6a0;
    }
    ctx->pc = 0x2FB698u;
    SET_GPR_U32(ctx, 31, 0x2FB6A0u);
    ctx->pc = 0x2FB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB698u;
    // 0x2fb69c: 0x8c4501cc  lw          $a1, 0x1CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x2FB698u, 0x2FB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6A0u;
label_2fb6a0:
    // 0x2fb6a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2fb6a4:
    if (ctx->pc == 0x2FB6A4u) {
        ctx->pc = 0x2FB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6A0u;
        // 0x2fb6a4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6A8u;
        goto label_2fb6a8;
    }
    ctx->pc = 0x2FB6A0u;
    {
        const bool branch_taken_0x2fb6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb6a0) {
            ctx->pc = 0x2FB6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB6A0u;
            // 0x2fb6a4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB6BCu;
            goto label_2fb6bc;
        }
    }
    ctx->pc = 0x2FB6A8u;
label_2fb6a8:
    // 0x2fb6a8: 0xc098514  jal         func_261450
label_2fb6ac:
    if (ctx->pc == 0x2FB6ACu) {
        ctx->pc = 0x2FB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6A8u;
        // 0x2fb6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6B0u;
        goto label_2fb6b0;
    }
    ctx->pc = 0x2FB6A8u;
    SET_GPR_U32(ctx, 31, 0x2FB6B0u);
    ctx->pc = 0x2FB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6A8u;
    // 0x2fb6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x2FB6A8u, 0x2FB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6B0u;
label_2fb6b0:
    // 0x2fb6b0: 0xc098fec  jal         func_263FB0
label_2fb6b4:
    if (ctx->pc == 0x2FB6B4u) {
        ctx->pc = 0x2FB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6B0u;
        // 0x2fb6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6B8u;
        goto label_2fb6b8;
    }
    ctx->pc = 0x2FB6B0u;
    SET_GPR_U32(ctx, 31, 0x2FB6B8u);
    ctx->pc = 0x2FB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6B0u;
    // 0x2fb6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263FB0u, 0x2FB6B0u, 0x2FB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6B8u;
label_2fb6b8:
    // 0x2fb6b8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2fb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2fb6bc:
    // 0x2fb6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6c0:
    // 0x2fb6c0: 0xc62c11ec  lwc1        $f12, 0x11EC($s1)
    ctx->pc = 0x2fb6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fb6c4:
    // 0x2fb6c4: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2fb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2fb6c8:
    // 0x2fb6c8: 0x40f809  jalr        $v0
label_2fb6cc:
    if (ctx->pc == 0x2FB6CCu) {
        ctx->pc = 0x2FB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6C8u;
        // 0x2fb6cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6D0u;
        goto label_2fb6d0;
    }
    ctx->pc = 0x2FB6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB6D0u);
        ctx->pc = 0x2FB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6C8u;
        // 0x2fb6cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB6C8u, 0x2FB6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB6D0u;
label_2fb6d0:
    // 0x2fb6d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb6d4:
    // 0x2fb6d4: 0xc08e3b2  jal         func_238EC8
label_2fb6d8:
    if (ctx->pc == 0x2FB6D8u) {
        ctx->pc = 0x2FB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6D4u;
        // 0x2fb6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6DCu;
        goto label_2fb6dc;
    }
    ctx->pc = 0x2FB6D4u;
    SET_GPR_U32(ctx, 31, 0x2FB6DCu);
    ctx->pc = 0x2FB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6D4u;
    // 0x2fb6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x2FB6D4u, 0x2FB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6DCu;
label_2fb6dc:
    // 0x2fb6dc: 0xc0f6a96  jal         func_3DAA58
label_2fb6e0:
    if (ctx->pc == 0x2FB6E0u) {
        ctx->pc = 0x2FB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6DCu;
        // 0x2fb6e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6E4u;
        goto label_2fb6e4;
    }
    ctx->pc = 0x2FB6DCu;
    SET_GPR_U32(ctx, 31, 0x2FB6E4u);
    ctx->pc = 0x2FB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6DCu;
    // 0x2fb6e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FB6DCu, 0x2FB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6E4u;
label_2fb6e4:
    // 0x2fb6e4: 0xc0f6a96  jal         func_3DAA58
label_2fb6e8:
    if (ctx->pc == 0x2FB6E8u) {
        ctx->pc = 0x2FB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6E4u;
        // 0x2fb6e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6ECu;
        goto label_2fb6ec;
    }
    ctx->pc = 0x2FB6E4u;
    SET_GPR_U32(ctx, 31, 0x2FB6ECu);
    ctx->pc = 0x2FB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6E4u;
    // 0x2fb6e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FB6E4u, 0x2FB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6ECu;
label_2fb6ec:
    // 0x2fb6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6f0:
    // 0x2fb6f0: 0xc08a1f2  jal         func_2287C8
label_2fb6f4:
    if (ctx->pc == 0x2FB6F4u) {
        ctx->pc = 0x2FB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6F0u;
        // 0x2fb6f4: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6F8u;
        goto label_2fb6f8;
    }
    ctx->pc = 0x2FB6F0u;
    SET_GPR_U32(ctx, 31, 0x2FB6F8u);
    ctx->pc = 0x2FB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6F0u;
    // 0x2fb6f4: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2FB6F0u, 0x2FB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6F8u;
label_2fb6f8:
    // 0x2fb6f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fb6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6fc:
    // 0x2fb6fc: 0xc0f70ce  jal         func_3DC338
label_2fb700:
    if (ctx->pc == 0x2FB700u) {
        ctx->pc = 0x2FB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6FCu;
        // 0x2fb700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB704u;
        goto label_2fb704;
    }
    ctx->pc = 0x2FB6FCu;
    SET_GPR_U32(ctx, 31, 0x2FB704u);
    ctx->pc = 0x2FB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6FCu;
    // 0x2fb700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2FB6FCu, 0x2FB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB704u;
label_2fb704:
    // 0x2fb704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2fb708:
    if (ctx->pc == 0x2FB708u) {
        ctx->pc = 0x2FB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB704u;
        // 0x2fb708: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB70Cu;
        goto label_2fb70c;
    }
    ctx->pc = 0x2FB704u;
    {
        const bool branch_taken_0x2fb704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB704u;
        // 0x2fb708: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb704) {
            ctx->pc = 0x2FB718u;
            goto label_2fb718;
        }
    }
    ctx->pc = 0x2FB70Cu;
label_2fb70c:
    // 0x2fb70c: 0xc0c4900  jal         func_312400
label_2fb710:
    if (ctx->pc == 0x2FB710u) {
        ctx->pc = 0x2FB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB70Cu;
        // 0x2fb710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB714u;
        goto label_2fb714;
    }
    ctx->pc = 0x2FB70Cu;
    SET_GPR_U32(ctx, 31, 0x2FB714u);
    ctx->pc = 0x2FB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB70Cu;
    // 0x2fb710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2FB70Cu, 0x2FB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB714u;
label_2fb714:
    // 0x2fb714: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2fb714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2fb718:
    // 0x2fb718: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb71c:
    // 0x2fb71c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fb71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb720:
    // 0x2fb720: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2fb720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2fb724:
    // 0x2fb724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fb724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fb728:
    // 0x2fb728: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2fb728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2fb72c:
    // 0x2fb72c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x2fb72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2fb730:
    // 0x2fb730: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2fb730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2fb734:
    // 0x2fb734: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2fb734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_2fb738:
    // 0x2fb738: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fb738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb73c:
    // 0x2fb73c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2fb73cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2fb740:
    // 0x2fb740: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fb740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fb744:
    // 0x2fb744: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fb744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb748:
    // 0x2fb748: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2fb748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb74c:
    // 0x2fb74c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2fb74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fb750:
    // 0x2fb750: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2fb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fb754:
    // 0x2fb754: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2fb754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fb758:
    // 0x2fb758: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2fb758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2fb75c:
    // 0x2fb75c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2fb75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2fb760:
    // 0x2fb760: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2fb760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2fb764:
    // 0x2fb764: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2fb764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2fb768:
    // 0x2fb768: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2fb768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2fb76c:
    // 0x2fb76c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fb76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb770:
    // 0x2fb770: 0xc07a8b2  jal         func_1EA2C8
label_2fb774:
    if (ctx->pc == 0x2FB774u) {
        ctx->pc = 0x2FB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB770u;
        // 0x2fb774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB778u;
        goto label_2fb778;
    }
    ctx->pc = 0x2FB770u;
    SET_GPR_U32(ctx, 31, 0x2FB778u);
    ctx->pc = 0x2FB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB770u;
    // 0x2fb774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2FB770u, 0x2FB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB778u;
label_2fb778:
    // 0x2fb778: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2fb778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2fb77c:
    // 0x2fb77c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2fb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2fb780:
    // 0x2fb780: 0xc4601c38  lwc1        $f0, 0x1C38($v1)
    ctx->pc = 0x2fb780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb784:
    // 0x2fb784: 0xc0f6a96  jal         func_3DAA58
label_2fb788:
    if (ctx->pc == 0x2FB788u) {
        ctx->pc = 0x2FB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB784u;
        // 0x2fb788: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB78Cu;
        goto label_2fb78c;
    }
    ctx->pc = 0x2FB784u;
    SET_GPR_U32(ctx, 31, 0x2FB78Cu);
    ctx->pc = 0x2FB788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB784u;
    // 0x2fb788: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FB784u, 0x2FB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB78Cu;
label_2fb78c:
    // 0x2fb78c: 0xc0f6a96  jal         func_3DAA58
label_2fb790:
    if (ctx->pc == 0x2FB790u) {
        ctx->pc = 0x2FB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB78Cu;
        // 0x2fb790: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB794u;
        goto label_2fb794;
    }
    ctx->pc = 0x2FB78Cu;
    SET_GPR_U32(ctx, 31, 0x2FB794u);
    ctx->pc = 0x2FB790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB78Cu;
    // 0x2fb790: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FB78Cu, 0x2FB794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB794u;
label_2fb794:
    // 0x2fb794: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fb794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb798:
    // 0x2fb798: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2fb798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb79c:
    // 0x2fb79c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2fb79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2fb7a0:
    // 0x2fb7a0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x2fb7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_2fb7a4:
    // 0x2fb7a4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2fb7a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2fb7a8:
    // 0x2fb7a8: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2fb7a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2fb7ac:
    // 0x2fb7ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fb7acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fb7b0:
    // 0x2fb7b0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x2fb7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb7b4:
    // 0x2fb7b4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2fb7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fb7b8:
    // 0x2fb7b8: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x2fb7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fb7bc:
    // 0x2fb7bc: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x2fb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2fb7c0:
    // 0x2fb7c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fb7c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2fb7c4:
    // 0x2fb7c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fb7c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2fb7c8:
    // 0x2fb7c8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2fb7c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2fb7cc:
    // 0x2fb7cc: 0x0  nop
    ctx->pc = 0x2fb7ccu;
    // NOP
label_2fb7d0:
    // 0x2fb7d0: 0x0  nop
    ctx->pc = 0x2fb7d0u;
    // NOP
label_2fb7d4:
    // 0x2fb7d4: 0x46010084  c1          0x10084
    ctx->pc = 0x2fb7d4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2fb7d8:
    // 0x2fb7d8: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x2fb7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2fb7dc:
    // 0x2fb7dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fb7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fb7e0:
    // 0x2fb7e0: 0x0  nop
    ctx->pc = 0x2fb7e0u;
    // NOP
label_2fb7e4:
    // 0x2fb7e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fb7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fb7e8:
    // 0x2fb7e8: 0x0  nop
    ctx->pc = 0x2fb7e8u;
    // NOP
label_2fb7ec:
    // 0x2fb7ec: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2fb7f0:
    if (ctx->pc == 0x2FB7F0u) {
        ctx->pc = 0x2FB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7ECu;
        // 0x2fb7f0: 0xe7a20100  swc1        $f2, 0x100($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB7F4u;
        goto label_2fb7f4;
    }
    ctx->pc = 0x2FB7ECu;
    {
        const bool branch_taken_0x2fb7ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7ECu;
        // 0x2fb7f0: 0xe7a20100  swc1        $f2, 0x100($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7ec) {
            ctx->pc = 0x2FB818u;
            goto label_2fb818;
        }
    }
    ctx->pc = 0x2FB7F4u;
label_2fb7f4:
    // 0x2fb7f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fb7f8:
    // 0x2fb7f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fb7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fb7fc:
    // 0x2fb7fc: 0x0  nop
    ctx->pc = 0x2fb7fcu;
    // NOP
label_2fb800:
    // 0x2fb800: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2fb800u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2fb804:
    // 0x2fb804: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fb804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2fb808:
    // 0x2fb808: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2fb808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2fb80c:
    // 0x2fb80c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fb80cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fb810:
    // 0x2fb810: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fb810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fb814:
    // 0x2fb814: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2fb814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb818:
    // 0x2fb818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb81c:
    // 0x2fb81c: 0xc076e46  jal         func_1DB918
label_2fb820:
    if (ctx->pc == 0x2FB820u) {
        ctx->pc = 0x2FB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB81Cu;
        // 0x2fb820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB824u;
        goto label_2fb824;
    }
    ctx->pc = 0x2FB81Cu;
    SET_GPR_U32(ctx, 31, 0x2FB824u);
    ctx->pc = 0x2FB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB81Cu;
    // 0x2fb820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2FB81Cu, 0x2FB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB824u;
label_2fb824:
    // 0x2fb824: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x2fb824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2fb828:
    // 0x2fb828: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2fb828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_2fb82c:
    // 0x2fb82c: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2fb82cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_2fb830:
    // 0x2fb830: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2fb830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_2fb834:
    // 0x2fb834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb838:
    // 0x2fb838: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2fb838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb83c:
    // 0x2fb83c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb840:
    // 0x2fb840: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2fb840u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb844:
    // 0x2fb844: 0xc077940  jal         func_1DE500
label_2fb848:
    if (ctx->pc == 0x2FB848u) {
        ctx->pc = 0x2FB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB844u;
        // 0x2fb848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB84Cu;
        goto label_2fb84c;
    }
    ctx->pc = 0x2FB844u;
    SET_GPR_U32(ctx, 31, 0x2FB84Cu);
    ctx->pc = 0x2FB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB844u;
    // 0x2fb848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2FB844u, 0x2FB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB84Cu;
label_2fb84c:
    // 0x2fb84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fb84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb850:
    // 0x2fb850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb854:
    // 0x2fb854: 0xc076e38  jal         func_1DB8E0
label_2fb858:
    if (ctx->pc == 0x2FB858u) {
        ctx->pc = 0x2FB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB854u;
        // 0x2fb858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB85Cu;
        goto label_2fb85c;
    }
    ctx->pc = 0x2FB854u;
    SET_GPR_U32(ctx, 31, 0x2FB85Cu);
    ctx->pc = 0x2FB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB854u;
    // 0x2fb858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2FB854u, 0x2FB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB85Cu;
label_2fb85c:
    // 0x2fb85c: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
label_2fb860:
    if (ctx->pc == 0x2FB860u) {
        ctx->pc = 0x2FB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB85Cu;
        // 0x2fb860: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB864u;
        goto label_2fb864;
    }
    ctx->pc = 0x2FB85Cu;
    {
        const bool branch_taken_0x2fb85c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb85c) {
            ctx->pc = 0x2FB860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB85Cu;
            // 0x2fb860: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB930u;
            goto label_2fb930;
        }
    }
    ctx->pc = 0x2FB864u;
label_2fb864:
    // 0x2fb864: 0xc0b1488  jal         func_2C5220
label_2fb868:
    if (ctx->pc == 0x2FB868u) {
        ctx->pc = 0x2FB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB864u;
        // 0x2fb868: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB86Cu;
        goto label_2fb86c;
    }
    ctx->pc = 0x2FB864u;
    SET_GPR_U32(ctx, 31, 0x2FB86Cu);
    ctx->pc = 0x2FB868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB864u;
    // 0x2fb868: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FB864u, 0x2FB86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB86Cu;
label_2fb86c:
    // 0x2fb86c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2fb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2fb870:
    // 0x2fb870: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fb870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb874:
    // 0x2fb874: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2fb874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2fb878:
    // 0x2fb878: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fb878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb87c:
    // 0x2fb87c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2fb87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb880:
    // 0x2fb880: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2fb880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2fb884:
    // 0x2fb884: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fb884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb888:
    // 0x2fb888: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x2fb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb88c:
    // 0x2fb88c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2fb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2fb890:
    // 0x2fb890: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fb890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fb894:
    // 0x2fb894: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x2fb894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb898:
    // 0x2fb898: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2fb898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2fb89c:
    // 0x2fb89c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fb89cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb8a0:
    // 0x2fb8a0: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2fb8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb8a4:
    // 0x2fb8a4: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x2fb8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2fb8a8:
    // 0x2fb8a8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2fb8a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2fb8ac:
    // 0x2fb8ac: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x2fb8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fb8b0:
    // 0x2fb8b0: 0x8e2511e8  lw          $a1, 0x11E8($s1)
    ctx->pc = 0x2fb8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2fb8b4:
    // 0x2fb8b4: 0xc076e46  jal         func_1DB918
label_2fb8b8:
    if (ctx->pc == 0x2FB8B8u) {
        ctx->pc = 0x2FB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8B4u;
        // 0x2fb8b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB8BCu;
        goto label_2fb8bc;
    }
    ctx->pc = 0x2FB8B4u;
    SET_GPR_U32(ctx, 31, 0x2FB8BCu);
    ctx->pc = 0x2FB8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8B4u;
    // 0x2fb8b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2FB8B4u, 0x2FB8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8BCu;
label_2fb8bc:
    // 0x2fb8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8c0:
    // 0x2fb8c0: 0xc08e0fa  jal         func_2383E8
label_2fb8c4:
    if (ctx->pc == 0x2FB8C4u) {
        ctx->pc = 0x2FB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8C0u;
        // 0x2fb8c4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB8C8u;
        goto label_2fb8c8;
    }
    ctx->pc = 0x2FB8C0u;
    SET_GPR_U32(ctx, 31, 0x2FB8C8u);
    ctx->pc = 0x2FB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8C0u;
    // 0x2fb8c4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x2FB8C0u, 0x2FB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8C8u;
label_2fb8c8:
    // 0x2fb8c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2fb8cc:
    if (ctx->pc == 0x2FB8CCu) {
        ctx->pc = 0x2FB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8C8u;
        // 0x2fb8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB8D0u;
        goto label_2fb8d0;
    }
    ctx->pc = 0x2FB8C8u;
    {
        const bool branch_taken_0x2fb8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8C8u;
        // 0x2fb8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8c8) {
            ctx->pc = 0x2FB8ECu;
            goto label_2fb8ec;
        }
    }
    ctx->pc = 0x2FB8D0u;
label_2fb8d0:
    // 0x2fb8d0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2fb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2fb8d4:
    // 0x2fb8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8d8:
    // 0x2fb8d8: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2fb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_2fb8dc:
    // 0x2fb8dc: 0x40f809  jalr        $v0
label_2fb8e0:
    if (ctx->pc == 0x2FB8E0u) {
        ctx->pc = 0x2FB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8DCu;
        // 0x2fb8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB8E4u;
        goto label_2fb8e4;
    }
    ctx->pc = 0x2FB8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB8E4u);
        ctx->pc = 0x2FB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8DCu;
        // 0x2fb8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB8DCu, 0x2FB8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB8E4u;
label_2fb8e4:
    // 0x2fb8e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2fb8e8:
    if (ctx->pc == 0x2FB8E8u) {
        ctx->pc = 0x2FB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8E4u;
        // 0x2fb8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB8ECu;
        goto label_2fb8ec;
    }
    ctx->pc = 0x2FB8E4u;
    {
        const bool branch_taken_0x2fb8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8E4u;
        // 0x2fb8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8e4) {
            ctx->pc = 0x2FB924u;
            goto label_2fb924;
        }
    }
    ctx->pc = 0x2FB8ECu;
label_2fb8ec:
    // 0x2fb8ec: 0x8e231368  lw          $v1, 0x1368($s1)
    ctx->pc = 0x2fb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4968)));
label_2fb8f0:
    // 0x2fb8f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fb8f4:
    // 0x2fb8f4: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_2fb8f8:
    if (ctx->pc == 0x2FB8F8u) {
        ctx->pc = 0x2FB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8F4u;
        // 0x2fb8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB8FCu;
        goto label_2fb8fc;
    }
    ctx->pc = 0x2FB8F4u;
    {
        const bool branch_taken_0x2fb8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fb8f4) {
            ctx->pc = 0x2FB8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB8F4u;
            // 0x2fb8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB924u;
            goto label_2fb924;
        }
    }
    ctx->pc = 0x2FB8FCu;
label_2fb8fc:
    // 0x2fb8fc: 0x8e2511e8  lw          $a1, 0x11E8($s1)
    ctx->pc = 0x2fb8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2fb900:
    // 0x2fb900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb904:
    // 0x2fb904: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2fb904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2fb908:
    // 0x2fb908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fb908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb90c:
    // 0x2fb90c: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x2fb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_2fb910:
    // 0x2fb910: 0x8c6701c0  lw          $a3, 0x1C0($v1)
    ctx->pc = 0x2fb910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_2fb914:
    // 0x2fb914: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fb914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb918:
    // 0x2fb918: 0xe0f809  jalr        $a3
label_2fb91c:
    if (ctx->pc == 0x2FB91Cu) {
        ctx->pc = 0x2FB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB918u;
        // 0x2fb91c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB920u;
        goto label_2fb920;
    }
    ctx->pc = 0x2FB918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2FB920u);
        ctx->pc = 0x2FB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB918u;
        // 0x2fb91c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB918u, 0x2FB920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB920u;
label_2fb920:
    // 0x2fb920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb924:
    // 0x2fb924: 0xc076e38  jal         func_1DB8E0
label_2fb928:
    if (ctx->pc == 0x2FB928u) {
        ctx->pc = 0x2FB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB924u;
        // 0x2fb928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB92Cu;
        goto label_2fb92c;
    }
    ctx->pc = 0x2FB924u;
    SET_GPR_U32(ctx, 31, 0x2FB92Cu);
    ctx->pc = 0x2FB928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB924u;
    // 0x2fb928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2FB924u, 0x2FB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB92Cu;
label_2fb92c:
    // 0x2fb92c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2fb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2fb930:
    // 0x2fb930: 0xc06a05e  jal         func_1A8178
label_2fb934:
    if (ctx->pc == 0x2FB934u) {
        ctx->pc = 0x2FB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB930u;
        // 0x2fb934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB938u;
        goto label_2fb938;
    }
    ctx->pc = 0x2FB930u;
    SET_GPR_U32(ctx, 31, 0x2FB938u);
    ctx->pc = 0x2FB934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB930u;
    // 0x2fb934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FB930u, 0x2FB938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB938u;
label_2fb938:
    // 0x2fb938: 0xc06a328  jal         func_1A8CA0
label_2fb93c:
    if (ctx->pc == 0x2FB93Cu) {
        ctx->pc = 0x2FB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB938u;
        // 0x2fb93c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB940u;
        goto label_2fb940;
    }
    ctx->pc = 0x2FB938u;
    SET_GPR_U32(ctx, 31, 0x2FB940u);
    ctx->pc = 0x2FB93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB938u;
    // 0x2fb93c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x2FB938u, 0x2FB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB940u;
label_2fb940:
    // 0x2fb940: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2fb940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2fb944:
    // 0x2fb944: 0xc0757d2  jal         func_1D5F48
label_2fb948:
    if (ctx->pc == 0x2FB948u) {
        ctx->pc = 0x2FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB944u;
        // 0x2fb948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB94Cu;
        goto label_2fb94c;
    }
    ctx->pc = 0x2FB944u;
    SET_GPR_U32(ctx, 31, 0x2FB94Cu);
    ctx->pc = 0x2FB948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB944u;
    // 0x2fb948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2FB944u, 0x2FB94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB94Cu;
label_2fb94c:
    // 0x2fb94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb950:
    // 0x2fb950: 0xc08961e  jal         func_225878
label_2fb954:
    if (ctx->pc == 0x2FB954u) {
        ctx->pc = 0x2FB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB950u;
        // 0x2fb954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB958u;
        goto label_2fb958;
    }
    ctx->pc = 0x2FB950u;
    SET_GPR_U32(ctx, 31, 0x2FB958u);
    ctx->pc = 0x2FB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB950u;
    // 0x2fb954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x2FB950u, 0x2FB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB958u;
label_2fb958:
    // 0x2fb958: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x2fb958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2fb95c:
    // 0x2fb95c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2fb95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fb960:
    // 0x2fb960: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x2fb960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb964:
    // 0x2fb964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fb964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fb968:
    // 0x2fb968: 0x0  nop
    ctx->pc = 0x2fb968u;
    // NOP
label_2fb96c:
    // 0x2fb96c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2fb970:
    if (ctx->pc == 0x2FB970u) {
        ctx->pc = 0x2FB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB96Cu;
        // 0x2fb970: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB974u;
        goto label_2fb974;
    }
    ctx->pc = 0x2FB96Cu;
    {
        const bool branch_taken_0x2fb96c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB96Cu;
        // 0x2fb970: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb96c) {
            ctx->pc = 0x2FB980u;
            goto label_2fb980;
        }
    }
    ctx->pc = 0x2FB974u;
label_2fb974:
    // 0x2fb974: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2fb974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2fb978:
    // 0x2fb978: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fb978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fb97c:
    // 0x2fb97c: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x2fb97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_2fb980:
    // 0x2fb980: 0xe62112b8  swc1        $f1, 0x12B8($s1)
    ctx->pc = 0x2fb980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4792), bits); }
label_2fb984:
    // 0x2fb984: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fb988:
    // 0x2fb988: 0xae2011e8  sw          $zero, 0x11E8($s1)
    ctx->pc = 0x2fb988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
label_2fb98c:
    // 0x2fb98c: 0xc0c7c5a  jal         func_31F168
label_2fb990:
    if (ctx->pc == 0x2FB990u) {
        ctx->pc = 0x2FB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB98Cu;
        // 0x2fb990: 0x8c44bd48  lw          $a0, -0x42B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB994u;
        goto label_2fb994;
    }
    ctx->pc = 0x2FB98Cu;
    SET_GPR_U32(ctx, 31, 0x2FB994u);
    ctx->pc = 0x2FB990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB98Cu;
    // 0x2fb990: 0x8c44bd48  lw          $a0, -0x42B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F168u, 0x2FB98Cu, 0x2FB994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB994u;
label_2fb994:
    // 0x2fb994: 0xae2011f4  sw          $zero, 0x11F4($s1)
    ctx->pc = 0x2fb994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4596), GPR_U32(ctx, 0));
label_2fb998:
    // 0x2fb998: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fb99c:
    // 0x2fb99c: 0xae2011f0  sw          $zero, 0x11F0($s1)
    ctx->pc = 0x2fb99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4592), GPR_U32(ctx, 0));
label_2fb9a0:
    // 0x2fb9a0: 0x8e251380  lw          $a1, 0x1380($s1)
    ctx->pc = 0x2fb9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4992)));
label_2fb9a4:
    // 0x2fb9a4: 0xc0b5bb8  jal         func_2D6EE0
label_2fb9a8:
    if (ctx->pc == 0x2FB9A8u) {
        ctx->pc = 0x2FB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9A4u;
        // 0x2fb9a8: 0x8c44bd30  lw          $a0, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB9ACu;
        goto label_2fb9ac;
    }
    ctx->pc = 0x2FB9A4u;
    SET_GPR_U32(ctx, 31, 0x2FB9ACu);
    ctx->pc = 0x2FB9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB9A4u;
    // 0x2fb9a8: 0x8c44bd30  lw          $a0, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6EE0u, 0x2FB9A4u, 0x2FB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9ACu;
label_2fb9ac:
    // 0x2fb9ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fb9b0:
    // 0x2fb9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fb9b4:
    // 0x2fb9b4: 0xc0bc9d2  jal         func_2F2748
label_2fb9b8:
    if (ctx->pc == 0x2FB9B8u) {
        ctx->pc = 0x2FB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9B4u;
        // 0x2fb9b8: 0xae221380  sw          $v0, 0x1380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB9BCu;
        goto label_2fb9bc;
    }
    ctx->pc = 0x2FB9B4u;
    SET_GPR_U32(ctx, 31, 0x2FB9BCu);
    ctx->pc = 0x2FB9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB9B4u;
    // 0x2fb9b8: 0xae221380  sw          $v0, 0x1380($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2748u, 0x2FB9B4u, 0x2FB9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9BCu;
label_2fb9bc:
    // 0x2fb9bc: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x2fb9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2fb9c0:
    // 0x2fb9c0: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x2fb9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_2fb9c4:
    // 0x2fb9c4: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2fb9c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2fb9c8:
    // 0x2fb9c8: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x2fb9c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_2fb9cc:
    // 0x2fb9cc: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2fb9ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2fb9d0:
    // 0x2fb9d0: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x2fb9d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_2fb9d4:
    // 0x2fb9d4: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x2fb9d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2fb9d8:
    // 0x2fb9d8: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_2fb9dc:
    // 0x2fb9dc: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x2fb9dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2fb9e0:
    // 0x2fb9e0: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x2fb9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_2fb9e4:
    // 0x2fb9e4: 0x3e00008  jr          $ra
label_2fb9e8:
    if (ctx->pc == 0x2FB9E8u) {
        ctx->pc = 0x2FB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9E4u;
        // 0x2fb9e8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB9ECu;
        goto label_2fb9ec;
    }
    ctx->pc = 0x2FB9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9E4u;
        // 0x2fb9e8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB9ECu;
label_2fb9ec:
    // 0x2fb9ec: 0x0  nop
    ctx->pc = 0x2fb9ecu;
    // NOP
label_2fb9f0:
    // 0x2fb9f0: 0x0  nop
    ctx->pc = 0x2fb9f0u;
    // NOP
label_2fb9f4:
    // 0x2fb9f4: 0x0  nop
    ctx->pc = 0x2fb9f4u;
    // NOP
    ctx->pc = 0x2fb9f8u;
}
