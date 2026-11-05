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

// Function: sub_003CB2E8
// Address: 0x3cb2e8 - 0x3cc000
void sub_003CB2E8_0x3cb2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB2E8_0x3cb2e8");
#endif

    switch (ctx->pc) {
        case 0x3cb2e8u: goto label_3cb2e8;
        case 0x3cb2ecu: goto label_3cb2ec;
        case 0x3cb2f0u: goto label_3cb2f0;
        case 0x3cb2f4u: goto label_3cb2f4;
        case 0x3cb2f8u: goto label_3cb2f8;
        case 0x3cb2fcu: goto label_3cb2fc;
        case 0x3cb300u: goto label_3cb300;
        case 0x3cb304u: goto label_3cb304;
        case 0x3cb308u: goto label_3cb308;
        case 0x3cb30cu: goto label_3cb30c;
        case 0x3cb310u: goto label_3cb310;
        case 0x3cb314u: goto label_3cb314;
        case 0x3cb318u: goto label_3cb318;
        case 0x3cb31cu: goto label_3cb31c;
        case 0x3cb320u: goto label_3cb320;
        case 0x3cb324u: goto label_3cb324;
        case 0x3cb328u: goto label_3cb328;
        case 0x3cb32cu: goto label_3cb32c;
        case 0x3cb330u: goto label_3cb330;
        case 0x3cb334u: goto label_3cb334;
        case 0x3cb338u: goto label_3cb338;
        case 0x3cb33cu: goto label_3cb33c;
        case 0x3cb340u: goto label_3cb340;
        case 0x3cb344u: goto label_3cb344;
        case 0x3cb348u: goto label_3cb348;
        case 0x3cb34cu: goto label_3cb34c;
        case 0x3cb350u: goto label_3cb350;
        case 0x3cb354u: goto label_3cb354;
        case 0x3cb358u: goto label_3cb358;
        case 0x3cb35cu: goto label_3cb35c;
        case 0x3cb360u: goto label_3cb360;
        case 0x3cb364u: goto label_3cb364;
        case 0x3cb368u: goto label_3cb368;
        case 0x3cb36cu: goto label_3cb36c;
        case 0x3cb370u: goto label_3cb370;
        case 0x3cb374u: goto label_3cb374;
        case 0x3cb378u: goto label_3cb378;
        case 0x3cb37cu: goto label_3cb37c;
        case 0x3cb380u: goto label_3cb380;
        case 0x3cb384u: goto label_3cb384;
        case 0x3cb388u: goto label_3cb388;
        case 0x3cb38cu: goto label_3cb38c;
        case 0x3cb390u: goto label_3cb390;
        case 0x3cb394u: goto label_3cb394;
        case 0x3cb398u: goto label_3cb398;
        case 0x3cb39cu: goto label_3cb39c;
        case 0x3cb3a0u: goto label_3cb3a0;
        case 0x3cb3a4u: goto label_3cb3a4;
        case 0x3cb3a8u: goto label_3cb3a8;
        case 0x3cb3acu: goto label_3cb3ac;
        case 0x3cb3b0u: goto label_3cb3b0;
        case 0x3cb3b4u: goto label_3cb3b4;
        case 0x3cb3b8u: goto label_3cb3b8;
        case 0x3cb3bcu: goto label_3cb3bc;
        case 0x3cb3c0u: goto label_3cb3c0;
        case 0x3cb3c4u: goto label_3cb3c4;
        case 0x3cb3c8u: goto label_3cb3c8;
        case 0x3cb3ccu: goto label_3cb3cc;
        case 0x3cb3d0u: goto label_3cb3d0;
        case 0x3cb3d4u: goto label_3cb3d4;
        case 0x3cb3d8u: goto label_3cb3d8;
        case 0x3cb3dcu: goto label_3cb3dc;
        case 0x3cb3e0u: goto label_3cb3e0;
        case 0x3cb3e4u: goto label_3cb3e4;
        case 0x3cb3e8u: goto label_3cb3e8;
        case 0x3cb3ecu: goto label_3cb3ec;
        case 0x3cb3f0u: goto label_3cb3f0;
        case 0x3cb3f4u: goto label_3cb3f4;
        case 0x3cb3f8u: goto label_3cb3f8;
        case 0x3cb3fcu: goto label_3cb3fc;
        case 0x3cb400u: goto label_3cb400;
        case 0x3cb404u: goto label_3cb404;
        case 0x3cb408u: goto label_3cb408;
        case 0x3cb40cu: goto label_3cb40c;
        case 0x3cb410u: goto label_3cb410;
        case 0x3cb414u: goto label_3cb414;
        case 0x3cb418u: goto label_3cb418;
        case 0x3cb41cu: goto label_3cb41c;
        case 0x3cb420u: goto label_3cb420;
        case 0x3cb424u: goto label_3cb424;
        case 0x3cb428u: goto label_3cb428;
        case 0x3cb42cu: goto label_3cb42c;
        case 0x3cb430u: goto label_3cb430;
        case 0x3cb434u: goto label_3cb434;
        case 0x3cb438u: goto label_3cb438;
        case 0x3cb43cu: goto label_3cb43c;
        case 0x3cb440u: goto label_3cb440;
        case 0x3cb444u: goto label_3cb444;
        case 0x3cb448u: goto label_3cb448;
        case 0x3cb44cu: goto label_3cb44c;
        case 0x3cb450u: goto label_3cb450;
        case 0x3cb454u: goto label_3cb454;
        case 0x3cb458u: goto label_3cb458;
        case 0x3cb45cu: goto label_3cb45c;
        case 0x3cb460u: goto label_3cb460;
        case 0x3cb464u: goto label_3cb464;
        case 0x3cb468u: goto label_3cb468;
        case 0x3cb46cu: goto label_3cb46c;
        case 0x3cb470u: goto label_3cb470;
        case 0x3cb474u: goto label_3cb474;
        case 0x3cb478u: goto label_3cb478;
        case 0x3cb47cu: goto label_3cb47c;
        case 0x3cb480u: goto label_3cb480;
        case 0x3cb484u: goto label_3cb484;
        case 0x3cb488u: goto label_3cb488;
        case 0x3cb48cu: goto label_3cb48c;
        case 0x3cb490u: goto label_3cb490;
        case 0x3cb494u: goto label_3cb494;
        case 0x3cb498u: goto label_3cb498;
        case 0x3cb49cu: goto label_3cb49c;
        case 0x3cb4a0u: goto label_3cb4a0;
        case 0x3cb4a4u: goto label_3cb4a4;
        case 0x3cb4a8u: goto label_3cb4a8;
        case 0x3cb4acu: goto label_3cb4ac;
        case 0x3cb4b0u: goto label_3cb4b0;
        case 0x3cb4b4u: goto label_3cb4b4;
        case 0x3cb4b8u: goto label_3cb4b8;
        case 0x3cb4bcu: goto label_3cb4bc;
        case 0x3cb4c0u: goto label_3cb4c0;
        case 0x3cb4c4u: goto label_3cb4c4;
        case 0x3cb4c8u: goto label_3cb4c8;
        case 0x3cb4ccu: goto label_3cb4cc;
        case 0x3cb4d0u: goto label_3cb4d0;
        case 0x3cb4d4u: goto label_3cb4d4;
        case 0x3cb4d8u: goto label_3cb4d8;
        case 0x3cb4dcu: goto label_3cb4dc;
        case 0x3cb4e0u: goto label_3cb4e0;
        case 0x3cb4e4u: goto label_3cb4e4;
        case 0x3cb4e8u: goto label_3cb4e8;
        case 0x3cb4ecu: goto label_3cb4ec;
        case 0x3cb4f0u: goto label_3cb4f0;
        case 0x3cb4f4u: goto label_3cb4f4;
        case 0x3cb4f8u: goto label_3cb4f8;
        case 0x3cb4fcu: goto label_3cb4fc;
        case 0x3cb500u: goto label_3cb500;
        case 0x3cb504u: goto label_3cb504;
        case 0x3cb508u: goto label_3cb508;
        case 0x3cb50cu: goto label_3cb50c;
        case 0x3cb510u: goto label_3cb510;
        case 0x3cb514u: goto label_3cb514;
        case 0x3cb518u: goto label_3cb518;
        case 0x3cb51cu: goto label_3cb51c;
        case 0x3cb520u: goto label_3cb520;
        case 0x3cb524u: goto label_3cb524;
        case 0x3cb528u: goto label_3cb528;
        case 0x3cb52cu: goto label_3cb52c;
        case 0x3cb530u: goto label_3cb530;
        case 0x3cb534u: goto label_3cb534;
        case 0x3cb538u: goto label_3cb538;
        case 0x3cb53cu: goto label_3cb53c;
        case 0x3cb540u: goto label_3cb540;
        case 0x3cb544u: goto label_3cb544;
        case 0x3cb548u: goto label_3cb548;
        case 0x3cb54cu: goto label_3cb54c;
        case 0x3cb550u: goto label_3cb550;
        case 0x3cb554u: goto label_3cb554;
        case 0x3cb558u: goto label_3cb558;
        case 0x3cb55cu: goto label_3cb55c;
        case 0x3cb560u: goto label_3cb560;
        case 0x3cb564u: goto label_3cb564;
        case 0x3cb568u: goto label_3cb568;
        case 0x3cb56cu: goto label_3cb56c;
        case 0x3cb570u: goto label_3cb570;
        case 0x3cb574u: goto label_3cb574;
        case 0x3cb578u: goto label_3cb578;
        case 0x3cb57cu: goto label_3cb57c;
        case 0x3cb580u: goto label_3cb580;
        case 0x3cb584u: goto label_3cb584;
        case 0x3cb588u: goto label_3cb588;
        case 0x3cb58cu: goto label_3cb58c;
        case 0x3cb590u: goto label_3cb590;
        case 0x3cb594u: goto label_3cb594;
        case 0x3cb598u: goto label_3cb598;
        case 0x3cb59cu: goto label_3cb59c;
        case 0x3cb5a0u: goto label_3cb5a0;
        case 0x3cb5a4u: goto label_3cb5a4;
        case 0x3cb5a8u: goto label_3cb5a8;
        case 0x3cb5acu: goto label_3cb5ac;
        case 0x3cb5b0u: goto label_3cb5b0;
        case 0x3cb5b4u: goto label_3cb5b4;
        case 0x3cb5b8u: goto label_3cb5b8;
        case 0x3cb5bcu: goto label_3cb5bc;
        case 0x3cb5c0u: goto label_3cb5c0;
        case 0x3cb5c4u: goto label_3cb5c4;
        case 0x3cb5c8u: goto label_3cb5c8;
        case 0x3cb5ccu: goto label_3cb5cc;
        case 0x3cb5d0u: goto label_3cb5d0;
        case 0x3cb5d4u: goto label_3cb5d4;
        case 0x3cb5d8u: goto label_3cb5d8;
        case 0x3cb5dcu: goto label_3cb5dc;
        case 0x3cb5e0u: goto label_3cb5e0;
        case 0x3cb5e4u: goto label_3cb5e4;
        case 0x3cb5e8u: goto label_3cb5e8;
        case 0x3cb5ecu: goto label_3cb5ec;
        case 0x3cb5f0u: goto label_3cb5f0;
        case 0x3cb5f4u: goto label_3cb5f4;
        case 0x3cb5f8u: goto label_3cb5f8;
        case 0x3cb5fcu: goto label_3cb5fc;
        case 0x3cb600u: goto label_3cb600;
        case 0x3cb604u: goto label_3cb604;
        case 0x3cb608u: goto label_3cb608;
        case 0x3cb60cu: goto label_3cb60c;
        case 0x3cb610u: goto label_3cb610;
        case 0x3cb614u: goto label_3cb614;
        case 0x3cb618u: goto label_3cb618;
        case 0x3cb61cu: goto label_3cb61c;
        case 0x3cb620u: goto label_3cb620;
        case 0x3cb624u: goto label_3cb624;
        case 0x3cb628u: goto label_3cb628;
        case 0x3cb62cu: goto label_3cb62c;
        case 0x3cb630u: goto label_3cb630;
        case 0x3cb634u: goto label_3cb634;
        case 0x3cb638u: goto label_3cb638;
        case 0x3cb63cu: goto label_3cb63c;
        case 0x3cb640u: goto label_3cb640;
        case 0x3cb644u: goto label_3cb644;
        case 0x3cb648u: goto label_3cb648;
        case 0x3cb64cu: goto label_3cb64c;
        case 0x3cb650u: goto label_3cb650;
        case 0x3cb654u: goto label_3cb654;
        case 0x3cb658u: goto label_3cb658;
        case 0x3cb65cu: goto label_3cb65c;
        case 0x3cb660u: goto label_3cb660;
        case 0x3cb664u: goto label_3cb664;
        case 0x3cb668u: goto label_3cb668;
        case 0x3cb66cu: goto label_3cb66c;
        case 0x3cb670u: goto label_3cb670;
        case 0x3cb674u: goto label_3cb674;
        case 0x3cb678u: goto label_3cb678;
        case 0x3cb67cu: goto label_3cb67c;
        case 0x3cb680u: goto label_3cb680;
        case 0x3cb684u: goto label_3cb684;
        case 0x3cb688u: goto label_3cb688;
        case 0x3cb68cu: goto label_3cb68c;
        case 0x3cb690u: goto label_3cb690;
        case 0x3cb694u: goto label_3cb694;
        case 0x3cb698u: goto label_3cb698;
        case 0x3cb69cu: goto label_3cb69c;
        case 0x3cb6a0u: goto label_3cb6a0;
        case 0x3cb6a4u: goto label_3cb6a4;
        case 0x3cb6a8u: goto label_3cb6a8;
        case 0x3cb6acu: goto label_3cb6ac;
        case 0x3cb6b0u: goto label_3cb6b0;
        case 0x3cb6b4u: goto label_3cb6b4;
        case 0x3cb6b8u: goto label_3cb6b8;
        case 0x3cb6bcu: goto label_3cb6bc;
        case 0x3cb6c0u: goto label_3cb6c0;
        case 0x3cb6c4u: goto label_3cb6c4;
        case 0x3cb6c8u: goto label_3cb6c8;
        case 0x3cb6ccu: goto label_3cb6cc;
        case 0x3cb6d0u: goto label_3cb6d0;
        case 0x3cb6d4u: goto label_3cb6d4;
        case 0x3cb6d8u: goto label_3cb6d8;
        case 0x3cb6dcu: goto label_3cb6dc;
        case 0x3cb6e0u: goto label_3cb6e0;
        case 0x3cb6e4u: goto label_3cb6e4;
        case 0x3cb6e8u: goto label_3cb6e8;
        case 0x3cb6ecu: goto label_3cb6ec;
        case 0x3cb6f0u: goto label_3cb6f0;
        case 0x3cb6f4u: goto label_3cb6f4;
        case 0x3cb6f8u: goto label_3cb6f8;
        case 0x3cb6fcu: goto label_3cb6fc;
        case 0x3cb700u: goto label_3cb700;
        case 0x3cb704u: goto label_3cb704;
        case 0x3cb708u: goto label_3cb708;
        case 0x3cb70cu: goto label_3cb70c;
        case 0x3cb710u: goto label_3cb710;
        case 0x3cb714u: goto label_3cb714;
        case 0x3cb718u: goto label_3cb718;
        case 0x3cb71cu: goto label_3cb71c;
        case 0x3cb720u: goto label_3cb720;
        case 0x3cb724u: goto label_3cb724;
        case 0x3cb728u: goto label_3cb728;
        case 0x3cb72cu: goto label_3cb72c;
        case 0x3cb730u: goto label_3cb730;
        case 0x3cb734u: goto label_3cb734;
        case 0x3cb738u: goto label_3cb738;
        case 0x3cb73cu: goto label_3cb73c;
        case 0x3cb740u: goto label_3cb740;
        case 0x3cb744u: goto label_3cb744;
        case 0x3cb748u: goto label_3cb748;
        case 0x3cb74cu: goto label_3cb74c;
        case 0x3cb750u: goto label_3cb750;
        case 0x3cb754u: goto label_3cb754;
        case 0x3cb758u: goto label_3cb758;
        case 0x3cb75cu: goto label_3cb75c;
        case 0x3cb760u: goto label_3cb760;
        case 0x3cb764u: goto label_3cb764;
        case 0x3cb768u: goto label_3cb768;
        case 0x3cb76cu: goto label_3cb76c;
        case 0x3cb770u: goto label_3cb770;
        case 0x3cb774u: goto label_3cb774;
        case 0x3cb778u: goto label_3cb778;
        case 0x3cb77cu: goto label_3cb77c;
        case 0x3cb780u: goto label_3cb780;
        case 0x3cb784u: goto label_3cb784;
        case 0x3cb788u: goto label_3cb788;
        case 0x3cb78cu: goto label_3cb78c;
        case 0x3cb790u: goto label_3cb790;
        case 0x3cb794u: goto label_3cb794;
        case 0x3cb798u: goto label_3cb798;
        case 0x3cb79cu: goto label_3cb79c;
        case 0x3cb7a0u: goto label_3cb7a0;
        case 0x3cb7a4u: goto label_3cb7a4;
        case 0x3cb7a8u: goto label_3cb7a8;
        case 0x3cb7acu: goto label_3cb7ac;
        case 0x3cb7b0u: goto label_3cb7b0;
        case 0x3cb7b4u: goto label_3cb7b4;
        case 0x3cb7b8u: goto label_3cb7b8;
        case 0x3cb7bcu: goto label_3cb7bc;
        case 0x3cb7c0u: goto label_3cb7c0;
        case 0x3cb7c4u: goto label_3cb7c4;
        case 0x3cb7c8u: goto label_3cb7c8;
        case 0x3cb7ccu: goto label_3cb7cc;
        case 0x3cb7d0u: goto label_3cb7d0;
        case 0x3cb7d4u: goto label_3cb7d4;
        case 0x3cb7d8u: goto label_3cb7d8;
        case 0x3cb7dcu: goto label_3cb7dc;
        case 0x3cb7e0u: goto label_3cb7e0;
        case 0x3cb7e4u: goto label_3cb7e4;
        case 0x3cb7e8u: goto label_3cb7e8;
        case 0x3cb7ecu: goto label_3cb7ec;
        case 0x3cb7f0u: goto label_3cb7f0;
        case 0x3cb7f4u: goto label_3cb7f4;
        case 0x3cb7f8u: goto label_3cb7f8;
        case 0x3cb7fcu: goto label_3cb7fc;
        case 0x3cb800u: goto label_3cb800;
        case 0x3cb804u: goto label_3cb804;
        case 0x3cb808u: goto label_3cb808;
        case 0x3cb80cu: goto label_3cb80c;
        case 0x3cb810u: goto label_3cb810;
        case 0x3cb814u: goto label_3cb814;
        case 0x3cb818u: goto label_3cb818;
        case 0x3cb81cu: goto label_3cb81c;
        case 0x3cb820u: goto label_3cb820;
        case 0x3cb824u: goto label_3cb824;
        case 0x3cb828u: goto label_3cb828;
        case 0x3cb82cu: goto label_3cb82c;
        case 0x3cb830u: goto label_3cb830;
        case 0x3cb834u: goto label_3cb834;
        case 0x3cb838u: goto label_3cb838;
        case 0x3cb83cu: goto label_3cb83c;
        case 0x3cb840u: goto label_3cb840;
        case 0x3cb844u: goto label_3cb844;
        case 0x3cb848u: goto label_3cb848;
        case 0x3cb84cu: goto label_3cb84c;
        case 0x3cb850u: goto label_3cb850;
        case 0x3cb854u: goto label_3cb854;
        case 0x3cb858u: goto label_3cb858;
        case 0x3cb85cu: goto label_3cb85c;
        case 0x3cb860u: goto label_3cb860;
        case 0x3cb864u: goto label_3cb864;
        case 0x3cb868u: goto label_3cb868;
        case 0x3cb86cu: goto label_3cb86c;
        case 0x3cb870u: goto label_3cb870;
        case 0x3cb874u: goto label_3cb874;
        case 0x3cb878u: goto label_3cb878;
        case 0x3cb87cu: goto label_3cb87c;
        case 0x3cb880u: goto label_3cb880;
        case 0x3cb884u: goto label_3cb884;
        case 0x3cb888u: goto label_3cb888;
        case 0x3cb88cu: goto label_3cb88c;
        case 0x3cb890u: goto label_3cb890;
        case 0x3cb894u: goto label_3cb894;
        case 0x3cb898u: goto label_3cb898;
        case 0x3cb89cu: goto label_3cb89c;
        case 0x3cb8a0u: goto label_3cb8a0;
        case 0x3cb8a4u: goto label_3cb8a4;
        case 0x3cb8a8u: goto label_3cb8a8;
        case 0x3cb8acu: goto label_3cb8ac;
        case 0x3cb8b0u: goto label_3cb8b0;
        case 0x3cb8b4u: goto label_3cb8b4;
        case 0x3cb8b8u: goto label_3cb8b8;
        case 0x3cb8bcu: goto label_3cb8bc;
        case 0x3cb8c0u: goto label_3cb8c0;
        case 0x3cb8c4u: goto label_3cb8c4;
        case 0x3cb8c8u: goto label_3cb8c8;
        case 0x3cb8ccu: goto label_3cb8cc;
        case 0x3cb8d0u: goto label_3cb8d0;
        case 0x3cb8d4u: goto label_3cb8d4;
        case 0x3cb8d8u: goto label_3cb8d8;
        case 0x3cb8dcu: goto label_3cb8dc;
        case 0x3cb8e0u: goto label_3cb8e0;
        case 0x3cb8e4u: goto label_3cb8e4;
        case 0x3cb8e8u: goto label_3cb8e8;
        case 0x3cb8ecu: goto label_3cb8ec;
        case 0x3cb8f0u: goto label_3cb8f0;
        case 0x3cb8f4u: goto label_3cb8f4;
        case 0x3cb8f8u: goto label_3cb8f8;
        case 0x3cb8fcu: goto label_3cb8fc;
        case 0x3cb900u: goto label_3cb900;
        case 0x3cb904u: goto label_3cb904;
        case 0x3cb908u: goto label_3cb908;
        case 0x3cb90cu: goto label_3cb90c;
        case 0x3cb910u: goto label_3cb910;
        case 0x3cb914u: goto label_3cb914;
        case 0x3cb918u: goto label_3cb918;
        case 0x3cb91cu: goto label_3cb91c;
        case 0x3cb920u: goto label_3cb920;
        case 0x3cb924u: goto label_3cb924;
        case 0x3cb928u: goto label_3cb928;
        case 0x3cb92cu: goto label_3cb92c;
        case 0x3cb930u: goto label_3cb930;
        case 0x3cb934u: goto label_3cb934;
        case 0x3cb938u: goto label_3cb938;
        case 0x3cb93cu: goto label_3cb93c;
        case 0x3cb940u: goto label_3cb940;
        case 0x3cb944u: goto label_3cb944;
        case 0x3cb948u: goto label_3cb948;
        case 0x3cb94cu: goto label_3cb94c;
        case 0x3cb950u: goto label_3cb950;
        case 0x3cb954u: goto label_3cb954;
        case 0x3cb958u: goto label_3cb958;
        case 0x3cb95cu: goto label_3cb95c;
        case 0x3cb960u: goto label_3cb960;
        case 0x3cb964u: goto label_3cb964;
        case 0x3cb968u: goto label_3cb968;
        case 0x3cb96cu: goto label_3cb96c;
        case 0x3cb970u: goto label_3cb970;
        case 0x3cb974u: goto label_3cb974;
        case 0x3cb978u: goto label_3cb978;
        case 0x3cb97cu: goto label_3cb97c;
        case 0x3cb980u: goto label_3cb980;
        case 0x3cb984u: goto label_3cb984;
        case 0x3cb988u: goto label_3cb988;
        case 0x3cb98cu: goto label_3cb98c;
        case 0x3cb990u: goto label_3cb990;
        case 0x3cb994u: goto label_3cb994;
        case 0x3cb998u: goto label_3cb998;
        case 0x3cb99cu: goto label_3cb99c;
        case 0x3cb9a0u: goto label_3cb9a0;
        case 0x3cb9a4u: goto label_3cb9a4;
        case 0x3cb9a8u: goto label_3cb9a8;
        case 0x3cb9acu: goto label_3cb9ac;
        case 0x3cb9b0u: goto label_3cb9b0;
        case 0x3cb9b4u: goto label_3cb9b4;
        case 0x3cb9b8u: goto label_3cb9b8;
        case 0x3cb9bcu: goto label_3cb9bc;
        case 0x3cb9c0u: goto label_3cb9c0;
        case 0x3cb9c4u: goto label_3cb9c4;
        case 0x3cb9c8u: goto label_3cb9c8;
        case 0x3cb9ccu: goto label_3cb9cc;
        case 0x3cb9d0u: goto label_3cb9d0;
        case 0x3cb9d4u: goto label_3cb9d4;
        case 0x3cb9d8u: goto label_3cb9d8;
        case 0x3cb9dcu: goto label_3cb9dc;
        case 0x3cb9e0u: goto label_3cb9e0;
        case 0x3cb9e4u: goto label_3cb9e4;
        case 0x3cb9e8u: goto label_3cb9e8;
        case 0x3cb9ecu: goto label_3cb9ec;
        case 0x3cb9f0u: goto label_3cb9f0;
        case 0x3cb9f4u: goto label_3cb9f4;
        case 0x3cb9f8u: goto label_3cb9f8;
        case 0x3cb9fcu: goto label_3cb9fc;
        case 0x3cba00u: goto label_3cba00;
        case 0x3cba04u: goto label_3cba04;
        case 0x3cba08u: goto label_3cba08;
        case 0x3cba0cu: goto label_3cba0c;
        case 0x3cba10u: goto label_3cba10;
        case 0x3cba14u: goto label_3cba14;
        case 0x3cba18u: goto label_3cba18;
        case 0x3cba1cu: goto label_3cba1c;
        case 0x3cba20u: goto label_3cba20;
        case 0x3cba24u: goto label_3cba24;
        case 0x3cba28u: goto label_3cba28;
        case 0x3cba2cu: goto label_3cba2c;
        case 0x3cba30u: goto label_3cba30;
        case 0x3cba34u: goto label_3cba34;
        case 0x3cba38u: goto label_3cba38;
        case 0x3cba3cu: goto label_3cba3c;
        case 0x3cba40u: goto label_3cba40;
        case 0x3cba44u: goto label_3cba44;
        case 0x3cba48u: goto label_3cba48;
        case 0x3cba4cu: goto label_3cba4c;
        case 0x3cba50u: goto label_3cba50;
        case 0x3cba54u: goto label_3cba54;
        case 0x3cba58u: goto label_3cba58;
        case 0x3cba5cu: goto label_3cba5c;
        case 0x3cba60u: goto label_3cba60;
        case 0x3cba64u: goto label_3cba64;
        case 0x3cba68u: goto label_3cba68;
        case 0x3cba6cu: goto label_3cba6c;
        case 0x3cba70u: goto label_3cba70;
        case 0x3cba74u: goto label_3cba74;
        case 0x3cba78u: goto label_3cba78;
        case 0x3cba7cu: goto label_3cba7c;
        case 0x3cba80u: goto label_3cba80;
        case 0x3cba84u: goto label_3cba84;
        case 0x3cba88u: goto label_3cba88;
        case 0x3cba8cu: goto label_3cba8c;
        case 0x3cba90u: goto label_3cba90;
        case 0x3cba94u: goto label_3cba94;
        case 0x3cba98u: goto label_3cba98;
        case 0x3cba9cu: goto label_3cba9c;
        case 0x3cbaa0u: goto label_3cbaa0;
        case 0x3cbaa4u: goto label_3cbaa4;
        case 0x3cbaa8u: goto label_3cbaa8;
        case 0x3cbaacu: goto label_3cbaac;
        case 0x3cbab0u: goto label_3cbab0;
        case 0x3cbab4u: goto label_3cbab4;
        case 0x3cbab8u: goto label_3cbab8;
        case 0x3cbabcu: goto label_3cbabc;
        case 0x3cbac0u: goto label_3cbac0;
        case 0x3cbac4u: goto label_3cbac4;
        case 0x3cbac8u: goto label_3cbac8;
        case 0x3cbaccu: goto label_3cbacc;
        case 0x3cbad0u: goto label_3cbad0;
        case 0x3cbad4u: goto label_3cbad4;
        case 0x3cbad8u: goto label_3cbad8;
        case 0x3cbadcu: goto label_3cbadc;
        case 0x3cbae0u: goto label_3cbae0;
        case 0x3cbae4u: goto label_3cbae4;
        case 0x3cbae8u: goto label_3cbae8;
        case 0x3cbaecu: goto label_3cbaec;
        case 0x3cbaf0u: goto label_3cbaf0;
        case 0x3cbaf4u: goto label_3cbaf4;
        case 0x3cbaf8u: goto label_3cbaf8;
        case 0x3cbafcu: goto label_3cbafc;
        case 0x3cbb00u: goto label_3cbb00;
        case 0x3cbb04u: goto label_3cbb04;
        case 0x3cbb08u: goto label_3cbb08;
        case 0x3cbb0cu: goto label_3cbb0c;
        case 0x3cbb10u: goto label_3cbb10;
        case 0x3cbb14u: goto label_3cbb14;
        case 0x3cbb18u: goto label_3cbb18;
        case 0x3cbb1cu: goto label_3cbb1c;
        case 0x3cbb20u: goto label_3cbb20;
        case 0x3cbb24u: goto label_3cbb24;
        case 0x3cbb28u: goto label_3cbb28;
        case 0x3cbb2cu: goto label_3cbb2c;
        case 0x3cbb30u: goto label_3cbb30;
        case 0x3cbb34u: goto label_3cbb34;
        case 0x3cbb38u: goto label_3cbb38;
        case 0x3cbb3cu: goto label_3cbb3c;
        case 0x3cbb40u: goto label_3cbb40;
        case 0x3cbb44u: goto label_3cbb44;
        case 0x3cbb48u: goto label_3cbb48;
        case 0x3cbb4cu: goto label_3cbb4c;
        case 0x3cbb50u: goto label_3cbb50;
        case 0x3cbb54u: goto label_3cbb54;
        case 0x3cbb58u: goto label_3cbb58;
        case 0x3cbb5cu: goto label_3cbb5c;
        case 0x3cbb60u: goto label_3cbb60;
        case 0x3cbb64u: goto label_3cbb64;
        case 0x3cbb68u: goto label_3cbb68;
        case 0x3cbb6cu: goto label_3cbb6c;
        case 0x3cbb70u: goto label_3cbb70;
        case 0x3cbb74u: goto label_3cbb74;
        case 0x3cbb78u: goto label_3cbb78;
        case 0x3cbb7cu: goto label_3cbb7c;
        case 0x3cbb80u: goto label_3cbb80;
        case 0x3cbb84u: goto label_3cbb84;
        case 0x3cbb88u: goto label_3cbb88;
        case 0x3cbb8cu: goto label_3cbb8c;
        case 0x3cbb90u: goto label_3cbb90;
        case 0x3cbb94u: goto label_3cbb94;
        case 0x3cbb98u: goto label_3cbb98;
        case 0x3cbb9cu: goto label_3cbb9c;
        case 0x3cbba0u: goto label_3cbba0;
        case 0x3cbba4u: goto label_3cbba4;
        case 0x3cbba8u: goto label_3cbba8;
        case 0x3cbbacu: goto label_3cbbac;
        case 0x3cbbb0u: goto label_3cbbb0;
        case 0x3cbbb4u: goto label_3cbbb4;
        case 0x3cbbb8u: goto label_3cbbb8;
        case 0x3cbbbcu: goto label_3cbbbc;
        case 0x3cbbc0u: goto label_3cbbc0;
        case 0x3cbbc4u: goto label_3cbbc4;
        case 0x3cbbc8u: goto label_3cbbc8;
        case 0x3cbbccu: goto label_3cbbcc;
        case 0x3cbbd0u: goto label_3cbbd0;
        case 0x3cbbd4u: goto label_3cbbd4;
        case 0x3cbbd8u: goto label_3cbbd8;
        case 0x3cbbdcu: goto label_3cbbdc;
        case 0x3cbbe0u: goto label_3cbbe0;
        case 0x3cbbe4u: goto label_3cbbe4;
        case 0x3cbbe8u: goto label_3cbbe8;
        case 0x3cbbecu: goto label_3cbbec;
        case 0x3cbbf0u: goto label_3cbbf0;
        case 0x3cbbf4u: goto label_3cbbf4;
        case 0x3cbbf8u: goto label_3cbbf8;
        case 0x3cbbfcu: goto label_3cbbfc;
        case 0x3cbc00u: goto label_3cbc00;
        case 0x3cbc04u: goto label_3cbc04;
        case 0x3cbc08u: goto label_3cbc08;
        case 0x3cbc0cu: goto label_3cbc0c;
        case 0x3cbc10u: goto label_3cbc10;
        case 0x3cbc14u: goto label_3cbc14;
        case 0x3cbc18u: goto label_3cbc18;
        case 0x3cbc1cu: goto label_3cbc1c;
        case 0x3cbc20u: goto label_3cbc20;
        case 0x3cbc24u: goto label_3cbc24;
        case 0x3cbc28u: goto label_3cbc28;
        case 0x3cbc2cu: goto label_3cbc2c;
        case 0x3cbc30u: goto label_3cbc30;
        case 0x3cbc34u: goto label_3cbc34;
        case 0x3cbc38u: goto label_3cbc38;
        case 0x3cbc3cu: goto label_3cbc3c;
        case 0x3cbc40u: goto label_3cbc40;
        case 0x3cbc44u: goto label_3cbc44;
        case 0x3cbc48u: goto label_3cbc48;
        case 0x3cbc4cu: goto label_3cbc4c;
        case 0x3cbc50u: goto label_3cbc50;
        case 0x3cbc54u: goto label_3cbc54;
        case 0x3cbc58u: goto label_3cbc58;
        case 0x3cbc5cu: goto label_3cbc5c;
        case 0x3cbc60u: goto label_3cbc60;
        case 0x3cbc64u: goto label_3cbc64;
        case 0x3cbc68u: goto label_3cbc68;
        case 0x3cbc6cu: goto label_3cbc6c;
        case 0x3cbc70u: goto label_3cbc70;
        case 0x3cbc74u: goto label_3cbc74;
        case 0x3cbc78u: goto label_3cbc78;
        case 0x3cbc7cu: goto label_3cbc7c;
        case 0x3cbc80u: goto label_3cbc80;
        case 0x3cbc84u: goto label_3cbc84;
        case 0x3cbc88u: goto label_3cbc88;
        case 0x3cbc8cu: goto label_3cbc8c;
        case 0x3cbc90u: goto label_3cbc90;
        case 0x3cbc94u: goto label_3cbc94;
        case 0x3cbc98u: goto label_3cbc98;
        case 0x3cbc9cu: goto label_3cbc9c;
        case 0x3cbca0u: goto label_3cbca0;
        case 0x3cbca4u: goto label_3cbca4;
        case 0x3cbca8u: goto label_3cbca8;
        case 0x3cbcacu: goto label_3cbcac;
        case 0x3cbcb0u: goto label_3cbcb0;
        case 0x3cbcb4u: goto label_3cbcb4;
        case 0x3cbcb8u: goto label_3cbcb8;
        case 0x3cbcbcu: goto label_3cbcbc;
        case 0x3cbcc0u: goto label_3cbcc0;
        case 0x3cbcc4u: goto label_3cbcc4;
        case 0x3cbcc8u: goto label_3cbcc8;
        case 0x3cbcccu: goto label_3cbccc;
        case 0x3cbcd0u: goto label_3cbcd0;
        case 0x3cbcd4u: goto label_3cbcd4;
        case 0x3cbcd8u: goto label_3cbcd8;
        case 0x3cbcdcu: goto label_3cbcdc;
        case 0x3cbce0u: goto label_3cbce0;
        case 0x3cbce4u: goto label_3cbce4;
        case 0x3cbce8u: goto label_3cbce8;
        case 0x3cbcecu: goto label_3cbcec;
        case 0x3cbcf0u: goto label_3cbcf0;
        case 0x3cbcf4u: goto label_3cbcf4;
        case 0x3cbcf8u: goto label_3cbcf8;
        case 0x3cbcfcu: goto label_3cbcfc;
        case 0x3cbd00u: goto label_3cbd00;
        case 0x3cbd04u: goto label_3cbd04;
        case 0x3cbd08u: goto label_3cbd08;
        case 0x3cbd0cu: goto label_3cbd0c;
        case 0x3cbd10u: goto label_3cbd10;
        case 0x3cbd14u: goto label_3cbd14;
        case 0x3cbd18u: goto label_3cbd18;
        case 0x3cbd1cu: goto label_3cbd1c;
        case 0x3cbd20u: goto label_3cbd20;
        case 0x3cbd24u: goto label_3cbd24;
        case 0x3cbd28u: goto label_3cbd28;
        case 0x3cbd2cu: goto label_3cbd2c;
        case 0x3cbd30u: goto label_3cbd30;
        case 0x3cbd34u: goto label_3cbd34;
        case 0x3cbd38u: goto label_3cbd38;
        case 0x3cbd3cu: goto label_3cbd3c;
        case 0x3cbd40u: goto label_3cbd40;
        case 0x3cbd44u: goto label_3cbd44;
        case 0x3cbd48u: goto label_3cbd48;
        case 0x3cbd4cu: goto label_3cbd4c;
        case 0x3cbd50u: goto label_3cbd50;
        case 0x3cbd54u: goto label_3cbd54;
        case 0x3cbd58u: goto label_3cbd58;
        case 0x3cbd5cu: goto label_3cbd5c;
        case 0x3cbd60u: goto label_3cbd60;
        case 0x3cbd64u: goto label_3cbd64;
        case 0x3cbd68u: goto label_3cbd68;
        case 0x3cbd6cu: goto label_3cbd6c;
        case 0x3cbd70u: goto label_3cbd70;
        case 0x3cbd74u: goto label_3cbd74;
        case 0x3cbd78u: goto label_3cbd78;
        case 0x3cbd7cu: goto label_3cbd7c;
        case 0x3cbd80u: goto label_3cbd80;
        case 0x3cbd84u: goto label_3cbd84;
        case 0x3cbd88u: goto label_3cbd88;
        case 0x3cbd8cu: goto label_3cbd8c;
        case 0x3cbd90u: goto label_3cbd90;
        case 0x3cbd94u: goto label_3cbd94;
        case 0x3cbd98u: goto label_3cbd98;
        case 0x3cbd9cu: goto label_3cbd9c;
        case 0x3cbda0u: goto label_3cbda0;
        case 0x3cbda4u: goto label_3cbda4;
        case 0x3cbda8u: goto label_3cbda8;
        case 0x3cbdacu: goto label_3cbdac;
        case 0x3cbdb0u: goto label_3cbdb0;
        case 0x3cbdb4u: goto label_3cbdb4;
        case 0x3cbdb8u: goto label_3cbdb8;
        case 0x3cbdbcu: goto label_3cbdbc;
        case 0x3cbdc0u: goto label_3cbdc0;
        case 0x3cbdc4u: goto label_3cbdc4;
        case 0x3cbdc8u: goto label_3cbdc8;
        case 0x3cbdccu: goto label_3cbdcc;
        case 0x3cbdd0u: goto label_3cbdd0;
        case 0x3cbdd4u: goto label_3cbdd4;
        case 0x3cbdd8u: goto label_3cbdd8;
        case 0x3cbddcu: goto label_3cbddc;
        case 0x3cbde0u: goto label_3cbde0;
        case 0x3cbde4u: goto label_3cbde4;
        case 0x3cbde8u: goto label_3cbde8;
        case 0x3cbdecu: goto label_3cbdec;
        case 0x3cbdf0u: goto label_3cbdf0;
        case 0x3cbdf4u: goto label_3cbdf4;
        case 0x3cbdf8u: goto label_3cbdf8;
        case 0x3cbdfcu: goto label_3cbdfc;
        case 0x3cbe00u: goto label_3cbe00;
        case 0x3cbe04u: goto label_3cbe04;
        case 0x3cbe08u: goto label_3cbe08;
        case 0x3cbe0cu: goto label_3cbe0c;
        case 0x3cbe10u: goto label_3cbe10;
        case 0x3cbe14u: goto label_3cbe14;
        case 0x3cbe18u: goto label_3cbe18;
        case 0x3cbe1cu: goto label_3cbe1c;
        case 0x3cbe20u: goto label_3cbe20;
        case 0x3cbe24u: goto label_3cbe24;
        case 0x3cbe28u: goto label_3cbe28;
        case 0x3cbe2cu: goto label_3cbe2c;
        case 0x3cbe30u: goto label_3cbe30;
        case 0x3cbe34u: goto label_3cbe34;
        case 0x3cbe38u: goto label_3cbe38;
        case 0x3cbe3cu: goto label_3cbe3c;
        case 0x3cbe40u: goto label_3cbe40;
        case 0x3cbe44u: goto label_3cbe44;
        case 0x3cbe48u: goto label_3cbe48;
        case 0x3cbe4cu: goto label_3cbe4c;
        case 0x3cbe50u: goto label_3cbe50;
        case 0x3cbe54u: goto label_3cbe54;
        case 0x3cbe58u: goto label_3cbe58;
        case 0x3cbe5cu: goto label_3cbe5c;
        case 0x3cbe60u: goto label_3cbe60;
        case 0x3cbe64u: goto label_3cbe64;
        case 0x3cbe68u: goto label_3cbe68;
        case 0x3cbe6cu: goto label_3cbe6c;
        case 0x3cbe70u: goto label_3cbe70;
        case 0x3cbe74u: goto label_3cbe74;
        case 0x3cbe78u: goto label_3cbe78;
        case 0x3cbe7cu: goto label_3cbe7c;
        case 0x3cbe80u: goto label_3cbe80;
        case 0x3cbe84u: goto label_3cbe84;
        case 0x3cbe88u: goto label_3cbe88;
        case 0x3cbe8cu: goto label_3cbe8c;
        case 0x3cbe90u: goto label_3cbe90;
        case 0x3cbe94u: goto label_3cbe94;
        case 0x3cbe98u: goto label_3cbe98;
        case 0x3cbe9cu: goto label_3cbe9c;
        case 0x3cbea0u: goto label_3cbea0;
        case 0x3cbea4u: goto label_3cbea4;
        case 0x3cbea8u: goto label_3cbea8;
        case 0x3cbeacu: goto label_3cbeac;
        case 0x3cbeb0u: goto label_3cbeb0;
        case 0x3cbeb4u: goto label_3cbeb4;
        case 0x3cbeb8u: goto label_3cbeb8;
        case 0x3cbebcu: goto label_3cbebc;
        case 0x3cbec0u: goto label_3cbec0;
        case 0x3cbec4u: goto label_3cbec4;
        case 0x3cbec8u: goto label_3cbec8;
        case 0x3cbeccu: goto label_3cbecc;
        case 0x3cbed0u: goto label_3cbed0;
        case 0x3cbed4u: goto label_3cbed4;
        case 0x3cbed8u: goto label_3cbed8;
        case 0x3cbedcu: goto label_3cbedc;
        case 0x3cbee0u: goto label_3cbee0;
        case 0x3cbee4u: goto label_3cbee4;
        case 0x3cbee8u: goto label_3cbee8;
        case 0x3cbeecu: goto label_3cbeec;
        case 0x3cbef0u: goto label_3cbef0;
        case 0x3cbef4u: goto label_3cbef4;
        case 0x3cbef8u: goto label_3cbef8;
        case 0x3cbefcu: goto label_3cbefc;
        case 0x3cbf00u: goto label_3cbf00;
        case 0x3cbf04u: goto label_3cbf04;
        case 0x3cbf08u: goto label_3cbf08;
        case 0x3cbf0cu: goto label_3cbf0c;
        case 0x3cbf10u: goto label_3cbf10;
        case 0x3cbf14u: goto label_3cbf14;
        case 0x3cbf18u: goto label_3cbf18;
        case 0x3cbf1cu: goto label_3cbf1c;
        case 0x3cbf20u: goto label_3cbf20;
        case 0x3cbf24u: goto label_3cbf24;
        case 0x3cbf28u: goto label_3cbf28;
        case 0x3cbf2cu: goto label_3cbf2c;
        case 0x3cbf30u: goto label_3cbf30;
        case 0x3cbf34u: goto label_3cbf34;
        case 0x3cbf38u: goto label_3cbf38;
        case 0x3cbf3cu: goto label_3cbf3c;
        case 0x3cbf40u: goto label_3cbf40;
        case 0x3cbf44u: goto label_3cbf44;
        case 0x3cbf48u: goto label_3cbf48;
        case 0x3cbf4cu: goto label_3cbf4c;
        case 0x3cbf50u: goto label_3cbf50;
        case 0x3cbf54u: goto label_3cbf54;
        case 0x3cbf58u: goto label_3cbf58;
        case 0x3cbf5cu: goto label_3cbf5c;
        case 0x3cbf60u: goto label_3cbf60;
        case 0x3cbf64u: goto label_3cbf64;
        case 0x3cbf68u: goto label_3cbf68;
        case 0x3cbf6cu: goto label_3cbf6c;
        case 0x3cbf70u: goto label_3cbf70;
        case 0x3cbf74u: goto label_3cbf74;
        case 0x3cbf78u: goto label_3cbf78;
        case 0x3cbf7cu: goto label_3cbf7c;
        case 0x3cbf80u: goto label_3cbf80;
        case 0x3cbf84u: goto label_3cbf84;
        case 0x3cbf88u: goto label_3cbf88;
        case 0x3cbf8cu: goto label_3cbf8c;
        case 0x3cbf90u: goto label_3cbf90;
        case 0x3cbf94u: goto label_3cbf94;
        case 0x3cbf98u: goto label_3cbf98;
        case 0x3cbf9cu: goto label_3cbf9c;
        case 0x3cbfa0u: goto label_3cbfa0;
        case 0x3cbfa4u: goto label_3cbfa4;
        case 0x3cbfa8u: goto label_3cbfa8;
        case 0x3cbfacu: goto label_3cbfac;
        case 0x3cbfb0u: goto label_3cbfb0;
        case 0x3cbfb4u: goto label_3cbfb4;
        case 0x3cbfb8u: goto label_3cbfb8;
        case 0x3cbfbcu: goto label_3cbfbc;
        case 0x3cbfc0u: goto label_3cbfc0;
        case 0x3cbfc4u: goto label_3cbfc4;
        case 0x3cbfc8u: goto label_3cbfc8;
        case 0x3cbfccu: goto label_3cbfcc;
        case 0x3cbfd0u: goto label_3cbfd0;
        case 0x3cbfd4u: goto label_3cbfd4;
        case 0x3cbfd8u: goto label_3cbfd8;
        case 0x3cbfdcu: goto label_3cbfdc;
        case 0x3cbfe0u: goto label_3cbfe0;
        case 0x3cbfe4u: goto label_3cbfe4;
        case 0x3cbfe8u: goto label_3cbfe8;
        case 0x3cbfecu: goto label_3cbfec;
        case 0x3cbff0u: goto label_3cbff0;
        case 0x3cbff4u: goto label_3cbff4;
        case 0x3cbff8u: goto label_3cbff8;
        case 0x3cbffcu: goto label_3cbffc;
        default: break;
    }

    ctx->pc = 0x3cb2e8u;

label_3cb2e8:
    // 0x3cb2e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3cb2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3cb2ec:
    // 0x3cb2ec: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x3cb2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_3cb2f0:
    // 0x3cb2f0: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x3cb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_3cb2f4:
    // 0x3cb2f4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x3cb2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_3cb2f8:
    // 0x3cb2f8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3cb2f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2fc:
    // 0x3cb2fc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3cb2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_3cb300:
    // 0x3cb300: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3cb300u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cb304:
    // 0x3cb304: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x3cb304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_3cb308:
    // 0x3cb308: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x3cb308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_3cb30c:
    // 0x3cb30c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x3cb30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_3cb310:
    // 0x3cb310: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x3cb310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_3cb314:
    // 0x3cb314: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x3cb314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_3cb318:
    // 0x3cb318: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x3cb318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_3cb31c:
    // 0x3cb31c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3cb31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_3cb320:
    // 0x3cb320: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x3cb320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_3cb324:
    // 0x3cb324: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x3cb324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_3cb328:
    // 0x3cb328: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3cb328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_3cb32c:
    // 0x3cb32c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3cb32cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3cb330:
    // 0x3cb330: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3cb330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3cb334:
    // 0x3cb334: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3cb334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cb338:
    // 0x3cb338: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_3cb33c:
    if (ctx->pc == 0x3CB33Cu) {
        ctx->pc = 0x3CB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB338u;
        // 0x3cb33c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB340u;
        goto label_3cb340;
    }
    ctx->pc = 0x3CB338u;
    {
        const bool branch_taken_0x3cb338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB338u;
        // 0x3cb33c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb338) {
            ctx->pc = 0x3CBFACu;
            goto label_3cbfac;
        }
    }
    ctx->pc = 0x3CB340u;
label_3cb340:
    // 0x3cb340: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3cb340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb344:
    // 0x3cb344: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x3cb344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_3cb348:
    // 0x3cb348: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3cb348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3cb34c:
    // 0x3cb34c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3cb34cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb350:
    // 0x3cb350: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x3cb350u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_3cb354:
    // 0x3cb354: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3cb354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3cb358:
    // 0x3cb358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cb358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb35c:
    // 0x3cb35c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3cb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3cb360:
    // 0x3cb360: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_3cb364:
    if (ctx->pc == 0x3CB364u) {
        ctx->pc = 0x3CB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB360u;
        // 0x3cb364: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB368u;
        goto label_3cb368;
    }
    ctx->pc = 0x3CB360u;
    {
        const bool branch_taken_0x3cb360 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB360u;
        // 0x3cb364: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb360) {
            ctx->pc = 0x3CBF64u;
            goto label_3cbf64;
        }
    }
    ctx->pc = 0x3CB368u;
label_3cb368:
    // 0x3cb368: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3cb368u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb36c:
    // 0x3cb36c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3cb36cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3cb370:
    // 0x3cb370: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x3cb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_3cb374:
    // 0x3cb374: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3cb378:
    // 0x3cb378: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3cb378u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_3cb37c:
    // 0x3cb37c: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x3cb37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_3cb380:
    // 0x3cb380: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_3cb384:
    if (ctx->pc == 0x3CB384u) {
        ctx->pc = 0x3CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB380u;
        // 0x3cb384: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB388u;
        goto label_3cb388;
    }
    ctx->pc = 0x3CB380u;
    {
        const bool branch_taken_0x3cb380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB380u;
        // 0x3cb384: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb380) {
            ctx->pc = 0x3CBAB4u;
            goto label_3cbab4;
        }
    }
    ctx->pc = 0x3CB388u;
label_3cb388:
    // 0x3cb388: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cb388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3cb38c:
    // 0x3cb38c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3cb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3cb390:
    // 0x3cb390: 0x24421ae0  addiu       $v0, $v0, 0x1AE0
    ctx->pc = 0x3cb390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_3cb394:
    // 0x3cb394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cb394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cb398:
    // 0x3cb398: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3cb398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cb39c:
    // 0x3cb39c: 0x800008  jr          $a0
label_3cb3a0:
    if (ctx->pc == 0x3CB3A0u) {
        ctx->pc = 0x3CB3A4u;
        goto label_3cb3a4;
    }
    ctx->pc = 0x3CB39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CB3A4u: goto label_3cb3a4;
            case 0x3CB3ACu: goto label_3cb3ac;
            case 0x3CB3B4u: goto label_3cb3b4;
            case 0x3CB3BCu: goto label_3cb3bc;
            case 0x3CB404u: goto label_3cb404;
            case 0x3CB48Cu: goto label_3cb48c;
            case 0x3CB494u: goto label_3cb494;
            case 0x3CB49Cu: goto label_3cb49c;
            case 0x3CB4A4u: goto label_3cb4a4;
            case 0x3CB4ACu: goto label_3cb4ac;
            case 0x3CB560u: goto label_3cb560;
            case 0x3CB58Cu: goto label_3cb58c;
            case 0x3CB64Cu: goto label_3cb64c;
            case 0x3CB764u: goto label_3cb764;
            case 0x3CB828u: goto label_3cb828;
            case 0x3CB88Cu: goto label_3cb88c;
            case 0x3CB9D0u: goto label_3cb9d0;
            case 0x3CBA08u: goto label_3cba08;
            case 0x3CBAB4u: goto label_3cbab4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB39Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CB3A4u;
label_3cb3a4:
    // 0x3cb3a4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_3cb3a8:
    if (ctx->pc == 0x3CB3A8u) {
        ctx->pc = 0x3CB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3A4u;
        // 0x3cb3a8: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3ACu;
        goto label_3cb3ac;
    }
    ctx->pc = 0x3CB3A4u;
    {
        const bool branch_taken_0x3cb3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3A4u;
        // 0x3cb3a8: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3a4) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB3ACu;
label_3cb3ac:
    // 0x3cb3ac: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_3cb3b0:
    if (ctx->pc == 0x3CB3B0u) {
        ctx->pc = 0x3CB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3ACu;
        // 0x3cb3b0: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3B4u;
        goto label_3cb3b4;
    }
    ctx->pc = 0x3CB3ACu;
    {
        const bool branch_taken_0x3cb3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3ACu;
        // 0x3cb3b0: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3ac) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB3B4u;
label_3cb3b4:
    // 0x3cb3b4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_3cb3b8:
    if (ctx->pc == 0x3CB3B8u) {
        ctx->pc = 0x3CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3B4u;
        // 0x3cb3b8: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3BCu;
        goto label_3cb3bc;
    }
    ctx->pc = 0x3CB3B4u;
    {
        const bool branch_taken_0x3cb3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3B4u;
        // 0x3cb3b8: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3b4) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB3BCu;
label_3cb3bc:
    // 0x3cb3bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cb3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb3c0:
    // 0x3cb3c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3cb3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cb3c4:
    // 0x3cb3c4: 0x0  nop
    ctx->pc = 0x3cb3c4u;
    // NOP
label_3cb3c8:
    // 0x3cb3c8: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x3cb3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cb3cc:
    // 0x3cb3cc: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x3cb3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_3cb3d0:
    // 0x3cb3d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3cb3d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb3d4:
    // 0x3cb3d4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x3cb3d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_3cb3d8:
    // 0x3cb3d8: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3cb3d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3cb3dc:
    // 0x3cb3dc: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x3cb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3cb3e0:
    // 0x3cb3e0: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x3cb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_3cb3e4:
    // 0x3cb3e4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3cb3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3cb3e8:
    // 0x3cb3e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3cb3ec:
    if (ctx->pc == 0x3CB3ECu) {
        ctx->pc = 0x3CB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3E8u;
        // 0x3cb3ec: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3F0u;
        goto label_3cb3f0;
    }
    ctx->pc = 0x3CB3E8u;
    {
        const bool branch_taken_0x3cb3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3E8u;
        // 0x3cb3ec: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3e8) {
            ctx->pc = 0x3CB3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb3c8;
        }
    }
    ctx->pc = 0x3CB3F0u;
label_3cb3f0:
    // 0x3cb3f0: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x3cb3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_3cb3f4:
    // 0x3cb3f4: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_3cb3f8:
    if (ctx->pc == 0x3CB3F8u) {
        ctx->pc = 0x3CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3F4u;
        // 0x3cb3f8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3FCu;
        goto label_3cb3fc;
    }
    ctx->pc = 0x3CB3F4u;
    {
        const bool branch_taken_0x3cb3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3F4u;
        // 0x3cb3f8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3f4) {
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CB3FCu;
label_3cb3fc:
    // 0x3cb3fc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_3cb400:
    if (ctx->pc == 0x3CB400u) {
        ctx->pc = 0x3CB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3FCu;
        // 0x3cb400: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB404u;
        goto label_3cb404;
    }
    ctx->pc = 0x3CB3FCu;
    {
        const bool branch_taken_0x3cb3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3FCu;
        // 0x3cb400: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb3fc) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB404u;
label_3cb404:
    // 0x3cb404: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3cb404u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb408:
    // 0x3cb408: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x3cb408u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_3cb40c:
    // 0x3cb40c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x3cb40cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3cb410:
    // 0x3cb410: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3cb410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_3cb414:
    // 0x3cb414: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3cb418:
    if (ctx->pc == 0x3CB418u) {
        ctx->pc = 0x3CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB414u;
        // 0x3cb418: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB41Cu;
        goto label_3cb41c;
    }
    ctx->pc = 0x3CB414u;
    {
        const bool branch_taken_0x3cb414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB414u;
        // 0x3cb418: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb414) {
            ctx->pc = 0x3CB438u;
            goto label_3cb438;
        }
    }
    ctx->pc = 0x3CB41Cu;
label_3cb41c:
    // 0x3cb41c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb41cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb420:
    // 0x3cb420: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3cb420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3cb424:
    // 0x3cb424: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x3cb424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb428:
    // 0x3cb428: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3cb428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cb42c:
    // 0x3cb42c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3cb42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3cb430:
    // 0x3cb430: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_3cb434:
    if (ctx->pc == 0x3CB434u) {
        ctx->pc = 0x3CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB430u;
        // 0x3cb434: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB438u;
        goto label_3cb438;
    }
    ctx->pc = 0x3CB430u;
    {
        const bool branch_taken_0x3cb430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB430u;
        // 0x3cb434: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb430) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB438u;
label_3cb438:
    // 0x3cb438: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x3cb438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_3cb43c:
    // 0x3cb43c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3cb43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3cb440:
    // 0x3cb440: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3cb444:
    if (ctx->pc == 0x3CB444u) {
        ctx->pc = 0x3CB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB440u;
        // 0x3cb444: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB448u;
        goto label_3cb448;
    }
    ctx->pc = 0x3CB440u;
    {
        const bool branch_taken_0x3cb440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB440u;
        // 0x3cb444: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb440) {
            ctx->pc = 0x3CB478u;
            goto label_3cb478;
        }
    }
    ctx->pc = 0x3CB448u;
label_3cb448:
    // 0x3cb448: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3cb448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cb44c:
    // 0x3cb44c: 0x0  nop
    ctx->pc = 0x3cb44cu;
    // NOP
label_3cb450:
    // 0x3cb450: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x3cb450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cb454:
    // 0x3cb454: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x3cb454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_3cb458:
    // 0x3cb458: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3cb458u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb45c:
    // 0x3cb45c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x3cb45cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_3cb460:
    // 0x3cb460: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3cb460u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3cb464:
    // 0x3cb464: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x3cb464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3cb468:
    // 0x3cb468: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x3cb468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_3cb46c:
    // 0x3cb46c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3cb46cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3cb470:
    // 0x3cb470: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3cb474:
    if (ctx->pc == 0x3CB474u) {
        ctx->pc = 0x3CB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB470u;
        // 0x3cb474: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB478u;
        goto label_3cb478;
    }
    ctx->pc = 0x3CB470u;
    {
        const bool branch_taken_0x3cb470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB470u;
        // 0x3cb474: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb470) {
            ctx->pc = 0x3CB450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb450;
        }
    }
    ctx->pc = 0x3CB478u;
label_3cb478:
    // 0x3cb478: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3cb478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3cb47c:
    // 0x3cb47c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3cb47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cb480:
    // 0x3cb480: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3cb480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3cb484:
    // 0x3cb484: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_3cb488:
    if (ctx->pc == 0x3CB488u) {
        ctx->pc = 0x3CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB484u;
        // 0x3cb488: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB48Cu;
        goto label_3cb48c;
    }
    ctx->pc = 0x3CB484u;
    {
        const bool branch_taken_0x3cb484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB484u;
        // 0x3cb488: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb484) {
            ctx->pc = 0x3CB3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb3f4;
        }
    }
    ctx->pc = 0x3CB48Cu;
label_3cb48c:
    // 0x3cb48c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_3cb490:
    if (ctx->pc == 0x3CB490u) {
        ctx->pc = 0x3CB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB48Cu;
        // 0x3cb490: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB494u;
        goto label_3cb494;
    }
    ctx->pc = 0x3CB48Cu;
    {
        const bool branch_taken_0x3cb48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB48Cu;
        // 0x3cb490: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb48c) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB494u;
label_3cb494:
    // 0x3cb494: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_3cb498:
    if (ctx->pc == 0x3CB498u) {
        ctx->pc = 0x3CB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB494u;
        // 0x3cb498: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB49Cu;
        goto label_3cb49c;
    }
    ctx->pc = 0x3CB494u;
    {
        const bool branch_taken_0x3cb494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB494u;
        // 0x3cb498: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb494) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB49Cu;
label_3cb49c:
    // 0x3cb49c: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_3cb4a0:
    if (ctx->pc == 0x3CB4A0u) {
        ctx->pc = 0x3CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB49Cu;
        // 0x3cb4a0: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4A4u;
        goto label_3cb4a4;
    }
    ctx->pc = 0x3CB49Cu;
    {
        const bool branch_taken_0x3cb49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB49Cu;
        // 0x3cb4a0: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb49c) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB4A4u;
label_3cb4a4:
    // 0x3cb4a4: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_3cb4a8:
    if (ctx->pc == 0x3CB4A8u) {
        ctx->pc = 0x3CB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4A4u;
        // 0x3cb4a8: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4ACu;
        goto label_3cb4ac;
    }
    ctx->pc = 0x3CB4A4u;
    {
        const bool branch_taken_0x3cb4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4A4u;
        // 0x3cb4a8: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4a4) {
            ctx->pc = 0x3CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb368;
        }
    }
    ctx->pc = 0x3CB4ACu;
label_3cb4ac:
    // 0x3cb4ac: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3cb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3cb4b0:
    // 0x3cb4b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3cb4b4:
    if (ctx->pc == 0x3CB4B4u) {
        ctx->pc = 0x3CB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4B0u;
        // 0x3cb4b4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4B8u;
        goto label_3cb4b8;
    }
    ctx->pc = 0x3CB4B0u;
    {
        const bool branch_taken_0x3cb4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4B0u;
        // 0x3cb4b4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4b0) {
            ctx->pc = 0x3CB4C4u;
            goto label_3cb4c4;
        }
    }
    ctx->pc = 0x3CB4B8u;
label_3cb4b8:
    // 0x3cb4b8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb4b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb4bc:
    // 0x3cb4bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb4c0:
    if (ctx->pc == 0x3CB4C0u) {
        ctx->pc = 0x3CB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4BCu;
        // 0x3cb4c0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4C4u;
        goto label_3cb4c4;
    }
    ctx->pc = 0x3CB4BCu;
    {
        const bool branch_taken_0x3cb4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4BCu;
        // 0x3cb4c0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4bc) {
            ctx->pc = 0x3CB4D8u;
            goto label_3cb4d8;
        }
    }
    ctx->pc = 0x3CB4C4u;
label_3cb4c4:
    // 0x3cb4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb4c8:
    if (ctx->pc == 0x3CB4C8u) {
        ctx->pc = 0x3CB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4C4u;
        // 0x3cb4c8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4CCu;
        goto label_3cb4cc;
    }
    ctx->pc = 0x3CB4C4u;
    {
        const bool branch_taken_0x3cb4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4C4u;
        // 0x3cb4c8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4c4) {
            ctx->pc = 0x3CB4D4u;
            goto label_3cb4d4;
        }
    }
    ctx->pc = 0x3CB4CCu;
label_3cb4cc:
    // 0x3cb4cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cb4d0:
    if (ctx->pc == 0x3CB4D0u) {
        ctx->pc = 0x3CB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4CCu;
        // 0x3cb4d0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4D4u;
        goto label_3cb4d4;
    }
    ctx->pc = 0x3CB4CCu;
    {
        const bool branch_taken_0x3cb4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4CCu;
        // 0x3cb4d0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4cc) {
            ctx->pc = 0x3CB4D8u;
            goto label_3cb4d8;
        }
    }
    ctx->pc = 0x3CB4D4u;
label_3cb4d4:
    // 0x3cb4d4: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3cb4d4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb4d8:
    // 0x3cb4d8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3cb4dc:
    if (ctx->pc == 0x3CB4DCu) {
        ctx->pc = 0x3CB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4D8u;
        // 0x3cb4dc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4E0u;
        goto label_3cb4e0;
    }
    ctx->pc = 0x3CB4D8u;
    {
        const bool branch_taken_0x3cb4d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4D8u;
        // 0x3cb4dc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4d8) {
            ctx->pc = 0x3CB508u;
            goto label_3cb508;
        }
    }
    ctx->pc = 0x3CB4E0u;
label_3cb4e0:
    // 0x3cb4e0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3cb4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3cb4e4:
    // 0x3cb4e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb4e8:
    if (ctx->pc == 0x3CB4E8u) {
        ctx->pc = 0x3CB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4E4u;
        // 0x3cb4e8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4ECu;
        goto label_3cb4ec;
    }
    ctx->pc = 0x3CB4E4u;
    {
        const bool branch_taken_0x3cb4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4E4u;
        // 0x3cb4e8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4e4) {
            ctx->pc = 0x3CB4F4u;
            goto label_3cb4f4;
        }
    }
    ctx->pc = 0x3CB4ECu;
label_3cb4ec:
    // 0x3cb4ec: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_3cb4f0:
    if (ctx->pc == 0x3CB4F0u) {
        ctx->pc = 0x3CB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4ECu;
        // 0x3cb4f0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4F4u;
        goto label_3cb4f4;
    }
    ctx->pc = 0x3CB4ECu;
    {
        const bool branch_taken_0x3cb4ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4ECu;
        // 0x3cb4f0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb4ec) {
            ctx->pc = 0x3CB54Cu;
            goto label_3cb54c;
        }
    }
    ctx->pc = 0x3CB4F4u;
label_3cb4f4:
    // 0x3cb4f4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb4f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb4f8:
    // 0x3cb4f8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cb4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cb4fc:
    // 0x3cb4fc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb4fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb500:
    // 0x3cb500: 0x10000013  b           . + 4 + (0x13 << 2)
label_3cb504:
    if (ctx->pc == 0x3CB504u) {
        ctx->pc = 0x3CB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB500u;
        // 0x3cb504: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB508u;
        goto label_3cb508;
    }
    ctx->pc = 0x3CB500u;
    {
        const bool branch_taken_0x3cb500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB500u;
        // 0x3cb504: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb500) {
            ctx->pc = 0x3CB550u;
            goto label_3cb550;
        }
    }
    ctx->pc = 0x3CB508u;
label_3cb508:
    // 0x3cb508: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb50c:
    // 0x3cb50c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x3cb50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_3cb510:
    // 0x3cb510: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb510u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb514:
    // 0x3cb514: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb514u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb518:
    // 0x3cb518: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3cb518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_3cb51c:
    // 0x3cb51c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3cb51cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3cb520:
    // 0x3cb520: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3cb520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_3cb524:
    // 0x3cb524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cb524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cb528:
    // 0x3cb528: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cb528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cb52c:
    // 0x3cb52c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3cb52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3cb530:
    // 0x3cb530: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_3cb534:
    if (ctx->pc == 0x3CB534u) {
        ctx->pc = 0x3CB538u;
        goto label_3cb538;
    }
    ctx->pc = 0x3CB530u;
    {
        const bool branch_taken_0x3cb530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cb530) {
            ctx->pc = 0x3CB518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb518;
        }
    }
    ctx->pc = 0x3CB538u;
label_3cb538:
    // 0x3cb538: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3cb53c:
    if (ctx->pc == 0x3CB53Cu) {
        ctx->pc = 0x3CB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB538u;
        // 0x3cb53c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB540u;
        goto label_3cb540;
    }
    ctx->pc = 0x3CB538u;
    {
        const bool branch_taken_0x3cb538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB538u;
        // 0x3cb53c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb538) {
            ctx->pc = 0x3CB554u;
            goto label_3cb554;
        }
    }
    ctx->pc = 0x3CB540u;
label_3cb540:
    // 0x3cb540: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cb540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cb544:
    // 0x3cb544: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cb548:
    if (ctx->pc == 0x3CB548u) {
        ctx->pc = 0x3CB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB544u;
        // 0x3cb548: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB54Cu;
        goto label_3cb54c;
    }
    ctx->pc = 0x3CB544u;
    {
        const bool branch_taken_0x3cb544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB544u;
        // 0x3cb548: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb544) {
            ctx->pc = 0x3CB554u;
            goto label_3cb554;
        }
    }
    ctx->pc = 0x3CB54Cu;
label_3cb54c:
    // 0x3cb54c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb54cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb550:
    // 0x3cb550: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb550u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb554:
    // 0x3cb554: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3cb554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cb558:
    // 0x3cb558: 0x10000162  b           . + 4 + (0x162 << 2)
label_3cb55c:
    if (ctx->pc == 0x3CB55Cu) {
        ctx->pc = 0x3CB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB558u;
        // 0x3cb55c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB560u;
        goto label_3cb560;
    }
    ctx->pc = 0x3CB558u;
    {
        const bool branch_taken_0x3cb558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB558u;
        // 0x3cb55c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb558) {
            ctx->pc = 0x3CBAE4u;
            goto label_3cbae4;
        }
    }
    ctx->pc = 0x3CB560u;
label_3cb560:
    // 0x3cb560: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cb560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3cb564:
    // 0x3cb564: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x3cb564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_3cb568:
    // 0x3cb568: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3cb56c:
    if (ctx->pc == 0x3CB56Cu) {
        ctx->pc = 0x3CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB568u;
        // 0x3cb56c: 0x24441ab0  addiu       $a0, $v0, 0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB570u;
        goto label_3cb570;
    }
    ctx->pc = 0x3CB568u;
    {
        const bool branch_taken_0x3cb568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB568u;
        // 0x3cb56c: 0x24441ab0  addiu       $a0, $v0, 0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb568) {
            ctx->pc = 0x3CB5B4u;
            goto label_3cb5b4;
        }
    }
    ctx->pc = 0x3CB570u;
label_3cb570:
    // 0x3cb570: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cb574:
    // 0x3cb574: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3cb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3cb578:
    // 0x3cb578: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3cb578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3cb57c:
    // 0x3cb57c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cb580:
    // 0x3cb580: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3cb580u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_3cb584:
    // 0x3cb584: 0x1000000b  b           . + 4 + (0xB << 2)
label_3cb588:
    if (ctx->pc == 0x3CB588u) {
        ctx->pc = 0x3CB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB584u;
        // 0x3cb588: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB58Cu;
        goto label_3cb58c;
    }
    ctx->pc = 0x3CB584u;
    {
        const bool branch_taken_0x3cb584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB584u;
        // 0x3cb588: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb584) {
            ctx->pc = 0x3CB5B4u;
            goto label_3cb5b4;
        }
    }
    ctx->pc = 0x3CB58Cu;
label_3cb58c:
    // 0x3cb58c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3cb590:
    // 0x3cb590: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x3cb590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_3cb594:
    // 0x3cb594: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3cb598:
    if (ctx->pc == 0x3CB598u) {
        ctx->pc = 0x3CB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB594u;
        // 0x3cb598: 0x24441ac8  addiu       $a0, $v0, 0x1AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB59Cu;
        goto label_3cb59c;
    }
    ctx->pc = 0x3CB594u;
    {
        const bool branch_taken_0x3cb594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB594u;
        // 0x3cb598: 0x24441ac8  addiu       $a0, $v0, 0x1AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb594) {
            ctx->pc = 0x3CB5B4u;
            goto label_3cb5b4;
        }
    }
    ctx->pc = 0x3CB59Cu;
label_3cb59c:
    // 0x3cb59c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3cb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cb5a0:
    // 0x3cb5a0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x3cb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3cb5a4:
    // 0x3cb5a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3cb5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cb5a8:
    // 0x3cb5a8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3cb5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3cb5ac:
    // 0x3cb5ac: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x3cb5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_3cb5b0:
    // 0x3cb5b0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3cb5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_3cb5b4:
    // 0x3cb5b4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3cb5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3cb5b8:
    // 0x3cb5b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3cb5bc:
    if (ctx->pc == 0x3CB5BCu) {
        ctx->pc = 0x3CB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5B8u;
        // 0x3cb5bc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5C0u;
        goto label_3cb5c0;
    }
    ctx->pc = 0x3CB5B8u;
    {
        const bool branch_taken_0x3cb5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5B8u;
        // 0x3cb5bc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5b8) {
            ctx->pc = 0x3CB5CCu;
            goto label_3cb5cc;
        }
    }
    ctx->pc = 0x3CB5C0u;
label_3cb5c0:
    // 0x3cb5c0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb5c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb5c4:
    // 0x3cb5c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb5c8:
    if (ctx->pc == 0x3CB5C8u) {
        ctx->pc = 0x3CB5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5C4u;
        // 0x3cb5c8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5CCu;
        goto label_3cb5cc;
    }
    ctx->pc = 0x3CB5C4u;
    {
        const bool branch_taken_0x3cb5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5C4u;
        // 0x3cb5c8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5c4) {
            ctx->pc = 0x3CB5E0u;
            goto label_3cb5e0;
        }
    }
    ctx->pc = 0x3CB5CCu;
label_3cb5cc:
    // 0x3cb5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb5d0:
    if (ctx->pc == 0x3CB5D0u) {
        ctx->pc = 0x3CB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5CCu;
        // 0x3cb5d0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5D4u;
        goto label_3cb5d4;
    }
    ctx->pc = 0x3CB5CCu;
    {
        const bool branch_taken_0x3cb5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5CCu;
        // 0x3cb5d0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5cc) {
            ctx->pc = 0x3CB5DCu;
            goto label_3cb5dc;
        }
    }
    ctx->pc = 0x3CB5D4u;
label_3cb5d4:
    // 0x3cb5d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cb5d8:
    if (ctx->pc == 0x3CB5D8u) {
        ctx->pc = 0x3CB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5D4u;
        // 0x3cb5d8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5DCu;
        goto label_3cb5dc;
    }
    ctx->pc = 0x3CB5D4u;
    {
        const bool branch_taken_0x3cb5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5D4u;
        // 0x3cb5d8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5d4) {
            ctx->pc = 0x3CB5E0u;
            goto label_3cb5e0;
        }
    }
    ctx->pc = 0x3CB5DCu;
label_3cb5dc:
    // 0x3cb5dc: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3cb5dcu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb5e0:
    // 0x3cb5e0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_3cb5e4:
    if (ctx->pc == 0x3CB5E4u) {
        ctx->pc = 0x3CB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5E0u;
        // 0x3cb5e4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5E8u;
        goto label_3cb5e8;
    }
    ctx->pc = 0x3CB5E0u;
    {
        const bool branch_taken_0x3cb5e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5E0u;
        // 0x3cb5e4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5e0) {
            ctx->pc = 0x3CB614u;
            goto label_3cb614;
        }
    }
    ctx->pc = 0x3CB5E8u;
label_3cb5e8:
    // 0x3cb5e8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3cb5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3cb5ec:
    // 0x3cb5ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb5f0:
    if (ctx->pc == 0x3CB5F0u) {
        ctx->pc = 0x3CB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5ECu;
        // 0x3cb5f0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5F4u;
        goto label_3cb5f4;
    }
    ctx->pc = 0x3CB5ECu;
    {
        const bool branch_taken_0x3cb5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5ECu;
        // 0x3cb5f0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5ec) {
            ctx->pc = 0x3CB5FCu;
            goto label_3cb5fc;
        }
    }
    ctx->pc = 0x3CB5F4u;
label_3cb5f4:
    // 0x3cb5f4: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_3cb5f8:
    if (ctx->pc == 0x3CB5F8u) {
        ctx->pc = 0x3CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5F4u;
        // 0x3cb5f8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5FCu;
        goto label_3cb5fc;
    }
    ctx->pc = 0x3CB5F4u;
    {
        const bool branch_taken_0x3cb5f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5F4u;
        // 0x3cb5f8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5f4) {
            ctx->pc = 0x3CB810u;
            goto label_3cb810;
        }
    }
    ctx->pc = 0x3CB5FCu;
label_3cb5fc:
    // 0x3cb5fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3cb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cb600:
    // 0x3cb600: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb600u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb604:
    // 0x3cb604: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cb604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cb608:
    // 0x3cb608: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb608u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb60c:
    // 0x3cb60c: 0x10000081  b           . + 4 + (0x81 << 2)
label_3cb610:
    if (ctx->pc == 0x3CB610u) {
        ctx->pc = 0x3CB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB60Cu;
        // 0x3cb610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB614u;
        goto label_3cb614;
    }
    ctx->pc = 0x3CB60Cu;
    {
        const bool branch_taken_0x3cb60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB60Cu;
        // 0x3cb610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb60c) {
            ctx->pc = 0x3CB814u;
            goto label_3cb814;
        }
    }
    ctx->pc = 0x3CB614u;
label_3cb614:
    // 0x3cb614: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb614u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb618:
    // 0x3cb618: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb618u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb61c:
    // 0x3cb61c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb61cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb620:
    // 0x3cb620: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3cb620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_3cb624:
    // 0x3cb624: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3cb624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3cb628:
    // 0x3cb628: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3cb628u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3cb62c:
    // 0x3cb62c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3cb62cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_3cb630:
    // 0x3cb630: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3cb630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cb634:
    // 0x3cb634: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cb634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3cb638:
    // 0x3cb638: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3cb638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3cb63c:
    // 0x3cb63c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_3cb640:
    if (ctx->pc == 0x3CB640u) {
        ctx->pc = 0x3CB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB63Cu;
        // 0x3cb640: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB644u;
        goto label_3cb644;
    }
    ctx->pc = 0x3CB63Cu;
    {
        const bool branch_taken_0x3cb63c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB63Cu;
        // 0x3cb640: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb63c) {
            ctx->pc = 0x3CB620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb620;
        }
    }
    ctx->pc = 0x3CB644u;
label_3cb644:
    // 0x3cb644: 0x10000075  b           . + 4 + (0x75 << 2)
label_3cb648:
    if (ctx->pc == 0x3CB648u) {
        ctx->pc = 0x3CB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB644u;
        // 0x3cb648: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB64Cu;
        goto label_3cb64c;
    }
    ctx->pc = 0x3CB644u;
    {
        const bool branch_taken_0x3cb644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB644u;
        // 0x3cb648: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb644) {
            ctx->pc = 0x3CB81Cu;
            goto label_3cb81c;
        }
    }
    ctx->pc = 0x3CB64Cu;
label_3cb64c:
    // 0x3cb64c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3cb64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3cb650:
    // 0x3cb650: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3cb654:
    if (ctx->pc == 0x3CB654u) {
        ctx->pc = 0x3CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB650u;
        // 0x3cb654: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB658u;
        goto label_3cb658;
    }
    ctx->pc = 0x3CB650u;
    {
        const bool branch_taken_0x3cb650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB650u;
        // 0x3cb654: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb650) {
            ctx->pc = 0x3CB664u;
            goto label_3cb664;
        }
    }
    ctx->pc = 0x3CB658u;
label_3cb658:
    // 0x3cb658: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb658u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb65c:
    // 0x3cb65c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb660:
    if (ctx->pc == 0x3CB660u) {
        ctx->pc = 0x3CB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB65Cu;
        // 0x3cb660: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB664u;
        goto label_3cb664;
    }
    ctx->pc = 0x3CB65Cu;
    {
        const bool branch_taken_0x3cb65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB65Cu;
        // 0x3cb660: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb65c) {
            ctx->pc = 0x3CB678u;
            goto label_3cb678;
        }
    }
    ctx->pc = 0x3CB664u;
label_3cb664:
    // 0x3cb664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb668:
    if (ctx->pc == 0x3CB668u) {
        ctx->pc = 0x3CB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB664u;
        // 0x3cb668: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB66Cu;
        goto label_3cb66c;
    }
    ctx->pc = 0x3CB664u;
    {
        const bool branch_taken_0x3cb664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB664u;
        // 0x3cb668: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb664) {
            ctx->pc = 0x3CB674u;
            goto label_3cb674;
        }
    }
    ctx->pc = 0x3CB66Cu;
label_3cb66c:
    // 0x3cb66c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cb670:
    if (ctx->pc == 0x3CB670u) {
        ctx->pc = 0x3CB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB66Cu;
        // 0x3cb670: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB674u;
        goto label_3cb674;
    }
    ctx->pc = 0x3CB66Cu;
    {
        const bool branch_taken_0x3cb66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB66Cu;
        // 0x3cb670: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb66c) {
            ctx->pc = 0x3CB678u;
            goto label_3cb678;
        }
    }
    ctx->pc = 0x3CB674u;
label_3cb674:
    // 0x3cb674: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x3cb674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb678:
    // 0x3cb678: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_3cb67c:
    if (ctx->pc == 0x3CB67Cu) {
        ctx->pc = 0x3CB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB678u;
        // 0x3cb67c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB680u;
        goto label_3cb680;
    }
    ctx->pc = 0x3CB678u;
    {
        const bool branch_taken_0x3cb678 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3CB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB678u;
        // 0x3cb67c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb678) {
            ctx->pc = 0x3CB6B0u;
            goto label_3cb6b0;
        }
    }
    ctx->pc = 0x3CB680u;
label_3cb680:
    // 0x3cb680: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3cb680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_3cb684:
    // 0x3cb684: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3cb688:
    if (ctx->pc == 0x3CB688u) {
        ctx->pc = 0x3CB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB684u;
        // 0x3cb688: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB68Cu;
        goto label_3cb68c;
    }
    ctx->pc = 0x3CB684u;
    {
        const bool branch_taken_0x3cb684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB684u;
        // 0x3cb688: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb684) {
            ctx->pc = 0x3CB698u;
            goto label_3cb698;
        }
    }
    ctx->pc = 0x3CB68Cu;
label_3cb68c:
    // 0x3cb68c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb690:
    // 0x3cb690: 0x1000000a  b           . + 4 + (0xA << 2)
label_3cb694:
    if (ctx->pc == 0x3CB694u) {
        ctx->pc = 0x3CB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB690u;
        // 0x3cb694: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB698u;
        goto label_3cb698;
    }
    ctx->pc = 0x3CB690u;
    {
        const bool branch_taken_0x3cb690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB690u;
        // 0x3cb694: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb690) {
            ctx->pc = 0x3CB6BCu;
            goto label_3cb6bc;
        }
    }
    ctx->pc = 0x3CB698u;
label_3cb698:
    // 0x3cb698: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x3cb698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_3cb69c:
    // 0x3cb69c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3cb6a0:
    if (ctx->pc == 0x3CB6A0u) {
        ctx->pc = 0x3CB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB69Cu;
        // 0x3cb6a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6A4u;
        goto label_3cb6a4;
    }
    ctx->pc = 0x3CB69Cu;
    {
        const bool branch_taken_0x3cb69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB69Cu;
        // 0x3cb6a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb69c) {
            ctx->pc = 0x3CB6C0u;
            goto label_3cb6c0;
        }
    }
    ctx->pc = 0x3CB6A4u;
label_3cb6a4:
    // 0x3cb6a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb6a8:
    // 0x3cb6a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cb6ac:
    if (ctx->pc == 0x3CB6ACu) {
        ctx->pc = 0x3CB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6A8u;
        // 0x3cb6ac: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6B0u;
        goto label_3cb6b0;
    }
    ctx->pc = 0x3CB6A8u;
    {
        const bool branch_taken_0x3cb6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6A8u;
        // 0x3cb6ac: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6a8) {
            ctx->pc = 0x3CB6BCu;
            goto label_3cb6bc;
        }
    }
    ctx->pc = 0x3CB6B0u;
label_3cb6b0:
    // 0x3cb6b0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3cb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3cb6b4:
    // 0x3cb6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cb6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb6b8:
    // 0x3cb6b8: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x3cb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_3cb6bc:
    // 0x3cb6bc: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3cb6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3cb6c0:
    // 0x3cb6c0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_3cb6c4:
    if (ctx->pc == 0x3CB6C4u) {
        ctx->pc = 0x3CB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6C0u;
        // 0x3cb6c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6C8u;
        goto label_3cb6c8;
    }
    ctx->pc = 0x3CB6C0u;
    {
        const bool branch_taken_0x3cb6c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6C0u;
        // 0x3cb6c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6c0) {
            ctx->pc = 0x3CB6F4u;
            goto label_3cb6f4;
        }
    }
    ctx->pc = 0x3CB6C8u;
label_3cb6c8:
    // 0x3cb6c8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3cb6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3cb6cc:
    // 0x3cb6cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb6d0:
    if (ctx->pc == 0x3CB6D0u) {
        ctx->pc = 0x3CB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6CCu;
        // 0x3cb6d0: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6D4u;
        goto label_3cb6d4;
    }
    ctx->pc = 0x3CB6CCu;
    {
        const bool branch_taken_0x3cb6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6CCu;
        // 0x3cb6d0: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6cc) {
            ctx->pc = 0x3CB6DCu;
            goto label_3cb6dc;
        }
    }
    ctx->pc = 0x3CB6D4u;
label_3cb6d4:
    // 0x3cb6d4: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_3cb6d8:
    if (ctx->pc == 0x3CB6D8u) {
        ctx->pc = 0x3CB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6D4u;
        // 0x3cb6d8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6DCu;
        goto label_3cb6dc;
    }
    ctx->pc = 0x3CB6D4u;
    {
        const bool branch_taken_0x3cb6d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6D4u;
        // 0x3cb6d8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6d4) {
            ctx->pc = 0x3CB750u;
            goto label_3cb750;
        }
    }
    ctx->pc = 0x3CB6DCu;
label_3cb6dc:
    // 0x3cb6dc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3cb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cb6e0:
    // 0x3cb6e0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb6e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb6e4:
    // 0x3cb6e4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb6e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb6e8:
    // 0x3cb6e8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x3cb6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3cb6ec:
    // 0x3cb6ec: 0x10000019  b           . + 4 + (0x19 << 2)
label_3cb6f0:
    if (ctx->pc == 0x3CB6F0u) {
        ctx->pc = 0x3CB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6ECu;
        // 0x3cb6f0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6F4u;
        goto label_3cb6f4;
    }
    ctx->pc = 0x3CB6ECu;
    {
        const bool branch_taken_0x3cb6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6ECu;
        // 0x3cb6f0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6ec) {
            ctx->pc = 0x3CB754u;
            goto label_3cb754;
        }
    }
    ctx->pc = 0x3CB6F4u;
label_3cb6f4:
    // 0x3cb6f4: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x3cb6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_3cb6f8:
    // 0x3cb6f8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3cb6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3cb6fc:
    // 0x3cb6fc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3cb6fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3cb700:
    // 0x3cb700: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3cb704:
    if (ctx->pc == 0x3CB704u) {
        ctx->pc = 0x3CB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB700u;
        // 0x3cb704: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB708u;
        goto label_3cb708;
    }
    ctx->pc = 0x3CB700u;
    {
        const bool branch_taken_0x3cb700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB700u;
        // 0x3cb704: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb700) {
            ctx->pc = 0x3CB750u;
            goto label_3cb750;
        }
    }
    ctx->pc = 0x3CB708u;
label_3cb708:
    // 0x3cb708: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb708u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb70c:
    // 0x3cb70c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb70cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb710:
    // 0x3cb710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb714:
    // 0x3cb714: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3cb714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cb718:
    // 0x3cb718: 0xc0f49ea  jal         func_3D27A8
label_3cb71c:
    if (ctx->pc == 0x3CB71Cu) {
        ctx->pc = 0x3CB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB718u;
        // 0x3cb71c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB720u;
        goto label_3cb720;
    }
    ctx->pc = 0x3CB718u;
    SET_GPR_U32(ctx, 31, 0x3CB720u);
    ctx->pc = 0x3CB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB718u;
    // 0x3cb71c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D27A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D27A8u, 0x3CB718u, 0x3CB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB720u;
label_3cb720:
    // 0x3cb720: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3cb720u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3cb724:
    // 0x3cb724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb728:
    // 0x3cb728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cb728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cb72c:
    // 0x3cb72c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3cb72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cb730:
    // 0x3cb730: 0xc0f472e  jal         func_3D1CB8
label_3cb734:
    if (ctx->pc == 0x3CB734u) {
        ctx->pc = 0x3CB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB730u;
        // 0x3cb734: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB738u;
        goto label_3cb738;
    }
    ctx->pc = 0x3CB730u;
    SET_GPR_U32(ctx, 31, 0x3CB738u);
    ctx->pc = 0x3CB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB730u;
    // 0x3cb734: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1CB8u, 0x3CB730u, 0x3CB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB738u;
label_3cb738:
    // 0x3cb738: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3cb738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3cb73c:
    // 0x3cb73c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb740:
    // 0x3cb740: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3cb744:
    if (ctx->pc == 0x3CB744u) {
        ctx->pc = 0x3CB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB740u;
        // 0x3cb744: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB748u;
        goto label_3cb748;
    }
    ctx->pc = 0x3CB740u;
    {
        const bool branch_taken_0x3cb740 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB740u;
        // 0x3cb744: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb740) {
            ctx->pc = 0x3CB710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb710;
        }
    }
    ctx->pc = 0x3CB748u;
label_3cb748:
    // 0x3cb748: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cb74c:
    if (ctx->pc == 0x3CB74Cu) {
        ctx->pc = 0x3CB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB748u;
        // 0x3cb74c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB750u;
        goto label_3cb750;
    }
    ctx->pc = 0x3CB748u;
    {
        const bool branch_taken_0x3cb748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB748u;
        // 0x3cb74c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb748) {
            ctx->pc = 0x3CB75Cu;
            goto label_3cb75c;
        }
    }
    ctx->pc = 0x3CB750u;
label_3cb750:
    // 0x3cb750: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb750u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb754:
    // 0x3cb754: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb754u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb758:
    // 0x3cb758: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3cb758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cb75c:
    // 0x3cb75c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_3cb760:
    if (ctx->pc == 0x3CB760u) {
        ctx->pc = 0x3CB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB75Cu;
        // 0x3cb760: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB764u;
        goto label_3cb764;
    }
    ctx->pc = 0x3CB75Cu;
    {
        const bool branch_taken_0x3cb75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB75Cu;
        // 0x3cb760: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb75c) {
            ctx->pc = 0x3CBAE4u;
            goto label_3cbae4;
        }
    }
    ctx->pc = 0x3CB764u;
label_3cb764:
    // 0x3cb764: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3cb764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_3cb768:
    // 0x3cb768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3cb76c:
    if (ctx->pc == 0x3CB76Cu) {
        ctx->pc = 0x3CB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB768u;
        // 0x3cb76c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB770u;
        goto label_3cb770;
    }
    ctx->pc = 0x3CB768u;
    {
        const bool branch_taken_0x3cb768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB768u;
        // 0x3cb76c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb768) {
            ctx->pc = 0x3CB77Cu;
            goto label_3cb77c;
        }
    }
    ctx->pc = 0x3CB770u;
label_3cb770:
    // 0x3cb770: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb770u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb774:
    // 0x3cb774: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb778:
    if (ctx->pc == 0x3CB778u) {
        ctx->pc = 0x3CB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB774u;
        // 0x3cb778: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB77Cu;
        goto label_3cb77c;
    }
    ctx->pc = 0x3CB774u;
    {
        const bool branch_taken_0x3cb774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB774u;
        // 0x3cb778: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb774) {
            ctx->pc = 0x3CB790u;
            goto label_3cb790;
        }
    }
    ctx->pc = 0x3CB77Cu;
label_3cb77c:
    // 0x3cb77c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb780:
    if (ctx->pc == 0x3CB780u) {
        ctx->pc = 0x3CB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB77Cu;
        // 0x3cb780: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB784u;
        goto label_3cb784;
    }
    ctx->pc = 0x3CB77Cu;
    {
        const bool branch_taken_0x3cb77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB77Cu;
        // 0x3cb780: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb77c) {
            ctx->pc = 0x3CB78Cu;
            goto label_3cb78c;
        }
    }
    ctx->pc = 0x3CB784u;
label_3cb784:
    // 0x3cb784: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cb788:
    if (ctx->pc == 0x3CB788u) {
        ctx->pc = 0x3CB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB784u;
        // 0x3cb788: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB78Cu;
        goto label_3cb78c;
    }
    ctx->pc = 0x3CB784u;
    {
        const bool branch_taken_0x3cb784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB784u;
        // 0x3cb788: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb784) {
            ctx->pc = 0x3CB790u;
            goto label_3cb790;
        }
    }
    ctx->pc = 0x3CB78Cu;
label_3cb78c:
    // 0x3cb78c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3cb78cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb790:
    // 0x3cb790: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3cb794:
    if (ctx->pc == 0x3CB794u) {
        ctx->pc = 0x3CB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB790u;
        // 0x3cb794: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB798u;
        goto label_3cb798;
    }
    ctx->pc = 0x3CB790u;
    {
        const bool branch_taken_0x3cb790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB790u;
        // 0x3cb794: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb790) {
            ctx->pc = 0x3CB7C0u;
            goto label_3cb7c0;
        }
    }
    ctx->pc = 0x3CB798u;
label_3cb798:
    // 0x3cb798: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3cb798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3cb79c:
    // 0x3cb79c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cb7a0:
    if (ctx->pc == 0x3CB7A0u) {
        ctx->pc = 0x3CB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB79Cu;
        // 0x3cb7a0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7A4u;
        goto label_3cb7a4;
    }
    ctx->pc = 0x3CB79Cu;
    {
        const bool branch_taken_0x3cb79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB79Cu;
        // 0x3cb7a0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb79c) {
            ctx->pc = 0x3CB7ACu;
            goto label_3cb7ac;
        }
    }
    ctx->pc = 0x3CB7A4u;
label_3cb7a4:
    // 0x3cb7a4: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_3cb7a8:
    if (ctx->pc == 0x3CB7A8u) {
        ctx->pc = 0x3CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7A4u;
        // 0x3cb7a8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7ACu;
        goto label_3cb7ac;
    }
    ctx->pc = 0x3CB7A4u;
    {
        const bool branch_taken_0x3cb7a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7A4u;
        // 0x3cb7a8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb7a4) {
            ctx->pc = 0x3CB810u;
            goto label_3cb810;
        }
    }
    ctx->pc = 0x3CB7ACu;
label_3cb7ac:
    // 0x3cb7ac: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb7acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb7b0:
    // 0x3cb7b0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cb7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cb7b4:
    // 0x3cb7b4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb7b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb7b8:
    // 0x3cb7b8: 0x10000016  b           . + 4 + (0x16 << 2)
label_3cb7bc:
    if (ctx->pc == 0x3CB7BCu) {
        ctx->pc = 0x3CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7B8u;
        // 0x3cb7bc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7C0u;
        goto label_3cb7c0;
    }
    ctx->pc = 0x3CB7B8u;
    {
        const bool branch_taken_0x3cb7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7B8u;
        // 0x3cb7bc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb7b8) {
            ctx->pc = 0x3CB814u;
            goto label_3cb814;
        }
    }
    ctx->pc = 0x3CB7C0u;
label_3cb7c0:
    // 0x3cb7c0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb7c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb7c4:
    // 0x3cb7c4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb7c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb7c8:
    // 0x3cb7c8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb7c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb7cc:
    // 0x3cb7cc: 0x0  nop
    ctx->pc = 0x3cb7ccu;
    // NOP
label_3cb7d0:
    // 0x3cb7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb7d4:
    // 0x3cb7d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3cb7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cb7d8:
    // 0x3cb7d8: 0xc0f4d12  jal         func_3D3448
label_3cb7dc:
    if (ctx->pc == 0x3CB7DCu) {
        ctx->pc = 0x3CB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7D8u;
        // 0x3cb7dc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7E0u;
        goto label_3cb7e0;
    }
    ctx->pc = 0x3CB7D8u;
    SET_GPR_U32(ctx, 31, 0x3CB7E0u);
    ctx->pc = 0x3CB7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB7D8u;
    // 0x3cb7dc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3CB7D8u, 0x3CB7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB7E0u;
label_3cb7e0:
    // 0x3cb7e0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3cb7e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3cb7e4:
    // 0x3cb7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb7e8:
    // 0x3cb7e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cb7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cb7ec:
    // 0x3cb7ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3cb7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cb7f0:
    // 0x3cb7f0: 0xc0f4b9e  jal         func_3D2E78
label_3cb7f4:
    if (ctx->pc == 0x3CB7F4u) {
        ctx->pc = 0x3CB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7F0u;
        // 0x3cb7f4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7F8u;
        goto label_3cb7f8;
    }
    ctx->pc = 0x3CB7F0u;
    SET_GPR_U32(ctx, 31, 0x3CB7F8u);
    ctx->pc = 0x3CB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB7F0u;
    // 0x3cb7f4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3CB7F0u, 0x3CB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB7F8u;
label_3cb7f8:
    // 0x3cb7f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3cb7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3cb7fc:
    // 0x3cb7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb800:
    // 0x3cb800: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3cb804:
    if (ctx->pc == 0x3CB804u) {
        ctx->pc = 0x3CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB800u;
        // 0x3cb804: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB808u;
        goto label_3cb808;
    }
    ctx->pc = 0x3CB800u;
    {
        const bool branch_taken_0x3cb800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB800u;
        // 0x3cb804: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb800) {
            ctx->pc = 0x3CB7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb7d0;
        }
    }
    ctx->pc = 0x3CB808u;
label_3cb808:
    // 0x3cb808: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cb80c:
    if (ctx->pc == 0x3CB80Cu) {
        ctx->pc = 0x3CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB808u;
        // 0x3cb80c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB810u;
        goto label_3cb810;
    }
    ctx->pc = 0x3CB808u;
    {
        const bool branch_taken_0x3cb808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB808u;
        // 0x3cb80c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb808) {
            ctx->pc = 0x3CB81Cu;
            goto label_3cb81c;
        }
    }
    ctx->pc = 0x3CB810u;
label_3cb810:
    // 0x3cb810: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb810u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb814:
    // 0x3cb814: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb814u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb818:
    // 0x3cb818: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3cb818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cb81c:
    // 0x3cb81c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3cb81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cb820:
    // 0x3cb820: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3cb824:
    if (ctx->pc == 0x3CB824u) {
        ctx->pc = 0x3CB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB820u;
        // 0x3cb824: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB828u;
        goto label_3cb828;
    }
    ctx->pc = 0x3CB820u;
    {
        const bool branch_taken_0x3cb820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB820u;
        // 0x3cb824: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb820) {
            ctx->pc = 0x3CBAE8u;
            goto label_3cbae8;
        }
    }
    ctx->pc = 0x3CB828u;
label_3cb828:
    // 0x3cb828: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb828u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb82c:
    // 0x3cb82c: 0xc0f517c  jal         func_3D45F0
label_3cb830:
    if (ctx->pc == 0x3CB830u) {
        ctx->pc = 0x3CB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB82Cu;
        // 0x3cb830: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB834u;
        goto label_3cb834;
    }
    ctx->pc = 0x3CB82Cu;
    SET_GPR_U32(ctx, 31, 0x3CB834u);
    ctx->pc = 0x3CB830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB82Cu;
    // 0x3cb830: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x3CB82Cu, 0x3CB834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB834u;
label_3cb834:
    // 0x3cb834: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3cb834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3cb838:
    // 0x3cb838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cb838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb83c:
    // 0x3cb83c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3cb83cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb840:
    // 0x3cb840: 0x0  nop
    ctx->pc = 0x3cb840u;
    // NOP
label_3cb844:
    // 0x3cb844: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3cb848:
    if (ctx->pc == 0x3CB848u) {
        ctx->pc = 0x3CB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB844u;
        // 0x3cb848: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB84Cu;
        goto label_3cb84c;
    }
    ctx->pc = 0x3CB844u;
    {
        const bool branch_taken_0x3cb844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB844u;
        // 0x3cb848: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb844) {
            ctx->pc = 0x3CB85Cu;
            goto label_3cb85c;
        }
    }
    ctx->pc = 0x3CB84Cu;
label_3cb84c:
    // 0x3cb84c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3cb84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cb850:
    // 0x3cb850: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cb850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cb854:
    // 0x3cb854: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_3cb858:
    if (ctx->pc == 0x3CB858u) {
        ctx->pc = 0x3CB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB854u;
        // 0x3cb858: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB85Cu;
        goto label_3cb85c;
    }
    ctx->pc = 0x3CB854u;
    {
        const bool branch_taken_0x3cb854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB854u;
        // 0x3cb858: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb854) {
            ctx->pc = 0x3CBF74u;
            goto label_3cbf74;
        }
    }
    ctx->pc = 0x3CB85Cu;
label_3cb85c:
    // 0x3cb85c: 0xc0f5212  jal         func_3D4848
label_3cb860:
    if (ctx->pc == 0x3CB860u) {
        ctx->pc = 0x3CB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB85Cu;
        // 0x3cb860: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB864u;
        goto label_3cb864;
    }
    ctx->pc = 0x3CB85Cu;
    SET_GPR_U32(ctx, 31, 0x3CB864u);
    ctx->pc = 0x3CB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB85Cu;
    // 0x3cb860: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3CB85Cu, 0x3CB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB864u;
label_3cb864:
    // 0x3cb864: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3cb864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb868:
    // 0x3cb868: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3cb868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb86c:
    // 0x3cb86c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3cb86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb870:
    // 0x3cb870: 0xc0f2c44  jal         func_3CB110
label_3cb874:
    if (ctx->pc == 0x3CB874u) {
        ctx->pc = 0x3CB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB870u;
        // 0x3cb874: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB878u;
        goto label_3cb878;
    }
    ctx->pc = 0x3CB870u;
    SET_GPR_U32(ctx, 31, 0x3CB878u);
    ctx->pc = 0x3CB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB870u;
    // 0x3cb874: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB110u, 0x3CB870u, 0x3CB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB878u;
label_3cb878:
    // 0x3cb878: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3cb878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cb87c:
    // 0x3cb87c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3cb87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3cb880:
    // 0x3cb880: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3cb880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_3cb884:
    // 0x3cb884: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_3cb888:
    if (ctx->pc == 0x3CB888u) {
        ctx->pc = 0x3CB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB884u;
        // 0x3cb888: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB88Cu;
        goto label_3cb88c;
    }
    ctx->pc = 0x3CB884u;
    {
        const bool branch_taken_0x3cb884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB884u;
        // 0x3cb888: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb884) {
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CB88Cu;
label_3cb88c:
    // 0x3cb88c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb88cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb890:
    // 0x3cb890: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x3cb890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb894:
    // 0x3cb894: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_3cb898:
    if (ctx->pc == 0x3CB898u) {
        ctx->pc = 0x3CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB894u;
        // 0x3cb898: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB89Cu;
        goto label_3cb89c;
    }
    ctx->pc = 0x3CB894u;
    {
        const bool branch_taken_0x3cb894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB894u;
        // 0x3cb898: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb894) {
            ctx->pc = 0x3CB920u;
            goto label_3cb920;
        }
    }
    ctx->pc = 0x3CB89Cu;
label_3cb89c:
    // 0x3cb89c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb8a0:
    // 0x3cb8a0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3cb8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3cb8a4:
    // 0x3cb8a4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cb8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cb8a8:
    // 0x3cb8a8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cb8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb8ac:
    // 0x3cb8ac: 0x60f809  jalr        $v1
label_3cb8b0:
    if (ctx->pc == 0x3CB8B0u) {
        ctx->pc = 0x3CB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8ACu;
        // 0x3cb8b0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8B4u;
        goto label_3cb8b4;
    }
    ctx->pc = 0x3CB8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB8B4u);
        ctx->pc = 0x3CB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8ACu;
        // 0x3cb8b0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB8ACu, 0x3CB8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB8B4u;
label_3cb8b4:
    // 0x3cb8b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cb8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb8b8:
    // 0x3cb8b8: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x3cb8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_3cb8bc:
    // 0x3cb8bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cb8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb8c0:
    // 0x3cb8c0: 0x60f809  jalr        $v1
label_3cb8c4:
    if (ctx->pc == 0x3CB8C4u) {
        ctx->pc = 0x3CB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8C0u;
        // 0x3cb8c4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8C8u;
        goto label_3cb8c8;
    }
    ctx->pc = 0x3CB8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB8C8u);
        ctx->pc = 0x3CB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8C0u;
        // 0x3cb8c4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB8C0u, 0x3CB8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB8C8u;
label_3cb8c8:
    // 0x3cb8c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cb8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb8cc:
    // 0x3cb8cc: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x3cb8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_3cb8d0:
    // 0x3cb8d0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb8d4:
    // 0x3cb8d4: 0x60f809  jalr        $v1
label_3cb8d8:
    if (ctx->pc == 0x3CB8D8u) {
        ctx->pc = 0x3CB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8D4u;
        // 0x3cb8d8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8DCu;
        goto label_3cb8dc;
    }
    ctx->pc = 0x3CB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB8DCu);
        ctx->pc = 0x3CB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8D4u;
        // 0x3cb8d8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB8D4u, 0x3CB8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB8DCu;
label_3cb8dc:
    // 0x3cb8dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cb8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb8e0:
    // 0x3cb8e0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x3cb8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_3cb8e4:
    // 0x3cb8e4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb8e8:
    // 0x3cb8e8: 0x60f809  jalr        $v1
label_3cb8ec:
    if (ctx->pc == 0x3CB8ECu) {
        ctx->pc = 0x3CB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8E8u;
        // 0x3cb8ec: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8F0u;
        goto label_3cb8f0;
    }
    ctx->pc = 0x3CB8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB8F0u);
        ctx->pc = 0x3CB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8E8u;
        // 0x3cb8ec: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB8E8u, 0x3CB8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB8F0u;
label_3cb8f0:
    // 0x3cb8f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cb8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb8f4:
    // 0x3cb8f4: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x3cb8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_3cb8f8:
    // 0x3cb8f8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb8fc:
    // 0x3cb8fc: 0x60f809  jalr        $v1
label_3cb900:
    if (ctx->pc == 0x3CB900u) {
        ctx->pc = 0x3CB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8FCu;
        // 0x3cb900: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB904u;
        goto label_3cb904;
    }
    ctx->pc = 0x3CB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB904u);
        ctx->pc = 0x3CB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8FCu;
        // 0x3cb900: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB8FCu, 0x3CB904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB904u;
label_3cb904:
    // 0x3cb904: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cb904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cb908:
    // 0x3cb908: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x3cb908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_3cb90c:
    // 0x3cb90c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb910:
    // 0x3cb910: 0x60f809  jalr        $v1
label_3cb914:
    if (ctx->pc == 0x3CB914u) {
        ctx->pc = 0x3CB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB910u;
        // 0x3cb914: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB918u;
        goto label_3cb918;
    }
    ctx->pc = 0x3CB910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB918u);
        ctx->pc = 0x3CB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB910u;
        // 0x3cb914: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB910u, 0x3CB918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB918u;
label_3cb918:
    // 0x3cb918: 0x1000019e  b           . + 4 + (0x19E << 2)
label_3cb91c:
    if (ctx->pc == 0x3CB91Cu) {
        ctx->pc = 0x3CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB918u;
        // 0x3cb91c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB920u;
        goto label_3cb920;
    }
    ctx->pc = 0x3CB918u;
    {
        const bool branch_taken_0x3cb918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB918u;
        // 0x3cb91c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb918) {
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CB920u;
label_3cb920:
    // 0x3cb920: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3cb924:
    if (ctx->pc == 0x3CB924u) {
        ctx->pc = 0x3CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB920u;
        // 0x3cb924: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB928u;
        goto label_3cb928;
    }
    ctx->pc = 0x3CB920u;
    {
        const bool branch_taken_0x3cb920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB920u;
        // 0x3cb924: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb920) {
            ctx->pc = 0x3CB980u;
            goto label_3cb980;
        }
    }
    ctx->pc = 0x3CB928u;
label_3cb928:
    // 0x3cb928: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_3cb92c:
    if (ctx->pc == 0x3CB92Cu) {
        ctx->pc = 0x3CB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB928u;
        // 0x3cb92c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB930u;
        goto label_3cb930;
    }
    ctx->pc = 0x3CB928u;
    {
        const bool branch_taken_0x3cb928 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3CB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB928u;
        // 0x3cb92c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb928) {
            ctx->pc = 0x3CB96Cu;
            goto label_3cb96c;
        }
    }
    ctx->pc = 0x3CB930u;
label_3cb930:
    // 0x3cb930: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3cb930u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb934:
    // 0x3cb934: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3cb938:
    if (ctx->pc == 0x3CB938u) {
        ctx->pc = 0x3CB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB934u;
        // 0x3cb938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB93Cu;
        goto label_3cb93c;
    }
    ctx->pc = 0x3CB934u;
    {
        const bool branch_taken_0x3cb934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB934u;
        // 0x3cb938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb934) {
            ctx->pc = 0x3CB96Cu;
            goto label_3cb96c;
        }
    }
    ctx->pc = 0x3CB93Cu;
label_3cb93c:
    // 0x3cb93c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb93cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb940:
    // 0x3cb940: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb940u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb944:
    // 0x3cb944: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb944u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb948:
    // 0x3cb948: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cb948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cb94c:
    // 0x3cb94c: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x3cb94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3cb950:
    // 0x3cb950: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3cb954:
    if (ctx->pc == 0x3CB954u) {
        ctx->pc = 0x3CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB950u;
        // 0x3cb954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB958u;
        goto label_3cb958;
    }
    ctx->pc = 0x3CB950u;
    {
        const bool branch_taken_0x3cb950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB950u;
        // 0x3cb954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb950) {
            ctx->pc = 0x3CB9C8u;
            goto label_3cb9c8;
        }
    }
    ctx->pc = 0x3CB958u;
label_3cb958:
    // 0x3cb958: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3cb958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb95c:
    // 0x3cb95c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3cb960:
    if (ctx->pc == 0x3CB960u) {
        ctx->pc = 0x3CB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB95Cu;
        // 0x3cb960: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB964u;
        goto label_3cb964;
    }
    ctx->pc = 0x3CB95Cu;
    {
        const bool branch_taken_0x3cb95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB95Cu;
        // 0x3cb960: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb95c) {
            ctx->pc = 0x3CB948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb948;
        }
    }
    ctx->pc = 0x3CB964u;
label_3cb964:
    // 0x3cb964: 0x10000060  b           . + 4 + (0x60 << 2)
label_3cb968:
    if (ctx->pc == 0x3CB968u) {
        ctx->pc = 0x3CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB964u;
        // 0x3cb968: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB96Cu;
        goto label_3cb96c;
    }
    ctx->pc = 0x3CB964u;
    {
        const bool branch_taken_0x3cb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB964u;
        // 0x3cb968: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb964) {
            ctx->pc = 0x3CBAE8u;
            goto label_3cbae8;
        }
    }
    ctx->pc = 0x3CB96Cu;
label_3cb96c:
    // 0x3cb96c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb96cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb970:
    // 0x3cb970: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb970u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb974:
    // 0x3cb974: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb974u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb978:
    // 0x3cb978: 0x10000013  b           . + 4 + (0x13 << 2)
label_3cb97c:
    if (ctx->pc == 0x3CB97Cu) {
        ctx->pc = 0x3CB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB978u;
        // 0x3cb97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB980u;
        goto label_3cb980;
    }
    ctx->pc = 0x3CB978u;
    {
        const bool branch_taken_0x3cb978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB978u;
        // 0x3cb97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb978) {
            ctx->pc = 0x3CB9C8u;
            goto label_3cb9c8;
        }
    }
    ctx->pc = 0x3CB980u;
label_3cb980:
    // 0x3cb980: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3cb980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb984:
    // 0x3cb984: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3cb988:
    if (ctx->pc == 0x3CB988u) {
        ctx->pc = 0x3CB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB984u;
        // 0x3cb988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB98Cu;
        goto label_3cb98c;
    }
    ctx->pc = 0x3CB984u;
    {
        const bool branch_taken_0x3cb984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB984u;
        // 0x3cb988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb984) {
            ctx->pc = 0x3CB9BCu;
            goto label_3cb9bc;
        }
    }
    ctx->pc = 0x3CB98Cu;
label_3cb98c:
    // 0x3cb98c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb990:
    // 0x3cb990: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb990u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb994:
    // 0x3cb994: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb994u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb998:
    // 0x3cb998: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cb998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cb99c:
    // 0x3cb99c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cb99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cb9a0:
    // 0x3cb9a0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3cb9a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb9a4:
    // 0x3cb9a4: 0x0  nop
    ctx->pc = 0x3cb9a4u;
    // NOP
label_3cb9a8:
    // 0x3cb9a8: 0x0  nop
    ctx->pc = 0x3cb9a8u;
    // NOP
label_3cb9ac:
    // 0x3cb9ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3cb9b0:
    if (ctx->pc == 0x3CB9B0u) {
        ctx->pc = 0x3CB9B4u;
        goto label_3cb9b4;
    }
    ctx->pc = 0x3CB9ACu;
    {
        const bool branch_taken_0x3cb9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cb9ac) {
            ctx->pc = 0x3CB998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb998;
        }
    }
    ctx->pc = 0x3CB9B4u;
label_3cb9b4:
    // 0x3cb9b4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3cb9b8:
    if (ctx->pc == 0x3CB9B8u) {
        ctx->pc = 0x3CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9B4u;
        // 0x3cb9b8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB9BCu;
        goto label_3cb9bc;
    }
    ctx->pc = 0x3CB9B4u;
    {
        const bool branch_taken_0x3cb9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9B4u;
        // 0x3cb9b8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb9b4) {
            ctx->pc = 0x3CBAE8u;
            goto label_3cbae8;
        }
    }
    ctx->pc = 0x3CB9BCu;
label_3cb9bc:
    // 0x3cb9bc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb9bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb9c0:
    // 0x3cb9c0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb9c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb9c4:
    // 0x3cb9c4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb9c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb9c8:
    // 0x3cb9c8: 0x10000047  b           . + 4 + (0x47 << 2)
label_3cb9cc:
    if (ctx->pc == 0x3CB9CCu) {
        ctx->pc = 0x3CB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9C8u;
        // 0x3cb9cc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB9D0u;
        goto label_3cb9d0;
    }
    ctx->pc = 0x3CB9C8u;
    {
        const bool branch_taken_0x3cb9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9C8u;
        // 0x3cb9cc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb9c8) {
            ctx->pc = 0x3CBAE8u;
            goto label_3cbae8;
        }
    }
    ctx->pc = 0x3CB9D0u;
label_3cb9d0:
    // 0x3cb9d0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cb9d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cb9d4:
    // 0x3cb9d4: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x3cb9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cb9d8:
    // 0x3cb9d8: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x3cb9d8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cb9dc:
    // 0x3cb9dc: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x3cb9dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_3cb9e0:
    // 0x3cb9e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3cb9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb9e4:
    // 0x3cb9e4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cb9e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cb9e8:
    // 0x3cb9e8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3cb9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3cb9ec:
    // 0x3cb9ec: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cb9ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cb9f0:
    // 0x3cb9f0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cb9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cb9f4:
    // 0x3cb9f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cb9f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cb9f8:
    // 0x3cb9f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3cb9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3cb9fc:
    // 0x3cb9fc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3cb9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cba00:
    // 0x3cba00: 0x10000038  b           . + 4 + (0x38 << 2)
label_3cba04:
    if (ctx->pc == 0x3CBA04u) {
        ctx->pc = 0x3CBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA00u;
        // 0x3cba04: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA08u;
        goto label_3cba08;
    }
    ctx->pc = 0x3CBA00u;
    {
        const bool branch_taken_0x3cba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA00u;
        // 0x3cba04: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba00) {
            ctx->pc = 0x3CBAE4u;
            goto label_3cbae4;
        }
    }
    ctx->pc = 0x3CBA08u;
label_3cba08:
    // 0x3cba08: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3cba08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3cba0c:
    // 0x3cba0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3cba10:
    // 0x3cba10: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3cba10u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3cba14:
    // 0x3cba14: 0x24441ab0  addiu       $a0, $v0, 0x1AB0
    ctx->pc = 0x3cba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6832));
label_3cba18:
    // 0x3cba18: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3cba1c:
    if (ctx->pc == 0x3CBA1Cu) {
        ctx->pc = 0x3CBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA18u;
        // 0x3cba1c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA20u;
        goto label_3cba20;
    }
    ctx->pc = 0x3CBA18u;
    {
        const bool branch_taken_0x3cba18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA18u;
        // 0x3cba1c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba18) {
            ctx->pc = 0x3CBA48u;
            goto label_3cba48;
        }
    }
    ctx->pc = 0x3CBA20u;
label_3cba20:
    // 0x3cba20: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3cba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3cba24:
    // 0x3cba24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3cba28:
    if (ctx->pc == 0x3CBA28u) {
        ctx->pc = 0x3CBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA24u;
        // 0x3cba28: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA2Cu;
        goto label_3cba2c;
    }
    ctx->pc = 0x3CBA24u;
    {
        const bool branch_taken_0x3cba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA24u;
        // 0x3cba28: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba24) {
            ctx->pc = 0x3CBA34u;
            goto label_3cba34;
        }
    }
    ctx->pc = 0x3CBA2Cu;
label_3cba2c:
    // 0x3cba2c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_3cba30:
    if (ctx->pc == 0x3CBA30u) {
        ctx->pc = 0x3CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA2Cu;
        // 0x3cba30: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA34u;
        goto label_3cba34;
    }
    ctx->pc = 0x3CBA2Cu;
    {
        const bool branch_taken_0x3cba2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA2Cu;
        // 0x3cba30: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba2c) {
            ctx->pc = 0x3CBA84u;
            goto label_3cba84;
        }
    }
    ctx->pc = 0x3CBA34u;
label_3cba34:
    // 0x3cba34: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cba34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cba38:
    // 0x3cba38: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3cba38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cba3c:
    // 0x3cba3c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cba3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cba40:
    // 0x3cba40: 0x10000011  b           . + 4 + (0x11 << 2)
label_3cba44:
    if (ctx->pc == 0x3CBA44u) {
        ctx->pc = 0x3CBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA40u;
        // 0x3cba44: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA48u;
        goto label_3cba48;
    }
    ctx->pc = 0x3CBA40u;
    {
        const bool branch_taken_0x3cba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA40u;
        // 0x3cba44: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba40) {
            ctx->pc = 0x3CBA88u;
            goto label_3cba88;
        }
    }
    ctx->pc = 0x3CBA48u;
label_3cba48:
    // 0x3cba48: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cba48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cba4c:
    // 0x3cba4c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cba4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cba50:
    // 0x3cba50: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cba50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cba54:
    // 0x3cba54: 0x0  nop
    ctx->pc = 0x3cba54u;
    // NOP
label_3cba58:
    // 0x3cba58: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3cba58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_3cba5c:
    // 0x3cba5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3cba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3cba60:
    // 0x3cba60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3cba60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3cba64:
    // 0x3cba64: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3cba64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_3cba68:
    // 0x3cba68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3cba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cba6c:
    // 0x3cba6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cba6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3cba70:
    // 0x3cba70: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3cba70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3cba74:
    // 0x3cba74: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_3cba78:
    if (ctx->pc == 0x3CBA78u) {
        ctx->pc = 0x3CBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA74u;
        // 0x3cba78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA7Cu;
        goto label_3cba7c;
    }
    ctx->pc = 0x3CBA74u;
    {
        const bool branch_taken_0x3cba74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA74u;
        // 0x3cba78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba74) {
            ctx->pc = 0x3CBA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cba58;
        }
    }
    ctx->pc = 0x3CBA7Cu;
label_3cba7c:
    // 0x3cba7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cba80:
    if (ctx->pc == 0x3CBA80u) {
        ctx->pc = 0x3CBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA7Cu;
        // 0x3cba80: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA84u;
        goto label_3cba84;
    }
    ctx->pc = 0x3CBA7Cu;
    {
        const bool branch_taken_0x3cba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA7Cu;
        // 0x3cba80: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba7c) {
            ctx->pc = 0x3CBA90u;
            goto label_3cba90;
        }
    }
    ctx->pc = 0x3CBA84u;
label_3cba84:
    // 0x3cba84: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cba84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cba88:
    // 0x3cba88: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cba88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cba8c:
    // 0x3cba8c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3cba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cba90:
    // 0x3cba90: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3cba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3cba94:
    // 0x3cba94: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3cba94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3cba98:
    // 0x3cba98: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3cba98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cba9c:
    // 0x3cba9c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3cba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cbaa0:
    // 0x3cbaa0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x3cbaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_3cbaa4:
    // 0x3cbaa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cbaa8:
    // 0x3cbaa8: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x3cbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3cbaac:
    // 0x3cbaac: 0x1000000e  b           . + 4 + (0xE << 2)
label_3cbab0:
    if (ctx->pc == 0x3CBAB0u) {
        ctx->pc = 0x3CBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAACu;
        // 0x3cbab0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAB4u;
        goto label_3cbab4;
    }
    ctx->pc = 0x3CBAACu;
    {
        const bool branch_taken_0x3cbaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAACu;
        // 0x3cbab0: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbaac) {
            ctx->pc = 0x3CBAE8u;
            goto label_3cbae8;
        }
    }
    ctx->pc = 0x3CBAB4u;
label_3cbab4:
    // 0x3cbab4: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x3cbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_3cbab8:
    // 0x3cbab8: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_3cbabc:
    if (ctx->pc == 0x3CBABCu) {
        ctx->pc = 0x3CBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAB8u;
        // 0x3cbabc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAC0u;
        goto label_3cbac0;
    }
    ctx->pc = 0x3CBAB8u;
    {
        const bool branch_taken_0x3cbab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAB8u;
        // 0x3cbabc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbab8) {
            ctx->pc = 0x3CBF90u;
            goto label_3cbf90;
        }
    }
    ctx->pc = 0x3CBAC0u;
label_3cbac0:
    // 0x3cbac0: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x3cbac0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_3cbac4:
    // 0x3cbac4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3cbac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbac8:
    // 0x3cbac8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cbac8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cbacc:
    // 0x3cbacc: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x3cbaccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_3cbad0:
    // 0x3cbad0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3cbad0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3cbad4:
    // 0x3cbad4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3cbad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3cbad8:
    // 0x3cbad8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3cbad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3cbadc:
    // 0x3cbadc: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3cbadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cbae0:
    // 0x3cbae0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3cbae0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3cbae4:
    // 0x3cbae4: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x3cbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3cbae8:
    // 0x3cbae8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3cbae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cbaec:
    // 0x3cbaec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cbaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbaf0:
    // 0x3cbaf0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3cbaf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cbaf4:
    // 0x3cbaf4: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x3cbaf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3cbaf8:
    // 0x3cbaf8: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x3cbaf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_3cbafc:
    // 0x3cbafc: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x3cbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3cbb00:
    // 0x3cbb00: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3cbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbb04:
    // 0x3cbb04: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x3cbb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3cbb08:
    // 0x3cbb08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3cbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cbb0c:
    // 0x3cbb0c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x3cbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3cbb10:
    // 0x3cbb10: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_3cbb14:
    if (ctx->pc == 0x3CBB14u) {
        ctx->pc = 0x3CBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB10u;
        // 0x3cbb14: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB18u;
        goto label_3cbb18;
    }
    ctx->pc = 0x3CBB10u;
    {
        const bool branch_taken_0x3cbb10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB10u;
        // 0x3cbb14: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb10) {
            ctx->pc = 0x3CBB34u;
            goto label_3cbb34;
        }
    }
    ctx->pc = 0x3CBB18u;
label_3cbb18:
    // 0x3cbb18: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3cbb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_3cbb1c:
    // 0x3cbb1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3cbb20:
    if (ctx->pc == 0x3CBB20u) {
        ctx->pc = 0x3CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB1Cu;
        // 0x3cbb20: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB24u;
        goto label_3cbb24;
    }
    ctx->pc = 0x3CBB1Cu;
    {
        const bool branch_taken_0x3cbb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB1Cu;
        // 0x3cbb20: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb1c) {
            ctx->pc = 0x3CBB54u;
            goto label_3cbb54;
        }
    }
    ctx->pc = 0x3CBB24u;
label_3cbb24:
    // 0x3cbb24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3cbb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbb28:
    // 0x3cbb28: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3cbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cbb2c:
    // 0x3cbb2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3cbb30:
    if (ctx->pc == 0x3CBB30u) {
        ctx->pc = 0x3CBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB2Cu;
        // 0x3cbb30: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB34u;
        goto label_3cbb34;
    }
    ctx->pc = 0x3CBB2Cu;
    {
        const bool branch_taken_0x3cbb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB2Cu;
        // 0x3cbb30: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb2c) {
            ctx->pc = 0x3CBB50u;
            goto label_3cbb50;
        }
    }
    ctx->pc = 0x3CBB34u;
label_3cbb34:
    // 0x3cbb34: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x3cbb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_3cbb38:
    // 0x3cbb38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3cbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cbb3c:
    // 0x3cbb3c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3cbb40:
    if (ctx->pc == 0x3CBB40u) {
        ctx->pc = 0x3CBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB3Cu;
        // 0x3cbb40: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB44u;
        goto label_3cbb44;
    }
    ctx->pc = 0x3CBB3Cu;
    {
        const bool branch_taken_0x3cbb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB3Cu;
        // 0x3cbb40: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb3c) {
            ctx->pc = 0x3CBB54u;
            goto label_3cbb54;
        }
    }
    ctx->pc = 0x3CBB44u;
label_3cbb44:
    // 0x3cbb44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbb48:
    // 0x3cbb48: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3cbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cbb4c:
    // 0x3cbb4c: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x3cbb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_3cbb50:
    // 0x3cbb50: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x3cbb50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_3cbb54:
    // 0x3cbb54: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_3cbb58:
    if (ctx->pc == 0x3CBB58u) {
        ctx->pc = 0x3CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB54u;
        // 0x3cbb58: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB5Cu;
        goto label_3cbb5c;
    }
    ctx->pc = 0x3CBB54u;
    {
        const bool branch_taken_0x3cbb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB54u;
        // 0x3cbb58: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb54) {
            ctx->pc = 0x3CBC60u;
            goto label_3cbc60;
        }
    }
    ctx->pc = 0x3CBB5Cu;
label_3cbb5c:
    // 0x3cbb5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3cbb60:
    if (ctx->pc == 0x3CBB60u) {
        ctx->pc = 0x3CBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB5Cu;
        // 0x3cbb60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB64u;
        goto label_3cbb64;
    }
    ctx->pc = 0x3CBB5Cu;
    {
        const bool branch_taken_0x3cbb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB5Cu;
        // 0x3cbb60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb5c) {
            ctx->pc = 0x3CBBB4u;
            goto label_3cbbb4;
        }
    }
    ctx->pc = 0x3CBB64u;
label_3cbb64:
    // 0x3cbb64: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3cbb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cbb68:
    // 0x3cbb68: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbb68u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbb6c:
    // 0x3cbb6c: 0x0  nop
    ctx->pc = 0x3cbb6cu;
    // NOP
label_3cbb70:
    // 0x3cbb70: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3cbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3cbb74:
    // 0x3cbb74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbb78:
    // 0x3cbb78: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3cbb78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3cbb7c:
    // 0x3cbb7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cbb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cbb80:
    // 0x3cbb80: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbb84:
    // 0x3cbb84: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbb88:
    // 0x3cbb88: 0x60f809  jalr        $v1
label_3cbb8c:
    if (ctx->pc == 0x3CBB8Cu) {
        ctx->pc = 0x3CBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB88u;
        // 0x3cbb8c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB90u;
        goto label_3cbb90;
    }
    ctx->pc = 0x3CBB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBB90u);
        ctx->pc = 0x3CBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB88u;
        // 0x3cbb8c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBB88u, 0x3CBB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBB90u;
label_3cbb90:
    // 0x3cbb90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbb94:
    // 0x3cbb94: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3cbb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbb98:
    // 0x3cbb98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbb9c:
    // 0x3cbb9c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3cbb9cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbba0:
    // 0x3cbba0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3cbba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cbba4:
    // 0x3cbba4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3cbba8:
    if (ctx->pc == 0x3CBBA8u) {
        ctx->pc = 0x3CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBA4u;
        // 0x3cbba8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBACu;
        goto label_3cbbac;
    }
    ctx->pc = 0x3CBBA4u;
    {
        const bool branch_taken_0x3cbba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBA4u;
        // 0x3cbba8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbba4) {
            ctx->pc = 0x3CBB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbb70;
        }
    }
    ctx->pc = 0x3CBBACu;
label_3cbbac:
    // 0x3cbbac: 0x10000002  b           . + 4 + (0x2 << 2)
label_3cbbb0:
    if (ctx->pc == 0x3CBBB0u) {
        ctx->pc = 0x3CBBB4u;
        goto label_3cbbb4;
    }
    ctx->pc = 0x3CBBACu;
    {
        const bool branch_taken_0x3cbbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbbac) {
            ctx->pc = 0x3CBBB8u;
            goto label_3cbbb8;
        }
    }
    ctx->pc = 0x3CBBB4u;
label_3cbbb4:
    // 0x3cbbb4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbbb4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbbb8:
    // 0x3cbbb8: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_3cbbbc:
    if (ctx->pc == 0x3CBBBCu) {
        ctx->pc = 0x3CBBC0u;
        goto label_3cbbc0;
    }
    ctx->pc = 0x3CBBB8u;
    {
        const bool branch_taken_0x3cbbb8 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x3cbbb8) {
            ctx->pc = 0x3CBBF0u;
            goto label_3cbbf0;
        }
    }
    ctx->pc = 0x3CBBC0u;
label_3cbbc0:
    // 0x3cbbc0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3cbbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cbbc4:
    // 0x3cbbc4: 0x0  nop
    ctx->pc = 0x3cbbc4u;
    // NOP
label_3cbbc8:
    // 0x3cbbc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbbcc:
    // 0x3cbbcc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3cbbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cbbd0:
    // 0x3cbbd0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbbd4:
    // 0x3cbbd4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbbd8:
    // 0x3cbbd8: 0x60f809  jalr        $v1
label_3cbbdc:
    if (ctx->pc == 0x3CBBDCu) {
        ctx->pc = 0x3CBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBD8u;
        // 0x3cbbdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBE0u;
        goto label_3cbbe0;
    }
    ctx->pc = 0x3CBBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBBE0u);
        ctx->pc = 0x3CBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBD8u;
        // 0x3cbbdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBBD8u, 0x3CBBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBBE0u;
label_3cbbe0:
    // 0x3cbbe0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbbe4:
    // 0x3cbbe4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbbe8:
    // 0x3cbbe8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3cbbec:
    if (ctx->pc == 0x3CBBECu) {
        ctx->pc = 0x3CBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBE8u;
        // 0x3cbbec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBF0u;
        goto label_3cbbf0;
    }
    ctx->pc = 0x3CBBE8u;
    {
        const bool branch_taken_0x3cbbe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBE8u;
        // 0x3cbbec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbbe8) {
            ctx->pc = 0x3CBBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbbc8;
        }
    }
    ctx->pc = 0x3CBBF0u;
label_3cbbf0:
    // 0x3cbbf0: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_3cbbf4:
    if (ctx->pc == 0x3CBBF4u) {
        ctx->pc = 0x3CBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBF0u;
        // 0x3cbbf4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBF8u;
        goto label_3cbbf8;
    }
    ctx->pc = 0x3CBBF0u;
    {
        const bool branch_taken_0x3cbbf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBF0u;
        // 0x3cbbf4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbbf0) {
            ctx->pc = 0x3CBC28u;
            goto label_3cbc28;
        }
    }
    ctx->pc = 0x3CBBF8u;
label_3cbbf8:
    // 0x3cbbf8: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3cbbf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3cbbfc:
    // 0x3cbbfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbc00:
    // 0x3cbc00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cbc00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3cbc04:
    // 0x3cbc04: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbc08:
    // 0x3cbc08: 0x60f809  jalr        $v1
label_3cbc0c:
    if (ctx->pc == 0x3CBC0Cu) {
        ctx->pc = 0x3CBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC08u;
        // 0x3cbc0c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC10u;
        goto label_3cbc10;
    }
    ctx->pc = 0x3CBC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBC10u);
        ctx->pc = 0x3CBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC08u;
        // 0x3cbc0c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBC08u, 0x3CBC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBC10u;
label_3cbc10:
    // 0x3cbc10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbc14:
    // 0x3cbc14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbc18:
    // 0x3cbc18: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3cbc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbc1c:
    // 0x3cbc1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3cbc20:
    if (ctx->pc == 0x3CBC20u) {
        ctx->pc = 0x3CBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC1Cu;
        // 0x3cbc20: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC24u;
        goto label_3cbc24;
    }
    ctx->pc = 0x3CBC1Cu;
    {
        const bool branch_taken_0x3cbc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC1Cu;
        // 0x3cbc20: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc1c) {
            ctx->pc = 0x3CBBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbbf8;
        }
    }
    ctx->pc = 0x3CBC24u;
label_3cbc24:
    // 0x3cbc24: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cbc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbc28:
    // 0x3cbc28: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_3cbc2c:
    if (ctx->pc == 0x3CBC2Cu) {
        ctx->pc = 0x3CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC28u;
        // 0x3cbc2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC30u;
        goto label_3cbc30;
    }
    ctx->pc = 0x3CBC28u;
    {
        const bool branch_taken_0x3cbc28 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC28u;
        // 0x3cbc2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc28) {
            ctx->pc = 0x3CB884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb884;
        }
    }
    ctx->pc = 0x3CBC30u;
label_3cbc30:
    // 0x3cbc30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbc34:
    // 0x3cbc34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3cbc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3cbc38:
    // 0x3cbc38: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbc3c:
    // 0x3cbc3c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbc40:
    // 0x3cbc40: 0x60f809  jalr        $v1
label_3cbc44:
    if (ctx->pc == 0x3CBC44u) {
        ctx->pc = 0x3CBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC40u;
        // 0x3cbc44: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC48u;
        goto label_3cbc48;
    }
    ctx->pc = 0x3CBC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBC48u);
        ctx->pc = 0x3CBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC40u;
        // 0x3cbc44: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBC40u, 0x3CBC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBC48u;
label_3cbc48:
    // 0x3cbc48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbc4c:
    // 0x3cbc4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbc50:
    // 0x3cbc50: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3cbc54:
    if (ctx->pc == 0x3CBC54u) {
        ctx->pc = 0x3CBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC50u;
        // 0x3cbc54: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC58u;
        goto label_3cbc58;
    }
    ctx->pc = 0x3CBC50u;
    {
        const bool branch_taken_0x3cbc50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC50u;
        // 0x3cbc54: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc50) {
            ctx->pc = 0x3CBC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbc30;
        }
    }
    ctx->pc = 0x3CBC58u;
label_3cbc58:
    // 0x3cbc58: 0x100000ce  b           . + 4 + (0xCE << 2)
label_3cbc5c:
    if (ctx->pc == 0x3CBC5Cu) {
        ctx->pc = 0x3CBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC58u;
        // 0x3cbc5c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC60u;
        goto label_3cbc60;
    }
    ctx->pc = 0x3CBC58u;
    {
        const bool branch_taken_0x3cbc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC58u;
        // 0x3cbc5c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc58) {
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CBC60u;
label_3cbc60:
    // 0x3cbc60: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3cbc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_3cbc64:
    // 0x3cbc64: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_3cbc68:
    if (ctx->pc == 0x3CBC68u) {
        ctx->pc = 0x3CBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC64u;
        // 0x3cbc68: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC6Cu;
        goto label_3cbc6c;
    }
    ctx->pc = 0x3CBC64u;
    {
        const bool branch_taken_0x3cbc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC64u;
        // 0x3cbc68: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc64) {
            ctx->pc = 0x3CBE44u;
            goto label_3cbe44;
        }
    }
    ctx->pc = 0x3CBC6Cu;
label_3cbc6c:
    // 0x3cbc6c: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_3cbc70:
    if (ctx->pc == 0x3CBC70u) {
        ctx->pc = 0x3CBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC6Cu;
        // 0x3cbc70: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC74u;
        goto label_3cbc74;
    }
    ctx->pc = 0x3CBC6Cu;
    {
        const bool branch_taken_0x3cbc6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC6Cu;
        // 0x3cbc70: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc6c) {
            ctx->pc = 0x3CBD28u;
            goto label_3cbd28;
        }
    }
    ctx->pc = 0x3CBC74u;
label_3cbc74:
    // 0x3cbc74: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3cbc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbc78:
    // 0x3cbc78: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_3cbc7c:
    if (ctx->pc == 0x3CBC7Cu) {
        ctx->pc = 0x3CBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC78u;
        // 0x3cbc7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC80u;
        goto label_3cbc80;
    }
    ctx->pc = 0x3CBC78u;
    {
        const bool branch_taken_0x3cbc78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC78u;
        // 0x3cbc7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc78) {
            ctx->pc = 0x3CBCD4u;
            goto label_3cbcd4;
        }
    }
    ctx->pc = 0x3CBC80u;
label_3cbc80:
    // 0x3cbc80: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3cbc80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cbc84:
    // 0x3cbc84: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbc84u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbc88:
    // 0x3cbc88: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3cbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3cbc8c:
    // 0x3cbc8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbc90:
    // 0x3cbc90: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3cbc90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3cbc94:
    // 0x3cbc94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cbc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cbc98:
    // 0x3cbc98: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbc9c:
    // 0x3cbc9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbca0:
    // 0x3cbca0: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3cbca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3cbca4:
    // 0x3cbca4: 0x60f809  jalr        $v1
label_3cbca8:
    if (ctx->pc == 0x3CBCA8u) {
        ctx->pc = 0x3CBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCA4u;
        // 0x3cbca8: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBCACu;
        goto label_3cbcac;
    }
    ctx->pc = 0x3CBCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBCACu);
        ctx->pc = 0x3CBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCA4u;
        // 0x3cbca8: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBCA4u, 0x3CBCACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBCACu;
label_3cbcac:
    // 0x3cbcac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbcb0:
    // 0x3cbcb0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3cbcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbcb4:
    // 0x3cbcb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbcb8:
    // 0x3cbcb8: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3cbcb8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbcbc:
    // 0x3cbcbc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3cbcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3cbcc0:
    // 0x3cbcc0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3cbcc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cbcc4:
    // 0x3cbcc4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3cbcc8:
    if (ctx->pc == 0x3CBCC8u) {
        ctx->pc = 0x3CBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCC4u;
        // 0x3cbcc8: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBCCCu;
        goto label_3cbccc;
    }
    ctx->pc = 0x3CBCC4u;
    {
        const bool branch_taken_0x3cbcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCC4u;
        // 0x3cbcc8: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbcc4) {
            ctx->pc = 0x3CBC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbc88;
        }
    }
    ctx->pc = 0x3CBCCCu;
label_3cbccc:
    // 0x3cbccc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cbcd0:
    if (ctx->pc == 0x3CBCD0u) {
        ctx->pc = 0x3CBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCCCu;
        // 0x3cbcd0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBCD4u;
        goto label_3cbcd4;
    }
    ctx->pc = 0x3CBCCCu;
    {
        const bool branch_taken_0x3cbccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCCCu;
        // 0x3cbcd0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbccc) {
            ctx->pc = 0x3CBCDCu;
            goto label_3cbcdc;
        }
    }
    ctx->pc = 0x3CBCD4u;
label_3cbcd4:
    // 0x3cbcd4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbcd4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbcd8:
    // 0x3cbcd8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbcdc:
    // 0x3cbcdc: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_3cbce0:
    if (ctx->pc == 0x3CBCE0u) {
        ctx->pc = 0x3CBCE4u;
        goto label_3cbce4;
    }
    ctx->pc = 0x3CBCDCu;
    {
        const bool branch_taken_0x3cbcdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cbcdc) {
            ctx->pc = 0x3CBDD4u;
            goto label_3cbdd4;
        }
    }
    ctx->pc = 0x3CBCE4u;
label_3cbce4:
    // 0x3cbce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cbce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cbce8:
    // 0x3cbce8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbcec:
    // 0x3cbcec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3cbcecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcf0:
    // 0x3cbcf0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbcf4:
    // 0x3cbcf4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3cbcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3cbcf8:
    // 0x3cbcf8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbcfc:
    // 0x3cbcfc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3cbcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3cbd00:
    // 0x3cbd00: 0x60f809  jalr        $v1
label_3cbd04:
    if (ctx->pc == 0x3CBD04u) {
        ctx->pc = 0x3CBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD00u;
        // 0x3cbd04: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD08u;
        goto label_3cbd08;
    }
    ctx->pc = 0x3CBD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBD08u);
        ctx->pc = 0x3CBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD00u;
        // 0x3cbd04: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBD00u, 0x3CBD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBD08u;
label_3cbd08:
    // 0x3cbd08: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbd0c:
    // 0x3cbd0c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3cbd0cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbd10:
    // 0x3cbd10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbd14:
    // 0x3cbd14: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3cbd14u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbd18:
    // 0x3cbd18: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3cbd1c:
    if (ctx->pc == 0x3CBD1Cu) {
        ctx->pc = 0x3CBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD18u;
        // 0x3cbd1c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD20u;
        goto label_3cbd20;
    }
    ctx->pc = 0x3CBD18u;
    {
        const bool branch_taken_0x3cbd18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD18u;
        // 0x3cbd1c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd18) {
            ctx->pc = 0x3CBCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbce8;
        }
    }
    ctx->pc = 0x3CBD20u;
label_3cbd20:
    // 0x3cbd20: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3cbd24:
    if (ctx->pc == 0x3CBD24u) {
        ctx->pc = 0x3CBD28u;
        goto label_3cbd28;
    }
    ctx->pc = 0x3CBD20u;
    {
        const bool branch_taken_0x3cbd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbd20) {
            ctx->pc = 0x3CBDD4u;
            goto label_3cbdd4;
        }
    }
    ctx->pc = 0x3CBD28u;
label_3cbd28:
    // 0x3cbd28: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3cbd2c:
    if (ctx->pc == 0x3CBD2Cu) {
        ctx->pc = 0x3CBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD28u;
        // 0x3cbd2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD30u;
        goto label_3cbd30;
    }
    ctx->pc = 0x3CBD28u;
    {
        const bool branch_taken_0x3cbd28 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3CBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD28u;
        // 0x3cbd2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd28) {
            ctx->pc = 0x3CBD80u;
            goto label_3cbd80;
        }
    }
    ctx->pc = 0x3CBD30u;
label_3cbd30:
    // 0x3cbd30: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbd30u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbd34:
    // 0x3cbd34: 0x0  nop
    ctx->pc = 0x3cbd34u;
    // NOP
label_3cbd38:
    // 0x3cbd38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbd3c:
    // 0x3cbd3c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3cbd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd40:
    // 0x3cbd40: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbd44:
    // 0x3cbd44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cbd44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cbd48:
    // 0x3cbd48: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbd4c:
    // 0x3cbd4c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3cbd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3cbd50:
    // 0x3cbd50: 0x60f809  jalr        $v1
label_3cbd54:
    if (ctx->pc == 0x3CBD54u) {
        ctx->pc = 0x3CBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD50u;
        // 0x3cbd54: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD58u;
        goto label_3cbd58;
    }
    ctx->pc = 0x3CBD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBD58u);
        ctx->pc = 0x3CBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD50u;
        // 0x3cbd54: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBD50u, 0x3CBD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBD58u;
label_3cbd58:
    // 0x3cbd58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbd5c:
    // 0x3cbd5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cbd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbd60:
    // 0x3cbd60: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbd64:
    // 0x3cbd64: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3cbd64u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbd68:
    // 0x3cbd68: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3cbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3cbd6c:
    // 0x3cbd6c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3cbd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cbd70:
    // 0x3cbd70: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3cbd74:
    if (ctx->pc == 0x3CBD74u) {
        ctx->pc = 0x3CBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD70u;
        // 0x3cbd74: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD78u;
        goto label_3cbd78;
    }
    ctx->pc = 0x3CBD70u;
    {
        const bool branch_taken_0x3cbd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD70u;
        // 0x3cbd74: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd70) {
            ctx->pc = 0x3CBD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbd38;
        }
    }
    ctx->pc = 0x3CBD78u;
label_3cbd78:
    // 0x3cbd78: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cbd7c:
    if (ctx->pc == 0x3CBD7Cu) {
        ctx->pc = 0x3CBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD78u;
        // 0x3cbd7c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD80u;
        goto label_3cbd80;
    }
    ctx->pc = 0x3CBD78u;
    {
        const bool branch_taken_0x3cbd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD78u;
        // 0x3cbd7c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd78) {
            ctx->pc = 0x3CBD88u;
            goto label_3cbd88;
        }
    }
    ctx->pc = 0x3CBD80u;
label_3cbd80:
    // 0x3cbd80: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbd80u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbd84:
    // 0x3cbd84: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbd88:
    // 0x3cbd88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3cbd8c:
    if (ctx->pc == 0x3CBD8Cu) {
        ctx->pc = 0x3CBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD88u;
        // 0x3cbd8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD90u;
        goto label_3cbd90;
    }
    ctx->pc = 0x3CBD88u;
    {
        const bool branch_taken_0x3cbd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD88u;
        // 0x3cbd8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd88) {
            ctx->pc = 0x3CBDD4u;
            goto label_3cbdd4;
        }
    }
    ctx->pc = 0x3CBD90u;
label_3cbd90:
    // 0x3cbd90: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3cbd90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cbd94:
    // 0x3cbd94: 0x0  nop
    ctx->pc = 0x3cbd94u;
    // NOP
label_3cbd98:
    // 0x3cbd98: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3cbd9c:
    // 0x3cbd9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbda0:
    // 0x3cbda0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3cbda0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3cbda4:
    // 0x3cbda4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cbda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cbda8:
    // 0x3cbda8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbdac:
    // 0x3cbdac: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbdb0:
    // 0x3cbdb0: 0x60f809  jalr        $v1
label_3cbdb4:
    if (ctx->pc == 0x3CBDB4u) {
        ctx->pc = 0x3CBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDB0u;
        // 0x3cbdb4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBDB8u;
        goto label_3cbdb8;
    }
    ctx->pc = 0x3CBDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBDB8u);
        ctx->pc = 0x3CBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDB0u;
        // 0x3cbdb4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBDB0u, 0x3CBDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBDB8u;
label_3cbdb8:
    // 0x3cbdb8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbdbc:
    // 0x3cbdbc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3cbdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbdc0:
    // 0x3cbdc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbdc4:
    // 0x3cbdc4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3cbdc4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbdc8:
    // 0x3cbdc8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3cbdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cbdcc:
    // 0x3cbdcc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3cbdd0:
    if (ctx->pc == 0x3CBDD0u) {
        ctx->pc = 0x3CBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDCCu;
        // 0x3cbdd0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBDD4u;
        goto label_3cbdd4;
    }
    ctx->pc = 0x3CBDCCu;
    {
        const bool branch_taken_0x3cbdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDCCu;
        // 0x3cbdd0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbdcc) {
            ctx->pc = 0x3CBD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbd98;
        }
    }
    ctx->pc = 0x3CBDD4u;
label_3cbdd4:
    // 0x3cbdd4: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3cbdd8:
    if (ctx->pc == 0x3CBDD8u) {
        ctx->pc = 0x3CBDDCu;
        goto label_3cbddc;
    }
    ctx->pc = 0x3CBDD4u;
    {
        const bool branch_taken_0x3cbdd4 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x3cbdd4) {
            ctx->pc = 0x3CBE08u;
            goto label_3cbe08;
        }
    }
    ctx->pc = 0x3CBDDCu;
label_3cbddc:
    // 0x3cbddc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3cbddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cbde0:
    // 0x3cbde0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbde4:
    // 0x3cbde4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3cbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cbde8:
    // 0x3cbde8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbdec:
    // 0x3cbdec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbdf0:
    // 0x3cbdf0: 0x60f809  jalr        $v1
label_3cbdf4:
    if (ctx->pc == 0x3CBDF4u) {
        ctx->pc = 0x3CBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDF0u;
        // 0x3cbdf4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBDF8u;
        goto label_3cbdf8;
    }
    ctx->pc = 0x3CBDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBDF8u);
        ctx->pc = 0x3CBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDF0u;
        // 0x3cbdf4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBDF0u, 0x3CBDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBDF8u;
label_3cbdf8:
    // 0x3cbdf8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbdfc:
    // 0x3cbdfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbe00:
    // 0x3cbe00: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3cbe04:
    if (ctx->pc == 0x3CBE04u) {
        ctx->pc = 0x3CBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE00u;
        // 0x3cbe04: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE08u;
        goto label_3cbe08;
    }
    ctx->pc = 0x3CBE00u;
    {
        const bool branch_taken_0x3cbe00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE00u;
        // 0x3cbe04: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe00) {
            ctx->pc = 0x3CBDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbde0;
        }
    }
    ctx->pc = 0x3CBE08u;
label_3cbe08:
    // 0x3cbe08: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_3cbe0c:
    if (ctx->pc == 0x3CBE0Cu) {
        ctx->pc = 0x3CBE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE08u;
        // 0x3cbe0c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE10u;
        goto label_3cbe10;
    }
    ctx->pc = 0x3CBE08u;
    {
        const bool branch_taken_0x3cbe08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbe08) {
            ctx->pc = 0x3CBE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CBE08u;
            // 0x3cbe0c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CBE10u;
label_3cbe10:
    // 0x3cbe10: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3cbe10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3cbe14:
    // 0x3cbe14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbe18:
    // 0x3cbe18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cbe18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3cbe1c:
    // 0x3cbe1c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbe20:
    // 0x3cbe20: 0x60f809  jalr        $v1
label_3cbe24:
    if (ctx->pc == 0x3CBE24u) {
        ctx->pc = 0x3CBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE20u;
        // 0x3cbe24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE28u;
        goto label_3cbe28;
    }
    ctx->pc = 0x3CBE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBE28u);
        ctx->pc = 0x3CBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE20u;
        // 0x3cbe24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBE20u, 0x3CBE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBE28u;
label_3cbe28:
    // 0x3cbe28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbe2c:
    // 0x3cbe2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbe30:
    // 0x3cbe30: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3cbe30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbe34:
    // 0x3cbe34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3cbe38:
    if (ctx->pc == 0x3CBE38u) {
        ctx->pc = 0x3CBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE34u;
        // 0x3cbe38: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE3Cu;
        goto label_3cbe3c;
    }
    ctx->pc = 0x3CBE34u;
    {
        const bool branch_taken_0x3cbe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE34u;
        // 0x3cbe38: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe34) {
            ctx->pc = 0x3CBE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbe10;
        }
    }
    ctx->pc = 0x3CBE3Cu;
label_3cbe3c:
    // 0x3cbe3c: 0x10000055  b           . + 4 + (0x55 << 2)
label_3cbe40:
    if (ctx->pc == 0x3CBE40u) {
        ctx->pc = 0x3CBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE3Cu;
        // 0x3cbe40: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE44u;
        goto label_3cbe44;
    }
    ctx->pc = 0x3CBE3Cu;
    {
        const bool branch_taken_0x3cbe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE3Cu;
        // 0x3cbe40: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe3c) {
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CBE44u;
label_3cbe44:
    // 0x3cbe44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cbe44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbe48:
    // 0x3cbe48: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3cbe4c:
    if (ctx->pc == 0x3CBE4Cu) {
        ctx->pc = 0x3CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE48u;
        // 0x3cbe4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE50u;
        goto label_3cbe50;
    }
    ctx->pc = 0x3CBE48u;
    {
        const bool branch_taken_0x3cbe48 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE48u;
        // 0x3cbe4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe48) {
            ctx->pc = 0x3CBEA0u;
            goto label_3cbea0;
        }
    }
    ctx->pc = 0x3CBE50u;
label_3cbe50:
    // 0x3cbe50: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbe50u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbe54:
    // 0x3cbe54: 0x0  nop
    ctx->pc = 0x3cbe54u;
    // NOP
label_3cbe58:
    // 0x3cbe58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbe5c:
    // 0x3cbe5c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3cbe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe60:
    // 0x3cbe60: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbe64:
    // 0x3cbe64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cbe64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cbe68:
    // 0x3cbe68: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbe6c:
    // 0x3cbe6c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3cbe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3cbe70:
    // 0x3cbe70: 0x60f809  jalr        $v1
label_3cbe74:
    if (ctx->pc == 0x3CBE74u) {
        ctx->pc = 0x3CBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE70u;
        // 0x3cbe74: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE78u;
        goto label_3cbe78;
    }
    ctx->pc = 0x3CBE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBE78u);
        ctx->pc = 0x3CBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE70u;
        // 0x3cbe74: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBE70u, 0x3CBE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBE78u;
label_3cbe78:
    // 0x3cbe78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbe78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbe7c:
    // 0x3cbe7c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cbe80:
    // 0x3cbe80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbe84:
    // 0x3cbe84: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3cbe84u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbe88:
    // 0x3cbe88: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3cbe88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3cbe8c:
    // 0x3cbe8c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3cbe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cbe90:
    // 0x3cbe90: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3cbe94:
    if (ctx->pc == 0x3CBE94u) {
        ctx->pc = 0x3CBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE90u;
        // 0x3cbe94: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE98u;
        goto label_3cbe98;
    }
    ctx->pc = 0x3CBE90u;
    {
        const bool branch_taken_0x3cbe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE90u;
        // 0x3cbe94: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe90) {
            ctx->pc = 0x3CBE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbe58;
        }
    }
    ctx->pc = 0x3CBE98u;
label_3cbe98:
    // 0x3cbe98: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cbe9c:
    if (ctx->pc == 0x3CBE9Cu) {
        ctx->pc = 0x3CBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE98u;
        // 0x3cbe9c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEA0u;
        goto label_3cbea0;
    }
    ctx->pc = 0x3CBE98u;
    {
        const bool branch_taken_0x3cbe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE98u;
        // 0x3cbe9c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe98) {
            ctx->pc = 0x3CBEA8u;
            goto label_3cbea8;
        }
    }
    ctx->pc = 0x3CBEA0u;
label_3cbea0:
    // 0x3cbea0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3cbea0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbea4:
    // 0x3cbea4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3cbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbea8:
    // 0x3cbea8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3cbeac:
    if (ctx->pc == 0x3CBEACu) {
        ctx->pc = 0x3CBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEA8u;
        // 0x3cbeac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEB0u;
        goto label_3cbeb0;
    }
    ctx->pc = 0x3CBEA8u;
    {
        const bool branch_taken_0x3cbea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEA8u;
        // 0x3cbeac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbea8) {
            ctx->pc = 0x3CBEF4u;
            goto label_3cbef4;
        }
    }
    ctx->pc = 0x3CBEB0u;
label_3cbeb0:
    // 0x3cbeb0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3cbeb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cbeb4:
    // 0x3cbeb4: 0x0  nop
    ctx->pc = 0x3cbeb4u;
    // NOP
label_3cbeb8:
    // 0x3cbeb8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3cbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3cbebc:
    // 0x3cbebc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbec0:
    // 0x3cbec0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3cbec0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3cbec4:
    // 0x3cbec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cbec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cbec8:
    // 0x3cbec8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbecc:
    // 0x3cbecc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbed0:
    // 0x3cbed0: 0x60f809  jalr        $v1
label_3cbed4:
    if (ctx->pc == 0x3CBED4u) {
        ctx->pc = 0x3CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBED0u;
        // 0x3cbed4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBED8u;
        goto label_3cbed8;
    }
    ctx->pc = 0x3CBED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBED8u);
        ctx->pc = 0x3CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBED0u;
        // 0x3cbed4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBED0u, 0x3CBED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBED8u;
label_3cbed8:
    // 0x3cbed8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbedc:
    // 0x3cbedc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3cbedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3cbee0:
    // 0x3cbee0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbee4:
    // 0x3cbee4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3cbee4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbee8:
    // 0x3cbee8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3cbee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3cbeec:
    // 0x3cbeec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3cbef0:
    if (ctx->pc == 0x3CBEF0u) {
        ctx->pc = 0x3CBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEECu;
        // 0x3cbef0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEF4u;
        goto label_3cbef4;
    }
    ctx->pc = 0x3CBEECu;
    {
        const bool branch_taken_0x3cbeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEECu;
        // 0x3cbef0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbeec) {
            ctx->pc = 0x3CBEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbeb8;
        }
    }
    ctx->pc = 0x3CBEF4u;
label_3cbef4:
    // 0x3cbef4: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3cbef8:
    if (ctx->pc == 0x3CBEF8u) {
        ctx->pc = 0x3CBEFCu;
        goto label_3cbefc;
    }
    ctx->pc = 0x3CBEF4u;
    {
        const bool branch_taken_0x3cbef4 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x3cbef4) {
            ctx->pc = 0x3CBF28u;
            goto label_3cbf28;
        }
    }
    ctx->pc = 0x3CBEFCu;
label_3cbefc:
    // 0x3cbefc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3cbefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf00:
    // 0x3cbf00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbf04:
    // 0x3cbf04: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3cbf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cbf08:
    // 0x3cbf08: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbf0c:
    // 0x3cbf0c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbf10:
    // 0x3cbf10: 0x60f809  jalr        $v1
label_3cbf14:
    if (ctx->pc == 0x3CBF14u) {
        ctx->pc = 0x3CBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF10u;
        // 0x3cbf14: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF18u;
        goto label_3cbf18;
    }
    ctx->pc = 0x3CBF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBF18u);
        ctx->pc = 0x3CBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF10u;
        // 0x3cbf14: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF10u, 0x3CBF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF18u;
label_3cbf18:
    // 0x3cbf18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbf1c:
    // 0x3cbf1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbf20:
    // 0x3cbf20: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3cbf24:
    if (ctx->pc == 0x3CBF24u) {
        ctx->pc = 0x3CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF20u;
        // 0x3cbf24: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF28u;
        goto label_3cbf28;
    }
    ctx->pc = 0x3CBF20u;
    {
        const bool branch_taken_0x3cbf20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF20u;
        // 0x3cbf24: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf20) {
            ctx->pc = 0x3CBF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbf00;
        }
    }
    ctx->pc = 0x3CBF28u;
label_3cbf28:
    // 0x3cbf28: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_3cbf2c:
    if (ctx->pc == 0x3CBF2Cu) {
        ctx->pc = 0x3CBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF28u;
        // 0x3cbf2c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF30u;
        goto label_3cbf30;
    }
    ctx->pc = 0x3CBF28u;
    {
        const bool branch_taken_0x3cbf28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbf28) {
            ctx->pc = 0x3CBF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CBF28u;
            // 0x3cbf2c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CBF30u;
label_3cbf30:
    // 0x3cbf30: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3cbf30u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3cbf34:
    // 0x3cbf34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbf38:
    // 0x3cbf38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cbf38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3cbf3c:
    // 0x3cbf3c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbf40:
    // 0x3cbf40: 0x60f809  jalr        $v1
label_3cbf44:
    if (ctx->pc == 0x3CBF44u) {
        ctx->pc = 0x3CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF40u;
        // 0x3cbf44: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF48u;
        goto label_3cbf48;
    }
    ctx->pc = 0x3CBF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBF48u);
        ctx->pc = 0x3CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF40u;
        // 0x3cbf44: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF40u, 0x3CBF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF48u;
label_3cbf48:
    // 0x3cbf48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbf4c:
    // 0x3cbf4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbf50:
    // 0x3cbf50: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3cbf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3cbf54:
    // 0x3cbf54: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3cbf58:
    if (ctx->pc == 0x3CBF58u) {
        ctx->pc = 0x3CBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF54u;
        // 0x3cbf58: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF5Cu;
        goto label_3cbf5c;
    }
    ctx->pc = 0x3CBF54u;
    {
        const bool branch_taken_0x3cbf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF54u;
        // 0x3cbf58: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf54) {
            ctx->pc = 0x3CBF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbf30;
        }
    }
    ctx->pc = 0x3CBF5Cu;
label_3cbf5c:
    // 0x3cbf5c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3cbf60:
    if (ctx->pc == 0x3CBF60u) {
        ctx->pc = 0x3CBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF5Cu;
        // 0x3cbf60: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF64u;
        goto label_3cbf64;
    }
    ctx->pc = 0x3CBF5Cu;
    {
        const bool branch_taken_0x3cbf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF5Cu;
        // 0x3cbf60: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf5c) {
            ctx->pc = 0x3CBF94u;
            goto label_3cbf94;
        }
    }
    ctx->pc = 0x3CBF64u;
label_3cbf64:
    // 0x3cbf64: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_3cbf68:
    if (ctx->pc == 0x3CBF68u) {
        ctx->pc = 0x3CBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF64u;
        // 0x3cbf68: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF6Cu;
        goto label_3cbf6c;
    }
    ctx->pc = 0x3CBF64u;
    {
        const bool branch_taken_0x3cbf64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF64u;
        // 0x3cbf68: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf64) {
            ctx->pc = 0x3CBF90u;
            goto label_3cbf90;
        }
    }
    ctx->pc = 0x3CBF6Cu;
label_3cbf6c:
    // 0x3cbf6c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cbf6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cbf70:
    // 0x3cbf70: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3cbf74:
    // 0x3cbf74: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbf78:
    // 0x3cbf78: 0x60f809  jalr        $v1
label_3cbf7c:
    if (ctx->pc == 0x3CBF7Cu) {
        ctx->pc = 0x3CBF80u;
        goto label_3cbf80;
    }
    ctx->pc = 0x3CBF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBF80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF78u, 0x3CBF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF80u;
label_3cbf80:
    // 0x3cbf80: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbf84:
    // 0x3cbf84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cbf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3cbf88:
    // 0x3cbf88: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_3cbf8c:
    if (ctx->pc == 0x3CBF8Cu) {
        ctx->pc = 0x3CBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF88u;
        // 0x3cbf8c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF90u;
        goto label_3cbf90;
    }
    ctx->pc = 0x3CBF88u;
    {
        const bool branch_taken_0x3cbf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF88u;
        // 0x3cbf8c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf88) {
            ctx->pc = 0x3CB884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb884;
        }
    }
    ctx->pc = 0x3CBF90u;
label_3cbf90:
    // 0x3cbf90: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3cbf90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3cbf94:
    // 0x3cbf94: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x3cbf94u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_3cbf98:
    // 0x3cbf98: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3cbf98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3cbf9c:
    // 0x3cbf9c: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_3cbfa0:
    if (ctx->pc == 0x3CBFA0u) {
        ctx->pc = 0x3CBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF9Cu;
        // 0x3cbfa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFA4u;
        goto label_3cbfa4;
    }
    ctx->pc = 0x3CBF9Cu;
    {
        const bool branch_taken_0x3cbf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF9Cu;
        // 0x3cbfa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf9c) {
            ctx->pc = 0x3CB348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb348;
        }
    }
    ctx->pc = 0x3CBFA4u;
label_3cbfa4:
    // 0x3cbfa4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cbfa8:
    if (ctx->pc == 0x3CBFA8u) {
        ctx->pc = 0x3CBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFA4u;
        // 0x3cbfa8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFACu;
        goto label_3cbfac;
    }
    ctx->pc = 0x3CBFA4u;
    {
        const bool branch_taken_0x3cbfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFA4u;
        // 0x3cbfa8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbfa4) {
            ctx->pc = 0x3CBFB8u;
            goto label_3cbfb8;
        }
    }
    ctx->pc = 0x3CBFACu;
label_3cbfac:
    // 0x3cbfac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3cbfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cbfb0:
    // 0x3cbfb0: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x3cbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_3cbfb4:
    // 0x3cbfb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3cbfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3cbfb8:
    // 0x3cbfb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cbfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cbfbc:
    // 0x3cbfbc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3cbfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cbfc0:
    // 0x3cbfc0: 0x60f809  jalr        $v1
label_3cbfc4:
    if (ctx->pc == 0x3CBFC4u) {
        ctx->pc = 0x3CBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFC0u;
        // 0x3cbfc4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFC8u;
        goto label_3cbfc8;
    }
    ctx->pc = 0x3CBFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBFC8u);
        ctx->pc = 0x3CBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFC0u;
        // 0x3cbfc4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBFC0u, 0x3CBFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBFC8u;
label_3cbfc8:
    // 0x3cbfc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3cbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cbfcc:
    // 0x3cbfcc: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x3cbfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_3cbfd0:
    // 0x3cbfd0: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x3cbfd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3cbfd4:
    // 0x3cbfd4: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x3cbfd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_3cbfd8:
    // 0x3cbfd8: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x3cbfd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3cbfdc:
    // 0x3cbfdc: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x3cbfdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3cbfe0:
    // 0x3cbfe0: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x3cbfe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3cbfe4:
    // 0x3cbfe4: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x3cbfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3cbfe8:
    // 0x3cbfe8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x3cbfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3cbfec:
    // 0x3cbfec: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x3cbfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3cbff0:
    // 0x3cbff0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x3cbff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3cbff4:
    // 0x3cbff4: 0x3e00008  jr          $ra
label_3cbff8:
    if (ctx->pc == 0x3CBFF8u) {
        ctx->pc = 0x3CBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFF4u;
        // 0x3cbff8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFFCu;
        goto label_3cbffc;
    }
    ctx->pc = 0x3CBFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFF4u;
        // 0x3cbff8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CBFFCu;
label_3cbffc:
    // 0x3cbffc: 0x0  nop
    ctx->pc = 0x3cbffcu;
    // NOP
    ctx->pc = 0x3cc000u;
}
