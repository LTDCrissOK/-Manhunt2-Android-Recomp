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

// Function: sub_0026B388
// Address: 0x26b388 - 0x26bb80
void sub_0026B388_0x26b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B388_0x26b388");
#endif

    switch (ctx->pc) {
        case 0x26b388u: goto label_26b388;
        case 0x26b38cu: goto label_26b38c;
        case 0x26b390u: goto label_26b390;
        case 0x26b394u: goto label_26b394;
        case 0x26b398u: goto label_26b398;
        case 0x26b39cu: goto label_26b39c;
        case 0x26b3a0u: goto label_26b3a0;
        case 0x26b3a4u: goto label_26b3a4;
        case 0x26b3a8u: goto label_26b3a8;
        case 0x26b3acu: goto label_26b3ac;
        case 0x26b3b0u: goto label_26b3b0;
        case 0x26b3b4u: goto label_26b3b4;
        case 0x26b3b8u: goto label_26b3b8;
        case 0x26b3bcu: goto label_26b3bc;
        case 0x26b3c0u: goto label_26b3c0;
        case 0x26b3c4u: goto label_26b3c4;
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b3ccu: goto label_26b3cc;
        case 0x26b3d0u: goto label_26b3d0;
        case 0x26b3d4u: goto label_26b3d4;
        case 0x26b3d8u: goto label_26b3d8;
        case 0x26b3dcu: goto label_26b3dc;
        case 0x26b3e0u: goto label_26b3e0;
        case 0x26b3e4u: goto label_26b3e4;
        case 0x26b3e8u: goto label_26b3e8;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b3f0u: goto label_26b3f0;
        case 0x26b3f4u: goto label_26b3f4;
        case 0x26b3f8u: goto label_26b3f8;
        case 0x26b3fcu: goto label_26b3fc;
        case 0x26b400u: goto label_26b400;
        case 0x26b404u: goto label_26b404;
        case 0x26b408u: goto label_26b408;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b410u: goto label_26b410;
        case 0x26b414u: goto label_26b414;
        case 0x26b418u: goto label_26b418;
        case 0x26b41cu: goto label_26b41c;
        case 0x26b420u: goto label_26b420;
        case 0x26b424u: goto label_26b424;
        case 0x26b428u: goto label_26b428;
        case 0x26b42cu: goto label_26b42c;
        case 0x26b430u: goto label_26b430;
        case 0x26b434u: goto label_26b434;
        case 0x26b438u: goto label_26b438;
        case 0x26b43cu: goto label_26b43c;
        case 0x26b440u: goto label_26b440;
        case 0x26b444u: goto label_26b444;
        case 0x26b448u: goto label_26b448;
        case 0x26b44cu: goto label_26b44c;
        case 0x26b450u: goto label_26b450;
        case 0x26b454u: goto label_26b454;
        case 0x26b458u: goto label_26b458;
        case 0x26b45cu: goto label_26b45c;
        case 0x26b460u: goto label_26b460;
        case 0x26b464u: goto label_26b464;
        case 0x26b468u: goto label_26b468;
        case 0x26b46cu: goto label_26b46c;
        case 0x26b470u: goto label_26b470;
        case 0x26b474u: goto label_26b474;
        case 0x26b478u: goto label_26b478;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b480u: goto label_26b480;
        case 0x26b484u: goto label_26b484;
        case 0x26b488u: goto label_26b488;
        case 0x26b48cu: goto label_26b48c;
        case 0x26b490u: goto label_26b490;
        case 0x26b494u: goto label_26b494;
        case 0x26b498u: goto label_26b498;
        case 0x26b49cu: goto label_26b49c;
        case 0x26b4a0u: goto label_26b4a0;
        case 0x26b4a4u: goto label_26b4a4;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4acu: goto label_26b4ac;
        case 0x26b4b0u: goto label_26b4b0;
        case 0x26b4b4u: goto label_26b4b4;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4bcu: goto label_26b4bc;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4c4u: goto label_26b4c4;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4ccu: goto label_26b4cc;
        case 0x26b4d0u: goto label_26b4d0;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4d8u: goto label_26b4d8;
        case 0x26b4dcu: goto label_26b4dc;
        case 0x26b4e0u: goto label_26b4e0;
        case 0x26b4e4u: goto label_26b4e4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b4ecu: goto label_26b4ec;
        case 0x26b4f0u: goto label_26b4f0;
        case 0x26b4f4u: goto label_26b4f4;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b4fcu: goto label_26b4fc;
        case 0x26b500u: goto label_26b500;
        case 0x26b504u: goto label_26b504;
        case 0x26b508u: goto label_26b508;
        case 0x26b50cu: goto label_26b50c;
        case 0x26b510u: goto label_26b510;
        case 0x26b514u: goto label_26b514;
        case 0x26b518u: goto label_26b518;
        case 0x26b51cu: goto label_26b51c;
        case 0x26b520u: goto label_26b520;
        case 0x26b524u: goto label_26b524;
        case 0x26b528u: goto label_26b528;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b530u: goto label_26b530;
        case 0x26b534u: goto label_26b534;
        case 0x26b538u: goto label_26b538;
        case 0x26b53cu: goto label_26b53c;
        case 0x26b540u: goto label_26b540;
        case 0x26b544u: goto label_26b544;
        case 0x26b548u: goto label_26b548;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b550u: goto label_26b550;
        case 0x26b554u: goto label_26b554;
        case 0x26b558u: goto label_26b558;
        case 0x26b55cu: goto label_26b55c;
        case 0x26b560u: goto label_26b560;
        case 0x26b564u: goto label_26b564;
        case 0x26b568u: goto label_26b568;
        case 0x26b56cu: goto label_26b56c;
        case 0x26b570u: goto label_26b570;
        case 0x26b574u: goto label_26b574;
        case 0x26b578u: goto label_26b578;
        case 0x26b57cu: goto label_26b57c;
        case 0x26b580u: goto label_26b580;
        case 0x26b584u: goto label_26b584;
        case 0x26b588u: goto label_26b588;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b590u: goto label_26b590;
        case 0x26b594u: goto label_26b594;
        case 0x26b598u: goto label_26b598;
        case 0x26b59cu: goto label_26b59c;
        case 0x26b5a0u: goto label_26b5a0;
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b5a8u: goto label_26b5a8;
        case 0x26b5acu: goto label_26b5ac;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5b8u: goto label_26b5b8;
        case 0x26b5bcu: goto label_26b5bc;
        case 0x26b5c0u: goto label_26b5c0;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5c8u: goto label_26b5c8;
        case 0x26b5ccu: goto label_26b5cc;
        case 0x26b5d0u: goto label_26b5d0;
        case 0x26b5d4u: goto label_26b5d4;
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b5dcu: goto label_26b5dc;
        case 0x26b5e0u: goto label_26b5e0;
        case 0x26b5e4u: goto label_26b5e4;
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b5ecu: goto label_26b5ec;
        case 0x26b5f0u: goto label_26b5f0;
        case 0x26b5f4u: goto label_26b5f4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b5fcu: goto label_26b5fc;
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6c4u: goto label_26b6c4;
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7bcu: goto label_26b7bc;
        case 0x26b7c0u: goto label_26b7c0;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7ccu: goto label_26b7cc;
        case 0x26b7d0u: goto label_26b7d0;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7d8u: goto label_26b7d8;
        case 0x26b7dcu: goto label_26b7dc;
        case 0x26b7e0u: goto label_26b7e0;
        case 0x26b7e4u: goto label_26b7e4;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b7f0u: goto label_26b7f0;
        case 0x26b7f4u: goto label_26b7f4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b7fcu: goto label_26b7fc;
        case 0x26b800u: goto label_26b800;
        case 0x26b804u: goto label_26b804;
        case 0x26b808u: goto label_26b808;
        case 0x26b80cu: goto label_26b80c;
        case 0x26b810u: goto label_26b810;
        case 0x26b814u: goto label_26b814;
        case 0x26b818u: goto label_26b818;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b820u: goto label_26b820;
        case 0x26b824u: goto label_26b824;
        case 0x26b828u: goto label_26b828;
        case 0x26b82cu: goto label_26b82c;
        case 0x26b830u: goto label_26b830;
        case 0x26b834u: goto label_26b834;
        case 0x26b838u: goto label_26b838;
        case 0x26b83cu: goto label_26b83c;
        case 0x26b840u: goto label_26b840;
        case 0x26b844u: goto label_26b844;
        case 0x26b848u: goto label_26b848;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b850u: goto label_26b850;
        case 0x26b854u: goto label_26b854;
        case 0x26b858u: goto label_26b858;
        case 0x26b85cu: goto label_26b85c;
        case 0x26b860u: goto label_26b860;
        case 0x26b864u: goto label_26b864;
        case 0x26b868u: goto label_26b868;
        case 0x26b86cu: goto label_26b86c;
        case 0x26b870u: goto label_26b870;
        case 0x26b874u: goto label_26b874;
        case 0x26b878u: goto label_26b878;
        case 0x26b87cu: goto label_26b87c;
        case 0x26b880u: goto label_26b880;
        case 0x26b884u: goto label_26b884;
        case 0x26b888u: goto label_26b888;
        case 0x26b88cu: goto label_26b88c;
        case 0x26b890u: goto label_26b890;
        case 0x26b894u: goto label_26b894;
        case 0x26b898u: goto label_26b898;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8a4u: goto label_26b8a4;
        case 0x26b8a8u: goto label_26b8a8;
        case 0x26b8acu: goto label_26b8ac;
        case 0x26b8b0u: goto label_26b8b0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8b8u: goto label_26b8b8;
        case 0x26b8bcu: goto label_26b8bc;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8c8u: goto label_26b8c8;
        case 0x26b8ccu: goto label_26b8cc;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8d4u: goto label_26b8d4;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e0u: goto label_26b8e0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b8ecu: goto label_26b8ec;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        case 0x26b9fcu: goto label_26b9fc;
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        case 0x26ba60u: goto label_26ba60;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba68u: goto label_26ba68;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba74u: goto label_26ba74;
        case 0x26ba78u: goto label_26ba78;
        case 0x26ba7cu: goto label_26ba7c;
        case 0x26ba80u: goto label_26ba80;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26ba90u: goto label_26ba90;
        case 0x26ba94u: goto label_26ba94;
        case 0x26ba98u: goto label_26ba98;
        case 0x26ba9cu: goto label_26ba9c;
        case 0x26baa0u: goto label_26baa0;
        case 0x26baa4u: goto label_26baa4;
        case 0x26baa8u: goto label_26baa8;
        case 0x26baacu: goto label_26baac;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bab8u: goto label_26bab8;
        case 0x26babcu: goto label_26babc;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bac4u: goto label_26bac4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26baccu: goto label_26bacc;
        case 0x26bad0u: goto label_26bad0;
        case 0x26bad4u: goto label_26bad4;
        case 0x26bad8u: goto label_26bad8;
        case 0x26badcu: goto label_26badc;
        case 0x26bae0u: goto label_26bae0;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bae8u: goto label_26bae8;
        case 0x26baecu: goto label_26baec;
        case 0x26baf0u: goto label_26baf0;
        case 0x26baf4u: goto label_26baf4;
        case 0x26baf8u: goto label_26baf8;
        case 0x26bafcu: goto label_26bafc;
        case 0x26bb00u: goto label_26bb00;
        case 0x26bb04u: goto label_26bb04;
        case 0x26bb08u: goto label_26bb08;
        case 0x26bb0cu: goto label_26bb0c;
        case 0x26bb10u: goto label_26bb10;
        case 0x26bb14u: goto label_26bb14;
        case 0x26bb18u: goto label_26bb18;
        case 0x26bb1cu: goto label_26bb1c;
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb24u: goto label_26bb24;
        case 0x26bb28u: goto label_26bb28;
        case 0x26bb2cu: goto label_26bb2c;
        case 0x26bb30u: goto label_26bb30;
        case 0x26bb34u: goto label_26bb34;
        case 0x26bb38u: goto label_26bb38;
        case 0x26bb3cu: goto label_26bb3c;
        case 0x26bb40u: goto label_26bb40;
        case 0x26bb44u: goto label_26bb44;
        case 0x26bb48u: goto label_26bb48;
        case 0x26bb4cu: goto label_26bb4c;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb54u: goto label_26bb54;
        case 0x26bb58u: goto label_26bb58;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb60u: goto label_26bb60;
        case 0x26bb64u: goto label_26bb64;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb6cu: goto label_26bb6c;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb74u: goto label_26bb74;
        case 0x26bb78u: goto label_26bb78;
        case 0x26bb7cu: goto label_26bb7c;
        default: break;
    }

    ctx->pc = 0x26b388u;

label_26b388:
    // 0x26b388: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_26b38c:
    // 0x26b38c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x26b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_26b390:
    // 0x26b390: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x26b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_26b394:
    // 0x26b394: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x26b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_26b398:
    // 0x26b398: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x26b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_26b39c:
    // 0x26b39c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x26b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_26b3a0:
    // 0x26b3a0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x26b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_26b3a4:
    // 0x26b3a4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x26b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_26b3a8:
    // 0x26b3a8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x26b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_26b3ac:
    // 0x26b3ac: 0xc084172  jal         func_2105C8
label_26b3b0:
    if (ctx->pc == 0x26B3B0u) {
        ctx->pc = 0x26B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3ACu;
        // 0x26b3b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3B4u;
        goto label_26b3b4;
    }
    ctx->pc = 0x26B3ACu;
    SET_GPR_U32(ctx, 31, 0x26B3B4u);
    ctx->pc = 0x26B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3ACu;
    // 0x26b3b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x26B3ACu, 0x26B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3B4u;
label_26b3b4:
    // 0x26b3b4: 0xc0f6a96  jal         func_3DAA58
label_26b3b8:
    if (ctx->pc == 0x26B3B8u) {
        ctx->pc = 0x26B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3B4u;
        // 0x26b3b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3BCu;
        goto label_26b3bc;
    }
    ctx->pc = 0x26B3B4u;
    SET_GPR_U32(ctx, 31, 0x26B3BCu);
    ctx->pc = 0x26B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3B4u;
    // 0x26b3b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26B3B4u, 0x26B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3BCu;
label_26b3bc:
    // 0x26b3bc: 0xc0f6a96  jal         func_3DAA58
label_26b3c0:
    if (ctx->pc == 0x26B3C0u) {
        ctx->pc = 0x26B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3BCu;
        // 0x26b3c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3C4u;
        goto label_26b3c4;
    }
    ctx->pc = 0x26B3BCu;
    SET_GPR_U32(ctx, 31, 0x26B3C4u);
    ctx->pc = 0x26B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3BCu;
    // 0x26b3c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26B3BCu, 0x26B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3C4u;
label_26b3c4:
    // 0x26b3c4: 0xc0f6a96  jal         func_3DAA58
label_26b3c8:
    if (ctx->pc == 0x26B3C8u) {
        ctx->pc = 0x26B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3C4u;
        // 0x26b3c8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3CCu;
        goto label_26b3cc;
    }
    ctx->pc = 0x26B3C4u;
    SET_GPR_U32(ctx, 31, 0x26B3CCu);
    ctx->pc = 0x26B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3C4u;
    // 0x26b3c8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26B3C4u, 0x26B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3CCu;
label_26b3cc:
    // 0x26b3cc: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x26b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_26b3d0:
    // 0x26b3d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b3d4:
    // 0x26b3d4: 0x8c4401a0  lw          $a0, 0x1A0($v0)
    ctx->pc = 0x26b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
label_26b3d8:
    // 0x26b3d8: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_26b3dc:
    if (ctx->pc == 0x26B3DCu) {
        ctx->pc = 0x26B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3D8u;
        // 0x26b3dc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3E0u;
        goto label_26b3e0;
    }
    ctx->pc = 0x26B3D8u;
    {
        const bool branch_taken_0x26b3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3D8u;
        // 0x26b3dc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3d8) {
            ctx->pc = 0x26B414u;
            goto label_26b414;
        }
    }
    ctx->pc = 0x26B3E0u;
label_26b3e0:
    // 0x26b3e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_26b3e4:
    if (ctx->pc == 0x26B3E4u) {
        ctx->pc = 0x26B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3E0u;
        // 0x26b3e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3E8u;
        goto label_26b3e8;
    }
    ctx->pc = 0x26B3E0u;
    {
        const bool branch_taken_0x26b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b3e0) {
            ctx->pc = 0x26B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B3E0u;
            // 0x26b3e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B3F8u;
            goto label_26b3f8;
        }
    }
    ctx->pc = 0x26B3E8u;
label_26b3e8:
    // 0x26b3e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_26b3ec:
    if (ctx->pc == 0x26B3ECu) {
        ctx->pc = 0x26B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3E8u;
        // 0x26b3ec: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3F0u;
        goto label_26b3f0;
    }
    ctx->pc = 0x26B3E8u;
    {
        const bool branch_taken_0x26b3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3E8u;
        // 0x26b3ec: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3e8) {
            ctx->pc = 0x26B408u;
            goto label_26b408;
        }
    }
    ctx->pc = 0x26B3F0u;
label_26b3f0:
    // 0x26b3f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_26b3f4:
    if (ctx->pc == 0x26B3F4u) {
        ctx->pc = 0x26B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3F0u;
        // 0x26b3f4: 0xa2400223  sb          $zero, 0x223($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B3F8u;
        goto label_26b3f8;
    }
    ctx->pc = 0x26B3F0u;
    {
        const bool branch_taken_0x26b3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3F0u;
        // 0x26b3f4: 0xa2400223  sb          $zero, 0x223($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3f0) {
            ctx->pc = 0x26B470u;
            goto label_26b470;
        }
    }
    ctx->pc = 0x26B3F8u;
label_26b3f8:
    // 0x26b3f8: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
label_26b3fc:
    if (ctx->pc == 0x26B3FCu) {
        ctx->pc = 0x26B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3F8u;
        // 0x26b3fc: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B400u;
        goto label_26b400;
    }
    ctx->pc = 0x26B3F8u;
    {
        const bool branch_taken_0x26b3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3F8u;
        // 0x26b3fc: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3f8) {
            ctx->pc = 0x26B458u;
            goto label_26b458;
        }
    }
    ctx->pc = 0x26B400u;
label_26b400:
    // 0x26b400: 0x1000001b  b           . + 4 + (0x1B << 2)
label_26b404:
    if (ctx->pc == 0x26B404u) {
        ctx->pc = 0x26B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B400u;
        // 0x26b404: 0xa2400223  sb          $zero, 0x223($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B408u;
        goto label_26b408;
    }
    ctx->pc = 0x26B400u;
    {
        const bool branch_taken_0x26b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B400u;
        // 0x26b404: 0xa2400223  sb          $zero, 0x223($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b400) {
            ctx->pc = 0x26B470u;
            goto label_26b470;
        }
    }
    ctx->pc = 0x26B408u;
label_26b408:
    // 0x26b408: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x26b408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_26b40c:
    // 0x26b40c: 0x10000014  b           . + 4 + (0x14 << 2)
label_26b410:
    if (ctx->pc == 0x26B410u) {
        ctx->pc = 0x26B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B40Cu;
        // 0x26b410: 0x24425b30  addiu       $v0, $v0, 0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B414u;
        goto label_26b414;
    }
    ctx->pc = 0x26B40Cu;
    {
        const bool branch_taken_0x26b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B40Cu;
        // 0x26b410: 0x24425b30  addiu       $v0, $v0, 0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b40c) {
            ctx->pc = 0x26B460u;
            goto label_26b460;
        }
    }
    ctx->pc = 0x26B414u;
label_26b414:
    // 0x26b414: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x26b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_26b418:
    // 0x26b418: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x26b418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_26b41c:
    // 0x26b41c: 0x24435b40  addiu       $v1, $v0, 0x5B40
    ctx->pc = 0x26b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_26b420:
    // 0x26b420: 0xc4415b40  lwc1        $f1, 0x5B40($v0)
    ctx->pc = 0x26b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b424:
    // 0x26b424: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x26b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b428:
    // 0x26b428: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b42c:
    // 0x26b42c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b430:
    // 0x26b430: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26b430u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_26b434:
    // 0x26b434: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x26b434u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_26b438:
    // 0x26b438: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26b438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26b43c:
    // 0x26b43c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26b43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26b440:
    // 0x26b440: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x26b440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26b444:
    // 0x26b444: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26b444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26b448:
    // 0x26b448: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26b448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26b44c:
    // 0x26b44c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b450:
    // 0x26b450: 0x10000006  b           . + 4 + (0x6 << 2)
label_26b454:
    if (ctx->pc == 0x26B454u) {
        ctx->pc = 0x26B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B450u;
        // 0x26b454: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B458u;
        goto label_26b458;
    }
    ctx->pc = 0x26B450u;
    {
        const bool branch_taken_0x26b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B450u;
        // 0x26b454: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b450) {
            ctx->pc = 0x26B46Cu;
            goto label_26b46c;
        }
    }
    ctx->pc = 0x26B458u;
label_26b458:
    // 0x26b458: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x26b458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_26b45c:
    // 0x26b45c: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x26b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
label_26b460:
    // 0x26b460: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26b460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26b464:
    // 0x26b464: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b468:
    // 0x26b468: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26b46c:
    // 0x26b46c: 0xa2400223  sb          $zero, 0x223($s2)
    ctx->pc = 0x26b46cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
label_26b470:
    // 0x26b470: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x26b470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b474:
    // 0x26b474: 0xa2400224  sb          $zero, 0x224($s2)
    ctx->pc = 0x26b474u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 548), (uint8_t)GPR_U32(ctx, 0));
label_26b478:
    // 0x26b478: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26b478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26b47c:
    // 0x26b47c: 0xa2400220  sb          $zero, 0x220($s2)
    ctx->pc = 0x26b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 0));
label_26b480:
    // 0x26b480: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26b484:
    // 0x26b484: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26b484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b488:
    // 0x26b488: 0xc0f6a96  jal         func_3DAA58
label_26b48c:
    if (ctx->pc == 0x26B48Cu) {
        ctx->pc = 0x26B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B488u;
        // 0x26b48c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B490u;
        goto label_26b490;
    }
    ctx->pc = 0x26B488u;
    SET_GPR_U32(ctx, 31, 0x26B490u);
    ctx->pc = 0x26B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B488u;
    // 0x26b48c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26B488u, 0x26B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B490u;
label_26b490:
    // 0x26b490: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26b494:
    // 0x26b494: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26b494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26b498:
    // 0x26b498: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26b498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26b49c:
    // 0x26b49c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x26b49cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_26b4a0:
    // 0x26b4a0: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x26b4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_26b4a4:
    // 0x26b4a4: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x26b4a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_26b4a8:
    // 0x26b4a8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26b4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26b4ac:
    // 0x26b4ac: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26b4acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26b4b0:
    // 0x26b4b0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x26b4b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26b4b4:
    // 0x26b4b4: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x26b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
label_26b4b8:
    // 0x26b4b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b4bc:
    // 0x26b4bc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b4c0:
    // 0x26b4c0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x26b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b4c4:
    // 0x26b4c4: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x26b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b4c8:
    // 0x26b4c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26b4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26b4cc:
    // 0x26b4cc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x26b4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26b4d0:
    // 0x26b4d0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x26b4d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26b4d4:
    // 0x26b4d4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x26b4d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_26b4d8:
    // 0x26b4d8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26b4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26b4dc:
    // 0x26b4dc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x26b4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26b4e0:
    // 0x26b4e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26b4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26b4e4:
    // 0x26b4e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26b4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26b4e8:
    // 0x26b4e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26b4e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_26b4ec:
    // 0x26b4ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x26b4ecu;
    // VWAITQ (Q already resolved in this runtime)
label_26b4f0:
    // 0x26b4f0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26b4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26b4f4:
    // 0x26b4f4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b4f8:
    // 0x26b4f8: 0xc640025c  lwc1        $f0, 0x25C($s2)
    ctx->pc = 0x26b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b4fc:
    // 0x26b4fc: 0x26440230  addiu       $a0, $s2, 0x230
    ctx->pc = 0x26b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_26b500:
    // 0x26b500: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x26b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b504:
    // 0x26b504: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x26b504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26b508:
    // 0x26b508: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b50c:
    // 0x26b50c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b510:
    // 0x26b510: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26b510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_26b514:
    // 0x26b514: 0xc7a4003c  lwc1        $f4, 0x3C($sp)
    ctx->pc = 0x26b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26b518:
    // 0x26b518: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26b518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26b51c:
    // 0x26b51c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x26b51cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26b520:
    // 0x26b520: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26b520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_26b524:
    // 0x26b524: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x26b524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26b528:
    // 0x26b528: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26b528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_26b52c:
    // 0x26b52c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x26b52cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26b530:
    // 0x26b530: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x26b530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_26b534:
    // 0x26b534: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26b534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26b538:
    // 0x26b538: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x26b538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26b53c:
    // 0x26b53c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26b53cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26b540:
    // 0x26b540: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x26b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b544:
    // 0x26b544: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x26b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b548:
    // 0x26b548: 0x26420240  addiu       $v0, $s2, 0x240
    ctx->pc = 0x26b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_26b54c:
    // 0x26b54c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x26b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b550:
    // 0x26b550: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x26b550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b554:
    // 0x26b554: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x26b554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b558:
    // 0x26b558: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x26b558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b55c:
    // 0x26b55c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26b55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b560:
    // 0x26b560: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26b560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b564:
    // 0x26b564: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x26b564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b568:
    // 0x26b568: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26b568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26b56c:
    // 0x26b56c: 0xfa410240  sqc2        $vf1, 0x240($s2)
    ctx->pc = 0x26b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 576), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b570:
    // 0x26b570: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x26b570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26b574:
    // 0x26b574: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26b574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b578:
    // 0x26b578: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26b578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b57c:
    // 0x26b57c: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x26b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_26b580:
    // 0x26b580: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26b580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26b584:
    // 0x26b584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b588:
    // 0x26b588: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_26b58c:
    if (ctx->pc == 0x26B58Cu) {
        ctx->pc = 0x26B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B588u;
        // 0x26b58c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B590u;
        goto label_26b590;
    }
    ctx->pc = 0x26B588u;
    {
        const bool branch_taken_0x26b588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B588u;
        // 0x26b58c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b588) {
            ctx->pc = 0x26B5A4u;
            goto label_26b5a4;
        }
    }
    ctx->pc = 0x26B590u;
label_26b590:
    // 0x26b590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26b594:
    // 0x26b594: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_26b598:
    if (ctx->pc == 0x26B598u) {
        ctx->pc = 0x26B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B594u;
        // 0x26b598: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B59Cu;
        goto label_26b59c;
    }
    ctx->pc = 0x26B594u;
    {
        const bool branch_taken_0x26b594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B594u;
        // 0x26b598: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b594) {
            ctx->pc = 0x26B624u;
            goto label_26b624;
        }
    }
    ctx->pc = 0x26B59Cu;
label_26b59c:
    // 0x26b59c: 0x10000044  b           . + 4 + (0x44 << 2)
label_26b5a0:
    if (ctx->pc == 0x26B5A0u) {
        ctx->pc = 0x26B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B59Cu;
        // 0x26b5a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B5A4u;
        goto label_26b5a4;
    }
    ctx->pc = 0x26B59Cu;
    {
        const bool branch_taken_0x26b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B59Cu;
        // 0x26b5a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b59c) {
            ctx->pc = 0x26B6B0u;
            goto label_26b6b0;
        }
    }
    ctx->pc = 0x26B5A4u;
label_26b5a4:
    // 0x26b5a4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26b5a8:
    // 0x26b5a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b5ac:
    // 0x26b5ac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26b5b0:
    // 0x26b5b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26b5b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26b5b4:
    // 0x26b5b4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x26b5b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26b5b8:
    // 0x26b5b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26b5b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26b5bc:
    // 0x26b5bc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x26b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b5c0:
    // 0x26b5c0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b5c4:
    // 0x26b5c4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b5c8:
    // 0x26b5c8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x26b5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b5cc:
    // 0x26b5cc: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x26b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26b5d0:
    // 0x26b5d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b5d4:
    // 0x26b5d4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26b5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b5d8:
    // 0x26b5d8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26b5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b5dc:
    // 0x26b5dc: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x26b5dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b5e0:
    // 0x26b5e0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x26b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b5e4:
    // 0x26b5e4: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x26b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b5e8:
    // 0x26b5e8: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x26b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26b5ec:
    // 0x26b5ec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26b5ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26b5f0:
    // 0x26b5f0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26b5f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26b5f4:
    // 0x26b5f4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x26b5f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26b5f8:
    // 0x26b5f8: 0x46010044  c1          0x10044
    ctx->pc = 0x26b5f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_26b5fc:
    // 0x26b5fc: 0xc640025c  lwc1        $f0, 0x25C($s2)
    ctx->pc = 0x26b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b600:
    // 0x26b600: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26b600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b604:
    // 0x26b604: 0x0  nop
    ctx->pc = 0x26b604u;
    // NOP
label_26b608:
    // 0x26b608: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_26b60c:
    if (ctx->pc == 0x26B60Cu) {
        ctx->pc = 0x26B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B608u;
        // 0x26b60c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B610u;
        goto label_26b610;
    }
    ctx->pc = 0x26B608u;
    {
        const bool branch_taken_0x26b608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B608u;
        // 0x26b60c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b608) {
            ctx->pc = 0x26B6ACu;
            goto label_26b6ac;
        }
    }
    ctx->pc = 0x26B610u;
label_26b610:
    // 0x26b610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b614:
    // 0x26b614: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26b614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26b618:
    // 0x26b618: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x26b618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b61c:
    // 0x26b61c: 0x10000020  b           . + 4 + (0x20 << 2)
label_26b620:
    if (ctx->pc == 0x26B620u) {
        ctx->pc = 0x26B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B61Cu;
        // 0x26b620: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B624u;
        goto label_26b624;
    }
    ctx->pc = 0x26B61Cu;
    {
        const bool branch_taken_0x26b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B61Cu;
        // 0x26b620: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b61c) {
            ctx->pc = 0x26B6A0u;
            goto label_26b6a0;
        }
    }
    ctx->pc = 0x26B624u;
label_26b624:
    // 0x26b624: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x26b624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26b628:
    // 0x26b628: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b62c:
    // 0x26b62c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26b630:
    // 0x26b630: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26b630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26b634:
    // 0x26b634: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x26b634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26b638:
    // 0x26b638: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26b638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26b63c:
    // 0x26b63c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x26b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b640:
    // 0x26b640: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b644:
    // 0x26b644: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b648:
    // 0x26b648: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x26b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b64c:
    // 0x26b64c: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x26b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26b650:
    // 0x26b650: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26b650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b654:
    // 0x26b654: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26b654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b658:
    // 0x26b658: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26b658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b65c:
    // 0x26b65c: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x26b65cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b660:
    // 0x26b660: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x26b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b664:
    // 0x26b664: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x26b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b668:
    // 0x26b668: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x26b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26b66c:
    // 0x26b66c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26b66cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26b670:
    // 0x26b670: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26b670u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26b674:
    // 0x26b674: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x26b674u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26b678:
    // 0x26b678: 0x46010044  c1          0x10044
    ctx->pc = 0x26b678u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_26b67c:
    // 0x26b67c: 0xc640025c  lwc1        $f0, 0x25C($s2)
    ctx->pc = 0x26b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b680:
    // 0x26b680: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26b680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b684:
    // 0x26b684: 0x0  nop
    ctx->pc = 0x26b684u;
    // NOP
label_26b688:
    // 0x26b688: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_26b68c:
    if (ctx->pc == 0x26B68Cu) {
        ctx->pc = 0x26B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B688u;
        // 0x26b68c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B690u;
        goto label_26b690;
    }
    ctx->pc = 0x26B688u;
    {
        const bool branch_taken_0x26b688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B688u;
        // 0x26b68c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b688) {
            ctx->pc = 0x26B6ACu;
            goto label_26b6ac;
        }
    }
    ctx->pc = 0x26B690u;
label_26b690:
    // 0x26b690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b694:
    // 0x26b694: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x26b694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26b698:
    // 0x26b698: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x26b698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b69c:
    // 0x26b69c: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x26b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_26b6a0:
    // 0x26b6a0: 0xc0b7264  jal         func_2DC990
label_26b6a4:
    if (ctx->pc == 0x26B6A4u) {
        ctx->pc = 0x26B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6A0u;
        // 0x26b6a4: 0x26055b60  addiu       $a1, $s0, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6A8u;
        goto label_26b6a8;
    }
    ctx->pc = 0x26B6A0u;
    SET_GPR_U32(ctx, 31, 0x26B6A8u);
    ctx->pc = 0x26B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6A0u;
    // 0x26b6a4: 0x26055b60  addiu       $a1, $s0, 0x5B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x26B6A0u, 0x26B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6A8u;
label_26b6a8:
    // 0x26b6a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b6ac:
    // 0x26b6ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_26b6b0:
    // 0x26b6b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26b6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b6b4:
    // 0x26b6b4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x26b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_26b6b8:
    // 0x26b6b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26b6bc:
    if (ctx->pc == 0x26B6BCu) {
        ctx->pc = 0x26B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6B8u;
        // 0x26b6bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B6C0u;
        goto label_26b6c0;
    }
    ctx->pc = 0x26B6B8u;
    {
        const bool branch_taken_0x26b6b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6B8u;
        // 0x26b6bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6b8) {
            ctx->pc = 0x26B6D4u;
            goto label_26b6d4;
        }
    }
    ctx->pc = 0x26B6C0u;
label_26b6c0:
    // 0x26b6c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b6c4:
    // 0x26b6c4: 0x0  nop
    ctx->pc = 0x26b6c4u;
    // NOP
label_26b6c8:
    // 0x26b6c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_26b6cc:
    // 0x26b6cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_26b6d0:
    if (ctx->pc == 0x26B6D0u) {
        ctx->pc = 0x26B6D4u;
        goto label_26b6d4;
    }
    ctx->pc = 0x26B6CCu;
    {
        const bool branch_taken_0x26b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6cc) {
            ctx->pc = 0x26B6ECu;
            goto label_26b6ec;
        }
    }
    ctx->pc = 0x26B6D4u;
label_26b6d4:
    // 0x26b6d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26b6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26b6d8:
    // 0x26b6d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26b6dc:
    // 0x26b6dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b6e0:
    // 0x26b6e0: 0x0  nop
    ctx->pc = 0x26b6e0u;
    // NOP
label_26b6e4:
    // 0x26b6e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_26b6e8:
    // 0x26b6e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26b6e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26b6ec:
    // 0x26b6ec: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_26b6f0:
    // 0x26b6f0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26b6f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_26b6f4:
    // 0x26b6f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b6f8:
    // 0x26b6f8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26b6fc:
    // 0x26b6fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b700:
    // 0x26b700: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26b700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26b704:
    // 0x26b704: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26b704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b708:
    // 0x26b708: 0x0  nop
    ctx->pc = 0x26b708u;
    // NOP
label_26b70c:
    // 0x26b70c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_26b710:
    if (ctx->pc == 0x26B710u) {
        ctx->pc = 0x26B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B70Cu;
        // 0x26b710: 0xae400258  sw          $zero, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B714u;
        goto label_26b714;
    }
    ctx->pc = 0x26B70Cu;
    {
        const bool branch_taken_0x26b70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b70c) {
            ctx->pc = 0x26B710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B70Cu;
            // 0x26b710: 0xae400258  sw          $zero, 0x258($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B714u;
            goto label_26b714;
        }
    }
    ctx->pc = 0x26B714u;
label_26b714:
    // 0x26b714: 0x26025b60  addiu       $v0, $s0, 0x5B60
    ctx->pc = 0x26b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 23392));
label_26b718:
    // 0x26b718: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26b718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26b71c:
    // 0x26b71c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b720:
    // 0x26b720: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x26b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_26b724:
    // 0x26b724: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26b728:
    if (ctx->pc == 0x26B728u) {
        ctx->pc = 0x26B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B724u;
        // 0x26b728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B72Cu;
        goto label_26b72c;
    }
    ctx->pc = 0x26B724u;
    {
        const bool branch_taken_0x26b724 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B724u;
        // 0x26b728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b724) {
            ctx->pc = 0x26B740u;
            goto label_26b740;
        }
    }
    ctx->pc = 0x26B72Cu;
label_26b72c:
    // 0x26b72c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b730:
    // 0x26b730: 0x0  nop
    ctx->pc = 0x26b730u;
    // NOP
label_26b734:
    // 0x26b734: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_26b738:
    // 0x26b738: 0x10000007  b           . + 4 + (0x7 << 2)
label_26b73c:
    if (ctx->pc == 0x26B73Cu) {
        ctx->pc = 0x26B740u;
        goto label_26b740;
    }
    ctx->pc = 0x26B738u;
    {
        const bool branch_taken_0x26b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b738) {
            ctx->pc = 0x26B758u;
            goto label_26b758;
        }
    }
    ctx->pc = 0x26B740u;
label_26b740:
    // 0x26b740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26b744:
    // 0x26b744: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26b748:
    // 0x26b748: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b74c:
    // 0x26b74c: 0x0  nop
    ctx->pc = 0x26b74cu;
    // NOP
label_26b750:
    // 0x26b750: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_26b754:
    // 0x26b754: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26b754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26b758:
    // 0x26b758: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_26b75c:
    // 0x26b75c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26b75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_26b760:
    // 0x26b760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b764:
    // 0x26b764: 0xc6410258  lwc1        $f1, 0x258($s2)
    ctx->pc = 0x26b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b768:
    // 0x26b768: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26b768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26b76c:
    // 0x26b76c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26b76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b770:
    // 0x26b770: 0x0  nop
    ctx->pc = 0x26b770u;
    // NOP
label_26b774:
    // 0x26b774: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
label_26b778:
    if (ctx->pc == 0x26B778u) {
        ctx->pc = 0x26B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B774u;
        // 0x26b778: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B77Cu;
        goto label_26b77c;
    }
    ctx->pc = 0x26B774u;
    {
        const bool branch_taken_0x26b774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B774u;
        // 0x26b778: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b774) {
            ctx->pc = 0x26B9F8u;
            goto label_26b9f8;
        }
    }
    ctx->pc = 0x26B77Cu;
label_26b77c:
    // 0x26b77c: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x26b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_26b780:
    // 0x26b780: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
label_26b784:
    if (ctx->pc == 0x26B784u) {
        ctx->pc = 0x26B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B780u;
        // 0x26b784: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B788u;
        goto label_26b788;
    }
    ctx->pc = 0x26B780u;
    {
        const bool branch_taken_0x26b780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x26B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B780u;
        // 0x26b784: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b780) {
            ctx->pc = 0x26B7CCu;
            goto label_26b7cc;
        }
    }
    ctx->pc = 0x26B788u;
label_26b788:
    // 0x26b788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26b78c:
    if (ctx->pc == 0x26B78Cu) {
        ctx->pc = 0x26B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B788u;
        // 0x26b78c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B790u;
        goto label_26b790;
    }
    ctx->pc = 0x26B788u;
    {
        const bool branch_taken_0x26b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B788u;
        // 0x26b78c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b788) {
            ctx->pc = 0x26B7A0u;
            goto label_26b7a0;
        }
    }
    ctx->pc = 0x26B790u;
label_26b790:
    // 0x26b790: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_26b794:
    if (ctx->pc == 0x26B794u) {
        ctx->pc = 0x26B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B790u;
        // 0x26b794: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B798u;
        goto label_26b798;
    }
    ctx->pc = 0x26B790u;
    {
        const bool branch_taken_0x26b790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b790) {
            ctx->pc = 0x26B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B790u;
            // 0x26b794: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B7B8u;
            goto label_26b7b8;
        }
    }
    ctx->pc = 0x26B798u;
label_26b798:
    // 0x26b798: 0x10000098  b           . + 4 + (0x98 << 2)
label_26b79c:
    if (ctx->pc == 0x26B79Cu) {
        ctx->pc = 0x26B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B798u;
        // 0x26b79c: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7A0u;
        goto label_26b7a0;
    }
    ctx->pc = 0x26B798u;
    {
        const bool branch_taken_0x26b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B798u;
        // 0x26b79c: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b798) {
            ctx->pc = 0x26B9FCu;
            goto label_26b9fc;
        }
    }
    ctx->pc = 0x26B7A0u;
label_26b7a0:
    // 0x26b7a0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
label_26b7a4:
    if (ctx->pc == 0x26B7A4u) {
        ctx->pc = 0x26B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A0u;
        // 0x26b7a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7A8u;
        goto label_26b7a8;
    }
    ctx->pc = 0x26B7A0u;
    {
        const bool branch_taken_0x26b7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A0u;
        // 0x26b7a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7a0) {
            ctx->pc = 0x26B8B8u;
            goto label_26b8b8;
        }
    }
    ctx->pc = 0x26B7A8u;
label_26b7a8:
    // 0x26b7a8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
label_26b7ac:
    if (ctx->pc == 0x26B7ACu) {
        ctx->pc = 0x26B7B0u;
        goto label_26b7b0;
    }
    ctx->pc = 0x26B7A8u;
    {
        const bool branch_taken_0x26b7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b7a8) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B7B0u;
label_26b7b0:
    // 0x26b7b0: 0x10000092  b           . + 4 + (0x92 << 2)
label_26b7b4:
    if (ctx->pc == 0x26B7B4u) {
        ctx->pc = 0x26B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7B0u;
        // 0x26b7b4: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7B8u;
        goto label_26b7b8;
    }
    ctx->pc = 0x26B7B0u;
    {
        const bool branch_taken_0x26b7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7B0u;
        // 0x26b7b4: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7b0) {
            ctx->pc = 0x26B9FCu;
            goto label_26b9fc;
        }
    }
    ctx->pc = 0x26B7B8u;
label_26b7b8:
    // 0x26b7b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b7bc:
    // 0x26b7bc: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26b7bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26b7c0:
    // 0x26b7c0: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x26b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b7c4:
    // 0x26b7c4: 0x1000008d  b           . + 4 + (0x8D << 2)
label_26b7c8:
    if (ctx->pc == 0x26B7C8u) {
        ctx->pc = 0x26B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7C4u;
        // 0x26b7c8: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7CCu;
        goto label_26b7cc;
    }
    ctx->pc = 0x26B7C4u;
    {
        const bool branch_taken_0x26b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7C4u;
        // 0x26b7c8: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7c4) {
            ctx->pc = 0x26B9FCu;
            goto label_26b9fc;
        }
    }
    ctx->pc = 0x26B7CCu;
label_26b7cc:
    // 0x26b7cc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_26b7d0:
    if (ctx->pc == 0x26B7D0u) {
        ctx->pc = 0x26B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7CCu;
        // 0x26b7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7D4u;
        goto label_26b7d4;
    }
    ctx->pc = 0x26B7CCu;
    {
        const bool branch_taken_0x26b7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7CCu;
        // 0x26b7d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7cc) {
            ctx->pc = 0x26B7F0u;
            goto label_26b7f0;
        }
    }
    ctx->pc = 0x26B7D4u;
label_26b7d4:
    // 0x26b7d4: 0xc09ac9c  jal         func_26B270
label_26b7d8:
    if (ctx->pc == 0x26B7D8u) {
        ctx->pc = 0x26B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7D4u;
        // 0x26b7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7DCu;
        goto label_26b7dc;
    }
    ctx->pc = 0x26B7D4u;
    SET_GPR_U32(ctx, 31, 0x26B7DCu);
    ctx->pc = 0x26B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7D4u;
    // 0x26b7d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B270u, 0x26B7D4u, 0x26B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7DCu;
label_26b7dc:
    // 0x26b7dc: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x26b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_26b7e0:
    // 0x26b7e0: 0x4410042  bgez        $v0, . + 4 + (0x42 << 2)
label_26b7e4:
    if (ctx->pc == 0x26B7E4u) {
        ctx->pc = 0x26B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E0u;
        // 0x26b7e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7E8u;
        goto label_26b7e8;
    }
    ctx->pc = 0x26B7E0u;
    {
        const bool branch_taken_0x26b7e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E0u;
        // 0x26b7e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e0) {
            ctx->pc = 0x26B8ECu;
            goto label_26b8ec;
        }
    }
    ctx->pc = 0x26B7E8u;
label_26b7e8:
    // 0x26b7e8: 0x10000046  b           . + 4 + (0x46 << 2)
label_26b7ec:
    if (ctx->pc == 0x26B7ECu) {
        ctx->pc = 0x26B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E8u;
        // 0x26b7ec: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B7F0u;
        goto label_26b7f0;
    }
    ctx->pc = 0x26B7E8u;
    {
        const bool branch_taken_0x26b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E8u;
        // 0x26b7ec: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e8) {
            ctx->pc = 0x26B904u;
            goto label_26b904;
        }
    }
    ctx->pc = 0x26B7F0u;
label_26b7f0:
    // 0x26b7f0: 0xc6400250  lwc1        $f0, 0x250($s2)
    ctx->pc = 0x26b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b7f4:
    // 0x26b7f4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26b7f8:
    // 0x26b7f8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x26b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b7fc:
    // 0x26b7fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26b7fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26b800:
    // 0x26b800: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x26b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b804:
    // 0x26b804: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x26b804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b808:
    // 0x26b808: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x26b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26b80c:
    // 0x26b80c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x26b80cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26b810:
    // 0x26b810: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26b810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26b814:
    // 0x26b814: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26b814u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_26b818:
    // 0x26b818: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26b818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_26b81c:
    // 0x26b81c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x26b81cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b820:
    // 0x26b820: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x26b820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b824:
    // 0x26b824: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x26b824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b828:
    // 0x26b828: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26b828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b82c:
    // 0x26b82c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26b82cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26b830:
    // 0x26b830: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26b830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b834:
    // 0x26b834: 0xc083bc0  jal         func_20EF00
label_26b838:
    if (ctx->pc == 0x26B838u) {
        ctx->pc = 0x26B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B834u;
        // 0x26b838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B83Cu;
        goto label_26b83c;
    }
    ctx->pc = 0x26B834u;
    SET_GPR_U32(ctx, 31, 0x26B83Cu);
    ctx->pc = 0x26B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B834u;
    // 0x26b838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x26B834u, 0x26B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B83Cu;
label_26b83c:
    // 0x26b83c: 0xa2500220  sb          $s0, 0x220($s2)
    ctx->pc = 0x26b83cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 16));
label_26b840:
    // 0x26b840: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26b840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26b844:
    // 0x26b844: 0xa2500223  sb          $s0, 0x223($s2)
    ctx->pc = 0x26b844u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 16));
label_26b848:
    // 0x26b848: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26b84c:
    // 0x26b84c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26b84cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b850:
    // 0x26b850: 0xc0f6a96  jal         func_3DAA58
label_26b854:
    if (ctx->pc == 0x26B854u) {
        ctx->pc = 0x26B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B850u;
        // 0x26b854: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B858u;
        goto label_26b858;
    }
    ctx->pc = 0x26B850u;
    SET_GPR_U32(ctx, 31, 0x26B858u);
    ctx->pc = 0x26B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B850u;
    // 0x26b854: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26B850u, 0x26B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B858u;
label_26b858:
    // 0x26b858: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26b858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26b85c:
    // 0x26b85c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26b85cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26b860:
    // 0x26b860: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x26b860u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_26b864:
    // 0x26b864: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x26b864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_26b868:
    // 0x26b868: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x26b868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_26b86c:
    // 0x26b86c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26b86cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26b870:
    // 0x26b870: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26b870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26b874:
    // 0x26b874: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x26b874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26b878:
    // 0x26b878: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x26b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
label_26b87c:
    // 0x26b87c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b880:
    // 0x26b880: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b884:
    // 0x26b884: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x26b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b888:
    // 0x26b888: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x26b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b88c:
    // 0x26b88c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26b88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b890:
    // 0x26b890: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26b890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b894:
    // 0x26b894: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26b894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b898:
    // 0x26b898: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x26b898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b89c:
    // 0x26b89c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26b89cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26b8a0:
    // 0x26b8a0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b8a4:
    // 0x26b8a4: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x26b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_26b8a8:
    // 0x26b8a8: 0xc0b7264  jal         func_2DC990
label_26b8ac:
    if (ctx->pc == 0x26B8ACu) {
        ctx->pc = 0x26B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8A8u;
        // 0x26b8ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8B0u;
        goto label_26b8b0;
    }
    ctx->pc = 0x26B8A8u;
    SET_GPR_U32(ctx, 31, 0x26B8B0u);
    ctx->pc = 0x26B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B8A8u;
    // 0x26b8ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x26B8A8u, 0x26B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8B0u;
label_26b8b0:
    // 0x26b8b0: 0x10000052  b           . + 4 + (0x52 << 2)
label_26b8b4:
    if (ctx->pc == 0x26B8B4u) {
        ctx->pc = 0x26B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8B0u;
        // 0x26b8b4: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8B8u;
        goto label_26b8b8;
    }
    ctx->pc = 0x26B8B0u;
    {
        const bool branch_taken_0x26b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8B0u;
        // 0x26b8b4: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8b0) {
            ctx->pc = 0x26B9FCu;
            goto label_26b9fc;
        }
    }
    ctx->pc = 0x26B8B8u;
label_26b8b8:
    // 0x26b8b8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26b8bc:
    // 0x26b8bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b8c0:
    // 0x26b8c0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x26b8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26b8c4:
    // 0x26b8c4: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x26b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b8c8:
    // 0x26b8c8: 0x1000004c  b           . + 4 + (0x4C << 2)
label_26b8cc:
    if (ctx->pc == 0x26B8CCu) {
        ctx->pc = 0x26B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8C8u;
        // 0x26b8cc: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8D0u;
        goto label_26b8d0;
    }
    ctx->pc = 0x26B8C8u;
    {
        const bool branch_taken_0x26b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8C8u;
        // 0x26b8cc: 0x8e420260  lw          $v0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8c8) {
            ctx->pc = 0x26B9FCu;
            goto label_26b9fc;
        }
    }
    ctx->pc = 0x26B8D0u;
label_26b8d0:
    // 0x26b8d0: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_26b8d4:
    if (ctx->pc == 0x26B8D4u) {
        ctx->pc = 0x26B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8D0u;
        // 0x26b8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8D8u;
        goto label_26b8d8;
    }
    ctx->pc = 0x26B8D0u;
    {
        const bool branch_taken_0x26b8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8D0u;
        // 0x26b8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8d0) {
            ctx->pc = 0x26B93Cu;
            goto label_26b93c;
        }
    }
    ctx->pc = 0x26B8D8u;
label_26b8d8:
    // 0x26b8d8: 0xc09ac9c  jal         func_26B270
label_26b8dc:
    if (ctx->pc == 0x26B8DCu) {
        ctx->pc = 0x26B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8D8u;
        // 0x26b8dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8E0u;
        goto label_26b8e0;
    }
    ctx->pc = 0x26B8D8u;
    SET_GPR_U32(ctx, 31, 0x26B8E0u);
    ctx->pc = 0x26B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B8D8u;
    // 0x26b8dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B270u, 0x26B8D8u, 0x26B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E0u;
label_26b8e0:
    // 0x26b8e0: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x26b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_26b8e4:
    // 0x26b8e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26b8e8:
    if (ctx->pc == 0x26B8E8u) {
        ctx->pc = 0x26B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8E4u;
        // 0x26b8e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B8ECu;
        goto label_26b8ec;
    }
    ctx->pc = 0x26B8E4u;
    {
        const bool branch_taken_0x26b8e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8E4u;
        // 0x26b8e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8e4) {
            ctx->pc = 0x26B900u;
            goto label_26b900;
        }
    }
    ctx->pc = 0x26B8ECu;
label_26b8ec:
    // 0x26b8ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b8f0:
    // 0x26b8f0: 0x0  nop
    ctx->pc = 0x26b8f0u;
    // NOP
label_26b8f4:
    // 0x26b8f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_26b8f8:
    // 0x26b8f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_26b8fc:
    if (ctx->pc == 0x26B8FCu) {
        ctx->pc = 0x26B900u;
        goto label_26b900;
    }
    ctx->pc = 0x26B8F8u;
    {
        const bool branch_taken_0x26b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b8f8) {
            ctx->pc = 0x26B918u;
            goto label_26b918;
        }
    }
    ctx->pc = 0x26B900u;
label_26b900:
    // 0x26b900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26b904:
    // 0x26b904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26b908:
    // 0x26b908: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x26b908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b90c:
    // 0x26b90c: 0x0  nop
    ctx->pc = 0x26b90cu;
    // NOP
label_26b910:
    // 0x26b910: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_26b914:
    // 0x26b914: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26b914u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26b918:
    // 0x26b918: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26b918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_26b91c:
    // 0x26b91c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26b91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_26b920:
    // 0x26b920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b924:
    // 0x26b924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26b928:
    // 0x26b928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b92c:
    // 0x26b92c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26b92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26b930:
    // 0x26b930: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26b934:
    // 0x26b934: 0x10000030  b           . + 4 + (0x30 << 2)
label_26b938:
    if (ctx->pc == 0x26B938u) {
        ctx->pc = 0x26B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B934u;
        // 0x26b938: 0xe6400258  swc1        $f0, 0x258($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 600), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B93Cu;
        goto label_26b93c;
    }
    ctx->pc = 0x26B934u;
    {
        const bool branch_taken_0x26b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B934u;
        // 0x26b938: 0xe6400258  swc1        $f0, 0x258($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b934) {
            ctx->pc = 0x26B9F8u;
            goto label_26b9f8;
        }
    }
    ctx->pc = 0x26B93Cu;
label_26b93c:
    // 0x26b93c: 0xc6400250  lwc1        $f0, 0x250($s2)
    ctx->pc = 0x26b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b940:
    // 0x26b940: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x26b940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26b944:
    // 0x26b944: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x26b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b948:
    // 0x26b948: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x26b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b94c:
    // 0x26b94c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x26b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b950:
    // 0x26b950: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26b950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26b954:
    // 0x26b954: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x26b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26b958:
    // 0x26b958: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x26b958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26b95c:
    // 0x26b95c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26b95cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_26b960:
    // 0x26b960: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x26b960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_26b964:
    // 0x26b964: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x26b964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b968:
    // 0x26b968: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x26b968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b96c:
    // 0x26b96c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x26b96cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b970:
    // 0x26b970: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b974:
    // 0x26b974: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26b974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26b978:
    // 0x26b978: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b97c:
    // 0x26b97c: 0xc083bc0  jal         func_20EF00
label_26b980:
    if (ctx->pc == 0x26B980u) {
        ctx->pc = 0x26B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B97Cu;
        // 0x26b980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B984u;
        goto label_26b984;
    }
    ctx->pc = 0x26B97Cu;
    SET_GPR_U32(ctx, 31, 0x26B984u);
    ctx->pc = 0x26B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B97Cu;
    // 0x26b980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x26B97Cu, 0x26B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B984u;
label_26b984:
    // 0x26b984: 0xa2500220  sb          $s0, 0x220($s2)
    ctx->pc = 0x26b984u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 544), (uint8_t)GPR_U32(ctx, 16));
label_26b988:
    // 0x26b988: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26b988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26b98c:
    // 0x26b98c: 0xa2500224  sb          $s0, 0x224($s2)
    ctx->pc = 0x26b98cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 548), (uint8_t)GPR_U32(ctx, 16));
label_26b990:
    // 0x26b990: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26b994:
    // 0x26b994: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26b994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b998:
    // 0x26b998: 0xc0f6a96  jal         func_3DAA58
label_26b99c:
    if (ctx->pc == 0x26B99Cu) {
        ctx->pc = 0x26B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B998u;
        // 0x26b99c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9A0u;
        goto label_26b9a0;
    }
    ctx->pc = 0x26B998u;
    SET_GPR_U32(ctx, 31, 0x26B9A0u);
    ctx->pc = 0x26B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B998u;
    // 0x26b99c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26B998u, 0x26B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9A0u;
label_26b9a0:
    // 0x26b9a0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26b9a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26b9a4:
    // 0x26b9a4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26b9a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26b9a8:
    // 0x26b9a8: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x26b9a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_26b9ac:
    // 0x26b9ac: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x26b9acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_26b9b0:
    // 0x26b9b0: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x26b9b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_26b9b4:
    // 0x26b9b4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26b9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26b9b8:
    // 0x26b9b8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26b9b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26b9bc:
    // 0x26b9bc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x26b9bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26b9c0:
    // 0x26b9c0: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x26b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
label_26b9c4:
    // 0x26b9c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b9c8:
    // 0x26b9c8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b9cc:
    // 0x26b9cc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x26b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b9d0:
    // 0x26b9d0: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x26b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26b9d4:
    // 0x26b9d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b9d8:
    // 0x26b9d8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26b9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b9dc:
    // 0x26b9dc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26b9dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26b9e0:
    // 0x26b9e0: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x26b9e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26b9e4:
    // 0x26b9e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26b9e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26b9e8:
    // 0x26b9e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_26b9ec:
    // 0x26b9ec: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x26b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_26b9f0:
    // 0x26b9f0: 0xc0b7264  jal         func_2DC990
label_26b9f4:
    if (ctx->pc == 0x26B9F4u) {
        ctx->pc = 0x26B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9F0u;
        // 0x26b9f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B9F8u;
        goto label_26b9f8;
    }
    ctx->pc = 0x26B9F0u;
    SET_GPR_U32(ctx, 31, 0x26B9F8u);
    ctx->pc = 0x26B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B9F0u;
    // 0x26b9f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x26B9F0u, 0x26B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9F8u;
label_26b9f8:
    // 0x26b9f8: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x26b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_26b9fc:
    // 0x26b9fc: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_26ba00:
    if (ctx->pc == 0x26BA00u) {
        ctx->pc = 0x26BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9FCu;
        // 0x26ba00: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA04u;
        goto label_26ba04;
    }
    ctx->pc = 0x26B9FCu;
    {
        const bool branch_taken_0x26b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9FCu;
        // 0x26ba00: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9fc) {
            ctx->pc = 0x26BB5Cu;
            goto label_26bb5c;
        }
    }
    ctx->pc = 0x26BA04u;
label_26ba04:
    // 0x26ba04: 0xc0f6a96  jal         func_3DAA58
label_26ba08:
    if (ctx->pc == 0x26BA08u) {
        ctx->pc = 0x26BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA04u;
        // 0x26ba08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA0Cu;
        goto label_26ba0c;
    }
    ctx->pc = 0x26BA04u;
    SET_GPR_U32(ctx, 31, 0x26BA0Cu);
    ctx->pc = 0x26BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA04u;
    // 0x26ba08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26BA04u, 0x26BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA0Cu;
label_26ba0c:
    // 0x26ba0c: 0x8e440260  lw          $a0, 0x260($s2)
    ctx->pc = 0x26ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_26ba10:
    // 0x26ba10: 0x26450270  addiu       $a1, $s2, 0x270
    ctx->pc = 0x26ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
label_26ba14:
    // 0x26ba14: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x26ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_26ba18:
    // 0x26ba18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26ba1c:
    // 0x26ba1c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26ba20:
    // 0x26ba20: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26ba20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26ba24:
    // 0x26ba24: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x26ba24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26ba28:
    // 0x26ba28: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ba28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ba2c:
    // 0x26ba2c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ba30:
    // 0x26ba30: 0xc0f6a96  jal         func_3DAA58
label_26ba34:
    if (ctx->pc == 0x26BA34u) {
        ctx->pc = 0x26BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA30u;
        // 0x26ba34: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA38u;
        goto label_26ba38;
    }
    ctx->pc = 0x26BA30u;
    SET_GPR_U32(ctx, 31, 0x26BA38u);
    ctx->pc = 0x26BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA30u;
    // 0x26ba34: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26BA30u, 0x26BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA38u;
label_26ba38:
    // 0x26ba38: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26ba38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26ba3c:
    // 0x26ba3c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x26ba3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26ba40:
    // 0x26ba40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ba40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ba44:
    // 0x26ba44: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x26ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ba48:
    // 0x26ba48: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26ba4c:
    // 0x26ba4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ba50:
    // 0x26ba50: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x26ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_26ba54:
    // 0x26ba54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26ba54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26ba58:
    // 0x26ba58: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x26ba58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_26ba5c:
    // 0x26ba5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ba5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ba60:
    // 0x26ba60: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ba64:
    // 0x26ba64: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x26ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26ba68:
    // 0x26ba68: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x26ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26ba6c:
    // 0x26ba6c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x26ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ba70:
    // 0x26ba70: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x26ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ba74:
    // 0x26ba74: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x26ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26ba78:
    // 0x26ba78: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x26ba78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26ba7c:
    // 0x26ba7c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x26ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26ba80:
    // 0x26ba80: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x26ba80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26ba84:
    // 0x26ba84: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x26ba84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_26ba88:
    // 0x26ba88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26ba88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26ba8c:
    // 0x26ba8c: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x26ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ba90:
    // 0x26ba90: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x26ba90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26ba94:
    // 0x26ba94: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x26ba94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_26ba98:
    // 0x26ba98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ba98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ba9c:
    // 0x26ba9c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26baa0:
    // 0x26baa0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26baa4:
    // 0x26baa4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x26baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26baa8:
    // 0x26baa8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26baac:
    // 0x26baac: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x26baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26bab0:
    // 0x26bab0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26bab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26bab4:
    // 0x26bab4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26bab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26bab8:
    // 0x26bab8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26bab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26babc:
    // 0x26babc: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x26babcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_26bac0:
    // 0x26bac0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26bac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26bac4:
    // 0x26bac4: 0xfa410230  sqc2        $vf1, 0x230($s2)
    ctx->pc = 0x26bac4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 560), _mm_castps_si128(ctx->vu0_vf[1]));
label_26bac8:
    // 0x26bac8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26bac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26bacc:
    // 0x26bacc: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x26baccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_26bad0:
    // 0x26bad0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26bad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26bad4:
    // 0x26bad4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26bad8:
    // 0x26bad8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26badc:
    // 0x26badc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x26badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bae0:
    // 0x26bae0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26bae4:
    // 0x26bae4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x26bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26bae8:
    // 0x26bae8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26baec:
    // 0x26baec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26baecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26baf0:
    // 0x26baf0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26baf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26baf4:
    // 0x26baf4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x26baf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_26baf8:
    // 0x26baf8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26baf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26bafc:
    // 0x26bafc: 0xfa410240  sqc2        $vf1, 0x240($s2)
    ctx->pc = 0x26bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 576), _mm_castps_si128(ctx->vu0_vf[1]));
label_26bb00:
    // 0x26bb00: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26bb04:
    // 0x26bb04: 0xc0c48da  jal         func_312368
label_26bb08:
    if (ctx->pc == 0x26BB08u) {
        ctx->pc = 0x26BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB04u;
        // 0x26bb08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB0Cu;
        goto label_26bb0c;
    }
    ctx->pc = 0x26BB04u;
    SET_GPR_U32(ctx, 31, 0x26BB0Cu);
    ctx->pc = 0x26BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB04u;
    // 0x26bb08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x26BB04u, 0x26BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB0Cu;
label_26bb0c:
    // 0x26bb0c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x26bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_26bb10:
    // 0x26bb10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_26bb14:
    if (ctx->pc == 0x26BB14u) {
        ctx->pc = 0x26BB18u;
        goto label_26bb18;
    }
    ctx->pc = 0x26BB10u;
    {
        const bool branch_taken_0x26bb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb10) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BB18u;
label_26bb18:
    // 0x26bb18: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26bb1c:
    // 0x26bb1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26bb20:
    // 0x26bb20: 0xc076508  jal         func_1D9420
label_26bb24:
    if (ctx->pc == 0x26BB24u) {
        ctx->pc = 0x26BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB20u;
        // 0x26bb24: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB28u;
        goto label_26bb28;
    }
    ctx->pc = 0x26BB20u;
    SET_GPR_U32(ctx, 31, 0x26BB28u);
    ctx->pc = 0x26BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB20u;
    // 0x26bb24: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9420u, 0x26BB20u, 0x26BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB28u;
label_26bb28:
    // 0x26bb28: 0xc0843ea  jal         func_210FA8
label_26bb2c:
    if (ctx->pc == 0x26BB2Cu) {
        ctx->pc = 0x26BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB28u;
        // 0x26bb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB30u;
        goto label_26bb30;
    }
    ctx->pc = 0x26BB28u;
    SET_GPR_U32(ctx, 31, 0x26BB30u);
    ctx->pc = 0x26BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB28u;
    // 0x26bb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x26BB28u, 0x26BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB30u;
label_26bb30:
    // 0x26bb30: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x26bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_26bb34:
    // 0x26bb34: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x26bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_26bb38:
    // 0x26bb38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_26bb3c:
    if (ctx->pc == 0x26BB3Cu) {
        ctx->pc = 0x26BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB38u;
        // 0x26bb3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB40u;
        goto label_26bb40;
    }
    ctx->pc = 0x26BB38u;
    {
        const bool branch_taken_0x26bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB38u;
        // 0x26bb3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb38) {
            ctx->pc = 0x26BB50u;
            goto label_26bb50;
        }
    }
    ctx->pc = 0x26BB40u;
label_26bb40:
    // 0x26bb40: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x26bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26bb44:
    // 0x26bb44: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x26bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26bb48:
    // 0x26bb48: 0x40f809  jalr        $v0
label_26bb4c:
    if (ctx->pc == 0x26BB4Cu) {
        ctx->pc = 0x26BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB48u;
        // 0x26bb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB50u;
        goto label_26bb50;
    }
    ctx->pc = 0x26BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BB50u);
        ctx->pc = 0x26BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB48u;
        // 0x26bb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BB48u, 0x26BB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BB50u;
label_26bb50:
    // 0x26bb50: 0xc0843aa  jal         func_210EA8
label_26bb54:
    if (ctx->pc == 0x26BB54u) {
        ctx->pc = 0x26BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB50u;
        // 0x26bb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB58u;
        goto label_26bb58;
    }
    ctx->pc = 0x26BB50u;
    SET_GPR_U32(ctx, 31, 0x26BB58u);
    ctx->pc = 0x26BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB50u;
    // 0x26bb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x26BB50u, 0x26BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB58u;
label_26bb58:
    // 0x26bb58: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x26bb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26bb5c:
    // 0x26bb5c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x26bb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_26bb60:
    // 0x26bb60: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x26bb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26bb64:
    // 0x26bb64: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x26bb64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_26bb68:
    // 0x26bb68: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x26bb68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26bb6c:
    // 0x26bb6c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x26bb6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_26bb70:
    // 0x26bb70: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x26bb70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26bb74:
    // 0x26bb74: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x26bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_26bb78:
    // 0x26bb78: 0x3e00008  jr          $ra
label_26bb7c:
    if (ctx->pc == 0x26BB7Cu) {
        ctx->pc = 0x26BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB78u;
        // 0x26bb7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB80u;
        goto label_fallthrough_0x26bb78;
    }
    ctx->pc = 0x26BB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB78u;
        // 0x26bb7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26bb78:
    ctx->pc = 0x26BB80u;
}
