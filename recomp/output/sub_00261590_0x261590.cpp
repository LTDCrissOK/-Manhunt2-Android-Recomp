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

// Function: sub_00261590
// Address: 0x261590 - 0x261a28
void sub_00261590_0x261590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261590_0x261590");
#endif

    switch (ctx->pc) {
        case 0x261590u: goto label_261590;
        case 0x261594u: goto label_261594;
        case 0x261598u: goto label_261598;
        case 0x26159cu: goto label_26159c;
        case 0x2615a0u: goto label_2615a0;
        case 0x2615a4u: goto label_2615a4;
        case 0x2615a8u: goto label_2615a8;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b0u: goto label_2615b0;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615bcu: goto label_2615bc;
        case 0x2615c0u: goto label_2615c0;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615ccu: goto label_2615cc;
        case 0x2615d0u: goto label_2615d0;
        case 0x2615d4u: goto label_2615d4;
        case 0x2615d8u: goto label_2615d8;
        case 0x2615dcu: goto label_2615dc;
        case 0x2615e0u: goto label_2615e0;
        case 0x2615e4u: goto label_2615e4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615ecu: goto label_2615ec;
        case 0x2615f0u: goto label_2615f0;
        case 0x2615f4u: goto label_2615f4;
        case 0x2615f8u: goto label_2615f8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261600u: goto label_261600;
        case 0x261604u: goto label_261604;
        case 0x261608u: goto label_261608;
        case 0x26160cu: goto label_26160c;
        case 0x261610u: goto label_261610;
        case 0x261614u: goto label_261614;
        case 0x261618u: goto label_261618;
        case 0x26161cu: goto label_26161c;
        case 0x261620u: goto label_261620;
        case 0x261624u: goto label_261624;
        case 0x261628u: goto label_261628;
        case 0x26162cu: goto label_26162c;
        case 0x261630u: goto label_261630;
        case 0x261634u: goto label_261634;
        case 0x261638u: goto label_261638;
        case 0x26163cu: goto label_26163c;
        case 0x261640u: goto label_261640;
        case 0x261644u: goto label_261644;
        case 0x261648u: goto label_261648;
        case 0x26164cu: goto label_26164c;
        case 0x261650u: goto label_261650;
        case 0x261654u: goto label_261654;
        case 0x261658u: goto label_261658;
        case 0x26165cu: goto label_26165c;
        case 0x261660u: goto label_261660;
        case 0x261664u: goto label_261664;
        case 0x261668u: goto label_261668;
        case 0x26166cu: goto label_26166c;
        case 0x261670u: goto label_261670;
        case 0x261674u: goto label_261674;
        case 0x261678u: goto label_261678;
        case 0x26167cu: goto label_26167c;
        case 0x261680u: goto label_261680;
        case 0x261684u: goto label_261684;
        case 0x261688u: goto label_261688;
        case 0x26168cu: goto label_26168c;
        case 0x261690u: goto label_261690;
        case 0x261694u: goto label_261694;
        case 0x261698u: goto label_261698;
        case 0x26169cu: goto label_26169c;
        case 0x2616a0u: goto label_2616a0;
        case 0x2616a4u: goto label_2616a4;
        case 0x2616a8u: goto label_2616a8;
        case 0x2616acu: goto label_2616ac;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616b4u: goto label_2616b4;
        case 0x2616b8u: goto label_2616b8;
        case 0x2616bcu: goto label_2616bc;
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        case 0x261760u: goto label_261760;
        case 0x261764u: goto label_261764;
        case 0x261768u: goto label_261768;
        case 0x26176cu: goto label_26176c;
        case 0x261770u: goto label_261770;
        case 0x261774u: goto label_261774;
        case 0x261778u: goto label_261778;
        case 0x26177cu: goto label_26177c;
        case 0x261780u: goto label_261780;
        case 0x261784u: goto label_261784;
        case 0x261788u: goto label_261788;
        case 0x26178cu: goto label_26178c;
        case 0x261790u: goto label_261790;
        case 0x261794u: goto label_261794;
        case 0x261798u: goto label_261798;
        case 0x26179cu: goto label_26179c;
        case 0x2617a0u: goto label_2617a0;
        case 0x2617a4u: goto label_2617a4;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617acu: goto label_2617ac;
        case 0x2617b0u: goto label_2617b0;
        case 0x2617b4u: goto label_2617b4;
        case 0x2617b8u: goto label_2617b8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617c0u: goto label_2617c0;
        case 0x2617c4u: goto label_2617c4;
        case 0x2617c8u: goto label_2617c8;
        case 0x2617ccu: goto label_2617cc;
        case 0x2617d0u: goto label_2617d0;
        case 0x2617d4u: goto label_2617d4;
        case 0x2617d8u: goto label_2617d8;
        case 0x2617dcu: goto label_2617dc;
        case 0x2617e0u: goto label_2617e0;
        case 0x2617e4u: goto label_2617e4;
        case 0x2617e8u: goto label_2617e8;
        case 0x2617ecu: goto label_2617ec;
        case 0x2617f0u: goto label_2617f0;
        case 0x2617f4u: goto label_2617f4;
        case 0x2617f8u: goto label_2617f8;
        case 0x2617fcu: goto label_2617fc;
        case 0x261800u: goto label_261800;
        case 0x261804u: goto label_261804;
        case 0x261808u: goto label_261808;
        case 0x26180cu: goto label_26180c;
        case 0x261810u: goto label_261810;
        case 0x261814u: goto label_261814;
        case 0x261818u: goto label_261818;
        case 0x26181cu: goto label_26181c;
        case 0x261820u: goto label_261820;
        case 0x261824u: goto label_261824;
        case 0x261828u: goto label_261828;
        case 0x26182cu: goto label_26182c;
        case 0x261830u: goto label_261830;
        case 0x261834u: goto label_261834;
        case 0x261838u: goto label_261838;
        case 0x26183cu: goto label_26183c;
        case 0x261840u: goto label_261840;
        case 0x261844u: goto label_261844;
        case 0x261848u: goto label_261848;
        case 0x26184cu: goto label_26184c;
        case 0x261850u: goto label_261850;
        case 0x261854u: goto label_261854;
        case 0x261858u: goto label_261858;
        case 0x26185cu: goto label_26185c;
        case 0x261860u: goto label_261860;
        case 0x261864u: goto label_261864;
        case 0x261868u: goto label_261868;
        case 0x26186cu: goto label_26186c;
        case 0x261870u: goto label_261870;
        case 0x261874u: goto label_261874;
        case 0x261878u: goto label_261878;
        case 0x26187cu: goto label_26187c;
        case 0x261880u: goto label_261880;
        case 0x261884u: goto label_261884;
        case 0x261888u: goto label_261888;
        case 0x26188cu: goto label_26188c;
        case 0x261890u: goto label_261890;
        case 0x261894u: goto label_261894;
        case 0x261898u: goto label_261898;
        case 0x26189cu: goto label_26189c;
        case 0x2618a0u: goto label_2618a0;
        case 0x2618a4u: goto label_2618a4;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618acu: goto label_2618ac;
        case 0x2618b0u: goto label_2618b0;
        case 0x2618b4u: goto label_2618b4;
        case 0x2618b8u: goto label_2618b8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618c4u: goto label_2618c4;
        case 0x2618c8u: goto label_2618c8;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618d0u: goto label_2618d0;
        case 0x2618d4u: goto label_2618d4;
        case 0x2618d8u: goto label_2618d8;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618e4u: goto label_2618e4;
        case 0x2618e8u: goto label_2618e8;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618f0u: goto label_2618f0;
        case 0x2618f4u: goto label_2618f4;
        case 0x2618f8u: goto label_2618f8;
        case 0x2618fcu: goto label_2618fc;
        case 0x261900u: goto label_261900;
        case 0x261904u: goto label_261904;
        case 0x261908u: goto label_261908;
        case 0x26190cu: goto label_26190c;
        case 0x261910u: goto label_261910;
        case 0x261914u: goto label_261914;
        case 0x261918u: goto label_261918;
        case 0x26191cu: goto label_26191c;
        case 0x261920u: goto label_261920;
        case 0x261924u: goto label_261924;
        case 0x261928u: goto label_261928;
        case 0x26192cu: goto label_26192c;
        case 0x261930u: goto label_261930;
        case 0x261934u: goto label_261934;
        case 0x261938u: goto label_261938;
        case 0x26193cu: goto label_26193c;
        case 0x261940u: goto label_261940;
        case 0x261944u: goto label_261944;
        case 0x261948u: goto label_261948;
        case 0x26194cu: goto label_26194c;
        case 0x261950u: goto label_261950;
        case 0x261954u: goto label_261954;
        case 0x261958u: goto label_261958;
        case 0x26195cu: goto label_26195c;
        case 0x261960u: goto label_261960;
        case 0x261964u: goto label_261964;
        case 0x261968u: goto label_261968;
        case 0x26196cu: goto label_26196c;
        case 0x261970u: goto label_261970;
        case 0x261974u: goto label_261974;
        case 0x261978u: goto label_261978;
        case 0x26197cu: goto label_26197c;
        case 0x261980u: goto label_261980;
        case 0x261984u: goto label_261984;
        case 0x261988u: goto label_261988;
        case 0x26198cu: goto label_26198c;
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b0u: goto label_2619b0;
        case 0x2619b4u: goto label_2619b4;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619bcu: goto label_2619bc;
        case 0x2619c0u: goto label_2619c0;
        case 0x2619c4u: goto label_2619c4;
        case 0x2619c8u: goto label_2619c8;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619d4u: goto label_2619d4;
        case 0x2619d8u: goto label_2619d8;
        case 0x2619dcu: goto label_2619dc;
        case 0x2619e0u: goto label_2619e0;
        case 0x2619e4u: goto label_2619e4;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619ecu: goto label_2619ec;
        case 0x2619f0u: goto label_2619f0;
        case 0x2619f4u: goto label_2619f4;
        case 0x2619f8u: goto label_2619f8;
        case 0x2619fcu: goto label_2619fc;
        case 0x261a00u: goto label_261a00;
        case 0x261a04u: goto label_261a04;
        case 0x261a08u: goto label_261a08;
        case 0x261a0cu: goto label_261a0c;
        case 0x261a10u: goto label_261a10;
        case 0x261a14u: goto label_261a14;
        case 0x261a18u: goto label_261a18;
        case 0x261a1cu: goto label_261a1c;
        case 0x261a20u: goto label_261a20;
        case 0x261a24u: goto label_261a24;
        default: break;
    }

    ctx->pc = 0x261590u;

label_261590:
    // 0x261590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_261594:
    // 0x261594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261598:
    // 0x261598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x261598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_26159c:
    // 0x26159c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26159cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2615a0:
    // 0x2615a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2615a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2615a4:
    // 0x2615a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2615a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2615a8:
    // 0x2615a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2615a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2615ac:
    // 0x2615ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2615acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2615b0:
    // 0x2615b0: 0xc097598  jal         func_25D660
label_2615b4:
    if (ctx->pc == 0x2615B4u) {
        ctx->pc = 0x2615B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615B0u;
        // 0x2615b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615B8u;
        goto label_2615b8;
    }
    ctx->pc = 0x2615B0u;
    SET_GPR_U32(ctx, 31, 0x2615B8u);
    ctx->pc = 0x2615B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615B0u;
    // 0x2615b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D660u, 0x2615B0u, 0x2615B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615B8u;
label_2615b8:
    // 0x2615b8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2615b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2615bc:
    // 0x2615bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2615bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2615c0:
    // 0x2615c0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2615c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_2615c4:
    // 0x2615c4: 0x24632350  addiu       $v1, $v1, 0x2350
    ctx->pc = 0x2615c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9040));
label_2615c8:
    // 0x2615c8: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x2615c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
label_2615cc:
    // 0x2615cc: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x2615ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
label_2615d0:
    // 0x2615d0: 0x262402b4  addiu       $a0, $s1, 0x2B4
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 692));
label_2615d4:
    // 0x2615d4: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x2615d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
label_2615d8:
    // 0x2615d8: 0xae20028c  sw          $zero, 0x28C($s1)
    ctx->pc = 0x2615d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
label_2615dc:
    // 0x2615dc: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x2615dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
label_2615e0:
    // 0x2615e0: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x2615e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_2615e4:
    // 0x2615e4: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x2615e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_2615e8:
    // 0x2615e8: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x2615e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
label_2615ec:
    // 0x2615ec: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x2615ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
label_2615f0:
    // 0x2615f0: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x2615f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
label_2615f4:
    // 0x2615f4: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x2615f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
label_2615f8:
    // 0x2615f8: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x2615f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
label_2615fc:
    // 0x2615fc: 0xc097288  jal         func_25CA20
label_261600:
    if (ctx->pc == 0x261600u) {
        ctx->pc = 0x261600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615FCu;
        // 0x261600: 0xe62002a0  swc1        $f0, 0x2A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x261604u;
        goto label_261604;
    }
    ctx->pc = 0x2615FCu;
    SET_GPR_U32(ctx, 31, 0x261604u);
    ctx->pc = 0x261600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615FCu;
    // 0x261600: 0xe62002a0  swc1        $f0, 0x2A0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA20u, 0x2615FCu, 0x261604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261604u;
label_261604:
    // 0x261604: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x261604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_261608:
    // 0x261608: 0xae2302dc  sw          $v1, 0x2DC($s1)
    ctx->pc = 0x261608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 3));
label_26160c:
    // 0x26160c: 0x8e040360  lw          $a0, 0x360($s0)
    ctx->pc = 0x26160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_261610:
    // 0x261610: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_261614:
    if (ctx->pc == 0x261614u) {
        ctx->pc = 0x261614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261610u;
        // 0x261614: 0x8e0405d8  lw          $a0, 0x5D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261618u;
        goto label_261618;
    }
    ctx->pc = 0x261610u;
    {
        const bool branch_taken_0x261610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261610) {
            ctx->pc = 0x261614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261610u;
            // 0x261614: 0x8e0405d8  lw          $a0, 0x5D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26162Cu;
            goto label_26162c;
        }
    }
    ctx->pc = 0x261618u;
label_261618:
    // 0x261618: 0xc0c31d0  jal         func_30C740
label_26161c:
    if (ctx->pc == 0x26161Cu) {
        ctx->pc = 0x261620u;
        goto label_261620;
    }
    ctx->pc = 0x261618u;
    SET_GPR_U32(ctx, 31, 0x261620u);
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x261618u, 0x261620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261620u;
label_261620:
    // 0x261620: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x261620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
label_261624:
    // 0x261624: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x261624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_261628:
    // 0x261628: 0x8e0405d8  lw          $a0, 0x5D8($s0)
    ctx->pc = 0x261628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1496)));
label_26162c:
    // 0x26162c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_261630:
    if (ctx->pc == 0x261630u) {
        ctx->pc = 0x261630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26162Cu;
        // 0x261630: 0x8e0405e8  lw          $a0, 0x5E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261634u;
        goto label_261634;
    }
    ctx->pc = 0x26162Cu;
    {
        const bool branch_taken_0x26162c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26162c) {
            ctx->pc = 0x261630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26162Cu;
            // 0x261630: 0x8e0405e8  lw          $a0, 0x5E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261648u;
            goto label_261648;
        }
    }
    ctx->pc = 0x261634u;
label_261634:
    // 0x261634: 0xc0c31d0  jal         func_30C740
label_261638:
    if (ctx->pc == 0x261638u) {
        ctx->pc = 0x26163Cu;
        goto label_26163c;
    }
    ctx->pc = 0x261634u;
    SET_GPR_U32(ctx, 31, 0x26163Cu);
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x261634u, 0x26163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26163Cu;
label_26163c:
    // 0x26163c: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x26163cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
label_261640:
    // 0x261640: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x261640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_261644:
    // 0x261644: 0x8e0405e8  lw          $a0, 0x5E8($s0)
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
label_261648:
    // 0x261648: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_26164c:
    if (ctx->pc == 0x26164Cu) {
        ctx->pc = 0x26164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261648u;
        // 0x26164c: 0x263402bc  addiu       $s4, $s1, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261650u;
        goto label_261650;
    }
    ctx->pc = 0x261648u;
    {
        const bool branch_taken_0x261648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261648u;
        // 0x26164c: 0x263402bc  addiu       $s4, $s1, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261648) {
            ctx->pc = 0x261660u;
            goto label_261660;
        }
    }
    ctx->pc = 0x261650u;
label_261650:
    // 0x261650: 0xc0c31d0  jal         func_30C740
label_261654:
    if (ctx->pc == 0x261654u) {
        ctx->pc = 0x261658u;
        goto label_261658;
    }
    ctx->pc = 0x261650u;
    SET_GPR_U32(ctx, 31, 0x261658u);
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x261650u, 0x261658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261658u;
label_261658:
    // 0x261658: 0xae22028c  sw          $v0, 0x28C($s1)
    ctx->pc = 0x261658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 2));
label_26165c:
    // 0x26165c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x26165cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_261660:
    // 0x261660: 0x262302cc  addiu       $v1, $s1, 0x2CC
    ctx->pc = 0x261660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
label_261664:
    // 0x261664: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x261664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261668:
    // 0x261668: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x261668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26166c:
    // 0x26166c: 0x0  nop
    ctx->pc = 0x26166cu;
    // NOP
label_261670:
    // 0x261670: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x261670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_261674:
    // 0x261674: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x261674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_261678:
    // 0x261678: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x261678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_26167c:
    // 0x26167c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_261680:
    // 0x261680: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
label_261684:
    if (ctx->pc == 0x261684u) {
        ctx->pc = 0x261684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261680u;
        // 0x261684: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261688u;
        goto label_261688;
    }
    ctx->pc = 0x261680u;
    {
        const bool branch_taken_0x261680 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x261684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261680u;
        // 0x261684: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261680) {
            ctx->pc = 0x261670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261670;
        }
    }
    ctx->pc = 0x261688u;
label_261688:
    // 0x261688: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_26168c:
    // 0x26168c: 0x84620344  lh          $v0, 0x344($v1)
    ctx->pc = 0x26168cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 836)));
label_261690:
    // 0x261690: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_261694:
    if (ctx->pc == 0x261694u) {
        ctx->pc = 0x261694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261690u;
        // 0x261694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261698u;
        goto label_261698;
    }
    ctx->pc = 0x261690u;
    {
        const bool branch_taken_0x261690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261690u;
        // 0x261694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261690) {
            ctx->pc = 0x26169Cu;
            goto label_26169c;
        }
    }
    ctx->pc = 0x261698u;
label_261698:
    // 0x261698: 0x8c620340  lw          $v0, 0x340($v1)
    ctx->pc = 0x261698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 832)));
label_26169c:
    // 0x26169c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2616a0:
    if (ctx->pc == 0x2616A0u) {
        ctx->pc = 0x2616A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26169Cu;
        // 0x2616a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616A4u;
        goto label_2616a4;
    }
    ctx->pc = 0x26169Cu;
    {
        const bool branch_taken_0x26169c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26169Cu;
        // 0x2616a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26169c) {
            ctx->pc = 0x2616FCu;
            goto label_2616fc;
        }
    }
    ctx->pc = 0x2616A4u;
label_2616a4:
    // 0x2616a4: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2616a8:
    // 0x2616a8: 0xc0d981e  jal         func_366078
label_2616ac:
    if (ctx->pc == 0x2616ACu) {
        ctx->pc = 0x2616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616A8u;
        // 0x2616ac: 0x24840340  addiu       $a0, $a0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616B0u;
        goto label_2616b0;
    }
    ctx->pc = 0x2616A8u;
    SET_GPR_U32(ctx, 31, 0x2616B0u);
    ctx->pc = 0x2616ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616A8u;
    // 0x2616ac: 0x24840340  addiu       $a0, $a0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366078u, 0x2616A8u, 0x2616B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616B0u;
label_2616b0:
    // 0x2616b0: 0x8e26028c  lw          $a2, 0x28C($s1)
    ctx->pc = 0x2616b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_2616b4:
    // 0x2616b4: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_2616b8:
    if (ctx->pc == 0x2616B8u) {
        ctx->pc = 0x2616B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616B4u;
        // 0x2616b8: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616BCu;
        goto label_2616bc;
    }
    ctx->pc = 0x2616B4u;
    {
        const bool branch_taken_0x2616b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616B4u;
        // 0x2616b8: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616b4) {
            ctx->pc = 0x2616DCu;
            goto label_2616dc;
        }
    }
    ctx->pc = 0x2616BCu;
label_2616bc:
    // 0x2616bc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2616bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2616c0:
    // 0x2616c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2616c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2616c4:
    // 0x2616c4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2616c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2616c8:
    // 0x2616c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2616cc:
    // 0x2616cc: 0x40f809  jalr        $v0
label_2616d0:
    if (ctx->pc == 0x2616D0u) {
        ctx->pc = 0x2616D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616CCu;
        // 0x2616d0: 0x8e250104  lw          $a1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616D4u;
        goto label_2616d4;
    }
    ctx->pc = 0x2616CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2616D4u);
        ctx->pc = 0x2616D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616CCu;
        // 0x2616d0: 0x8e250104  lw          $a1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2616CCu, 0x2616D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2616D4u;
label_2616d4:
    // 0x2616d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2616d8:
    if (ctx->pc == 0x2616D8u) {
        ctx->pc = 0x2616D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616D4u;
        // 0x2616d8: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616DCu;
        goto label_2616dc;
    }
    ctx->pc = 0x2616D4u;
    {
        const bool branch_taken_0x2616d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616D4u;
        // 0x2616d8: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616d4) {
            ctx->pc = 0x261704u;
            goto label_261704;
        }
    }
    ctx->pc = 0x2616DCu;
label_2616dc:
    // 0x2616dc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2616dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2616e0:
    // 0x2616e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2616e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2616e4:
    // 0x2616e4: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x2616e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2616e8:
    // 0x2616e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2616e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2616ec:
    // 0x2616ec: 0x40f809  jalr        $v0
label_2616f0:
    if (ctx->pc == 0x2616F0u) {
        ctx->pc = 0x2616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616ECu;
        // 0x2616f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616F4u;
        goto label_2616f4;
    }
    ctx->pc = 0x2616ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2616F4u);
        ctx->pc = 0x2616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616ECu;
        // 0x2616f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2616ECu, 0x2616F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2616F4u;
label_2616f4:
    // 0x2616f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2616f8:
    if (ctx->pc == 0x2616F8u) {
        ctx->pc = 0x2616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616F4u;
        // 0x2616f8: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616FCu;
        goto label_2616fc;
    }
    ctx->pc = 0x2616F4u;
    {
        const bool branch_taken_0x2616f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616F4u;
        // 0x2616f8: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616f4) {
            ctx->pc = 0x261704u;
            goto label_261704;
        }
    }
    ctx->pc = 0x2616FCu;
label_2616fc:
    // 0x2616fc: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x2616fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
label_261700:
    // 0x261700: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x261700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261704:
    // 0x261704: 0x8462034c  lh          $v0, 0x34C($v1)
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 844)));
label_261708:
    // 0x261708: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26170c:
    if (ctx->pc == 0x26170Cu) {
        ctx->pc = 0x26170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261708u;
        // 0x26170c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261710u;
        goto label_261710;
    }
    ctx->pc = 0x261708u;
    {
        const bool branch_taken_0x261708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261708u;
        // 0x26170c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261708) {
            ctx->pc = 0x261714u;
            goto label_261714;
        }
    }
    ctx->pc = 0x261710u;
label_261710:
    // 0x261710: 0x8c620348  lw          $v0, 0x348($v1)
    ctx->pc = 0x261710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 840)));
label_261714:
    // 0x261714: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_261718:
    if (ctx->pc == 0x261718u) {
        ctx->pc = 0x261718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261714u;
        // 0x261718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26171Cu;
        goto label_26171c;
    }
    ctx->pc = 0x261714u;
    {
        const bool branch_taken_0x261714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261714u;
        // 0x261718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261714) {
            ctx->pc = 0x261730u;
            goto label_261730;
        }
    }
    ctx->pc = 0x26171Cu;
label_26171c:
    // 0x26171c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x26171cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261720:
    // 0x261720: 0xc0d981e  jal         func_366078
label_261724:
    if (ctx->pc == 0x261724u) {
        ctx->pc = 0x261724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261720u;
        // 0x261724: 0x24840348  addiu       $a0, $a0, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261728u;
        goto label_261728;
    }
    ctx->pc = 0x261720u;
    SET_GPR_U32(ctx, 31, 0x261728u);
    ctx->pc = 0x261724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261720u;
    // 0x261724: 0x24840348  addiu       $a0, $a0, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366078u, 0x261720u, 0x261728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261728u;
label_261728:
    // 0x261728: 0x10000002  b           . + 4 + (0x2 << 2)
label_26172c:
    if (ctx->pc == 0x26172Cu) {
        ctx->pc = 0x26172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261728u;
        // 0x26172c: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261730u;
        goto label_261730;
    }
    ctx->pc = 0x261728u;
    {
        const bool branch_taken_0x261728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261728u;
        // 0x26172c: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261728) {
            ctx->pc = 0x261734u;
            goto label_261734;
        }
    }
    ctx->pc = 0x261730u;
label_261730:
    // 0x261730: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x261730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
label_261734:
    // 0x261734: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261738:
    // 0x261738: 0x84620354  lh          $v0, 0x354($v1)
    ctx->pc = 0x261738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 852)));
label_26173c:
    // 0x26173c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_261740:
    if (ctx->pc == 0x261740u) {
        ctx->pc = 0x261740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26173Cu;
        // 0x261740: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261744u;
        goto label_261744;
    }
    ctx->pc = 0x26173Cu;
    {
        const bool branch_taken_0x26173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26173Cu;
        // 0x261740: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26173c) {
            ctx->pc = 0x26174Cu;
            goto label_26174c;
        }
    }
    ctx->pc = 0x261744u;
label_261744:
    // 0x261744: 0x10000002  b           . + 4 + (0x2 << 2)
label_261748:
    if (ctx->pc == 0x261748u) {
        ctx->pc = 0x261748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261744u;
        // 0x261748: 0x8c820350  lw          $v0, 0x350($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26174Cu;
        goto label_26174c;
    }
    ctx->pc = 0x261744u;
    {
        const bool branch_taken_0x261744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261744u;
        // 0x261748: 0x8c820350  lw          $v0, 0x350($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261744) {
            ctx->pc = 0x261750u;
            goto label_261750;
        }
    }
    ctx->pc = 0x26174Cu;
label_26174c:
    // 0x26174c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26174cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261750:
    // 0x261750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_261754:
    if (ctx->pc == 0x261754u) {
        ctx->pc = 0x261754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261750u;
        // 0x261754: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261758u;
        goto label_261758;
    }
    ctx->pc = 0x261750u;
    {
        const bool branch_taken_0x261750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261750u;
        // 0x261754: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261750) {
            ctx->pc = 0x261768u;
            goto label_261768;
        }
    }
    ctx->pc = 0x261758u;
label_261758:
    // 0x261758: 0xc0d981e  jal         func_366078
label_26175c:
    if (ctx->pc == 0x26175Cu) {
        ctx->pc = 0x26175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261758u;
        // 0x26175c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261760u;
        goto label_261760;
    }
    ctx->pc = 0x261758u;
    SET_GPR_U32(ctx, 31, 0x261760u);
    ctx->pc = 0x26175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261758u;
    // 0x26175c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366078u, 0x261758u, 0x261760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261760u;
label_261760:
    // 0x261760: 0x10000002  b           . + 4 + (0x2 << 2)
label_261764:
    if (ctx->pc == 0x261764u) {
        ctx->pc = 0x261764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261760u;
        // 0x261764: 0xae22027c  sw          $v0, 0x27C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261768u;
        goto label_261768;
    }
    ctx->pc = 0x261760u;
    {
        const bool branch_taken_0x261760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261760u;
        // 0x261764: 0xae22027c  sw          $v0, 0x27C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261760) {
            ctx->pc = 0x26176Cu;
            goto label_26176c;
        }
    }
    ctx->pc = 0x261768u;
label_261768:
    // 0x261768: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x261768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
label_26176c:
    // 0x26176c: 0xc069670  jal         func_1A59C0
label_261770:
    if (ctx->pc == 0x261770u) {
        ctx->pc = 0x261770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26176Cu;
        // 0x261770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261774u;
        goto label_261774;
    }
    ctx->pc = 0x26176Cu;
    SET_GPR_U32(ctx, 31, 0x261774u);
    ctx->pc = 0x261770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26176Cu;
    // 0x261770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59C0u, 0x26176Cu, 0x261774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261774u;
label_261774:
    // 0x261774: 0xc06b7cc  jal         func_1ADF30
label_261778:
    if (ctx->pc == 0x261778u) {
        ctx->pc = 0x261778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261774u;
        // 0x261778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26177Cu;
        goto label_26177c;
    }
    ctx->pc = 0x261774u;
    SET_GPR_U32(ctx, 31, 0x26177Cu);
    ctx->pc = 0x261778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261774u;
    // 0x261778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADF30u, 0x261774u, 0x26177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26177Cu;
label_26177c:
    // 0x26177c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x26177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_261780:
    // 0x261780: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x261780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_261784:
    // 0x261784: 0x5040008d  beql        $v0, $zero, . + 4 + (0x8D << 2)
label_261788:
    if (ctx->pc == 0x261788u) {
        ctx->pc = 0x261788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261784u;
        // 0x261788: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26178Cu;
        goto label_26178c;
    }
    ctx->pc = 0x261784u;
    {
        const bool branch_taken_0x261784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261784) {
            ctx->pc = 0x261788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261784u;
            // 0x261788: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2619BCu;
            goto label_2619bc;
        }
    }
    ctx->pc = 0x26178Cu;
label_26178c:
    // 0x26178c: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x26178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_261790:
    // 0x261790: 0x5080008a  beql        $a0, $zero, . + 4 + (0x8A << 2)
label_261794:
    if (ctx->pc == 0x261794u) {
        ctx->pc = 0x261794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261790u;
        // 0x261794: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261798u;
        goto label_261798;
    }
    ctx->pc = 0x261790u;
    {
        const bool branch_taken_0x261790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261790) {
            ctx->pc = 0x261794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261790u;
            // 0x261794: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2619BCu;
            goto label_2619bc;
        }
    }
    ctx->pc = 0x261798u;
label_261798:
    // 0x261798: 0xc0d8de2  jal         func_363788
label_26179c:
    if (ctx->pc == 0x26179Cu) {
        ctx->pc = 0x2617A0u;
        goto label_2617a0;
    }
    ctx->pc = 0x261798u;
    SET_GPR_U32(ctx, 31, 0x2617A0u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x261798u, 0x2617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617A0u;
label_2617a0:
    // 0x2617a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2617a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2617a4:
    // 0x2617a4: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_2617a8:
    if (ctx->pc == 0x2617A8u) {
        ctx->pc = 0x2617A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617A4u;
        // 0x2617a8: 0x8e300274  lw          $s0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617ACu;
        goto label_2617ac;
    }
    ctx->pc = 0x2617A4u;
    {
        const bool branch_taken_0x2617a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2617a4) {
            ctx->pc = 0x2617A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2617A4u;
            // 0x2617a8: 0x8e300274  lw          $s0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2618BCu;
            goto label_2618bc;
        }
    }
    ctx->pc = 0x2617ACu;
label_2617ac:
    // 0x2617ac: 0x8e320274  lw          $s2, 0x274($s1)
    ctx->pc = 0x2617acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2617b0:
    // 0x2617b0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2617b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2617b4:
    // 0x2617b4: 0x86020030  lh          $v0, 0x30($s0)
    ctx->pc = 0x2617b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_2617b8:
    // 0x2617b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2617bc:
    if (ctx->pc == 0x2617BCu) {
        ctx->pc = 0x2617BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617B8u;
        // 0x2617bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617C0u;
        goto label_2617c0;
    }
    ctx->pc = 0x2617B8u;
    {
        const bool branch_taken_0x2617b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617B8u;
        // 0x2617bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617b8) {
            ctx->pc = 0x2617C4u;
            goto label_2617c4;
        }
    }
    ctx->pc = 0x2617C0u;
label_2617c0:
    // 0x2617c0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2617c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2617c4:
    // 0x2617c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2617c8:
    if (ctx->pc == 0x2617C8u) {
        ctx->pc = 0x2617C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617C4u;
        // 0x2617c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617CCu;
        goto label_2617cc;
    }
    ctx->pc = 0x2617C4u;
    {
        const bool branch_taken_0x2617c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617C4u;
        // 0x2617c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617c4) {
            ctx->pc = 0x2617DCu;
            goto label_2617dc;
        }
    }
    ctx->pc = 0x2617CCu;
label_2617cc:
    // 0x2617cc: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2617ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2617d0:
    // 0x2617d0: 0xc075272  jal         func_1D49C8
label_2617d4:
    if (ctx->pc == 0x2617D4u) {
        ctx->pc = 0x2617D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617D0u;
        // 0x2617d4: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617D8u;
        goto label_2617d8;
    }
    ctx->pc = 0x2617D0u;
    SET_GPR_U32(ctx, 31, 0x2617D8u);
    ctx->pc = 0x2617D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617D0u;
    // 0x2617d4: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x2617D0u, 0x2617D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617D8u;
label_2617d8:
    // 0x2617d8: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x2617d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_2617dc:
    // 0x2617dc: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x2617dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_2617e0:
    // 0x2617e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2617e4:
    if (ctx->pc == 0x2617E4u) {
        ctx->pc = 0x2617E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E0u;
        // 0x2617e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617E8u;
        goto label_2617e8;
    }
    ctx->pc = 0x2617E0u;
    {
        const bool branch_taken_0x2617e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E0u;
        // 0x2617e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617e0) {
            ctx->pc = 0x2617ECu;
            goto label_2617ec;
        }
    }
    ctx->pc = 0x2617E8u;
label_2617e8:
    // 0x2617e8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2617e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2617ec:
    // 0x2617ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2617f0:
    if (ctx->pc == 0x2617F0u) {
        ctx->pc = 0x2617F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ECu;
        // 0x2617f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617F4u;
        goto label_2617f4;
    }
    ctx->pc = 0x2617ECu;
    {
        const bool branch_taken_0x2617ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ECu;
        // 0x2617f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617ec) {
            ctx->pc = 0x261804u;
            goto label_261804;
        }
    }
    ctx->pc = 0x2617F4u;
label_2617f4:
    // 0x2617f4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2617f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2617f8:
    // 0x2617f8: 0xc075272  jal         func_1D49C8
label_2617fc:
    if (ctx->pc == 0x2617FCu) {
        ctx->pc = 0x2617FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617F8u;
        // 0x2617fc: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261800u;
        goto label_261800;
    }
    ctx->pc = 0x2617F8u;
    SET_GPR_U32(ctx, 31, 0x261800u);
    ctx->pc = 0x2617FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617F8u;
    // 0x2617fc: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x2617F8u, 0x261800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261800u;
label_261800:
    // 0x261800: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x261800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_261804:
    // 0x261804: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x261804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_261808:
    // 0x261808: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26180c:
    if (ctx->pc == 0x26180Cu) {
        ctx->pc = 0x26180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261808u;
        // 0x26180c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261810u;
        goto label_261810;
    }
    ctx->pc = 0x261808u;
    {
        const bool branch_taken_0x261808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261808u;
        // 0x26180c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261808) {
            ctx->pc = 0x261814u;
            goto label_261814;
        }
    }
    ctx->pc = 0x261810u;
label_261810:
    // 0x261810: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x261810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_261814:
    // 0x261814: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_261818:
    if (ctx->pc == 0x261818u) {
        ctx->pc = 0x261818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261814u;
        // 0x261818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26181Cu;
        goto label_26181c;
    }
    ctx->pc = 0x261814u;
    {
        const bool branch_taken_0x261814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261814u;
        // 0x261818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261814) {
            ctx->pc = 0x26182Cu;
            goto label_26182c;
        }
    }
    ctx->pc = 0x26181Cu;
label_26181c:
    // 0x26181c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x26181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261820:
    // 0x261820: 0xc075272  jal         func_1D49C8
label_261824:
    if (ctx->pc == 0x261824u) {
        ctx->pc = 0x261824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261820u;
        // 0x261824: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261828u;
        goto label_261828;
    }
    ctx->pc = 0x261820u;
    SET_GPR_U32(ctx, 31, 0x261828u);
    ctx->pc = 0x261824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261820u;
    // 0x261824: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x261820u, 0x261828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261828u;
label_261828:
    // 0x261828: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x261828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_26182c:
    // 0x26182c: 0x86020048  lh          $v0, 0x48($s0)
    ctx->pc = 0x26182cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_261830:
    // 0x261830: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_261834:
    if (ctx->pc == 0x261834u) {
        ctx->pc = 0x261834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261830u;
        // 0x261834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261838u;
        goto label_261838;
    }
    ctx->pc = 0x261830u;
    {
        const bool branch_taken_0x261830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261830u;
        // 0x261834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261830) {
            ctx->pc = 0x26183Cu;
            goto label_26183c;
        }
    }
    ctx->pc = 0x261838u;
label_261838:
    // 0x261838: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x261838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_26183c:
    // 0x26183c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_261840:
    if (ctx->pc == 0x261840u) {
        ctx->pc = 0x261840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26183Cu;
        // 0x261840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261844u;
        goto label_261844;
    }
    ctx->pc = 0x26183Cu;
    {
        const bool branch_taken_0x26183c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26183Cu;
        // 0x261840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26183c) {
            ctx->pc = 0x261854u;
            goto label_261854;
        }
    }
    ctx->pc = 0x261844u;
label_261844:
    // 0x261844: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x261844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261848:
    // 0x261848: 0xc075272  jal         func_1D49C8
label_26184c:
    if (ctx->pc == 0x26184Cu) {
        ctx->pc = 0x26184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261848u;
        // 0x26184c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261850u;
        goto label_261850;
    }
    ctx->pc = 0x261848u;
    SET_GPR_U32(ctx, 31, 0x261850u);
    ctx->pc = 0x26184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261848u;
    // 0x26184c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x261848u, 0x261850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261850u;
label_261850:
    // 0x261850: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x261850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
label_261854:
    // 0x261854: 0x86020050  lh          $v0, 0x50($s0)
    ctx->pc = 0x261854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_261858:
    // 0x261858: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26185c:
    if (ctx->pc == 0x26185Cu) {
        ctx->pc = 0x26185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261858u;
        // 0x26185c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261860u;
        goto label_261860;
    }
    ctx->pc = 0x261858u;
    {
        const bool branch_taken_0x261858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261858u;
        // 0x26185c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261858) {
            ctx->pc = 0x261864u;
            goto label_261864;
        }
    }
    ctx->pc = 0x261860u;
label_261860:
    // 0x261860: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x261860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_261864:
    // 0x261864: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_261868:
    if (ctx->pc == 0x261868u) {
        ctx->pc = 0x261868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261864u;
        // 0x261868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26186Cu;
        goto label_26186c;
    }
    ctx->pc = 0x261864u;
    {
        const bool branch_taken_0x261864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261864u;
        // 0x261868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261864) {
            ctx->pc = 0x26187Cu;
            goto label_26187c;
        }
    }
    ctx->pc = 0x26186Cu;
label_26186c:
    // 0x26186c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x26186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261870:
    // 0x261870: 0xc075272  jal         func_1D49C8
label_261874:
    if (ctx->pc == 0x261874u) {
        ctx->pc = 0x261874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261870u;
        // 0x261874: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261878u;
        goto label_261878;
    }
    ctx->pc = 0x261870u;
    SET_GPR_U32(ctx, 31, 0x261878u);
    ctx->pc = 0x261874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261870u;
    // 0x261874: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x261870u, 0x261878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261878u;
label_261878:
    // 0x261878: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x261878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_26187c:
    // 0x26187c: 0xc097f76  jal         func_25FDD8
label_261880:
    if (ctx->pc == 0x261880u) {
        ctx->pc = 0x261880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26187Cu;
        // 0x261880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261884u;
        goto label_261884;
    }
    ctx->pc = 0x26187Cu;
    SET_GPR_U32(ctx, 31, 0x261884u);
    ctx->pc = 0x261880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26187Cu;
    // 0x261880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x26187Cu, 0x261884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261884u;
label_261884:
    // 0x261884: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_261888:
    if (ctx->pc == 0x261888u) {
        ctx->pc = 0x261888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261884u;
        // 0x261888: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26188Cu;
        goto label_26188c;
    }
    ctx->pc = 0x261884u;
    {
        const bool branch_taken_0x261884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261884u;
        // 0x261888: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261884) {
            ctx->pc = 0x2619B8u;
            goto label_2619b8;
        }
    }
    ctx->pc = 0x26188Cu;
label_26188c:
    // 0x26188c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_261890:
    // 0x261890: 0xc0b2af0  jal         func_2CABC0
label_261894:
    if (ctx->pc == 0x261894u) {
        ctx->pc = 0x261894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261890u;
        // 0x261894: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261898u;
        goto label_261898;
    }
    ctx->pc = 0x261890u;
    SET_GPR_U32(ctx, 31, 0x261898u);
    ctx->pc = 0x261894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261890u;
    // 0x261894: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x261890u, 0x261898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261898u;
label_261898:
    // 0x261898: 0xc0c4808  jal         func_312020
label_26189c:
    if (ctx->pc == 0x26189Cu) {
        ctx->pc = 0x26189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261898u;
        // 0x26189c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618A0u;
        goto label_2618a0;
    }
    ctx->pc = 0x261898u;
    SET_GPR_U32(ctx, 31, 0x2618A0u);
    ctx->pc = 0x26189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261898u;
    // 0x26189c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x261898u, 0x2618A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618A0u;
label_2618a0:
    // 0x2618a0: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2618a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2618a4:
    // 0x2618a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2618a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2618a8:
    // 0x2618a8: 0xae22029c  sw          $v0, 0x29C($s1)
    ctx->pc = 0x2618a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 2));
label_2618ac:
    // 0x2618ac: 0xc0c3044  jal         func_30C110
label_2618b0:
    if (ctx->pc == 0x2618B0u) {
        ctx->pc = 0x2618B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618ACu;
        // 0x2618b0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618B4u;
        goto label_2618b4;
    }
    ctx->pc = 0x2618ACu;
    SET_GPR_U32(ctx, 31, 0x2618B4u);
    ctx->pc = 0x2618B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618ACu;
    // 0x2618b0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x2618ACu, 0x2618B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618B4u;
label_2618b4:
    // 0x2618b4: 0x10000041  b           . + 4 + (0x41 << 2)
label_2618b8:
    if (ctx->pc == 0x2618B8u) {
        ctx->pc = 0x2618B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618B4u;
        // 0x2618b8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618BCu;
        goto label_2618bc;
    }
    ctx->pc = 0x2618B4u;
    {
        const bool branch_taken_0x2618b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618B4u;
        // 0x2618b8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618b4) {
            ctx->pc = 0x2619BCu;
            goto label_2619bc;
        }
    }
    ctx->pc = 0x2618BCu;
label_2618bc:
    // 0x2618bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2618bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2618c0:
    // 0x2618c0: 0xc0d8de2  jal         func_363788
label_2618c4:
    if (ctx->pc == 0x2618C4u) {
        ctx->pc = 0x2618C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618C0u;
        // 0x2618c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618C8u;
        goto label_2618c8;
    }
    ctx->pc = 0x2618C0u;
    SET_GPR_U32(ctx, 31, 0x2618C8u);
    ctx->pc = 0x2618C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618C0u;
    // 0x2618c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2618C0u, 0x2618C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618C8u;
label_2618c8:
    // 0x2618c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2618cc:
    if (ctx->pc == 0x2618CCu) {
        ctx->pc = 0x2618CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618C8u;
        // 0x2618cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618D0u;
        goto label_2618d0;
    }
    ctx->pc = 0x2618C8u;
    {
        const bool branch_taken_0x2618c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618c8) {
            ctx->pc = 0x2618CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2618C8u;
            // 0x2618cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2618E4u;
            goto label_2618e4;
        }
    }
    ctx->pc = 0x2618D0u;
label_2618d0:
    // 0x2618d0: 0xc0d8de2  jal         func_363788
label_2618d4:
    if (ctx->pc == 0x2618D4u) {
        ctx->pc = 0x2618D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618D0u;
        // 0x2618d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618D8u;
        goto label_2618d8;
    }
    ctx->pc = 0x2618D0u;
    SET_GPR_U32(ctx, 31, 0x2618D8u);
    ctx->pc = 0x2618D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618D0u;
    // 0x2618d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2618D0u, 0x2618D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618D8u;
label_2618d8:
    // 0x2618d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2618d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2618dc:
    // 0x2618dc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2618e0:
    if (ctx->pc == 0x2618E0u) {
        ctx->pc = 0x2618E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618DCu;
        // 0x2618e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618E4u;
        goto label_2618e4;
    }
    ctx->pc = 0x2618DCu;
    {
        const bool branch_taken_0x2618dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2618dc) {
            ctx->pc = 0x2618E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2618DCu;
            // 0x2618e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2618E4u;
            goto label_2618e4;
        }
    }
    ctx->pc = 0x2618E4u;
label_2618e4:
    // 0x2618e4: 0x52400035  beql        $s2, $zero, . + 4 + (0x35 << 2)
label_2618e8:
    if (ctx->pc == 0x2618E8u) {
        ctx->pc = 0x2618E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618E4u;
        // 0x2618e8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618ECu;
        goto label_2618ec;
    }
    ctx->pc = 0x2618E4u;
    {
        const bool branch_taken_0x2618e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618e4) {
            ctx->pc = 0x2618E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2618E4u;
            // 0x2618e8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2619BCu;
            goto label_2619bc;
        }
    }
    ctx->pc = 0x2618ECu;
label_2618ec:
    // 0x2618ec: 0x8e300274  lw          $s0, 0x274($s1)
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2618f0:
    // 0x2618f0: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2618f4:
    // 0x2618f4: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_2618f8:
    // 0x2618f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2618fc:
    if (ctx->pc == 0x2618FCu) {
        ctx->pc = 0x2618FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618F8u;
        // 0x2618fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261900u;
        goto label_261900;
    }
    ctx->pc = 0x2618F8u;
    {
        const bool branch_taken_0x2618f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618F8u;
        // 0x2618fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618f8) {
            ctx->pc = 0x261904u;
            goto label_261904;
        }
    }
    ctx->pc = 0x261900u;
label_261900:
    // 0x261900: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x261900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_261904:
    // 0x261904: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_261908:
    if (ctx->pc == 0x261908u) {
        ctx->pc = 0x261908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261904u;
        // 0x261908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26190Cu;
        goto label_26190c;
    }
    ctx->pc = 0x261904u;
    {
        const bool branch_taken_0x261904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261904u;
        // 0x261908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261904) {
            ctx->pc = 0x26191Cu;
            goto label_26191c;
        }
    }
    ctx->pc = 0x26190Cu;
label_26190c:
    // 0x26190c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x26190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261910:
    // 0x261910: 0xc075272  jal         func_1D49C8
label_261914:
    if (ctx->pc == 0x261914u) {
        ctx->pc = 0x261914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261910u;
        // 0x261914: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261918u;
        goto label_261918;
    }
    ctx->pc = 0x261910u;
    SET_GPR_U32(ctx, 31, 0x261918u);
    ctx->pc = 0x261914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261910u;
    // 0x261914: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x261910u, 0x261918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261918u;
label_261918:
    // 0x261918: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x261918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_26191c:
    // 0x26191c: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_261920:
    // 0x261920: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x261920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_261924:
    // 0x261924: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x261924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261928:
    // 0x261928: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x261928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26192c:
    // 0x26192c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_261930:
    if (ctx->pc == 0x261930u) {
        ctx->pc = 0x261930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26192Cu;
        // 0x261930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261934u;
        goto label_261934;
    }
    ctx->pc = 0x26192Cu;
    {
        const bool branch_taken_0x26192c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26192Cu;
        // 0x261930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26192c) {
            ctx->pc = 0x261938u;
            goto label_261938;
        }
    }
    ctx->pc = 0x261934u;
label_261934:
    // 0x261934: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x261934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_261938:
    // 0x261938: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_26193c:
    if (ctx->pc == 0x26193Cu) {
        ctx->pc = 0x26193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261938u;
        // 0x26193c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261940u;
        goto label_261940;
    }
    ctx->pc = 0x261938u;
    {
        const bool branch_taken_0x261938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261938u;
        // 0x26193c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261938) {
            ctx->pc = 0x261950u;
            goto label_261950;
        }
    }
    ctx->pc = 0x261940u;
label_261940:
    // 0x261940: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x261940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_261944:
    // 0x261944: 0xc075272  jal         func_1D49C8
label_261948:
    if (ctx->pc == 0x261948u) {
        ctx->pc = 0x261948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261944u;
        // 0x261948: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26194Cu;
        goto label_26194c;
    }
    ctx->pc = 0x261944u;
    SET_GPR_U32(ctx, 31, 0x26194Cu);
    ctx->pc = 0x261948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261944u;
    // 0x261948: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x261944u, 0x26194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26194Cu;
label_26194c:
    // 0x26194c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x26194cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_261950:
    // 0x261950: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x261950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_261954:
    // 0x261954: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_261958:
    // 0x261958: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x261958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_26195c:
    // 0x26195c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_261960:
    if (ctx->pc == 0x261960u) {
        ctx->pc = 0x261960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26195Cu;
        // 0x261960: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261964u;
        goto label_261964;
    }
    ctx->pc = 0x26195Cu;
    {
        const bool branch_taken_0x26195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26195Cu;
        // 0x261960: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26195c) {
            ctx->pc = 0x261928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261928;
        }
    }
    ctx->pc = 0x261964u;
label_261964:
    // 0x261964: 0xc097f26  jal         func_25FC98
label_261968:
    if (ctx->pc == 0x261968u) {
        ctx->pc = 0x261968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261964u;
        // 0x261968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26196Cu;
        goto label_26196c;
    }
    ctx->pc = 0x261964u;
    SET_GPR_U32(ctx, 31, 0x26196Cu);
    ctx->pc = 0x261968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261964u;
    // 0x261968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x261964u, 0x26196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26196Cu;
label_26196c:
    // 0x26196c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_261970:
    // 0x261970: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_261974:
    if (ctx->pc == 0x261974u) {
        ctx->pc = 0x261974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261970u;
        // 0x261974: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261978u;
        goto label_261978;
    }
    ctx->pc = 0x261970u;
    {
        const bool branch_taken_0x261970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x261974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261970u;
        // 0x261974: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261970) {
            ctx->pc = 0x261990u;
            goto label_261990;
        }
    }
    ctx->pc = 0x261978u;
label_261978:
    // 0x261978: 0xc097f26  jal         func_25FC98
label_26197c:
    if (ctx->pc == 0x26197Cu) {
        ctx->pc = 0x26197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261978u;
        // 0x26197c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261980u;
        goto label_261980;
    }
    ctx->pc = 0x261978u;
    SET_GPR_U32(ctx, 31, 0x261980u);
    ctx->pc = 0x26197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261978u;
    // 0x26197c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x261978u, 0x261980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261980u;
label_261980:
    // 0x261980: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x261980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_261984:
    // 0x261984: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_261988:
    if (ctx->pc == 0x261988u) {
        ctx->pc = 0x261988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261984u;
        // 0x261988: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26198Cu;
        goto label_26198c;
    }
    ctx->pc = 0x261984u;
    {
        const bool branch_taken_0x261984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x261984) {
            ctx->pc = 0x261988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261984u;
            // 0x261988: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2619BCu;
            goto label_2619bc;
        }
    }
    ctx->pc = 0x26198Cu;
label_26198c:
    // 0x26198c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x26198cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_261990:
    // 0x261990: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x261990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_261994:
    // 0x261994: 0xc0b2af0  jal         func_2CABC0
label_261998:
    if (ctx->pc == 0x261998u) {
        ctx->pc = 0x261998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261994u;
        // 0x261998: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26199Cu;
        goto label_26199c;
    }
    ctx->pc = 0x261994u;
    SET_GPR_U32(ctx, 31, 0x26199Cu);
    ctx->pc = 0x261998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261994u;
    // 0x261998: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x261994u, 0x26199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26199Cu;
label_26199c:
    // 0x26199c: 0xc0c4808  jal         func_312020
label_2619a0:
    if (ctx->pc == 0x2619A0u) {
        ctx->pc = 0x2619A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26199Cu;
        // 0x2619a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619A4u;
        goto label_2619a4;
    }
    ctx->pc = 0x26199Cu;
    SET_GPR_U32(ctx, 31, 0x2619A4u);
    ctx->pc = 0x2619A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26199Cu;
    // 0x2619a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x26199Cu, 0x2619A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619A4u;
label_2619a4:
    // 0x2619a4: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2619a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2619a8:
    // 0x2619a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2619a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2619ac:
    // 0x2619ac: 0xae2202a8  sw          $v0, 0x2A8($s1)
    ctx->pc = 0x2619acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
label_2619b0:
    // 0x2619b0: 0xc0c3044  jal         func_30C110
label_2619b4:
    if (ctx->pc == 0x2619B4u) {
        ctx->pc = 0x2619B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B0u;
        // 0x2619b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619B8u;
        goto label_2619b8;
    }
    ctx->pc = 0x2619B0u;
    SET_GPR_U32(ctx, 31, 0x2619B8u);
    ctx->pc = 0x2619B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619B0u;
    // 0x2619b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x2619B0u, 0x2619B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619B8u;
label_2619b8:
    // 0x2619b8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2619bc:
    // 0x2619bc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2619bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2619c0:
    // 0x2619c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2619c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2619c4:
    // 0x2619c4: 0x245003bc  addiu       $s0, $v0, 0x3BC
    ctx->pc = 0x2619c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 956));
label_2619c8:
    // 0x2619c8: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2619c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2619cc:
    // 0x2619cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2619d0:
    if (ctx->pc == 0x2619D0u) {
        ctx->pc = 0x2619D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619CCu;
        // 0x2619d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619D4u;
        goto label_2619d4;
    }
    ctx->pc = 0x2619CCu;
    {
        const bool branch_taken_0x2619cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619CCu;
        // 0x2619d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619cc) {
            ctx->pc = 0x2619D8u;
            goto label_2619d8;
        }
    }
    ctx->pc = 0x2619D4u;
label_2619d4:
    // 0x2619d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2619d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2619d8:
    // 0x2619d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2619dc:
    if (ctx->pc == 0x2619DCu) {
        ctx->pc = 0x2619DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619D8u;
        // 0x2619dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619E0u;
        goto label_2619e0;
    }
    ctx->pc = 0x2619D8u;
    {
        const bool branch_taken_0x2619d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619D8u;
        // 0x2619dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619d8) {
            ctx->pc = 0x2619F0u;
            goto label_2619f0;
        }
    }
    ctx->pc = 0x2619E0u;
label_2619e0:
    // 0x2619e0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2619e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2619e4:
    // 0x2619e4: 0xc075272  jal         func_1D49C8
label_2619e8:
    if (ctx->pc == 0x2619E8u) {
        ctx->pc = 0x2619E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619E4u;
        // 0x2619e8: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619ECu;
        goto label_2619ec;
    }
    ctx->pc = 0x2619E4u;
    SET_GPR_U32(ctx, 31, 0x2619ECu);
    ctx->pc = 0x2619E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619E4u;
    // 0x2619e8: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x2619E4u, 0x2619ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619ECu;
label_2619ec:
    // 0x2619ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2619ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2619f0:
    // 0x2619f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2619f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2619f4:
    // 0x2619f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2619f8:
    // 0x2619f8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2619f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2619fc:
    // 0x2619fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_261a00:
    if (ctx->pc == 0x261A00u) {
        ctx->pc = 0x261A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619FCu;
        // 0x261a00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A04u;
        goto label_261a04;
    }
    ctx->pc = 0x2619FCu;
    {
        const bool branch_taken_0x2619fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619FCu;
        // 0x261a00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619fc) {
            ctx->pc = 0x2619C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2619c8;
        }
    }
    ctx->pc = 0x261A04u;
label_261a04:
    // 0x261a04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x261a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261a08:
    // 0x261a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261a0c:
    // 0x261a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x261a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_261a10:
    // 0x261a10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x261a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261a14:
    // 0x261a14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x261a14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_261a18:
    // 0x261a18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x261a18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261a1c:
    // 0x261a1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x261a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_261a20:
    // 0x261a20: 0x3e00008  jr          $ra
label_261a24:
    if (ctx->pc == 0x261A24u) {
        ctx->pc = 0x261A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A20u;
        // 0x261a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A28u;
        goto label_fallthrough_0x261a20;
    }
    ctx->pc = 0x261A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A20u;
        // 0x261a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261a20:
    ctx->pc = 0x261A28u;
}
