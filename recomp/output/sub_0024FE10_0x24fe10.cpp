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

// Function: sub_0024FE10
// Address: 0x24fe10 - 0x250528
void sub_0024FE10_0x24fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FE10_0x24fe10");
#endif

    switch (ctx->pc) {
        case 0x24fe10u: goto label_24fe10;
        case 0x24fe14u: goto label_24fe14;
        case 0x24fe18u: goto label_24fe18;
        case 0x24fe1cu: goto label_24fe1c;
        case 0x24fe20u: goto label_24fe20;
        case 0x24fe24u: goto label_24fe24;
        case 0x24fe28u: goto label_24fe28;
        case 0x24fe2cu: goto label_24fe2c;
        case 0x24fe30u: goto label_24fe30;
        case 0x24fe34u: goto label_24fe34;
        case 0x24fe38u: goto label_24fe38;
        case 0x24fe3cu: goto label_24fe3c;
        case 0x24fe40u: goto label_24fe40;
        case 0x24fe44u: goto label_24fe44;
        case 0x24fe48u: goto label_24fe48;
        case 0x24fe4cu: goto label_24fe4c;
        case 0x24fe50u: goto label_24fe50;
        case 0x24fe54u: goto label_24fe54;
        case 0x24fe58u: goto label_24fe58;
        case 0x24fe5cu: goto label_24fe5c;
        case 0x24fe60u: goto label_24fe60;
        case 0x24fe64u: goto label_24fe64;
        case 0x24fe68u: goto label_24fe68;
        case 0x24fe6cu: goto label_24fe6c;
        case 0x24fe70u: goto label_24fe70;
        case 0x24fe74u: goto label_24fe74;
        case 0x24fe78u: goto label_24fe78;
        case 0x24fe7cu: goto label_24fe7c;
        case 0x24fe80u: goto label_24fe80;
        case 0x24fe84u: goto label_24fe84;
        case 0x24fe88u: goto label_24fe88;
        case 0x24fe8cu: goto label_24fe8c;
        case 0x24fe90u: goto label_24fe90;
        case 0x24fe94u: goto label_24fe94;
        case 0x24fe98u: goto label_24fe98;
        case 0x24fe9cu: goto label_24fe9c;
        case 0x24fea0u: goto label_24fea0;
        case 0x24fea4u: goto label_24fea4;
        case 0x24fea8u: goto label_24fea8;
        case 0x24feacu: goto label_24feac;
        case 0x24feb0u: goto label_24feb0;
        case 0x24feb4u: goto label_24feb4;
        case 0x24feb8u: goto label_24feb8;
        case 0x24febcu: goto label_24febc;
        case 0x24fec0u: goto label_24fec0;
        case 0x24fec4u: goto label_24fec4;
        case 0x24fec8u: goto label_24fec8;
        case 0x24feccu: goto label_24fecc;
        case 0x24fed0u: goto label_24fed0;
        case 0x24fed4u: goto label_24fed4;
        case 0x24fed8u: goto label_24fed8;
        case 0x24fedcu: goto label_24fedc;
        case 0x24fee0u: goto label_24fee0;
        case 0x24fee4u: goto label_24fee4;
        case 0x24fee8u: goto label_24fee8;
        case 0x24feecu: goto label_24feec;
        case 0x24fef0u: goto label_24fef0;
        case 0x24fef4u: goto label_24fef4;
        case 0x24fef8u: goto label_24fef8;
        case 0x24fefcu: goto label_24fefc;
        case 0x24ff00u: goto label_24ff00;
        case 0x24ff04u: goto label_24ff04;
        case 0x24ff08u: goto label_24ff08;
        case 0x24ff0cu: goto label_24ff0c;
        case 0x24ff10u: goto label_24ff10;
        case 0x24ff14u: goto label_24ff14;
        case 0x24ff18u: goto label_24ff18;
        case 0x24ff1cu: goto label_24ff1c;
        case 0x24ff20u: goto label_24ff20;
        case 0x24ff24u: goto label_24ff24;
        case 0x24ff28u: goto label_24ff28;
        case 0x24ff2cu: goto label_24ff2c;
        case 0x24ff30u: goto label_24ff30;
        case 0x24ff34u: goto label_24ff34;
        case 0x24ff38u: goto label_24ff38;
        case 0x24ff3cu: goto label_24ff3c;
        case 0x24ff40u: goto label_24ff40;
        case 0x24ff44u: goto label_24ff44;
        case 0x24ff48u: goto label_24ff48;
        case 0x24ff4cu: goto label_24ff4c;
        case 0x24ff50u: goto label_24ff50;
        case 0x24ff54u: goto label_24ff54;
        case 0x24ff58u: goto label_24ff58;
        case 0x24ff5cu: goto label_24ff5c;
        case 0x24ff60u: goto label_24ff60;
        case 0x24ff64u: goto label_24ff64;
        case 0x24ff68u: goto label_24ff68;
        case 0x24ff6cu: goto label_24ff6c;
        case 0x24ff70u: goto label_24ff70;
        case 0x24ff74u: goto label_24ff74;
        case 0x24ff78u: goto label_24ff78;
        case 0x24ff7cu: goto label_24ff7c;
        case 0x24ff80u: goto label_24ff80;
        case 0x24ff84u: goto label_24ff84;
        case 0x24ff88u: goto label_24ff88;
        case 0x24ff8cu: goto label_24ff8c;
        case 0x24ff90u: goto label_24ff90;
        case 0x24ff94u: goto label_24ff94;
        case 0x24ff98u: goto label_24ff98;
        case 0x24ff9cu: goto label_24ff9c;
        case 0x24ffa0u: goto label_24ffa0;
        case 0x24ffa4u: goto label_24ffa4;
        case 0x24ffa8u: goto label_24ffa8;
        case 0x24ffacu: goto label_24ffac;
        case 0x24ffb0u: goto label_24ffb0;
        case 0x24ffb4u: goto label_24ffb4;
        case 0x24ffb8u: goto label_24ffb8;
        case 0x24ffbcu: goto label_24ffbc;
        case 0x24ffc0u: goto label_24ffc0;
        case 0x24ffc4u: goto label_24ffc4;
        case 0x24ffc8u: goto label_24ffc8;
        case 0x24ffccu: goto label_24ffcc;
        case 0x24ffd0u: goto label_24ffd0;
        case 0x24ffd4u: goto label_24ffd4;
        case 0x24ffd8u: goto label_24ffd8;
        case 0x24ffdcu: goto label_24ffdc;
        case 0x24ffe0u: goto label_24ffe0;
        case 0x24ffe4u: goto label_24ffe4;
        case 0x24ffe8u: goto label_24ffe8;
        case 0x24ffecu: goto label_24ffec;
        case 0x24fff0u: goto label_24fff0;
        case 0x24fff4u: goto label_24fff4;
        case 0x24fff8u: goto label_24fff8;
        case 0x24fffcu: goto label_24fffc;
        case 0x250000u: goto label_250000;
        case 0x250004u: goto label_250004;
        case 0x250008u: goto label_250008;
        case 0x25000cu: goto label_25000c;
        case 0x250010u: goto label_250010;
        case 0x250014u: goto label_250014;
        case 0x250018u: goto label_250018;
        case 0x25001cu: goto label_25001c;
        case 0x250020u: goto label_250020;
        case 0x250024u: goto label_250024;
        case 0x250028u: goto label_250028;
        case 0x25002cu: goto label_25002c;
        case 0x250030u: goto label_250030;
        case 0x250034u: goto label_250034;
        case 0x250038u: goto label_250038;
        case 0x25003cu: goto label_25003c;
        case 0x250040u: goto label_250040;
        case 0x250044u: goto label_250044;
        case 0x250048u: goto label_250048;
        case 0x25004cu: goto label_25004c;
        case 0x250050u: goto label_250050;
        case 0x250054u: goto label_250054;
        case 0x250058u: goto label_250058;
        case 0x25005cu: goto label_25005c;
        case 0x250060u: goto label_250060;
        case 0x250064u: goto label_250064;
        case 0x250068u: goto label_250068;
        case 0x25006cu: goto label_25006c;
        case 0x250070u: goto label_250070;
        case 0x250074u: goto label_250074;
        case 0x250078u: goto label_250078;
        case 0x25007cu: goto label_25007c;
        case 0x250080u: goto label_250080;
        case 0x250084u: goto label_250084;
        case 0x250088u: goto label_250088;
        case 0x25008cu: goto label_25008c;
        case 0x250090u: goto label_250090;
        case 0x250094u: goto label_250094;
        case 0x250098u: goto label_250098;
        case 0x25009cu: goto label_25009c;
        case 0x2500a0u: goto label_2500a0;
        case 0x2500a4u: goto label_2500a4;
        case 0x2500a8u: goto label_2500a8;
        case 0x2500acu: goto label_2500ac;
        case 0x2500b0u: goto label_2500b0;
        case 0x2500b4u: goto label_2500b4;
        case 0x2500b8u: goto label_2500b8;
        case 0x2500bcu: goto label_2500bc;
        case 0x2500c0u: goto label_2500c0;
        case 0x2500c4u: goto label_2500c4;
        case 0x2500c8u: goto label_2500c8;
        case 0x2500ccu: goto label_2500cc;
        case 0x2500d0u: goto label_2500d0;
        case 0x2500d4u: goto label_2500d4;
        case 0x2500d8u: goto label_2500d8;
        case 0x2500dcu: goto label_2500dc;
        case 0x2500e0u: goto label_2500e0;
        case 0x2500e4u: goto label_2500e4;
        case 0x2500e8u: goto label_2500e8;
        case 0x2500ecu: goto label_2500ec;
        case 0x2500f0u: goto label_2500f0;
        case 0x2500f4u: goto label_2500f4;
        case 0x2500f8u: goto label_2500f8;
        case 0x2500fcu: goto label_2500fc;
        case 0x250100u: goto label_250100;
        case 0x250104u: goto label_250104;
        case 0x250108u: goto label_250108;
        case 0x25010cu: goto label_25010c;
        case 0x250110u: goto label_250110;
        case 0x250114u: goto label_250114;
        case 0x250118u: goto label_250118;
        case 0x25011cu: goto label_25011c;
        case 0x250120u: goto label_250120;
        case 0x250124u: goto label_250124;
        case 0x250128u: goto label_250128;
        case 0x25012cu: goto label_25012c;
        case 0x250130u: goto label_250130;
        case 0x250134u: goto label_250134;
        case 0x250138u: goto label_250138;
        case 0x25013cu: goto label_25013c;
        case 0x250140u: goto label_250140;
        case 0x250144u: goto label_250144;
        case 0x250148u: goto label_250148;
        case 0x25014cu: goto label_25014c;
        case 0x250150u: goto label_250150;
        case 0x250154u: goto label_250154;
        case 0x250158u: goto label_250158;
        case 0x25015cu: goto label_25015c;
        case 0x250160u: goto label_250160;
        case 0x250164u: goto label_250164;
        case 0x250168u: goto label_250168;
        case 0x25016cu: goto label_25016c;
        case 0x250170u: goto label_250170;
        case 0x250174u: goto label_250174;
        case 0x250178u: goto label_250178;
        case 0x25017cu: goto label_25017c;
        case 0x250180u: goto label_250180;
        case 0x250184u: goto label_250184;
        case 0x250188u: goto label_250188;
        case 0x25018cu: goto label_25018c;
        case 0x250190u: goto label_250190;
        case 0x250194u: goto label_250194;
        case 0x250198u: goto label_250198;
        case 0x25019cu: goto label_25019c;
        case 0x2501a0u: goto label_2501a0;
        case 0x2501a4u: goto label_2501a4;
        case 0x2501a8u: goto label_2501a8;
        case 0x2501acu: goto label_2501ac;
        case 0x2501b0u: goto label_2501b0;
        case 0x2501b4u: goto label_2501b4;
        case 0x2501b8u: goto label_2501b8;
        case 0x2501bcu: goto label_2501bc;
        case 0x2501c0u: goto label_2501c0;
        case 0x2501c4u: goto label_2501c4;
        case 0x2501c8u: goto label_2501c8;
        case 0x2501ccu: goto label_2501cc;
        case 0x2501d0u: goto label_2501d0;
        case 0x2501d4u: goto label_2501d4;
        case 0x2501d8u: goto label_2501d8;
        case 0x2501dcu: goto label_2501dc;
        case 0x2501e0u: goto label_2501e0;
        case 0x2501e4u: goto label_2501e4;
        case 0x2501e8u: goto label_2501e8;
        case 0x2501ecu: goto label_2501ec;
        case 0x2501f0u: goto label_2501f0;
        case 0x2501f4u: goto label_2501f4;
        case 0x2501f8u: goto label_2501f8;
        case 0x2501fcu: goto label_2501fc;
        case 0x250200u: goto label_250200;
        case 0x250204u: goto label_250204;
        case 0x250208u: goto label_250208;
        case 0x25020cu: goto label_25020c;
        case 0x250210u: goto label_250210;
        case 0x250214u: goto label_250214;
        case 0x250218u: goto label_250218;
        case 0x25021cu: goto label_25021c;
        case 0x250220u: goto label_250220;
        case 0x250224u: goto label_250224;
        case 0x250228u: goto label_250228;
        case 0x25022cu: goto label_25022c;
        case 0x250230u: goto label_250230;
        case 0x250234u: goto label_250234;
        case 0x250238u: goto label_250238;
        case 0x25023cu: goto label_25023c;
        case 0x250240u: goto label_250240;
        case 0x250244u: goto label_250244;
        case 0x250248u: goto label_250248;
        case 0x25024cu: goto label_25024c;
        case 0x250250u: goto label_250250;
        case 0x250254u: goto label_250254;
        case 0x250258u: goto label_250258;
        case 0x25025cu: goto label_25025c;
        case 0x250260u: goto label_250260;
        case 0x250264u: goto label_250264;
        case 0x250268u: goto label_250268;
        case 0x25026cu: goto label_25026c;
        case 0x250270u: goto label_250270;
        case 0x250274u: goto label_250274;
        case 0x250278u: goto label_250278;
        case 0x25027cu: goto label_25027c;
        case 0x250280u: goto label_250280;
        case 0x250284u: goto label_250284;
        case 0x250288u: goto label_250288;
        case 0x25028cu: goto label_25028c;
        case 0x250290u: goto label_250290;
        case 0x250294u: goto label_250294;
        case 0x250298u: goto label_250298;
        case 0x25029cu: goto label_25029c;
        case 0x2502a0u: goto label_2502a0;
        case 0x2502a4u: goto label_2502a4;
        case 0x2502a8u: goto label_2502a8;
        case 0x2502acu: goto label_2502ac;
        case 0x2502b0u: goto label_2502b0;
        case 0x2502b4u: goto label_2502b4;
        case 0x2502b8u: goto label_2502b8;
        case 0x2502bcu: goto label_2502bc;
        case 0x2502c0u: goto label_2502c0;
        case 0x2502c4u: goto label_2502c4;
        case 0x2502c8u: goto label_2502c8;
        case 0x2502ccu: goto label_2502cc;
        case 0x2502d0u: goto label_2502d0;
        case 0x2502d4u: goto label_2502d4;
        case 0x2502d8u: goto label_2502d8;
        case 0x2502dcu: goto label_2502dc;
        case 0x2502e0u: goto label_2502e0;
        case 0x2502e4u: goto label_2502e4;
        case 0x2502e8u: goto label_2502e8;
        case 0x2502ecu: goto label_2502ec;
        case 0x2502f0u: goto label_2502f0;
        case 0x2502f4u: goto label_2502f4;
        case 0x2502f8u: goto label_2502f8;
        case 0x2502fcu: goto label_2502fc;
        case 0x250300u: goto label_250300;
        case 0x250304u: goto label_250304;
        case 0x250308u: goto label_250308;
        case 0x25030cu: goto label_25030c;
        case 0x250310u: goto label_250310;
        case 0x250314u: goto label_250314;
        case 0x250318u: goto label_250318;
        case 0x25031cu: goto label_25031c;
        case 0x250320u: goto label_250320;
        case 0x250324u: goto label_250324;
        case 0x250328u: goto label_250328;
        case 0x25032cu: goto label_25032c;
        case 0x250330u: goto label_250330;
        case 0x250334u: goto label_250334;
        case 0x250338u: goto label_250338;
        case 0x25033cu: goto label_25033c;
        case 0x250340u: goto label_250340;
        case 0x250344u: goto label_250344;
        case 0x250348u: goto label_250348;
        case 0x25034cu: goto label_25034c;
        case 0x250350u: goto label_250350;
        case 0x250354u: goto label_250354;
        case 0x250358u: goto label_250358;
        case 0x25035cu: goto label_25035c;
        case 0x250360u: goto label_250360;
        case 0x250364u: goto label_250364;
        case 0x250368u: goto label_250368;
        case 0x25036cu: goto label_25036c;
        case 0x250370u: goto label_250370;
        case 0x250374u: goto label_250374;
        case 0x250378u: goto label_250378;
        case 0x25037cu: goto label_25037c;
        case 0x250380u: goto label_250380;
        case 0x250384u: goto label_250384;
        case 0x250388u: goto label_250388;
        case 0x25038cu: goto label_25038c;
        case 0x250390u: goto label_250390;
        case 0x250394u: goto label_250394;
        case 0x250398u: goto label_250398;
        case 0x25039cu: goto label_25039c;
        case 0x2503a0u: goto label_2503a0;
        case 0x2503a4u: goto label_2503a4;
        case 0x2503a8u: goto label_2503a8;
        case 0x2503acu: goto label_2503ac;
        case 0x2503b0u: goto label_2503b0;
        case 0x2503b4u: goto label_2503b4;
        case 0x2503b8u: goto label_2503b8;
        case 0x2503bcu: goto label_2503bc;
        case 0x2503c0u: goto label_2503c0;
        case 0x2503c4u: goto label_2503c4;
        case 0x2503c8u: goto label_2503c8;
        case 0x2503ccu: goto label_2503cc;
        case 0x2503d0u: goto label_2503d0;
        case 0x2503d4u: goto label_2503d4;
        case 0x2503d8u: goto label_2503d8;
        case 0x2503dcu: goto label_2503dc;
        case 0x2503e0u: goto label_2503e0;
        case 0x2503e4u: goto label_2503e4;
        case 0x2503e8u: goto label_2503e8;
        case 0x2503ecu: goto label_2503ec;
        case 0x2503f0u: goto label_2503f0;
        case 0x2503f4u: goto label_2503f4;
        case 0x2503f8u: goto label_2503f8;
        case 0x2503fcu: goto label_2503fc;
        case 0x250400u: goto label_250400;
        case 0x250404u: goto label_250404;
        case 0x250408u: goto label_250408;
        case 0x25040cu: goto label_25040c;
        case 0x250410u: goto label_250410;
        case 0x250414u: goto label_250414;
        case 0x250418u: goto label_250418;
        case 0x25041cu: goto label_25041c;
        case 0x250420u: goto label_250420;
        case 0x250424u: goto label_250424;
        case 0x250428u: goto label_250428;
        case 0x25042cu: goto label_25042c;
        case 0x250430u: goto label_250430;
        case 0x250434u: goto label_250434;
        case 0x250438u: goto label_250438;
        case 0x25043cu: goto label_25043c;
        case 0x250440u: goto label_250440;
        case 0x250444u: goto label_250444;
        case 0x250448u: goto label_250448;
        case 0x25044cu: goto label_25044c;
        case 0x250450u: goto label_250450;
        case 0x250454u: goto label_250454;
        case 0x250458u: goto label_250458;
        case 0x25045cu: goto label_25045c;
        case 0x250460u: goto label_250460;
        case 0x250464u: goto label_250464;
        case 0x250468u: goto label_250468;
        case 0x25046cu: goto label_25046c;
        case 0x250470u: goto label_250470;
        case 0x250474u: goto label_250474;
        case 0x250478u: goto label_250478;
        case 0x25047cu: goto label_25047c;
        case 0x250480u: goto label_250480;
        case 0x250484u: goto label_250484;
        case 0x250488u: goto label_250488;
        case 0x25048cu: goto label_25048c;
        case 0x250490u: goto label_250490;
        case 0x250494u: goto label_250494;
        case 0x250498u: goto label_250498;
        case 0x25049cu: goto label_25049c;
        case 0x2504a0u: goto label_2504a0;
        case 0x2504a4u: goto label_2504a4;
        case 0x2504a8u: goto label_2504a8;
        case 0x2504acu: goto label_2504ac;
        case 0x2504b0u: goto label_2504b0;
        case 0x2504b4u: goto label_2504b4;
        case 0x2504b8u: goto label_2504b8;
        case 0x2504bcu: goto label_2504bc;
        case 0x2504c0u: goto label_2504c0;
        case 0x2504c4u: goto label_2504c4;
        case 0x2504c8u: goto label_2504c8;
        case 0x2504ccu: goto label_2504cc;
        case 0x2504d0u: goto label_2504d0;
        case 0x2504d4u: goto label_2504d4;
        case 0x2504d8u: goto label_2504d8;
        case 0x2504dcu: goto label_2504dc;
        case 0x2504e0u: goto label_2504e0;
        case 0x2504e4u: goto label_2504e4;
        case 0x2504e8u: goto label_2504e8;
        case 0x2504ecu: goto label_2504ec;
        case 0x2504f0u: goto label_2504f0;
        case 0x2504f4u: goto label_2504f4;
        case 0x2504f8u: goto label_2504f8;
        case 0x2504fcu: goto label_2504fc;
        case 0x250500u: goto label_250500;
        case 0x250504u: goto label_250504;
        case 0x250508u: goto label_250508;
        case 0x25050cu: goto label_25050c;
        case 0x250510u: goto label_250510;
        case 0x250514u: goto label_250514;
        case 0x250518u: goto label_250518;
        case 0x25051cu: goto label_25051c;
        case 0x250520u: goto label_250520;
        case 0x250524u: goto label_250524;
        default: break;
    }

    ctx->pc = 0x24fe10u;

label_24fe10:
    // 0x24fe10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_24fe14:
    // 0x24fe14: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x24fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_24fe18:
    // 0x24fe18: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x24fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_24fe1c:
    // 0x24fe1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24fe1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24fe20:
    // 0x24fe20: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x24fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_24fe24:
    // 0x24fe24: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x24fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_24fe28:
    // 0x24fe28: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x24fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_24fe2c:
    // 0x24fe2c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_24fe30:
    // 0x24fe30: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_24fe34:
    // 0x24fe34: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x24fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_24fe38:
    // 0x24fe38: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x24fe38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_24fe3c:
    // 0x24fe3c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x24fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_24fe40:
    // 0x24fe40: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x24fe40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_24fe44:
    // 0x24fe44: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
label_24fe48:
    if (ctx->pc == 0x24FE48u) {
        ctx->pc = 0x24FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE44u;
        // 0x24fe48: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE4Cu;
        goto label_24fe4c;
    }
    ctx->pc = 0x24FE44u;
    {
        const bool branch_taken_0x24fe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE44u;
        // 0x24fe48: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe44) {
            ctx->pc = 0x2504F8u;
            goto label_2504f8;
        }
    }
    ctx->pc = 0x24FE4Cu;
label_24fe4c:
    // 0x24fe4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24fe50:
    // 0x24fe50: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24fe50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fe54:
    // 0x24fe54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24fe54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fe58:
    // 0x24fe58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24fe58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fe5c:
    // 0x24fe5c: 0x8c530334  lw          $s3, 0x334($v0)
    ctx->pc = 0x24fe5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_24fe60:
    // 0x24fe60: 0x8c54010c  lw          $s4, 0x10C($v0)
    ctx->pc = 0x24fe60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_24fe64:
    // 0x24fe64: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x24fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_24fe68:
    // 0x24fe68: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_24fe6c:
    // 0x24fe6c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24fe6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24fe70:
    // 0x24fe70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_24fe74:
    if (ctx->pc == 0x24FE74u) {
        ctx->pc = 0x24FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE70u;
        // 0x24fe74: 0xc69400f0  lwc1        $f20, 0xF0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE78u;
        goto label_24fe78;
    }
    ctx->pc = 0x24FE70u;
    {
        const bool branch_taken_0x24fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE70u;
        // 0x24fe74: 0xc69400f0  lwc1        $f20, 0xF0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe70) {
            ctx->pc = 0x24FEACu;
            goto label_24feac;
        }
    }
    ctx->pc = 0x24FE78u;
label_24fe78:
    // 0x24fe78: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_24fe7c:
    // 0x24fe7c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_24fe80:
    if (ctx->pc == 0x24FE80u) {
        ctx->pc = 0x24FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE7Cu;
        // 0x24fe80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE84u;
        goto label_24fe84;
    }
    ctx->pc = 0x24FE7Cu;
    {
        const bool branch_taken_0x24fe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fe7c) {
            ctx->pc = 0x24FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE7Cu;
            // 0x24fe80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEB0u;
            goto label_24feb0;
        }
    }
    ctx->pc = 0x24FE84u;
label_24fe84:
    // 0x24fe84: 0xc0924a8  jal         func_2492A0
label_24fe88:
    if (ctx->pc == 0x24FE88u) {
        ctx->pc = 0x24FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE84u;
        // 0x24fe88: 0x8e640148  lw          $a0, 0x148($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE8Cu;
        goto label_24fe8c;
    }
    ctx->pc = 0x24FE84u;
    SET_GPR_U32(ctx, 31, 0x24FE8Cu);
    ctx->pc = 0x24FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE84u;
    // 0x24fe88: 0x8e640148  lw          $a0, 0x148($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x24FE84u, 0x24FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE8Cu;
label_24fe8c:
    // 0x24fe8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_24fe90:
    if (ctx->pc == 0x24FE90u) {
        ctx->pc = 0x24FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE8Cu;
        // 0x24fe90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE94u;
        goto label_24fe94;
    }
    ctx->pc = 0x24FE8Cu;
    {
        const bool branch_taken_0x24fe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fe8c) {
            ctx->pc = 0x24FE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE8Cu;
            // 0x24fe90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEB0u;
            goto label_24feb0;
        }
    }
    ctx->pc = 0x24FE94u;
label_24fe94:
    // 0x24fe94: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x24fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_24fe98:
    // 0x24fe98: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x24fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_24fe9c:
    // 0x24fe9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_24fea0:
    if (ctx->pc == 0x24FEA0u) {
        ctx->pc = 0x24FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE9Cu;
        // 0x24fea0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FEA4u;
        goto label_24fea4;
    }
    ctx->pc = 0x24FE9Cu;
    {
        const bool branch_taken_0x24fe9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE9Cu;
        // 0x24fea0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe9c) {
            ctx->pc = 0x24FEACu;
            goto label_24feac;
        }
    }
    ctx->pc = 0x24FEA4u;
label_24fea4:
    // 0x24fea4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24fea8:
    if (ctx->pc == 0x24FEA8u) {
        ctx->pc = 0x24FEACu;
        goto label_24feac;
    }
    ctx->pc = 0x24FEA4u;
    {
        const bool branch_taken_0x24fea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fea4) {
            ctx->pc = 0x24FEB0u;
            goto label_24feb0;
        }
    }
    ctx->pc = 0x24FEACu;
label_24feac:
    // 0x24feac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x24feacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24feb0:
    // 0x24feb0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_24feb4:
    if (ctx->pc == 0x24FEB4u) {
        ctx->pc = 0x24FEB8u;
        goto label_24feb8;
    }
    ctx->pc = 0x24FEB0u;
    {
        const bool branch_taken_0x24feb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24feb0) {
            ctx->pc = 0x24FED0u;
            goto label_24fed0;
        }
    }
    ctx->pc = 0x24FEB8u;
label_24feb8:
    // 0x24feb8: 0x8e620150  lw          $v0, 0x150($s3)
    ctx->pc = 0x24feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_24febc:
    // 0x24febc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24febcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24fec0:
    // 0x24fec0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_24fec4:
    // 0x24fec4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24fec8:
    // 0x24fec8: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x24fec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_24fecc:
    // 0x24fecc: 0x2c710001  sltiu       $s1, $v1, 0x1
    ctx->pc = 0x24feccu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24fed0:
    // 0x24fed0: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
label_24fed4:
    if (ctx->pc == 0x24FED4u) {
        ctx->pc = 0x24FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FED0u;
        // 0x24fed4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FED8u;
        goto label_24fed8;
    }
    ctx->pc = 0x24FED0u;
    {
        const bool branch_taken_0x24fed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fed0) {
            ctx->pc = 0x24FED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FED0u;
            // 0x24fed4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF1Cu;
            goto label_24ff1c;
        }
    }
    ctx->pc = 0x24FED8u;
label_24fed8:
    // 0x24fed8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_24fedc:
    // 0x24fedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24fee0:
    // 0x24fee0: 0x0  nop
    ctx->pc = 0x24fee0u;
    // NOP
label_24fee4:
    // 0x24fee4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x24fee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24fee8:
    // 0x24fee8: 0x0  nop
    ctx->pc = 0x24fee8u;
    // NOP
label_24feec:
    // 0x24feec: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_24fef0:
    if (ctx->pc == 0x24FEF0u) {
        ctx->pc = 0x24FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEECu;
        // 0x24fef0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FEF4u;
        goto label_24fef4;
    }
    ctx->pc = 0x24FEECu;
    {
        const bool branch_taken_0x24feec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24feec) {
            ctx->pc = 0x24FEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FEECu;
            // 0x24fef0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF1Cu;
            goto label_24ff1c;
        }
    }
    ctx->pc = 0x24FEF4u;
label_24fef4:
    // 0x24fef4: 0xc64100f4  lwc1        $f1, 0xF4($s2)
    ctx->pc = 0x24fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24fef8:
    // 0x24fef8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x24fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_24fefc:
    // 0x24fefc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x24fefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_24ff00:
    // 0x24ff00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ff00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ff04:
    // 0x24ff04: 0x0  nop
    ctx->pc = 0x24ff04u;
    // NOP
label_24ff08:
    // 0x24ff08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24ff08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ff0c:
    // 0x24ff0c: 0x0  nop
    ctx->pc = 0x24ff0cu;
    // NOP
label_24ff10:
    // 0x24ff10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_24ff14:
    if (ctx->pc == 0x24FF14u) {
        ctx->pc = 0x24FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF10u;
        // 0x24ff14: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF18u;
        goto label_24ff18;
    }
    ctx->pc = 0x24FF10u;
    {
        const bool branch_taken_0x24ff10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ff10) {
            ctx->pc = 0x24FF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF10u;
            // 0x24ff14: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF18u;
            goto label_24ff18;
        }
    }
    ctx->pc = 0x24FF18u;
label_24ff18:
    // 0x24ff18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24ff1c:
    // 0x24ff1c: 0xc64200f4  lwc1        $f2, 0xF4($s2)
    ctx->pc = 0x24ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24ff20:
    // 0x24ff20: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x24ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_24ff24:
    // 0x24ff24: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x24ff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_24ff28:
    // 0x24ff28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24ff28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_24ff2c:
    // 0x24ff2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ff2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24ff30:
    // 0x24ff30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ff34:
    // 0x24ff34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24ff38:
    // 0x24ff38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ff38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ff3c:
    // 0x24ff3c: 0x460111c1  sub.s       $f7, $f2, $f1
    ctx->pc = 0x24ff3cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_24ff40:
    // 0x24ff40: 0xc4430070  lwc1        $f3, 0x70($v0)
    ctx->pc = 0x24ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24ff44:
    // 0x24ff44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x24ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_24ff48:
    // 0x24ff48: 0x46001201  sub.s       $f8, $f2, $f0
    ctx->pc = 0x24ff48u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_24ff4c:
    // 0x24ff4c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x24ff4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24ff50:
    // 0x24ff50: 0x46003945  abs.s       $f5, $f7
    ctx->pc = 0x24ff50u;
    ctx->f[5] = FPU_ABS_S(ctx->f[7]);
label_24ff54:
    // 0x24ff54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24ff54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_24ff58:
    // 0x24ff58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ff58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24ff5c:
    // 0x24ff5c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24ff60:
    // 0x24ff60: 0x46004105  abs.s       $f4, $f8
    ctx->pc = 0x24ff60u;
    ctx->f[4] = FPU_ABS_S(ctx->f[8]);
label_24ff64:
    // 0x24ff64: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x24ff64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_24ff68:
    // 0x24ff68: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24ff68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_24ff6c:
    // 0x24ff6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ff6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ff70:
    // 0x24ff70: 0x46011241  sub.s       $f9, $f2, $f1
    ctx->pc = 0x24ff70u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_24ff74:
    // 0x24ff74: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x24ff74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24ff78:
    // 0x24ff78: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x24ff78u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_24ff7c:
    // 0x24ff7c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ff80:
    // 0x24ff80: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x24ff80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ff84:
    // 0x24ff84: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x24ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_24ff88:
    // 0x24ff88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ff88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ff8c:
    // 0x24ff8c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24ff8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24ff90:
    // 0x24ff90: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24ff90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_24ff94:
    // 0x24ff94: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ff98:
    // 0x24ff98: 0xa24001c8  sb          $zero, 0x1C8($s2)
    ctx->pc = 0x24ff98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 456), (uint8_t)GPR_U32(ctx, 0));
label_24ff9c:
    // 0x24ff9c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x24ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_24ffa0:
    // 0x24ffa0: 0xa24001c9  sb          $zero, 0x1C9($s2)
    ctx->pc = 0x24ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 457), (uint8_t)GPR_U32(ctx, 0));
label_24ffa4:
    // 0x24ffa4: 0xa24001ca  sb          $zero, 0x1CA($s2)
    ctx->pc = 0x24ffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 458), (uint8_t)GPR_U32(ctx, 0));
label_24ffa8:
    // 0x24ffa8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_24ffac:
    if (ctx->pc == 0x24FFACu) {
        ctx->pc = 0x24FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA8u;
        // 0x24ffac: 0xa24001cb  sb          $zero, 0x1CB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 459), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFB0u;
        goto label_24ffb0;
    }
    ctx->pc = 0x24FFA8u;
    {
        const bool branch_taken_0x24ffa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA8u;
        // 0x24ffac: 0xa24001cb  sb          $zero, 0x1CB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 459), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffa8) {
            ctx->pc = 0x24FFC0u;
            goto label_24ffc0;
        }
    }
    ctx->pc = 0x24FFB0u;
label_24ffb0:
    // 0x24ffb0: 0x46081800  add.s       $f0, $f3, $f8
    ctx->pc = 0x24ffb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_24ffb4:
    // 0x24ffb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ffb8:
    // 0x24ffb8: 0x10000021  b           . + 4 + (0x21 << 2)
label_24ffbc:
    if (ctx->pc == 0x24FFBCu) {
        ctx->pc = 0x24FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFB8u;
        // 0x24ffbc: 0xa24201c8  sb          $v0, 0x1C8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 456), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFC0u;
        goto label_24ffc0;
    }
    ctx->pc = 0x24FFB8u;
    {
        const bool branch_taken_0x24ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFB8u;
        // 0x24ffbc: 0xa24201c8  sb          $v0, 0x1C8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 456), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffb8) {
            ctx->pc = 0x250040u;
            goto label_250040;
        }
    }
    ctx->pc = 0x24FFC0u;
label_24ffc0:
    // 0x24ffc0: 0x46003005  abs.s       $f0, $f6
    ctx->pc = 0x24ffc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[6]);
label_24ffc4:
    // 0x24ffc4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x24ffc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ffc8:
    // 0x24ffc8: 0x0  nop
    ctx->pc = 0x24ffc8u;
    // NOP
label_24ffcc:
    // 0x24ffcc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24ffd0:
    if (ctx->pc == 0x24FFD0u) {
        ctx->pc = 0x24FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFCCu;
        // 0x24ffd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFD4u;
        goto label_24ffd4;
    }
    ctx->pc = 0x24FFCCu;
    {
        const bool branch_taken_0x24ffcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFCCu;
        // 0x24ffd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffcc) {
            ctx->pc = 0x24FFE0u;
            goto label_24ffe0;
        }
    }
    ctx->pc = 0x24FFD4u;
label_24ffd4:
    // 0x24ffd4: 0x46071800  add.s       $f0, $f3, $f7
    ctx->pc = 0x24ffd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_24ffd8:
    // 0x24ffd8: 0x10000019  b           . + 4 + (0x19 << 2)
label_24ffdc:
    if (ctx->pc == 0x24FFDCu) {
        ctx->pc = 0x24FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFD8u;
        // 0x24ffdc: 0xa24201c9  sb          $v0, 0x1C9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 457), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFE0u;
        goto label_24ffe0;
    }
    ctx->pc = 0x24FFD8u;
    {
        const bool branch_taken_0x24ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFD8u;
        // 0x24ffdc: 0xa24201c9  sb          $v0, 0x1C9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 457), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffd8) {
            ctx->pc = 0x250040u;
            goto label_250040;
        }
    }
    ctx->pc = 0x24FFE0u;
label_24ffe0:
    // 0x24ffe0: 0x46004845  abs.s       $f1, $f9
    ctx->pc = 0x24ffe0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[9]);
label_24ffe4:
    // 0x24ffe4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ffe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ffe8:
    // 0x24ffe8: 0x0  nop
    ctx->pc = 0x24ffe8u;
    // NOP
label_24ffec:
    // 0x24ffec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_24fff0:
    if (ctx->pc == 0x24FFF0u) {
        ctx->pc = 0x24FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFECu;
        // 0x24fff0: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFF4u;
        goto label_24fff4;
    }
    ctx->pc = 0x24FFECu;
    {
        const bool branch_taken_0x24ffec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ffec) {
            ctx->pc = 0x24FFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FFECu;
            // 0x24fff0: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FFFCu;
            goto label_24fffc;
        }
    }
    ctx->pc = 0x24FFF4u;
label_24fff4:
    // 0x24fff4: 0x10000012  b           . + 4 + (0x12 << 2)
label_24fff8:
    if (ctx->pc == 0x24FFF8u) {
        ctx->pc = 0x24FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFF4u;
        // 0x24fff8: 0x46061800  add.s       $f0, $f3, $f6 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFFCu;
        goto label_24fffc;
    }
    ctx->pc = 0x24FFF4u;
    {
        const bool branch_taken_0x24fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFF4u;
        // 0x24fff8: 0x46061800  add.s       $f0, $f3, $f6 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fff4) {
            ctx->pc = 0x250040u;
            goto label_250040;
        }
    }
    ctx->pc = 0x24FFFCu;
label_24fffc:
    // 0x24fffc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_250000:
    // 0x250000: 0x0  nop
    ctx->pc = 0x250000u;
    // NOP
label_250004:
    // 0x250004: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_250008:
    if (ctx->pc == 0x250008u) {
        ctx->pc = 0x250008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250004u;
        // 0x250008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25000Cu;
        goto label_25000c;
    }
    ctx->pc = 0x250004u;
    {
        const bool branch_taken_0x250004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250004u;
        // 0x250008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250004) {
            ctx->pc = 0x250028u;
            goto label_250028;
        }
    }
    ctx->pc = 0x25000Cu;
label_25000c:
    // 0x25000c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x25000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_250010:
    // 0x250010: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x250010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_250014:
    // 0x250014: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x250014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_250018:
    // 0x250018: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25001c:
    if (ctx->pc == 0x25001Cu) {
        ctx->pc = 0x25001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250018u;
        // 0x25001c: 0xa24301ca  sb          $v1, 0x1CA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 458), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250020u;
        goto label_250020;
    }
    ctx->pc = 0x250018u;
    {
        const bool branch_taken_0x250018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250018u;
        // 0x25001c: 0xa24301ca  sb          $v1, 0x1CA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 458), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250018) {
            ctx->pc = 0x250044u;
            goto label_250044;
        }
    }
    ctx->pc = 0x250020u;
label_250020:
    // 0x250020: 0x10000007  b           . + 4 + (0x7 << 2)
label_250024:
    if (ctx->pc == 0x250024u) {
        ctx->pc = 0x250024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250020u;
        // 0x250024: 0x46091800  add.s       $f0, $f3, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250028u;
        goto label_250028;
    }
    ctx->pc = 0x250020u;
    {
        const bool branch_taken_0x250020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250020u;
        // 0x250024: 0x46091800  add.s       $f0, $f3, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250020) {
            ctx->pc = 0x250040u;
            goto label_250040;
        }
    }
    ctx->pc = 0x250028u;
label_250028:
    // 0x250028: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x250028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_25002c:
    // 0x25002c: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x25002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_250030:
    // 0x250030: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x250030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_250034:
    // 0x250034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_250038:
    if (ctx->pc == 0x250038u) {
        ctx->pc = 0x250038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250034u;
        // 0x250038: 0xa24301cb  sb          $v1, 0x1CB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 459), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25003Cu;
        goto label_25003c;
    }
    ctx->pc = 0x250034u;
    {
        const bool branch_taken_0x250034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250034u;
        // 0x250038: 0xa24301cb  sb          $v1, 0x1CB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 459), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250034) {
            ctx->pc = 0x250044u;
            goto label_250044;
        }
    }
    ctx->pc = 0x25003Cu;
label_25003c:
    // 0x25003c: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x25003cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_250040:
    // 0x250040: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x250040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_250044:
    // 0x250044: 0x92420110  lbu         $v0, 0x110($s2)
    ctx->pc = 0x250044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 272)));
label_250048:
    // 0x250048: 0x26460120  addiu       $a2, $s2, 0x120
    ctx->pc = 0x250048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_25004c:
    // 0x25004c: 0xa24001c1  sb          $zero, 0x1C1($s2)
    ctx->pc = 0x25004cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 449), (uint8_t)GPR_U32(ctx, 0));
label_250050:
    // 0x250050: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_250054:
    if (ctx->pc == 0x250054u) {
        ctx->pc = 0x250054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250050u;
        // 0x250054: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250058u;
        goto label_250058;
    }
    ctx->pc = 0x250050u;
    {
        const bool branch_taken_0x250050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250050u;
        // 0x250054: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250050) {
            ctx->pc = 0x25011Cu;
            goto label_25011c;
        }
    }
    ctx->pc = 0x250058u;
label_250058:
    // 0x250058: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_25005c:
    // 0x25005c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x25005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_250060:
    // 0x250060: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x250060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_250064:
    // 0x250064: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_250068:
    if (ctx->pc == 0x250068u) {
        ctx->pc = 0x250068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250064u;
        // 0x250068: 0xc44498fc  lwc1        $f4, -0x6704($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25006Cu;
        goto label_25006c;
    }
    ctx->pc = 0x250064u;
    {
        const bool branch_taken_0x250064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x250068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250064u;
        // 0x250068: 0xc44498fc  lwc1        $f4, -0x6704($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250064) {
            ctx->pc = 0x2500A0u;
            goto label_2500a0;
        }
    }
    ctx->pc = 0x25006Cu;
label_25006c:
    // 0x25006c: 0x924201c8  lbu         $v0, 0x1C8($s2)
    ctx->pc = 0x25006cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 456)));
label_250070:
    // 0x250070: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_250074:
    if (ctx->pc == 0x250074u) {
        ctx->pc = 0x250078u;
        goto label_250078;
    }
    ctx->pc = 0x250070u;
    {
        const bool branch_taken_0x250070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250070) {
            ctx->pc = 0x250084u;
            goto label_250084;
        }
    }
    ctx->pc = 0x250078u;
label_250078:
    // 0x250078: 0x924201c9  lbu         $v0, 0x1C9($s2)
    ctx->pc = 0x250078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 457)));
label_25007c:
    // 0x25007c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_250080:
    if (ctx->pc == 0x250080u) {
        ctx->pc = 0x250080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25007Cu;
        // 0x250080: 0x26420120  addiu       $v0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250084u;
        goto label_250084;
    }
    ctx->pc = 0x25007Cu;
    {
        const bool branch_taken_0x25007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25007Cu;
        // 0x250080: 0x26420120  addiu       $v0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25007c) {
            ctx->pc = 0x2500A4u;
            goto label_2500a4;
        }
    }
    ctx->pc = 0x250084u;
label_250084:
    // 0x250084: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_250088:
    if (ctx->pc == 0x250088u) {
        ctx->pc = 0x250088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250084u;
        // 0x250088: 0x26420120  addiu       $v0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25008Cu;
        goto label_25008c;
    }
    ctx->pc = 0x250084u;
    {
        const bool branch_taken_0x250084 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x250088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250084u;
        // 0x250088: 0x26420120  addiu       $v0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250084) {
            ctx->pc = 0x2500A4u;
            goto label_2500a4;
        }
    }
    ctx->pc = 0x25008Cu;
label_25008c:
    // 0x25008c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_250090:
    // 0x250090: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x250090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_250094:
    // 0x250094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250098:
    // 0x250098: 0x0  nop
    ctx->pc = 0x250098u;
    // NOP
label_25009c:
    // 0x25009c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x25009cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2500a0:
    // 0x2500a0: 0x26420120  addiu       $v0, $s2, 0x120
    ctx->pc = 0x2500a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_2500a4:
    // 0x2500a4: 0xc6420120  lwc1        $f2, 0x120($s2)
    ctx->pc = 0x2500a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2500a8:
    // 0x2500a8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2500a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2500ac:
    // 0x2500ac: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x2500acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_2500b0:
    // 0x2500b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2500b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2500b4:
    // 0x2500b4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2500b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2500b8:
    // 0x2500b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2500b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2500bc:
    // 0x2500bc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2500bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2500c0:
    // 0x2500c0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2500c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2500c4:
    // 0x2500c4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2500c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2500c8:
    // 0x2500c8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2500c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2500cc:
    // 0x2500cc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2500ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2500d0:
    // 0x2500d0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2500d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2500d4:
    // 0x2500d4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2500d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2500d8:
    // 0x2500d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2500d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2500dc:
    // 0x2500dc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2500dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2500e0:
    // 0x2500e0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2500e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2500e4:
    // 0x2500e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2500e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2500e8:
    // 0x2500e8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2500e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2500ec:
    // 0x2500ec: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2500ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2500f0:
    // 0x2500f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2500f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2500f4:
    // 0x2500f4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2500f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2500f8:
    // 0x2500f8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2500f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2500fc:
    // 0x2500fc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2500fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250100:
    // 0x250100: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x250100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250104:
    // 0x250104: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x250104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_250108:
    // 0x250108: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x250108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_25010c:
    // 0x25010c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x25010cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_250110:
    // 0x250110: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x250110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_250114:
    // 0x250114: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x250114u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_250118:
    // 0x250118: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x250118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_25011c:
    // 0x25011c: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x25011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_250120:
    // 0x250120: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x250120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_250124:
    // 0x250124: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_250128:
    if (ctx->pc == 0x250128u) {
        ctx->pc = 0x250128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250124u;
        // 0x250128: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25012Cu;
        goto label_25012c;
    }
    ctx->pc = 0x250124u;
    {
        const bool branch_taken_0x250124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250124u;
        // 0x250128: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250124) {
            ctx->pc = 0x250134u;
            goto label_250134;
        }
    }
    ctx->pc = 0x25012Cu;
label_25012c:
    // 0x25012c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_250130:
    if (ctx->pc == 0x250130u) {
        ctx->pc = 0x250130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25012Cu;
        // 0x250130: 0xc6410120  lwc1        $f1, 0x120($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250134u;
        goto label_250134;
    }
    ctx->pc = 0x25012Cu;
    {
        const bool branch_taken_0x25012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25012c) {
            ctx->pc = 0x250130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25012Cu;
            // 0x250130: 0xc6410120  lwc1        $f1, 0x120($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x250154u;
            goto label_250154;
        }
    }
    ctx->pc = 0x250134u;
label_250134:
    // 0x250134: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x250134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250138:
    // 0x250138: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x250138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_25013c:
    // 0x25013c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x25013cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_250140:
    // 0x250140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_250144:
    // 0x250144: 0x0  nop
    ctx->pc = 0x250144u;
    // NOP
label_250148:
    // 0x250148: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x250148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25014c:
    // 0x25014c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_250150:
    // 0x250150: 0xc6410120  lwc1        $f1, 0x120($s2)
    ctx->pc = 0x250150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250154:
    // 0x250154: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x250154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_250158:
    // 0x250158: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x250158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_25015c:
    // 0x25015c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250160:
    // 0x250160: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x250160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_250164:
    // 0x250164: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x250164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250168:
    // 0x250168: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x250168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_25016c:
    // 0x25016c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x25016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250170:
    // 0x250170: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x250170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_250174:
    // 0x250174: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x250174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_250178:
    // 0x250178: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x250178u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25017c:
    // 0x25017c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25017cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_250180:
    // 0x250180: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x250180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_250184:
    // 0x250184: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x250184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_250188:
    // 0x250188: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x250188u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_25018c:
    // 0x25018c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25018cu;
    // VWAITQ (Q already resolved in this runtime)
label_250190:
    // 0x250190: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x250190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_250194:
    // 0x250194: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x250194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_250198:
    // 0x250198: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x250198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25019c:
    // 0x25019c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x25019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2501a0:
    // 0x2501a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2501a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2501a4:
    // 0x2501a4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2501a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2501a8:
    // 0x2501a8: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x2501a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2501ac:
    // 0x2501ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2501acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2501b0:
    // 0x2501b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2501b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2501b4:
    // 0x2501b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2501b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2501b8:
    // 0x2501b8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2501b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2501bc:
    // 0x2501bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2501bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2501c0:
    // 0x2501c0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2501c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2501c4:
    // 0x2501c4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2501c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2501c8:
    // 0x2501c8: 0xc0b1b16  jal         func_2C6C58
label_2501cc:
    if (ctx->pc == 0x2501CCu) {
        ctx->pc = 0x2501CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501C8u;
        // 0x2501cc: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501D0u;
        goto label_2501d0;
    }
    ctx->pc = 0x2501C8u;
    SET_GPR_U32(ctx, 31, 0x2501D0u);
    ctx->pc = 0x2501CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C8u;
    // 0x2501cc: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C58u, 0x2501C8u, 0x2501D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501D0u;
label_2501d0:
    // 0x2501d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2501d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2501d4:
    // 0x2501d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2501d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2501d8:
    // 0x2501d8: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2501d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2501dc:
    // 0x2501dc: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2501dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2501e0:
    // 0x2501e0: 0x40f809  jalr        $v0
label_2501e4:
    if (ctx->pc == 0x2501E4u) {
        ctx->pc = 0x2501E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E0u;
        // 0x2501e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501E8u;
        goto label_2501e8;
    }
    ctx->pc = 0x2501E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2501E8u);
        ctx->pc = 0x2501E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E0u;
        // 0x2501e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2501E0u, 0x2501E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2501E8u;
label_2501e8:
    // 0x2501e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2501e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2501ec:
    // 0x2501ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2501ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2501f0:
    // 0x2501f0: 0xc08d78e  jal         func_235E38
label_2501f4:
    if (ctx->pc == 0x2501F4u) {
        ctx->pc = 0x2501F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F0u;
        // 0x2501f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501F8u;
        goto label_2501f8;
    }
    ctx->pc = 0x2501F0u;
    SET_GPR_U32(ctx, 31, 0x2501F8u);
    ctx->pc = 0x2501F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F0u;
    // 0x2501f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x2501F0u, 0x2501F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501F8u;
label_2501f8:
    // 0x2501f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2501f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2501fc:
    // 0x2501fc: 0xc0767f2  jal         func_1D9FC8
label_250200:
    if (ctx->pc == 0x250200u) {
        ctx->pc = 0x250200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501FCu;
        // 0x250200: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250204u;
        goto label_250204;
    }
    ctx->pc = 0x2501FCu;
    SET_GPR_U32(ctx, 31, 0x250204u);
    ctx->pc = 0x250200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501FCu;
    // 0x250200: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2501FCu, 0x250204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250204u;
label_250204:
    // 0x250204: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250208:
    // 0x250208: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x250208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_25020c:
    // 0x25020c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25020cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250210:
    // 0x250210: 0xac510430  sw          $s1, 0x430($v0)
    ctx->pc = 0x250210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 17));
label_250214:
    // 0x250214: 0xc08fed2  jal         func_23FB48
label_250218:
    if (ctx->pc == 0x250218u) {
        ctx->pc = 0x250218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250214u;
        // 0x250218: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25021Cu;
        goto label_25021c;
    }
    ctx->pc = 0x250214u;
    SET_GPR_U32(ctx, 31, 0x25021Cu);
    ctx->pc = 0x250218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250214u;
    // 0x250218: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x250214u, 0x25021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25021Cu;
label_25021c:
    // 0x25021c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250220:
    // 0x250220: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x250220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_250224:
    // 0x250224: 0xc08fed2  jal         func_23FB48
label_250228:
    if (ctx->pc == 0x250228u) {
        ctx->pc = 0x250228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250224u;
        // 0x250228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25022Cu;
        goto label_25022c;
    }
    ctx->pc = 0x250224u;
    SET_GPR_U32(ctx, 31, 0x25022Cu);
    ctx->pc = 0x250228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250224u;
    // 0x250228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x250224u, 0x25022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25022Cu;
label_25022c:
    // 0x25022c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250230:
    // 0x250230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x250230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250234:
    // 0x250234: 0xc08fed2  jal         func_23FB48
label_250238:
    if (ctx->pc == 0x250238u) {
        ctx->pc = 0x250238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250234u;
        // 0x250238: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25023Cu;
        goto label_25023c;
    }
    ctx->pc = 0x250234u;
    SET_GPR_U32(ctx, 31, 0x25023Cu);
    ctx->pc = 0x250238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250234u;
    // 0x250238: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x250234u, 0x25023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25023Cu;
label_25023c:
    // 0x25023c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250240:
    // 0x250240: 0xac6003a0  sw          $zero, 0x3A0($v1)
    ctx->pc = 0x250240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 928), GPR_U32(ctx, 0));
label_250244:
    // 0x250244: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x250244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250248:
    // 0x250248: 0xac40039c  sw          $zero, 0x39C($v0)
    ctx->pc = 0x250248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 924), GPR_U32(ctx, 0));
label_25024c:
    // 0x25024c: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x25024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_250250:
    // 0x250250: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x250250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_250254:
    // 0x250254: 0x40f809  jalr        $v0
label_250258:
    if (ctx->pc == 0x250258u) {
        ctx->pc = 0x250258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250254u;
        // 0x250258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25025Cu;
        goto label_25025c;
    }
    ctx->pc = 0x250254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25025Cu);
        ctx->pc = 0x250258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250254u;
        // 0x250258: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250254u, 0x25025Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25025Cu;
label_25025c:
    // 0x25025c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25025cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250260:
    // 0x250260: 0xc08dc16  jal         func_237058
label_250264:
    if (ctx->pc == 0x250264u) {
        ctx->pc = 0x250264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250260u;
        // 0x250264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250268u;
        goto label_250268;
    }
    ctx->pc = 0x250260u;
    SET_GPR_U32(ctx, 31, 0x250268u);
    ctx->pc = 0x250264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250260u;
    // 0x250264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x250260u, 0x250268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250268u;
label_250268:
    // 0x250268: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x250268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25026c:
    // 0x25026c: 0xc08fcfa  jal         func_23F3E8
label_250270:
    if (ctx->pc == 0x250270u) {
        ctx->pc = 0x250270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25026Cu;
        // 0x250270: 0x8c850418  lw          $a1, 0x418($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250274u;
        goto label_250274;
    }
    ctx->pc = 0x25026Cu;
    SET_GPR_U32(ctx, 31, 0x250274u);
    ctx->pc = 0x250270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25026Cu;
    // 0x250270: 0x8c850418  lw          $a1, 0x418($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3E8u, 0x25026Cu, 0x250274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250274u;
label_250274:
    // 0x250274: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x250274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250278:
    // 0x250278: 0xc08bd96  jal         func_22F658
label_25027c:
    if (ctx->pc == 0x25027Cu) {
        ctx->pc = 0x25027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250278u;
        // 0x25027c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250280u;
        goto label_250280;
    }
    ctx->pc = 0x250278u;
    SET_GPR_U32(ctx, 31, 0x250280u);
    ctx->pc = 0x25027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250278u;
    // 0x25027c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x250278u, 0x250280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250280u;
label_250280:
    // 0x250280: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x250280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250284:
    // 0x250284: 0xc076826  jal         func_1DA098
label_250288:
    if (ctx->pc == 0x250288u) {
        ctx->pc = 0x250288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250284u;
        // 0x250288: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25028Cu;
        goto label_25028c;
    }
    ctx->pc = 0x250284u;
    SET_GPR_U32(ctx, 31, 0x25028Cu);
    ctx->pc = 0x250288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250284u;
    // 0x250288: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x250284u, 0x25028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25028Cu;
label_25028c:
    // 0x25028c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x25028cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_250290:
    // 0x250290: 0xc076826  jal         func_1DA098
label_250294:
    if (ctx->pc == 0x250294u) {
        ctx->pc = 0x250294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250290u;
        // 0x250294: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250298u;
        goto label_250298;
    }
    ctx->pc = 0x250290u;
    SET_GPR_U32(ctx, 31, 0x250298u);
    ctx->pc = 0x250294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250290u;
    // 0x250294: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x250290u, 0x250298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250298u;
label_250298:
    // 0x250298: 0xae110fd0  sw          $s1, 0xFD0($s0)
    ctx->pc = 0x250298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 17));
label_25029c:
    // 0x25029c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2502a0:
    // 0x2502a0: 0xa29100a8  sb          $s1, 0xA8($s4)
    ctx->pc = 0x2502a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 168), (uint8_t)GPR_U32(ctx, 17));
label_2502a4:
    // 0x2502a4: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x2502a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2502a8:
    // 0x2502a8: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_2502ac:
    if (ctx->pc == 0x2502ACu) {
        ctx->pc = 0x2502ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502A8u;
        // 0x2502ac: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502B0u;
        goto label_2502b0;
    }
    ctx->pc = 0x2502A8u;
    {
        const bool branch_taken_0x2502a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2502ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502A8u;
        // 0x2502ac: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502a8) {
            ctx->pc = 0x250358u;
            goto label_250358;
        }
    }
    ctx->pc = 0x2502B0u;
label_2502b0:
    // 0x2502b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2502b4:
    if (ctx->pc == 0x2502B4u) {
        ctx->pc = 0x2502B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502B0u;
        // 0x2502b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502B8u;
        goto label_2502b8;
    }
    ctx->pc = 0x2502B0u;
    {
        const bool branch_taken_0x2502b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502B0u;
        // 0x2502b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502b0) {
            ctx->pc = 0x2502C8u;
            goto label_2502c8;
        }
    }
    ctx->pc = 0x2502B8u;
label_2502b8:
    // 0x2502b8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2502bc:
    if (ctx->pc == 0x2502BCu) {
        ctx->pc = 0x2502BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502B8u;
        // 0x2502bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502C0u;
        goto label_2502c0;
    }
    ctx->pc = 0x2502B8u;
    {
        const bool branch_taken_0x2502b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2502BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502B8u;
        // 0x2502bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502b8) {
            ctx->pc = 0x2502E4u;
            goto label_2502e4;
        }
    }
    ctx->pc = 0x2502C0u;
label_2502c0:
    // 0x2502c0: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2502c4:
    if (ctx->pc == 0x2502C4u) {
        ctx->pc = 0x2502C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502C0u;
        // 0x2502c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502C8u;
        goto label_2502c8;
    }
    ctx->pc = 0x2502C0u;
    {
        const bool branch_taken_0x2502c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502C0u;
        // 0x2502c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502c0) {
            ctx->pc = 0x2504ECu;
            goto label_2504ec;
        }
    }
    ctx->pc = 0x2502C8u;
label_2502c8:
    // 0x2502c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2502c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2502cc:
    // 0x2502cc: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_2502d0:
    if (ctx->pc == 0x2502D0u) {
        ctx->pc = 0x2502D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502CCu;
        // 0x2502d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502D4u;
        goto label_2502d4;
    }
    ctx->pc = 0x2502CCu;
    {
        const bool branch_taken_0x2502cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2502D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502CCu;
        // 0x2502d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502cc) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x2502D4u;
label_2502d4:
    // 0x2502d4: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
label_2502d8:
    if (ctx->pc == 0x2502D8u) {
        ctx->pc = 0x2502D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502D4u;
        // 0x2502d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502DCu;
        goto label_2502dc;
    }
    ctx->pc = 0x2502D4u;
    {
        const bool branch_taken_0x2502d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2502D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502D4u;
        // 0x2502d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502d4) {
            ctx->pc = 0x250464u;
            goto label_250464;
        }
    }
    ctx->pc = 0x2502DCu;
label_2502dc:
    // 0x2502dc: 0x10000083  b           . + 4 + (0x83 << 2)
label_2502e0:
    if (ctx->pc == 0x2502E0u) {
        ctx->pc = 0x2502E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502DCu;
        // 0x2502e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502E4u;
        goto label_2502e4;
    }
    ctx->pc = 0x2502DCu;
    {
        const bool branch_taken_0x2502dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502DCu;
        // 0x2502e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502dc) {
            ctx->pc = 0x2504ECu;
            goto label_2504ec;
        }
    }
    ctx->pc = 0x2502E4u;
label_2502e4:
    // 0x2502e4: 0x924201c8  lbu         $v0, 0x1C8($s2)
    ctx->pc = 0x2502e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 456)));
label_2502e8:
    // 0x2502e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2502ec:
    if (ctx->pc == 0x2502ECu) {
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502F0u;
        goto label_2502f0;
    }
    ctx->pc = 0x2502E8u;
    {
        const bool branch_taken_0x2502e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502e8) {
            ctx->pc = 0x250310u;
            goto label_250310;
        }
    }
    ctx->pc = 0x2502F0u;
label_2502f0:
    // 0x2502f0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2502f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_2502f4:
    // 0x2502f4: 0xc069712  jal         func_1A5C48
label_2502f8:
    if (ctx->pc == 0x2502F8u) {
        ctx->pc = 0x2502F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502F4u;
        // 0x2502f8: 0x240607ff  addiu       $a2, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2502FCu;
        goto label_2502fc;
    }
    ctx->pc = 0x2502F4u;
    SET_GPR_U32(ctx, 31, 0x2502FCu);
    ctx->pc = 0x2502F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502F4u;
    // 0x2502f8: 0x240607ff  addiu       $a2, $zero, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2502F4u, 0x2502FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502FCu;
label_2502fc:
    // 0x2502fc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2502fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_250300:
    // 0x250300: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x250300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_250304:
    // 0x250304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250308:
    // 0x250308: 0x10000074  b           . + 4 + (0x74 << 2)
label_25030c:
    if (ctx->pc == 0x25030Cu) {
        ctx->pc = 0x25030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250308u;
        // 0x25030c: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250310u;
        goto label_250310;
    }
    ctx->pc = 0x250308u;
    {
        const bool branch_taken_0x250308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250308u;
        // 0x25030c: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250308) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x250310u;
label_250310:
    // 0x250310: 0x924201c9  lbu         $v0, 0x1C9($s2)
    ctx->pc = 0x250310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 457)));
label_250314:
    // 0x250314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_250318:
    if (ctx->pc == 0x250318u) {
        ctx->pc = 0x250318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250314u;
        // 0x250318: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25031Cu;
        goto label_25031c;
    }
    ctx->pc = 0x250314u;
    {
        const bool branch_taken_0x250314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250314u;
        // 0x250318: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250314) {
            ctx->pc = 0x250338u;
            goto label_250338;
        }
    }
    ctx->pc = 0x25031Cu;
label_25031c:
    // 0x25031c: 0xc069712  jal         func_1A5C48
label_250320:
    if (ctx->pc == 0x250320u) {
        ctx->pc = 0x250320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25031Cu;
        // 0x250320: 0x240607fe  addiu       $a2, $zero, 0x7FE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2046));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250324u;
        goto label_250324;
    }
    ctx->pc = 0x25031Cu;
    SET_GPR_U32(ctx, 31, 0x250324u);
    ctx->pc = 0x250320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25031Cu;
    // 0x250320: 0x240607fe  addiu       $a2, $zero, 0x7FE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2046));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x25031Cu, 0x250324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250324u;
label_250324:
    // 0x250324: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x250324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_250328:
    // 0x250328: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x250328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25032c:
    // 0x25032c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25032cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250330:
    // 0x250330: 0x1000006a  b           . + 4 + (0x6A << 2)
label_250334:
    if (ctx->pc == 0x250334u) {
        ctx->pc = 0x250334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250330u;
        // 0x250334: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250338u;
        goto label_250338;
    }
    ctx->pc = 0x250330u;
    {
        const bool branch_taken_0x250330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250330u;
        // 0x250334: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250330) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x250338u;
label_250338:
    // 0x250338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x250338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25033c:
    // 0x25033c: 0xc069712  jal         func_1A5C48
label_250340:
    if (ctx->pc == 0x250340u) {
        ctx->pc = 0x250340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25033Cu;
        // 0x250340: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250344u;
        goto label_250344;
    }
    ctx->pc = 0x25033Cu;
    SET_GPR_U32(ctx, 31, 0x250344u);
    ctx->pc = 0x250340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25033Cu;
    // 0x250340: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x25033Cu, 0x250344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250344u;
label_250344:
    // 0x250344: 0x3c013fa5  lui         $at, 0x3FA5
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16293 << 16));
label_250348:
    // 0x250348: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x250348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_25034c:
    // 0x25034c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25034cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250350:
    // 0x250350: 0x10000062  b           . + 4 + (0x62 << 2)
label_250354:
    if (ctx->pc == 0x250354u) {
        ctx->pc = 0x250354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250350u;
        // 0x250354: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250358u;
        goto label_250358;
    }
    ctx->pc = 0x250350u;
    {
        const bool branch_taken_0x250350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250350u;
        // 0x250354: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250350) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x250358u;
label_250358:
    // 0x250358: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_25035c:
    if (ctx->pc == 0x25035Cu) {
        ctx->pc = 0x25035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250358u;
        // 0x25035c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250360u;
        goto label_250360;
    }
    ctx->pc = 0x250358u;
    {
        const bool branch_taken_0x250358 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250358u;
        // 0x25035c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250358) {
            ctx->pc = 0x250374u;
            goto label_250374;
        }
    }
    ctx->pc = 0x250360u;
label_250360:
    // 0x250360: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x250360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_250364:
    // 0x250364: 0xc069712  jal         func_1A5C48
label_250368:
    if (ctx->pc == 0x250368u) {
        ctx->pc = 0x250368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250364u;
        // 0x250368: 0x240607f5  addiu       $a2, $zero, 0x7F5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2037));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25036Cu;
        goto label_25036c;
    }
    ctx->pc = 0x250364u;
    SET_GPR_U32(ctx, 31, 0x25036Cu);
    ctx->pc = 0x250368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250364u;
    // 0x250368: 0x240607f5  addiu       $a2, $zero, 0x7F5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x250364u, 0x25036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25036Cu;
label_25036c:
    // 0x25036c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_250370:
    if (ctx->pc == 0x250370u) {
        ctx->pc = 0x250370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25036Cu;
        // 0x250370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250374u;
        goto label_250374;
    }
    ctx->pc = 0x25036Cu;
    {
        const bool branch_taken_0x25036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25036Cu;
        // 0x250370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25036c) {
            ctx->pc = 0x2504E8u;
            goto label_2504e8;
        }
    }
    ctx->pc = 0x250374u;
label_250374:
    // 0x250374: 0x924201c8  lbu         $v0, 0x1C8($s2)
    ctx->pc = 0x250374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 456)));
label_250378:
    // 0x250378: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_25037c:
    if (ctx->pc == 0x25037Cu) {
        ctx->pc = 0x25037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250378u;
        // 0x25037c: 0x924201c9  lbu         $v0, 0x1C9($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 457)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250380u;
        goto label_250380;
    }
    ctx->pc = 0x250378u;
    {
        const bool branch_taken_0x250378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250378) {
            ctx->pc = 0x25037Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250378u;
            // 0x25037c: 0x924201c9  lbu         $v0, 0x1C9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 457)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2503B0u;
            goto label_2503b0;
        }
    }
    ctx->pc = 0x250380u;
label_250380:
    // 0x250380: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_250384:
    if (ctx->pc == 0x250384u) {
        ctx->pc = 0x250384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250380u;
        // 0x250384: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250388u;
        goto label_250388;
    }
    ctx->pc = 0x250380u;
    {
        const bool branch_taken_0x250380 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x250384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250380u;
        // 0x250384: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250380) {
            ctx->pc = 0x25039Cu;
            goto label_25039c;
        }
    }
    ctx->pc = 0x250388u;
label_250388:
    // 0x250388: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x250388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_25038c:
    // 0x25038c: 0xc069712  jal         func_1A5C48
label_250390:
    if (ctx->pc == 0x250390u) {
        ctx->pc = 0x250390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25038Cu;
        // 0x250390: 0x24060804  addiu       $a2, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250394u;
        goto label_250394;
    }
    ctx->pc = 0x25038Cu;
    SET_GPR_U32(ctx, 31, 0x250394u);
    ctx->pc = 0x250390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25038Cu;
    // 0x250390: 0x24060804  addiu       $a2, $zero, 0x804 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x25038Cu, 0x250394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250394u;
label_250394:
    // 0x250394: 0x10000054  b           . + 4 + (0x54 << 2)
label_250398:
    if (ctx->pc == 0x250398u) {
        ctx->pc = 0x250398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250394u;
        // 0x250398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25039Cu;
        goto label_25039c;
    }
    ctx->pc = 0x250394u;
    {
        const bool branch_taken_0x250394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250394u;
        // 0x250398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250394) {
            ctx->pc = 0x2504E8u;
            goto label_2504e8;
        }
    }
    ctx->pc = 0x25039Cu;
label_25039c:
    // 0x25039c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x25039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2503a0:
    // 0x2503a0: 0xc069712  jal         func_1A5C48
label_2503a4:
    if (ctx->pc == 0x2503A4u) {
        ctx->pc = 0x2503A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A0u;
        // 0x2503a4: 0x240607f6  addiu       $a2, $zero, 0x7F6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2038));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503A8u;
        goto label_2503a8;
    }
    ctx->pc = 0x2503A0u;
    SET_GPR_U32(ctx, 31, 0x2503A8u);
    ctx->pc = 0x2503A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503A0u;
    // 0x2503a4: 0x240607f6  addiu       $a2, $zero, 0x7F6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2038));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2503A0u, 0x2503A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503A8u;
label_2503a8:
    // 0x2503a8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2503ac:
    if (ctx->pc == 0x2503ACu) {
        ctx->pc = 0x2503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A8u;
        // 0x2503ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503B0u;
        goto label_2503b0;
    }
    ctx->pc = 0x2503A8u;
    {
        const bool branch_taken_0x2503a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A8u;
        // 0x2503ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503a8) {
            ctx->pc = 0x2504E8u;
            goto label_2504e8;
        }
    }
    ctx->pc = 0x2503B0u;
label_2503b0:
    // 0x2503b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2503b4:
    if (ctx->pc == 0x2503B4u) {
        ctx->pc = 0x2503B8u;
        goto label_2503b8;
    }
    ctx->pc = 0x2503B0u;
    {
        const bool branch_taken_0x2503b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2503b0) {
            ctx->pc = 0x2503E8u;
            goto label_2503e8;
        }
    }
    ctx->pc = 0x2503B8u;
label_2503b8:
    // 0x2503b8: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2503bc:
    if (ctx->pc == 0x2503BCu) {
        ctx->pc = 0x2503BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503B8u;
        // 0x2503bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503C0u;
        goto label_2503c0;
    }
    ctx->pc = 0x2503B8u;
    {
        const bool branch_taken_0x2503b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503B8u;
        // 0x2503bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503b8) {
            ctx->pc = 0x2503D4u;
            goto label_2503d4;
        }
    }
    ctx->pc = 0x2503C0u;
label_2503c0:
    // 0x2503c0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2503c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2503c4:
    // 0x2503c4: 0xc069712  jal         func_1A5C48
label_2503c8:
    if (ctx->pc == 0x2503C8u) {
        ctx->pc = 0x2503C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503C4u;
        // 0x2503c8: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503CCu;
        goto label_2503cc;
    }
    ctx->pc = 0x2503C4u;
    SET_GPR_U32(ctx, 31, 0x2503CCu);
    ctx->pc = 0x2503C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503C4u;
    // 0x2503c8: 0x24060805  addiu       $a2, $zero, 0x805 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2503C4u, 0x2503CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503CCu;
label_2503cc:
    // 0x2503cc: 0x10000046  b           . + 4 + (0x46 << 2)
label_2503d0:
    if (ctx->pc == 0x2503D0u) {
        ctx->pc = 0x2503D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503CCu;
        // 0x2503d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503D4u;
        goto label_2503d4;
    }
    ctx->pc = 0x2503CCu;
    {
        const bool branch_taken_0x2503cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503CCu;
        // 0x2503d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503cc) {
            ctx->pc = 0x2504E8u;
            goto label_2504e8;
        }
    }
    ctx->pc = 0x2503D4u;
label_2503d4:
    // 0x2503d4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2503d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2503d8:
    // 0x2503d8: 0xc069712  jal         func_1A5C48
label_2503dc:
    if (ctx->pc == 0x2503DCu) {
        ctx->pc = 0x2503DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503D8u;
        // 0x2503dc: 0x240607f7  addiu       $a2, $zero, 0x7F7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503E0u;
        goto label_2503e0;
    }
    ctx->pc = 0x2503D8u;
    SET_GPR_U32(ctx, 31, 0x2503E0u);
    ctx->pc = 0x2503DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503D8u;
    // 0x2503dc: 0x240607f7  addiu       $a2, $zero, 0x7F7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2503D8u, 0x2503E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503E0u;
label_2503e0:
    // 0x2503e0: 0x10000041  b           . + 4 + (0x41 << 2)
label_2503e4:
    if (ctx->pc == 0x2503E4u) {
        ctx->pc = 0x2503E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503E0u;
        // 0x2503e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503E8u;
        goto label_2503e8;
    }
    ctx->pc = 0x2503E0u;
    {
        const bool branch_taken_0x2503e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503E0u;
        // 0x2503e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503e0) {
            ctx->pc = 0x2504E8u;
            goto label_2504e8;
        }
    }
    ctx->pc = 0x2503E8u;
label_2503e8:
    // 0x2503e8: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2503ec:
    if (ctx->pc == 0x2503ECu) {
        ctx->pc = 0x2503ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503E8u;
        // 0x2503ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503F0u;
        goto label_2503f0;
    }
    ctx->pc = 0x2503E8u;
    {
        const bool branch_taken_0x2503e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503E8u;
        // 0x2503ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503e8) {
            ctx->pc = 0x250404u;
            goto label_250404;
        }
    }
    ctx->pc = 0x2503F0u;
label_2503f0:
    // 0x2503f0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2503f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_2503f4:
    // 0x2503f4: 0xc069712  jal         func_1A5C48
label_2503f8:
    if (ctx->pc == 0x2503F8u) {
        ctx->pc = 0x2503F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503F4u;
        // 0x2503f8: 0x24060806  addiu       $a2, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2503FCu;
        goto label_2503fc;
    }
    ctx->pc = 0x2503F4u;
    SET_GPR_U32(ctx, 31, 0x2503FCu);
    ctx->pc = 0x2503F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503F4u;
    // 0x2503f8: 0x24060806  addiu       $a2, $zero, 0x806 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2503F4u, 0x2503FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503FCu;
label_2503fc:
    // 0x2503fc: 0x10000038  b           . + 4 + (0x38 << 2)
label_250400:
    if (ctx->pc == 0x250400u) {
        ctx->pc = 0x250400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503FCu;
        // 0x250400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250404u;
        goto label_250404;
    }
    ctx->pc = 0x2503FCu;
    {
        const bool branch_taken_0x2503fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503FCu;
        // 0x250400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503fc) {
            ctx->pc = 0x2504E0u;
            goto label_2504e0;
        }
    }
    ctx->pc = 0x250404u;
label_250404:
    // 0x250404: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x250404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_250408:
    // 0x250408: 0x10000032  b           . + 4 + (0x32 << 2)
label_25040c:
    if (ctx->pc == 0x25040Cu) {
        ctx->pc = 0x25040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250408u;
        // 0x25040c: 0x240607f8  addiu       $a2, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250410u;
        goto label_250410;
    }
    ctx->pc = 0x250408u;
    {
        const bool branch_taken_0x250408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250408u;
        // 0x25040c: 0x240607f8  addiu       $a2, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250408) {
            ctx->pc = 0x2504D4u;
            goto label_2504d4;
        }
    }
    ctx->pc = 0x250410u;
label_250410:
    // 0x250410: 0x924201ca  lbu         $v0, 0x1CA($s2)
    ctx->pc = 0x250410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 458)));
label_250414:
    // 0x250414: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_250418:
    if (ctx->pc == 0x250418u) {
        ctx->pc = 0x250418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250414u;
        // 0x250418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25041Cu;
        goto label_25041c;
    }
    ctx->pc = 0x250414u;
    {
        const bool branch_taken_0x250414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250414u;
        // 0x250418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250414) {
            ctx->pc = 0x25043Cu;
            goto label_25043c;
        }
    }
    ctx->pc = 0x25041Cu;
label_25041c:
    // 0x25041c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x25041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_250420:
    // 0x250420: 0xc069712  jal         func_1A5C48
label_250424:
    if (ctx->pc == 0x250424u) {
        ctx->pc = 0x250424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250420u;
        // 0x250424: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250428u;
        goto label_250428;
    }
    ctx->pc = 0x250420u;
    SET_GPR_U32(ctx, 31, 0x250428u);
    ctx->pc = 0x250424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250420u;
    // 0x250424: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x250420u, 0x250428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250428u;
label_250428:
    // 0x250428: 0x3c013ff2  lui         $at, 0x3FF2
    ctx->pc = 0x250428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16370 << 16));
label_25042c:
    // 0x25042c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x25042cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_250430:
    // 0x250430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250434:
    // 0x250434: 0x10000029  b           . + 4 + (0x29 << 2)
label_250438:
    if (ctx->pc == 0x250438u) {
        ctx->pc = 0x250438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250434u;
        // 0x250438: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25043Cu;
        goto label_25043c;
    }
    ctx->pc = 0x250434u;
    {
        const bool branch_taken_0x250434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250434u;
        // 0x250438: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250434) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x25043Cu;
label_25043c:
    // 0x25043c: 0x924201cb  lbu         $v0, 0x1CB($s2)
    ctx->pc = 0x25043cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 459)));
label_250440:
    // 0x250440: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_250444:
    if (ctx->pc == 0x250444u) {
        ctx->pc = 0x250444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250440u;
        // 0x250444: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250448u;
        goto label_250448;
    }
    ctx->pc = 0x250440u;
    {
        const bool branch_taken_0x250440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250440u;
        // 0x250444: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250440) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x250448u;
label_250448:
    // 0x250448: 0xc069712  jal         func_1A5C48
label_25044c:
    if (ctx->pc == 0x25044Cu) {
        ctx->pc = 0x25044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250448u;
        // 0x25044c: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250450u;
        goto label_250450;
    }
    ctx->pc = 0x250448u;
    SET_GPR_U32(ctx, 31, 0x250450u);
    ctx->pc = 0x25044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250448u;
    // 0x25044c: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x250448u, 0x250450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250450u;
label_250450:
    // 0x250450: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x250450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_250454:
    // 0x250454: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x250454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_250458:
    // 0x250458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25045c:
    // 0x25045c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_250460:
    if (ctx->pc == 0x250460u) {
        ctx->pc = 0x250460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25045Cu;
        // 0x250460: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250464u;
        goto label_250464;
    }
    ctx->pc = 0x25045Cu;
    {
        const bool branch_taken_0x25045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25045Cu;
        // 0x250460: 0xe64001c4  swc1        $f0, 0x1C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25045c) {
            ctx->pc = 0x2504DCu;
            goto label_2504dc;
        }
    }
    ctx->pc = 0x250464u;
label_250464:
    // 0x250464: 0x924201ca  lbu         $v0, 0x1CA($s2)
    ctx->pc = 0x250464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 458)));
label_250468:
    // 0x250468: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_25046c:
    if (ctx->pc == 0x25046Cu) {
        ctx->pc = 0x25046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250468u;
        // 0x25046c: 0x924201cb  lbu         $v0, 0x1CB($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 459)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250470u;
        goto label_250470;
    }
    ctx->pc = 0x250468u;
    {
        const bool branch_taken_0x250468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250468) {
            ctx->pc = 0x25046Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250468u;
            // 0x25046c: 0x924201cb  lbu         $v0, 0x1CB($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 459)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504A4u;
            goto label_2504a4;
        }
    }
    ctx->pc = 0x250470u;
label_250470:
    // 0x250470: 0x92420130  lbu         $v0, 0x130($s2)
    ctx->pc = 0x250470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
label_250474:
    // 0x250474: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_250478:
    if (ctx->pc == 0x250478u) {
        ctx->pc = 0x250478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250474u;
        // 0x250478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25047Cu;
        goto label_25047c;
    }
    ctx->pc = 0x250474u;
    {
        const bool branch_taken_0x250474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250474u;
        // 0x250478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250474) {
            ctx->pc = 0x250490u;
            goto label_250490;
        }
    }
    ctx->pc = 0x25047Cu;
label_25047c:
    // 0x25047c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x25047cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_250480:
    // 0x250480: 0xc069712  jal         func_1A5C48
label_250484:
    if (ctx->pc == 0x250484u) {
        ctx->pc = 0x250484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250480u;
        // 0x250484: 0x240607f9  addiu       $a2, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250488u;
        goto label_250488;
    }
    ctx->pc = 0x250480u;
    SET_GPR_U32(ctx, 31, 0x250488u);
    ctx->pc = 0x250484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250480u;
    // 0x250484: 0x240607f9  addiu       $a2, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x250480u, 0x250488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250488u;
label_250488:
    // 0x250488: 0x10000015  b           . + 4 + (0x15 << 2)
label_25048c:
    if (ctx->pc == 0x25048Cu) {
        ctx->pc = 0x25048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250488u;
        // 0x25048c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250490u;
        goto label_250490;
    }
    ctx->pc = 0x250488u;
    {
        const bool branch_taken_0x250488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250488u;
        // 0x25048c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250488) {
            ctx->pc = 0x2504E0u;
            goto label_2504e0;
        }
    }
    ctx->pc = 0x250490u;
label_250490:
    // 0x250490: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x250490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_250494:
    // 0x250494: 0xc069712  jal         func_1A5C48
label_250498:
    if (ctx->pc == 0x250498u) {
        ctx->pc = 0x250498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250494u;
        // 0x250498: 0x240607fb  addiu       $a2, $zero, 0x7FB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2043));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25049Cu;
        goto label_25049c;
    }
    ctx->pc = 0x250494u;
    SET_GPR_U32(ctx, 31, 0x25049Cu);
    ctx->pc = 0x250498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250494u;
    // 0x250498: 0x240607fb  addiu       $a2, $zero, 0x7FB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2043));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x250494u, 0x25049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25049Cu;
label_25049c:
    // 0x25049c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2504a0:
    if (ctx->pc == 0x2504A0u) {
        ctx->pc = 0x2504A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25049Cu;
        // 0x2504a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504A4u;
        goto label_2504a4;
    }
    ctx->pc = 0x25049Cu;
    {
        const bool branch_taken_0x25049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25049Cu;
        // 0x2504a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25049c) {
            ctx->pc = 0x2504E0u;
            goto label_2504e0;
        }
    }
    ctx->pc = 0x2504A4u;
label_2504a4:
    // 0x2504a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2504a8:
    if (ctx->pc == 0x2504A8u) {
        ctx->pc = 0x2504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A4u;
        // 0x2504a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504ACu;
        goto label_2504ac;
    }
    ctx->pc = 0x2504A4u;
    {
        const bool branch_taken_0x2504a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A4u;
        // 0x2504a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504a4) {
            ctx->pc = 0x2504E0u;
            goto label_2504e0;
        }
    }
    ctx->pc = 0x2504ACu;
label_2504ac:
    // 0x2504ac: 0x92420130  lbu         $v0, 0x130($s2)
    ctx->pc = 0x2504acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
label_2504b0:
    // 0x2504b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2504b4:
    if (ctx->pc == 0x2504B4u) {
        ctx->pc = 0x2504B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504B0u;
        // 0x2504b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504B8u;
        goto label_2504b8;
    }
    ctx->pc = 0x2504B0u;
    {
        const bool branch_taken_0x2504b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504B0u;
        // 0x2504b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504b0) {
            ctx->pc = 0x2504CCu;
            goto label_2504cc;
        }
    }
    ctx->pc = 0x2504B8u;
label_2504b8:
    // 0x2504b8: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2504b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2504bc:
    // 0x2504bc: 0xc069712  jal         func_1A5C48
label_2504c0:
    if (ctx->pc == 0x2504C0u) {
        ctx->pc = 0x2504C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504BCu;
        // 0x2504c0: 0x240607fa  addiu       $a2, $zero, 0x7FA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2042));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504C4u;
        goto label_2504c4;
    }
    ctx->pc = 0x2504BCu;
    SET_GPR_U32(ctx, 31, 0x2504C4u);
    ctx->pc = 0x2504C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2504BCu;
    // 0x2504c0: 0x240607fa  addiu       $a2, $zero, 0x7FA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2042));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2504BCu, 0x2504C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2504C4u;
label_2504c4:
    // 0x2504c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2504c8:
    if (ctx->pc == 0x2504C8u) {
        ctx->pc = 0x2504C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504C4u;
        // 0x2504c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504CCu;
        goto label_2504cc;
    }
    ctx->pc = 0x2504C4u;
    {
        const bool branch_taken_0x2504c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504C4u;
        // 0x2504c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504c4) {
            ctx->pc = 0x2504E0u;
            goto label_2504e0;
        }
    }
    ctx->pc = 0x2504CCu;
label_2504cc:
    // 0x2504cc: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2504ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2504d0:
    // 0x2504d0: 0x240607fc  addiu       $a2, $zero, 0x7FC
    ctx->pc = 0x2504d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
label_2504d4:
    // 0x2504d4: 0xc069712  jal         func_1A5C48
label_2504d8:
    if (ctx->pc == 0x2504D8u) {
        ctx->pc = 0x2504DCu;
        goto label_2504dc;
    }
    ctx->pc = 0x2504D4u;
    SET_GPR_U32(ctx, 31, 0x2504DCu);
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2504D4u, 0x2504DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2504DCu;
label_2504dc:
    // 0x2504dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2504dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2504e0:
    // 0x2504e0: 0xa24201c1  sb          $v0, 0x1C1($s2)
    ctx->pc = 0x2504e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 449), (uint8_t)GPR_U32(ctx, 2));
label_2504e4:
    // 0x2504e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2504e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2504e8:
    // 0x2504e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2504e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2504ec:
    // 0x2504ec: 0xae620160  sw          $v0, 0x160($s3)
    ctx->pc = 0x2504ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 2));
label_2504f0:
    // 0x2504f0: 0xc06a23e  jal         func_1A88F8
label_2504f4:
    if (ctx->pc == 0x2504F4u) {
        ctx->pc = 0x2504F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504F0u;
        // 0x2504f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504F8u;
        goto label_2504f8;
    }
    ctx->pc = 0x2504F0u;
    SET_GPR_U32(ctx, 31, 0x2504F8u);
    ctx->pc = 0x2504F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2504F0u;
    // 0x2504f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2504F0u, 0x2504F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2504F8u;
label_2504f8:
    // 0x2504f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2504f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2504fc:
    // 0x2504fc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2504fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_250500:
    // 0x250500: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x250500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_250504:
    // 0x250504: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x250504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_250508:
    // 0x250508: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x250508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25050c:
    // 0x25050c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x25050cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_250510:
    // 0x250510: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x250510u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_250514:
    // 0x250514: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x250514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_250518:
    // 0x250518: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x250518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25051c:
    // 0x25051c: 0x3e00008  jr          $ra
label_250520:
    if (ctx->pc == 0x250520u) {
        ctx->pc = 0x250520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25051Cu;
        // 0x250520: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250524u;
        goto label_250524;
    }
    ctx->pc = 0x25051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25051Cu;
        // 0x250520: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250524u;
label_250524:
    // 0x250524: 0x0  nop
    ctx->pc = 0x250524u;
    // NOP
    ctx->pc = 0x250528u;
}
