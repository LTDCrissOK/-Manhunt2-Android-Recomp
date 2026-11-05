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

// Function: sub_002F9310
// Address: 0x2f9310 - 0x2f9788
void sub_002F9310_0x2f9310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9310_0x2f9310");
#endif

    switch (ctx->pc) {
        case 0x2f9310u: goto label_2f9310;
        case 0x2f9314u: goto label_2f9314;
        case 0x2f9318u: goto label_2f9318;
        case 0x2f931cu: goto label_2f931c;
        case 0x2f9320u: goto label_2f9320;
        case 0x2f9324u: goto label_2f9324;
        case 0x2f9328u: goto label_2f9328;
        case 0x2f932cu: goto label_2f932c;
        case 0x2f9330u: goto label_2f9330;
        case 0x2f9334u: goto label_2f9334;
        case 0x2f9338u: goto label_2f9338;
        case 0x2f933cu: goto label_2f933c;
        case 0x2f9340u: goto label_2f9340;
        case 0x2f9344u: goto label_2f9344;
        case 0x2f9348u: goto label_2f9348;
        case 0x2f934cu: goto label_2f934c;
        case 0x2f9350u: goto label_2f9350;
        case 0x2f9354u: goto label_2f9354;
        case 0x2f9358u: goto label_2f9358;
        case 0x2f935cu: goto label_2f935c;
        case 0x2f9360u: goto label_2f9360;
        case 0x2f9364u: goto label_2f9364;
        case 0x2f9368u: goto label_2f9368;
        case 0x2f936cu: goto label_2f936c;
        case 0x2f9370u: goto label_2f9370;
        case 0x2f9374u: goto label_2f9374;
        case 0x2f9378u: goto label_2f9378;
        case 0x2f937cu: goto label_2f937c;
        case 0x2f9380u: goto label_2f9380;
        case 0x2f9384u: goto label_2f9384;
        case 0x2f9388u: goto label_2f9388;
        case 0x2f938cu: goto label_2f938c;
        case 0x2f9390u: goto label_2f9390;
        case 0x2f9394u: goto label_2f9394;
        case 0x2f9398u: goto label_2f9398;
        case 0x2f939cu: goto label_2f939c;
        case 0x2f93a0u: goto label_2f93a0;
        case 0x2f93a4u: goto label_2f93a4;
        case 0x2f93a8u: goto label_2f93a8;
        case 0x2f93acu: goto label_2f93ac;
        case 0x2f93b0u: goto label_2f93b0;
        case 0x2f93b4u: goto label_2f93b4;
        case 0x2f93b8u: goto label_2f93b8;
        case 0x2f93bcu: goto label_2f93bc;
        case 0x2f93c0u: goto label_2f93c0;
        case 0x2f93c4u: goto label_2f93c4;
        case 0x2f93c8u: goto label_2f93c8;
        case 0x2f93ccu: goto label_2f93cc;
        case 0x2f93d0u: goto label_2f93d0;
        case 0x2f93d4u: goto label_2f93d4;
        case 0x2f93d8u: goto label_2f93d8;
        case 0x2f93dcu: goto label_2f93dc;
        case 0x2f93e0u: goto label_2f93e0;
        case 0x2f93e4u: goto label_2f93e4;
        case 0x2f93e8u: goto label_2f93e8;
        case 0x2f93ecu: goto label_2f93ec;
        case 0x2f93f0u: goto label_2f93f0;
        case 0x2f93f4u: goto label_2f93f4;
        case 0x2f93f8u: goto label_2f93f8;
        case 0x2f93fcu: goto label_2f93fc;
        case 0x2f9400u: goto label_2f9400;
        case 0x2f9404u: goto label_2f9404;
        case 0x2f9408u: goto label_2f9408;
        case 0x2f940cu: goto label_2f940c;
        case 0x2f9410u: goto label_2f9410;
        case 0x2f9414u: goto label_2f9414;
        case 0x2f9418u: goto label_2f9418;
        case 0x2f941cu: goto label_2f941c;
        case 0x2f9420u: goto label_2f9420;
        case 0x2f9424u: goto label_2f9424;
        case 0x2f9428u: goto label_2f9428;
        case 0x2f942cu: goto label_2f942c;
        case 0x2f9430u: goto label_2f9430;
        case 0x2f9434u: goto label_2f9434;
        case 0x2f9438u: goto label_2f9438;
        case 0x2f943cu: goto label_2f943c;
        case 0x2f9440u: goto label_2f9440;
        case 0x2f9444u: goto label_2f9444;
        case 0x2f9448u: goto label_2f9448;
        case 0x2f944cu: goto label_2f944c;
        case 0x2f9450u: goto label_2f9450;
        case 0x2f9454u: goto label_2f9454;
        case 0x2f9458u: goto label_2f9458;
        case 0x2f945cu: goto label_2f945c;
        case 0x2f9460u: goto label_2f9460;
        case 0x2f9464u: goto label_2f9464;
        case 0x2f9468u: goto label_2f9468;
        case 0x2f946cu: goto label_2f946c;
        case 0x2f9470u: goto label_2f9470;
        case 0x2f9474u: goto label_2f9474;
        case 0x2f9478u: goto label_2f9478;
        case 0x2f947cu: goto label_2f947c;
        case 0x2f9480u: goto label_2f9480;
        case 0x2f9484u: goto label_2f9484;
        case 0x2f9488u: goto label_2f9488;
        case 0x2f948cu: goto label_2f948c;
        case 0x2f9490u: goto label_2f9490;
        case 0x2f9494u: goto label_2f9494;
        case 0x2f9498u: goto label_2f9498;
        case 0x2f949cu: goto label_2f949c;
        case 0x2f94a0u: goto label_2f94a0;
        case 0x2f94a4u: goto label_2f94a4;
        case 0x2f94a8u: goto label_2f94a8;
        case 0x2f94acu: goto label_2f94ac;
        case 0x2f94b0u: goto label_2f94b0;
        case 0x2f94b4u: goto label_2f94b4;
        case 0x2f94b8u: goto label_2f94b8;
        case 0x2f94bcu: goto label_2f94bc;
        case 0x2f94c0u: goto label_2f94c0;
        case 0x2f94c4u: goto label_2f94c4;
        case 0x2f94c8u: goto label_2f94c8;
        case 0x2f94ccu: goto label_2f94cc;
        case 0x2f94d0u: goto label_2f94d0;
        case 0x2f94d4u: goto label_2f94d4;
        case 0x2f94d8u: goto label_2f94d8;
        case 0x2f94dcu: goto label_2f94dc;
        case 0x2f94e0u: goto label_2f94e0;
        case 0x2f94e4u: goto label_2f94e4;
        case 0x2f94e8u: goto label_2f94e8;
        case 0x2f94ecu: goto label_2f94ec;
        case 0x2f94f0u: goto label_2f94f0;
        case 0x2f94f4u: goto label_2f94f4;
        case 0x2f94f8u: goto label_2f94f8;
        case 0x2f94fcu: goto label_2f94fc;
        case 0x2f9500u: goto label_2f9500;
        case 0x2f9504u: goto label_2f9504;
        case 0x2f9508u: goto label_2f9508;
        case 0x2f950cu: goto label_2f950c;
        case 0x2f9510u: goto label_2f9510;
        case 0x2f9514u: goto label_2f9514;
        case 0x2f9518u: goto label_2f9518;
        case 0x2f951cu: goto label_2f951c;
        case 0x2f9520u: goto label_2f9520;
        case 0x2f9524u: goto label_2f9524;
        case 0x2f9528u: goto label_2f9528;
        case 0x2f952cu: goto label_2f952c;
        case 0x2f9530u: goto label_2f9530;
        case 0x2f9534u: goto label_2f9534;
        case 0x2f9538u: goto label_2f9538;
        case 0x2f953cu: goto label_2f953c;
        case 0x2f9540u: goto label_2f9540;
        case 0x2f9544u: goto label_2f9544;
        case 0x2f9548u: goto label_2f9548;
        case 0x2f954cu: goto label_2f954c;
        case 0x2f9550u: goto label_2f9550;
        case 0x2f9554u: goto label_2f9554;
        case 0x2f9558u: goto label_2f9558;
        case 0x2f955cu: goto label_2f955c;
        case 0x2f9560u: goto label_2f9560;
        case 0x2f9564u: goto label_2f9564;
        case 0x2f9568u: goto label_2f9568;
        case 0x2f956cu: goto label_2f956c;
        case 0x2f9570u: goto label_2f9570;
        case 0x2f9574u: goto label_2f9574;
        case 0x2f9578u: goto label_2f9578;
        case 0x2f957cu: goto label_2f957c;
        case 0x2f9580u: goto label_2f9580;
        case 0x2f9584u: goto label_2f9584;
        case 0x2f9588u: goto label_2f9588;
        case 0x2f958cu: goto label_2f958c;
        case 0x2f9590u: goto label_2f9590;
        case 0x2f9594u: goto label_2f9594;
        case 0x2f9598u: goto label_2f9598;
        case 0x2f959cu: goto label_2f959c;
        case 0x2f95a0u: goto label_2f95a0;
        case 0x2f95a4u: goto label_2f95a4;
        case 0x2f95a8u: goto label_2f95a8;
        case 0x2f95acu: goto label_2f95ac;
        case 0x2f95b0u: goto label_2f95b0;
        case 0x2f95b4u: goto label_2f95b4;
        case 0x2f95b8u: goto label_2f95b8;
        case 0x2f95bcu: goto label_2f95bc;
        case 0x2f95c0u: goto label_2f95c0;
        case 0x2f95c4u: goto label_2f95c4;
        case 0x2f95c8u: goto label_2f95c8;
        case 0x2f95ccu: goto label_2f95cc;
        case 0x2f95d0u: goto label_2f95d0;
        case 0x2f95d4u: goto label_2f95d4;
        case 0x2f95d8u: goto label_2f95d8;
        case 0x2f95dcu: goto label_2f95dc;
        case 0x2f95e0u: goto label_2f95e0;
        case 0x2f95e4u: goto label_2f95e4;
        case 0x2f95e8u: goto label_2f95e8;
        case 0x2f95ecu: goto label_2f95ec;
        case 0x2f95f0u: goto label_2f95f0;
        case 0x2f95f4u: goto label_2f95f4;
        case 0x2f95f8u: goto label_2f95f8;
        case 0x2f95fcu: goto label_2f95fc;
        case 0x2f9600u: goto label_2f9600;
        case 0x2f9604u: goto label_2f9604;
        case 0x2f9608u: goto label_2f9608;
        case 0x2f960cu: goto label_2f960c;
        case 0x2f9610u: goto label_2f9610;
        case 0x2f9614u: goto label_2f9614;
        case 0x2f9618u: goto label_2f9618;
        case 0x2f961cu: goto label_2f961c;
        case 0x2f9620u: goto label_2f9620;
        case 0x2f9624u: goto label_2f9624;
        case 0x2f9628u: goto label_2f9628;
        case 0x2f962cu: goto label_2f962c;
        case 0x2f9630u: goto label_2f9630;
        case 0x2f9634u: goto label_2f9634;
        case 0x2f9638u: goto label_2f9638;
        case 0x2f963cu: goto label_2f963c;
        case 0x2f9640u: goto label_2f9640;
        case 0x2f9644u: goto label_2f9644;
        case 0x2f9648u: goto label_2f9648;
        case 0x2f964cu: goto label_2f964c;
        case 0x2f9650u: goto label_2f9650;
        case 0x2f9654u: goto label_2f9654;
        case 0x2f9658u: goto label_2f9658;
        case 0x2f965cu: goto label_2f965c;
        case 0x2f9660u: goto label_2f9660;
        case 0x2f9664u: goto label_2f9664;
        case 0x2f9668u: goto label_2f9668;
        case 0x2f966cu: goto label_2f966c;
        case 0x2f9670u: goto label_2f9670;
        case 0x2f9674u: goto label_2f9674;
        case 0x2f9678u: goto label_2f9678;
        case 0x2f967cu: goto label_2f967c;
        case 0x2f9680u: goto label_2f9680;
        case 0x2f9684u: goto label_2f9684;
        case 0x2f9688u: goto label_2f9688;
        case 0x2f968cu: goto label_2f968c;
        case 0x2f9690u: goto label_2f9690;
        case 0x2f9694u: goto label_2f9694;
        case 0x2f9698u: goto label_2f9698;
        case 0x2f969cu: goto label_2f969c;
        case 0x2f96a0u: goto label_2f96a0;
        case 0x2f96a4u: goto label_2f96a4;
        case 0x2f96a8u: goto label_2f96a8;
        case 0x2f96acu: goto label_2f96ac;
        case 0x2f96b0u: goto label_2f96b0;
        case 0x2f96b4u: goto label_2f96b4;
        case 0x2f96b8u: goto label_2f96b8;
        case 0x2f96bcu: goto label_2f96bc;
        case 0x2f96c0u: goto label_2f96c0;
        case 0x2f96c4u: goto label_2f96c4;
        case 0x2f96c8u: goto label_2f96c8;
        case 0x2f96ccu: goto label_2f96cc;
        case 0x2f96d0u: goto label_2f96d0;
        case 0x2f96d4u: goto label_2f96d4;
        case 0x2f96d8u: goto label_2f96d8;
        case 0x2f96dcu: goto label_2f96dc;
        case 0x2f96e0u: goto label_2f96e0;
        case 0x2f96e4u: goto label_2f96e4;
        case 0x2f96e8u: goto label_2f96e8;
        case 0x2f96ecu: goto label_2f96ec;
        case 0x2f96f0u: goto label_2f96f0;
        case 0x2f96f4u: goto label_2f96f4;
        case 0x2f96f8u: goto label_2f96f8;
        case 0x2f96fcu: goto label_2f96fc;
        case 0x2f9700u: goto label_2f9700;
        case 0x2f9704u: goto label_2f9704;
        case 0x2f9708u: goto label_2f9708;
        case 0x2f970cu: goto label_2f970c;
        case 0x2f9710u: goto label_2f9710;
        case 0x2f9714u: goto label_2f9714;
        case 0x2f9718u: goto label_2f9718;
        case 0x2f971cu: goto label_2f971c;
        case 0x2f9720u: goto label_2f9720;
        case 0x2f9724u: goto label_2f9724;
        case 0x2f9728u: goto label_2f9728;
        case 0x2f972cu: goto label_2f972c;
        case 0x2f9730u: goto label_2f9730;
        case 0x2f9734u: goto label_2f9734;
        case 0x2f9738u: goto label_2f9738;
        case 0x2f973cu: goto label_2f973c;
        case 0x2f9740u: goto label_2f9740;
        case 0x2f9744u: goto label_2f9744;
        case 0x2f9748u: goto label_2f9748;
        case 0x2f974cu: goto label_2f974c;
        case 0x2f9750u: goto label_2f9750;
        case 0x2f9754u: goto label_2f9754;
        case 0x2f9758u: goto label_2f9758;
        case 0x2f975cu: goto label_2f975c;
        case 0x2f9760u: goto label_2f9760;
        case 0x2f9764u: goto label_2f9764;
        case 0x2f9768u: goto label_2f9768;
        case 0x2f976cu: goto label_2f976c;
        case 0x2f9770u: goto label_2f9770;
        case 0x2f9774u: goto label_2f9774;
        case 0x2f9778u: goto label_2f9778;
        case 0x2f977cu: goto label_2f977c;
        case 0x2f9780u: goto label_2f9780;
        case 0x2f9784u: goto label_2f9784;
        default: break;
    }

    ctx->pc = 0x2f9310u;

label_2f9310:
    // 0x2f9310: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f9310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2f9314:
    // 0x2f9314: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2f9314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_2f9318:
    // 0x2f9318: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2f9318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_2f931c:
    // 0x2f931c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f931cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9320:
    // 0x2f9320: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2f9320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_2f9324:
    // 0x2f9324: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f9324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f9328:
    // 0x2f9328: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2f9328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_2f932c:
    // 0x2f932c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2f932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_2f9330:
    // 0x2f9330: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2f9330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_2f9334:
    // 0x2f9334: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2f9334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2f9338:
    // 0x2f9338: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2f9338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_2f933c:
    // 0x2f933c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2f933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2f9340:
    // 0x2f9340: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2f9340u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2f9344:
    // 0x2f9344: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2f9344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2f9348:
    // 0x2f9348: 0xc0b9400  jal         func_2E5000
label_2f934c:
    if (ctx->pc == 0x2F934Cu) {
        ctx->pc = 0x2F934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9348u;
        // 0x2f934c: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9350u;
        goto label_2f9350;
    }
    ctx->pc = 0x2F9348u;
    SET_GPR_U32(ctx, 31, 0x2F9350u);
    ctx->pc = 0x2F934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9348u;
    // 0x2f934c: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2F9348u, 0x2F9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9350u;
label_2f9350:
    // 0x2f9350: 0x14400101  bnez        $v0, . + 4 + (0x101 << 2)
label_2f9354:
    if (ctx->pc == 0x2F9354u) {
        ctx->pc = 0x2F9354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9350u;
        // 0x2f9354: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9358u;
        goto label_2f9358;
    }
    ctx->pc = 0x2F9350u;
    {
        const bool branch_taken_0x2f9350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9350u;
        // 0x2f9354: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9350) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9358u;
label_2f9358:
    // 0x2f9358: 0xc0b93fe  jal         func_2E4FF8
label_2f935c:
    if (ctx->pc == 0x2F935Cu) {
        ctx->pc = 0x2F935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9358u;
        // 0x2f935c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9360u;
        goto label_2f9360;
    }
    ctx->pc = 0x2F9358u;
    SET_GPR_U32(ctx, 31, 0x2F9360u);
    ctx->pc = 0x2F935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9358u;
    // 0x2f935c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2F9358u, 0x2F9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9360u;
label_2f9360:
    // 0x2f9360: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
label_2f9364:
    if (ctx->pc == 0x2F9364u) {
        ctx->pc = 0x2F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9360u;
        // 0x2f9364: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9368u;
        goto label_2f9368;
    }
    ctx->pc = 0x2F9360u;
    {
        const bool branch_taken_0x2f9360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9360u;
        // 0x2f9364: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9360) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9368u;
label_2f9368:
    // 0x2f9368: 0xc08f672  jal         func_23D9C8
label_2f936c:
    if (ctx->pc == 0x2F936Cu) {
        ctx->pc = 0x2F936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9368u;
        // 0x2f936c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9370u;
        goto label_2f9370;
    }
    ctx->pc = 0x2F9368u;
    SET_GPR_U32(ctx, 31, 0x2F9370u);
    ctx->pc = 0x2F936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9368u;
    // 0x2f936c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2F9368u, 0x2F9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9370u;
label_2f9370:
    // 0x2f9370: 0x144000f9  bnez        $v0, . + 4 + (0xF9 << 2)
label_2f9374:
    if (ctx->pc == 0x2F9374u) {
        ctx->pc = 0x2F9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9370u;
        // 0x2f9374: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9378u;
        goto label_2f9378;
    }
    ctx->pc = 0x2F9370u;
    {
        const bool branch_taken_0x2f9370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9370u;
        // 0x2f9374: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9370) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9378u;
label_2f9378:
    // 0x2f9378: 0xc08f68a  jal         func_23DA28
label_2f937c:
    if (ctx->pc == 0x2F937Cu) {
        ctx->pc = 0x2F937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9378u;
        // 0x2f937c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9380u;
        goto label_2f9380;
    }
    ctx->pc = 0x2F9378u;
    SET_GPR_U32(ctx, 31, 0x2F9380u);
    ctx->pc = 0x2F937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9378u;
    // 0x2f937c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2F9378u, 0x2F9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9380u;
label_2f9380:
    // 0x2f9380: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
label_2f9384:
    if (ctx->pc == 0x2F9384u) {
        ctx->pc = 0x2F9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9380u;
        // 0x2f9384: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9388u;
        goto label_2f9388;
    }
    ctx->pc = 0x2F9380u;
    {
        const bool branch_taken_0x2f9380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9380u;
        // 0x2f9384: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9380) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9388u;
label_2f9388:
    // 0x2f9388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f938c:
    // 0x2f938c: 0xc0899bc  jal         func_2266F0
label_2f9390:
    if (ctx->pc == 0x2F9390u) {
        ctx->pc = 0x2F9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F938Cu;
        // 0x2f9390: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9394u;
        goto label_2f9394;
    }
    ctx->pc = 0x2F938Cu;
    SET_GPR_U32(ctx, 31, 0x2F9394u);
    ctx->pc = 0x2F9390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F938Cu;
    // 0x2f9390: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F938Cu, 0x2F9394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9394u;
label_2f9394:
    // 0x2f9394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f9394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9398:
    // 0x2f9398: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_2f939c:
    if (ctx->pc == 0x2F939Cu) {
        ctx->pc = 0x2F939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9398u;
        // 0x2f939c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93A0u;
        goto label_2f93a0;
    }
    ctx->pc = 0x2F9398u;
    {
        const bool branch_taken_0x2f9398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9398u;
        // 0x2f939c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9398) {
            ctx->pc = 0x2F9410u;
            goto label_2f9410;
        }
    }
    ctx->pc = 0x2F93A0u;
label_2f93a0:
    // 0x2f93a0: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x2f93a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_2f93a4:
    // 0x2f93a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2f93a8:
    if (ctx->pc == 0x2F93A8u) {
        ctx->pc = 0x2F93ACu;
        goto label_2f93ac;
    }
    ctx->pc = 0x2F93A4u;
    {
        const bool branch_taken_0x2f93a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f93a4) {
            ctx->pc = 0x2F9410u;
            goto label_2f9410;
        }
    }
    ctx->pc = 0x2F93ACu;
label_2f93ac:
    // 0x2f93ac: 0xc08da92  jal         func_236A48
label_2f93b0:
    if (ctx->pc == 0x2F93B0u) {
        ctx->pc = 0x2F93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93ACu;
        // 0x2f93b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93B4u;
        goto label_2f93b4;
    }
    ctx->pc = 0x2F93ACu;
    SET_GPR_U32(ctx, 31, 0x2F93B4u);
    ctx->pc = 0x2F93B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F93ACu;
    // 0x2f93b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F93ACu, 0x2F93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F93B4u;
label_2f93b4:
    // 0x2f93b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2f93b8:
    if (ctx->pc == 0x2F93B8u) {
        ctx->pc = 0x2F93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93B4u;
        // 0x2f93b8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93BCu;
        goto label_2f93bc;
    }
    ctx->pc = 0x2F93B4u;
    {
        const bool branch_taken_0x2f93b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f93b4) {
            ctx->pc = 0x2F93B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F93B4u;
            // 0x2f93b8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93D4u;
            goto label_2f93d4;
        }
    }
    ctx->pc = 0x2F93BCu;
label_2f93bc:
    // 0x2f93bc: 0xc097f26  jal         func_25FC98
label_2f93c0:
    if (ctx->pc == 0x2F93C0u) {
        ctx->pc = 0x2F93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93BCu;
        // 0x2f93c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93C4u;
        goto label_2f93c4;
    }
    ctx->pc = 0x2F93BCu;
    SET_GPR_U32(ctx, 31, 0x2F93C4u);
    ctx->pc = 0x2F93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F93BCu;
    // 0x2f93c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F93BCu, 0x2F93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F93C4u;
label_2f93c4:
    // 0x2f93c4: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2f93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2f93c8:
    // 0x2f93c8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2f93cc:
    if (ctx->pc == 0x2F93CCu) {
        ctx->pc = 0x2F93D0u;
        goto label_2f93d0;
    }
    ctx->pc = 0x2F93C8u;
    {
        const bool branch_taken_0x2f93c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f93c8) {
            ctx->pc = 0x2F93DCu;
            goto label_2f93dc;
        }
    }
    ctx->pc = 0x2F93D0u;
label_2f93d0:
    // 0x2f93d0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2f93d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f93d4:
    // 0x2f93d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f93d8:
    if (ctx->pc == 0x2F93D8u) {
        ctx->pc = 0x2F93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93D4u;
        // 0x2f93d8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93DCu;
        goto label_2f93dc;
    }
    ctx->pc = 0x2F93D4u;
    {
        const bool branch_taken_0x2f93d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93D4u;
        // 0x2f93d8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93d4) {
            ctx->pc = 0x2F9410u;
            goto label_2f9410;
        }
    }
    ctx->pc = 0x2F93DCu;
label_2f93dc:
    // 0x2f93dc: 0xc08dab6  jal         func_236AD8
label_2f93e0:
    if (ctx->pc == 0x2F93E0u) {
        ctx->pc = 0x2F93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93DCu;
        // 0x2f93e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93E4u;
        goto label_2f93e4;
    }
    ctx->pc = 0x2F93DCu;
    SET_GPR_U32(ctx, 31, 0x2F93E4u);
    ctx->pc = 0x2F93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F93DCu;
    // 0x2f93e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F93DCu, 0x2F93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F93E4u;
label_2f93e4:
    // 0x2f93e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f93e8:
    if (ctx->pc == 0x2F93E8u) {
        ctx->pc = 0x2F93ECu;
        goto label_2f93ec;
    }
    ctx->pc = 0x2F93E4u;
    {
        const bool branch_taken_0x2f93e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f93e4) {
            ctx->pc = 0x2F9410u;
            goto label_2f9410;
        }
    }
    ctx->pc = 0x2F93ECu;
label_2f93ec:
    // 0x2f93ec: 0x8e500274  lw          $s0, 0x274($s2)
    ctx->pc = 0x2f93ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_2f93f0:
    // 0x2f93f0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2f93f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f93f4:
    // 0x2f93f4: 0xc0d8de2  jal         func_363788
label_2f93f8:
    if (ctx->pc == 0x2F93F8u) {
        ctx->pc = 0x2F93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93F4u;
        // 0x2f93f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F93FCu;
        goto label_2f93fc;
    }
    ctx->pc = 0x2F93F4u;
    SET_GPR_U32(ctx, 31, 0x2F93FCu);
    ctx->pc = 0x2F93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F93F4u;
    // 0x2f93f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2F93F4u, 0x2F93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F93FCu;
label_2f93fc:
    // 0x2f93fc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2f93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2f9400:
    // 0x2f9400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f9404:
    if (ctx->pc == 0x2F9404u) {
        ctx->pc = 0x2F9408u;
        goto label_2f9408;
    }
    ctx->pc = 0x2F9400u;
    {
        const bool branch_taken_0x2f9400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9400) {
            ctx->pc = 0x2F9410u;
            goto label_2f9410;
        }
    }
    ctx->pc = 0x2F9408u;
label_2f9408:
    // 0x2f9408: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2f9408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2f940c:
    // 0x2f940c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2f940cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f9410:
    // 0x2f9410: 0x526000d0  beql        $s3, $zero, . + 4 + (0xD0 << 2)
label_2f9414:
    if (ctx->pc == 0x2F9414u) {
        ctx->pc = 0x2F9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9410u;
        // 0x2f9414: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9418u;
        goto label_2f9418;
    }
    ctx->pc = 0x2F9410u;
    {
        const bool branch_taken_0x2f9410 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9410) {
            ctx->pc = 0x2F9414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9410u;
            // 0x2f9414: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9754u;
            goto label_2f9754;
        }
    }
    ctx->pc = 0x2F9418u;
label_2f9418:
    // 0x2f9418: 0xc09876c  jal         func_261DB0
label_2f941c:
    if (ctx->pc == 0x2F941Cu) {
        ctx->pc = 0x2F941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9418u;
        // 0x2f941c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9420u;
        goto label_2f9420;
    }
    ctx->pc = 0x2F9418u;
    SET_GPR_U32(ctx, 31, 0x2F9420u);
    ctx->pc = 0x2F941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9418u;
    // 0x2f941c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2F9418u, 0x2F9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9420u;
label_2f9420:
    // 0x2f9420: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x2f9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_2f9424:
    // 0x2f9424: 0x504300cb  beql        $v0, $v1, . + 4 + (0xCB << 2)
label_2f9428:
    if (ctx->pc == 0x2F9428u) {
        ctx->pc = 0x2F9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9424u;
        // 0x2f9428: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F942Cu;
        goto label_2f942c;
    }
    ctx->pc = 0x2F9424u;
    {
        const bool branch_taken_0x2f9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9424) {
            ctx->pc = 0x2F9428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9424u;
            // 0x2f9428: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9754u;
            goto label_2f9754;
        }
    }
    ctx->pc = 0x2F942Cu;
label_2f942c:
    // 0x2f942c: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_2f9430:
    if (ctx->pc == 0x2F9430u) {
        ctx->pc = 0x2F9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F942Cu;
        // 0x2f9430: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9434u;
        goto label_2f9434;
    }
    ctx->pc = 0x2F942Cu;
    {
        const bool branch_taken_0x2f942c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F942Cu;
        // 0x2f9430: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f942c) {
            ctx->pc = 0x2F9464u;
            goto label_2f9464;
        }
    }
    ctx->pc = 0x2F9434u;
label_2f9434:
    // 0x2f9434: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2f9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2f9438:
    // 0x2f9438: 0x504000c6  beql        $v0, $zero, . + 4 + (0xC6 << 2)
label_2f943c:
    if (ctx->pc == 0x2F943Cu) {
        ctx->pc = 0x2F943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9438u;
        // 0x2f943c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9440u;
        goto label_2f9440;
    }
    ctx->pc = 0x2F9438u;
    {
        const bool branch_taken_0x2f9438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9438) {
            ctx->pc = 0x2F943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9438u;
            // 0x2f943c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9754u;
            goto label_2f9754;
        }
    }
    ctx->pc = 0x2F9440u;
label_2f9440:
    // 0x2f9440: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2f9440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f9444:
    // 0x2f9444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f9444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f9448:
    // 0x2f9448: 0x0  nop
    ctx->pc = 0x2f9448u;
    // NOP
label_2f944c:
    // 0x2f944c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f944cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f9450:
    // 0x2f9450: 0x0  nop
    ctx->pc = 0x2f9450u;
    // NOP
label_2f9454:
    // 0x2f9454: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f9458:
    if (ctx->pc == 0x2F9458u) {
        ctx->pc = 0x2F9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9454u;
        // 0x2f9458: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F945Cu;
        goto label_2f945c;
    }
    ctx->pc = 0x2F9454u;
    {
        const bool branch_taken_0x2f9454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9454u;
        // 0x2f9458: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9454) {
            ctx->pc = 0x2F9464u;
            goto label_2f9464;
        }
    }
    ctx->pc = 0x2F945Cu;
label_2f945c:
    // 0x2f945c: 0x100000bd  b           . + 4 + (0xBD << 2)
label_2f9460:
    if (ctx->pc == 0x2F9460u) {
        ctx->pc = 0x2F9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F945Cu;
        // 0x2f9460: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9464u;
        goto label_2f9464;
    }
    ctx->pc = 0x2F945Cu;
    {
        const bool branch_taken_0x2f945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F945Cu;
        // 0x2f9460: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f945c) {
            ctx->pc = 0x2F9754u;
            goto label_2f9754;
        }
    }
    ctx->pc = 0x2F9464u;
label_2f9464:
    // 0x2f9464: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x2f9464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
label_2f9468:
    // 0x2f9468: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_2f946c:
    if (ctx->pc == 0x2F946Cu) {
        ctx->pc = 0x2F946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9468u;
        // 0x2f946c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9470u;
        goto label_2f9470;
    }
    ctx->pc = 0x2F9468u;
    {
        const bool branch_taken_0x2f9468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9468u;
        // 0x2f946c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9468) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9470u;
label_2f9470:
    // 0x2f9470: 0xc09876c  jal         func_261DB0
label_2f9474:
    if (ctx->pc == 0x2F9474u) {
        ctx->pc = 0x2F9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9470u;
        // 0x2f9474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9478u;
        goto label_2f9478;
    }
    ctx->pc = 0x2F9470u;
    SET_GPR_U32(ctx, 31, 0x2F9478u);
    ctx->pc = 0x2F9474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9470u;
    // 0x2f9474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2F9470u, 0x2F9478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9478u;
label_2f9478:
    // 0x2f9478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f9478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f947c:
    // 0x2f947c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f9480:
    // 0x2f9480: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2f9484:
    if (ctx->pc == 0x2F9484u) {
        ctx->pc = 0x2F9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9480u;
        // 0x2f9484: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9488u;
        goto label_2f9488;
    }
    ctx->pc = 0x2F9480u;
    {
        const bool branch_taken_0x2f9480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9480u;
        // 0x2f9484: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9480) {
            ctx->pc = 0x2F9490u;
            goto label_2f9490;
        }
    }
    ctx->pc = 0x2F9488u;
label_2f9488:
    // 0x2f9488: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f948c:
    if (ctx->pc == 0x2F948Cu) {
        ctx->pc = 0x2F948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9488u;
        // 0x2f948c: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9490u;
        goto label_2f9490;
    }
    ctx->pc = 0x2F9488u;
    {
        const bool branch_taken_0x2f9488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9488u;
        // 0x2f948c: 0x24040077  addiu       $a0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9488) {
            ctx->pc = 0x2F94C4u;
            goto label_2f94c4;
        }
    }
    ctx->pc = 0x2F9490u;
label_2f9490:
    // 0x2f9490: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2f9494:
    if (ctx->pc == 0x2F9494u) {
        ctx->pc = 0x2F9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9490u;
        // 0x2f9494: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9498u;
        goto label_2f9498;
    }
    ctx->pc = 0x2F9490u;
    {
        const bool branch_taken_0x2f9490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9490u;
        // 0x2f9494: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9490) {
            ctx->pc = 0x2F94C4u;
            goto label_2f94c4;
        }
    }
    ctx->pc = 0x2F9498u;
label_2f9498:
    // 0x2f9498: 0xc097f26  jal         func_25FC98
label_2f949c:
    if (ctx->pc == 0x2F949Cu) {
        ctx->pc = 0x2F949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9498u;
        // 0x2f949c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94A0u;
        goto label_2f94a0;
    }
    ctx->pc = 0x2F9498u;
    SET_GPR_U32(ctx, 31, 0x2F94A0u);
    ctx->pc = 0x2F949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9498u;
    // 0x2f949c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F9498u, 0x2F94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94A0u;
label_2f94a0:
    // 0x2f94a0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2f94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2f94a4:
    // 0x2f94a4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2f94a8:
    if (ctx->pc == 0x2F94A8u) {
        ctx->pc = 0x2F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94A4u;
        // 0x2f94a8: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94ACu;
        goto label_2f94ac;
    }
    ctx->pc = 0x2F94A4u;
    {
        const bool branch_taken_0x2f94a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94A4u;
        // 0x2f94a8: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94a4) {
            ctx->pc = 0x2F94C4u;
            goto label_2f94c4;
        }
    }
    ctx->pc = 0x2F94ACu;
label_2f94ac:
    // 0x2f94ac: 0xc097f26  jal         func_25FC98
label_2f94b0:
    if (ctx->pc == 0x2F94B0u) {
        ctx->pc = 0x2F94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94ACu;
        // 0x2f94b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94B4u;
        goto label_2f94b4;
    }
    ctx->pc = 0x2F94ACu;
    SET_GPR_U32(ctx, 31, 0x2F94B4u);
    ctx->pc = 0x2F94B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94ACu;
    // 0x2f94b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F94ACu, 0x2F94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94B4u;
label_2f94b4:
    // 0x2f94b4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2f94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2f94b8:
    // 0x2f94b8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2f94bc:
    if (ctx->pc == 0x2F94BCu) {
        ctx->pc = 0x2F94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94B8u;
        // 0x2f94bc: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94C0u;
        goto label_2f94c0;
    }
    ctx->pc = 0x2F94B8u;
    {
        const bool branch_taken_0x2f94b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f94b8) {
            ctx->pc = 0x2F94BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F94B8u;
            // 0x2f94bc: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F94D4u;
            goto label_2f94d4;
        }
    }
    ctx->pc = 0x2F94C0u;
label_2f94c0:
    // 0x2f94c0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2f94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2f94c4:
    // 0x2f94c4: 0xc097c12  jal         func_25F048
label_2f94c8:
    if (ctx->pc == 0x2F94C8u) {
        ctx->pc = 0x2F94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94C4u;
        // 0x2f94c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94CCu;
        goto label_2f94cc;
    }
    ctx->pc = 0x2F94C4u;
    SET_GPR_U32(ctx, 31, 0x2F94CCu);
    ctx->pc = 0x2F94C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94C4u;
    // 0x2f94c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F048u, 0x2F94C4u, 0x2F94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94CCu;
label_2f94cc:
    // 0x2f94cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f94d0:
    if (ctx->pc == 0x2F94D0u) {
        ctx->pc = 0x2F94D4u;
        goto label_2f94d4;
    }
    ctx->pc = 0x2F94CCu;
    {
        const bool branch_taken_0x2f94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f94cc) {
            ctx->pc = 0x2F94E4u;
            goto label_2f94e4;
        }
    }
    ctx->pc = 0x2F94D4u;
label_2f94d4:
    // 0x2f94d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f94d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f94d8:
    // 0x2f94d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2f94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2f94dc:
    // 0x2f94dc: 0xc0efed0  jal         func_3BFB40
label_2f94e0:
    if (ctx->pc == 0x2F94E0u) {
        ctx->pc = 0x2F94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94DCu;
        // 0x2f94e0: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94E4u;
        goto label_2f94e4;
    }
    ctx->pc = 0x2F94DCu;
    SET_GPR_U32(ctx, 31, 0x2F94E4u);
    ctx->pc = 0x2F94E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94DCu;
    // 0x2f94e0: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2F94DCu, 0x2F94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94E4u;
label_2f94e4:
    // 0x2f94e4: 0xc0be5e2  jal         func_2F9788
label_2f94e8:
    if (ctx->pc == 0x2F94E8u) {
        ctx->pc = 0x2F94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94E4u;
        // 0x2f94e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94ECu;
        goto label_2f94ec;
    }
    ctx->pc = 0x2F94E4u;
    SET_GPR_U32(ctx, 31, 0x2F94ECu);
    ctx->pc = 0x2F94E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94E4u;
    // 0x2f94e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2F94E4u, 0x2F94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94ECu;
label_2f94ec:
    // 0x2f94ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f94ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f94f0:
    // 0x2f94f0: 0x56e00008  bnel        $s7, $zero, . + 4 + (0x8 << 2)
label_2f94f4:
    if (ctx->pc == 0x2F94F4u) {
        ctx->pc = 0x2F94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94F0u;
        // 0x2f94f4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94F8u;
        goto label_2f94f8;
    }
    ctx->pc = 0x2F94F0u;
    {
        const bool branch_taken_0x2f94f0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f94f0) {
            ctx->pc = 0x2F94F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F94F0u;
            // 0x2f94f4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9514u;
            goto label_2f9514;
        }
    }
    ctx->pc = 0x2F94F8u;
label_2f94f8:
    // 0x2f94f8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2f94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2f94fc:
    // 0x2f94fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f94fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9500:
    // 0x2f9500: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x2f9500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
label_2f9504:
    // 0x2f9504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9508:
    // 0x2f9508: 0xc08006c  jal         func_2001B0
label_2f950c:
    if (ctx->pc == 0x2F950Cu) {
        ctx->pc = 0x2F950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9508u;
        // 0x2f950c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9510u;
        goto label_2f9510;
    }
    ctx->pc = 0x2F9508u;
    SET_GPR_U32(ctx, 31, 0x2F9510u);
    ctx->pc = 0x2F950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9508u;
    // 0x2f950c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2001B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2001B0u, 0x2F9508u, 0x2F9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9510u;
label_2f9510:
    // 0x2f9510: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2f9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2f9514:
    // 0x2f9514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9518:
    // 0x2f9518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f9518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f951c:
    // 0x2f951c: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f9520:
    // 0x2f9520: 0x40f809  jalr        $v0
label_2f9524:
    if (ctx->pc == 0x2F9524u) {
        ctx->pc = 0x2F9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9520u;
        // 0x2f9524: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9528u;
        goto label_2f9528;
    }
    ctx->pc = 0x2F9520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9528u);
        ctx->pc = 0x2F9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9520u;
        // 0x2f9524: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9520u, 0x2F9528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9528u;
label_2f9528:
    // 0x2f9528: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f952c:
    if (ctx->pc == 0x2F952Cu) {
        ctx->pc = 0x2F952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9528u;
        // 0x2f952c: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9530u;
        goto label_2f9530;
    }
    ctx->pc = 0x2F9528u;
    {
        const bool branch_taken_0x2f9528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9528) {
            ctx->pc = 0x2F952Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9528u;
            // 0x2f952c: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9544u;
            goto label_2f9544;
        }
    }
    ctx->pc = 0x2F9530u;
label_2f9530:
    // 0x2f9530: 0xc08f672  jal         func_23D9C8
label_2f9534:
    if (ctx->pc == 0x2F9534u) {
        ctx->pc = 0x2F9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9530u;
        // 0x2f9534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9538u;
        goto label_2f9538;
    }
    ctx->pc = 0x2F9530u;
    SET_GPR_U32(ctx, 31, 0x2F9538u);
    ctx->pc = 0x2F9534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9530u;
    // 0x2f9534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2F9530u, 0x2F9538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9538u;
label_2f9538:
    // 0x2f9538: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_2f953c:
    if (ctx->pc == 0x2F953Cu) {
        ctx->pc = 0x2F953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9538u;
        // 0x2f953c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9540u;
        goto label_2f9540;
    }
    ctx->pc = 0x2F9538u;
    {
        const bool branch_taken_0x2f9538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9538u;
        // 0x2f953c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9538) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9540u;
label_2f9540:
    // 0x2f9540: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2f9540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2f9544:
    // 0x2f9544: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2f9544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2f9548:
    // 0x2f9548: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x2f9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_2f954c:
    // 0x2f954c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f954cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f9550:
    // 0x2f9550: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f9554:
    if (ctx->pc == 0x2F9554u) {
        ctx->pc = 0x2F9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9550u;
        // 0x2f9554: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9558u;
        goto label_2f9558;
    }
    ctx->pc = 0x2F9550u;
    {
        const bool branch_taken_0x2f9550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9550u;
        // 0x2f9554: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9550) {
            ctx->pc = 0x2F9574u;
            goto label_2f9574;
        }
    }
    ctx->pc = 0x2F9558u;
label_2f9558:
    // 0x2f9558: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f9558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f955c:
    // 0x2f955c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f9560:
    if (ctx->pc == 0x2F9560u) {
        ctx->pc = 0x2F9564u;
        goto label_2f9564;
    }
    ctx->pc = 0x2F955Cu;
    {
        const bool branch_taken_0x2f955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f955c) {
            ctx->pc = 0x2F9574u;
            goto label_2f9574;
        }
    }
    ctx->pc = 0x2F9564u;
label_2f9564:
    // 0x2f9564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f9568:
    if (ctx->pc == 0x2F9568u) {
        ctx->pc = 0x2F9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9564u;
        // 0x2f9568: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F956Cu;
        goto label_2f956c;
    }
    ctx->pc = 0x2F9564u;
    {
        const bool branch_taken_0x2f9564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9564u;
        // 0x2f9568: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9564) {
            ctx->pc = 0x2F9574u;
            goto label_2f9574;
        }
    }
    ctx->pc = 0x2F956Cu;
label_2f956c:
    // 0x2f956c: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
label_2f9570:
    if (ctx->pc == 0x2F9570u) {
        ctx->pc = 0x2F9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F956Cu;
        // 0x2f9570: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9574u;
        goto label_2f9574;
    }
    ctx->pc = 0x2F956Cu;
    {
        const bool branch_taken_0x2f956c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F956Cu;
        // 0x2f9570: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f956c) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9574u;
label_2f9574:
    // 0x2f9574: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
label_2f9578:
    if (ctx->pc == 0x2F9578u) {
        ctx->pc = 0x2F9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9574u;
        // 0x2f9578: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F957Cu;
        goto label_2f957c;
    }
    ctx->pc = 0x2F9574u;
    {
        const bool branch_taken_0x2f9574 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9574) {
            ctx->pc = 0x2F9578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9574u;
            // 0x2f9578: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F958Cu;
            goto label_2f958c;
        }
    }
    ctx->pc = 0x2F957Cu;
label_2f957c:
    // 0x2f957c: 0xc0beb4c  jal         func_2FAD30
label_2f9580:
    if (ctx->pc == 0x2F9580u) {
        ctx->pc = 0x2F9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F957Cu;
        // 0x2f9580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9584u;
        goto label_2f9584;
    }
    ctx->pc = 0x2F957Cu;
    SET_GPR_U32(ctx, 31, 0x2F9584u);
    ctx->pc = 0x2F9580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F957Cu;
    // 0x2f9580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAD30u, 0x2F957Cu, 0x2F9584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9584u;
label_2f9584:
    // 0x2f9584: 0x10000074  b           . + 4 + (0x74 << 2)
label_2f9588:
    if (ctx->pc == 0x2F9588u) {
        ctx->pc = 0x2F9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9584u;
        // 0x2f9588: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F958Cu;
        goto label_2f958c;
    }
    ctx->pc = 0x2F9584u;
    {
        const bool branch_taken_0x2f9584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9584u;
        // 0x2f9588: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9584) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F958Cu;
label_2f958c:
    // 0x2f958c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f958cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9590:
    // 0x2f9590: 0x8e3411e8  lw          $s4, 0x11E8($s1)
    ctx->pc = 0x2f9590u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2f9594:
    // 0x2f9594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f9594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f9598:
    // 0x2f9598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f959c:
    if (ctx->pc == 0x2F959Cu) {
        ctx->pc = 0x2F959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9598u;
        // 0x2f959c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95A0u;
        goto label_2f95a0;
    }
    ctx->pc = 0x2F9598u;
    {
        const bool branch_taken_0x2f9598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9598u;
        // 0x2f959c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9598) {
            ctx->pc = 0x2F95A8u;
            goto label_2f95a8;
        }
    }
    ctx->pc = 0x2F95A0u;
label_2f95a0:
    // 0x2f95a0: 0x8e221208  lw          $v0, 0x1208($s1)
    ctx->pc = 0x2f95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4616)));
label_2f95a4:
    // 0x2f95a4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2f95a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f95a8:
    // 0x2f95a8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_2f95ac:
    if (ctx->pc == 0x2F95ACu) {
        ctx->pc = 0x2F95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95A8u;
        // 0x2f95ac: 0x8e30121c  lw          $s0, 0x121C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95B0u;
        goto label_2f95b0;
    }
    ctx->pc = 0x2F95A8u;
    {
        const bool branch_taken_0x2f95a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f95a8) {
            ctx->pc = 0x2F95ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F95A8u;
            // 0x2f95ac: 0x8e30121c  lw          $s0, 0x121C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F95C0u;
            goto label_2f95c0;
        }
    }
    ctx->pc = 0x2F95B0u;
label_2f95b0:
    // 0x2f95b0: 0x922211ba  lbu         $v0, 0x11BA($s1)
    ctx->pc = 0x2f95b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4538)));
label_2f95b4:
    // 0x2f95b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2f95b8:
    if (ctx->pc == 0x2F95B8u) {
        ctx->pc = 0x2F95BCu;
        goto label_2f95bc;
    }
    ctx->pc = 0x2F95B4u;
    {
        const bool branch_taken_0x2f95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f95b4) {
            ctx->pc = 0x2F95F4u;
            goto label_2f95f4;
        }
    }
    ctx->pc = 0x2F95BCu;
label_2f95bc:
    // 0x2f95bc: 0x8e30121c  lw          $s0, 0x121C($s1)
    ctx->pc = 0x2f95bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2f95c0:
    // 0x2f95c0: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_2f95c4:
    if (ctx->pc == 0x2F95C4u) {
        ctx->pc = 0x2F95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95C0u;
        // 0x2f95c4: 0x2143026  xor         $a2, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95C8u;
        goto label_2f95c8;
    }
    ctx->pc = 0x2F95C0u;
    {
        const bool branch_taken_0x2f95c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95C0u;
        // 0x2f95c4: 0x2143026  xor         $a2, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95c0) {
            ctx->pc = 0x2F9714u;
            goto label_2f9714;
        }
    }
    ctx->pc = 0x2F95C8u;
label_2f95c8:
    // 0x2f95c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f95c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f95cc:
    // 0x2f95cc: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2f95ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f95d0:
    // 0x2f95d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f95d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f95d4:
    // 0x2f95d4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2f95d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f95d8:
    // 0x2f95d8: 0xc0bdd46  jal         func_2F7518
label_2f95dc:
    if (ctx->pc == 0x2F95DCu) {
        ctx->pc = 0x2F95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95D8u;
        // 0x2f95dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95E0u;
        goto label_2f95e0;
    }
    ctx->pc = 0x2F95D8u;
    SET_GPR_U32(ctx, 31, 0x2F95E0u);
    ctx->pc = 0x2F95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F95D8u;
    // 0x2f95dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7518u, 0x2F95D8u, 0x2F95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95E0u;
label_2f95e0:
    // 0x2f95e0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_2f95e4:
    if (ctx->pc == 0x2F95E4u) {
        ctx->pc = 0x2F95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95E0u;
        // 0x2f95e4: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95E8u;
        goto label_2f95e8;
    }
    ctx->pc = 0x2F95E0u;
    {
        const bool branch_taken_0x2f95e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95E0u;
        // 0x2f95e4: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95e0) {
            ctx->pc = 0x2F9714u;
            goto label_2f9714;
        }
    }
    ctx->pc = 0x2F95E8u;
label_2f95e8:
    // 0x2f95e8: 0xae3011e8  sw          $s0, 0x11E8($s1)
    ctx->pc = 0x2f95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 16));
label_2f95ec:
    // 0x2f95ec: 0x10000049  b           . + 4 + (0x49 << 2)
label_2f95f0:
    if (ctx->pc == 0x2F95F0u) {
        ctx->pc = 0x2F95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95ECu;
        // 0x2f95f0: 0xae2211fc  sw          $v0, 0x11FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95F4u;
        goto label_2f95f4;
    }
    ctx->pc = 0x2F95ECu;
    {
        const bool branch_taken_0x2f95ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95ECu;
        // 0x2f95f0: 0xae2211fc  sw          $v0, 0x11FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95ec) {
            ctx->pc = 0x2F9714u;
            goto label_2f9714;
        }
    }
    ctx->pc = 0x2F95F4u;
label_2f95f4:
    // 0x2f95f4: 0xc0f6a96  jal         func_3DAA58
label_2f95f8:
    if (ctx->pc == 0x2F95F8u) {
        ctx->pc = 0x2F95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95F4u;
        // 0x2f95f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95FCu;
        goto label_2f95fc;
    }
    ctx->pc = 0x2F95F4u;
    SET_GPR_U32(ctx, 31, 0x2F95FCu);
    ctx->pc = 0x2F95F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F95F4u;
    // 0x2f95f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F95F4u, 0x2F95FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95FCu;
label_2f95fc:
    // 0x2f95fc: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2f95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_2f9600:
    // 0x2f9600: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f9600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2f9604:
    // 0x2f9604: 0x24533d20  addiu       $s3, $v0, 0x3D20
    ctx->pc = 0x2f9604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_2f9608:
    // 0x2f9608: 0xc4751b90  lwc1        $f21, 0x1B90($v1)
    ctx->pc = 0x2f9608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f960c:
    // 0x2f960c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f9610:
    // 0x2f9610: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x2f9610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f9614:
    // 0x2f9614: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x2f9614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f9618:
    // 0x2f9618: 0x10000033  b           . + 4 + (0x33 << 2)
label_2f961c:
    if (ctx->pc == 0x2F961Cu) {
        ctx->pc = 0x2F961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9618u;
        // 0x2f961c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9620u;
        goto label_2f9620;
    }
    ctx->pc = 0x2F9618u;
    {
        const bool branch_taken_0x2f9618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9618u;
        // 0x2f961c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9618) {
            ctx->pc = 0x2F96E8u;
            goto label_2f96e8;
        }
    }
    ctx->pc = 0x2F9620u;
label_2f9620:
    // 0x2f9620: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x2f9620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f9624:
    // 0x2f9624: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f9624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9628:
    // 0x2f9628: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f962c:
    // 0x2f962c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f9630:
    // 0x2f9630: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f9634:
    // 0x2f9634: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f9634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9638:
    // 0x2f9638: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f9638u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f963c:
    // 0x2f963c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f963cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f9640:
    // 0x2f9640: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f9640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9644:
    // 0x2f9644: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2f9644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9648:
    // 0x2f9648: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f9648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f964c:
    // 0x2f964c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2f964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9650:
    // 0x2f9650: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2f9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9654:
    // 0x2f9654: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f9654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2f9658:
    // 0x2f9658: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2f9658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f965c:
    // 0x2f965c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2f965cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2f9660:
    // 0x2f9660: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x2f9660u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2f9664:
    // 0x2f9664: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f9664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f9668:
    // 0x2f9668: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f966c:
    // 0x2f966c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2f966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9670:
    // 0x2f9670: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x2f9670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9674:
    // 0x2f9674: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x2f9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f9678:
    // 0x2f9678: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f9678u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f967c:
    // 0x2f967c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f967cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f9680:
    // 0x2f9680: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f9680u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f9684:
    // 0x2f9684: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2f9684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2f9688:
    // 0x2f9688: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x2f9688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_2f968c:
    // 0x2f968c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f9690:
    if (ctx->pc == 0x2F9690u) {
        ctx->pc = 0x2F9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F968Cu;
        // 0x2f9690: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9694u;
        goto label_2f9694;
    }
    ctx->pc = 0x2F968Cu;
    {
        const bool branch_taken_0x2f968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F968Cu;
        // 0x2f9690: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f968c) {
            ctx->pc = 0x2F96A0u;
            goto label_2f96a0;
        }
    }
    ctx->pc = 0x2F9694u;
label_2f9694:
    // 0x2f9694: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2f9694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2f9698:
    // 0x2f9698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f969c:
    if (ctx->pc == 0x2F969Cu) {
        ctx->pc = 0x2F96A0u;
        goto label_2f96a0;
    }
    ctx->pc = 0x2F9698u;
    {
        const bool branch_taken_0x2f9698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9698) {
            ctx->pc = 0x2F96A4u;
            goto label_2f96a4;
        }
    }
    ctx->pc = 0x2F96A0u;
label_2f96a0:
    // 0x2f96a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f96a4:
    // 0x2f96a4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_2f96a8:
    if (ctx->pc == 0x2F96A8u) {
        ctx->pc = 0x2F96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96A4u;
        // 0x2f96a8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96ACu;
        goto label_2f96ac;
    }
    ctx->pc = 0x2F96A4u;
    {
        const bool branch_taken_0x2f96a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f96a4) {
            ctx->pc = 0x2F96A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F96A4u;
            // 0x2f96a8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F96ECu;
            goto label_2f96ec;
        }
    }
    ctx->pc = 0x2F96ACu;
label_2f96ac:
    // 0x2f96ac: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2f96acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f96b0:
    // 0x2f96b0: 0x0  nop
    ctx->pc = 0x2f96b0u;
    // NOP
label_2f96b4:
    // 0x2f96b4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2f96b8:
    if (ctx->pc == 0x2F96B8u) {
        ctx->pc = 0x2F96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96B4u;
        // 0x2f96b8: 0x2543026  xor         $a2, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96BCu;
        goto label_2f96bc;
    }
    ctx->pc = 0x2F96B4u;
    {
        const bool branch_taken_0x2f96b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96B4u;
        // 0x2f96b8: 0x2543026  xor         $a2, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96b4) {
            ctx->pc = 0x2F96E8u;
            goto label_2f96e8;
        }
    }
    ctx->pc = 0x2F96BCu;
label_2f96bc:
    // 0x2f96bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f96c0:
    // 0x2f96c0: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2f96c0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f96c4:
    // 0x2f96c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f96c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f96c8:
    // 0x2f96c8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2f96c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f96cc:
    // 0x2f96cc: 0xc0bdd46  jal         func_2F7518
label_2f96d0:
    if (ctx->pc == 0x2F96D0u) {
        ctx->pc = 0x2F96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96CCu;
        // 0x2f96d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96D4u;
        goto label_2f96d4;
    }
    ctx->pc = 0x2F96CCu;
    SET_GPR_U32(ctx, 31, 0x2F96D4u);
    ctx->pc = 0x2F96D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96CCu;
    // 0x2f96d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7518u, 0x2F96CCu, 0x2F96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F96D4u;
label_2f96d4:
    // 0x2f96d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f96d8:
    if (ctx->pc == 0x2F96D8u) {
        ctx->pc = 0x2F96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96D4u;
        // 0x2f96d8: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96DCu;
        goto label_2f96dc;
    }
    ctx->pc = 0x2F96D4u;
    {
        const bool branch_taken_0x2f96d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96D4u;
        // 0x2f96d8: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96d4) {
            ctx->pc = 0x2F96E8u;
            goto label_2f96e8;
        }
    }
    ctx->pc = 0x2F96DCu;
label_2f96dc:
    // 0x2f96dc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2f96dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2f96e0:
    // 0x2f96e0: 0xae3211e8  sw          $s2, 0x11E8($s1)
    ctx->pc = 0x2f96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 18));
label_2f96e4:
    // 0x2f96e4: 0xae2211fc  sw          $v0, 0x11FC($s1)
    ctx->pc = 0x2f96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 2));
label_2f96e8:
    // 0x2f96e8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2f96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2f96ec:
    // 0x2f96ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f96ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f96f0:
    // 0x2f96f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f96f4:
    if (ctx->pc == 0x2F96F4u) {
        ctx->pc = 0x2F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96F0u;
        // 0x2f96f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96F8u;
        goto label_2f96f8;
    }
    ctx->pc = 0x2F96F0u;
    {
        const bool branch_taken_0x2f96f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96F0u;
        // 0x2f96f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96f0) {
            ctx->pc = 0x2F96FCu;
            goto label_2f96fc;
        }
    }
    ctx->pc = 0x2F96F8u;
label_2f96f8:
    // 0x2f96f8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f96f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f96fc:
    // 0x2f96fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f9700:
    if (ctx->pc == 0x2F9700u) {
        ctx->pc = 0x2F9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96FCu;
        // 0x2f9700: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9704u;
        goto label_2f9704;
    }
    ctx->pc = 0x2F96FCu;
    {
        const bool branch_taken_0x2f96fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96FCu;
        // 0x2f9700: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96fc) {
            ctx->pc = 0x2F970Cu;
            goto label_2f970c;
        }
    }
    ctx->pc = 0x2F9704u;
label_2f9704:
    // 0x2f9704: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2f9704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f9708:
    // 0x2f9708: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2f9708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2f970c:
    // 0x2f970c: 0x5600ffc4  bnel        $s0, $zero, . + 4 + (-0x3C << 2)
label_2f9710:
    if (ctx->pc == 0x2F9710u) {
        ctx->pc = 0x2F9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F970Cu;
        // 0x2f9710: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9714u;
        goto label_2f9714;
    }
    ctx->pc = 0x2F970Cu;
    {
        const bool branch_taken_0x2f970c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f970c) {
            ctx->pc = 0x2F9710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F970Cu;
            // 0x2f9710: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9620;
        }
    }
    ctx->pc = 0x2F9714u;
label_2f9714:
    // 0x2f9714: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2f9714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2f9718:
    // 0x2f9718: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2f971c:
    if (ctx->pc == 0x2F971Cu) {
        ctx->pc = 0x2F971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9718u;
        // 0x2f971c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9720u;
        goto label_2f9720;
    }
    ctx->pc = 0x2F9718u;
    {
        const bool branch_taken_0x2f9718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9718u;
        // 0x2f971c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9718) {
            ctx->pc = 0x2F9758u;
            goto label_2f9758;
        }
    }
    ctx->pc = 0x2F9720u;
label_2f9720:
    // 0x2f9720: 0xc08fe32  jal         func_23F8C8
label_2f9724:
    if (ctx->pc == 0x2F9724u) {
        ctx->pc = 0x2F9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9720u;
        // 0x2f9724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9728u;
        goto label_2f9728;
    }
    ctx->pc = 0x2F9720u;
    SET_GPR_U32(ctx, 31, 0x2F9728u);
    ctx->pc = 0x2F9724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9720u;
    // 0x2f9724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F8C8u, 0x2F9720u, 0x2F9728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9728u;
label_2f9728:
    // 0x2f9728: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2f9728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2f972c:
    // 0x2f972c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2f972cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f9730:
    // 0x2f9730: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x2f9730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
label_2f9734:
    // 0x2f9734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f9734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9738:
    // 0x2f9738: 0xc08006c  jal         func_2001B0
label_2f973c:
    if (ctx->pc == 0x2F973Cu) {
        ctx->pc = 0x2F973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9738u;
        // 0x2f973c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9740u;
        goto label_2f9740;
    }
    ctx->pc = 0x2F9738u;
    SET_GPR_U32(ctx, 31, 0x2F9740u);
    ctx->pc = 0x2F973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9738u;
    // 0x2f973c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2001B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2001B0u, 0x2F9738u, 0x2F9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9740u;
label_2f9740:
    // 0x2f9740: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2f9740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f9744:
    // 0x2f9744: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f9744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2f9748:
    // 0x2f9748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f974c:
    // 0x2f974c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f9750:
    // 0x2f9750: 0xae2311c0  sw          $v1, 0x11C0($s1)
    ctx->pc = 0x2f9750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
label_2f9754:
    // 0x2f9754: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2f9754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f9758:
    // 0x2f9758: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2f9758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2f975c:
    // 0x2f975c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2f975cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f9760:
    // 0x2f9760: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2f9760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2f9764:
    // 0x2f9764: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2f9764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2f9768:
    // 0x2f9768: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2f9768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2f976c:
    // 0x2f976c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2f976cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2f9770:
    // 0x2f9770: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2f9770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2f9774:
    // 0x2f9774: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2f9774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2f9778:
    // 0x2f9778: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2f9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f977c:
    // 0x2f977c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2f977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f9780:
    // 0x2f9780: 0x3e00008  jr          $ra
label_2f9784:
    if (ctx->pc == 0x2F9784u) {
        ctx->pc = 0x2F9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9780u;
        // 0x2f9784: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9788u;
        goto label_fallthrough_0x2f9780;
    }
    ctx->pc = 0x2F9780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9780u;
        // 0x2f9784: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f9780:
    ctx->pc = 0x2F9788u;
}
