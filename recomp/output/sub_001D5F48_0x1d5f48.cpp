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

// Function: sub_001D5F48
// Address: 0x1d5f48 - 0x1d65b8
void sub_001D5F48_0x1d5f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F48_0x1d5f48");
#endif

    switch (ctx->pc) {
        case 0x1d5f48u: goto label_1d5f48;
        case 0x1d5f4cu: goto label_1d5f4c;
        case 0x1d5f50u: goto label_1d5f50;
        case 0x1d5f54u: goto label_1d5f54;
        case 0x1d5f58u: goto label_1d5f58;
        case 0x1d5f5cu: goto label_1d5f5c;
        case 0x1d5f60u: goto label_1d5f60;
        case 0x1d5f64u: goto label_1d5f64;
        case 0x1d5f68u: goto label_1d5f68;
        case 0x1d5f6cu: goto label_1d5f6c;
        case 0x1d5f70u: goto label_1d5f70;
        case 0x1d5f74u: goto label_1d5f74;
        case 0x1d5f78u: goto label_1d5f78;
        case 0x1d5f7cu: goto label_1d5f7c;
        case 0x1d5f80u: goto label_1d5f80;
        case 0x1d5f84u: goto label_1d5f84;
        case 0x1d5f88u: goto label_1d5f88;
        case 0x1d5f8cu: goto label_1d5f8c;
        case 0x1d5f90u: goto label_1d5f90;
        case 0x1d5f94u: goto label_1d5f94;
        case 0x1d5f98u: goto label_1d5f98;
        case 0x1d5f9cu: goto label_1d5f9c;
        case 0x1d5fa0u: goto label_1d5fa0;
        case 0x1d5fa4u: goto label_1d5fa4;
        case 0x1d5fa8u: goto label_1d5fa8;
        case 0x1d5facu: goto label_1d5fac;
        case 0x1d5fb0u: goto label_1d5fb0;
        case 0x1d5fb4u: goto label_1d5fb4;
        case 0x1d5fb8u: goto label_1d5fb8;
        case 0x1d5fbcu: goto label_1d5fbc;
        case 0x1d5fc0u: goto label_1d5fc0;
        case 0x1d5fc4u: goto label_1d5fc4;
        case 0x1d5fc8u: goto label_1d5fc8;
        case 0x1d5fccu: goto label_1d5fcc;
        case 0x1d5fd0u: goto label_1d5fd0;
        case 0x1d5fd4u: goto label_1d5fd4;
        case 0x1d5fd8u: goto label_1d5fd8;
        case 0x1d5fdcu: goto label_1d5fdc;
        case 0x1d5fe0u: goto label_1d5fe0;
        case 0x1d5fe4u: goto label_1d5fe4;
        case 0x1d5fe8u: goto label_1d5fe8;
        case 0x1d5fecu: goto label_1d5fec;
        case 0x1d5ff0u: goto label_1d5ff0;
        case 0x1d5ff4u: goto label_1d5ff4;
        case 0x1d5ff8u: goto label_1d5ff8;
        case 0x1d5ffcu: goto label_1d5ffc;
        case 0x1d6000u: goto label_1d6000;
        case 0x1d6004u: goto label_1d6004;
        case 0x1d6008u: goto label_1d6008;
        case 0x1d600cu: goto label_1d600c;
        case 0x1d6010u: goto label_1d6010;
        case 0x1d6014u: goto label_1d6014;
        case 0x1d6018u: goto label_1d6018;
        case 0x1d601cu: goto label_1d601c;
        case 0x1d6020u: goto label_1d6020;
        case 0x1d6024u: goto label_1d6024;
        case 0x1d6028u: goto label_1d6028;
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6030u: goto label_1d6030;
        case 0x1d6034u: goto label_1d6034;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d603cu: goto label_1d603c;
        case 0x1d6040u: goto label_1d6040;
        case 0x1d6044u: goto label_1d6044;
        case 0x1d6048u: goto label_1d6048;
        case 0x1d604cu: goto label_1d604c;
        case 0x1d6050u: goto label_1d6050;
        case 0x1d6054u: goto label_1d6054;
        case 0x1d6058u: goto label_1d6058;
        case 0x1d605cu: goto label_1d605c;
        case 0x1d6060u: goto label_1d6060;
        case 0x1d6064u: goto label_1d6064;
        case 0x1d6068u: goto label_1d6068;
        case 0x1d606cu: goto label_1d606c;
        case 0x1d6070u: goto label_1d6070;
        case 0x1d6074u: goto label_1d6074;
        case 0x1d6078u: goto label_1d6078;
        case 0x1d607cu: goto label_1d607c;
        case 0x1d6080u: goto label_1d6080;
        case 0x1d6084u: goto label_1d6084;
        case 0x1d6088u: goto label_1d6088;
        case 0x1d608cu: goto label_1d608c;
        case 0x1d6090u: goto label_1d6090;
        case 0x1d6094u: goto label_1d6094;
        case 0x1d6098u: goto label_1d6098;
        case 0x1d609cu: goto label_1d609c;
        case 0x1d60a0u: goto label_1d60a0;
        case 0x1d60a4u: goto label_1d60a4;
        case 0x1d60a8u: goto label_1d60a8;
        case 0x1d60acu: goto label_1d60ac;
        case 0x1d60b0u: goto label_1d60b0;
        case 0x1d60b4u: goto label_1d60b4;
        case 0x1d60b8u: goto label_1d60b8;
        case 0x1d60bcu: goto label_1d60bc;
        case 0x1d60c0u: goto label_1d60c0;
        case 0x1d60c4u: goto label_1d60c4;
        case 0x1d60c8u: goto label_1d60c8;
        case 0x1d60ccu: goto label_1d60cc;
        case 0x1d60d0u: goto label_1d60d0;
        case 0x1d60d4u: goto label_1d60d4;
        case 0x1d60d8u: goto label_1d60d8;
        case 0x1d60dcu: goto label_1d60dc;
        case 0x1d60e0u: goto label_1d60e0;
        case 0x1d60e4u: goto label_1d60e4;
        case 0x1d60e8u: goto label_1d60e8;
        case 0x1d60ecu: goto label_1d60ec;
        case 0x1d60f0u: goto label_1d60f0;
        case 0x1d60f4u: goto label_1d60f4;
        case 0x1d60f8u: goto label_1d60f8;
        case 0x1d60fcu: goto label_1d60fc;
        case 0x1d6100u: goto label_1d6100;
        case 0x1d6104u: goto label_1d6104;
        case 0x1d6108u: goto label_1d6108;
        case 0x1d610cu: goto label_1d610c;
        case 0x1d6110u: goto label_1d6110;
        case 0x1d6114u: goto label_1d6114;
        case 0x1d6118u: goto label_1d6118;
        case 0x1d611cu: goto label_1d611c;
        case 0x1d6120u: goto label_1d6120;
        case 0x1d6124u: goto label_1d6124;
        case 0x1d6128u: goto label_1d6128;
        case 0x1d612cu: goto label_1d612c;
        case 0x1d6130u: goto label_1d6130;
        case 0x1d6134u: goto label_1d6134;
        case 0x1d6138u: goto label_1d6138;
        case 0x1d613cu: goto label_1d613c;
        case 0x1d6140u: goto label_1d6140;
        case 0x1d6144u: goto label_1d6144;
        case 0x1d6148u: goto label_1d6148;
        case 0x1d614cu: goto label_1d614c;
        case 0x1d6150u: goto label_1d6150;
        case 0x1d6154u: goto label_1d6154;
        case 0x1d6158u: goto label_1d6158;
        case 0x1d615cu: goto label_1d615c;
        case 0x1d6160u: goto label_1d6160;
        case 0x1d6164u: goto label_1d6164;
        case 0x1d6168u: goto label_1d6168;
        case 0x1d616cu: goto label_1d616c;
        case 0x1d6170u: goto label_1d6170;
        case 0x1d6174u: goto label_1d6174;
        case 0x1d6178u: goto label_1d6178;
        case 0x1d617cu: goto label_1d617c;
        case 0x1d6180u: goto label_1d6180;
        case 0x1d6184u: goto label_1d6184;
        case 0x1d6188u: goto label_1d6188;
        case 0x1d618cu: goto label_1d618c;
        case 0x1d6190u: goto label_1d6190;
        case 0x1d6194u: goto label_1d6194;
        case 0x1d6198u: goto label_1d6198;
        case 0x1d619cu: goto label_1d619c;
        case 0x1d61a0u: goto label_1d61a0;
        case 0x1d61a4u: goto label_1d61a4;
        case 0x1d61a8u: goto label_1d61a8;
        case 0x1d61acu: goto label_1d61ac;
        case 0x1d61b0u: goto label_1d61b0;
        case 0x1d61b4u: goto label_1d61b4;
        case 0x1d61b8u: goto label_1d61b8;
        case 0x1d61bcu: goto label_1d61bc;
        case 0x1d61c0u: goto label_1d61c0;
        case 0x1d61c4u: goto label_1d61c4;
        case 0x1d61c8u: goto label_1d61c8;
        case 0x1d61ccu: goto label_1d61cc;
        case 0x1d61d0u: goto label_1d61d0;
        case 0x1d61d4u: goto label_1d61d4;
        case 0x1d61d8u: goto label_1d61d8;
        case 0x1d61dcu: goto label_1d61dc;
        case 0x1d61e0u: goto label_1d61e0;
        case 0x1d61e4u: goto label_1d61e4;
        case 0x1d61e8u: goto label_1d61e8;
        case 0x1d61ecu: goto label_1d61ec;
        case 0x1d61f0u: goto label_1d61f0;
        case 0x1d61f4u: goto label_1d61f4;
        case 0x1d61f8u: goto label_1d61f8;
        case 0x1d61fcu: goto label_1d61fc;
        case 0x1d6200u: goto label_1d6200;
        case 0x1d6204u: goto label_1d6204;
        case 0x1d6208u: goto label_1d6208;
        case 0x1d620cu: goto label_1d620c;
        case 0x1d6210u: goto label_1d6210;
        case 0x1d6214u: goto label_1d6214;
        case 0x1d6218u: goto label_1d6218;
        case 0x1d621cu: goto label_1d621c;
        case 0x1d6220u: goto label_1d6220;
        case 0x1d6224u: goto label_1d6224;
        case 0x1d6228u: goto label_1d6228;
        case 0x1d622cu: goto label_1d622c;
        case 0x1d6230u: goto label_1d6230;
        case 0x1d6234u: goto label_1d6234;
        case 0x1d6238u: goto label_1d6238;
        case 0x1d623cu: goto label_1d623c;
        case 0x1d6240u: goto label_1d6240;
        case 0x1d6244u: goto label_1d6244;
        case 0x1d6248u: goto label_1d6248;
        case 0x1d624cu: goto label_1d624c;
        case 0x1d6250u: goto label_1d6250;
        case 0x1d6254u: goto label_1d6254;
        case 0x1d6258u: goto label_1d6258;
        case 0x1d625cu: goto label_1d625c;
        case 0x1d6260u: goto label_1d6260;
        case 0x1d6264u: goto label_1d6264;
        case 0x1d6268u: goto label_1d6268;
        case 0x1d626cu: goto label_1d626c;
        case 0x1d6270u: goto label_1d6270;
        case 0x1d6274u: goto label_1d6274;
        case 0x1d6278u: goto label_1d6278;
        case 0x1d627cu: goto label_1d627c;
        case 0x1d6280u: goto label_1d6280;
        case 0x1d6284u: goto label_1d6284;
        case 0x1d6288u: goto label_1d6288;
        case 0x1d628cu: goto label_1d628c;
        case 0x1d6290u: goto label_1d6290;
        case 0x1d6294u: goto label_1d6294;
        case 0x1d6298u: goto label_1d6298;
        case 0x1d629cu: goto label_1d629c;
        case 0x1d62a0u: goto label_1d62a0;
        case 0x1d62a4u: goto label_1d62a4;
        case 0x1d62a8u: goto label_1d62a8;
        case 0x1d62acu: goto label_1d62ac;
        case 0x1d62b0u: goto label_1d62b0;
        case 0x1d62b4u: goto label_1d62b4;
        case 0x1d62b8u: goto label_1d62b8;
        case 0x1d62bcu: goto label_1d62bc;
        case 0x1d62c0u: goto label_1d62c0;
        case 0x1d62c4u: goto label_1d62c4;
        case 0x1d62c8u: goto label_1d62c8;
        case 0x1d62ccu: goto label_1d62cc;
        case 0x1d62d0u: goto label_1d62d0;
        case 0x1d62d4u: goto label_1d62d4;
        case 0x1d62d8u: goto label_1d62d8;
        case 0x1d62dcu: goto label_1d62dc;
        case 0x1d62e0u: goto label_1d62e0;
        case 0x1d62e4u: goto label_1d62e4;
        case 0x1d62e8u: goto label_1d62e8;
        case 0x1d62ecu: goto label_1d62ec;
        case 0x1d62f0u: goto label_1d62f0;
        case 0x1d62f4u: goto label_1d62f4;
        case 0x1d62f8u: goto label_1d62f8;
        case 0x1d62fcu: goto label_1d62fc;
        case 0x1d6300u: goto label_1d6300;
        case 0x1d6304u: goto label_1d6304;
        case 0x1d6308u: goto label_1d6308;
        case 0x1d630cu: goto label_1d630c;
        case 0x1d6310u: goto label_1d6310;
        case 0x1d6314u: goto label_1d6314;
        case 0x1d6318u: goto label_1d6318;
        case 0x1d631cu: goto label_1d631c;
        case 0x1d6320u: goto label_1d6320;
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6328u: goto label_1d6328;
        case 0x1d632cu: goto label_1d632c;
        case 0x1d6330u: goto label_1d6330;
        case 0x1d6334u: goto label_1d6334;
        case 0x1d6338u: goto label_1d6338;
        case 0x1d633cu: goto label_1d633c;
        case 0x1d6340u: goto label_1d6340;
        case 0x1d6344u: goto label_1d6344;
        case 0x1d6348u: goto label_1d6348;
        case 0x1d634cu: goto label_1d634c;
        case 0x1d6350u: goto label_1d6350;
        case 0x1d6354u: goto label_1d6354;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d635cu: goto label_1d635c;
        case 0x1d6360u: goto label_1d6360;
        case 0x1d6364u: goto label_1d6364;
        case 0x1d6368u: goto label_1d6368;
        case 0x1d636cu: goto label_1d636c;
        case 0x1d6370u: goto label_1d6370;
        case 0x1d6374u: goto label_1d6374;
        case 0x1d6378u: goto label_1d6378;
        case 0x1d637cu: goto label_1d637c;
        case 0x1d6380u: goto label_1d6380;
        case 0x1d6384u: goto label_1d6384;
        case 0x1d6388u: goto label_1d6388;
        case 0x1d638cu: goto label_1d638c;
        case 0x1d6390u: goto label_1d6390;
        case 0x1d6394u: goto label_1d6394;
        case 0x1d6398u: goto label_1d6398;
        case 0x1d639cu: goto label_1d639c;
        case 0x1d63a0u: goto label_1d63a0;
        case 0x1d63a4u: goto label_1d63a4;
        case 0x1d63a8u: goto label_1d63a8;
        case 0x1d63acu: goto label_1d63ac;
        case 0x1d63b0u: goto label_1d63b0;
        case 0x1d63b4u: goto label_1d63b4;
        case 0x1d63b8u: goto label_1d63b8;
        case 0x1d63bcu: goto label_1d63bc;
        case 0x1d63c0u: goto label_1d63c0;
        case 0x1d63c4u: goto label_1d63c4;
        case 0x1d63c8u: goto label_1d63c8;
        case 0x1d63ccu: goto label_1d63cc;
        case 0x1d63d0u: goto label_1d63d0;
        case 0x1d63d4u: goto label_1d63d4;
        case 0x1d63d8u: goto label_1d63d8;
        case 0x1d63dcu: goto label_1d63dc;
        case 0x1d63e0u: goto label_1d63e0;
        case 0x1d63e4u: goto label_1d63e4;
        case 0x1d63e8u: goto label_1d63e8;
        case 0x1d63ecu: goto label_1d63ec;
        case 0x1d63f0u: goto label_1d63f0;
        case 0x1d63f4u: goto label_1d63f4;
        case 0x1d63f8u: goto label_1d63f8;
        case 0x1d63fcu: goto label_1d63fc;
        case 0x1d6400u: goto label_1d6400;
        case 0x1d6404u: goto label_1d6404;
        case 0x1d6408u: goto label_1d6408;
        case 0x1d640cu: goto label_1d640c;
        case 0x1d6410u: goto label_1d6410;
        case 0x1d6414u: goto label_1d6414;
        case 0x1d6418u: goto label_1d6418;
        case 0x1d641cu: goto label_1d641c;
        case 0x1d6420u: goto label_1d6420;
        case 0x1d6424u: goto label_1d6424;
        case 0x1d6428u: goto label_1d6428;
        case 0x1d642cu: goto label_1d642c;
        case 0x1d6430u: goto label_1d6430;
        case 0x1d6434u: goto label_1d6434;
        case 0x1d6438u: goto label_1d6438;
        case 0x1d643cu: goto label_1d643c;
        case 0x1d6440u: goto label_1d6440;
        case 0x1d6444u: goto label_1d6444;
        case 0x1d6448u: goto label_1d6448;
        case 0x1d644cu: goto label_1d644c;
        case 0x1d6450u: goto label_1d6450;
        case 0x1d6454u: goto label_1d6454;
        case 0x1d6458u: goto label_1d6458;
        case 0x1d645cu: goto label_1d645c;
        case 0x1d6460u: goto label_1d6460;
        case 0x1d6464u: goto label_1d6464;
        case 0x1d6468u: goto label_1d6468;
        case 0x1d646cu: goto label_1d646c;
        case 0x1d6470u: goto label_1d6470;
        case 0x1d6474u: goto label_1d6474;
        case 0x1d6478u: goto label_1d6478;
        case 0x1d647cu: goto label_1d647c;
        case 0x1d6480u: goto label_1d6480;
        case 0x1d6484u: goto label_1d6484;
        case 0x1d6488u: goto label_1d6488;
        case 0x1d648cu: goto label_1d648c;
        case 0x1d6490u: goto label_1d6490;
        case 0x1d6494u: goto label_1d6494;
        case 0x1d6498u: goto label_1d6498;
        case 0x1d649cu: goto label_1d649c;
        case 0x1d64a0u: goto label_1d64a0;
        case 0x1d64a4u: goto label_1d64a4;
        case 0x1d64a8u: goto label_1d64a8;
        case 0x1d64acu: goto label_1d64ac;
        case 0x1d64b0u: goto label_1d64b0;
        case 0x1d64b4u: goto label_1d64b4;
        case 0x1d64b8u: goto label_1d64b8;
        case 0x1d64bcu: goto label_1d64bc;
        case 0x1d64c0u: goto label_1d64c0;
        case 0x1d64c4u: goto label_1d64c4;
        case 0x1d64c8u: goto label_1d64c8;
        case 0x1d64ccu: goto label_1d64cc;
        case 0x1d64d0u: goto label_1d64d0;
        case 0x1d64d4u: goto label_1d64d4;
        case 0x1d64d8u: goto label_1d64d8;
        case 0x1d64dcu: goto label_1d64dc;
        case 0x1d64e0u: goto label_1d64e0;
        case 0x1d64e4u: goto label_1d64e4;
        case 0x1d64e8u: goto label_1d64e8;
        case 0x1d64ecu: goto label_1d64ec;
        case 0x1d64f0u: goto label_1d64f0;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d64f8u: goto label_1d64f8;
        case 0x1d64fcu: goto label_1d64fc;
        case 0x1d6500u: goto label_1d6500;
        case 0x1d6504u: goto label_1d6504;
        case 0x1d6508u: goto label_1d6508;
        case 0x1d650cu: goto label_1d650c;
        case 0x1d6510u: goto label_1d6510;
        case 0x1d6514u: goto label_1d6514;
        case 0x1d6518u: goto label_1d6518;
        case 0x1d651cu: goto label_1d651c;
        case 0x1d6520u: goto label_1d6520;
        case 0x1d6524u: goto label_1d6524;
        case 0x1d6528u: goto label_1d6528;
        case 0x1d652cu: goto label_1d652c;
        case 0x1d6530u: goto label_1d6530;
        case 0x1d6534u: goto label_1d6534;
        case 0x1d6538u: goto label_1d6538;
        case 0x1d653cu: goto label_1d653c;
        case 0x1d6540u: goto label_1d6540;
        case 0x1d6544u: goto label_1d6544;
        case 0x1d6548u: goto label_1d6548;
        case 0x1d654cu: goto label_1d654c;
        case 0x1d6550u: goto label_1d6550;
        case 0x1d6554u: goto label_1d6554;
        case 0x1d6558u: goto label_1d6558;
        case 0x1d655cu: goto label_1d655c;
        case 0x1d6560u: goto label_1d6560;
        case 0x1d6564u: goto label_1d6564;
        case 0x1d6568u: goto label_1d6568;
        case 0x1d656cu: goto label_1d656c;
        case 0x1d6570u: goto label_1d6570;
        case 0x1d6574u: goto label_1d6574;
        case 0x1d6578u: goto label_1d6578;
        case 0x1d657cu: goto label_1d657c;
        case 0x1d6580u: goto label_1d6580;
        case 0x1d6584u: goto label_1d6584;
        case 0x1d6588u: goto label_1d6588;
        case 0x1d658cu: goto label_1d658c;
        case 0x1d6590u: goto label_1d6590;
        case 0x1d6594u: goto label_1d6594;
        case 0x1d6598u: goto label_1d6598;
        case 0x1d659cu: goto label_1d659c;
        case 0x1d65a0u: goto label_1d65a0;
        case 0x1d65a4u: goto label_1d65a4;
        case 0x1d65a8u: goto label_1d65a8;
        case 0x1d65acu: goto label_1d65ac;
        case 0x1d65b0u: goto label_1d65b0;
        case 0x1d65b4u: goto label_1d65b4;
        default: break;
    }

    ctx->pc = 0x1d5f48u;

label_1d5f48:
    // 0x1d5f48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d5f4c:
    // 0x1d5f4c: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1d5f50:
    // 0x1d5f50: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_1d5f54:
    // 0x1d5f54: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1d5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
label_1d5f58:
    // 0x1d5f58: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1d5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
label_1d5f5c:
    // 0x1d5f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f60:
    // 0x1d5f60: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x1d5f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
label_1d5f64:
    // 0x1d5f64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f68:
    // 0x1d5f68: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1d5f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
label_1d5f6c:
    // 0x1d5f6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d5f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d5f70:
    // 0x1d5f70: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
label_1d5f74:
    if (ctx->pc == 0x1D5F74u) {
        ctx->pc = 0x1D5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F70u;
        // 0x1d5f74: 0xffbf0170  sd          $ra, 0x170($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F78u;
        goto label_1d5f78;
    }
    ctx->pc = 0x1D5F70u;
    {
        const bool branch_taken_0x1d5f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F70u;
        // 0x1d5f74: 0xffbf0170  sd          $ra, 0x170($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f70) {
            ctx->pc = 0x1D6590u;
            goto label_1d6590;
        }
    }
    ctx->pc = 0x1D5F78u;
label_1d5f78:
    // 0x1d5f78: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d5f78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5f7c:
    // 0x1d5f7c: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1d5f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d5f80:
    // 0x1d5f80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1d5f84:
    // 0x1d5f84: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1d5f88:
    // 0x1d5f88: 0x8e6700c0  lw          $a3, 0xC0($s3)
    ctx->pc = 0x1d5f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1d5f8c:
    // 0x1d5f8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d5f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f90:
    // 0x1d5f90: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x1d5f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5f94:
    // 0x1d5f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f98:
    // 0x1d5f98: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1d5f9c:
    // 0x1d5f9c: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x1d5f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_1d5fa0:
    // 0x1d5fa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d5fa4:
    if (ctx->pc == 0x1D5FA4u) {
        ctx->pc = 0x1D5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FA0u;
        // 0x1d5fa4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FA8u;
        goto label_1d5fa8;
    }
    ctx->pc = 0x1D5FA0u;
    {
        const bool branch_taken_0x1d5fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FA0u;
        // 0x1d5fa4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fa0) {
            ctx->pc = 0x1D5FB4u;
            goto label_1d5fb4;
        }
    }
    ctx->pc = 0x1D5FA8u;
label_1d5fa8:
    // 0x1d5fa8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1d5fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1d5fac:
    // 0x1d5fac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d5fb0:
    if (ctx->pc == 0x1D5FB0u) {
        ctx->pc = 0x1D5FB4u;
        goto label_1d5fb4;
    }
    ctx->pc = 0x1D5FACu;
    {
        const bool branch_taken_0x1d5fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5fac) {
            ctx->pc = 0x1D5FB8u;
            goto label_1d5fb8;
        }
    }
    ctx->pc = 0x1D5FB4u;
label_1d5fb4:
    // 0x1d5fb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5fb8:
    // 0x1d5fb8: 0xc07466e  jal         func_1D19B8
label_1d5fbc:
    if (ctx->pc == 0x1D5FBCu) {
        ctx->pc = 0x1D5FC0u;
        goto label_1d5fc0;
    }
    ctx->pc = 0x1D5FB8u;
    SET_GPR_U32(ctx, 31, 0x1D5FC0u);
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x1D5FB8u, 0x1D5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FC0u;
label_1d5fc0:
    // 0x1d5fc0: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1d5fc4:
    // 0x1d5fc4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d5fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1d5fc8:
    // 0x1d5fc8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1d5fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_1d5fcc:
    // 0x1d5fcc: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_1d5fd0:
    if (ctx->pc == 0x1D5FD0u) {
        ctx->pc = 0x1D5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FCCu;
        // 0x1d5fd0: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FD4u;
        goto label_1d5fd4;
    }
    ctx->pc = 0x1D5FCCu;
    {
        const bool branch_taken_0x1d5fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5fcc) {
            ctx->pc = 0x1D5FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5FCCu;
            // 0x1d5fd0: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D610Cu;
            goto label_1d610c;
        }
    }
    ctx->pc = 0x1D5FD4u;
label_1d5fd4:
    // 0x1d5fd4: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_1d5fd8:
    // 0x1d5fd8: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x1d5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_1d5fdc:
    // 0x1d5fdc: 0x2462ffed  addiu       $v0, $v1, -0x13
    ctx->pc = 0x1d5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
label_1d5fe0:
    // 0x1d5fe0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1d5fe4:
    // 0x1d5fe4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1d5fe8:
    if (ctx->pc == 0x1D5FE8u) {
        ctx->pc = 0x1D5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE4u;
        // 0x1d5fe8: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FECu;
        goto label_1d5fec;
    }
    ctx->pc = 0x1D5FE4u;
    {
        const bool branch_taken_0x1d5fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5fe4) {
            ctx->pc = 0x1D5FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5FE4u;
            // 0x1d5fe8: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6000u;
            goto label_1d6000;
        }
    }
    ctx->pc = 0x1D5FECu;
label_1d5fec:
    // 0x1d5fec: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_1d5ff0:
    // 0x1d5ff0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d5ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d5ff4:
    // 0x1d5ff4: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_1d5ff8:
    if (ctx->pc == 0x1D5FF8u) {
        ctx->pc = 0x1D5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FF4u;
        // 0x1d5ff8: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FFCu;
        goto label_1d5ffc;
    }
    ctx->pc = 0x1D5FF4u;
    {
        const bool branch_taken_0x1d5ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ff4) {
            ctx->pc = 0x1D5FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5FF4u;
            // 0x1d5ff8: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D610Cu;
            goto label_1d610c;
        }
    }
    ctx->pc = 0x1D5FFCu;
label_1d5ffc:
    // 0x1d5ffc: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x1d5ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_1d6000:
    // 0x1d6000: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
label_1d6004:
    if (ctx->pc == 0x1D6004u) {
        ctx->pc = 0x1D6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6000u;
        // 0x1d6004: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6008u;
        goto label_1d6008;
    }
    ctx->pc = 0x1D6000u;
    {
        const bool branch_taken_0x1d6000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6000) {
            ctx->pc = 0x1D6004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6000u;
            // 0x1d6004: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D610Cu;
            goto label_1d610c;
        }
    }
    ctx->pc = 0x1D6008u;
label_1d6008:
    // 0x1d6008: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d600c:
    // 0x1d600c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1d600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1d6010:
    // 0x1d6010: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1d6010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1d6014:
    // 0x1d6014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6018:
    // 0x1d6018: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1d6018u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1d601c:
    // 0x1d601c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d601cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6020:
    // 0x1d6020: 0x0  nop
    ctx->pc = 0x1d6020u;
    // NOP
label_1d6024:
    // 0x1d6024: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1d6028:
    if (ctx->pc == 0x1D6028u) {
        ctx->pc = 0x1D6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6024u;
        // 0x1d6028: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D602Cu;
        goto label_1d602c;
    }
    ctx->pc = 0x1D6024u;
    {
        const bool branch_taken_0x1d6024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6024u;
        // 0x1d6028: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6024) {
            ctx->pc = 0x1D606Cu;
            goto label_1d606c;
        }
    }
    ctx->pc = 0x1D602Cu;
label_1d602c:
    // 0x1d602c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6030:
    // 0x1d6030: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1d6030u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1d6034:
    // 0x1d6034: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d6034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6038:
    // 0x1d6038: 0x0  nop
    ctx->pc = 0x1d6038u;
    // NOP
label_1d603c:
    // 0x1d603c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1d6040:
    if (ctx->pc == 0x1D6040u) {
        ctx->pc = 0x1D6044u;
        goto label_1d6044;
    }
    ctx->pc = 0x1D603Cu;
    {
        const bool branch_taken_0x1d603c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d603c) {
            ctx->pc = 0x1D606Cu;
            goto label_1d606c;
        }
    }
    ctx->pc = 0x1D6044u;
label_1d6044:
    // 0x1d6044: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d6044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6048:
    // 0x1d6048: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1d6048u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1d604c:
    // 0x1d604c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d604cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6050:
    // 0x1d6050: 0x0  nop
    ctx->pc = 0x1d6050u;
    // NOP
label_1d6054:
    // 0x1d6054: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6058:
    if (ctx->pc == 0x1D6058u) {
        ctx->pc = 0x1D605Cu;
        goto label_1d605c;
    }
    ctx->pc = 0x1D6054u;
    {
        const bool branch_taken_0x1d6054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6054) {
            ctx->pc = 0x1D606Cu;
            goto label_1d606c;
        }
    }
    ctx->pc = 0x1D605Cu;
label_1d605c:
    // 0x1d605c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d605cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6060:
    // 0x1d6060: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d6060u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d6064:
    // 0x1d6064: 0x10000029  b           . + 4 + (0x29 << 2)
label_1d6068:
    if (ctx->pc == 0x1D6068u) {
        ctx->pc = 0x1D6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6064u;
        // 0x1d6068: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D606Cu;
        goto label_1d606c;
    }
    ctx->pc = 0x1D6064u;
    {
        const bool branch_taken_0x1d6064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6064u;
        // 0x1d6068: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6064) {
            ctx->pc = 0x1D610Cu;
            goto label_1d610c;
        }
    }
    ctx->pc = 0x1D606Cu;
label_1d606c:
    // 0x1d606c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d606cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6070:
    // 0x1d6070: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d6070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6074:
    // 0x1d6074: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d6074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1d6078:
    // 0x1d6078: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1d6078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d607c:
    // 0x1d607c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1d6080:
    // 0x1d6080: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d6080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d6084:
    // 0x1d6084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d6084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6088:
    // 0x1d6088: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d608c:
    // 0x1d608c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1d608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d6090:
    // 0x1d6090: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6094:
    // 0x1d6094: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x1d6094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1d6098:
    // 0x1d6098: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x1d6098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1d609c:
    // 0x1d609c: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x1d609cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1d60a0:
    // 0x1d60a0: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1d60a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d60a4:
    // 0x1d60a4: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1d60a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1d60a8:
    // 0x1d60a8: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x1d60a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1d60ac:
    // 0x1d60ac: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1d60acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d60b0:
    // 0x1d60b0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1d60b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1d60b4:
    // 0x1d60b4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x1d60b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d60b8:
    // 0x1d60b8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d60b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d60bc:
    // 0x1d60bc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d60bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d60c0:
    // 0x1d60c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d60c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d60c4:
    // 0x1d60c4: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x1d60c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d60c8:
    // 0x1d60c8: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x1d60c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d60cc:
    // 0x1d60cc: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d60ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d60d0:
    // 0x1d60d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d60d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d60d4:
    // 0x1d60d4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d60d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d60d8:
    // 0x1d60d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d60d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1d60dc:
    // 0x1d60dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d60e0:
    // 0x1d60e0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1d60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d60e4:
    // 0x1d60e4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d60e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d60e8:
    // 0x1d60e8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1d60e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d60ec:
    // 0x1d60ec: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x1d60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d60f0:
    // 0x1d60f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d60f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d60f4:
    // 0x1d60f4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1d60f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1d60f8:
    // 0x1d60f8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1d60f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d60fc:
    // 0x1d60fc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1d60fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1d6100:
    // 0x1d6100: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d6100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6104:
    // 0x1d6104: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d6104u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d6108:
    // 0x1d6108: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x1d6108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_1d610c:
    // 0x1d610c: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_1d6110:
    if (ctx->pc == 0x1D6110u) {
        ctx->pc = 0x1D6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D610Cu;
        // 0x1d6110: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6114u;
        goto label_1d6114;
    }
    ctx->pc = 0x1D610Cu;
    {
        const bool branch_taken_0x1d610c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d610c) {
            ctx->pc = 0x1D6110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D610Cu;
            // 0x1d6110: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D61F0u;
            goto label_1d61f0;
        }
    }
    ctx->pc = 0x1D6114u;
label_1d6114:
    // 0x1d6114: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1d6118:
    // 0x1d6118: 0xc0f70ce  jal         func_3DC338
label_1d611c:
    if (ctx->pc == 0x1D611Cu) {
        ctx->pc = 0x1D611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6118u;
        // 0x1d611c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6120u;
        goto label_1d6120;
    }
    ctx->pc = 0x1D6118u;
    SET_GPR_U32(ctx, 31, 0x1D6120u);
    ctx->pc = 0x1D611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6118u;
    // 0x1d611c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1D6118u, 0x1D6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6120u;
label_1d6120:
    // 0x1d6120: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d6124:
    if (ctx->pc == 0x1D6124u) {
        ctx->pc = 0x1D6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6120u;
        // 0x1d6124: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6128u;
        goto label_1d6128;
    }
    ctx->pc = 0x1D6120u;
    {
        const bool branch_taken_0x1d6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6120) {
            ctx->pc = 0x1D6124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6120u;
            // 0x1d6124: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6134u;
            goto label_1d6134;
        }
    }
    ctx->pc = 0x1D6128u;
label_1d6128:
    // 0x1d6128: 0xc0c4900  jal         func_312400
label_1d612c:
    if (ctx->pc == 0x1D612Cu) {
        ctx->pc = 0x1D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6128u;
        // 0x1d612c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6130u;
        goto label_1d6130;
    }
    ctx->pc = 0x1D6128u;
    SET_GPR_U32(ctx, 31, 0x1D6130u);
    ctx->pc = 0x1D612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6128u;
    // 0x1d612c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1D6128u, 0x1D6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6130u;
label_1d6130:
    // 0x1d6130: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1d6130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6134:
    // 0x1d6134: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1d6138:
    // 0x1d6138: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_1d613c:
    // 0x1d613c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6140:
    // 0x1d6140: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d6140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d6144:
    // 0x1d6144: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d6144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6148:
    // 0x1d6148: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1d6148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d614c:
    // 0x1d614c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1d614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6150:
    // 0x1d6150: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d6150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d6154:
    // 0x1d6154: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6158:
    // 0x1d6158: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1d6158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d615c:
    // 0x1d615c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1d6160:
    // 0x1d6160: 0x40f809  jalr        $v0
label_1d6164:
    if (ctx->pc == 0x1D6164u) {
        ctx->pc = 0x1D6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6160u;
        // 0x1d6164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6168u;
        goto label_1d6168;
    }
    ctx->pc = 0x1D6160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6168u);
        ctx->pc = 0x1D6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6160u;
        // 0x1d6164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6160u, 0x1D6168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6168u;
label_1d6168:
    // 0x1d6168: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1d616c:
    // 0x1d616c: 0xc0f70ce  jal         func_3DC338
label_1d6170:
    if (ctx->pc == 0x1D6170u) {
        ctx->pc = 0x1D6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D616Cu;
        // 0x1d6170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6174u;
        goto label_1d6174;
    }
    ctx->pc = 0x1D616Cu;
    SET_GPR_U32(ctx, 31, 0x1D6174u);
    ctx->pc = 0x1D6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D616Cu;
    // 0x1d6170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1D616Cu, 0x1D6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6174u;
label_1d6174:
    // 0x1d6174: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d6178:
    if (ctx->pc == 0x1D6178u) {
        ctx->pc = 0x1D6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6174u;
        // 0x1d6178: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D617Cu;
        goto label_1d617c;
    }
    ctx->pc = 0x1D6174u;
    {
        const bool branch_taken_0x1d6174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6174) {
            ctx->pc = 0x1D6178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6174u;
            // 0x1d6178: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6188u;
            goto label_1d6188;
        }
    }
    ctx->pc = 0x1D617Cu;
label_1d617c:
    // 0x1d617c: 0xc0c4900  jal         func_312400
label_1d6180:
    if (ctx->pc == 0x1D6180u) {
        ctx->pc = 0x1D6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D617Cu;
        // 0x1d6180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6184u;
        goto label_1d6184;
    }
    ctx->pc = 0x1D617Cu;
    SET_GPR_U32(ctx, 31, 0x1D6184u);
    ctx->pc = 0x1D6180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D617Cu;
    // 0x1d6180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1D617Cu, 0x1D6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6184u;
label_1d6184:
    // 0x1d6184: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x1d6184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6188:
    // 0x1d6188: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1d6188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1d618c:
    // 0x1d618c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6190:
    // 0x1d6190: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d6190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d6194:
    // 0x1d6194: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1d6194u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d6198:
    // 0x1d6198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d6198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d619c:
    // 0x1d619c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d619cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d61a0:
    // 0x1d61a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d61a4:
    // 0x1d61a4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1d61a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1d61a8:
    // 0x1d61a8: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x1d61a8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
label_1d61ac:
    // 0x1d61ac: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1d61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d61b0:
    // 0x1d61b0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1d61b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d61b4:
    // 0x1d61b4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1d61b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d61b8:
    // 0x1d61b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1d61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d61bc:
    // 0x1d61bc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1d61c0:
    if (ctx->pc == 0x1D61C0u) {
        ctx->pc = 0x1D61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61BCu;
        // 0x1d61c0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D61C4u;
        goto label_1d61c4;
    }
    ctx->pc = 0x1D61BCu;
    {
        const bool branch_taken_0x1d61bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61BCu;
        // 0x1d61c0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61bc) {
            ctx->pc = 0x1D61E0u;
            goto label_1d61e0;
        }
    }
    ctx->pc = 0x1D61C4u;
label_1d61c4:
    // 0x1d61c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1d61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d61c8:
    // 0x1d61c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d61c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d61cc:
    // 0x1d61cc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1d61ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_1d61d0:
    // 0x1d61d0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1d61d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d61d4:
    // 0x1d61d4: 0x0  nop
    ctx->pc = 0x1d61d4u;
    // NOP
label_1d61d8:
    // 0x1d61d8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1d61dc:
    if (ctx->pc == 0x1D61DCu) {
        ctx->pc = 0x1D61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61D8u;
        // 0x1d61dc: 0xe6230000  swc1        $f3, 0x0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D61E0u;
        goto label_1d61e0;
    }
    ctx->pc = 0x1D61D8u;
    {
        const bool branch_taken_0x1d61d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d61d8) {
            ctx->pc = 0x1D61DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D61D8u;
            // 0x1d61dc: 0xe6230000  swc1        $f3, 0x0($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D61E8u;
            goto label_1d61e8;
        }
    }
    ctx->pc = 0x1D61E0u;
label_1d61e0:
    // 0x1d61e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d61e4:
    if (ctx->pc == 0x1D61E4u) {
        ctx->pc = 0x1D61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61E0u;
        // 0x1d61e4: 0xa2200031  sb          $zero, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D61E8u;
        goto label_1d61e8;
    }
    ctx->pc = 0x1D61E0u;
    {
        const bool branch_taken_0x1d61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61E0u;
        // 0x1d61e4: 0xa2200031  sb          $zero, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61e0) {
            ctx->pc = 0x1D61ECu;
            goto label_1d61ec;
        }
    }
    ctx->pc = 0x1D61E8u;
label_1d61e8:
    // 0x1d61e8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1d61e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1d61ec:
    // 0x1d61ec: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x1d61ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_1d61f0:
    // 0x1d61f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d61f4:
    if (ctx->pc == 0x1D61F4u) {
        ctx->pc = 0x1D61F8u;
        goto label_1d61f8;
    }
    ctx->pc = 0x1D61F0u;
    {
        const bool branch_taken_0x1d61f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d61f0) {
            ctx->pc = 0x1D6204u;
            goto label_1d6204;
        }
    }
    ctx->pc = 0x1D61F8u;
label_1d61f8:
    // 0x1d61f8: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x1d61f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_1d61fc:
    // 0x1d61fc: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_1d6200:
    if (ctx->pc == 0x1D6200u) {
        ctx->pc = 0x1D6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61FCu;
        // 0x1d6200: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6204u;
        goto label_1d6204;
    }
    ctx->pc = 0x1D61FCu;
    {
        const bool branch_taken_0x1d61fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61FCu;
        // 0x1d6200: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61fc) {
            ctx->pc = 0x1D6594u;
            goto label_1d6594;
        }
    }
    ctx->pc = 0x1D6204u;
label_1d6204:
    // 0x1d6204: 0xc0f6a96  jal         func_3DAA58
label_1d6208:
    if (ctx->pc == 0x1D6208u) {
        ctx->pc = 0x1D6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6204u;
        // 0x1d6208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D620Cu;
        goto label_1d620c;
    }
    ctx->pc = 0x1D6204u;
    SET_GPR_U32(ctx, 31, 0x1D620Cu);
    ctx->pc = 0x1D6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6204u;
    // 0x1d6208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D6204u, 0x1D620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D620Cu;
label_1d620c:
    // 0x1d620c: 0xc0f6a96  jal         func_3DAA58
label_1d6210:
    if (ctx->pc == 0x1D6210u) {
        ctx->pc = 0x1D6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D620Cu;
        // 0x1d6210: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6214u;
        goto label_1d6214;
    }
    ctx->pc = 0x1D620Cu;
    SET_GPR_U32(ctx, 31, 0x1D6214u);
    ctx->pc = 0x1D6210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D620Cu;
    // 0x1d6210: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D620Cu, 0x1D6214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6214u;
label_1d6214:
    // 0x1d6214: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1d6214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1d6218:
    // 0x1d6218: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1d6218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1d621c:
    // 0x1d621c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1d621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_1d6220:
    // 0x1d6220: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1d6224:
    if (ctx->pc == 0x1D6224u) {
        ctx->pc = 0x1D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6220u;
        // 0x1d6224: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6228u;
        goto label_1d6228;
    }
    ctx->pc = 0x1D6220u;
    {
        const bool branch_taken_0x1d6220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6220) {
            ctx->pc = 0x1D6224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6220u;
            // 0x1d6224: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6264u;
            goto label_1d6264;
        }
    }
    ctx->pc = 0x1D6228u;
label_1d6228:
    // 0x1d6228: 0xc0894f6  jal         func_2253D8
label_1d622c:
    if (ctx->pc == 0x1D622Cu) {
        ctx->pc = 0x1D622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6228u;
        // 0x1d622c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6230u;
        goto label_1d6230;
    }
    ctx->pc = 0x1D6228u;
    SET_GPR_U32(ctx, 31, 0x1D6230u);
    ctx->pc = 0x1D622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6228u;
    // 0x1d622c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x1D6228u, 0x1D6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6230u;
label_1d6230:
    // 0x1d6230: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d6234:
    if (ctx->pc == 0x1D6234u) {
        ctx->pc = 0x1D6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6230u;
        // 0x1d6234: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6238u;
        goto label_1d6238;
    }
    ctx->pc = 0x1D6230u;
    {
        const bool branch_taken_0x1d6230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6230u;
        // 0x1d6234: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6230) {
            ctx->pc = 0x1D6260u;
            goto label_1d6260;
        }
    }
    ctx->pc = 0x1D6238u;
label_1d6238:
    // 0x1d6238: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d623c:
    // 0x1d623c: 0xc6412b30  lwc1        $f1, 0x2B30($s2)
    ctx->pc = 0x1d623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6240:
    // 0x1d6240: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1d6240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6244:
    // 0x1d6244: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1d6244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1d6248:
    // 0x1d6248: 0x0  nop
    ctx->pc = 0x1d6248u;
    // NOP
label_1d624c:
    // 0x1d624c: 0x0  nop
    ctx->pc = 0x1d624cu;
    // NOP
label_1d6250:
    // 0x1d6250: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d6250u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d6254:
    // 0x1d6254: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1d6254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1d6258:
    // 0x1d6258: 0x10000075  b           . + 4 + (0x75 << 2)
label_1d625c:
    if (ctx->pc == 0x1D625Cu) {
        ctx->pc = 0x1D625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6258u;
        // 0x1d625c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6260u;
        goto label_1d6260;
    }
    ctx->pc = 0x1D6258u;
    {
        const bool branch_taken_0x1d6258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6258u;
        // 0x1d625c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6258) {
            ctx->pc = 0x1D6430u;
            goto label_1d6430;
        }
    }
    ctx->pc = 0x1D6260u;
label_1d6260:
    // 0x1d6260: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x1d6260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_1d6264:
    // 0x1d6264: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1d6268:
    if (ctx->pc == 0x1D6268u) {
        ctx->pc = 0x1D6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6264u;
        // 0x1d6268: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D626Cu;
        goto label_1d626c;
    }
    ctx->pc = 0x1D6264u;
    {
        const bool branch_taken_0x1d6264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6264u;
        // 0x1d6268: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6264) {
            ctx->pc = 0x1D6354u;
            goto label_1d6354;
        }
    }
    ctx->pc = 0x1D626Cu;
label_1d626c:
    // 0x1d626c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6270:
    // 0x1d6270: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6274:
    // 0x1d6274: 0xc6422b30  lwc1        $f2, 0x2B30($s2)
    ctx->pc = 0x1d6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6278:
    // 0x1d6278: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d6278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1d627c:
    // 0x1d627c: 0x0  nop
    ctx->pc = 0x1d627cu;
    // NOP
label_1d6280:
    // 0x1d6280: 0x0  nop
    ctx->pc = 0x1d6280u;
    // NOP
label_1d6284:
    // 0x1d6284: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1d6284u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1d6288:
    // 0x1d6288: 0x0  nop
    ctx->pc = 0x1d6288u;
    // NOP
label_1d628c:
    // 0x1d628c: 0x0  nop
    ctx->pc = 0x1d628cu;
    // NOP
label_1d6290:
    // 0x1d6290: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1d6290u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_1d6294:
    // 0x1d6294: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d6298:
    // 0x1d6298: 0xc0b1488  jal         func_2C5220
label_1d629c:
    if (ctx->pc == 0x1D629Cu) {
        ctx->pc = 0x1D629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6298u;
        // 0x1d629c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62A0u;
        goto label_1d62a0;
    }
    ctx->pc = 0x1D6298u;
    SET_GPR_U32(ctx, 31, 0x1D62A0u);
    ctx->pc = 0x1D629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6298u;
    // 0x1d629c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D6298u, 0x1D62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62A0u;
label_1d62a0:
    // 0x1d62a0: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x1d62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_1d62a4:
    // 0x1d62a4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1d62a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d62a8:
    // 0x1d62a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d62a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d62ac:
    // 0x1d62ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d62acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d62b0:
    // 0x1d62b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d62b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d62b4:
    // 0x1d62b4: 0xc0b17fe  jal         func_2C5FF8
label_1d62b8:
    if (ctx->pc == 0x1D62B8u) {
        ctx->pc = 0x1D62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B4u;
        // 0x1d62b8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62BCu;
        goto label_1d62bc;
    }
    ctx->pc = 0x1D62B4u;
    SET_GPR_U32(ctx, 31, 0x1D62BCu);
    ctx->pc = 0x1D62B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62B4u;
    // 0x1d62b8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1D62B4u, 0x1D62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62BCu;
label_1d62bc:
    // 0x1d62bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1d62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d62c0:
    // 0x1d62c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d62c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d62c4:
    // 0x1d62c4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1d62c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1d62c8:
    // 0x1d62c8: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1d62c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1d62cc:
    // 0x1d62cc: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1d62ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_1d62d0:
    // 0x1d62d0: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1d62d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_1d62d4:
    // 0x1d62d4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1d62d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1d62d8:
    // 0x1d62d8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1d62d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1d62dc:
    // 0x1d62dc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1d62dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1d62e0:
    // 0x1d62e0: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1d62e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_1d62e4:
    // 0x1d62e4: 0xa2200031  sb          $zero, 0x31($s1)
    ctx->pc = 0x1d62e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 0));
label_1d62e8:
    // 0x1d62e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1d62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d62ec:
    // 0x1d62ec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d62f0:
    // 0x1d62f0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1d62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d62f4:
    // 0x1d62f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1d62f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1d62f8:
    // 0x1d62f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1d62f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1d62fc:
    // 0x1d62fc: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1d62fcu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1d6300:
    // 0x1d6300: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1d6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6304:
    // 0x1d6304: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1d6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d6308:
    // 0x1d6308: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1d6308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d630c:
    // 0x1d630c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1d630cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1d6310:
    // 0x1d6310: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1d6310u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1d6314:
    // 0x1d6314: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1d6314u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1d6318:
    // 0x1d6318: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d6318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d631c:
    // 0x1d631c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d631cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6320:
    // 0x1d6320: 0x0  nop
    ctx->pc = 0x1d6320u;
    // NOP
label_1d6324:
    // 0x1d6324: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d6328:
    // 0x1d6328: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1d6328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d632c:
    // 0x1d632c: 0x0  nop
    ctx->pc = 0x1d632cu;
    // NOP
label_1d6330:
    // 0x1d6330: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d6334:
    if (ctx->pc == 0x1D6334u) {
        ctx->pc = 0x1D6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6330u;
        // 0x1d6334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6338u;
        goto label_1d6338;
    }
    ctx->pc = 0x1D6330u;
    {
        const bool branch_taken_0x1d6330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6330u;
        // 0x1d6334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6330) {
            ctx->pc = 0x1D634Cu;
            goto label_1d634c;
        }
    }
    ctx->pc = 0x1D6338u;
label_1d6338:
    // 0x1d6338: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1d633c:
    // 0x1d633c: 0x8e6600f8  lw          $a2, 0xF8($s3)
    ctx->pc = 0x1d633cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
label_1d6340:
    // 0x1d6340: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
label_1d6344:
    // 0x1d6344: 0xc0efefa  jal         func_3BFBE8
label_1d6348:
    if (ctx->pc == 0x1D6348u) {
        ctx->pc = 0x1D6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6344u;
        // 0x1d6348: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D634Cu;
        goto label_1d634c;
    }
    ctx->pc = 0x1D6344u;
    SET_GPR_U32(ctx, 31, 0x1D634Cu);
    ctx->pc = 0x1D6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6344u;
    // 0x1d6348: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D6344u, 0x1D634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D634Cu;
label_1d634c:
    // 0x1d634c: 0x10000038  b           . + 4 + (0x38 << 2)
label_1d6350:
    if (ctx->pc == 0x1D6350u) {
        ctx->pc = 0x1D6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D634Cu;
        // 0x1d6350: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6354u;
        goto label_1d6354;
    }
    ctx->pc = 0x1D634Cu;
    {
        const bool branch_taken_0x1d634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D634Cu;
        // 0x1d6350: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d634c) {
            ctx->pc = 0x1D6430u;
            goto label_1d6430;
        }
    }
    ctx->pc = 0x1D6354u;
label_1d6354:
    // 0x1d6354: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1d6354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6358:
    // 0x1d6358: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d635c:
    // 0x1d635c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1d635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d6360:
    // 0x1d6360: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x1d6360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d6364:
    // 0x1d6364: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6368:
    // 0x1d6368: 0xc6412b30  lwc1        $f1, 0x2B30($s2)
    ctx->pc = 0x1d6368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d636c:
    // 0x1d636c: 0x0  nop
    ctx->pc = 0x1d636cu;
    // NOP
label_1d6370:
    // 0x1d6370: 0x0  nop
    ctx->pc = 0x1d6370u;
    // NOP
label_1d6374:
    // 0x1d6374: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1d6374u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1d6378:
    // 0x1d6378: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x1d6378u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_1d637c:
    // 0x1d637c: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x1d637cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
label_1d6380:
    // 0x1d6380: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d6380u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d6384:
    // 0x1d6384: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1d6384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d6388:
    // 0x1d6388: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1d6388u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d638c:
    // 0x1d638c: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x1d638cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d6390:
    // 0x1d6390: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d6390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d6394:
    // 0x1d6394: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d6394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6398:
    // 0x1d6398: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d6398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d639c:
    // 0x1d639c: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_1d63a0:
    // 0x1d63a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d63a4:
    // 0x1d63a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1d63a8:
    // 0x1d63a8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d63a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d63ac:
    // 0x1d63ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d63acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d63b0:
    // 0x1d63b0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1d63b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1d63b4:
    // 0x1d63b4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1d63b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1d63b8:
    // 0x1d63b8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1d63b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1d63bc:
    // 0x1d63bc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1d63bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1d63c0:
    // 0x1d63c0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1d63c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1d63c4:
    // 0x1d63c4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1d63c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1d63c8:
    // 0x1d63c8: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1d63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_1d63cc:
    // 0x1d63cc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d63d0:
    // 0x1d63d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d63d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d63d4:
    // 0x1d63d4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d63d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d63d8:
    // 0x1d63d8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d63dc:
    // 0x1d63dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1d63dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1d63e0:
    // 0x1d63e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1d63e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1d63e4:
    // 0x1d63e4: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1d63e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1d63e8:
    // 0x1d63e8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1d63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d63ec:
    // 0x1d63ec: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1d63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d63f0:
    // 0x1d63f0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1d63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d63f4:
    // 0x1d63f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1d63f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1d63f8:
    // 0x1d63f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1d63f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1d63fc:
    // 0x1d63fc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1d63fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1d6400:
    // 0x1d6400: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d6404:
    // 0x1d6404: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6408:
    // 0x1d6408: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d6408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d640c:
    // 0x1d640c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d640cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d6410:
    // 0x1d6410: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1d6410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6414:
    // 0x1d6414: 0x0  nop
    ctx->pc = 0x1d6414u;
    // NOP
label_1d6418:
    // 0x1d6418: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d641c:
    if (ctx->pc == 0x1D641Cu) {
        ctx->pc = 0x1D641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6418u;
        // 0x1d641c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6420u;
        goto label_1d6420;
    }
    ctx->pc = 0x1D6418u;
    {
        const bool branch_taken_0x1d6418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6418u;
        // 0x1d641c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6418) {
            ctx->pc = 0x1D6430u;
            goto label_1d6430;
        }
    }
    ctx->pc = 0x1D6420u;
label_1d6420:
    // 0x1d6420: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1d6424:
    // 0x1d6424: 0x8e6600f8  lw          $a2, 0xF8($s3)
    ctx->pc = 0x1d6424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
label_1d6428:
    // 0x1d6428: 0xc0efefa  jal         func_3BFBE8
label_1d642c:
    if (ctx->pc == 0x1D642Cu) {
        ctx->pc = 0x1D642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6428u;
        // 0x1d642c: 0x24a5d5b0  addiu       $a1, $a1, -0x2A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6430u;
        goto label_1d6430;
    }
    ctx->pc = 0x1D6428u;
    SET_GPR_U32(ctx, 31, 0x1D6430u);
    ctx->pc = 0x1D642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6428u;
    // 0x1d642c: 0x24a5d5b0  addiu       $a1, $a1, -0x2A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D6428u, 0x1D6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6430u;
label_1d6430:
    // 0x1d6430: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1d6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1d6434:
    // 0x1d6434: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1d6434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6438:
    // 0x1d6438: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d6438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d643c:
    // 0x1d643c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d643cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1d6440:
    // 0x1d6440: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d6440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d6444:
    // 0x1d6444: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1d6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6448:
    // 0x1d6448: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d6448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d644c:
    // 0x1d644c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1d644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6450:
    // 0x1d6450: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1d6450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d6454:
    // 0x1d6454: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d6454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d6458:
    // 0x1d6458: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d6458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d645c:
    // 0x1d645c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d645cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d6460:
    // 0x1d6460: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1d6460u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d6464:
    // 0x1d6464: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1d6464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6468:
    // 0x1d6468: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1d6468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d646c:
    // 0x1d646c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1d646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d6470:
    // 0x1d6470: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1d6470u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1d6474:
    // 0x1d6474: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1d6474u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1d6478:
    // 0x1d6478: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1d6478u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1d647c:
    // 0x1d647c: 0x46010044  c1          0x10044
    ctx->pc = 0x1d647cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1d6480:
    // 0x1d6480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6484:
    // 0x1d6484: 0x0  nop
    ctx->pc = 0x1d6484u;
    // NOP
label_1d6488:
    // 0x1d6488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d6488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d648c:
    // 0x1d648c: 0x0  nop
    ctx->pc = 0x1d648cu;
    // NOP
label_1d6490:
    // 0x1d6490: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
label_1d6494:
    if (ctx->pc == 0x1D6494u) {
        ctx->pc = 0x1D6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6490u;
        // 0x1d6494: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6498u;
        goto label_1d6498;
    }
    ctx->pc = 0x1D6490u;
    {
        const bool branch_taken_0x1d6490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6490) {
            ctx->pc = 0x1D6494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6490u;
            // 0x1d6494: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D656Cu;
            goto label_1d656c;
        }
    }
    ctx->pc = 0x1D6498u;
label_1d6498:
    // 0x1d6498: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1d6498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1d649c:
    // 0x1d649c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1d649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1d64a0:
    // 0x1d64a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1d64a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_1d64a4:
    // 0x1d64a4: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_1d64a8:
    if (ctx->pc == 0x1D64A8u) {
        ctx->pc = 0x1D64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64A4u;
        // 0x1d64a8: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D64ACu;
        goto label_1d64ac;
    }
    ctx->pc = 0x1D64A4u;
    {
        const bool branch_taken_0x1d64a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d64a4) {
            ctx->pc = 0x1D64A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D64A4u;
            // 0x1d64a8: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D656Cu;
            goto label_1d656c;
        }
    }
    ctx->pc = 0x1D64ACu;
label_1d64ac:
    // 0x1d64ac: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x1d64acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_1d64b0:
    // 0x1d64b0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x1d64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_1d64b4:
    // 0x1d64b4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1d64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1d64b8:
    // 0x1d64b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d64b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d64bc:
    // 0x1d64bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1d64c0:
    if (ctx->pc == 0x1D64C0u) {
        ctx->pc = 0x1D64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64BCu;
        // 0x1d64c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D64C4u;
        goto label_1d64c4;
    }
    ctx->pc = 0x1D64BCu;
    {
        const bool branch_taken_0x1d64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64BCu;
        // 0x1d64c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64bc) {
            ctx->pc = 0x1D6504u;
            goto label_1d6504;
        }
    }
    ctx->pc = 0x1D64C4u;
label_1d64c4:
    // 0x1d64c4: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1d64c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d64c8:
    // 0x1d64c8: 0xc461017c  lwc1        $f1, 0x17C($v1)
    ctx->pc = 0x1d64c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d64cc:
    // 0x1d64cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1d64ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1d64d0:
    // 0x1d64d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d64d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d64d4:
    // 0x1d64d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d64d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d64d8:
    // 0x1d64d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1d64d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1d64dc:
    // 0x1d64dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d64dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d64e0:
    // 0x1d64e0: 0x0  nop
    ctx->pc = 0x1d64e0u;
    // NOP
label_1d64e4:
    // 0x1d64e4: 0x0  nop
    ctx->pc = 0x1d64e4u;
    // NOP
label_1d64e8:
    // 0x1d64e8: 0x46011096  rsqrt.s     $f2, $f2, $f1
    ctx->pc = 0x1d64e8u;
    ctx->f[2] = FPU_RSQRT_S(ctx->f[2], ctx->f[1]);
label_1d64ec:
    // 0x1d64ec: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1d64ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1d64f0:
    // 0x1d64f0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1d64f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1d64f4:
    // 0x1d64f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1d64f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1d64f8:
    // 0x1d64f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1d64f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1d64fc:
    // 0x1d64fc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d6500:
    // 0x1d6500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6504:
    // 0x1d6504: 0xc083bc0  jal         func_20EF00
label_1d6508:
    if (ctx->pc == 0x1D6508u) {
        ctx->pc = 0x1D6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6504u;
        // 0x1d6508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D650Cu;
        goto label_1d650c;
    }
    ctx->pc = 0x1D6504u;
    SET_GPR_U32(ctx, 31, 0x1D650Cu);
    ctx->pc = 0x1D6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6504u;
    // 0x1d6508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x1D6504u, 0x1D650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D650Cu;
label_1d650c:
    // 0x1d650c: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1d650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1d6510:
    // 0x1d6510: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1d6510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1d6514:
    // 0x1d6514: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1d6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_1d6518:
    // 0x1d6518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1d651c:
    if (ctx->pc == 0x1D651Cu) {
        ctx->pc = 0x1D6520u;
        goto label_1d6520;
    }
    ctx->pc = 0x1D6518u;
    {
        const bool branch_taken_0x1d6518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6518) {
            ctx->pc = 0x1D6538u;
            goto label_1d6538;
        }
    }
    ctx->pc = 0x1D6520u;
label_1d6520:
    // 0x1d6520: 0xc0894f6  jal         func_2253D8
label_1d6524:
    if (ctx->pc == 0x1D6524u) {
        ctx->pc = 0x1D6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6520u;
        // 0x1d6524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6528u;
        goto label_1d6528;
    }
    ctx->pc = 0x1D6520u;
    SET_GPR_U32(ctx, 31, 0x1D6528u);
    ctx->pc = 0x1D6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6520u;
    // 0x1d6524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x1D6520u, 0x1D6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6528u;
label_1d6528:
    // 0x1d6528: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x1d6528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1d652c:
    // 0x1d652c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1d652cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1d6530:
    // 0x1d6530: 0x906200a8  lbu         $v0, 0xA8($v1)
    ctx->pc = 0x1d6530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_1d6534:
    // 0x1d6534: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1d6534u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1d6538:
    // 0x1d6538: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_1d653c:
    if (ctx->pc == 0x1D653Cu) {
        ctx->pc = 0x1D653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6538u;
        // 0x1d653c: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6540u;
        goto label_1d6540;
    }
    ctx->pc = 0x1D6538u;
    {
        const bool branch_taken_0x1d6538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6538) {
            ctx->pc = 0x1D653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6538u;
            // 0x1d653c: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6550u;
            goto label_1d6550;
        }
    }
    ctx->pc = 0x1D6540u;
label_1d6540:
    // 0x1d6540: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1d6544:
    // 0x1d6544: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1d6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6548:
    // 0x1d6548: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d6548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d654c:
    // 0x1d654c: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x1d654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1d6550:
    // 0x1d6550: 0xc0b7264  jal         func_2DC990
label_1d6554:
    if (ctx->pc == 0x1D6554u) {
        ctx->pc = 0x1D6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6550u;
        // 0x1d6554: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6558u;
        goto label_1d6558;
    }
    ctx->pc = 0x1D6550u;
    SET_GPR_U32(ctx, 31, 0x1D6558u);
    ctx->pc = 0x1D6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6550u;
    // 0x1d6554: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x1D6550u, 0x1D6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6558u;
label_1d6558:
    // 0x1d6558: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1d655c:
    // 0x1d655c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d655cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6560:
    // 0x1d6560: 0xf84100b0  sqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x1d6560u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d6564:
    // 0x1d6564: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d6568:
    if (ctx->pc == 0x1D6568u) {
        ctx->pc = 0x1D6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6564u;
        // 0x1d6568: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D656Cu;
        goto label_1d656c;
    }
    ctx->pc = 0x1D6564u;
    {
        const bool branch_taken_0x1d6564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6564u;
        // 0x1d6568: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6564) {
            ctx->pc = 0x1D6578u;
            goto label_1d6578;
        }
    }
    ctx->pc = 0x1D656Cu;
label_1d656c:
    // 0x1d656c: 0xc0b7264  jal         func_2DC990
label_1d6570:
    if (ctx->pc == 0x1D6570u) {
        ctx->pc = 0x1D6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D656Cu;
        // 0x1d6570: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6574u;
        goto label_1d6574;
    }
    ctx->pc = 0x1D656Cu;
    SET_GPR_U32(ctx, 31, 0x1D6574u);
    ctx->pc = 0x1D6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D656Cu;
    // 0x1d6570: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x1D656Cu, 0x1D6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6574u;
label_1d6574:
    // 0x1d6574: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1d6574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1d6578:
    // 0x1d6578: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1d6578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d657c:
    // 0x1d657c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1d657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1d6580:
    // 0x1d6580: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d6580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d6584:
    // 0x1d6584: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1d6584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_1d6588:
    // 0x1d6588: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d6588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d658c:
    // 0x1d658c: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1d658cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d6590:
    // 0x1d6590: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1d6590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1d6594:
    // 0x1d6594: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1d6594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_1d6598:
    // 0x1d6598: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1d6598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_1d659c:
    // 0x1d659c: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1d659cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_1d65a0:
    // 0x1d65a0: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x1d65a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_1d65a4:
    // 0x1d65a4: 0x3e00008  jr          $ra
label_1d65a8:
    if (ctx->pc == 0x1D65A8u) {
        ctx->pc = 0x1D65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65A4u;
        // 0x1d65a8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D65ACu;
        goto label_1d65ac;
    }
    ctx->pc = 0x1D65A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65A4u;
        // 0x1d65a8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65ACu;
label_1d65ac:
    // 0x1d65ac: 0x0  nop
    ctx->pc = 0x1d65acu;
    // NOP
label_1d65b0:
    // 0x1d65b0: 0x0  nop
    ctx->pc = 0x1d65b0u;
    // NOP
label_1d65b4:
    // 0x1d65b4: 0x0  nop
    ctx->pc = 0x1d65b4u;
    // NOP
    ctx->pc = 0x1d65b8u;
}
