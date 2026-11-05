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

// Function: sub_00281600
// Address: 0x281600 - 0x2820f8
void sub_00281600_0x281600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281600_0x281600");
#endif

    switch (ctx->pc) {
        case 0x281600u: goto label_281600;
        case 0x281604u: goto label_281604;
        case 0x281608u: goto label_281608;
        case 0x28160cu: goto label_28160c;
        case 0x281610u: goto label_281610;
        case 0x281614u: goto label_281614;
        case 0x281618u: goto label_281618;
        case 0x28161cu: goto label_28161c;
        case 0x281620u: goto label_281620;
        case 0x281624u: goto label_281624;
        case 0x281628u: goto label_281628;
        case 0x28162cu: goto label_28162c;
        case 0x281630u: goto label_281630;
        case 0x281634u: goto label_281634;
        case 0x281638u: goto label_281638;
        case 0x28163cu: goto label_28163c;
        case 0x281640u: goto label_281640;
        case 0x281644u: goto label_281644;
        case 0x281648u: goto label_281648;
        case 0x28164cu: goto label_28164c;
        case 0x281650u: goto label_281650;
        case 0x281654u: goto label_281654;
        case 0x281658u: goto label_281658;
        case 0x28165cu: goto label_28165c;
        case 0x281660u: goto label_281660;
        case 0x281664u: goto label_281664;
        case 0x281668u: goto label_281668;
        case 0x28166cu: goto label_28166c;
        case 0x281670u: goto label_281670;
        case 0x281674u: goto label_281674;
        case 0x281678u: goto label_281678;
        case 0x28167cu: goto label_28167c;
        case 0x281680u: goto label_281680;
        case 0x281684u: goto label_281684;
        case 0x281688u: goto label_281688;
        case 0x28168cu: goto label_28168c;
        case 0x281690u: goto label_281690;
        case 0x281694u: goto label_281694;
        case 0x281698u: goto label_281698;
        case 0x28169cu: goto label_28169c;
        case 0x2816a0u: goto label_2816a0;
        case 0x2816a4u: goto label_2816a4;
        case 0x2816a8u: goto label_2816a8;
        case 0x2816acu: goto label_2816ac;
        case 0x2816b0u: goto label_2816b0;
        case 0x2816b4u: goto label_2816b4;
        case 0x2816b8u: goto label_2816b8;
        case 0x2816bcu: goto label_2816bc;
        case 0x2816c0u: goto label_2816c0;
        case 0x2816c4u: goto label_2816c4;
        case 0x2816c8u: goto label_2816c8;
        case 0x2816ccu: goto label_2816cc;
        case 0x2816d0u: goto label_2816d0;
        case 0x2816d4u: goto label_2816d4;
        case 0x2816d8u: goto label_2816d8;
        case 0x2816dcu: goto label_2816dc;
        case 0x2816e0u: goto label_2816e0;
        case 0x2816e4u: goto label_2816e4;
        case 0x2816e8u: goto label_2816e8;
        case 0x2816ecu: goto label_2816ec;
        case 0x2816f0u: goto label_2816f0;
        case 0x2816f4u: goto label_2816f4;
        case 0x2816f8u: goto label_2816f8;
        case 0x2816fcu: goto label_2816fc;
        case 0x281700u: goto label_281700;
        case 0x281704u: goto label_281704;
        case 0x281708u: goto label_281708;
        case 0x28170cu: goto label_28170c;
        case 0x281710u: goto label_281710;
        case 0x281714u: goto label_281714;
        case 0x281718u: goto label_281718;
        case 0x28171cu: goto label_28171c;
        case 0x281720u: goto label_281720;
        case 0x281724u: goto label_281724;
        case 0x281728u: goto label_281728;
        case 0x28172cu: goto label_28172c;
        case 0x281730u: goto label_281730;
        case 0x281734u: goto label_281734;
        case 0x281738u: goto label_281738;
        case 0x28173cu: goto label_28173c;
        case 0x281740u: goto label_281740;
        case 0x281744u: goto label_281744;
        case 0x281748u: goto label_281748;
        case 0x28174cu: goto label_28174c;
        case 0x281750u: goto label_281750;
        case 0x281754u: goto label_281754;
        case 0x281758u: goto label_281758;
        case 0x28175cu: goto label_28175c;
        case 0x281760u: goto label_281760;
        case 0x281764u: goto label_281764;
        case 0x281768u: goto label_281768;
        case 0x28176cu: goto label_28176c;
        case 0x281770u: goto label_281770;
        case 0x281774u: goto label_281774;
        case 0x281778u: goto label_281778;
        case 0x28177cu: goto label_28177c;
        case 0x281780u: goto label_281780;
        case 0x281784u: goto label_281784;
        case 0x281788u: goto label_281788;
        case 0x28178cu: goto label_28178c;
        case 0x281790u: goto label_281790;
        case 0x281794u: goto label_281794;
        case 0x281798u: goto label_281798;
        case 0x28179cu: goto label_28179c;
        case 0x2817a0u: goto label_2817a0;
        case 0x2817a4u: goto label_2817a4;
        case 0x2817a8u: goto label_2817a8;
        case 0x2817acu: goto label_2817ac;
        case 0x2817b0u: goto label_2817b0;
        case 0x2817b4u: goto label_2817b4;
        case 0x2817b8u: goto label_2817b8;
        case 0x2817bcu: goto label_2817bc;
        case 0x2817c0u: goto label_2817c0;
        case 0x2817c4u: goto label_2817c4;
        case 0x2817c8u: goto label_2817c8;
        case 0x2817ccu: goto label_2817cc;
        case 0x2817d0u: goto label_2817d0;
        case 0x2817d4u: goto label_2817d4;
        case 0x2817d8u: goto label_2817d8;
        case 0x2817dcu: goto label_2817dc;
        case 0x2817e0u: goto label_2817e0;
        case 0x2817e4u: goto label_2817e4;
        case 0x2817e8u: goto label_2817e8;
        case 0x2817ecu: goto label_2817ec;
        case 0x2817f0u: goto label_2817f0;
        case 0x2817f4u: goto label_2817f4;
        case 0x2817f8u: goto label_2817f8;
        case 0x2817fcu: goto label_2817fc;
        case 0x281800u: goto label_281800;
        case 0x281804u: goto label_281804;
        case 0x281808u: goto label_281808;
        case 0x28180cu: goto label_28180c;
        case 0x281810u: goto label_281810;
        case 0x281814u: goto label_281814;
        case 0x281818u: goto label_281818;
        case 0x28181cu: goto label_28181c;
        case 0x281820u: goto label_281820;
        case 0x281824u: goto label_281824;
        case 0x281828u: goto label_281828;
        case 0x28182cu: goto label_28182c;
        case 0x281830u: goto label_281830;
        case 0x281834u: goto label_281834;
        case 0x281838u: goto label_281838;
        case 0x28183cu: goto label_28183c;
        case 0x281840u: goto label_281840;
        case 0x281844u: goto label_281844;
        case 0x281848u: goto label_281848;
        case 0x28184cu: goto label_28184c;
        case 0x281850u: goto label_281850;
        case 0x281854u: goto label_281854;
        case 0x281858u: goto label_281858;
        case 0x28185cu: goto label_28185c;
        case 0x281860u: goto label_281860;
        case 0x281864u: goto label_281864;
        case 0x281868u: goto label_281868;
        case 0x28186cu: goto label_28186c;
        case 0x281870u: goto label_281870;
        case 0x281874u: goto label_281874;
        case 0x281878u: goto label_281878;
        case 0x28187cu: goto label_28187c;
        case 0x281880u: goto label_281880;
        case 0x281884u: goto label_281884;
        case 0x281888u: goto label_281888;
        case 0x28188cu: goto label_28188c;
        case 0x281890u: goto label_281890;
        case 0x281894u: goto label_281894;
        case 0x281898u: goto label_281898;
        case 0x28189cu: goto label_28189c;
        case 0x2818a0u: goto label_2818a0;
        case 0x2818a4u: goto label_2818a4;
        case 0x2818a8u: goto label_2818a8;
        case 0x2818acu: goto label_2818ac;
        case 0x2818b0u: goto label_2818b0;
        case 0x2818b4u: goto label_2818b4;
        case 0x2818b8u: goto label_2818b8;
        case 0x2818bcu: goto label_2818bc;
        case 0x2818c0u: goto label_2818c0;
        case 0x2818c4u: goto label_2818c4;
        case 0x2818c8u: goto label_2818c8;
        case 0x2818ccu: goto label_2818cc;
        case 0x2818d0u: goto label_2818d0;
        case 0x2818d4u: goto label_2818d4;
        case 0x2818d8u: goto label_2818d8;
        case 0x2818dcu: goto label_2818dc;
        case 0x2818e0u: goto label_2818e0;
        case 0x2818e4u: goto label_2818e4;
        case 0x2818e8u: goto label_2818e8;
        case 0x2818ecu: goto label_2818ec;
        case 0x2818f0u: goto label_2818f0;
        case 0x2818f4u: goto label_2818f4;
        case 0x2818f8u: goto label_2818f8;
        case 0x2818fcu: goto label_2818fc;
        case 0x281900u: goto label_281900;
        case 0x281904u: goto label_281904;
        case 0x281908u: goto label_281908;
        case 0x28190cu: goto label_28190c;
        case 0x281910u: goto label_281910;
        case 0x281914u: goto label_281914;
        case 0x281918u: goto label_281918;
        case 0x28191cu: goto label_28191c;
        case 0x281920u: goto label_281920;
        case 0x281924u: goto label_281924;
        case 0x281928u: goto label_281928;
        case 0x28192cu: goto label_28192c;
        case 0x281930u: goto label_281930;
        case 0x281934u: goto label_281934;
        case 0x281938u: goto label_281938;
        case 0x28193cu: goto label_28193c;
        case 0x281940u: goto label_281940;
        case 0x281944u: goto label_281944;
        case 0x281948u: goto label_281948;
        case 0x28194cu: goto label_28194c;
        case 0x281950u: goto label_281950;
        case 0x281954u: goto label_281954;
        case 0x281958u: goto label_281958;
        case 0x28195cu: goto label_28195c;
        case 0x281960u: goto label_281960;
        case 0x281964u: goto label_281964;
        case 0x281968u: goto label_281968;
        case 0x28196cu: goto label_28196c;
        case 0x281970u: goto label_281970;
        case 0x281974u: goto label_281974;
        case 0x281978u: goto label_281978;
        case 0x28197cu: goto label_28197c;
        case 0x281980u: goto label_281980;
        case 0x281984u: goto label_281984;
        case 0x281988u: goto label_281988;
        case 0x28198cu: goto label_28198c;
        case 0x281990u: goto label_281990;
        case 0x281994u: goto label_281994;
        case 0x281998u: goto label_281998;
        case 0x28199cu: goto label_28199c;
        case 0x2819a0u: goto label_2819a0;
        case 0x2819a4u: goto label_2819a4;
        case 0x2819a8u: goto label_2819a8;
        case 0x2819acu: goto label_2819ac;
        case 0x2819b0u: goto label_2819b0;
        case 0x2819b4u: goto label_2819b4;
        case 0x2819b8u: goto label_2819b8;
        case 0x2819bcu: goto label_2819bc;
        case 0x2819c0u: goto label_2819c0;
        case 0x2819c4u: goto label_2819c4;
        case 0x2819c8u: goto label_2819c8;
        case 0x2819ccu: goto label_2819cc;
        case 0x2819d0u: goto label_2819d0;
        case 0x2819d4u: goto label_2819d4;
        case 0x2819d8u: goto label_2819d8;
        case 0x2819dcu: goto label_2819dc;
        case 0x2819e0u: goto label_2819e0;
        case 0x2819e4u: goto label_2819e4;
        case 0x2819e8u: goto label_2819e8;
        case 0x2819ecu: goto label_2819ec;
        case 0x2819f0u: goto label_2819f0;
        case 0x2819f4u: goto label_2819f4;
        case 0x2819f8u: goto label_2819f8;
        case 0x2819fcu: goto label_2819fc;
        case 0x281a00u: goto label_281a00;
        case 0x281a04u: goto label_281a04;
        case 0x281a08u: goto label_281a08;
        case 0x281a0cu: goto label_281a0c;
        case 0x281a10u: goto label_281a10;
        case 0x281a14u: goto label_281a14;
        case 0x281a18u: goto label_281a18;
        case 0x281a1cu: goto label_281a1c;
        case 0x281a20u: goto label_281a20;
        case 0x281a24u: goto label_281a24;
        case 0x281a28u: goto label_281a28;
        case 0x281a2cu: goto label_281a2c;
        case 0x281a30u: goto label_281a30;
        case 0x281a34u: goto label_281a34;
        case 0x281a38u: goto label_281a38;
        case 0x281a3cu: goto label_281a3c;
        case 0x281a40u: goto label_281a40;
        case 0x281a44u: goto label_281a44;
        case 0x281a48u: goto label_281a48;
        case 0x281a4cu: goto label_281a4c;
        case 0x281a50u: goto label_281a50;
        case 0x281a54u: goto label_281a54;
        case 0x281a58u: goto label_281a58;
        case 0x281a5cu: goto label_281a5c;
        case 0x281a60u: goto label_281a60;
        case 0x281a64u: goto label_281a64;
        case 0x281a68u: goto label_281a68;
        case 0x281a6cu: goto label_281a6c;
        case 0x281a70u: goto label_281a70;
        case 0x281a74u: goto label_281a74;
        case 0x281a78u: goto label_281a78;
        case 0x281a7cu: goto label_281a7c;
        case 0x281a80u: goto label_281a80;
        case 0x281a84u: goto label_281a84;
        case 0x281a88u: goto label_281a88;
        case 0x281a8cu: goto label_281a8c;
        case 0x281a90u: goto label_281a90;
        case 0x281a94u: goto label_281a94;
        case 0x281a98u: goto label_281a98;
        case 0x281a9cu: goto label_281a9c;
        case 0x281aa0u: goto label_281aa0;
        case 0x281aa4u: goto label_281aa4;
        case 0x281aa8u: goto label_281aa8;
        case 0x281aacu: goto label_281aac;
        case 0x281ab0u: goto label_281ab0;
        case 0x281ab4u: goto label_281ab4;
        case 0x281ab8u: goto label_281ab8;
        case 0x281abcu: goto label_281abc;
        case 0x281ac0u: goto label_281ac0;
        case 0x281ac4u: goto label_281ac4;
        case 0x281ac8u: goto label_281ac8;
        case 0x281accu: goto label_281acc;
        case 0x281ad0u: goto label_281ad0;
        case 0x281ad4u: goto label_281ad4;
        case 0x281ad8u: goto label_281ad8;
        case 0x281adcu: goto label_281adc;
        case 0x281ae0u: goto label_281ae0;
        case 0x281ae4u: goto label_281ae4;
        case 0x281ae8u: goto label_281ae8;
        case 0x281aecu: goto label_281aec;
        case 0x281af0u: goto label_281af0;
        case 0x281af4u: goto label_281af4;
        case 0x281af8u: goto label_281af8;
        case 0x281afcu: goto label_281afc;
        case 0x281b00u: goto label_281b00;
        case 0x281b04u: goto label_281b04;
        case 0x281b08u: goto label_281b08;
        case 0x281b0cu: goto label_281b0c;
        case 0x281b10u: goto label_281b10;
        case 0x281b14u: goto label_281b14;
        case 0x281b18u: goto label_281b18;
        case 0x281b1cu: goto label_281b1c;
        case 0x281b20u: goto label_281b20;
        case 0x281b24u: goto label_281b24;
        case 0x281b28u: goto label_281b28;
        case 0x281b2cu: goto label_281b2c;
        case 0x281b30u: goto label_281b30;
        case 0x281b34u: goto label_281b34;
        case 0x281b38u: goto label_281b38;
        case 0x281b3cu: goto label_281b3c;
        case 0x281b40u: goto label_281b40;
        case 0x281b44u: goto label_281b44;
        case 0x281b48u: goto label_281b48;
        case 0x281b4cu: goto label_281b4c;
        case 0x281b50u: goto label_281b50;
        case 0x281b54u: goto label_281b54;
        case 0x281b58u: goto label_281b58;
        case 0x281b5cu: goto label_281b5c;
        case 0x281b60u: goto label_281b60;
        case 0x281b64u: goto label_281b64;
        case 0x281b68u: goto label_281b68;
        case 0x281b6cu: goto label_281b6c;
        case 0x281b70u: goto label_281b70;
        case 0x281b74u: goto label_281b74;
        case 0x281b78u: goto label_281b78;
        case 0x281b7cu: goto label_281b7c;
        case 0x281b80u: goto label_281b80;
        case 0x281b84u: goto label_281b84;
        case 0x281b88u: goto label_281b88;
        case 0x281b8cu: goto label_281b8c;
        case 0x281b90u: goto label_281b90;
        case 0x281b94u: goto label_281b94;
        case 0x281b98u: goto label_281b98;
        case 0x281b9cu: goto label_281b9c;
        case 0x281ba0u: goto label_281ba0;
        case 0x281ba4u: goto label_281ba4;
        case 0x281ba8u: goto label_281ba8;
        case 0x281bacu: goto label_281bac;
        case 0x281bb0u: goto label_281bb0;
        case 0x281bb4u: goto label_281bb4;
        case 0x281bb8u: goto label_281bb8;
        case 0x281bbcu: goto label_281bbc;
        case 0x281bc0u: goto label_281bc0;
        case 0x281bc4u: goto label_281bc4;
        case 0x281bc8u: goto label_281bc8;
        case 0x281bccu: goto label_281bcc;
        case 0x281bd0u: goto label_281bd0;
        case 0x281bd4u: goto label_281bd4;
        case 0x281bd8u: goto label_281bd8;
        case 0x281bdcu: goto label_281bdc;
        case 0x281be0u: goto label_281be0;
        case 0x281be4u: goto label_281be4;
        case 0x281be8u: goto label_281be8;
        case 0x281becu: goto label_281bec;
        case 0x281bf0u: goto label_281bf0;
        case 0x281bf4u: goto label_281bf4;
        case 0x281bf8u: goto label_281bf8;
        case 0x281bfcu: goto label_281bfc;
        case 0x281c00u: goto label_281c00;
        case 0x281c04u: goto label_281c04;
        case 0x281c08u: goto label_281c08;
        case 0x281c0cu: goto label_281c0c;
        case 0x281c10u: goto label_281c10;
        case 0x281c14u: goto label_281c14;
        case 0x281c18u: goto label_281c18;
        case 0x281c1cu: goto label_281c1c;
        case 0x281c20u: goto label_281c20;
        case 0x281c24u: goto label_281c24;
        case 0x281c28u: goto label_281c28;
        case 0x281c2cu: goto label_281c2c;
        case 0x281c30u: goto label_281c30;
        case 0x281c34u: goto label_281c34;
        case 0x281c38u: goto label_281c38;
        case 0x281c3cu: goto label_281c3c;
        case 0x281c40u: goto label_281c40;
        case 0x281c44u: goto label_281c44;
        case 0x281c48u: goto label_281c48;
        case 0x281c4cu: goto label_281c4c;
        case 0x281c50u: goto label_281c50;
        case 0x281c54u: goto label_281c54;
        case 0x281c58u: goto label_281c58;
        case 0x281c5cu: goto label_281c5c;
        case 0x281c60u: goto label_281c60;
        case 0x281c64u: goto label_281c64;
        case 0x281c68u: goto label_281c68;
        case 0x281c6cu: goto label_281c6c;
        case 0x281c70u: goto label_281c70;
        case 0x281c74u: goto label_281c74;
        case 0x281c78u: goto label_281c78;
        case 0x281c7cu: goto label_281c7c;
        case 0x281c80u: goto label_281c80;
        case 0x281c84u: goto label_281c84;
        case 0x281c88u: goto label_281c88;
        case 0x281c8cu: goto label_281c8c;
        case 0x281c90u: goto label_281c90;
        case 0x281c94u: goto label_281c94;
        case 0x281c98u: goto label_281c98;
        case 0x281c9cu: goto label_281c9c;
        case 0x281ca0u: goto label_281ca0;
        case 0x281ca4u: goto label_281ca4;
        case 0x281ca8u: goto label_281ca8;
        case 0x281cacu: goto label_281cac;
        case 0x281cb0u: goto label_281cb0;
        case 0x281cb4u: goto label_281cb4;
        case 0x281cb8u: goto label_281cb8;
        case 0x281cbcu: goto label_281cbc;
        case 0x281cc0u: goto label_281cc0;
        case 0x281cc4u: goto label_281cc4;
        case 0x281cc8u: goto label_281cc8;
        case 0x281cccu: goto label_281ccc;
        case 0x281cd0u: goto label_281cd0;
        case 0x281cd4u: goto label_281cd4;
        case 0x281cd8u: goto label_281cd8;
        case 0x281cdcu: goto label_281cdc;
        case 0x281ce0u: goto label_281ce0;
        case 0x281ce4u: goto label_281ce4;
        case 0x281ce8u: goto label_281ce8;
        case 0x281cecu: goto label_281cec;
        case 0x281cf0u: goto label_281cf0;
        case 0x281cf4u: goto label_281cf4;
        case 0x281cf8u: goto label_281cf8;
        case 0x281cfcu: goto label_281cfc;
        case 0x281d00u: goto label_281d00;
        case 0x281d04u: goto label_281d04;
        case 0x281d08u: goto label_281d08;
        case 0x281d0cu: goto label_281d0c;
        case 0x281d10u: goto label_281d10;
        case 0x281d14u: goto label_281d14;
        case 0x281d18u: goto label_281d18;
        case 0x281d1cu: goto label_281d1c;
        case 0x281d20u: goto label_281d20;
        case 0x281d24u: goto label_281d24;
        case 0x281d28u: goto label_281d28;
        case 0x281d2cu: goto label_281d2c;
        case 0x281d30u: goto label_281d30;
        case 0x281d34u: goto label_281d34;
        case 0x281d38u: goto label_281d38;
        case 0x281d3cu: goto label_281d3c;
        case 0x281d40u: goto label_281d40;
        case 0x281d44u: goto label_281d44;
        case 0x281d48u: goto label_281d48;
        case 0x281d4cu: goto label_281d4c;
        case 0x281d50u: goto label_281d50;
        case 0x281d54u: goto label_281d54;
        case 0x281d58u: goto label_281d58;
        case 0x281d5cu: goto label_281d5c;
        case 0x281d60u: goto label_281d60;
        case 0x281d64u: goto label_281d64;
        case 0x281d68u: goto label_281d68;
        case 0x281d6cu: goto label_281d6c;
        case 0x281d70u: goto label_281d70;
        case 0x281d74u: goto label_281d74;
        case 0x281d78u: goto label_281d78;
        case 0x281d7cu: goto label_281d7c;
        case 0x281d80u: goto label_281d80;
        case 0x281d84u: goto label_281d84;
        case 0x281d88u: goto label_281d88;
        case 0x281d8cu: goto label_281d8c;
        case 0x281d90u: goto label_281d90;
        case 0x281d94u: goto label_281d94;
        case 0x281d98u: goto label_281d98;
        case 0x281d9cu: goto label_281d9c;
        case 0x281da0u: goto label_281da0;
        case 0x281da4u: goto label_281da4;
        case 0x281da8u: goto label_281da8;
        case 0x281dacu: goto label_281dac;
        case 0x281db0u: goto label_281db0;
        case 0x281db4u: goto label_281db4;
        case 0x281db8u: goto label_281db8;
        case 0x281dbcu: goto label_281dbc;
        case 0x281dc0u: goto label_281dc0;
        case 0x281dc4u: goto label_281dc4;
        case 0x281dc8u: goto label_281dc8;
        case 0x281dccu: goto label_281dcc;
        case 0x281dd0u: goto label_281dd0;
        case 0x281dd4u: goto label_281dd4;
        case 0x281dd8u: goto label_281dd8;
        case 0x281ddcu: goto label_281ddc;
        case 0x281de0u: goto label_281de0;
        case 0x281de4u: goto label_281de4;
        case 0x281de8u: goto label_281de8;
        case 0x281decu: goto label_281dec;
        case 0x281df0u: goto label_281df0;
        case 0x281df4u: goto label_281df4;
        case 0x281df8u: goto label_281df8;
        case 0x281dfcu: goto label_281dfc;
        case 0x281e00u: goto label_281e00;
        case 0x281e04u: goto label_281e04;
        case 0x281e08u: goto label_281e08;
        case 0x281e0cu: goto label_281e0c;
        case 0x281e10u: goto label_281e10;
        case 0x281e14u: goto label_281e14;
        case 0x281e18u: goto label_281e18;
        case 0x281e1cu: goto label_281e1c;
        case 0x281e20u: goto label_281e20;
        case 0x281e24u: goto label_281e24;
        case 0x281e28u: goto label_281e28;
        case 0x281e2cu: goto label_281e2c;
        case 0x281e30u: goto label_281e30;
        case 0x281e34u: goto label_281e34;
        case 0x281e38u: goto label_281e38;
        case 0x281e3cu: goto label_281e3c;
        case 0x281e40u: goto label_281e40;
        case 0x281e44u: goto label_281e44;
        case 0x281e48u: goto label_281e48;
        case 0x281e4cu: goto label_281e4c;
        case 0x281e50u: goto label_281e50;
        case 0x281e54u: goto label_281e54;
        case 0x281e58u: goto label_281e58;
        case 0x281e5cu: goto label_281e5c;
        case 0x281e60u: goto label_281e60;
        case 0x281e64u: goto label_281e64;
        case 0x281e68u: goto label_281e68;
        case 0x281e6cu: goto label_281e6c;
        case 0x281e70u: goto label_281e70;
        case 0x281e74u: goto label_281e74;
        case 0x281e78u: goto label_281e78;
        case 0x281e7cu: goto label_281e7c;
        case 0x281e80u: goto label_281e80;
        case 0x281e84u: goto label_281e84;
        case 0x281e88u: goto label_281e88;
        case 0x281e8cu: goto label_281e8c;
        case 0x281e90u: goto label_281e90;
        case 0x281e94u: goto label_281e94;
        case 0x281e98u: goto label_281e98;
        case 0x281e9cu: goto label_281e9c;
        case 0x281ea0u: goto label_281ea0;
        case 0x281ea4u: goto label_281ea4;
        case 0x281ea8u: goto label_281ea8;
        case 0x281eacu: goto label_281eac;
        case 0x281eb0u: goto label_281eb0;
        case 0x281eb4u: goto label_281eb4;
        case 0x281eb8u: goto label_281eb8;
        case 0x281ebcu: goto label_281ebc;
        case 0x281ec0u: goto label_281ec0;
        case 0x281ec4u: goto label_281ec4;
        case 0x281ec8u: goto label_281ec8;
        case 0x281eccu: goto label_281ecc;
        case 0x281ed0u: goto label_281ed0;
        case 0x281ed4u: goto label_281ed4;
        case 0x281ed8u: goto label_281ed8;
        case 0x281edcu: goto label_281edc;
        case 0x281ee0u: goto label_281ee0;
        case 0x281ee4u: goto label_281ee4;
        case 0x281ee8u: goto label_281ee8;
        case 0x281eecu: goto label_281eec;
        case 0x281ef0u: goto label_281ef0;
        case 0x281ef4u: goto label_281ef4;
        case 0x281ef8u: goto label_281ef8;
        case 0x281efcu: goto label_281efc;
        case 0x281f00u: goto label_281f00;
        case 0x281f04u: goto label_281f04;
        case 0x281f08u: goto label_281f08;
        case 0x281f0cu: goto label_281f0c;
        case 0x281f10u: goto label_281f10;
        case 0x281f14u: goto label_281f14;
        case 0x281f18u: goto label_281f18;
        case 0x281f1cu: goto label_281f1c;
        case 0x281f20u: goto label_281f20;
        case 0x281f24u: goto label_281f24;
        case 0x281f28u: goto label_281f28;
        case 0x281f2cu: goto label_281f2c;
        case 0x281f30u: goto label_281f30;
        case 0x281f34u: goto label_281f34;
        case 0x281f38u: goto label_281f38;
        case 0x281f3cu: goto label_281f3c;
        case 0x281f40u: goto label_281f40;
        case 0x281f44u: goto label_281f44;
        case 0x281f48u: goto label_281f48;
        case 0x281f4cu: goto label_281f4c;
        case 0x281f50u: goto label_281f50;
        case 0x281f54u: goto label_281f54;
        case 0x281f58u: goto label_281f58;
        case 0x281f5cu: goto label_281f5c;
        case 0x281f60u: goto label_281f60;
        case 0x281f64u: goto label_281f64;
        case 0x281f68u: goto label_281f68;
        case 0x281f6cu: goto label_281f6c;
        case 0x281f70u: goto label_281f70;
        case 0x281f74u: goto label_281f74;
        case 0x281f78u: goto label_281f78;
        case 0x281f7cu: goto label_281f7c;
        case 0x281f80u: goto label_281f80;
        case 0x281f84u: goto label_281f84;
        case 0x281f88u: goto label_281f88;
        case 0x281f8cu: goto label_281f8c;
        case 0x281f90u: goto label_281f90;
        case 0x281f94u: goto label_281f94;
        case 0x281f98u: goto label_281f98;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa0u: goto label_281fa0;
        case 0x281fa4u: goto label_281fa4;
        case 0x281fa8u: goto label_281fa8;
        case 0x281facu: goto label_281fac;
        case 0x281fb0u: goto label_281fb0;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fb8u: goto label_281fb8;
        case 0x281fbcu: goto label_281fbc;
        case 0x281fc0u: goto label_281fc0;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fc8u: goto label_281fc8;
        case 0x281fccu: goto label_281fcc;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        case 0x282040u: goto label_282040;
        case 0x282044u: goto label_282044;
        case 0x282048u: goto label_282048;
        case 0x28204cu: goto label_28204c;
        case 0x282050u: goto label_282050;
        case 0x282054u: goto label_282054;
        case 0x282058u: goto label_282058;
        case 0x28205cu: goto label_28205c;
        case 0x282060u: goto label_282060;
        case 0x282064u: goto label_282064;
        case 0x282068u: goto label_282068;
        case 0x28206cu: goto label_28206c;
        case 0x282070u: goto label_282070;
        case 0x282074u: goto label_282074;
        case 0x282078u: goto label_282078;
        case 0x28207cu: goto label_28207c;
        case 0x282080u: goto label_282080;
        case 0x282084u: goto label_282084;
        case 0x282088u: goto label_282088;
        case 0x28208cu: goto label_28208c;
        case 0x282090u: goto label_282090;
        case 0x282094u: goto label_282094;
        case 0x282098u: goto label_282098;
        case 0x28209cu: goto label_28209c;
        case 0x2820a0u: goto label_2820a0;
        case 0x2820a4u: goto label_2820a4;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820acu: goto label_2820ac;
        case 0x2820b0u: goto label_2820b0;
        case 0x2820b4u: goto label_2820b4;
        case 0x2820b8u: goto label_2820b8;
        case 0x2820bcu: goto label_2820bc;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820c4u: goto label_2820c4;
        case 0x2820c8u: goto label_2820c8;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820d0u: goto label_2820d0;
        case 0x2820d4u: goto label_2820d4;
        case 0x2820d8u: goto label_2820d8;
        case 0x2820dcu: goto label_2820dc;
        case 0x2820e0u: goto label_2820e0;
        case 0x2820e4u: goto label_2820e4;
        case 0x2820e8u: goto label_2820e8;
        case 0x2820ecu: goto label_2820ec;
        case 0x2820f0u: goto label_2820f0;
        case 0x2820f4u: goto label_2820f4;
        default: break;
    }

    ctx->pc = 0x281600u;

label_281600:
    // 0x281600: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x281600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_281604:
    // 0x281604: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x281604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
label_281608:
    // 0x281608: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x281608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
label_28160c:
    // 0x28160c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28160cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_281610:
    // 0x281610: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x281610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
label_281614:
    // 0x281614: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x281614u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281618:
    // 0x281618: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x281618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
label_28161c:
    // 0x28161c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x28161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
label_281620:
    // 0x281620: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x281620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
label_281624:
    // 0x281624: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x281624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
label_281628:
    // 0x281628: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x281628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
label_28162c:
    // 0x28162c: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x28162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
label_281630:
    // 0x281630: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x281630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
label_281634:
    // 0x281634: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x281634u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_281638:
    // 0x281638: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x281638u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_28163c:
    // 0x28163c: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x28163cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_281640:
    // 0x281640: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x281640u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_281644:
    // 0x281644: 0xc0a0cb2  jal         func_2832C8
label_281648:
    if (ctx->pc == 0x281648u) {
        ctx->pc = 0x281648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281644u;
        // 0x281648: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28164Cu;
        goto label_28164c;
    }
    ctx->pc = 0x281644u;
    SET_GPR_U32(ctx, 31, 0x28164Cu);
    ctx->pc = 0x281648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281644u;
    // 0x281648: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832C8u, 0x281644u, 0x28164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28164Cu;
label_28164c:
    // 0x28164c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x28164cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_281650:
    // 0x281650: 0x2471cb28  addiu       $s1, $v1, -0x34D8
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
label_281654:
    // 0x281654: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x281654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_281658:
    // 0x281658: 0x10400296  beqz        $v0, . + 4 + (0x296 << 2)
label_28165c:
    if (ctx->pc == 0x28165Cu) {
        ctx->pc = 0x28165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281658u;
        // 0x28165c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281660u;
        goto label_281660;
    }
    ctx->pc = 0x281658u;
    {
        const bool branch_taken_0x281658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281658u;
        // 0x28165c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281658) {
            ctx->pc = 0x2820B4u;
            goto label_2820b4;
        }
    }
    ctx->pc = 0x281660u;
label_281660:
    // 0x281660: 0xc0db0ea  jal         func_36C3A8
label_281664:
    if (ctx->pc == 0x281664u) {
        ctx->pc = 0x281664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281660u;
        // 0x281664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281668u;
        goto label_281668;
    }
    ctx->pc = 0x281660u;
    SET_GPR_U32(ctx, 31, 0x281668u);
    ctx->pc = 0x281664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281660u;
    // 0x281664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x281660u, 0x281668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281668u;
label_281668:
    // 0x281668: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x281668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
label_28166c:
    // 0x28166c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_281670:
    if (ctx->pc == 0x281670u) {
        ctx->pc = 0x281670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28166Cu;
        // 0x281670: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281674u;
        goto label_281674;
    }
    ctx->pc = 0x28166Cu;
    {
        const bool branch_taken_0x28166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28166Cu;
        // 0x281670: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28166c) {
            ctx->pc = 0x2816DCu;
            goto label_2816dc;
        }
    }
    ctx->pc = 0x281674u;
label_281674:
    // 0x281674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281678:
    // 0x281678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x281678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28167c:
    // 0x28167c: 0xc0a177c  jal         func_285DF0
label_281680:
    if (ctx->pc == 0x281680u) {
        ctx->pc = 0x281680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28167Cu;
        // 0x281680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281684u;
        goto label_281684;
    }
    ctx->pc = 0x28167Cu;
    SET_GPR_U32(ctx, 31, 0x281684u);
    ctx->pc = 0x281680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28167Cu;
    // 0x281680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DF0u, 0x28167Cu, 0x281684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281684u;
label_281684:
    // 0x281684: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x281684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_281688:
    // 0x281688: 0x8e26024c  lw          $a2, 0x24C($s1)
    ctx->pc = 0x281688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
label_28168c:
    // 0x28168c: 0x2610b0e0  addiu       $s0, $s0, -0x4F20
    ctx->pc = 0x28168cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947040));
label_281690:
    // 0x281690: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_281694:
    // 0x281694: 0x24a5a018  addiu       $a1, $a1, -0x5FE8
    ctx->pc = 0x281694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942744));
label_281698:
    // 0x281698: 0xc0efefa  jal         func_3BFBE8
label_28169c:
    if (ctx->pc == 0x28169Cu) {
        ctx->pc = 0x28169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281698u;
        // 0x28169c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816A0u;
        goto label_2816a0;
    }
    ctx->pc = 0x281698u;
    SET_GPR_U32(ctx, 31, 0x2816A0u);
    ctx->pc = 0x28169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281698u;
    // 0x28169c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x281698u, 0x2816A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816A0u;
label_2816a0:
    // 0x2816a0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2816a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_2816a4:
    // 0x2816a4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2816a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2816a8:
    // 0x2816a8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2816a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2816ac:
    // 0x2816ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2816acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2816b0:
    // 0x2816b0: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x2816b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
label_2816b4:
    // 0x2816b4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x2816b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_2816b8:
    // 0x2816b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2816b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2816bc:
    // 0x2816bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2816bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2816c0:
    // 0x2816c0: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x2816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
label_2816c4:
    // 0x2816c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2816c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2816c8:
    // 0x2816c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2816c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2816cc:
    // 0x2816cc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2816ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2816d0:
    // 0x2816d0: 0xc09f5b6  jal         func_27D6D8
label_2816d4:
    if (ctx->pc == 0x2816D4u) {
        ctx->pc = 0x2816D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D0u;
        // 0x2816d4: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816D8u;
        goto label_2816d8;
    }
    ctx->pc = 0x2816D0u;
    SET_GPR_U32(ctx, 31, 0x2816D8u);
    ctx->pc = 0x2816D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816D0u;
    // 0x2816d4: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x2816D0u, 0x2816D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816D8u;
label_2816d8:
    // 0x2816d8: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x2816d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
label_2816dc:
    // 0x2816dc: 0x8e220440  lw          $v0, 0x440($s1)
    ctx->pc = 0x2816dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1088)));
label_2816e0:
    // 0x2816e0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_2816e4:
    if (ctx->pc == 0x2816E4u) {
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816E8u;
        goto label_2816e8;
    }
    ctx->pc = 0x2816E0u;
    {
        const bool branch_taken_0x2816e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e0) {
            ctx->pc = 0x2817E8u;
            goto label_2817e8;
        }
    }
    ctx->pc = 0x2816E8u;
label_2816e8:
    // 0x2816e8: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_2816ec:
    // 0x2816ec: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_2816f0:
    if (ctx->pc == 0x2816F0u) {
        ctx->pc = 0x2816F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816ECu;
        // 0x2816f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816F4u;
        goto label_2816f4;
    }
    ctx->pc = 0x2816ECu;
    {
        const bool branch_taken_0x2816ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2816F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816ECu;
        // 0x2816f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816ec) {
            ctx->pc = 0x2817ECu;
            goto label_2817ec;
        }
    }
    ctx->pc = 0x2816F4u;
label_2816f4:
    // 0x2816f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2816f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2816f8:
    // 0x2816f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2816f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2816fc:
    // 0x2816fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2816fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281700:
    // 0x281700: 0xc0a177c  jal         func_285DF0
label_281704:
    if (ctx->pc == 0x281704u) {
        ctx->pc = 0x281704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281700u;
        // 0x281704: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281708u;
        goto label_281708;
    }
    ctx->pc = 0x281700u;
    SET_GPR_U32(ctx, 31, 0x281708u);
    ctx->pc = 0x281704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281700u;
    // 0x281704: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DF0u, 0x281700u, 0x281708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281708u;
label_281708:
    // 0x281708: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x281708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_28170c:
    // 0x28170c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28170cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_281710:
    // 0x281710: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x281710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_281714:
    // 0x281714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x281714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_281718:
    // 0x281718: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x281718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_28171c:
    // 0x28171c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28171cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_281720:
    // 0x281720: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x281720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_281724:
    // 0x281724: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x281724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_281728:
    // 0x281728: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x281728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_28172c:
    // 0x28172c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x28172cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_281730:
    // 0x281730: 0x2452b0e0  addiu       $s2, $v0, -0x4F20
    ctx->pc = 0x281730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_281734:
    // 0x281734: 0x2631045c  addiu       $s1, $s1, 0x45C
    ctx->pc = 0x281734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1116));
label_281738:
    // 0x281738: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x281738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28173c:
    // 0x28173c: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x28173cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_281740:
    // 0x281740: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x281740u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
label_281744:
    // 0x281744: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x281744u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
label_281748:
    // 0x281748: 0x8ea2aa88  lw          $v0, -0x5578($s5)
    ctx->pc = 0x281748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945416)));
label_28174c:
    // 0x28174c: 0x0  nop
    ctx->pc = 0x28174cu;
    // NOP
label_281750:
    // 0x281750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_281754:
    if (ctx->pc == 0x281754u) {
        ctx->pc = 0x281754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281750u;
        // 0x281754: 0x26632450  addiu       $v1, $s3, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 9296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281758u;
        goto label_281758;
    }
    ctx->pc = 0x281750u;
    {
        const bool branch_taken_0x281750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281750u;
        // 0x281754: 0x26632450  addiu       $v1, $s3, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281750) {
            ctx->pc = 0x281768u;
            goto label_281768;
        }
    }
    ctx->pc = 0x281758u;
label_281758:
    // 0x281758: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x281758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_28175c:
    // 0x28175c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x28175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_281760:
    // 0x281760: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_281764:
    if (ctx->pc == 0x281764u) {
        ctx->pc = 0x281764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281760u;
        // 0x281764: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281768u;
        goto label_281768;
    }
    ctx->pc = 0x281760u;
    {
        const bool branch_taken_0x281760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281760) {
            ctx->pc = 0x281764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281760u;
            // 0x281764: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281770u;
            goto label_281770;
        }
    }
    ctx->pc = 0x281768u;
label_281768:
    // 0x281768: 0x10000002  b           . + 4 + (0x2 << 2)
label_28176c:
    if (ctx->pc == 0x28176Cu) {
        ctx->pc = 0x28176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281768u;
        // 0x28176c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281770u;
        goto label_281770;
    }
    ctx->pc = 0x281768u;
    {
        const bool branch_taken_0x281768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281768u;
        // 0x28176c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281768) {
            ctx->pc = 0x281774u;
            goto label_281774;
        }
    }
    ctx->pc = 0x281770u;
label_281770:
    // 0x281770: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x281770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_281774:
    // 0x281774: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_281778:
    if (ctx->pc == 0x281778u) {
        ctx->pc = 0x281778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281774u;
        // 0x281778: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28177Cu;
        goto label_28177c;
    }
    ctx->pc = 0x281774u;
    {
        const bool branch_taken_0x281774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281774) {
            ctx->pc = 0x281778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281774u;
            // 0x281778: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28177Cu;
            goto label_28177c;
        }
    }
    ctx->pc = 0x28177Cu;
label_28177c:
    // 0x28177c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x28177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281780:
    // 0x281780: 0xc0f5212  jal         func_3D4848
label_281784:
    if (ctx->pc == 0x281784u) {
        ctx->pc = 0x281784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281780u;
        // 0x281784: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281788u;
        goto label_281788;
    }
    ctx->pc = 0x281780u;
    SET_GPR_U32(ctx, 31, 0x281788u);
    ctx->pc = 0x281784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281780u;
    // 0x281784: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x281780u, 0x281788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281788u;
label_281788:
    // 0x281788: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x281788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28178c:
    // 0x28178c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28178cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281790:
    // 0x281790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281794:
    // 0x281794: 0xc0efefa  jal         func_3BFBE8
label_281798:
    if (ctx->pc == 0x281798u) {
        ctx->pc = 0x281798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281794u;
        // 0x281798: 0x2685a038  addiu       $a1, $s4, -0x5FC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28179Cu;
        goto label_28179c;
    }
    ctx->pc = 0x281794u;
    SET_GPR_U32(ctx, 31, 0x28179Cu);
    ctx->pc = 0x281798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281794u;
    // 0x281798: 0x2685a038  addiu       $a1, $s4, -0x5FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x281794u, 0x28179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28179Cu;
label_28179c:
    // 0x28179c: 0x44906800  mtc1        $s0, $f13
    ctx->pc = 0x28179cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2817a0:
    // 0x2817a0: 0x0  nop
    ctx->pc = 0x2817a0u;
    // NOP
label_2817a4:
    // 0x2817a4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2817a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2817a8:
    // 0x2817a8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2817a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_2817ac:
    // 0x2817ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2817acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2817b0:
    // 0x2817b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2817b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2817b4:
    // 0x2817b4: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2817b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2817b8:
    // 0x2817b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2817b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2817bc:
    // 0x2817bc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2817bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2817c0:
    // 0x2817c0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2817c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2817c4:
    // 0x2817c4: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x2817c4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
label_2817c8:
    // 0x2817c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2817c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2817cc:
    // 0x2817cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2817ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2817d0:
    // 0x2817d0: 0xc09f5b6  jal         func_27D6D8
label_2817d4:
    if (ctx->pc == 0x2817D4u) {
        ctx->pc = 0x2817D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817D0u;
        // 0x2817d4: 0x46156b40  add.s       $f13, $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817D8u;
        goto label_2817d8;
    }
    ctx->pc = 0x2817D0u;
    SET_GPR_U32(ctx, 31, 0x2817D8u);
    ctx->pc = 0x2817D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817D0u;
    // 0x2817d4: 0x46156b40  add.s       $f13, $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x2817D0u, 0x2817D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817D8u;
label_2817d8:
    // 0x2817d8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2817d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_2817dc:
    // 0x2817dc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2817e0:
    if (ctx->pc == 0x2817E0u) {
        ctx->pc = 0x2817E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817DCu;
        // 0x2817e0: 0x8ea2aa88  lw          $v0, -0x5578($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817E4u;
        goto label_2817e4;
    }
    ctx->pc = 0x2817DCu;
    {
        const bool branch_taken_0x2817dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2817E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817DCu;
        // 0x2817e0: 0x8ea2aa88  lw          $v0, -0x5578($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817dc) {
            ctx->pc = 0x281750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281750;
        }
    }
    ctx->pc = 0x2817E4u;
label_2817e4:
    // 0x2817e4: 0x26d0cb28  addiu       $s0, $s6, -0x34D8
    ctx->pc = 0x2817e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
label_2817e8:
    // 0x2817e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2817ec:
    // 0x2817ec: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_2817f0:
    // 0x2817f0: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_2817f4:
    if (ctx->pc == 0x2817F4u) {
        ctx->pc = 0x2817F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817F0u;
        // 0x2817f4: 0x8e030208  lw          $v1, 0x208($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817F8u;
        goto label_2817f8;
    }
    ctx->pc = 0x2817F0u;
    {
        const bool branch_taken_0x2817f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2817f0) {
            ctx->pc = 0x2817F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2817F0u;
            // 0x2817f4: 0x8e030208  lw          $v1, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281838u;
            goto label_281838;
        }
    }
    ctx->pc = 0x2817F8u;
label_2817f8:
    // 0x2817f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2817f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2817fc:
    // 0x2817fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2817fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281800:
    // 0x281800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_281804:
    // 0x281804: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x281804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_281808:
    // 0x281808: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x281808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28180c:
    // 0x28180c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28180cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281810:
    // 0x281810: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281814:
    // 0x281814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281818:
    // 0x281818: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x281818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_28181c:
    // 0x28181c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x28181cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_281820:
    // 0x281820: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x281820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_281824:
    // 0x281824: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281828:
    // 0x281828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28182c:
    // 0x28182c: 0xc0da874  jal         func_36A1D0
label_281830:
    if (ctx->pc == 0x281830u) {
        ctx->pc = 0x281830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28182Cu;
        // 0x281830: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281834u;
        goto label_281834;
    }
    ctx->pc = 0x28182Cu;
    SET_GPR_U32(ctx, 31, 0x281834u);
    ctx->pc = 0x281830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28182Cu;
    // 0x281830: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28182Cu, 0x281834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281834u;
label_281834:
    // 0x281834: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_281838:
    // 0x281838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x281838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28183c:
    // 0x28183c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_281840:
    if (ctx->pc == 0x281840u) {
        ctx->pc = 0x281840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28183Cu;
        // 0x281840: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281844u;
        goto label_281844;
    }
    ctx->pc = 0x28183Cu;
    {
        const bool branch_taken_0x28183c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x281840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28183Cu;
        // 0x281840: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28183c) {
            ctx->pc = 0x28187Cu;
            goto label_28187c;
        }
    }
    ctx->pc = 0x281844u;
label_281844:
    // 0x281844: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_281848:
    // 0x281848: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28184c:
    // 0x28184c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28184cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_281850:
    // 0x281850: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_281854:
    // 0x281854: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x281854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_281858:
    // 0x281858: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x281858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_28185c:
    // 0x28185c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28185cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281860:
    // 0x281860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281864:
    // 0x281864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281868:
    // 0x281868: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x281868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_28186c:
    // 0x28186c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28186cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281870:
    // 0x281870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281874:
    // 0x281874: 0xc0da874  jal         func_36A1D0
label_281878:
    if (ctx->pc == 0x281878u) {
        ctx->pc = 0x281878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281874u;
        // 0x281878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28187Cu;
        goto label_28187c;
    }
    ctx->pc = 0x281874u;
    SET_GPR_U32(ctx, 31, 0x28187Cu);
    ctx->pc = 0x281878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281874u;
    // 0x281878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281874u, 0x28187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28187Cu;
label_28187c:
    // 0x28187c: 0xc0a0344  jal         func_280D10
label_281880:
    if (ctx->pc == 0x281880u) {
        ctx->pc = 0x281884u;
        goto label_281884;
    }
    ctx->pc = 0x28187Cu;
    SET_GPR_U32(ctx, 31, 0x281884u);
    ctx->pc = 0x280D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D10u, 0x28187Cu, 0x281884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281884u;
label_281884:
    // 0x281884: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_281888:
    if (ctx->pc == 0x281888u) {
        ctx->pc = 0x281888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281884u;
        // 0x281888: 0xae00025c  sw          $zero, 0x25C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28188Cu;
        goto label_28188c;
    }
    ctx->pc = 0x281884u;
    {
        const bool branch_taken_0x281884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281884) {
            ctx->pc = 0x281888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281884u;
            // 0x281888: 0xae00025c  sw          $zero, 0x25C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28188Cu;
            goto label_28188c;
        }
    }
    ctx->pc = 0x28188Cu;
label_28188c:
    // 0x28188c: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x28188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_281890:
    // 0x281890: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_281894:
    if (ctx->pc == 0x281894u) {
        ctx->pc = 0x281894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281890u;
        // 0x281894: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281898u;
        goto label_281898;
    }
    ctx->pc = 0x281890u;
    {
        const bool branch_taken_0x281890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281890u;
        // 0x281894: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281890) {
            ctx->pc = 0x28197Cu;
            goto label_28197c;
        }
    }
    ctx->pc = 0x281898u;
label_281898:
    // 0x281898: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x281898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_28189c:
    // 0x28189c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28189cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2818a0:
    // 0x2818a0: 0xc441ac6c  lwc1        $f1, -0x5394($v0)
    ctx->pc = 0x2818a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2818a4:
    // 0x2818a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2818a8:
    // 0x2818a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2818a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2818ac:
    // 0x2818ac: 0x46020b82  mul.s       $f14, $f1, $f2
    ctx->pc = 0x2818acu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2818b0:
    // 0x2818b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2818b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2818b4:
    // 0x2818b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2818b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2818b8:
    // 0x2818b8: 0x8e02046c  lw          $v0, 0x46C($s0)
    ctx->pc = 0x2818b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
label_2818bc:
    // 0x2818bc: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x2818bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
label_2818c0:
    // 0x2818c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2818c4:
    if (ctx->pc == 0x2818C4u) {
        ctx->pc = 0x2818C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818C0u;
        // 0x2818c4: 0x46030542  mul.s       $f21, $f0, $f3 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2818C8u;
        goto label_2818c8;
    }
    ctx->pc = 0x2818C0u;
    {
        const bool branch_taken_0x2818c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2818C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818C0u;
        // 0x2818c4: 0x46030542  mul.s       $f21, $f0, $f3 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818c0) {
            ctx->pc = 0x2818D4u;
            goto label_2818d4;
        }
    }
    ctx->pc = 0x2818C8u;
label_2818c8:
    // 0x2818c8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2818cc:
    // 0x2818cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2818d0:
    if (ctx->pc == 0x2818D0u) {
        ctx->pc = 0x2818D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818CCu;
        // 0x2818d0: 0x8c48f3a8  lw          $t0, -0xC58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2818D4u;
        goto label_2818d4;
    }
    ctx->pc = 0x2818CCu;
    {
        const bool branch_taken_0x2818cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2818D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818CCu;
        // 0x2818d0: 0x8c48f3a8  lw          $t0, -0xC58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818cc) {
            ctx->pc = 0x2818DCu;
            goto label_2818dc;
        }
    }
    ctx->pc = 0x2818D4u;
label_2818d4:
    // 0x2818d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2818d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2818d8:
    // 0x2818d8: 0x8c48f3a4  lw          $t0, -0xC5C($v0)
    ctx->pc = 0x2818d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964132)));
label_2818dc:
    // 0x2818dc: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x2818dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_2818e0:
    // 0x2818e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2818e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2818e4:
    // 0x2818e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2818e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2818e8:
    // 0x2818e8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2818e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2818ec:
    // 0x2818ec: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2818ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2818f0:
    // 0x2818f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2818f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2818f4:
    // 0x2818f4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2818f8:
    // 0x2818f8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2818f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2818fc:
    // 0x2818fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2818fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281900:
    // 0x281900: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x281900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_281904:
    // 0x281904: 0xc0da874  jal         func_36A1D0
label_281908:
    if (ctx->pc == 0x281908u) {
        ctx->pc = 0x281908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281904u;
        // 0x281908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28190Cu;
        goto label_28190c;
    }
    ctx->pc = 0x281904u;
    SET_GPR_U32(ctx, 31, 0x28190Cu);
    ctx->pc = 0x281908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281904u;
    // 0x281908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281904u, 0x28190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28190Cu;
label_28190c:
    // 0x28190c: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x28190cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281910:
    // 0x281910: 0x0  nop
    ctx->pc = 0x281910u;
    // NOP
label_281914:
    // 0x281914: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_281918:
    if (ctx->pc == 0x281918u) {
        ctx->pc = 0x28191Cu;
        goto label_28191c;
    }
    ctx->pc = 0x281914u;
    {
        const bool branch_taken_0x281914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281914) {
            ctx->pc = 0x28197Cu;
            goto label_28197c;
        }
    }
    ctx->pc = 0x28191Cu;
label_28191c:
    // 0x28191c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281920:
    // 0x281920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x281920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_281924:
    // 0x281924: 0xc0da81e  jal         func_36A078
label_281928:
    if (ctx->pc == 0x281928u) {
        ctx->pc = 0x281928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281924u;
        // 0x281928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28192Cu;
        goto label_28192c;
    }
    ctx->pc = 0x281924u;
    SET_GPR_U32(ctx, 31, 0x28192Cu);
    ctx->pc = 0x281928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281924u;
    // 0x281928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x281924u, 0x28192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28192Cu;
label_28192c:
    // 0x28192c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x28192cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_281930:
    // 0x281930: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x281930u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_281934:
    // 0x281934: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x281934u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_281938:
    // 0x281938: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x281938u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_28193c:
    // 0x28193c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281940:
    // 0x281940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281944:
    // 0x281944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281948:
    // 0x281948: 0xc0da830  jal         func_36A0C0
label_28194c:
    if (ctx->pc == 0x28194Cu) {
        ctx->pc = 0x28194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281948u;
        // 0x28194c: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281950u;
        goto label_281950;
    }
    ctx->pc = 0x281948u;
    SET_GPR_U32(ctx, 31, 0x281950u);
    ctx->pc = 0x28194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281948u;
    // 0x28194c: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x281948u, 0x281950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281950u;
label_281950:
    // 0x281950: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x281950u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_281954:
    // 0x281954: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x281954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_281958:
    // 0x281958: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x281958u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_28195c:
    // 0x28195c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x28195cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_281960:
    // 0x281960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281964:
    // 0x281964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281968:
    // 0x281968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28196c:
    // 0x28196c: 0xc0da830  jal         func_36A0C0
label_281970:
    if (ctx->pc == 0x281970u) {
        ctx->pc = 0x281970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28196Cu;
        // 0x281970: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281974u;
        goto label_281974;
    }
    ctx->pc = 0x28196Cu;
    SET_GPR_U32(ctx, 31, 0x281974u);
    ctx->pc = 0x281970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28196Cu;
    // 0x281970: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x28196Cu, 0x281974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281974u;
label_281974:
    // 0x281974: 0xc0da828  jal         func_36A0A0
label_281978:
    if (ctx->pc == 0x281978u) {
        ctx->pc = 0x28197Cu;
        goto label_28197c;
    }
    ctx->pc = 0x281974u;
    SET_GPR_U32(ctx, 31, 0x28197Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x281974u, 0x28197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28197Cu;
label_28197c:
    // 0x28197c: 0xc0a4758  jal         func_291D60
label_281980:
    if (ctx->pc == 0x281980u) {
        ctx->pc = 0x281984u;
        goto label_281984;
    }
    ctx->pc = 0x28197Cu;
    SET_GPR_U32(ctx, 31, 0x281984u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x28197Cu, 0x281984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281984u;
label_281984:
    // 0x281984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x281984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281988:
    // 0x281988: 0xc0a50d8  jal         func_294360
label_28198c:
    if (ctx->pc == 0x28198Cu) {
        ctx->pc = 0x28198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281988u;
        // 0x28198c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281990u;
        goto label_281990;
    }
    ctx->pc = 0x281988u;
    SET_GPR_U32(ctx, 31, 0x281990u);
    ctx->pc = 0x28198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281988u;
    // 0x28198c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294360u, 0x281988u, 0x281990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281990u;
label_281990:
    // 0x281990: 0xc0a2304  jal         func_288C10
label_281994:
    if (ctx->pc == 0x281994u) {
        ctx->pc = 0x281998u;
        goto label_281998;
    }
    ctx->pc = 0x281990u;
    SET_GPR_U32(ctx, 31, 0x281998u);
    ctx->pc = 0x288C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C10u, 0x281990u, 0x281998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281998u;
label_281998:
    // 0x281998: 0xc0a4758  jal         func_291D60
label_28199c:
    if (ctx->pc == 0x28199Cu) {
        ctx->pc = 0x2819A0u;
        goto label_2819a0;
    }
    ctx->pc = 0x281998u;
    SET_GPR_U32(ctx, 31, 0x2819A0u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x281998u, 0x2819A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819A0u;
label_2819a0:
    // 0x2819a0: 0x90430061  lbu         $v1, 0x61($v0)
    ctx->pc = 0x2819a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 97)));
label_2819a4:
    // 0x2819a4: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
label_2819a8:
    if (ctx->pc == 0x2819A8u) {
        ctx->pc = 0x2819A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819A4u;
        // 0x2819a8: 0x26d1cb28  addiu       $s1, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819ACu;
        goto label_2819ac;
    }
    ctx->pc = 0x2819A4u;
    {
        const bool branch_taken_0x2819a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819A4u;
        // 0x2819a8: 0x26d1cb28  addiu       $s1, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819a4) {
            ctx->pc = 0x281B44u;
            goto label_281b44;
        }
    }
    ctx->pc = 0x2819ACu;
label_2819ac:
    // 0x2819ac: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2819acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2819b0:
    // 0x2819b0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_2819b4:
    if (ctx->pc == 0x2819B4u) {
        ctx->pc = 0x2819B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819B0u;
        // 0x2819b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819B8u;
        goto label_2819b8;
    }
    ctx->pc = 0x2819B0u;
    {
        const bool branch_taken_0x2819b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819B0u;
        // 0x2819b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819b0) {
            ctx->pc = 0x281B44u;
            goto label_281b44;
        }
    }
    ctx->pc = 0x2819B8u;
label_2819b8:
    // 0x2819b8: 0x8c43a308  lw          $v1, -0x5CF8($v0)
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943496)));
label_2819bc:
    // 0x2819bc: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_2819c0:
    if (ctx->pc == 0x2819C0u) {
        ctx->pc = 0x2819C4u;
        goto label_2819c4;
    }
    ctx->pc = 0x2819BCu;
    {
        const bool branch_taken_0x2819bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2819bc) {
            ctx->pc = 0x281B44u;
            goto label_281b44;
        }
    }
    ctx->pc = 0x2819C4u;
label_2819c4:
    // 0x2819c4: 0xc0db198  jal         func_36C660
label_2819c8:
    if (ctx->pc == 0x2819C8u) {
        ctx->pc = 0x2819CCu;
        goto label_2819cc;
    }
    ctx->pc = 0x2819C4u;
    SET_GPR_U32(ctx, 31, 0x2819CCu);
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2819C4u, 0x2819CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819CCu;
label_2819cc:
    // 0x2819cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2819ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2819d0:
    // 0x2819d0: 0xc0db170  jal         func_36C5C0
label_2819d4:
    if (ctx->pc == 0x2819D4u) {
        ctx->pc = 0x2819D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819D0u;
        // 0x2819d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819D8u;
        goto label_2819d8;
    }
    ctx->pc = 0x2819D0u;
    SET_GPR_U32(ctx, 31, 0x2819D8u);
    ctx->pc = 0x2819D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819D0u;
    // 0x2819d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2819D0u, 0x2819D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819D8u;
label_2819d8:
    // 0x2819d8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2819d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2819dc:
    // 0x2819dc: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_2819e0:
    if (ctx->pc == 0x2819E0u) {
        ctx->pc = 0x2819E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819DCu;
        // 0x2819e0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2819E4u;
        goto label_2819e4;
    }
    ctx->pc = 0x2819DCu;
    {
        const bool branch_taken_0x2819dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2819E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819DCu;
        // 0x2819e0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819dc) {
            ctx->pc = 0x281AE8u;
            goto label_281ae8;
        }
    }
    ctx->pc = 0x2819E4u;
label_2819e4:
    // 0x2819e4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x2819e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_2819e8:
    // 0x2819e8: 0x3c013c44  lui         $at, 0x3C44
    ctx->pc = 0x2819e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15428 << 16));
label_2819ec:
    // 0x2819ec: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x2819ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_2819f0:
    // 0x2819f0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2819f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2819f4:
    // 0x2819f4: 0x2610ac50  addiu       $s0, $s0, -0x53B0
    ctx->pc = 0x2819f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945872));
label_2819f8:
    // 0x2819f8: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2819f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_2819fc:
    // 0x2819fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2819fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_281a00:
    // 0x281a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281a04:
    // 0x281a04: 0xc614001c  lwc1        $f20, 0x1C($s0)
    ctx->pc = 0x281a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_281a08:
    // 0x281a08: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x281a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a0c:
    // 0x281a0c: 0xc6350030  lwc1        $f21, 0x30($s1)
    ctx->pc = 0x281a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_281a10:
    // 0x281a10: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x281a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a14:
    // 0x281a14: 0x4616a382  mul.s       $f14, $f20, $f22
    ctx->pc = 0x281a14u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_281a18:
    // 0x281a18: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x281a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281a1c:
    // 0x281a1c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x281a1cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_281a20:
    // 0x281a20: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x281a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_281a24:
    // 0x281a24: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a28:
    // 0x281a28: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281a2c:
    // 0x281a2c: 0x460e6381  sub.s       $f14, $f12, $f14
    ctx->pc = 0x281a2cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
label_281a30:
    // 0x281a30: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x281a30u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
label_281a34:
    // 0x281a34: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x281a34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_281a38:
    // 0x281a38: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281a3c:
    // 0x281a3c: 0x46147381  sub.s       $f14, $f14, $f20
    ctx->pc = 0x281a3cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[20]);
label_281a40:
    // 0x281a40: 0xc0da8ea  jal         func_36A3A8
label_281a44:
    if (ctx->pc == 0x281A44u) {
        ctx->pc = 0x281A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A40u;
        // 0x281a44: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A48u;
        goto label_281a48;
    }
    ctx->pc = 0x281A40u;
    SET_GPR_U32(ctx, 31, 0x281A48u);
    ctx->pc = 0x281A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A40u;
    // 0x281a44: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281A40u, 0x281A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A48u;
label_281a48:
    // 0x281a48: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x281a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281a4c:
    // 0x281a4c: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x281a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a50:
    // 0x281a50: 0xc62e0034  lwc1        $f14, 0x34($s1)
    ctx->pc = 0x281a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_281a54:
    // 0x281a54: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x281a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a58:
    // 0x281a58: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x281a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_281a5c:
    // 0x281a5c: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x281a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_281a60:
    // 0x281a60: 0x46147300  add.s       $f12, $f14, $f20
    ctx->pc = 0x281a60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
label_281a64:
    // 0x281a64: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x281a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a68:
    // 0x281a68: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x281a68u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
label_281a6c:
    // 0x281a6c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281a70:
    // 0x281a70: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x281a70u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_281a74:
    // 0x281a74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281a78:
    // 0x281a78: 0xc0da8ea  jal         func_36A3A8
label_281a7c:
    if (ctx->pc == 0x281A7Cu) {
        ctx->pc = 0x281A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A78u;
        // 0x281a7c: 0x46147380  add.s       $f14, $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281A80u;
        goto label_281a80;
    }
    ctx->pc = 0x281A78u;
    SET_GPR_U32(ctx, 31, 0x281A80u);
    ctx->pc = 0x281A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A78u;
    // 0x281a7c: 0x46147380  add.s       $f14, $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281A78u, 0x281A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A80u;
label_281a80:
    // 0x281a80: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x281a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_281a84:
    // 0x281a84: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x281a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a88:
    // 0x281a88: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x281a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281a8c:
    // 0x281a8c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a90:
    // 0x281a90: 0x46166bc1  sub.s       $f15, $f13, $f22
    ctx->pc = 0x281a90u;
    ctx->f[15] = FPU_SUB_S(ctx->f[13], ctx->f[22]);
label_281a94:
    // 0x281a94: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281a98:
    // 0x281a98: 0x46156b41  sub.s       $f13, $f13, $f21
    ctx->pc = 0x281a98u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
label_281a9c:
    // 0x281a9c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x281a9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_281aa0:
    // 0x281aa0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281aa4:
    // 0x281aa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281aa8:
    // 0x281aa8: 0xc0da8ea  jal         func_36A3A8
label_281aac:
    if (ctx->pc == 0x281AACu) {
        ctx->pc = 0x281AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AA8u;
        // 0x281aac: 0x46157bc1  sub.s       $f15, $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AB0u;
        goto label_281ab0;
    }
    ctx->pc = 0x281AA8u;
    SET_GPR_U32(ctx, 31, 0x281AB0u);
    ctx->pc = 0x281AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AA8u;
    // 0x281aac: 0x46157bc1  sub.s       $f15, $f15, $f21 (Delay Slot)
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281AA8u, 0x281AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AB0u;
label_281ab0:
    // 0x281ab0: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x281ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_281ab4:
    // 0x281ab4: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x281ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281ab8:
    // 0x281ab8: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x281ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281abc:
    // 0x281abc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x281abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281ac0:
    // 0x281ac0: 0x46166d80  add.s       $f22, $f13, $f22
    ctx->pc = 0x281ac0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
label_281ac4:
    // 0x281ac4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x281ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_281ac8:
    // 0x281ac8: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x281ac8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
label_281acc:
    // 0x281acc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x281accu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_281ad0:
    // 0x281ad0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281ad4:
    // 0x281ad4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281ad8:
    // 0x281ad8: 0xc0da8ea  jal         func_36A3A8
label_281adc:
    if (ctx->pc == 0x281ADCu) {
        ctx->pc = 0x281ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AD8u;
        // 0x281adc: 0x4615b3c0  add.s       $f15, $f22, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281AE0u;
        goto label_281ae0;
    }
    ctx->pc = 0x281AD8u;
    SET_GPR_U32(ctx, 31, 0x281AE0u);
    ctx->pc = 0x281ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AD8u;
    // 0x281adc: 0x4615b3c0  add.s       $f15, $f22, $f21 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281AD8u, 0x281AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AE0u;
label_281ae0:
    // 0x281ae0: 0x10000016  b           . + 4 + (0x16 << 2)
label_281ae4:
    if (ctx->pc == 0x281AE4u) {
        ctx->pc = 0x281AE8u;
        goto label_281ae8;
    }
    ctx->pc = 0x281AE0u;
    {
        const bool branch_taken_0x281ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ae0) {
            ctx->pc = 0x281B3Cu;
            goto label_281b3c;
        }
    }
    ctx->pc = 0x281AE8u;
label_281ae8:
    // 0x281ae8: 0x3c013c13  lui         $at, 0x3C13
    ctx->pc = 0x281ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15379 << 16));
label_281aec:
    // 0x281aec: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x281aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_281af0:
    // 0x281af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281af4:
    // 0x281af4: 0xc44eac6c  lwc1        $f14, -0x5394($v0)
    ctx->pc = 0x281af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_281af8:
    // 0x281af8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x281af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_281afc:
    // 0x281afc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_281b00:
    // 0x281b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x281b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_281b04:
    // 0x281b04: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x281b04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_281b08:
    // 0x281b08: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x281b08u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_281b0c:
    // 0x281b0c: 0x8c68f3f4  lw          $t0, -0xC0C($v1)
    ctx->pc = 0x281b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964212)));
label_281b10:
    // 0x281b10: 0x3c013efd  lui         $at, 0x3EFD
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16125 << 16));
label_281b14:
    // 0x281b14: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x281b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
label_281b18:
    // 0x281b18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x281b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_281b1c:
    // 0x281b1c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_281b20:
    // 0x281b20: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x281b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_281b24:
    // 0x281b24: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_281b28:
    // 0x281b28: 0x46017302  mul.s       $f12, $f14, $f1
    ctx->pc = 0x281b28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
label_281b2c:
    // 0x281b2c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281b30:
    // 0x281b30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281b30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281b34:
    // 0x281b34: 0xc0da874  jal         func_36A1D0
label_281b38:
    if (ctx->pc == 0x281B38u) {
        ctx->pc = 0x281B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B34u;
        // 0x281b38: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B3Cu;
        goto label_281b3c;
    }
    ctx->pc = 0x281B34u;
    SET_GPR_U32(ctx, 31, 0x281B3Cu);
    ctx->pc = 0x281B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B34u;
    // 0x281b38: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281B34u, 0x281B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B3Cu;
label_281b3c:
    // 0x281b3c: 0xc0db1ae  jal         func_36C6B8
label_281b40:
    if (ctx->pc == 0x281B40u) {
        ctx->pc = 0x281B44u;
        goto label_281b44;
    }
    ctx->pc = 0x281B3Cu;
    SET_GPR_U32(ctx, 31, 0x281B44u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x281B3Cu, 0x281B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B44u;
label_281b44:
    // 0x281b44: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_281b48:
    if (ctx->pc == 0x281B48u) {
        ctx->pc = 0x281B4Cu;
        goto label_281b4c;
    }
    ctx->pc = 0x281B44u;
    {
        const bool branch_taken_0x281b44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b44) {
            ctx->pc = 0x281B54u;
            goto label_281b54;
        }
    }
    ctx->pc = 0x281B4Cu;
label_281b4c:
    // 0x281b4c: 0xc0a2c30  jal         func_28B0C0
label_281b50:
    if (ctx->pc == 0x281B50u) {
        ctx->pc = 0x281B54u;
        goto label_281b54;
    }
    ctx->pc = 0x281B4Cu;
    SET_GPR_U32(ctx, 31, 0x281B54u);
    ctx->pc = 0x28B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B0C0u, 0x281B4Cu, 0x281B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B54u;
label_281b54:
    // 0x281b54: 0xc09ffcc  jal         func_27FF30
label_281b58:
    if (ctx->pc == 0x281B58u) {
        ctx->pc = 0x281B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B54u;
        // 0x281b58: 0x26d1cb28  addiu       $s1, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B5Cu;
        goto label_281b5c;
    }
    ctx->pc = 0x281B54u;
    SET_GPR_U32(ctx, 31, 0x281B5Cu);
    ctx->pc = 0x281B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B54u;
    // 0x281b58: 0x26d1cb28  addiu       $s1, $s6, -0x34D8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF30u, 0x281B54u, 0x281B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B5Cu;
label_281b5c:
    // 0x281b5c: 0xc0a008e  jal         func_280238
label_281b60:
    if (ctx->pc == 0x281B60u) {
        ctx->pc = 0x281B64u;
        goto label_281b64;
    }
    ctx->pc = 0x281B5Cu;
    SET_GPR_U32(ctx, 31, 0x281B64u);
    ctx->pc = 0x280238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280238u, 0x281B5Cu, 0x281B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B64u;
label_281b64:
    // 0x281b64: 0xc0a71e0  jal         func_29C780
label_281b68:
    if (ctx->pc == 0x281B68u) {
        ctx->pc = 0x281B6Cu;
        goto label_281b6c;
    }
    ctx->pc = 0x281B64u;
    SET_GPR_U32(ctx, 31, 0x281B6Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x281B64u, 0x281B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B6Cu;
label_281b6c:
    // 0x281b6c: 0xc0a6fd6  jal         func_29BF58
label_281b70:
    if (ctx->pc == 0x281B70u) {
        ctx->pc = 0x281B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B6Cu;
        // 0x281b70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B74u;
        goto label_281b74;
    }
    ctx->pc = 0x281B6Cu;
    SET_GPR_U32(ctx, 31, 0x281B74u);
    ctx->pc = 0x281B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B6Cu;
    // 0x281b70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BF58u, 0x281B6Cu, 0x281B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B74u;
label_281b74:
    // 0x281b74: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x281b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_281b78:
    // 0x281b78: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_281b7c:
    if (ctx->pc == 0x281B7Cu) {
        ctx->pc = 0x281B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B78u;
        // 0x281b7c: 0x8e220298  lw          $v0, 0x298($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281B80u;
        goto label_281b80;
    }
    ctx->pc = 0x281B78u;
    {
        const bool branch_taken_0x281b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b78) {
            ctx->pc = 0x281B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B78u;
            // 0x281b7c: 0x8e220298  lw          $v0, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281BDCu;
            goto label_281bdc;
        }
    }
    ctx->pc = 0x281B80u;
label_281b80:
    // 0x281b80: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x281b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_281b84:
    // 0x281b84: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x281b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_281b88:
    // 0x281b88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281b8c:
    // 0x281b8c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x281b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_281b90:
    // 0x281b90: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x281b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_281b94:
    // 0x281b94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x281b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_281b98:
    // 0x281b98: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x281b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_281b9c:
    // 0x281b9c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281ba0:
    // 0x281ba0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x281ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_281ba4:
    // 0x281ba4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x281ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_281ba8:
    // 0x281ba8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x281ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_281bac:
    // 0x281bac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x281bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_281bb0:
    // 0x281bb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x281bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_281bb4:
    // 0x281bb4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x281bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_281bb8:
    // 0x281bb8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x281bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_281bbc:
    // 0x281bbc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x281bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_281bc0:
    // 0x281bc0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x281bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_281bc4:
    // 0x281bc4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x281bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_281bc8:
    // 0x281bc8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x281bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_281bcc:
    // 0x281bcc: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x281bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_281bd0:
    // 0x281bd0: 0xc0a0ac0  jal         func_282B00
label_281bd4:
    if (ctx->pc == 0x281BD4u) {
        ctx->pc = 0x281BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BD0u;
        // 0x281bd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BD8u;
        goto label_281bd8;
    }
    ctx->pc = 0x281BD0u;
    SET_GPR_U32(ctx, 31, 0x281BD8u);
    ctx->pc = 0x281BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BD0u;
    // 0x281bd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B00u, 0x281BD0u, 0x281BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BD8u;
label_281bd8:
    // 0x281bd8: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x281bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_281bdc:
    // 0x281bdc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_281be0:
    if (ctx->pc == 0x281BE0u) {
        ctx->pc = 0x281BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BDCu;
        // 0x281be0: 0x8e220214  lw          $v0, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BE4u;
        goto label_281be4;
    }
    ctx->pc = 0x281BDCu;
    {
        const bool branch_taken_0x281bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281bdc) {
            ctx->pc = 0x281BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281BDCu;
            // 0x281be0: 0x8e220214  lw          $v0, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281BF0u;
            goto label_281bf0;
        }
    }
    ctx->pc = 0x281BE4u;
label_281be4:
    // 0x281be4: 0xc09f506  jal         func_27D418
label_281be8:
    if (ctx->pc == 0x281BE8u) {
        ctx->pc = 0x281BECu;
        goto label_281bec;
    }
    ctx->pc = 0x281BE4u;
    SET_GPR_U32(ctx, 31, 0x281BECu);
    ctx->pc = 0x27D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D418u, 0x281BE4u, 0x281BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BECu;
label_281bec:
    // 0x281bec: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x281becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_281bf0:
    // 0x281bf0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_281bf4:
    if (ctx->pc == 0x281BF4u) {
        ctx->pc = 0x281BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BF0u;
        // 0x281bf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281BF8u;
        goto label_281bf8;
    }
    ctx->pc = 0x281BF0u;
    {
        const bool branch_taken_0x281bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BF0u;
        // 0x281bf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281bf0) {
            ctx->pc = 0x281C60u;
            goto label_281c60;
        }
    }
    ctx->pc = 0x281BF8u;
label_281bf8:
    // 0x281bf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281bfc:
    // 0x281bfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x281bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281c00:
    // 0x281c00: 0xc0a177c  jal         func_285DF0
label_281c04:
    if (ctx->pc == 0x281C04u) {
        ctx->pc = 0x281C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C00u;
        // 0x281c04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C08u;
        goto label_281c08;
    }
    ctx->pc = 0x281C00u;
    SET_GPR_U32(ctx, 31, 0x281C08u);
    ctx->pc = 0x281C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C00u;
    // 0x281c04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DF0u, 0x281C00u, 0x281C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C08u;
label_281c08:
    // 0x281c08: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x281c08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
label_281c0c:
    // 0x281c0c: 0xc0b28aa  jal         func_2CA2A8
label_281c10:
    if (ctx->pc == 0x281C10u) {
        ctx->pc = 0x281C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C0Cu;
        // 0x281c10: 0x2610a120  addiu       $s0, $s0, -0x5EE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C14u;
        goto label_281c14;
    }
    ctx->pc = 0x281C0Cu;
    SET_GPR_U32(ctx, 31, 0x281C14u);
    ctx->pc = 0x281C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C0Cu;
    // 0x281c10: 0x2610a120  addiu       $s0, $s0, -0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x281C0Cu, 0x281C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C14u;
label_281c14:
    // 0x281c14: 0x8c461868  lw          $a2, 0x1868($v0)
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6248)));
label_281c18:
    // 0x281c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281c1c:
    // 0x281c1c: 0xc0efefa  jal         func_3BFBE8
label_281c20:
    if (ctx->pc == 0x281C20u) {
        ctx->pc = 0x281C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C1Cu;
        // 0x281c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C24u;
        goto label_281c24;
    }
    ctx->pc = 0x281C1Cu;
    SET_GPR_U32(ctx, 31, 0x281C24u);
    ctx->pc = 0x281C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C1Cu;
    // 0x281c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x281C1Cu, 0x281C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C24u;
label_281c24:
    // 0x281c24: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_281c28:
    // 0x281c28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x281c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_281c2c:
    // 0x281c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281c30:
    // 0x281c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_281c34:
    // 0x281c34: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x281c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
label_281c38:
    // 0x281c38: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x281c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_281c3c:
    // 0x281c3c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x281c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_281c40:
    // 0x281c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281c44:
    // 0x281c44: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281c48:
    // 0x281c48: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_281c4c:
    // 0x281c4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_281c50:
    // 0x281c50: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x281c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_281c54:
    // 0x281c54: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x281c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_281c58:
    // 0x281c58: 0xc09f5b6  jal         func_27D6D8
label_281c5c:
    if (ctx->pc == 0x281C5Cu) {
        ctx->pc = 0x281C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C58u;
        // 0x281c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C60u;
        goto label_281c60;
    }
    ctx->pc = 0x281C58u;
    SET_GPR_U32(ctx, 31, 0x281C60u);
    ctx->pc = 0x281C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C58u;
    // 0x281c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x281C58u, 0x281C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C60u;
label_281c60:
    // 0x281c60: 0xc0a2470  jal         func_2891C0
label_281c64:
    if (ctx->pc == 0x281C64u) {
        ctx->pc = 0x281C68u;
        goto label_281c68;
    }
    ctx->pc = 0x281C60u;
    SET_GPR_U32(ctx, 31, 0x281C68u);
    ctx->pc = 0x2891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891C0u, 0x281C60u, 0x281C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C68u;
label_281c68:
    // 0x281c68: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x281c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_281c6c:
    // 0x281c6c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_281c70:
    if (ctx->pc == 0x281C70u) {
        ctx->pc = 0x281C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C6Cu;
        // 0x281c70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C74u;
        goto label_281c74;
    }
    ctx->pc = 0x281C6Cu;
    {
        const bool branch_taken_0x281c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C6Cu;
        // 0x281c70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c6c) {
            ctx->pc = 0x281E64u;
            goto label_281e64;
        }
    }
    ctx->pc = 0x281C74u;
label_281c74:
    // 0x281c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281c78:
    // 0x281c78: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x281c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_281c7c:
    // 0x281c7c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x281c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_281c80:
    // 0x281c80: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281c84:
    // 0x281c84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_281c88:
    // 0x281c88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x281c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_281c8c:
    // 0x281c8c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x281c8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_281c90:
    // 0x281c90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x281c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_281c94:
    // 0x281c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281c98:
    // 0x281c98: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x281c98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_281c9c:
    // 0x281c9c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x281c9cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_281ca0:
    // 0x281ca0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281ca4:
    // 0x281ca4: 0xc0da8ea  jal         func_36A3A8
label_281ca8:
    if (ctx->pc == 0x281CA8u) {
        ctx->pc = 0x281CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CA4u;
        // 0x281ca8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CACu;
        goto label_281cac;
    }
    ctx->pc = 0x281CA4u;
    SET_GPR_U32(ctx, 31, 0x281CACu);
    ctx->pc = 0x281CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CA4u;
    // 0x281ca8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281CA4u, 0x281CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CACu;
label_281cac:
    // 0x281cac: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x281cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
label_281cb0:
    // 0x281cb0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x281cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_281cb4:
    // 0x281cb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x281cb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_281cb8:
    // 0x281cb8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x281cb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_281cbc:
    // 0x281cbc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x281cbcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_281cc0:
    // 0x281cc0: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x281cc0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_281cc4:
    // 0x281cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281cc8:
    // 0x281cc8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281ccc:
    // 0x281ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281cd0:
    // 0x281cd0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281cd4:
    // 0x281cd4: 0xc0da8ea  jal         func_36A3A8
label_281cd8:
    if (ctx->pc == 0x281CD8u) {
        ctx->pc = 0x281CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD4u;
        // 0x281cd8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CDCu;
        goto label_281cdc;
    }
    ctx->pc = 0x281CD4u;
    SET_GPR_U32(ctx, 31, 0x281CDCu);
    ctx->pc = 0x281CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CD4u;
    // 0x281cd8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281CD4u, 0x281CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CDCu;
label_281cdc:
    // 0x281cdc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x281cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_281ce0:
    // 0x281ce0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x281ce0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_281ce4:
    // 0x281ce4: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x281ce4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_281ce8:
    // 0x281ce8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x281ce8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_281cec:
    // 0x281cec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281cf0:
    // 0x281cf0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281cf4:
    // 0x281cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281cf8:
    // 0x281cf8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281cfc:
    // 0x281cfc: 0xc0da8ea  jal         func_36A3A8
label_281d00:
    if (ctx->pc == 0x281D00u) {
        ctx->pc = 0x281D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CFCu;
        // 0x281d00: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D04u;
        goto label_281d04;
    }
    ctx->pc = 0x281CFCu;
    SET_GPR_U32(ctx, 31, 0x281D04u);
    ctx->pc = 0x281D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CFCu;
    // 0x281d00: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281CFCu, 0x281D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D04u;
label_281d04:
    // 0x281d04: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x281d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_281d08:
    // 0x281d08: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x281d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_281d0c:
    // 0x281d0c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x281d0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_281d10:
    // 0x281d10: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x281d10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_281d14:
    // 0x281d14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d18:
    // 0x281d18: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281d1c:
    // 0x281d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d20:
    // 0x281d20: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281d24:
    // 0x281d24: 0xc0da8ea  jal         func_36A3A8
label_281d28:
    if (ctx->pc == 0x281D28u) {
        ctx->pc = 0x281D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D24u;
        // 0x281d28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D2Cu;
        goto label_281d2c;
    }
    ctx->pc = 0x281D24u;
    SET_GPR_U32(ctx, 31, 0x281D2Cu);
    ctx->pc = 0x281D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D24u;
    // 0x281d28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281D24u, 0x281D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D2Cu;
label_281d2c:
    // 0x281d2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x281d2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_281d30:
    // 0x281d30: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x281d30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_281d34:
    // 0x281d34: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x281d34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_281d38:
    // 0x281d38: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x281d38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_281d3c:
    // 0x281d3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d40:
    // 0x281d40: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281d44:
    // 0x281d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d48:
    // 0x281d48: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281d4c:
    // 0x281d4c: 0xc0da8ea  jal         func_36A3A8
label_281d50:
    if (ctx->pc == 0x281D50u) {
        ctx->pc = 0x281D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D4Cu;
        // 0x281d50: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D54u;
        goto label_281d54;
    }
    ctx->pc = 0x281D4Cu;
    SET_GPR_U32(ctx, 31, 0x281D54u);
    ctx->pc = 0x281D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D4Cu;
    // 0x281d50: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281D4Cu, 0x281D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D54u;
label_281d54:
    // 0x281d54: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x281d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_281d58:
    // 0x281d58: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x281d58u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_281d5c:
    // 0x281d5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x281d5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_281d60:
    // 0x281d60: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x281d60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_281d64:
    // 0x281d64: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281d68:
    // 0x281d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d6c:
    // 0x281d6c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281d70:
    // 0x281d70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281d74:
    // 0x281d74: 0xc0da8ea  jal         func_36A3A8
label_281d78:
    if (ctx->pc == 0x281D78u) {
        ctx->pc = 0x281D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D74u;
        // 0x281d78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D7Cu;
        goto label_281d7c;
    }
    ctx->pc = 0x281D74u;
    SET_GPR_U32(ctx, 31, 0x281D7Cu);
    ctx->pc = 0x281D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D74u;
    // 0x281d78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281D74u, 0x281D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D7Cu;
label_281d7c:
    // 0x281d7c: 0xc0c2d8e  jal         func_30B638
label_281d80:
    if (ctx->pc == 0x281D80u) {
        ctx->pc = 0x281D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D7Cu;
        // 0x281d80: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D84u;
        goto label_281d84;
    }
    ctx->pc = 0x281D7Cu;
    SET_GPR_U32(ctx, 31, 0x281D84u);
    ctx->pc = 0x281D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D7Cu;
    // 0x281d80: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B638u, 0x281D7Cu, 0x281D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D84u;
label_281d84:
    // 0x281d84: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x281d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_281d88:
    // 0x281d88: 0x0  nop
    ctx->pc = 0x281d88u;
    // NOP
label_281d8c:
    // 0x281d8c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x281d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_281d90:
    // 0x281d90: 0xc0c2d92  jal         func_30B648
label_281d94:
    if (ctx->pc == 0x281D94u) {
        ctx->pc = 0x281D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D90u;
        // 0x281d94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D98u;
        goto label_281d98;
    }
    ctx->pc = 0x281D90u;
    SET_GPR_U32(ctx, 31, 0x281D98u);
    ctx->pc = 0x281D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D90u;
    // 0x281d94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B648u, 0x281D90u, 0x281D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D98u;
label_281d98:
    // 0x281d98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x281d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_281d9c:
    // 0x281d9c: 0x0  nop
    ctx->pc = 0x281d9cu;
    // NOP
label_281da0:
    // 0x281da0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x281da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_281da4:
    // 0x281da4: 0x0  nop
    ctx->pc = 0x281da4u;
    // NOP
label_281da8:
    // 0x281da8: 0x0  nop
    ctx->pc = 0x281da8u;
    // NOP
label_281dac:
    // 0x281dac: 0x4602bd03  div.s       $f20, $f23, $f2
    ctx->pc = 0x281dacu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[23], ctx->f[2]); }
label_281db0:
    // 0x281db0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281db4:
    // 0x281db4: 0x0  nop
    ctx->pc = 0x281db4u;
    // NOP
label_281db8:
    // 0x281db8: 0x0  nop
    ctx->pc = 0x281db8u;
    // NOP
label_281dbc:
    // 0x281dbc: 0x4616bd83  div.s       $f22, $f23, $f22
    ctx->pc = 0x281dbcu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[23], ctx->f[22]); }
label_281dc0:
    // 0x281dc0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281dc4:
    // 0x281dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281dc8:
    // 0x281dc8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281dcc:
    // 0x281dcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281dd0:
    // 0x281dd0: 0x4614c5c1  sub.s       $f23, $f24, $f20
    ctx->pc = 0x281dd0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
label_281dd4:
    // 0x281dd4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x281dd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_281dd8:
    // 0x281dd8: 0x4616c541  sub.s       $f21, $f24, $f22
    ctx->pc = 0x281dd8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
label_281ddc:
    // 0x281ddc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x281ddcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_281de0:
    // 0x281de0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x281de0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_281de4:
    // 0x281de4: 0xc0da8ea  jal         func_36A3A8
label_281de8:
    if (ctx->pc == 0x281DE8u) {
        ctx->pc = 0x281DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DE4u;
        // 0x281de8: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281DECu;
        goto label_281dec;
    }
    ctx->pc = 0x281DE4u;
    SET_GPR_U32(ctx, 31, 0x281DECu);
    ctx->pc = 0x281DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281DE4u;
    // 0x281de8: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281DE4u, 0x281DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DECu;
label_281dec:
    // 0x281dec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x281decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_281df0:
    // 0x281df0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x281df0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_281df4:
    // 0x281df4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x281df4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_281df8:
    // 0x281df8: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x281df8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_281dfc:
    // 0x281dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e00:
    // 0x281e00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281e04:
    // 0x281e04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e08:
    // 0x281e08: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281e0c:
    // 0x281e0c: 0xc0da8ea  jal         func_36A3A8
label_281e10:
    if (ctx->pc == 0x281E10u) {
        ctx->pc = 0x281E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E0Cu;
        // 0x281e10: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E14u;
        goto label_281e14;
    }
    ctx->pc = 0x281E0Cu;
    SET_GPR_U32(ctx, 31, 0x281E14u);
    ctx->pc = 0x281E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E0Cu;
    // 0x281e10: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281E0Cu, 0x281E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E14u;
label_281e14:
    // 0x281e14: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x281e14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_281e18:
    // 0x281e18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x281e18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_281e1c:
    // 0x281e1c: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x281e1cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
label_281e20:
    // 0x281e20: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x281e20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_281e24:
    // 0x281e24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e28:
    // 0x281e28: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281e2c:
    // 0x281e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e30:
    // 0x281e30: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281e34:
    // 0x281e34: 0xc0da8ea  jal         func_36A3A8
label_281e38:
    if (ctx->pc == 0x281E38u) {
        ctx->pc = 0x281E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E34u;
        // 0x281e38: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E3Cu;
        goto label_281e3c;
    }
    ctx->pc = 0x281E34u;
    SET_GPR_U32(ctx, 31, 0x281E3Cu);
    ctx->pc = 0x281E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E34u;
    // 0x281e38: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281E34u, 0x281E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E3Cu;
label_281e3c:
    // 0x281e3c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x281e3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_281e40:
    // 0x281e40: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x281e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_281e44:
    // 0x281e44: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x281e44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_281e48:
    // 0x281e48: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x281e48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
label_281e4c:
    // 0x281e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e50:
    // 0x281e50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281e54:
    // 0x281e54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e58:
    // 0x281e58: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281e5c:
    // 0x281e5c: 0xc0da8ea  jal         func_36A3A8
label_281e60:
    if (ctx->pc == 0x281E60u) {
        ctx->pc = 0x281E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E5Cu;
        // 0x281e60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E64u;
        goto label_281e64;
    }
    ctx->pc = 0x281E5Cu;
    SET_GPR_U32(ctx, 31, 0x281E64u);
    ctx->pc = 0x281E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E5Cu;
    // 0x281e60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x281E5Cu, 0x281E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E64u;
label_281e64:
    // 0x281e64: 0x26c2cb28  addiu       $v0, $s6, -0x34D8
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
label_281e68:
    // 0x281e68: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x281e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_281e6c:
    // 0x281e6c: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_281e70:
    if (ctx->pc == 0x281E70u) {
        ctx->pc = 0x281E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E6Cu;
        // 0x281e70: 0xac400064  sw          $zero, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E74u;
        goto label_281e74;
    }
    ctx->pc = 0x281E6Cu;
    {
        const bool branch_taken_0x281e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e6c) {
            ctx->pc = 0x281E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281E6Cu;
            // 0x281e70: 0xac400064  sw          $zero, 0x64($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281EC4u;
            goto label_281ec4;
        }
    }
    ctx->pc = 0x281E74u;
label_281e74:
    // 0x281e74: 0xc0a0340  jal         func_280D00
label_281e78:
    if (ctx->pc == 0x281E78u) {
        ctx->pc = 0x281E7Cu;
        goto label_281e7c;
    }
    ctx->pc = 0x281E74u;
    SET_GPR_U32(ctx, 31, 0x281E7Cu);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x281E74u, 0x281E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E7Cu;
label_281e7c:
    // 0x281e7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_281e80:
    // 0x281e80: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_281e84:
    if (ctx->pc == 0x281E84u) {
        ctx->pc = 0x281E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E80u;
        // 0x281e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E88u;
        goto label_281e88;
    }
    ctx->pc = 0x281E80u;
    {
        const bool branch_taken_0x281e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x281E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E80u;
        // 0x281e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e80) {
            ctx->pc = 0x281EBCu;
            goto label_281ebc;
        }
    }
    ctx->pc = 0x281E88u;
label_281e88:
    // 0x281e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281e8c:
    // 0x281e8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281e90:
    // 0x281e90: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281e94:
    // 0x281e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e98:
    // 0x281e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281e9c:
    // 0x281e9c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x281e9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_281ea0:
    // 0x281ea0: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x281ea0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_281ea4:
    // 0x281ea4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281ea8:
    // 0x281ea8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281eac:
    // 0x281eac: 0xc0da874  jal         func_36A1D0
label_281eb0:
    if (ctx->pc == 0x281EB0u) {
        ctx->pc = 0x281EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EACu;
        // 0x281eb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281EB4u;
        goto label_281eb4;
    }
    ctx->pc = 0x281EACu;
    SET_GPR_U32(ctx, 31, 0x281EB4u);
    ctx->pc = 0x281EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281EACu;
    // 0x281eb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281EACu, 0x281EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281EB4u;
label_281eb4:
    // 0x281eb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_281eb8:
    if (ctx->pc == 0x281EB8u) {
        ctx->pc = 0x281EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EB4u;
        // 0x281eb8: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281EBCu;
        goto label_281ebc;
    }
    ctx->pc = 0x281EB4u;
    {
        const bool branch_taken_0x281eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EB4u;
        // 0x281eb8: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281eb4) {
            ctx->pc = 0x281EC8u;
            goto label_281ec8;
        }
    }
    ctx->pc = 0x281EBCu;
label_281ebc:
    // 0x281ebc: 0x26c2cb28  addiu       $v0, $s6, -0x34D8
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
label_281ec0:
    // 0x281ec0: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x281ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_281ec4:
    // 0x281ec4: 0x26d0cb28  addiu       $s0, $s6, -0x34D8
    ctx->pc = 0x281ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
label_281ec8:
    // 0x281ec8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_281ecc:
    // 0x281ecc: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_281ed0:
    if (ctx->pc == 0x281ED0u) {
        ctx->pc = 0x281ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281ECCu;
        // 0x281ed0: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281ED4u;
        goto label_281ed4;
    }
    ctx->pc = 0x281ECCu;
    {
        const bool branch_taken_0x281ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ecc) {
            ctx->pc = 0x281ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281ECCu;
            // 0x281ed0: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281F90u;
            goto label_281f90;
        }
    }
    ctx->pc = 0x281ED4u;
label_281ed4:
    // 0x281ed4: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x281ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_281ed8:
    // 0x281ed8: 0x28e2ffec  slti        $v0, $a3, -0x14
    ctx->pc = 0x281ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967276) ? 1 : 0);
label_281edc:
    // 0x281edc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_281ee0:
    if (ctx->pc == 0x281EE0u) {
        ctx->pc = 0x281EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EDCu;
        // 0x281ee0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281EE4u;
        goto label_281ee4;
    }
    ctx->pc = 0x281EDCu;
    {
        const bool branch_taken_0x281edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EDCu;
        // 0x281ee0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281edc) {
            ctx->pc = 0x281F2Cu;
            goto label_281f2c;
        }
    }
    ctx->pc = 0x281EE4u;
label_281ee4:
    // 0x281ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281ee8:
    // 0x281ee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281eec:
    // 0x281eec: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281ef0:
    // 0x281ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281ef4:
    // 0x281ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281ef8:
    // 0x281ef8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x281ef8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_281efc:
    // 0x281efc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x281efcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_281f00:
    // 0x281f00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f04:
    // 0x281f04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f08:
    // 0x281f08: 0xc0da874  jal         func_36A1D0
label_281f0c:
    if (ctx->pc == 0x281F0Cu) {
        ctx->pc = 0x281F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F08u;
        // 0x281f0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F10u;
        goto label_281f10;
    }
    ctx->pc = 0x281F08u;
    SET_GPR_U32(ctx, 31, 0x281F10u);
    ctx->pc = 0x281F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F08u;
    // 0x281f0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281F08u, 0x281F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F10u;
label_281f10:
    // 0x281f10: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x281f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281f14:
    // 0x281f14: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x281f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_281f18:
    // 0x281f18: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x281f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_281f1c:
    // 0x281f1c: 0x60f809  jalr        $v1
label_281f20:
    if (ctx->pc == 0x281F20u) {
        ctx->pc = 0x281F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F1Cu;
        // 0x281f20: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F24u;
        goto label_281f24;
    }
    ctx->pc = 0x281F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x281F24u);
        ctx->pc = 0x281F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F1Cu;
        // 0x281f20: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F1Cu, 0x281F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281F24u;
label_281f24:
    // 0x281f24: 0x1000001a  b           . + 4 + (0x1A << 2)
label_281f28:
    if (ctx->pc == 0x281F28u) {
        ctx->pc = 0x281F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F24u;
        // 0x281f28: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F2Cu;
        goto label_281f2c;
    }
    ctx->pc = 0x281F24u;
    {
        const bool branch_taken_0x281f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F24u;
        // 0x281f28: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f24) {
            ctx->pc = 0x281F90u;
            goto label_281f90;
        }
    }
    ctx->pc = 0x281F2Cu;
label_281f2c:
    // 0x281f2c: 0x4e1000e  bgez        $a3, . + 4 + (0xE << 2)
label_281f30:
    if (ctx->pc == 0x281F30u) {
        ctx->pc = 0x281F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F2Cu;
        // 0x281f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F34u;
        goto label_281f34;
    }
    ctx->pc = 0x281F2Cu;
    {
        const bool branch_taken_0x281f2c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x281F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F2Cu;
        // 0x281f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f2c) {
            ctx->pc = 0x281F68u;
            goto label_281f68;
        }
    }
    ctx->pc = 0x281F34u;
label_281f34:
    // 0x281f34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281f38:
    // 0x281f38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f3c:
    // 0x281f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281f40:
    // 0x281f40: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281f44:
    // 0x281f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f48:
    // 0x281f48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x281f48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_281f4c:
    // 0x281f4c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x281f4cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_281f50:
    // 0x281f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f54:
    // 0x281f54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f58:
    // 0x281f58: 0xc0da874  jal         func_36A1D0
label_281f5c:
    if (ctx->pc == 0x281F5Cu) {
        ctx->pc = 0x281F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F58u;
        // 0x281f5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F60u;
        goto label_281f60;
    }
    ctx->pc = 0x281F58u;
    SET_GPR_U32(ctx, 31, 0x281F60u);
    ctx->pc = 0x281F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F58u;
    // 0x281f5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281F58u, 0x281F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F60u;
label_281f60:
    // 0x281f60: 0x1000000b  b           . + 4 + (0xB << 2)
label_281f64:
    if (ctx->pc == 0x281F64u) {
        ctx->pc = 0x281F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F60u;
        // 0x281f64: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F68u;
        goto label_281f68;
    }
    ctx->pc = 0x281F60u;
    {
        const bool branch_taken_0x281f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F60u;
        // 0x281f64: 0x26d0cb28  addiu       $s0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f60) {
            ctx->pc = 0x281F90u;
            goto label_281f90;
        }
    }
    ctx->pc = 0x281F68u;
label_281f68:
    // 0x281f68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281f6c:
    // 0x281f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281f70:
    // 0x281f70: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281f74:
    // 0x281f74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x281f74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_281f78:
    // 0x281f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f7c:
    // 0x281f7c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x281f7cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_281f80:
    // 0x281f80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281f80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f84:
    // 0x281f84: 0xc0da874  jal         func_36A1D0
label_281f88:
    if (ctx->pc == 0x281F88u) {
        ctx->pc = 0x281F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F84u;
        // 0x281f88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F8Cu;
        goto label_281f8c;
    }
    ctx->pc = 0x281F84u;
    SET_GPR_U32(ctx, 31, 0x281F8Cu);
    ctx->pc = 0x281F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F84u;
    // 0x281f88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281F84u, 0x281F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F8Cu;
label_281f8c:
    // 0x281f8c: 0x26d0cb28  addiu       $s0, $s6, -0x34D8
    ctx->pc = 0x281f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
label_281f90:
    // 0x281f90: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x281f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_281f94:
    // 0x281f94: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_281f98:
    if (ctx->pc == 0x281F98u) {
        ctx->pc = 0x281F9Cu;
        goto label_281f9c;
    }
    ctx->pc = 0x281F94u;
    {
        const bool branch_taken_0x281f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f94) {
            ctx->pc = 0x282058u;
            goto label_282058;
        }
    }
    ctx->pc = 0x281F9Cu;
label_281f9c:
    // 0x281f9c: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x281f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_281fa0:
    // 0x281fa0: 0x28e20114  slti        $v0, $a3, 0x114
    ctx->pc = 0x281fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)276) ? 1 : 0);
label_281fa4:
    // 0x281fa4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_281fa8:
    if (ctx->pc == 0x281FA8u) {
        ctx->pc = 0x281FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA4u;
        // 0x281fa8: 0x28e20100  slti        $v0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FACu;
        goto label_281fac;
    }
    ctx->pc = 0x281FA4u;
    {
        const bool branch_taken_0x281fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA4u;
        // 0x281fa8: 0x28e20100  slti        $v0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fa4) {
            ctx->pc = 0x281FF4u;
            goto label_281ff4;
        }
    }
    ctx->pc = 0x281FACu;
label_281fac:
    // 0x281fac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_281fb0:
    // 0x281fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281fb4:
    // 0x281fb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281fb8:
    // 0x281fb8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x281fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_281fbc:
    // 0x281fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281fc0:
    // 0x281fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281fc4:
    // 0x281fc4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x281fc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_281fc8:
    // 0x281fc8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x281fc8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_281fcc:
    // 0x281fcc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x281fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_281fd0:
    // 0x281fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281fd4:
    // 0x281fd4: 0xc0da874  jal         func_36A1D0
label_281fd8:
    if (ctx->pc == 0x281FD8u) {
        ctx->pc = 0x281FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FD4u;
        // 0x281fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FDCu;
        goto label_281fdc;
    }
    ctx->pc = 0x281FD4u;
    SET_GPR_U32(ctx, 31, 0x281FDCu);
    ctx->pc = 0x281FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281FD4u;
    // 0x281fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x281FD4u, 0x281FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FDCu;
label_281fdc:
    // 0x281fdc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x281fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_281fe0:
    // 0x281fe0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x281fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_281fe4:
    // 0x281fe4: 0x40f809  jalr        $v0
label_281fe8:
    if (ctx->pc == 0x281FE8u) {
        ctx->pc = 0x281FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FE4u;
        // 0x281fe8: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FECu;
        goto label_281fec;
    }
    ctx->pc = 0x281FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281FECu);
        ctx->pc = 0x281FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FE4u;
        // 0x281fe8: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281FE4u, 0x281FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281FECu;
label_281fec:
    // 0x281fec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_281ff0:
    if (ctx->pc == 0x281FF0u) {
        ctx->pc = 0x281FF4u;
        goto label_281ff4;
    }
    ctx->pc = 0x281FECu;
    {
        const bool branch_taken_0x281fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281fec) {
            ctx->pc = 0x282058u;
            goto label_282058;
        }
    }
    ctx->pc = 0x281FF4u;
label_281ff4:
    // 0x281ff4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_281ff8:
    if (ctx->pc == 0x281FF8u) {
        ctx->pc = 0x281FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FF4u;
        // 0x281ff8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FFCu;
        goto label_281ffc;
    }
    ctx->pc = 0x281FF4u;
    {
        const bool branch_taken_0x281ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FF4u;
        // 0x281ff8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ff4) {
            ctx->pc = 0x282030u;
            goto label_282030;
        }
    }
    ctx->pc = 0x281FFCu;
label_281ffc:
    // 0x281ffc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_282000:
    // 0x282000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_282004:
    // 0x282004: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x282004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_282008:
    // 0x282008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28200c:
    // 0x28200c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28200cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282010:
    // 0x282010: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x282010u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_282014:
    // 0x282014: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x282014u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_282018:
    // 0x282018: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x282018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_28201c:
    // 0x28201c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28201cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282020:
    // 0x282020: 0xc0da874  jal         func_36A1D0
label_282024:
    if (ctx->pc == 0x282024u) {
        ctx->pc = 0x282024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282020u;
        // 0x282024: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282028u;
        goto label_282028;
    }
    ctx->pc = 0x282020u;
    SET_GPR_U32(ctx, 31, 0x282028u);
    ctx->pc = 0x282024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282020u;
    // 0x282024: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x282020u, 0x282028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282028u;
label_282028:
    // 0x282028: 0x1000000b  b           . + 4 + (0xB << 2)
label_28202c:
    if (ctx->pc == 0x28202Cu) {
        ctx->pc = 0x282030u;
        goto label_282030;
    }
    ctx->pc = 0x282028u;
    {
        const bool branch_taken_0x282028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282028) {
            ctx->pc = 0x282058u;
            goto label_282058;
        }
    }
    ctx->pc = 0x282030u;
label_282030:
    // 0x282030: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_282034:
    // 0x282034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_282038:
    // 0x282038: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x282038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_28203c:
    // 0x28203c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282040:
    // 0x282040: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x282040u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_282044:
    // 0x282044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282048:
    // 0x282048: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x282048u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_28204c:
    // 0x28204c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28204cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282050:
    // 0x282050: 0xc0da874  jal         func_36A1D0
label_282054:
    if (ctx->pc == 0x282054u) {
        ctx->pc = 0x282054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282050u;
        // 0x282054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282058u;
        goto label_282058;
    }
    ctx->pc = 0x282050u;
    SET_GPR_U32(ctx, 31, 0x282058u);
    ctx->pc = 0x282054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282050u;
    // 0x282054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x282050u, 0x282058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282058u;
label_282058:
    // 0x282058: 0xc0a033a  jal         func_280CE8
label_28205c:
    if (ctx->pc == 0x28205Cu) {
        ctx->pc = 0x28205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282058u;
        // 0x28205c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282060u;
        goto label_282060;
    }
    ctx->pc = 0x282058u;
    SET_GPR_U32(ctx, 31, 0x282060u);
    ctx->pc = 0x28205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282058u;
    // 0x28205c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CE8u, 0x282058u, 0x282060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282060u;
label_282060:
    // 0x282060: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_282064:
    if (ctx->pc == 0x282064u) {
        ctx->pc = 0x282064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282060u;
        // 0x282064: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282068u;
        goto label_282068;
    }
    ctx->pc = 0x282060u;
    {
        const bool branch_taken_0x282060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282060u;
        // 0x282064: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282060) {
            ctx->pc = 0x282070u;
            goto label_282070;
        }
    }
    ctx->pc = 0x282068u;
label_282068:
    // 0x282068: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28206c:
    // 0x28206c: 0xa040b821  sb          $zero, -0x47DF($v0)
    ctx->pc = 0x28206cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 0));
label_282070:
    // 0x282070: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_282074:
    if (ctx->pc == 0x282074u) {
        ctx->pc = 0x282074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282070u;
        // 0x282074: 0x26c4cb28  addiu       $a0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282078u;
        goto label_282078;
    }
    ctx->pc = 0x282070u;
    {
        const bool branch_taken_0x282070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282070u;
        // 0x282074: 0x26c4cb28  addiu       $a0, $s6, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282070) {
            ctx->pc = 0x28209Cu;
            goto label_28209c;
        }
    }
    ctx->pc = 0x282078u;
label_282078:
    // 0x282078: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x282078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28207c:
    // 0x28207c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_282080:
    if (ctx->pc == 0x282080u) {
        ctx->pc = 0x282080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28207Cu;
        // 0x282080: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282084u;
        goto label_282084;
    }
    ctx->pc = 0x28207Cu;
    {
        const bool branch_taken_0x28207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28207Cu;
        // 0x282080: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28207c) {
            ctx->pc = 0x28209Cu;
            goto label_28209c;
        }
    }
    ctx->pc = 0x282084u;
label_282084:
    // 0x282084: 0x8c439478  lw          $v1, -0x6B88($v0)
    ctx->pc = 0x282084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
label_282088:
    // 0x282088: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_28208c:
    if (ctx->pc == 0x28208Cu) {
        ctx->pc = 0x282090u;
        goto label_282090;
    }
    ctx->pc = 0x282088u;
    {
        const bool branch_taken_0x282088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282088) {
            ctx->pc = 0x28209Cu;
            goto label_28209c;
        }
    }
    ctx->pc = 0x282090u;
label_282090:
    // 0x282090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x282090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_282094:
    // 0x282094: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_282098:
    // 0x282098: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x282098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_28209c:
    // 0x28209c: 0xc0db0ea  jal         func_36C3A8
label_2820a0:
    if (ctx->pc == 0x2820A0u) {
        ctx->pc = 0x2820A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28209Cu;
        // 0x2820a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820A4u;
        goto label_2820a4;
    }
    ctx->pc = 0x28209Cu;
    SET_GPR_U32(ctx, 31, 0x2820A4u);
    ctx->pc = 0x2820A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28209Cu;
    // 0x2820a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x28209Cu, 0x2820A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820A4u;
label_2820a4:
    // 0x2820a4: 0xc076100  jal         func_1D8400
label_2820a8:
    if (ctx->pc == 0x2820A8u) {
        ctx->pc = 0x2820ACu;
        goto label_2820ac;
    }
    ctx->pc = 0x2820A4u;
    SET_GPR_U32(ctx, 31, 0x2820ACu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2820A4u, 0x2820ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820ACu;
label_2820ac:
    // 0x2820ac: 0xc0a0164  jal         func_280590
label_2820b0:
    if (ctx->pc == 0x2820B0u) {
        ctx->pc = 0x2820B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820ACu;
        // 0x2820b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820B4u;
        goto label_2820b4;
    }
    ctx->pc = 0x2820ACu;
    SET_GPR_U32(ctx, 31, 0x2820B4u);
    ctx->pc = 0x2820B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820ACu;
    // 0x2820b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280590u, 0x2820ACu, 0x2820B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820B4u;
label_2820b4:
    // 0x2820b4: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x2820b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2820b8:
    // 0x2820b8: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x2820b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_2820bc:
    // 0x2820bc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2820bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2820c0:
    // 0x2820c0: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x2820c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_2820c4:
    // 0x2820c4: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x2820c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2820c8:
    // 0x2820c8: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x2820c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_2820cc:
    // 0x2820cc: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x2820ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2820d0:
    // 0x2820d0: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x2820d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_2820d4:
    // 0x2820d4: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x2820d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2820d8:
    // 0x2820d8: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x2820d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_2820dc:
    // 0x2820dc: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x2820dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2820e0:
    // 0x2820e0: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x2820e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2820e4:
    // 0x2820e4: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x2820e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2820e8:
    // 0x2820e8: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x2820e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2820ec:
    // 0x2820ec: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2820ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2820f0:
    // 0x2820f0: 0x3e00008  jr          $ra
label_2820f4:
    if (ctx->pc == 0x2820F4u) {
        ctx->pc = 0x2820F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820F0u;
        // 0x2820f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820F8u;
        goto label_fallthrough_0x2820f0;
    }
    ctx->pc = 0x2820F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2820F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820F0u;
        // 0x2820f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2820F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2820f0:
    ctx->pc = 0x2820F8u;
}
