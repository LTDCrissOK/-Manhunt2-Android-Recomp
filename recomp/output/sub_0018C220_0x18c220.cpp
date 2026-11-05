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

// Function: sub_0018C220
// Address: 0x18c220 - 0x18c918
void sub_0018C220_0x18c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C220_0x18c220");
#endif

    switch (ctx->pc) {
        case 0x18c220u: goto label_18c220;
        case 0x18c224u: goto label_18c224;
        case 0x18c228u: goto label_18c228;
        case 0x18c22cu: goto label_18c22c;
        case 0x18c230u: goto label_18c230;
        case 0x18c234u: goto label_18c234;
        case 0x18c238u: goto label_18c238;
        case 0x18c23cu: goto label_18c23c;
        case 0x18c240u: goto label_18c240;
        case 0x18c244u: goto label_18c244;
        case 0x18c248u: goto label_18c248;
        case 0x18c24cu: goto label_18c24c;
        case 0x18c250u: goto label_18c250;
        case 0x18c254u: goto label_18c254;
        case 0x18c258u: goto label_18c258;
        case 0x18c25cu: goto label_18c25c;
        case 0x18c260u: goto label_18c260;
        case 0x18c264u: goto label_18c264;
        case 0x18c268u: goto label_18c268;
        case 0x18c26cu: goto label_18c26c;
        case 0x18c270u: goto label_18c270;
        case 0x18c274u: goto label_18c274;
        case 0x18c278u: goto label_18c278;
        case 0x18c27cu: goto label_18c27c;
        case 0x18c280u: goto label_18c280;
        case 0x18c284u: goto label_18c284;
        case 0x18c288u: goto label_18c288;
        case 0x18c28cu: goto label_18c28c;
        case 0x18c290u: goto label_18c290;
        case 0x18c294u: goto label_18c294;
        case 0x18c298u: goto label_18c298;
        case 0x18c29cu: goto label_18c29c;
        case 0x18c2a0u: goto label_18c2a0;
        case 0x18c2a4u: goto label_18c2a4;
        case 0x18c2a8u: goto label_18c2a8;
        case 0x18c2acu: goto label_18c2ac;
        case 0x18c2b0u: goto label_18c2b0;
        case 0x18c2b4u: goto label_18c2b4;
        case 0x18c2b8u: goto label_18c2b8;
        case 0x18c2bcu: goto label_18c2bc;
        case 0x18c2c0u: goto label_18c2c0;
        case 0x18c2c4u: goto label_18c2c4;
        case 0x18c2c8u: goto label_18c2c8;
        case 0x18c2ccu: goto label_18c2cc;
        case 0x18c2d0u: goto label_18c2d0;
        case 0x18c2d4u: goto label_18c2d4;
        case 0x18c2d8u: goto label_18c2d8;
        case 0x18c2dcu: goto label_18c2dc;
        case 0x18c2e0u: goto label_18c2e0;
        case 0x18c2e4u: goto label_18c2e4;
        case 0x18c2e8u: goto label_18c2e8;
        case 0x18c2ecu: goto label_18c2ec;
        case 0x18c2f0u: goto label_18c2f0;
        case 0x18c2f4u: goto label_18c2f4;
        case 0x18c2f8u: goto label_18c2f8;
        case 0x18c2fcu: goto label_18c2fc;
        case 0x18c300u: goto label_18c300;
        case 0x18c304u: goto label_18c304;
        case 0x18c308u: goto label_18c308;
        case 0x18c30cu: goto label_18c30c;
        case 0x18c310u: goto label_18c310;
        case 0x18c314u: goto label_18c314;
        case 0x18c318u: goto label_18c318;
        case 0x18c31cu: goto label_18c31c;
        case 0x18c320u: goto label_18c320;
        case 0x18c324u: goto label_18c324;
        case 0x18c328u: goto label_18c328;
        case 0x18c32cu: goto label_18c32c;
        case 0x18c330u: goto label_18c330;
        case 0x18c334u: goto label_18c334;
        case 0x18c338u: goto label_18c338;
        case 0x18c33cu: goto label_18c33c;
        case 0x18c340u: goto label_18c340;
        case 0x18c344u: goto label_18c344;
        case 0x18c348u: goto label_18c348;
        case 0x18c34cu: goto label_18c34c;
        case 0x18c350u: goto label_18c350;
        case 0x18c354u: goto label_18c354;
        case 0x18c358u: goto label_18c358;
        case 0x18c35cu: goto label_18c35c;
        case 0x18c360u: goto label_18c360;
        case 0x18c364u: goto label_18c364;
        case 0x18c368u: goto label_18c368;
        case 0x18c36cu: goto label_18c36c;
        case 0x18c370u: goto label_18c370;
        case 0x18c374u: goto label_18c374;
        case 0x18c378u: goto label_18c378;
        case 0x18c37cu: goto label_18c37c;
        case 0x18c380u: goto label_18c380;
        case 0x18c384u: goto label_18c384;
        case 0x18c388u: goto label_18c388;
        case 0x18c38cu: goto label_18c38c;
        case 0x18c390u: goto label_18c390;
        case 0x18c394u: goto label_18c394;
        case 0x18c398u: goto label_18c398;
        case 0x18c39cu: goto label_18c39c;
        case 0x18c3a0u: goto label_18c3a0;
        case 0x18c3a4u: goto label_18c3a4;
        case 0x18c3a8u: goto label_18c3a8;
        case 0x18c3acu: goto label_18c3ac;
        case 0x18c3b0u: goto label_18c3b0;
        case 0x18c3b4u: goto label_18c3b4;
        case 0x18c3b8u: goto label_18c3b8;
        case 0x18c3bcu: goto label_18c3bc;
        case 0x18c3c0u: goto label_18c3c0;
        case 0x18c3c4u: goto label_18c3c4;
        case 0x18c3c8u: goto label_18c3c8;
        case 0x18c3ccu: goto label_18c3cc;
        case 0x18c3d0u: goto label_18c3d0;
        case 0x18c3d4u: goto label_18c3d4;
        case 0x18c3d8u: goto label_18c3d8;
        case 0x18c3dcu: goto label_18c3dc;
        case 0x18c3e0u: goto label_18c3e0;
        case 0x18c3e4u: goto label_18c3e4;
        case 0x18c3e8u: goto label_18c3e8;
        case 0x18c3ecu: goto label_18c3ec;
        case 0x18c3f0u: goto label_18c3f0;
        case 0x18c3f4u: goto label_18c3f4;
        case 0x18c3f8u: goto label_18c3f8;
        case 0x18c3fcu: goto label_18c3fc;
        case 0x18c400u: goto label_18c400;
        case 0x18c404u: goto label_18c404;
        case 0x18c408u: goto label_18c408;
        case 0x18c40cu: goto label_18c40c;
        case 0x18c410u: goto label_18c410;
        case 0x18c414u: goto label_18c414;
        case 0x18c418u: goto label_18c418;
        case 0x18c41cu: goto label_18c41c;
        case 0x18c420u: goto label_18c420;
        case 0x18c424u: goto label_18c424;
        case 0x18c428u: goto label_18c428;
        case 0x18c42cu: goto label_18c42c;
        case 0x18c430u: goto label_18c430;
        case 0x18c434u: goto label_18c434;
        case 0x18c438u: goto label_18c438;
        case 0x18c43cu: goto label_18c43c;
        case 0x18c440u: goto label_18c440;
        case 0x18c444u: goto label_18c444;
        case 0x18c448u: goto label_18c448;
        case 0x18c44cu: goto label_18c44c;
        case 0x18c450u: goto label_18c450;
        case 0x18c454u: goto label_18c454;
        case 0x18c458u: goto label_18c458;
        case 0x18c45cu: goto label_18c45c;
        case 0x18c460u: goto label_18c460;
        case 0x18c464u: goto label_18c464;
        case 0x18c468u: goto label_18c468;
        case 0x18c46cu: goto label_18c46c;
        case 0x18c470u: goto label_18c470;
        case 0x18c474u: goto label_18c474;
        case 0x18c478u: goto label_18c478;
        case 0x18c47cu: goto label_18c47c;
        case 0x18c480u: goto label_18c480;
        case 0x18c484u: goto label_18c484;
        case 0x18c488u: goto label_18c488;
        case 0x18c48cu: goto label_18c48c;
        case 0x18c490u: goto label_18c490;
        case 0x18c494u: goto label_18c494;
        case 0x18c498u: goto label_18c498;
        case 0x18c49cu: goto label_18c49c;
        case 0x18c4a0u: goto label_18c4a0;
        case 0x18c4a4u: goto label_18c4a4;
        case 0x18c4a8u: goto label_18c4a8;
        case 0x18c4acu: goto label_18c4ac;
        case 0x18c4b0u: goto label_18c4b0;
        case 0x18c4b4u: goto label_18c4b4;
        case 0x18c4b8u: goto label_18c4b8;
        case 0x18c4bcu: goto label_18c4bc;
        case 0x18c4c0u: goto label_18c4c0;
        case 0x18c4c4u: goto label_18c4c4;
        case 0x18c4c8u: goto label_18c4c8;
        case 0x18c4ccu: goto label_18c4cc;
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4d4u: goto label_18c4d4;
        case 0x18c4d8u: goto label_18c4d8;
        case 0x18c4dcu: goto label_18c4dc;
        case 0x18c4e0u: goto label_18c4e0;
        case 0x18c4e4u: goto label_18c4e4;
        case 0x18c4e8u: goto label_18c4e8;
        case 0x18c4ecu: goto label_18c4ec;
        case 0x18c4f0u: goto label_18c4f0;
        case 0x18c4f4u: goto label_18c4f4;
        case 0x18c4f8u: goto label_18c4f8;
        case 0x18c4fcu: goto label_18c4fc;
        case 0x18c500u: goto label_18c500;
        case 0x18c504u: goto label_18c504;
        case 0x18c508u: goto label_18c508;
        case 0x18c50cu: goto label_18c50c;
        case 0x18c510u: goto label_18c510;
        case 0x18c514u: goto label_18c514;
        case 0x18c518u: goto label_18c518;
        case 0x18c51cu: goto label_18c51c;
        case 0x18c520u: goto label_18c520;
        case 0x18c524u: goto label_18c524;
        case 0x18c528u: goto label_18c528;
        case 0x18c52cu: goto label_18c52c;
        case 0x18c530u: goto label_18c530;
        case 0x18c534u: goto label_18c534;
        case 0x18c538u: goto label_18c538;
        case 0x18c53cu: goto label_18c53c;
        case 0x18c540u: goto label_18c540;
        case 0x18c544u: goto label_18c544;
        case 0x18c548u: goto label_18c548;
        case 0x18c54cu: goto label_18c54c;
        case 0x18c550u: goto label_18c550;
        case 0x18c554u: goto label_18c554;
        case 0x18c558u: goto label_18c558;
        case 0x18c55cu: goto label_18c55c;
        case 0x18c560u: goto label_18c560;
        case 0x18c564u: goto label_18c564;
        case 0x18c568u: goto label_18c568;
        case 0x18c56cu: goto label_18c56c;
        case 0x18c570u: goto label_18c570;
        case 0x18c574u: goto label_18c574;
        case 0x18c578u: goto label_18c578;
        case 0x18c57cu: goto label_18c57c;
        case 0x18c580u: goto label_18c580;
        case 0x18c584u: goto label_18c584;
        case 0x18c588u: goto label_18c588;
        case 0x18c58cu: goto label_18c58c;
        case 0x18c590u: goto label_18c590;
        case 0x18c594u: goto label_18c594;
        case 0x18c598u: goto label_18c598;
        case 0x18c59cu: goto label_18c59c;
        case 0x18c5a0u: goto label_18c5a0;
        case 0x18c5a4u: goto label_18c5a4;
        case 0x18c5a8u: goto label_18c5a8;
        case 0x18c5acu: goto label_18c5ac;
        case 0x18c5b0u: goto label_18c5b0;
        case 0x18c5b4u: goto label_18c5b4;
        case 0x18c5b8u: goto label_18c5b8;
        case 0x18c5bcu: goto label_18c5bc;
        case 0x18c5c0u: goto label_18c5c0;
        case 0x18c5c4u: goto label_18c5c4;
        case 0x18c5c8u: goto label_18c5c8;
        case 0x18c5ccu: goto label_18c5cc;
        case 0x18c5d0u: goto label_18c5d0;
        case 0x18c5d4u: goto label_18c5d4;
        case 0x18c5d8u: goto label_18c5d8;
        case 0x18c5dcu: goto label_18c5dc;
        case 0x18c5e0u: goto label_18c5e0;
        case 0x18c5e4u: goto label_18c5e4;
        case 0x18c5e8u: goto label_18c5e8;
        case 0x18c5ecu: goto label_18c5ec;
        case 0x18c5f0u: goto label_18c5f0;
        case 0x18c5f4u: goto label_18c5f4;
        case 0x18c5f8u: goto label_18c5f8;
        case 0x18c5fcu: goto label_18c5fc;
        case 0x18c600u: goto label_18c600;
        case 0x18c604u: goto label_18c604;
        case 0x18c608u: goto label_18c608;
        case 0x18c60cu: goto label_18c60c;
        case 0x18c610u: goto label_18c610;
        case 0x18c614u: goto label_18c614;
        case 0x18c618u: goto label_18c618;
        case 0x18c61cu: goto label_18c61c;
        case 0x18c620u: goto label_18c620;
        case 0x18c624u: goto label_18c624;
        case 0x18c628u: goto label_18c628;
        case 0x18c62cu: goto label_18c62c;
        case 0x18c630u: goto label_18c630;
        case 0x18c634u: goto label_18c634;
        case 0x18c638u: goto label_18c638;
        case 0x18c63cu: goto label_18c63c;
        case 0x18c640u: goto label_18c640;
        case 0x18c644u: goto label_18c644;
        case 0x18c648u: goto label_18c648;
        case 0x18c64cu: goto label_18c64c;
        case 0x18c650u: goto label_18c650;
        case 0x18c654u: goto label_18c654;
        case 0x18c658u: goto label_18c658;
        case 0x18c65cu: goto label_18c65c;
        case 0x18c660u: goto label_18c660;
        case 0x18c664u: goto label_18c664;
        case 0x18c668u: goto label_18c668;
        case 0x18c66cu: goto label_18c66c;
        case 0x18c670u: goto label_18c670;
        case 0x18c674u: goto label_18c674;
        case 0x18c678u: goto label_18c678;
        case 0x18c67cu: goto label_18c67c;
        case 0x18c680u: goto label_18c680;
        case 0x18c684u: goto label_18c684;
        case 0x18c688u: goto label_18c688;
        case 0x18c68cu: goto label_18c68c;
        case 0x18c690u: goto label_18c690;
        case 0x18c694u: goto label_18c694;
        case 0x18c698u: goto label_18c698;
        case 0x18c69cu: goto label_18c69c;
        case 0x18c6a0u: goto label_18c6a0;
        case 0x18c6a4u: goto label_18c6a4;
        case 0x18c6a8u: goto label_18c6a8;
        case 0x18c6acu: goto label_18c6ac;
        case 0x18c6b0u: goto label_18c6b0;
        case 0x18c6b4u: goto label_18c6b4;
        case 0x18c6b8u: goto label_18c6b8;
        case 0x18c6bcu: goto label_18c6bc;
        case 0x18c6c0u: goto label_18c6c0;
        case 0x18c6c4u: goto label_18c6c4;
        case 0x18c6c8u: goto label_18c6c8;
        case 0x18c6ccu: goto label_18c6cc;
        case 0x18c6d0u: goto label_18c6d0;
        case 0x18c6d4u: goto label_18c6d4;
        case 0x18c6d8u: goto label_18c6d8;
        case 0x18c6dcu: goto label_18c6dc;
        case 0x18c6e0u: goto label_18c6e0;
        case 0x18c6e4u: goto label_18c6e4;
        case 0x18c6e8u: goto label_18c6e8;
        case 0x18c6ecu: goto label_18c6ec;
        case 0x18c6f0u: goto label_18c6f0;
        case 0x18c6f4u: goto label_18c6f4;
        case 0x18c6f8u: goto label_18c6f8;
        case 0x18c6fcu: goto label_18c6fc;
        case 0x18c700u: goto label_18c700;
        case 0x18c704u: goto label_18c704;
        case 0x18c708u: goto label_18c708;
        case 0x18c70cu: goto label_18c70c;
        case 0x18c710u: goto label_18c710;
        case 0x18c714u: goto label_18c714;
        case 0x18c718u: goto label_18c718;
        case 0x18c71cu: goto label_18c71c;
        case 0x18c720u: goto label_18c720;
        case 0x18c724u: goto label_18c724;
        case 0x18c728u: goto label_18c728;
        case 0x18c72cu: goto label_18c72c;
        case 0x18c730u: goto label_18c730;
        case 0x18c734u: goto label_18c734;
        case 0x18c738u: goto label_18c738;
        case 0x18c73cu: goto label_18c73c;
        case 0x18c740u: goto label_18c740;
        case 0x18c744u: goto label_18c744;
        case 0x18c748u: goto label_18c748;
        case 0x18c74cu: goto label_18c74c;
        case 0x18c750u: goto label_18c750;
        case 0x18c754u: goto label_18c754;
        case 0x18c758u: goto label_18c758;
        case 0x18c75cu: goto label_18c75c;
        case 0x18c760u: goto label_18c760;
        case 0x18c764u: goto label_18c764;
        case 0x18c768u: goto label_18c768;
        case 0x18c76cu: goto label_18c76c;
        case 0x18c770u: goto label_18c770;
        case 0x18c774u: goto label_18c774;
        case 0x18c778u: goto label_18c778;
        case 0x18c77cu: goto label_18c77c;
        case 0x18c780u: goto label_18c780;
        case 0x18c784u: goto label_18c784;
        case 0x18c788u: goto label_18c788;
        case 0x18c78cu: goto label_18c78c;
        case 0x18c790u: goto label_18c790;
        case 0x18c794u: goto label_18c794;
        case 0x18c798u: goto label_18c798;
        case 0x18c79cu: goto label_18c79c;
        case 0x18c7a0u: goto label_18c7a0;
        case 0x18c7a4u: goto label_18c7a4;
        case 0x18c7a8u: goto label_18c7a8;
        case 0x18c7acu: goto label_18c7ac;
        case 0x18c7b0u: goto label_18c7b0;
        case 0x18c7b4u: goto label_18c7b4;
        case 0x18c7b8u: goto label_18c7b8;
        case 0x18c7bcu: goto label_18c7bc;
        case 0x18c7c0u: goto label_18c7c0;
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7c8u: goto label_18c7c8;
        case 0x18c7ccu: goto label_18c7cc;
        case 0x18c7d0u: goto label_18c7d0;
        case 0x18c7d4u: goto label_18c7d4;
        case 0x18c7d8u: goto label_18c7d8;
        case 0x18c7dcu: goto label_18c7dc;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c7e4u: goto label_18c7e4;
        case 0x18c7e8u: goto label_18c7e8;
        case 0x18c7ecu: goto label_18c7ec;
        case 0x18c7f0u: goto label_18c7f0;
        case 0x18c7f4u: goto label_18c7f4;
        case 0x18c7f8u: goto label_18c7f8;
        case 0x18c7fcu: goto label_18c7fc;
        case 0x18c800u: goto label_18c800;
        case 0x18c804u: goto label_18c804;
        case 0x18c808u: goto label_18c808;
        case 0x18c80cu: goto label_18c80c;
        case 0x18c810u: goto label_18c810;
        case 0x18c814u: goto label_18c814;
        case 0x18c818u: goto label_18c818;
        case 0x18c81cu: goto label_18c81c;
        case 0x18c820u: goto label_18c820;
        case 0x18c824u: goto label_18c824;
        case 0x18c828u: goto label_18c828;
        case 0x18c82cu: goto label_18c82c;
        case 0x18c830u: goto label_18c830;
        case 0x18c834u: goto label_18c834;
        case 0x18c838u: goto label_18c838;
        case 0x18c83cu: goto label_18c83c;
        case 0x18c840u: goto label_18c840;
        case 0x18c844u: goto label_18c844;
        case 0x18c848u: goto label_18c848;
        case 0x18c84cu: goto label_18c84c;
        case 0x18c850u: goto label_18c850;
        case 0x18c854u: goto label_18c854;
        case 0x18c858u: goto label_18c858;
        case 0x18c85cu: goto label_18c85c;
        case 0x18c860u: goto label_18c860;
        case 0x18c864u: goto label_18c864;
        case 0x18c868u: goto label_18c868;
        case 0x18c86cu: goto label_18c86c;
        case 0x18c870u: goto label_18c870;
        case 0x18c874u: goto label_18c874;
        case 0x18c878u: goto label_18c878;
        case 0x18c87cu: goto label_18c87c;
        case 0x18c880u: goto label_18c880;
        case 0x18c884u: goto label_18c884;
        case 0x18c888u: goto label_18c888;
        case 0x18c88cu: goto label_18c88c;
        case 0x18c890u: goto label_18c890;
        case 0x18c894u: goto label_18c894;
        case 0x18c898u: goto label_18c898;
        case 0x18c89cu: goto label_18c89c;
        case 0x18c8a0u: goto label_18c8a0;
        case 0x18c8a4u: goto label_18c8a4;
        case 0x18c8a8u: goto label_18c8a8;
        case 0x18c8acu: goto label_18c8ac;
        case 0x18c8b0u: goto label_18c8b0;
        case 0x18c8b4u: goto label_18c8b4;
        case 0x18c8b8u: goto label_18c8b8;
        case 0x18c8bcu: goto label_18c8bc;
        case 0x18c8c0u: goto label_18c8c0;
        case 0x18c8c4u: goto label_18c8c4;
        case 0x18c8c8u: goto label_18c8c8;
        case 0x18c8ccu: goto label_18c8cc;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8d4u: goto label_18c8d4;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c8dcu: goto label_18c8dc;
        case 0x18c8e0u: goto label_18c8e0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c8e8u: goto label_18c8e8;
        case 0x18c8ecu: goto label_18c8ec;
        case 0x18c8f0u: goto label_18c8f0;
        case 0x18c8f4u: goto label_18c8f4;
        case 0x18c8f8u: goto label_18c8f8;
        case 0x18c8fcu: goto label_18c8fc;
        case 0x18c900u: goto label_18c900;
        case 0x18c904u: goto label_18c904;
        case 0x18c908u: goto label_18c908;
        case 0x18c90cu: goto label_18c90c;
        case 0x18c910u: goto label_18c910;
        case 0x18c914u: goto label_18c914;
        default: break;
    }

    ctx->pc = 0x18c220u;

label_18c220:
    // 0x18c220: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_18c224:
    // 0x18c224: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x18c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_18c228:
    // 0x18c228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c22c:
    // 0x18c22c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x18c22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_18c230:
    // 0x18c230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18c234:
    // 0x18c234: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x18c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_18c238:
    // 0x18c238: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x18c238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_18c23c:
    // 0x18c23c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x18c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_18c240:
    // 0x18c240: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x18c240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_18c244:
    // 0x18c244: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18c248:
    // 0x18c248: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18c248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_18c24c:
    // 0x18c24c: 0xc0f6a96  jal         func_3DAA58
label_18c250:
    if (ctx->pc == 0x18C250u) {
        ctx->pc = 0x18C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C24Cu;
        // 0x18c250: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C254u;
        goto label_18c254;
    }
    ctx->pc = 0x18C24Cu;
    SET_GPR_U32(ctx, 31, 0x18C254u);
    ctx->pc = 0x18C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C24Cu;
    // 0x18c250: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C24Cu, 0x18C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C254u;
label_18c254:
    // 0x18c254: 0xc061a12  jal         func_186848
label_18c258:
    if (ctx->pc == 0x18C258u) {
        ctx->pc = 0x18C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C254u;
        // 0x18c258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C25Cu;
        goto label_18c25c;
    }
    ctx->pc = 0x18C254u;
    SET_GPR_U32(ctx, 31, 0x18C25Cu);
    ctx->pc = 0x18C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C254u;
    // 0x18c258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C254u, 0x18C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C25Cu;
label_18c25c:
    // 0x18c25c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x18c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_18c260:
    // 0x18c260: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x18c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_18c264:
    // 0x18c264: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x18c264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_18c268:
    // 0x18c268: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18c268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c26c:
    // 0x18c26c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18c26cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18c270:
    // 0x18c270: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18c270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_18c274:
    // 0x18c274: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x18c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18c278:
    // 0x18c278: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18c27c:
    // 0x18c27c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x18c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c280:
    // 0x18c280: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c284:
    // 0x18c284: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x18c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_18c288:
    // 0x18c288: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18c288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18c28c:
    // 0x18c28c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18c28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_18c290:
    // 0x18c290: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18c290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_18c294:
    // 0x18c294: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x18c294u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_18c298:
    // 0x18c298: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x18c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18c29c:
    // 0x18c29c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18c2a0:
    // 0x18c2a0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x18c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_18c2a4:
    // 0x18c2a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18c2a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_18c2a8:
    // 0x18c2a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18c2a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_18c2ac:
    // 0x18c2ac: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x18c2acu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_18c2b0:
    // 0x18c2b0: 0x46140504  c1          0x140504
    ctx->pc = 0x18c2b0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_18c2b4:
    // 0x18c2b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18c2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c2b8:
    // 0x18c2b8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18c2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18c2bc:
    // 0x18c2bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18c2bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18c2c0:
    // 0x18c2c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18c2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18c2c4:
    // 0x18c2c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18c2c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_18c2c8:
    // 0x18c2c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c2c8u;
    // VWAITQ (Q already resolved in this runtime)
label_18c2cc:
    // 0x18c2cc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18c2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18c2d0:
    // 0x18c2d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_18c2d4:
    // 0x18c2d4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_18c2d8:
    // 0x18c2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c2dc:
    // 0x18c2dc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_18c2e0:
    if (ctx->pc == 0x18C2E0u) {
        ctx->pc = 0x18C2E4u;
        goto label_18c2e4;
    }
    ctx->pc = 0x18C2DCu;
    {
        const bool branch_taken_0x18c2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c2dc) {
            ctx->pc = 0x18C2F8u;
            goto label_18c2f8;
        }
    }
    ctx->pc = 0x18C2E4u;
label_18c2e4:
    // 0x18c2e4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x18c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_18c2e8:
    // 0x18c2e8: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x18c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_18c2ec:
    // 0x18c2ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_18c2f0:
    // 0x18c2f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_18c2f4:
    if (ctx->pc == 0x18C2F4u) {
        ctx->pc = 0x18C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F0u;
        // 0x18c2f4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C2F8u;
        goto label_18c2f8;
    }
    ctx->pc = 0x18C2F0u;
    {
        const bool branch_taken_0x18c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F0u;
        // 0x18c2f4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f0) {
            ctx->pc = 0x18C31Cu;
            goto label_18c31c;
        }
    }
    ctx->pc = 0x18C2F8u;
label_18c2f8:
    // 0x18c2f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_18c2fc:
    if (ctx->pc == 0x18C2FCu) {
        ctx->pc = 0x18C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F8u;
        // 0x18c2fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C300u;
        goto label_18c300;
    }
    ctx->pc = 0x18C2F8u;
    {
        const bool branch_taken_0x18c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F8u;
        // 0x18c2fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f8) {
            ctx->pc = 0x18C314u;
            goto label_18c314;
        }
    }
    ctx->pc = 0x18C300u;
label_18c300:
    // 0x18c300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18c304:
    // 0x18c304: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18c308:
    if (ctx->pc == 0x18C308u) {
        ctx->pc = 0x18C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C304u;
        // 0x18c308: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C30Cu;
        goto label_18c30c;
    }
    ctx->pc = 0x18C304u;
    {
        const bool branch_taken_0x18c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C304u;
        // 0x18c308: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c304) {
            ctx->pc = 0x18C314u;
            goto label_18c314;
        }
    }
    ctx->pc = 0x18C30Cu;
label_18c30c:
    // 0x18c30c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18c310:
    if (ctx->pc == 0x18C310u) {
        ctx->pc = 0x18C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C30Cu;
        // 0x18c310: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C314u;
        goto label_18c314;
    }
    ctx->pc = 0x18C30Cu;
    {
        const bool branch_taken_0x18c30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C30Cu;
        // 0x18c310: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c30c) {
            ctx->pc = 0x18C31Cu;
            goto label_18c31c;
        }
    }
    ctx->pc = 0x18C314u;
label_18c314:
    // 0x18c314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c318:
    // 0x18c318: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18c318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c31c:
    // 0x18c31c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18c320:
    if (ctx->pc == 0x18C320u) {
        ctx->pc = 0x18C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C31Cu;
        // 0x18c320: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C324u;
        goto label_18c324;
    }
    ctx->pc = 0x18C31Cu;
    {
        const bool branch_taken_0x18c31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C31Cu;
        // 0x18c320: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c31c) {
            ctx->pc = 0x18C358u;
            goto label_18c358;
        }
    }
    ctx->pc = 0x18C324u;
label_18c324:
    // 0x18c324: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18c328:
    // 0x18c328: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18c32c:
    if (ctx->pc == 0x18C32Cu) {
        ctx->pc = 0x18C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C328u;
        // 0x18c32c: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C330u;
        goto label_18c330;
    }
    ctx->pc = 0x18C328u;
    {
        const bool branch_taken_0x18c328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C328u;
        // 0x18c32c: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c328) {
            ctx->pc = 0x18C344u;
            goto label_18c344;
        }
    }
    ctx->pc = 0x18C330u;
label_18c330:
    // 0x18c330: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_18c334:
    // 0x18c334: 0xc06fb64  jal         func_1BED90
label_18c338:
    if (ctx->pc == 0x18C338u) {
        ctx->pc = 0x18C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C334u;
        // 0x18c338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C33Cu;
        goto label_18c33c;
    }
    ctx->pc = 0x18C334u;
    SET_GPR_U32(ctx, 31, 0x18C33Cu);
    ctx->pc = 0x18C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C334u;
    // 0x18c338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18C334u, 0x18C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C33Cu;
label_18c33c:
    // 0x18c33c: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c340:
    if (ctx->pc == 0x18C340u) {
        ctx->pc = 0x18C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C33Cu;
        // 0x18c340: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C344u;
        goto label_18c344;
    }
    ctx->pc = 0x18C33Cu;
    {
        const bool branch_taken_0x18c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C33Cu;
        // 0x18c340: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c33c) {
            ctx->pc = 0x18C35Cu;
            goto label_18c35c;
        }
    }
    ctx->pc = 0x18C344u;
label_18c344:
    // 0x18c344: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_18c348:
    if (ctx->pc == 0x18C348u) {
        ctx->pc = 0x18C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C344u;
        // 0x18c348: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C34Cu;
        goto label_18c34c;
    }
    ctx->pc = 0x18C344u;
    {
        const bool branch_taken_0x18c344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C344u;
        // 0x18c348: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c344) {
            ctx->pc = 0x18C35Cu;
            goto label_18c35c;
        }
    }
    ctx->pc = 0x18C34Cu;
label_18c34c:
    // 0x18c34c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x18c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_18c350:
    // 0x18c350: 0xc06fb1e  jal         func_1BEC78
label_18c354:
    if (ctx->pc == 0x18C354u) {
        ctx->pc = 0x18C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C350u;
        // 0x18c354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C358u;
        goto label_18c358;
    }
    ctx->pc = 0x18C350u;
    SET_GPR_U32(ctx, 31, 0x18C358u);
    ctx->pc = 0x18C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C350u;
    // 0x18c354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x18C350u, 0x18C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C358u;
label_18c358:
    // 0x18c358: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x18c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_18c35c:
    // 0x18c35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c360:
    // 0x18c360: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x18c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18c364:
    // 0x18c364: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_18c368:
    if (ctx->pc == 0x18C368u) {
        ctx->pc = 0x18C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C364u;
        // 0x18c368: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C36Cu;
        goto label_18c36c;
    }
    ctx->pc = 0x18C364u;
    {
        const bool branch_taken_0x18c364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C364u;
        // 0x18c368: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c364) {
            ctx->pc = 0x18C380u;
            goto label_18c380;
        }
    }
    ctx->pc = 0x18C36Cu;
label_18c36c:
    // 0x18c36c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x18c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18c370:
    // 0x18c370: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_18c374:
    // 0x18c374: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_18c378:
    // 0x18c378: 0x1000000a  b           . + 4 + (0xA << 2)
label_18c37c:
    if (ctx->pc == 0x18C37Cu) {
        ctx->pc = 0x18C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C378u;
        // 0x18c37c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C380u;
        goto label_18c380;
    }
    ctx->pc = 0x18C378u;
    {
        const bool branch_taken_0x18c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C378u;
        // 0x18c37c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c378) {
            ctx->pc = 0x18C3A4u;
            goto label_18c3a4;
        }
    }
    ctx->pc = 0x18C380u;
label_18c380:
    // 0x18c380: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_18c384:
    if (ctx->pc == 0x18C384u) {
        ctx->pc = 0x18C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C380u;
        // 0x18c384: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C388u;
        goto label_18c388;
    }
    ctx->pc = 0x18C380u;
    {
        const bool branch_taken_0x18c380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C380u;
        // 0x18c384: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c380) {
            ctx->pc = 0x18C39Cu;
            goto label_18c39c;
        }
    }
    ctx->pc = 0x18C388u;
label_18c388:
    // 0x18c388: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18c38c:
    // 0x18c38c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_18c390:
    if (ctx->pc == 0x18C390u) {
        ctx->pc = 0x18C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C38Cu;
        // 0x18c390: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C394u;
        goto label_18c394;
    }
    ctx->pc = 0x18C38Cu;
    {
        const bool branch_taken_0x18c38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C38Cu;
        // 0x18c390: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c38c) {
            ctx->pc = 0x18C39Cu;
            goto label_18c39c;
        }
    }
    ctx->pc = 0x18C394u;
label_18c394:
    // 0x18c394: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_18c398:
    if (ctx->pc == 0x18C398u) {
        ctx->pc = 0x18C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C394u;
        // 0x18c398: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C39Cu;
        goto label_18c39c;
    }
    ctx->pc = 0x18C394u;
    {
        const bool branch_taken_0x18c394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C394u;
        // 0x18c398: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c394) {
            ctx->pc = 0x18C3A4u;
            goto label_18c3a4;
        }
    }
    ctx->pc = 0x18C39Cu;
label_18c39c:
    // 0x18c39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c3a0:
    // 0x18c3a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18c3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18c3a4:
    // 0x18c3a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18c3a8:
    if (ctx->pc == 0x18C3A8u) {
        ctx->pc = 0x18C3ACu;
        goto label_18c3ac;
    }
    ctx->pc = 0x18C3A4u;
    {
        const bool branch_taken_0x18c3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3a4) {
            ctx->pc = 0x18C3E0u;
            goto label_18c3e0;
        }
    }
    ctx->pc = 0x18C3ACu;
label_18c3ac:
    // 0x18c3ac: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x18c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18c3b0:
    // 0x18c3b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18c3b4:
    if (ctx->pc == 0x18C3B4u) {
        ctx->pc = 0x18C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3B0u;
        // 0x18c3b4: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3B8u;
        goto label_18c3b8;
    }
    ctx->pc = 0x18C3B0u;
    {
        const bool branch_taken_0x18c3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3B0u;
        // 0x18c3b4: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3b0) {
            ctx->pc = 0x18C3CCu;
            goto label_18c3cc;
        }
    }
    ctx->pc = 0x18C3B8u;
label_18c3b8:
    // 0x18c3b8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x18c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18c3bc:
    // 0x18c3bc: 0xc06fb64  jal         func_1BED90
label_18c3c0:
    if (ctx->pc == 0x18C3C0u) {
        ctx->pc = 0x18C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3BCu;
        // 0x18c3c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3C4u;
        goto label_18c3c4;
    }
    ctx->pc = 0x18C3BCu;
    SET_GPR_U32(ctx, 31, 0x18C3C4u);
    ctx->pc = 0x18C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3BCu;
    // 0x18c3c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18C3BCu, 0x18C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3C4u;
label_18c3c4:
    // 0x18c3c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_18c3c8:
    if (ctx->pc == 0x18C3C8u) {
        ctx->pc = 0x18C3CCu;
        goto label_18c3cc;
    }
    ctx->pc = 0x18C3C4u;
    {
        const bool branch_taken_0x18c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3c4) {
            ctx->pc = 0x18C3E0u;
            goto label_18c3e0;
        }
    }
    ctx->pc = 0x18C3CCu;
label_18c3cc:
    // 0x18c3cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18c3d0:
    if (ctx->pc == 0x18C3D0u) {
        ctx->pc = 0x18C3D4u;
        goto label_18c3d4;
    }
    ctx->pc = 0x18C3CCu;
    {
        const bool branch_taken_0x18c3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c3cc) {
            ctx->pc = 0x18C3E0u;
            goto label_18c3e0;
        }
    }
    ctx->pc = 0x18C3D4u;
label_18c3d4:
    // 0x18c3d4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18c3d8:
    // 0x18c3d8: 0xc06fb1e  jal         func_1BEC78
label_18c3dc:
    if (ctx->pc == 0x18C3DCu) {
        ctx->pc = 0x18C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3D8u;
        // 0x18c3dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3E0u;
        goto label_18c3e0;
    }
    ctx->pc = 0x18C3D8u;
    SET_GPR_U32(ctx, 31, 0x18C3E0u);
    ctx->pc = 0x18C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3D8u;
    // 0x18c3dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x18C3D8u, 0x18C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3E0u;
label_18c3e0:
    // 0x18c3e0: 0xc061a1e  jal         func_186878
label_18c3e4:
    if (ctx->pc == 0x18C3E4u) {
        ctx->pc = 0x18C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3E0u;
        // 0x18c3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3E8u;
        goto label_18c3e8;
    }
    ctx->pc = 0x18C3E0u;
    SET_GPR_U32(ctx, 31, 0x18C3E8u);
    ctx->pc = 0x18C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3E0u;
    // 0x18c3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18C3E0u, 0x18C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3E8u;
label_18c3e8:
    // 0x18c3e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c3ec:
    // 0x18c3ec: 0xc06cdea  jal         func_1B37A8
label_18c3f0:
    if (ctx->pc == 0x18C3F0u) {
        ctx->pc = 0x18C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3ECu;
        // 0x18c3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3F4u;
        goto label_18c3f4;
    }
    ctx->pc = 0x18C3ECu;
    SET_GPR_U32(ctx, 31, 0x18C3F4u);
    ctx->pc = 0x18C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3ECu;
    // 0x18c3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x18C3ECu, 0x18C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3F4u;
label_18c3f4:
    // 0x18c3f4: 0xc061a1e  jal         func_186878
label_18c3f8:
    if (ctx->pc == 0x18C3F8u) {
        ctx->pc = 0x18C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3F4u;
        // 0x18c3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3FCu;
        goto label_18c3fc;
    }
    ctx->pc = 0x18C3F4u;
    SET_GPR_U32(ctx, 31, 0x18C3FCu);
    ctx->pc = 0x18C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3F4u;
    // 0x18c3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18C3F4u, 0x18C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3FCu;
label_18c3fc:
    // 0x18c3fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c400:
    // 0x18c400: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18c400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18c404:
    // 0x18c404: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c408:
    // 0x18c408: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x18c408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
label_18c40c:
    // 0x18c40c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_18c410:
    // 0x18c410: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x18c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c414:
    // 0x18c414: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x18c414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18c418:
    // 0x18c418: 0x10400134  beqz        $v0, . + 4 + (0x134 << 2)
label_18c41c:
    if (ctx->pc == 0x18C41Cu) {
        ctx->pc = 0x18C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C418u;
        // 0x18c41c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C420u;
        goto label_18c420;
    }
    ctx->pc = 0x18C418u;
    {
        const bool branch_taken_0x18c418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C418u;
        // 0x18c41c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c418) {
            ctx->pc = 0x18C8ECu;
            goto label_18c8ec;
        }
    }
    ctx->pc = 0x18C420u;
label_18c420:
    // 0x18c420: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x18c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_18c424:
    // 0x18c424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18c428:
    // 0x18c428: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x18c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
label_18c42c:
    // 0x18c42c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18c430:
    // 0x18c430: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18c430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18c434:
    // 0x18c434: 0x800008  jr          $a0
label_18c438:
    if (ctx->pc == 0x18C438u) {
        ctx->pc = 0x18C43Cu;
        goto label_18c43c;
    }
    ctx->pc = 0x18C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C43Cu: goto label_18c43c;
            case 0x18C788u: goto label_18c788;
            case 0x18C7ECu: goto label_18c7ec;
            case 0x18C888u: goto label_18c888;
            case 0x18C8ECu: goto label_18c8ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C434u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18C43Cu;
label_18c43c:
    // 0x18c43c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x18c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c440:
    // 0x18c440: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18c440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c444:
    // 0x18c444: 0x0  nop
    ctx->pc = 0x18c444u;
    // NOP
label_18c448:
    // 0x18c448: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_18c44c:
    if (ctx->pc == 0x18C44Cu) {
        ctx->pc = 0x18C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C448u;
        // 0x18c44c: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C450u;
        goto label_18c450;
    }
    ctx->pc = 0x18C448u;
    {
        const bool branch_taken_0x18c448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C448u;
        // 0x18c44c: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c448) {
            ctx->pc = 0x18C514u;
            goto label_18c514;
        }
    }
    ctx->pc = 0x18C450u;
label_18c450:
    // 0x18c450: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x18c450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_18c454:
    // 0x18c454: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18c454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18c458:
    // 0x18c458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c45c:
    // 0x18c45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c460:
    // 0x18c460: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x18c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18c464:
    // 0x18c464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18c464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18c468:
    // 0x18c468: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x18c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_18c46c:
    // 0x18c46c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x18c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c470:
    // 0x18c470: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x18c470u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_18c474:
    // 0x18c474: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18c474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18c478:
    // 0x18c478: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x18c478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18c47c:
    // 0x18c47c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x18c47cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_18c480:
    // 0x18c480: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x18c480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18c484:
    // 0x18c484: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x18c484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_18c488:
    // 0x18c488: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x18c488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_18c48c:
    // 0x18c48c: 0xc061a12  jal         func_186848
label_18c490:
    if (ctx->pc == 0x18C490u) {
        ctx->pc = 0x18C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C48Cu;
        // 0x18c490: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C494u;
        goto label_18c494;
    }
    ctx->pc = 0x18C48Cu;
    SET_GPR_U32(ctx, 31, 0x18C494u);
    ctx->pc = 0x18C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C48Cu;
    // 0x18c490: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C48Cu, 0x18C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C494u;
label_18c494:
    // 0x18c494: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x18c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_18c498:
    // 0x18c498: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18c49c:
    // 0x18c49c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18c49cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c4a0:
    // 0x18c4a0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x18c4a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18c4a4:
    // 0x18c4a4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18c4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18c4a8:
    // 0x18c4a8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18c4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_18c4ac:
    // 0x18c4ac: 0xc061a12  jal         func_186848
label_18c4b0:
    if (ctx->pc == 0x18C4B0u) {
        ctx->pc = 0x18C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4ACu;
        // 0x18c4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4B4u;
        goto label_18c4b4;
    }
    ctx->pc = 0x18C4ACu;
    SET_GPR_U32(ctx, 31, 0x18C4B4u);
    ctx->pc = 0x18C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4ACu;
    // 0x18c4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C4ACu, 0x18C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4B4u;
label_18c4b4:
    // 0x18c4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c4b8:
    // 0x18c4b8: 0xc0707ac  jal         func_1C1EB0
label_18c4bc:
    if (ctx->pc == 0x18C4BCu) {
        ctx->pc = 0x18C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4B8u;
        // 0x18c4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4C0u;
        goto label_18c4c0;
    }
    ctx->pc = 0x18C4B8u;
    SET_GPR_U32(ctx, 31, 0x18C4C0u);
    ctx->pc = 0x18C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4B8u;
    // 0x18c4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EB0u, 0x18C4B8u, 0x18C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4C0u;
label_18c4c0:
    // 0x18c4c0: 0xc061a12  jal         func_186848
label_18c4c4:
    if (ctx->pc == 0x18C4C4u) {
        ctx->pc = 0x18C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4C0u;
        // 0x18c4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4C8u;
        goto label_18c4c8;
    }
    ctx->pc = 0x18C4C0u;
    SET_GPR_U32(ctx, 31, 0x18C4C8u);
    ctx->pc = 0x18C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4C0u;
    // 0x18c4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C4C0u, 0x18C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4C8u;
label_18c4c8:
    // 0x18c4c8: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x18c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_18c4cc:
    // 0x18c4cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_18c4d0:
    if (ctx->pc == 0x18C4D0u) {
        ctx->pc = 0x18C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4CCu;
        // 0x18c4d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4D4u;
        goto label_18c4d4;
    }
    ctx->pc = 0x18C4CCu;
    {
        const bool branch_taken_0x18c4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4CCu;
        // 0x18c4d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4cc) {
            ctx->pc = 0x18C4E8u;
            goto label_18c4e8;
        }
    }
    ctx->pc = 0x18C4D4u;
label_18c4d4:
    // 0x18c4d4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18c4d8:
    // 0x18c4d8: 0x4410090  bgez        $v0, . + 4 + (0x90 << 2)
label_18c4dc:
    if (ctx->pc == 0x18C4DCu) {
        ctx->pc = 0x18C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4D8u;
        // 0x18c4dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4E0u;
        goto label_18c4e0;
    }
    ctx->pc = 0x18C4D8u;
    {
        const bool branch_taken_0x18c4d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4D8u;
        // 0x18c4dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4d8) {
            ctx->pc = 0x18C71Cu;
            goto label_18c71c;
        }
    }
    ctx->pc = 0x18C4E0u;
label_18c4e0:
    // 0x18c4e0: 0x10000094  b           . + 4 + (0x94 << 2)
label_18c4e4:
    if (ctx->pc == 0x18C4E4u) {
        ctx->pc = 0x18C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4E0u;
        // 0x18c4e4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4E8u;
        goto label_18c4e8;
    }
    ctx->pc = 0x18C4E0u;
    {
        const bool branch_taken_0x18c4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4E0u;
        // 0x18c4e4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4e0) {
            ctx->pc = 0x18C734u;
            goto label_18c734;
        }
    }
    ctx->pc = 0x18C4E8u;
label_18c4e8:
    // 0x18c4e8: 0xc061a12  jal         func_186848
label_18c4ec:
    if (ctx->pc == 0x18C4ECu) {
        ctx->pc = 0x18C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4E8u;
        // 0x18c4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4F0u;
        goto label_18c4f0;
    }
    ctx->pc = 0x18C4E8u;
    SET_GPR_U32(ctx, 31, 0x18C4F0u);
    ctx->pc = 0x18C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4E8u;
    // 0x18c4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C4E8u, 0x18C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4F0u;
label_18c4f0:
    // 0x18c4f0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18c4f4:
    // 0x18c4f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c4f8:
    // 0x18c4f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18c4fc:
    // 0x18c4fc: 0x40f809  jalr        $v0
label_18c500:
    if (ctx->pc == 0x18C500u) {
        ctx->pc = 0x18C504u;
        goto label_18c504;
    }
    ctx->pc = 0x18C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C504u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4FCu, 0x18C504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C504u;
label_18c504:
    // 0x18c504: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
label_18c508:
    if (ctx->pc == 0x18C508u) {
        ctx->pc = 0x18C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C504u;
        // 0x18c508: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C50Cu;
        goto label_18c50c;
    }
    ctx->pc = 0x18C504u;
    {
        const bool branch_taken_0x18c504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C504u;
        // 0x18c508: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c504) {
            ctx->pc = 0x18C8ECu;
            goto label_18c8ec;
        }
    }
    ctx->pc = 0x18C50Cu;
label_18c50c:
    // 0x18c50c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_18c510:
    if (ctx->pc == 0x18C510u) {
        ctx->pc = 0x18C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C50Cu;
        // 0x18c510: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C514u;
        goto label_18c514;
    }
    ctx->pc = 0x18C50Cu;
    {
        const bool branch_taken_0x18c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C50Cu;
        // 0x18c510: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c50c) {
            ctx->pc = 0x18C8ECu;
            goto label_18c8ec;
        }
    }
    ctx->pc = 0x18C514u;
label_18c514:
    // 0x18c514: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x18c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c518:
    // 0x18c518: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18c518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c51c:
    // 0x18c51c: 0x0  nop
    ctx->pc = 0x18c51cu;
    // NOP
label_18c520:
    // 0x18c520: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18c524:
    if (ctx->pc == 0x18C524u) {
        ctx->pc = 0x18C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C520u;
        // 0x18c524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C528u;
        goto label_18c528;
    }
    ctx->pc = 0x18C520u;
    {
        const bool branch_taken_0x18c520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C520u;
        // 0x18c524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c520) {
            ctx->pc = 0x18C540u;
            goto label_18c540;
        }
    }
    ctx->pc = 0x18C528u;
label_18c528:
    // 0x18c528: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x18c528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_18c52c:
    // 0x18c52c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18c52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18c530:
    // 0x18c530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c534:
    // 0x18c534: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x18c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18c538:
    // 0x18c538: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_18c53c:
    if (ctx->pc == 0x18C53Cu) {
        ctx->pc = 0x18C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C538u;
        // 0x18c53c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C540u;
        goto label_18c540;
    }
    ctx->pc = 0x18C538u;
    {
        const bool branch_taken_0x18c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C538u;
        // 0x18c53c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c538) {
            ctx->pc = 0x18C468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c468;
        }
    }
    ctx->pc = 0x18C540u;
label_18c540:
    // 0x18c540: 0xc061a12  jal         func_186848
label_18c544:
    if (ctx->pc == 0x18C544u) {
        ctx->pc = 0x18C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C540u;
        // 0x18c544: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C548u;
        goto label_18c548;
    }
    ctx->pc = 0x18C540u;
    SET_GPR_U32(ctx, 31, 0x18C548u);
    ctx->pc = 0x18C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C540u;
    // 0x18c544: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C540u, 0x18C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C548u;
label_18c548:
    // 0x18c548: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c54c:
    // 0x18c54c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x18c54cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c550:
    // 0x18c550: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x18c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c554:
    // 0x18c554: 0x8e2700a8  lw          $a3, 0xA8($s1)
    ctx->pc = 0x18c554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_18c558:
    // 0x18c558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c55c:
    // 0x18c55c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18c55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c560:
    // 0x18c560: 0xc070b88  jal         func_1C2E20
label_18c564:
    if (ctx->pc == 0x18C564u) {
        ctx->pc = 0x18C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C560u;
        // 0x18c564: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C568u;
        goto label_18c568;
    }
    ctx->pc = 0x18C560u;
    SET_GPR_U32(ctx, 31, 0x18C568u);
    ctx->pc = 0x18C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C560u;
    // 0x18c564: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E20u, 0x18C560u, 0x18C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C568u;
label_18c568:
    // 0x18c568: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_18c56c:
    if (ctx->pc == 0x18C56Cu) {
        ctx->pc = 0x18C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C568u;
        // 0x18c56c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C570u;
        goto label_18c570;
    }
    ctx->pc = 0x18C568u;
    {
        const bool branch_taken_0x18c568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C568u;
        // 0x18c56c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c568) {
            ctx->pc = 0x18C658u;
            goto label_18c658;
        }
    }
    ctx->pc = 0x18C570u;
label_18c570:
    // 0x18c570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18c574:
    if (ctx->pc == 0x18C574u) {
        ctx->pc = 0x18C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C570u;
        // 0x18c574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C578u;
        goto label_18c578;
    }
    ctx->pc = 0x18C570u;
    {
        const bool branch_taken_0x18c570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C570u;
        // 0x18c574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c570) {
            ctx->pc = 0x18C580u;
            goto label_18c580;
        }
    }
    ctx->pc = 0x18C578u;
label_18c578:
    // 0x18c578: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_18c57c:
    // 0x18c57c: 0x8c5200c4  lw          $s2, 0xC4($v0)
    ctx->pc = 0x18c57cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_18c580:
    // 0x18c580: 0xc061a1a  jal         func_186868
label_18c584:
    if (ctx->pc == 0x18C584u) {
        ctx->pc = 0x18C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C580u;
        // 0x18c584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C588u;
        goto label_18c588;
    }
    ctx->pc = 0x18C580u;
    SET_GPR_U32(ctx, 31, 0x18C588u);
    ctx->pc = 0x18C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C580u;
    // 0x18c584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18C580u, 0x18C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C588u;
label_18c588:
    // 0x18c588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c58c:
    // 0x18c58c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18c58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c590:
    // 0x18c590: 0xc0725e0  jal         func_1C9780
label_18c594:
    if (ctx->pc == 0x18C594u) {
        ctx->pc = 0x18C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C590u;
        // 0x18c594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C598u;
        goto label_18c598;
    }
    ctx->pc = 0x18C590u;
    SET_GPR_U32(ctx, 31, 0x18C598u);
    ctx->pc = 0x18C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C590u;
    // 0x18c594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x18C590u, 0x18C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C598u;
label_18c598:
    // 0x18c598: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18c598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18c59c:
    // 0x18c59c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18c59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c5a0:
    // 0x18c5a0: 0xc0952de  jal         func_254B78
label_18c5a4:
    if (ctx->pc == 0x18C5A4u) {
        ctx->pc = 0x18C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5A0u;
        // 0x18c5a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5A8u;
        goto label_18c5a8;
    }
    ctx->pc = 0x18C5A0u;
    SET_GPR_U32(ctx, 31, 0x18C5A8u);
    ctx->pc = 0x18C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5A0u;
    // 0x18c5a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x18C5A0u, 0x18C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5A8u;
label_18c5a8:
    // 0x18c5a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_18c5ac:
    if (ctx->pc == 0x18C5ACu) {
        ctx->pc = 0x18C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5A8u;
        // 0x18c5ac: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5B0u;
        goto label_18c5b0;
    }
    ctx->pc = 0x18C5A8u;
    {
        const bool branch_taken_0x18c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5a8) {
            ctx->pc = 0x18C5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5A8u;
            // 0x18c5ac: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5BCu;
            goto label_18c5bc;
        }
    }
    ctx->pc = 0x18C5B0u;
label_18c5b0:
    // 0x18c5b0: 0x12400073  beqz        $s2, . + 4 + (0x73 << 2)
label_18c5b4:
    if (ctx->pc == 0x18C5B4u) {
        ctx->pc = 0x18C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5B0u;
        // 0x18c5b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5B8u;
        goto label_18c5b8;
    }
    ctx->pc = 0x18C5B0u;
    {
        const bool branch_taken_0x18c5b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5B0u;
        // 0x18c5b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5b0) {
            ctx->pc = 0x18C780u;
            goto label_18c780;
        }
    }
    ctx->pc = 0x18C5B8u;
label_18c5b8:
    // 0x18c5b8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x18c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18c5bc:
    // 0x18c5bc: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x18c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_18c5c0:
    // 0x18c5c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18c5c4:
    if (ctx->pc == 0x18C5C4u) {
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5C8u;
        goto label_18c5c8;
    }
    ctx->pc = 0x18C5C0u;
    {
        const bool branch_taken_0x18c5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c0) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5C8u;
label_18c5c8:
    // 0x18c5c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_18c5cc:
    if (ctx->pc == 0x18C5CCu) {
        ctx->pc = 0x18C5D0u;
        goto label_18c5d0;
    }
    ctx->pc = 0x18C5C8u;
    {
        const bool branch_taken_0x18c5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c5c8) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5D0u;
label_18c5d0:
    // 0x18c5d0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x18c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18c5d4:
    // 0x18c5d4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
label_18c5d8:
    if (ctx->pc == 0x18C5D8u) {
        ctx->pc = 0x18C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5D4u;
        // 0x18c5d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5DCu;
        goto label_18c5dc;
    }
    ctx->pc = 0x18C5D4u;
    {
        const bool branch_taken_0x18c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5D4u;
        // 0x18c5d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5d4) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5DCu;
label_18c5dc:
    // 0x18c5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c5e0:
    // 0x18c5e0: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_18c5e4:
    if (ctx->pc == 0x18C5E4u) {
        ctx->pc = 0x18C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E0u;
        // 0x18c5e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5E8u;
        goto label_18c5e8;
    }
    ctx->pc = 0x18C5E0u;
    {
        const bool branch_taken_0x18c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E0u;
        // 0x18c5e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5e0) {
            ctx->pc = 0x18C864u;
            goto label_18c864;
        }
    }
    ctx->pc = 0x18C5E8u;
label_18c5e8:
    // 0x18c5e8: 0xc06fb64  jal         func_1BED90
label_18c5ec:
    if (ctx->pc == 0x18C5ECu) {
        ctx->pc = 0x18C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5E8u;
        // 0x18c5ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5F0u;
        goto label_18c5f0;
    }
    ctx->pc = 0x18C5E8u;
    SET_GPR_U32(ctx, 31, 0x18C5F0u);
    ctx->pc = 0x18C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5E8u;
    // 0x18c5ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18C5E8u, 0x18C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5F0u;
label_18c5f0:
    // 0x18c5f0: 0xc061a12  jal         func_186848
label_18c5f4:
    if (ctx->pc == 0x18C5F4u) {
        ctx->pc = 0x18C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F0u;
        // 0x18c5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5F8u;
        goto label_18c5f8;
    }
    ctx->pc = 0x18C5F0u;
    SET_GPR_U32(ctx, 31, 0x18C5F8u);
    ctx->pc = 0x18C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C5F0u;
    // 0x18c5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C5F0u, 0x18C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C5F8u;
label_18c5f8:
    // 0x18c5f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c5fc:
    // 0x18c5fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c600:
    // 0x18c600: 0xc0707e0  jal         func_1C1F80
label_18c604:
    if (ctx->pc == 0x18C604u) {
        ctx->pc = 0x18C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C600u;
        // 0x18c604: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C608u;
        goto label_18c608;
    }
    ctx->pc = 0x18C600u;
    SET_GPR_U32(ctx, 31, 0x18C608u);
    ctx->pc = 0x18C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C600u;
    // 0x18c604: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x18C600u, 0x18C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C608u;
label_18c608:
    // 0x18c608: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_18c60c:
    if (ctx->pc == 0x18C60Cu) {
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C610u;
        goto label_18c610;
    }
    ctx->pc = 0x18C608u;
    {
        const bool branch_taken_0x18c608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c608) {
            ctx->pc = 0x18C6D4u;
            goto label_18c6d4;
        }
    }
    ctx->pc = 0x18C610u;
label_18c610:
    // 0x18c610: 0xc061a12  jal         func_186848
label_18c614:
    if (ctx->pc == 0x18C614u) {
        ctx->pc = 0x18C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C610u;
        // 0x18c614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C618u;
        goto label_18c618;
    }
    ctx->pc = 0x18C610u;
    SET_GPR_U32(ctx, 31, 0x18C618u);
    ctx->pc = 0x18C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C610u;
    // 0x18c614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C610u, 0x18C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C618u;
label_18c618:
    // 0x18c618: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x18c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_18c61c:
    // 0x18c61c: 0x106000b4  beqz        $v1, . + 4 + (0xB4 << 2)
label_18c620:
    if (ctx->pc == 0x18C620u) {
        ctx->pc = 0x18C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C61Cu;
        // 0x18c620: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C624u;
        goto label_18c624;
    }
    ctx->pc = 0x18C61Cu;
    {
        const bool branch_taken_0x18c61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C61Cu;
        // 0x18c620: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c61c) {
            ctx->pc = 0x18C8F0u;
            goto label_18c8f0;
        }
    }
    ctx->pc = 0x18C624u;
label_18c624:
    // 0x18c624: 0xc061a12  jal         func_186848
label_18c628:
    if (ctx->pc == 0x18C628u) {
        ctx->pc = 0x18C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C624u;
        // 0x18c628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C62Cu;
        goto label_18c62c;
    }
    ctx->pc = 0x18C624u;
    SET_GPR_U32(ctx, 31, 0x18C62Cu);
    ctx->pc = 0x18C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C624u;
    // 0x18c628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C624u, 0x18C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C62Cu;
label_18c62c:
    // 0x18c62c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18c630:
    // 0x18c630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c634:
    // 0x18c634: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18c638:
    // 0x18c638: 0x40f809  jalr        $v0
label_18c63c:
    if (ctx->pc == 0x18C63Cu) {
        ctx->pc = 0x18C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C638u;
        // 0x18c63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C640u;
        goto label_18c640;
    }
    ctx->pc = 0x18C638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C640u);
        ctx->pc = 0x18C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C638u;
        // 0x18c63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C638u, 0x18C640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C640u;
label_18c640:
    // 0x18c640: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_18c644:
    // 0x18c644: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_18c648:
    // 0x18c648: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
label_18c64c:
    if (ctx->pc == 0x18C64Cu) {
        ctx->pc = 0x18C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C648u;
        // 0x18c64c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C650u;
        goto label_18c650;
    }
    ctx->pc = 0x18C648u;
    {
        const bool branch_taken_0x18c648 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C648u;
        // 0x18c64c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c648) {
            ctx->pc = 0x18C71Cu;
            goto label_18c71c;
        }
    }
    ctx->pc = 0x18C650u;
label_18c650:
    // 0x18c650: 0x10000038  b           . + 4 + (0x38 << 2)
label_18c654:
    if (ctx->pc == 0x18C654u) {
        ctx->pc = 0x18C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C650u;
        // 0x18c654: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C658u;
        goto label_18c658;
    }
    ctx->pc = 0x18C650u;
    {
        const bool branch_taken_0x18c650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C650u;
        // 0x18c654: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c650) {
            ctx->pc = 0x18C734u;
            goto label_18c734;
        }
    }
    ctx->pc = 0x18C658u;
label_18c658:
    // 0x18c658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18c65c:
    if (ctx->pc == 0x18C65Cu) {
        ctx->pc = 0x18C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C658u;
        // 0x18c65c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C660u;
        goto label_18c660;
    }
    ctx->pc = 0x18C658u;
    {
        const bool branch_taken_0x18c658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C658u;
        // 0x18c65c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c658) {
            ctx->pc = 0x18C668u;
            goto label_18c668;
        }
    }
    ctx->pc = 0x18C660u;
label_18c660:
    // 0x18c660: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_18c664:
    // 0x18c664: 0x8c5300c4  lw          $s3, 0xC4($v0)
    ctx->pc = 0x18c664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_18c668:
    // 0x18c668: 0xc061a1a  jal         func_186868
label_18c66c:
    if (ctx->pc == 0x18C66Cu) {
        ctx->pc = 0x18C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C668u;
        // 0x18c66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C670u;
        goto label_18c670;
    }
    ctx->pc = 0x18C668u;
    SET_GPR_U32(ctx, 31, 0x18C670u);
    ctx->pc = 0x18C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C668u;
    // 0x18c66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18C668u, 0x18C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C670u;
label_18c670:
    // 0x18c670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c674:
    // 0x18c674: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18c674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c678:
    // 0x18c678: 0xc0725e0  jal         func_1C9780
label_18c67c:
    if (ctx->pc == 0x18C67Cu) {
        ctx->pc = 0x18C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C678u;
        // 0x18c67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C680u;
        goto label_18c680;
    }
    ctx->pc = 0x18C678u;
    SET_GPR_U32(ctx, 31, 0x18C680u);
    ctx->pc = 0x18C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C678u;
    // 0x18c67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x18C678u, 0x18C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C680u;
label_18c680:
    // 0x18c680: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_18c684:
    if (ctx->pc == 0x18C684u) {
        ctx->pc = 0x18C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C680u;
        // 0x18c684: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C688u;
        goto label_18c688;
    }
    ctx->pc = 0x18C680u;
    {
        const bool branch_taken_0x18c680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C680u;
        // 0x18c684: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c680) {
            ctx->pc = 0x18C780u;
            goto label_18c780;
        }
    }
    ctx->pc = 0x18C688u;
label_18c688:
    // 0x18c688: 0xc061a12  jal         func_186848
label_18c68c:
    if (ctx->pc == 0x18C68Cu) {
        ctx->pc = 0x18C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C688u;
        // 0x18c68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C690u;
        goto label_18c690;
    }
    ctx->pc = 0x18C688u;
    SET_GPR_U32(ctx, 31, 0x18C690u);
    ctx->pc = 0x18C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C688u;
    // 0x18c68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C688u, 0x18C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C690u;
label_18c690:
    // 0x18c690: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18c690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_18c694:
    // 0x18c694: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18c694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c698:
    // 0x18c698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c69c:
    // 0x18c69c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18c69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18c6a0:
    // 0x18c6a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18c6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c6a4:
    // 0x18c6a4: 0xc070b88  jal         func_1C2E20
label_18c6a8:
    if (ctx->pc == 0x18C6A8u) {
        ctx->pc = 0x18C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6A4u;
        // 0x18c6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6ACu;
        goto label_18c6ac;
    }
    ctx->pc = 0x18C6A4u;
    SET_GPR_U32(ctx, 31, 0x18C6ACu);
    ctx->pc = 0x18C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6A4u;
    // 0x18c6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E20u, 0x18C6A4u, 0x18C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6ACu;
label_18c6ac:
    // 0x18c6ac: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_18c6b0:
    if (ctx->pc == 0x18C6B0u) {
        ctx->pc = 0x18C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6ACu;
        // 0x18c6b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6B4u;
        goto label_18c6b4;
    }
    ctx->pc = 0x18C6ACu;
    {
        const bool branch_taken_0x18c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6ACu;
        // 0x18c6b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6ac) {
            ctx->pc = 0x18C780u;
            goto label_18c780;
        }
    }
    ctx->pc = 0x18C6B4u;
label_18c6b4:
    // 0x18c6b4: 0xc061a12  jal         func_186848
label_18c6b8:
    if (ctx->pc == 0x18C6B8u) {
        ctx->pc = 0x18C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6B4u;
        // 0x18c6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6BCu;
        goto label_18c6bc;
    }
    ctx->pc = 0x18C6B4u;
    SET_GPR_U32(ctx, 31, 0x18C6BCu);
    ctx->pc = 0x18C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6B4u;
    // 0x18c6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C6B4u, 0x18C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6BCu;
label_18c6bc:
    // 0x18c6bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c6c0:
    // 0x18c6c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c6c4:
    // 0x18c6c4: 0xc0707e0  jal         func_1C1F80
label_18c6c8:
    if (ctx->pc == 0x18C6C8u) {
        ctx->pc = 0x18C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6C4u;
        // 0x18c6c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6CCu;
        goto label_18c6cc;
    }
    ctx->pc = 0x18C6C4u;
    SET_GPR_U32(ctx, 31, 0x18C6CCu);
    ctx->pc = 0x18C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6C4u;
    // 0x18c6c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x18C6C4u, 0x18C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6CCu;
label_18c6cc:
    // 0x18c6cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18c6d0:
    if (ctx->pc == 0x18C6D0u) {
        ctx->pc = 0x18C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6CCu;
        // 0x18c6d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6D4u;
        goto label_18c6d4;
    }
    ctx->pc = 0x18C6CCu;
    {
        const bool branch_taken_0x18c6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6CCu;
        // 0x18c6d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6cc) {
            ctx->pc = 0x18C6DCu;
            goto label_18c6dc;
        }
    }
    ctx->pc = 0x18C6D4u;
label_18c6d4:
    // 0x18c6d4: 0x10000085  b           . + 4 + (0x85 << 2)
label_18c6d8:
    if (ctx->pc == 0x18C6D8u) {
        ctx->pc = 0x18C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6D4u;
        // 0x18c6d8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6DCu;
        goto label_18c6dc;
    }
    ctx->pc = 0x18C6D4u;
    {
        const bool branch_taken_0x18c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6D4u;
        // 0x18c6d8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6d4) {
            ctx->pc = 0x18C8ECu;
            goto label_18c8ec;
        }
    }
    ctx->pc = 0x18C6DCu;
label_18c6dc:
    // 0x18c6dc: 0xc061a12  jal         func_186848
label_18c6e0:
    if (ctx->pc == 0x18C6E0u) {
        ctx->pc = 0x18C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6DCu;
        // 0x18c6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6E4u;
        goto label_18c6e4;
    }
    ctx->pc = 0x18C6DCu;
    SET_GPR_U32(ctx, 31, 0x18C6E4u);
    ctx->pc = 0x18C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6DCu;
    // 0x18c6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C6DCu, 0x18C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6E4u;
label_18c6e4:
    // 0x18c6e4: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x18c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_18c6e8:
    // 0x18c6e8: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
label_18c6ec:
    if (ctx->pc == 0x18C6ECu) {
        ctx->pc = 0x18C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6E8u;
        // 0x18c6ec: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6F0u;
        goto label_18c6f0;
    }
    ctx->pc = 0x18C6E8u;
    {
        const bool branch_taken_0x18c6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6E8u;
        // 0x18c6ec: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6e8) {
            ctx->pc = 0x18C8F0u;
            goto label_18c8f0;
        }
    }
    ctx->pc = 0x18C6F0u;
label_18c6f0:
    // 0x18c6f0: 0xc061a12  jal         func_186848
label_18c6f4:
    if (ctx->pc == 0x18C6F4u) {
        ctx->pc = 0x18C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6F0u;
        // 0x18c6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6F8u;
        goto label_18c6f8;
    }
    ctx->pc = 0x18C6F0u;
    SET_GPR_U32(ctx, 31, 0x18C6F8u);
    ctx->pc = 0x18C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C6F0u;
    // 0x18c6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C6F0u, 0x18C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6F8u;
label_18c6f8:
    // 0x18c6f8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18c6fc:
    // 0x18c6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c700:
    // 0x18c700: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18c704:
    // 0x18c704: 0x40f809  jalr        $v0
label_18c708:
    if (ctx->pc == 0x18C708u) {
        ctx->pc = 0x18C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C704u;
        // 0x18c708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C70Cu;
        goto label_18c70c;
    }
    ctx->pc = 0x18C704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C70Cu);
        ctx->pc = 0x18C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C704u;
        // 0x18c708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C704u, 0x18C70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C70Cu;
label_18c70c:
    // 0x18c70c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_18c710:
    // 0x18c710: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x18c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_18c714:
    // 0x18c714: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18c718:
    if (ctx->pc == 0x18C718u) {
        ctx->pc = 0x18C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C714u;
        // 0x18c718: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C71Cu;
        goto label_18c71c;
    }
    ctx->pc = 0x18C714u;
    {
        const bool branch_taken_0x18c714 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C714u;
        // 0x18c718: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c714) {
            ctx->pc = 0x18C730u;
            goto label_18c730;
        }
    }
    ctx->pc = 0x18C71Cu;
label_18c71c:
    // 0x18c71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c720:
    // 0x18c720: 0x0  nop
    ctx->pc = 0x18c720u;
    // NOP
label_18c724:
    // 0x18c724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18c728:
    // 0x18c728: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c72c:
    if (ctx->pc == 0x18C72Cu) {
        ctx->pc = 0x18C730u;
        goto label_18c730;
    }
    ctx->pc = 0x18C728u;
    {
        const bool branch_taken_0x18c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c728) {
            ctx->pc = 0x18C748u;
            goto label_18c748;
        }
    }
    ctx->pc = 0x18C730u;
label_18c730:
    // 0x18c730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c734:
    // 0x18c734: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18c738:
    // 0x18c738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c73c:
    // 0x18c73c: 0x0  nop
    ctx->pc = 0x18c73cu;
    // NOP
label_18c740:
    // 0x18c740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18c744:
    // 0x18c744: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18c744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18c748:
    // 0x18c748: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18c74c:
    // 0x18c74c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18c74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18c750:
    // 0x18c750: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18c750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18c754:
    // 0x18c754: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x18c754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_18c758:
    // 0x18c758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18c758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c75c:
    // 0x18c75c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18c75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_18c760:
    // 0x18c760: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18c760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18c764:
    // 0x18c764: 0xc0b12b0  jal         func_2C4AC0
label_18c768:
    if (ctx->pc == 0x18C768u) {
        ctx->pc = 0x18C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C764u;
        // 0x18c768: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C76Cu;
        goto label_18c76c;
    }
    ctx->pc = 0x18C764u;
    SET_GPR_U32(ctx, 31, 0x18C76Cu);
    ctx->pc = 0x18C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C764u;
    // 0x18c768: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x18C764u, 0x18C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C76Cu;
label_18c76c:
    // 0x18c76c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18c76cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18c770:
    // 0x18c770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c774:
    // 0x18c774: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18c774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_18c778:
    // 0x18c778: 0x1000005c  b           . + 4 + (0x5C << 2)
label_18c77c:
    if (ctx->pc == 0x18C77Cu) {
        ctx->pc = 0x18C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C778u;
        // 0x18c77c: 0xe63400a0  swc1        $f20, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C780u;
        goto label_18c780;
    }
    ctx->pc = 0x18C778u;
    {
        const bool branch_taken_0x18c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C778u;
        // 0x18c77c: 0xe63400a0  swc1        $f20, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c778) {
            ctx->pc = 0x18C8ECu;
            goto label_18c8ec;
        }
    }
    ctx->pc = 0x18C780u;
label_18c780:
    // 0x18c780: 0x1000005a  b           . + 4 + (0x5A << 2)
label_18c784:
    if (ctx->pc == 0x18C784u) {
        ctx->pc = 0x18C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C780u;
        // 0x18c784: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C788u;
        goto label_18c788;
    }
    ctx->pc = 0x18C780u;
    {
        const bool branch_taken_0x18c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C780u;
        // 0x18c784: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c780) {
            ctx->pc = 0x18C8ECu;
            goto label_18c8ec;
        }
    }
    ctx->pc = 0x18C788u;
label_18c788:
    // 0x18c788: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18c788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18c78c:
    // 0x18c78c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18c790:
    // 0x18c790: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18c794:
    if (ctx->pc == 0x18C794u) {
        ctx->pc = 0x18C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C790u;
        // 0x18c794: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C798u;
        goto label_18c798;
    }
    ctx->pc = 0x18C790u;
    {
        const bool branch_taken_0x18c790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C790u;
        // 0x18c794: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c790) {
            ctx->pc = 0x18C7ACu;
            goto label_18c7ac;
        }
    }
    ctx->pc = 0x18C798u;
label_18c798:
    // 0x18c798: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18c79c:
    // 0x18c79c: 0x0  nop
    ctx->pc = 0x18c79cu;
    // NOP
label_18c7a0:
    // 0x18c7a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18c7a4:
    // 0x18c7a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c7a8:
    if (ctx->pc == 0x18C7A8u) {
        ctx->pc = 0x18C7ACu;
        goto label_18c7ac;
    }
    ctx->pc = 0x18C7A4u;
    {
        const bool branch_taken_0x18c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c7a4) {
            ctx->pc = 0x18C7C4u;
            goto label_18c7c4;
        }
    }
    ctx->pc = 0x18C7ACu;
label_18c7ac:
    // 0x18c7ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c7b0:
    // 0x18c7b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18c7b4:
    // 0x18c7b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18c7b8:
    // 0x18c7b8: 0x0  nop
    ctx->pc = 0x18c7b8u;
    // NOP
label_18c7bc:
    // 0x18c7bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18c7c0:
    // 0x18c7c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18c7c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18c7c4:
    // 0x18c7c4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18c7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18c7c8:
    // 0x18c7c8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18c7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18c7cc:
    // 0x18c7cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c7d0:
    // 0x18c7d0: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x18c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c7d4:
    // 0x18c7d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18c7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18c7d8:
    // 0x18c7d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c7dc:
    // 0x18c7dc: 0x0  nop
    ctx->pc = 0x18c7dcu;
    // NOP
label_18c7e0:
    // 0x18c7e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18c7e4:
    if (ctx->pc == 0x18C7E4u) {
        ctx->pc = 0x18C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E0u;
        // 0x18c7e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7E8u;
        goto label_18c7e8;
    }
    ctx->pc = 0x18C7E0u;
    {
        const bool branch_taken_0x18c7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E0u;
        // 0x18c7e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7e0) {
            ctx->pc = 0x18C7ECu;
            goto label_18c7ec;
        }
    }
    ctx->pc = 0x18C7E8u;
label_18c7e8:
    // 0x18c7e8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_18c7ec:
    // 0x18c7ec: 0xc061a12  jal         func_186848
label_18c7f0:
    if (ctx->pc == 0x18C7F0u) {
        ctx->pc = 0x18C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7ECu;
        // 0x18c7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7F4u;
        goto label_18c7f4;
    }
    ctx->pc = 0x18C7ECu;
    SET_GPR_U32(ctx, 31, 0x18C7F4u);
    ctx->pc = 0x18C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7ECu;
    // 0x18c7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C7ECu, 0x18C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7F4u;
label_18c7f4:
    // 0x18c7f4: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x18c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c7f8:
    // 0x18c7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c7fc:
    // 0x18c7fc: 0x8e2700a8  lw          $a3, 0xA8($s1)
    ctx->pc = 0x18c7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_18c800:
    // 0x18c800: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_18c804:
    // 0x18c804: 0xc070b88  jal         func_1C2E20
label_18c808:
    if (ctx->pc == 0x18C808u) {
        ctx->pc = 0x18C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C804u;
        // 0x18c808: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C80Cu;
        goto label_18c80c;
    }
    ctx->pc = 0x18C804u;
    SET_GPR_U32(ctx, 31, 0x18C80Cu);
    ctx->pc = 0x18C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C804u;
    // 0x18c808: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E20u, 0x18C804u, 0x18C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C80Cu;
label_18c80c:
    // 0x18c80c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_18c810:
    if (ctx->pc == 0x18C810u) {
        ctx->pc = 0x18C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C80Cu;
        // 0x18c810: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C814u;
        goto label_18c814;
    }
    ctx->pc = 0x18C80Cu;
    {
        const bool branch_taken_0x18c80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c80c) {
            ctx->pc = 0x18C810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C80Cu;
            // 0x18c810: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C860u;
            goto label_18c860;
        }
    }
    ctx->pc = 0x18C814u;
label_18c814:
    // 0x18c814: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x18c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c818:
    // 0x18c818: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c81c:
    // 0x18c81c: 0x0  nop
    ctx->pc = 0x18c81cu;
    // NOP
label_18c820:
    // 0x18c820: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_18c824:
    if (ctx->pc == 0x18C824u) {
        ctx->pc = 0x18C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C820u;
        // 0x18c824: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C828u;
        goto label_18c828;
    }
    ctx->pc = 0x18C820u;
    {
        const bool branch_taken_0x18c820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c820) {
            ctx->pc = 0x18C824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C820u;
            // 0x18c824: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C860u;
            goto label_18c860;
        }
    }
    ctx->pc = 0x18C828u;
label_18c828:
    // 0x18c828: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x18c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c82c:
    // 0x18c82c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18c82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c830:
    // 0x18c830: 0x0  nop
    ctx->pc = 0x18c830u;
    // NOP
label_18c834:
    // 0x18c834: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_18c838:
    if (ctx->pc == 0x18C838u) {
        ctx->pc = 0x18C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C834u;
        // 0x18c838: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C83Cu;
        goto label_18c83c;
    }
    ctx->pc = 0x18C834u;
    {
        const bool branch_taken_0x18c834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c834) {
            ctx->pc = 0x18C838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C834u;
            // 0x18c838: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C860u;
            goto label_18c860;
        }
    }
    ctx->pc = 0x18C83Cu;
label_18c83c:
    // 0x18c83c: 0xc061a1a  jal         func_186868
label_18c840:
    if (ctx->pc == 0x18C840u) {
        ctx->pc = 0x18C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C83Cu;
        // 0x18c840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C844u;
        goto label_18c844;
    }
    ctx->pc = 0x18C83Cu;
    SET_GPR_U32(ctx, 31, 0x18C844u);
    ctx->pc = 0x18C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C83Cu;
    // 0x18c840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18C83Cu, 0x18C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C844u;
label_18c844:
    // 0x18c844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c848:
    // 0x18c848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c84c:
    // 0x18c84c: 0xc0725e0  jal         func_1C9780
label_18c850:
    if (ctx->pc == 0x18C850u) {
        ctx->pc = 0x18C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C84Cu;
        // 0x18c850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C854u;
        goto label_18c854;
    }
    ctx->pc = 0x18C84Cu;
    SET_GPR_U32(ctx, 31, 0x18C854u);
    ctx->pc = 0x18C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C84Cu;
    // 0x18c850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x18C84Cu, 0x18C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C854u;
label_18c854:
    // 0x18c854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18c858:
    if (ctx->pc == 0x18C858u) {
        ctx->pc = 0x18C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C854u;
        // 0x18c858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C85Cu;
        goto label_18c85c;
    }
    ctx->pc = 0x18C854u;
    {
        const bool branch_taken_0x18c854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C854u;
        // 0x18c858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c854) {
            ctx->pc = 0x18C864u;
            goto label_18c864;
        }
    }
    ctx->pc = 0x18C85Cu;
label_18c85c:
    // 0x18c85c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x18c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_18c860:
    // 0x18c860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c864:
    // 0x18c864: 0xc061a12  jal         func_186848
label_18c868:
    if (ctx->pc == 0x18C868u) {
        ctx->pc = 0x18C86Cu;
        goto label_18c86c;
    }
    ctx->pc = 0x18C864u;
    SET_GPR_U32(ctx, 31, 0x18C86Cu);
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C864u, 0x18C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C86Cu;
label_18c86c:
    // 0x18c86c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18c870:
    // 0x18c870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c874:
    // 0x18c874: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18c878:
    // 0x18c878: 0x40f809  jalr        $v0
label_18c87c:
    if (ctx->pc == 0x18C87Cu) {
        ctx->pc = 0x18C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C878u;
        // 0x18c87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C880u;
        goto label_18c880;
    }
    ctx->pc = 0x18C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C880u);
        ctx->pc = 0x18C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C878u;
        // 0x18c87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C878u, 0x18C880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C880u;
label_18c880:
    // 0x18c880: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18c884:
    if (ctx->pc == 0x18C884u) {
        ctx->pc = 0x18C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C880u;
        // 0x18c884: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C888u;
        goto label_18c888;
    }
    ctx->pc = 0x18C880u;
    {
        const bool branch_taken_0x18c880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C880u;
        // 0x18c884: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c880) {
            ctx->pc = 0x18C8F0u;
            goto label_18c8f0;
        }
    }
    ctx->pc = 0x18C888u;
label_18c888:
    // 0x18c888: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x18c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c88c:
    // 0x18c88c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18c88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c890:
    // 0x18c890: 0x0  nop
    ctx->pc = 0x18c890u;
    // NOP
label_18c894:
    // 0x18c894: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_18c898:
    if (ctx->pc == 0x18C898u) {
        ctx->pc = 0x18C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C894u;
        // 0x18c898: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C89Cu;
        goto label_18c89c;
    }
    ctx->pc = 0x18C894u;
    {
        const bool branch_taken_0x18c894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c894) {
            ctx->pc = 0x18C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C894u;
            // 0x18c898: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8D0u;
            goto label_18c8d0;
        }
    }
    ctx->pc = 0x18C89Cu;
label_18c89c:
    // 0x18c89c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x18c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c8a0:
    // 0x18c8a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18c8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c8a4:
    // 0x18c8a4: 0x0  nop
    ctx->pc = 0x18c8a4u;
    // NOP
label_18c8a8:
    // 0x18c8a8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_18c8ac:
    if (ctx->pc == 0x18C8ACu) {
        ctx->pc = 0x18C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8A8u;
        // 0x18c8ac: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8B0u;
        goto label_18c8b0;
    }
    ctx->pc = 0x18C8A8u;
    {
        const bool branch_taken_0x18c8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c8a8) {
            ctx->pc = 0x18C8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C8A8u;
            // 0x18c8ac: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8D0u;
            goto label_18c8d0;
        }
    }
    ctx->pc = 0x18C8B0u;
label_18c8b0:
    // 0x18c8b0: 0xc061a1a  jal         func_186868
label_18c8b4:
    if (ctx->pc == 0x18C8B4u) {
        ctx->pc = 0x18C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8B0u;
        // 0x18c8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8B8u;
        goto label_18c8b8;
    }
    ctx->pc = 0x18C8B0u;
    SET_GPR_U32(ctx, 31, 0x18C8B8u);
    ctx->pc = 0x18C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8B0u;
    // 0x18c8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18C8B0u, 0x18C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8B8u;
label_18c8b8:
    // 0x18c8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c8bc:
    // 0x18c8bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c8c0:
    // 0x18c8c0: 0xc0725e0  jal         func_1C9780
label_18c8c4:
    if (ctx->pc == 0x18C8C4u) {
        ctx->pc = 0x18C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8C0u;
        // 0x18c8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8C8u;
        goto label_18c8c8;
    }
    ctx->pc = 0x18C8C0u;
    SET_GPR_U32(ctx, 31, 0x18C8C8u);
    ctx->pc = 0x18C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8C0u;
    // 0x18c8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x18C8C0u, 0x18C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8C8u;
label_18c8c8:
    // 0x18c8c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18c8cc:
    if (ctx->pc == 0x18C8CCu) {
        ctx->pc = 0x18C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8C8u;
        // 0x18c8cc: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8D0u;
        goto label_18c8d0;
    }
    ctx->pc = 0x18C8C8u;
    {
        const bool branch_taken_0x18c8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c8c8) {
            ctx->pc = 0x18C8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C8C8u;
            // 0x18c8cc: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8D0u;
            goto label_18c8d0;
        }
    }
    ctx->pc = 0x18C8D0u;
label_18c8d0:
    // 0x18c8d0: 0xc061a12  jal         func_186848
label_18c8d4:
    if (ctx->pc == 0x18C8D4u) {
        ctx->pc = 0x18C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8D0u;
        // 0x18c8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8D8u;
        goto label_18c8d8;
    }
    ctx->pc = 0x18C8D0u;
    SET_GPR_U32(ctx, 31, 0x18C8D8u);
    ctx->pc = 0x18C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8D0u;
    // 0x18c8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18C8D0u, 0x18C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8D8u;
label_18c8d8:
    // 0x18c8d8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18c8dc:
    // 0x18c8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c8e0:
    // 0x18c8e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18c8e4:
    // 0x18c8e4: 0x40f809  jalr        $v0
label_18c8e8:
    if (ctx->pc == 0x18C8E8u) {
        ctx->pc = 0x18C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8E4u;
        // 0x18c8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8ECu;
        goto label_18c8ec;
    }
    ctx->pc = 0x18C8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C8ECu);
        ctx->pc = 0x18C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8E4u;
        // 0x18c8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C8E4u, 0x18C8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C8ECu;
label_18c8ec:
    // 0x18c8ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x18c8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18c8f0:
    // 0x18c8f0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x18c8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_18c8f4:
    // 0x18c8f4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x18c8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18c8f8:
    // 0x18c8f8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x18c8f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_18c8fc:
    // 0x18c8fc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x18c8fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_18c900:
    // 0x18c900: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x18c900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_18c904:
    // 0x18c904: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18c908:
    // 0x18c908: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c90c:
    // 0x18c90c: 0x3e00008  jr          $ra
label_18c910:
    if (ctx->pc == 0x18C910u) {
        ctx->pc = 0x18C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C90Cu;
        // 0x18c910: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C914u;
        goto label_18c914;
    }
    ctx->pc = 0x18C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C90Cu;
        // 0x18c910: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C914u;
label_18c914:
    // 0x18c914: 0x0  nop
    ctx->pc = 0x18c914u;
    // NOP
    ctx->pc = 0x18c918u;
}
