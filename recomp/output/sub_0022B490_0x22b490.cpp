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

// Function: sub_0022B490
// Address: 0x22b490 - 0x22c600
void sub_0022B490_0x22b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B490_0x22b490");
#endif

    switch (ctx->pc) {
        case 0x22b490u: goto label_22b490;
        case 0x22b494u: goto label_22b494;
        case 0x22b498u: goto label_22b498;
        case 0x22b49cu: goto label_22b49c;
        case 0x22b4a0u: goto label_22b4a0;
        case 0x22b4a4u: goto label_22b4a4;
        case 0x22b4a8u: goto label_22b4a8;
        case 0x22b4acu: goto label_22b4ac;
        case 0x22b4b0u: goto label_22b4b0;
        case 0x22b4b4u: goto label_22b4b4;
        case 0x22b4b8u: goto label_22b4b8;
        case 0x22b4bcu: goto label_22b4bc;
        case 0x22b4c0u: goto label_22b4c0;
        case 0x22b4c4u: goto label_22b4c4;
        case 0x22b4c8u: goto label_22b4c8;
        case 0x22b4ccu: goto label_22b4cc;
        case 0x22b4d0u: goto label_22b4d0;
        case 0x22b4d4u: goto label_22b4d4;
        case 0x22b4d8u: goto label_22b4d8;
        case 0x22b4dcu: goto label_22b4dc;
        case 0x22b4e0u: goto label_22b4e0;
        case 0x22b4e4u: goto label_22b4e4;
        case 0x22b4e8u: goto label_22b4e8;
        case 0x22b4ecu: goto label_22b4ec;
        case 0x22b4f0u: goto label_22b4f0;
        case 0x22b4f4u: goto label_22b4f4;
        case 0x22b4f8u: goto label_22b4f8;
        case 0x22b4fcu: goto label_22b4fc;
        case 0x22b500u: goto label_22b500;
        case 0x22b504u: goto label_22b504;
        case 0x22b508u: goto label_22b508;
        case 0x22b50cu: goto label_22b50c;
        case 0x22b510u: goto label_22b510;
        case 0x22b514u: goto label_22b514;
        case 0x22b518u: goto label_22b518;
        case 0x22b51cu: goto label_22b51c;
        case 0x22b520u: goto label_22b520;
        case 0x22b524u: goto label_22b524;
        case 0x22b528u: goto label_22b528;
        case 0x22b52cu: goto label_22b52c;
        case 0x22b530u: goto label_22b530;
        case 0x22b534u: goto label_22b534;
        case 0x22b538u: goto label_22b538;
        case 0x22b53cu: goto label_22b53c;
        case 0x22b540u: goto label_22b540;
        case 0x22b544u: goto label_22b544;
        case 0x22b548u: goto label_22b548;
        case 0x22b54cu: goto label_22b54c;
        case 0x22b550u: goto label_22b550;
        case 0x22b554u: goto label_22b554;
        case 0x22b558u: goto label_22b558;
        case 0x22b55cu: goto label_22b55c;
        case 0x22b560u: goto label_22b560;
        case 0x22b564u: goto label_22b564;
        case 0x22b568u: goto label_22b568;
        case 0x22b56cu: goto label_22b56c;
        case 0x22b570u: goto label_22b570;
        case 0x22b574u: goto label_22b574;
        case 0x22b578u: goto label_22b578;
        case 0x22b57cu: goto label_22b57c;
        case 0x22b580u: goto label_22b580;
        case 0x22b584u: goto label_22b584;
        case 0x22b588u: goto label_22b588;
        case 0x22b58cu: goto label_22b58c;
        case 0x22b590u: goto label_22b590;
        case 0x22b594u: goto label_22b594;
        case 0x22b598u: goto label_22b598;
        case 0x22b59cu: goto label_22b59c;
        case 0x22b5a0u: goto label_22b5a0;
        case 0x22b5a4u: goto label_22b5a4;
        case 0x22b5a8u: goto label_22b5a8;
        case 0x22b5acu: goto label_22b5ac;
        case 0x22b5b0u: goto label_22b5b0;
        case 0x22b5b4u: goto label_22b5b4;
        case 0x22b5b8u: goto label_22b5b8;
        case 0x22b5bcu: goto label_22b5bc;
        case 0x22b5c0u: goto label_22b5c0;
        case 0x22b5c4u: goto label_22b5c4;
        case 0x22b5c8u: goto label_22b5c8;
        case 0x22b5ccu: goto label_22b5cc;
        case 0x22b5d0u: goto label_22b5d0;
        case 0x22b5d4u: goto label_22b5d4;
        case 0x22b5d8u: goto label_22b5d8;
        case 0x22b5dcu: goto label_22b5dc;
        case 0x22b5e0u: goto label_22b5e0;
        case 0x22b5e4u: goto label_22b5e4;
        case 0x22b5e8u: goto label_22b5e8;
        case 0x22b5ecu: goto label_22b5ec;
        case 0x22b5f0u: goto label_22b5f0;
        case 0x22b5f4u: goto label_22b5f4;
        case 0x22b5f8u: goto label_22b5f8;
        case 0x22b5fcu: goto label_22b5fc;
        case 0x22b600u: goto label_22b600;
        case 0x22b604u: goto label_22b604;
        case 0x22b608u: goto label_22b608;
        case 0x22b60cu: goto label_22b60c;
        case 0x22b610u: goto label_22b610;
        case 0x22b614u: goto label_22b614;
        case 0x22b618u: goto label_22b618;
        case 0x22b61cu: goto label_22b61c;
        case 0x22b620u: goto label_22b620;
        case 0x22b624u: goto label_22b624;
        case 0x22b628u: goto label_22b628;
        case 0x22b62cu: goto label_22b62c;
        case 0x22b630u: goto label_22b630;
        case 0x22b634u: goto label_22b634;
        case 0x22b638u: goto label_22b638;
        case 0x22b63cu: goto label_22b63c;
        case 0x22b640u: goto label_22b640;
        case 0x22b644u: goto label_22b644;
        case 0x22b648u: goto label_22b648;
        case 0x22b64cu: goto label_22b64c;
        case 0x22b650u: goto label_22b650;
        case 0x22b654u: goto label_22b654;
        case 0x22b658u: goto label_22b658;
        case 0x22b65cu: goto label_22b65c;
        case 0x22b660u: goto label_22b660;
        case 0x22b664u: goto label_22b664;
        case 0x22b668u: goto label_22b668;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b670u: goto label_22b670;
        case 0x22b674u: goto label_22b674;
        case 0x22b678u: goto label_22b678;
        case 0x22b67cu: goto label_22b67c;
        case 0x22b680u: goto label_22b680;
        case 0x22b684u: goto label_22b684;
        case 0x22b688u: goto label_22b688;
        case 0x22b68cu: goto label_22b68c;
        case 0x22b690u: goto label_22b690;
        case 0x22b694u: goto label_22b694;
        case 0x22b698u: goto label_22b698;
        case 0x22b69cu: goto label_22b69c;
        case 0x22b6a0u: goto label_22b6a0;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6acu: goto label_22b6ac;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6b8u: goto label_22b6b8;
        case 0x22b6bcu: goto label_22b6bc;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6c4u: goto label_22b6c4;
        case 0x22b6c8u: goto label_22b6c8;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6d0u: goto label_22b6d0;
        case 0x22b6d4u: goto label_22b6d4;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6dcu: goto label_22b6dc;
        case 0x22b6e0u: goto label_22b6e0;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6e8u: goto label_22b6e8;
        case 0x22b6ecu: goto label_22b6ec;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b6f8u: goto label_22b6f8;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b700u: goto label_22b700;
        case 0x22b704u: goto label_22b704;
        case 0x22b708u: goto label_22b708;
        case 0x22b70cu: goto label_22b70c;
        case 0x22b710u: goto label_22b710;
        case 0x22b714u: goto label_22b714;
        case 0x22b718u: goto label_22b718;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b720u: goto label_22b720;
        case 0x22b724u: goto label_22b724;
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        case 0x22b858u: goto label_22b858;
        case 0x22b85cu: goto label_22b85c;
        case 0x22b860u: goto label_22b860;
        case 0x22b864u: goto label_22b864;
        case 0x22b868u: goto label_22b868;
        case 0x22b86cu: goto label_22b86c;
        case 0x22b870u: goto label_22b870;
        case 0x22b874u: goto label_22b874;
        case 0x22b878u: goto label_22b878;
        case 0x22b87cu: goto label_22b87c;
        case 0x22b880u: goto label_22b880;
        case 0x22b884u: goto label_22b884;
        case 0x22b888u: goto label_22b888;
        case 0x22b88cu: goto label_22b88c;
        case 0x22b890u: goto label_22b890;
        case 0x22b894u: goto label_22b894;
        case 0x22b898u: goto label_22b898;
        case 0x22b89cu: goto label_22b89c;
        case 0x22b8a0u: goto label_22b8a0;
        case 0x22b8a4u: goto label_22b8a4;
        case 0x22b8a8u: goto label_22b8a8;
        case 0x22b8acu: goto label_22b8ac;
        case 0x22b8b0u: goto label_22b8b0;
        case 0x22b8b4u: goto label_22b8b4;
        case 0x22b8b8u: goto label_22b8b8;
        case 0x22b8bcu: goto label_22b8bc;
        case 0x22b8c0u: goto label_22b8c0;
        case 0x22b8c4u: goto label_22b8c4;
        case 0x22b8c8u: goto label_22b8c8;
        case 0x22b8ccu: goto label_22b8cc;
        case 0x22b8d0u: goto label_22b8d0;
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8d8u: goto label_22b8d8;
        case 0x22b8dcu: goto label_22b8dc;
        case 0x22b8e0u: goto label_22b8e0;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8e8u: goto label_22b8e8;
        case 0x22b8ecu: goto label_22b8ec;
        case 0x22b8f0u: goto label_22b8f0;
        case 0x22b8f4u: goto label_22b8f4;
        case 0x22b8f8u: goto label_22b8f8;
        case 0x22b8fcu: goto label_22b8fc;
        case 0x22b900u: goto label_22b900;
        case 0x22b904u: goto label_22b904;
        case 0x22b908u: goto label_22b908;
        case 0x22b90cu: goto label_22b90c;
        case 0x22b910u: goto label_22b910;
        case 0x22b914u: goto label_22b914;
        case 0x22b918u: goto label_22b918;
        case 0x22b91cu: goto label_22b91c;
        case 0x22b920u: goto label_22b920;
        case 0x22b924u: goto label_22b924;
        case 0x22b928u: goto label_22b928;
        case 0x22b92cu: goto label_22b92c;
        case 0x22b930u: goto label_22b930;
        case 0x22b934u: goto label_22b934;
        case 0x22b938u: goto label_22b938;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b940u: goto label_22b940;
        case 0x22b944u: goto label_22b944;
        case 0x22b948u: goto label_22b948;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b950u: goto label_22b950;
        case 0x22b954u: goto label_22b954;
        case 0x22b958u: goto label_22b958;
        case 0x22b95cu: goto label_22b95c;
        case 0x22b960u: goto label_22b960;
        case 0x22b964u: goto label_22b964;
        case 0x22b968u: goto label_22b968;
        case 0x22b96cu: goto label_22b96c;
        case 0x22b970u: goto label_22b970;
        case 0x22b974u: goto label_22b974;
        case 0x22b978u: goto label_22b978;
        case 0x22b97cu: goto label_22b97c;
        case 0x22b980u: goto label_22b980;
        case 0x22b984u: goto label_22b984;
        case 0x22b988u: goto label_22b988;
        case 0x22b98cu: goto label_22b98c;
        case 0x22b990u: goto label_22b990;
        case 0x22b994u: goto label_22b994;
        case 0x22b998u: goto label_22b998;
        case 0x22b99cu: goto label_22b99c;
        case 0x22b9a0u: goto label_22b9a0;
        case 0x22b9a4u: goto label_22b9a4;
        case 0x22b9a8u: goto label_22b9a8;
        case 0x22b9acu: goto label_22b9ac;
        case 0x22b9b0u: goto label_22b9b0;
        case 0x22b9b4u: goto label_22b9b4;
        case 0x22b9b8u: goto label_22b9b8;
        case 0x22b9bcu: goto label_22b9bc;
        case 0x22b9c0u: goto label_22b9c0;
        case 0x22b9c4u: goto label_22b9c4;
        case 0x22b9c8u: goto label_22b9c8;
        case 0x22b9ccu: goto label_22b9cc;
        case 0x22b9d0u: goto label_22b9d0;
        case 0x22b9d4u: goto label_22b9d4;
        case 0x22b9d8u: goto label_22b9d8;
        case 0x22b9dcu: goto label_22b9dc;
        case 0x22b9e0u: goto label_22b9e0;
        case 0x22b9e4u: goto label_22b9e4;
        case 0x22b9e8u: goto label_22b9e8;
        case 0x22b9ecu: goto label_22b9ec;
        case 0x22b9f0u: goto label_22b9f0;
        case 0x22b9f4u: goto label_22b9f4;
        case 0x22b9f8u: goto label_22b9f8;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba00u: goto label_22ba00;
        case 0x22ba04u: goto label_22ba04;
        case 0x22ba08u: goto label_22ba08;
        case 0x22ba0cu: goto label_22ba0c;
        case 0x22ba10u: goto label_22ba10;
        case 0x22ba14u: goto label_22ba14;
        case 0x22ba18u: goto label_22ba18;
        case 0x22ba1cu: goto label_22ba1c;
        case 0x22ba20u: goto label_22ba20;
        case 0x22ba24u: goto label_22ba24;
        case 0x22ba28u: goto label_22ba28;
        case 0x22ba2cu: goto label_22ba2c;
        case 0x22ba30u: goto label_22ba30;
        case 0x22ba34u: goto label_22ba34;
        case 0x22ba38u: goto label_22ba38;
        case 0x22ba3cu: goto label_22ba3c;
        case 0x22ba40u: goto label_22ba40;
        case 0x22ba44u: goto label_22ba44;
        case 0x22ba48u: goto label_22ba48;
        case 0x22ba4cu: goto label_22ba4c;
        case 0x22ba50u: goto label_22ba50;
        case 0x22ba54u: goto label_22ba54;
        case 0x22ba58u: goto label_22ba58;
        case 0x22ba5cu: goto label_22ba5c;
        case 0x22ba60u: goto label_22ba60;
        case 0x22ba64u: goto label_22ba64;
        case 0x22ba68u: goto label_22ba68;
        case 0x22ba6cu: goto label_22ba6c;
        case 0x22ba70u: goto label_22ba70;
        case 0x22ba74u: goto label_22ba74;
        case 0x22ba78u: goto label_22ba78;
        case 0x22ba7cu: goto label_22ba7c;
        case 0x22ba80u: goto label_22ba80;
        case 0x22ba84u: goto label_22ba84;
        case 0x22ba88u: goto label_22ba88;
        case 0x22ba8cu: goto label_22ba8c;
        case 0x22ba90u: goto label_22ba90;
        case 0x22ba94u: goto label_22ba94;
        case 0x22ba98u: goto label_22ba98;
        case 0x22ba9cu: goto label_22ba9c;
        case 0x22baa0u: goto label_22baa0;
        case 0x22baa4u: goto label_22baa4;
        case 0x22baa8u: goto label_22baa8;
        case 0x22baacu: goto label_22baac;
        case 0x22bab0u: goto label_22bab0;
        case 0x22bab4u: goto label_22bab4;
        case 0x22bab8u: goto label_22bab8;
        case 0x22babcu: goto label_22babc;
        case 0x22bac0u: goto label_22bac0;
        case 0x22bac4u: goto label_22bac4;
        case 0x22bac8u: goto label_22bac8;
        case 0x22baccu: goto label_22bacc;
        case 0x22bad0u: goto label_22bad0;
        case 0x22bad4u: goto label_22bad4;
        case 0x22bad8u: goto label_22bad8;
        case 0x22badcu: goto label_22badc;
        case 0x22bae0u: goto label_22bae0;
        case 0x22bae4u: goto label_22bae4;
        case 0x22bae8u: goto label_22bae8;
        case 0x22baecu: goto label_22baec;
        case 0x22baf0u: goto label_22baf0;
        case 0x22baf4u: goto label_22baf4;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bafcu: goto label_22bafc;
        case 0x22bb00u: goto label_22bb00;
        case 0x22bb04u: goto label_22bb04;
        case 0x22bb08u: goto label_22bb08;
        case 0x22bb0cu: goto label_22bb0c;
        case 0x22bb10u: goto label_22bb10;
        case 0x22bb14u: goto label_22bb14;
        case 0x22bb18u: goto label_22bb18;
        case 0x22bb1cu: goto label_22bb1c;
        case 0x22bb20u: goto label_22bb20;
        case 0x22bb24u: goto label_22bb24;
        case 0x22bb28u: goto label_22bb28;
        case 0x22bb2cu: goto label_22bb2c;
        case 0x22bb30u: goto label_22bb30;
        case 0x22bb34u: goto label_22bb34;
        case 0x22bb38u: goto label_22bb38;
        case 0x22bb3cu: goto label_22bb3c;
        case 0x22bb40u: goto label_22bb40;
        case 0x22bb44u: goto label_22bb44;
        case 0x22bb48u: goto label_22bb48;
        case 0x22bb4cu: goto label_22bb4c;
        case 0x22bb50u: goto label_22bb50;
        case 0x22bb54u: goto label_22bb54;
        case 0x22bb58u: goto label_22bb58;
        case 0x22bb5cu: goto label_22bb5c;
        case 0x22bb60u: goto label_22bb60;
        case 0x22bb64u: goto label_22bb64;
        case 0x22bb68u: goto label_22bb68;
        case 0x22bb6cu: goto label_22bb6c;
        case 0x22bb70u: goto label_22bb70;
        case 0x22bb74u: goto label_22bb74;
        case 0x22bb78u: goto label_22bb78;
        case 0x22bb7cu: goto label_22bb7c;
        case 0x22bb80u: goto label_22bb80;
        case 0x22bb84u: goto label_22bb84;
        case 0x22bb88u: goto label_22bb88;
        case 0x22bb8cu: goto label_22bb8c;
        case 0x22bb90u: goto label_22bb90;
        case 0x22bb94u: goto label_22bb94;
        case 0x22bb98u: goto label_22bb98;
        case 0x22bb9cu: goto label_22bb9c;
        case 0x22bba0u: goto label_22bba0;
        case 0x22bba4u: goto label_22bba4;
        case 0x22bba8u: goto label_22bba8;
        case 0x22bbacu: goto label_22bbac;
        case 0x22bbb0u: goto label_22bbb0;
        case 0x22bbb4u: goto label_22bbb4;
        case 0x22bbb8u: goto label_22bbb8;
        case 0x22bbbcu: goto label_22bbbc;
        case 0x22bbc0u: goto label_22bbc0;
        case 0x22bbc4u: goto label_22bbc4;
        case 0x22bbc8u: goto label_22bbc8;
        case 0x22bbccu: goto label_22bbcc;
        case 0x22bbd0u: goto label_22bbd0;
        case 0x22bbd4u: goto label_22bbd4;
        case 0x22bbd8u: goto label_22bbd8;
        case 0x22bbdcu: goto label_22bbdc;
        case 0x22bbe0u: goto label_22bbe0;
        case 0x22bbe4u: goto label_22bbe4;
        case 0x22bbe8u: goto label_22bbe8;
        case 0x22bbecu: goto label_22bbec;
        case 0x22bbf0u: goto label_22bbf0;
        case 0x22bbf4u: goto label_22bbf4;
        case 0x22bbf8u: goto label_22bbf8;
        case 0x22bbfcu: goto label_22bbfc;
        case 0x22bc00u: goto label_22bc00;
        case 0x22bc04u: goto label_22bc04;
        case 0x22bc08u: goto label_22bc08;
        case 0x22bc0cu: goto label_22bc0c;
        case 0x22bc10u: goto label_22bc10;
        case 0x22bc14u: goto label_22bc14;
        case 0x22bc18u: goto label_22bc18;
        case 0x22bc1cu: goto label_22bc1c;
        case 0x22bc20u: goto label_22bc20;
        case 0x22bc24u: goto label_22bc24;
        case 0x22bc28u: goto label_22bc28;
        case 0x22bc2cu: goto label_22bc2c;
        case 0x22bc30u: goto label_22bc30;
        case 0x22bc34u: goto label_22bc34;
        case 0x22bc38u: goto label_22bc38;
        case 0x22bc3cu: goto label_22bc3c;
        case 0x22bc40u: goto label_22bc40;
        case 0x22bc44u: goto label_22bc44;
        case 0x22bc48u: goto label_22bc48;
        case 0x22bc4cu: goto label_22bc4c;
        case 0x22bc50u: goto label_22bc50;
        case 0x22bc54u: goto label_22bc54;
        case 0x22bc58u: goto label_22bc58;
        case 0x22bc5cu: goto label_22bc5c;
        case 0x22bc60u: goto label_22bc60;
        case 0x22bc64u: goto label_22bc64;
        case 0x22bc68u: goto label_22bc68;
        case 0x22bc6cu: goto label_22bc6c;
        case 0x22bc70u: goto label_22bc70;
        case 0x22bc74u: goto label_22bc74;
        case 0x22bc78u: goto label_22bc78;
        case 0x22bc7cu: goto label_22bc7c;
        case 0x22bc80u: goto label_22bc80;
        case 0x22bc84u: goto label_22bc84;
        case 0x22bc88u: goto label_22bc88;
        case 0x22bc8cu: goto label_22bc8c;
        case 0x22bc90u: goto label_22bc90;
        case 0x22bc94u: goto label_22bc94;
        case 0x22bc98u: goto label_22bc98;
        case 0x22bc9cu: goto label_22bc9c;
        case 0x22bca0u: goto label_22bca0;
        case 0x22bca4u: goto label_22bca4;
        case 0x22bca8u: goto label_22bca8;
        case 0x22bcacu: goto label_22bcac;
        case 0x22bcb0u: goto label_22bcb0;
        case 0x22bcb4u: goto label_22bcb4;
        case 0x22bcb8u: goto label_22bcb8;
        case 0x22bcbcu: goto label_22bcbc;
        case 0x22bcc0u: goto label_22bcc0;
        case 0x22bcc4u: goto label_22bcc4;
        case 0x22bcc8u: goto label_22bcc8;
        case 0x22bcccu: goto label_22bccc;
        case 0x22bcd0u: goto label_22bcd0;
        case 0x22bcd4u: goto label_22bcd4;
        case 0x22bcd8u: goto label_22bcd8;
        case 0x22bcdcu: goto label_22bcdc;
        case 0x22bce0u: goto label_22bce0;
        case 0x22bce4u: goto label_22bce4;
        case 0x22bce8u: goto label_22bce8;
        case 0x22bcecu: goto label_22bcec;
        case 0x22bcf0u: goto label_22bcf0;
        case 0x22bcf4u: goto label_22bcf4;
        case 0x22bcf8u: goto label_22bcf8;
        case 0x22bcfcu: goto label_22bcfc;
        case 0x22bd00u: goto label_22bd00;
        case 0x22bd04u: goto label_22bd04;
        case 0x22bd08u: goto label_22bd08;
        case 0x22bd0cu: goto label_22bd0c;
        case 0x22bd10u: goto label_22bd10;
        case 0x22bd14u: goto label_22bd14;
        case 0x22bd18u: goto label_22bd18;
        case 0x22bd1cu: goto label_22bd1c;
        case 0x22bd20u: goto label_22bd20;
        case 0x22bd24u: goto label_22bd24;
        case 0x22bd28u: goto label_22bd28;
        case 0x22bd2cu: goto label_22bd2c;
        case 0x22bd30u: goto label_22bd30;
        case 0x22bd34u: goto label_22bd34;
        case 0x22bd38u: goto label_22bd38;
        case 0x22bd3cu: goto label_22bd3c;
        case 0x22bd40u: goto label_22bd40;
        case 0x22bd44u: goto label_22bd44;
        case 0x22bd48u: goto label_22bd48;
        case 0x22bd4cu: goto label_22bd4c;
        case 0x22bd50u: goto label_22bd50;
        case 0x22bd54u: goto label_22bd54;
        case 0x22bd58u: goto label_22bd58;
        case 0x22bd5cu: goto label_22bd5c;
        case 0x22bd60u: goto label_22bd60;
        case 0x22bd64u: goto label_22bd64;
        case 0x22bd68u: goto label_22bd68;
        case 0x22bd6cu: goto label_22bd6c;
        case 0x22bd70u: goto label_22bd70;
        case 0x22bd74u: goto label_22bd74;
        case 0x22bd78u: goto label_22bd78;
        case 0x22bd7cu: goto label_22bd7c;
        case 0x22bd80u: goto label_22bd80;
        case 0x22bd84u: goto label_22bd84;
        case 0x22bd88u: goto label_22bd88;
        case 0x22bd8cu: goto label_22bd8c;
        case 0x22bd90u: goto label_22bd90;
        case 0x22bd94u: goto label_22bd94;
        case 0x22bd98u: goto label_22bd98;
        case 0x22bd9cu: goto label_22bd9c;
        case 0x22bda0u: goto label_22bda0;
        case 0x22bda4u: goto label_22bda4;
        case 0x22bda8u: goto label_22bda8;
        case 0x22bdacu: goto label_22bdac;
        case 0x22bdb0u: goto label_22bdb0;
        case 0x22bdb4u: goto label_22bdb4;
        case 0x22bdb8u: goto label_22bdb8;
        case 0x22bdbcu: goto label_22bdbc;
        case 0x22bdc0u: goto label_22bdc0;
        case 0x22bdc4u: goto label_22bdc4;
        case 0x22bdc8u: goto label_22bdc8;
        case 0x22bdccu: goto label_22bdcc;
        case 0x22bdd0u: goto label_22bdd0;
        case 0x22bdd4u: goto label_22bdd4;
        case 0x22bdd8u: goto label_22bdd8;
        case 0x22bddcu: goto label_22bddc;
        case 0x22bde0u: goto label_22bde0;
        case 0x22bde4u: goto label_22bde4;
        case 0x22bde8u: goto label_22bde8;
        case 0x22bdecu: goto label_22bdec;
        case 0x22bdf0u: goto label_22bdf0;
        case 0x22bdf4u: goto label_22bdf4;
        case 0x22bdf8u: goto label_22bdf8;
        case 0x22bdfcu: goto label_22bdfc;
        case 0x22be00u: goto label_22be00;
        case 0x22be04u: goto label_22be04;
        case 0x22be08u: goto label_22be08;
        case 0x22be0cu: goto label_22be0c;
        case 0x22be10u: goto label_22be10;
        case 0x22be14u: goto label_22be14;
        case 0x22be18u: goto label_22be18;
        case 0x22be1cu: goto label_22be1c;
        case 0x22be20u: goto label_22be20;
        case 0x22be24u: goto label_22be24;
        case 0x22be28u: goto label_22be28;
        case 0x22be2cu: goto label_22be2c;
        case 0x22be30u: goto label_22be30;
        case 0x22be34u: goto label_22be34;
        case 0x22be38u: goto label_22be38;
        case 0x22be3cu: goto label_22be3c;
        case 0x22be40u: goto label_22be40;
        case 0x22be44u: goto label_22be44;
        case 0x22be48u: goto label_22be48;
        case 0x22be4cu: goto label_22be4c;
        case 0x22be50u: goto label_22be50;
        case 0x22be54u: goto label_22be54;
        case 0x22be58u: goto label_22be58;
        case 0x22be5cu: goto label_22be5c;
        case 0x22be60u: goto label_22be60;
        case 0x22be64u: goto label_22be64;
        case 0x22be68u: goto label_22be68;
        case 0x22be6cu: goto label_22be6c;
        case 0x22be70u: goto label_22be70;
        case 0x22be74u: goto label_22be74;
        case 0x22be78u: goto label_22be78;
        case 0x22be7cu: goto label_22be7c;
        case 0x22be80u: goto label_22be80;
        case 0x22be84u: goto label_22be84;
        case 0x22be88u: goto label_22be88;
        case 0x22be8cu: goto label_22be8c;
        case 0x22be90u: goto label_22be90;
        case 0x22be94u: goto label_22be94;
        case 0x22be98u: goto label_22be98;
        case 0x22be9cu: goto label_22be9c;
        case 0x22bea0u: goto label_22bea0;
        case 0x22bea4u: goto label_22bea4;
        case 0x22bea8u: goto label_22bea8;
        case 0x22beacu: goto label_22beac;
        case 0x22beb0u: goto label_22beb0;
        case 0x22beb4u: goto label_22beb4;
        case 0x22beb8u: goto label_22beb8;
        case 0x22bebcu: goto label_22bebc;
        case 0x22bec0u: goto label_22bec0;
        case 0x22bec4u: goto label_22bec4;
        case 0x22bec8u: goto label_22bec8;
        case 0x22beccu: goto label_22becc;
        case 0x22bed0u: goto label_22bed0;
        case 0x22bed4u: goto label_22bed4;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bedcu: goto label_22bedc;
        case 0x22bee0u: goto label_22bee0;
        case 0x22bee4u: goto label_22bee4;
        case 0x22bee8u: goto label_22bee8;
        case 0x22beecu: goto label_22beec;
        case 0x22bef0u: goto label_22bef0;
        case 0x22bef4u: goto label_22bef4;
        case 0x22bef8u: goto label_22bef8;
        case 0x22befcu: goto label_22befc;
        case 0x22bf00u: goto label_22bf00;
        case 0x22bf04u: goto label_22bf04;
        case 0x22bf08u: goto label_22bf08;
        case 0x22bf0cu: goto label_22bf0c;
        case 0x22bf10u: goto label_22bf10;
        case 0x22bf14u: goto label_22bf14;
        case 0x22bf18u: goto label_22bf18;
        case 0x22bf1cu: goto label_22bf1c;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf24u: goto label_22bf24;
        case 0x22bf28u: goto label_22bf28;
        case 0x22bf2cu: goto label_22bf2c;
        case 0x22bf30u: goto label_22bf30;
        case 0x22bf34u: goto label_22bf34;
        case 0x22bf38u: goto label_22bf38;
        case 0x22bf3cu: goto label_22bf3c;
        case 0x22bf40u: goto label_22bf40;
        case 0x22bf44u: goto label_22bf44;
        case 0x22bf48u: goto label_22bf48;
        case 0x22bf4cu: goto label_22bf4c;
        case 0x22bf50u: goto label_22bf50;
        case 0x22bf54u: goto label_22bf54;
        case 0x22bf58u: goto label_22bf58;
        case 0x22bf5cu: goto label_22bf5c;
        case 0x22bf60u: goto label_22bf60;
        case 0x22bf64u: goto label_22bf64;
        case 0x22bf68u: goto label_22bf68;
        case 0x22bf6cu: goto label_22bf6c;
        case 0x22bf70u: goto label_22bf70;
        case 0x22bf74u: goto label_22bf74;
        case 0x22bf78u: goto label_22bf78;
        case 0x22bf7cu: goto label_22bf7c;
        case 0x22bf80u: goto label_22bf80;
        case 0x22bf84u: goto label_22bf84;
        case 0x22bf88u: goto label_22bf88;
        case 0x22bf8cu: goto label_22bf8c;
        case 0x22bf90u: goto label_22bf90;
        case 0x22bf94u: goto label_22bf94;
        case 0x22bf98u: goto label_22bf98;
        case 0x22bf9cu: goto label_22bf9c;
        case 0x22bfa0u: goto label_22bfa0;
        case 0x22bfa4u: goto label_22bfa4;
        case 0x22bfa8u: goto label_22bfa8;
        case 0x22bfacu: goto label_22bfac;
        case 0x22bfb0u: goto label_22bfb0;
        case 0x22bfb4u: goto label_22bfb4;
        case 0x22bfb8u: goto label_22bfb8;
        case 0x22bfbcu: goto label_22bfbc;
        case 0x22bfc0u: goto label_22bfc0;
        case 0x22bfc4u: goto label_22bfc4;
        case 0x22bfc8u: goto label_22bfc8;
        case 0x22bfccu: goto label_22bfcc;
        case 0x22bfd0u: goto label_22bfd0;
        case 0x22bfd4u: goto label_22bfd4;
        case 0x22bfd8u: goto label_22bfd8;
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22bfe0u: goto label_22bfe0;
        case 0x22bfe4u: goto label_22bfe4;
        case 0x22bfe8u: goto label_22bfe8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22bff0u: goto label_22bff0;
        case 0x22bff4u: goto label_22bff4;
        case 0x22bff8u: goto label_22bff8;
        case 0x22bffcu: goto label_22bffc;
        case 0x22c000u: goto label_22c000;
        case 0x22c004u: goto label_22c004;
        case 0x22c008u: goto label_22c008;
        case 0x22c00cu: goto label_22c00c;
        case 0x22c010u: goto label_22c010;
        case 0x22c014u: goto label_22c014;
        case 0x22c018u: goto label_22c018;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c020u: goto label_22c020;
        case 0x22c024u: goto label_22c024;
        case 0x22c028u: goto label_22c028;
        case 0x22c02cu: goto label_22c02c;
        case 0x22c030u: goto label_22c030;
        case 0x22c034u: goto label_22c034;
        case 0x22c038u: goto label_22c038;
        case 0x22c03cu: goto label_22c03c;
        case 0x22c040u: goto label_22c040;
        case 0x22c044u: goto label_22c044;
        case 0x22c048u: goto label_22c048;
        case 0x22c04cu: goto label_22c04c;
        case 0x22c050u: goto label_22c050;
        case 0x22c054u: goto label_22c054;
        case 0x22c058u: goto label_22c058;
        case 0x22c05cu: goto label_22c05c;
        case 0x22c060u: goto label_22c060;
        case 0x22c064u: goto label_22c064;
        case 0x22c068u: goto label_22c068;
        case 0x22c06cu: goto label_22c06c;
        case 0x22c070u: goto label_22c070;
        case 0x22c074u: goto label_22c074;
        case 0x22c078u: goto label_22c078;
        case 0x22c07cu: goto label_22c07c;
        case 0x22c080u: goto label_22c080;
        case 0x22c084u: goto label_22c084;
        case 0x22c088u: goto label_22c088;
        case 0x22c08cu: goto label_22c08c;
        case 0x22c090u: goto label_22c090;
        case 0x22c094u: goto label_22c094;
        case 0x22c098u: goto label_22c098;
        case 0x22c09cu: goto label_22c09c;
        case 0x22c0a0u: goto label_22c0a0;
        case 0x22c0a4u: goto label_22c0a4;
        case 0x22c0a8u: goto label_22c0a8;
        case 0x22c0acu: goto label_22c0ac;
        case 0x22c0b0u: goto label_22c0b0;
        case 0x22c0b4u: goto label_22c0b4;
        case 0x22c0b8u: goto label_22c0b8;
        case 0x22c0bcu: goto label_22c0bc;
        case 0x22c0c0u: goto label_22c0c0;
        case 0x22c0c4u: goto label_22c0c4;
        case 0x22c0c8u: goto label_22c0c8;
        case 0x22c0ccu: goto label_22c0cc;
        case 0x22c0d0u: goto label_22c0d0;
        case 0x22c0d4u: goto label_22c0d4;
        case 0x22c0d8u: goto label_22c0d8;
        case 0x22c0dcu: goto label_22c0dc;
        case 0x22c0e0u: goto label_22c0e0;
        case 0x22c0e4u: goto label_22c0e4;
        case 0x22c0e8u: goto label_22c0e8;
        case 0x22c0ecu: goto label_22c0ec;
        case 0x22c0f0u: goto label_22c0f0;
        case 0x22c0f4u: goto label_22c0f4;
        case 0x22c0f8u: goto label_22c0f8;
        case 0x22c0fcu: goto label_22c0fc;
        case 0x22c100u: goto label_22c100;
        case 0x22c104u: goto label_22c104;
        case 0x22c108u: goto label_22c108;
        case 0x22c10cu: goto label_22c10c;
        case 0x22c110u: goto label_22c110;
        case 0x22c114u: goto label_22c114;
        case 0x22c118u: goto label_22c118;
        case 0x22c11cu: goto label_22c11c;
        case 0x22c120u: goto label_22c120;
        case 0x22c124u: goto label_22c124;
        case 0x22c128u: goto label_22c128;
        case 0x22c12cu: goto label_22c12c;
        case 0x22c130u: goto label_22c130;
        case 0x22c134u: goto label_22c134;
        case 0x22c138u: goto label_22c138;
        case 0x22c13cu: goto label_22c13c;
        case 0x22c140u: goto label_22c140;
        case 0x22c144u: goto label_22c144;
        case 0x22c148u: goto label_22c148;
        case 0x22c14cu: goto label_22c14c;
        case 0x22c150u: goto label_22c150;
        case 0x22c154u: goto label_22c154;
        case 0x22c158u: goto label_22c158;
        case 0x22c15cu: goto label_22c15c;
        case 0x22c160u: goto label_22c160;
        case 0x22c164u: goto label_22c164;
        case 0x22c168u: goto label_22c168;
        case 0x22c16cu: goto label_22c16c;
        case 0x22c170u: goto label_22c170;
        case 0x22c174u: goto label_22c174;
        case 0x22c178u: goto label_22c178;
        case 0x22c17cu: goto label_22c17c;
        case 0x22c180u: goto label_22c180;
        case 0x22c184u: goto label_22c184;
        case 0x22c188u: goto label_22c188;
        case 0x22c18cu: goto label_22c18c;
        case 0x22c190u: goto label_22c190;
        case 0x22c194u: goto label_22c194;
        case 0x22c198u: goto label_22c198;
        case 0x22c19cu: goto label_22c19c;
        case 0x22c1a0u: goto label_22c1a0;
        case 0x22c1a4u: goto label_22c1a4;
        case 0x22c1a8u: goto label_22c1a8;
        case 0x22c1acu: goto label_22c1ac;
        case 0x22c1b0u: goto label_22c1b0;
        case 0x22c1b4u: goto label_22c1b4;
        case 0x22c1b8u: goto label_22c1b8;
        case 0x22c1bcu: goto label_22c1bc;
        case 0x22c1c0u: goto label_22c1c0;
        case 0x22c1c4u: goto label_22c1c4;
        case 0x22c1c8u: goto label_22c1c8;
        case 0x22c1ccu: goto label_22c1cc;
        case 0x22c1d0u: goto label_22c1d0;
        case 0x22c1d4u: goto label_22c1d4;
        case 0x22c1d8u: goto label_22c1d8;
        case 0x22c1dcu: goto label_22c1dc;
        case 0x22c1e0u: goto label_22c1e0;
        case 0x22c1e4u: goto label_22c1e4;
        case 0x22c1e8u: goto label_22c1e8;
        case 0x22c1ecu: goto label_22c1ec;
        case 0x22c1f0u: goto label_22c1f0;
        case 0x22c1f4u: goto label_22c1f4;
        case 0x22c1f8u: goto label_22c1f8;
        case 0x22c1fcu: goto label_22c1fc;
        case 0x22c200u: goto label_22c200;
        case 0x22c204u: goto label_22c204;
        case 0x22c208u: goto label_22c208;
        case 0x22c20cu: goto label_22c20c;
        case 0x22c210u: goto label_22c210;
        case 0x22c214u: goto label_22c214;
        case 0x22c218u: goto label_22c218;
        case 0x22c21cu: goto label_22c21c;
        case 0x22c220u: goto label_22c220;
        case 0x22c224u: goto label_22c224;
        case 0x22c228u: goto label_22c228;
        case 0x22c22cu: goto label_22c22c;
        case 0x22c230u: goto label_22c230;
        case 0x22c234u: goto label_22c234;
        case 0x22c238u: goto label_22c238;
        case 0x22c23cu: goto label_22c23c;
        case 0x22c240u: goto label_22c240;
        case 0x22c244u: goto label_22c244;
        case 0x22c248u: goto label_22c248;
        case 0x22c24cu: goto label_22c24c;
        case 0x22c250u: goto label_22c250;
        case 0x22c254u: goto label_22c254;
        case 0x22c258u: goto label_22c258;
        case 0x22c25cu: goto label_22c25c;
        case 0x22c260u: goto label_22c260;
        case 0x22c264u: goto label_22c264;
        case 0x22c268u: goto label_22c268;
        case 0x22c26cu: goto label_22c26c;
        case 0x22c270u: goto label_22c270;
        case 0x22c274u: goto label_22c274;
        case 0x22c278u: goto label_22c278;
        case 0x22c27cu: goto label_22c27c;
        case 0x22c280u: goto label_22c280;
        case 0x22c284u: goto label_22c284;
        case 0x22c288u: goto label_22c288;
        case 0x22c28cu: goto label_22c28c;
        case 0x22c290u: goto label_22c290;
        case 0x22c294u: goto label_22c294;
        case 0x22c298u: goto label_22c298;
        case 0x22c29cu: goto label_22c29c;
        case 0x22c2a0u: goto label_22c2a0;
        case 0x22c2a4u: goto label_22c2a4;
        case 0x22c2a8u: goto label_22c2a8;
        case 0x22c2acu: goto label_22c2ac;
        case 0x22c2b0u: goto label_22c2b0;
        case 0x22c2b4u: goto label_22c2b4;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2bcu: goto label_22c2bc;
        case 0x22c2c0u: goto label_22c2c0;
        case 0x22c2c4u: goto label_22c2c4;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c2ccu: goto label_22c2cc;
        case 0x22c2d0u: goto label_22c2d0;
        case 0x22c2d4u: goto label_22c2d4;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c2dcu: goto label_22c2dc;
        case 0x22c2e0u: goto label_22c2e0;
        case 0x22c2e4u: goto label_22c2e4;
        case 0x22c2e8u: goto label_22c2e8;
        case 0x22c2ecu: goto label_22c2ec;
        case 0x22c2f0u: goto label_22c2f0;
        case 0x22c2f4u: goto label_22c2f4;
        case 0x22c2f8u: goto label_22c2f8;
        case 0x22c2fcu: goto label_22c2fc;
        case 0x22c300u: goto label_22c300;
        case 0x22c304u: goto label_22c304;
        case 0x22c308u: goto label_22c308;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c310u: goto label_22c310;
        case 0x22c314u: goto label_22c314;
        case 0x22c318u: goto label_22c318;
        case 0x22c31cu: goto label_22c31c;
        case 0x22c320u: goto label_22c320;
        case 0x22c324u: goto label_22c324;
        case 0x22c328u: goto label_22c328;
        case 0x22c32cu: goto label_22c32c;
        case 0x22c330u: goto label_22c330;
        case 0x22c334u: goto label_22c334;
        case 0x22c338u: goto label_22c338;
        case 0x22c33cu: goto label_22c33c;
        case 0x22c340u: goto label_22c340;
        case 0x22c344u: goto label_22c344;
        case 0x22c348u: goto label_22c348;
        case 0x22c34cu: goto label_22c34c;
        case 0x22c350u: goto label_22c350;
        case 0x22c354u: goto label_22c354;
        case 0x22c358u: goto label_22c358;
        case 0x22c35cu: goto label_22c35c;
        case 0x22c360u: goto label_22c360;
        case 0x22c364u: goto label_22c364;
        case 0x22c368u: goto label_22c368;
        case 0x22c36cu: goto label_22c36c;
        case 0x22c370u: goto label_22c370;
        case 0x22c374u: goto label_22c374;
        case 0x22c378u: goto label_22c378;
        case 0x22c37cu: goto label_22c37c;
        case 0x22c380u: goto label_22c380;
        case 0x22c384u: goto label_22c384;
        case 0x22c388u: goto label_22c388;
        case 0x22c38cu: goto label_22c38c;
        case 0x22c390u: goto label_22c390;
        case 0x22c394u: goto label_22c394;
        case 0x22c398u: goto label_22c398;
        case 0x22c39cu: goto label_22c39c;
        case 0x22c3a0u: goto label_22c3a0;
        case 0x22c3a4u: goto label_22c3a4;
        case 0x22c3a8u: goto label_22c3a8;
        case 0x22c3acu: goto label_22c3ac;
        case 0x22c3b0u: goto label_22c3b0;
        case 0x22c3b4u: goto label_22c3b4;
        case 0x22c3b8u: goto label_22c3b8;
        case 0x22c3bcu: goto label_22c3bc;
        case 0x22c3c0u: goto label_22c3c0;
        case 0x22c3c4u: goto label_22c3c4;
        case 0x22c3c8u: goto label_22c3c8;
        case 0x22c3ccu: goto label_22c3cc;
        case 0x22c3d0u: goto label_22c3d0;
        case 0x22c3d4u: goto label_22c3d4;
        case 0x22c3d8u: goto label_22c3d8;
        case 0x22c3dcu: goto label_22c3dc;
        case 0x22c3e0u: goto label_22c3e0;
        case 0x22c3e4u: goto label_22c3e4;
        case 0x22c3e8u: goto label_22c3e8;
        case 0x22c3ecu: goto label_22c3ec;
        case 0x22c3f0u: goto label_22c3f0;
        case 0x22c3f4u: goto label_22c3f4;
        case 0x22c3f8u: goto label_22c3f8;
        case 0x22c3fcu: goto label_22c3fc;
        case 0x22c400u: goto label_22c400;
        case 0x22c404u: goto label_22c404;
        case 0x22c408u: goto label_22c408;
        case 0x22c40cu: goto label_22c40c;
        case 0x22c410u: goto label_22c410;
        case 0x22c414u: goto label_22c414;
        case 0x22c418u: goto label_22c418;
        case 0x22c41cu: goto label_22c41c;
        case 0x22c420u: goto label_22c420;
        case 0x22c424u: goto label_22c424;
        case 0x22c428u: goto label_22c428;
        case 0x22c42cu: goto label_22c42c;
        case 0x22c430u: goto label_22c430;
        case 0x22c434u: goto label_22c434;
        case 0x22c438u: goto label_22c438;
        case 0x22c43cu: goto label_22c43c;
        case 0x22c440u: goto label_22c440;
        case 0x22c444u: goto label_22c444;
        case 0x22c448u: goto label_22c448;
        case 0x22c44cu: goto label_22c44c;
        case 0x22c450u: goto label_22c450;
        case 0x22c454u: goto label_22c454;
        case 0x22c458u: goto label_22c458;
        case 0x22c45cu: goto label_22c45c;
        case 0x22c460u: goto label_22c460;
        case 0x22c464u: goto label_22c464;
        case 0x22c468u: goto label_22c468;
        case 0x22c46cu: goto label_22c46c;
        case 0x22c470u: goto label_22c470;
        case 0x22c474u: goto label_22c474;
        case 0x22c478u: goto label_22c478;
        case 0x22c47cu: goto label_22c47c;
        case 0x22c480u: goto label_22c480;
        case 0x22c484u: goto label_22c484;
        case 0x22c488u: goto label_22c488;
        case 0x22c48cu: goto label_22c48c;
        case 0x22c490u: goto label_22c490;
        case 0x22c494u: goto label_22c494;
        case 0x22c498u: goto label_22c498;
        case 0x22c49cu: goto label_22c49c;
        case 0x22c4a0u: goto label_22c4a0;
        case 0x22c4a4u: goto label_22c4a4;
        case 0x22c4a8u: goto label_22c4a8;
        case 0x22c4acu: goto label_22c4ac;
        case 0x22c4b0u: goto label_22c4b0;
        case 0x22c4b4u: goto label_22c4b4;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4bcu: goto label_22c4bc;
        case 0x22c4c0u: goto label_22c4c0;
        case 0x22c4c4u: goto label_22c4c4;
        case 0x22c4c8u: goto label_22c4c8;
        case 0x22c4ccu: goto label_22c4cc;
        case 0x22c4d0u: goto label_22c4d0;
        case 0x22c4d4u: goto label_22c4d4;
        case 0x22c4d8u: goto label_22c4d8;
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e0u: goto label_22c4e0;
        case 0x22c4e4u: goto label_22c4e4;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c4ecu: goto label_22c4ec;
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c500u: goto label_22c500;
        case 0x22c504u: goto label_22c504;
        case 0x22c508u: goto label_22c508;
        case 0x22c50cu: goto label_22c50c;
        case 0x22c510u: goto label_22c510;
        case 0x22c514u: goto label_22c514;
        case 0x22c518u: goto label_22c518;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c520u: goto label_22c520;
        case 0x22c524u: goto label_22c524;
        case 0x22c528u: goto label_22c528;
        case 0x22c52cu: goto label_22c52c;
        case 0x22c530u: goto label_22c530;
        case 0x22c534u: goto label_22c534;
        case 0x22c538u: goto label_22c538;
        case 0x22c53cu: goto label_22c53c;
        case 0x22c540u: goto label_22c540;
        case 0x22c544u: goto label_22c544;
        case 0x22c548u: goto label_22c548;
        case 0x22c54cu: goto label_22c54c;
        case 0x22c550u: goto label_22c550;
        case 0x22c554u: goto label_22c554;
        case 0x22c558u: goto label_22c558;
        case 0x22c55cu: goto label_22c55c;
        case 0x22c560u: goto label_22c560;
        case 0x22c564u: goto label_22c564;
        case 0x22c568u: goto label_22c568;
        case 0x22c56cu: goto label_22c56c;
        case 0x22c570u: goto label_22c570;
        case 0x22c574u: goto label_22c574;
        case 0x22c578u: goto label_22c578;
        case 0x22c57cu: goto label_22c57c;
        case 0x22c580u: goto label_22c580;
        case 0x22c584u: goto label_22c584;
        case 0x22c588u: goto label_22c588;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c590u: goto label_22c590;
        case 0x22c594u: goto label_22c594;
        case 0x22c598u: goto label_22c598;
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a0u: goto label_22c5a0;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5acu: goto label_22c5ac;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c5b4u: goto label_22c5b4;
        case 0x22c5b8u: goto label_22c5b8;
        case 0x22c5bcu: goto label_22c5bc;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c4u: goto label_22c5c4;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5ccu: goto label_22c5cc;
        case 0x22c5d0u: goto label_22c5d0;
        case 0x22c5d4u: goto label_22c5d4;
        case 0x22c5d8u: goto label_22c5d8;
        case 0x22c5dcu: goto label_22c5dc;
        case 0x22c5e0u: goto label_22c5e0;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5ecu: goto label_22c5ec;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c5f4u: goto label_22c5f4;
        case 0x22c5f8u: goto label_22c5f8;
        case 0x22c5fcu: goto label_22c5fc;
        default: break;
    }

    ctx->pc = 0x22b490u;

label_22b490:
    // 0x22b490: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_22b494:
    // 0x22b494: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x22b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_22b498:
    // 0x22b498: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x22b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_22b49c:
    // 0x22b49c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22b49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22b4a0:
    // 0x22b4a0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x22b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_22b4a4:
    // 0x22b4a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b4a8:
    // 0x22b4a8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x22b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_22b4ac:
    // 0x22b4ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22b4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b4b0:
    // 0x22b4b0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x22b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_22b4b4:
    // 0x22b4b4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x22b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_22b4b8:
    // 0x22b4b8: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x22b4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_22b4bc:
    // 0x22b4bc: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x22b4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_22b4c0:
    // 0x22b4c0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x22b4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_22b4c4:
    // 0x22b4c4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x22b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_22b4c8:
    // 0x22b4c8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22b4c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22b4cc:
    // 0x22b4cc: 0x922200c1  lbu         $v0, 0xC1($s1)
    ctx->pc = 0x22b4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 193)));
label_22b4d0:
    // 0x22b4d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22b4d4:
    // 0x22b4d4: 0x1440043c  bnez        $v0, . + 4 + (0x43C << 2)
label_22b4d8:
    if (ctx->pc == 0x22B4D8u) {
        ctx->pc = 0x22B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4D4u;
        // 0x22b4d8: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4DCu;
        goto label_22b4dc;
    }
    ctx->pc = 0x22B4D4u;
    {
        const bool branch_taken_0x22b4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4D4u;
        // 0x22b4d8: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4d4) {
            ctx->pc = 0x22C5C8u;
            goto label_22c5c8;
        }
    }
    ctx->pc = 0x22B4DCu;
label_22b4dc:
    // 0x22b4dc: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22b4e0:
    // 0x22b4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b4e4:
    // 0x22b4e4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x22b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_22b4e8:
    // 0x22b4e8: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22b4ec:
    // 0x22b4ec: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22b4f0:
    // 0x22b4f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22b4f4:
    if (ctx->pc == 0x22B4F4u) {
        ctx->pc = 0x22B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4F0u;
        // 0x22b4f4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4F8u;
        goto label_22b4f8;
    }
    ctx->pc = 0x22B4F0u;
    {
        const bool branch_taken_0x22b4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4F0u;
        // 0x22b4f4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4f0) {
            ctx->pc = 0x22B500u;
            goto label_22b500;
        }
    }
    ctx->pc = 0x22B4F8u;
label_22b4f8:
    // 0x22b4f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22b4fc:
    if (ctx->pc == 0x22B4FCu) {
        ctx->pc = 0x22B500u;
        goto label_22b500;
    }
    ctx->pc = 0x22B4F8u;
    {
        const bool branch_taken_0x22b4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b4f8) {
            ctx->pc = 0x22B504u;
            goto label_22b504;
        }
    }
    ctx->pc = 0x22B500u;
label_22b500:
    // 0x22b500: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x22b500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_22b504:
    // 0x22b504: 0xc0d8de2  jal         func_363788
label_22b508:
    if (ctx->pc == 0x22B508u) {
        ctx->pc = 0x22B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B504u;
        // 0x22b508: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B50Cu;
        goto label_22b50c;
    }
    ctx->pc = 0x22B504u;
    SET_GPR_U32(ctx, 31, 0x22B50Cu);
    ctx->pc = 0x22B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B504u;
    // 0x22b508: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22B504u, 0x22B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B50Cu;
label_22b50c:
    // 0x22b50c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x22b50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_22b510:
    // 0x22b510: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_22b514:
    if (ctx->pc == 0x22B514u) {
        ctx->pc = 0x22B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B510u;
        // 0x22b514: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B518u;
        goto label_22b518;
    }
    ctx->pc = 0x22B510u;
    {
        const bool branch_taken_0x22b510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b510) {
            ctx->pc = 0x22B514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B510u;
            // 0x22b514: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B528u;
            goto label_22b528;
        }
    }
    ctx->pc = 0x22B518u;
label_22b518:
    // 0x22b518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b51c:
    // 0x22b51c: 0xc084bdc  jal         func_212F70
label_22b520:
    if (ctx->pc == 0x22B520u) {
        ctx->pc = 0x22B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B51Cu;
        // 0x22b520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B524u;
        goto label_22b524;
    }
    ctx->pc = 0x22B51Cu;
    SET_GPR_U32(ctx, 31, 0x22B524u);
    ctx->pc = 0x22B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B51Cu;
    // 0x22b520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F70u, 0x22B51Cu, 0x22B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B524u;
label_22b524:
    // 0x22b524: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22b528:
    // 0x22b528: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_22b52c:
    // 0x22b52c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22b52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22b530:
    // 0x22b530: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_22b534:
    if (ctx->pc == 0x22B534u) {
        ctx->pc = 0x22B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B530u;
        // 0x22b534: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B538u;
        goto label_22b538;
    }
    ctx->pc = 0x22B530u;
    {
        const bool branch_taken_0x22b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b530) {
            ctx->pc = 0x22B534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B530u;
            // 0x22b534: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B54Cu;
            goto label_22b54c;
        }
    }
    ctx->pc = 0x22B538u;
label_22b538:
    // 0x22b538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b53c:
    // 0x22b53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b540:
    // 0x22b540: 0xc08f5b4  jal         func_23D6D0
label_22b544:
    if (ctx->pc == 0x22B544u) {
        ctx->pc = 0x22B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B540u;
        // 0x22b544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B548u;
        goto label_22b548;
    }
    ctx->pc = 0x22B540u;
    SET_GPR_U32(ctx, 31, 0x22B548u);
    ctx->pc = 0x22B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B540u;
    // 0x22b544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x22B540u, 0x22B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B548u;
label_22b548:
    // 0x22b548: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22b54c:
    // 0x22b54c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_22b550:
    // 0x22b550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22b550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22b554:
    // 0x22b554: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_22b558:
    if (ctx->pc == 0x22B558u) {
        ctx->pc = 0x22B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B554u;
        // 0x22b558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B55Cu;
        goto label_22b55c;
    }
    ctx->pc = 0x22B554u;
    {
        const bool branch_taken_0x22b554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B554u;
        // 0x22b558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b554) {
            ctx->pc = 0x22B568u;
            goto label_22b568;
        }
    }
    ctx->pc = 0x22B55Cu;
label_22b55c:
    // 0x22b55c: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x22b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_22b560:
    // 0x22b560: 0xc08f5b4  jal         func_23D6D0
label_22b564:
    if (ctx->pc == 0x22B564u) {
        ctx->pc = 0x22B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B560u;
        // 0x22b564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B568u;
        goto label_22b568;
    }
    ctx->pc = 0x22B560u;
    SET_GPR_U32(ctx, 31, 0x22B568u);
    ctx->pc = 0x22B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B560u;
    // 0x22b564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x22B560u, 0x22B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B568u;
label_22b568:
    // 0x22b568: 0xc0d764e  jal         func_35D938
label_22b56c:
    if (ctx->pc == 0x22B56Cu) {
        ctx->pc = 0x22B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B568u;
        // 0x22b56c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B570u;
        goto label_22b570;
    }
    ctx->pc = 0x22B568u;
    SET_GPR_U32(ctx, 31, 0x22B570u);
    ctx->pc = 0x22B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B568u;
    // 0x22b56c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D938u, 0x22B568u, 0x22B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B570u;
label_22b570:
    // 0x22b570: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_22b574:
    if (ctx->pc == 0x22B574u) {
        ctx->pc = 0x22B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B570u;
        // 0x22b574: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B578u;
        goto label_22b578;
    }
    ctx->pc = 0x22B570u;
    {
        const bool branch_taken_0x22b570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b570) {
            ctx->pc = 0x22B574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B570u;
            // 0x22b574: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B58Cu;
            goto label_22b58c;
        }
    }
    ctx->pc = 0x22B578u;
label_22b578:
    // 0x22b578: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22b57c:
    // 0x22b57c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22b57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22b580:
    // 0x22b580: 0x14400412  bnez        $v0, . + 4 + (0x412 << 2)
label_22b584:
    if (ctx->pc == 0x22B584u) {
        ctx->pc = 0x22B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B580u;
        // 0x22b584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B588u;
        goto label_22b588;
    }
    ctx->pc = 0x22B580u;
    {
        const bool branch_taken_0x22b580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B580u;
        // 0x22b584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b580) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22B588u;
label_22b588:
    // 0x22b588: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22b58c:
    // 0x22b58c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b590:
    // 0x22b590: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x22b590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_22b594:
    // 0x22b594: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22b594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b598:
    // 0x22b598: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x22b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b59c:
    // 0x22b59c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b5a0:
    // 0x22b5a0: 0x0  nop
    ctx->pc = 0x22b5a0u;
    // NOP
label_22b5a4:
    // 0x22b5a4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_22b5a8:
    if (ctx->pc == 0x22B5A8u) {
        ctx->pc = 0x22B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5A4u;
        // 0x22b5a8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5ACu;
        goto label_22b5ac;
    }
    ctx->pc = 0x22B5A4u;
    {
        const bool branch_taken_0x22b5a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b5a4) {
            ctx->pc = 0x22B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B5A4u;
            // 0x22b5a8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B5ACu;
            goto label_22b5ac;
        }
    }
    ctx->pc = 0x22B5ACu;
label_22b5ac:
    // 0x22b5ac: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x22b5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_22b5b0:
    // 0x22b5b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_22b5b4:
    if (ctx->pc == 0x22B5B4u) {
        ctx->pc = 0x22B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5B0u;
        // 0x22b5b4: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5B8u;
        goto label_22b5b8;
    }
    ctx->pc = 0x22B5B0u;
    {
        const bool branch_taken_0x22b5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5B0u;
        // 0x22b5b4: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5b0) {
            ctx->pc = 0x22B5E4u;
            goto label_22b5e4;
        }
    }
    ctx->pc = 0x22B5B8u;
label_22b5b8:
    // 0x22b5b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_22b5bc:
    if (ctx->pc == 0x22B5BCu) {
        ctx->pc = 0x22B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5B8u;
        // 0x22b5bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5C0u;
        goto label_22b5c0;
    }
    ctx->pc = 0x22B5B8u;
    {
        const bool branch_taken_0x22b5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5B8u;
        // 0x22b5bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5b8) {
            ctx->pc = 0x22B5E8u;
            goto label_22b5e8;
        }
    }
    ctx->pc = 0x22B5C0u;
label_22b5c0:
    // 0x22b5c0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22b5c4:
    // 0x22b5c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22b5c8:
    if (ctx->pc == 0x22B5C8u) {
        ctx->pc = 0x22B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5C4u;
        // 0x22b5c8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5CCu;
        goto label_22b5cc;
    }
    ctx->pc = 0x22B5C4u;
    {
        const bool branch_taken_0x22b5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b5c4) {
            ctx->pc = 0x22B5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B5C4u;
            // 0x22b5c8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B5E8u;
            goto label_22b5e8;
        }
    }
    ctx->pc = 0x22B5CCu;
label_22b5cc:
    // 0x22b5cc: 0xc06b600  jal         func_1AD800
label_22b5d0:
    if (ctx->pc == 0x22B5D0u) {
        ctx->pc = 0x22B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5CCu;
        // 0x22b5d0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5D4u;
        goto label_22b5d4;
    }
    ctx->pc = 0x22B5CCu;
    SET_GPR_U32(ctx, 31, 0x22B5D4u);
    ctx->pc = 0x22B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5CCu;
    // 0x22b5d0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22B5CCu, 0x22B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5D4u;
label_22b5d4:
    // 0x22b5d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_22b5d8:
    if (ctx->pc == 0x22B5D8u) {
        ctx->pc = 0x22B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5D4u;
        // 0x22b5d8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5DCu;
        goto label_22b5dc;
    }
    ctx->pc = 0x22B5D4u;
    {
        const bool branch_taken_0x22b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b5d4) {
            ctx->pc = 0x22B5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B5D4u;
            // 0x22b5d8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B5E8u;
            goto label_22b5e8;
        }
    }
    ctx->pc = 0x22B5DCu;
label_22b5dc:
    // 0x22b5dc: 0xc08f956  jal         func_23E558
label_22b5e0:
    if (ctx->pc == 0x22B5E0u) {
        ctx->pc = 0x22B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5DCu;
        // 0x22b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5E4u;
        goto label_22b5e4;
    }
    ctx->pc = 0x22B5DCu;
    SET_GPR_U32(ctx, 31, 0x22B5E4u);
    ctx->pc = 0x22B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5DCu;
    // 0x22b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x22B5DCu, 0x22B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5E4u;
label_22b5e4:
    // 0x22b5e4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22b5e8:
    // 0x22b5e8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x22b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_22b5ec:
    // 0x22b5ec: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22b5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22b5f0:
    // 0x22b5f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22b5f4:
    if (ctx->pc == 0x22B5F4u) {
        ctx->pc = 0x22B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5F0u;
        // 0x22b5f4: 0x24635870  addiu       $v1, $v1, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5F8u;
        goto label_22b5f8;
    }
    ctx->pc = 0x22B5F0u;
    {
        const bool branch_taken_0x22b5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5F0u;
        // 0x22b5f4: 0x24635870  addiu       $v1, $v1, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5f0) {
            ctx->pc = 0x22B608u;
            goto label_22b608;
        }
    }
    ctx->pc = 0x22B5F8u;
label_22b5f8:
    // 0x22b5f8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22b5fc:
    // 0x22b5fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22b600:
    // 0x22b600: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22b604:
    if (ctx->pc == 0x22B604u) {
        ctx->pc = 0x22B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B600u;
        // 0x22b604: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B608u;
        goto label_22b608;
    }
    ctx->pc = 0x22B600u;
    {
        const bool branch_taken_0x22b600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b600) {
            ctx->pc = 0x22B604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B600u;
            // 0x22b604: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B618u;
            goto label_22b618;
        }
    }
    ctx->pc = 0x22B608u;
label_22b608:
    // 0x22b608: 0x9062027c  lbu         $v0, 0x27C($v1)
    ctx->pc = 0x22b608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 636)));
label_22b60c:
    // 0x22b60c: 0x104003ef  beqz        $v0, . + 4 + (0x3EF << 2)
label_22b610:
    if (ctx->pc == 0x22B610u) {
        ctx->pc = 0x22B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B60Cu;
        // 0x22b610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B614u;
        goto label_22b614;
    }
    ctx->pc = 0x22B60Cu;
    {
        const bool branch_taken_0x22b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B60Cu;
        // 0x22b610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b60c) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22B614u;
label_22b614:
    // 0x22b614: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x22b614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b618:
    // 0x22b618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b61c:
    // 0x22b61c: 0x0  nop
    ctx->pc = 0x22b61cu;
    // NOP
label_22b620:
    // 0x22b620: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b624:
    // 0x22b624: 0x0  nop
    ctx->pc = 0x22b624u;
    // NOP
label_22b628:
    // 0x22b628: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_22b62c:
    if (ctx->pc == 0x22B62Cu) {
        ctx->pc = 0x22B630u;
        goto label_22b630;
    }
    ctx->pc = 0x22B628u;
    {
        const bool branch_taken_0x22b628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b628) {
            ctx->pc = 0x22B67Cu;
            goto label_22b67c;
        }
    }
    ctx->pc = 0x22B630u;
label_22b630:
    // 0x22b630: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x22b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_22b634:
    // 0x22b634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22b638:
    // 0x22b638: 0x144003e4  bnez        $v0, . + 4 + (0x3E4 << 2)
label_22b63c:
    if (ctx->pc == 0x22B63Cu) {
        ctx->pc = 0x22B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B638u;
        // 0x22b63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B640u;
        goto label_22b640;
    }
    ctx->pc = 0x22B638u;
    {
        const bool branch_taken_0x22b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B638u;
        // 0x22b63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b638) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22B640u;
label_22b640:
    // 0x22b640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b644:
    // 0x22b644: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x22b644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_22b648:
    // 0x22b648: 0xc08fed2  jal         func_23FB48
label_22b64c:
    if (ctx->pc == 0x22B64Cu) {
        ctx->pc = 0x22B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B648u;
        // 0x22b64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B650u;
        goto label_22b650;
    }
    ctx->pc = 0x22B648u;
    SET_GPR_U32(ctx, 31, 0x22B650u);
    ctx->pc = 0x22B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B648u;
    // 0x22b64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22B648u, 0x22B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B650u;
label_22b650:
    // 0x22b650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b654:
    // 0x22b654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b658:
    // 0x22b658: 0xc08bf70  jal         func_22FDC0
label_22b65c:
    if (ctx->pc == 0x22B65Cu) {
        ctx->pc = 0x22B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B658u;
        // 0x22b65c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B660u;
        goto label_22b660;
    }
    ctx->pc = 0x22B658u;
    SET_GPR_U32(ctx, 31, 0x22B660u);
    ctx->pc = 0x22B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B658u;
    // 0x22b65c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x22B658u, 0x22B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B660u;
label_22b660:
    // 0x22b660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b664:
    // 0x22b664: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22b668:
    // 0x22b668: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x22b668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22b66c:
    // 0x22b66c: 0xc08a300  jal         func_228C00
label_22b670:
    if (ctx->pc == 0x22B670u) {
        ctx->pc = 0x22B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B66Cu;
        // 0x22b670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B674u;
        goto label_22b674;
    }
    ctx->pc = 0x22B66Cu;
    SET_GPR_U32(ctx, 31, 0x22B674u);
    ctx->pc = 0x22B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B66Cu;
    // 0x22b670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C00u, 0x22B66Cu, 0x22B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B674u;
label_22b674:
    // 0x22b674: 0x100003d5  b           . + 4 + (0x3D5 << 2)
label_22b678:
    if (ctx->pc == 0x22B678u) {
        ctx->pc = 0x22B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B674u;
        // 0x22b678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B67Cu;
        goto label_22b67c;
    }
    ctx->pc = 0x22B674u;
    {
        const bool branch_taken_0x22b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B674u;
        // 0x22b678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b674) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22B67Cu;
label_22b67c:
    // 0x22b67c: 0xc0d8de2  jal         func_363788
label_22b680:
    if (ctx->pc == 0x22B680u) {
        ctx->pc = 0x22B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B67Cu;
        // 0x22b680: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B684u;
        goto label_22b684;
    }
    ctx->pc = 0x22B67Cu;
    SET_GPR_U32(ctx, 31, 0x22B684u);
    ctx->pc = 0x22B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B67Cu;
    // 0x22b680: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22B67Cu, 0x22B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B684u;
label_22b684:
    // 0x22b684: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x22b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_22b688:
    // 0x22b688: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_22b68c:
    if (ctx->pc == 0x22B68Cu) {
        ctx->pc = 0x22B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B688u;
        // 0x22b68c: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B690u;
        goto label_22b690;
    }
    ctx->pc = 0x22B688u;
    {
        const bool branch_taken_0x22b688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b688) {
            ctx->pc = 0x22B68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B688u;
            // 0x22b68c: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B6A0u;
            goto label_22b6a0;
        }
    }
    ctx->pc = 0x22B690u;
label_22b690:
    // 0x22b690: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_22b694:
    // 0x22b694: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_22b698:
    if (ctx->pc == 0x22B698u) {
        ctx->pc = 0x22B69Cu;
        goto label_22b69c;
    }
    ctx->pc = 0x22B694u;
    {
        const bool branch_taken_0x22b694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b694) {
            ctx->pc = 0x22B6B4u;
            goto label_22b6b4;
        }
    }
    ctx->pc = 0x22B69Cu;
label_22b69c:
    // 0x22b69c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x22b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22b6a0:
    // 0x22b6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b6a4:
    // 0x22b6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22b6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b6a8:
    // 0x22b6a8: 0x38a5020f  xori        $a1, $a1, 0x20F
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)527);
label_22b6ac:
    // 0x22b6ac: 0xc08bf70  jal         func_22FDC0
label_22b6b0:
    if (ctx->pc == 0x22B6B0u) {
        ctx->pc = 0x22B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6ACu;
        // 0x22b6b0: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6B4u;
        goto label_22b6b4;
    }
    ctx->pc = 0x22B6ACu;
    SET_GPR_U32(ctx, 31, 0x22B6B4u);
    ctx->pc = 0x22B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6ACu;
    // 0x22b6b0: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x22B6ACu, 0x22B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6B4u;
label_22b6b4:
    // 0x22b6b4: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_22b6b8:
    if (ctx->pc == 0x22B6B8u) {
        ctx->pc = 0x22B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6B4u;
        // 0x22b6b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6BCu;
        goto label_22b6bc;
    }
    ctx->pc = 0x22B6B4u;
    {
        const bool branch_taken_0x22b6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6b4) {
            ctx->pc = 0x22B6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B6B4u;
            // 0x22b6b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B6C4u;
            goto label_22b6c4;
        }
    }
    ctx->pc = 0x22B6BCu;
label_22b6bc:
    // 0x22b6bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_22b6c0:
    if (ctx->pc == 0x22B6C0u) {
        ctx->pc = 0x22B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6BCu;
        // 0x22b6c0: 0xae300318  sw          $s0, 0x318($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6C4u;
        goto label_22b6c4;
    }
    ctx->pc = 0x22B6BCu;
    {
        const bool branch_taken_0x22b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6BCu;
        // 0x22b6c0: 0xae300318  sw          $s0, 0x318($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6bc) {
            ctx->pc = 0x22B6CCu;
            goto label_22b6cc;
        }
    }
    ctx->pc = 0x22B6C4u;
label_22b6c4:
    // 0x22b6c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22b6c8:
    // 0x22b6c8: 0xae230318  sw          $v1, 0x318($s1)
    ctx->pc = 0x22b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 3));
label_22b6cc:
    // 0x22b6cc: 0x8e3e00b8  lw          $fp, 0xB8($s1)
    ctx->pc = 0x22b6ccu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_22b6d0:
    // 0x22b6d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b6d4:
    // 0x22b6d4: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22b6d8:
    // 0x22b6d8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x22b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_22b6dc:
    // 0x22b6dc: 0xc0f6a96  jal         func_3DAA58
label_22b6e0:
    if (ctx->pc == 0x22B6E0u) {
        ctx->pc = 0x22B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6DCu;
        // 0x22b6e0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6E4u;
        goto label_22b6e4;
    }
    ctx->pc = 0x22B6DCu;
    SET_GPR_U32(ctx, 31, 0x22B6E4u);
    ctx->pc = 0x22B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6DCu;
    // 0x22b6e0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22B6DCu, 0x22B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6E4u;
label_22b6e4:
    // 0x22b6e4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x22b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22b6e8:
    // 0x22b6e8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22b6ec:
    // 0x22b6ec: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22b6f0:
    // 0x22b6f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22b6f4:
    if (ctx->pc == 0x22B6F4u) {
        ctx->pc = 0x22B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6F0u;
        // 0x22b6f4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6F8u;
        goto label_22b6f8;
    }
    ctx->pc = 0x22B6F0u;
    {
        const bool branch_taken_0x22b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6F0u;
        // 0x22b6f4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6f0) {
            ctx->pc = 0x22B718u;
            goto label_22b718;
        }
    }
    ctx->pc = 0x22B6F8u;
label_22b6f8:
    // 0x22b6f8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22b6fc:
    // 0x22b6fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22b700:
    // 0x22b700: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_22b704:
    if (ctx->pc == 0x22B704u) {
        ctx->pc = 0x22B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B700u;
        // 0x22b704: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B708u;
        goto label_22b708;
    }
    ctx->pc = 0x22B700u;
    {
        const bool branch_taken_0x22b700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b700) {
            ctx->pc = 0x22B704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B700u;
            // 0x22b704: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B71Cu;
            goto label_22b71c;
        }
    }
    ctx->pc = 0x22B708u;
label_22b708:
    // 0x22b708: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x22b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_22b70c:
    // 0x22b70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22b710:
    // 0x22b710: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22b714:
    if (ctx->pc == 0x22B714u) {
        ctx->pc = 0x22B718u;
        goto label_22b718;
    }
    ctx->pc = 0x22B710u;
    {
        const bool branch_taken_0x22b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b710) {
            ctx->pc = 0x22B740u;
            goto label_22b740;
        }
    }
    ctx->pc = 0x22B718u;
label_22b718:
    // 0x22b718: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22b71c:
    // 0x22b71c: 0xc68c0018  lwc1        $f12, 0x18($s4)
    ctx->pc = 0x22b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22b720:
    // 0x22b720: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22b724:
    // 0x22b724: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
label_22b728:
    if (ctx->pc == 0x22B728u) {
        ctx->pc = 0x22B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B724u;
        // 0x22b728: 0xe7ac0040  swc1        $f12, 0x40($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B72Cu;
        goto label_22b72c;
    }
    ctx->pc = 0x22B724u;
    {
        const bool branch_taken_0x22b724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B724u;
        // 0x22b728: 0xe7ac0040  swc1        $f12, 0x40($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b724) {
            ctx->pc = 0x22B8E8u;
            goto label_22b8e8;
        }
    }
    ctx->pc = 0x22B72Cu;
label_22b72c:
    // 0x22b72c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_22b730:
    // 0x22b730: 0xc0ae68e  jal         func_2B9A38
label_22b734:
    if (ctx->pc == 0x22B734u) {
        ctx->pc = 0x22B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B730u;
        // 0x22b734: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B738u;
        goto label_22b738;
    }
    ctx->pc = 0x22B730u;
    SET_GPR_U32(ctx, 31, 0x22B738u);
    ctx->pc = 0x22B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B730u;
    // 0x22b734: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A38u, 0x22B730u, 0x22B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B738u;
label_22b738:
    // 0x22b738: 0x1000006c  b           . + 4 + (0x6C << 2)
label_22b73c:
    if (ctx->pc == 0x22B73Cu) {
        ctx->pc = 0x22B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B738u;
        // 0x22b73c: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B740u;
        goto label_22b740;
    }
    ctx->pc = 0x22B738u;
    {
        const bool branch_taken_0x22b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B738u;
        // 0x22b73c: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b738) {
            ctx->pc = 0x22B8ECu;
            goto label_22b8ec;
        }
    }
    ctx->pc = 0x22B740u;
label_22b740:
    // 0x22b740: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
label_22b744:
    if (ctx->pc == 0x22B744u) {
        ctx->pc = 0x22B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B740u;
        // 0x22b744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B748u;
        goto label_22b748;
    }
    ctx->pc = 0x22B740u;
    {
        const bool branch_taken_0x22b740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B740u;
        // 0x22b744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b740) {
            ctx->pc = 0x22B8E0u;
            goto label_22b8e0;
        }
    }
    ctx->pc = 0x22B748u;
label_22b748:
    // 0x22b748: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22b74c:
    // 0x22b74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b750:
    // 0x22b750: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_22b754:
    if (ctx->pc == 0x22B754u) {
        ctx->pc = 0x22B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B750u;
        // 0x22b754: 0x8c920338  lw          $s2, 0x338($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B758u;
        goto label_22b758;
    }
    ctx->pc = 0x22B750u;
    {
        const bool branch_taken_0x22b750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B750u;
        // 0x22b754: 0x8c920338  lw          $s2, 0x338($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b750) {
            ctx->pc = 0x22B76Cu;
            goto label_22b76c;
        }
    }
    ctx->pc = 0x22B758u;
label_22b758:
    // 0x22b758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22b75c:
    // 0x22b75c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22b760:
    if (ctx->pc == 0x22B760u) {
        ctx->pc = 0x22B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B75Cu;
        // 0x22b760: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B764u;
        goto label_22b764;
    }
    ctx->pc = 0x22B75Cu;
    {
        const bool branch_taken_0x22b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B75Cu;
        // 0x22b760: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b75c) {
            ctx->pc = 0x22B76Cu;
            goto label_22b76c;
        }
    }
    ctx->pc = 0x22B764u;
label_22b764:
    // 0x22b764: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22b768:
    if (ctx->pc == 0x22B768u) {
        ctx->pc = 0x22B76Cu;
        goto label_22b76c;
    }
    ctx->pc = 0x22B764u;
    {
        const bool branch_taken_0x22b764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b764) {
            ctx->pc = 0x22B770u;
            goto label_22b770;
        }
    }
    ctx->pc = 0x22B76Cu;
label_22b76c:
    // 0x22b76c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b770:
    // 0x22b770: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
label_22b774:
    if (ctx->pc == 0x22B774u) {
        ctx->pc = 0x22B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B770u;
        // 0x22b774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B778u;
        goto label_22b778;
    }
    ctx->pc = 0x22B770u;
    {
        const bool branch_taken_0x22b770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B770u;
        // 0x22b774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b770) {
            ctx->pc = 0x22B87Cu;
            goto label_22b87c;
        }
    }
    ctx->pc = 0x22B778u;
label_22b778:
    // 0x22b778: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x22b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_22b77c:
    // 0x22b77c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22b780:
    // 0x22b780: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22b784:
    if (ctx->pc == 0x22B784u) {
        ctx->pc = 0x22B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B780u;
        // 0x22b784: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B788u;
        goto label_22b788;
    }
    ctx->pc = 0x22B780u;
    {
        const bool branch_taken_0x22b780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B780u;
        // 0x22b784: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b780) {
            ctx->pc = 0x22B794u;
            goto label_22b794;
        }
    }
    ctx->pc = 0x22B788u;
label_22b788:
    // 0x22b788: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x22b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_22b78c:
    // 0x22b78c: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x22b78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_22b790:
    // 0x22b790: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x22b790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22b794:
    // 0x22b794: 0x54800011  bnel        $a0, $zero, . + 4 + (0x11 << 2)
label_22b798:
    if (ctx->pc == 0x22B798u) {
        ctx->pc = 0x22B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B794u;
        // 0x22b798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B79Cu;
        goto label_22b79c;
    }
    ctx->pc = 0x22B794u;
    {
        const bool branch_taken_0x22b794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b794) {
            ctx->pc = 0x22B798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B794u;
            // 0x22b798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B7DCu;
            goto label_22b7dc;
        }
    }
    ctx->pc = 0x22B79Cu;
label_22b79c:
    // 0x22b79c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22b7a0:
    // 0x22b7a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22b7a4:
    if (ctx->pc == 0x22B7A4u) {
        ctx->pc = 0x22B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A0u;
        // 0x22b7a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7A8u;
        goto label_22b7a8;
    }
    ctx->pc = 0x22B7A0u;
    {
        const bool branch_taken_0x22b7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A0u;
        // 0x22b7a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7a0) {
            ctx->pc = 0x22B7B4u;
            goto label_22b7b4;
        }
    }
    ctx->pc = 0x22B7A8u;
label_22b7a8:
    // 0x22b7a8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x22b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_22b7ac:
    // 0x22b7ac: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x22b7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_22b7b0:
    // 0x22b7b0: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x22b7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22b7b4:
    // 0x22b7b4: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_22b7b8:
    if (ctx->pc == 0x22B7B8u) {
        ctx->pc = 0x22B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B4u;
        // 0x22b7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7BCu;
        goto label_22b7bc;
    }
    ctx->pc = 0x22B7B4u;
    {
        const bool branch_taken_0x22b7b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b7b4) {
            ctx->pc = 0x22B7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B7B4u;
            // 0x22b7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B7DCu;
            goto label_22b7dc;
        }
    }
    ctx->pc = 0x22B7BCu;
label_22b7bc:
    // 0x22b7bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22b7c0:
    // 0x22b7c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22b7c4:
    if (ctx->pc == 0x22B7C4u) {
        ctx->pc = 0x22B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7C0u;
        // 0x22b7c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7C8u;
        goto label_22b7c8;
    }
    ctx->pc = 0x22B7C0u;
    {
        const bool branch_taken_0x22b7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7C0u;
        // 0x22b7c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7c0) {
            ctx->pc = 0x22B7D4u;
            goto label_22b7d4;
        }
    }
    ctx->pc = 0x22B7C8u;
label_22b7c8:
    // 0x22b7c8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22b7cc:
    // 0x22b7cc: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x22b7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_22b7d0:
    // 0x22b7d0: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x22b7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22b7d4:
    // 0x22b7d4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_22b7d8:
    if (ctx->pc == 0x22B7D8u) {
        ctx->pc = 0x22B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7D4u;
        // 0x22b7d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7DCu;
        goto label_22b7dc;
    }
    ctx->pc = 0x22B7D4u;
    {
        const bool branch_taken_0x22b7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b7d4) {
            ctx->pc = 0x22B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B7D4u;
            // 0x22b7d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B7DCu;
            goto label_22b7dc;
        }
    }
    ctx->pc = 0x22B7DCu;
label_22b7dc:
    // 0x22b7dc: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_22b7e0:
    if (ctx->pc == 0x22B7E0u) {
        ctx->pc = 0x22B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7DCu;
        // 0x22b7e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7E4u;
        goto label_22b7e4;
    }
    ctx->pc = 0x22B7DCu;
    {
        const bool branch_taken_0x22b7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7DCu;
        // 0x22b7e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7dc) {
            ctx->pc = 0x22B87Cu;
            goto label_22b87c;
        }
    }
    ctx->pc = 0x22B7E4u;
label_22b7e4:
    // 0x22b7e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22b7e8:
    if (ctx->pc == 0x22B7E8u) {
        ctx->pc = 0x22B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7E4u;
        // 0x22b7e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7ECu;
        goto label_22b7ec;
    }
    ctx->pc = 0x22B7E4u;
    {
        const bool branch_taken_0x22b7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7E4u;
        // 0x22b7e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7e4) {
            ctx->pc = 0x22B7F8u;
            goto label_22b7f8;
        }
    }
    ctx->pc = 0x22B7ECu;
label_22b7ec:
    // 0x22b7ec: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_22b7f0:
    // 0x22b7f0: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x22b7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_22b7f4:
    // 0x22b7f4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x22b7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22b7f8:
    // 0x22b7f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22b7fc:
    if (ctx->pc == 0x22B7FCu) {
        ctx->pc = 0x22B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7F8u;
        // 0x22b7fc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B800u;
        goto label_22b800;
    }
    ctx->pc = 0x22B7F8u;
    {
        const bool branch_taken_0x22b7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7F8u;
        // 0x22b7fc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7f8) {
            ctx->pc = 0x22B808u;
            goto label_22b808;
        }
    }
    ctx->pc = 0x22B800u;
label_22b800:
    // 0x22b800: 0x10000011  b           . + 4 + (0x11 << 2)
label_22b804:
    if (ctx->pc == 0x22B804u) {
        ctx->pc = 0x22B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B800u;
        // 0x22b804: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B808u;
        goto label_22b808;
    }
    ctx->pc = 0x22B800u;
    {
        const bool branch_taken_0x22b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B800u;
        // 0x22b804: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b800) {
            ctx->pc = 0x22B848u;
            goto label_22b848;
        }
    }
    ctx->pc = 0x22B808u;
label_22b808:
    // 0x22b808: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22b80c:
    if (ctx->pc == 0x22B80Cu) {
        ctx->pc = 0x22B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B808u;
        // 0x22b80c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B810u;
        goto label_22b810;
    }
    ctx->pc = 0x22B808u;
    {
        const bool branch_taken_0x22b808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B808u;
        // 0x22b80c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b808) {
            ctx->pc = 0x22B81Cu;
            goto label_22b81c;
        }
    }
    ctx->pc = 0x22B810u;
label_22b810:
    // 0x22b810: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x22b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_22b814:
    // 0x22b814: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x22b814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_22b818:
    // 0x22b818: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x22b818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22b81c:
    // 0x22b81c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22b820:
    if (ctx->pc == 0x22B820u) {
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B824u;
        goto label_22b824;
    }
    ctx->pc = 0x22B81Cu;
    {
        const bool branch_taken_0x22b81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b81c) {
            ctx->pc = 0x22B82Cu;
            goto label_22b82c;
        }
    }
    ctx->pc = 0x22B824u;
label_22b824:
    // 0x22b824: 0x10000008  b           . + 4 + (0x8 << 2)
label_22b828:
    if (ctx->pc == 0x22B828u) {
        ctx->pc = 0x22B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B824u;
        // 0x22b828: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B82Cu;
        goto label_22b82c;
    }
    ctx->pc = 0x22B824u;
    {
        const bool branch_taken_0x22b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B824u;
        // 0x22b828: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b824) {
            ctx->pc = 0x22B848u;
            goto label_22b848;
        }
    }
    ctx->pc = 0x22B82Cu;
label_22b82c:
    // 0x22b82c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22b830:
    if (ctx->pc == 0x22B830u) {
        ctx->pc = 0x22B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B82Cu;
        // 0x22b830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B834u;
        goto label_22b834;
    }
    ctx->pc = 0x22B82Cu;
    {
        const bool branch_taken_0x22b82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B82Cu;
        // 0x22b830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b82c) {
            ctx->pc = 0x22B840u;
            goto label_22b840;
        }
    }
    ctx->pc = 0x22B834u;
label_22b834:
    // 0x22b834: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_22b838:
    // 0x22b838: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x22b838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_22b83c:
    // 0x22b83c: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x22b83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22b840:
    // 0x22b840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b844:
    // 0x22b844: 0x44a80b  movn        $s5, $v0, $a0
    ctx->pc = 0x22b844u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_22b848:
    // 0x22b848: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x22b848u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_22b84c:
    // 0x22b84c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b850:
    // 0x22b850: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x22b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_22b854:
    // 0x22b854: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22b854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_22b858:
    // 0x22b858: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22b858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_22b85c:
    // 0x22b85c: 0xc0b12b0  jal         func_2C4AC0
label_22b860:
    if (ctx->pc == 0x22B860u) {
        ctx->pc = 0x22B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B85Cu;
        // 0x22b860: 0xc4540044  lwc1        $f20, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B864u;
        goto label_22b864;
    }
    ctx->pc = 0x22B85Cu;
    SET_GPR_U32(ctx, 31, 0x22B864u);
    ctx->pc = 0x22B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B85Cu;
    // 0x22b860: 0xc4540044  lwc1        $f20, 0x44($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x22B85Cu, 0x22B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B864u;
label_22b864:
    // 0x22b864: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22b864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b868:
    // 0x22b868: 0x0  nop
    ctx->pc = 0x22b868u;
    // NOP
label_22b86c:
    // 0x22b86c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_22b870:
    if (ctx->pc == 0x22B870u) {
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B874u;
        goto label_22b874;
    }
    ctx->pc = 0x22B86Cu;
    {
        const bool branch_taken_0x22b86c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b86c) {
            ctx->pc = 0x22B87Cu;
            goto label_22b87c;
        }
    }
    ctx->pc = 0x22B874u;
label_22b874:
    // 0x22b874: 0x10000002  b           . + 4 + (0x2 << 2)
label_22b878:
    if (ctx->pc == 0x22B878u) {
        ctx->pc = 0x22B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B874u;
        // 0x22b878: 0xc4400040  lwc1        $f0, 0x40($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B87Cu;
        goto label_22b87c;
    }
    ctx->pc = 0x22B874u;
    {
        const bool branch_taken_0x22b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B874u;
        // 0x22b878: 0xc4400040  lwc1        $f0, 0x40($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b874) {
            ctx->pc = 0x22B880u;
            goto label_22b880;
        }
    }
    ctx->pc = 0x22B87Cu;
label_22b87c:
    // 0x22b87c: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x22b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b880:
    // 0x22b880: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22b880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22b884:
    // 0x22b884: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22b888:
    // 0x22b888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b88c:
    // 0x22b88c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_22b890:
    if (ctx->pc == 0x22B890u) {
        ctx->pc = 0x22B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B88Cu;
        // 0x22b890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B894u;
        goto label_22b894;
    }
    ctx->pc = 0x22B88Cu;
    {
        const bool branch_taken_0x22b88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B88Cu;
        // 0x22b890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b88c) {
            ctx->pc = 0x22B8A8u;
            goto label_22b8a8;
        }
    }
    ctx->pc = 0x22B894u;
label_22b894:
    // 0x22b894: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22b898:
    // 0x22b898: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22b89c:
    if (ctx->pc == 0x22B89Cu) {
        ctx->pc = 0x22B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B898u;
        // 0x22b89c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8A0u;
        goto label_22b8a0;
    }
    ctx->pc = 0x22B898u;
    {
        const bool branch_taken_0x22b898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B898u;
        // 0x22b89c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b898) {
            ctx->pc = 0x22B8A8u;
            goto label_22b8a8;
        }
    }
    ctx->pc = 0x22B8A0u;
label_22b8a0:
    // 0x22b8a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22b8a4:
    if (ctx->pc == 0x22B8A4u) {
        ctx->pc = 0x22B8A8u;
        goto label_22b8a8;
    }
    ctx->pc = 0x22B8A0u;
    {
        const bool branch_taken_0x22b8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b8a0) {
            ctx->pc = 0x22B8ACu;
            goto label_22b8ac;
        }
    }
    ctx->pc = 0x22B8A8u;
label_22b8a8:
    // 0x22b8a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b8ac:
    // 0x22b8ac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_22b8b0:
    if (ctx->pc == 0x22B8B0u) {
        ctx->pc = 0x22B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8ACu;
        // 0x22b8b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8B4u;
        goto label_22b8b4;
    }
    ctx->pc = 0x22B8ACu;
    {
        const bool branch_taken_0x22b8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8ACu;
        // 0x22b8b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8ac) {
            ctx->pc = 0x22B8E8u;
            goto label_22b8e8;
        }
    }
    ctx->pc = 0x22B8B4u;
label_22b8b4:
    // 0x22b8b4: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x22b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_22b8b8:
    // 0x22b8b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_22b8bc:
    if (ctx->pc == 0x22B8BCu) {
        ctx->pc = 0x22B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8B8u;
        // 0x22b8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8C0u;
        goto label_22b8c0;
    }
    ctx->pc = 0x22B8B8u;
    {
        const bool branch_taken_0x22b8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8B8u;
        // 0x22b8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8b8) {
            ctx->pc = 0x22B8C8u;
            goto label_22b8c8;
        }
    }
    ctx->pc = 0x22B8C0u;
label_22b8c0:
    // 0x22b8c0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x22b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_22b8c4:
    // 0x22b8c4: 0x2844006f  slti        $a0, $v0, 0x6F
    ctx->pc = 0x22b8c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_22b8c8:
    // 0x22b8c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22b8cc:
    if (ctx->pc == 0x22B8CCu) {
        ctx->pc = 0x22B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8C8u;
        // 0x22b8cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8D0u;
        goto label_22b8d0;
    }
    ctx->pc = 0x22B8C8u;
    {
        const bool branch_taken_0x22b8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8C8u;
        // 0x22b8cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8c8) {
            ctx->pc = 0x22B8E8u;
            goto label_22b8e8;
        }
    }
    ctx->pc = 0x22B8D0u;
label_22b8d0:
    // 0x22b8d0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b8d4:
    // 0x22b8d4: 0xc441524c  lwc1        $f1, 0x524C($v0)
    ctx->pc = 0x22b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b8d8:
    // 0x22b8d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_22b8dc:
    if (ctx->pc == 0x22B8DCu) {
        ctx->pc = 0x22B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8D8u;
        // 0x22b8dc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8E0u;
        goto label_22b8e0;
    }
    ctx->pc = 0x22B8D8u;
    {
        const bool branch_taken_0x22b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8D8u;
        // 0x22b8dc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8d8) {
            ctx->pc = 0x22B8E4u;
            goto label_22b8e4;
        }
    }
    ctx->pc = 0x22B8E0u;
label_22b8e0:
    // 0x22b8e0: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x22b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b8e4:
    // 0x22b8e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22b8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22b8e8:
    // 0x22b8e8: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x22b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_22b8ec:
    // 0x22b8ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22b8f0:
    if (ctx->pc == 0x22B8F0u) {
        ctx->pc = 0x22B8F4u;
        goto label_22b8f4;
    }
    ctx->pc = 0x22B8ECu;
    {
        const bool branch_taken_0x22b8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b8ec) {
            ctx->pc = 0x22B934u;
            goto label_22b934;
        }
    }
    ctx->pc = 0x22B8F4u;
label_22b8f4:
    // 0x22b8f4: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x22b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_22b8f8:
    // 0x22b8f8: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x22b8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22b8fc:
    // 0x22b8fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b900:
    // 0x22b900: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22b904:
    // 0x22b904: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x22b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_22b908:
    // 0x22b908: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_22b90c:
    // 0x22b90c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22b90cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22b910:
    // 0x22b910: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22b910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22b914:
    // 0x22b914: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22b914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22b918:
    // 0x22b918: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x22b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_22b91c:
    // 0x22b91c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x22b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22b920:
    // 0x22b920: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22b924:
    // 0x22b924: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x22b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b928:
    // 0x22b928: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x22b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b92c:
    // 0x22b92c: 0x10000027  b           . + 4 + (0x27 << 2)
label_22b930:
    if (ctx->pc == 0x22B930u) {
        ctx->pc = 0x22B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B92Cu;
        // 0x22b930: 0xc7a2002c  lwc1        $f2, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B934u;
        goto label_22b934;
    }
    ctx->pc = 0x22B92Cu;
    {
        const bool branch_taken_0x22b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B92Cu;
        // 0x22b930: 0xc7a2002c  lwc1        $f2, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b92c) {
            ctx->pc = 0x22B9CCu;
            goto label_22b9cc;
        }
    }
    ctx->pc = 0x22B934u;
label_22b934:
    // 0x22b934: 0xc0d764e  jal         func_35D938
label_22b938:
    if (ctx->pc == 0x22B938u) {
        ctx->pc = 0x22B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B934u;
        // 0x22b938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B93Cu;
        goto label_22b93c;
    }
    ctx->pc = 0x22B934u;
    SET_GPR_U32(ctx, 31, 0x22B93Cu);
    ctx->pc = 0x22B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B934u;
    // 0x22b938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D938u, 0x22B934u, 0x22B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B93Cu;
label_22b93c:
    // 0x22b93c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_22b940:
    if (ctx->pc == 0x22B940u) {
        ctx->pc = 0x22B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B93Cu;
        // 0x22b940: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B944u;
        goto label_22b944;
    }
    ctx->pc = 0x22B93Cu;
    {
        const bool branch_taken_0x22b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B93Cu;
        // 0x22b940: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b93c) {
            ctx->pc = 0x22B990u;
            goto label_22b990;
        }
    }
    ctx->pc = 0x22B944u;
label_22b944:
    // 0x22b944: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x22b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_22b948:
    // 0x22b948: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22b94c:
    if (ctx->pc == 0x22B94Cu) {
        ctx->pc = 0x22B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B948u;
        // 0x22b94c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B950u;
        goto label_22b950;
    }
    ctx->pc = 0x22B948u;
    {
        const bool branch_taken_0x22b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B948u;
        // 0x22b94c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b948) {
            ctx->pc = 0x22B990u;
            goto label_22b990;
        }
    }
    ctx->pc = 0x22B950u;
label_22b950:
    // 0x22b950: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x22b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_22b954:
    // 0x22b954: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x22b954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_22b958:
    // 0x22b958: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x22b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b95c:
    // 0x22b95c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x22b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b960:
    // 0x22b960: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x22b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22b964:
    // 0x22b964: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22b964u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_22b968:
    // 0x22b968: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x22b968u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_22b96c:
    // 0x22b96c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x22b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_22b970:
    // 0x22b970: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x22b970u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_22b974:
    // 0x22b974: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x22b974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22b978:
    // 0x22b978: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x22b978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_22b97c:
    // 0x22b97c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x22b97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_22b980:
    // 0x22b980: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x22b980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22b984:
    // 0x22b984: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_22b988:
    // 0x22b988: 0x10000017  b           . + 4 + (0x17 << 2)
label_22b98c:
    if (ctx->pc == 0x22B98Cu) {
        ctx->pc = 0x22B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B988u;
        // 0x22b98c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B990u;
        goto label_22b990;
    }
    ctx->pc = 0x22B988u;
    {
        const bool branch_taken_0x22b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B988u;
        // 0x22b98c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b988) {
            ctx->pc = 0x22B9E8u;
            goto label_22b9e8;
        }
    }
    ctx->pc = 0x22B990u;
label_22b990:
    // 0x22b990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22b994:
    // 0x22b994: 0xc0d765e  jal         func_35D978
label_22b998:
    if (ctx->pc == 0x22B998u) {
        ctx->pc = 0x22B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B994u;
        // 0x22b998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B99Cu;
        goto label_22b99c;
    }
    ctx->pc = 0x22B994u;
    SET_GPR_U32(ctx, 31, 0x22B99Cu);
    ctx->pc = 0x22B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B994u;
    // 0x22b998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x22B994u, 0x22B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B99Cu;
label_22b99c:
    // 0x22b99c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x22b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22b9a0:
    // 0x22b9a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b9a4:
    // 0x22b9a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_22b9a8:
    // 0x22b9a8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x22b9a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_22b9ac:
    // 0x22b9ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22b9acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22b9b0:
    // 0x22b9b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22b9b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22b9b4:
    // 0x22b9b4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x22b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_22b9b8:
    // 0x22b9b8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x22b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22b9bc:
    // 0x22b9bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22b9c0:
    // 0x22b9c0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x22b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b9c4:
    // 0x22b9c4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x22b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b9c8:
    // 0x22b9c8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x22b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22b9cc:
    // 0x22b9cc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x22b9ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22b9d0:
    // 0x22b9d0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22b9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_22b9d4:
    // 0x22b9d4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x22b9d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_22b9d8:
    // 0x22b9d8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x22b9d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_22b9dc:
    // 0x22b9dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x22b9dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22b9e0:
    // 0x22b9e0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22b9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_22b9e4:
    // 0x22b9e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_22b9e8:
    // 0x22b9e8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22b9ec:
    // 0x22b9ec: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x22b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22b9f0:
    // 0x22b9f0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x22b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22b9f4:
    // 0x22b9f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22b9f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_22b9f8:
    // 0x22b9f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22b9f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_22b9fc:
    // 0x22b9fc: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x22b9fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_22ba00:
    // 0x22ba00: 0x46140504  c1          0x140504
    ctx->pc = 0x22ba00u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_22ba04:
    // 0x22ba04: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x22ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ba08:
    // 0x22ba08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22ba08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ba0c:
    // 0x22ba0c: 0x0  nop
    ctx->pc = 0x22ba0cu;
    // NOP
label_22ba10:
    // 0x22ba10: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_22ba14:
    if (ctx->pc == 0x22BA14u) {
        ctx->pc = 0x22BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA10u;
        // 0x22ba14: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA18u;
        goto label_22ba18;
    }
    ctx->pc = 0x22BA10u;
    {
        const bool branch_taken_0x22ba10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba10) {
            ctx->pc = 0x22BA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BA10u;
            // 0x22ba14: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BA3Cu;
            goto label_22ba3c;
        }
    }
    ctx->pc = 0x22BA18u;
label_22ba18:
    // 0x22ba18: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22ba18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ba1c:
    // 0x22ba1c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x22ba1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22ba20:
    // 0x22ba20: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x22ba20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22ba24:
    // 0x22ba24: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x22ba24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_22ba28:
    // 0x22ba28: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x22ba28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_22ba2c:
    // 0x22ba2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x22ba2cu;
    // VWAITQ (Q already resolved in this runtime)
label_22ba30:
    // 0x22ba30: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x22ba30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_22ba34:
    // 0x22ba34: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_22ba38:
    // 0x22ba38: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x22ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22ba3c:
    // 0x22ba3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ba40:
    // 0x22ba40: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x22ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_22ba44:
    // 0x22ba44: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22ba48:
    // 0x22ba48: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x22ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22ba4c:
    // 0x22ba4c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x22ba4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22ba50:
    // 0x22ba50: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x22ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22ba54:
    // 0x22ba54: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x22ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22ba58:
    // 0x22ba58: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22ba58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_22ba5c:
    // 0x22ba5c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x22ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22ba60:
    // 0x22ba60: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x22ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22ba64:
    // 0x22ba64: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x22ba64u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22ba68:
    // 0x22ba68: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22ba6c:
    // 0x22ba6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22ba6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22ba70:
    // 0x22ba70: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22ba74:
    // 0x22ba74: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x22ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_22ba78:
    // 0x22ba78: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22ba78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22ba7c:
    // 0x22ba7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22ba80:
    if (ctx->pc == 0x22BA80u) {
        ctx->pc = 0x22BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA7Cu;
        // 0x22ba80: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA84u;
        goto label_22ba84;
    }
    ctx->pc = 0x22BA7Cu;
    {
        const bool branch_taken_0x22ba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA7Cu;
        // 0x22ba80: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba7c) {
            ctx->pc = 0x22BA9Cu;
            goto label_22ba9c;
        }
    }
    ctx->pc = 0x22BA84u;
label_22ba84:
    // 0x22ba84: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x22ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_22ba88:
    // 0x22ba88: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22ba8c:
    if (ctx->pc == 0x22BA8Cu) {
        ctx->pc = 0x22BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA88u;
        // 0x22ba8c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA90u;
        goto label_22ba90;
    }
    ctx->pc = 0x22BA88u;
    {
        const bool branch_taken_0x22ba88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA88u;
        // 0x22ba8c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba88) {
            ctx->pc = 0x22BA9Cu;
            goto label_22ba9c;
        }
    }
    ctx->pc = 0x22BA90u;
label_22ba90:
    // 0x22ba90: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x22ba90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ba94:
    // 0x22ba94: 0x10000004  b           . + 4 + (0x4 << 2)
label_22ba98:
    if (ctx->pc == 0x22BA98u) {
        ctx->pc = 0x22BA9Cu;
        goto label_22ba9c;
    }
    ctx->pc = 0x22BA94u;
    {
        const bool branch_taken_0x22ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba94) {
            ctx->pc = 0x22BAA8u;
            goto label_22baa8;
        }
    }
    ctx->pc = 0x22BA9Cu;
label_22ba9c:
    // 0x22ba9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22baa0:
    // 0x22baa0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x22baa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22baa4:
    // 0x22baa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22baa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22baa8:
    // 0x22baa8: 0x0  nop
    ctx->pc = 0x22baa8u;
    // NOP
label_22baac:
    // 0x22baac: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_22bab0:
    if (ctx->pc == 0x22BAB0u) {
        ctx->pc = 0x22BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAACu;
        // 0x22bab0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAB4u;
        goto label_22bab4;
    }
    ctx->pc = 0x22BAACu;
    {
        const bool branch_taken_0x22baac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22baac) {
            ctx->pc = 0x22BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BAACu;
            // 0x22bab0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BAB4u;
            goto label_22bab4;
        }
    }
    ctx->pc = 0x22BAB4u;
label_22bab4:
    // 0x22bab4: 0x8ca5014c  lw          $a1, 0x14C($a1)
    ctx->pc = 0x22bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 332)));
label_22bab8:
    // 0x22bab8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x22bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22babc:
    // 0x22babc: 0xc0d8de2  jal         func_363788
label_22bac0:
    if (ctx->pc == 0x22BAC0u) {
        ctx->pc = 0x22BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BABCu;
        // 0x22bac0: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAC4u;
        goto label_22bac4;
    }
    ctx->pc = 0x22BABCu;
    SET_GPR_U32(ctx, 31, 0x22BAC4u);
    ctx->pc = 0x22BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BABCu;
    // 0x22bac0: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22BABCu, 0x22BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAC4u;
label_22bac4:
    // 0x22bac4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x22bac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_22bac8:
    // 0x22bac8: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_22bacc:
    if (ctx->pc == 0x22BACCu) {
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAC8u;
        // 0x22bacc: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAD0u;
        goto label_22bad0;
    }
    ctx->pc = 0x22BAC8u;
    {
        const bool branch_taken_0x22bac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAC8u;
        // 0x22bacc: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bac8) {
            ctx->pc = 0x22BC78u;
            goto label_22bc78;
        }
    }
    ctx->pc = 0x22BAD0u;
label_22bad0:
    // 0x22bad0: 0x26c3fc17  addiu       $v1, $s6, -0x3E9
    ctx->pc = 0x22bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966295));
label_22bad4:
    // 0x22bad4: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x22bad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
label_22bad8:
    // 0x22bad8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_22badc:
    if (ctx->pc == 0x22BADCu) {
        ctx->pc = 0x22BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAD8u;
        // 0x22badc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAE0u;
        goto label_22bae0;
    }
    ctx->pc = 0x22BAD8u;
    {
        const bool branch_taken_0x22bad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAD8u;
        // 0x22badc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bad8) {
            ctx->pc = 0x22BBB4u;
            goto label_22bbb4;
        }
    }
    ctx->pc = 0x22BAE0u;
label_22bae0:
    // 0x22bae0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x22bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_22bae4:
    // 0x22bae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22bae8:
    // 0x22bae8: 0x244246d0  addiu       $v0, $v0, 0x46D0
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18128));
label_22baec:
    // 0x22baec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22baf0:
    // 0x22baf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22baf4:
    // 0x22baf4: 0x800008  jr          $a0
label_22baf8:
    if (ctx->pc == 0x22BAF8u) {
        ctx->pc = 0x22BAFCu;
        goto label_22bafc;
    }
    ctx->pc = 0x22BAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BAFCu: goto label_22bafc;
            case 0x22BB94u: goto label_22bb94;
            case 0x22BB9Cu: goto label_22bb9c;
            case 0x22BBA4u: goto label_22bba4;
            case 0x22BBB4u: goto label_22bbb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BAF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22BAFCu;
label_22bafc:
    // 0x22bafc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22bb00:
    // 0x22bb00: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22bb04:
    // 0x22bb04: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_22bb08:
    if (ctx->pc == 0x22BB08u) {
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB0Cu;
        goto label_22bb0c;
    }
    ctx->pc = 0x22BB04u;
    {
        const bool branch_taken_0x22bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bb04) {
            ctx->pc = 0x22BB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BB04u;
            // 0x22bb08: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BBA8u;
            goto label_22bba8;
        }
    }
    ctx->pc = 0x22BB0Cu;
label_22bb0c:
    // 0x22bb0c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22bb10:
    // 0x22bb10: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22bb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22bb14:
    // 0x22bb14: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_22bb18:
    if (ctx->pc == 0x22BB18u) {
        ctx->pc = 0x22BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB14u;
        // 0x22bb18: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB1Cu;
        goto label_22bb1c;
    }
    ctx->pc = 0x22BB14u;
    {
        const bool branch_taken_0x22bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bb14) {
            ctx->pc = 0x22BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BB14u;
            // 0x22bb18: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BBA8u;
            goto label_22bba8;
        }
    }
    ctx->pc = 0x22BB1Cu;
label_22bb1c:
    // 0x22bb1c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x22bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_22bb20:
    // 0x22bb20: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x22bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_22bb24:
    // 0x22bb24: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x22bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_22bb28:
    // 0x22bb28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22bb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22bb2c:
    // 0x22bb2c: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_22bb30:
    if (ctx->pc == 0x22BB30u) {
        ctx->pc = 0x22BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB2Cu;
        // 0x22bb30: 0x8ca400b4  lw          $a0, 0xB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB34u;
        goto label_22bb34;
    }
    ctx->pc = 0x22BB2Cu;
    {
        const bool branch_taken_0x22bb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22bb2c) {
            ctx->pc = 0x22BB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BB2Cu;
            // 0x22bb30: 0x8ca400b4  lw          $a0, 0xB4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BB3Cu;
            goto label_22bb3c;
        }
    }
    ctx->pc = 0x22BB34u;
label_22bb34:
    // 0x22bb34: 0x1000001c  b           . + 4 + (0x1C << 2)
label_22bb38:
    if (ctx->pc == 0x22BB38u) {
        ctx->pc = 0x22BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB34u;
        // 0x22bb38: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB3Cu;
        goto label_22bb3c;
    }
    ctx->pc = 0x22BB34u;
    {
        const bool branch_taken_0x22bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB34u;
        // 0x22bb38: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb34) {
            ctx->pc = 0x22BBA8u;
            goto label_22bba8;
        }
    }
    ctx->pc = 0x22BB3Cu;
label_22bb3c:
    // 0x22bb3c: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_22bb40:
    if (ctx->pc == 0x22BB40u) {
        ctx->pc = 0x22BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB3Cu;
        // 0x22bb40: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB44u;
        goto label_22bb44;
    }
    ctx->pc = 0x22BB3Cu;
    {
        const bool branch_taken_0x22bb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bb3c) {
            ctx->pc = 0x22BB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BB3Cu;
            // 0x22bb40: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BBB8u;
            goto label_22bbb8;
        }
    }
    ctx->pc = 0x22BB44u;
label_22bb44:
    // 0x22bb44: 0x8fc200a4  lw          $v0, 0xA4($fp)
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 164)));
label_22bb48:
    // 0x22bb48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22bb4c:
    if (ctx->pc == 0x22BB4Cu) {
        ctx->pc = 0x22BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB48u;
        // 0x22bb4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB50u;
        goto label_22bb50;
    }
    ctx->pc = 0x22BB48u;
    {
        const bool branch_taken_0x22bb48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB48u;
        // 0x22bb4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb48) {
            ctx->pc = 0x22BB64u;
            goto label_22bb64;
        }
    }
    ctx->pc = 0x22BB50u;
label_22bb50:
    // 0x22bb50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bb54:
    // 0x22bb54: 0x0  nop
    ctx->pc = 0x22bb54u;
    // NOP
label_22bb58:
    // 0x22bb58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22bb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22bb5c:
    // 0x22bb5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_22bb60:
    if (ctx->pc == 0x22BB60u) {
        ctx->pc = 0x22BB64u;
        goto label_22bb64;
    }
    ctx->pc = 0x22BB5Cu;
    {
        const bool branch_taken_0x22bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bb5c) {
            ctx->pc = 0x22BB7Cu;
            goto label_22bb7c;
        }
    }
    ctx->pc = 0x22BB64u;
label_22bb64:
    // 0x22bb64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22bb68:
    // 0x22bb68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22bb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22bb6c:
    // 0x22bb6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22bb70:
    // 0x22bb70: 0x0  nop
    ctx->pc = 0x22bb70u;
    // NOP
label_22bb74:
    // 0x22bb74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22bb74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22bb78:
    // 0x22bb78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22bb78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22bb7c:
    // 0x22bb7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22bb7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bb80:
    // 0x22bb80: 0x0  nop
    ctx->pc = 0x22bb80u;
    // NOP
label_22bb84:
    // 0x22bb84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bb88:
    // 0x22bb88: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22bb88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_22bb8c:
    // 0x22bb8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_22bb90:
    if (ctx->pc == 0x22BB90u) {
        ctx->pc = 0x22BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB8Cu;
        // 0x22bb90: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB94u;
        goto label_22bb94;
    }
    ctx->pc = 0x22BB8Cu;
    {
        const bool branch_taken_0x22bb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB8Cu;
        // 0x22bb90: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb8c) {
            ctx->pc = 0x22BBB4u;
            goto label_22bbb4;
        }
    }
    ctx->pc = 0x22BB94u;
label_22bb94:
    // 0x22bb94: 0x10000004  b           . + 4 + (0x4 << 2)
label_22bb98:
    if (ctx->pc == 0x22BB98u) {
        ctx->pc = 0x22BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB94u;
        // 0x22bb98: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB9Cu;
        goto label_22bb9c;
    }
    ctx->pc = 0x22BB94u;
    {
        const bool branch_taken_0x22bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB94u;
        // 0x22bb98: 0xc4a100b8  lwc1        $f1, 0xB8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb94) {
            ctx->pc = 0x22BBA8u;
            goto label_22bba8;
        }
    }
    ctx->pc = 0x22BB9Cu;
label_22bb9c:
    // 0x22bb9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_22bba0:
    if (ctx->pc == 0x22BBA0u) {
        ctx->pc = 0x22BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB9Cu;
        // 0x22bba0: 0xc4a100bc  lwc1        $f1, 0xBC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBA4u;
        goto label_22bba4;
    }
    ctx->pc = 0x22BB9Cu;
    {
        const bool branch_taken_0x22bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB9Cu;
        // 0x22bba0: 0xc4a100bc  lwc1        $f1, 0xBC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb9c) {
            ctx->pc = 0x22BBA8u;
            goto label_22bba8;
        }
    }
    ctx->pc = 0x22BBA4u;
label_22bba4:
    // 0x22bba4: 0xc4a100c0  lwc1        $f1, 0xC0($a1)
    ctx->pc = 0x22bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bba8:
    // 0x22bba8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bbac:
    // 0x22bbac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22bbacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22bbb0:
    // 0x22bbb0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22bbb4:
    // 0x22bbb4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22bbb8:
    // 0x22bbb8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22bbbc:
    // 0x22bbbc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_22bbc0:
    if (ctx->pc == 0x22BBC0u) {
        ctx->pc = 0x22BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBBCu;
        // 0x22bbc0: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBC4u;
        goto label_22bbc4;
    }
    ctx->pc = 0x22BBBCu;
    {
        const bool branch_taken_0x22bbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bbbc) {
            ctx->pc = 0x22BBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BBBCu;
            // 0x22bbc0: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC10u;
            goto label_22bc10;
        }
    }
    ctx->pc = 0x22BBC4u;
label_22bbc4:
    // 0x22bbc4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22bbc8:
    // 0x22bbc8: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_22bbcc:
    if (ctx->pc == 0x22BBCCu) {
        ctx->pc = 0x22BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBC8u;
        // 0x22bbcc: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBD0u;
        goto label_22bbd0;
    }
    ctx->pc = 0x22BBC8u;
    {
        const bool branch_taken_0x22bbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bbc8) {
            ctx->pc = 0x22BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BBC8u;
            // 0x22bbcc: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC10u;
            goto label_22bc10;
        }
    }
    ctx->pc = 0x22BBD0u;
label_22bbd0:
    // 0x22bbd0: 0xc097f90  jal         func_25FE40
label_22bbd4:
    if (ctx->pc == 0x22BBD4u) {
        ctx->pc = 0x22BBD8u;
        goto label_22bbd8;
    }
    ctx->pc = 0x22BBD0u;
    SET_GPR_U32(ctx, 31, 0x22BBD8u);
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x22BBD0u, 0x22BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBD8u;
label_22bbd8:
    // 0x22bbd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_22bbdc:
    if (ctx->pc == 0x22BBDCu) {
        ctx->pc = 0x22BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBD8u;
        // 0x22bbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBE0u;
        goto label_22bbe0;
    }
    ctx->pc = 0x22BBD8u;
    {
        const bool branch_taken_0x22bbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBD8u;
        // 0x22bbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbd8) {
            ctx->pc = 0x22BC0Cu;
            goto label_22bc0c;
        }
    }
    ctx->pc = 0x22BBE0u;
label_22bbe0:
    // 0x22bbe0: 0xc0d90f2  jal         func_3643C8
label_22bbe4:
    if (ctx->pc == 0x22BBE4u) {
        ctx->pc = 0x22BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBE0u;
        // 0x22bbe4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBE8u;
        goto label_22bbe8;
    }
    ctx->pc = 0x22BBE0u;
    SET_GPR_U32(ctx, 31, 0x22BBE8u);
    ctx->pc = 0x22BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBE0u;
    // 0x22bbe4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3643C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3643C8u, 0x22BBE0u, 0x22BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBE8u;
label_22bbe8:
    // 0x22bbe8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bbec:
    // 0x22bbec: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x22bbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_22bbf0:
    // 0x22bbf0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x22bbf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_22bbf4:
    // 0x22bbf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bbf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bbf8:
    // 0x22bbf8: 0x0  nop
    ctx->pc = 0x22bbf8u;
    // NOP
label_22bbfc:
    // 0x22bbfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22bbfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bc00:
    // 0x22bc00: 0x0  nop
    ctx->pc = 0x22bc00u;
    // NOP
label_22bc04:
    // 0x22bc04: 0x45010271  bc1t        . + 4 + (0x271 << 2)
label_22bc08:
    if (ctx->pc == 0x22BC08u) {
        ctx->pc = 0x22BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC04u;
        // 0x22bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC0Cu;
        goto label_22bc0c;
    }
    ctx->pc = 0x22BC04u;
    {
        const bool branch_taken_0x22bc04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC04u;
        // 0x22bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc04) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22BC0Cu;
label_22bc0c:
    // 0x22bc0c: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x22bc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_22bc10:
    // 0x22bc10: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_22bc14:
    if (ctx->pc == 0x22BC14u) {
        ctx->pc = 0x22BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC10u;
        // 0x22bc14: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC18u;
        goto label_22bc18;
    }
    ctx->pc = 0x22BC10u;
    {
        const bool branch_taken_0x22bc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC10u;
        // 0x22bc14: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc10) {
            ctx->pc = 0x22BC6Cu;
            goto label_22bc6c;
        }
    }
    ctx->pc = 0x22BC18u;
label_22bc18:
    // 0x22bc18: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_22bc1c:
    if (ctx->pc == 0x22BC1Cu) {
        ctx->pc = 0x22BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC18u;
        // 0x22bc1c: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC20u;
        goto label_22bc20;
    }
    ctx->pc = 0x22BC18u;
    {
        const bool branch_taken_0x22bc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bc18) {
            ctx->pc = 0x22BC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC18u;
            // 0x22bc1c: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC70u;
            goto label_22bc70;
        }
    }
    ctx->pc = 0x22BC20u;
label_22bc20:
    // 0x22bc20: 0xc06b600  jal         func_1AD800
label_22bc24:
    if (ctx->pc == 0x22BC24u) {
        ctx->pc = 0x22BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC20u;
        // 0x22bc24: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC28u;
        goto label_22bc28;
    }
    ctx->pc = 0x22BC20u;
    SET_GPR_U32(ctx, 31, 0x22BC28u);
    ctx->pc = 0x22BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC20u;
    // 0x22bc24: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22BC20u, 0x22BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC28u;
label_22bc28:
    // 0x22bc28: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_22bc2c:
    if (ctx->pc == 0x22BC2Cu) {
        ctx->pc = 0x22BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC28u;
        // 0x22bc2c: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC30u;
        goto label_22bc30;
    }
    ctx->pc = 0x22BC28u;
    {
        const bool branch_taken_0x22bc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bc28) {
            ctx->pc = 0x22BC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC28u;
            // 0x22bc2c: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC70u;
            goto label_22bc70;
        }
    }
    ctx->pc = 0x22BC30u;
label_22bc30:
    // 0x22bc30: 0x8fc200a4  lw          $v0, 0xA4($fp)
    ctx->pc = 0x22bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 164)));
label_22bc34:
    // 0x22bc34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22bc38:
    if (ctx->pc == 0x22BC38u) {
        ctx->pc = 0x22BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC34u;
        // 0x22bc38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC3Cu;
        goto label_22bc3c;
    }
    ctx->pc = 0x22BC34u;
    {
        const bool branch_taken_0x22bc34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC34u;
        // 0x22bc38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc34) {
            ctx->pc = 0x22BC50u;
            goto label_22bc50;
        }
    }
    ctx->pc = 0x22BC3Cu;
label_22bc3c:
    // 0x22bc3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bc40:
    // 0x22bc40: 0x0  nop
    ctx->pc = 0x22bc40u;
    // NOP
label_22bc44:
    // 0x22bc44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bc48:
    // 0x22bc48: 0x10000008  b           . + 4 + (0x8 << 2)
label_22bc4c:
    if (ctx->pc == 0x22BC4Cu) {
        ctx->pc = 0x22BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC48u;
        // 0x22bc4c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC50u;
        goto label_22bc50;
    }
    ctx->pc = 0x22BC48u;
    {
        const bool branch_taken_0x22bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC48u;
        // 0x22bc4c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc48) {
            ctx->pc = 0x22BC6Cu;
            goto label_22bc6c;
        }
    }
    ctx->pc = 0x22BC50u;
label_22bc50:
    // 0x22bc50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22bc54:
    // 0x22bc54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22bc58:
    // 0x22bc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bc5c:
    // 0x22bc5c: 0x0  nop
    ctx->pc = 0x22bc5cu;
    // NOP
label_22bc60:
    // 0x22bc60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bc64:
    // 0x22bc64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22bc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22bc68:
    // 0x22bc68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22bc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22bc6c:
    // 0x22bc6c: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x22bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_22bc70:
    // 0x22bc70: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_22bc74:
    if (ctx->pc == 0x22BC74u) {
        ctx->pc = 0x22BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC70u;
        // 0x22bc74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC78u;
        goto label_22bc78;
    }
    ctx->pc = 0x22BC70u;
    {
        const bool branch_taken_0x22bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC70u;
        // 0x22bc74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc70) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BC78u;
label_22bc78:
    // 0x22bc78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22bc78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22bc7c:
    // 0x22bc7c: 0xc0d8de2  jal         func_363788
label_22bc80:
    if (ctx->pc == 0x22BC80u) {
        ctx->pc = 0x22BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC7Cu;
        // 0x22bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC84u;
        goto label_22bc84;
    }
    ctx->pc = 0x22BC7Cu;
    SET_GPR_U32(ctx, 31, 0x22BC84u);
    ctx->pc = 0x22BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC7Cu;
    // 0x22bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22BC7Cu, 0x22BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC84u;
label_22bc84:
    // 0x22bc84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_22bc88:
    if (ctx->pc == 0x22BC88u) {
        ctx->pc = 0x22BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC84u;
        // 0x22bc88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC8Cu;
        goto label_22bc8c;
    }
    ctx->pc = 0x22BC84u;
    {
        const bool branch_taken_0x22bc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bc84) {
            ctx->pc = 0x22BC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC84u;
            // 0x22bc88: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BCA0u;
            goto label_22bca0;
        }
    }
    ctx->pc = 0x22BC8Cu;
label_22bc8c:
    // 0x22bc8c: 0xc0d8de2  jal         func_363788
label_22bc90:
    if (ctx->pc == 0x22BC90u) {
        ctx->pc = 0x22BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC8Cu;
        // 0x22bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC94u;
        goto label_22bc94;
    }
    ctx->pc = 0x22BC8Cu;
    SET_GPR_U32(ctx, 31, 0x22BC94u);
    ctx->pc = 0x22BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC8Cu;
    // 0x22bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22BC8Cu, 0x22BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC94u;
label_22bc94:
    // 0x22bc94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22bc98:
    // 0x22bc98: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_22bc9c:
    if (ctx->pc == 0x22BC9Cu) {
        ctx->pc = 0x22BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC98u;
        // 0x22bc9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCA0u;
        goto label_22bca0;
    }
    ctx->pc = 0x22BC98u;
    {
        const bool branch_taken_0x22bc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22bc98) {
            ctx->pc = 0x22BC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC98u;
            // 0x22bc9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BCA0u;
            goto label_22bca0;
        }
    }
    ctx->pc = 0x22BCA0u;
label_22bca0:
    // 0x22bca0: 0x124000da  beqz        $s2, . + 4 + (0xDA << 2)
label_22bca4:
    if (ctx->pc == 0x22BCA4u) {
        ctx->pc = 0x22BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCA0u;
        // 0x22bca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCA8u;
        goto label_22bca8;
    }
    ctx->pc = 0x22BCA0u;
    {
        const bool branch_taken_0x22bca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCA0u;
        // 0x22bca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bca0) {
            ctx->pc = 0x22C00Cu;
            goto label_22c00c;
        }
    }
    ctx->pc = 0x22BCA8u;
label_22bca8:
    // 0x22bca8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x22bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22bcac:
    // 0x22bcac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22bcb0:
    // 0x22bcb0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x22bcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22bcb4:
    // 0x22bcb4: 0x8c500338  lw          $s0, 0x338($v0)
    ctx->pc = 0x22bcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_22bcb8:
    // 0x22bcb8: 0xc08f64a  jal         func_23D928
label_22bcbc:
    if (ctx->pc == 0x22BCBCu) {
        ctx->pc = 0x22BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCB8u;
        // 0x22bcbc: 0x8c550334  lw          $s5, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCC0u;
        goto label_22bcc0;
    }
    ctx->pc = 0x22BCB8u;
    SET_GPR_U32(ctx, 31, 0x22BCC0u);
    ctx->pc = 0x22BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BCB8u;
    // 0x22bcbc: 0x8c550334  lw          $s5, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D928u, 0x22BCB8u, 0x22BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCC0u;
label_22bcc0:
    // 0x22bcc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_22bcc4:
    if (ctx->pc == 0x22BCC4u) {
        ctx->pc = 0x22BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCC0u;
        // 0x22bcc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCC8u;
        goto label_22bcc8;
    }
    ctx->pc = 0x22BCC0u;
    {
        const bool branch_taken_0x22bcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCC0u;
        // 0x22bcc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcc0) {
            ctx->pc = 0x22BD98u;
            goto label_22bd98;
        }
    }
    ctx->pc = 0x22BCC8u;
label_22bcc8:
    // 0x22bcc8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x22bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_22bccc:
    // 0x22bccc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22bcd0:
    // 0x22bcd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_22bcd4:
    if (ctx->pc == 0x22BCD4u) {
        ctx->pc = 0x22BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCD0u;
        // 0x22bcd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCD8u;
        goto label_22bcd8;
    }
    ctx->pc = 0x22BCD0u;
    {
        const bool branch_taken_0x22bcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCD0u;
        // 0x22bcd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcd0) {
            ctx->pc = 0x22BCE0u;
            goto label_22bce0;
        }
    }
    ctx->pc = 0x22BCD8u;
label_22bcd8:
    // 0x22bcd8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x22bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_22bcdc:
    // 0x22bcdc: 0x2844006f  slti        $a0, $v0, 0x6F
    ctx->pc = 0x22bcdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_22bce0:
    // 0x22bce0: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
label_22bce4:
    if (ctx->pc == 0x22BCE4u) {
        ctx->pc = 0x22BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCE0u;
        // 0x22bce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCE8u;
        goto label_22bce8;
    }
    ctx->pc = 0x22BCE0u;
    {
        const bool branch_taken_0x22bce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bce0) {
            ctx->pc = 0x22BCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BCE0u;
            // 0x22bce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BD20u;
            goto label_22bd20;
        }
    }
    ctx->pc = 0x22BCE8u;
label_22bce8:
    // 0x22bce8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22bcec:
    // 0x22bcec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_22bcf0:
    if (ctx->pc == 0x22BCF0u) {
        ctx->pc = 0x22BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCECu;
        // 0x22bcf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCF4u;
        goto label_22bcf4;
    }
    ctx->pc = 0x22BCECu;
    {
        const bool branch_taken_0x22bcec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCECu;
        // 0x22bcf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcec) {
            ctx->pc = 0x22BCFCu;
            goto label_22bcfc;
        }
    }
    ctx->pc = 0x22BCF4u;
label_22bcf4:
    // 0x22bcf4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x22bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22bcf8:
    // 0x22bcf8: 0x28440083  slti        $a0, $v0, 0x83
    ctx->pc = 0x22bcf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_22bcfc:
    // 0x22bcfc: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
label_22bd00:
    if (ctx->pc == 0x22BD00u) {
        ctx->pc = 0x22BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCFCu;
        // 0x22bd00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD04u;
        goto label_22bd04;
    }
    ctx->pc = 0x22BCFCu;
    {
        const bool branch_taken_0x22bcfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bcfc) {
            ctx->pc = 0x22BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BCFCu;
            // 0x22bd00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BD20u;
            goto label_22bd20;
        }
    }
    ctx->pc = 0x22BD04u;
label_22bd04:
    // 0x22bd04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22bd08:
    // 0x22bd08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_22bd0c:
    if (ctx->pc == 0x22BD0Cu) {
        ctx->pc = 0x22BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD08u;
        // 0x22bd0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD10u;
        goto label_22bd10;
    }
    ctx->pc = 0x22BD08u;
    {
        const bool branch_taken_0x22bd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD08u;
        // 0x22bd0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd08) {
            ctx->pc = 0x22BD18u;
            goto label_22bd18;
        }
    }
    ctx->pc = 0x22BD10u;
label_22bd10:
    // 0x22bd10: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x22bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22bd14:
    // 0x22bd14: 0x28440097  slti        $a0, $v0, 0x97
    ctx->pc = 0x22bd14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_22bd18:
    // 0x22bd18: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_22bd1c:
    if (ctx->pc == 0x22BD1Cu) {
        ctx->pc = 0x22BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD18u;
        // 0x22bd1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD20u;
        goto label_22bd20;
    }
    ctx->pc = 0x22BD18u;
    {
        const bool branch_taken_0x22bd18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bd18) {
            ctx->pc = 0x22BD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BD18u;
            // 0x22bd1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BD20u;
            goto label_22bd20;
        }
    }
    ctx->pc = 0x22BD20u;
label_22bd20:
    // 0x22bd20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_22bd24:
    if (ctx->pc == 0x22BD24u) {
        ctx->pc = 0x22BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD20u;
        // 0x22bd24: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD28u;
        goto label_22bd28;
    }
    ctx->pc = 0x22BD20u;
    {
        const bool branch_taken_0x22bd20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD20u;
        // 0x22bd24: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd20) {
            ctx->pc = 0x22BD30u;
            goto label_22bd30;
        }
    }
    ctx->pc = 0x22BD28u;
label_22bd28:
    // 0x22bd28: 0x10000002  b           . + 4 + (0x2 << 2)
label_22bd2c:
    if (ctx->pc == 0x22BD2Cu) {
        ctx->pc = 0x22BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD28u;
        // 0x22bd2c: 0xc64100a0  lwc1        $f1, 0xA0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD30u;
        goto label_22bd30;
    }
    ctx->pc = 0x22BD28u;
    {
        const bool branch_taken_0x22bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD28u;
        // 0x22bd2c: 0xc64100a0  lwc1        $f1, 0xA0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd28) {
            ctx->pc = 0x22BD34u;
            goto label_22bd34;
        }
    }
    ctx->pc = 0x22BD30u;
label_22bd30:
    // 0x22bd30: 0xc64100a4  lwc1        $f1, 0xA4($s2)
    ctx->pc = 0x22bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bd34:
    // 0x22bd34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22bd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22bd38:
    // 0x22bd38: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22bd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22bd3c:
    // 0x22bd3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bd40:
    // 0x22bd40: 0xc0899bc  jal         func_2266F0
label_22bd44:
    if (ctx->pc == 0x22BD44u) {
        ctx->pc = 0x22BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD40u;
        // 0x22bd44: 0x8e500028  lw          $s0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD48u;
        goto label_22bd48;
    }
    ctx->pc = 0x22BD40u;
    SET_GPR_U32(ctx, 31, 0x22BD48u);
    ctx->pc = 0x22BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD40u;
    // 0x22bd44: 0x8e500028  lw          $s0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22BD40u, 0x22BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD48u;
label_22bd48:
    // 0x22bd48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22bd4c:
    // 0x22bd4c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_22bd50:
    if (ctx->pc == 0x22BD50u) {
        ctx->pc = 0x22BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD4Cu;
        // 0x22bd50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD54u;
        goto label_22bd54;
    }
    ctx->pc = 0x22BD4Cu;
    {
        const bool branch_taken_0x22bd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD4Cu;
        // 0x22bd50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd4c) {
            ctx->pc = 0x22BD7Cu;
            goto label_22bd7c;
        }
    }
    ctx->pc = 0x22BD54u;
label_22bd54:
    // 0x22bd54: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x22bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_22bd58:
    // 0x22bd58: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x22bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_22bd5c:
    // 0x22bd5c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x22bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_22bd60:
    // 0x22bd60: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_22bd64:
    if (ctx->pc == 0x22BD64u) {
        ctx->pc = 0x22BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD60u;
        // 0x22bd64: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD68u;
        goto label_22bd68;
    }
    ctx->pc = 0x22BD60u;
    {
        const bool branch_taken_0x22bd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bd60) {
            ctx->pc = 0x22BD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BD60u;
            // 0x22bd64: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BD80u;
            goto label_22bd80;
        }
    }
    ctx->pc = 0x22BD68u;
label_22bd68:
    // 0x22bd68: 0xc098750  jal         func_261D40
label_22bd6c:
    if (ctx->pc == 0x22BD6Cu) {
        ctx->pc = 0x22BD70u;
        goto label_22bd70;
    }
    ctx->pc = 0x22BD68u;
    SET_GPR_U32(ctx, 31, 0x22BD70u);
    ctx->pc = 0x261D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D40u, 0x22BD68u, 0x22BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD70u;
label_22bd70:
    // 0x22bd70: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x22bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_22bd74:
    // 0x22bd74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22bd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22bd78:
    // 0x22bd78: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x22bd78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_22bd7c:
    // 0x22bd7c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x22bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_22bd80:
    // 0x22bd80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22bd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22bd84:
    // 0x22bd84: 0xc0ac01e  jal         func_2B0078
label_22bd88:
    if (ctx->pc == 0x22BD88u) {
        ctx->pc = 0x22BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD84u;
        // 0x22bd88: 0x24844dd0  addiu       $a0, $a0, 0x4DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BD8Cu;
        goto label_22bd8c;
    }
    ctx->pc = 0x22BD84u;
    SET_GPR_U32(ctx, 31, 0x22BD8Cu);
    ctx->pc = 0x22BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD84u;
    // 0x22bd88: 0x24844dd0  addiu       $a0, $a0, 0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0078u, 0x22BD84u, 0x22BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD8Cu;
label_22bd8c:
    // 0x22bd8c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bd90:
    // 0x22bd90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22bd90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22bd94:
    // 0x22bd94: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x22bd94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22bd98:
    // 0x22bd98: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22bd9c:
    // 0x22bd9c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22bda0:
    // 0x22bda0: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_22bda4:
    if (ctx->pc == 0x22BDA4u) {
        ctx->pc = 0x22BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDA0u;
        // 0x22bda4: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDA8u;
        goto label_22bda8;
    }
    ctx->pc = 0x22BDA0u;
    {
        const bool branch_taken_0x22bda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bda0) {
            ctx->pc = 0x22BDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BDA0u;
            // 0x22bda4: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BE2Cu;
            goto label_22be2c;
        }
    }
    ctx->pc = 0x22BDA8u;
label_22bda8:
    // 0x22bda8: 0xc06b600  jal         func_1AD800
label_22bdac:
    if (ctx->pc == 0x22BDACu) {
        ctx->pc = 0x22BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDA8u;
        // 0x22bdac: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDB0u;
        goto label_22bdb0;
    }
    ctx->pc = 0x22BDA8u;
    SET_GPR_U32(ctx, 31, 0x22BDB0u);
    ctx->pc = 0x22BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDA8u;
    // 0x22bdac: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22BDA8u, 0x22BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDB0u;
label_22bdb0:
    // 0x22bdb0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_22bdb4:
    if (ctx->pc == 0x22BDB4u) {
        ctx->pc = 0x22BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDB0u;
        // 0x22bdb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDB8u;
        goto label_22bdb8;
    }
    ctx->pc = 0x22BDB0u;
    {
        const bool branch_taken_0x22bdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDB0u;
        // 0x22bdb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdb0) {
            ctx->pc = 0x22BE28u;
            goto label_22be28;
        }
    }
    ctx->pc = 0x22BDB8u;
label_22bdb8:
    // 0x22bdb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22bdbc:
    // 0x22bdbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22bdc0:
    // 0x22bdc0: 0x5464001a  bnel        $v1, $a0, . + 4 + (0x1A << 2)
label_22bdc4:
    if (ctx->pc == 0x22BDC4u) {
        ctx->pc = 0x22BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDC0u;
        // 0x22bdc4: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDC8u;
        goto label_22bdc8;
    }
    ctx->pc = 0x22BDC0u;
    {
        const bool branch_taken_0x22bdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22bdc0) {
            ctx->pc = 0x22BDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BDC0u;
            // 0x22bdc4: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BE2Cu;
            goto label_22be2c;
        }
    }
    ctx->pc = 0x22BDC8u;
label_22bdc8:
    // 0x22bdc8: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x22bdc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_22bdcc:
    // 0x22bdcc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_22bdd0:
    if (ctx->pc == 0x22BDD0u) {
        ctx->pc = 0x22BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDCCu;
        // 0x22bdd0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDD4u;
        goto label_22bdd4;
    }
    ctx->pc = 0x22BDCCu;
    {
        const bool branch_taken_0x22bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDCCu;
        // 0x22bdd0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdcc) {
            ctx->pc = 0x22BE20u;
            goto label_22be20;
        }
    }
    ctx->pc = 0x22BDD4u;
label_22bdd4:
    // 0x22bdd4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22bdd8:
    // 0x22bdd8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x22bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_22bddc:
    // 0x22bddc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_22bde0:
    if (ctx->pc == 0x22BDE0u) {
        ctx->pc = 0x22BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDDCu;
        // 0x22bde0: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDE4u;
        goto label_22bde4;
    }
    ctx->pc = 0x22BDDCu;
    {
        const bool branch_taken_0x22bddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bddc) {
            ctx->pc = 0x22BDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BDDCu;
            // 0x22bde0: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BE2Cu;
            goto label_22be2c;
        }
    }
    ctx->pc = 0x22BDE4u;
label_22bde4:
    // 0x22bde4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x22bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_22bde8:
    // 0x22bde8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bdec:
    // 0x22bdec: 0xc4415250  lwc1        $f1, 0x5250($v0)
    ctx->pc = 0x22bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bdf0:
    // 0x22bdf0: 0x8e230fbc  lw          $v1, 0xFBC($s1)
    ctx->pc = 0x22bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4028)));
label_22bdf4:
    // 0x22bdf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22bdf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22bdf8:
    // 0x22bdf8: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x22bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_22bdfc:
    // 0x22bdfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22be00:
    // 0x22be00: 0xae230fbc  sw          $v1, 0xFBC($s1)
    ctx->pc = 0x22be00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4028), GPR_U32(ctx, 3));
label_22be04:
    // 0x22be04: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22be04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22be08:
    // 0x22be08: 0x8c8213fc  lw          $v0, 0x13FC($a0)
    ctx->pc = 0x22be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5116)));
label_22be0c:
    // 0x22be0c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x22be0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22be10:
    // 0x22be10: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_22be14:
    if (ctx->pc == 0x22BE14u) {
        ctx->pc = 0x22BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE10u;
        // 0x22be14: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE18u;
        goto label_22be18;
    }
    ctx->pc = 0x22BE10u;
    {
        const bool branch_taken_0x22be10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be10) {
            ctx->pc = 0x22BE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE10u;
            // 0x22be14: 0x8ea20150  lw          $v0, 0x150($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BE2Cu;
            goto label_22be2c;
        }
    }
    ctx->pc = 0x22BE18u;
label_22be18:
    // 0x22be18: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_22be1c:
    if (ctx->pc == 0x22BE1Cu) {
        ctx->pc = 0x22BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE18u;
        // 0x22be1c: 0xae20037c  sw          $zero, 0x37C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE20u;
        goto label_22be20;
    }
    ctx->pc = 0x22BE18u;
    {
        const bool branch_taken_0x22be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE18u;
        // 0x22be1c: 0xae20037c  sw          $zero, 0x37C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be18) {
            ctx->pc = 0x22C5C8u;
            goto label_22c5c8;
        }
    }
    ctx->pc = 0x22BE20u;
label_22be20:
    // 0x22be20: 0xc4409718  lwc1        $f0, -0x68E8($v0)
    ctx->pc = 0x22be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22be24:
    // 0x22be24: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22be24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22be28:
    // 0x22be28: 0x8ea20150  lw          $v0, 0x150($s5)
    ctx->pc = 0x22be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
label_22be2c:
    // 0x22be2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22be30:
    // 0x22be30: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x22be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_22be34:
    // 0x22be34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22be38:
    // 0x22be38: 0x2463f848  addiu       $v1, $v1, -0x7B8
    ctx->pc = 0x22be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965320));
label_22be3c:
    // 0x22be3c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x22be3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22be40:
    // 0x22be40: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
label_22be44:
    if (ctx->pc == 0x22BE44u) {
        ctx->pc = 0x22BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE40u;
        // 0x22be44: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE48u;
        goto label_22be48;
    }
    ctx->pc = 0x22BE40u;
    {
        const bool branch_taken_0x22be40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be40) {
            ctx->pc = 0x22BE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE40u;
            // 0x22be44: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF58u;
            goto label_22bf58;
        }
    }
    ctx->pc = 0x22BE48u;
label_22be48:
    // 0x22be48: 0xc0899bc  jal         func_2266F0
label_22be4c:
    if (ctx->pc == 0x22BE4Cu) {
        ctx->pc = 0x22BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE48u;
        // 0x22be4c: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE50u;
        goto label_22be50;
    }
    ctx->pc = 0x22BE48u;
    SET_GPR_U32(ctx, 31, 0x22BE50u);
    ctx->pc = 0x22BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE48u;
    // 0x22be4c: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22BE48u, 0x22BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE50u;
label_22be50:
    // 0x22be50: 0xc097f26  jal         func_25FC98
label_22be54:
    if (ctx->pc == 0x22BE54u) {
        ctx->pc = 0x22BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE50u;
        // 0x22be54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE58u;
        goto label_22be58;
    }
    ctx->pc = 0x22BE50u;
    SET_GPR_U32(ctx, 31, 0x22BE58u);
    ctx->pc = 0x22BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE50u;
    // 0x22be54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x22BE50u, 0x22BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE58u;
label_22be58:
    // 0x22be58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22be58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22be5c:
    // 0x22be5c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_22be60:
    // 0x22be60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_22be64:
    if (ctx->pc == 0x22BE64u) {
        ctx->pc = 0x22BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE60u;
        // 0x22be64: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE68u;
        goto label_22be68;
    }
    ctx->pc = 0x22BE60u;
    {
        const bool branch_taken_0x22be60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE60u;
        // 0x22be64: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be60) {
            ctx->pc = 0x22BE88u;
            goto label_22be88;
        }
    }
    ctx->pc = 0x22BE68u;
label_22be68:
    // 0x22be68: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_22be6c:
    if (ctx->pc == 0x22BE6Cu) {
        ctx->pc = 0x22BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE68u;
        // 0x22be6c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE70u;
        goto label_22be70;
    }
    ctx->pc = 0x22BE68u;
    {
        const bool branch_taken_0x22be68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE68u;
        // 0x22be6c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be68) {
            ctx->pc = 0x22BE88u;
            goto label_22be88;
        }
    }
    ctx->pc = 0x22BE70u;
label_22be70:
    // 0x22be70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_22be74:
    if (ctx->pc == 0x22BE74u) {
        ctx->pc = 0x22BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE70u;
        // 0x22be74: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE78u;
        goto label_22be78;
    }
    ctx->pc = 0x22BE70u;
    {
        const bool branch_taken_0x22be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE70u;
        // 0x22be74: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be70) {
            ctx->pc = 0x22BE88u;
            goto label_22be88;
        }
    }
    ctx->pc = 0x22BE78u;
label_22be78:
    // 0x22be78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22be7c:
    if (ctx->pc == 0x22BE7Cu) {
        ctx->pc = 0x22BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE78u;
        // 0x22be7c: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE80u;
        goto label_22be80;
    }
    ctx->pc = 0x22BE78u;
    {
        const bool branch_taken_0x22be78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE78u;
        // 0x22be7c: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be78) {
            ctx->pc = 0x22BE88u;
            goto label_22be88;
        }
    }
    ctx->pc = 0x22BE80u;
label_22be80:
    // 0x22be80: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_22be84:
    if (ctx->pc == 0x22BE84u) {
        ctx->pc = 0x22BE88u;
        goto label_22be88;
    }
    ctx->pc = 0x22BE80u;
    {
        const bool branch_taken_0x22be80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22be80) {
            ctx->pc = 0x22BEFCu;
            goto label_22befc;
        }
    }
    ctx->pc = 0x22BE88u;
label_22be88:
    // 0x22be88: 0x8fc200a4  lw          $v0, 0xA4($fp)
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 164)));
label_22be8c:
    // 0x22be8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22be90:
    if (ctx->pc == 0x22BE90u) {
        ctx->pc = 0x22BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE8Cu;
        // 0x22be90: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE94u;
        goto label_22be94;
    }
    ctx->pc = 0x22BE8Cu;
    {
        const bool branch_taken_0x22be8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE8Cu;
        // 0x22be90: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be8c) {
            ctx->pc = 0x22BEA8u;
            goto label_22bea8;
        }
    }
    ctx->pc = 0x22BE94u;
label_22be94:
    // 0x22be94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22be94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22be98:
    // 0x22be98: 0x0  nop
    ctx->pc = 0x22be98u;
    // NOP
label_22be9c:
    // 0x22be9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22be9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bea0:
    // 0x22bea0: 0x10000009  b           . + 4 + (0x9 << 2)
label_22bea4:
    if (ctx->pc == 0x22BEA4u) {
        ctx->pc = 0x22BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEA0u;
        // 0x22bea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEA8u;
        goto label_22bea8;
    }
    ctx->pc = 0x22BEA0u;
    {
        const bool branch_taken_0x22bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEA0u;
        // 0x22bea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bea0) {
            ctx->pc = 0x22BEC8u;
            goto label_22bec8;
        }
    }
    ctx->pc = 0x22BEA8u;
label_22bea8:
    // 0x22bea8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_22beac:
    // 0x22beac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22beb0:
    // 0x22beb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22beb4:
    // 0x22beb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22beb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22beb8:
    // 0x22beb8: 0x0  nop
    ctx->pc = 0x22beb8u;
    // NOP
label_22bebc:
    // 0x22bebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bec0:
    // 0x22bec0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22bec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22bec4:
    // 0x22bec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22bec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22bec8:
    // 0x22bec8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22bec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22becc:
    // 0x22becc: 0xc08fed2  jal         func_23FB48
label_22bed0:
    if (ctx->pc == 0x22BED0u) {
        ctx->pc = 0x22BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BECCu;
        // 0x22bed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BED4u;
        goto label_22bed4;
    }
    ctx->pc = 0x22BECCu;
    SET_GPR_U32(ctx, 31, 0x22BED4u);
    ctx->pc = 0x22BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BECCu;
    // 0x22bed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22BECCu, 0x22BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BED4u;
label_22bed4:
    // 0x22bed4: 0x8e240318  lw          $a0, 0x318($s1)
    ctx->pc = 0x22bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_22bed8:
    // 0x22bed8: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x22bed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_22bedc:
    // 0x22bedc: 0xc0899bc  jal         func_2266F0
label_22bee0:
    if (ctx->pc == 0x22BEE0u) {
        ctx->pc = 0x22BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEDCu;
        // 0x22bee0: 0x26104680  addiu       $s0, $s0, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEE4u;
        goto label_22bee4;
    }
    ctx->pc = 0x22BEDCu;
    SET_GPR_U32(ctx, 31, 0x22BEE4u);
    ctx->pc = 0x22BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEDCu;
    // 0x22bee0: 0x26104680  addiu       $s0, $s0, 0x4680 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22BEDCu, 0x22BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEE4u;
label_22bee4:
    // 0x22bee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22bee8:
    // 0x22bee8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22bee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22beec:
    // 0x22beec: 0xc08a0a8  jal         func_2282A0
label_22bef0:
    if (ctx->pc == 0x22BEF0u) {
        ctx->pc = 0x22BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEECu;
        // 0x22bef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEF4u;
        goto label_22bef4;
    }
    ctx->pc = 0x22BEECu;
    SET_GPR_U32(ctx, 31, 0x22BEF4u);
    ctx->pc = 0x22BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEECu;
    // 0x22bef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282A0u, 0x22BEECu, 0x22BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEF4u;
label_22bef4:
    // 0x22bef4: 0x10000016  b           . + 4 + (0x16 << 2)
label_22bef8:
    if (ctx->pc == 0x22BEF8u) {
        ctx->pc = 0x22BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEF4u;
        // 0x22bef8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEFCu;
        goto label_22befc;
    }
    ctx->pc = 0x22BEF4u;
    {
        const bool branch_taken_0x22bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEF4u;
        // 0x22bef8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bef4) {
            ctx->pc = 0x22BF50u;
            goto label_22bf50;
        }
    }
    ctx->pc = 0x22BEFCu;
label_22befc:
    // 0x22befc: 0xc0899bc  jal         func_2266F0
label_22bf00:
    if (ctx->pc == 0x22BF00u) {
        ctx->pc = 0x22BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEFCu;
        // 0x22bf00: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF04u;
        goto label_22bf04;
    }
    ctx->pc = 0x22BEFCu;
    SET_GPR_U32(ctx, 31, 0x22BF04u);
    ctx->pc = 0x22BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEFCu;
    // 0x22bf00: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22BEFCu, 0x22BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF04u;
label_22bf04:
    // 0x22bf04: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x22bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_22bf08:
    // 0x22bf08: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_22bf0c:
    // 0x22bf0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22bf10:
    // 0x22bf10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22bf14:
    // 0x22bf14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x22bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22bf18:
    // 0x22bf18: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x22bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_22bf1c:
    // 0x22bf1c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22bf20:
    // 0x22bf20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_22bf24:
    if (ctx->pc == 0x22BF24u) {
        ctx->pc = 0x22BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF20u;
        // 0x22bf24: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF28u;
        goto label_22bf28;
    }
    ctx->pc = 0x22BF20u;
    {
        const bool branch_taken_0x22bf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bf20) {
            ctx->pc = 0x22BF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BF20u;
            // 0x22bf24: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF40u;
            goto label_22bf40;
        }
    }
    ctx->pc = 0x22BF28u;
label_22bf28:
    // 0x22bf28: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_22bf2c:
    // 0x22bf2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22bf30:
    // 0x22bf30: 0xc44115a4  lwc1        $f1, 0x15A4($v0)
    ctx->pc = 0x22bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bf34:
    // 0x22bf34: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bf38:
    // 0x22bf38: 0x10000003  b           . + 4 + (0x3 << 2)
label_22bf3c:
    if (ctx->pc == 0x22BF3Cu) {
        ctx->pc = 0x22BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF38u;
        // 0x22bf3c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF40u;
        goto label_22bf40;
    }
    ctx->pc = 0x22BF38u;
    {
        const bool branch_taken_0x22bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF38u;
        // 0x22bf3c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf38) {
            ctx->pc = 0x22BF48u;
            goto label_22bf48;
        }
    }
    ctx->pc = 0x22BF40u;
label_22bf40:
    // 0x22bf40: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x22bf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22bf44:
    // 0x22bf44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22bf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22bf48:
    // 0x22bf48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22bf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22bf4c:
    // 0x22bf4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22bf50:
    // 0x22bf50: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x22bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_22bf54:
    // 0x22bf54: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x22bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_22bf58:
    // 0x22bf58: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_22bf5c:
    if (ctx->pc == 0x22BF5Cu) {
        ctx->pc = 0x22BF60u;
        goto label_22bf60;
    }
    ctx->pc = 0x22BF58u;
    {
        const bool branch_taken_0x22bf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf58) {
            ctx->pc = 0x22BFD4u;
            goto label_22bfd4;
        }
    }
    ctx->pc = 0x22BF60u;
label_22bf60:
    // 0x22bf60: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_22bf64:
    // 0x22bf64: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22bf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22bf68:
    // 0x22bf68: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_22bf6c:
    if (ctx->pc == 0x22BF6Cu) {
        ctx->pc = 0x22BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF68u;
        // 0x22bf6c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF70u;
        goto label_22bf70;
    }
    ctx->pc = 0x22BF68u;
    {
        const bool branch_taken_0x22bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF68u;
        // 0x22bf6c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf68) {
            ctx->pc = 0x22BFD4u;
            goto label_22bfd4;
        }
    }
    ctx->pc = 0x22BF70u;
label_22bf70:
    // 0x22bf70: 0x8c43ebd0  lw          $v1, -0x1430($v0)
    ctx->pc = 0x22bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962128)));
label_22bf74:
    // 0x22bf74: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_22bf78:
    if (ctx->pc == 0x22BF78u) {
        ctx->pc = 0x22BF7Cu;
        goto label_22bf7c;
    }
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22BFD4u;
            goto label_22bfd4;
        }
    }
    ctx->pc = 0x22BF7Cu;
label_22bf7c:
    // 0x22bf7c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x22bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_22bf80:
    // 0x22bf80: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_22bf84:
    if (ctx->pc == 0x22BF84u) {
        ctx->pc = 0x22BF88u;
        goto label_22bf88;
    }
    ctx->pc = 0x22BF80u;
    {
        const bool branch_taken_0x22bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bf80) {
            ctx->pc = 0x22BFD4u;
            goto label_22bfd4;
        }
    }
    ctx->pc = 0x22BF88u;
label_22bf88:
    // 0x22bf88: 0x8fc200a4  lw          $v0, 0xA4($fp)
    ctx->pc = 0x22bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 164)));
label_22bf8c:
    // 0x22bf8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22bf90:
    if (ctx->pc == 0x22BF90u) {
        ctx->pc = 0x22BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF8Cu;
        // 0x22bf90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF94u;
        goto label_22bf94;
    }
    ctx->pc = 0x22BF8Cu;
    {
        const bool branch_taken_0x22bf8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF8Cu;
        // 0x22bf90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf8c) {
            ctx->pc = 0x22BFA8u;
            goto label_22bfa8;
        }
    }
    ctx->pc = 0x22BF94u;
label_22bf94:
    // 0x22bf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bf98:
    // 0x22bf98: 0x0  nop
    ctx->pc = 0x22bf98u;
    // NOP
label_22bf9c:
    // 0x22bf9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bf9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bfa0:
    // 0x22bfa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_22bfa4:
    if (ctx->pc == 0x22BFA4u) {
        ctx->pc = 0x22BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFA0u;
        // 0x22bfa4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFA8u;
        goto label_22bfa8;
    }
    ctx->pc = 0x22BFA0u;
    {
        const bool branch_taken_0x22bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFA0u;
        // 0x22bfa4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfa0) {
            ctx->pc = 0x22BFC4u;
            goto label_22bfc4;
        }
    }
    ctx->pc = 0x22BFA8u;
label_22bfa8:
    // 0x22bfa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22bfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22bfac:
    // 0x22bfac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22bfb0:
    // 0x22bfb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22bfb4:
    // 0x22bfb4: 0x0  nop
    ctx->pc = 0x22bfb4u;
    // NOP
label_22bfb8:
    // 0x22bfb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22bfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22bfbc:
    // 0x22bfbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22bfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22bfc0:
    // 0x22bfc0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22bfc4:
    // 0x22bfc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bfc8:
    // 0x22bfc8: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x22bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_22bfcc:
    // 0x22bfcc: 0xc08fed2  jal         func_23FB48
label_22bfd0:
    if (ctx->pc == 0x22BFD0u) {
        ctx->pc = 0x22BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFCCu;
        // 0x22bfd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFD4u;
        goto label_22bfd4;
    }
    ctx->pc = 0x22BFCCu;
    SET_GPR_U32(ctx, 31, 0x22BFD4u);
    ctx->pc = 0x22BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFCCu;
    // 0x22bfd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22BFCCu, 0x22BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFD4u;
label_22bfd4:
    // 0x22bfd4: 0xc0899bc  jal         func_2266F0
label_22bfd8:
    if (ctx->pc == 0x22BFD8u) {
        ctx->pc = 0x22BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD4u;
        // 0x22bfd8: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFDCu;
        goto label_22bfdc;
    }
    ctx->pc = 0x22BFD4u;
    SET_GPR_U32(ctx, 31, 0x22BFDCu);
    ctx->pc = 0x22BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFD4u;
    // 0x22bfd8: 0x8e240318  lw          $a0, 0x318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22BFD4u, 0x22BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFDCu;
label_22bfdc:
    // 0x22bfdc: 0xc097f26  jal         func_25FC98
label_22bfe0:
    if (ctx->pc == 0x22BFE0u) {
        ctx->pc = 0x22BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFDCu;
        // 0x22bfe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFE4u;
        goto label_22bfe4;
    }
    ctx->pc = 0x22BFDCu;
    SET_GPR_U32(ctx, 31, 0x22BFE4u);
    ctx->pc = 0x22BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFDCu;
    // 0x22bfe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x22BFDCu, 0x22BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFE4u;
label_22bfe4:
    // 0x22bfe4: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x22bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_22bfe8:
    // 0x22bfe8: 0xc0cf31c  jal         func_33CC70
label_22bfec:
    if (ctx->pc == 0x22BFECu) {
        ctx->pc = 0x22BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFE8u;
        // 0x22bfec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFF0u;
        goto label_22bff0;
    }
    ctx->pc = 0x22BFE8u;
    SET_GPR_U32(ctx, 31, 0x22BFF0u);
    ctx->pc = 0x22BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFE8u;
    // 0x22bfec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC70u, 0x22BFE8u, 0x22BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFF0u;
label_22bff0:
    // 0x22bff0: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x22bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_22bff4:
    // 0x22bff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22bff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22bff8:
    // 0x22bff8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x22bff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22bffc:
    // 0x22bffc: 0xc0cf284  jal         func_33CA10
label_22c000:
    if (ctx->pc == 0x22C000u) {
        ctx->pc = 0x22C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFFCu;
        // 0x22c000: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C004u;
        goto label_22c004;
    }
    ctx->pc = 0x22BFFCu;
    SET_GPR_U32(ctx, 31, 0x22C004u);
    ctx->pc = 0x22C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFFCu;
    // 0x22c000: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CA10u, 0x22BFFCu, 0x22C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C004u;
label_22c004:
    // 0x22c004: 0x1000001f  b           . + 4 + (0x1F << 2)
label_22c008:
    if (ctx->pc == 0x22C008u) {
        ctx->pc = 0x22C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C004u;
        // 0x22c008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C00Cu;
        goto label_22c00c;
    }
    ctx->pc = 0x22C004u;
    {
        const bool branch_taken_0x22c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C004u;
        // 0x22c008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c004) {
            ctx->pc = 0x22C084u;
            goto label_22c084;
        }
    }
    ctx->pc = 0x22C00Cu;
label_22c00c:
    // 0x22c00c: 0xc0d8de2  jal         func_363788
label_22c010:
    if (ctx->pc == 0x22C010u) {
        ctx->pc = 0x22C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C00Cu;
        // 0x22c010: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C014u;
        goto label_22c014;
    }
    ctx->pc = 0x22C00Cu;
    SET_GPR_U32(ctx, 31, 0x22C014u);
    ctx->pc = 0x22C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C00Cu;
    // 0x22c010: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22C00Cu, 0x22C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C014u;
label_22c014:
    // 0x22c014: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x22c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_22c018:
    // 0x22c018: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_22c01c:
    if (ctx->pc == 0x22C01Cu) {
        ctx->pc = 0x22C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C018u;
        // 0x22c01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C020u;
        goto label_22c020;
    }
    ctx->pc = 0x22C018u;
    {
        const bool branch_taken_0x22c018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c018) {
            ctx->pc = 0x22C01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C018u;
            // 0x22c01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C084u;
            goto label_22c084;
        }
    }
    ctx->pc = 0x22C020u;
label_22c020:
    // 0x22c020: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22c024:
    // 0x22c024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22c028:
    // 0x22c028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22c028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c02c:
    // 0x22c02c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x22c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c030:
    // 0x22c030: 0x0  nop
    ctx->pc = 0x22c030u;
    // NOP
label_22c034:
    // 0x22c034: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x22c034u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_22c038:
    // 0x22c038: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x22c038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c03c:
    // 0x22c03c: 0x0  nop
    ctx->pc = 0x22c03cu;
    // NOP
label_22c040:
    // 0x22c040: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_22c044:
    if (ctx->pc == 0x22C044u) {
        ctx->pc = 0x22C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C040u;
        // 0x22c044: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C048u;
        goto label_22c048;
    }
    ctx->pc = 0x22C040u;
    {
        const bool branch_taken_0x22c040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C040u;
        // 0x22c044: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c040) {
            ctx->pc = 0x22C04Cu;
            goto label_22c04c;
        }
    }
    ctx->pc = 0x22C048u;
label_22c048:
    // 0x22c048: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x22c048u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_22c04c:
    // 0x22c04c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22c04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_22c050:
    // 0x22c050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c054:
    // 0x22c054: 0x0  nop
    ctx->pc = 0x22c054u;
    // NOP
label_22c058:
    // 0x22c058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c05c:
    // 0x22c05c: 0x0  nop
    ctx->pc = 0x22c05cu;
    // NOP
label_22c060:
    // 0x22c060: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_22c064:
    if (ctx->pc == 0x22C064u) {
        ctx->pc = 0x22C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C060u;
        // 0x22c064: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C068u;
        goto label_22c068;
    }
    ctx->pc = 0x22C060u;
    {
        const bool branch_taken_0x22c060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c060) {
            ctx->pc = 0x22C064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C060u;
            // 0x22c064: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C070u;
            goto label_22c070;
        }
    }
    ctx->pc = 0x22C068u;
label_22c068:
    // 0x22c068: 0x10000002  b           . + 4 + (0x2 << 2)
label_22c06c:
    if (ctx->pc == 0x22C06Cu) {
        ctx->pc = 0x22C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C068u;
        // 0x22c06c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C070u;
        goto label_22c070;
    }
    ctx->pc = 0x22C068u;
    {
        const bool branch_taken_0x22c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C068u;
        // 0x22c06c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c068) {
            ctx->pc = 0x22C074u;
            goto label_22c074;
        }
    }
    ctx->pc = 0x22C070u;
label_22c070:
    // 0x22c070: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x22c070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22c074:
    // 0x22c074: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c078:
    // 0x22c078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22c078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22c07c:
    // 0x22c07c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22c07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22c080:
    // 0x22c080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c084:
    // 0x22c084: 0xc0894f6  jal         func_2253D8
label_22c088:
    if (ctx->pc == 0x22C088u) {
        ctx->pc = 0x22C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C084u;
        // 0x22c088: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C08Cu;
        goto label_22c08c;
    }
    ctx->pc = 0x22C084u;
    SET_GPR_U32(ctx, 31, 0x22C08Cu);
    ctx->pc = 0x22C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C084u;
    // 0x22c088: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x22C084u, 0x22C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C08Cu;
label_22c08c:
    // 0x22c08c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c090:
    // 0x22c090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c094:
    // 0x22c094: 0x0  nop
    ctx->pc = 0x22c094u;
    // NOP
label_22c098:
    // 0x22c098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22c098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c09c:
    // 0x22c09c: 0x0  nop
    ctx->pc = 0x22c09cu;
    // NOP
label_22c0a0:
    // 0x22c0a0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_22c0a4:
    if (ctx->pc == 0x22C0A4u) {
        ctx->pc = 0x22C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0A0u;
        // 0x22c0a4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0A8u;
        goto label_22c0a8;
    }
    ctx->pc = 0x22C0A0u;
    {
        const bool branch_taken_0x22c0a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0A0u;
        // 0x22c0a4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0a0) {
            ctx->pc = 0x22C0FCu;
            goto label_22c0fc;
        }
    }
    ctx->pc = 0x22C0A8u;
label_22c0a8:
    // 0x22c0a8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_22c0ac:
    // 0x22c0ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c0b0:
    if (ctx->pc == 0x22C0B0u) {
        ctx->pc = 0x22C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0ACu;
        // 0x22c0b0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0B4u;
        goto label_22c0b4;
    }
    ctx->pc = 0x22C0ACu;
    {
        const bool branch_taken_0x22c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c0ac) {
            ctx->pc = 0x22C0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C0ACu;
            // 0x22c0b0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C0C0u;
            goto label_22c0c0;
        }
    }
    ctx->pc = 0x22C0B4u;
label_22c0b4:
    // 0x22c0b4: 0x8e220390  lw          $v0, 0x390($s1)
    ctx->pc = 0x22c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
label_22c0b8:
    // 0x22c0b8: 0x1000000f  b           . + 4 + (0xF << 2)
label_22c0bc:
    if (ctx->pc == 0x22C0BCu) {
        ctx->pc = 0x22C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0B8u;
        // 0x22c0bc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0C0u;
        goto label_22c0c0;
    }
    ctx->pc = 0x22C0B8u;
    {
        const bool branch_taken_0x22c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0B8u;
        // 0x22c0bc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0b8) {
            ctx->pc = 0x22C0F8u;
            goto label_22c0f8;
        }
    }
    ctx->pc = 0x22C0C0u;
label_22c0c0:
    // 0x22c0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c0c4:
    // 0x22c0c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_22c0c8:
    if (ctx->pc == 0x22C0C8u) {
        ctx->pc = 0x22C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C4u;
        // 0x22c0c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0CCu;
        goto label_22c0cc;
    }
    ctx->pc = 0x22C0C4u;
    {
        const bool branch_taken_0x22c0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0C4u;
        // 0x22c0c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0c4) {
            ctx->pc = 0x22C0E0u;
            goto label_22c0e0;
        }
    }
    ctx->pc = 0x22C0CCu;
label_22c0cc:
    // 0x22c0cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22c0d0:
    // 0x22c0d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22c0d4:
    if (ctx->pc == 0x22C0D4u) {
        ctx->pc = 0x22C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0D0u;
        // 0x22c0d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0D8u;
        goto label_22c0d8;
    }
    ctx->pc = 0x22C0D0u;
    {
        const bool branch_taken_0x22c0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0D0u;
        // 0x22c0d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0d0) {
            ctx->pc = 0x22C0E0u;
            goto label_22c0e0;
        }
    }
    ctx->pc = 0x22C0D8u;
label_22c0d8:
    // 0x22c0d8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22c0dc:
    if (ctx->pc == 0x22C0DCu) {
        ctx->pc = 0x22C0E0u;
        goto label_22c0e0;
    }
    ctx->pc = 0x22C0D8u;
    {
        const bool branch_taken_0x22c0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c0d8) {
            ctx->pc = 0x22C0E4u;
            goto label_22c0e4;
        }
    }
    ctx->pc = 0x22C0E0u;
label_22c0e0:
    // 0x22c0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c0e4:
    // 0x22c0e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22c0e8:
    if (ctx->pc == 0x22C0E8u) {
        ctx->pc = 0x22C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0E4u;
        // 0x22c0e8: 0x8e220390  lw          $v0, 0x390($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0ECu;
        goto label_22c0ec;
    }
    ctx->pc = 0x22C0E4u;
    {
        const bool branch_taken_0x22c0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0E4u;
        // 0x22c0e8: 0x8e220390  lw          $v0, 0x390($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0e4) {
            ctx->pc = 0x22C0F4u;
            goto label_22c0f4;
        }
    }
    ctx->pc = 0x22C0ECu;
label_22c0ec:
    // 0x22c0ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_22c0f0:
    if (ctx->pc == 0x22C0F0u) {
        ctx->pc = 0x22C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0ECu;
        // 0x22c0f0: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C0F4u;
        goto label_22c0f4;
    }
    ctx->pc = 0x22C0ECu;
    {
        const bool branch_taken_0x22c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0ECu;
        // 0x22c0f0: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0ec) {
            ctx->pc = 0x22C0F8u;
            goto label_22c0f8;
        }
    }
    ctx->pc = 0x22C0F4u;
label_22c0f4:
    // 0x22c0f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_22c0f8:
    // 0x22c0f8: 0xae220390  sw          $v0, 0x390($s1)
    ctx->pc = 0x22c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 912), GPR_U32(ctx, 2));
label_22c0fc:
    // 0x22c0fc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x22c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_22c100:
    // 0x22c100: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_22c104:
    if (ctx->pc == 0x22C104u) {
        ctx->pc = 0x22C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C100u;
        // 0x22c104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C108u;
        goto label_22c108;
    }
    ctx->pc = 0x22C100u;
    {
        const bool branch_taken_0x22c100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C100u;
        // 0x22c104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c100) {
            ctx->pc = 0x22C120u;
            goto label_22c120;
        }
    }
    ctx->pc = 0x22C108u;
label_22c108:
    // 0x22c108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22c108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22c10c:
    // 0x22c10c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x22c10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22c110:
    // 0x22c110: 0xc08a300  jal         func_228C00
label_22c114:
    if (ctx->pc == 0x22C114u) {
        ctx->pc = 0x22C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C110u;
        // 0x22c114: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C118u;
        goto label_22c118;
    }
    ctx->pc = 0x22C110u;
    SET_GPR_U32(ctx, 31, 0x22C118u);
    ctx->pc = 0x22C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C110u;
    // 0x22c114: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C00u, 0x22C110u, 0x22C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C118u;
label_22c118:
    // 0x22c118: 0x10000002  b           . + 4 + (0x2 << 2)
label_22c11c:
    if (ctx->pc == 0x22C11Cu) {
        ctx->pc = 0x22C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C118u;
        // 0x22c11c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C120u;
        goto label_22c120;
    }
    ctx->pc = 0x22C118u;
    {
        const bool branch_taken_0x22c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C118u;
        // 0x22c11c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c118) {
            ctx->pc = 0x22C124u;
            goto label_22c124;
        }
    }
    ctx->pc = 0x22C120u;
label_22c120:
    // 0x22c120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c124:
    // 0x22c124: 0x50400126  beql        $v0, $zero, . + 4 + (0x126 << 2)
label_22c128:
    if (ctx->pc == 0x22C128u) {
        ctx->pc = 0x22C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C124u;
        // 0x22c128: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C12Cu;
        goto label_22c12c;
    }
    ctx->pc = 0x22C124u;
    {
        const bool branch_taken_0x22c124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c124) {
            ctx->pc = 0x22C128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C124u;
            // 0x22c128: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C5C0u;
            goto label_22c5c0;
        }
    }
    ctx->pc = 0x22C12Cu;
label_22c12c:
    // 0x22c12c: 0xc06b600  jal         func_1AD800
label_22c130:
    if (ctx->pc == 0x22C130u) {
        ctx->pc = 0x22C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C12Cu;
        // 0x22c130: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C134u;
        goto label_22c134;
    }
    ctx->pc = 0x22C12Cu;
    SET_GPR_U32(ctx, 31, 0x22C134u);
    ctx->pc = 0x22C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C12Cu;
    // 0x22c130: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22C12Cu, 0x22C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C134u;
label_22c134:
    // 0x22c134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_22c138:
    if (ctx->pc == 0x22C138u) {
        ctx->pc = 0x22C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C134u;
        // 0x22c138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C13Cu;
        goto label_22c13c;
    }
    ctx->pc = 0x22C134u;
    {
        const bool branch_taken_0x22c134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C134u;
        // 0x22c138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c134) {
            ctx->pc = 0x22C148u;
            goto label_22c148;
        }
    }
    ctx->pc = 0x22C13Cu;
label_22c13c:
    // 0x22c13c: 0xc08e528  jal         func_2394A0
label_22c140:
    if (ctx->pc == 0x22C140u) {
        ctx->pc = 0x22C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C13Cu;
        // 0x22c140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C144u;
        goto label_22c144;
    }
    ctx->pc = 0x22C13Cu;
    SET_GPR_U32(ctx, 31, 0x22C144u);
    ctx->pc = 0x22C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C13Cu;
    // 0x22c140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x22C13Cu, 0x22C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C144u;
label_22c144:
    // 0x22c144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c148:
    // 0x22c148: 0xc08e3b2  jal         func_238EC8
label_22c14c:
    if (ctx->pc == 0x22C14Cu) {
        ctx->pc = 0x22C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C148u;
        // 0x22c14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C150u;
        goto label_22c150;
    }
    ctx->pc = 0x22C148u;
    SET_GPR_U32(ctx, 31, 0x22C150u);
    ctx->pc = 0x22C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C148u;
    // 0x22c14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x22C148u, 0x22C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C150u;
label_22c150:
    // 0x22c150: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x22c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_22c154:
    // 0x22c154: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22c158:
    if (ctx->pc == 0x22C158u) {
        ctx->pc = 0x22C15Cu;
        goto label_22c15c;
    }
    ctx->pc = 0x22C154u;
    {
        const bool branch_taken_0x22c154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c154) {
            ctx->pc = 0x22C170u;
            goto label_22c170;
        }
    }
    ctx->pc = 0x22C15Cu;
label_22c15c:
    // 0x22c15c: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x22c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_22c160:
    // 0x22c160: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_22c164:
    if (ctx->pc == 0x22C164u) {
        ctx->pc = 0x22C168u;
        goto label_22c168;
    }
    ctx->pc = 0x22C160u;
    {
        const bool branch_taken_0x22c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x22c160) {
            ctx->pc = 0x22C170u;
            goto label_22c170;
        }
    }
    ctx->pc = 0x22C168u;
label_22c168:
    // 0x22c168: 0xc09c07c  jal         func_2701F0
label_22c16c:
    if (ctx->pc == 0x22C16Cu) {
        ctx->pc = 0x22C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C168u;
        // 0x22c16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C170u;
        goto label_22c170;
    }
    ctx->pc = 0x22C168u;
    SET_GPR_U32(ctx, 31, 0x22C170u);
    ctx->pc = 0x22C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C168u;
    // 0x22c16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x22C168u, 0x22C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C170u;
label_22c170:
    // 0x22c170: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
label_22c174:
    if (ctx->pc == 0x22C174u) {
        ctx->pc = 0x22C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C170u;
        // 0x22c174: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C178u;
        goto label_22c178;
    }
    ctx->pc = 0x22C170u;
    {
        const bool branch_taken_0x22c170 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C170u;
        // 0x22c174: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c170) {
            ctx->pc = 0x22C1ECu;
            goto label_22c1ec;
        }
    }
    ctx->pc = 0x22C178u;
label_22c178:
    // 0x22c178: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22c178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22c17c:
    // 0x22c17c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_22c180:
    if (ctx->pc == 0x22C180u) {
        ctx->pc = 0x22C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C17Cu;
        // 0x22c180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C184u;
        goto label_22c184;
    }
    ctx->pc = 0x22C17Cu;
    {
        const bool branch_taken_0x22c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C17Cu;
        // 0x22c180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c17c) {
            ctx->pc = 0x22C1E8u;
            goto label_22c1e8;
        }
    }
    ctx->pc = 0x22C184u;
label_22c184:
    // 0x22c184: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x22c184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22c188:
    // 0x22c188: 0xc0d8de2  jal         func_363788
label_22c18c:
    if (ctx->pc == 0x22C18Cu) {
        ctx->pc = 0x22C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C188u;
        // 0x22c18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C190u;
        goto label_22c190;
    }
    ctx->pc = 0x22C188u;
    SET_GPR_U32(ctx, 31, 0x22C190u);
    ctx->pc = 0x22C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C188u;
    // 0x22c18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22C188u, 0x22C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C190u;
label_22c190:
    // 0x22c190: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_22c194:
    if (ctx->pc == 0x22C194u) {
        ctx->pc = 0x22C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C190u;
        // 0x22c194: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C198u;
        goto label_22c198;
    }
    ctx->pc = 0x22C190u;
    {
        const bool branch_taken_0x22c190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c190) {
            ctx->pc = 0x22C194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C190u;
            // 0x22c194: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C1ACu;
            goto label_22c1ac;
        }
    }
    ctx->pc = 0x22C198u;
label_22c198:
    // 0x22c198: 0xc0d8de2  jal         func_363788
label_22c19c:
    if (ctx->pc == 0x22C19Cu) {
        ctx->pc = 0x22C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C198u;
        // 0x22c19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1A0u;
        goto label_22c1a0;
    }
    ctx->pc = 0x22C198u;
    SET_GPR_U32(ctx, 31, 0x22C1A0u);
    ctx->pc = 0x22C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C198u;
    // 0x22c19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22C198u, 0x22C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1A0u;
label_22c1a0:
    // 0x22c1a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c1a4:
    // 0x22c1a4: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_22c1a8:
    if (ctx->pc == 0x22C1A8u) {
        ctx->pc = 0x22C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1A4u;
        // 0x22c1a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1ACu;
        goto label_22c1ac;
    }
    ctx->pc = 0x22C1A4u;
    {
        const bool branch_taken_0x22c1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c1a4) {
            ctx->pc = 0x22C1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1A4u;
            // 0x22c1a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C1ACu;
            goto label_22c1ac;
        }
    }
    ctx->pc = 0x22C1ACu;
label_22c1ac:
    // 0x22c1ac: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
label_22c1b0:
    if (ctx->pc == 0x22C1B0u) {
        ctx->pc = 0x22C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1ACu;
        // 0x22c1b0: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1B4u;
        goto label_22c1b4;
    }
    ctx->pc = 0x22C1ACu;
    {
        const bool branch_taken_0x22c1ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c1ac) {
            ctx->pc = 0x22C1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1ACu;
            // 0x22c1b0: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C1CCu;
            goto label_22c1cc;
        }
    }
    ctx->pc = 0x22C1B4u;
label_22c1b4:
    // 0x22c1b4: 0xc0d8de2  jal         func_363788
label_22c1b8:
    if (ctx->pc == 0x22C1B8u) {
        ctx->pc = 0x22C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1B4u;
        // 0x22c1b8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1BCu;
        goto label_22c1bc;
    }
    ctx->pc = 0x22C1B4u;
    SET_GPR_U32(ctx, 31, 0x22C1BCu);
    ctx->pc = 0x22C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C1B4u;
    // 0x22c1b8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22C1B4u, 0x22C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1BCu;
label_22c1bc:
    // 0x22c1bc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x22c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_22c1c0:
    // 0x22c1c0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_22c1c4:
    if (ctx->pc == 0x22C1C4u) {
        ctx->pc = 0x22C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1C0u;
        // 0x22c1c4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1C8u;
        goto label_22c1c8;
    }
    ctx->pc = 0x22C1C0u;
    {
        const bool branch_taken_0x22c1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c1c0) {
            ctx->pc = 0x22C1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1C0u;
            // 0x22c1c4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C1ECu;
            goto label_22c1ec;
        }
    }
    ctx->pc = 0x22C1C8u;
label_22c1c8:
    // 0x22c1c8: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22c1cc:
    // 0x22c1cc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_22c1d0:
    // 0x22c1d0: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_22c1d4:
    // 0x22c1d4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22c1d8:
    if (ctx->pc == 0x22C1D8u) {
        ctx->pc = 0x22C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1D4u;
        // 0x22c1d8: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1DCu;
        goto label_22c1dc;
    }
    ctx->pc = 0x22C1D4u;
    {
        const bool branch_taken_0x22c1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1D4u;
        // 0x22c1d8: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1d4) {
            ctx->pc = 0x22C1E4u;
            goto label_22c1e4;
        }
    }
    ctx->pc = 0x22C1DCu;
label_22c1dc:
    // 0x22c1dc: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_22c1e0:
    if (ctx->pc == 0x22C1E0u) {
        ctx->pc = 0x22C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1DCu;
        // 0x22c1e0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1E4u;
        goto label_22c1e4;
    }
    ctx->pc = 0x22C1DCu;
    {
        const bool branch_taken_0x22c1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c1dc) {
            ctx->pc = 0x22C1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1DCu;
            // 0x22c1e0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C1ECu;
            goto label_22c1ec;
        }
    }
    ctx->pc = 0x22C1E4u;
label_22c1e4:
    // 0x22c1e4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x22c1e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c1e8:
    // 0x22c1e8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22c1ec:
    // 0x22c1ec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_22c1f0:
    // 0x22c1f0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x22c1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_22c1f4:
    // 0x22c1f4: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_22c1f8:
    if (ctx->pc == 0x22C1F8u) {
        ctx->pc = 0x22C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1F4u;
        // 0x22c1f8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1FCu;
        goto label_22c1fc;
    }
    ctx->pc = 0x22C1F4u;
    {
        const bool branch_taken_0x22c1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c1f4) {
            ctx->pc = 0x22C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1F4u;
            // 0x22c1f8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C31Cu;
            goto label_22c31c;
        }
    }
    ctx->pc = 0x22C1FCu;
label_22c1fc:
    // 0x22c1fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x22c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22c200:
    // 0x22c200: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_22c204:
    // 0x22c204: 0x50800045  beql        $a0, $zero, . + 4 + (0x45 << 2)
label_22c208:
    if (ctx->pc == 0x22C208u) {
        ctx->pc = 0x22C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C204u;
        // 0x22c208: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C20Cu;
        goto label_22c20c;
    }
    ctx->pc = 0x22C204u;
    {
        const bool branch_taken_0x22c204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c204) {
            ctx->pc = 0x22C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C204u;
            // 0x22c208: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C31Cu;
            goto label_22c31c;
        }
    }
    ctx->pc = 0x22C20Cu;
label_22c20c:
    // 0x22c20c: 0xc097f26  jal         func_25FC98
label_22c210:
    if (ctx->pc == 0x22C210u) {
        ctx->pc = 0x22C214u;
        goto label_22c214;
    }
    ctx->pc = 0x22C20Cu;
    SET_GPR_U32(ctx, 31, 0x22C214u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x22C20Cu, 0x22C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C214u;
label_22c214:
    // 0x22c214: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_22c218:
    // 0x22c218: 0x54430040  bnel        $v0, $v1, . + 4 + (0x40 << 2)
label_22c21c:
    if (ctx->pc == 0x22C21Cu) {
        ctx->pc = 0x22C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C218u;
        // 0x22c21c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C220u;
        goto label_22c220;
    }
    ctx->pc = 0x22C218u;
    {
        const bool branch_taken_0x22c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c218) {
            ctx->pc = 0x22C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C218u;
            // 0x22c21c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C31Cu;
            goto label_22c31c;
        }
    }
    ctx->pc = 0x22C220u;
label_22c220:
    // 0x22c220: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x22c220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22c224:
    // 0x22c224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22c228:
    // 0x22c228: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_22c22c:
    if (ctx->pc == 0x22C22Cu) {
        ctx->pc = 0x22C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C228u;
        // 0x22c22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C230u;
        goto label_22c230;
    }
    ctx->pc = 0x22C228u;
    {
        const bool branch_taken_0x22c228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C228u;
        // 0x22c22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c228) {
            ctx->pc = 0x22C318u;
            goto label_22c318;
        }
    }
    ctx->pc = 0x22C230u;
label_22c230:
    // 0x22c230: 0xc08a1f2  jal         func_2287C8
label_22c234:
    if (ctx->pc == 0x22C234u) {
        ctx->pc = 0x22C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C230u;
        // 0x22c234: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C238u;
        goto label_22c238;
    }
    ctx->pc = 0x22C230u;
    SET_GPR_U32(ctx, 31, 0x22C238u);
    ctx->pc = 0x22C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C230u;
    // 0x22c234: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x22C230u, 0x22C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C238u;
label_22c238:
    // 0x22c238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c23c:
    // 0x22c23c: 0xc0f70ce  jal         func_3DC338
label_22c240:
    if (ctx->pc == 0x22C240u) {
        ctx->pc = 0x22C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C23Cu;
        // 0x22c240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C244u;
        goto label_22c244;
    }
    ctx->pc = 0x22C23Cu;
    SET_GPR_U32(ctx, 31, 0x22C244u);
    ctx->pc = 0x22C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C23Cu;
    // 0x22c240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x22C23Cu, 0x22C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C244u;
label_22c244:
    // 0x22c244: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22c248:
    if (ctx->pc == 0x22C248u) {
        ctx->pc = 0x22C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C244u;
        // 0x22c248: 0x8e2304b8  lw          $v1, 0x4B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C24Cu;
        goto label_22c24c;
    }
    ctx->pc = 0x22C244u;
    {
        const bool branch_taken_0x22c244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c244) {
            ctx->pc = 0x22C248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C244u;
            // 0x22c248: 0x8e2304b8  lw          $v1, 0x4B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C258u;
            goto label_22c258;
        }
    }
    ctx->pc = 0x22C24Cu;
label_22c24c:
    // 0x22c24c: 0xc0c4900  jal         func_312400
label_22c250:
    if (ctx->pc == 0x22C250u) {
        ctx->pc = 0x22C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C24Cu;
        // 0x22c250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C254u;
        goto label_22c254;
    }
    ctx->pc = 0x22C24Cu;
    SET_GPR_U32(ctx, 31, 0x22C254u);
    ctx->pc = 0x22C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C24Cu;
    // 0x22c250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x22C24Cu, 0x22C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C254u;
label_22c254:
    // 0x22c254: 0x8e2304b8  lw          $v1, 0x4B8($s1)
    ctx->pc = 0x22c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
label_22c258:
    // 0x22c258: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x22c258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_22c25c:
    // 0x22c25c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x22c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_22c260:
    // 0x22c260: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22c260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_22c264:
    // 0x22c264: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x22c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_22c268:
    // 0x22c268: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_22c26c:
    if (ctx->pc == 0x22C26Cu) {
        ctx->pc = 0x22C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C268u;
        // 0x22c26c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C270u;
        goto label_22c270;
    }
    ctx->pc = 0x22C268u;
    {
        const bool branch_taken_0x22c268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C268u;
        // 0x22c26c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c268) {
            ctx->pc = 0x22C2C4u;
            goto label_22c2c4;
        }
    }
    ctx->pc = 0x22C270u;
label_22c270:
    // 0x22c270: 0x8e2201d8  lw          $v0, 0x1D8($s1)
    ctx->pc = 0x22c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_22c274:
    // 0x22c274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c278:
    // 0x22c278: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_22c27c:
    if (ctx->pc == 0x22C27Cu) {
        ctx->pc = 0x22C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C278u;
        // 0x22c27c: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C280u;
        goto label_22c280;
    }
    ctx->pc = 0x22C278u;
    {
        const bool branch_taken_0x22c278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C278u;
        // 0x22c27c: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c278) {
            ctx->pc = 0x22C288u;
            goto label_22c288;
        }
    }
    ctx->pc = 0x22C280u;
label_22c280:
    // 0x22c280: 0x1000000c  b           . + 4 + (0xC << 2)
label_22c284:
    if (ctx->pc == 0x22C284u) {
        ctx->pc = 0x22C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C280u;
        // 0x22c284: 0xae2001d8  sw          $zero, 0x1D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C288u;
        goto label_22c288;
    }
    ctx->pc = 0x22C280u;
    {
        const bool branch_taken_0x22c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C280u;
        // 0x22c284: 0xae2001d8  sw          $zero, 0x1D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c280) {
            ctx->pc = 0x22C2B4u;
            goto label_22c2b4;
        }
    }
    ctx->pc = 0x22C288u;
label_22c288:
    // 0x22c288: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_22c28c:
    // 0x22c28c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x22c28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_22c290:
    // 0x22c290: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22c294:
    if (ctx->pc == 0x22C294u) {
        ctx->pc = 0x22C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C290u;
        // 0x22c294: 0x262201d8  addiu       $v0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C298u;
        goto label_22c298;
    }
    ctx->pc = 0x22C290u;
    {
        const bool branch_taken_0x22c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C290u;
        // 0x22c294: 0x262201d8  addiu       $v0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c290) {
            ctx->pc = 0x22C2B4u;
            goto label_22c2b4;
        }
    }
    ctx->pc = 0x22C298u;
label_22c298:
    // 0x22c298: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_22c29c:
    // 0x22c29c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c2a0:
    // 0x22c2a0: 0x8e2404b8  lw          $a0, 0x4B8($s1)
    ctx->pc = 0x22c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
label_22c2a4:
    // 0x22c2a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22c2a8:
    // 0x22c2a8: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
label_22c2ac:
    if (ctx->pc == 0x22C2ACu) {
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2B0u;
        goto label_22c2b0;
    }
    ctx->pc = 0x22C2A8u;
    {
        const bool branch_taken_0x22c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2a8) {
            ctx->pc = 0x22C28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c28c;
        }
    }
    ctx->pc = 0x22C2B0u;
label_22c2b0:
    // 0x22c2b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x22c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_22c2b4:
    // 0x22c2b4: 0x8e2504b8  lw          $a1, 0x4B8($s1)
    ctx->pc = 0x22c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
label_22c2b8:
    // 0x22c2b8: 0xc0b0ab2  jal         func_2C2AC8
label_22c2bc:
    if (ctx->pc == 0x22C2BCu) {
        ctx->pc = 0x22C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2B8u;
        // 0x22c2bc: 0x24c44f20  addiu       $a0, $a2, 0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2C0u;
        goto label_22c2c0;
    }
    ctx->pc = 0x22C2B8u;
    SET_GPR_U32(ctx, 31, 0x22C2C0u);
    ctx->pc = 0x22C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2B8u;
    // 0x22c2bc: 0x24c44f20  addiu       $a0, $a2, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AC8u, 0x22C2B8u, 0x22C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2C0u;
label_22c2c0:
    // 0x22c2c0: 0xae2004b8  sw          $zero, 0x4B8($s1)
    ctx->pc = 0x22c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1208), GPR_U32(ctx, 0));
label_22c2c4:
    // 0x22c2c4: 0xc083fd0  jal         func_20FF40
label_22c2c8:
    if (ctx->pc == 0x22C2C8u) {
        ctx->pc = 0x22C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2C4u;
        // 0x22c2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2CCu;
        goto label_22c2cc;
    }
    ctx->pc = 0x22C2C4u;
    SET_GPR_U32(ctx, 31, 0x22C2CCu);
    ctx->pc = 0x22C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2C4u;
    // 0x22c2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FF40u, 0x22C2C4u, 0x22C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2CCu;
label_22c2cc:
    // 0x22c2cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c2d0:
    // 0x22c2d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22c2d4:
    // 0x22c2d4: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_22c2d8:
    if (ctx->pc == 0x22C2D8u) {
        ctx->pc = 0x22C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2D4u;
        // 0x22c2d8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2DCu;
        goto label_22c2dc;
    }
    ctx->pc = 0x22C2D4u;
    {
        const bool branch_taken_0x22c2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2D4u;
        // 0x22c2d8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2d4) {
            ctx->pc = 0x22C318u;
            goto label_22c318;
        }
    }
    ctx->pc = 0x22C2DCu;
label_22c2dc:
    // 0x22c2dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_22c2e0:
    // 0x22c2e0: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x22c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_22c2e4:
    // 0x22c2e4: 0x24a546c0  addiu       $a1, $a1, 0x46C0
    ctx->pc = 0x22c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18112));
label_22c2e8:
    // 0x22c2e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22c2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c2ec:
    // 0x22c2ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x22c2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22c2f0:
    // 0x22c2f0: 0xc0b0a34  jal         func_2C28D0
label_22c2f4:
    if (ctx->pc == 0x22C2F4u) {
        ctx->pc = 0x22C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2F0u;
        // 0x22c2f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2F8u;
        goto label_22c2f8;
    }
    ctx->pc = 0x22C2F0u;
    SET_GPR_U32(ctx, 31, 0x22C2F8u);
    ctx->pc = 0x22C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2F0u;
    // 0x22c2f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28D0u, 0x22C2F0u, 0x22C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2F8u;
label_22c2f8:
    // 0x22c2f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22c2f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c2fc:
    // 0x22c2fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22c300:
    if (ctx->pc == 0x22C300u) {
        ctx->pc = 0x22C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2FCu;
        // 0x22c300: 0xae2304b8  sw          $v1, 0x4B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C304u;
        goto label_22c304;
    }
    ctx->pc = 0x22C2FCu;
    {
        const bool branch_taken_0x22c2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2FCu;
        // 0x22c300: 0xae2304b8  sw          $v1, 0x4B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2fc) {
            ctx->pc = 0x22C318u;
            goto label_22c318;
        }
    }
    ctx->pc = 0x22C304u;
label_22c304:
    // 0x22c304: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22c304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22c308:
    // 0x22c308: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22c30c:
    // 0x22c30c: 0xac4301d8  sw          $v1, 0x1D8($v0)
    ctx->pc = 0x22c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
label_22c310:
    // 0x22c310: 0xc0b0eaa  jal         func_2C3AA8
label_22c314:
    if (ctx->pc == 0x22C314u) {
        ctx->pc = 0x22C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C310u;
        // 0x22c314: 0x8e2404b8  lw          $a0, 0x4B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C318u;
        goto label_22c318;
    }
    ctx->pc = 0x22C310u;
    SET_GPR_U32(ctx, 31, 0x22C318u);
    ctx->pc = 0x22C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C310u;
    // 0x22c314: 0x8e2404b8  lw          $a0, 0x4B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AA8u, 0x22C310u, 0x22C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C318u;
label_22c318:
    // 0x22c318: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x22c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22c31c:
    // 0x22c31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c320:
    // 0x22c320: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22c324:
    // 0x22c324: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_22c328:
    if (ctx->pc == 0x22C328u) {
        ctx->pc = 0x22C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C324u;
        // 0x22c328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C32Cu;
        goto label_22c32c;
    }
    ctx->pc = 0x22C324u;
    {
        const bool branch_taken_0x22c324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C324u;
        // 0x22c328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c324) {
            ctx->pc = 0x22C348u;
            goto label_22c348;
        }
    }
    ctx->pc = 0x22C32Cu;
label_22c32c:
    // 0x22c32c: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
label_22c330:
    if (ctx->pc == 0x22C330u) {
        ctx->pc = 0x22C334u;
        goto label_22c334;
    }
    ctx->pc = 0x22C32Cu;
    {
        const bool branch_taken_0x22c32c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c32c) {
            ctx->pc = 0x22C348u;
            goto label_22c348;
        }
    }
    ctx->pc = 0x22C334u;
label_22c334:
    // 0x22c334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c338:
    // 0x22c338: 0xc0952de  jal         func_254B78
label_22c33c:
    if (ctx->pc == 0x22C33Cu) {
        ctx->pc = 0x22C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C338u;
        // 0x22c33c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C340u;
        goto label_22c340;
    }
    ctx->pc = 0x22C338u;
    SET_GPR_U32(ctx, 31, 0x22C340u);
    ctx->pc = 0x22C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C338u;
    // 0x22c33c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x22C338u, 0x22C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C340u;
label_22c340:
    // 0x22c340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22c340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c344:
    // 0x22c344: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x22c344u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_22c348:
    // 0x22c348: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_22c34c:
    if (ctx->pc == 0x22C34Cu) {
        ctx->pc = 0x22C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C348u;
        // 0x22c34c: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C350u;
        goto label_22c350;
    }
    ctx->pc = 0x22C348u;
    {
        const bool branch_taken_0x22c348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c348) {
            ctx->pc = 0x22C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C348u;
            // 0x22c34c: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C378u;
            goto label_22c378;
        }
    }
    ctx->pc = 0x22C350u;
label_22c350:
    // 0x22c350: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x22c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c354:
    // 0x22c354: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c358:
    // 0x22c358: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22c358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c35c:
    // 0x22c35c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22c35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22c360:
    // 0x22c360: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22c360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c364:
    // 0x22c364: 0x0  nop
    ctx->pc = 0x22c364u;
    // NOP
label_22c368:
    // 0x22c368: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_22c36c:
    if (ctx->pc == 0x22C36Cu) {
        ctx->pc = 0x22C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C368u;
        // 0x22c36c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C370u;
        goto label_22c370;
    }
    ctx->pc = 0x22C368u;
    {
        const bool branch_taken_0x22c368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C368u;
        // 0x22c36c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c368) {
            ctx->pc = 0x22C434u;
            goto label_22c434;
        }
    }
    ctx->pc = 0x22C370u;
label_22c370:
    // 0x22c370: 0x10000007  b           . + 4 + (0x7 << 2)
label_22c374:
    if (ctx->pc == 0x22C374u) {
        ctx->pc = 0x22C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C370u;
        // 0x22c374: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C378u;
        goto label_22c378;
    }
    ctx->pc = 0x22C370u;
    {
        const bool branch_taken_0x22c370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C370u;
        // 0x22c374: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c370) {
            ctx->pc = 0x22C390u;
            goto label_22c390;
        }
    }
    ctx->pc = 0x22C378u;
label_22c378:
    // 0x22c378: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x22c378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_22c37c:
    // 0x22c37c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c380:
    if (ctx->pc == 0x22C380u) {
        ctx->pc = 0x22C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C37Cu;
        // 0x22c380: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C384u;
        goto label_22c384;
    }
    ctx->pc = 0x22C37Cu;
    {
        const bool branch_taken_0x22c37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C37Cu;
        // 0x22c380: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c37c) {
            ctx->pc = 0x22C38Cu;
            goto label_22c38c;
        }
    }
    ctx->pc = 0x22C384u;
label_22c384:
    // 0x22c384: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x22c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c388:
    // 0x22c388: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_22c38c:
    // 0x22c38c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x22c38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22c390:
    // 0x22c390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c394:
    // 0x22c394: 0xc08a994  jal         func_22A650
label_22c398:
    if (ctx->pc == 0x22C398u) {
        ctx->pc = 0x22C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C394u;
        // 0x22c398: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C39Cu;
        goto label_22c39c;
    }
    ctx->pc = 0x22C394u;
    SET_GPR_U32(ctx, 31, 0x22C39Cu);
    ctx->pc = 0x22C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C394u;
    // 0x22c398: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A650u, 0x22C394u, 0x22C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C39Cu;
label_22c39c:
    // 0x22c39c: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x22c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_22c3a0:
    // 0x22c3a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22c3a4:
    if (ctx->pc == 0x22C3A4u) {
        ctx->pc = 0x22C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3A0u;
        // 0x22c3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3A8u;
        goto label_22c3a8;
    }
    ctx->pc = 0x22C3A0u;
    {
        const bool branch_taken_0x22c3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3A0u;
        // 0x22c3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3a0) {
            ctx->pc = 0x22C3C4u;
            goto label_22c3c4;
        }
    }
    ctx->pc = 0x22C3A8u;
label_22c3a8:
    // 0x22c3a8: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x22c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_22c3ac:
    // 0x22c3ac: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22c3b0:
    // 0x22c3b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22c3b4:
    // 0x22c3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c3b8:
    // 0x22c3b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22c3bc:
    // 0x22c3bc: 0x2484f848  addiu       $a0, $a0, -0x7B8
    ctx->pc = 0x22c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965320));
label_22c3c0:
    // 0x22c3c0: 0x2c850002  sltiu       $a1, $a0, 0x2
    ctx->pc = 0x22c3c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22c3c4:
    // 0x22c3c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22c3c8:
    // 0x22c3c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c3cc:
    // 0x22c3cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22c3d0:
    // 0x22c3d0: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
label_22c3d4:
    if (ctx->pc == 0x22C3D4u) {
        ctx->pc = 0x22C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3D0u;
        // 0x22c3d4: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3D8u;
        goto label_22c3d8;
    }
    ctx->pc = 0x22C3D0u;
    {
        const bool branch_taken_0x22c3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22c3d0) {
            ctx->pc = 0x22C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C3D0u;
            // 0x22c3d4: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C3E4u;
            goto label_22c3e4;
        }
    }
    ctx->pc = 0x22C3D8u;
label_22c3d8:
    // 0x22c3d8: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
label_22c3dc:
    if (ctx->pc == 0x22C3DCu) {
        ctx->pc = 0x22C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3D8u;
        // 0x22c3dc: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3E0u;
        goto label_22c3e0;
    }
    ctx->pc = 0x22C3D8u;
    {
        const bool branch_taken_0x22c3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c3d8) {
            ctx->pc = 0x22C3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C3D8u;
            // 0x22c3dc: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C438u;
            goto label_22c438;
        }
    }
    ctx->pc = 0x22C3E0u;
label_22c3e0:
    // 0x22c3e0: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x22c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_22c3e4:
    // 0x22c3e4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x22c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_22c3e8:
    // 0x22c3e8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_22c3ec:
    if (ctx->pc == 0x22C3ECu) {
        ctx->pc = 0x22C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3E8u;
        // 0x22c3ec: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3F0u;
        goto label_22c3f0;
    }
    ctx->pc = 0x22C3E8u;
    {
        const bool branch_taken_0x22c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c3e8) {
            ctx->pc = 0x22C3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C3E8u;
            // 0x22c3ec: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C438u;
            goto label_22c438;
        }
    }
    ctx->pc = 0x22C3F0u;
label_22c3f0:
    // 0x22c3f0: 0xc08f972  jal         func_23E5C8
label_22c3f4:
    if (ctx->pc == 0x22C3F4u) {
        ctx->pc = 0x22C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3F0u;
        // 0x22c3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3F8u;
        goto label_22c3f8;
    }
    ctx->pc = 0x22C3F0u;
    SET_GPR_U32(ctx, 31, 0x22C3F8u);
    ctx->pc = 0x22C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3F0u;
    // 0x22c3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E5C8u, 0x22C3F0u, 0x22C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3F8u;
label_22c3f8:
    // 0x22c3f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22c3fc:
    if (ctx->pc == 0x22C3FCu) {
        ctx->pc = 0x22C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3F8u;
        // 0x22c3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C400u;
        goto label_22c400;
    }
    ctx->pc = 0x22C3F8u;
    {
        const bool branch_taken_0x22c3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3F8u;
        // 0x22c3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3f8) {
            ctx->pc = 0x22C434u;
            goto label_22c434;
        }
    }
    ctx->pc = 0x22C400u;
label_22c400:
    // 0x22c400: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_22c404:
    // 0x22c404: 0xc08fed2  jal         func_23FB48
label_22c408:
    if (ctx->pc == 0x22C408u) {
        ctx->pc = 0x22C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C404u;
        // 0x22c408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C40Cu;
        goto label_22c40c;
    }
    ctx->pc = 0x22C404u;
    SET_GPR_U32(ctx, 31, 0x22C40Cu);
    ctx->pc = 0x22C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C404u;
    // 0x22c408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22C404u, 0x22C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C40Cu;
label_22c40c:
    // 0x22c40c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_22c410:
    // 0x22c410: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c414:
    // 0x22c414: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x22c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_22c418:
    // 0x22c418: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22c418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_22c41c:
    // 0x22c41c: 0xc0b12b0  jal         func_2C4AC0
label_22c420:
    if (ctx->pc == 0x22C420u) {
        ctx->pc = 0x22C424u;
        goto label_22c424;
    }
    ctx->pc = 0x22C41Cu;
    SET_GPR_U32(ctx, 31, 0x22C424u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x22C41Cu, 0x22C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C424u;
label_22c424:
    // 0x22c424: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x22c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22c428:
    // 0x22c428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c42c:
    // 0x22c42c: 0xc083976  jal         func_20E5D8
label_22c430:
    if (ctx->pc == 0x22C430u) {
        ctx->pc = 0x22C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C42Cu;
        // 0x22c430: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C434u;
        goto label_22c434;
    }
    ctx->pc = 0x22C42Cu;
    SET_GPR_U32(ctx, 31, 0x22C434u);
    ctx->pc = 0x22C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C42Cu;
    // 0x22c430: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x22C42Cu, 0x22C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C434u;
label_22c434:
    // 0x22c434: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22c438:
    // 0x22c438: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x22c438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22c43c:
    // 0x22c43c: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_22c440:
    // 0x22c440: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_22c444:
    if (ctx->pc == 0x22C444u) {
        ctx->pc = 0x22C448u;
        goto label_22c448;
    }
    ctx->pc = 0x22C440u;
    {
        const bool branch_taken_0x22c440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22c440) {
            ctx->pc = 0x22C458u;
            goto label_22c458;
        }
    }
    ctx->pc = 0x22C448u;
label_22c448:
    // 0x22c448: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
label_22c44c:
    if (ctx->pc == 0x22C44Cu) {
        ctx->pc = 0x22C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C448u;
        // 0x22c44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C450u;
        goto label_22c450;
    }
    ctx->pc = 0x22C448u;
    {
        const bool branch_taken_0x22c448 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C448u;
        // 0x22c44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c448) {
            ctx->pc = 0x22C458u;
            goto label_22c458;
        }
    }
    ctx->pc = 0x22C450u;
label_22c450:
    // 0x22c450: 0x9223047d  lbu         $v1, 0x47D($s1)
    ctx->pc = 0x22c450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_22c454:
    // 0x22c454: 0x43a80a  movz        $s5, $v0, $v1
    ctx->pc = 0x22c454u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_22c458:
    // 0x22c458: 0x12a00046  beqz        $s5, . + 4 + (0x46 << 2)
label_22c45c:
    if (ctx->pc == 0x22C45Cu) {
        ctx->pc = 0x22C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C458u;
        // 0x22c45c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C460u;
        goto label_22c460;
    }
    ctx->pc = 0x22C458u;
    {
        const bool branch_taken_0x22c458 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C458u;
        // 0x22c45c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c458) {
            ctx->pc = 0x22C574u;
            goto label_22c574;
        }
    }
    ctx->pc = 0x22C460u;
label_22c460:
    // 0x22c460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22c464:
    // 0x22c464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22c464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c468:
    // 0x22c468: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x22c468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_22c46c:
    // 0x22c46c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_22c470:
    // 0x22c470: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x22c470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_22c474:
    // 0x22c474: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x22c474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_22c478:
    // 0x22c478: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c47c:
    // 0x22c47c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c480:
    // 0x22c480: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x22c480u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22c484:
    // 0x22c484: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x22c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c488:
    // 0x22c488: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x22c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c48c:
    // 0x22c48c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22c48cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_22c490:
    // 0x22c490: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x22c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c494:
    // 0x22c494: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x22c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c498:
    // 0x22c498: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x22c498u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22c49c:
    // 0x22c49c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22c49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_22c4a0:
    // 0x22c4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c4a4:
    // 0x22c4a4: 0x0  nop
    ctx->pc = 0x22c4a4u;
    // NOP
label_22c4a8:
    // 0x22c4a8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x22c4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c4ac:
    // 0x22c4ac: 0x0  nop
    ctx->pc = 0x22c4acu;
    // NOP
label_22c4b0:
    // 0x22c4b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_22c4b4:
    if (ctx->pc == 0x22C4B4u) {
        ctx->pc = 0x22C4B8u;
        goto label_22c4b8;
    }
    ctx->pc = 0x22C4B0u;
    {
        const bool branch_taken_0x22c4b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c4b0) {
            ctx->pc = 0x22C4C0u;
            goto label_22c4c0;
        }
    }
    ctx->pc = 0x22C4B8u;
label_22c4b8:
    // 0x22c4b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_22c4bc:
    if (ctx->pc == 0x22C4BCu) {
        ctx->pc = 0x22C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4B8u;
        // 0x22c4bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4C0u;
        goto label_22c4c0;
    }
    ctx->pc = 0x22C4B8u;
    {
        const bool branch_taken_0x22c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4B8u;
        // 0x22c4bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c4b8) {
            ctx->pc = 0x22C4D0u;
            goto label_22c4d0;
        }
    }
    ctx->pc = 0x22C4C0u;
label_22c4c0:
    // 0x22c4c0: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x22c4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c4c4:
    // 0x22c4c4: 0x0  nop
    ctx->pc = 0x22c4c4u;
    // NOP
label_22c4c8:
    // 0x22c4c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22c4cc:
    if (ctx->pc == 0x22C4CCu) {
        ctx->pc = 0x22C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4C8u;
        // 0x22c4cc: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4D0u;
        goto label_22c4d0;
    }
    ctx->pc = 0x22C4C8u;
    {
        const bool branch_taken_0x22c4c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c4c8) {
            ctx->pc = 0x22C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C4C8u;
            // 0x22c4cc: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4D0u;
            goto label_22c4d0;
        }
    }
    ctx->pc = 0x22C4D0u;
label_22c4d0:
    // 0x22c4d0: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x22c4d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_22c4d4:
    // 0x22c4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22c4d8:
    // 0x22c4d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22c4dc:
    // 0x22c4dc: 0x0  nop
    ctx->pc = 0x22c4dcu;
    // NOP
label_22c4e0:
    // 0x22c4e0: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x22c4e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_22c4e4:
    // 0x22c4e4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x22c4e4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_22c4e8:
    // 0x22c4e8: 0xc0e404c  jal         func_390130
label_22c4ec:
    if (ctx->pc == 0x22C4ECu) {
        ctx->pc = 0x22C4F0u;
        goto label_22c4f0;
    }
    ctx->pc = 0x22C4E8u;
    SET_GPR_U32(ctx, 31, 0x22C4F0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x22C4E8u, 0x22C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4F0u;
label_22c4f0:
    // 0x22c4f0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x22c4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_22c4f4:
    // 0x22c4f4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x22c4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_22c4f8:
    // 0x22c4f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22c4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c4fc:
    // 0x22c4fc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22c500:
    // 0x22c500: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x22c500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22c504:
    // 0x22c504: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x22c504u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22c508:
    // 0x22c508: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22c508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_22c50c:
    // 0x22c50c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x22c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_22c510:
    // 0x22c510: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x22c510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_22c514:
    // 0x22c514: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c518:
    // 0x22c518: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x22c518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c51c:
    // 0x22c51c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x22c51cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22c520:
    // 0x22c520: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x22c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c524:
    // 0x22c524: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x22c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c528:
    // 0x22c528: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22c528u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_22c52c:
    // 0x22c52c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x22c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c530:
    // 0x22c530: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x22c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c534:
    // 0x22c534: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x22c534u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22c538:
    // 0x22c538: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x22c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c53c:
    // 0x22c53c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c53cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c540:
    // 0x22c540: 0x0  nop
    ctx->pc = 0x22c540u;
    // NOP
label_22c544:
    // 0x22c544: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22c548:
    if (ctx->pc == 0x22C548u) {
        ctx->pc = 0x22C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C544u;
        // 0x22c548: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C54Cu;
        goto label_22c54c;
    }
    ctx->pc = 0x22C544u;
    {
        const bool branch_taken_0x22c544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c544) {
            ctx->pc = 0x22C548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C544u;
            // 0x22c548: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C54Cu;
            goto label_22c54c;
        }
    }
    ctx->pc = 0x22C54Cu;
label_22c54c:
    // 0x22c54c: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
label_22c550:
    if (ctx->pc == 0x22C550u) {
        ctx->pc = 0x22C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C54Cu;
        // 0x22c550: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C554u;
        goto label_22c554;
    }
    ctx->pc = 0x22C54Cu;
    {
        const bool branch_taken_0x22c54c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C54Cu;
        // 0x22c550: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c54c) {
            ctx->pc = 0x22C564u;
            goto label_22c564;
        }
    }
    ctx->pc = 0x22C554u;
label_22c554:
    // 0x22c554: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x22c554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_22c558:
    // 0x22c558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c55c:
    // 0x22c55c: 0x0  nop
    ctx->pc = 0x22c55cu;
    // NOP
label_22c560:
    // 0x22c560: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x22c560u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_22c564:
    // 0x22c564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c568:
    // 0x22c568: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_22c56c:
    // 0x22c56c: 0x40f809  jalr        $v0
label_22c570:
    if (ctx->pc == 0x22C570u) {
        ctx->pc = 0x22C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C56Cu;
        // 0x22c570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C574u;
        goto label_22c574;
    }
    ctx->pc = 0x22C56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C574u);
        ctx->pc = 0x22C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C56Cu;
        // 0x22c570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C56Cu, 0x22C574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C574u;
label_22c574:
    // 0x22c574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22c578:
    // 0x22c578: 0x8e300218  lw          $s0, 0x218($s1)
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_22c57c:
    // 0x22c57c: 0xc0d763e  jal         func_35D8F8
label_22c580:
    if (ctx->pc == 0x22C580u) {
        ctx->pc = 0x22C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C57Cu;
        // 0x22c580: 0xc7b40040  lwc1        $f20, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C584u;
        goto label_22c584;
    }
    ctx->pc = 0x22C57Cu;
    SET_GPR_U32(ctx, 31, 0x22C584u);
    ctx->pc = 0x22C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C57Cu;
    // 0x22c580: 0xc7b40040  lwc1        $f20, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D8F8u, 0x22C57Cu, 0x22C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C584u;
label_22c584:
    // 0x22c584: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x22c584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_22c588:
    // 0x22c588: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c58c:
    // 0x22c58c: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x22c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_22c590:
    // 0x22c590: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x22c590u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22c594:
    // 0x22c594: 0x8e260318  lw          $a2, 0x318($s1)
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_22c598:
    // 0x22c598: 0x60f809  jalr        $v1
label_22c59c:
    if (ctx->pc == 0x22C59Cu) {
        ctx->pc = 0x22C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C598u;
        // 0x22c59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5A0u;
        goto label_22c5a0;
    }
    ctx->pc = 0x22C598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22C5A0u);
        ctx->pc = 0x22C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C598u;
        // 0x22c59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C598u, 0x22C5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C5A0u;
label_22c5a0:
    // 0x22c5a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22c5a4:
    if (ctx->pc == 0x22C5A4u) {
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5A8u;
        goto label_22c5a8;
    }
    ctx->pc = 0x22C5A0u;
    {
        const bool branch_taken_0x22c5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5a0) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x22c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22c5ac:
    // 0x22c5ac: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x22c5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_22c5b0:
    // 0x22c5b0: 0xc069712  jal         func_1A5C48
label_22c5b4:
    if (ctx->pc == 0x22C5B4u) {
        ctx->pc = 0x22C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5B0u;
        // 0x22c5b4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5B8u;
        goto label_22c5b8;
    }
    ctx->pc = 0x22C5B0u;
    SET_GPR_U32(ctx, 31, 0x22C5B8u);
    ctx->pc = 0x22C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5B0u;
    // 0x22c5b4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x22C5B0u, 0x22C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5B8u;
label_22c5b8:
    // 0x22c5b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_22c5bc:
    if (ctx->pc == 0x22C5BCu) {
        ctx->pc = 0x22C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5B8u;
        // 0x22c5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5C0u;
        goto label_22c5c0;
    }
    ctx->pc = 0x22C5B8u;
    {
        const bool branch_taken_0x22c5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5B8u;
        // 0x22c5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5b8) {
            ctx->pc = 0x22C5CCu;
            goto label_22c5cc;
        }
    }
    ctx->pc = 0x22C5C0u;
label_22c5c0:
    // 0x22c5c0: 0xc06a23e  jal         func_1A88F8
label_22c5c4:
    if (ctx->pc == 0x22C5C4u) {
        ctx->pc = 0x22C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5C0u;
        // 0x22c5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5C8u;
        goto label_22c5c8;
    }
    ctx->pc = 0x22C5C0u;
    SET_GPR_U32(ctx, 31, 0x22C5C8u);
    ctx->pc = 0x22C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5C0u;
    // 0x22c5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22C5C0u, 0x22C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5C8u;
label_22c5c8:
    // 0x22c5c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22c5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c5cc:
    // 0x22c5cc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x22c5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22c5d0:
    // 0x22c5d0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x22c5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_22c5d4:
    // 0x22c5d4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x22c5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22c5d8:
    // 0x22c5d8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x22c5d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_22c5dc:
    // 0x22c5dc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x22c5dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22c5e0:
    // 0x22c5e0: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x22c5e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_22c5e4:
    // 0x22c5e4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x22c5e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22c5e8:
    // 0x22c5e8: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x22c5e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_22c5ec:
    // 0x22c5ec: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x22c5ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22c5f0:
    // 0x22c5f0: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x22c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_22c5f4:
    // 0x22c5f4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c5f8:
    // 0x22c5f8: 0x3e00008  jr          $ra
label_22c5fc:
    if (ctx->pc == 0x22C5FCu) {
        ctx->pc = 0x22C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5F8u;
        // 0x22c5fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C600u;
        goto label_fallthrough_0x22c5f8;
    }
    ctx->pc = 0x22C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5F8u;
        // 0x22c5fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c5f8:
    ctx->pc = 0x22C600u;
}
