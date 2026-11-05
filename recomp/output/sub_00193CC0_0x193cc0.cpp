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

// Function: sub_00193CC0
// Address: 0x193cc0 - 0x1946c8
void sub_00193CC0_0x193cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193CC0_0x193cc0");
#endif

    switch (ctx->pc) {
        case 0x193cc0u: goto label_193cc0;
        case 0x193cc4u: goto label_193cc4;
        case 0x193cc8u: goto label_193cc8;
        case 0x193cccu: goto label_193ccc;
        case 0x193cd0u: goto label_193cd0;
        case 0x193cd4u: goto label_193cd4;
        case 0x193cd8u: goto label_193cd8;
        case 0x193cdcu: goto label_193cdc;
        case 0x193ce0u: goto label_193ce0;
        case 0x193ce4u: goto label_193ce4;
        case 0x193ce8u: goto label_193ce8;
        case 0x193cecu: goto label_193cec;
        case 0x193cf0u: goto label_193cf0;
        case 0x193cf4u: goto label_193cf4;
        case 0x193cf8u: goto label_193cf8;
        case 0x193cfcu: goto label_193cfc;
        case 0x193d00u: goto label_193d00;
        case 0x193d04u: goto label_193d04;
        case 0x193d08u: goto label_193d08;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d10u: goto label_193d10;
        case 0x193d14u: goto label_193d14;
        case 0x193d18u: goto label_193d18;
        case 0x193d1cu: goto label_193d1c;
        case 0x193d20u: goto label_193d20;
        case 0x193d24u: goto label_193d24;
        case 0x193d28u: goto label_193d28;
        case 0x193d2cu: goto label_193d2c;
        case 0x193d30u: goto label_193d30;
        case 0x193d34u: goto label_193d34;
        case 0x193d38u: goto label_193d38;
        case 0x193d3cu: goto label_193d3c;
        case 0x193d40u: goto label_193d40;
        case 0x193d44u: goto label_193d44;
        case 0x193d48u: goto label_193d48;
        case 0x193d4cu: goto label_193d4c;
        case 0x193d50u: goto label_193d50;
        case 0x193d54u: goto label_193d54;
        case 0x193d58u: goto label_193d58;
        case 0x193d5cu: goto label_193d5c;
        case 0x193d60u: goto label_193d60;
        case 0x193d64u: goto label_193d64;
        case 0x193d68u: goto label_193d68;
        case 0x193d6cu: goto label_193d6c;
        case 0x193d70u: goto label_193d70;
        case 0x193d74u: goto label_193d74;
        case 0x193d78u: goto label_193d78;
        case 0x193d7cu: goto label_193d7c;
        case 0x193d80u: goto label_193d80;
        case 0x193d84u: goto label_193d84;
        case 0x193d88u: goto label_193d88;
        case 0x193d8cu: goto label_193d8c;
        case 0x193d90u: goto label_193d90;
        case 0x193d94u: goto label_193d94;
        case 0x193d98u: goto label_193d98;
        case 0x193d9cu: goto label_193d9c;
        case 0x193da0u: goto label_193da0;
        case 0x193da4u: goto label_193da4;
        case 0x193da8u: goto label_193da8;
        case 0x193dacu: goto label_193dac;
        case 0x193db0u: goto label_193db0;
        case 0x193db4u: goto label_193db4;
        case 0x193db8u: goto label_193db8;
        case 0x193dbcu: goto label_193dbc;
        case 0x193dc0u: goto label_193dc0;
        case 0x193dc4u: goto label_193dc4;
        case 0x193dc8u: goto label_193dc8;
        case 0x193dccu: goto label_193dcc;
        case 0x193dd0u: goto label_193dd0;
        case 0x193dd4u: goto label_193dd4;
        case 0x193dd8u: goto label_193dd8;
        case 0x193ddcu: goto label_193ddc;
        case 0x193de0u: goto label_193de0;
        case 0x193de4u: goto label_193de4;
        case 0x193de8u: goto label_193de8;
        case 0x193decu: goto label_193dec;
        case 0x193df0u: goto label_193df0;
        case 0x193df4u: goto label_193df4;
        case 0x193df8u: goto label_193df8;
        case 0x193dfcu: goto label_193dfc;
        case 0x193e00u: goto label_193e00;
        case 0x193e04u: goto label_193e04;
        case 0x193e08u: goto label_193e08;
        case 0x193e0cu: goto label_193e0c;
        case 0x193e10u: goto label_193e10;
        case 0x193e14u: goto label_193e14;
        case 0x193e18u: goto label_193e18;
        case 0x193e1cu: goto label_193e1c;
        case 0x193e20u: goto label_193e20;
        case 0x193e24u: goto label_193e24;
        case 0x193e28u: goto label_193e28;
        case 0x193e2cu: goto label_193e2c;
        case 0x193e30u: goto label_193e30;
        case 0x193e34u: goto label_193e34;
        case 0x193e38u: goto label_193e38;
        case 0x193e3cu: goto label_193e3c;
        case 0x193e40u: goto label_193e40;
        case 0x193e44u: goto label_193e44;
        case 0x193e48u: goto label_193e48;
        case 0x193e4cu: goto label_193e4c;
        case 0x193e50u: goto label_193e50;
        case 0x193e54u: goto label_193e54;
        case 0x193e58u: goto label_193e58;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e60u: goto label_193e60;
        case 0x193e64u: goto label_193e64;
        case 0x193e68u: goto label_193e68;
        case 0x193e6cu: goto label_193e6c;
        case 0x193e70u: goto label_193e70;
        case 0x193e74u: goto label_193e74;
        case 0x193e78u: goto label_193e78;
        case 0x193e7cu: goto label_193e7c;
        case 0x193e80u: goto label_193e80;
        case 0x193e84u: goto label_193e84;
        case 0x193e88u: goto label_193e88;
        case 0x193e8cu: goto label_193e8c;
        case 0x193e90u: goto label_193e90;
        case 0x193e94u: goto label_193e94;
        case 0x193e98u: goto label_193e98;
        case 0x193e9cu: goto label_193e9c;
        case 0x193ea0u: goto label_193ea0;
        case 0x193ea4u: goto label_193ea4;
        case 0x193ea8u: goto label_193ea8;
        case 0x193eacu: goto label_193eac;
        case 0x193eb0u: goto label_193eb0;
        case 0x193eb4u: goto label_193eb4;
        case 0x193eb8u: goto label_193eb8;
        case 0x193ebcu: goto label_193ebc;
        case 0x193ec0u: goto label_193ec0;
        case 0x193ec4u: goto label_193ec4;
        case 0x193ec8u: goto label_193ec8;
        case 0x193eccu: goto label_193ecc;
        case 0x193ed0u: goto label_193ed0;
        case 0x193ed4u: goto label_193ed4;
        case 0x193ed8u: goto label_193ed8;
        case 0x193edcu: goto label_193edc;
        case 0x193ee0u: goto label_193ee0;
        case 0x193ee4u: goto label_193ee4;
        case 0x193ee8u: goto label_193ee8;
        case 0x193eecu: goto label_193eec;
        case 0x193ef0u: goto label_193ef0;
        case 0x193ef4u: goto label_193ef4;
        case 0x193ef8u: goto label_193ef8;
        case 0x193efcu: goto label_193efc;
        case 0x193f00u: goto label_193f00;
        case 0x193f04u: goto label_193f04;
        case 0x193f08u: goto label_193f08;
        case 0x193f0cu: goto label_193f0c;
        case 0x193f10u: goto label_193f10;
        case 0x193f14u: goto label_193f14;
        case 0x193f18u: goto label_193f18;
        case 0x193f1cu: goto label_193f1c;
        case 0x193f20u: goto label_193f20;
        case 0x193f24u: goto label_193f24;
        case 0x193f28u: goto label_193f28;
        case 0x193f2cu: goto label_193f2c;
        case 0x193f30u: goto label_193f30;
        case 0x193f34u: goto label_193f34;
        case 0x193f38u: goto label_193f38;
        case 0x193f3cu: goto label_193f3c;
        case 0x193f40u: goto label_193f40;
        case 0x193f44u: goto label_193f44;
        case 0x193f48u: goto label_193f48;
        case 0x193f4cu: goto label_193f4c;
        case 0x193f50u: goto label_193f50;
        case 0x193f54u: goto label_193f54;
        case 0x193f58u: goto label_193f58;
        case 0x193f5cu: goto label_193f5c;
        case 0x193f60u: goto label_193f60;
        case 0x193f64u: goto label_193f64;
        case 0x193f68u: goto label_193f68;
        case 0x193f6cu: goto label_193f6c;
        case 0x193f70u: goto label_193f70;
        case 0x193f74u: goto label_193f74;
        case 0x193f78u: goto label_193f78;
        case 0x193f7cu: goto label_193f7c;
        case 0x193f80u: goto label_193f80;
        case 0x193f84u: goto label_193f84;
        case 0x193f88u: goto label_193f88;
        case 0x193f8cu: goto label_193f8c;
        case 0x193f90u: goto label_193f90;
        case 0x193f94u: goto label_193f94;
        case 0x193f98u: goto label_193f98;
        case 0x193f9cu: goto label_193f9c;
        case 0x193fa0u: goto label_193fa0;
        case 0x193fa4u: goto label_193fa4;
        case 0x193fa8u: goto label_193fa8;
        case 0x193facu: goto label_193fac;
        case 0x193fb0u: goto label_193fb0;
        case 0x193fb4u: goto label_193fb4;
        case 0x193fb8u: goto label_193fb8;
        case 0x193fbcu: goto label_193fbc;
        case 0x193fc0u: goto label_193fc0;
        case 0x193fc4u: goto label_193fc4;
        case 0x193fc8u: goto label_193fc8;
        case 0x193fccu: goto label_193fcc;
        case 0x193fd0u: goto label_193fd0;
        case 0x193fd4u: goto label_193fd4;
        case 0x193fd8u: goto label_193fd8;
        case 0x193fdcu: goto label_193fdc;
        case 0x193fe0u: goto label_193fe0;
        case 0x193fe4u: goto label_193fe4;
        case 0x193fe8u: goto label_193fe8;
        case 0x193fecu: goto label_193fec;
        case 0x193ff0u: goto label_193ff0;
        case 0x193ff4u: goto label_193ff4;
        case 0x193ff8u: goto label_193ff8;
        case 0x193ffcu: goto label_193ffc;
        case 0x194000u: goto label_194000;
        case 0x194004u: goto label_194004;
        case 0x194008u: goto label_194008;
        case 0x19400cu: goto label_19400c;
        case 0x194010u: goto label_194010;
        case 0x194014u: goto label_194014;
        case 0x194018u: goto label_194018;
        case 0x19401cu: goto label_19401c;
        case 0x194020u: goto label_194020;
        case 0x194024u: goto label_194024;
        case 0x194028u: goto label_194028;
        case 0x19402cu: goto label_19402c;
        case 0x194030u: goto label_194030;
        case 0x194034u: goto label_194034;
        case 0x194038u: goto label_194038;
        case 0x19403cu: goto label_19403c;
        case 0x194040u: goto label_194040;
        case 0x194044u: goto label_194044;
        case 0x194048u: goto label_194048;
        case 0x19404cu: goto label_19404c;
        case 0x194050u: goto label_194050;
        case 0x194054u: goto label_194054;
        case 0x194058u: goto label_194058;
        case 0x19405cu: goto label_19405c;
        case 0x194060u: goto label_194060;
        case 0x194064u: goto label_194064;
        case 0x194068u: goto label_194068;
        case 0x19406cu: goto label_19406c;
        case 0x194070u: goto label_194070;
        case 0x194074u: goto label_194074;
        case 0x194078u: goto label_194078;
        case 0x19407cu: goto label_19407c;
        case 0x194080u: goto label_194080;
        case 0x194084u: goto label_194084;
        case 0x194088u: goto label_194088;
        case 0x19408cu: goto label_19408c;
        case 0x194090u: goto label_194090;
        case 0x194094u: goto label_194094;
        case 0x194098u: goto label_194098;
        case 0x19409cu: goto label_19409c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940a4u: goto label_1940a4;
        case 0x1940a8u: goto label_1940a8;
        case 0x1940acu: goto label_1940ac;
        case 0x1940b0u: goto label_1940b0;
        case 0x1940b4u: goto label_1940b4;
        case 0x1940b8u: goto label_1940b8;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940c0u: goto label_1940c0;
        case 0x1940c4u: goto label_1940c4;
        case 0x1940c8u: goto label_1940c8;
        case 0x1940ccu: goto label_1940cc;
        case 0x1940d0u: goto label_1940d0;
        case 0x1940d4u: goto label_1940d4;
        case 0x1940d8u: goto label_1940d8;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940e0u: goto label_1940e0;
        case 0x1940e4u: goto label_1940e4;
        case 0x1940e8u: goto label_1940e8;
        case 0x1940ecu: goto label_1940ec;
        case 0x1940f0u: goto label_1940f0;
        case 0x1940f4u: goto label_1940f4;
        case 0x1940f8u: goto label_1940f8;
        case 0x1940fcu: goto label_1940fc;
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        case 0x194120u: goto label_194120;
        case 0x194124u: goto label_194124;
        case 0x194128u: goto label_194128;
        case 0x19412cu: goto label_19412c;
        case 0x194130u: goto label_194130;
        case 0x194134u: goto label_194134;
        case 0x194138u: goto label_194138;
        case 0x19413cu: goto label_19413c;
        case 0x194140u: goto label_194140;
        case 0x194144u: goto label_194144;
        case 0x194148u: goto label_194148;
        case 0x19414cu: goto label_19414c;
        case 0x194150u: goto label_194150;
        case 0x194154u: goto label_194154;
        case 0x194158u: goto label_194158;
        case 0x19415cu: goto label_19415c;
        case 0x194160u: goto label_194160;
        case 0x194164u: goto label_194164;
        case 0x194168u: goto label_194168;
        case 0x19416cu: goto label_19416c;
        case 0x194170u: goto label_194170;
        case 0x194174u: goto label_194174;
        case 0x194178u: goto label_194178;
        case 0x19417cu: goto label_19417c;
        case 0x194180u: goto label_194180;
        case 0x194184u: goto label_194184;
        case 0x194188u: goto label_194188;
        case 0x19418cu: goto label_19418c;
        case 0x194190u: goto label_194190;
        case 0x194194u: goto label_194194;
        case 0x194198u: goto label_194198;
        case 0x19419cu: goto label_19419c;
        case 0x1941a0u: goto label_1941a0;
        case 0x1941a4u: goto label_1941a4;
        case 0x1941a8u: goto label_1941a8;
        case 0x1941acu: goto label_1941ac;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941b4u: goto label_1941b4;
        case 0x1941b8u: goto label_1941b8;
        case 0x1941bcu: goto label_1941bc;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941c4u: goto label_1941c4;
        case 0x1941c8u: goto label_1941c8;
        case 0x1941ccu: goto label_1941cc;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941d4u: goto label_1941d4;
        case 0x1941d8u: goto label_1941d8;
        case 0x1941dcu: goto label_1941dc;
        case 0x1941e0u: goto label_1941e0;
        case 0x1941e4u: goto label_1941e4;
        case 0x1941e8u: goto label_1941e8;
        case 0x1941ecu: goto label_1941ec;
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        case 0x1942c0u: goto label_1942c0;
        case 0x1942c4u: goto label_1942c4;
        case 0x1942c8u: goto label_1942c8;
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        case 0x1943c0u: goto label_1943c0;
        case 0x1943c4u: goto label_1943c4;
        case 0x1943c8u: goto label_1943c8;
        case 0x1943ccu: goto label_1943cc;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d4u: goto label_1943d4;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943dcu: goto label_1943dc;
        case 0x1943e0u: goto label_1943e0;
        case 0x1943e4u: goto label_1943e4;
        case 0x1943e8u: goto label_1943e8;
        case 0x1943ecu: goto label_1943ec;
        case 0x1943f0u: goto label_1943f0;
        case 0x1943f4u: goto label_1943f4;
        case 0x1943f8u: goto label_1943f8;
        case 0x1943fcu: goto label_1943fc;
        case 0x194400u: goto label_194400;
        case 0x194404u: goto label_194404;
        case 0x194408u: goto label_194408;
        case 0x19440cu: goto label_19440c;
        case 0x194410u: goto label_194410;
        case 0x194414u: goto label_194414;
        case 0x194418u: goto label_194418;
        case 0x19441cu: goto label_19441c;
        case 0x194420u: goto label_194420;
        case 0x194424u: goto label_194424;
        case 0x194428u: goto label_194428;
        case 0x19442cu: goto label_19442c;
        case 0x194430u: goto label_194430;
        case 0x194434u: goto label_194434;
        case 0x194438u: goto label_194438;
        case 0x19443cu: goto label_19443c;
        case 0x194440u: goto label_194440;
        case 0x194444u: goto label_194444;
        case 0x194448u: goto label_194448;
        case 0x19444cu: goto label_19444c;
        case 0x194450u: goto label_194450;
        case 0x194454u: goto label_194454;
        case 0x194458u: goto label_194458;
        case 0x19445cu: goto label_19445c;
        case 0x194460u: goto label_194460;
        case 0x194464u: goto label_194464;
        case 0x194468u: goto label_194468;
        case 0x19446cu: goto label_19446c;
        case 0x194470u: goto label_194470;
        case 0x194474u: goto label_194474;
        case 0x194478u: goto label_194478;
        case 0x19447cu: goto label_19447c;
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944e0u: goto label_1944e0;
        case 0x1944e4u: goto label_1944e4;
        case 0x1944e8u: goto label_1944e8;
        case 0x1944ecu: goto label_1944ec;
        case 0x1944f0u: goto label_1944f0;
        case 0x1944f4u: goto label_1944f4;
        case 0x1944f8u: goto label_1944f8;
        case 0x1944fcu: goto label_1944fc;
        case 0x194500u: goto label_194500;
        case 0x194504u: goto label_194504;
        case 0x194508u: goto label_194508;
        case 0x19450cu: goto label_19450c;
        case 0x194510u: goto label_194510;
        case 0x194514u: goto label_194514;
        case 0x194518u: goto label_194518;
        case 0x19451cu: goto label_19451c;
        case 0x194520u: goto label_194520;
        case 0x194524u: goto label_194524;
        case 0x194528u: goto label_194528;
        case 0x19452cu: goto label_19452c;
        case 0x194530u: goto label_194530;
        case 0x194534u: goto label_194534;
        case 0x194538u: goto label_194538;
        case 0x19453cu: goto label_19453c;
        case 0x194540u: goto label_194540;
        case 0x194544u: goto label_194544;
        case 0x194548u: goto label_194548;
        case 0x19454cu: goto label_19454c;
        case 0x194550u: goto label_194550;
        case 0x194554u: goto label_194554;
        case 0x194558u: goto label_194558;
        case 0x19455cu: goto label_19455c;
        case 0x194560u: goto label_194560;
        case 0x194564u: goto label_194564;
        case 0x194568u: goto label_194568;
        case 0x19456cu: goto label_19456c;
        case 0x194570u: goto label_194570;
        case 0x194574u: goto label_194574;
        case 0x194578u: goto label_194578;
        case 0x19457cu: goto label_19457c;
        case 0x194580u: goto label_194580;
        case 0x194584u: goto label_194584;
        case 0x194588u: goto label_194588;
        case 0x19458cu: goto label_19458c;
        case 0x194590u: goto label_194590;
        case 0x194594u: goto label_194594;
        case 0x194598u: goto label_194598;
        case 0x19459cu: goto label_19459c;
        case 0x1945a0u: goto label_1945a0;
        case 0x1945a4u: goto label_1945a4;
        case 0x1945a8u: goto label_1945a8;
        case 0x1945acu: goto label_1945ac;
        case 0x1945b0u: goto label_1945b0;
        case 0x1945b4u: goto label_1945b4;
        case 0x1945b8u: goto label_1945b8;
        case 0x1945bcu: goto label_1945bc;
        case 0x1945c0u: goto label_1945c0;
        case 0x1945c4u: goto label_1945c4;
        case 0x1945c8u: goto label_1945c8;
        case 0x1945ccu: goto label_1945cc;
        case 0x1945d0u: goto label_1945d0;
        case 0x1945d4u: goto label_1945d4;
        case 0x1945d8u: goto label_1945d8;
        case 0x1945dcu: goto label_1945dc;
        case 0x1945e0u: goto label_1945e0;
        case 0x1945e4u: goto label_1945e4;
        case 0x1945e8u: goto label_1945e8;
        case 0x1945ecu: goto label_1945ec;
        case 0x1945f0u: goto label_1945f0;
        case 0x1945f4u: goto label_1945f4;
        case 0x1945f8u: goto label_1945f8;
        case 0x1945fcu: goto label_1945fc;
        case 0x194600u: goto label_194600;
        case 0x194604u: goto label_194604;
        case 0x194608u: goto label_194608;
        case 0x19460cu: goto label_19460c;
        case 0x194610u: goto label_194610;
        case 0x194614u: goto label_194614;
        case 0x194618u: goto label_194618;
        case 0x19461cu: goto label_19461c;
        case 0x194620u: goto label_194620;
        case 0x194624u: goto label_194624;
        case 0x194628u: goto label_194628;
        case 0x19462cu: goto label_19462c;
        case 0x194630u: goto label_194630;
        case 0x194634u: goto label_194634;
        case 0x194638u: goto label_194638;
        case 0x19463cu: goto label_19463c;
        case 0x194640u: goto label_194640;
        case 0x194644u: goto label_194644;
        case 0x194648u: goto label_194648;
        case 0x19464cu: goto label_19464c;
        case 0x194650u: goto label_194650;
        case 0x194654u: goto label_194654;
        case 0x194658u: goto label_194658;
        case 0x19465cu: goto label_19465c;
        case 0x194660u: goto label_194660;
        case 0x194664u: goto label_194664;
        case 0x194668u: goto label_194668;
        case 0x19466cu: goto label_19466c;
        case 0x194670u: goto label_194670;
        case 0x194674u: goto label_194674;
        case 0x194678u: goto label_194678;
        case 0x19467cu: goto label_19467c;
        case 0x194680u: goto label_194680;
        case 0x194684u: goto label_194684;
        case 0x194688u: goto label_194688;
        case 0x19468cu: goto label_19468c;
        case 0x194690u: goto label_194690;
        case 0x194694u: goto label_194694;
        case 0x194698u: goto label_194698;
        case 0x19469cu: goto label_19469c;
        case 0x1946a0u: goto label_1946a0;
        case 0x1946a4u: goto label_1946a4;
        case 0x1946a8u: goto label_1946a8;
        case 0x1946acu: goto label_1946ac;
        case 0x1946b0u: goto label_1946b0;
        case 0x1946b4u: goto label_1946b4;
        case 0x1946b8u: goto label_1946b8;
        case 0x1946bcu: goto label_1946bc;
        case 0x1946c0u: goto label_1946c0;
        case 0x1946c4u: goto label_1946c4;
        default: break;
    }

    ctx->pc = 0x193cc0u;

label_193cc0:
    // 0x193cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_193cc4:
    // 0x193cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_193cc8:
    // 0x193cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193ccc:
    // 0x193ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_193cd0:
    // 0x193cd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_193cd4:
    // 0x193cd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_193cd8:
    // 0x193cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_193cdc:
    // 0x193cdc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x193cdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_193ce0:
    // 0x193ce0: 0xc065582  jal         func_195608
label_193ce4:
    if (ctx->pc == 0x193CE4u) {
        ctx->pc = 0x193CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CE0u;
        // 0x193ce4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193CE8u;
        goto label_193ce8;
    }
    ctx->pc = 0x193CE0u;
    SET_GPR_U32(ctx, 31, 0x193CE8u);
    ctx->pc = 0x193CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CE0u;
    // 0x193ce4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x195608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195608u, 0x193CE0u, 0x193CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CE8u;
label_193ce8:
    // 0x193ce8: 0xc061a4c  jal         func_186930
label_193cec:
    if (ctx->pc == 0x193CECu) {
        ctx->pc = 0x193CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CE8u;
        // 0x193cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193CF0u;
        goto label_193cf0;
    }
    ctx->pc = 0x193CE8u;
    SET_GPR_U32(ctx, 31, 0x193CF0u);
    ctx->pc = 0x193CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CE8u;
    // 0x193cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x193CE8u, 0x193CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CF0u;
label_193cf0:
    // 0x193cf0: 0xc061a26  jal         func_186898
label_193cf4:
    if (ctx->pc == 0x193CF4u) {
        ctx->pc = 0x193CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CF0u;
        // 0x193cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193CF8u;
        goto label_193cf8;
    }
    ctx->pc = 0x193CF0u;
    SET_GPR_U32(ctx, 31, 0x193CF8u);
    ctx->pc = 0x193CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CF0u;
    // 0x193cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x193CF0u, 0x193CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CF8u;
label_193cf8:
    // 0x193cf8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_193cfc:
    // 0x193cfc: 0xc0f6da6  jal         func_3DB698
label_193d00:
    if (ctx->pc == 0x193D00u) {
        ctx->pc = 0x193D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CFCu;
        // 0x193d00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D04u;
        goto label_193d04;
    }
    ctx->pc = 0x193CFCu;
    SET_GPR_U32(ctx, 31, 0x193D04u);
    ctx->pc = 0x193D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CFCu;
    // 0x193d00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x193CFCu, 0x193D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D04u;
label_193d04:
    // 0x193d04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_193d08:
    if (ctx->pc == 0x193D08u) {
        ctx->pc = 0x193D0Cu;
        goto label_193d0c;
    }
    ctx->pc = 0x193D04u;
    {
        const bool branch_taken_0x193d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d04) {
            ctx->pc = 0x193D18u;
            goto label_193d18;
        }
    }
    ctx->pc = 0x193D0Cu;
label_193d0c:
    // 0x193d0c: 0xc061a1e  jal         func_186878
label_193d10:
    if (ctx->pc == 0x193D10u) {
        ctx->pc = 0x193D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D0Cu;
        // 0x193d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D14u;
        goto label_193d14;
    }
    ctx->pc = 0x193D0Cu;
    SET_GPR_U32(ctx, 31, 0x193D14u);
    ctx->pc = 0x193D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D0Cu;
    // 0x193d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193D0Cu, 0x193D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D14u;
label_193d14:
    // 0x193d14: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x193d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_193d18:
    // 0x193d18: 0xc061a16  jal         func_186858
label_193d1c:
    if (ctx->pc == 0x193D1Cu) {
        ctx->pc = 0x193D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D18u;
        // 0x193d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D20u;
        goto label_193d20;
    }
    ctx->pc = 0x193D18u;
    SET_GPR_U32(ctx, 31, 0x193D20u);
    ctx->pc = 0x193D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D18u;
    // 0x193d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193D18u, 0x193D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D20u;
label_193d20:
    // 0x193d20: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x193d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_193d24:
    // 0x193d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193d28:
    // 0x193d28: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x193d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_193d2c:
    // 0x193d2c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x193d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_193d30:
    // 0x193d30: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_193d34:
    if (ctx->pc == 0x193D34u) {
        ctx->pc = 0x193D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D30u;
        // 0x193d34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D38u;
        goto label_193d38;
    }
    ctx->pc = 0x193D30u;
    {
        const bool branch_taken_0x193d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x193D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D30u;
        // 0x193d34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d30) {
            ctx->pc = 0x193D4Cu;
            goto label_193d4c;
        }
    }
    ctx->pc = 0x193D38u;
label_193d38:
    // 0x193d38: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_193d3c:
    // 0x193d3c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_193d40:
    // 0x193d40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x193d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_193d44:
    // 0x193d44: 0x1000000a  b           . + 4 + (0xA << 2)
label_193d48:
    if (ctx->pc == 0x193D48u) {
        ctx->pc = 0x193D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D44u;
        // 0x193d48: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D4Cu;
        goto label_193d4c;
    }
    ctx->pc = 0x193D44u;
    {
        const bool branch_taken_0x193d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D44u;
        // 0x193d48: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d44) {
            ctx->pc = 0x193D70u;
            goto label_193d70;
        }
    }
    ctx->pc = 0x193D4Cu;
label_193d4c:
    // 0x193d4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_193d50:
    if (ctx->pc == 0x193D50u) {
        ctx->pc = 0x193D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D4Cu;
        // 0x193d50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D54u;
        goto label_193d54;
    }
    ctx->pc = 0x193D4Cu;
    {
        const bool branch_taken_0x193d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D4Cu;
        // 0x193d50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d4c) {
            ctx->pc = 0x193D68u;
            goto label_193d68;
        }
    }
    ctx->pc = 0x193D54u;
label_193d54:
    // 0x193d54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x193d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_193d58:
    // 0x193d58: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_193d5c:
    if (ctx->pc == 0x193D5Cu) {
        ctx->pc = 0x193D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D58u;
        // 0x193d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D60u;
        goto label_193d60;
    }
    ctx->pc = 0x193D58u;
    {
        const bool branch_taken_0x193d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x193D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D58u;
        // 0x193d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d58) {
            ctx->pc = 0x193D68u;
            goto label_193d68;
        }
    }
    ctx->pc = 0x193D60u;
label_193d60:
    // 0x193d60: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_193d64:
    if (ctx->pc == 0x193D64u) {
        ctx->pc = 0x193D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D60u;
        // 0x193d64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D68u;
        goto label_193d68;
    }
    ctx->pc = 0x193D60u;
    {
        const bool branch_taken_0x193d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x193D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D60u;
        // 0x193d64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d60) {
            ctx->pc = 0x193D70u;
            goto label_193d70;
        }
    }
    ctx->pc = 0x193D68u;
label_193d68:
    // 0x193d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193d6c:
    // 0x193d6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x193d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_193d70:
    // 0x193d70: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_193d74:
    if (ctx->pc == 0x193D74u) {
        ctx->pc = 0x193D78u;
        goto label_193d78;
    }
    ctx->pc = 0x193D70u;
    {
        const bool branch_taken_0x193d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d70) {
            ctx->pc = 0x193DACu;
            goto label_193dac;
        }
    }
    ctx->pc = 0x193D78u;
label_193d78:
    // 0x193d78: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x193d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_193d7c:
    // 0x193d7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_193d80:
    if (ctx->pc == 0x193D80u) {
        ctx->pc = 0x193D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D7Cu;
        // 0x193d80: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D84u;
        goto label_193d84;
    }
    ctx->pc = 0x193D7Cu;
    {
        const bool branch_taken_0x193d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D7Cu;
        // 0x193d80: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d7c) {
            ctx->pc = 0x193D98u;
            goto label_193d98;
        }
    }
    ctx->pc = 0x193D84u;
label_193d84:
    // 0x193d84: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x193d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_193d88:
    // 0x193d88: 0xc06fb64  jal         func_1BED90
label_193d8c:
    if (ctx->pc == 0x193D8Cu) {
        ctx->pc = 0x193D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D88u;
        // 0x193d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193D90u;
        goto label_193d90;
    }
    ctx->pc = 0x193D88u;
    SET_GPR_U32(ctx, 31, 0x193D90u);
    ctx->pc = 0x193D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D88u;
    // 0x193d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x193D88u, 0x193D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D90u;
label_193d90:
    // 0x193d90: 0x10000006  b           . + 4 + (0x6 << 2)
label_193d94:
    if (ctx->pc == 0x193D94u) {
        ctx->pc = 0x193D98u;
        goto label_193d98;
    }
    ctx->pc = 0x193D90u;
    {
        const bool branch_taken_0x193d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d90) {
            ctx->pc = 0x193DACu;
            goto label_193dac;
        }
    }
    ctx->pc = 0x193D98u;
label_193d98:
    // 0x193d98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_193d9c:
    if (ctx->pc == 0x193D9Cu) {
        ctx->pc = 0x193DA0u;
        goto label_193da0;
    }
    ctx->pc = 0x193D98u;
    {
        const bool branch_taken_0x193d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d98) {
            ctx->pc = 0x193DACu;
            goto label_193dac;
        }
    }
    ctx->pc = 0x193DA0u;
label_193da0:
    // 0x193da0: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_193da4:
    // 0x193da4: 0xc06fb1e  jal         func_1BEC78
label_193da8:
    if (ctx->pc == 0x193DA8u) {
        ctx->pc = 0x193DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DA4u;
        // 0x193da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193DACu;
        goto label_193dac;
    }
    ctx->pc = 0x193DA4u;
    SET_GPR_U32(ctx, 31, 0x193DACu);
    ctx->pc = 0x193DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DA4u;
    // 0x193da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x193DA4u, 0x193DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DACu;
label_193dac:
    // 0x193dac: 0xc061a12  jal         func_186848
label_193db0:
    if (ctx->pc == 0x193DB0u) {
        ctx->pc = 0x193DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DACu;
        // 0x193db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193DB4u;
        goto label_193db4;
    }
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x193DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DACu;
    // 0x193db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x193DACu, 0x193DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DB4u;
label_193db4:
    // 0x193db4: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x193db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_193db8:
    // 0x193db8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_193dbc:
    if (ctx->pc == 0x193DBCu) {
        ctx->pc = 0x193DC0u;
        goto label_193dc0;
    }
    ctx->pc = 0x193DB8u;
    {
        const bool branch_taken_0x193db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193db8) {
            ctx->pc = 0x193E10u;
            goto label_193e10;
        }
    }
    ctx->pc = 0x193DC0u;
label_193dc0:
    // 0x193dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193dc4:
    // 0x193dc4: 0xc061a12  jal         func_186848
label_193dc8:
    if (ctx->pc == 0x193DC8u) {
        ctx->pc = 0x193DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DC4u;
        // 0x193dc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193DCCu;
        goto label_193dcc;
    }
    ctx->pc = 0x193DC4u;
    SET_GPR_U32(ctx, 31, 0x193DCCu);
    ctx->pc = 0x193DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DC4u;
    // 0x193dc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x193DC4u, 0x193DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DCCu;
label_193dcc:
    // 0x193dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193dd0:
    // 0x193dd0: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_193dd4:
    // 0x193dd4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_193dd8:
    // 0x193dd8: 0x40f809  jalr        $v0
label_193ddc:
    if (ctx->pc == 0x193DDCu) {
        ctx->pc = 0x193DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DD8u;
        // 0x193ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193DE0u;
        goto label_193de0;
    }
    ctx->pc = 0x193DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193DE0u);
        ctx->pc = 0x193DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DD8u;
        // 0x193ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193DD8u, 0x193DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193DE0u;
label_193de0:
    // 0x193de0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_193de4:
    if (ctx->pc == 0x193DE4u) {
        ctx->pc = 0x193DE8u;
        goto label_193de8;
    }
    ctx->pc = 0x193DE0u;
    {
        const bool branch_taken_0x193de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193de0) {
            ctx->pc = 0x193DFCu;
            goto label_193dfc;
        }
    }
    ctx->pc = 0x193DE8u;
label_193de8:
    // 0x193de8: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x193de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_193dec:
    // 0x193dec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x193decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_193df0:
    // 0x193df0: 0xc0f62ca  jal         func_3D8B28
label_193df4:
    if (ctx->pc == 0x193DF4u) {
        ctx->pc = 0x193DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DF0u;
        // 0x193df4: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193DF8u;
        goto label_193df8;
    }
    ctx->pc = 0x193DF0u;
    SET_GPR_U32(ctx, 31, 0x193DF8u);
    ctx->pc = 0x193DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DF0u;
    // 0x193df4: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x193DF0u, 0x193DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DF8u;
label_193df8:
    // 0x193df8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x193df8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_193dfc:
    // 0x193dfc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_193e00:
    if (ctx->pc == 0x193E00u) {
        ctx->pc = 0x193E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DFCu;
        // 0x193e00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E04u;
        goto label_193e04;
    }
    ctx->pc = 0x193DFCu;
    {
        const bool branch_taken_0x193dfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DFCu;
        // 0x193e00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dfc) {
            ctx->pc = 0x193E18u;
            goto label_193e18;
        }
    }
    ctx->pc = 0x193E04u;
label_193e04:
    // 0x193e04: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x193e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_193e08:
    // 0x193e08: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_193e0c:
    if (ctx->pc == 0x193E0Cu) {
        ctx->pc = 0x193E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E08u;
        // 0x193e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E10u;
        goto label_193e10;
    }
    ctx->pc = 0x193E08u;
    {
        const bool branch_taken_0x193e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193e08) {
            ctx->pc = 0x193E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193E08u;
            // 0x193e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193E1Cu;
            goto label_193e1c;
        }
    }
    ctx->pc = 0x193E10u;
label_193e10:
    // 0x193e10: 0xc06530a  jal         func_194C28
label_193e14:
    if (ctx->pc == 0x193E14u) {
        ctx->pc = 0x193E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E10u;
        // 0x193e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E18u;
        goto label_193e18;
    }
    ctx->pc = 0x193E10u;
    SET_GPR_U32(ctx, 31, 0x193E18u);
    ctx->pc = 0x193E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E10u;
    // 0x193e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194C28u, 0x193E10u, 0x193E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E18u;
label_193e18:
    // 0x193e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193e1c:
    // 0x193e1c: 0xc061a1a  jal         func_186868
label_193e20:
    if (ctx->pc == 0x193E20u) {
        ctx->pc = 0x193E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E1Cu;
        // 0x193e20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E24u;
        goto label_193e24;
    }
    ctx->pc = 0x193E1Cu;
    SET_GPR_U32(ctx, 31, 0x193E24u);
    ctx->pc = 0x193E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E1Cu;
    // 0x193e20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x193E1Cu, 0x193E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E24u;
label_193e24:
    // 0x193e24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x193e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_193e28:
    // 0x193e28: 0xc072596  jal         func_1C9658
label_193e2c:
    if (ctx->pc == 0x193E2Cu) {
        ctx->pc = 0x193E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E28u;
        // 0x193e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E30u;
        goto label_193e30;
    }
    ctx->pc = 0x193E28u;
    SET_GPR_U32(ctx, 31, 0x193E30u);
    ctx->pc = 0x193E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E28u;
    // 0x193e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x193E28u, 0x193E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E30u;
label_193e30:
    // 0x193e30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_193e34:
    // 0x193e34: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x193e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
label_193e38:
    // 0x193e38: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x193e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_193e3c:
    // 0x193e3c: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x193e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
label_193e40:
    // 0x193e40: 0x34c601ff  ori         $a2, $a2, 0x1FF
    ctx->pc = 0x193e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)511);
label_193e44:
    // 0x193e44: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x193e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_193e48:
    // 0x193e48: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x193e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_193e4c:
    // 0x193e4c: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_193e50:
    // 0x193e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193e54:
    // 0x193e54: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x193e54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_193e58:
    // 0x193e58: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x193e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_193e5c:
    // 0x193e5c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x193e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_193e60:
    // 0x193e60: 0xc061a1e  jal         func_186878
label_193e64:
    if (ctx->pc == 0x193E64u) {
        ctx->pc = 0x193E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E60u;
        // 0x193e64: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E68u;
        goto label_193e68;
    }
    ctx->pc = 0x193E60u;
    SET_GPR_U32(ctx, 31, 0x193E68u);
    ctx->pc = 0x193E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E60u;
    // 0x193e64: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193E60u, 0x193E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E68u;
label_193e68:
    // 0x193e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193e6c:
    // 0x193e6c: 0xc061a1e  jal         func_186878
label_193e70:
    if (ctx->pc == 0x193E70u) {
        ctx->pc = 0x193E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E6Cu;
        // 0x193e70: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E74u;
        goto label_193e74;
    }
    ctx->pc = 0x193E6Cu;
    SET_GPR_U32(ctx, 31, 0x193E74u);
    ctx->pc = 0x193E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E6Cu;
    // 0x193e70: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193E6Cu, 0x193E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E74u;
label_193e74:
    // 0x193e74: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x193e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_193e78:
    // 0x193e78: 0xc061a1e  jal         func_186878
label_193e7c:
    if (ctx->pc == 0x193E7Cu) {
        ctx->pc = 0x193E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E78u;
        // 0x193e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E80u;
        goto label_193e80;
    }
    ctx->pc = 0x193E78u;
    SET_GPR_U32(ctx, 31, 0x193E80u);
    ctx->pc = 0x193E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E78u;
    // 0x193e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193E78u, 0x193E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E80u;
label_193e80:
    // 0x193e80: 0xac500178  sw          $s0, 0x178($v0)
    ctx->pc = 0x193e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 16));
label_193e84:
    // 0x193e84: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x193e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_193e88:
    // 0x193e88: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x193e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_193e8c:
    // 0x193e8c: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
label_193e90:
    if (ctx->pc == 0x193E90u) {
        ctx->pc = 0x193E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E8Cu;
        // 0x193e90: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E94u;
        goto label_193e94;
    }
    ctx->pc = 0x193E8Cu;
    {
        const bool branch_taken_0x193e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E8Cu;
        // 0x193e90: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e8c) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x193E94u;
label_193e94:
    // 0x193e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x193e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_193e98:
    // 0x193e98: 0x2442fd90  addiu       $v0, $v0, -0x270
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
label_193e9c:
    // 0x193e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_193ea0:
    // 0x193ea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_193ea4:
    // 0x193ea4: 0x800008  jr          $a0
label_193ea8:
    if (ctx->pc == 0x193EA8u) {
        ctx->pc = 0x193EACu;
        goto label_193eac;
    }
    ctx->pc = 0x193EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193EACu: goto label_193eac;
            case 0x193EE0u: goto label_193ee0;
            case 0x193F4Cu: goto label_193f4c;
            case 0x193F9Cu: goto label_193f9c;
            case 0x19412Cu: goto label_19412c;
            case 0x194188u: goto label_194188;
            case 0x194268u: goto label_194268;
            case 0x19431Cu: goto label_19431c;
            case 0x194444u: goto label_194444;
            case 0x1946A0u: goto label_1946a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193EA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193EACu;
label_193eac:
    // 0x193eac: 0xc06544e  jal         func_195138
label_193eb0:
    if (ctx->pc == 0x193EB0u) {
        ctx->pc = 0x193EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EACu;
        // 0x193eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193EB4u;
        goto label_193eb4;
    }
    ctx->pc = 0x193EACu;
    SET_GPR_U32(ctx, 31, 0x193EB4u);
    ctx->pc = 0x193EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193EACu;
    // 0x193eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195138u, 0x193EACu, 0x193EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EB4u;
label_193eb4:
    // 0x193eb4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_193eb8:
    if (ctx->pc == 0x193EB8u) {
        ctx->pc = 0x193EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EB4u;
        // 0x193eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193EBCu;
        goto label_193ebc;
    }
    ctx->pc = 0x193EB4u;
    {
        const bool branch_taken_0x193eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EB4u;
        // 0x193eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193eb4) {
            ctx->pc = 0x193F0Cu;
            goto label_193f0c;
        }
    }
    ctx->pc = 0x193EBCu;
label_193ebc:
    // 0x193ebc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x193ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_193ec0:
    // 0x193ec0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_193ec4:
    if (ctx->pc == 0x193EC4u) {
        ctx->pc = 0x193EC8u;
        goto label_193ec8;
    }
    ctx->pc = 0x193EC0u;
    {
        const bool branch_taken_0x193ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193ec0) {
            ctx->pc = 0x193F8Cu;
            goto label_193f8c;
        }
    }
    ctx->pc = 0x193EC8u;
label_193ec8:
    // 0x193ec8: 0xc0654a0  jal         func_195280
label_193ecc:
    if (ctx->pc == 0x193ECCu) {
        ctx->pc = 0x193ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EC8u;
        // 0x193ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193ED0u;
        goto label_193ed0;
    }
    ctx->pc = 0x193EC8u;
    SET_GPR_U32(ctx, 31, 0x193ED0u);
    ctx->pc = 0x193ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193EC8u;
    // 0x193ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195280u, 0x193EC8u, 0x193ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193ED0u;
label_193ed0:
    // 0x193ed0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_193ed4:
    if (ctx->pc == 0x193ED4u) {
        ctx->pc = 0x193ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ED0u;
        // 0x193ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193ED8u;
        goto label_193ed8;
    }
    ctx->pc = 0x193ED0u;
    {
        const bool branch_taken_0x193ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ED0u;
        // 0x193ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ed0) {
            ctx->pc = 0x193F3Cu;
            goto label_193f3c;
        }
    }
    ctx->pc = 0x193ED8u;
label_193ed8:
    // 0x193ed8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_193edc:
    if (ctx->pc == 0x193EDCu) {
        ctx->pc = 0x193EE0u;
        goto label_193ee0;
    }
    ctx->pc = 0x193ED8u;
    {
        const bool branch_taken_0x193ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ed8) {
            ctx->pc = 0x193F8Cu;
            goto label_193f8c;
        }
    }
    ctx->pc = 0x193EE0u;
label_193ee0:
    // 0x193ee0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x193ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_193ee4:
    // 0x193ee4: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x193ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_193ee8:
    // 0x193ee8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x193ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_193eec:
    // 0x193eec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_193ef0:
    if (ctx->pc == 0x193EF0u) {
        ctx->pc = 0x193EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EECu;
        // 0x193ef0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193EF4u;
        goto label_193ef4;
    }
    ctx->pc = 0x193EECu;
    {
        const bool branch_taken_0x193eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EECu;
        // 0x193ef0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193eec) {
            ctx->pc = 0x193EFCu;
            goto label_193efc;
        }
    }
    ctx->pc = 0x193EF4u;
label_193ef4:
    // 0x193ef4: 0x100001ea  b           . + 4 + (0x1EA << 2)
label_193ef8:
    if (ctx->pc == 0x193EF8u) {
        ctx->pc = 0x193EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EF4u;
        // 0x193ef8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193EFCu;
        goto label_193efc;
    }
    ctx->pc = 0x193EF4u;
    {
        const bool branch_taken_0x193ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EF4u;
        // 0x193ef8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ef4) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x193EFCu;
label_193efc:
    // 0x193efc: 0xc06544e  jal         func_195138
label_193f00:
    if (ctx->pc == 0x193F00u) {
        ctx->pc = 0x193F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EFCu;
        // 0x193f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F04u;
        goto label_193f04;
    }
    ctx->pc = 0x193EFCu;
    SET_GPR_U32(ctx, 31, 0x193F04u);
    ctx->pc = 0x193F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193EFCu;
    // 0x193f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195138u, 0x193EFCu, 0x193F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F04u;
label_193f04:
    // 0x193f04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_193f08:
    if (ctx->pc == 0x193F08u) {
        ctx->pc = 0x193F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F04u;
        // 0x193f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F0Cu;
        goto label_193f0c;
    }
    ctx->pc = 0x193F04u;
    {
        const bool branch_taken_0x193f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F04u;
        // 0x193f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f04) {
            ctx->pc = 0x193F1Cu;
            goto label_193f1c;
        }
    }
    ctx->pc = 0x193F0Cu;
label_193f0c:
    // 0x193f0c: 0xc065206  jal         func_194818
label_193f10:
    if (ctx->pc == 0x193F10u) {
        ctx->pc = 0x193F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F0Cu;
        // 0x193f10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F14u;
        goto label_193f14;
    }
    ctx->pc = 0x193F0Cu;
    SET_GPR_U32(ctx, 31, 0x193F14u);
    ctx->pc = 0x193F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F0Cu;
    // 0x193f10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194818u, 0x193F0Cu, 0x193F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F14u;
label_193f14:
    // 0x193f14: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_193f18:
    if (ctx->pc == 0x193F18u) {
        ctx->pc = 0x193F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F14u;
        // 0x193f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F1Cu;
        goto label_193f1c;
    }
    ctx->pc = 0x193F14u;
    {
        const bool branch_taken_0x193f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F14u;
        // 0x193f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f14) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x193F1Cu;
label_193f1c:
    // 0x193f1c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x193f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_193f20:
    // 0x193f20: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
label_193f24:
    if (ctx->pc == 0x193F24u) {
        ctx->pc = 0x193F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F20u;
        // 0x193f24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F28u;
        goto label_193f28;
    }
    ctx->pc = 0x193F20u;
    {
        const bool branch_taken_0x193f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F20u;
        // 0x193f24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f20) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x193F28u;
label_193f28:
    // 0x193f28: 0xc0654a0  jal         func_195280
label_193f2c:
    if (ctx->pc == 0x193F2Cu) {
        ctx->pc = 0x193F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F28u;
        // 0x193f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F30u;
        goto label_193f30;
    }
    ctx->pc = 0x193F28u;
    SET_GPR_U32(ctx, 31, 0x193F30u);
    ctx->pc = 0x193F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F28u;
    // 0x193f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195280u, 0x193F28u, 0x193F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F30u;
label_193f30:
    // 0x193f30: 0x104001dc  beqz        $v0, . + 4 + (0x1DC << 2)
label_193f34:
    if (ctx->pc == 0x193F34u) {
        ctx->pc = 0x193F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F30u;
        // 0x193f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F38u;
        goto label_193f38;
    }
    ctx->pc = 0x193F30u;
    {
        const bool branch_taken_0x193f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F30u;
        // 0x193f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f30) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x193F38u;
label_193f38:
    // 0x193f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193f3c:
    // 0x193f3c: 0xc06533e  jal         func_194CF8
label_193f40:
    if (ctx->pc == 0x193F40u) {
        ctx->pc = 0x193F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F3Cu;
        // 0x193f40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F44u;
        goto label_193f44;
    }
    ctx->pc = 0x193F3Cu;
    SET_GPR_U32(ctx, 31, 0x193F44u);
    ctx->pc = 0x193F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F3Cu;
    // 0x193f40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194CF8u, 0x193F3Cu, 0x193F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F44u;
label_193f44:
    // 0x193f44: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_193f48:
    if (ctx->pc == 0x193F48u) {
        ctx->pc = 0x193F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F44u;
        // 0x193f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F4Cu;
        goto label_193f4c;
    }
    ctx->pc = 0x193F44u;
    {
        const bool branch_taken_0x193f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F44u;
        // 0x193f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f44) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x193F4Cu;
label_193f4c:
    // 0x193f4c: 0xc061a16  jal         func_186858
label_193f50:
    if (ctx->pc == 0x193F50u) {
        ctx->pc = 0x193F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F4Cu;
        // 0x193f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F54u;
        goto label_193f54;
    }
    ctx->pc = 0x193F4Cu;
    SET_GPR_U32(ctx, 31, 0x193F54u);
    ctx->pc = 0x193F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F4Cu;
    // 0x193f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193F4Cu, 0x193F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F54u;
label_193f54:
    // 0x193f54: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x193f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_193f58:
    // 0x193f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f5c:
    // 0x193f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193f60:
    // 0x193f60: 0xc061a12  jal         func_186848
label_193f64:
    if (ctx->pc == 0x193F64u) {
        ctx->pc = 0x193F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F60u;
        // 0x193f64: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F68u;
        goto label_193f68;
    }
    ctx->pc = 0x193F60u;
    SET_GPR_U32(ctx, 31, 0x193F68u);
    ctx->pc = 0x193F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F60u;
    // 0x193f64: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x193F60u, 0x193F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F68u;
label_193f68:
    // 0x193f68: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x193f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_193f6c:
    // 0x193f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193f70:
    // 0x193f70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x193f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_193f74:
    // 0x193f74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x193f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_193f78:
    // 0x193f78: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x193f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_193f7c:
    // 0x193f7c: 0x40f809  jalr        $v0
label_193f80:
    if (ctx->pc == 0x193F80u) {
        ctx->pc = 0x193F84u;
        goto label_193f84;
    }
    ctx->pc = 0x193F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193F84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193F7Cu, 0x193F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193F84u;
label_193f84:
    // 0x193f84: 0x104001c7  beqz        $v0, . + 4 + (0x1C7 << 2)
label_193f88:
    if (ctx->pc == 0x193F88u) {
        ctx->pc = 0x193F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F84u;
        // 0x193f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F8Cu;
        goto label_193f8c;
    }
    ctx->pc = 0x193F84u;
    {
        const bool branch_taken_0x193f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F84u;
        // 0x193f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f84) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x193F8Cu;
label_193f8c:
    // 0x193f8c: 0xc0651d8  jal         func_194760
label_193f90:
    if (ctx->pc == 0x193F90u) {
        ctx->pc = 0x193F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F8Cu;
        // 0x193f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F94u;
        goto label_193f94;
    }
    ctx->pc = 0x193F8Cu;
    SET_GPR_U32(ctx, 31, 0x193F94u);
    ctx->pc = 0x193F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F8Cu;
    // 0x193f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194760u, 0x193F8Cu, 0x193F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F94u;
label_193f94:
    // 0x193f94: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_193f98:
    if (ctx->pc == 0x193F98u) {
        ctx->pc = 0x193F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F94u;
        // 0x193f98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F9Cu;
        goto label_193f9c;
    }
    ctx->pc = 0x193F94u;
    {
        const bool branch_taken_0x193f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F94u;
        // 0x193f98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f94) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x193F9Cu;
label_193f9c:
    // 0x193f9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x193f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_193fa0:
    // 0x193fa0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x193fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_193fa4:
    // 0x193fa4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_193fa8:
    if (ctx->pc == 0x193FA8u) {
        ctx->pc = 0x193FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FA4u;
        // 0x193fa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193FACu;
        goto label_193fac;
    }
    ctx->pc = 0x193FA4u;
    {
        const bool branch_taken_0x193fa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x193FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FA4u;
        // 0x193fa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fa4) {
            ctx->pc = 0x193FC0u;
            goto label_193fc0;
        }
    }
    ctx->pc = 0x193FACu;
label_193fac:
    // 0x193fac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193fb0:
    // 0x193fb0: 0x0  nop
    ctx->pc = 0x193fb0u;
    // NOP
label_193fb4:
    // 0x193fb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_193fb8:
    // 0x193fb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_193fbc:
    if (ctx->pc == 0x193FBCu) {
        ctx->pc = 0x193FC0u;
        goto label_193fc0;
    }
    ctx->pc = 0x193FB8u;
    {
        const bool branch_taken_0x193fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fb8) {
            ctx->pc = 0x193FD8u;
            goto label_193fd8;
        }
    }
    ctx->pc = 0x193FC0u;
label_193fc0:
    // 0x193fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_193fc4:
    // 0x193fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193fc8:
    // 0x193fc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193fcc:
    // 0x193fcc: 0x0  nop
    ctx->pc = 0x193fccu;
    // NOP
label_193fd0:
    // 0x193fd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_193fd4:
    // 0x193fd4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x193fd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_193fd8:
    // 0x193fd8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x193fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_193fdc:
    // 0x193fdc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x193fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_193fe0:
    // 0x193fe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193fe4:
    // 0x193fe4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x193fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193fe8:
    // 0x193fe8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x193fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_193fec:
    // 0x193fec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193ff0:
    // 0x193ff0: 0x0  nop
    ctx->pc = 0x193ff0u;
    // NOP
label_193ff4:
    // 0x193ff4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_193ff8:
    if (ctx->pc == 0x193FF8u) {
        ctx->pc = 0x193FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FF4u;
        // 0x193ff8: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193FFCu;
        goto label_193ffc;
    }
    ctx->pc = 0x193FF4u;
    {
        const bool branch_taken_0x193ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193ff4) {
            ctx->pc = 0x193FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193FF4u;
            // 0x193ff8: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194024u;
            goto label_194024;
        }
    }
    ctx->pc = 0x193FFCu;
label_193ffc:
    // 0x193ffc: 0xc061a16  jal         func_186858
label_194000:
    if (ctx->pc == 0x194000u) {
        ctx->pc = 0x194000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FFCu;
        // 0x194000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194004u;
        goto label_194004;
    }
    ctx->pc = 0x193FFCu;
    SET_GPR_U32(ctx, 31, 0x194004u);
    ctx->pc = 0x194000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193FFCu;
    // 0x194000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193FFCu, 0x194004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194004u;
label_194004:
    // 0x194004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194008:
    // 0x194008: 0xc061a1e  jal         func_186878
label_19400c:
    if (ctx->pc == 0x19400Cu) {
        ctx->pc = 0x19400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194008u;
        // 0x19400c: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194010u;
        goto label_194010;
    }
    ctx->pc = 0x194008u;
    SET_GPR_U32(ctx, 31, 0x194010u);
    ctx->pc = 0x19400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194008u;
    // 0x19400c: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x194008u, 0x194010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194010u;
label_194010:
    // 0x194010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194014:
    // 0x194014: 0xc06cdea  jal         func_1B37A8
label_194018:
    if (ctx->pc == 0x194018u) {
        ctx->pc = 0x194018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194014u;
        // 0x194018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19401Cu;
        goto label_19401c;
    }
    ctx->pc = 0x194014u;
    SET_GPR_U32(ctx, 31, 0x19401Cu);
    ctx->pc = 0x194018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194014u;
    // 0x194018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x194014u, 0x19401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19401Cu;
label_19401c:
    // 0x19401c: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_194020:
    if (ctx->pc == 0x194020u) {
        ctx->pc = 0x194020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19401Cu;
        // 0x194020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194024u;
        goto label_194024;
    }
    ctx->pc = 0x19401Cu;
    {
        const bool branch_taken_0x19401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19401Cu;
        // 0x194020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19401c) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x194024u;
label_194024:
    // 0x194024: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_194028:
    if (ctx->pc == 0x194028u) {
        ctx->pc = 0x19402Cu;
        goto label_19402c;
    }
    ctx->pc = 0x194024u;
    {
        const bool branch_taken_0x194024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194024) {
            ctx->pc = 0x194048u;
            goto label_194048;
        }
    }
    ctx->pc = 0x19402Cu;
label_19402c:
    // 0x19402c: 0xc061a12  jal         func_186848
label_194030:
    if (ctx->pc == 0x194030u) {
        ctx->pc = 0x194030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19402Cu;
        // 0x194030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194034u;
        goto label_194034;
    }
    ctx->pc = 0x19402Cu;
    SET_GPR_U32(ctx, 31, 0x194034u);
    ctx->pc = 0x194030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19402Cu;
    // 0x194030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19402Cu, 0x194034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194034u;
label_194034:
    // 0x194034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194038:
    // 0x194038: 0xc06f37e  jal         func_1BCDF8
label_19403c:
    if (ctx->pc == 0x19403Cu) {
        ctx->pc = 0x19403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194038u;
        // 0x19403c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194040u;
        goto label_194040;
    }
    ctx->pc = 0x194038u;
    SET_GPR_U32(ctx, 31, 0x194040u);
    ctx->pc = 0x19403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194038u;
    // 0x19403c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCDF8u, 0x194038u, 0x194040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194040u;
label_194040:
    // 0x194040: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_194044:
    if (ctx->pc == 0x194044u) {
        ctx->pc = 0x194048u;
        goto label_194048;
    }
    ctx->pc = 0x194040u;
    {
        const bool branch_taken_0x194040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194040) {
            ctx->pc = 0x19430Cu;
            goto label_19430c;
        }
    }
    ctx->pc = 0x194048u;
label_194048:
    // 0x194048: 0xc061a16  jal         func_186858
label_19404c:
    if (ctx->pc == 0x19404Cu) {
        ctx->pc = 0x19404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194048u;
        // 0x19404c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194050u;
        goto label_194050;
    }
    ctx->pc = 0x194048u;
    SET_GPR_U32(ctx, 31, 0x194050u);
    ctx->pc = 0x19404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194048u;
    // 0x19404c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194048u, 0x194050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194050u;
label_194050:
    // 0x194050: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_194054:
    // 0x194054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194058:
    // 0x194058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19405c:
    // 0x19405c: 0xc061a12  jal         func_186848
label_194060:
    if (ctx->pc == 0x194060u) {
        ctx->pc = 0x194060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19405Cu;
        // 0x194060: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194064u;
        goto label_194064;
    }
    ctx->pc = 0x19405Cu;
    SET_GPR_U32(ctx, 31, 0x194064u);
    ctx->pc = 0x194060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19405Cu;
    // 0x194060: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19405Cu, 0x194064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194064u;
label_194064:
    // 0x194064: 0xc4410290  lwc1        $f1, 0x290($v0)
    ctx->pc = 0x194064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194068:
    // 0x194068: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x194068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_19406c:
    // 0x19406c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19406cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194070:
    // 0x194070: 0x0  nop
    ctx->pc = 0x194070u;
    // NOP
label_194074:
    // 0x194074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194078:
    // 0x194078: 0x0  nop
    ctx->pc = 0x194078u;
    // NOP
label_19407c:
    // 0x19407c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_194080:
    if (ctx->pc == 0x194080u) {
        ctx->pc = 0x194084u;
        goto label_194084;
    }
    ctx->pc = 0x19407Cu;
    {
        const bool branch_taken_0x19407c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19407c) {
            ctx->pc = 0x1940B4u;
            goto label_1940b4;
        }
    }
    ctx->pc = 0x194084u;
label_194084:
    // 0x194084: 0xc061a12  jal         func_186848
label_194088:
    if (ctx->pc == 0x194088u) {
        ctx->pc = 0x194088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194084u;
        // 0x194088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19408Cu;
        goto label_19408c;
    }
    ctx->pc = 0x194084u;
    SET_GPR_U32(ctx, 31, 0x19408Cu);
    ctx->pc = 0x194088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194084u;
    // 0x194088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194084u, 0x19408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19408Cu;
label_19408c:
    // 0x19408c: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x19408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_194090:
    // 0x194090: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x194090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_194094:
    // 0x194094: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x194094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_194098:
    // 0x194098: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_19409c:
    if (ctx->pc == 0x19409Cu) {
        ctx->pc = 0x19409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194098u;
        // 0x19409c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940A0u;
        goto label_1940a0;
    }
    ctx->pc = 0x194098u;
    {
        const bool branch_taken_0x194098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194098) {
            ctx->pc = 0x19409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194098u;
            // 0x19409c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1940A4u;
            goto label_1940a4;
        }
    }
    ctx->pc = 0x1940A0u;
label_1940a0:
    // 0x1940a0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1940a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1940a4:
    // 0x1940a4: 0xc0654a2  jal         func_195288
label_1940a8:
    if (ctx->pc == 0x1940A8u) {
        ctx->pc = 0x1940A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940A4u;
        // 0x1940a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940ACu;
        goto label_1940ac;
    }
    ctx->pc = 0x1940A4u;
    SET_GPR_U32(ctx, 31, 0x1940ACu);
    ctx->pc = 0x1940A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940A4u;
    // 0x1940a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195288u, 0x1940A4u, 0x1940ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940ACu;
label_1940ac:
    // 0x1940ac: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_1940b0:
    if (ctx->pc == 0x1940B0u) {
        ctx->pc = 0x1940B4u;
        goto label_1940b4;
    }
    ctx->pc = 0x1940ACu;
    {
        const bool branch_taken_0x1940ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940ac) {
            ctx->pc = 0x19430Cu;
            goto label_19430c;
        }
    }
    ctx->pc = 0x1940B4u;
label_1940b4:
    // 0x1940b4: 0xc061a12  jal         func_186848
label_1940b8:
    if (ctx->pc == 0x1940B8u) {
        ctx->pc = 0x1940B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940B4u;
        // 0x1940b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940BCu;
        goto label_1940bc;
    }
    ctx->pc = 0x1940B4u;
    SET_GPR_U32(ctx, 31, 0x1940BCu);
    ctx->pc = 0x1940B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940B4u;
    // 0x1940b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1940B4u, 0x1940BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940BCu;
label_1940bc:
    // 0x1940bc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1940bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1940c0:
    // 0x1940c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1940c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1940c4:
    // 0x1940c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1940c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1940c8:
    // 0x1940c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1940c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1940cc:
    // 0x1940cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1940ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1940d0:
    // 0x1940d0: 0x40f809  jalr        $v0
label_1940d4:
    if (ctx->pc == 0x1940D4u) {
        ctx->pc = 0x1940D8u;
        goto label_1940d8;
    }
    ctx->pc = 0x1940D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1940D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1940D0u, 0x1940D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1940D8u;
label_1940d8:
    // 0x1940d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1940dc:
    if (ctx->pc == 0x1940DCu) {
        ctx->pc = 0x1940DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940D8u;
        // 0x1940dc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940E0u;
        goto label_1940e0;
    }
    ctx->pc = 0x1940D8u;
    {
        const bool branch_taken_0x1940d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940D8u;
        // 0x1940dc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940d8) {
            ctx->pc = 0x1940F0u;
            goto label_1940f0;
        }
    }
    ctx->pc = 0x1940E0u;
label_1940e0:
    // 0x1940e0: 0xc06529c  jal         func_194A70
label_1940e4:
    if (ctx->pc == 0x1940E4u) {
        ctx->pc = 0x1940E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940E0u;
        // 0x1940e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940E8u;
        goto label_1940e8;
    }
    ctx->pc = 0x1940E0u;
    SET_GPR_U32(ctx, 31, 0x1940E8u);
    ctx->pc = 0x1940E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940E0u;
    // 0x1940e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194A70u, 0x1940E0u, 0x1940E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940E8u;
label_1940e8:
    // 0x1940e8: 0x1000016e  b           . + 4 + (0x16E << 2)
label_1940ec:
    if (ctx->pc == 0x1940ECu) {
        ctx->pc = 0x1940ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940E8u;
        // 0x1940ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940F0u;
        goto label_1940f0;
    }
    ctx->pc = 0x1940E8u;
    {
        const bool branch_taken_0x1940e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940E8u;
        // 0x1940ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940e8) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x1940F0u;
label_1940f0:
    // 0x1940f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1940f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1940f4:
    // 0x1940f4: 0xc061a12  jal         func_186848
label_1940f8:
    if (ctx->pc == 0x1940F8u) {
        ctx->pc = 0x1940F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940F4u;
        // 0x1940f8: 0x2450f140  addiu       $s0, $v0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940FCu;
        goto label_1940fc;
    }
    ctx->pc = 0x1940F4u;
    SET_GPR_U32(ctx, 31, 0x1940FCu);
    ctx->pc = 0x1940F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1940F4u;
    // 0x1940f8: 0x2450f140  addiu       $s0, $v0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1940F4u, 0x1940FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1940FCu;
label_1940fc:
    // 0x1940fc: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x1940fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_194100:
    // 0x194100: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x194100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_194104:
    // 0x194104: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x194104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_194108:
    // 0x194108: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_19410c:
    if (ctx->pc == 0x19410Cu) {
        ctx->pc = 0x19410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194108u;
        // 0x19410c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194110u;
        goto label_194110;
    }
    ctx->pc = 0x194108u;
    {
        const bool branch_taken_0x194108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194108) {
            ctx->pc = 0x19410Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194108u;
            // 0x19410c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194114u;
            goto label_194114;
        }
    }
    ctx->pc = 0x194110u;
label_194110:
    // 0x194110: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x194110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_194114:
    // 0x194114: 0xc0f62ca  jal         func_3D8B28
label_194118:
    if (ctx->pc == 0x194118u) {
        ctx->pc = 0x194118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194114u;
        // 0x194118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19411Cu;
        goto label_19411c;
    }
    ctx->pc = 0x194114u;
    SET_GPR_U32(ctx, 31, 0x19411Cu);
    ctx->pc = 0x194118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194114u;
    // 0x194118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x194114u, 0x19411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19411Cu;
label_19411c:
    // 0x19411c: 0x10400161  beqz        $v0, . + 4 + (0x161 << 2)
label_194120:
    if (ctx->pc == 0x194120u) {
        ctx->pc = 0x194120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19411Cu;
        // 0x194120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194124u;
        goto label_194124;
    }
    ctx->pc = 0x19411Cu;
    {
        const bool branch_taken_0x19411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19411Cu;
        // 0x194120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19411c) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x194124u;
label_194124:
    // 0x194124: 0x10000079  b           . + 4 + (0x79 << 2)
label_194128:
    if (ctx->pc == 0x194128u) {
        ctx->pc = 0x19412Cu;
        goto label_19412c;
    }
    ctx->pc = 0x194124u;
    {
        const bool branch_taken_0x194124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194124) {
            ctx->pc = 0x19430Cu;
            goto label_19430c;
        }
    }
    ctx->pc = 0x19412Cu;
label_19412c:
    // 0x19412c: 0xc061a12  jal         func_186848
label_194130:
    if (ctx->pc == 0x194130u) {
        ctx->pc = 0x194130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19412Cu;
        // 0x194130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194134u;
        goto label_194134;
    }
    ctx->pc = 0x19412Cu;
    SET_GPR_U32(ctx, 31, 0x194134u);
    ctx->pc = 0x194130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19412Cu;
    // 0x194130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19412Cu, 0x194134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194134u;
label_194134:
    // 0x194134: 0x8c4304b0  lw          $v1, 0x4B0($v0)
    ctx->pc = 0x194134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_194138:
    // 0x194138: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x194138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_19413c:
    // 0x19413c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194140:
    if (ctx->pc == 0x194140u) {
        ctx->pc = 0x194144u;
        goto label_194144;
    }
    ctx->pc = 0x19413Cu;
    {
        const bool branch_taken_0x19413c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19413c) {
            ctx->pc = 0x19415Cu;
            goto label_19415c;
        }
    }
    ctx->pc = 0x194144u;
label_194144:
    // 0x194144: 0xc061a12  jal         func_186848
label_194148:
    if (ctx->pc == 0x194148u) {
        ctx->pc = 0x194148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194144u;
        // 0x194148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19414Cu;
        goto label_19414c;
    }
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194144u;
    // 0x194148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194144u, 0x19414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19414Cu;
label_19414c:
    // 0x19414c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_194150:
    // 0x194150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194154:
    // 0x194154: 0xc070894  jal         func_1C2250
label_194158:
    if (ctx->pc == 0x194158u) {
        ctx->pc = 0x194158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194154u;
        // 0x194158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19415Cu;
        goto label_19415c;
    }
    ctx->pc = 0x194154u;
    SET_GPR_U32(ctx, 31, 0x19415Cu);
    ctx->pc = 0x194158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194154u;
    // 0x194158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x194154u, 0x19415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19415Cu;
label_19415c:
    // 0x19415c: 0xc061a12  jal         func_186848
label_194160:
    if (ctx->pc == 0x194160u) {
        ctx->pc = 0x194160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19415Cu;
        // 0x194160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194164u;
        goto label_194164;
    }
    ctx->pc = 0x19415Cu;
    SET_GPR_U32(ctx, 31, 0x194164u);
    ctx->pc = 0x194160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19415Cu;
    // 0x194160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19415Cu, 0x194164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194164u;
label_194164:
    // 0x194164: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x194164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_194168:
    // 0x194168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19416c:
    // 0x19416c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_194170:
    // 0x194170: 0x40f809  jalr        $v0
label_194174:
    if (ctx->pc == 0x194174u) {
        ctx->pc = 0x194178u;
        goto label_194178;
    }
    ctx->pc = 0x194170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194178u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194170u, 0x194178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194178u;
label_194178:
    // 0x194178: 0x1040014a  beqz        $v0, . + 4 + (0x14A << 2)
label_19417c:
    if (ctx->pc == 0x19417Cu) {
        ctx->pc = 0x19417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194178u;
        // 0x19417c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194180u;
        goto label_194180;
    }
    ctx->pc = 0x194178u;
    {
        const bool branch_taken_0x194178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194178u;
        // 0x19417c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194178) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x194180u;
label_194180:
    // 0x194180: 0x10000042  b           . + 4 + (0x42 << 2)
label_194184:
    if (ctx->pc == 0x194184u) {
        ctx->pc = 0x194188u;
        goto label_194188;
    }
    ctx->pc = 0x194180u;
    {
        const bool branch_taken_0x194180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194180) {
            ctx->pc = 0x19428Cu;
            goto label_19428c;
        }
    }
    ctx->pc = 0x194188u;
label_194188:
    // 0x194188: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x194188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_19418c:
    // 0x19418c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_194190:
    if (ctx->pc == 0x194190u) {
        ctx->pc = 0x194190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19418Cu;
        // 0x194190: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194194u;
        goto label_194194;
    }
    ctx->pc = 0x19418Cu;
    {
        const bool branch_taken_0x19418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19418Cu;
        // 0x194190: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19418c) {
            ctx->pc = 0x194234u;
            goto label_194234;
        }
    }
    ctx->pc = 0x194194u;
label_194194:
    // 0x194194: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_194198:
    // 0x194198: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x194198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19419c:
    // 0x19419c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19419cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1941a0:
    // 0x1941a0: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_1941a4:
    // 0x1941a4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_1941a8:
    // 0x1941a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1941a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1941ac:
    // 0x1941ac: 0x2630008c  addiu       $s0, $s1, 0x8C
    ctx->pc = 0x1941acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_1941b0:
    // 0x1941b0: 0xc061a12  jal         func_186848
label_1941b4:
    if (ctx->pc == 0x1941B4u) {
        ctx->pc = 0x1941B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941B0u;
        // 0x1941b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941B8u;
        goto label_1941b8;
    }
    ctx->pc = 0x1941B0u;
    SET_GPR_U32(ctx, 31, 0x1941B8u);
    ctx->pc = 0x1941B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1941B0u;
    // 0x1941b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1941B0u, 0x1941B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1941B8u;
label_1941b8:
    // 0x1941b8: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1941bc:
    // 0x1941bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1941bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1941c0:
    // 0x1941c0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1941c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1941c4:
    // 0x1941c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_1941c8:
    if (ctx->pc == 0x1941C8u) {
        ctx->pc = 0x1941C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941C4u;
        // 0x1941c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941CCu;
        goto label_1941cc;
    }
    ctx->pc = 0x1941C4u;
    {
        const bool branch_taken_0x1941c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1941c4) {
            ctx->pc = 0x1941C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1941C4u;
            // 0x1941c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1941D0u;
            goto label_1941d0;
        }
    }
    ctx->pc = 0x1941CCu;
label_1941cc:
    // 0x1941cc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1941ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1941d0:
    // 0x1941d0: 0x8e02ffe0  lw          $v0, -0x20($s0)
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
label_1941d4:
    // 0x1941d4: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_1941d8:
    if (ctx->pc == 0x1941D8u) {
        ctx->pc = 0x1941D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941D4u;
        // 0x1941d8: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941DCu;
        goto label_1941dc;
    }
    ctx->pc = 0x1941D4u;
    {
        const bool branch_taken_0x1941d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1941d4) {
            ctx->pc = 0x1941D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1941D4u;
            // 0x1941d8: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194224u;
            goto label_194224;
        }
    }
    ctx->pc = 0x1941DCu;
label_1941dc:
    // 0x1941dc: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
label_1941e0:
    // 0x1941e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1941e4:
    if (ctx->pc == 0x1941E4u) {
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E0u;
        // 0x1941e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941E8u;
        goto label_1941e8;
    }
    ctx->pc = 0x1941E0u;
    {
        const bool branch_taken_0x1941e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E0u;
        // 0x1941e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941e0) {
            ctx->pc = 0x1941FCu;
            goto label_1941fc;
        }
    }
    ctx->pc = 0x1941E8u;
label_1941e8:
    // 0x1941e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1941e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1941ec:
    // 0x1941ec: 0x0  nop
    ctx->pc = 0x1941ecu;
    // NOP
label_1941f0:
    // 0x1941f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1941f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1941f4:
    // 0x1941f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1941f8:
    if (ctx->pc == 0x1941F8u) {
        ctx->pc = 0x1941F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941F4u;
        // 0x1941f8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941FCu;
        goto label_1941fc;
    }
    ctx->pc = 0x1941F4u;
    {
        const bool branch_taken_0x1941f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941F4u;
        // 0x1941f8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941f4) {
            ctx->pc = 0x194218u;
            goto label_194218;
        }
    }
    ctx->pc = 0x1941FCu;
label_1941fc:
    // 0x1941fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1941fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_194200:
    // 0x194200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x194200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_194204:
    // 0x194204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194208:
    // 0x194208: 0x0  nop
    ctx->pc = 0x194208u;
    // NOP
label_19420c:
    // 0x19420c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19420cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_194210:
    // 0x194210: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x194210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_194214:
    // 0x194214: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x194214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_194218:
    // 0x194218: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x194218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_19421c:
    // 0x19421c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x19421cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_194220:
    // 0x194220: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x194220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_194224:
    // 0x194224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x194224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_194228:
    // 0x194228: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x194228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19422c:
    // 0x19422c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_194230:
    if (ctx->pc == 0x194230u) {
        ctx->pc = 0x194230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19422Cu;
        // 0x194230: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194234u;
        goto label_194234;
    }
    ctx->pc = 0x19422Cu;
    {
        const bool branch_taken_0x19422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19422Cu;
        // 0x194230: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19422c) {
            ctx->pc = 0x1941B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1941b0;
        }
    }
    ctx->pc = 0x194234u;
label_194234:
    // 0x194234: 0xc0654ee  jal         func_1953B8
label_194238:
    if (ctx->pc == 0x194238u) {
        ctx->pc = 0x194238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194234u;
        // 0x194238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19423Cu;
        goto label_19423c;
    }
    ctx->pc = 0x194234u;
    SET_GPR_U32(ctx, 31, 0x19423Cu);
    ctx->pc = 0x194238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194234u;
    // 0x194238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1953B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953B8u, 0x194234u, 0x19423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19423Cu;
label_19423c:
    // 0x19423c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_194240:
    if (ctx->pc == 0x194240u) {
        ctx->pc = 0x194244u;
        goto label_194244;
    }
    ctx->pc = 0x19423Cu;
    {
        const bool branch_taken_0x19423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19423c) {
            ctx->pc = 0x194254u;
            goto label_194254;
        }
    }
    ctx->pc = 0x194244u;
label_194244:
    // 0x194244: 0xc0653ec  jal         func_194FB0
label_194248:
    if (ctx->pc == 0x194248u) {
        ctx->pc = 0x194248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194244u;
        // 0x194248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19424Cu;
        goto label_19424c;
    }
    ctx->pc = 0x194244u;
    SET_GPR_U32(ctx, 31, 0x19424Cu);
    ctx->pc = 0x194248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194244u;
    // 0x194248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194FB0u, 0x194244u, 0x19424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19424Cu;
label_19424c:
    // 0x19424c: 0x10000115  b           . + 4 + (0x115 << 2)
label_194250:
    if (ctx->pc == 0x194250u) {
        ctx->pc = 0x194250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19424Cu;
        // 0x194250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194254u;
        goto label_194254;
    }
    ctx->pc = 0x19424Cu;
    {
        const bool branch_taken_0x19424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19424Cu;
        // 0x194250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19424c) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x194254u;
label_194254:
    // 0x194254: 0xc061a16  jal         func_186858
label_194258:
    if (ctx->pc == 0x194258u) {
        ctx->pc = 0x194258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194254u;
        // 0x194258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19425Cu;
        goto label_19425c;
    }
    ctx->pc = 0x194254u;
    SET_GPR_U32(ctx, 31, 0x19425Cu);
    ctx->pc = 0x194258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194254u;
    // 0x194258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194254u, 0x19425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19425Cu;
label_19425c:
    // 0x19425c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194260:
    // 0x194260: 0x1000010f  b           . + 4 + (0x10F << 2)
label_194264:
    if (ctx->pc == 0x194264u) {
        ctx->pc = 0x194264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194260u;
        // 0x194264: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194268u;
        goto label_194268;
    }
    ctx->pc = 0x194260u;
    {
        const bool branch_taken_0x194260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194260u;
        // 0x194264: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194260) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x194268u;
label_194268:
    // 0x194268: 0xc061a1e  jal         func_186878
label_19426c:
    if (ctx->pc == 0x19426Cu) {
        ctx->pc = 0x19426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194268u;
        // 0x19426c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194270u;
        goto label_194270;
    }
    ctx->pc = 0x194268u;
    SET_GPR_U32(ctx, 31, 0x194270u);
    ctx->pc = 0x19426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194268u;
    // 0x19426c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x194268u, 0x194270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194270u;
label_194270:
    // 0x194270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194274:
    // 0x194274: 0xc06cdea  jal         func_1B37A8
label_194278:
    if (ctx->pc == 0x194278u) {
        ctx->pc = 0x194278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194274u;
        // 0x194278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19427Cu;
        goto label_19427c;
    }
    ctx->pc = 0x194274u;
    SET_GPR_U32(ctx, 31, 0x19427Cu);
    ctx->pc = 0x194278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194274u;
    // 0x194278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x194274u, 0x19427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19427Cu;
label_19427c:
    // 0x19427c: 0xc0654ee  jal         func_1953B8
label_194280:
    if (ctx->pc == 0x194280u) {
        ctx->pc = 0x194280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19427Cu;
        // 0x194280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194284u;
        goto label_194284;
    }
    ctx->pc = 0x19427Cu;
    SET_GPR_U32(ctx, 31, 0x194284u);
    ctx->pc = 0x194280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19427Cu;
    // 0x194280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1953B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953B8u, 0x19427Cu, 0x194284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194284u;
label_194284:
    // 0x194284: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_194288:
    if (ctx->pc == 0x194288u) {
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194284u;
        // 0x194288: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19428Cu;
        goto label_19428c;
    }
    ctx->pc = 0x194284u;
    {
        const bool branch_taken_0x194284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194284) {
            ctx->pc = 0x194288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194284u;
            // 0x194288: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19429Cu;
            goto label_19429c;
        }
    }
    ctx->pc = 0x19428Cu;
label_19428c:
    // 0x19428c: 0xc0653b8  jal         func_194EE0
label_194290:
    if (ctx->pc == 0x194290u) {
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194294u;
        goto label_194294;
    }
    ctx->pc = 0x19428Cu;
    SET_GPR_U32(ctx, 31, 0x194294u);
    ctx->pc = 0x194290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19428Cu;
    // 0x194290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194EE0u, 0x19428Cu, 0x194294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194294u;
label_194294:
    // 0x194294: 0x10000103  b           . + 4 + (0x103 << 2)
label_194298:
    if (ctx->pc == 0x194298u) {
        ctx->pc = 0x194298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194294u;
        // 0x194298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19429Cu;
        goto label_19429c;
    }
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194294u;
        // 0x194298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194294) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x19429Cu;
label_19429c:
    // 0x19429c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1942a0:
    // 0x1942a0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1942a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1942a4:
    // 0x1942a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1942a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1942a8:
    // 0x1942a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1942a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1942ac:
    // 0x1942ac: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1942b0:
    // 0x1942b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1942b4:
    if (ctx->pc == 0x1942B4u) {
        ctx->pc = 0x1942B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B0u;
        // 0x1942b4: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942B8u;
        goto label_1942b8;
    }
    ctx->pc = 0x1942B0u;
    {
        const bool branch_taken_0x1942b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1942B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B0u;
        // 0x1942b4: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942b0) {
            ctx->pc = 0x1942CCu;
            goto label_1942cc;
        }
    }
    ctx->pc = 0x1942B8u;
label_1942b8:
    // 0x1942b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1942b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1942bc:
    // 0x1942bc: 0x0  nop
    ctx->pc = 0x1942bcu;
    // NOP
label_1942c0:
    // 0x1942c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1942c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1942c4:
    // 0x1942c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1942c8:
    if (ctx->pc == 0x1942C8u) {
        ctx->pc = 0x1942CCu;
        goto label_1942cc;
    }
    ctx->pc = 0x1942C4u;
    {
        const bool branch_taken_0x1942c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942c4) {
            ctx->pc = 0x1942E8u;
            goto label_1942e8;
        }
    }
    ctx->pc = 0x1942CCu;
label_1942cc:
    // 0x1942cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1942ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1942d0:
    // 0x1942d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1942d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1942d4:
    // 0x1942d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1942d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1942d8:
    // 0x1942d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1942d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1942dc:
    // 0x1942dc: 0x0  nop
    ctx->pc = 0x1942dcu;
    // NOP
label_1942e0:
    // 0x1942e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1942e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1942e4:
    // 0x1942e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1942e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1942e8:
    // 0x1942e8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1942e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1942ec:
    // 0x1942ec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1942ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1942f0:
    // 0x1942f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1942f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1942f4:
    // 0x1942f4: 0x0  nop
    ctx->pc = 0x1942f4u;
    // NOP
label_1942f8:
    // 0x1942f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1942f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1942fc:
    // 0x1942fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1942fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194300:
    // 0x194300: 0x0  nop
    ctx->pc = 0x194300u;
    // NOP
label_194304:
    // 0x194304: 0x450000e7  bc1f        . + 4 + (0xE7 << 2)
label_194308:
    if (ctx->pc == 0x194308u) {
        ctx->pc = 0x194308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194304u;
        // 0x194308: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19430Cu;
        goto label_19430c;
    }
    ctx->pc = 0x194304u;
    {
        const bool branch_taken_0x194304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194304u;
        // 0x194308: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194304) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x19430Cu;
label_19430c:
    // 0x19430c: 0xc0651b2  jal         func_1946C8
label_194310:
    if (ctx->pc == 0x194310u) {
        ctx->pc = 0x194310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19430Cu;
        // 0x194310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194314u;
        goto label_194314;
    }
    ctx->pc = 0x19430Cu;
    SET_GPR_U32(ctx, 31, 0x194314u);
    ctx->pc = 0x194310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19430Cu;
    // 0x194310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1946C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1946C8u, 0x19430Cu, 0x194314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194314u;
label_194314:
    // 0x194314: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_194318:
    if (ctx->pc == 0x194318u) {
        ctx->pc = 0x194318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194314u;
        // 0x194318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19431Cu;
        goto label_19431c;
    }
    ctx->pc = 0x194314u;
    {
        const bool branch_taken_0x194314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194314u;
        // 0x194318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194314) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x19431Cu;
label_19431c:
    // 0x19431c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_194320:
    // 0x194320: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x194320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_194324:
    // 0x194324: 0xc061a16  jal         func_186858
label_194328:
    if (ctx->pc == 0x194328u) {
        ctx->pc = 0x194328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194324u;
        // 0x194328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19432Cu;
        goto label_19432c;
    }
    ctx->pc = 0x194324u;
    SET_GPR_U32(ctx, 31, 0x19432Cu);
    ctx->pc = 0x194328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194324u;
    // 0x194328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194324u, 0x19432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19432Cu;
label_19432c:
    // 0x19432c: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x19432cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_194330:
    // 0x194330: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_194334:
    // 0x194334: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x194334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_194338:
    // 0x194338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19433c:
    // 0x19433c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_194340:
    // 0x194340: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_194344:
    if (ctx->pc == 0x194344u) {
        ctx->pc = 0x194348u;
        goto label_194348;
    }
    ctx->pc = 0x194340u;
    {
        const bool branch_taken_0x194340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194340) {
            ctx->pc = 0x194368u;
            goto label_194368;
        }
    }
    ctx->pc = 0x194348u;
label_194348:
    // 0x194348: 0xc061a16  jal         func_186858
label_19434c:
    if (ctx->pc == 0x19434Cu) {
        ctx->pc = 0x19434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194348u;
        // 0x19434c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194350u;
        goto label_194350;
    }
    ctx->pc = 0x194348u;
    SET_GPR_U32(ctx, 31, 0x194350u);
    ctx->pc = 0x19434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194348u;
    // 0x19434c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194348u, 0x194350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194350u;
label_194350:
    // 0x194350: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_194354:
    // 0x194354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194358:
    // 0x194358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19435c:
    // 0x19435c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_194360:
    // 0x194360: 0x100000cf  b           . + 4 + (0xCF << 2)
label_194364:
    if (ctx->pc == 0x194364u) {
        ctx->pc = 0x194364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194360u;
        // 0x194364: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194368u;
        goto label_194368;
    }
    ctx->pc = 0x194360u;
    {
        const bool branch_taken_0x194360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194360u;
        // 0x194364: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194360) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x194368u;
label_194368:
    // 0x194368: 0xc061a1e  jal         func_186878
label_19436c:
    if (ctx->pc == 0x19436Cu) {
        ctx->pc = 0x19436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194368u;
        // 0x19436c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194370u;
        goto label_194370;
    }
    ctx->pc = 0x194368u;
    SET_GPR_U32(ctx, 31, 0x194370u);
    ctx->pc = 0x19436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194368u;
    // 0x19436c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x194368u, 0x194370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194370u;
label_194370:
    // 0x194370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x194370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194374:
    // 0x194374: 0xc06cdea  jal         func_1B37A8
label_194378:
    if (ctx->pc == 0x194378u) {
        ctx->pc = 0x194378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194374u;
        // 0x194378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19437Cu;
        goto label_19437c;
    }
    ctx->pc = 0x194374u;
    SET_GPR_U32(ctx, 31, 0x19437Cu);
    ctx->pc = 0x194378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194374u;
    // 0x194378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x194374u, 0x19437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19437Cu;
label_19437c:
    // 0x19437c: 0xc061a16  jal         func_186858
label_194380:
    if (ctx->pc == 0x194380u) {
        ctx->pc = 0x194380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19437Cu;
        // 0x194380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194384u;
        goto label_194384;
    }
    ctx->pc = 0x19437Cu;
    SET_GPR_U32(ctx, 31, 0x194384u);
    ctx->pc = 0x194380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19437Cu;
    // 0x194380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19437Cu, 0x194384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194384u;
label_194384:
    // 0x194384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194388:
    // 0x194388: 0xc061a12  jal         func_186848
label_19438c:
    if (ctx->pc == 0x19438Cu) {
        ctx->pc = 0x19438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194388u;
        // 0x19438c: 0xe4540024  swc1        $f20, 0x24($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194390u;
        goto label_194390;
    }
    ctx->pc = 0x194388u;
    SET_GPR_U32(ctx, 31, 0x194390u);
    ctx->pc = 0x19438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194388u;
    // 0x19438c: 0xe4540024  swc1        $f20, 0x24($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194388u, 0x194390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194390u;
label_194390:
    // 0x194390: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x194390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194394:
    // 0x194394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194398:
    // 0x194398: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_19439c:
    // 0x19439c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19439cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1943a0:
    // 0x1943a0: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x1943a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
label_1943a4:
    // 0x1943a4: 0x8c450fe8  lw          $a1, 0xFE8($v0)
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
label_1943a8:
    // 0x1943a8: 0xc07072c  jal         func_1C1CB0
label_1943ac:
    if (ctx->pc == 0x1943ACu) {
        ctx->pc = 0x1943ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A8u;
        // 0x1943ac: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943B0u;
        goto label_1943b0;
    }
    ctx->pc = 0x1943A8u;
    SET_GPR_U32(ctx, 31, 0x1943B0u);
    ctx->pc = 0x1943ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943A8u;
    // 0x1943ac: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x1943A8u, 0x1943B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943B0u;
label_1943b0:
    // 0x1943b0: 0xc061a12  jal         func_186848
label_1943b4:
    if (ctx->pc == 0x1943B4u) {
        ctx->pc = 0x1943B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B0u;
        // 0x1943b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943B8u;
        goto label_1943b8;
    }
    ctx->pc = 0x1943B0u;
    SET_GPR_U32(ctx, 31, 0x1943B8u);
    ctx->pc = 0x1943B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943B0u;
    // 0x1943b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1943B0u, 0x1943B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943B8u;
label_1943b8:
    // 0x1943b8: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x1943b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_1943bc:
    // 0x1943bc: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
label_1943c0:
    if (ctx->pc == 0x1943C0u) {
        ctx->pc = 0x1943C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943BCu;
        // 0x1943c0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943C4u;
        goto label_1943c4;
    }
    ctx->pc = 0x1943BCu;
    {
        const bool branch_taken_0x1943bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943BCu;
        // 0x1943c0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943bc) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x1943C4u;
label_1943c4:
    // 0x1943c4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1943c8:
    // 0x1943c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1943cc:
    if (ctx->pc == 0x1943CCu) {
        ctx->pc = 0x1943CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943C8u;
        // 0x1943cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943D0u;
        goto label_1943d0;
    }
    ctx->pc = 0x1943C8u;
    {
        const bool branch_taken_0x1943c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1943CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943C8u;
        // 0x1943cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943c8) {
            ctx->pc = 0x1943E4u;
            goto label_1943e4;
        }
    }
    ctx->pc = 0x1943D0u;
label_1943d0:
    // 0x1943d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1943d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1943d4:
    // 0x1943d4: 0x0  nop
    ctx->pc = 0x1943d4u;
    // NOP
label_1943d8:
    // 0x1943d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1943d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1943dc:
    // 0x1943dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1943e0:
    if (ctx->pc == 0x1943E0u) {
        ctx->pc = 0x1943E4u;
        goto label_1943e4;
    }
    ctx->pc = 0x1943DCu;
    {
        const bool branch_taken_0x1943dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943dc) {
            ctx->pc = 0x1943FCu;
            goto label_1943fc;
        }
    }
    ctx->pc = 0x1943E4u;
label_1943e4:
    // 0x1943e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1943e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1943e8:
    // 0x1943e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1943e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1943ec:
    // 0x1943ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1943ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1943f0:
    // 0x1943f0: 0x0  nop
    ctx->pc = 0x1943f0u;
    // NOP
label_1943f4:
    // 0x1943f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1943f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1943f8:
    // 0x1943f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1943f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1943fc:
    // 0x1943fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1943fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_194400:
    // 0x194400: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x194400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_194404:
    // 0x194404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194408:
    // 0x194408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19440c:
    // 0x19440c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19440cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_194410:
    // 0x194410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194414:
    // 0x194414: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x194414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_194418:
    // 0x194418: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x194418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19441c:
    // 0x19441c: 0xc061a12  jal         func_186848
label_194420:
    if (ctx->pc == 0x194420u) {
        ctx->pc = 0x194420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19441Cu;
        // 0x194420: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194424u;
        goto label_194424;
    }
    ctx->pc = 0x19441Cu;
    SET_GPR_U32(ctx, 31, 0x194424u);
    ctx->pc = 0x194420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19441Cu;
    // 0x194420: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19441Cu, 0x194424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194424u;
label_194424:
    // 0x194424: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x194424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_194428:
    // 0x194428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19442c:
    // 0x19442c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_194430:
    // 0x194430: 0x40f809  jalr        $v0
label_194434:
    if (ctx->pc == 0x194434u) {
        ctx->pc = 0x194434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194430u;
        // 0x194434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194438u;
        goto label_194438;
    }
    ctx->pc = 0x194430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194438u);
        ctx->pc = 0x194434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194430u;
        // 0x194434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194430u, 0x194438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194438u;
label_194438:
    // 0x194438: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x194438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19443c:
    // 0x19443c: 0x10000098  b           . + 4 + (0x98 << 2)
label_194440:
    if (ctx->pc == 0x194440u) {
        ctx->pc = 0x194440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19443Cu;
        // 0x194440: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194444u;
        goto label_194444;
    }
    ctx->pc = 0x19443Cu;
    {
        const bool branch_taken_0x19443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19443Cu;
        // 0x194440: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19443c) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x194444u;
label_194444:
    // 0x194444: 0xc061a1e  jal         func_186878
label_194448:
    if (ctx->pc == 0x194448u) {
        ctx->pc = 0x194448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194444u;
        // 0x194448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19444Cu;
        goto label_19444c;
    }
    ctx->pc = 0x194444u;
    SET_GPR_U32(ctx, 31, 0x19444Cu);
    ctx->pc = 0x194448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194444u;
    // 0x194448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x194444u, 0x19444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19444Cu;
label_19444c:
    // 0x19444c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194450:
    // 0x194450: 0xc06cdea  jal         func_1B37A8
label_194454:
    if (ctx->pc == 0x194454u) {
        ctx->pc = 0x194454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194450u;
        // 0x194454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194458u;
        goto label_194458;
    }
    ctx->pc = 0x194450u;
    SET_GPR_U32(ctx, 31, 0x194458u);
    ctx->pc = 0x194454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194450u;
    // 0x194454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x194450u, 0x194458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194458u;
label_194458:
    // 0x194458: 0xc061a16  jal         func_186858
label_19445c:
    if (ctx->pc == 0x19445Cu) {
        ctx->pc = 0x19445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194458u;
        // 0x19445c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194460u;
        goto label_194460;
    }
    ctx->pc = 0x194458u;
    SET_GPR_U32(ctx, 31, 0x194460u);
    ctx->pc = 0x19445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194458u;
    // 0x19445c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194458u, 0x194460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194460u;
label_194460:
    // 0x194460: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x194460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_194464:
    // 0x194464: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_194468:
    // 0x194468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19446c:
    // 0x19446c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_194470:
    // 0x194470: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_194474:
    if (ctx->pc == 0x194474u) {
        ctx->pc = 0x194474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194470u;
        // 0x194474: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194478u;
        goto label_194478;
    }
    ctx->pc = 0x194470u;
    {
        const bool branch_taken_0x194470 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x194474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194470u;
        // 0x194474: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194470) {
            ctx->pc = 0x19448Cu;
            goto label_19448c;
        }
    }
    ctx->pc = 0x194478u;
label_194478:
    // 0x194478: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x194478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19447c:
    // 0x19447c: 0x0  nop
    ctx->pc = 0x19447cu;
    // NOP
label_194480:
    // 0x194480: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x194480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_194484:
    // 0x194484: 0x10000007  b           . + 4 + (0x7 << 2)
label_194488:
    if (ctx->pc == 0x194488u) {
        ctx->pc = 0x19448Cu;
        goto label_19448c;
    }
    ctx->pc = 0x194484u;
    {
        const bool branch_taken_0x194484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194484) {
            ctx->pc = 0x1944A4u;
            goto label_1944a4;
        }
    }
    ctx->pc = 0x19448Cu;
label_19448c:
    // 0x19448c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_194490:
    // 0x194490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x194490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_194494:
    // 0x194494: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x194494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_194498:
    // 0x194498: 0x0  nop
    ctx->pc = 0x194498u;
    // NOP
label_19449c:
    // 0x19449c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19449cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1944a0:
    // 0x1944a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1944a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1944a4:
    // 0x1944a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1944a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1944a8:
    // 0x1944a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1944a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1944ac:
    // 0x1944ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1944acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1944b0:
    // 0x1944b0: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x1944b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1944b4:
    // 0x1944b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1944b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1944b8:
    // 0x1944b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1944b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1944bc:
    // 0x1944bc: 0x0  nop
    ctx->pc = 0x1944bcu;
    // NOP
label_1944c0:
    // 0x1944c0: 0x45020049  bc1fl       . + 4 + (0x49 << 2)
label_1944c4:
    if (ctx->pc == 0x1944C4u) {
        ctx->pc = 0x1944C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944C0u;
        // 0x1944c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944C8u;
        goto label_1944c8;
    }
    ctx->pc = 0x1944C0u;
    {
        const bool branch_taken_0x1944c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1944c0) {
            ctx->pc = 0x1944C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1944C0u;
            // 0x1944c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1945E8u;
            goto label_1945e8;
        }
    }
    ctx->pc = 0x1944C8u;
label_1944c8:
    // 0x1944c8: 0xc061a26  jal         func_186898
label_1944cc:
    if (ctx->pc == 0x1944CCu) {
        ctx->pc = 0x1944CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944C8u;
        // 0x1944cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944D0u;
        goto label_1944d0;
    }
    ctx->pc = 0x1944C8u;
    SET_GPR_U32(ctx, 31, 0x1944D0u);
    ctx->pc = 0x1944CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1944C8u;
    // 0x1944cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1944C8u, 0x1944D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944D0u;
label_1944d0:
    // 0x1944d0: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1944d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1944d4:
    // 0x1944d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1944d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1944d8:
    // 0x1944d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1944d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1944dc:
    // 0x1944dc: 0x0  nop
    ctx->pc = 0x1944dcu;
    // NOP
label_1944e0:
    // 0x1944e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1944e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1944e4:
    // 0x1944e4: 0x0  nop
    ctx->pc = 0x1944e4u;
    // NOP
label_1944e8:
    // 0x1944e8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_1944ec:
    if (ctx->pc == 0x1944ECu) {
        ctx->pc = 0x1944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944E8u;
        // 0x1944ec: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944F0u;
        goto label_1944f0;
    }
    ctx->pc = 0x1944E8u;
    {
        const bool branch_taken_0x1944e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1944e8) {
            ctx->pc = 0x1944ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1944E8u;
            // 0x1944ec: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19450Cu;
            goto label_19450c;
        }
    }
    ctx->pc = 0x1944F0u;
label_1944f0:
    // 0x1944f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1944f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1944f4:
    // 0x1944f4: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x1944f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_1944f8:
    // 0x1944f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1944f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1944fc:
    // 0x1944fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1944fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_194500:
    // 0x194500: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_194504:
    if (ctx->pc == 0x194504u) {
        ctx->pc = 0x194504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194500u;
        // 0x194504: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194508u;
        goto label_194508;
    }
    ctx->pc = 0x194500u;
    {
        const bool branch_taken_0x194500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194500) {
            ctx->pc = 0x194504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194500u;
            // 0x194504: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1945E8u;
            goto label_1945e8;
        }
    }
    ctx->pc = 0x194508u;
label_194508:
    // 0x194508: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19450c:
    // 0x19450c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_194510:
    // 0x194510: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x194510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_194514:
    // 0x194514: 0xdca41020  ld          $a0, 0x1020($a1)
    ctx->pc = 0x194514u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
label_194518:
    // 0x194518: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x194518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_19451c:
    // 0x19451c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_194520:
    if (ctx->pc == 0x194520u) {
        ctx->pc = 0x194520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19451Cu;
        // 0x194520: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194524u;
        goto label_194524;
    }
    ctx->pc = 0x19451Cu;
    {
        const bool branch_taken_0x19451c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19451c) {
            ctx->pc = 0x194520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19451Cu;
            // 0x194520: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194568u;
            goto label_194568;
        }
    }
    ctx->pc = 0x194524u;
label_194524:
    // 0x194524: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x194524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_194528:
    // 0x194528: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x194528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
label_19452c:
    // 0x19452c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x19452cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_194530:
    // 0x194530: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_194534:
    if (ctx->pc == 0x194534u) {
        ctx->pc = 0x194534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194530u;
        // 0x194534: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194538u;
        goto label_194538;
    }
    ctx->pc = 0x194530u;
    {
        const bool branch_taken_0x194530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194530) {
            ctx->pc = 0x194534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194530u;
            // 0x194534: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194568u;
            goto label_194568;
        }
    }
    ctx->pc = 0x194538u;
label_194538:
    // 0x194538: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x194538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_19453c:
    // 0x19453c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_194540:
    // 0x194540: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x194540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_194544:
    // 0x194544: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x194544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_194548:
    // 0x194548: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x194548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_19454c:
    // 0x19454c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_194550:
    // 0x194550: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x194550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
label_194554:
    // 0x194554: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x194554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
label_194558:
    // 0x194558: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x194558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_19455c:
    // 0x19455c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_194560:
    // 0x194560: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x194560u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
label_194564:
    // 0x194564: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x194564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194568:
    // 0x194568: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x194568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19456c:
    // 0x19456c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x19456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_194570:
    // 0x194570: 0xdc831020  ld          $v1, 0x1020($a0)
    ctx->pc = 0x194570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_194574:
    // 0x194574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x194574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_194578:
    // 0x194578: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19457c:
    if (ctx->pc == 0x19457Cu) {
        ctx->pc = 0x194580u;
        goto label_194580;
    }
    ctx->pc = 0x194578u;
    {
        const bool branch_taken_0x194578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194578) {
            ctx->pc = 0x194598u;
            goto label_194598;
        }
    }
    ctx->pc = 0x194580u;
label_194580:
    // 0x194580: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x194580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_194584:
    // 0x194584: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x194584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_194588:
    // 0x194588: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x194588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
label_19458c:
    // 0x19458c: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x19458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
label_194590:
    // 0x194590: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x194590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_194594:
    // 0x194594: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x194594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_194598:
    // 0x194598: 0xc061a16  jal         func_186858
label_19459c:
    if (ctx->pc == 0x19459Cu) {
        ctx->pc = 0x19459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194598u;
        // 0x19459c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945A0u;
        goto label_1945a0;
    }
    ctx->pc = 0x194598u;
    SET_GPR_U32(ctx, 31, 0x1945A0u);
    ctx->pc = 0x19459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194598u;
    // 0x19459c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194598u, 0x1945A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945A0u;
label_1945a0:
    // 0x1945a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1945a4:
    // 0x1945a4: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1945a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_1945a8:
    // 0x1945a8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1945a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1945ac:
    // 0x1945ac: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x1945acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_1945b0:
    // 0x1945b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1945b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1945b4:
    // 0x1945b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1945b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1945b8:
    // 0x1945b8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1945bc:
    if (ctx->pc == 0x1945BCu) {
        ctx->pc = 0x1945BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945B8u;
        // 0x1945bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945C0u;
        goto label_1945c0;
    }
    ctx->pc = 0x1945B8u;
    {
        const bool branch_taken_0x1945b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1945BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945B8u;
        // 0x1945bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945b8) {
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x1945C0u;
label_1945c0:
    // 0x1945c0: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1945c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_1945c4:
    // 0x1945c4: 0xc061a16  jal         func_186858
label_1945c8:
    if (ctx->pc == 0x1945C8u) {
        ctx->pc = 0x1945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945C4u;
        // 0x1945c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945CCu;
        goto label_1945cc;
    }
    ctx->pc = 0x1945C4u;
    SET_GPR_U32(ctx, 31, 0x1945CCu);
    ctx->pc = 0x1945C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945C4u;
    // 0x1945c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1945C4u, 0x1945CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945CCu;
label_1945cc:
    // 0x1945cc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1945ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1945d0:
    // 0x1945d0: 0xc061a16  jal         func_186858
label_1945d4:
    if (ctx->pc == 0x1945D4u) {
        ctx->pc = 0x1945D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D0u;
        // 0x1945d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945D8u;
        goto label_1945d8;
    }
    ctx->pc = 0x1945D0u;
    SET_GPR_U32(ctx, 31, 0x1945D8u);
    ctx->pc = 0x1945D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D0u;
    // 0x1945d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1945D0u, 0x1945D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945D8u;
label_1945d8:
    // 0x1945d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1945d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1945dc:
    // 0x1945dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1945dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1945e0:
    // 0x1945e0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1945e4:
    if (ctx->pc == 0x1945E4u) {
        ctx->pc = 0x1945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945E0u;
        // 0x1945e4: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945E8u;
        goto label_1945e8;
    }
    ctx->pc = 0x1945E0u;
    {
        const bool branch_taken_0x1945e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945E0u;
        // 0x1945e4: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945e0) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x1945E8u;
label_1945e8:
    // 0x1945e8: 0x8c82038c  lw          $v0, 0x38C($a0)
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 908)));
label_1945ec:
    // 0x1945ec: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_1945f0:
    if (ctx->pc == 0x1945F0u) {
        ctx->pc = 0x1945F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945ECu;
        // 0x1945f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945F4u;
        goto label_1945f4;
    }
    ctx->pc = 0x1945ECu;
    {
        const bool branch_taken_0x1945ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1945ec) {
            ctx->pc = 0x1945F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1945ECu;
            // 0x1945f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1946A4u;
            goto label_1946a4;
        }
    }
    ctx->pc = 0x1945F4u;
label_1945f4:
    // 0x1945f4: 0xc09521a  jal         func_254868
label_1945f8:
    if (ctx->pc == 0x1945F8u) {
        ctx->pc = 0x1945FCu;
        goto label_1945fc;
    }
    ctx->pc = 0x1945F4u;
    SET_GPR_U32(ctx, 31, 0x1945FCu);
    ctx->pc = 0x254868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254868u, 0x1945F4u, 0x1945FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945FCu;
label_1945fc:
    // 0x1945fc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_194600:
    if (ctx->pc == 0x194600u) {
        ctx->pc = 0x194600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945FCu;
        // 0x194600: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194604u;
        goto label_194604;
    }
    ctx->pc = 0x1945FCu;
    {
        const bool branch_taken_0x1945fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1945fc) {
            ctx->pc = 0x194600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1945FCu;
            // 0x194600: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194660u;
            goto label_194660;
        }
    }
    ctx->pc = 0x194604u;
label_194604:
    // 0x194604: 0x8e022b00  lw          $v0, 0x2B00($s0)
    ctx->pc = 0x194604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
label_194608:
    // 0x194608: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19460c:
    if (ctx->pc == 0x19460Cu) {
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194608u;
        // 0x19460c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194610u;
        goto label_194610;
    }
    ctx->pc = 0x194608u;
    {
        const bool branch_taken_0x194608 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194608u;
        // 0x19460c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194608) {
            ctx->pc = 0x194624u;
            goto label_194624;
        }
    }
    ctx->pc = 0x194610u;
label_194610:
    // 0x194610: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x194610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_194614:
    // 0x194614: 0x0  nop
    ctx->pc = 0x194614u;
    // NOP
label_194618:
    // 0x194618: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x194618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19461c:
    // 0x19461c: 0x10000007  b           . + 4 + (0x7 << 2)
label_194620:
    if (ctx->pc == 0x194620u) {
        ctx->pc = 0x194624u;
        goto label_194624;
    }
    ctx->pc = 0x19461Cu;
    {
        const bool branch_taken_0x19461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19461c) {
            ctx->pc = 0x19463Cu;
            goto label_19463c;
        }
    }
    ctx->pc = 0x194624u;
label_194624:
    // 0x194624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_194628:
    // 0x194628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x194628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19462c:
    // 0x19462c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_194630:
    // 0x194630: 0x0  nop
    ctx->pc = 0x194630u;
    // NOP
label_194634:
    // 0x194634: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x194634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_194638:
    // 0x194638: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x194638u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19463c:
    // 0x19463c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19463cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_194640:
    // 0x194640: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x194640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_194644:
    // 0x194644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194648:
    // 0x194648: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x194648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_19464c:
    // 0x19464c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19464cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194650:
    // 0x194650: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x194650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_194654:
    // 0x194654: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x194654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_194658:
    // 0x194658: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x194658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_19465c:
    // 0x19465c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x19465cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194660:
    // 0x194660: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_194664:
    // 0x194664: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x194664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_194668:
    // 0x194668: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x194668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19466c:
    // 0x19466c: 0x73d78  dsll        $a3, $a3, 21
    ctx->pc = 0x19466cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 21);
label_194670:
    // 0x194670: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x194670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_194674:
    // 0x194674: 0xdcc21020  ld          $v0, 0x1020($a2)
    ctx->pc = 0x194674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
label_194678:
    // 0x194678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x194678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19467c:
    // 0x19467c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x19467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_194680:
    // 0x194680: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x194680u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
label_194684:
    // 0x194684: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x194684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194688:
    // 0x194688: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x194688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_19468c:
    // 0x19468c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x19468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_194690:
    // 0x194690: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x194690u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_194694:
    // 0x194694: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x194694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194698:
    // 0x194698: 0xc069888  jal         func_1A6220
label_19469c:
    if (ctx->pc == 0x19469Cu) {
        ctx->pc = 0x19469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194698u;
        // 0x19469c: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946A0u;
        goto label_1946a0;
    }
    ctx->pc = 0x194698u;
    SET_GPR_U32(ctx, 31, 0x1946A0u);
    ctx->pc = 0x19469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194698u;
    // 0x19469c: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6220u, 0x194698u, 0x1946A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946A0u;
label_1946a0:
    // 0x1946a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1946a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1946a4:
    // 0x1946a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1946a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1946a8:
    // 0x1946a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1946ac:
    // 0x1946ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1946acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1946b0:
    // 0x1946b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1946b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1946b4:
    // 0x1946b4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1946b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1946b8:
    // 0x1946b8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1946b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1946bc:
    // 0x1946bc: 0x3e00008  jr          $ra
label_1946c0:
    if (ctx->pc == 0x1946C0u) {
        ctx->pc = 0x1946C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946BCu;
        // 0x1946c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946C4u;
        goto label_1946c4;
    }
    ctx->pc = 0x1946BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1946C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946BCu;
        // 0x1946c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1946BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1946C4u;
label_1946c4:
    // 0x1946c4: 0x0  nop
    ctx->pc = 0x1946c4u;
    // NOP
    ctx->pc = 0x1946c8u;
}
