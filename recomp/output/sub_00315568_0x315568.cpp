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

// Function: sub_00315568
// Address: 0x315568 - 0x315bd0
void sub_00315568_0x315568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315568_0x315568");
#endif

    switch (ctx->pc) {
        case 0x315568u: goto label_315568;
        case 0x31556cu: goto label_31556c;
        case 0x315570u: goto label_315570;
        case 0x315574u: goto label_315574;
        case 0x315578u: goto label_315578;
        case 0x31557cu: goto label_31557c;
        case 0x315580u: goto label_315580;
        case 0x315584u: goto label_315584;
        case 0x315588u: goto label_315588;
        case 0x31558cu: goto label_31558c;
        case 0x315590u: goto label_315590;
        case 0x315594u: goto label_315594;
        case 0x315598u: goto label_315598;
        case 0x31559cu: goto label_31559c;
        case 0x3155a0u: goto label_3155a0;
        case 0x3155a4u: goto label_3155a4;
        case 0x3155a8u: goto label_3155a8;
        case 0x3155acu: goto label_3155ac;
        case 0x3155b0u: goto label_3155b0;
        case 0x3155b4u: goto label_3155b4;
        case 0x3155b8u: goto label_3155b8;
        case 0x3155bcu: goto label_3155bc;
        case 0x3155c0u: goto label_3155c0;
        case 0x3155c4u: goto label_3155c4;
        case 0x3155c8u: goto label_3155c8;
        case 0x3155ccu: goto label_3155cc;
        case 0x3155d0u: goto label_3155d0;
        case 0x3155d4u: goto label_3155d4;
        case 0x3155d8u: goto label_3155d8;
        case 0x3155dcu: goto label_3155dc;
        case 0x3155e0u: goto label_3155e0;
        case 0x3155e4u: goto label_3155e4;
        case 0x3155e8u: goto label_3155e8;
        case 0x3155ecu: goto label_3155ec;
        case 0x3155f0u: goto label_3155f0;
        case 0x3155f4u: goto label_3155f4;
        case 0x3155f8u: goto label_3155f8;
        case 0x3155fcu: goto label_3155fc;
        case 0x315600u: goto label_315600;
        case 0x315604u: goto label_315604;
        case 0x315608u: goto label_315608;
        case 0x31560cu: goto label_31560c;
        case 0x315610u: goto label_315610;
        case 0x315614u: goto label_315614;
        case 0x315618u: goto label_315618;
        case 0x31561cu: goto label_31561c;
        case 0x315620u: goto label_315620;
        case 0x315624u: goto label_315624;
        case 0x315628u: goto label_315628;
        case 0x31562cu: goto label_31562c;
        case 0x315630u: goto label_315630;
        case 0x315634u: goto label_315634;
        case 0x315638u: goto label_315638;
        case 0x31563cu: goto label_31563c;
        case 0x315640u: goto label_315640;
        case 0x315644u: goto label_315644;
        case 0x315648u: goto label_315648;
        case 0x31564cu: goto label_31564c;
        case 0x315650u: goto label_315650;
        case 0x315654u: goto label_315654;
        case 0x315658u: goto label_315658;
        case 0x31565cu: goto label_31565c;
        case 0x315660u: goto label_315660;
        case 0x315664u: goto label_315664;
        case 0x315668u: goto label_315668;
        case 0x31566cu: goto label_31566c;
        case 0x315670u: goto label_315670;
        case 0x315674u: goto label_315674;
        case 0x315678u: goto label_315678;
        case 0x31567cu: goto label_31567c;
        case 0x315680u: goto label_315680;
        case 0x315684u: goto label_315684;
        case 0x315688u: goto label_315688;
        case 0x31568cu: goto label_31568c;
        case 0x315690u: goto label_315690;
        case 0x315694u: goto label_315694;
        case 0x315698u: goto label_315698;
        case 0x31569cu: goto label_31569c;
        case 0x3156a0u: goto label_3156a0;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b0u: goto label_3156b0;
        case 0x3156b4u: goto label_3156b4;
        case 0x3156b8u: goto label_3156b8;
        case 0x3156bcu: goto label_3156bc;
        case 0x3156c0u: goto label_3156c0;
        case 0x3156c4u: goto label_3156c4;
        case 0x3156c8u: goto label_3156c8;
        case 0x3156ccu: goto label_3156cc;
        case 0x3156d0u: goto label_3156d0;
        case 0x3156d4u: goto label_3156d4;
        case 0x3156d8u: goto label_3156d8;
        case 0x3156dcu: goto label_3156dc;
        case 0x3156e0u: goto label_3156e0;
        case 0x3156e4u: goto label_3156e4;
        case 0x3156e8u: goto label_3156e8;
        case 0x3156ecu: goto label_3156ec;
        case 0x3156f0u: goto label_3156f0;
        case 0x3156f4u: goto label_3156f4;
        case 0x3156f8u: goto label_3156f8;
        case 0x3156fcu: goto label_3156fc;
        case 0x315700u: goto label_315700;
        case 0x315704u: goto label_315704;
        case 0x315708u: goto label_315708;
        case 0x31570cu: goto label_31570c;
        case 0x315710u: goto label_315710;
        case 0x315714u: goto label_315714;
        case 0x315718u: goto label_315718;
        case 0x31571cu: goto label_31571c;
        case 0x315720u: goto label_315720;
        case 0x315724u: goto label_315724;
        case 0x315728u: goto label_315728;
        case 0x31572cu: goto label_31572c;
        case 0x315730u: goto label_315730;
        case 0x315734u: goto label_315734;
        case 0x315738u: goto label_315738;
        case 0x31573cu: goto label_31573c;
        case 0x315740u: goto label_315740;
        case 0x315744u: goto label_315744;
        case 0x315748u: goto label_315748;
        case 0x31574cu: goto label_31574c;
        case 0x315750u: goto label_315750;
        case 0x315754u: goto label_315754;
        case 0x315758u: goto label_315758;
        case 0x31575cu: goto label_31575c;
        case 0x315760u: goto label_315760;
        case 0x315764u: goto label_315764;
        case 0x315768u: goto label_315768;
        case 0x31576cu: goto label_31576c;
        case 0x315770u: goto label_315770;
        case 0x315774u: goto label_315774;
        case 0x315778u: goto label_315778;
        case 0x31577cu: goto label_31577c;
        case 0x315780u: goto label_315780;
        case 0x315784u: goto label_315784;
        case 0x315788u: goto label_315788;
        case 0x31578cu: goto label_31578c;
        case 0x315790u: goto label_315790;
        case 0x315794u: goto label_315794;
        case 0x315798u: goto label_315798;
        case 0x31579cu: goto label_31579c;
        case 0x3157a0u: goto label_3157a0;
        case 0x3157a4u: goto label_3157a4;
        case 0x3157a8u: goto label_3157a8;
        case 0x3157acu: goto label_3157ac;
        case 0x3157b0u: goto label_3157b0;
        case 0x3157b4u: goto label_3157b4;
        case 0x3157b8u: goto label_3157b8;
        case 0x3157bcu: goto label_3157bc;
        case 0x3157c0u: goto label_3157c0;
        case 0x3157c4u: goto label_3157c4;
        case 0x3157c8u: goto label_3157c8;
        case 0x3157ccu: goto label_3157cc;
        case 0x3157d0u: goto label_3157d0;
        case 0x3157d4u: goto label_3157d4;
        case 0x3157d8u: goto label_3157d8;
        case 0x3157dcu: goto label_3157dc;
        case 0x3157e0u: goto label_3157e0;
        case 0x3157e4u: goto label_3157e4;
        case 0x3157e8u: goto label_3157e8;
        case 0x3157ecu: goto label_3157ec;
        case 0x3157f0u: goto label_3157f0;
        case 0x3157f4u: goto label_3157f4;
        case 0x3157f8u: goto label_3157f8;
        case 0x3157fcu: goto label_3157fc;
        case 0x315800u: goto label_315800;
        case 0x315804u: goto label_315804;
        case 0x315808u: goto label_315808;
        case 0x31580cu: goto label_31580c;
        case 0x315810u: goto label_315810;
        case 0x315814u: goto label_315814;
        case 0x315818u: goto label_315818;
        case 0x31581cu: goto label_31581c;
        case 0x315820u: goto label_315820;
        case 0x315824u: goto label_315824;
        case 0x315828u: goto label_315828;
        case 0x31582cu: goto label_31582c;
        case 0x315830u: goto label_315830;
        case 0x315834u: goto label_315834;
        case 0x315838u: goto label_315838;
        case 0x31583cu: goto label_31583c;
        case 0x315840u: goto label_315840;
        case 0x315844u: goto label_315844;
        case 0x315848u: goto label_315848;
        case 0x31584cu: goto label_31584c;
        case 0x315850u: goto label_315850;
        case 0x315854u: goto label_315854;
        case 0x315858u: goto label_315858;
        case 0x31585cu: goto label_31585c;
        case 0x315860u: goto label_315860;
        case 0x315864u: goto label_315864;
        case 0x315868u: goto label_315868;
        case 0x31586cu: goto label_31586c;
        case 0x315870u: goto label_315870;
        case 0x315874u: goto label_315874;
        case 0x315878u: goto label_315878;
        case 0x31587cu: goto label_31587c;
        case 0x315880u: goto label_315880;
        case 0x315884u: goto label_315884;
        case 0x315888u: goto label_315888;
        case 0x31588cu: goto label_31588c;
        case 0x315890u: goto label_315890;
        case 0x315894u: goto label_315894;
        case 0x315898u: goto label_315898;
        case 0x31589cu: goto label_31589c;
        case 0x3158a0u: goto label_3158a0;
        case 0x3158a4u: goto label_3158a4;
        case 0x3158a8u: goto label_3158a8;
        case 0x3158acu: goto label_3158ac;
        case 0x3158b0u: goto label_3158b0;
        case 0x3158b4u: goto label_3158b4;
        case 0x3158b8u: goto label_3158b8;
        case 0x3158bcu: goto label_3158bc;
        case 0x3158c0u: goto label_3158c0;
        case 0x3158c4u: goto label_3158c4;
        case 0x3158c8u: goto label_3158c8;
        case 0x3158ccu: goto label_3158cc;
        case 0x3158d0u: goto label_3158d0;
        case 0x3158d4u: goto label_3158d4;
        case 0x3158d8u: goto label_3158d8;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e0u: goto label_3158e0;
        case 0x3158e4u: goto label_3158e4;
        case 0x3158e8u: goto label_3158e8;
        case 0x3158ecu: goto label_3158ec;
        case 0x3158f0u: goto label_3158f0;
        case 0x3158f4u: goto label_3158f4;
        case 0x3158f8u: goto label_3158f8;
        case 0x3158fcu: goto label_3158fc;
        case 0x315900u: goto label_315900;
        case 0x315904u: goto label_315904;
        case 0x315908u: goto label_315908;
        case 0x31590cu: goto label_31590c;
        case 0x315910u: goto label_315910;
        case 0x315914u: goto label_315914;
        case 0x315918u: goto label_315918;
        case 0x31591cu: goto label_31591c;
        case 0x315920u: goto label_315920;
        case 0x315924u: goto label_315924;
        case 0x315928u: goto label_315928;
        case 0x31592cu: goto label_31592c;
        case 0x315930u: goto label_315930;
        case 0x315934u: goto label_315934;
        case 0x315938u: goto label_315938;
        case 0x31593cu: goto label_31593c;
        case 0x315940u: goto label_315940;
        case 0x315944u: goto label_315944;
        case 0x315948u: goto label_315948;
        case 0x31594cu: goto label_31594c;
        case 0x315950u: goto label_315950;
        case 0x315954u: goto label_315954;
        case 0x315958u: goto label_315958;
        case 0x31595cu: goto label_31595c;
        case 0x315960u: goto label_315960;
        case 0x315964u: goto label_315964;
        case 0x315968u: goto label_315968;
        case 0x31596cu: goto label_31596c;
        case 0x315970u: goto label_315970;
        case 0x315974u: goto label_315974;
        case 0x315978u: goto label_315978;
        case 0x31597cu: goto label_31597c;
        case 0x315980u: goto label_315980;
        case 0x315984u: goto label_315984;
        case 0x315988u: goto label_315988;
        case 0x31598cu: goto label_31598c;
        case 0x315990u: goto label_315990;
        case 0x315994u: goto label_315994;
        case 0x315998u: goto label_315998;
        case 0x31599cu: goto label_31599c;
        case 0x3159a0u: goto label_3159a0;
        case 0x3159a4u: goto label_3159a4;
        case 0x3159a8u: goto label_3159a8;
        case 0x3159acu: goto label_3159ac;
        case 0x3159b0u: goto label_3159b0;
        case 0x3159b4u: goto label_3159b4;
        case 0x3159b8u: goto label_3159b8;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c0u: goto label_3159c0;
        case 0x3159c4u: goto label_3159c4;
        case 0x3159c8u: goto label_3159c8;
        case 0x3159ccu: goto label_3159cc;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159d4u: goto label_3159d4;
        case 0x3159d8u: goto label_3159d8;
        case 0x3159dcu: goto label_3159dc;
        case 0x3159e0u: goto label_3159e0;
        case 0x3159e4u: goto label_3159e4;
        case 0x3159e8u: goto label_3159e8;
        case 0x3159ecu: goto label_3159ec;
        case 0x3159f0u: goto label_3159f0;
        case 0x3159f4u: goto label_3159f4;
        case 0x3159f8u: goto label_3159f8;
        case 0x3159fcu: goto label_3159fc;
        case 0x315a00u: goto label_315a00;
        case 0x315a04u: goto label_315a04;
        case 0x315a08u: goto label_315a08;
        case 0x315a0cu: goto label_315a0c;
        case 0x315a10u: goto label_315a10;
        case 0x315a14u: goto label_315a14;
        case 0x315a18u: goto label_315a18;
        case 0x315a1cu: goto label_315a1c;
        case 0x315a20u: goto label_315a20;
        case 0x315a24u: goto label_315a24;
        case 0x315a28u: goto label_315a28;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a30u: goto label_315a30;
        case 0x315a34u: goto label_315a34;
        case 0x315a38u: goto label_315a38;
        case 0x315a3cu: goto label_315a3c;
        case 0x315a40u: goto label_315a40;
        case 0x315a44u: goto label_315a44;
        case 0x315a48u: goto label_315a48;
        case 0x315a4cu: goto label_315a4c;
        case 0x315a50u: goto label_315a50;
        case 0x315a54u: goto label_315a54;
        case 0x315a58u: goto label_315a58;
        case 0x315a5cu: goto label_315a5c;
        case 0x315a60u: goto label_315a60;
        case 0x315a64u: goto label_315a64;
        case 0x315a68u: goto label_315a68;
        case 0x315a6cu: goto label_315a6c;
        case 0x315a70u: goto label_315a70;
        case 0x315a74u: goto label_315a74;
        case 0x315a78u: goto label_315a78;
        case 0x315a7cu: goto label_315a7c;
        case 0x315a80u: goto label_315a80;
        case 0x315a84u: goto label_315a84;
        case 0x315a88u: goto label_315a88;
        case 0x315a8cu: goto label_315a8c;
        case 0x315a90u: goto label_315a90;
        case 0x315a94u: goto label_315a94;
        case 0x315a98u: goto label_315a98;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa0u: goto label_315aa0;
        case 0x315aa4u: goto label_315aa4;
        case 0x315aa8u: goto label_315aa8;
        case 0x315aacu: goto label_315aac;
        case 0x315ab0u: goto label_315ab0;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ab8u: goto label_315ab8;
        case 0x315abcu: goto label_315abc;
        case 0x315ac0u: goto label_315ac0;
        case 0x315ac4u: goto label_315ac4;
        case 0x315ac8u: goto label_315ac8;
        case 0x315accu: goto label_315acc;
        case 0x315ad0u: goto label_315ad0;
        case 0x315ad4u: goto label_315ad4;
        case 0x315ad8u: goto label_315ad8;
        case 0x315adcu: goto label_315adc;
        case 0x315ae0u: goto label_315ae0;
        case 0x315ae4u: goto label_315ae4;
        case 0x315ae8u: goto label_315ae8;
        case 0x315aecu: goto label_315aec;
        case 0x315af0u: goto label_315af0;
        case 0x315af4u: goto label_315af4;
        case 0x315af8u: goto label_315af8;
        case 0x315afcu: goto label_315afc;
        case 0x315b00u: goto label_315b00;
        case 0x315b04u: goto label_315b04;
        case 0x315b08u: goto label_315b08;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b10u: goto label_315b10;
        case 0x315b14u: goto label_315b14;
        case 0x315b18u: goto label_315b18;
        case 0x315b1cu: goto label_315b1c;
        case 0x315b20u: goto label_315b20;
        case 0x315b24u: goto label_315b24;
        case 0x315b28u: goto label_315b28;
        case 0x315b2cu: goto label_315b2c;
        case 0x315b30u: goto label_315b30;
        case 0x315b34u: goto label_315b34;
        case 0x315b38u: goto label_315b38;
        case 0x315b3cu: goto label_315b3c;
        case 0x315b40u: goto label_315b40;
        case 0x315b44u: goto label_315b44;
        case 0x315b48u: goto label_315b48;
        case 0x315b4cu: goto label_315b4c;
        case 0x315b50u: goto label_315b50;
        case 0x315b54u: goto label_315b54;
        case 0x315b58u: goto label_315b58;
        case 0x315b5cu: goto label_315b5c;
        case 0x315b60u: goto label_315b60;
        case 0x315b64u: goto label_315b64;
        case 0x315b68u: goto label_315b68;
        case 0x315b6cu: goto label_315b6c;
        case 0x315b70u: goto label_315b70;
        case 0x315b74u: goto label_315b74;
        case 0x315b78u: goto label_315b78;
        case 0x315b7cu: goto label_315b7c;
        case 0x315b80u: goto label_315b80;
        case 0x315b84u: goto label_315b84;
        case 0x315b88u: goto label_315b88;
        case 0x315b8cu: goto label_315b8c;
        case 0x315b90u: goto label_315b90;
        case 0x315b94u: goto label_315b94;
        case 0x315b98u: goto label_315b98;
        case 0x315b9cu: goto label_315b9c;
        case 0x315ba0u: goto label_315ba0;
        case 0x315ba4u: goto label_315ba4;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bacu: goto label_315bac;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bb4u: goto label_315bb4;
        case 0x315bb8u: goto label_315bb8;
        case 0x315bbcu: goto label_315bbc;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        default: break;
    }

    ctx->pc = 0x315568u;

label_315568:
    // 0x315568: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x315568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31556c:
    // 0x31556c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315570:
    // 0x315570: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x315570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_315574:
    // 0x315574: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x315574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_315578:
    // 0x315578: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x315578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_31557c:
    // 0x31557c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x31557cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_315580:
    // 0x315580: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x315580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_315584:
    // 0x315584: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x315584u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_315588:
    // 0x315588: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x315588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_31558c:
    // 0x31558c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x31558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_315590:
    // 0x315590: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x315590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_315594:
    // 0x315594: 0xc09275c  jal         func_249D70
label_315598:
    if (ctx->pc == 0x315598u) {
        ctx->pc = 0x315598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315594u;
        // 0x315598: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31559Cu;
        goto label_31559c;
    }
    ctx->pc = 0x315594u;
    SET_GPR_U32(ctx, 31, 0x31559Cu);
    ctx->pc = 0x315598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315594u;
    // 0x315598: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D70u, 0x315594u, 0x31559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31559Cu;
label_31559c:
    // 0x31559c: 0xc0d9cb6  jal         func_3672D8
label_3155a0:
    if (ctx->pc == 0x3155A0u) {
        ctx->pc = 0x3155A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31559Cu;
        // 0x3155a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3155A4u;
        goto label_3155a4;
    }
    ctx->pc = 0x31559Cu;
    SET_GPR_U32(ctx, 31, 0x3155A4u);
    ctx->pc = 0x3155A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31559Cu;
    // 0x3155a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x31559Cu, 0x3155A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155A4u;
label_3155a4:
    // 0x3155a4: 0xc0c977c  jal         func_325DF0
label_3155a8:
    if (ctx->pc == 0x3155A8u) {
        ctx->pc = 0x3155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155A4u;
        // 0x3155a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3155ACu;
        goto label_3155ac;
    }
    ctx->pc = 0x3155A4u;
    SET_GPR_U32(ctx, 31, 0x3155ACu);
    ctx->pc = 0x3155A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155A4u;
    // 0x3155a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DF0u, 0x3155A4u, 0x3155ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155ACu;
label_3155ac:
    // 0x3155ac: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x3155acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_3155b0:
    // 0x3155b0: 0x26105870  addiu       $s0, $s0, 0x5870
    ctx->pc = 0x3155b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22640));
label_3155b4:
    // 0x3155b4: 0xc0b8b30  jal         func_2E2CC0
label_3155b8:
    if (ctx->pc == 0x3155B8u) {
        ctx->pc = 0x3155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155B4u;
        // 0x3155b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3155BCu;
        goto label_3155bc;
    }
    ctx->pc = 0x3155B4u;
    SET_GPR_U32(ctx, 31, 0x3155BCu);
    ctx->pc = 0x3155B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155B4u;
    // 0x3155b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2CC0u, 0x3155B4u, 0x3155BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155BCu;
label_3155bc:
    // 0x3155bc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3155bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3155c0:
    // 0x3155c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3155c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3155c4:
    // 0x3155c4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x3155c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_3155c8:
    // 0x3155c8: 0xc0a4758  jal         func_291D60
label_3155cc:
    if (ctx->pc == 0x3155CCu) {
        ctx->pc = 0x3155CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155C8u;
        // 0x3155cc: 0xe440a0d0  swc1        $f0, -0x5F30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294942928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3155D0u;
        goto label_3155d0;
    }
    ctx->pc = 0x3155C8u;
    SET_GPR_U32(ctx, 31, 0x3155D0u);
    ctx->pc = 0x3155CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155C8u;
    // 0x3155cc: 0xe440a0d0  swc1        $f0, -0x5F30($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294942928), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x3155C8u, 0x3155D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155D0u;
label_3155d0:
    // 0x3155d0: 0xc0a50f4  jal         func_2943D0
label_3155d4:
    if (ctx->pc == 0x3155D4u) {
        ctx->pc = 0x3155D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155D0u;
        // 0x3155d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3155D8u;
        goto label_3155d8;
    }
    ctx->pc = 0x3155D0u;
    SET_GPR_U32(ctx, 31, 0x3155D8u);
    ctx->pc = 0x3155D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155D0u;
    // 0x3155d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943D0u, 0x3155D0u, 0x3155D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155D8u;
label_3155d8:
    // 0x3155d8: 0xc0b5d1e  jal         func_2D7478
label_3155dc:
    if (ctx->pc == 0x3155DCu) {
        ctx->pc = 0x3155E0u;
        goto label_3155e0;
    }
    ctx->pc = 0x3155D8u;
    SET_GPR_U32(ctx, 31, 0x3155E0u);
    ctx->pc = 0x2D7478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7478u, 0x3155D8u, 0x3155E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155E0u;
label_3155e0:
    // 0x3155e0: 0xc0a21a2  jal         func_288688
label_3155e4:
    if (ctx->pc == 0x3155E4u) {
        ctx->pc = 0x3155E8u;
        goto label_3155e8;
    }
    ctx->pc = 0x3155E0u;
    SET_GPR_U32(ctx, 31, 0x3155E8u);
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x3155E0u, 0x3155E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3155E8u;
label_3155e8:
    // 0x3155e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3155e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3155ec:
    // 0x3155ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3155ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3155f0:
    // 0x3155f0: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x3155f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_3155f4:
    // 0x3155f4: 0xa062a367  sb          $v0, -0x5C99($v1)
    ctx->pc = 0x3155f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943591), (uint8_t)GPR_U32(ctx, 2));
label_3155f8:
    // 0x3155f8: 0xc0c259a  jal         func_309668
label_3155fc:
    if (ctx->pc == 0x3155FCu) {
        ctx->pc = 0x3155FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155F8u;
        // 0x3155fc: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315600u;
        goto label_315600;
    }
    ctx->pc = 0x3155F8u;
    SET_GPR_U32(ctx, 31, 0x315600u);
    ctx->pc = 0x3155FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3155F8u;
    // 0x3155fc: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x3155F8u, 0x315600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315600u;
label_315600:
    // 0x315600: 0xc0a3a8a  jal         func_28EA28
label_315604:
    if (ctx->pc == 0x315604u) {
        ctx->pc = 0x315608u;
        goto label_315608;
    }
    ctx->pc = 0x315600u;
    SET_GPR_U32(ctx, 31, 0x315608u);
    ctx->pc = 0x28EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA28u, 0x315600u, 0x315608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315608u;
label_315608:
    // 0x315608: 0xc0c5dda  jal         func_317768
label_31560c:
    if (ctx->pc == 0x31560Cu) {
        ctx->pc = 0x315610u;
        goto label_315610;
    }
    ctx->pc = 0x315608u;
    SET_GPR_U32(ctx, 31, 0x315610u);
    ctx->pc = 0x317768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317768u, 0x315608u, 0x315610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315610u;
label_315610:
    // 0x315610: 0xc0a0870  jal         func_2821C0
label_315614:
    if (ctx->pc == 0x315614u) {
        ctx->pc = 0x315614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315610u;
        // 0x315614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315618u;
        goto label_315618;
    }
    ctx->pc = 0x315610u;
    SET_GPR_U32(ctx, 31, 0x315618u);
    ctx->pc = 0x315614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315610u;
    // 0x315614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2821C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2821C0u, 0x315610u, 0x315618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315618u;
label_315618:
    // 0x315618: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x315618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_31561c:
    // 0x31561c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x31561cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_315620:
    // 0x315620: 0xac40462c  sw          $zero, 0x462C($v0)
    ctx->pc = 0x315620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17964), GPR_U32(ctx, 0));
label_315624:
    // 0x315624: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x315624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_315628:
    // 0x315628: 0xc07e618  jal         func_1F9860
label_31562c:
    if (ctx->pc == 0x31562Cu) {
        ctx->pc = 0x31562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315628u;
        // 0x31562c: 0xa200027d  sb          $zero, 0x27D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 637), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315630u;
        goto label_315630;
    }
    ctx->pc = 0x315628u;
    SET_GPR_U32(ctx, 31, 0x315630u);
    ctx->pc = 0x31562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315628u;
    // 0x31562c: 0xa200027d  sb          $zero, 0x27D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 637), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9860u, 0x315628u, 0x315630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315630u;
label_315630:
    // 0x315630: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x315630u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_315634:
    // 0x315634: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x315634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_315638:
    // 0x315638: 0xc07f6e8  jal         func_1FDBA0
label_31563c:
    if (ctx->pc == 0x31563Cu) {
        ctx->pc = 0x31563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315638u;
        // 0x31563c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315640u;
        goto label_315640;
    }
    ctx->pc = 0x315638u;
    SET_GPR_U32(ctx, 31, 0x315640u);
    ctx->pc = 0x31563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315638u;
    // 0x31563c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBA0u, 0x315638u, 0x315640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315640u;
label_315640:
    // 0x315640: 0xc07f694  jal         func_1FDA50
label_315644:
    if (ctx->pc == 0x315644u) {
        ctx->pc = 0x315644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315640u;
        // 0x315644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315648u;
        goto label_315648;
    }
    ctx->pc = 0x315640u;
    SET_GPR_U32(ctx, 31, 0x315648u);
    ctx->pc = 0x315644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315640u;
    // 0x315644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA50u, 0x315640u, 0x315648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315648u;
label_315648:
    // 0x315648: 0xc080e54  jal         func_203950
label_31564c:
    if (ctx->pc == 0x31564Cu) {
        ctx->pc = 0x315650u;
        goto label_315650;
    }
    ctx->pc = 0x315648u;
    SET_GPR_U32(ctx, 31, 0x315650u);
    ctx->pc = 0x203950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203950u, 0x315648u, 0x315650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315650u;
label_315650:
    // 0x315650: 0xc081344  jal         func_204D10
label_315654:
    if (ctx->pc == 0x315654u) {
        ctx->pc = 0x315654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315650u;
        // 0x315654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315658u;
        goto label_315658;
    }
    ctx->pc = 0x315650u;
    SET_GPR_U32(ctx, 31, 0x315658u);
    ctx->pc = 0x315654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315650u;
    // 0x315654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204D10u, 0x315650u, 0x315658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315658u;
label_315658:
    // 0x315658: 0xc081d36  jal         func_2074D8
label_31565c:
    if (ctx->pc == 0x31565Cu) {
        ctx->pc = 0x315660u;
        goto label_315660;
    }
    ctx->pc = 0x315658u;
    SET_GPR_U32(ctx, 31, 0x315660u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x315658u, 0x315660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315660u;
label_315660:
    // 0x315660: 0xc081e92  jal         func_207A48
label_315664:
    if (ctx->pc == 0x315664u) {
        ctx->pc = 0x315664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315660u;
        // 0x315664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315668u;
        goto label_315668;
    }
    ctx->pc = 0x315660u;
    SET_GPR_U32(ctx, 31, 0x315668u);
    ctx->pc = 0x315664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315660u;
    // 0x315664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A48u, 0x315660u, 0x315668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315668u;
label_315668:
    // 0x315668: 0x8e84bd3c  lw          $a0, -0x42C4($s4)
    ctx->pc = 0x315668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
label_31566c:
    // 0x31566c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_315670:
    if (ctx->pc == 0x315670u) {
        ctx->pc = 0x315670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31566Cu;
        // 0x315670: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315674u;
        goto label_315674;
    }
    ctx->pc = 0x31566Cu;
    {
        const bool branch_taken_0x31566c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x315670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31566Cu;
        // 0x315670: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31566c) {
            ctx->pc = 0x315690u;
            goto label_315690;
        }
    }
    ctx->pc = 0x315674u;
label_315674:
    // 0x315674: 0xc0c884e  jal         func_322138
label_315678:
    if (ctx->pc == 0x315678u) {
        ctx->pc = 0x315678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315674u;
        // 0x315678: 0x8e45bd48  lw          $a1, -0x42B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31567Cu;
        goto label_31567c;
    }
    ctx->pc = 0x315674u;
    SET_GPR_U32(ctx, 31, 0x31567Cu);
    ctx->pc = 0x315678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315674u;
    // 0x315678: 0x8e45bd48  lw          $a1, -0x42B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x315674u, 0x31567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31567Cu;
label_31567c:
    // 0x31567c: 0xc0c4df4  jal         func_3137D0
label_315680:
    if (ctx->pc == 0x315680u) {
        ctx->pc = 0x315680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31567Cu;
        // 0x315680: 0x8e84bd3c  lw          $a0, -0x42C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315684u;
        goto label_315684;
    }
    ctx->pc = 0x31567Cu;
    SET_GPR_U32(ctx, 31, 0x315684u);
    ctx->pc = 0x315680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31567Cu;
    // 0x315680: 0x8e84bd3c  lw          $a0, -0x42C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3137D0u, 0x31567Cu, 0x315684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315684u;
label_315684:
    // 0x315684: 0xc0c8a1a  jal         func_322868
label_315688:
    if (ctx->pc == 0x315688u) {
        ctx->pc = 0x315688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315684u;
        // 0x315688: 0x8e84bd3c  lw          $a0, -0x42C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31568Cu;
        goto label_31568c;
    }
    ctx->pc = 0x315684u;
    SET_GPR_U32(ctx, 31, 0x31568Cu);
    ctx->pc = 0x315688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315684u;
    // 0x315688: 0x8e84bd3c  lw          $a0, -0x42C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322868u, 0x315684u, 0x31568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31568Cu;
label_31568c:
    // 0x31568c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315690:
    // 0x315690: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x315690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950180)));
label_315694:
    // 0x315694: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_315698:
    if (ctx->pc == 0x315698u) {
        ctx->pc = 0x315698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315694u;
        // 0x315698: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31569Cu;
        goto label_31569c;
    }
    ctx->pc = 0x315694u;
    {
        const bool branch_taken_0x315694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315694u;
        // 0x315698: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315694) {
            ctx->pc = 0x3156A4u;
            goto label_3156a4;
        }
    }
    ctx->pc = 0x31569Cu;
label_31569c:
    // 0x31569c: 0xc0b5454  jal         func_2D5150
label_3156a0:
    if (ctx->pc == 0x3156A0u) {
        ctx->pc = 0x3156A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31569Cu;
        // 0x3156a0: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156A4u;
        goto label_3156a4;
    }
    ctx->pc = 0x31569Cu;
    SET_GPR_U32(ctx, 31, 0x3156A4u);
    ctx->pc = 0x3156A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31569Cu;
    // 0x3156a0: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5150u, 0x31569Cu, 0x3156A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156A4u;
label_3156a4:
    // 0x3156a4: 0xc09f4ce  jal         func_27D338
label_3156a8:
    if (ctx->pc == 0x3156A8u) {
        ctx->pc = 0x3156A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156A4u;
        // 0x3156a8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156ACu;
        goto label_3156ac;
    }
    ctx->pc = 0x3156A4u;
    SET_GPR_U32(ctx, 31, 0x3156ACu);
    ctx->pc = 0x3156A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156A4u;
    // 0x3156a8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D338u, 0x3156A4u, 0x3156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156ACu;
label_3156ac:
    // 0x3156ac: 0xc0ce0f4  jal         func_3383D0
label_3156b0:
    if (ctx->pc == 0x3156B0u) {
        ctx->pc = 0x3156B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156ACu;
        // 0x3156b0: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156B4u;
        goto label_3156b4;
    }
    ctx->pc = 0x3156ACu;
    SET_GPR_U32(ctx, 31, 0x3156B4u);
    ctx->pc = 0x3156B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156ACu;
    // 0x3156b0: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3383D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3383D0u, 0x3156ACu, 0x3156B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156B4u;
label_3156b4:
    // 0x3156b4: 0xc0a2e98  jal         func_28BA60
label_3156b8:
    if (ctx->pc == 0x3156B8u) {
        ctx->pc = 0x3156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B4u;
        // 0x3156b8: 0x26102400  addiu       $s0, $s0, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156BCu;
        goto label_3156bc;
    }
    ctx->pc = 0x3156B4u;
    SET_GPR_U32(ctx, 31, 0x3156BCu);
    ctx->pc = 0x3156B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156B4u;
    // 0x3156b8: 0x26102400  addiu       $s0, $s0, 0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BA60u, 0x3156B4u, 0x3156BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156BCu;
label_3156bc:
    // 0x3156bc: 0xc0cf3a2  jal         func_33CE88
label_3156c0:
    if (ctx->pc == 0x3156C0u) {
        ctx->pc = 0x3156C4u;
        goto label_3156c4;
    }
    ctx->pc = 0x3156BCu;
    SET_GPR_U32(ctx, 31, 0x3156C4u);
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x3156BCu, 0x3156C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156C4u;
label_3156c4:
    // 0x3156c4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3156c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_3156c8:
    // 0x3156c8: 0xc0d7074  jal         func_35C1D0
label_3156cc:
    if (ctx->pc == 0x3156CCu) {
        ctx->pc = 0x3156CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156C8u;
        // 0x3156cc: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156D0u;
        goto label_3156d0;
    }
    ctx->pc = 0x3156C8u;
    SET_GPR_U32(ctx, 31, 0x3156D0u);
    ctx->pc = 0x3156CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156C8u;
    // 0x3156cc: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1D0u, 0x3156C8u, 0x3156D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156D0u;
label_3156d0:
    // 0x3156d0: 0xc0d0580  jal         func_341600
label_3156d4:
    if (ctx->pc == 0x3156D4u) {
        ctx->pc = 0x3156D8u;
        goto label_3156d8;
    }
    ctx->pc = 0x3156D0u;
    SET_GPR_U32(ctx, 31, 0x3156D8u);
    ctx->pc = 0x341600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341600u, 0x3156D0u, 0x3156D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156D8u;
label_3156d8:
    // 0x3156d8: 0xc0a2b12  jal         func_28AC48
label_3156dc:
    if (ctx->pc == 0x3156DCu) {
        ctx->pc = 0x3156E0u;
        goto label_3156e0;
    }
    ctx->pc = 0x3156D8u;
    SET_GPR_U32(ctx, 31, 0x3156E0u);
    ctx->pc = 0x28AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC48u, 0x3156D8u, 0x3156E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156E0u;
label_3156e0:
    // 0x3156e0: 0xc0d4dea  jal         func_3537A8
label_3156e4:
    if (ctx->pc == 0x3156E4u) {
        ctx->pc = 0x3156E8u;
        goto label_3156e8;
    }
    ctx->pc = 0x3156E0u;
    SET_GPR_U32(ctx, 31, 0x3156E8u);
    ctx->pc = 0x3537A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3537A8u, 0x3156E0u, 0x3156E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156E8u;
label_3156e8:
    // 0x3156e8: 0xc0d4dda  jal         func_353768
label_3156ec:
    if (ctx->pc == 0x3156ECu) {
        ctx->pc = 0x3156F0u;
        goto label_3156f0;
    }
    ctx->pc = 0x3156E8u;
    SET_GPR_U32(ctx, 31, 0x3156F0u);
    ctx->pc = 0x353768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353768u, 0x3156E8u, 0x3156F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156F0u;
label_3156f0:
    // 0x3156f0: 0xc09d7e4  jal         func_275F90
label_3156f4:
    if (ctx->pc == 0x3156F4u) {
        ctx->pc = 0x3156F8u;
        goto label_3156f8;
    }
    ctx->pc = 0x3156F0u;
    SET_GPR_U32(ctx, 31, 0x3156F8u);
    ctx->pc = 0x275F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275F90u, 0x3156F0u, 0x3156F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156F8u;
label_3156f8:
    // 0x3156f8: 0xc085ac0  jal         func_216B00
label_3156fc:
    if (ctx->pc == 0x3156FCu) {
        ctx->pc = 0x315700u;
        goto label_315700;
    }
    ctx->pc = 0x3156F8u;
    SET_GPR_U32(ctx, 31, 0x315700u);
    ctx->pc = 0x216B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216B00u, 0x3156F8u, 0x315700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315700u;
label_315700:
    // 0x315700: 0xc0d47ac  jal         func_351EB0
label_315704:
    if (ctx->pc == 0x315704u) {
        ctx->pc = 0x315708u;
        goto label_315708;
    }
    ctx->pc = 0x315700u;
    SET_GPR_U32(ctx, 31, 0x315708u);
    ctx->pc = 0x351EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351EB0u, 0x315700u, 0x315708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315708u;
label_315708:
    // 0x315708: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x315708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_31570c:
    // 0x31570c: 0xc0b0b44  jal         func_2C2D10
label_315710:
    if (ctx->pc == 0x315710u) {
        ctx->pc = 0x315710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31570Cu;
        // 0x315710: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315714u;
        goto label_315714;
    }
    ctx->pc = 0x31570Cu;
    SET_GPR_U32(ctx, 31, 0x315714u);
    ctx->pc = 0x315710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31570Cu;
    // 0x315710: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D10u, 0x31570Cu, 0x315714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315714u;
label_315714:
    // 0x315714: 0xc0d9576  jal         func_3655D8
label_315718:
    if (ctx->pc == 0x315718u) {
        ctx->pc = 0x31571Cu;
        goto label_31571c;
    }
    ctx->pc = 0x315714u;
    SET_GPR_U32(ctx, 31, 0x31571Cu);
    ctx->pc = 0x3655D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3655D8u, 0x315714u, 0x31571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31571Cu;
label_31571c:
    // 0x31571c: 0xc0d61a4  jal         func_358690
label_315720:
    if (ctx->pc == 0x315720u) {
        ctx->pc = 0x315724u;
        goto label_315724;
    }
    ctx->pc = 0x31571Cu;
    SET_GPR_U32(ctx, 31, 0x315724u);
    ctx->pc = 0x358690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358690u, 0x31571Cu, 0x315724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315724u;
label_315724:
    // 0x315724: 0xc0d6de0  jal         func_35B780
label_315728:
    if (ctx->pc == 0x315728u) {
        ctx->pc = 0x31572Cu;
        goto label_31572c;
    }
    ctx->pc = 0x315724u;
    SET_GPR_U32(ctx, 31, 0x31572Cu);
    ctx->pc = 0x35B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B780u, 0x315724u, 0x31572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31572Cu;
label_31572c:
    // 0x31572c: 0xc0c96aa  jal         func_325AA8
label_315730:
    if (ctx->pc == 0x315730u) {
        ctx->pc = 0x315734u;
        goto label_315734;
    }
    ctx->pc = 0x31572Cu;
    SET_GPR_U32(ctx, 31, 0x315734u);
    ctx->pc = 0x325AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA8u, 0x31572Cu, 0x315734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315734u;
label_315734:
    // 0x315734: 0xc0cd88c  jal         func_336230
label_315738:
    if (ctx->pc == 0x315738u) {
        ctx->pc = 0x31573Cu;
        goto label_31573c;
    }
    ctx->pc = 0x315734u;
    SET_GPR_U32(ctx, 31, 0x31573Cu);
    ctx->pc = 0x336230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336230u, 0x315734u, 0x31573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31573Cu;
label_31573c:
    // 0x31573c: 0xc0401ee  jal         func_1007B8
label_315740:
    if (ctx->pc == 0x315740u) {
        ctx->pc = 0x315740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31573Cu;
        // 0x315740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315744u;
        goto label_315744;
    }
    ctx->pc = 0x31573Cu;
    SET_GPR_U32(ctx, 31, 0x315744u);
    ctx->pc = 0x315740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31573Cu;
    // 0x315740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1007B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007B8u, 0x31573Cu, 0x315744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315744u;
label_315744:
    // 0x315744: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315748:
    // 0x315748: 0xac40bd4c  sw          $zero, -0x42B4($v0)
    ctx->pc = 0x315748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950220), GPR_U32(ctx, 0));
label_31574c:
    // 0x31574c: 0xc0ab05c  jal         func_2AC170
label_315750:
    if (ctx->pc == 0x315750u) {
        ctx->pc = 0x315750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31574Cu;
        // 0x315750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315754u;
        goto label_315754;
    }
    ctx->pc = 0x31574Cu;
    SET_GPR_U32(ctx, 31, 0x315754u);
    ctx->pc = 0x315750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31574Cu;
    // 0x315750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC170u, 0x31574Cu, 0x315754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315754u;
label_315754:
    // 0x315754: 0xc0c3dc2  jal         func_30F708
label_315758:
    if (ctx->pc == 0x315758u) {
        ctx->pc = 0x31575Cu;
        goto label_31575c;
    }
    ctx->pc = 0x315754u;
    SET_GPR_U32(ctx, 31, 0x31575Cu);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x315754u, 0x31575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31575Cu;
label_31575c:
    // 0x31575c: 0xc0c46fa  jal         func_311BE8
label_315760:
    if (ctx->pc == 0x315760u) {
        ctx->pc = 0x315760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31575Cu;
        // 0x315760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315764u;
        goto label_315764;
    }
    ctx->pc = 0x31575Cu;
    SET_GPR_U32(ctx, 31, 0x315764u);
    ctx->pc = 0x315760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31575Cu;
    // 0x315760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311BE8u, 0x31575Cu, 0x315764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315764u;
label_315764:
    // 0x315764: 0xc0d2f1a  jal         func_34BC68
label_315768:
    if (ctx->pc == 0x315768u) {
        ctx->pc = 0x31576Cu;
        goto label_31576c;
    }
    ctx->pc = 0x315764u;
    SET_GPR_U32(ctx, 31, 0x31576Cu);
    ctx->pc = 0x34BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC68u, 0x315764u, 0x31576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31576Cu;
label_31576c:
    // 0x31576c: 0xc0c7c54  jal         func_31F150
label_315770:
    if (ctx->pc == 0x315770u) {
        ctx->pc = 0x315774u;
        goto label_315774;
    }
    ctx->pc = 0x31576Cu;
    SET_GPR_U32(ctx, 31, 0x315774u);
    ctx->pc = 0x31F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F150u, 0x31576Cu, 0x315774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315774u;
label_315774:
    // 0x315774: 0xc0d99fa  jal         func_3667E8
label_315778:
    if (ctx->pc == 0x315778u) {
        ctx->pc = 0x31577Cu;
        goto label_31577c;
    }
    ctx->pc = 0x315774u;
    SET_GPR_U32(ctx, 31, 0x31577Cu);
    ctx->pc = 0x3667E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3667E8u, 0x315774u, 0x31577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31577Cu;
label_31577c:
    // 0x31577c: 0xc073dce  jal         func_1CF738
label_315780:
    if (ctx->pc == 0x315780u) {
        ctx->pc = 0x315784u;
        goto label_315784;
    }
    ctx->pc = 0x31577Cu;
    SET_GPR_U32(ctx, 31, 0x315784u);
    ctx->pc = 0x1CF738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF738u, 0x31577Cu, 0x315784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315784u;
label_315784:
    // 0x315784: 0xc0971a4  jal         func_25C690
label_315788:
    if (ctx->pc == 0x315788u) {
        ctx->pc = 0x31578Cu;
        goto label_31578c;
    }
    ctx->pc = 0x315784u;
    SET_GPR_U32(ctx, 31, 0x31578Cu);
    ctx->pc = 0x25C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C690u, 0x315784u, 0x31578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31578Cu;
label_31578c:
    // 0x31578c: 0xc0c549c  jal         func_315270
label_315790:
    if (ctx->pc == 0x315790u) {
        ctx->pc = 0x315794u;
        goto label_315794;
    }
    ctx->pc = 0x31578Cu;
    SET_GPR_U32(ctx, 31, 0x315794u);
    ctx->pc = 0x315270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315270u, 0x31578Cu, 0x315794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315794u;
label_315794:
    // 0x315794: 0xc0c549e  jal         func_315278
label_315798:
    if (ctx->pc == 0x315798u) {
        ctx->pc = 0x31579Cu;
        goto label_31579c;
    }
    ctx->pc = 0x315794u;
    SET_GPR_U32(ctx, 31, 0x31579Cu);
    ctx->pc = 0x315278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315278u, 0x315794u, 0x31579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31579Cu;
label_31579c:
    // 0x31579c: 0x8e22cba8  lw          $v0, -0x3458($s1)
    ctx->pc = 0x31579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
label_3157a0:
    // 0x3157a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3157a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3157a4:
    // 0x3157a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3157a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3157a8:
    // 0x3157a8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3157a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3157ac:
    // 0x3157ac: 0x40f809  jalr        $v0
label_3157b0:
    if (ctx->pc == 0x3157B0u) {
        ctx->pc = 0x3157B4u;
        goto label_3157b4;
    }
    ctx->pc = 0x3157ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3157B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3157ACu, 0x3157B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3157B4u;
label_3157b4:
    // 0x3157b4: 0xc0760da  jal         func_1D8368
label_3157b8:
    if (ctx->pc == 0x3157B8u) {
        ctx->pc = 0x3157BCu;
        goto label_3157bc;
    }
    ctx->pc = 0x3157B4u;
    SET_GPR_U32(ctx, 31, 0x3157BCu);
    ctx->pc = 0x1D8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8368u, 0x3157B4u, 0x3157BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157BCu;
label_3157bc:
    // 0x3157bc: 0xc0760ea  jal         func_1D83A8
label_3157c0:
    if (ctx->pc == 0x3157C0u) {
        ctx->pc = 0x3157C4u;
        goto label_3157c4;
    }
    ctx->pc = 0x3157BCu;
    SET_GPR_U32(ctx, 31, 0x3157C4u);
    ctx->pc = 0x1D83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83A8u, 0x3157BCu, 0x3157C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157C4u;
label_3157c4:
    // 0x3157c4: 0x8e22cba8  lw          $v0, -0x3458($s1)
    ctx->pc = 0x3157c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
label_3157c8:
    // 0x3157c8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3157c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3157cc:
    // 0x3157cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3157ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3157d0:
    // 0x3157d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3157d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3157d4:
    // 0x3157d4: 0x40f809  jalr        $v0
label_3157d8:
    if (ctx->pc == 0x3157D8u) {
        ctx->pc = 0x3157DCu;
        goto label_3157dc;
    }
    ctx->pc = 0x3157D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3157DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3157D4u, 0x3157DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3157DCu;
label_3157dc:
    // 0x3157dc: 0xc0a0496  jal         func_281258
label_3157e0:
    if (ctx->pc == 0x3157E0u) {
        ctx->pc = 0x3157E4u;
        goto label_3157e4;
    }
    ctx->pc = 0x3157DCu;
    SET_GPR_U32(ctx, 31, 0x3157E4u);
    ctx->pc = 0x281258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281258u, 0x3157DCu, 0x3157E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157E4u;
label_3157e4:
    // 0x3157e4: 0xc0a0444  jal         func_281110
label_3157e8:
    if (ctx->pc == 0x3157E8u) {
        ctx->pc = 0x3157ECu;
        goto label_3157ec;
    }
    ctx->pc = 0x3157E4u;
    SET_GPR_U32(ctx, 31, 0x3157ECu);
    ctx->pc = 0x281110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281110u, 0x3157E4u, 0x3157ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157ECu;
label_3157ec:
    // 0x3157ec: 0xc0a04a0  jal         func_281280
label_3157f0:
    if (ctx->pc == 0x3157F0u) {
        ctx->pc = 0x3157F4u;
        goto label_3157f4;
    }
    ctx->pc = 0x3157ECu;
    SET_GPR_U32(ctx, 31, 0x3157F4u);
    ctx->pc = 0x281280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281280u, 0x3157ECu, 0x3157F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157F4u;
label_3157f4:
    // 0x3157f4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x3157f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_3157f8:
    // 0x3157f8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x3157f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3157fc:
    // 0x3157fc: 0x2453f130  addiu       $s3, $v0, -0xED0
    ctx->pc = 0x3157fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
label_315800:
    // 0x315800: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315804:
    // 0x315804: 0xae6400f8  sw          $a0, 0xF8($s3)
    ctx->pc = 0x315804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 4));
label_315808:
    // 0x315808: 0xac60bd7c  sw          $zero, -0x4284($v1)
    ctx->pc = 0x315808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950268), GPR_U32(ctx, 0));
label_31580c:
    // 0x31580c: 0xc0a04ce  jal         func_281338
label_315810:
    if (ctx->pc == 0x315810u) {
        ctx->pc = 0x315810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31580Cu;
        // 0x315810: 0xae6000fc  sw          $zero, 0xFC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315814u;
        goto label_315814;
    }
    ctx->pc = 0x31580Cu;
    SET_GPR_U32(ctx, 31, 0x315814u);
    ctx->pc = 0x315810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31580Cu;
    // 0x315810: 0xae6000fc  sw          $zero, 0xFC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281338u, 0x31580Cu, 0x315814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315814u;
label_315814:
    // 0x315814: 0xc0a213a  jal         func_2884E8
label_315818:
    if (ctx->pc == 0x315818u) {
        ctx->pc = 0x31581Cu;
        goto label_31581c;
    }
    ctx->pc = 0x315814u;
    SET_GPR_U32(ctx, 31, 0x31581Cu);
    ctx->pc = 0x2884E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884E8u, 0x315814u, 0x31581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31581Cu;
label_31581c:
    // 0x31581c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315820:
    // 0x315820: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315824:
    // 0x315824: 0xc0a0472  jal         func_2811C8
label_315828:
    if (ctx->pc == 0x315828u) {
        ctx->pc = 0x315828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315824u;
        // 0x315828: 0x24a53428  addiu       $a1, $a1, 0x3428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31582Cu;
        goto label_31582c;
    }
    ctx->pc = 0x315824u;
    SET_GPR_U32(ctx, 31, 0x31582Cu);
    ctx->pc = 0x315828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315824u;
    // 0x315828: 0x24a53428  addiu       $a1, $a1, 0x3428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315824u, 0x31582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31582Cu;
label_31582c:
    // 0x31582c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315830:
    // 0x315830: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315834:
    // 0x315834: 0xc0a0472  jal         func_2811C8
label_315838:
    if (ctx->pc == 0x315838u) {
        ctx->pc = 0x315838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315834u;
        // 0x315838: 0x24a53430  addiu       $a1, $a1, 0x3430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31583Cu;
        goto label_31583c;
    }
    ctx->pc = 0x315834u;
    SET_GPR_U32(ctx, 31, 0x31583Cu);
    ctx->pc = 0x315838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315834u;
    // 0x315838: 0x24a53430  addiu       $a1, $a1, 0x3430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315834u, 0x31583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31583Cu;
label_31583c:
    // 0x31583c: 0xc0ab02e  jal         func_2AC0B8
label_315840:
    if (ctx->pc == 0x315840u) {
        ctx->pc = 0x315840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31583Cu;
        // 0x315840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315844u;
        goto label_315844;
    }
    ctx->pc = 0x31583Cu;
    SET_GPR_U32(ctx, 31, 0x315844u);
    ctx->pc = 0x315840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31583Cu;
    // 0x315840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC0B8u, 0x31583Cu, 0x315844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315844u;
label_315844:
    // 0x315844: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315848:
    // 0x315848: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31584c:
    // 0x31584c: 0xc0a0472  jal         func_2811C8
label_315850:
    if (ctx->pc == 0x315850u) {
        ctx->pc = 0x315850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31584Cu;
        // 0x315850: 0x24a53440  addiu       $a1, $a1, 0x3440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315854u;
        goto label_315854;
    }
    ctx->pc = 0x31584Cu;
    SET_GPR_U32(ctx, 31, 0x315854u);
    ctx->pc = 0x315850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31584Cu;
    // 0x315850: 0x24a53440  addiu       $a1, $a1, 0x3440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31584Cu, 0x315854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315854u;
label_315854:
    // 0x315854: 0xc0d27ce  jal         func_349F38
label_315858:
    if (ctx->pc == 0x315858u) {
        ctx->pc = 0x31585Cu;
        goto label_31585c;
    }
    ctx->pc = 0x315854u;
    SET_GPR_U32(ctx, 31, 0x31585Cu);
    ctx->pc = 0x349F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F38u, 0x315854u, 0x31585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31585Cu;
label_31585c:
    // 0x31585c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x31585cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_315860:
    // 0x315860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315864:
    // 0x315864: 0xc0c5a68  jal         func_3169A0
label_315868:
    if (ctx->pc == 0x315868u) {
        ctx->pc = 0x315868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315864u;
        // 0x315868: 0x24843450  addiu       $a0, $a0, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31586Cu;
        goto label_31586c;
    }
    ctx->pc = 0x315864u;
    SET_GPR_U32(ctx, 31, 0x31586Cu);
    ctx->pc = 0x315868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315864u;
    // 0x315868: 0x24843450  addiu       $a0, $a0, 0x3450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3169A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169A0u, 0x315864u, 0x31586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31586Cu;
label_31586c:
    // 0x31586c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_315870:
    if (ctx->pc == 0x315870u) {
        ctx->pc = 0x315870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31586Cu;
        // 0x315870: 0x8e44bd48  lw          $a0, -0x42B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315874u;
        goto label_315874;
    }
    ctx->pc = 0x31586Cu;
    {
        const bool branch_taken_0x31586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31586c) {
            ctx->pc = 0x315870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31586Cu;
            // 0x315870: 0x8e44bd48  lw          $a0, -0x42B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31587Cu;
            goto label_31587c;
        }
    }
    ctx->pc = 0x315874u;
label_315874:
    // 0x315874: 0x100000cb  b           . + 4 + (0xCB << 2)
label_315878:
    if (ctx->pc == 0x315878u) {
        ctx->pc = 0x315878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315874u;
        // 0x315878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31587Cu;
        goto label_31587c;
    }
    ctx->pc = 0x315874u;
    {
        const bool branch_taken_0x315874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315874u;
        // 0x315878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315874) {
            ctx->pc = 0x315BA4u;
            goto label_315ba4;
        }
    }
    ctx->pc = 0x31587Cu;
label_31587c:
    // 0x31587c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31587cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315880:
    // 0x315880: 0x24a53458  addiu       $a1, $a1, 0x3458
    ctx->pc = 0x315880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13400));
label_315884:
    // 0x315884: 0xc0a0472  jal         func_2811C8
label_315888:
    if (ctx->pc == 0x315888u) {
        ctx->pc = 0x315888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315884u;
        // 0x315888: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31588Cu;
        goto label_31588c;
    }
    ctx->pc = 0x315884u;
    SET_GPR_U32(ctx, 31, 0x31588Cu);
    ctx->pc = 0x315888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315884u;
    // 0x315888: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315884u, 0x31588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31588Cu;
label_31588c:
    // 0x31588c: 0xc085a3e  jal         func_2168F8
label_315890:
    if (ctx->pc == 0x315890u) {
        ctx->pc = 0x315890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31588Cu;
        // 0x315890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315894u;
        goto label_315894;
    }
    ctx->pc = 0x31588Cu;
    SET_GPR_U32(ctx, 31, 0x315894u);
    ctx->pc = 0x315890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31588Cu;
    // 0x315890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2168F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2168F8u, 0x31588Cu, 0x315894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315894u;
label_315894:
    // 0x315894: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315898:
    // 0x315898: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_31589c:
    // 0x31589c: 0xc0a0472  jal         func_2811C8
label_3158a0:
    if (ctx->pc == 0x3158A0u) {
        ctx->pc = 0x3158A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31589Cu;
        // 0x3158a0: 0x24a53478  addiu       $a1, $a1, 0x3478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158A4u;
        goto label_3158a4;
    }
    ctx->pc = 0x31589Cu;
    SET_GPR_U32(ctx, 31, 0x3158A4u);
    ctx->pc = 0x3158A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31589Cu;
    // 0x3158a0: 0x24a53478  addiu       $a1, $a1, 0x3478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x31589Cu, 0x3158A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158A4u;
label_3158a4:
    // 0x3158a4: 0xc0400cc  jal         func_100330
label_3158a8:
    if (ctx->pc == 0x3158A8u) {
        ctx->pc = 0x3158ACu;
        goto label_3158ac;
    }
    ctx->pc = 0x3158A4u;
    SET_GPR_U32(ctx, 31, 0x3158ACu);
    ctx->pc = 0x100330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100330u, 0x3158A4u, 0x3158ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158ACu;
label_3158ac:
    // 0x3158ac: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3158acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3158b0:
    // 0x3158b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3158b4:
    // 0x3158b4: 0xc0a0472  jal         func_2811C8
label_3158b8:
    if (ctx->pc == 0x3158B8u) {
        ctx->pc = 0x3158B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158B4u;
        // 0x3158b8: 0x24a53490  addiu       $a1, $a1, 0x3490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158BCu;
        goto label_3158bc;
    }
    ctx->pc = 0x3158B4u;
    SET_GPR_U32(ctx, 31, 0x3158BCu);
    ctx->pc = 0x3158B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158B4u;
    // 0x3158b8: 0x24a53490  addiu       $a1, $a1, 0x3490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3158B4u, 0x3158BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158BCu;
label_3158bc:
    // 0x3158bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3158bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3158c0:
    // 0x3158c0: 0x8c4395b4  lw          $v1, -0x6A4C($v0)
    ctx->pc = 0x3158c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940084)));
label_3158c4:
    // 0x3158c4: 0xc07306a  jal         func_1CC1A8
label_3158c8:
    if (ctx->pc == 0x3158C8u) {
        ctx->pc = 0x3158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158C4u;
        // 0x3158c8: 0xae23bd50  sw          $v1, -0x42B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158CCu;
        goto label_3158cc;
    }
    ctx->pc = 0x3158C4u;
    SET_GPR_U32(ctx, 31, 0x3158CCu);
    ctx->pc = 0x3158C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158C4u;
    // 0x3158c8: 0xae23bd50  sw          $v1, -0x42B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950224), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1A8u, 0x3158C4u, 0x3158CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158CCu;
label_3158cc:
    // 0x3158cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3158ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3158d0:
    // 0x3158d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3158d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3158d4:
    // 0x3158d4: 0xc0c580c  jal         func_316030
label_3158d8:
    if (ctx->pc == 0x3158D8u) {
        ctx->pc = 0x3158D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158D4u;
        // 0x3158d8: 0xac4089c0  sw          $zero, -0x7640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158DCu;
        goto label_3158dc;
    }
    ctx->pc = 0x3158D4u;
    SET_GPR_U32(ctx, 31, 0x3158DCu);
    ctx->pc = 0x3158D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158D4u;
    // 0x3158d8: 0xac4089c0  sw          $zero, -0x7640($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x3158D4u, 0x3158DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158DCu;
label_3158dc:
    // 0x3158dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3158dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3158e0:
    // 0x3158e0: 0xc0f6a96  jal         func_3DAA58
label_3158e4:
    if (ctx->pc == 0x3158E4u) {
        ctx->pc = 0x3158E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158E0u;
        // 0x3158e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158E8u;
        goto label_3158e8;
    }
    ctx->pc = 0x3158E0u;
    SET_GPR_U32(ctx, 31, 0x3158E8u);
    ctx->pc = 0x3158E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158E0u;
    // 0x3158e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3158E0u, 0x3158E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158E8u;
label_3158e8:
    // 0x3158e8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3158e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3158ec:
    // 0x3158ec: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3158ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3158f0:
    // 0x3158f0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3158f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3158f4:
    // 0x3158f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3158f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3158f8:
    // 0x3158f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3158f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3158fc:
    // 0x3158fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3158fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315900:
    // 0x315900: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x315900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_315904:
    // 0x315904: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x315904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_315908:
    // 0x315908: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x315908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31590c:
    // 0x31590c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315910:
    // 0x315910: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x315910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315914:
    // 0x315914: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x315914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_315918:
    // 0x315918: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x315918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_31591c:
    // 0x31591c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31591cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_315920:
    // 0x315920: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x315920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315924:
    // 0x315924: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x315924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315928:
    // 0x315928: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x315928u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31592c:
    // 0x31592c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31592cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_315930:
    // 0x315930: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x315930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_315934:
    // 0x315934: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x315934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315938:
    // 0x315938: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x315938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31593c:
    // 0x31593c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315940:
    // 0x315940: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x315940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_315944:
    // 0x315944: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x315944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315948:
    // 0x315948: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x315948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31594c:
    // 0x31594c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x31594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315950:
    // 0x315950: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x315950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_315954:
    // 0x315954: 0x8e42bd48  lw          $v0, -0x42B8($s2)
    ctx->pc = 0x315954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315958:
    // 0x315958: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x315958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_31595c:
    // 0x31595c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31595cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_315960:
    // 0x315960: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x315960u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315964:
    // 0x315964: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x315964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_315968:
    // 0x315968: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x315968u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_31596c:
    // 0x31596c: 0x8e42bd48  lw          $v0, -0x42B8($s2)
    ctx->pc = 0x31596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315970:
    // 0x315970: 0xc0c48da  jal         func_312368
label_315974:
    if (ctx->pc == 0x315974u) {
        ctx->pc = 0x315974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315970u;
        // 0x315974: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315978u;
        goto label_315978;
    }
    ctx->pc = 0x315970u;
    SET_GPR_U32(ctx, 31, 0x315978u);
    ctx->pc = 0x315974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315970u;
    // 0x315974: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x315970u, 0x315978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315978u;
label_315978:
    // 0x315978: 0xc0405f6  jal         func_1017D8
label_31597c:
    if (ctx->pc == 0x31597Cu) {
        ctx->pc = 0x315980u;
        goto label_315980;
    }
    ctx->pc = 0x315978u;
    SET_GPR_U32(ctx, 31, 0x315980u);
    ctx->pc = 0x1017D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017D8u, 0x315978u, 0x315980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315980u;
label_315980:
    // 0x315980: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315984:
    // 0x315984: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315988:
    // 0x315988: 0xc0a0472  jal         func_2811C8
label_31598c:
    if (ctx->pc == 0x31598Cu) {
        ctx->pc = 0x31598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315988u;
        // 0x31598c: 0x24a534a0  addiu       $a1, $a1, 0x34A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315990u;
        goto label_315990;
    }
    ctx->pc = 0x315988u;
    SET_GPR_U32(ctx, 31, 0x315990u);
    ctx->pc = 0x31598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315988u;
    // 0x31598c: 0x24a534a0  addiu       $a1, $a1, 0x34A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315988u, 0x315990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315990u;
label_315990:
    // 0x315990: 0xc0c963c  jal         func_3258F0
label_315994:
    if (ctx->pc == 0x315994u) {
        ctx->pc = 0x315998u;
        goto label_315998;
    }
    ctx->pc = 0x315990u;
    SET_GPR_U32(ctx, 31, 0x315998u);
    ctx->pc = 0x3258F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258F0u, 0x315990u, 0x315998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315998u;
label_315998:
    // 0x315998: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_31599c:
    // 0x31599c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31599cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3159a0:
    // 0x3159a0: 0xc0a0472  jal         func_2811C8
label_3159a4:
    if (ctx->pc == 0x3159A4u) {
        ctx->pc = 0x3159A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159A0u;
        // 0x3159a4: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159A8u;
        goto label_3159a8;
    }
    ctx->pc = 0x3159A0u;
    SET_GPR_U32(ctx, 31, 0x3159A8u);
    ctx->pc = 0x3159A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159A0u;
    // 0x3159a4: 0x24a534b0  addiu       $a1, $a1, 0x34B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3159A0u, 0x3159A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159A8u;
label_3159a8:
    // 0x3159a8: 0xc0c12fe  jal         func_304BF8
label_3159ac:
    if (ctx->pc == 0x3159ACu) {
        ctx->pc = 0x3159B0u;
        goto label_3159b0;
    }
    ctx->pc = 0x3159A8u;
    SET_GPR_U32(ctx, 31, 0x3159B0u);
    ctx->pc = 0x304BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304BF8u, 0x3159A8u, 0x3159B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159B0u;
label_3159b0:
    // 0x3159b0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x3159b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_3159b4:
    // 0x3159b4: 0x24552508  addiu       $s5, $v0, 0x2508
    ctx->pc = 0x3159b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_3159b8:
    // 0x3159b8: 0xc0acc56  jal         func_2B3158
label_3159bc:
    if (ctx->pc == 0x3159BCu) {
        ctx->pc = 0x3159BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159B8u;
        // 0x3159bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159C0u;
        goto label_3159c0;
    }
    ctx->pc = 0x3159B8u;
    SET_GPR_U32(ctx, 31, 0x3159C0u);
    ctx->pc = 0x3159BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159B8u;
    // 0x3159bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3158u, 0x3159B8u, 0x3159C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159C0u;
label_3159c0:
    // 0x3159c0: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3159c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_3159c4:
    // 0x3159c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3159c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3159c8:
    // 0x3159c8: 0xc0cd830  jal         func_3360C0
label_3159cc:
    if (ctx->pc == 0x3159CCu) {
        ctx->pc = 0x3159CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C8u;
        // 0x3159cc: 0x8c4421e0  lw          $a0, 0x21E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159D0u;
        goto label_3159d0;
    }
    ctx->pc = 0x3159C8u;
    SET_GPR_U32(ctx, 31, 0x3159D0u);
    ctx->pc = 0x3159CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159C8u;
    // 0x3159cc: 0x8c4421e0  lw          $a0, 0x21E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3360C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3360C0u, 0x3159C8u, 0x3159D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159D0u;
label_3159d0:
    // 0x3159d0: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3159d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3159d4:
    // 0x3159d4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3159d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3159d8:
    // 0x3159d8: 0xc0a0472  jal         func_2811C8
label_3159dc:
    if (ctx->pc == 0x3159DCu) {
        ctx->pc = 0x3159DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159D8u;
        // 0x3159dc: 0x24a534c8  addiu       $a1, $a1, 0x34C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159E0u;
        goto label_3159e0;
    }
    ctx->pc = 0x3159D8u;
    SET_GPR_U32(ctx, 31, 0x3159E0u);
    ctx->pc = 0x3159DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159D8u;
    // 0x3159dc: 0x24a534c8  addiu       $a1, $a1, 0x34C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3159D8u, 0x3159E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159E0u;
label_3159e0:
    // 0x3159e0: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3159e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3159e4:
    // 0x3159e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3159e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3159e8:
    // 0x3159e8: 0xc0a0472  jal         func_2811C8
label_3159ec:
    if (ctx->pc == 0x3159ECu) {
        ctx->pc = 0x3159ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159E8u;
        // 0x3159ec: 0x24a534e8  addiu       $a1, $a1, 0x34E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159F0u;
        goto label_3159f0;
    }
    ctx->pc = 0x3159E8u;
    SET_GPR_U32(ctx, 31, 0x3159F0u);
    ctx->pc = 0x3159ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159E8u;
    // 0x3159ec: 0x24a534e8  addiu       $a1, $a1, 0x34E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3159E8u, 0x3159F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159F0u;
label_3159f0:
    // 0x3159f0: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3159f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3159f4:
    // 0x3159f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3159f8:
    // 0x3159f8: 0xc0a0472  jal         func_2811C8
label_3159fc:
    if (ctx->pc == 0x3159FCu) {
        ctx->pc = 0x3159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F8u;
        // 0x3159fc: 0x24a53510  addiu       $a1, $a1, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A00u;
        goto label_315a00;
    }
    ctx->pc = 0x3159F8u;
    SET_GPR_U32(ctx, 31, 0x315A00u);
    ctx->pc = 0x3159FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159F8u;
    // 0x3159fc: 0x24a53510  addiu       $a1, $a1, 0x3510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x3159F8u, 0x315A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A00u;
label_315a00:
    // 0x315a00: 0xc0d0590  jal         func_341640
label_315a04:
    if (ctx->pc == 0x315A04u) {
        ctx->pc = 0x315A08u;
        goto label_315a08;
    }
    ctx->pc = 0x315A00u;
    SET_GPR_U32(ctx, 31, 0x315A08u);
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x315A00u, 0x315A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A08u;
label_315a08:
    // 0x315a08: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315a0c:
    // 0x315a0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315a10:
    // 0x315a10: 0xc0a0472  jal         func_2811C8
label_315a14:
    if (ctx->pc == 0x315A14u) {
        ctx->pc = 0x315A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A10u;
        // 0x315a14: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A18u;
        goto label_315a18;
    }
    ctx->pc = 0x315A10u;
    SET_GPR_U32(ctx, 31, 0x315A18u);
    ctx->pc = 0x315A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A10u;
    // 0x315a14: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315A10u, 0x315A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A18u;
label_315a18:
    // 0x315a18: 0xc0c580c  jal         func_316030
label_315a1c:
    if (ctx->pc == 0x315A1Cu) {
        ctx->pc = 0x315A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A18u;
        // 0x315a1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A20u;
        goto label_315a20;
    }
    ctx->pc = 0x315A18u;
    SET_GPR_U32(ctx, 31, 0x315A20u);
    ctx->pc = 0x315A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A18u;
    // 0x315a1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x315A18u, 0x315A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A20u;
label_315a20:
    // 0x315a20: 0x8e45bd48  lw          $a1, -0x42B8($s2)
    ctx->pc = 0x315a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315a24:
    // 0x315a24: 0xc0c8848  jal         func_322120
label_315a28:
    if (ctx->pc == 0x315A28u) {
        ctx->pc = 0x315A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A24u;
        // 0x315a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A2Cu;
        goto label_315a2c;
    }
    ctx->pc = 0x315A24u;
    SET_GPR_U32(ctx, 31, 0x315A2Cu);
    ctx->pc = 0x315A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A24u;
    // 0x315a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x315A24u, 0x315A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A2Cu;
label_315a2c:
    // 0x315a2c: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315a30:
    // 0x315a30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315a34:
    // 0x315a34: 0xc0a0472  jal         func_2811C8
label_315a38:
    if (ctx->pc == 0x315A38u) {
        ctx->pc = 0x315A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A34u;
        // 0x315a38: 0x24a53540  addiu       $a1, $a1, 0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A3Cu;
        goto label_315a3c;
    }
    ctx->pc = 0x315A34u;
    SET_GPR_U32(ctx, 31, 0x315A3Cu);
    ctx->pc = 0x315A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A34u;
    // 0x315a38: 0x24a53540  addiu       $a1, $a1, 0x3540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315A34u, 0x315A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A3Cu;
label_315a3c:
    // 0x315a3c: 0xc0c4ca0  jal         func_313280
label_315a40:
    if (ctx->pc == 0x315A40u) {
        ctx->pc = 0x315A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A3Cu;
        // 0x315a40: 0x8e84bd3c  lw          $a0, -0x42C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A44u;
        goto label_315a44;
    }
    ctx->pc = 0x315A3Cu;
    SET_GPR_U32(ctx, 31, 0x315A44u);
    ctx->pc = 0x315A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A3Cu;
    // 0x315a40: 0x8e84bd3c  lw          $a0, -0x42C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313280u, 0x315A3Cu, 0x315A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A44u;
label_315a44:
    // 0x315a44: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x315a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_315a48:
    // 0x315a48: 0x247021e8  addiu       $s0, $v1, 0x21E8
    ctx->pc = 0x315a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
label_315a4c:
    // 0x315a4c: 0xc0c6d70  jal         func_31B5C0
label_315a50:
    if (ctx->pc == 0x315A50u) {
        ctx->pc = 0x315A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A4Cu;
        // 0x315a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A54u;
        goto label_315a54;
    }
    ctx->pc = 0x315A4Cu;
    SET_GPR_U32(ctx, 31, 0x315A54u);
    ctx->pc = 0x315A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A4Cu;
    // 0x315a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C0u, 0x315A4Cu, 0x315A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A54u;
label_315a54:
    // 0x315a54: 0xc0c6d72  jal         func_31B5C8
label_315a58:
    if (ctx->pc == 0x315A58u) {
        ctx->pc = 0x315A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A54u;
        // 0x315a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A5Cu;
        goto label_315a5c;
    }
    ctx->pc = 0x315A54u;
    SET_GPR_U32(ctx, 31, 0x315A5Cu);
    ctx->pc = 0x315A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A54u;
    // 0x315a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C8u, 0x315A54u, 0x315A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A5Cu;
label_315a5c:
    // 0x315a5c: 0xc0a03e8  jal         func_280FA0
label_315a60:
    if (ctx->pc == 0x315A60u) {
        ctx->pc = 0x315A64u;
        goto label_315a64;
    }
    ctx->pc = 0x315A5Cu;
    SET_GPR_U32(ctx, 31, 0x315A64u);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x315A5Cu, 0x315A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A64u;
label_315a64:
    // 0x315a64: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315a68:
    // 0x315a68: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315a6c:
    // 0x315a6c: 0xc0a0472  jal         func_2811C8
label_315a70:
    if (ctx->pc == 0x315A70u) {
        ctx->pc = 0x315A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A6Cu;
        // 0x315a70: 0x24a53558  addiu       $a1, $a1, 0x3558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A74u;
        goto label_315a74;
    }
    ctx->pc = 0x315A6Cu;
    SET_GPR_U32(ctx, 31, 0x315A74u);
    ctx->pc = 0x315A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A6Cu;
    // 0x315a70: 0x24a53558  addiu       $a1, $a1, 0x3558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315A6Cu, 0x315A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A74u;
label_315a74:
    // 0x315a74: 0xc0b94ac  jal         func_2E52B0
label_315a78:
    if (ctx->pc == 0x315A78u) {
        ctx->pc = 0x315A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A74u;
        // 0x315a78: 0x8e24bd50  lw          $a0, -0x42B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A7Cu;
        goto label_315a7c;
    }
    ctx->pc = 0x315A74u;
    SET_GPR_U32(ctx, 31, 0x315A7Cu);
    ctx->pc = 0x315A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A74u;
    // 0x315a78: 0x8e24bd50  lw          $a0, -0x42B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x315A74u, 0x315A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A7Cu;
label_315a7c:
    // 0x315a7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_315a80:
    // 0x315a80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x315a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315a84:
    // 0x315a84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x315a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315a88:
    // 0x315a88: 0xc0a2306  jal         func_288C18
label_315a8c:
    if (ctx->pc == 0x315A8Cu) {
        ctx->pc = 0x315A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A88u;
        // 0x315a8c: 0xac62bd6c  sw          $v0, -0x4294($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A90u;
        goto label_315a90;
    }
    ctx->pc = 0x315A88u;
    SET_GPR_U32(ctx, 31, 0x315A90u);
    ctx->pc = 0x315A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A88u;
    // 0x315a8c: 0xac62bd6c  sw          $v0, -0x4294($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x315A88u, 0x315A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A90u;
label_315a90:
    // 0x315a90: 0x8e24bd50  lw          $a0, -0x42B0($s1)
    ctx->pc = 0x315a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
label_315a94:
    // 0x315a94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315a98:
    // 0x315a98: 0xac40a7cc  sw          $zero, -0x5834($v0)
    ctx->pc = 0x315a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944716), GPR_U32(ctx, 0));
label_315a9c:
    // 0x315a9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x315a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_315aa0:
    // 0x315aa0: 0xac8011b0  sw          $zero, 0x11B0($a0)
    ctx->pc = 0x315aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4528), GPR_U32(ctx, 0));
label_315aa4:
    // 0x315aa4: 0xac8011b4  sw          $zero, 0x11B4($a0)
    ctx->pc = 0x315aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4532), GPR_U32(ctx, 0));
label_315aa8:
    // 0x315aa8: 0x8e23bd50  lw          $v1, -0x42B0($s1)
    ctx->pc = 0x315aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
label_315aac:
    // 0x315aac: 0x8ca22b50  lw          $v0, 0x2B50($a1)
    ctx->pc = 0x315aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11088)));
label_315ab0:
    // 0x315ab0: 0xc0b28aa  jal         func_2CA2A8
label_315ab4:
    if (ctx->pc == 0x315AB4u) {
        ctx->pc = 0x315AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB0u;
        // 0x315ab4: 0xac6211b0  sw          $v0, 0x11B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AB8u;
        goto label_315ab8;
    }
    ctx->pc = 0x315AB0u;
    SET_GPR_U32(ctx, 31, 0x315AB8u);
    ctx->pc = 0x315AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AB0u;
    // 0x315ab4: 0xac6211b0  sw          $v0, 0x11B0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x315AB0u, 0x315AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AB8u;
label_315ab8:
    // 0x315ab8: 0xc0b29e0  jal         func_2CA780
label_315abc:
    if (ctx->pc == 0x315ABCu) {
        ctx->pc = 0x315ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB8u;
        // 0x315abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AC0u;
        goto label_315ac0;
    }
    ctx->pc = 0x315AB8u;
    SET_GPR_U32(ctx, 31, 0x315AC0u);
    ctx->pc = 0x315ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AB8u;
    // 0x315abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA780u, 0x315AB8u, 0x315AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AC0u;
label_315ac0:
    // 0x315ac0: 0xc0760ea  jal         func_1D83A8
label_315ac4:
    if (ctx->pc == 0x315AC4u) {
        ctx->pc = 0x315AC8u;
        goto label_315ac8;
    }
    ctx->pc = 0x315AC0u;
    SET_GPR_U32(ctx, 31, 0x315AC8u);
    ctx->pc = 0x1D83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83A8u, 0x315AC0u, 0x315AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AC8u;
label_315ac8:
    // 0x315ac8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315acc:
    // 0x315acc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315ad0:
    // 0x315ad0: 0xc0a0472  jal         func_2811C8
label_315ad4:
    if (ctx->pc == 0x315AD4u) {
        ctx->pc = 0x315AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AD0u;
        // 0x315ad4: 0x24a53570  addiu       $a1, $a1, 0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AD8u;
        goto label_315ad8;
    }
    ctx->pc = 0x315AD0u;
    SET_GPR_U32(ctx, 31, 0x315AD8u);
    ctx->pc = 0x315AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AD0u;
    // 0x315ad4: 0x24a53570  addiu       $a1, $a1, 0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315AD0u, 0x315AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AD8u;
label_315ad8:
    // 0x315ad8: 0xc0c8a64  jal         func_322990
label_315adc:
    if (ctx->pc == 0x315ADCu) {
        ctx->pc = 0x315AE0u;
        goto label_315ae0;
    }
    ctx->pc = 0x315AD8u;
    SET_GPR_U32(ctx, 31, 0x315AE0u);
    ctx->pc = 0x322990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322990u, 0x315AD8u, 0x315AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AE0u;
label_315ae0:
    // 0x315ae0: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315ae4:
    // 0x315ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315ae8:
    // 0x315ae8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315aec:
    // 0x315aec: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x315aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_315af0:
    // 0x315af0: 0xc0a0472  jal         func_2811C8
label_315af4:
    if (ctx->pc == 0x315AF4u) {
        ctx->pc = 0x315AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AF0u;
        // 0x315af4: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AF8u;
        goto label_315af8;
    }
    ctx->pc = 0x315AF0u;
    SET_GPR_U32(ctx, 31, 0x315AF8u);
    ctx->pc = 0x315AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AF0u;
    // 0x315af4: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315AF0u, 0x315AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AF8u;
label_315af8:
    // 0x315af8: 0xc0c3dc2  jal         func_30F708
label_315afc:
    if (ctx->pc == 0x315AFCu) {
        ctx->pc = 0x315B00u;
        goto label_315b00;
    }
    ctx->pc = 0x315AF8u;
    SET_GPR_U32(ctx, 31, 0x315B00u);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x315AF8u, 0x315B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B00u;
label_315b00:
    // 0x315b00: 0xc0c473c  jal         func_311CF0
label_315b04:
    if (ctx->pc == 0x315B04u) {
        ctx->pc = 0x315B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B00u;
        // 0x315b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B08u;
        goto label_315b08;
    }
    ctx->pc = 0x315B00u;
    SET_GPR_U32(ctx, 31, 0x315B08u);
    ctx->pc = 0x315B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B00u;
    // 0x315b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311CF0u, 0x315B00u, 0x315B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B08u;
label_315b08:
    // 0x315b08: 0xc0a2148  jal         func_288520
label_315b0c:
    if (ctx->pc == 0x315B0Cu) {
        ctx->pc = 0x315B10u;
        goto label_315b10;
    }
    ctx->pc = 0x315B08u;
    SET_GPR_U32(ctx, 31, 0x315B10u);
    ctx->pc = 0x288520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288520u, 0x315B08u, 0x315B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B10u;
label_315b10:
    // 0x315b10: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x315b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_315b14:
    // 0x315b14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x315b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_315b18:
    // 0x315b18: 0xc0a0472  jal         func_2811C8
label_315b1c:
    if (ctx->pc == 0x315B1Cu) {
        ctx->pc = 0x315B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B18u;
        // 0x315b1c: 0x24a535c0  addiu       $a1, $a1, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B20u;
        goto label_315b20;
    }
    ctx->pc = 0x315B18u;
    SET_GPR_U32(ctx, 31, 0x315B20u);
    ctx->pc = 0x315B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B18u;
    // 0x315b1c: 0x24a535c0  addiu       $a1, $a1, 0x35C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x315B18u, 0x315B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B20u;
label_315b20:
    // 0x315b20: 0xc0a04aa  jal         func_2812A8
label_315b24:
    if (ctx->pc == 0x315B24u) {
        ctx->pc = 0x315B28u;
        goto label_315b28;
    }
    ctx->pc = 0x315B20u;
    SET_GPR_U32(ctx, 31, 0x315B28u);
    ctx->pc = 0x2812A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A8u, 0x315B20u, 0x315B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B28u;
label_315b28:
    // 0x315b28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x315b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_315b2c:
    // 0x315b2c: 0x8c43a324  lw          $v1, -0x5CDC($v0)
    ctx->pc = 0x315b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943524)));
label_315b30:
    // 0x315b30: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_315b34:
    if (ctx->pc == 0x315B34u) {
        ctx->pc = 0x315B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B30u;
        // 0x315b34: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B38u;
        goto label_315b38;
    }
    ctx->pc = 0x315B30u;
    {
        const bool branch_taken_0x315b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x315b30) {
            ctx->pc = 0x315B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315B30u;
            // 0x315b34: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315B4Cu;
            goto label_315b4c;
        }
    }
    ctx->pc = 0x315B38u;
label_315b38:
    // 0x315b38: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x315b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_315b3c:
    // 0x315b3c: 0x348408f0  ori         $a0, $a0, 0x8F0
    ctx->pc = 0x315b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2288);
label_315b40:
    // 0x315b40: 0xc0ab2dc  jal         func_2ACB70
label_315b44:
    if (ctx->pc == 0x315B44u) {
        ctx->pc = 0x315B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B40u;
        // 0x315b44: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B48u;
        goto label_315b48;
    }
    ctx->pc = 0x315B40u;
    SET_GPR_U32(ctx, 31, 0x315B48u);
    ctx->pc = 0x315B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B40u;
    // 0x315b44: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB70u, 0x315B40u, 0x315B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B48u;
label_315b48:
    // 0x315b48: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x315b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_315b4c:
    // 0x315b4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x315b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_315b50:
    // 0x315b50: 0xc0abe3e  jal         func_2AF8F8
label_315b54:
    if (ctx->pc == 0x315B54u) {
        ctx->pc = 0x315B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B50u;
        // 0x315b54: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B58u;
        goto label_315b58;
    }
    ctx->pc = 0x315B50u;
    SET_GPR_U32(ctx, 31, 0x315B58u);
    ctx->pc = 0x315B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B50u;
    // 0x315b54: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x315B50u, 0x315B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B58u;
label_315b58:
    // 0x315b58: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x315b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_315b5c:
    // 0x315b5c: 0x24432470  addiu       $v1, $v0, 0x2470
    ctx->pc = 0x315b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
label_315b60:
    // 0x315b60: 0xe4542470  swc1        $f20, 0x2470($v0)
    ctx->pc = 0x315b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9328), bits); }
label_315b64:
    // 0x315b64: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x315b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_315b68:
    // 0x315b68: 0xc0abc1a  jal         func_2AF068
label_315b6c:
    if (ctx->pc == 0x315B6Cu) {
        ctx->pc = 0x315B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B68u;
        // 0x315b6c: 0xe4740004  swc1        $f20, 0x4($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B70u;
        goto label_315b70;
    }
    ctx->pc = 0x315B68u;
    SET_GPR_U32(ctx, 31, 0x315B70u);
    ctx->pc = 0x315B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B68u;
    // 0x315b6c: 0xe4740004  swc1        $f20, 0x4($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF068u, 0x315B68u, 0x315B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B70u;
label_315b70:
    // 0x315b70: 0xc0d9cb6  jal         func_3672D8
label_315b74:
    if (ctx->pc == 0x315B74u) {
        ctx->pc = 0x315B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B70u;
        // 0x315b74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B78u;
        goto label_315b78;
    }
    ctx->pc = 0x315B70u;
    SET_GPR_U32(ctx, 31, 0x315B78u);
    ctx->pc = 0x315B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B70u;
    // 0x315b74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x315B70u, 0x315B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B78u;
label_315b78:
    // 0x315b78: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x315b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_315b7c:
    // 0x315b7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x315b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315b80:
    // 0x315b80: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x315b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_315b84:
    // 0x315b84: 0xc0d9cc2  jal         func_367308
label_315b88:
    if (ctx->pc == 0x315B88u) {
        ctx->pc = 0x315B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B84u;
        // 0x315b88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B8Cu;
        goto label_315b8c;
    }
    ctx->pc = 0x315B84u;
    SET_GPR_U32(ctx, 31, 0x315B8Cu);
    ctx->pc = 0x315B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B84u;
    // 0x315b88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x315B84u, 0x315B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B8Cu;
label_315b8c:
    // 0x315b8c: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x315b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_315b90:
    // 0x315b90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x315b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_315b94:
    // 0x315b94: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x315b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_315b98:
    // 0x315b98: 0xc0d9cc2  jal         func_367308
label_315b9c:
    if (ctx->pc == 0x315B9Cu) {
        ctx->pc = 0x315B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B98u;
        // 0x315b9c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BA0u;
        goto label_315ba0;
    }
    ctx->pc = 0x315B98u;
    SET_GPR_U32(ctx, 31, 0x315BA0u);
    ctx->pc = 0x315B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B98u;
    // 0x315b9c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x315B98u, 0x315BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BA0u;
label_315ba0:
    // 0x315ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315ba4:
    // 0x315ba4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x315ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_315ba8:
    // 0x315ba8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x315ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_315bac:
    // 0x315bac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x315bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_315bb0:
    // 0x315bb0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x315bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_315bb4:
    // 0x315bb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x315bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_315bb8:
    // 0x315bb8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x315bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_315bbc:
    // 0x315bbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x315bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_315bc0:
    // 0x315bc0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x315bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_315bc4:
    // 0x315bc4: 0x3e00008  jr          $ra
label_315bc8:
    if (ctx->pc == 0x315BC8u) {
        ctx->pc = 0x315BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BC4u;
        // 0x315bc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BCCu;
        goto label_315bcc;
    }
    ctx->pc = 0x315BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BC4u;
        // 0x315bc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315BCCu;
label_315bcc:
    // 0x315bcc: 0x0  nop
    ctx->pc = 0x315bccu;
    // NOP
    ctx->pc = 0x315bd0u;
}
