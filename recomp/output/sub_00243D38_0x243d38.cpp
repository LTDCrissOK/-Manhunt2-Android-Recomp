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

// Function: sub_00243D38
// Address: 0x243d38 - 0x244510
void sub_00243D38_0x243d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243D38_0x243d38");
#endif

    switch (ctx->pc) {
        case 0x243d38u: goto label_243d38;
        case 0x243d3cu: goto label_243d3c;
        case 0x243d40u: goto label_243d40;
        case 0x243d44u: goto label_243d44;
        case 0x243d48u: goto label_243d48;
        case 0x243d4cu: goto label_243d4c;
        case 0x243d50u: goto label_243d50;
        case 0x243d54u: goto label_243d54;
        case 0x243d58u: goto label_243d58;
        case 0x243d5cu: goto label_243d5c;
        case 0x243d60u: goto label_243d60;
        case 0x243d64u: goto label_243d64;
        case 0x243d68u: goto label_243d68;
        case 0x243d6cu: goto label_243d6c;
        case 0x243d70u: goto label_243d70;
        case 0x243d74u: goto label_243d74;
        case 0x243d78u: goto label_243d78;
        case 0x243d7cu: goto label_243d7c;
        case 0x243d80u: goto label_243d80;
        case 0x243d84u: goto label_243d84;
        case 0x243d88u: goto label_243d88;
        case 0x243d8cu: goto label_243d8c;
        case 0x243d90u: goto label_243d90;
        case 0x243d94u: goto label_243d94;
        case 0x243d98u: goto label_243d98;
        case 0x243d9cu: goto label_243d9c;
        case 0x243da0u: goto label_243da0;
        case 0x243da4u: goto label_243da4;
        case 0x243da8u: goto label_243da8;
        case 0x243dacu: goto label_243dac;
        case 0x243db0u: goto label_243db0;
        case 0x243db4u: goto label_243db4;
        case 0x243db8u: goto label_243db8;
        case 0x243dbcu: goto label_243dbc;
        case 0x243dc0u: goto label_243dc0;
        case 0x243dc4u: goto label_243dc4;
        case 0x243dc8u: goto label_243dc8;
        case 0x243dccu: goto label_243dcc;
        case 0x243dd0u: goto label_243dd0;
        case 0x243dd4u: goto label_243dd4;
        case 0x243dd8u: goto label_243dd8;
        case 0x243ddcu: goto label_243ddc;
        case 0x243de0u: goto label_243de0;
        case 0x243de4u: goto label_243de4;
        case 0x243de8u: goto label_243de8;
        case 0x243decu: goto label_243dec;
        case 0x243df0u: goto label_243df0;
        case 0x243df4u: goto label_243df4;
        case 0x243df8u: goto label_243df8;
        case 0x243dfcu: goto label_243dfc;
        case 0x243e00u: goto label_243e00;
        case 0x243e04u: goto label_243e04;
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        case 0x243e80u: goto label_243e80;
        case 0x243e84u: goto label_243e84;
        case 0x243e88u: goto label_243e88;
        case 0x243e8cu: goto label_243e8c;
        case 0x243e90u: goto label_243e90;
        case 0x243e94u: goto label_243e94;
        case 0x243e98u: goto label_243e98;
        case 0x243e9cu: goto label_243e9c;
        case 0x243ea0u: goto label_243ea0;
        case 0x243ea4u: goto label_243ea4;
        case 0x243ea8u: goto label_243ea8;
        case 0x243eacu: goto label_243eac;
        case 0x243eb0u: goto label_243eb0;
        case 0x243eb4u: goto label_243eb4;
        case 0x243eb8u: goto label_243eb8;
        case 0x243ebcu: goto label_243ebc;
        case 0x243ec0u: goto label_243ec0;
        case 0x243ec4u: goto label_243ec4;
        case 0x243ec8u: goto label_243ec8;
        case 0x243eccu: goto label_243ecc;
        case 0x243ed0u: goto label_243ed0;
        case 0x243ed4u: goto label_243ed4;
        case 0x243ed8u: goto label_243ed8;
        case 0x243edcu: goto label_243edc;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ee4u: goto label_243ee4;
        case 0x243ee8u: goto label_243ee8;
        case 0x243eecu: goto label_243eec;
        case 0x243ef0u: goto label_243ef0;
        case 0x243ef4u: goto label_243ef4;
        case 0x243ef8u: goto label_243ef8;
        case 0x243efcu: goto label_243efc;
        case 0x243f00u: goto label_243f00;
        case 0x243f04u: goto label_243f04;
        case 0x243f08u: goto label_243f08;
        case 0x243f0cu: goto label_243f0c;
        case 0x243f10u: goto label_243f10;
        case 0x243f14u: goto label_243f14;
        case 0x243f18u: goto label_243f18;
        case 0x243f1cu: goto label_243f1c;
        case 0x243f20u: goto label_243f20;
        case 0x243f24u: goto label_243f24;
        case 0x243f28u: goto label_243f28;
        case 0x243f2cu: goto label_243f2c;
        case 0x243f30u: goto label_243f30;
        case 0x243f34u: goto label_243f34;
        case 0x243f38u: goto label_243f38;
        case 0x243f3cu: goto label_243f3c;
        case 0x243f40u: goto label_243f40;
        case 0x243f44u: goto label_243f44;
        case 0x243f48u: goto label_243f48;
        case 0x243f4cu: goto label_243f4c;
        case 0x243f50u: goto label_243f50;
        case 0x243f54u: goto label_243f54;
        case 0x243f58u: goto label_243f58;
        case 0x243f5cu: goto label_243f5c;
        case 0x243f60u: goto label_243f60;
        case 0x243f64u: goto label_243f64;
        case 0x243f68u: goto label_243f68;
        case 0x243f6cu: goto label_243f6c;
        case 0x243f70u: goto label_243f70;
        case 0x243f74u: goto label_243f74;
        case 0x243f78u: goto label_243f78;
        case 0x243f7cu: goto label_243f7c;
        case 0x243f80u: goto label_243f80;
        case 0x243f84u: goto label_243f84;
        case 0x243f88u: goto label_243f88;
        case 0x243f8cu: goto label_243f8c;
        case 0x243f90u: goto label_243f90;
        case 0x243f94u: goto label_243f94;
        case 0x243f98u: goto label_243f98;
        case 0x243f9cu: goto label_243f9c;
        case 0x243fa0u: goto label_243fa0;
        case 0x243fa4u: goto label_243fa4;
        case 0x243fa8u: goto label_243fa8;
        case 0x243facu: goto label_243fac;
        case 0x243fb0u: goto label_243fb0;
        case 0x243fb4u: goto label_243fb4;
        case 0x243fb8u: goto label_243fb8;
        case 0x243fbcu: goto label_243fbc;
        case 0x243fc0u: goto label_243fc0;
        case 0x243fc4u: goto label_243fc4;
        case 0x243fc8u: goto label_243fc8;
        case 0x243fccu: goto label_243fcc;
        case 0x243fd0u: goto label_243fd0;
        case 0x243fd4u: goto label_243fd4;
        case 0x243fd8u: goto label_243fd8;
        case 0x243fdcu: goto label_243fdc;
        case 0x243fe0u: goto label_243fe0;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fe8u: goto label_243fe8;
        case 0x243fecu: goto label_243fec;
        case 0x243ff0u: goto label_243ff0;
        case 0x243ff4u: goto label_243ff4;
        case 0x243ff8u: goto label_243ff8;
        case 0x243ffcu: goto label_243ffc;
        case 0x244000u: goto label_244000;
        case 0x244004u: goto label_244004;
        case 0x244008u: goto label_244008;
        case 0x24400cu: goto label_24400c;
        case 0x244010u: goto label_244010;
        case 0x244014u: goto label_244014;
        case 0x244018u: goto label_244018;
        case 0x24401cu: goto label_24401c;
        case 0x244020u: goto label_244020;
        case 0x244024u: goto label_244024;
        case 0x244028u: goto label_244028;
        case 0x24402cu: goto label_24402c;
        case 0x244030u: goto label_244030;
        case 0x244034u: goto label_244034;
        case 0x244038u: goto label_244038;
        case 0x24403cu: goto label_24403c;
        case 0x244040u: goto label_244040;
        case 0x244044u: goto label_244044;
        case 0x244048u: goto label_244048;
        case 0x24404cu: goto label_24404c;
        case 0x244050u: goto label_244050;
        case 0x244054u: goto label_244054;
        case 0x244058u: goto label_244058;
        case 0x24405cu: goto label_24405c;
        case 0x244060u: goto label_244060;
        case 0x244064u: goto label_244064;
        case 0x244068u: goto label_244068;
        case 0x24406cu: goto label_24406c;
        case 0x244070u: goto label_244070;
        case 0x244074u: goto label_244074;
        case 0x244078u: goto label_244078;
        case 0x24407cu: goto label_24407c;
        case 0x244080u: goto label_244080;
        case 0x244084u: goto label_244084;
        case 0x244088u: goto label_244088;
        case 0x24408cu: goto label_24408c;
        case 0x244090u: goto label_244090;
        case 0x244094u: goto label_244094;
        case 0x244098u: goto label_244098;
        case 0x24409cu: goto label_24409c;
        case 0x2440a0u: goto label_2440a0;
        case 0x2440a4u: goto label_2440a4;
        case 0x2440a8u: goto label_2440a8;
        case 0x2440acu: goto label_2440ac;
        case 0x2440b0u: goto label_2440b0;
        case 0x2440b4u: goto label_2440b4;
        case 0x2440b8u: goto label_2440b8;
        case 0x2440bcu: goto label_2440bc;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440c4u: goto label_2440c4;
        case 0x2440c8u: goto label_2440c8;
        case 0x2440ccu: goto label_2440cc;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440d4u: goto label_2440d4;
        case 0x2440d8u: goto label_2440d8;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440e0u: goto label_2440e0;
        case 0x2440e4u: goto label_2440e4;
        case 0x2440e8u: goto label_2440e8;
        case 0x2440ecu: goto label_2440ec;
        case 0x2440f0u: goto label_2440f0;
        case 0x2440f4u: goto label_2440f4;
        case 0x2440f8u: goto label_2440f8;
        case 0x2440fcu: goto label_2440fc;
        case 0x244100u: goto label_244100;
        case 0x244104u: goto label_244104;
        case 0x244108u: goto label_244108;
        case 0x24410cu: goto label_24410c;
        case 0x244110u: goto label_244110;
        case 0x244114u: goto label_244114;
        case 0x244118u: goto label_244118;
        case 0x24411cu: goto label_24411c;
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        case 0x244218u: goto label_244218;
        case 0x24421cu: goto label_24421c;
        case 0x244220u: goto label_244220;
        case 0x244224u: goto label_244224;
        case 0x244228u: goto label_244228;
        case 0x24422cu: goto label_24422c;
        case 0x244230u: goto label_244230;
        case 0x244234u: goto label_244234;
        case 0x244238u: goto label_244238;
        case 0x24423cu: goto label_24423c;
        case 0x244240u: goto label_244240;
        case 0x244244u: goto label_244244;
        case 0x244248u: goto label_244248;
        case 0x24424cu: goto label_24424c;
        case 0x244250u: goto label_244250;
        case 0x244254u: goto label_244254;
        case 0x244258u: goto label_244258;
        case 0x24425cu: goto label_24425c;
        case 0x244260u: goto label_244260;
        case 0x244264u: goto label_244264;
        case 0x244268u: goto label_244268;
        case 0x24426cu: goto label_24426c;
        case 0x244270u: goto label_244270;
        case 0x244274u: goto label_244274;
        case 0x244278u: goto label_244278;
        case 0x24427cu: goto label_24427c;
        case 0x244280u: goto label_244280;
        case 0x244284u: goto label_244284;
        case 0x244288u: goto label_244288;
        case 0x24428cu: goto label_24428c;
        case 0x244290u: goto label_244290;
        case 0x244294u: goto label_244294;
        case 0x244298u: goto label_244298;
        case 0x24429cu: goto label_24429c;
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        case 0x2442bcu: goto label_2442bc;
        case 0x2442c0u: goto label_2442c0;
        case 0x2442c4u: goto label_2442c4;
        case 0x2442c8u: goto label_2442c8;
        case 0x2442ccu: goto label_2442cc;
        case 0x2442d0u: goto label_2442d0;
        case 0x2442d4u: goto label_2442d4;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442e0u: goto label_2442e0;
        case 0x2442e4u: goto label_2442e4;
        case 0x2442e8u: goto label_2442e8;
        case 0x2442ecu: goto label_2442ec;
        case 0x2442f0u: goto label_2442f0;
        case 0x2442f4u: goto label_2442f4;
        case 0x2442f8u: goto label_2442f8;
        case 0x2442fcu: goto label_2442fc;
        case 0x244300u: goto label_244300;
        case 0x244304u: goto label_244304;
        case 0x244308u: goto label_244308;
        case 0x24430cu: goto label_24430c;
        case 0x244310u: goto label_244310;
        case 0x244314u: goto label_244314;
        case 0x244318u: goto label_244318;
        case 0x24431cu: goto label_24431c;
        case 0x244320u: goto label_244320;
        case 0x244324u: goto label_244324;
        case 0x244328u: goto label_244328;
        case 0x24432cu: goto label_24432c;
        case 0x244330u: goto label_244330;
        case 0x244334u: goto label_244334;
        case 0x244338u: goto label_244338;
        case 0x24433cu: goto label_24433c;
        case 0x244340u: goto label_244340;
        case 0x244344u: goto label_244344;
        case 0x244348u: goto label_244348;
        case 0x24434cu: goto label_24434c;
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        case 0x244374u: goto label_244374;
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        default: break;
    }

    ctx->pc = 0x243d38u;

label_243d38:
    // 0x243d38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x243d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_243d3c:
    // 0x243d3c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x243d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_243d40:
    // 0x243d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x243d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243d44:
    // 0x243d44: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x243d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_243d48:
    // 0x243d48: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x243d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_243d4c:
    // 0x243d4c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x243d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_243d50:
    // 0x243d50: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x243d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_243d54:
    // 0x243d54: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x243d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_243d58:
    // 0x243d58: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x243d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_243d5c:
    // 0x243d5c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x243d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_243d60:
    // 0x243d60: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x243d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_243d64:
    // 0x243d64: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x243d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_243d68:
    // 0x243d68: 0xc0899bc  jal         func_2266F0
label_243d6c:
    if (ctx->pc == 0x243D6Cu) {
        ctx->pc = 0x243D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D68u;
        // 0x243d6c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D70u;
        goto label_243d70;
    }
    ctx->pc = 0x243D68u;
    SET_GPR_U32(ctx, 31, 0x243D70u);
    ctx->pc = 0x243D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D68u;
    // 0x243d6c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x243D68u, 0x243D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D70u;
label_243d70:
    // 0x243d70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x243d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243d74:
    // 0x243d74: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x243d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
label_243d78:
    // 0x243d78: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x243d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_243d7c:
    // 0x243d7c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_243d80:
    if (ctx->pc == 0x243D80u) {
        ctx->pc = 0x243D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D7Cu;
        // 0x243d80: 0x8e420338  lw          $v0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D84u;
        goto label_243d84;
    }
    ctx->pc = 0x243D7Cu;
    {
        const bool branch_taken_0x243d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243d7c) {
            ctx->pc = 0x243D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243D7Cu;
            // 0x243d80: 0x8e420338  lw          $v0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243D94u;
            goto label_243d94;
        }
    }
    ctx->pc = 0x243D84u;
label_243d84:
    // 0x243d84: 0xc09414a  jal         func_250528
label_243d88:
    if (ctx->pc == 0x243D88u) {
        ctx->pc = 0x243D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D84u;
        // 0x243d88: 0x264407a0  addiu       $a0, $s2, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D8Cu;
        goto label_243d8c;
    }
    ctx->pc = 0x243D84u;
    SET_GPR_U32(ctx, 31, 0x243D8Cu);
    ctx->pc = 0x243D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D84u;
    // 0x243d88: 0x264407a0  addiu       $a0, $s2, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250528u, 0x243D84u, 0x243D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D8Cu;
label_243d8c:
    // 0x243d8c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_243d90:
    if (ctx->pc == 0x243D90u) {
        ctx->pc = 0x243D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D8Cu;
        // 0x243d90: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D94u;
        goto label_243d94;
    }
    ctx->pc = 0x243D8Cu;
    {
        const bool branch_taken_0x243d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D8Cu;
        // 0x243d90: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d8c) {
            ctx->pc = 0x2444DCu;
            goto label_2444dc;
        }
    }
    ctx->pc = 0x243D94u;
label_243d94:
    // 0x243d94: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x243d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_243d98:
    // 0x243d98: 0x24a56c80  addiu       $a1, $a1, 0x6C80
    ctx->pc = 0x243d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27776));
label_243d9c:
    // 0x243d9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x243d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243da0:
    // 0x243da0: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x243da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_243da4:
    // 0x243da4: 0xc073fde  jal         func_1CFF78
label_243da8:
    if (ctx->pc == 0x243DA8u) {
        ctx->pc = 0x243DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DA4u;
        // 0x243da8: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DACu;
        goto label_243dac;
    }
    ctx->pc = 0x243DA4u;
    SET_GPR_U32(ctx, 31, 0x243DACu);
    ctx->pc = 0x243DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DA4u;
    // 0x243da8: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x243DA4u, 0x243DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DACu;
label_243dac:
    // 0x243dac: 0x8fd70274  lw          $s7, 0x274($fp)
    ctx->pc = 0x243dacu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 628)));
label_243db0:
    // 0x243db0: 0x12e001c9  beqz        $s7, . + 4 + (0x1C9 << 2)
label_243db4:
    if (ctx->pc == 0x243DB4u) {
        ctx->pc = 0x243DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB0u;
        // 0x243db4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DB8u;
        goto label_243db8;
    }
    ctx->pc = 0x243DB0u;
    {
        const bool branch_taken_0x243db0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB0u;
        // 0x243db4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243db0) {
            ctx->pc = 0x2444D8u;
            goto label_2444d8;
        }
    }
    ctx->pc = 0x243DB8u;
label_243db8:
    // 0x243db8: 0xc0d8de2  jal         func_363788
label_243dbc:
    if (ctx->pc == 0x243DBCu) {
        ctx->pc = 0x243DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB8u;
        // 0x243dbc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DC0u;
        goto label_243dc0;
    }
    ctx->pc = 0x243DB8u;
    SET_GPR_U32(ctx, 31, 0x243DC0u);
    ctx->pc = 0x243DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DB8u;
    // 0x243dbc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x243DB8u, 0x243DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DC0u;
label_243dc0:
    // 0x243dc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_243dc4:
    if (ctx->pc == 0x243DC4u) {
        ctx->pc = 0x243DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DC0u;
        // 0x243dc4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DC8u;
        goto label_243dc8;
    }
    ctx->pc = 0x243DC0u;
    {
        const bool branch_taken_0x243dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243dc0) {
            ctx->pc = 0x243DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243DC0u;
            // 0x243dc4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243DDCu;
            goto label_243ddc;
        }
    }
    ctx->pc = 0x243DC8u;
label_243dc8:
    // 0x243dc8: 0xc0d8de2  jal         func_363788
label_243dcc:
    if (ctx->pc == 0x243DCCu) {
        ctx->pc = 0x243DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DC8u;
        // 0x243dcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DD0u;
        goto label_243dd0;
    }
    ctx->pc = 0x243DC8u;
    SET_GPR_U32(ctx, 31, 0x243DD0u);
    ctx->pc = 0x243DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DC8u;
    // 0x243dcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x243DC8u, 0x243DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DD0u;
label_243dd0:
    // 0x243dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243dd4:
    // 0x243dd4: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_243dd8:
    if (ctx->pc == 0x243DD8u) {
        ctx->pc = 0x243DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DD4u;
        // 0x243dd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DDCu;
        goto label_243ddc;
    }
    ctx->pc = 0x243DD4u;
    {
        const bool branch_taken_0x243dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x243dd4) {
            ctx->pc = 0x243DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243DD4u;
            // 0x243dd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243DDCu;
            goto label_243ddc;
        }
    }
    ctx->pc = 0x243DDCu;
label_243ddc:
    // 0x243ddc: 0x120001be  beqz        $s0, . + 4 + (0x1BE << 2)
label_243de0:
    if (ctx->pc == 0x243DE0u) {
        ctx->pc = 0x243DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DDCu;
        // 0x243de0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DE4u;
        goto label_243de4;
    }
    ctx->pc = 0x243DDCu;
    {
        const bool branch_taken_0x243ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DDCu;
        // 0x243de0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ddc) {
            ctx->pc = 0x2444D8u;
            goto label_2444d8;
        }
    }
    ctx->pc = 0x243DE4u;
label_243de4:
    // 0x243de4: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x243de4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_243de8:
    // 0x243de8: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x243de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_243dec:
    // 0x243dec: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x243decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_243df0:
    // 0x243df0: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x243df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_243df4:
    // 0x243df4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x243df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_243df8:
    // 0x243df8: 0xc06c2ac  jal         func_1B0AB0
label_243dfc:
    if (ctx->pc == 0x243DFCu) {
        ctx->pc = 0x243DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF8u;
        // 0x243dfc: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E00u;
        goto label_243e00;
    }
    ctx->pc = 0x243DF8u;
    SET_GPR_U32(ctx, 31, 0x243E00u);
    ctx->pc = 0x243DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DF8u;
    // 0x243dfc: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AB0u, 0x243DF8u, 0x243E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E00u;
label_243e00:
    // 0x243e00: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_243e04:
    // 0x243e04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x243e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243e08:
    // 0x243e08: 0xc0ac816  jal         func_2B2058
label_243e0c:
    if (ctx->pc == 0x243E0Cu) {
        ctx->pc = 0x243E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E08u;
        // 0x243e0c: 0x26244dd0  addiu       $a0, $s1, 0x4DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E10u;
        goto label_243e10;
    }
    ctx->pc = 0x243E08u;
    SET_GPR_U32(ctx, 31, 0x243E10u);
    ctx->pc = 0x243E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E08u;
    // 0x243e0c: 0x26244dd0  addiu       $a0, $s1, 0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x243E08u, 0x243E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E10u;
label_243e10:
    // 0x243e10: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x243e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e14:
    // 0x243e14: 0x0  nop
    ctx->pc = 0x243e14u;
    // NOP
label_243e18:
    // 0x243e18: 0x4502009d  bc1fl       . + 4 + (0x9D << 2)
label_243e1c:
    if (ctx->pc == 0x243E1Cu) {
        ctx->pc = 0x243E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E18u;
        // 0x243e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E20u;
        goto label_243e20;
    }
    ctx->pc = 0x243E18u;
    {
        const bool branch_taken_0x243e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243e18) {
            ctx->pc = 0x243E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E18u;
            // 0x243e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244090u;
            goto label_244090;
        }
    }
    ctx->pc = 0x243E20u;
label_243e20:
    // 0x243e20: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x243e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_243e24:
    // 0x243e24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x243e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_243e28:
    // 0x243e28: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
label_243e2c:
    if (ctx->pc == 0x243E2Cu) {
        ctx->pc = 0x243E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E28u;
        // 0x243e2c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E30u;
        goto label_243e30;
    }
    ctx->pc = 0x243E28u;
    {
        const bool branch_taken_0x243e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243e28) {
            ctx->pc = 0x243E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E28u;
            // 0x243e2c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F90u;
            goto label_243f90;
        }
    }
    ctx->pc = 0x243E30u;
label_243e30:
    // 0x243e30: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x243e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_243e34:
    // 0x243e34: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x243e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_243e38:
    // 0x243e38: 0x40f809  jalr        $v0
label_243e3c:
    if (ctx->pc == 0x243E3Cu) {
        ctx->pc = 0x243E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E38u;
        // 0x243e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E40u;
        goto label_243e40;
    }
    ctx->pc = 0x243E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243E40u);
        ctx->pc = 0x243E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E38u;
        // 0x243e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243E38u, 0x243E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243E40u;
label_243e40:
    // 0x243e40: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_243e44:
    if (ctx->pc == 0x243E44u) {
        ctx->pc = 0x243E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E40u;
        // 0x243e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E48u;
        goto label_243e48;
    }
    ctx->pc = 0x243E40u;
    {
        const bool branch_taken_0x243e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e40) {
            ctx->pc = 0x243E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E40u;
            // 0x243e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F7Cu;
            goto label_243f7c;
        }
    }
    ctx->pc = 0x243E48u;
label_243e48:
    // 0x243e48: 0x8ee20058  lw          $v0, 0x58($s7)
    ctx->pc = 0x243e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 88)));
label_243e4c:
    // 0x243e4c: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_243e50:
    if (ctx->pc == 0x243E50u) {
        ctx->pc = 0x243E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E4Cu;
        // 0x243e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E54u;
        goto label_243e54;
    }
    ctx->pc = 0x243E4Cu;
    {
        const bool branch_taken_0x243e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e4c) {
            ctx->pc = 0x243E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E4Cu;
            // 0x243e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F7Cu;
            goto label_243f7c;
        }
    }
    ctx->pc = 0x243E54u;
label_243e54:
    // 0x243e54: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x243e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_243e58:
    // 0x243e58: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x243e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_243e5c:
    // 0x243e5c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_243e60:
    if (ctx->pc == 0x243E60u) {
        ctx->pc = 0x243E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E5Cu;
        // 0x243e60: 0x8e620230  lw          $v0, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E64u;
        goto label_243e64;
    }
    ctx->pc = 0x243E5Cu;
    {
        const bool branch_taken_0x243e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243e5c) {
            ctx->pc = 0x243E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E5Cu;
            // 0x243e60: 0x8e620230  lw          $v0, 0x230($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EF4u;
            goto label_243ef4;
        }
    }
    ctx->pc = 0x243E64u;
label_243e64:
    // 0x243e64: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x243e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_243e68:
    // 0x243e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e6c:
    // 0x243e6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x243e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243e70:
    // 0x243e70: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x243e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_243e74:
    // 0x243e74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_243e78:
    if (ctx->pc == 0x243E78u) {
        ctx->pc = 0x243E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E74u;
        // 0x243e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E7Cu;
        goto label_243e7c;
    }
    ctx->pc = 0x243E74u;
    {
        const bool branch_taken_0x243e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E74u;
        // 0x243e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e74) {
            ctx->pc = 0x243E84u;
            goto label_243e84;
        }
    }
    ctx->pc = 0x243E7Cu;
label_243e7c:
    // 0x243e7c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x243e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_243e80:
    // 0x243e80: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x243e80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_243e84:
    // 0x243e84: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
label_243e88:
    if (ctx->pc == 0x243E88u) {
        ctx->pc = 0x243E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E84u;
        // 0x243e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E8Cu;
        goto label_243e8c;
    }
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E84u;
            // 0x243e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EC4u;
            goto label_243ec4;
        }
    }
    ctx->pc = 0x243E8Cu;
label_243e8c:
    // 0x243e8c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_243e90:
    // 0x243e90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_243e94:
    if (ctx->pc == 0x243E94u) {
        ctx->pc = 0x243E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E90u;
        // 0x243e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E98u;
        goto label_243e98;
    }
    ctx->pc = 0x243E90u;
    {
        const bool branch_taken_0x243e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E90u;
        // 0x243e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e90) {
            ctx->pc = 0x243EA0u;
            goto label_243ea0;
        }
    }
    ctx->pc = 0x243E98u;
label_243e98:
    // 0x243e98: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_243e9c:
    // 0x243e9c: 0x28450083  slti        $a1, $v0, 0x83
    ctx->pc = 0x243e9cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_243ea0:
    // 0x243ea0: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
label_243ea4:
    if (ctx->pc == 0x243EA4u) {
        ctx->pc = 0x243EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA0u;
        // 0x243ea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EA8u;
        goto label_243ea8;
    }
    ctx->pc = 0x243EA0u;
    {
        const bool branch_taken_0x243ea0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ea0) {
            ctx->pc = 0x243EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243EA0u;
            // 0x243ea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EC4u;
            goto label_243ec4;
        }
    }
    ctx->pc = 0x243EA8u;
label_243ea8:
    // 0x243ea8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x243ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_243eac:
    // 0x243eac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_243eb0:
    if (ctx->pc == 0x243EB0u) {
        ctx->pc = 0x243EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EACu;
        // 0x243eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EB4u;
        goto label_243eb4;
    }
    ctx->pc = 0x243EACu;
    {
        const bool branch_taken_0x243eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EACu;
        // 0x243eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eac) {
            ctx->pc = 0x243EBCu;
            goto label_243ebc;
        }
    }
    ctx->pc = 0x243EB4u;
label_243eb4:
    // 0x243eb4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x243eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_243eb8:
    // 0x243eb8: 0x28450097  slti        $a1, $v0, 0x97
    ctx->pc = 0x243eb8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_243ebc:
    // 0x243ebc: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
label_243ec0:
    if (ctx->pc == 0x243EC0u) {
        ctx->pc = 0x243EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EBCu;
        // 0x243ec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EC4u;
        goto label_243ec4;
    }
    ctx->pc = 0x243EBCu;
    {
        const bool branch_taken_0x243ebc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ebc) {
            ctx->pc = 0x243EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243EBCu;
            // 0x243ec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EC4u;
            goto label_243ec4;
        }
    }
    ctx->pc = 0x243EC4u;
label_243ec4:
    // 0x243ec4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_243ec8:
    if (ctx->pc == 0x243EC8u) {
        ctx->pc = 0x243EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC4u;
        // 0x243ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ECCu;
        goto label_243ecc;
    }
    ctx->pc = 0x243EC4u;
    {
        const bool branch_taken_0x243ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC4u;
        // 0x243ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ec4) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243ECCu;
label_243ecc:
    // 0x243ecc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_243ed0:
    // 0x243ed0: 0xc0ae6b8  jal         func_2B9AE0
label_243ed4:
    if (ctx->pc == 0x243ED4u) {
        ctx->pc = 0x243ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED0u;
        // 0x243ed4: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ED8u;
        goto label_243ed8;
    }
    ctx->pc = 0x243ED0u;
    SET_GPR_U32(ctx, 31, 0x243ED8u);
    ctx->pc = 0x243ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243ED0u;
    // 0x243ed4: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x243ED0u, 0x243ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ED8u;
label_243ed8:
    // 0x243ed8: 0x10000006  b           . + 4 + (0x6 << 2)
label_243edc:
    if (ctx->pc == 0x243EDCu) {
        ctx->pc = 0x243EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED8u;
        // 0x243edc: 0x8e620230  lw          $v0, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EE0u;
        goto label_243ee0;
    }
    ctx->pc = 0x243ED8u;
    {
        const bool branch_taken_0x243ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED8u;
        // 0x243edc: 0x8e620230  lw          $v0, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ed8) {
            ctx->pc = 0x243EF4u;
            goto label_243ef4;
        }
    }
    ctx->pc = 0x243EE0u;
label_243ee0:
    // 0x243ee0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x243ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_243ee4:
    // 0x243ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243ee8:
    // 0x243ee8: 0xc0ae6b8  jal         func_2B9AE0
label_243eec:
    if (ctx->pc == 0x243EECu) {
        ctx->pc = 0x243EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EE8u;
        // 0x243eec: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EF0u;
        goto label_243ef0;
    }
    ctx->pc = 0x243EE8u;
    SET_GPR_U32(ctx, 31, 0x243EF0u);
    ctx->pc = 0x243EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EE8u;
    // 0x243eec: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x243EE8u, 0x243EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EF0u;
label_243ef0:
    // 0x243ef0: 0x8e620230  lw          $v0, 0x230($s3)
    ctx->pc = 0x243ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_243ef4:
    // 0x243ef4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x243ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_243ef8:
    // 0x243ef8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_243efc:
    if (ctx->pc == 0x243EFCu) {
        ctx->pc = 0x243EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EF8u;
        // 0x243efc: 0x2403008e  addiu       $v1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F00u;
        goto label_243f00;
    }
    ctx->pc = 0x243EF8u;
    {
        const bool branch_taken_0x243ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EF8u;
        // 0x243efc: 0x2403008e  addiu       $v1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ef8) {
            ctx->pc = 0x243F78u;
            goto label_243f78;
        }
    }
    ctx->pc = 0x243F00u;
label_243f00:
    // 0x243f00: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x243f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_243f04:
    // 0x243f04: 0x8c440580  lw          $a0, 0x580($v0)
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
label_243f08:
    // 0x243f08: 0x5083001c  beql        $a0, $v1, . + 4 + (0x1C << 2)
label_243f0c:
    if (ctx->pc == 0x243F0Cu) {
        ctx->pc = 0x243F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F08u;
        // 0x243f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F10u;
        goto label_243f10;
    }
    ctx->pc = 0x243F08u;
    {
        const bool branch_taken_0x243f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x243f08) {
            ctx->pc = 0x243F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243F08u;
            // 0x243f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F7Cu;
            goto label_243f7c;
        }
    }
    ctx->pc = 0x243F10u;
label_243f10:
    // 0x243f10: 0xc097c12  jal         func_25F048
label_243f14:
    if (ctx->pc == 0x243F14u) {
        ctx->pc = 0x243F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F10u;
        // 0x243f14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F18u;
        goto label_243f18;
    }
    ctx->pc = 0x243F10u;
    SET_GPR_U32(ctx, 31, 0x243F18u);
    ctx->pc = 0x243F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F10u;
    // 0x243f14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F048u, 0x243F10u, 0x243F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F18u;
label_243f18:
    // 0x243f18: 0xc085d2a  jal         func_2174A8
label_243f1c:
    if (ctx->pc == 0x243F1Cu) {
        ctx->pc = 0x243F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F18u;
        // 0x243f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F20u;
        goto label_243f20;
    }
    ctx->pc = 0x243F18u;
    SET_GPR_U32(ctx, 31, 0x243F20u);
    ctx->pc = 0x243F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F18u;
    // 0x243f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x243F18u, 0x243F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F20u;
label_243f20:
    // 0x243f20: 0xc083072  jal         func_20C1C8
label_243f24:
    if (ctx->pc == 0x243F24u) {
        ctx->pc = 0x243F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F20u;
        // 0x243f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F28u;
        goto label_243f28;
    }
    ctx->pc = 0x243F20u;
    SET_GPR_U32(ctx, 31, 0x243F28u);
    ctx->pc = 0x243F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F20u;
    // 0x243f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x243F20u, 0x243F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F28u;
label_243f28:
    // 0x243f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243f2c:
    // 0x243f2c: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x243f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_243f30:
    // 0x243f30: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x243f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_243f34:
    // 0x243f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_243f38:
    // 0x243f38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_243f3c:
    // 0x243f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_243f40:
    // 0x243f40: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_243f44:
    if (ctx->pc == 0x243F44u) {
        ctx->pc = 0x243F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F40u;
        // 0x243f44: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F48u;
        goto label_243f48;
    }
    ctx->pc = 0x243F40u;
    {
        const bool branch_taken_0x243f40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F40u;
        // 0x243f44: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f40) {
            ctx->pc = 0x243F5Cu;
            goto label_243f5c;
        }
    }
    ctx->pc = 0x243F48u;
label_243f48:
    // 0x243f48: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x243f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_243f4c:
    // 0x243f4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x243f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_243f50:
    // 0x243f50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_243f54:
    // 0x243f54: 0x40f809  jalr        $v0
label_243f58:
    if (ctx->pc == 0x243F58u) {
        ctx->pc = 0x243F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F54u;
        // 0x243f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F5Cu;
        goto label_243f5c;
    }
    ctx->pc = 0x243F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243F5Cu);
        ctx->pc = 0x243F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F54u;
        // 0x243f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F54u, 0x243F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243F5Cu;
label_243f5c:
    // 0x243f5c: 0xae120234  sw          $s2, 0x234($s0)
    ctx->pc = 0x243f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 18));
label_243f60:
    // 0x243f60: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x243f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_243f64:
    // 0x243f64: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x243f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_243f68:
    // 0x243f68: 0x60f809  jalr        $v1
label_243f6c:
    if (ctx->pc == 0x243F6Cu) {
        ctx->pc = 0x243F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F68u;
        // 0x243f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F70u;
        goto label_243f70;
    }
    ctx->pc = 0x243F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x243F70u);
        ctx->pc = 0x243F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F68u;
        // 0x243f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F68u, 0x243F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243F70u;
label_243f70:
    // 0x243f70: 0xc0899bc  jal         func_2266F0
label_243f74:
    if (ctx->pc == 0x243F74u) {
        ctx->pc = 0x243F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F70u;
        // 0x243f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F78u;
        goto label_243f78;
    }
    ctx->pc = 0x243F70u;
    SET_GPR_U32(ctx, 31, 0x243F78u);
    ctx->pc = 0x243F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F70u;
    // 0x243f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x243F70u, 0x243F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F78u;
label_243f78:
    // 0x243f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243f7c:
    // 0x243f7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x243f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243f80:
    // 0x243f80: 0xc08fed2  jal         func_23FB48
label_243f84:
    if (ctx->pc == 0x243F84u) {
        ctx->pc = 0x243F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F80u;
        // 0x243f84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F88u;
        goto label_243f88;
    }
    ctx->pc = 0x243F80u;
    SET_GPR_U32(ctx, 31, 0x243F88u);
    ctx->pc = 0x243F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F80u;
    // 0x243f84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x243F80u, 0x243F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F88u;
label_243f88:
    // 0x243f88: 0x10000045  b           . + 4 + (0x45 << 2)
label_243f8c:
    if (ctx->pc == 0x243F8Cu) {
        ctx->pc = 0x243F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F88u;
        // 0x243f8c: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F90u;
        goto label_243f90;
    }
    ctx->pc = 0x243F88u;
    {
        const bool branch_taken_0x243f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F88u;
        // 0x243f8c: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f88) {
            ctx->pc = 0x2440A0u;
            goto label_2440a0;
        }
    }
    ctx->pc = 0x243F90u;
label_243f90:
    // 0x243f90: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x243f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_243f94:
    // 0x243f94: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_243f98:
    if (ctx->pc == 0x243F98u) {
        ctx->pc = 0x243F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F94u;
        // 0x243f98: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F9Cu;
        goto label_243f9c;
    }
    ctx->pc = 0x243F94u;
    {
        const bool branch_taken_0x243f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243f94) {
            ctx->pc = 0x243F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243F94u;
            // 0x243f98: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2440A0u;
            goto label_2440a0;
        }
    }
    ctx->pc = 0x243F9Cu;
label_243f9c:
    // 0x243f9c: 0x8ee2007c  lw          $v0, 0x7C($s7)
    ctx->pc = 0x243f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 124)));
label_243fa0:
    // 0x243fa0: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_243fa4:
    if (ctx->pc == 0x243FA4u) {
        ctx->pc = 0x243FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FA0u;
        // 0x243fa4: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FA8u;
        goto label_243fa8;
    }
    ctx->pc = 0x243FA0u;
    {
        const bool branch_taken_0x243fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243fa0) {
            ctx->pc = 0x243FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243FA0u;
            // 0x243fa4: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2440A0u;
            goto label_2440a0;
        }
    }
    ctx->pc = 0x243FA8u;
label_243fa8:
    // 0x243fa8: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_243fac:
    // 0x243fac: 0x8e7100b8  lw          $s1, 0xB8($s3)
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_243fb0:
    // 0x243fb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243fb4:
    // 0x243fb4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x243fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243fb8:
    // 0x243fb8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x243fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_243fbc:
    // 0x243fbc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x243fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_243fc0:
    // 0x243fc0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x243fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fc4:
    // 0x243fc4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x243fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_243fc8:
    // 0x243fc8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x243fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243fcc:
    // 0x243fcc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x243fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_243fd0:
    // 0x243fd0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x243fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fd4:
    // 0x243fd4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x243fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_243fd8:
    // 0x243fd8: 0x86220698  lh          $v0, 0x698($s1)
    ctx->pc = 0x243fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1688)));
label_243fdc:
    // 0x243fdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_243fe0:
    if (ctx->pc == 0x243FE0u) {
        ctx->pc = 0x243FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FDCu;
        // 0x243fe0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FE4u;
        goto label_243fe4;
    }
    ctx->pc = 0x243FDCu;
    {
        const bool branch_taken_0x243fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FDCu;
        // 0x243fe0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fdc) {
            ctx->pc = 0x24400Cu;
            goto label_24400c;
        }
    }
    ctx->pc = 0x243FE4u;
label_243fe4:
    // 0x243fe4: 0x8e250694  lw          $a1, 0x694($s1)
    ctx->pc = 0x243fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
label_243fe8:
    // 0x243fe8: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x243fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_243fec:
    // 0x243fec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x243fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_243ff0:
    // 0x243ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x243ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243ff4:
    // 0x243ff4: 0xc0b0a34  jal         func_2C28D0
label_243ff8:
    if (ctx->pc == 0x243FF8u) {
        ctx->pc = 0x243FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FF4u;
        // 0x243ff8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FFCu;
        goto label_243ffc;
    }
    ctx->pc = 0x243FF4u;
    SET_GPR_U32(ctx, 31, 0x243FFCu);
    ctx->pc = 0x243FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FF4u;
    // 0x243ff8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28D0u, 0x243FF4u, 0x243FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FFCu;
label_243ffc:
    // 0x243ffc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_244000:
    if (ctx->pc == 0x244000u) {
        ctx->pc = 0x244000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FFCu;
        // 0x244000: 0x862206a0  lh          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244004u;
        goto label_244004;
    }
    ctx->pc = 0x243FFCu;
    {
        const bool branch_taken_0x243ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ffc) {
            ctx->pc = 0x244000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243FFCu;
            // 0x244000: 0x862206a0  lh          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244010u;
            goto label_244010;
        }
    }
    ctx->pc = 0x244004u;
label_244004:
    // 0x244004: 0xc0b0ef2  jal         func_2C3BC8
label_244008:
    if (ctx->pc == 0x244008u) {
        ctx->pc = 0x244008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244004u;
        // 0x244008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24400Cu;
        goto label_24400c;
    }
    ctx->pc = 0x244004u;
    SET_GPR_U32(ctx, 31, 0x24400Cu);
    ctx->pc = 0x244008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244004u;
    // 0x244008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x244004u, 0x24400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24400Cu;
label_24400c:
    // 0x24400c: 0x862206a0  lh          $v0, 0x6A0($s1)
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1696)));
label_244010:
    // 0x244010: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_244014:
    if (ctx->pc == 0x244014u) {
        ctx->pc = 0x244014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244010u;
        // 0x244014: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244018u;
        goto label_244018;
    }
    ctx->pc = 0x244010u;
    {
        const bool branch_taken_0x244010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244010u;
        // 0x244014: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244010) {
            ctx->pc = 0x244070u;
            goto label_244070;
        }
    }
    ctx->pc = 0x244018u;
label_244018:
    // 0x244018: 0x3c16004a  lui         $s6, 0x4A
    ctx->pc = 0x244018u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)74 << 16));
label_24401c:
    // 0x24401c: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x24401cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
label_244020:
    // 0x244020: 0x3c14004a  lui         $s4, 0x4A
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)74 << 16));
label_244024:
    // 0x244024: 0x26c49c38  addiu       $a0, $s6, -0x63C8
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941752));
label_244028:
    // 0x244028: 0xc080cd0  jal         func_203340
label_24402c:
    if (ctx->pc == 0x24402Cu) {
        ctx->pc = 0x24402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244028u;
        // 0x24402c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244030u;
        goto label_244030;
    }
    ctx->pc = 0x244028u;
    SET_GPR_U32(ctx, 31, 0x244030u);
    ctx->pc = 0x24402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244028u;
    // 0x24402c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203340u, 0x244028u, 0x244030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244030u;
label_244030:
    // 0x244030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244034:
    // 0x244034: 0xc0f0a8a  jal         func_3C2A28
label_244038:
    if (ctx->pc == 0x244038u) {
        ctx->pc = 0x244038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244034u;
        // 0x244038: 0x26a552e0  addiu       $a1, $s5, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 21216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24403Cu;
        goto label_24403c;
    }
    ctx->pc = 0x244034u;
    SET_GPR_U32(ctx, 31, 0x24403Cu);
    ctx->pc = 0x244038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244034u;
    // 0x244038: 0x26a552e0  addiu       $a1, $s5, 0x52E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 21216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x244034u, 0x24403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24403Cu;
label_24403c:
    // 0x24403c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_244040:
    if (ctx->pc == 0x244040u) {
        ctx->pc = 0x244040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24403Cu;
        // 0x244040: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244044u;
        goto label_244044;
    }
    ctx->pc = 0x24403Cu;
    {
        const bool branch_taken_0x24403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24403c) {
            ctx->pc = 0x244040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24403Cu;
            // 0x244040: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244064u;
            goto label_244064;
        }
    }
    ctx->pc = 0x244044u;
label_244044:
    // 0x244044: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x244044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_244048:
    // 0x244048: 0x26849b10  addiu       $a0, $s4, -0x64F0
    ctx->pc = 0x244048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941456));
label_24404c:
    // 0x24404c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24404cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244050:
    // 0x244050: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244054:
    // 0x244054: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244058:
    // 0x244058: 0xc07f662  jal         func_1FD988
label_24405c:
    if (ctx->pc == 0x24405Cu) {
        ctx->pc = 0x24405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244058u;
        // 0x24405c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244060u;
        goto label_244060;
    }
    ctx->pc = 0x244058u;
    SET_GPR_U32(ctx, 31, 0x244060u);
    ctx->pc = 0x24405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244058u;
    // 0x24405c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x244058u, 0x244060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244060u;
label_244060:
    // 0x244060: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x244060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_244064:
    // 0x244064: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x244064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_244068:
    // 0x244068: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_24406c:
    if (ctx->pc == 0x24406Cu) {
        ctx->pc = 0x24406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244068u;
        // 0x24406c: 0x26c49c38  addiu       $a0, $s6, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244070u;
        goto label_244070;
    }
    ctx->pc = 0x244068u;
    {
        const bool branch_taken_0x244068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244068u;
        // 0x24406c: 0x26c49c38  addiu       $a0, $s6, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244068) {
            ctx->pc = 0x244028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244028;
        }
    }
    ctx->pc = 0x244070u;
label_244070:
    // 0x244070: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_244074:
    // 0x244074: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244078:
    // 0x244078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24407c:
    // 0x24407c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_244080:
    // 0x244080: 0x40f809  jalr        $v0
label_244084:
    if (ctx->pc == 0x244084u) {
        ctx->pc = 0x244084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244080u;
        // 0x244084: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244088u;
        goto label_244088;
    }
    ctx->pc = 0x244080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244088u);
        ctx->pc = 0x244084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244080u;
        // 0x244084: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244080u, 0x244088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244088u;
label_244088:
    // 0x244088: 0x10000005  b           . + 4 + (0x5 << 2)
label_24408c:
    if (ctx->pc == 0x24408Cu) {
        ctx->pc = 0x24408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244088u;
        // 0x24408c: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244090u;
        goto label_244090;
    }
    ctx->pc = 0x244088u;
    {
        const bool branch_taken_0x244088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244088u;
        // 0x24408c: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244088) {
            ctx->pc = 0x2440A0u;
            goto label_2440a0;
        }
    }
    ctx->pc = 0x244090u;
label_244090:
    // 0x244090: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244094:
    // 0x244094: 0xc08fed2  jal         func_23FB48
label_244098:
    if (ctx->pc == 0x244098u) {
        ctx->pc = 0x244098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244094u;
        // 0x244098: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24409Cu;
        goto label_24409c;
    }
    ctx->pc = 0x244094u;
    SET_GPR_U32(ctx, 31, 0x24409Cu);
    ctx->pc = 0x244098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244094u;
    // 0x244098: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244094u, 0x24409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24409Cu;
label_24409c:
    // 0x24409c: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2440a0:
    // 0x2440a0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2440a4:
    // 0x2440a4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2440a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2440a8:
    // 0x2440a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2440a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2440ac:
    // 0x2440ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2440b0:
    if (ctx->pc == 0x2440B0u) {
        ctx->pc = 0x2440B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440ACu;
        // 0x2440b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440B4u;
        goto label_2440b4;
    }
    ctx->pc = 0x2440ACu;
    {
        const bool branch_taken_0x2440ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2440B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440ACu;
        // 0x2440b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440ac) {
            ctx->pc = 0x2440E8u;
            goto label_2440e8;
        }
    }
    ctx->pc = 0x2440B4u;
label_2440b4:
    // 0x2440b4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2440b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2440b8:
    // 0x2440b8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2440bc:
    if (ctx->pc == 0x2440BCu) {
        ctx->pc = 0x2440BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440B8u;
        // 0x2440bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440C0u;
        goto label_2440c0;
    }
    ctx->pc = 0x2440B8u;
    {
        const bool branch_taken_0x2440b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2440b8) {
            ctx->pc = 0x2440BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2440B8u;
            // 0x2440bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2440ECu;
            goto label_2440ec;
        }
    }
    ctx->pc = 0x2440C0u;
label_2440c0:
    // 0x2440c0: 0xc0924a8  jal         func_2492A0
label_2440c4:
    if (ctx->pc == 0x2440C4u) {
        ctx->pc = 0x2440C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440C0u;
        // 0x2440c4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440C8u;
        goto label_2440c8;
    }
    ctx->pc = 0x2440C0u;
    SET_GPR_U32(ctx, 31, 0x2440C8u);
    ctx->pc = 0x2440C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440C0u;
    // 0x2440c4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2440C0u, 0x2440C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440C8u;
label_2440c8:
    // 0x2440c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2440cc:
    if (ctx->pc == 0x2440CCu) {
        ctx->pc = 0x2440CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440C8u;
        // 0x2440cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440D0u;
        goto label_2440d0;
    }
    ctx->pc = 0x2440C8u;
    {
        const bool branch_taken_0x2440c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2440c8) {
            ctx->pc = 0x2440CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2440C8u;
            // 0x2440cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2440ECu;
            goto label_2440ec;
        }
    }
    ctx->pc = 0x2440D0u;
label_2440d0:
    // 0x2440d0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2440d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2440d4:
    // 0x2440d4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2440d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2440d8:
    // 0x2440d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2440dc:
    if (ctx->pc == 0x2440DCu) {
        ctx->pc = 0x2440DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440D8u;
        // 0x2440dc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440E0u;
        goto label_2440e0;
    }
    ctx->pc = 0x2440D8u;
    {
        const bool branch_taken_0x2440d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2440DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440D8u;
        // 0x2440dc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440d8) {
            ctx->pc = 0x2440E8u;
            goto label_2440e8;
        }
    }
    ctx->pc = 0x2440E0u;
label_2440e0:
    // 0x2440e0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2440e4:
    if (ctx->pc == 0x2440E4u) {
        ctx->pc = 0x2440E8u;
        goto label_2440e8;
    }
    ctx->pc = 0x2440E0u;
    {
        const bool branch_taken_0x2440e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2440e0) {
            ctx->pc = 0x2440ECu;
            goto label_2440ec;
        }
    }
    ctx->pc = 0x2440E8u;
label_2440e8:
    // 0x2440e8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2440ec:
    // 0x2440ec: 0xc06c16e  jal         func_1B05B8
label_2440f0:
    if (ctx->pc == 0x2440F0u) {
        ctx->pc = 0x2440F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440ECu;
        // 0x2440f0: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440F4u;
        goto label_2440f4;
    }
    ctx->pc = 0x2440ECu;
    SET_GPR_U32(ctx, 31, 0x2440F4u);
    ctx->pc = 0x2440F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440ECu;
    // 0x2440f0: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B05B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05B8u, 0x2440ECu, 0x2440F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440F4u;
label_2440f4:
    // 0x2440f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2440f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2440f8:
    // 0x2440f8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2440f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2440fc:
    // 0x2440fc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2440fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244100:
    // 0x244100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244104:
    // 0x244104: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x244104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_244108:
    // 0x244108: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x244108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_24410c:
    // 0x24410c: 0x24834dd0  addiu       $v1, $a0, 0x4DD0
    ctx->pc = 0x24410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
label_244110:
    // 0x244110: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_244114:
    // 0x244114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_244118:
    // 0x244118: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_24411c:
    if (ctx->pc == 0x24411Cu) {
        ctx->pc = 0x24411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244118u;
        // 0x24411c: 0xc4410070  lwc1        $f1, 0x70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244120u;
        goto label_244120;
    }
    ctx->pc = 0x244118u;
    {
        const bool branch_taken_0x244118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244118u;
        // 0x24411c: 0xc4410070  lwc1        $f1, 0x70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244118) {
            ctx->pc = 0x244154u;
            goto label_244154;
        }
    }
    ctx->pc = 0x244120u;
label_244120:
    // 0x244120: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_244124:
    // 0x244124: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x244124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_244128:
    // 0x244128: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x244128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_24412c:
    // 0x24412c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_244130:
    if (ctx->pc == 0x244130u) {
        ctx->pc = 0x244130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24412Cu;
        // 0x244130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244134u;
        goto label_244134;
    }
    ctx->pc = 0x24412Cu;
    {
        const bool branch_taken_0x24412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x244130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24412Cu;
        // 0x244130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24412c) {
            ctx->pc = 0x244140u;
            goto label_244140;
        }
    }
    ctx->pc = 0x244134u;
label_244134:
    // 0x244134: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_244138:
    // 0x244138: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x244138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_24413c:
    // 0x24413c: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x24413cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_244140:
    // 0x244140: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_244144:
    if (ctx->pc == 0x244144u) {
        ctx->pc = 0x244144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244140u;
        // 0x244144: 0x2403dfff  addiu       $v1, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244148u;
        goto label_244148;
    }
    ctx->pc = 0x244140u;
    {
        const bool branch_taken_0x244140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244140u;
        // 0x244144: 0x2403dfff  addiu       $v1, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244140) {
            ctx->pc = 0x244154u;
            goto label_244154;
        }
    }
    ctx->pc = 0x244148u;
label_244148:
    // 0x244148: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x244148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_24414c:
    // 0x24414c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_244150:
    // 0x244150: 0xae420370  sw          $v0, 0x370($s2)
    ctx->pc = 0x244150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 2));
label_244154:
    // 0x244154: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
label_244158:
    if (ctx->pc == 0x244158u) {
        ctx->pc = 0x24415Cu;
        goto label_24415c;
    }
    ctx->pc = 0x244154u;
    {
        const bool branch_taken_0x244154 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x244154) {
            ctx->pc = 0x2441D4u;
            goto label_2441d4;
        }
    }
    ctx->pc = 0x24415Cu;
label_24415c:
    // 0x24415c: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x24415cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_244160:
    // 0x244160: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x244160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_244164:
    // 0x244164: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x244164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_244168:
    // 0x244168: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x244168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24416c:
    // 0x24416c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_244170:
    if (ctx->pc == 0x244170u) {
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24416Cu;
        // 0x244170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244174u;
        goto label_244174;
    }
    ctx->pc = 0x24416Cu;
    {
        const bool branch_taken_0x24416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24416Cu;
        // 0x244170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24416c) {
            ctx->pc = 0x2441A0u;
            goto label_2441a0;
        }
    }
    ctx->pc = 0x244174u;
label_244174:
    // 0x244174: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_244178:
    // 0x244178: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_24417c:
    if (ctx->pc == 0x24417Cu) {
        ctx->pc = 0x24417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244178u;
        // 0x24417c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244180u;
        goto label_244180;
    }
    ctx->pc = 0x244178u;
    {
        const bool branch_taken_0x244178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244178u;
        // 0x24417c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244178) {
            ctx->pc = 0x2441A0u;
            goto label_2441a0;
        }
    }
    ctx->pc = 0x244180u;
label_244180:
    // 0x244180: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_244184:
    if (ctx->pc == 0x244184u) {
        ctx->pc = 0x244184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244180u;
        // 0x244184: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244188u;
        goto label_244188;
    }
    ctx->pc = 0x244180u;
    {
        const bool branch_taken_0x244180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244180u;
        // 0x244184: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244180) {
            ctx->pc = 0x2441A0u;
            goto label_2441a0;
        }
    }
    ctx->pc = 0x244188u;
label_244188:
    // 0x244188: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_24418c:
    if (ctx->pc == 0x24418Cu) {
        ctx->pc = 0x24418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244188u;
        // 0x24418c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244190u;
        goto label_244190;
    }
    ctx->pc = 0x244188u;
    {
        const bool branch_taken_0x244188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244188u;
        // 0x24418c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244188) {
            ctx->pc = 0x2441A0u;
            goto label_2441a0;
        }
    }
    ctx->pc = 0x244190u;
label_244190:
    // 0x244190: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_244194:
    if (ctx->pc == 0x244194u) {
        ctx->pc = 0x244194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244190u;
        // 0x244194: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244198u;
        goto label_244198;
    }
    ctx->pc = 0x244190u;
    {
        const bool branch_taken_0x244190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244190u;
        // 0x244194: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244190) {
            ctx->pc = 0x2441A0u;
            goto label_2441a0;
        }
    }
    ctx->pc = 0x244198u;
label_244198:
    // 0x244198: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24419c:
    if (ctx->pc == 0x24419Cu) {
        ctx->pc = 0x2441A0u;
        goto label_2441a0;
    }
    ctx->pc = 0x244198u;
    {
        const bool branch_taken_0x244198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244198) {
            ctx->pc = 0x2441A4u;
            goto label_2441a4;
        }
    }
    ctx->pc = 0x2441A0u;
label_2441a0:
    // 0x2441a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2441a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2441a4:
    // 0x2441a4: 0x54a00051  bnel        $a1, $zero, . + 4 + (0x51 << 2)
label_2441a8:
    if (ctx->pc == 0x2441A8u) {
        ctx->pc = 0x2441A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441A4u;
        // 0x2441a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441ACu;
        goto label_2441ac;
    }
    ctx->pc = 0x2441A4u;
    {
        const bool branch_taken_0x2441a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2441a4) {
            ctx->pc = 0x2441A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441A4u;
            // 0x2441a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x2441ACu;
label_2441ac:
    // 0x2441ac: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x2441acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2441b0:
    // 0x2441b0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2441b4:
    // 0x2441b4: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
label_2441b8:
    if (ctx->pc == 0x2441B8u) {
        ctx->pc = 0x2441B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441B4u;
        // 0x2441b8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441BCu;
        goto label_2441bc;
    }
    ctx->pc = 0x2441B4u;
    {
        const bool branch_taken_0x2441b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2441B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441B4u;
        // 0x2441b8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441b4) {
            ctx->pc = 0x2442E8u;
            goto label_2442e8;
        }
    }
    ctx->pc = 0x2441BCu;
label_2441bc:
    // 0x2441bc: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_2441c0:
    if (ctx->pc == 0x2441C0u) {
        ctx->pc = 0x2441C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441BCu;
        // 0x2441c0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441C4u;
        goto label_2441c4;
    }
    ctx->pc = 0x2441BCu;
    {
        const bool branch_taken_0x2441bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2441C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441BCu;
        // 0x2441c0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441bc) {
            ctx->pc = 0x2442E8u;
            goto label_2442e8;
        }
    }
    ctx->pc = 0x2441C4u;
label_2441c4:
    // 0x2441c4: 0x5462004a  bnel        $v1, $v0, . + 4 + (0x4A << 2)
label_2441c8:
    if (ctx->pc == 0x2441C8u) {
        ctx->pc = 0x2441C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C4u;
        // 0x2441c8: 0x8e430338  lw          $v1, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441CCu;
        goto label_2441cc;
    }
    ctx->pc = 0x2441C4u;
    {
        const bool branch_taken_0x2441c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2441c4) {
            ctx->pc = 0x2441C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441C4u;
            // 0x2441c8: 0x8e430338  lw          $v1, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442F0u;
            goto label_2442f0;
        }
    }
    ctx->pc = 0x2441CCu;
label_2441cc:
    // 0x2441cc: 0x10000047  b           . + 4 + (0x47 << 2)
label_2441d0:
    if (ctx->pc == 0x2441D0u) {
        ctx->pc = 0x2441D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441CCu;
        // 0x2441d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441D4u;
        goto label_2441d4;
    }
    ctx->pc = 0x2441CCu;
    {
        const bool branch_taken_0x2441cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441CCu;
        // 0x2441d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441cc) {
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x2441D4u;
label_2441d4:
    // 0x2441d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2441d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2441d8:
    // 0x2441d8: 0x0  nop
    ctx->pc = 0x2441d8u;
    // NOP
label_2441dc:
    // 0x2441dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2441e0:
    if (ctx->pc == 0x2441E0u) {
        ctx->pc = 0x2441E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441DCu;
        // 0x2441e0: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441E4u;
        goto label_2441e4;
    }
    ctx->pc = 0x2441DCu;
    {
        const bool branch_taken_0x2441dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2441E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441DCu;
        // 0x2441e0: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441dc) {
            ctx->pc = 0x24421Cu;
            goto label_24421c;
        }
    }
    ctx->pc = 0x2441E4u;
label_2441e4:
    // 0x2441e4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2441e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2441e8:
    // 0x2441e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2441e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2441ec:
    // 0x2441ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2441f0:
    if (ctx->pc == 0x2441F0u) {
        ctx->pc = 0x2441F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441ECu;
        // 0x2441f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441F4u;
        goto label_2441f4;
    }
    ctx->pc = 0x2441ECu;
    {
        const bool branch_taken_0x2441ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2441F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441ECu;
        // 0x2441f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441ec) {
            ctx->pc = 0x244200u;
            goto label_244200;
        }
    }
    ctx->pc = 0x2441F4u;
label_2441f4:
    // 0x2441f4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2441f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2441f8:
    // 0x2441f8: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x2441f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_2441fc:
    // 0x2441fc: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x2441fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_244200:
    // 0x244200: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_244204:
    if (ctx->pc == 0x244204u) {
        ctx->pc = 0x244204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244200u;
        // 0x244204: 0x8c830088  lw          $v1, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244208u;
        goto label_244208;
    }
    ctx->pc = 0x244200u;
    {
        const bool branch_taken_0x244200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x244200) {
            ctx->pc = 0x244204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244200u;
            // 0x244204: 0x8c830088  lw          $v1, 0x88($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244220u;
            goto label_244220;
        }
    }
    ctx->pc = 0x244208u;
label_244208:
    // 0x244208: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x244208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_24420c:
    // 0x24420c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24420cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244210:
    // 0x244210: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x244210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_244214:
    // 0x244214: 0x10000035  b           . + 4 + (0x35 << 2)
label_244218:
    if (ctx->pc == 0x244218u) {
        ctx->pc = 0x244218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244214u;
        // 0x244218: 0xae420370  sw          $v0, 0x370($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24421Cu;
        goto label_24421c;
    }
    ctx->pc = 0x244214u;
    {
        const bool branch_taken_0x244214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244214u;
        // 0x244218: 0xae420370  sw          $v0, 0x370($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244214) {
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x24421Cu;
label_24421c:
    // 0x24421c: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_244220:
    // 0x244220: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_244224:
    // 0x244224: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_244228:
    if (ctx->pc == 0x244228u) {
        ctx->pc = 0x244228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244224u;
        // 0x244228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24422Cu;
        goto label_24422c;
    }
    ctx->pc = 0x244224u;
    {
        const bool branch_taken_0x244224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244224u;
        // 0x244228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244224) {
            ctx->pc = 0x244234u;
            goto label_244234;
        }
    }
    ctx->pc = 0x24422Cu;
label_24422c:
    // 0x24422c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x24422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_244230:
    // 0x244230: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x244230u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_244234:
    // 0x244234: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_244238:
    if (ctx->pc == 0x244238u) {
        ctx->pc = 0x244238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244234u;
        // 0x244238: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24423Cu;
        goto label_24423c;
    }
    ctx->pc = 0x244234u;
    {
        const bool branch_taken_0x244234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x244234) {
            ctx->pc = 0x244238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244234u;
            // 0x244238: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244274u;
            goto label_244274;
        }
    }
    ctx->pc = 0x24423Cu;
label_24423c:
    // 0x24423c: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x24423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_244240:
    // 0x244240: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x244240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_244244:
    // 0x244244: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_244248:
    if (ctx->pc == 0x244248u) {
        ctx->pc = 0x244248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244244u;
        // 0x244248: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24424Cu;
        goto label_24424c;
    }
    ctx->pc = 0x244244u;
    {
        const bool branch_taken_0x244244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244244) {
            ctx->pc = 0x244248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244244u;
            // 0x244248: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x24424Cu;
label_24424c:
    // 0x24424c: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x24424cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_244250:
    // 0x244250: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x244250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_244254:
    // 0x244254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244258:
    // 0x244258: 0x0  nop
    ctx->pc = 0x244258u;
    // NOP
label_24425c:
    // 0x24425c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24425cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_244260:
    // 0x244260: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x244260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244264:
    // 0x244264: 0x0  nop
    ctx->pc = 0x244264u;
    // NOP
label_244268:
    // 0x244268: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
label_24426c:
    if (ctx->pc == 0x24426Cu) {
        ctx->pc = 0x24426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244268u;
        // 0x24426c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244270u;
        goto label_244270;
    }
    ctx->pc = 0x244268u;
    {
        const bool branch_taken_0x244268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244268) {
            ctx->pc = 0x24426Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244268u;
            // 0x24426c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x244270u;
label_244270:
    // 0x244270: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x244270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_244274:
    // 0x244274: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x244274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_244278:
    // 0x244278: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x244278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_24427c:
    // 0x24427c: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_244280:
    if (ctx->pc == 0x244280u) {
        ctx->pc = 0x244280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24427Cu;
        // 0x244280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244284u;
        goto label_244284;
    }
    ctx->pc = 0x24427Cu;
    {
        const bool branch_taken_0x24427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x244280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24427Cu;
        // 0x244280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24427c) {
            ctx->pc = 0x24428Cu;
            goto label_24428c;
        }
    }
    ctx->pc = 0x244284u;
label_244284:
    // 0x244284: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x244284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_244288:
    // 0x244288: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x244288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_24428c:
    // 0x24428c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_244290:
    if (ctx->pc == 0x244290u) {
        ctx->pc = 0x244290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24428Cu;
        // 0x244290: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244294u;
        goto label_244294;
    }
    ctx->pc = 0x24428Cu;
    {
        const bool branch_taken_0x24428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24428c) {
            ctx->pc = 0x244290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24428Cu;
            // 0x244290: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x244294u;
label_244294:
    // 0x244294: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x244294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_244298:
    // 0x244298: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_24429c:
    if (ctx->pc == 0x24429Cu) {
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244298u;
        // 0x24429c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442A0u;
        goto label_2442a0;
    }
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244298u;
        // 0x24429c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244298) {
            ctx->pc = 0x2442A8u;
            goto label_2442a8;
        }
    }
    ctx->pc = 0x2442A0u;
label_2442a0:
    // 0x2442a0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2442a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2442a4:
    // 0x2442a4: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x2442a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_2442a8:
    // 0x2442a8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2442ac:
    if (ctx->pc == 0x2442ACu) {
        ctx->pc = 0x2442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442A8u;
        // 0x2442ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442B0u;
        goto label_2442b0;
    }
    ctx->pc = 0x2442A8u;
    {
        const bool branch_taken_0x2442a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2442a8) {
            ctx->pc = 0x2442ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2442A8u;
            // 0x2442ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x2442B0u;
label_2442b0:
    // 0x2442b0: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_2442b4:
    if (ctx->pc == 0x2442B4u) {
        ctx->pc = 0x2442B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442B0u;
        // 0x2442b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442B8u;
        goto label_2442b8;
    }
    ctx->pc = 0x2442B0u;
    {
        const bool branch_taken_0x2442b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2442B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442B0u;
        // 0x2442b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442b0) {
            ctx->pc = 0x2442C4u;
            goto label_2442c4;
        }
    }
    ctx->pc = 0x2442B8u;
label_2442b8:
    // 0x2442b8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2442bc:
    // 0x2442bc: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x2442bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_2442c0:
    // 0x2442c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2442c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2442c4:
    // 0x2442c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2442c8:
    if (ctx->pc == 0x2442C8u) {
        ctx->pc = 0x2442C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442C4u;
        // 0x2442c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442CCu;
        goto label_2442cc;
    }
    ctx->pc = 0x2442C4u;
    {
        const bool branch_taken_0x2442c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2442c4) {
            ctx->pc = 0x2442C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2442C4u;
            // 0x2442c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442ECu;
            goto label_2442ec;
        }
    }
    ctx->pc = 0x2442CCu;
label_2442cc:
    // 0x2442cc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_2442d0:
    if (ctx->pc == 0x2442D0u) {
        ctx->pc = 0x2442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442CCu;
        // 0x2442d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442D4u;
        goto label_2442d4;
    }
    ctx->pc = 0x2442CCu;
    {
        const bool branch_taken_0x2442cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442CCu;
        // 0x2442d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442cc) {
            ctx->pc = 0x2442E0u;
            goto label_2442e0;
        }
    }
    ctx->pc = 0x2442D4u;
label_2442d4:
    // 0x2442d4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2442d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2442d8:
    // 0x2442d8: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x2442d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_2442dc:
    // 0x2442dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2442dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2442e0:
    // 0x2442e0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2442e4:
    if (ctx->pc == 0x2442E4u) {
        ctx->pc = 0x2442E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E0u;
        // 0x2442e4: 0x8e430338  lw          $v1, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442E8u;
        goto label_2442e8;
    }
    ctx->pc = 0x2442E0u;
    {
        const bool branch_taken_0x2442e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442e0) {
            ctx->pc = 0x2442E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2442E0u;
            // 0x2442e4: 0x8e430338  lw          $v1, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442F0u;
            goto label_2442f0;
        }
    }
    ctx->pc = 0x2442E8u;
label_2442e8:
    // 0x2442e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2442e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2442ec:
    // 0x2442ec: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2442ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_2442f0:
    // 0x2442f0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2442f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2442f4:
    // 0x2442f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2442f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2442f8:
    // 0x2442f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2442f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2442fc:
    // 0x2442fc: 0x10e0004b  beqz        $a3, . + 4 + (0x4B << 2)
label_244300:
    if (ctx->pc == 0x244300u) {
        ctx->pc = 0x244300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442FCu;
        // 0x244300: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244304u;
        goto label_244304;
    }
    ctx->pc = 0x2442FCu;
    {
        const bool branch_taken_0x2442fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x244300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442FCu;
        // 0x244300: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442fc) {
            ctx->pc = 0x24442Cu;
            goto label_24442c;
        }
    }
    ctx->pc = 0x244304u;
label_244304:
    // 0x244304: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x244304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_244308:
    // 0x244308: 0x2606042c  addiu       $a2, $s0, 0x42C
    ctx->pc = 0x244308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1068));
label_24430c:
    // 0x24430c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x24430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_244310:
    // 0x244310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_244314:
    // 0x244314: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x244314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_244318:
    // 0x244318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24431c:
    // 0x24431c: 0x10c3002f  beq         $a2, $v1, . + 4 + (0x2F << 2)
label_244320:
    if (ctx->pc == 0x244320u) {
        ctx->pc = 0x244320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24431Cu;
        // 0x244320: 0x28c20491  slti        $v0, $a2, 0x491 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1169) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244324u;
        goto label_244324;
    }
    ctx->pc = 0x24431Cu;
    {
        const bool branch_taken_0x24431c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x244320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24431Cu;
        // 0x244320: 0x28c20491  slti        $v0, $a2, 0x491 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24431c) {
            ctx->pc = 0x2443DCu;
            goto label_2443dc;
        }
    }
    ctx->pc = 0x244324u;
label_244324:
    // 0x244324: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_244328:
    if (ctx->pc == 0x244328u) {
        ctx->pc = 0x244328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244324u;
        // 0x244328: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24432Cu;
        goto label_24432c;
    }
    ctx->pc = 0x244324u;
    {
        const bool branch_taken_0x244324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244324) {
            ctx->pc = 0x244328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244324u;
            // 0x244328: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2443E0u;
            goto label_2443e0;
        }
    }
    ctx->pc = 0x24432Cu;
label_24432c:
    // 0x24432c: 0x28c204cd  slti        $v0, $a2, 0x4CD
    ctx->pc = 0x24432cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1229) ? 1 : 0);
label_244330:
    // 0x244330: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_244334:
    if (ctx->pc == 0x244334u) {
        ctx->pc = 0x244334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244330u;
        // 0x244334: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244338u;
        goto label_244338;
    }
    ctx->pc = 0x244330u;
    {
        const bool branch_taken_0x244330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244330) {
            ctx->pc = 0x244334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244330u;
            // 0x244334: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2443E0u;
            goto label_2443e0;
        }
    }
    ctx->pc = 0x244338u;
label_244338:
    // 0x244338: 0xc069712  jal         func_1A5C48
label_24433c:
    if (ctx->pc == 0x24433Cu) {
        ctx->pc = 0x24433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244338u;
        // 0x24433c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244340u;
        goto label_244340;
    }
    ctx->pc = 0x244338u;
    SET_GPR_U32(ctx, 31, 0x244340u);
    ctx->pc = 0x24433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244338u;
    // 0x24433c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x244338u, 0x244340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244340u;
label_244340:
    // 0x244340: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x244340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_244344:
    // 0x244344: 0xc06a05e  jal         func_1A8178
label_244348:
    if (ctx->pc == 0x244348u) {
        ctx->pc = 0x244348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244344u;
        // 0x244348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24434Cu;
        goto label_24434c;
    }
    ctx->pc = 0x244344u;
    SET_GPR_U32(ctx, 31, 0x24434Cu);
    ctx->pc = 0x244348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244344u;
    // 0x244348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x244344u, 0x24434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24434Cu;
label_24434c:
    // 0x24434c: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x24434cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_244350:
    // 0x244350: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x244350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_244354:
    // 0x244354: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_244358:
    if (ctx->pc == 0x244358u) {
        ctx->pc = 0x244358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244354u;
        // 0x244358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24435Cu;
        goto label_24435c;
    }
    ctx->pc = 0x244354u;
    {
        const bool branch_taken_0x244354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244354u;
        // 0x244358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244354) {
            ctx->pc = 0x244364u;
            goto label_244364;
        }
    }
    ctx->pc = 0x24435Cu;
label_24435c:
    // 0x24435c: 0x10000009  b           . + 4 + (0x9 << 2)
label_244360:
    if (ctx->pc == 0x244360u) {
        ctx->pc = 0x244360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24435Cu;
        // 0x244360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244364u;
        goto label_244364;
    }
    ctx->pc = 0x24435Cu;
    {
        const bool branch_taken_0x24435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24435Cu;
        // 0x244360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24435c) {
            ctx->pc = 0x244384u;
            goto label_244384;
        }
    }
    ctx->pc = 0x244364u;
label_244364:
    // 0x244364: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x244364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_244368:
    // 0x244368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24436c:
    // 0x24436c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_244370:
    if (ctx->pc == 0x244370u) {
        ctx->pc = 0x244370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24436Cu;
        // 0x244370: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244374u;
        goto label_244374;
    }
    ctx->pc = 0x24436Cu;
    {
        const bool branch_taken_0x24436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24436Cu;
        // 0x244370: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24436c) {
            ctx->pc = 0x24435Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24435c;
        }
    }
    ctx->pc = 0x244374u;
label_244374:
    // 0x244374: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x244374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_244378:
    // 0x244378: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24437c:
    if (ctx->pc == 0x24437Cu) {
        ctx->pc = 0x24437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244378u;
        // 0x24437c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244380u;
        goto label_244380;
    }
    ctx->pc = 0x244378u;
    {
        const bool branch_taken_0x244378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244378u;
        // 0x24437c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244378) {
            ctx->pc = 0x244368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244368;
        }
    }
    ctx->pc = 0x244380u;
label_244380:
    // 0x244380: 0x8ca401e8  lw          $a0, 0x1E8($a1)
    ctx->pc = 0x244380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_244384:
    // 0x244384: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x244384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_244388:
    // 0x244388: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x244388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_24438c:
    // 0x24438c: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_244390:
    if (ctx->pc == 0x244390u) {
        ctx->pc = 0x244390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24438Cu;
        // 0x244390: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244394u;
        goto label_244394;
    }
    ctx->pc = 0x24438Cu;
    {
        const bool branch_taken_0x24438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24438c) {
            ctx->pc = 0x244390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24438Cu;
            // 0x244390: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2443E0u;
            goto label_2443e0;
        }
    }
    ctx->pc = 0x244394u;
label_244394:
    // 0x244394: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_244398:
    if (ctx->pc == 0x244398u) {
        ctx->pc = 0x244398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244394u;
        // 0x244398: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24439Cu;
        goto label_24439c;
    }
    ctx->pc = 0x244394u;
    {
        const bool branch_taken_0x244394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x244394) {
            ctx->pc = 0x244398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244394u;
            // 0x244398: 0x8e460334  lw          $a2, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2443E0u;
            goto label_2443e0;
        }
    }
    ctx->pc = 0x24439Cu;
label_24439c:
    // 0x24439c: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x24439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_2443a0:
    // 0x2443a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2443a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2443a4:
    // 0x2443a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2443a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2443a8:
    // 0x2443a8: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x2443a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2443ac:
    // 0x2443ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2443acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2443b0:
    // 0x2443b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2443b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2443b4:
    // 0x2443b4: 0x0  nop
    ctx->pc = 0x2443b4u;
    // NOP
label_2443b8:
    // 0x2443b8: 0x0  nop
    ctx->pc = 0x2443b8u;
    // NOP
label_2443bc:
    // 0x2443bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2443bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2443c0:
    // 0x2443c0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2443c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_2443c4:
    // 0x2443c4: 0x0  nop
    ctx->pc = 0x2443c4u;
    // NOP
label_2443c8:
    // 0x2443c8: 0x0  nop
    ctx->pc = 0x2443c8u;
    // NOP
label_2443cc:
    // 0x2443cc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2443ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2443d0:
    // 0x2443d0: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x2443d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2443d4:
    // 0x2443d4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2443d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2443d8:
    // 0x2443d8: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2443d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2443dc:
    // 0x2443dc: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x2443dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2443e0:
    // 0x2443e0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2443e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2443e4:
    // 0x2443e4: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x2443e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_2443e8:
    // 0x2443e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2443ec:
    if (ctx->pc == 0x2443ECu) {
        ctx->pc = 0x2443ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443E8u;
        // 0x2443ec: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443F0u;
        goto label_2443f0;
    }
    ctx->pc = 0x2443E8u;
    {
        const bool branch_taken_0x2443e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2443ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443E8u;
        // 0x2443ec: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443e8) {
            ctx->pc = 0x2443F8u;
            goto label_2443f8;
        }
    }
    ctx->pc = 0x2443F0u;
label_2443f0:
    // 0x2443f0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2443f4:
    if (ctx->pc == 0x2443F4u) {
        ctx->pc = 0x2443F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443F0u;
        // 0x2443f4: 0x2603ff9b  addiu       $v1, $s0, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443F8u;
        goto label_2443f8;
    }
    ctx->pc = 0x2443F0u;
    {
        const bool branch_taken_0x2443f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2443F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443F0u;
        // 0x2443f4: 0x2603ff9b  addiu       $v1, $s0, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443f0) {
            ctx->pc = 0x244430u;
            goto label_244430;
        }
    }
    ctx->pc = 0x2443F8u;
label_2443f8:
    // 0x2443f8: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2443f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2443fc:
    // 0x2443fc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_244400:
    if (ctx->pc == 0x244400u) {
        ctx->pc = 0x244400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443FCu;
        // 0x244400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244404u;
        goto label_244404;
    }
    ctx->pc = 0x2443FCu;
    {
        const bool branch_taken_0x2443fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443FCu;
        // 0x244400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443fc) {
            ctx->pc = 0x244424u;
            goto label_244424;
        }
    }
    ctx->pc = 0x244404u;
label_244404:
    // 0x244404: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x244404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_244408:
    // 0x244408: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24440c:
    // 0x24440c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_244410:
    if (ctx->pc == 0x244410u) {
        ctx->pc = 0x244410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24440Cu;
        // 0x244410: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244414u;
        goto label_244414;
    }
    ctx->pc = 0x24440Cu;
    {
        const bool branch_taken_0x24440c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24440Cu;
        // 0x244410: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24440c) {
            ctx->pc = 0x244424u;
            goto label_244424;
        }
    }
    ctx->pc = 0x244414u;
label_244414:
    // 0x244414: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x244414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_244418:
    // 0x244418: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24441c:
    if (ctx->pc == 0x24441Cu) {
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244420u;
        goto label_244420;
    }
    ctx->pc = 0x244418u;
    {
        const bool branch_taken_0x244418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244418) {
            ctx->pc = 0x244408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244408;
        }
    }
    ctx->pc = 0x244420u;
label_244420:
    // 0x244420: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x244420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_244424:
    // 0x244424: 0xc073e86  jal         func_1CFA18
label_244428:
    if (ctx->pc == 0x244428u) {
        ctx->pc = 0x244428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244424u;
        // 0x244428: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24442Cu;
        goto label_24442c;
    }
    ctx->pc = 0x244424u;
    SET_GPR_U32(ctx, 31, 0x24442Cu);
    ctx->pc = 0x244428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244424u;
    // 0x244428: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x244424u, 0x24442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24442Cu;
label_24442c:
    // 0x24442c: 0x2603ff9b  addiu       $v1, $s0, -0x65
    ctx->pc = 0x24442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967195));
label_244430:
    // 0x244430: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_244434:
    // 0x244434: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_244438:
    if (ctx->pc == 0x244438u) {
        ctx->pc = 0x244438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244434u;
        // 0x244438: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24443Cu;
        goto label_24443c;
    }
    ctx->pc = 0x244434u;
    {
        const bool branch_taken_0x244434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244434u;
        // 0x244438: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244434) {
            ctx->pc = 0x2444CCu;
            goto label_2444cc;
        }
    }
    ctx->pc = 0x24443Cu;
label_24443c:
    // 0x24443c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24443cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244440:
    // 0x244440: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x244440u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_244444:
    // 0x244444: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_244448:
    if (ctx->pc == 0x244448u) {
        ctx->pc = 0x244448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244444u;
        // 0x244448: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24444Cu;
        goto label_24444c;
    }
    ctx->pc = 0x244444u;
    {
        const bool branch_taken_0x244444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244444) {
            ctx->pc = 0x244448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244444u;
            // 0x244448: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24444Cu;
            goto label_24444c;
        }
    }
    ctx->pc = 0x24444Cu;
label_24444c:
    // 0x24444c: 0x8fd0025c  lw          $s0, 0x25C($fp)
    ctx->pc = 0x24444cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 604)));
label_244450:
    // 0x244450: 0x1812  mflo        $v1
    ctx->pc = 0x244450u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_244454:
    // 0x244454: 0x327fe  dsrl32      $a0, $v1, 31
    ctx->pc = 0x244454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 31));
label_244458:
    // 0x244458: 0x64202d  daddu       $a0, $v1, $a0
    ctx->pc = 0x244458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_24445c:
    // 0x24445c: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x24445cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
label_244460:
    // 0x244460: 0x42878  dsll        $a1, $a0, 1
    ctx->pc = 0x244460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 1);
label_244464:
    // 0x244464: 0x65182f  dsubu       $v1, $v1, $a1
    ctx->pc = 0x244464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_244468:
    // 0x244468: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x244468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
label_24446c:
    // 0x24446c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x24446cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_244470:
    // 0x244470: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x244470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_244474:
    // 0x244474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x244474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_244478:
    // 0x244478: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x244478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_24447c:
    // 0x24447c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24447cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_244480:
    // 0x244480: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_244484:
    // 0x244484: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_244488:
    if (ctx->pc == 0x244488u) {
        ctx->pc = 0x244488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244484u;
        // 0x244488: 0x8c450064  lw          $a1, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24448Cu;
        goto label_24448c;
    }
    ctx->pc = 0x244484u;
    {
        const bool branch_taken_0x244484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244484u;
        // 0x244488: 0x8c450064  lw          $a1, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244484) {
            ctx->pc = 0x244490u;
            goto label_244490;
        }
    }
    ctx->pc = 0x24448Cu;
label_24448c:
    // 0x24448c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x24448cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_244490:
    // 0x244490: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_244494:
    if (ctx->pc == 0x244494u) {
        ctx->pc = 0x244498u;
        goto label_244498;
    }
    ctx->pc = 0x244490u;
    {
        const bool branch_taken_0x244490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x244490) {
            ctx->pc = 0x2444ACu;
            goto label_2444ac;
        }
    }
    ctx->pc = 0x244498u;
label_244498:
    // 0x244498: 0x10a60004  beq         $a1, $a2, . + 4 + (0x4 << 2)
label_24449c:
    if (ctx->pc == 0x24449Cu) {
        ctx->pc = 0x24449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244498u;
        // 0x24449c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444A0u;
        goto label_2444a0;
    }
    ctx->pc = 0x244498u;
    {
        const bool branch_taken_0x244498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x24449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244498u;
        // 0x24449c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244498) {
            ctx->pc = 0x2444ACu;
            goto label_2444ac;
        }
    }
    ctx->pc = 0x2444A0u;
label_2444a0:
    // 0x2444a0: 0xc0984bc  jal         func_2612F0
label_2444a4:
    if (ctx->pc == 0x2444A4u) {
        ctx->pc = 0x2444A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444A0u;
        // 0x2444a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444A8u;
        goto label_2444a8;
    }
    ctx->pc = 0x2444A0u;
    SET_GPR_U32(ctx, 31, 0x2444A8u);
    ctx->pc = 0x2444A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444A0u;
    // 0x2444a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x2444A0u, 0x2444A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444A8u;
label_2444a8:
    // 0x2444a8: 0x8fd0025c  lw          $s0, 0x25C($fp)
    ctx->pc = 0x2444a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 604)));
label_2444ac:
    // 0x2444ac: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2444b0:
    if (ctx->pc == 0x2444B0u) {
        ctx->pc = 0x2444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444ACu;
        // 0x2444b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444B4u;
        goto label_2444b4;
    }
    ctx->pc = 0x2444ACu;
    {
        const bool branch_taken_0x2444ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444ACu;
        // 0x2444b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2444ac) {
            ctx->pc = 0x2444CCu;
            goto label_2444cc;
        }
    }
    ctx->pc = 0x2444B4u;
label_2444b4:
    // 0x2444b4: 0xc073e86  jal         func_1CFA18
label_2444b8:
    if (ctx->pc == 0x2444B8u) {
        ctx->pc = 0x2444B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444B4u;
        // 0x2444b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444BCu;
        goto label_2444bc;
    }
    ctx->pc = 0x2444B4u;
    SET_GPR_U32(ctx, 31, 0x2444BCu);
    ctx->pc = 0x2444B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444B4u;
    // 0x2444b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2444B4u, 0x2444BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444BCu;
label_2444bc:
    // 0x2444bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2444bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2444c0:
    // 0x2444c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2444c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2444c4:
    // 0x2444c4: 0xc073f08  jal         func_1CFC20
label_2444c8:
    if (ctx->pc == 0x2444C8u) {
        ctx->pc = 0x2444C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444C4u;
        // 0x2444c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444CCu;
        goto label_2444cc;
    }
    ctx->pc = 0x2444C4u;
    SET_GPR_U32(ctx, 31, 0x2444CCu);
    ctx->pc = 0x2444C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444C4u;
    // 0x2444c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2444C4u, 0x2444CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444CCu;
label_2444cc:
    // 0x2444cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2444ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2444d0:
    // 0x2444d0: 0xc08a15a  jal         func_228568
label_2444d4:
    if (ctx->pc == 0x2444D4u) {
        ctx->pc = 0x2444D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444D0u;
        // 0x2444d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444D8u;
        goto label_2444d8;
    }
    ctx->pc = 0x2444D0u;
    SET_GPR_U32(ctx, 31, 0x2444D8u);
    ctx->pc = 0x2444D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444D0u;
    // 0x2444d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2444D0u, 0x2444D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444D8u;
label_2444d8:
    // 0x2444d8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2444d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2444dc:
    // 0x2444dc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2444dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2444e0:
    // 0x2444e0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2444e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2444e4:
    // 0x2444e4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2444e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2444e8:
    // 0x2444e8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2444e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2444ec:
    // 0x2444ec: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2444ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2444f0:
    // 0x2444f0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2444f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2444f4:
    // 0x2444f4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2444f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2444f8:
    // 0x2444f8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2444f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2444fc:
    // 0x2444fc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2444fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_244500:
    // 0x244500: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x244500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_244504:
    // 0x244504: 0x3e00008  jr          $ra
label_244508:
    if (ctx->pc == 0x244508u) {
        ctx->pc = 0x244508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244504u;
        // 0x244508: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24450Cu;
        goto label_24450c;
    }
    ctx->pc = 0x244504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244504u;
        // 0x244508: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24450Cu;
label_24450c:
    // 0x24450c: 0x0  nop
    ctx->pc = 0x24450cu;
    // NOP
    ctx->pc = 0x244510u;
}
