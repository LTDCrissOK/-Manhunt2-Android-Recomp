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

// Function: sub_00233EC8
// Address: 0x233ec8 - 0x234668
void sub_00233EC8_0x233ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233EC8_0x233ec8");
#endif

    switch (ctx->pc) {
        case 0x233ec8u: goto label_233ec8;
        case 0x233eccu: goto label_233ecc;
        case 0x233ed0u: goto label_233ed0;
        case 0x233ed4u: goto label_233ed4;
        case 0x233ed8u: goto label_233ed8;
        case 0x233edcu: goto label_233edc;
        case 0x233ee0u: goto label_233ee0;
        case 0x233ee4u: goto label_233ee4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233eecu: goto label_233eec;
        case 0x233ef0u: goto label_233ef0;
        case 0x233ef4u: goto label_233ef4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233efcu: goto label_233efc;
        case 0x233f00u: goto label_233f00;
        case 0x233f04u: goto label_233f04;
        case 0x233f08u: goto label_233f08;
        case 0x233f0cu: goto label_233f0c;
        case 0x233f10u: goto label_233f10;
        case 0x233f14u: goto label_233f14;
        case 0x233f18u: goto label_233f18;
        case 0x233f1cu: goto label_233f1c;
        case 0x233f20u: goto label_233f20;
        case 0x233f24u: goto label_233f24;
        case 0x233f28u: goto label_233f28;
        case 0x233f2cu: goto label_233f2c;
        case 0x233f30u: goto label_233f30;
        case 0x233f34u: goto label_233f34;
        case 0x233f38u: goto label_233f38;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f40u: goto label_233f40;
        case 0x233f44u: goto label_233f44;
        case 0x233f48u: goto label_233f48;
        case 0x233f4cu: goto label_233f4c;
        case 0x233f50u: goto label_233f50;
        case 0x233f54u: goto label_233f54;
        case 0x233f58u: goto label_233f58;
        case 0x233f5cu: goto label_233f5c;
        case 0x233f60u: goto label_233f60;
        case 0x233f64u: goto label_233f64;
        case 0x233f68u: goto label_233f68;
        case 0x233f6cu: goto label_233f6c;
        case 0x233f70u: goto label_233f70;
        case 0x233f74u: goto label_233f74;
        case 0x233f78u: goto label_233f78;
        case 0x233f7cu: goto label_233f7c;
        case 0x233f80u: goto label_233f80;
        case 0x233f84u: goto label_233f84;
        case 0x233f88u: goto label_233f88;
        case 0x233f8cu: goto label_233f8c;
        case 0x233f90u: goto label_233f90;
        case 0x233f94u: goto label_233f94;
        case 0x233f98u: goto label_233f98;
        case 0x233f9cu: goto label_233f9c;
        case 0x233fa0u: goto label_233fa0;
        case 0x233fa4u: goto label_233fa4;
        case 0x233fa8u: goto label_233fa8;
        case 0x233facu: goto label_233fac;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fb4u: goto label_233fb4;
        case 0x233fb8u: goto label_233fb8;
        case 0x233fbcu: goto label_233fbc;
        case 0x233fc0u: goto label_233fc0;
        case 0x233fc4u: goto label_233fc4;
        case 0x233fc8u: goto label_233fc8;
        case 0x233fccu: goto label_233fcc;
        case 0x233fd0u: goto label_233fd0;
        case 0x233fd4u: goto label_233fd4;
        case 0x233fd8u: goto label_233fd8;
        case 0x233fdcu: goto label_233fdc;
        case 0x233fe0u: goto label_233fe0;
        case 0x233fe4u: goto label_233fe4;
        case 0x233fe8u: goto label_233fe8;
        case 0x233fecu: goto label_233fec;
        case 0x233ff0u: goto label_233ff0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ff8u: goto label_233ff8;
        case 0x233ffcu: goto label_233ffc;
        case 0x234000u: goto label_234000;
        case 0x234004u: goto label_234004;
        case 0x234008u: goto label_234008;
        case 0x23400cu: goto label_23400c;
        case 0x234010u: goto label_234010;
        case 0x234014u: goto label_234014;
        case 0x234018u: goto label_234018;
        case 0x23401cu: goto label_23401c;
        case 0x234020u: goto label_234020;
        case 0x234024u: goto label_234024;
        case 0x234028u: goto label_234028;
        case 0x23402cu: goto label_23402c;
        case 0x234030u: goto label_234030;
        case 0x234034u: goto label_234034;
        case 0x234038u: goto label_234038;
        case 0x23403cu: goto label_23403c;
        case 0x234040u: goto label_234040;
        case 0x234044u: goto label_234044;
        case 0x234048u: goto label_234048;
        case 0x23404cu: goto label_23404c;
        case 0x234050u: goto label_234050;
        case 0x234054u: goto label_234054;
        case 0x234058u: goto label_234058;
        case 0x23405cu: goto label_23405c;
        case 0x234060u: goto label_234060;
        case 0x234064u: goto label_234064;
        case 0x234068u: goto label_234068;
        case 0x23406cu: goto label_23406c;
        case 0x234070u: goto label_234070;
        case 0x234074u: goto label_234074;
        case 0x234078u: goto label_234078;
        case 0x23407cu: goto label_23407c;
        case 0x234080u: goto label_234080;
        case 0x234084u: goto label_234084;
        case 0x234088u: goto label_234088;
        case 0x23408cu: goto label_23408c;
        case 0x234090u: goto label_234090;
        case 0x234094u: goto label_234094;
        case 0x234098u: goto label_234098;
        case 0x23409cu: goto label_23409c;
        case 0x2340a0u: goto label_2340a0;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340a8u: goto label_2340a8;
        case 0x2340acu: goto label_2340ac;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340b4u: goto label_2340b4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340bcu: goto label_2340bc;
        case 0x2340c0u: goto label_2340c0;
        case 0x2340c4u: goto label_2340c4;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340ccu: goto label_2340cc;
        case 0x2340d0u: goto label_2340d0;
        case 0x2340d4u: goto label_2340d4;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340dcu: goto label_2340dc;
        case 0x2340e0u: goto label_2340e0;
        case 0x2340e4u: goto label_2340e4;
        case 0x2340e8u: goto label_2340e8;
        case 0x2340ecu: goto label_2340ec;
        case 0x2340f0u: goto label_2340f0;
        case 0x2340f4u: goto label_2340f4;
        case 0x2340f8u: goto label_2340f8;
        case 0x2340fcu: goto label_2340fc;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234108u: goto label_234108;
        case 0x23410cu: goto label_23410c;
        case 0x234110u: goto label_234110;
        case 0x234114u: goto label_234114;
        case 0x234118u: goto label_234118;
        case 0x23411cu: goto label_23411c;
        case 0x234120u: goto label_234120;
        case 0x234124u: goto label_234124;
        case 0x234128u: goto label_234128;
        case 0x23412cu: goto label_23412c;
        case 0x234130u: goto label_234130;
        case 0x234134u: goto label_234134;
        case 0x234138u: goto label_234138;
        case 0x23413cu: goto label_23413c;
        case 0x234140u: goto label_234140;
        case 0x234144u: goto label_234144;
        case 0x234148u: goto label_234148;
        case 0x23414cu: goto label_23414c;
        case 0x234150u: goto label_234150;
        case 0x234154u: goto label_234154;
        case 0x234158u: goto label_234158;
        case 0x23415cu: goto label_23415c;
        case 0x234160u: goto label_234160;
        case 0x234164u: goto label_234164;
        case 0x234168u: goto label_234168;
        case 0x23416cu: goto label_23416c;
        case 0x234170u: goto label_234170;
        case 0x234174u: goto label_234174;
        case 0x234178u: goto label_234178;
        case 0x23417cu: goto label_23417c;
        case 0x234180u: goto label_234180;
        case 0x234184u: goto label_234184;
        case 0x234188u: goto label_234188;
        case 0x23418cu: goto label_23418c;
        case 0x234190u: goto label_234190;
        case 0x234194u: goto label_234194;
        case 0x234198u: goto label_234198;
        case 0x23419cu: goto label_23419c;
        case 0x2341a0u: goto label_2341a0;
        case 0x2341a4u: goto label_2341a4;
        case 0x2341a8u: goto label_2341a8;
        case 0x2341acu: goto label_2341ac;
        case 0x2341b0u: goto label_2341b0;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341b8u: goto label_2341b8;
        case 0x2341bcu: goto label_2341bc;
        case 0x2341c0u: goto label_2341c0;
        case 0x2341c4u: goto label_2341c4;
        case 0x2341c8u: goto label_2341c8;
        case 0x2341ccu: goto label_2341cc;
        case 0x2341d0u: goto label_2341d0;
        case 0x2341d4u: goto label_2341d4;
        case 0x2341d8u: goto label_2341d8;
        case 0x2341dcu: goto label_2341dc;
        case 0x2341e0u: goto label_2341e0;
        case 0x2341e4u: goto label_2341e4;
        case 0x2341e8u: goto label_2341e8;
        case 0x2341ecu: goto label_2341ec;
        case 0x2341f0u: goto label_2341f0;
        case 0x2341f4u: goto label_2341f4;
        case 0x2341f8u: goto label_2341f8;
        case 0x2341fcu: goto label_2341fc;
        case 0x234200u: goto label_234200;
        case 0x234204u: goto label_234204;
        case 0x234208u: goto label_234208;
        case 0x23420cu: goto label_23420c;
        case 0x234210u: goto label_234210;
        case 0x234214u: goto label_234214;
        case 0x234218u: goto label_234218;
        case 0x23421cu: goto label_23421c;
        case 0x234220u: goto label_234220;
        case 0x234224u: goto label_234224;
        case 0x234228u: goto label_234228;
        case 0x23422cu: goto label_23422c;
        case 0x234230u: goto label_234230;
        case 0x234234u: goto label_234234;
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        case 0x23428cu: goto label_23428c;
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        case 0x234340u: goto label_234340;
        case 0x234344u: goto label_234344;
        case 0x234348u: goto label_234348;
        case 0x23434cu: goto label_23434c;
        case 0x234350u: goto label_234350;
        case 0x234354u: goto label_234354;
        case 0x234358u: goto label_234358;
        case 0x23435cu: goto label_23435c;
        case 0x234360u: goto label_234360;
        case 0x234364u: goto label_234364;
        case 0x234368u: goto label_234368;
        case 0x23436cu: goto label_23436c;
        case 0x234370u: goto label_234370;
        case 0x234374u: goto label_234374;
        case 0x234378u: goto label_234378;
        case 0x23437cu: goto label_23437c;
        case 0x234380u: goto label_234380;
        case 0x234384u: goto label_234384;
        case 0x234388u: goto label_234388;
        case 0x23438cu: goto label_23438c;
        case 0x234390u: goto label_234390;
        case 0x234394u: goto label_234394;
        case 0x234398u: goto label_234398;
        case 0x23439cu: goto label_23439c;
        case 0x2343a0u: goto label_2343a0;
        case 0x2343a4u: goto label_2343a4;
        case 0x2343a8u: goto label_2343a8;
        case 0x2343acu: goto label_2343ac;
        case 0x2343b0u: goto label_2343b0;
        case 0x2343b4u: goto label_2343b4;
        case 0x2343b8u: goto label_2343b8;
        case 0x2343bcu: goto label_2343bc;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343ccu: goto label_2343cc;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d4u: goto label_2343d4;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343dcu: goto label_2343dc;
        case 0x2343e0u: goto label_2343e0;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343e8u: goto label_2343e8;
        case 0x2343ecu: goto label_2343ec;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343f4u: goto label_2343f4;
        case 0x2343f8u: goto label_2343f8;
        case 0x2343fcu: goto label_2343fc;
        case 0x234400u: goto label_234400;
        case 0x234404u: goto label_234404;
        case 0x234408u: goto label_234408;
        case 0x23440cu: goto label_23440c;
        case 0x234410u: goto label_234410;
        case 0x234414u: goto label_234414;
        case 0x234418u: goto label_234418;
        case 0x23441cu: goto label_23441c;
        case 0x234420u: goto label_234420;
        case 0x234424u: goto label_234424;
        case 0x234428u: goto label_234428;
        case 0x23442cu: goto label_23442c;
        case 0x234430u: goto label_234430;
        case 0x234434u: goto label_234434;
        case 0x234438u: goto label_234438;
        case 0x23443cu: goto label_23443c;
        case 0x234440u: goto label_234440;
        case 0x234444u: goto label_234444;
        case 0x234448u: goto label_234448;
        case 0x23444cu: goto label_23444c;
        case 0x234450u: goto label_234450;
        case 0x234454u: goto label_234454;
        case 0x234458u: goto label_234458;
        case 0x23445cu: goto label_23445c;
        case 0x234460u: goto label_234460;
        case 0x234464u: goto label_234464;
        case 0x234468u: goto label_234468;
        case 0x23446cu: goto label_23446c;
        case 0x234470u: goto label_234470;
        case 0x234474u: goto label_234474;
        case 0x234478u: goto label_234478;
        case 0x23447cu: goto label_23447c;
        case 0x234480u: goto label_234480;
        case 0x234484u: goto label_234484;
        case 0x234488u: goto label_234488;
        case 0x23448cu: goto label_23448c;
        case 0x234490u: goto label_234490;
        case 0x234494u: goto label_234494;
        case 0x234498u: goto label_234498;
        case 0x23449cu: goto label_23449c;
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a4u: goto label_2344a4;
        case 0x2344a8u: goto label_2344a8;
        case 0x2344acu: goto label_2344ac;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344b4u: goto label_2344b4;
        case 0x2344b8u: goto label_2344b8;
        case 0x2344bcu: goto label_2344bc;
        case 0x2344c0u: goto label_2344c0;
        case 0x2344c4u: goto label_2344c4;
        case 0x2344c8u: goto label_2344c8;
        case 0x2344ccu: goto label_2344cc;
        case 0x2344d0u: goto label_2344d0;
        case 0x2344d4u: goto label_2344d4;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344dcu: goto label_2344dc;
        case 0x2344e0u: goto label_2344e0;
        case 0x2344e4u: goto label_2344e4;
        case 0x2344e8u: goto label_2344e8;
        case 0x2344ecu: goto label_2344ec;
        case 0x2344f0u: goto label_2344f0;
        case 0x2344f4u: goto label_2344f4;
        case 0x2344f8u: goto label_2344f8;
        case 0x2344fcu: goto label_2344fc;
        case 0x234500u: goto label_234500;
        case 0x234504u: goto label_234504;
        case 0x234508u: goto label_234508;
        case 0x23450cu: goto label_23450c;
        case 0x234510u: goto label_234510;
        case 0x234514u: goto label_234514;
        case 0x234518u: goto label_234518;
        case 0x23451cu: goto label_23451c;
        case 0x234520u: goto label_234520;
        case 0x234524u: goto label_234524;
        case 0x234528u: goto label_234528;
        case 0x23452cu: goto label_23452c;
        case 0x234530u: goto label_234530;
        case 0x234534u: goto label_234534;
        case 0x234538u: goto label_234538;
        case 0x23453cu: goto label_23453c;
        case 0x234540u: goto label_234540;
        case 0x234544u: goto label_234544;
        case 0x234548u: goto label_234548;
        case 0x23454cu: goto label_23454c;
        case 0x234550u: goto label_234550;
        case 0x234554u: goto label_234554;
        case 0x234558u: goto label_234558;
        case 0x23455cu: goto label_23455c;
        case 0x234560u: goto label_234560;
        case 0x234564u: goto label_234564;
        case 0x234568u: goto label_234568;
        case 0x23456cu: goto label_23456c;
        case 0x234570u: goto label_234570;
        case 0x234574u: goto label_234574;
        case 0x234578u: goto label_234578;
        case 0x23457cu: goto label_23457c;
        case 0x234580u: goto label_234580;
        case 0x234584u: goto label_234584;
        case 0x234588u: goto label_234588;
        case 0x23458cu: goto label_23458c;
        case 0x234590u: goto label_234590;
        case 0x234594u: goto label_234594;
        case 0x234598u: goto label_234598;
        case 0x23459cu: goto label_23459c;
        case 0x2345a0u: goto label_2345a0;
        case 0x2345a4u: goto label_2345a4;
        case 0x2345a8u: goto label_2345a8;
        case 0x2345acu: goto label_2345ac;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345b4u: goto label_2345b4;
        case 0x2345b8u: goto label_2345b8;
        case 0x2345bcu: goto label_2345bc;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345c4u: goto label_2345c4;
        case 0x2345c8u: goto label_2345c8;
        case 0x2345ccu: goto label_2345cc;
        case 0x2345d0u: goto label_2345d0;
        case 0x2345d4u: goto label_2345d4;
        case 0x2345d8u: goto label_2345d8;
        case 0x2345dcu: goto label_2345dc;
        case 0x2345e0u: goto label_2345e0;
        case 0x2345e4u: goto label_2345e4;
        case 0x2345e8u: goto label_2345e8;
        case 0x2345ecu: goto label_2345ec;
        case 0x2345f0u: goto label_2345f0;
        case 0x2345f4u: goto label_2345f4;
        case 0x2345f8u: goto label_2345f8;
        case 0x2345fcu: goto label_2345fc;
        case 0x234600u: goto label_234600;
        case 0x234604u: goto label_234604;
        case 0x234608u: goto label_234608;
        case 0x23460cu: goto label_23460c;
        case 0x234610u: goto label_234610;
        case 0x234614u: goto label_234614;
        case 0x234618u: goto label_234618;
        case 0x23461cu: goto label_23461c;
        case 0x234620u: goto label_234620;
        case 0x234624u: goto label_234624;
        case 0x234628u: goto label_234628;
        case 0x23462cu: goto label_23462c;
        case 0x234630u: goto label_234630;
        case 0x234634u: goto label_234634;
        case 0x234638u: goto label_234638;
        case 0x23463cu: goto label_23463c;
        case 0x234640u: goto label_234640;
        case 0x234644u: goto label_234644;
        case 0x234648u: goto label_234648;
        case 0x23464cu: goto label_23464c;
        case 0x234650u: goto label_234650;
        case 0x234654u: goto label_234654;
        case 0x234658u: goto label_234658;
        case 0x23465cu: goto label_23465c;
        case 0x234660u: goto label_234660;
        case 0x234664u: goto label_234664;
        default: break;
    }

    ctx->pc = 0x233ec8u;

label_233ec8:
    // 0x233ec8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_233ecc:
    // 0x233ecc: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x233eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_233ed0:
    // 0x233ed0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x233ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_233ed4:
    // 0x233ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233ed8:
    // 0x233ed8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x233ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_233edc:
    // 0x233edc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x233edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_233ee0:
    // 0x233ee0: 0x8e240fc8  lw          $a0, 0xFC8($s1)
    ctx->pc = 0x233ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4040)));
label_233ee4:
    // 0x233ee4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_233ee8:
    if (ctx->pc == 0x233EE8u) {
        ctx->pc = 0x233EECu;
        goto label_233eec;
    }
    ctx->pc = 0x233EE4u;
    {
        const bool branch_taken_0x233ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ee4) {
            ctx->pc = 0x233EF4u;
            goto label_233ef4;
        }
    }
    ctx->pc = 0x233EECu;
label_233eec:
    // 0x233eec: 0xc0d59f0  jal         func_3567C0
label_233ef0:
    if (ctx->pc == 0x233EF0u) {
        ctx->pc = 0x233EF4u;
        goto label_233ef4;
    }
    ctx->pc = 0x233EECu;
    SET_GPR_U32(ctx, 31, 0x233EF4u);
    ctx->pc = 0x3567C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3567C0u, 0x233EECu, 0x233EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EF4u;
label_233ef4:
    // 0x233ef4: 0xc08f9d2  jal         func_23E748
label_233ef8:
    if (ctx->pc == 0x233EF8u) {
        ctx->pc = 0x233EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EF4u;
        // 0x233ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EFCu;
        goto label_233efc;
    }
    ctx->pc = 0x233EF4u;
    SET_GPR_U32(ctx, 31, 0x233EFCu);
    ctx->pc = 0x233EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EF4u;
    // 0x233ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E748u, 0x233EF4u, 0x233EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EFCu;
label_233efc:
    // 0x233efc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x233efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_233f00:
    // 0x233f00: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x233f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233f04:
    // 0x233f04: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x233f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233f08:
    // 0x233f08: 0x0  nop
    ctx->pc = 0x233f08u;
    // NOP
label_233f0c:
    // 0x233f0c: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
label_233f10:
    if (ctx->pc == 0x233F10u) {
        ctx->pc = 0x233F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F0Cu;
        // 0x233f10: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F14u;
        goto label_233f14;
    }
    ctx->pc = 0x233F0Cu;
    {
        const bool branch_taken_0x233f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F0Cu;
        // 0x233f10: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f0c) {
            ctx->pc = 0x234140u;
            goto label_234140;
        }
    }
    ctx->pc = 0x233F14u;
label_233f14:
    // 0x233f14: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_233f18:
    // 0x233f18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x233f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_233f1c:
    // 0x233f1c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_233f20:
    if (ctx->pc == 0x233F20u) {
        ctx->pc = 0x233F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F1Cu;
        // 0x233f20: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F24u;
        goto label_233f24;
    }
    ctx->pc = 0x233F1Cu;
    {
        const bool branch_taken_0x233f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x233F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F1Cu;
        // 0x233f20: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f1c) {
            ctx->pc = 0x233F34u;
            goto label_233f34;
        }
    }
    ctx->pc = 0x233F24u;
label_233f24:
    // 0x233f24: 0xc6200378  lwc1        $f0, 0x378($s1)
    ctx->pc = 0x233f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233f28:
    // 0x233f28: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x233f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233f2c:
    // 0x233f2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x233f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_233f30:
    // 0x233f30: 0xe6200378  swc1        $f0, 0x378($s1)
    ctx->pc = 0x233f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 888), bits); }
label_233f34:
    // 0x233f34: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_233f38:
    // 0x233f38: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x233f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_233f3c:
    // 0x233f3c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_233f40:
    if (ctx->pc == 0x233F40u) {
        ctx->pc = 0x233F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F3Cu;
        // 0x233f40: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F44u;
        goto label_233f44;
    }
    ctx->pc = 0x233F3Cu;
    {
        const bool branch_taken_0x233f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F3Cu;
        // 0x233f40: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f3c) {
            ctx->pc = 0x234040u;
            goto label_234040;
        }
    }
    ctx->pc = 0x233F44u;
label_233f44:
    // 0x233f44: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x233f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_233f48:
    // 0x233f48: 0x8c6411e4  lw          $a0, 0x11E4($v1)
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4580)));
label_233f4c:
    // 0x233f4c: 0x5224003d  beql        $s1, $a0, . + 4 + (0x3D << 2)
label_233f50:
    if (ctx->pc == 0x233F50u) {
        ctx->pc = 0x233F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F4Cu;
        // 0x233f50: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F54u;
        goto label_233f54;
    }
    ctx->pc = 0x233F4Cu;
    {
        const bool branch_taken_0x233f4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x233f4c) {
            ctx->pc = 0x233F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233F4Cu;
            // 0x233f50: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234044u;
            goto label_234044;
        }
    }
    ctx->pc = 0x233F54u;
label_233f54:
    // 0x233f54: 0xc6200378  lwc1        $f0, 0x378($s1)
    ctx->pc = 0x233f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233f58:
    // 0x233f58: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x233f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233f5c:
    // 0x233f5c: 0x0  nop
    ctx->pc = 0x233f5cu;
    // NOP
label_233f60:
    // 0x233f60: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_233f64:
    if (ctx->pc == 0x233F64u) {
        ctx->pc = 0x233F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F60u;
        // 0x233f64: 0xc6210378  lwc1        $f1, 0x378($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F68u;
        goto label_233f68;
    }
    ctx->pc = 0x233F60u;
    {
        const bool branch_taken_0x233f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233f60) {
            ctx->pc = 0x233F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233F60u;
            // 0x233f64: 0xc6210378  lwc1        $f1, 0x378($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x233FA8u;
            goto label_233fa8;
        }
    }
    ctx->pc = 0x233F68u;
label_233f68:
    // 0x233f68: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x233f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_233f6c:
    // 0x233f6c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x233f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_233f70:
    // 0x233f70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_233f74:
    if (ctx->pc == 0x233F74u) {
        ctx->pc = 0x233F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F70u;
        // 0x233f74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F78u;
        goto label_233f78;
    }
    ctx->pc = 0x233F70u;
    {
        const bool branch_taken_0x233f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F70u;
        // 0x233f74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f70) {
            ctx->pc = 0x233F84u;
            goto label_233f84;
        }
    }
    ctx->pc = 0x233F78u;
label_233f78:
    // 0x233f78: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x233f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_233f7c:
    // 0x233f7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_233f80:
    if (ctx->pc == 0x233F80u) {
        ctx->pc = 0x233F84u;
        goto label_233f84;
    }
    ctx->pc = 0x233F7Cu;
    {
        const bool branch_taken_0x233f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f7c) {
            ctx->pc = 0x233F88u;
            goto label_233f88;
        }
    }
    ctx->pc = 0x233F84u;
label_233f84:
    // 0x233f84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233f88:
    // 0x233f88: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_233f8c:
    if (ctx->pc == 0x233F8Cu) {
        ctx->pc = 0x233F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F88u;
        // 0x233f8c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F90u;
        goto label_233f90;
    }
    ctx->pc = 0x233F88u;
    {
        const bool branch_taken_0x233f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F88u;
        // 0x233f8c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f88) {
            ctx->pc = 0x233F9Cu;
            goto label_233f9c;
        }
    }
    ctx->pc = 0x233F90u;
label_233f90:
    // 0x233f90: 0x8c43be00  lw          $v1, -0x4200($v0)
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950400)));
label_233f94:
    // 0x233f94: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_233f98:
    if (ctx->pc == 0x233F98u) {
        ctx->pc = 0x233F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F94u;
        // 0x233f98: 0xc6210378  lwc1        $f1, 0x378($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F9Cu;
        goto label_233f9c;
    }
    ctx->pc = 0x233F94u;
    {
        const bool branch_taken_0x233f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233f94) {
            ctx->pc = 0x233F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233F94u;
            // 0x233f98: 0xc6210378  lwc1        $f1, 0x378($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x233FA8u;
            goto label_233fa8;
        }
    }
    ctx->pc = 0x233F9Cu;
label_233f9c:
    // 0x233f9c: 0xc0837b4  jal         func_20DED0
label_233fa0:
    if (ctx->pc == 0x233FA0u) {
        ctx->pc = 0x233FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F9Cu;
        // 0x233fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FA4u;
        goto label_233fa4;
    }
    ctx->pc = 0x233F9Cu;
    SET_GPR_U32(ctx, 31, 0x233FA4u);
    ctx->pc = 0x233FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F9Cu;
    // 0x233fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x233F9Cu, 0x233FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FA4u;
label_233fa4:
    // 0x233fa4: 0xc6210378  lwc1        $f1, 0x378($s1)
    ctx->pc = 0x233fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233fa8:
    // 0x233fa8: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x233fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
label_233fac:
    // 0x233fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233fb0:
    // 0x233fb0: 0x0  nop
    ctx->pc = 0x233fb0u;
    // NOP
label_233fb4:
    // 0x233fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233fb8:
    // 0x233fb8: 0x0  nop
    ctx->pc = 0x233fb8u;
    // NOP
label_233fbc:
    // 0x233fbc: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_233fc0:
    if (ctx->pc == 0x233FC0u) {
        ctx->pc = 0x233FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FBCu;
        // 0x233fc0: 0x8e2404b8  lw          $a0, 0x4B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FC4u;
        goto label_233fc4;
    }
    ctx->pc = 0x233FBCu;
    {
        const bool branch_taken_0x233fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233fbc) {
            ctx->pc = 0x233FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233FBCu;
            // 0x233fc0: 0x8e2404b8  lw          $a0, 0x4B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233FFCu;
            goto label_233ffc;
        }
    }
    ctx->pc = 0x233FC4u;
label_233fc4:
    // 0x233fc4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_233fc8:
    // 0x233fc8: 0x8e240144  lw          $a0, 0x144($s1)
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_233fcc:
    // 0x233fcc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x233fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_233fd0:
    // 0x233fd0: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x233fd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_233fd4:
    // 0x233fd4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_233fd8:
    if (ctx->pc == 0x233FD8u) {
        ctx->pc = 0x233FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FD4u;
        // 0x233fd8: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FDCu;
        goto label_233fdc;
    }
    ctx->pc = 0x233FD4u;
    {
        const bool branch_taken_0x233fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FD4u;
        // 0x233fd8: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fd4) {
            ctx->pc = 0x233FF0u;
            goto label_233ff0;
        }
    }
    ctx->pc = 0x233FDCu;
label_233fdc:
    // 0x233fdc: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x233fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_233fe0:
    // 0x233fe0: 0xc0837b4  jal         func_20DED0
label_233fe4:
    if (ctx->pc == 0x233FE4u) {
        ctx->pc = 0x233FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FE0u;
        // 0x233fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FE8u;
        goto label_233fe8;
    }
    ctx->pc = 0x233FE0u;
    SET_GPR_U32(ctx, 31, 0x233FE8u);
    ctx->pc = 0x233FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FE0u;
    // 0x233fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x233FE0u, 0x233FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FE8u;
label_233fe8:
    // 0x233fe8: 0x10000004  b           . + 4 + (0x4 << 2)
label_233fec:
    if (ctx->pc == 0x233FECu) {
        ctx->pc = 0x233FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FE8u;
        // 0x233fec: 0x8e2404b8  lw          $a0, 0x4B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FF0u;
        goto label_233ff0;
    }
    ctx->pc = 0x233FE8u;
    {
        const bool branch_taken_0x233fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FE8u;
        // 0x233fec: 0x8e2404b8  lw          $a0, 0x4B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fe8) {
            ctx->pc = 0x233FFCu;
            goto label_233ffc;
        }
    }
    ctx->pc = 0x233FF0u;
label_233ff0:
    // 0x233ff0: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x233ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_233ff4:
    // 0x233ff4: 0xae220144  sw          $v0, 0x144($s1)
    ctx->pc = 0x233ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
label_233ff8:
    // 0x233ff8: 0x8e2404b8  lw          $a0, 0x4B8($s1)
    ctx->pc = 0x233ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
label_233ffc:
    // 0x233ffc: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_234000:
    if (ctx->pc == 0x234000u) {
        ctx->pc = 0x234000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FFCu;
        // 0x234000: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234004u;
        goto label_234004;
    }
    ctx->pc = 0x233FFCu;
    {
        const bool branch_taken_0x233ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ffc) {
            ctx->pc = 0x234000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233FFCu;
            // 0x234000: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234044u;
            goto label_234044;
        }
    }
    ctx->pc = 0x234004u;
label_234004:
    // 0x234004: 0xc6210378  lwc1        $f1, 0x378($s1)
    ctx->pc = 0x234004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_234008:
    // 0x234008: 0x3c01436d  lui         $at, 0x436D
    ctx->pc = 0x234008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17261 << 16));
label_23400c:
    // 0x23400c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_234010:
    // 0x234010: 0x0  nop
    ctx->pc = 0x234010u;
    // NOP
label_234014:
    // 0x234014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x234014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_234018:
    // 0x234018: 0x0  nop
    ctx->pc = 0x234018u;
    // NOP
label_23401c:
    // 0x23401c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_234020:
    if (ctx->pc == 0x234020u) {
        ctx->pc = 0x234020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23401Cu;
        // 0x234020: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234024u;
        goto label_234024;
    }
    ctx->pc = 0x23401Cu;
    {
        const bool branch_taken_0x23401c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23401c) {
            ctx->pc = 0x234020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23401Cu;
            // 0x234020: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234044u;
            goto label_234044;
        }
    }
    ctx->pc = 0x234024u;
label_234024:
    // 0x234024: 0xc0b0f1a  jal         func_2C3C68
label_234028:
    if (ctx->pc == 0x234028u) {
        ctx->pc = 0x23402Cu;
        goto label_23402c;
    }
    ctx->pc = 0x234024u;
    SET_GPR_U32(ctx, 31, 0x23402Cu);
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x234024u, 0x23402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23402Cu;
label_23402c:
    // 0x23402c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_234030:
    // 0x234030: 0x8e2504b8  lw          $a1, 0x4B8($s1)
    ctx->pc = 0x234030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
label_234034:
    // 0x234034: 0xc0b0ab2  jal         func_2C2AC8
label_234038:
    if (ctx->pc == 0x234038u) {
        ctx->pc = 0x234038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234034u;
        // 0x234038: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23403Cu;
        goto label_23403c;
    }
    ctx->pc = 0x234034u;
    SET_GPR_U32(ctx, 31, 0x23403Cu);
    ctx->pc = 0x234038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234034u;
    // 0x234038: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AC8u, 0x234034u, 0x23403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23403Cu;
label_23403c:
    // 0x23403c: 0xae2004b8  sw          $zero, 0x4B8($s1)
    ctx->pc = 0x23403cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1208), GPR_U32(ctx, 0));
label_234040:
    // 0x234040: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_234044:
    // 0x234044: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x234044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_234048:
    // 0x234048: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23404c:
    // 0x23404c: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_234050:
    if (ctx->pc == 0x234050u) {
        ctx->pc = 0x234050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23404Cu;
        // 0x234050: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234054u;
        goto label_234054;
    }
    ctx->pc = 0x23404Cu;
    {
        const bool branch_taken_0x23404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x234050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23404Cu;
        // 0x234050: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23404c) {
            ctx->pc = 0x2340CCu;
            goto label_2340cc;
        }
    }
    ctx->pc = 0x234054u;
label_234054:
    // 0x234054: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_234058:
    // 0x234058: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x234058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_23405c:
    // 0x23405c: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
label_234060:
    if (ctx->pc == 0x234060u) {
        ctx->pc = 0x234060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23405Cu;
        // 0x234060: 0x8e22029c  lw          $v0, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234064u;
        goto label_234064;
    }
    ctx->pc = 0x23405Cu;
    {
        const bool branch_taken_0x23405c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23405c) {
            ctx->pc = 0x234060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23405Cu;
            // 0x234060: 0x8e22029c  lw          $v0, 0x29C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2340D0u;
            goto label_2340d0;
        }
    }
    ctx->pc = 0x234064u;
label_234064:
    // 0x234064: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x234064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_234068:
    // 0x234068: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x234068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_23406c:
    // 0x23406c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_234070:
    // 0x234070: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_234074:
    if (ctx->pc == 0x234074u) {
        ctx->pc = 0x234074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234070u;
        // 0x234074: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234078u;
        goto label_234078;
    }
    ctx->pc = 0x234070u;
    {
        const bool branch_taken_0x234070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234070) {
            ctx->pc = 0x234074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234070u;
            // 0x234074: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234144u;
            goto label_234144;
        }
    }
    ctx->pc = 0x234078u;
label_234078:
    // 0x234078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23407c:
    // 0x23407c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_234080:
    // 0x234080: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_234084:
    if (ctx->pc == 0x234084u) {
        ctx->pc = 0x234084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234080u;
        // 0x234084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234088u;
        goto label_234088;
    }
    ctx->pc = 0x234080u;
    {
        const bool branch_taken_0x234080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234080u;
        // 0x234084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234080) {
            ctx->pc = 0x23409Cu;
            goto label_23409c;
        }
    }
    ctx->pc = 0x234088u;
label_234088:
    // 0x234088: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23408c:
    // 0x23408c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_234090:
    if (ctx->pc == 0x234090u) {
        ctx->pc = 0x234090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23408Cu;
        // 0x234090: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234094u;
        goto label_234094;
    }
    ctx->pc = 0x23408Cu;
    {
        const bool branch_taken_0x23408c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23408Cu;
        // 0x234090: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23408c) {
            ctx->pc = 0x23409Cu;
            goto label_23409c;
        }
    }
    ctx->pc = 0x234094u;
label_234094:
    // 0x234094: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_234098:
    if (ctx->pc == 0x234098u) {
        ctx->pc = 0x23409Cu;
        goto label_23409c;
    }
    ctx->pc = 0x234094u;
    {
        const bool branch_taken_0x234094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234094) {
            ctx->pc = 0x2340A0u;
            goto label_2340a0;
        }
    }
    ctx->pc = 0x23409Cu;
label_23409c:
    // 0x23409c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2340a0:
    // 0x2340a0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2340a4:
    if (ctx->pc == 0x2340A4u) {
        ctx->pc = 0x2340A8u;
        goto label_2340a8;
    }
    ctx->pc = 0x2340A0u;
    {
        const bool branch_taken_0x2340a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340a0) {
            ctx->pc = 0x2340C4u;
            goto label_2340c4;
        }
    }
    ctx->pc = 0x2340A8u;
label_2340a8:
    // 0x2340a8: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2340a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2340ac:
    // 0x2340ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2340b0:
    if (ctx->pc == 0x2340B0u) {
        ctx->pc = 0x2340B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340ACu;
        // 0x2340b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340B4u;
        goto label_2340b4;
    }
    ctx->pc = 0x2340ACu;
    {
        const bool branch_taken_0x2340ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340ac) {
            ctx->pc = 0x2340B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2340ACu;
            // 0x2340b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2340C4u;
            goto label_2340c4;
        }
    }
    ctx->pc = 0x2340B4u;
label_2340b4:
    // 0x2340b4: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x2340b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_2340b8:
    // 0x2340b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2340b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2340bc:
    // 0x2340bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2340c0:
    if (ctx->pc == 0x2340C0u) {
        ctx->pc = 0x2340C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340BCu;
        // 0x2340c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340C4u;
        goto label_2340c4;
    }
    ctx->pc = 0x2340BCu;
    {
        const bool branch_taken_0x2340bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340bc) {
            ctx->pc = 0x2340C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2340BCu;
            // 0x2340c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2340C4u;
            goto label_2340c4;
        }
    }
    ctx->pc = 0x2340C4u;
label_2340c4:
    // 0x2340c4: 0x50c0001f  beql        $a2, $zero, . + 4 + (0x1F << 2)
label_2340c8:
    if (ctx->pc == 0x2340C8u) {
        ctx->pc = 0x2340C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340C4u;
        // 0x2340c8: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340CCu;
        goto label_2340cc;
    }
    ctx->pc = 0x2340C4u;
    {
        const bool branch_taken_0x2340c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340c4) {
            ctx->pc = 0x2340C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2340C4u;
            // 0x2340c8: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234144u;
            goto label_234144;
        }
    }
    ctx->pc = 0x2340CCu;
label_2340cc:
    // 0x2340cc: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x2340ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_2340d0:
    // 0x2340d0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_2340d4:
    if (ctx->pc == 0x2340D4u) {
        ctx->pc = 0x2340D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340D0u;
        // 0x2340d4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340D8u;
        goto label_2340d8;
    }
    ctx->pc = 0x2340D0u;
    {
        const bool branch_taken_0x2340d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340d0) {
            ctx->pc = 0x2340D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2340D0u;
            // 0x2340d4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234120u;
            goto label_234120;
        }
    }
    ctx->pc = 0x2340D8u;
label_2340d8:
    // 0x2340d8: 0xc07a8b2  jal         func_1EA2C8
label_2340dc:
    if (ctx->pc == 0x2340DCu) {
        ctx->pc = 0x2340DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340D8u;
        // 0x2340dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340E0u;
        goto label_2340e0;
    }
    ctx->pc = 0x2340D8u;
    SET_GPR_U32(ctx, 31, 0x2340E0u);
    ctx->pc = 0x2340DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340D8u;
    // 0x2340dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2340D8u, 0x2340E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340E0u;
label_2340e0:
    // 0x2340e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2340e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2340e4:
    // 0x2340e4: 0xc08f808  jal         func_23E020
label_2340e8:
    if (ctx->pc == 0x2340E8u) {
        ctx->pc = 0x2340E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340E4u;
        // 0x2340e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340ECu;
        goto label_2340ec;
    }
    ctx->pc = 0x2340E4u;
    SET_GPR_U32(ctx, 31, 0x2340ECu);
    ctx->pc = 0x2340E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2340E4u;
    // 0x2340e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E020u, 0x2340E4u, 0x2340ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2340ECu;
label_2340ec:
    // 0x2340ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2340f0:
    if (ctx->pc == 0x2340F0u) {
        ctx->pc = 0x2340F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340ECu;
        // 0x2340f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340F4u;
        goto label_2340f4;
    }
    ctx->pc = 0x2340ECu;
    {
        const bool branch_taken_0x2340ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340ECu;
        // 0x2340f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340ec) {
            ctx->pc = 0x23411Cu;
            goto label_23411c;
        }
    }
    ctx->pc = 0x2340F4u;
label_2340f4:
    // 0x2340f4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2340f8:
    // 0x2340f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2340f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2340fc:
    // 0x2340fc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_234100:
    // 0x234100: 0x40f809  jalr        $v0
label_234104:
    if (ctx->pc == 0x234104u) {
        ctx->pc = 0x234104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234100u;
        // 0x234104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234108u;
        goto label_234108;
    }
    ctx->pc = 0x234100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234108u);
        ctx->pc = 0x234104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234100u;
        // 0x234104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234100u, 0x234108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234108u;
label_234108:
    // 0x234108: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_23410c:
    // 0x23410c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234110:
    // 0x234110: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_234114:
    // 0x234114: 0x40f809  jalr        $v0
label_234118:
    if (ctx->pc == 0x234118u) {
        ctx->pc = 0x234118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234114u;
        // 0x234118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23411Cu;
        goto label_23411c;
    }
    ctx->pc = 0x234114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23411Cu);
        ctx->pc = 0x234118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234114u;
        // 0x234118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234114u, 0x23411Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23411Cu;
label_23411c:
    // 0x23411c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_234120:
    // 0x234120: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x234120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_234124:
    // 0x234124: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x234124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_234128:
    // 0x234128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23412c:
    if (ctx->pc == 0x23412Cu) {
        ctx->pc = 0x23412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234128u;
        // 0x23412c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234130u;
        goto label_234130;
    }
    ctx->pc = 0x234128u;
    {
        const bool branch_taken_0x234128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234128u;
        // 0x23412c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234128) {
            ctx->pc = 0x234140u;
            goto label_234140;
        }
    }
    ctx->pc = 0x234130u;
label_234130:
    // 0x234130: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x234130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_234134:
    // 0x234134: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x234134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_234138:
    // 0x234138: 0x14640145  bne         $v1, $a0, . + 4 + (0x145 << 2)
label_23413c:
    if (ctx->pc == 0x23413Cu) {
        ctx->pc = 0x23413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234138u;
        // 0x23413c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234140u;
        goto label_234140;
    }
    ctx->pc = 0x234138u;
    {
        const bool branch_taken_0x234138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234138u;
        // 0x23413c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234138) {
            ctx->pc = 0x234650u;
            goto label_234650;
        }
    }
    ctx->pc = 0x234140u;
label_234140:
    // 0x234140: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x234140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_234144:
    // 0x234144: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_234148:
    if (ctx->pc == 0x234148u) {
        ctx->pc = 0x234148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234144u;
        // 0x234148: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23414Cu;
        goto label_23414c;
    }
    ctx->pc = 0x234144u;
    {
        const bool branch_taken_0x234144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234144u;
        // 0x234148: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234144) {
            ctx->pc = 0x234230u;
            goto label_234230;
        }
    }
    ctx->pc = 0x23414Cu;
label_23414c:
    // 0x23414c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23414cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234150:
    // 0x234150: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x234150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_234154:
    // 0x234154: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_234158:
    if (ctx->pc == 0x234158u) {
        ctx->pc = 0x234158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234154u;
        // 0x234158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23415Cu;
        goto label_23415c;
    }
    ctx->pc = 0x234154u;
    {
        const bool branch_taken_0x234154 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x234158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234154u;
        // 0x234158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234154) {
            ctx->pc = 0x234170u;
            goto label_234170;
        }
    }
    ctx->pc = 0x23415Cu;
label_23415c:
    // 0x23415c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23415cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_234160:
    // 0x234160: 0x0  nop
    ctx->pc = 0x234160u;
    // NOP
label_234164:
    // 0x234164: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x234164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_234168:
    // 0x234168: 0x10000007  b           . + 4 + (0x7 << 2)
label_23416c:
    if (ctx->pc == 0x23416Cu) {
        ctx->pc = 0x234170u;
        goto label_234170;
    }
    ctx->pc = 0x234168u;
    {
        const bool branch_taken_0x234168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234168) {
            ctx->pc = 0x234188u;
            goto label_234188;
        }
    }
    ctx->pc = 0x234170u;
label_234170:
    // 0x234170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x234170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_234174:
    // 0x234174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234178:
    // 0x234178: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x234178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23417c:
    // 0x23417c: 0x0  nop
    ctx->pc = 0x23417cu;
    // NOP
label_234180:
    // 0x234180: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x234180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_234184:
    // 0x234184: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x234184u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_234188:
    // 0x234188: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x234188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_23418c:
    // 0x23418c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23418cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_234190:
    // 0x234190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_234194:
    // 0x234194: 0xc6210480  lwc1        $f1, 0x480($s1)
    ctx->pc = 0x234194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_234198:
    // 0x234198: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x234198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_23419c:
    // 0x23419c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23419cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2341a0:
    // 0x2341a0: 0x0  nop
    ctx->pc = 0x2341a0u;
    // NOP
label_2341a4:
    // 0x2341a4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_2341a8:
    if (ctx->pc == 0x2341A8u) {
        ctx->pc = 0x2341A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341A4u;
        // 0x2341a8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341ACu;
        goto label_2341ac;
    }
    ctx->pc = 0x2341A4u;
    {
        const bool branch_taken_0x2341a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2341A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341A4u;
        // 0x2341a8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341a4) {
            ctx->pc = 0x234230u;
            goto label_234230;
        }
    }
    ctx->pc = 0x2341ACu;
label_2341ac:
    // 0x2341ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2341acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2341b0:
    // 0x2341b0: 0x90445aec  lbu         $a0, 0x5AEC($v0)
    ctx->pc = 0x2341b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
label_2341b4:
    // 0x2341b4: 0x8c65be30  lw          $a1, -0x41D0($v1)
    ctx->pc = 0x2341b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950448)));
label_2341b8:
    // 0x2341b8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_2341bc:
    if (ctx->pc == 0x2341BCu) {
        ctx->pc = 0x2341BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341B8u;
        // 0x2341bc: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341C0u;
        goto label_2341c0;
    }
    ctx->pc = 0x2341B8u;
    {
        const bool branch_taken_0x2341b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2341BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341B8u;
        // 0x2341bc: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341b8) {
            ctx->pc = 0x2341D8u;
            goto label_2341d8;
        }
    }
    ctx->pc = 0x2341C0u;
label_2341c0:
    // 0x2341c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2341c4:
    if (ctx->pc == 0x2341C4u) {
        ctx->pc = 0x2341C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341C0u;
        // 0x2341c4: 0x8cc22b00  lw          $v0, 0x2B00($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341C8u;
        goto label_2341c8;
    }
    ctx->pc = 0x2341C0u;
    {
        const bool branch_taken_0x2341c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2341C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341C0u;
        // 0x2341c4: 0x8cc22b00  lw          $v0, 0x2B00($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341c0) {
            ctx->pc = 0x2341DCu;
            goto label_2341dc;
        }
    }
    ctx->pc = 0x2341C8u;
label_2341c8:
    // 0x2341c8: 0xc08f956  jal         func_23E558
label_2341cc:
    if (ctx->pc == 0x2341CCu) {
        ctx->pc = 0x2341CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341C8u;
        // 0x2341cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341D0u;
        goto label_2341d0;
    }
    ctx->pc = 0x2341C8u;
    SET_GPR_U32(ctx, 31, 0x2341D0u);
    ctx->pc = 0x2341CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2341C8u;
    // 0x2341cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x2341C8u, 0x2341D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2341D0u;
label_2341d0:
    // 0x2341d0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2341d4:
    if (ctx->pc == 0x2341D4u) {
        ctx->pc = 0x2341D8u;
        goto label_2341d8;
    }
    ctx->pc = 0x2341D0u;
    {
        const bool branch_taken_0x2341d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341d0) {
            ctx->pc = 0x234230u;
            goto label_234230;
        }
    }
    ctx->pc = 0x2341D8u;
label_2341d8:
    // 0x2341d8: 0x8cc22b00  lw          $v0, 0x2B00($a2)
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
label_2341dc:
    // 0x2341dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2341e0:
    if (ctx->pc == 0x2341E0u) {
        ctx->pc = 0x2341E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341DCu;
        // 0x2341e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341E4u;
        goto label_2341e4;
    }
    ctx->pc = 0x2341DCu;
    {
        const bool branch_taken_0x2341dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2341E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341DCu;
        // 0x2341e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341dc) {
            ctx->pc = 0x2341F8u;
            goto label_2341f8;
        }
    }
    ctx->pc = 0x2341E4u;
label_2341e4:
    // 0x2341e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2341e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2341e8:
    // 0x2341e8: 0x0  nop
    ctx->pc = 0x2341e8u;
    // NOP
label_2341ec:
    // 0x2341ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2341ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2341f0:
    // 0x2341f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2341f4:
    if (ctx->pc == 0x2341F4u) {
        ctx->pc = 0x2341F8u;
        goto label_2341f8;
    }
    ctx->pc = 0x2341F0u;
    {
        const bool branch_taken_0x2341f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341f0) {
            ctx->pc = 0x234210u;
            goto label_234210;
        }
    }
    ctx->pc = 0x2341F8u;
label_2341f8:
    // 0x2341f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2341f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2341fc:
    // 0x2341fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2341fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234200:
    // 0x234200: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x234200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_234204:
    // 0x234204: 0x0  nop
    ctx->pc = 0x234204u;
    // NOP
label_234208:
    // 0x234208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x234208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_23420c:
    // 0x23420c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x23420cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_234210:
    // 0x234210: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_234214:
    // 0x234214: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x234214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_234218:
    // 0x234218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23421c:
    // 0x23421c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23421cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_234220:
    // 0x234220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_234224:
    // 0x234224: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x234224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_234228:
    // 0x234228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x234228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23422c:
    // 0x23422c: 0xe6200480  swc1        $f0, 0x480($s1)
    ctx->pc = 0x23422cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1152), bits); }
label_234230:
    // 0x234230: 0xc08f644  jal         func_23D910
label_234234:
    if (ctx->pc == 0x234234u) {
        ctx->pc = 0x234234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234230u;
        // 0x234234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234238u;
        goto label_234238;
    }
    ctx->pc = 0x234230u;
    SET_GPR_U32(ctx, 31, 0x234238u);
    ctx->pc = 0x234234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234230u;
    // 0x234234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D910u, 0x234230u, 0x234238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234238u;
label_234238:
    // 0x234238: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_23423c:
    if (ctx->pc == 0x23423Cu) {
        ctx->pc = 0x234240u;
        goto label_234240;
    }
    ctx->pc = 0x234238u;
    {
        const bool branch_taken_0x234238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234238) {
            ctx->pc = 0x23431Cu;
            goto label_23431c;
        }
    }
    ctx->pc = 0x234240u;
label_234240:
    // 0x234240: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x234240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_234244:
    // 0x234244: 0x90500032  lbu         $s0, 0x32($v0)
    ctx->pc = 0x234244u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
label_234248:
    // 0x234248: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x234248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_23424c:
    // 0x23424c: 0x320300fe  andi        $v1, $s0, 0xFE
    ctx->pc = 0x23424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)254);
label_234250:
    // 0x234250: 0xa0430032  sb          $v1, 0x32($v0)
    ctx->pc = 0x234250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 3));
label_234254:
    // 0x234254: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x234254u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_234258:
    // 0x234258: 0xc07682a  jal         func_1DA0A8
label_23425c:
    if (ctx->pc == 0x23425Cu) {
        ctx->pc = 0x23425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234258u;
        // 0x23425c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234260u;
        goto label_234260;
    }
    ctx->pc = 0x234258u;
    SET_GPR_U32(ctx, 31, 0x234260u);
    ctx->pc = 0x23425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234258u;
    // 0x23425c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x234258u, 0x234260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234260u;
label_234260:
    // 0x234260: 0xae200fd0  sw          $zero, 0xFD0($s1)
    ctx->pc = 0x234260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4048), GPR_U32(ctx, 0));
label_234264:
    // 0x234264: 0xc0843ea  jal         func_210FA8
label_234268:
    if (ctx->pc == 0x234268u) {
        ctx->pc = 0x234268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234264u;
        // 0x234268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23426Cu;
        goto label_23426c;
    }
    ctx->pc = 0x234264u;
    SET_GPR_U32(ctx, 31, 0x23426Cu);
    ctx->pc = 0x234268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234264u;
    // 0x234268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x234264u, 0x23426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23426Cu;
label_23426c:
    // 0x23426c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_234270:
    if (ctx->pc == 0x234270u) {
        ctx->pc = 0x234270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23426Cu;
        // 0x234270: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234274u;
        goto label_234274;
    }
    ctx->pc = 0x23426Cu;
    {
        const bool branch_taken_0x23426c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23426Cu;
        // 0x234270: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23426c) {
            ctx->pc = 0x234288u;
            goto label_234288;
        }
    }
    ctx->pc = 0x234274u;
label_234274:
    // 0x234274: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x234274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_234278:
    // 0x234278: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x234278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_23427c:
    // 0x23427c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_234280:
    // 0x234280: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x234280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_234284:
    // 0x234284: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_234288:
    // 0x234288: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_23428c:
    // 0x23428c: 0x68450127  ldl         $a1, 0x127($v0)
    ctx->pc = 0x23428cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_234290:
    // 0x234290: 0x6c450120  ldr         $a1, 0x120($v0)
    ctx->pc = 0x234290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_234294:
    // 0x234294: 0x6846012f  ldl         $a2, 0x12F($v0)
    ctx->pc = 0x234294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_234298:
    // 0x234298: 0x6c460128  ldr         $a2, 0x128($v0)
    ctx->pc = 0x234298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_23429c:
    // 0x23429c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x23429cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342a0:
    // 0x2342a0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2342a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342a4:
    // 0x2342a4: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x2342a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342a8:
    // 0x2342a8: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x2342a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342ac:
    // 0x2342ac: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2342acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2342b0:
    // 0x2342b0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2342b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2342b4:
    // 0x2342b4: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x2342b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2342b8:
    // 0x2342b8: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x2342b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2342bc:
    // 0x2342bc: 0xb2220127  sdl         $v0, 0x127($s1)
    ctx->pc = 0x2342bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342c0:
    // 0x2342c0: 0xb6220120  sdr         $v0, 0x120($s1)
    ctx->pc = 0x2342c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342c4:
    // 0x2342c4: 0xb225012f  sdl         $a1, 0x12F($s1)
    ctx->pc = 0x2342c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342c8:
    // 0x2342c8: 0xb6250128  sdr         $a1, 0x128($s1)
    ctx->pc = 0x2342c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2342cc:
    // 0x2342cc: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_2342d0:
    // 0x2342d0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2342d4:
    // 0x2342d4: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x2342d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2342d8:
    // 0x2342d8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2342dc:
    if (ctx->pc == 0x2342DCu) {
        ctx->pc = 0x2342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342D8u;
        // 0x2342dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342E0u;
        goto label_2342e0;
    }
    ctx->pc = 0x2342D8u;
    {
        const bool branch_taken_0x2342d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342D8u;
        // 0x2342dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342d8) {
            ctx->pc = 0x2342ECu;
            goto label_2342ec;
        }
    }
    ctx->pc = 0x2342E0u;
label_2342e0:
    // 0x2342e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2342e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2342e4:
    // 0x2342e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2342e8:
    if (ctx->pc == 0x2342E8u) {
        ctx->pc = 0x2342ECu;
        goto label_2342ec;
    }
    ctx->pc = 0x2342E4u;
    {
        const bool branch_taken_0x2342e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342e4) {
            ctx->pc = 0x2342F0u;
            goto label_2342f0;
        }
    }
    ctx->pc = 0x2342ECu;
label_2342ec:
    // 0x2342ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2342ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2342f0:
    // 0x2342f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2342f4:
    if (ctx->pc == 0x2342F4u) {
        ctx->pc = 0x2342F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F0u;
        // 0x2342f4: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342F8u;
        goto label_2342f8;
    }
    ctx->pc = 0x2342F0u;
    {
        const bool branch_taken_0x2342f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F0u;
        // 0x2342f4: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342f0) {
            ctx->pc = 0x234300u;
            goto label_234300;
        }
    }
    ctx->pc = 0x2342F8u;
label_2342f8:
    // 0x2342f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2342fc:
    if (ctx->pc == 0x2342FCu) {
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234300u;
        goto label_234300;
    }
    ctx->pc = 0x2342F8u;
    {
        const bool branch_taken_0x2342f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342f8) {
            ctx->pc = 0x234308u;
            goto label_234308;
        }
    }
    ctx->pc = 0x234300u;
label_234300:
    // 0x234300: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_234304:
    // 0x234304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234308:
    // 0x234308: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_23430c:
    if (ctx->pc == 0x23430Cu) {
        ctx->pc = 0x23430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234308u;
        // 0x23430c: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234310u;
        goto label_234310;
    }
    ctx->pc = 0x234308u;
    {
        const bool branch_taken_0x234308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234308u;
        // 0x23430c: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234308) {
            ctx->pc = 0x23431Cu;
            goto label_23431c;
        }
    }
    ctx->pc = 0x234310u;
label_234310:
    // 0x234310: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x234310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_234314:
    // 0x234314: 0x8c4395a0  lw          $v1, -0x6A60($v0)
    ctx->pc = 0x234314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940064)));
label_234318:
    // 0x234318: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x234318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_23431c:
    // 0x23431c: 0xc0894f6  jal         func_2253D8
label_234320:
    if (ctx->pc == 0x234320u) {
        ctx->pc = 0x234320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23431Cu;
        // 0x234320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234324u;
        goto label_234324;
    }
    ctx->pc = 0x23431Cu;
    SET_GPR_U32(ctx, 31, 0x234324u);
    ctx->pc = 0x234320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23431Cu;
    // 0x234320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x23431Cu, 0x234324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234324u;
label_234324:
    // 0x234324: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_234328:
    if (ctx->pc == 0x234328u) {
        ctx->pc = 0x234328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234324u;
        // 0x234328: 0x8e240fc4  lw          $a0, 0xFC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23432Cu;
        goto label_23432c;
    }
    ctx->pc = 0x234324u;
    {
        const bool branch_taken_0x234324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234324) {
            ctx->pc = 0x234328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234324u;
            // 0x234328: 0x8e240fc4  lw          $a0, 0xFC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234338u;
            goto label_234338;
        }
    }
    ctx->pc = 0x23432Cu;
label_23432c:
    // 0x23432c: 0xc0b8394  jal         func_2E0E50
label_234330:
    if (ctx->pc == 0x234330u) {
        ctx->pc = 0x234330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23432Cu;
        // 0x234330: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234334u;
        goto label_234334;
    }
    ctx->pc = 0x23432Cu;
    SET_GPR_U32(ctx, 31, 0x234334u);
    ctx->pc = 0x234330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23432Cu;
    // 0x234330: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E50u, 0x23432Cu, 0x234334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234334u;
label_234334:
    // 0x234334: 0x8e240fc4  lw          $a0, 0xFC4($s1)
    ctx->pc = 0x234334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4036)));
label_234338:
    // 0x234338: 0xc096c24  jal         func_25B090
label_23433c:
    if (ctx->pc == 0x23433Cu) {
        ctx->pc = 0x23433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234338u;
        // 0x23433c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234340u;
        goto label_234340;
    }
    ctx->pc = 0x234338u;
    SET_GPR_U32(ctx, 31, 0x234340u);
    ctx->pc = 0x23433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234338u;
    // 0x23433c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B090u, 0x234338u, 0x234340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234340u;
label_234340:
    // 0x234340: 0xc6210380  lwc1        $f1, 0x380($s1)
    ctx->pc = 0x234340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_234344:
    // 0x234344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_234348:
    // 0x234348: 0x0  nop
    ctx->pc = 0x234348u;
    // NOP
label_23434c:
    // 0x23434c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23434cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_234350:
    // 0x234350: 0x0  nop
    ctx->pc = 0x234350u;
    // NOP
label_234354:
    // 0x234354: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_234358:
    if (ctx->pc == 0x234358u) {
        ctx->pc = 0x234358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234354u;
        // 0x234358: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23435Cu;
        goto label_23435c;
    }
    ctx->pc = 0x234354u;
    {
        const bool branch_taken_0x234354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234354u;
        // 0x234358: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234354) {
            ctx->pc = 0x234368u;
            goto label_234368;
        }
    }
    ctx->pc = 0x23435Cu;
label_23435c:
    // 0x23435c: 0xc44096f4  lwc1        $f0, -0x690C($v0)
    ctx->pc = 0x23435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234360:
    // 0x234360: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x234360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_234364:
    // 0x234364: 0xe6200380  swc1        $f0, 0x380($s1)
    ctx->pc = 0x234364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
label_234368:
    // 0x234368: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x234368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_23436c:
    // 0x23436c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_234370:
    if (ctx->pc == 0x234370u) {
        ctx->pc = 0x234370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23436Cu;
        // 0x234370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234374u;
        goto label_234374;
    }
    ctx->pc = 0x23436Cu;
    {
        const bool branch_taken_0x23436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23436Cu;
        // 0x234370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23436c) {
            ctx->pc = 0x234468u;
            goto label_234468;
        }
    }
    ctx->pc = 0x234374u;
label_234374:
    // 0x234374: 0xc06a1e2  jal         func_1A8788
label_234378:
    if (ctx->pc == 0x234378u) {
        ctx->pc = 0x234378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234374u;
        // 0x234378: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23437Cu;
        goto label_23437c;
    }
    ctx->pc = 0x234374u;
    SET_GPR_U32(ctx, 31, 0x23437Cu);
    ctx->pc = 0x234378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234374u;
    // 0x234378: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8788u, 0x234374u, 0x23437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23437Cu;
label_23437c:
    // 0x23437c: 0xc06c518  jal         func_1B1460
label_234380:
    if (ctx->pc == 0x234380u) {
        ctx->pc = 0x234380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23437Cu;
        // 0x234380: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234384u;
        goto label_234384;
    }
    ctx->pc = 0x23437Cu;
    SET_GPR_U32(ctx, 31, 0x234384u);
    ctx->pc = 0x234380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23437Cu;
    // 0x234380: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1460u, 0x23437Cu, 0x234384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234384u;
label_234384:
    // 0x234384: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x234384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_234388:
    // 0x234388: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_23438c:
    // 0x23438c: 0x24634ba8  addiu       $v1, $v1, 0x4BA8
    ctx->pc = 0x23438cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19368));
label_234390:
    // 0x234390: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_234394:
    // 0x234394: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x234394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_234398:
    // 0x234398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23439c:
    // 0x23439c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x23439cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2343a0:
    // 0x2343a0: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_2343a4:
    if (ctx->pc == 0x2343A4u) {
        ctx->pc = 0x2343A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343A0u;
        // 0x2343a4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343A8u;
        goto label_2343a8;
    }
    ctx->pc = 0x2343A0u;
    {
        const bool branch_taken_0x2343a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2343a0) {
            ctx->pc = 0x2343A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2343A0u;
            // 0x2343a4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234400u;
            goto label_234400;
        }
    }
    ctx->pc = 0x2343A8u;
label_2343a8:
    // 0x2343a8: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2343a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2343ac:
    // 0x2343ac: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2343acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2343b0:
    // 0x2343b0: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x2343b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2343b4:
    // 0x2343b4: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x2343b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2343b8:
    // 0x2343b8: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2343b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2343bc:
    // 0x2343bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2343c0:
    // 0x2343c0: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2343c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_2343c4:
    // 0x2343c4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_2343c8:
    if (ctx->pc == 0x2343C8u) {
        ctx->pc = 0x2343C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343C4u;
        // 0x2343c8: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343CCu;
        goto label_2343cc;
    }
    ctx->pc = 0x2343C4u;
    {
        const bool branch_taken_0x2343c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2343C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343C4u;
        // 0x2343c8: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343c4) {
            ctx->pc = 0x2343ECu;
            goto label_2343ec;
        }
    }
    ctx->pc = 0x2343CCu;
label_2343cc:
    // 0x2343cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2343ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2343d0:
    // 0x2343d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2343d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2343d4:
    // 0x2343d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2343d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2343d8:
    // 0x2343d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2343d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2343dc:
    // 0x2343dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2343e0:
    // 0x2343e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2343e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2343e4:
    // 0x2343e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2343e8:
    if (ctx->pc == 0x2343E8u) {
        ctx->pc = 0x2343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343E4u;
        // 0x2343e8: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343ECu;
        goto label_2343ec;
    }
    ctx->pc = 0x2343E4u;
    {
        const bool branch_taken_0x2343e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343E4u;
        // 0x2343e8: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343e4) {
            ctx->pc = 0x2343F0u;
            goto label_2343f0;
        }
    }
    ctx->pc = 0x2343ECu;
label_2343ec:
    // 0x2343ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2343f0:
    // 0x2343f0: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x2343f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_2343f4:
    // 0x2343f4: 0x40f809  jalr        $v0
label_2343f8:
    if (ctx->pc == 0x2343F8u) {
        ctx->pc = 0x2343F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343F4u;
        // 0x2343f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343FCu;
        goto label_2343fc;
    }
    ctx->pc = 0x2343F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2343FCu);
        ctx->pc = 0x2343F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343F4u;
        // 0x2343f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343F4u, 0x2343FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2343FCu;
label_2343fc:
    // 0x2343fc: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2343fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_234400:
    // 0x234400: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x234400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_234404:
    // 0x234404: 0x24634e30  addiu       $v1, $v1, 0x4E30
    ctx->pc = 0x234404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20016));
label_234408:
    // 0x234408: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x234408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_23440c:
    // 0x23440c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_234410:
    // 0x234410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234414:
    // 0x234414: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x234414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_234418:
    // 0x234418: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_23441c:
    if (ctx->pc == 0x23441Cu) {
        ctx->pc = 0x23441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234418u;
        // 0x23441c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234420u;
        goto label_234420;
    }
    ctx->pc = 0x234418u;
    {
        const bool branch_taken_0x234418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234418u;
        // 0x23441c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234418) {
            ctx->pc = 0x234468u;
            goto label_234468;
        }
    }
    ctx->pc = 0x234420u;
label_234420:
    // 0x234420: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x234420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_234424:
    // 0x234424: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x234424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_234428:
    // 0x234428: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x234428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_23442c:
    // 0x23442c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x23442cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_234430:
    // 0x234430: 0x87a30012  lh          $v1, 0x12($sp)
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
label_234434:
    // 0x234434: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_234438:
    if (ctx->pc == 0x234438u) {
        ctx->pc = 0x234438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234434u;
        // 0x234438: 0x87a20014  lh          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23443Cu;
        goto label_23443c;
    }
    ctx->pc = 0x234434u;
    {
        const bool branch_taken_0x234434 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x234438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234434u;
        // 0x234438: 0x87a20014  lh          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234434) {
            ctx->pc = 0x234454u;
            goto label_234454;
        }
    }
    ctx->pc = 0x23443Cu;
label_23443c:
    // 0x23443c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23443cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_234440:
    // 0x234440: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x234440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_234444:
    // 0x234444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234448:
    // 0x234448: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23444c:
    // 0x23444c: 0x10000002  b           . + 4 + (0x2 << 2)
label_234450:
    if (ctx->pc == 0x234450u) {
        ctx->pc = 0x234450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23444Cu;
        // 0x234450: 0x8c63fffc  lw          $v1, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234454u;
        goto label_234454;
    }
    ctx->pc = 0x23444Cu;
    {
        const bool branch_taken_0x23444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23444Cu;
        // 0x234450: 0x8c63fffc  lw          $v1, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23444c) {
            ctx->pc = 0x234458u;
            goto label_234458;
        }
    }
    ctx->pc = 0x234454u;
label_234454:
    // 0x234454: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x234454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_234458:
    // 0x234458: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x234458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_23445c:
    // 0x23445c: 0x60f809  jalr        $v1
label_234460:
    if (ctx->pc == 0x234460u) {
        ctx->pc = 0x234460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23445Cu;
        // 0x234460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234464u;
        goto label_234464;
    }
    ctx->pc = 0x23445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234464u);
        ctx->pc = 0x234460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23445Cu;
        // 0x234460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23445Cu, 0x234464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234464u;
label_234464:
    // 0x234464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234468:
    // 0x234468: 0xc08e966  jal         func_23A598
label_23446c:
    if (ctx->pc == 0x23446Cu) {
        ctx->pc = 0x23446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234468u;
        // 0x23446c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234470u;
        goto label_234470;
    }
    ctx->pc = 0x234468u;
    SET_GPR_U32(ctx, 31, 0x234470u);
    ctx->pc = 0x23446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234468u;
    // 0x23446c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A598u, 0x234468u, 0x234470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234470u;
label_234470:
    // 0x234470: 0xc08e2b4  jal         func_238AD0
label_234474:
    if (ctx->pc == 0x234474u) {
        ctx->pc = 0x234474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234470u;
        // 0x234474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234478u;
        goto label_234478;
    }
    ctx->pc = 0x234470u;
    SET_GPR_U32(ctx, 31, 0x234478u);
    ctx->pc = 0x234474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234470u;
    // 0x234474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x234470u, 0x234478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234478u;
label_234478:
    // 0x234478: 0xc089812  jal         func_226048
label_23447c:
    if (ctx->pc == 0x23447Cu) {
        ctx->pc = 0x23447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234478u;
        // 0x23447c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234480u;
        goto label_234480;
    }
    ctx->pc = 0x234478u;
    SET_GPR_U32(ctx, 31, 0x234480u);
    ctx->pc = 0x23447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234478u;
    // 0x23447c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226048u, 0x234478u, 0x234480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234480u;
label_234480:
    // 0x234480: 0xc08d1bc  jal         func_2346F0
label_234484:
    if (ctx->pc == 0x234484u) {
        ctx->pc = 0x234484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234480u;
        // 0x234484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234488u;
        goto label_234488;
    }
    ctx->pc = 0x234480u;
    SET_GPR_U32(ctx, 31, 0x234488u);
    ctx->pc = 0x234484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234480u;
    // 0x234484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2346F0u, 0x234480u, 0x234488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234488u;
label_234488:
    // 0x234488: 0xc091b76  jal         func_246DD8
label_23448c:
    if (ctx->pc == 0x23448Cu) {
        ctx->pc = 0x23448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234488u;
        // 0x23448c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234490u;
        goto label_234490;
    }
    ctx->pc = 0x234488u;
    SET_GPR_U32(ctx, 31, 0x234490u);
    ctx->pc = 0x23448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234488u;
    // 0x23448c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246DD8u, 0x234488u, 0x234490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234490u;
label_234490:
    // 0x234490: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_234494:
    // 0x234494: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x234494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_234498:
    // 0x234498: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_23449c:
    if (ctx->pc == 0x23449Cu) {
        ctx->pc = 0x23449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234498u;
        // 0x23449c: 0x92220321  lbu         $v0, 0x321($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 801)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344A0u;
        goto label_2344a0;
    }
    ctx->pc = 0x234498u;
    {
        const bool branch_taken_0x234498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234498) {
            ctx->pc = 0x23449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234498u;
            // 0x23449c: 0x92220321  lbu         $v0, 0x321($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 801)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2344ACu;
            goto label_2344ac;
        }
    }
    ctx->pc = 0x2344A0u;
label_2344a0:
    // 0x2344a0: 0xc08cd2a  jal         func_2334A8
label_2344a4:
    if (ctx->pc == 0x2344A4u) {
        ctx->pc = 0x2344A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344A0u;
        // 0x2344a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344A8u;
        goto label_2344a8;
    }
    ctx->pc = 0x2344A0u;
    SET_GPR_U32(ctx, 31, 0x2344A8u);
    ctx->pc = 0x2344A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344A0u;
    // 0x2344a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334A8u, 0x2344A0u, 0x2344A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344A8u;
label_2344a8:
    // 0x2344a8: 0x92220321  lbu         $v0, 0x321($s1)
    ctx->pc = 0x2344a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 801)));
label_2344ac:
    // 0x2344ac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2344b0:
    if (ctx->pc == 0x2344B0u) {
        ctx->pc = 0x2344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344ACu;
        // 0x2344b0: 0x263207a0  addiu       $s2, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344B4u;
        goto label_2344b4;
    }
    ctx->pc = 0x2344ACu;
    {
        const bool branch_taken_0x2344ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344ACu;
        // 0x2344b0: 0x263207a0  addiu       $s2, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344ac) {
            ctx->pc = 0x234568u;
            goto label_234568;
        }
    }
    ctx->pc = 0x2344B4u;
label_2344b4:
    // 0x2344b4: 0x92420110  lbu         $v0, 0x110($s2)
    ctx->pc = 0x2344b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 272)));
label_2344b8:
    // 0x2344b8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2344bc:
    if (ctx->pc == 0x2344BCu) {
        ctx->pc = 0x2344C0u;
        goto label_2344c0;
    }
    ctx->pc = 0x2344B8u;
    {
        const bool branch_taken_0x2344b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344b8) {
            ctx->pc = 0x234568u;
            goto label_234568;
        }
    }
    ctx->pc = 0x2344C0u;
label_2344c0:
    // 0x2344c0: 0x8e250324  lw          $a1, 0x324($s1)
    ctx->pc = 0x2344c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_2344c4:
    // 0x2344c4: 0xc08a1f2  jal         func_2287C8
label_2344c8:
    if (ctx->pc == 0x2344C8u) {
        ctx->pc = 0x2344C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344C4u;
        // 0x2344c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344CCu;
        goto label_2344cc;
    }
    ctx->pc = 0x2344C4u;
    SET_GPR_U32(ctx, 31, 0x2344CCu);
    ctx->pc = 0x2344C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344C4u;
    // 0x2344c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2344C4u, 0x2344CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344CCu;
label_2344cc:
    // 0x2344cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2344ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2344d0:
    // 0x2344d0: 0xc0f70ce  jal         func_3DC338
label_2344d4:
    if (ctx->pc == 0x2344D4u) {
        ctx->pc = 0x2344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D0u;
        // 0x2344d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344D8u;
        goto label_2344d8;
    }
    ctx->pc = 0x2344D0u;
    SET_GPR_U32(ctx, 31, 0x2344D8u);
    ctx->pc = 0x2344D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344D0u;
    // 0x2344d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2344D0u, 0x2344D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344D8u;
label_2344d8:
    // 0x2344d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2344dc:
    if (ctx->pc == 0x2344DCu) {
        ctx->pc = 0x2344DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D8u;
        // 0x2344dc: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344E0u;
        goto label_2344e0;
    }
    ctx->pc = 0x2344D8u;
    {
        const bool branch_taken_0x2344d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344d8) {
            ctx->pc = 0x2344DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344D8u;
            // 0x2344dc: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2344ECu;
            goto label_2344ec;
        }
    }
    ctx->pc = 0x2344E0u;
label_2344e0:
    // 0x2344e0: 0xc0c4900  jal         func_312400
label_2344e4:
    if (ctx->pc == 0x2344E4u) {
        ctx->pc = 0x2344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344E0u;
        // 0x2344e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344E8u;
        goto label_2344e8;
    }
    ctx->pc = 0x2344E0u;
    SET_GPR_U32(ctx, 31, 0x2344E8u);
    ctx->pc = 0x2344E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344E0u;
    // 0x2344e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2344E0u, 0x2344E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344E8u;
label_2344e8:
    // 0x2344e8: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x2344e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2344ec:
    // 0x2344ec: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2344ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2344f0:
    // 0x2344f0: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2344f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2344f4:
    // 0x2344f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2344f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2344f8:
    // 0x2344f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2344f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2344fc:
    // 0x2344fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2344fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_234500:
    // 0x234500: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x234500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_234504:
    // 0x234504: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x234504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_234508:
    // 0x234508: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x234508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_23450c:
    // 0x23450c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234510:
    // 0x234510: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x234510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_234514:
    // 0x234514: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x234514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_234518:
    // 0x234518: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x234518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23451c:
    // 0x23451c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_234520:
    // 0x234520: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x234520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_234524:
    // 0x234524: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x234524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_234528:
    // 0x234528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x234528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23452c:
    // 0x23452c: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x23452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234530:
    // 0x234530: 0xc4430070  lwc1        $f3, 0x70($v0)
    ctx->pc = 0x234530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_234534:
    // 0x234534: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x234534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_234538:
    // 0x234538: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x234538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_23453c:
    // 0x23453c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x23453cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_234540:
    // 0x234540: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x234540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_234544:
    // 0x234544: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x234544u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_234548:
    // 0x234548: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x234548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_23454c:
    // 0x23454c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x23454cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_234550:
    // 0x234550: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x234550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234554:
    // 0x234554: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x234554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_234558:
    // 0x234558: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x234558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23455c:
    // 0x23455c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x23455cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_234560:
    // 0x234560: 0xc08d78e  jal         func_235E38
label_234564:
    if (ctx->pc == 0x234564u) {
        ctx->pc = 0x234564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234560u;
        // 0x234564: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234568u;
        goto label_234568;
    }
    ctx->pc = 0x234560u;
    SET_GPR_U32(ctx, 31, 0x234568u);
    ctx->pc = 0x234564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234560u;
    // 0x234564: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x234560u, 0x234568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234568u;
label_234568:
    // 0x234568: 0xc0899bc  jal         func_2266F0
label_23456c:
    if (ctx->pc == 0x23456Cu) {
        ctx->pc = 0x23456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234568u;
        // 0x23456c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234570u;
        goto label_234570;
    }
    ctx->pc = 0x234568u;
    SET_GPR_U32(ctx, 31, 0x234570u);
    ctx->pc = 0x23456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234568u;
    // 0x23456c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x234568u, 0x234570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234570u;
label_234570:
    // 0x234570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234574:
    // 0x234574: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_234578:
    if (ctx->pc == 0x234578u) {
        ctx->pc = 0x23457Cu;
        goto label_23457c;
    }
    ctx->pc = 0x234574u;
    {
        const bool branch_taken_0x234574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234574) {
            ctx->pc = 0x234634u;
            goto label_234634;
        }
    }
    ctx->pc = 0x23457Cu;
label_23457c:
    // 0x23457c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x23457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_234580:
    // 0x234580: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x234580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
label_234584:
    // 0x234584: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_234588:
    if (ctx->pc == 0x234588u) {
        ctx->pc = 0x23458Cu;
        goto label_23458c;
    }
    ctx->pc = 0x234584u;
    {
        const bool branch_taken_0x234584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234584) {
            ctx->pc = 0x2345DCu;
            goto label_2345dc;
        }
    }
    ctx->pc = 0x23458Cu;
label_23458c:
    // 0x23458c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_234590:
    // 0x234590: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x234590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_234594:
    // 0x234594: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_234598:
    if (ctx->pc == 0x234598u) {
        ctx->pc = 0x23459Cu;
        goto label_23459c;
    }
    ctx->pc = 0x234594u;
    {
        const bool branch_taken_0x234594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234594) {
            ctx->pc = 0x2345DCu;
            goto label_2345dc;
        }
    }
    ctx->pc = 0x23459Cu;
label_23459c:
    // 0x23459c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2345a0:
    // 0x2345a0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2345a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2345a4:
    // 0x2345a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2345a8:
    if (ctx->pc == 0x2345A8u) {
        ctx->pc = 0x2345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345A4u;
        // 0x2345a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345ACu;
        goto label_2345ac;
    }
    ctx->pc = 0x2345A4u;
    {
        const bool branch_taken_0x2345a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345A4u;
        // 0x2345a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345a4) {
            ctx->pc = 0x2345B8u;
            goto label_2345b8;
        }
    }
    ctx->pc = 0x2345ACu;
label_2345ac:
    // 0x2345ac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2345acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2345b0:
    // 0x2345b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2345b4:
    if (ctx->pc == 0x2345B4u) {
        ctx->pc = 0x2345B8u;
        goto label_2345b8;
    }
    ctx->pc = 0x2345B0u;
    {
        const bool branch_taken_0x2345b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2345b0) {
            ctx->pc = 0x2345BCu;
            goto label_2345bc;
        }
    }
    ctx->pc = 0x2345B8u;
label_2345b8:
    // 0x2345b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2345b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2345bc:
    // 0x2345bc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2345c0:
    if (ctx->pc == 0x2345C0u) {
        ctx->pc = 0x2345C4u;
        goto label_2345c4;
    }
    ctx->pc = 0x2345BCu;
    {
        const bool branch_taken_0x2345bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2345bc) {
            ctx->pc = 0x2345D4u;
            goto label_2345d4;
        }
    }
    ctx->pc = 0x2345C4u;
label_2345c4:
    // 0x2345c4: 0xc098554  jal         func_261550
label_2345c8:
    if (ctx->pc == 0x2345C8u) {
        ctx->pc = 0x2345C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345C4u;
        // 0x2345c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345CCu;
        goto label_2345cc;
    }
    ctx->pc = 0x2345C4u;
    SET_GPR_U32(ctx, 31, 0x2345CCu);
    ctx->pc = 0x2345C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345C4u;
    // 0x2345c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261550u, 0x2345C4u, 0x2345CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345CCu;
label_2345cc:
    // 0x2345cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2345d0:
    if (ctx->pc == 0x2345D0u) {
        ctx->pc = 0x2345D4u;
        goto label_2345d4;
    }
    ctx->pc = 0x2345CCu;
    {
        const bool branch_taken_0x2345cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2345cc) {
            ctx->pc = 0x2345DCu;
            goto label_2345dc;
        }
    }
    ctx->pc = 0x2345D4u;
label_2345d4:
    // 0x2345d4: 0xc09854c  jal         func_261530
label_2345d8:
    if (ctx->pc == 0x2345D8u) {
        ctx->pc = 0x2345D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345D4u;
        // 0x2345d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345DCu;
        goto label_2345dc;
    }
    ctx->pc = 0x2345D4u;
    SET_GPR_U32(ctx, 31, 0x2345DCu);
    ctx->pc = 0x2345D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345D4u;
    // 0x2345d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261530u, 0x2345D4u, 0x2345DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345DCu;
label_2345dc:
    // 0x2345dc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2345e0:
    if (ctx->pc == 0x2345E0u) {
        ctx->pc = 0x2345E4u;
        goto label_2345e4;
    }
    ctx->pc = 0x2345DCu;
    {
        const bool branch_taken_0x2345dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2345dc) {
            ctx->pc = 0x234634u;
            goto label_234634;
        }
    }
    ctx->pc = 0x2345E4u;
label_2345e4:
    // 0x2345e4: 0xc098998  jal         func_262660
label_2345e8:
    if (ctx->pc == 0x2345E8u) {
        ctx->pc = 0x2345E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345E4u;
        // 0x2345e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345ECu;
        goto label_2345ec;
    }
    ctx->pc = 0x2345E4u;
    SET_GPR_U32(ctx, 31, 0x2345ECu);
    ctx->pc = 0x2345E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345E4u;
    // 0x2345e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262660u, 0x2345E4u, 0x2345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345ECu;
label_2345ec:
    // 0x2345ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2345f0:
    if (ctx->pc == 0x2345F0u) {
        ctx->pc = 0x2345F4u;
        goto label_2345f4;
    }
    ctx->pc = 0x2345ECu;
    {
        const bool branch_taken_0x2345ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2345ec) {
            ctx->pc = 0x234634u;
            goto label_234634;
        }
    }
    ctx->pc = 0x2345F4u;
label_2345f4:
    // 0x2345f4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2345f8:
    // 0x2345f8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2345f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2345fc:
    // 0x2345fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_234600:
    if (ctx->pc == 0x234600u) {
        ctx->pc = 0x234604u;
        goto label_234604;
    }
    ctx->pc = 0x2345FCu;
    {
        const bool branch_taken_0x2345fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2345fc) {
            ctx->pc = 0x234634u;
            goto label_234634;
        }
    }
    ctx->pc = 0x234604u;
label_234604:
    // 0x234604: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_234608:
    // 0x234608: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x234608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_23460c:
    // 0x23460c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_234610:
    if (ctx->pc == 0x234610u) {
        ctx->pc = 0x234610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23460Cu;
        // 0x234610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234614u;
        goto label_234614;
    }
    ctx->pc = 0x23460Cu;
    {
        const bool branch_taken_0x23460c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23460Cu;
        // 0x234610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23460c) {
            ctx->pc = 0x234620u;
            goto label_234620;
        }
    }
    ctx->pc = 0x234614u;
label_234614:
    // 0x234614: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x234614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_234618:
    // 0x234618: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_23461c:
    if (ctx->pc == 0x23461Cu) {
        ctx->pc = 0x234620u;
        goto label_234620;
    }
    ctx->pc = 0x234618u;
    {
        const bool branch_taken_0x234618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234618) {
            ctx->pc = 0x234624u;
            goto label_234624;
        }
    }
    ctx->pc = 0x234620u;
label_234620:
    // 0x234620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234624:
    // 0x234624: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_234628:
    if (ctx->pc == 0x234628u) {
        ctx->pc = 0x23462Cu;
        goto label_23462c;
    }
    ctx->pc = 0x234624u;
    {
        const bool branch_taken_0x234624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x234624) {
            ctx->pc = 0x234634u;
            goto label_234634;
        }
    }
    ctx->pc = 0x23462Cu;
label_23462c:
    // 0x23462c: 0xc098972  jal         func_2625C8
label_234630:
    if (ctx->pc == 0x234630u) {
        ctx->pc = 0x234630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23462Cu;
        // 0x234630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234634u;
        goto label_234634;
    }
    ctx->pc = 0x23462Cu;
    SET_GPR_U32(ctx, 31, 0x234634u);
    ctx->pc = 0x234630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23462Cu;
    // 0x234630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C8u, 0x23462Cu, 0x234634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234634u;
label_234634:
    // 0x234634: 0xc08cf28  jal         func_233CA0
label_234638:
    if (ctx->pc == 0x234638u) {
        ctx->pc = 0x234638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234634u;
        // 0x234638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23463Cu;
        goto label_23463c;
    }
    ctx->pc = 0x234634u;
    SET_GPR_U32(ctx, 31, 0x23463Cu);
    ctx->pc = 0x234638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234634u;
    // 0x234638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233CA0u, 0x234634u, 0x23463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23463Cu;
label_23463c:
    // 0x23463c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_234640:
    if (ctx->pc == 0x234640u) {
        ctx->pc = 0x234640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23463Cu;
        // 0x234640: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234644u;
        goto label_234644;
    }
    ctx->pc = 0x23463Cu;
    {
        const bool branch_taken_0x23463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23463Cu;
        // 0x234640: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23463c) {
            ctx->pc = 0x234650u;
            goto label_234650;
        }
    }
    ctx->pc = 0x234644u;
label_234644:
    // 0x234644: 0xc08d19a  jal         func_234668
label_234648:
    if (ctx->pc == 0x234648u) {
        ctx->pc = 0x234648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234644u;
        // 0x234648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23464Cu;
        goto label_23464c;
    }
    ctx->pc = 0x234644u;
    SET_GPR_U32(ctx, 31, 0x23464Cu);
    ctx->pc = 0x234648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234644u;
    // 0x234648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234668u, 0x234644u, 0x23464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23464Cu;
label_23464c:
    // 0x23464c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x23464cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_234650:
    // 0x234650: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x234650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_234654:
    // 0x234654: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x234654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_234658:
    // 0x234658: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x234658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_23465c:
    // 0x23465c: 0x3e00008  jr          $ra
label_234660:
    if (ctx->pc == 0x234660u) {
        ctx->pc = 0x234660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23465Cu;
        // 0x234660: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234664u;
        goto label_234664;
    }
    ctx->pc = 0x23465Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23465Cu;
        // 0x234660: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23465Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234664u;
label_234664:
    // 0x234664: 0x0  nop
    ctx->pc = 0x234664u;
    // NOP
    ctx->pc = 0x234668u;
}
