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

// Function: sub_002A5D60
// Address: 0x2a5d60 - 0x2a6548
void sub_002A5D60_0x2a5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5D60_0x2a5d60");
#endif

    switch (ctx->pc) {
        case 0x2a5d60u: goto label_2a5d60;
        case 0x2a5d64u: goto label_2a5d64;
        case 0x2a5d68u: goto label_2a5d68;
        case 0x2a5d6cu: goto label_2a5d6c;
        case 0x2a5d70u: goto label_2a5d70;
        case 0x2a5d74u: goto label_2a5d74;
        case 0x2a5d78u: goto label_2a5d78;
        case 0x2a5d7cu: goto label_2a5d7c;
        case 0x2a5d80u: goto label_2a5d80;
        case 0x2a5d84u: goto label_2a5d84;
        case 0x2a5d88u: goto label_2a5d88;
        case 0x2a5d8cu: goto label_2a5d8c;
        case 0x2a5d90u: goto label_2a5d90;
        case 0x2a5d94u: goto label_2a5d94;
        case 0x2a5d98u: goto label_2a5d98;
        case 0x2a5d9cu: goto label_2a5d9c;
        case 0x2a5da0u: goto label_2a5da0;
        case 0x2a5da4u: goto label_2a5da4;
        case 0x2a5da8u: goto label_2a5da8;
        case 0x2a5dacu: goto label_2a5dac;
        case 0x2a5db0u: goto label_2a5db0;
        case 0x2a5db4u: goto label_2a5db4;
        case 0x2a5db8u: goto label_2a5db8;
        case 0x2a5dbcu: goto label_2a5dbc;
        case 0x2a5dc0u: goto label_2a5dc0;
        case 0x2a5dc4u: goto label_2a5dc4;
        case 0x2a5dc8u: goto label_2a5dc8;
        case 0x2a5dccu: goto label_2a5dcc;
        case 0x2a5dd0u: goto label_2a5dd0;
        case 0x2a5dd4u: goto label_2a5dd4;
        case 0x2a5dd8u: goto label_2a5dd8;
        case 0x2a5ddcu: goto label_2a5ddc;
        case 0x2a5de0u: goto label_2a5de0;
        case 0x2a5de4u: goto label_2a5de4;
        case 0x2a5de8u: goto label_2a5de8;
        case 0x2a5decu: goto label_2a5dec;
        case 0x2a5df0u: goto label_2a5df0;
        case 0x2a5df4u: goto label_2a5df4;
        case 0x2a5df8u: goto label_2a5df8;
        case 0x2a5dfcu: goto label_2a5dfc;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e04u: goto label_2a5e04;
        case 0x2a5e08u: goto label_2a5e08;
        case 0x2a5e0cu: goto label_2a5e0c;
        case 0x2a5e10u: goto label_2a5e10;
        case 0x2a5e14u: goto label_2a5e14;
        case 0x2a5e18u: goto label_2a5e18;
        case 0x2a5e1cu: goto label_2a5e1c;
        case 0x2a5e20u: goto label_2a5e20;
        case 0x2a5e24u: goto label_2a5e24;
        case 0x2a5e28u: goto label_2a5e28;
        case 0x2a5e2cu: goto label_2a5e2c;
        case 0x2a5e30u: goto label_2a5e30;
        case 0x2a5e34u: goto label_2a5e34;
        case 0x2a5e38u: goto label_2a5e38;
        case 0x2a5e3cu: goto label_2a5e3c;
        case 0x2a5e40u: goto label_2a5e40;
        case 0x2a5e44u: goto label_2a5e44;
        case 0x2a5e48u: goto label_2a5e48;
        case 0x2a5e4cu: goto label_2a5e4c;
        case 0x2a5e50u: goto label_2a5e50;
        case 0x2a5e54u: goto label_2a5e54;
        case 0x2a5e58u: goto label_2a5e58;
        case 0x2a5e5cu: goto label_2a5e5c;
        case 0x2a5e60u: goto label_2a5e60;
        case 0x2a5e64u: goto label_2a5e64;
        case 0x2a5e68u: goto label_2a5e68;
        case 0x2a5e6cu: goto label_2a5e6c;
        case 0x2a5e70u: goto label_2a5e70;
        case 0x2a5e74u: goto label_2a5e74;
        case 0x2a5e78u: goto label_2a5e78;
        case 0x2a5e7cu: goto label_2a5e7c;
        case 0x2a5e80u: goto label_2a5e80;
        case 0x2a5e84u: goto label_2a5e84;
        case 0x2a5e88u: goto label_2a5e88;
        case 0x2a5e8cu: goto label_2a5e8c;
        case 0x2a5e90u: goto label_2a5e90;
        case 0x2a5e94u: goto label_2a5e94;
        case 0x2a5e98u: goto label_2a5e98;
        case 0x2a5e9cu: goto label_2a5e9c;
        case 0x2a5ea0u: goto label_2a5ea0;
        case 0x2a5ea4u: goto label_2a5ea4;
        case 0x2a5ea8u: goto label_2a5ea8;
        case 0x2a5eacu: goto label_2a5eac;
        case 0x2a5eb0u: goto label_2a5eb0;
        case 0x2a5eb4u: goto label_2a5eb4;
        case 0x2a5eb8u: goto label_2a5eb8;
        case 0x2a5ebcu: goto label_2a5ebc;
        case 0x2a5ec0u: goto label_2a5ec0;
        case 0x2a5ec4u: goto label_2a5ec4;
        case 0x2a5ec8u: goto label_2a5ec8;
        case 0x2a5eccu: goto label_2a5ecc;
        case 0x2a5ed0u: goto label_2a5ed0;
        case 0x2a5ed4u: goto label_2a5ed4;
        case 0x2a5ed8u: goto label_2a5ed8;
        case 0x2a5edcu: goto label_2a5edc;
        case 0x2a5ee0u: goto label_2a5ee0;
        case 0x2a5ee4u: goto label_2a5ee4;
        case 0x2a5ee8u: goto label_2a5ee8;
        case 0x2a5eecu: goto label_2a5eec;
        case 0x2a5ef0u: goto label_2a5ef0;
        case 0x2a5ef4u: goto label_2a5ef4;
        case 0x2a5ef8u: goto label_2a5ef8;
        case 0x2a5efcu: goto label_2a5efc;
        case 0x2a5f00u: goto label_2a5f00;
        case 0x2a5f04u: goto label_2a5f04;
        case 0x2a5f08u: goto label_2a5f08;
        case 0x2a5f0cu: goto label_2a5f0c;
        case 0x2a5f10u: goto label_2a5f10;
        case 0x2a5f14u: goto label_2a5f14;
        case 0x2a5f18u: goto label_2a5f18;
        case 0x2a5f1cu: goto label_2a5f1c;
        case 0x2a5f20u: goto label_2a5f20;
        case 0x2a5f24u: goto label_2a5f24;
        case 0x2a5f28u: goto label_2a5f28;
        case 0x2a5f2cu: goto label_2a5f2c;
        case 0x2a5f30u: goto label_2a5f30;
        case 0x2a5f34u: goto label_2a5f34;
        case 0x2a5f38u: goto label_2a5f38;
        case 0x2a5f3cu: goto label_2a5f3c;
        case 0x2a5f40u: goto label_2a5f40;
        case 0x2a5f44u: goto label_2a5f44;
        case 0x2a5f48u: goto label_2a5f48;
        case 0x2a5f4cu: goto label_2a5f4c;
        case 0x2a5f50u: goto label_2a5f50;
        case 0x2a5f54u: goto label_2a5f54;
        case 0x2a5f58u: goto label_2a5f58;
        case 0x2a5f5cu: goto label_2a5f5c;
        case 0x2a5f60u: goto label_2a5f60;
        case 0x2a5f64u: goto label_2a5f64;
        case 0x2a5f68u: goto label_2a5f68;
        case 0x2a5f6cu: goto label_2a5f6c;
        case 0x2a5f70u: goto label_2a5f70;
        case 0x2a5f74u: goto label_2a5f74;
        case 0x2a5f78u: goto label_2a5f78;
        case 0x2a5f7cu: goto label_2a5f7c;
        case 0x2a5f80u: goto label_2a5f80;
        case 0x2a5f84u: goto label_2a5f84;
        case 0x2a5f88u: goto label_2a5f88;
        case 0x2a5f8cu: goto label_2a5f8c;
        case 0x2a5f90u: goto label_2a5f90;
        case 0x2a5f94u: goto label_2a5f94;
        case 0x2a5f98u: goto label_2a5f98;
        case 0x2a5f9cu: goto label_2a5f9c;
        case 0x2a5fa0u: goto label_2a5fa0;
        case 0x2a5fa4u: goto label_2a5fa4;
        case 0x2a5fa8u: goto label_2a5fa8;
        case 0x2a5facu: goto label_2a5fac;
        case 0x2a5fb0u: goto label_2a5fb0;
        case 0x2a5fb4u: goto label_2a5fb4;
        case 0x2a5fb8u: goto label_2a5fb8;
        case 0x2a5fbcu: goto label_2a5fbc;
        case 0x2a5fc0u: goto label_2a5fc0;
        case 0x2a5fc4u: goto label_2a5fc4;
        case 0x2a5fc8u: goto label_2a5fc8;
        case 0x2a5fccu: goto label_2a5fcc;
        case 0x2a5fd0u: goto label_2a5fd0;
        case 0x2a5fd4u: goto label_2a5fd4;
        case 0x2a5fd8u: goto label_2a5fd8;
        case 0x2a5fdcu: goto label_2a5fdc;
        case 0x2a5fe0u: goto label_2a5fe0;
        case 0x2a5fe4u: goto label_2a5fe4;
        case 0x2a5fe8u: goto label_2a5fe8;
        case 0x2a5fecu: goto label_2a5fec;
        case 0x2a5ff0u: goto label_2a5ff0;
        case 0x2a5ff4u: goto label_2a5ff4;
        case 0x2a5ff8u: goto label_2a5ff8;
        case 0x2a5ffcu: goto label_2a5ffc;
        case 0x2a6000u: goto label_2a6000;
        case 0x2a6004u: goto label_2a6004;
        case 0x2a6008u: goto label_2a6008;
        case 0x2a600cu: goto label_2a600c;
        case 0x2a6010u: goto label_2a6010;
        case 0x2a6014u: goto label_2a6014;
        case 0x2a6018u: goto label_2a6018;
        case 0x2a601cu: goto label_2a601c;
        case 0x2a6020u: goto label_2a6020;
        case 0x2a6024u: goto label_2a6024;
        case 0x2a6028u: goto label_2a6028;
        case 0x2a602cu: goto label_2a602c;
        case 0x2a6030u: goto label_2a6030;
        case 0x2a6034u: goto label_2a6034;
        case 0x2a6038u: goto label_2a6038;
        case 0x2a603cu: goto label_2a603c;
        case 0x2a6040u: goto label_2a6040;
        case 0x2a6044u: goto label_2a6044;
        case 0x2a6048u: goto label_2a6048;
        case 0x2a604cu: goto label_2a604c;
        case 0x2a6050u: goto label_2a6050;
        case 0x2a6054u: goto label_2a6054;
        case 0x2a6058u: goto label_2a6058;
        case 0x2a605cu: goto label_2a605c;
        case 0x2a6060u: goto label_2a6060;
        case 0x2a6064u: goto label_2a6064;
        case 0x2a6068u: goto label_2a6068;
        case 0x2a606cu: goto label_2a606c;
        case 0x2a6070u: goto label_2a6070;
        case 0x2a6074u: goto label_2a6074;
        case 0x2a6078u: goto label_2a6078;
        case 0x2a607cu: goto label_2a607c;
        case 0x2a6080u: goto label_2a6080;
        case 0x2a6084u: goto label_2a6084;
        case 0x2a6088u: goto label_2a6088;
        case 0x2a608cu: goto label_2a608c;
        case 0x2a6090u: goto label_2a6090;
        case 0x2a6094u: goto label_2a6094;
        case 0x2a6098u: goto label_2a6098;
        case 0x2a609cu: goto label_2a609c;
        case 0x2a60a0u: goto label_2a60a0;
        case 0x2a60a4u: goto label_2a60a4;
        case 0x2a60a8u: goto label_2a60a8;
        case 0x2a60acu: goto label_2a60ac;
        case 0x2a60b0u: goto label_2a60b0;
        case 0x2a60b4u: goto label_2a60b4;
        case 0x2a60b8u: goto label_2a60b8;
        case 0x2a60bcu: goto label_2a60bc;
        case 0x2a60c0u: goto label_2a60c0;
        case 0x2a60c4u: goto label_2a60c4;
        case 0x2a60c8u: goto label_2a60c8;
        case 0x2a60ccu: goto label_2a60cc;
        case 0x2a60d0u: goto label_2a60d0;
        case 0x2a60d4u: goto label_2a60d4;
        case 0x2a60d8u: goto label_2a60d8;
        case 0x2a60dcu: goto label_2a60dc;
        case 0x2a60e0u: goto label_2a60e0;
        case 0x2a60e4u: goto label_2a60e4;
        case 0x2a60e8u: goto label_2a60e8;
        case 0x2a60ecu: goto label_2a60ec;
        case 0x2a60f0u: goto label_2a60f0;
        case 0x2a60f4u: goto label_2a60f4;
        case 0x2a60f8u: goto label_2a60f8;
        case 0x2a60fcu: goto label_2a60fc;
        case 0x2a6100u: goto label_2a6100;
        case 0x2a6104u: goto label_2a6104;
        case 0x2a6108u: goto label_2a6108;
        case 0x2a610cu: goto label_2a610c;
        case 0x2a6110u: goto label_2a6110;
        case 0x2a6114u: goto label_2a6114;
        case 0x2a6118u: goto label_2a6118;
        case 0x2a611cu: goto label_2a611c;
        case 0x2a6120u: goto label_2a6120;
        case 0x2a6124u: goto label_2a6124;
        case 0x2a6128u: goto label_2a6128;
        case 0x2a612cu: goto label_2a612c;
        case 0x2a6130u: goto label_2a6130;
        case 0x2a6134u: goto label_2a6134;
        case 0x2a6138u: goto label_2a6138;
        case 0x2a613cu: goto label_2a613c;
        case 0x2a6140u: goto label_2a6140;
        case 0x2a6144u: goto label_2a6144;
        case 0x2a6148u: goto label_2a6148;
        case 0x2a614cu: goto label_2a614c;
        case 0x2a6150u: goto label_2a6150;
        case 0x2a6154u: goto label_2a6154;
        case 0x2a6158u: goto label_2a6158;
        case 0x2a615cu: goto label_2a615c;
        case 0x2a6160u: goto label_2a6160;
        case 0x2a6164u: goto label_2a6164;
        case 0x2a6168u: goto label_2a6168;
        case 0x2a616cu: goto label_2a616c;
        case 0x2a6170u: goto label_2a6170;
        case 0x2a6174u: goto label_2a6174;
        case 0x2a6178u: goto label_2a6178;
        case 0x2a617cu: goto label_2a617c;
        case 0x2a6180u: goto label_2a6180;
        case 0x2a6184u: goto label_2a6184;
        case 0x2a6188u: goto label_2a6188;
        case 0x2a618cu: goto label_2a618c;
        case 0x2a6190u: goto label_2a6190;
        case 0x2a6194u: goto label_2a6194;
        case 0x2a6198u: goto label_2a6198;
        case 0x2a619cu: goto label_2a619c;
        case 0x2a61a0u: goto label_2a61a0;
        case 0x2a61a4u: goto label_2a61a4;
        case 0x2a61a8u: goto label_2a61a8;
        case 0x2a61acu: goto label_2a61ac;
        case 0x2a61b0u: goto label_2a61b0;
        case 0x2a61b4u: goto label_2a61b4;
        case 0x2a61b8u: goto label_2a61b8;
        case 0x2a61bcu: goto label_2a61bc;
        case 0x2a61c0u: goto label_2a61c0;
        case 0x2a61c4u: goto label_2a61c4;
        case 0x2a61c8u: goto label_2a61c8;
        case 0x2a61ccu: goto label_2a61cc;
        case 0x2a61d0u: goto label_2a61d0;
        case 0x2a61d4u: goto label_2a61d4;
        case 0x2a61d8u: goto label_2a61d8;
        case 0x2a61dcu: goto label_2a61dc;
        case 0x2a61e0u: goto label_2a61e0;
        case 0x2a61e4u: goto label_2a61e4;
        case 0x2a61e8u: goto label_2a61e8;
        case 0x2a61ecu: goto label_2a61ec;
        case 0x2a61f0u: goto label_2a61f0;
        case 0x2a61f4u: goto label_2a61f4;
        case 0x2a61f8u: goto label_2a61f8;
        case 0x2a61fcu: goto label_2a61fc;
        case 0x2a6200u: goto label_2a6200;
        case 0x2a6204u: goto label_2a6204;
        case 0x2a6208u: goto label_2a6208;
        case 0x2a620cu: goto label_2a620c;
        case 0x2a6210u: goto label_2a6210;
        case 0x2a6214u: goto label_2a6214;
        case 0x2a6218u: goto label_2a6218;
        case 0x2a621cu: goto label_2a621c;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6224u: goto label_2a6224;
        case 0x2a6228u: goto label_2a6228;
        case 0x2a622cu: goto label_2a622c;
        case 0x2a6230u: goto label_2a6230;
        case 0x2a6234u: goto label_2a6234;
        case 0x2a6238u: goto label_2a6238;
        case 0x2a623cu: goto label_2a623c;
        case 0x2a6240u: goto label_2a6240;
        case 0x2a6244u: goto label_2a6244;
        case 0x2a6248u: goto label_2a6248;
        case 0x2a624cu: goto label_2a624c;
        case 0x2a6250u: goto label_2a6250;
        case 0x2a6254u: goto label_2a6254;
        case 0x2a6258u: goto label_2a6258;
        case 0x2a625cu: goto label_2a625c;
        case 0x2a6260u: goto label_2a6260;
        case 0x2a6264u: goto label_2a6264;
        case 0x2a6268u: goto label_2a6268;
        case 0x2a626cu: goto label_2a626c;
        case 0x2a6270u: goto label_2a6270;
        case 0x2a6274u: goto label_2a6274;
        case 0x2a6278u: goto label_2a6278;
        case 0x2a627cu: goto label_2a627c;
        case 0x2a6280u: goto label_2a6280;
        case 0x2a6284u: goto label_2a6284;
        case 0x2a6288u: goto label_2a6288;
        case 0x2a628cu: goto label_2a628c;
        case 0x2a6290u: goto label_2a6290;
        case 0x2a6294u: goto label_2a6294;
        case 0x2a6298u: goto label_2a6298;
        case 0x2a629cu: goto label_2a629c;
        case 0x2a62a0u: goto label_2a62a0;
        case 0x2a62a4u: goto label_2a62a4;
        case 0x2a62a8u: goto label_2a62a8;
        case 0x2a62acu: goto label_2a62ac;
        case 0x2a62b0u: goto label_2a62b0;
        case 0x2a62b4u: goto label_2a62b4;
        case 0x2a62b8u: goto label_2a62b8;
        case 0x2a62bcu: goto label_2a62bc;
        case 0x2a62c0u: goto label_2a62c0;
        case 0x2a62c4u: goto label_2a62c4;
        case 0x2a62c8u: goto label_2a62c8;
        case 0x2a62ccu: goto label_2a62cc;
        case 0x2a62d0u: goto label_2a62d0;
        case 0x2a62d4u: goto label_2a62d4;
        case 0x2a62d8u: goto label_2a62d8;
        case 0x2a62dcu: goto label_2a62dc;
        case 0x2a62e0u: goto label_2a62e0;
        case 0x2a62e4u: goto label_2a62e4;
        case 0x2a62e8u: goto label_2a62e8;
        case 0x2a62ecu: goto label_2a62ec;
        case 0x2a62f0u: goto label_2a62f0;
        case 0x2a62f4u: goto label_2a62f4;
        case 0x2a62f8u: goto label_2a62f8;
        case 0x2a62fcu: goto label_2a62fc;
        case 0x2a6300u: goto label_2a6300;
        case 0x2a6304u: goto label_2a6304;
        case 0x2a6308u: goto label_2a6308;
        case 0x2a630cu: goto label_2a630c;
        case 0x2a6310u: goto label_2a6310;
        case 0x2a6314u: goto label_2a6314;
        case 0x2a6318u: goto label_2a6318;
        case 0x2a631cu: goto label_2a631c;
        case 0x2a6320u: goto label_2a6320;
        case 0x2a6324u: goto label_2a6324;
        case 0x2a6328u: goto label_2a6328;
        case 0x2a632cu: goto label_2a632c;
        case 0x2a6330u: goto label_2a6330;
        case 0x2a6334u: goto label_2a6334;
        case 0x2a6338u: goto label_2a6338;
        case 0x2a633cu: goto label_2a633c;
        case 0x2a6340u: goto label_2a6340;
        case 0x2a6344u: goto label_2a6344;
        case 0x2a6348u: goto label_2a6348;
        case 0x2a634cu: goto label_2a634c;
        case 0x2a6350u: goto label_2a6350;
        case 0x2a6354u: goto label_2a6354;
        case 0x2a6358u: goto label_2a6358;
        case 0x2a635cu: goto label_2a635c;
        case 0x2a6360u: goto label_2a6360;
        case 0x2a6364u: goto label_2a6364;
        case 0x2a6368u: goto label_2a6368;
        case 0x2a636cu: goto label_2a636c;
        case 0x2a6370u: goto label_2a6370;
        case 0x2a6374u: goto label_2a6374;
        case 0x2a6378u: goto label_2a6378;
        case 0x2a637cu: goto label_2a637c;
        case 0x2a6380u: goto label_2a6380;
        case 0x2a6384u: goto label_2a6384;
        case 0x2a6388u: goto label_2a6388;
        case 0x2a638cu: goto label_2a638c;
        case 0x2a6390u: goto label_2a6390;
        case 0x2a6394u: goto label_2a6394;
        case 0x2a6398u: goto label_2a6398;
        case 0x2a639cu: goto label_2a639c;
        case 0x2a63a0u: goto label_2a63a0;
        case 0x2a63a4u: goto label_2a63a4;
        case 0x2a63a8u: goto label_2a63a8;
        case 0x2a63acu: goto label_2a63ac;
        case 0x2a63b0u: goto label_2a63b0;
        case 0x2a63b4u: goto label_2a63b4;
        case 0x2a63b8u: goto label_2a63b8;
        case 0x2a63bcu: goto label_2a63bc;
        case 0x2a63c0u: goto label_2a63c0;
        case 0x2a63c4u: goto label_2a63c4;
        case 0x2a63c8u: goto label_2a63c8;
        case 0x2a63ccu: goto label_2a63cc;
        case 0x2a63d0u: goto label_2a63d0;
        case 0x2a63d4u: goto label_2a63d4;
        case 0x2a63d8u: goto label_2a63d8;
        case 0x2a63dcu: goto label_2a63dc;
        case 0x2a63e0u: goto label_2a63e0;
        case 0x2a63e4u: goto label_2a63e4;
        case 0x2a63e8u: goto label_2a63e8;
        case 0x2a63ecu: goto label_2a63ec;
        case 0x2a63f0u: goto label_2a63f0;
        case 0x2a63f4u: goto label_2a63f4;
        case 0x2a63f8u: goto label_2a63f8;
        case 0x2a63fcu: goto label_2a63fc;
        case 0x2a6400u: goto label_2a6400;
        case 0x2a6404u: goto label_2a6404;
        case 0x2a6408u: goto label_2a6408;
        case 0x2a640cu: goto label_2a640c;
        case 0x2a6410u: goto label_2a6410;
        case 0x2a6414u: goto label_2a6414;
        case 0x2a6418u: goto label_2a6418;
        case 0x2a641cu: goto label_2a641c;
        case 0x2a6420u: goto label_2a6420;
        case 0x2a6424u: goto label_2a6424;
        case 0x2a6428u: goto label_2a6428;
        case 0x2a642cu: goto label_2a642c;
        case 0x2a6430u: goto label_2a6430;
        case 0x2a6434u: goto label_2a6434;
        case 0x2a6438u: goto label_2a6438;
        case 0x2a643cu: goto label_2a643c;
        case 0x2a6440u: goto label_2a6440;
        case 0x2a6444u: goto label_2a6444;
        case 0x2a6448u: goto label_2a6448;
        case 0x2a644cu: goto label_2a644c;
        case 0x2a6450u: goto label_2a6450;
        case 0x2a6454u: goto label_2a6454;
        case 0x2a6458u: goto label_2a6458;
        case 0x2a645cu: goto label_2a645c;
        case 0x2a6460u: goto label_2a6460;
        case 0x2a6464u: goto label_2a6464;
        case 0x2a6468u: goto label_2a6468;
        case 0x2a646cu: goto label_2a646c;
        case 0x2a6470u: goto label_2a6470;
        case 0x2a6474u: goto label_2a6474;
        case 0x2a6478u: goto label_2a6478;
        case 0x2a647cu: goto label_2a647c;
        case 0x2a6480u: goto label_2a6480;
        case 0x2a6484u: goto label_2a6484;
        case 0x2a6488u: goto label_2a6488;
        case 0x2a648cu: goto label_2a648c;
        case 0x2a6490u: goto label_2a6490;
        case 0x2a6494u: goto label_2a6494;
        case 0x2a6498u: goto label_2a6498;
        case 0x2a649cu: goto label_2a649c;
        case 0x2a64a0u: goto label_2a64a0;
        case 0x2a64a4u: goto label_2a64a4;
        case 0x2a64a8u: goto label_2a64a8;
        case 0x2a64acu: goto label_2a64ac;
        case 0x2a64b0u: goto label_2a64b0;
        case 0x2a64b4u: goto label_2a64b4;
        case 0x2a64b8u: goto label_2a64b8;
        case 0x2a64bcu: goto label_2a64bc;
        case 0x2a64c0u: goto label_2a64c0;
        case 0x2a64c4u: goto label_2a64c4;
        case 0x2a64c8u: goto label_2a64c8;
        case 0x2a64ccu: goto label_2a64cc;
        case 0x2a64d0u: goto label_2a64d0;
        case 0x2a64d4u: goto label_2a64d4;
        case 0x2a64d8u: goto label_2a64d8;
        case 0x2a64dcu: goto label_2a64dc;
        case 0x2a64e0u: goto label_2a64e0;
        case 0x2a64e4u: goto label_2a64e4;
        case 0x2a64e8u: goto label_2a64e8;
        case 0x2a64ecu: goto label_2a64ec;
        case 0x2a64f0u: goto label_2a64f0;
        case 0x2a64f4u: goto label_2a64f4;
        case 0x2a64f8u: goto label_2a64f8;
        case 0x2a64fcu: goto label_2a64fc;
        case 0x2a6500u: goto label_2a6500;
        case 0x2a6504u: goto label_2a6504;
        case 0x2a6508u: goto label_2a6508;
        case 0x2a650cu: goto label_2a650c;
        case 0x2a6510u: goto label_2a6510;
        case 0x2a6514u: goto label_2a6514;
        case 0x2a6518u: goto label_2a6518;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6520u: goto label_2a6520;
        case 0x2a6524u: goto label_2a6524;
        case 0x2a6528u: goto label_2a6528;
        case 0x2a652cu: goto label_2a652c;
        case 0x2a6530u: goto label_2a6530;
        case 0x2a6534u: goto label_2a6534;
        case 0x2a6538u: goto label_2a6538;
        case 0x2a653cu: goto label_2a653c;
        case 0x2a6540u: goto label_2a6540;
        case 0x2a6544u: goto label_2a6544;
        default: break;
    }

    ctx->pc = 0x2a5d60u;

label_2a5d60:
    // 0x2a5d60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2a5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2a5d64:
    // 0x2a5d64: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2a5d68:
    // 0x2a5d68: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x2a5d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
label_2a5d6c:
    // 0x2a5d6c: 0x9062a9cc  lbu         $v0, -0x5634($v1)
    ctx->pc = 0x2a5d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945228)));
label_2a5d70:
    // 0x2a5d70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d74:
    // 0x2a5d74: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2a5d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_2a5d78:
    // 0x2a5d78: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x2a5d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
label_2a5d7c:
    // 0x2a5d7c: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x2a5d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
label_2a5d80:
    // 0x2a5d80: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2a5d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
label_2a5d84:
    // 0x2a5d84: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x2a5d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
label_2a5d88:
    // 0x2a5d88: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2a5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_2a5d8c:
    // 0x2a5d8c: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x2a5d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
label_2a5d90:
    // 0x2a5d90: 0x104001e2  beqz        $v0, . + 4 + (0x1E2 << 2)
label_2a5d94:
    if (ctx->pc == 0x2A5D94u) {
        ctx->pc = 0x2A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D90u;
        // 0x2a5d94: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D98u;
        goto label_2a5d98;
    }
    ctx->pc = 0x2A5D90u;
    {
        const bool branch_taken_0x2a5d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D90u;
        // 0x2a5d94: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d90) {
            ctx->pc = 0x2A651Cu;
            goto label_2a651c;
        }
    }
    ctx->pc = 0x2A5D98u;
label_2a5d98:
    // 0x2a5d98: 0x926202dc  lbu         $v0, 0x2DC($s3)
    ctx->pc = 0x2a5d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 732)));
label_2a5d9c:
    // 0x2a5d9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2a5da0:
    if (ctx->pc == 0x2A5DA0u) {
        ctx->pc = 0x2A5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D9Cu;
        // 0x2a5da0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DA4u;
        goto label_2a5da4;
    }
    ctx->pc = 0x2A5D9Cu;
    {
        const bool branch_taken_0x2a5d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D9Cu;
        // 0x2a5da0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d9c) {
            ctx->pc = 0x2A5DD0u;
            goto label_2a5dd0;
        }
    }
    ctx->pc = 0x2A5DA4u;
label_2a5da4:
    // 0x2a5da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a5da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5da8:
    // 0x2a5da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a5dac:
    // 0x2a5dac: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a5dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a5db0:
    // 0x2a5db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5db4:
    // 0x2a5db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5db8:
    // 0x2a5db8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a5db8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a5dbc:
    // 0x2a5dbc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2a5dbcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_2a5dc0:
    // 0x2a5dc0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a5dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a5dc4:
    // 0x2a5dc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5dc8:
    // 0x2a5dc8: 0xc0da874  jal         func_36A1D0
label_2a5dcc:
    if (ctx->pc == 0x2A5DCCu) {
        ctx->pc = 0x2A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DC8u;
        // 0x2a5dcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DD0u;
        goto label_2a5dd0;
    }
    ctx->pc = 0x2A5DC8u;
    SET_GPR_U32(ctx, 31, 0x2A5DD0u);
    ctx->pc = 0x2A5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DC8u;
    // 0x2a5dcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A5DC8u, 0x2A5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DD0u;
label_2a5dd0:
    // 0x2a5dd0: 0xc0a9ba2  jal         func_2A6E88
label_2a5dd4:
    if (ctx->pc == 0x2A5DD4u) {
        ctx->pc = 0x2A5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DD0u;
        // 0x2a5dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DD8u;
        goto label_2a5dd8;
    }
    ctx->pc = 0x2A5DD0u;
    SET_GPR_U32(ctx, 31, 0x2A5DD8u);
    ctx->pc = 0x2A5DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DD0u;
    // 0x2a5dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E88u, 0x2A5DD0u, 0x2A5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DD8u;
label_2a5dd8:
    // 0x2a5dd8: 0x266902b4  addiu       $t1, $s3, 0x2B4
    ctx->pc = 0x2a5dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 692));
label_2a5ddc:
    // 0x2a5ddc: 0x8e6602b4  lw          $a2, 0x2B4($s3)
    ctx->pc = 0x2a5ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_2a5de0:
    // 0x2a5de0: 0x10c00092  beqz        $a2, . + 4 + (0x92 << 2)
label_2a5de4:
    if (ctx->pc == 0x2A5DE4u) {
        ctx->pc = 0x2A5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DE0u;
        // 0x2a5de4: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5DE8u;
        goto label_2a5de8;
    }
    ctx->pc = 0x2A5DE0u;
    {
        const bool branch_taken_0x2a5de0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DE0u;
        // 0x2a5de4: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5de0) {
            ctx->pc = 0x2A602Cu;
            goto label_2a602c;
        }
    }
    ctx->pc = 0x2A5DE8u;
label_2a5de8:
    // 0x2a5de8: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2a5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5dec:
    // 0x2a5dec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a5decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a5df0:
    // 0x2a5df0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2a5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a5df4:
    // 0x2a5df4: 0x266802bc  addiu       $t0, $s3, 0x2BC
    ctx->pc = 0x2a5df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 700));
label_2a5df8:
    // 0x2a5df8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2a5df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2a5dfc:
    // 0x2a5dfc: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2a5dfcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_2a5e00:
    // 0x2a5e00: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
label_2a5e04:
    if (ctx->pc == 0x2A5E04u) {
        ctx->pc = 0x2A5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E00u;
        // 0x2a5e04: 0x266a02c4  addiu       $t2, $s3, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 708));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E08u;
        goto label_2a5e08;
    }
    ctx->pc = 0x2A5E00u;
    {
        const bool branch_taken_0x2a5e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E00u;
        // 0x2a5e04: 0x266a02c4  addiu       $t2, $s3, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e00) {
            ctx->pc = 0x2A5E38u;
            goto label_2a5e38;
        }
    }
    ctx->pc = 0x2A5E08u;
label_2a5e08:
    // 0x2a5e08: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2a5e0c:
    // 0x2a5e0c: 0x0  nop
    ctx->pc = 0x2a5e0cu;
    // NOP
label_2a5e10:
    // 0x2a5e10: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_2a5e14:
    if (ctx->pc == 0x2A5E14u) {
        ctx->pc = 0x2A5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E10u;
        // 0x2a5e14: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E18u;
        goto label_2a5e18;
    }
    ctx->pc = 0x2A5E10u;
    {
        const bool branch_taken_0x2a5e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E10u;
        // 0x2a5e14: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e10) {
            ctx->pc = 0x2A5E2Cu;
            goto label_2a5e2c;
        }
    }
    ctx->pc = 0x2A5E18u;
label_2a5e18:
    // 0x2a5e18: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2a5e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5e1c:
    // 0x2a5e1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a5e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5e20:
    // 0x2a5e20: 0x0  nop
    ctx->pc = 0x2a5e20u;
    // NOP
label_2a5e24:
    // 0x2a5e24: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
label_2a5e28:
    if (ctx->pc == 0x2A5E28u) {
        ctx->pc = 0x2A5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E24u;
        // 0x2a5e28: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E2Cu;
        goto label_2a5e2c;
    }
    ctx->pc = 0x2A5E24u;
    {
        const bool branch_taken_0x2a5e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5e24) {
            ctx->pc = 0x2A5E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5E24u;
            // 0x2a5e28: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5E84u;
            goto label_2a5e84;
        }
    }
    ctx->pc = 0x2A5E2Cu;
label_2a5e2c:
    // 0x2a5e2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a5e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e30:
    // 0x2a5e30: 0x1485fff7  bne         $a0, $a1, . + 4 + (-0x9 << 2)
label_2a5e34:
    if (ctx->pc == 0x2A5E34u) {
        ctx->pc = 0x2A5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E30u;
        // 0x2a5e34: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E38u;
        goto label_2a5e38;
    }
    ctx->pc = 0x2A5E30u;
    {
        const bool branch_taken_0x2a5e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E30u;
        // 0x2a5e34: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e30) {
            ctx->pc = 0x2A5E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5e10;
        }
    }
    ctx->pc = 0x2A5E38u;
label_2a5e38:
    // 0x2a5e38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2a5e3c:
    // 0x2a5e3c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a5e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2a5e40:
    // 0x2a5e40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2a5e44:
    // 0x2a5e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a5e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a5e48:
    // 0x2a5e48: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
label_2a5e4c:
    if (ctx->pc == 0x2A5E4Cu) {
        ctx->pc = 0x2A5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E48u;
        // 0x2a5e4c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E50u;
        goto label_2a5e50;
    }
    ctx->pc = 0x2A5E48u;
    {
        const bool branch_taken_0x2a5e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E48u;
        // 0x2a5e4c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e48) {
            ctx->pc = 0x2A5ED4u;
            goto label_2a5ed4;
        }
    }
    ctx->pc = 0x2A5E50u;
label_2a5e50:
    // 0x2a5e50: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a5e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2a5e54:
    // 0x2a5e54: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_2a5e58:
    // 0x2a5e58: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a5e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2a5e5c:
    // 0x2a5e5c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a5e60:
    // 0x2a5e60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a5e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a5e64:
    // 0x2a5e64: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2a5e64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2a5e68:
    // 0x2a5e68: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2a5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a5e6c:
    // 0x2a5e6c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2a5e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a5e70:
    // 0x2a5e70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a5e74:
    if (ctx->pc == 0x2A5E74u) {
        ctx->pc = 0x2A5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E70u;
        // 0x2a5e74: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E78u;
        goto label_2a5e78;
    }
    ctx->pc = 0x2A5E70u;
    {
        const bool branch_taken_0x2a5e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E70u;
        // 0x2a5e74: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e70) {
            ctx->pc = 0x2A5E9Cu;
            goto label_2a5e9c;
        }
    }
    ctx->pc = 0x2A5E78u;
label_2a5e78:
    // 0x2a5e78: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2a5e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a5e7c:
    // 0x2a5e7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a5e80:
    if (ctx->pc == 0x2A5E80u) {
        ctx->pc = 0x2A5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E7Cu;
        // 0x2a5e80: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E84u;
        goto label_2a5e84;
    }
    ctx->pc = 0x2A5E7Cu;
    {
        const bool branch_taken_0x2a5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E7Cu;
        // 0x2a5e80: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e7c) {
            ctx->pc = 0x2A5EA4u;
            goto label_2a5ea4;
        }
    }
    ctx->pc = 0x2A5E84u;
label_2a5e84:
    // 0x2a5e84: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_2a5e88:
    // 0x2a5e88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a5e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2a5e8c:
    // 0x2a5e8c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a5e90:
    // 0x2a5e90: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2a5e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a5e94:
    // 0x2a5e94: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2a5e98:
    if (ctx->pc == 0x2A5E98u) {
        ctx->pc = 0x2A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E94u;
        // 0x2a5e98: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5E9Cu;
        goto label_2a5e9c;
    }
    ctx->pc = 0x2A5E94u;
    {
        const bool branch_taken_0x2a5e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E94u;
        // 0x2a5e98: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e94) {
            ctx->pc = 0x2A5E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5e40;
        }
    }
    ctx->pc = 0x2A5E9Cu;
label_2a5e9c:
    // 0x2a5e9c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2a5e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2a5ea0:
    // 0x2a5ea0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a5ea4:
    // 0x2a5ea4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a5ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5ea8:
    // 0x2a5ea8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2a5ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a5eac:
    // 0x2a5eac: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x2a5eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_2a5eb0:
    // 0x2a5eb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5eb4:
    // 0x2a5eb4: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2a5eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_2a5eb8:
    // 0x2a5eb8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5ebc:
    // 0x2a5ebc: 0xe5210010  swc1        $f1, 0x10($t1)
    ctx->pc = 0x2a5ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_2a5ec0:
    // 0x2a5ec0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a5ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5ec4:
    // 0x2a5ec4: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x2a5ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_2a5ec8:
    // 0x2a5ec8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2a5ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5ecc:
    // 0x2a5ecc: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2a5ed0:
    if (ctx->pc == 0x2A5ED0u) {
        ctx->pc = 0x2A5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5ECCu;
        // 0x2a5ed0: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5ED4u;
        goto label_2a5ed4;
    }
    ctx->pc = 0x2A5ECCu;
    {
        const bool branch_taken_0x2a5ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5ECCu;
        // 0x2a5ed0: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ecc) {
            ctx->pc = 0x2A6084u;
            goto label_2a6084;
        }
    }
    ctx->pc = 0x2A5ED4u;
label_2a5ed4:
    // 0x2a5ed4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_2a5ed8:
    // 0x2a5ed8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a5ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2a5edc:
    // 0x2a5edc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a5edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2a5ee0:
    // 0x2a5ee0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a5ee4:
    // 0x2a5ee4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a5ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a5ee8:
    // 0x2a5ee8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2a5ee8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2a5eec:
    // 0x2a5eec: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2a5eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2a5ef0:
    // 0x2a5ef0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a5ef4:
    if (ctx->pc == 0x2A5EF4u) {
        ctx->pc = 0x2A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF0u;
        // 0x2a5ef4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5EF8u;
        goto label_2a5ef8;
    }
    ctx->pc = 0x2A5EF0u;
    {
        const bool branch_taken_0x2a5ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF0u;
        // 0x2a5ef4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ef0) {
            ctx->pc = 0x2A5F00u;
            goto label_2a5f00;
        }
    }
    ctx->pc = 0x2A5EF8u;
label_2a5ef8:
    // 0x2a5ef8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a5efc:
    if (ctx->pc == 0x2A5EFCu) {
        ctx->pc = 0x2A5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF8u;
        // 0x2a5efc: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F00u;
        goto label_2a5f00;
    }
    ctx->pc = 0x2A5EF8u;
    {
        const bool branch_taken_0x2a5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF8u;
        // 0x2a5efc: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ef8) {
            ctx->pc = 0x2A5F04u;
            goto label_2a5f04;
        }
    }
    ctx->pc = 0x2A5F00u;
label_2a5f00:
    // 0x2a5f00: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2a5f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a5f04:
    // 0x2a5f04: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2a5f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a5f08:
    // 0x2a5f08: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a5f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2a5f0c:
    // 0x2a5f0c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_2a5f10:
    // 0x2a5f10: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2a5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2a5f14:
    // 0x2a5f14: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a5f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2a5f18:
    // 0x2a5f18: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2a5f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a5f1c:
    // 0x2a5f1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a5f20:
    // 0x2a5f20: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a5f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a5f24:
    // 0x2a5f24: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2a5f24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_2a5f28:
    // 0x2a5f28: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2a5f28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a5f2c:
    // 0x2a5f2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2a5f30:
    if (ctx->pc == 0x2A5F30u) {
        ctx->pc = 0x2A5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F2Cu;
        // 0x2a5f30: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F34u;
        goto label_2a5f34;
    }
    ctx->pc = 0x2A5F2Cu;
    {
        const bool branch_taken_0x2a5f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F2Cu;
        // 0x2a5f30: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f2c) {
            ctx->pc = 0x2A5F40u;
            goto label_2a5f40;
        }
    }
    ctx->pc = 0x2A5F34u;
label_2a5f34:
    // 0x2a5f34: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2a5f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2a5f38:
    // 0x2a5f38: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a5f3c:
    if (ctx->pc == 0x2A5F3Cu) {
        ctx->pc = 0x2A5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F38u;
        // 0x2a5f3c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F40u;
        goto label_2a5f40;
    }
    ctx->pc = 0x2A5F38u;
    {
        const bool branch_taken_0x2a5f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F38u;
        // 0x2a5f3c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f38) {
            ctx->pc = 0x2A5F48u;
            goto label_2a5f48;
        }
    }
    ctx->pc = 0x2A5F40u;
label_2a5f40:
    // 0x2a5f40: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2a5f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2a5f44:
    // 0x2a5f44: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2a5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2a5f48:
    // 0x2a5f48: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2a5f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5f4c:
    // 0x2a5f4c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2a5f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a5f50:
    // 0x2a5f50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a5f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5f54:
    // 0x2a5f54: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a5f54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2a5f58:
    // 0x2a5f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a5f5c:
    // 0x2a5f5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a5f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2a5f60:
    // 0x2a5f60: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2a5f60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5f64:
    // 0x2a5f64: 0x0  nop
    ctx->pc = 0x2a5f64u;
    // NOP
label_2a5f68:
    // 0x2a5f68: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2a5f6c:
    if (ctx->pc == 0x2A5F6Cu) {
        ctx->pc = 0x2A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F68u;
        // 0x2a5f6c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5F70u;
        goto label_2a5f70;
    }
    ctx->pc = 0x2A5F68u;
    {
        const bool branch_taken_0x2a5f68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F68u;
        // 0x2a5f6c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f68) {
            ctx->pc = 0x2A5F7Cu;
            goto label_2a5f7c;
        }
    }
    ctx->pc = 0x2A5F70u;
label_2a5f70:
    // 0x2a5f70: 0x0  nop
    ctx->pc = 0x2a5f70u;
    // NOP
label_2a5f74:
    // 0x2a5f74: 0x0  nop
    ctx->pc = 0x2a5f74u;
    // NOP
label_2a5f78:
    // 0x2a5f78: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2a5f78u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2a5f7c:
    // 0x2a5f7c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2a5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a5f80:
    // 0x2a5f80: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2a5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2a5f84:
    // 0x2a5f84: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2a5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a5f88:
    // 0x2a5f88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5f8c:
    // 0x2a5f8c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5f90:
    // 0x2a5f90: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a5f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2a5f94:
    // 0x2a5f94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a5f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2a5f98:
    // 0x2a5f98: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2a5f98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_2a5f9c:
    // 0x2a5f9c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2a5f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2a5fa0:
    // 0x2a5fa0: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2a5fa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2a5fa4:
    // 0x2a5fa4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a5fa8:
    // 0x2a5fa8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2a5fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2a5fac:
    // 0x2a5fac: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2a5facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2a5fb0:
    // 0x2a5fb0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5fb4:
    // 0x2a5fb4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5fb8:
    // 0x2a5fb8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a5fb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a5fbc:
    // 0x2a5fbc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a5fbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2a5fc0:
    // 0x2a5fc0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2a5fc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a5fc4:
    // 0x2a5fc4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2a5fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2a5fc8:
    // 0x2a5fc8: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x2a5fc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_2a5fcc:
    // 0x2a5fcc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a5fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5fd0:
    // 0x2a5fd0: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2a5fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_2a5fd4:
    // 0x2a5fd4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a5fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a5fd8:
    // 0x2a5fd8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a5fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5fdc:
    // 0x2a5fdc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a5fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5fe0:
    // 0x2a5fe0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a5fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a5fe4:
    // 0x2a5fe4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a5fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2a5fe8:
    // 0x2a5fe8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a5fe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2a5fec:
    // 0x2a5fec: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2a5fecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2a5ff0:
    // 0x2a5ff0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a5ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2a5ff4:
    // 0x2a5ff4: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2a5ff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_2a5ff8:
    // 0x2a5ff8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2a5ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2a5ffc:
    // 0x2a5ffc: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2a5ffcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a6000:
    // 0x2a6000: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2a6000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2a6004:
    // 0x2a6004: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2a6004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6008:
    // 0x2a6008: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a600c:
    // 0x2a600c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a600cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2a6010:
    // 0x2a6010: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a6010u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2a6014:
    // 0x2a6014: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2a6014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a6018:
    // 0x2a6018: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2a6018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2a601c:
    // 0x2a601c: 0xe5240010  swc1        $f4, 0x10($t1)
    ctx->pc = 0x2a601cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_2a6020:
    // 0x2a6020: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a6020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6024:
    // 0x2a6024: 0x10000016  b           . + 4 + (0x16 << 2)
label_2a6028:
    if (ctx->pc == 0x2A6028u) {
        ctx->pc = 0x2A6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6024u;
        // 0x2a6028: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A602Cu;
        goto label_2a602c;
    }
    ctx->pc = 0x2A6024u;
    {
        const bool branch_taken_0x2a6024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6024u;
        // 0x2a6028: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6024) {
            ctx->pc = 0x2A6080u;
            goto label_2a6080;
        }
    }
    ctx->pc = 0x2A602Cu;
label_2a602c:
    // 0x2a602c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a6030:
    // 0x2a6030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6034:
    // 0x2a6034: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2a6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2a6038:
    // 0x2a6038: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a6038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2a603c:
    // 0x2a603c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a6040:
    // 0x2a6040: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a6040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a6044:
    // 0x2a6044: 0x266202bc  addiu       $v0, $s3, 0x2BC
    ctx->pc = 0x2a6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 700));
label_2a6048:
    // 0x2a6048: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a6048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2a604c:
    // 0x2a604c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a604cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6050:
    // 0x2a6050: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a6050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2a6054:
    // 0x2a6054: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a6054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2a6058:
    // 0x2a6058: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a6058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a605c:
    // 0x2a605c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6060:
    // 0x2a6060: 0xe66002bc  swc1        $f0, 0x2BC($s3)
    ctx->pc = 0x2a6060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 700), bits); }
label_2a6064:
    // 0x2a6064: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a6068:
    // 0x2a6068: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a606c:
    // 0x2a606c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6070:
    // 0x2a6070: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2a6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6074:
    // 0x2a6074: 0xe66002c4  swc1        $f0, 0x2C4($s3)
    ctx->pc = 0x2a6074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 708), bits); }
label_2a6078:
    // 0x2a6078: 0xe66202c8  swc1        $f2, 0x2C8($s3)
    ctx->pc = 0x2a6078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 712), bits); }
label_2a607c:
    // 0x2a607c: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a607cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2a6080:
    // 0x2a6080: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2a6080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a6084:
    // 0x2a6084: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a6084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6088:
    // 0x2a6088: 0x926202dd  lbu         $v0, 0x2DD($s3)
    ctx->pc = 0x2a6088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 733)));
label_2a608c:
    // 0x2a608c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a608cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a6090:
    // 0x2a6090: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a6090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6094:
    // 0x2a6094: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_2a6098:
    if (ctx->pc == 0x2A6098u) {
        ctx->pc = 0x2A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6094u;
        // 0x2a6098: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A609Cu;
        goto label_2a609c;
    }
    ctx->pc = 0x2A6094u;
    {
        const bool branch_taken_0x2a6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6094u;
        // 0x2a6098: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6094) {
            ctx->pc = 0x2A648Cu;
            goto label_2a648c;
        }
    }
    ctx->pc = 0x2A609Cu;
label_2a609c:
    // 0x2a609c: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x2a609cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_2a60a0:
    // 0x2a60a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2a60a4:
    if (ctx->pc == 0x2A60A4u) {
        ctx->pc = 0x2A60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60A0u;
        // 0x2a60a4: 0x8e640298  lw          $a0, 0x298($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A60A8u;
        goto label_2a60a8;
    }
    ctx->pc = 0x2A60A0u;
    {
        const bool branch_taken_0x2a60a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a60a0) {
            ctx->pc = 0x2A60A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A60A0u;
            // 0x2a60a4: 0x8e640298  lw          $a0, 0x298($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A60BCu;
            goto label_2a60bc;
        }
    }
    ctx->pc = 0x2A60A8u;
label_2a60a8:
    // 0x2a60a8: 0x8e620298  lw          $v0, 0x298($s3)
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 664)));
label_2a60ac:
    // 0x2a60ac: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x2a60acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_2a60b0:
    // 0x2a60b0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a60b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a60b4:
    // 0x2a60b4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2a60b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_2a60b8:
    // 0x2a60b8: 0x8e640298  lw          $a0, 0x298($s3)
    ctx->pc = 0x2a60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 664)));
label_2a60bc:
    // 0x2a60bc: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2a60c0:
    // 0x2a60c0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a60c4:
    // 0x2a60c4: 0x40f809  jalr        $v0
label_2a60c8:
    if (ctx->pc == 0x2A60C8u) {
        ctx->pc = 0x2A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60C4u;
        // 0x2a60c8: 0x3c16004c  lui         $s6, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A60CCu;
        goto label_2a60cc;
    }
    ctx->pc = 0x2A60C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A60CCu);
        ctx->pc = 0x2A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60C4u;
        // 0x2a60c8: 0x3c16004c  lui         $s6, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A60C4u, 0x2A60CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A60CCu;
label_2a60cc:
    // 0x2a60cc: 0x8e6402a4  lw          $a0, 0x2A4($s3)
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 676)));
label_2a60d0:
    // 0x2a60d0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2a60d4:
    if (ctx->pc == 0x2A60D4u) {
        ctx->pc = 0x2A60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60D0u;
        // 0x2a60d4: 0x26c22390  addiu       $v0, $s6, 0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A60D8u;
        goto label_2a60d8;
    }
    ctx->pc = 0x2A60D0u;
    {
        const bool branch_taken_0x2a60d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60D0u;
        // 0x2a60d4: 0x26c22390  addiu       $v0, $s6, 0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a60d0) {
            ctx->pc = 0x2A60F4u;
            goto label_2a60f4;
        }
    }
    ctx->pc = 0x2A60D8u;
label_2a60d8:
    // 0x2a60d8: 0x9043000a  lbu         $v1, 0xA($v0)
    ctx->pc = 0x2a60d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_2a60dc:
    // 0x2a60dc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2a60e0:
    if (ctx->pc == 0x2A60E0u) {
        ctx->pc = 0x2A60E4u;
        goto label_2a60e4;
    }
    ctx->pc = 0x2A60DCu;
    {
        const bool branch_taken_0x2a60dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a60dc) {
            ctx->pc = 0x2A60F4u;
            goto label_2a60f4;
        }
    }
    ctx->pc = 0x2A60E4u;
label_2a60e4:
    // 0x2a60e4: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x2a60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_2a60e8:
    // 0x2a60e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a60ec:
    // 0x2a60ec: 0x40f809  jalr        $v0
label_2a60f0:
    if (ctx->pc == 0x2A60F0u) {
        ctx->pc = 0x2A60F4u;
        goto label_2a60f4;
    }
    ctx->pc = 0x2A60ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A60F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A60ECu, 0x2A60F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A60F4u;
label_2a60f4:
    // 0x2a60f4: 0xc0b1488  jal         func_2C5220
label_2a60f8:
    if (ctx->pc == 0x2A60F8u) {
        ctx->pc = 0x2A60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60F4u;
        // 0x2a60f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A60FCu;
        goto label_2a60fc;
    }
    ctx->pc = 0x2A60F4u;
    SET_GPR_U32(ctx, 31, 0x2A60FCu);
    ctx->pc = 0x2A60F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A60F4u;
    // 0x2a60f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2A60F4u, 0x2A60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60FCu;
label_2a60fc:
    // 0x2a60fc: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2a60fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a6100:
    // 0x2a6100: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a6100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2a6104:
    // 0x2a6104: 0x8c52a300  lw          $s2, -0x5D00($v0)
    ctx->pc = 0x2a6104u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
label_2a6108:
    // 0x2a6108: 0xc0b1488  jal         func_2C5220
label_2a610c:
    if (ctx->pc == 0x2A610Cu) {
        ctx->pc = 0x2A610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6108u;
        // 0x2a610c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6110u;
        goto label_2a6110;
    }
    ctx->pc = 0x2A6108u;
    SET_GPR_U32(ctx, 31, 0x2A6110u);
    ctx->pc = 0x2A610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6108u;
    // 0x2a610c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2A6108u, 0x2A6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6110u;
label_2a6110:
    // 0x2a6110: 0xc0f6a96  jal         func_3DAA58
label_2a6114:
    if (ctx->pc == 0x2A6114u) {
        ctx->pc = 0x2A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6110u;
        // 0x2a6114: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6118u;
        goto label_2a6118;
    }
    ctx->pc = 0x2A6110u;
    SET_GPR_U32(ctx, 31, 0x2A6118u);
    ctx->pc = 0x2A6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6110u;
    // 0x2a6114: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2A6110u, 0x2A6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6118u;
label_2a6118:
    // 0x2a6118: 0xc0f6a96  jal         func_3DAA58
label_2a611c:
    if (ctx->pc == 0x2A611Cu) {
        ctx->pc = 0x2A611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6118u;
        // 0x2a611c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6120u;
        goto label_2a6120;
    }
    ctx->pc = 0x2A6118u;
    SET_GPR_U32(ctx, 31, 0x2A6120u);
    ctx->pc = 0x2A611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6118u;
    // 0x2a611c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2A6118u, 0x2A6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6120u;
label_2a6120:
    // 0x2a6120: 0x8e500100  lw          $s0, 0x100($s2)
    ctx->pc = 0x2a6120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_2a6124:
    // 0x2a6124: 0xc0f70ce  jal         func_3DC338
label_2a6128:
    if (ctx->pc == 0x2A6128u) {
        ctx->pc = 0x2A6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6124u;
        // 0x2a6128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A612Cu;
        goto label_2a612c;
    }
    ctx->pc = 0x2A6124u;
    SET_GPR_U32(ctx, 31, 0x2A612Cu);
    ctx->pc = 0x2A6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6124u;
    // 0x2a6128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2A6124u, 0x2A612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A612Cu;
label_2a612c:
    // 0x2a612c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a6130:
    if (ctx->pc == 0x2A6130u) {
        ctx->pc = 0x2A6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A612Cu;
        // 0x2a6130: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6134u;
        goto label_2a6134;
    }
    ctx->pc = 0x2A612Cu;
    {
        const bool branch_taken_0x2a612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A612Cu;
        // 0x2a6130: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a612c) {
            ctx->pc = 0x2A6140u;
            goto label_2a6140;
        }
    }
    ctx->pc = 0x2A6134u;
label_2a6134:
    // 0x2a6134: 0xc0c4900  jal         func_312400
label_2a6138:
    if (ctx->pc == 0x2A6138u) {
        ctx->pc = 0x2A6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6134u;
        // 0x2a6138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A613Cu;
        goto label_2a613c;
    }
    ctx->pc = 0x2A6134u;
    SET_GPR_U32(ctx, 31, 0x2A613Cu);
    ctx->pc = 0x2A6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6134u;
    // 0x2a6138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2A6134u, 0x2A613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A613Cu;
label_2a613c:
    // 0x2a613c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x2a613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2a6140:
    // 0x2a6140: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2a6140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6144:
    // 0x2a6144: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2a6144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6148:
    // 0x2a6148: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2a6148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a614c:
    // 0x2a614c: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x2a614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2a6150:
    // 0x2a6150: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2a6150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6154:
    // 0x2a6154: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2a6154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6158:
    // 0x2a6158: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2a6158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a615c:
    // 0x2a615c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2a615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2a6160:
    // 0x2a6160: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2a6160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6164:
    // 0x2a6164: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2a6164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6168:
    // 0x2a6168: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a6168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a616c:
    // 0x2a616c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2a616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2a6170:
    // 0x2a6170: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2a6170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a6174:
    // 0x2a6174: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2a6174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6178:
    // 0x2a6178: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x2a6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a617c:
    // 0x2a617c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_2a6180:
    // 0x2a6180: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2a6180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2a6184:
    // 0x2a6184: 0x0  nop
    ctx->pc = 0x2a6184u;
    // NOP
label_2a6188:
    // 0x2a6188: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x2a6188u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_2a618c:
    // 0x2a618c: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x2a618cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2a6190:
    // 0x2a6190: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2a6190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6194:
    // 0x2a6194: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2a6194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2a6198:
    // 0x2a6198: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a6198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a619c:
    // 0x2a619c: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x2a619cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a61a0:
    // 0x2a61a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a61a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a61a4:
    // 0x2a61a4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2a61a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2a61a8:
    // 0x2a61a8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2a61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a61ac:
    // 0x2a61ac: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x2a61acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a61b0:
    // 0x2a61b0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2a61b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2a61b4:
    // 0x2a61b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a61b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a61b8:
    // 0x2a61b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a61b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a61bc:
    // 0x2a61bc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2a61bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a61c0:
    // 0x2a61c0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2a61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a61c4:
    // 0x2a61c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2a61c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a61c8:
    // 0x2a61c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2a61c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a61cc:
    // 0x2a61cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2a61ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a61d0:
    // 0x2a61d0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2a61d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a61d4:
    // 0x2a61d4: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2a61d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a61d8:
    // 0x2a61d8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a61d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a61dc:
    // 0x2a61dc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a61e0:
    // 0x2a61e0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2a61e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a61e4:
    // 0x2a61e4: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x2a61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a61e8:
    // 0x2a61e8: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2a61e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2a61ec:
    // 0x2a61ec: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a61ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2a61f0:
    // 0x2a61f0: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2a61f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2a61f4:
    // 0x2a61f4: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x2a61f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2a61f8:
    // 0x2a61f8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2a61f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2a61fc:
    // 0x2a61fc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2a61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6200:
    // 0x2a6200: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2a6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6204:
    // 0x2a6204: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2a6204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6208:
    // 0x2a6208: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x2a6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a620c:
    // 0x2a620c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a6210:
    // 0x2a6210: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2a6210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2a6214:
    // 0x2a6214: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2a6214u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2a6218:
    // 0x2a6218: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a6218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a621c:
    // 0x2a621c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6220:
    // 0x2a6220: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2a6220u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a6224:
    // 0x2a6224: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6228:
    // 0x2a6228: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a622c:
    // 0x2a622c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2a622cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2a6230:
    // 0x2a6230: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2a6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6234:
    // 0x2a6234: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2a6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6238:
    // 0x2a6238: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2a6238u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a623c:
    // 0x2a623c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2a623cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_2a6240:
    // 0x2a6240: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x2a6240u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
label_2a6244:
    // 0x2a6244: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2a6244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2a6248:
    // 0x2a6248: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a6248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a624c:
    // 0x2a624c: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x2a624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6250:
    // 0x2a6250: 0x0  nop
    ctx->pc = 0x2a6250u;
    // NOP
label_2a6254:
    // 0x2a6254: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x2a6254u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
label_2a6258:
    // 0x2a6258: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x2a6258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2a625c:
    // 0x2a625c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2a625cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2a6260:
    // 0x2a6260: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2a6260u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2a6264:
    // 0x2a6264: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a6264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a6268:
    // 0x2a6268: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2a6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a626c:
    // 0x2a626c: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x2a626cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2a6270:
    // 0x2a6270: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2a6270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6274:
    // 0x2a6274: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2a6274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2a6278:
    // 0x2a6278: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a6278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a627c:
    // 0x2a627c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2a627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6280:
    // 0x2a6280: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2a6280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6284:
    // 0x2a6284: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2a6284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a6288:
    // 0x2a6288: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2a6288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a628c:
    // 0x2a628c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2a628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a6290:
    // 0x2a6290: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a6290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6294:
    // 0x2a6294: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2a6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6298:
    // 0x2a6298: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2a6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a629c:
    // 0x2a629c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x2a629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a62a0:
    // 0x2a62a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a62a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2a62a4:
    // 0x2a62a4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2a62a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2a62a8:
    // 0x2a62a8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x2a62a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2a62ac:
    // 0x2a62ac: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x2a62acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2a62b0:
    // 0x2a62b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2a62b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2a62b4:
    // 0x2a62b4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2a62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a62b8:
    // 0x2a62b8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2a62b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a62bc:
    // 0x2a62bc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2a62bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a62c0:
    // 0x2a62c0: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x2a62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a62c4:
    // 0x2a62c4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a62c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2a62c8:
    // 0x2a62c8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2a62c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2a62cc:
    // 0x2a62cc: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2a62ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a62d0:
    // 0x2a62d0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a62d4:
    // 0x2a62d4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a62d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a62d8:
    // 0x2a62d8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2a62d8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a62dc:
    // 0x2a62dc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a62dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a62e0:
    // 0x2a62e0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a62e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a62e4:
    // 0x2a62e4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2a62e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2a62e8:
    // 0x2a62e8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2a62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a62ec:
    // 0x2a62ec: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2a62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a62f0:
    // 0x2a62f0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2a62f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a62f4:
    // 0x2a62f4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2a62f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_2a62f8:
    // 0x2a62f8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2a62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a62fc:
    // 0x2a62fc: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x2a62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6300:
    // 0x2a6300: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x2a6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6304:
    // 0x2a6304: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2a6304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2a6308:
    // 0x2a6308: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2a6308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a630c:
    // 0x2a630c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2a630cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2a6310:
    // 0x2a6310: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2a6310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2a6314:
    // 0x2a6314: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a6314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2a6318:
    // 0x2a6318: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a631c:
    // 0x2a631c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2a631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6320:
    // 0x2a6320: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2a6320u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a6324:
    // 0x2a6324: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a6324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6328:
    // 0x2a6328: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2a6328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a632c:
    // 0x2a632c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2a632cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2a6330:
    // 0x2a6330: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2a6330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6334:
    // 0x2a6334: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2a6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6338:
    // 0x2a6338: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2a6338u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2a633c:
    // 0x2a633c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a633cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2a6340:
    // 0x2a6340: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2a6340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6344:
    // 0x2a6344: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2a6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a6348:
    // 0x2a6348: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2a6348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a634c:
    // 0x2a634c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2a634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2a6350:
    // 0x2a6350: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a6350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a6354:
    // 0x2a6354: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2a6354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a6358:
    // 0x2a6358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a635c:
    // 0x2a635c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a635cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6360:
    // 0x2a6360: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2a6360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2a6364:
    // 0x2a6364: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2a6364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2a6368:
    // 0x2a6368: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x2a6368u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2a636c:
    // 0x2a636c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2a636cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a6370:
    // 0x2a6370: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a6370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2a6374:
    // 0x2a6374: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2a6374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6378:
    // 0x2a6378: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2a6378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a637c:
    // 0x2a637c: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2a637cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2a6380:
    // 0x2a6380: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x2a6380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_2a6384:
    // 0x2a6384: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x2a6384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_2a6388:
    // 0x2a6388: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2a6388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2a638c:
    // 0x2a638c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2a638cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2a6390:
    // 0x2a6390: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x2a6390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2a6394:
    // 0x2a6394: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x2a6394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a6398:
    // 0x2a6398: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2a6398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2a639c:
    // 0x2a639c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2a639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a63a0:
    // 0x2a63a0: 0x26640268  addiu       $a0, $s3, 0x268
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 616));
label_2a63a4:
    // 0x2a63a4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2a63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a63a8:
    // 0x2a63a8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2a63a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a63ac:
    // 0x2a63ac: 0x0  nop
    ctx->pc = 0x2a63acu;
    // NOP
label_2a63b0:
    // 0x2a63b0: 0x0  nop
    ctx->pc = 0x2a63b0u;
    // NOP
label_2a63b4:
    // 0x2a63b4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2a63b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_2a63b8:
    // 0x2a63b8: 0x0  nop
    ctx->pc = 0x2a63b8u;
    // NOP
label_2a63bc:
    // 0x2a63bc: 0x0  nop
    ctx->pc = 0x2a63bcu;
    // NOP
label_2a63c0:
    // 0x2a63c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2a63c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2a63c4:
    // 0x2a63c4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2a63c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_2a63c8:
    // 0x2a63c8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2a63c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2a63cc:
    // 0x2a63cc: 0xe6610268  swc1        $f1, 0x268($s3)
    ctx->pc = 0x2a63ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 616), bits); }
label_2a63d0:
    // 0x2a63d0: 0xe660026c  swc1        $f0, 0x26C($s3)
    ctx->pc = 0x2a63d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 620), bits); }
label_2a63d4:
    // 0x2a63d4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2a63d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2a63d8:
    // 0x2a63d8: 0xc0a9ce4  jal         func_2A7390
label_2a63dc:
    if (ctx->pc == 0x2A63DCu) {
        ctx->pc = 0x2A63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63D8u;
        // 0x2a63dc: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63E0u;
        goto label_2a63e0;
    }
    ctx->pc = 0x2A63D8u;
    SET_GPR_U32(ctx, 31, 0x2A63E0u);
    ctx->pc = 0x2A63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63D8u;
    // 0x2a63dc: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7390u, 0x2A63D8u, 0x2A63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63E0u;
label_2a63e0:
    // 0x2a63e0: 0x8e6602a8  lw          $a2, 0x2A8($s3)
    ctx->pc = 0x2a63e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 680)));
label_2a63e4:
    // 0x2a63e4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2a63e8:
    if (ctx->pc == 0x2A63E8u) {
        ctx->pc = 0x2A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63E4u;
        // 0x2a63e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63ECu;
        goto label_2a63ec;
    }
    ctx->pc = 0x2A63E4u;
    {
        const bool branch_taken_0x2a63e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63E4u;
        // 0x2a63e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63e4) {
            ctx->pc = 0x2A63F4u;
            goto label_2a63f4;
        }
    }
    ctx->pc = 0x2A63ECu;
label_2a63ec:
    // 0x2a63ec: 0xc0a9be0  jal         func_2A6F80
label_2a63f0:
    if (ctx->pc == 0x2A63F0u) {
        ctx->pc = 0x2A63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63ECu;
        // 0x2a63f0: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63F4u;
        goto label_2a63f4;
    }
    ctx->pc = 0x2A63ECu;
    SET_GPR_U32(ctx, 31, 0x2A63F4u);
    ctx->pc = 0x2A63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63ECu;
    // 0x2a63f0: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F80u, 0x2A63ECu, 0x2A63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63F4u;
label_2a63f4:
    // 0x2a63f4: 0x8e6602ac  lw          $a2, 0x2AC($s3)
    ctx->pc = 0x2a63f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
label_2a63f8:
    // 0x2a63f8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_2a63fc:
    if (ctx->pc == 0x2A63FCu) {
        ctx->pc = 0x2A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63F8u;
        // 0x2a63fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6400u;
        goto label_2a6400;
    }
    ctx->pc = 0x2A63F8u;
    {
        const bool branch_taken_0x2a63f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63F8u;
        // 0x2a63fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63f8) {
            ctx->pc = 0x2A6418u;
            goto label_2a6418;
        }
    }
    ctx->pc = 0x2A6400u;
label_2a6400:
    // 0x2a6400: 0x926202b0  lbu         $v0, 0x2B0($s3)
    ctx->pc = 0x2a6400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 688)));
label_2a6404:
    // 0x2a6404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a6408:
    if (ctx->pc == 0x2A6408u) {
        ctx->pc = 0x2A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6404u;
        // 0x2a6408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A640Cu;
        goto label_2a640c;
    }
    ctx->pc = 0x2A6404u;
    {
        const bool branch_taken_0x2a6404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6404u;
        // 0x2a6408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6404) {
            ctx->pc = 0x2A6418u;
            goto label_2a6418;
        }
    }
    ctx->pc = 0x2A640Cu;
label_2a640c:
    // 0x2a640c: 0xc0a9be0  jal         func_2A6F80
label_2a6410:
    if (ctx->pc == 0x2A6410u) {
        ctx->pc = 0x2A6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A640Cu;
        // 0x2a6410: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6414u;
        goto label_2a6414;
    }
    ctx->pc = 0x2A640Cu;
    SET_GPR_U32(ctx, 31, 0x2A6414u);
    ctx->pc = 0x2A6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A640Cu;
    // 0x2a6410: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F80u, 0x2A640Cu, 0x2A6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6414u;
label_2a6414:
    // 0x2a6414: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a6414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6418:
    // 0x2a6418: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x2a6418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2a641c:
    // 0x2a641c: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x2a641cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a6420:
    // 0x2a6420: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x2a6420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a6424:
    // 0x2a6424: 0x0  nop
    ctx->pc = 0x2a6424u;
    // NOP
label_2a6428:
    // 0x2a6428: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a6428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a642c:
    // 0x2a642c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2a642cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a6430:
    // 0x2a6430: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2a6430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2a6434:
    // 0x2a6434: 0x0  nop
    ctx->pc = 0x2a6434u;
    // NOP
label_2a6438:
    // 0x2a6438: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2a6438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a643c:
    // 0x2a643c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2a6440:
    if (ctx->pc == 0x2A6440u) {
        ctx->pc = 0x2A6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A643Cu;
        // 0x2a6440: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6444u;
        goto label_2a6444;
    }
    ctx->pc = 0x2A643Cu;
    {
        const bool branch_taken_0x2a643c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A643Cu;
        // 0x2a6440: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a643c) {
            ctx->pc = 0x2A644Cu;
            goto label_2a644c;
        }
    }
    ctx->pc = 0x2A6444u;
label_2a6444:
    // 0x2a6444: 0xc0a9be0  jal         func_2A6F80
label_2a6448:
    if (ctx->pc == 0x2A6448u) {
        ctx->pc = 0x2A6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6444u;
        // 0x2a6448: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A644Cu;
        goto label_2a644c;
    }
    ctx->pc = 0x2A6444u;
    SET_GPR_U32(ctx, 31, 0x2A644Cu);
    ctx->pc = 0x2A6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6444u;
    // 0x2a6448: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F80u, 0x2A6444u, 0x2A644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A644Cu;
label_2a644c:
    // 0x2a644c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a644cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a6450:
    // 0x2a6450: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2a6450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2a6454:
    // 0x2a6454: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2a6458:
    if (ctx->pc == 0x2A6458u) {
        ctx->pc = 0x2A6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6454u;
        // 0x2a6458: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A645Cu;
        goto label_2a645c;
    }
    ctx->pc = 0x2A6454u;
    {
        const bool branch_taken_0x2a6454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6454u;
        // 0x2a6458: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6454) {
            ctx->pc = 0x2A6438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6438;
        }
    }
    ctx->pc = 0x2A645Cu;
label_2a645c:
    // 0x2a645c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a645cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a6460:
    // 0x2a6460: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x2a6460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_2a6464:
    // 0x2a6464: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2a6468:
    if (ctx->pc == 0x2A6468u) {
        ctx->pc = 0x2A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6464u;
        // 0x2a6468: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A646Cu;
        goto label_2a646c;
    }
    ctx->pc = 0x2A6464u;
    {
        const bool branch_taken_0x2a6464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6464u;
        // 0x2a6468: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6464) {
            ctx->pc = 0x2A6428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6428;
        }
    }
    ctx->pc = 0x2A646Cu;
label_2a646c:
    // 0x2a646c: 0x26c22390  addiu       $v0, $s6, 0x2390
    ctx->pc = 0x2a646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9104));
label_2a6470:
    // 0x2a6470: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x2a6470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_2a6474:
    // 0x2a6474: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2a6478:
    if (ctx->pc == 0x2A6478u) {
        ctx->pc = 0x2A6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6474u;
        // 0x2a6478: 0x8e6202b4  lw          $v0, 0x2B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A647Cu;
        goto label_2a647c;
    }
    ctx->pc = 0x2A6474u;
    {
        const bool branch_taken_0x2a6474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6474) {
            ctx->pc = 0x2A6478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6474u;
            // 0x2a6478: 0x8e6202b4  lw          $v0, 0x2B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6490u;
            goto label_2a6490;
        }
    }
    ctx->pc = 0x2A647Cu;
label_2a647c:
    // 0x2a647c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x2a647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_2a6480:
    // 0x2a6480: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a6480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a6484:
    // 0x2a6484: 0x40f809  jalr        $v0
label_2a6488:
    if (ctx->pc == 0x2A6488u) {
        ctx->pc = 0x2A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6484u;
        // 0x2a6488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A648Cu;
        goto label_2a648c;
    }
    ctx->pc = 0x2A6484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A648Cu);
        ctx->pc = 0x2A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6484u;
        // 0x2a6488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6484u, 0x2A648Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A648Cu;
label_2a648c:
    // 0x2a648c: 0x8e6202b4  lw          $v0, 0x2B4($s3)
    ctx->pc = 0x2a648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_2a6490:
    // 0x2a6490: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2a6494:
    if (ctx->pc == 0x2A6494u) {
        ctx->pc = 0x2A6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6490u;
        // 0x2a6494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6498u;
        goto label_2a6498;
    }
    ctx->pc = 0x2A6490u;
    {
        const bool branch_taken_0x2a6490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6490) {
            ctx->pc = 0x2A6494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6490u;
            // 0x2a6494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A64B4u;
            goto label_2a64b4;
        }
    }
    ctx->pc = 0x2A6498u;
label_2a6498:
    // 0x2a6498: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a649c:
    // 0x2a649c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x2a649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a64a0:
    // 0x2a64a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a64a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a64a4:
    // 0x2a64a4: 0x0  nop
    ctx->pc = 0x2a64a4u;
    // NOP
label_2a64a8:
    // 0x2a64a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2a64ac:
    if (ctx->pc == 0x2A64ACu) {
        ctx->pc = 0x2A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A8u;
        // 0x2a64ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64B0u;
        goto label_2a64b0;
    }
    ctx->pc = 0x2A64A8u;
    {
        const bool branch_taken_0x2a64a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A8u;
        // 0x2a64ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64a8) {
            ctx->pc = 0x2A64B4u;
            goto label_2a64b4;
        }
    }
    ctx->pc = 0x2A64B0u;
label_2a64b0:
    // 0x2a64b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a64b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a64b4:
    // 0x2a64b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a64b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a64b8:
    // 0x2a64b8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2a64bc:
    if (ctx->pc == 0x2A64BCu) {
        ctx->pc = 0x2A64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64B8u;
        // 0x2a64bc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64C0u;
        goto label_2a64c0;
    }
    ctx->pc = 0x2A64B8u;
    {
        const bool branch_taken_0x2a64b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a64b8) {
            ctx->pc = 0x2A64BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A64B8u;
            // 0x2a64bc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6520u;
            goto label_2a6520;
        }
    }
    ctx->pc = 0x2A64C0u;
label_2a64c0:
    // 0x2a64c0: 0xc0a9b80  jal         func_2A6E00
label_2a64c4:
    if (ctx->pc == 0x2A64C4u) {
        ctx->pc = 0x2A64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64C0u;
        // 0x2a64c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64C8u;
        goto label_2a64c8;
    }
    ctx->pc = 0x2A64C0u;
    SET_GPR_U32(ctx, 31, 0x2A64C8u);
    ctx->pc = 0x2A64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64C0u;
    // 0x2a64c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E00u, 0x2A64C0u, 0x2A64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64C8u;
label_2a64c8:
    // 0x2a64c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2a64cc:
    if (ctx->pc == 0x2A64CCu) {
        ctx->pc = 0x2A64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64C8u;
        // 0x2a64cc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64D0u;
        goto label_2a64d0;
    }
    ctx->pc = 0x2A64C8u;
    {
        const bool branch_taken_0x2a64c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64C8u;
        // 0x2a64cc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64c8) {
            ctx->pc = 0x2A6520u;
            goto label_2a6520;
        }
    }
    ctx->pc = 0x2A64D0u;
label_2a64d0:
    // 0x2a64d0: 0xc0a9c26  jal         func_2A7098
label_2a64d4:
    if (ctx->pc == 0x2A64D4u) {
        ctx->pc = 0x2A64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64D0u;
        // 0x2a64d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64D8u;
        goto label_2a64d8;
    }
    ctx->pc = 0x2A64D0u;
    SET_GPR_U32(ctx, 31, 0x2A64D8u);
    ctx->pc = 0x2A64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64D0u;
    // 0x2a64d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7098u, 0x2A64D0u, 0x2A64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64D8u;
label_2a64d8:
    // 0x2a64d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2a64dc:
    if (ctx->pc == 0x2A64DCu) {
        ctx->pc = 0x2A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64D8u;
        // 0x2a64dc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64E0u;
        goto label_2a64e0;
    }
    ctx->pc = 0x2A64D8u;
    {
        const bool branch_taken_0x2a64d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64D8u;
        // 0x2a64dc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64d8) {
            ctx->pc = 0x2A6520u;
            goto label_2a6520;
        }
    }
    ctx->pc = 0x2A64E0u;
label_2a64e0:
    // 0x2a64e0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2a64e4:
    // 0x2a64e4: 0xc0a71d2  jal         func_29C748
label_2a64e8:
    if (ctx->pc == 0x2A64E8u) {
        ctx->pc = 0x2A64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64E4u;
        // 0x2a64e8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64ECu;
        goto label_2a64ec;
    }
    ctx->pc = 0x2A64E4u;
    SET_GPR_U32(ctx, 31, 0x2A64ECu);
    ctx->pc = 0x2A64E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64E4u;
    // 0x2a64e8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C748u, 0x2A64E4u, 0x2A64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64ECu;
label_2a64ec:
    // 0x2a64ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a64ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a64f0:
    // 0x2a64f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a64f4:
    // 0x2a64f4: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x2a64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_2a64f8:
    // 0x2a64f8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_2a64fc:
    if (ctx->pc == 0x2A64FCu) {
        ctx->pc = 0x2A64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64F8u;
        // 0x2a64fc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6500u;
        goto label_2a6500;
    }
    ctx->pc = 0x2A64F8u;
    {
        const bool branch_taken_0x2a64f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a64f8) {
            ctx->pc = 0x2A64FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A64F8u;
            // 0x2a64fc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6520u;
            goto label_2a6520;
        }
    }
    ctx->pc = 0x2A6500u;
label_2a6500:
    // 0x2a6500: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_2a6504:
    // 0x2a6504: 0xa20002dc  sb          $zero, 0x2DC($s0)
    ctx->pc = 0x2a6504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 732), (uint8_t)GPR_U32(ctx, 0));
label_2a6508:
    // 0x2a6508: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2a6508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2a650c:
    // 0x2a650c: 0x60f809  jalr        $v1
label_2a6510:
    if (ctx->pc == 0x2A6510u) {
        ctx->pc = 0x2A6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A650Cu;
        // 0x2a6510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6514u;
        goto label_2a6514;
    }
    ctx->pc = 0x2A650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6514u);
        ctx->pc = 0x2A6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A650Cu;
        // 0x2a6510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A650Cu, 0x2A6514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6514u;
label_2a6514:
    // 0x2a6514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6518:
    // 0x2a6518: 0xa20202dc  sb          $v0, 0x2DC($s0)
    ctx->pc = 0x2a6518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 732), (uint8_t)GPR_U32(ctx, 2));
label_2a651c:
    // 0x2a651c: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2a651cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a6520:
    // 0x2a6520: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x2a6520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_2a6524:
    // 0x2a6524: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x2a6524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2a6528:
    // 0x2a6528: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_2a652c:
    // 0x2a652c: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2a652cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2a6530:
    // 0x2a6530: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x2a6530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_2a6534:
    // 0x2a6534: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2a6534u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2a6538:
    // 0x2a6538: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x2a6538u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_2a653c:
    // 0x2a653c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2a653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2a6540:
    // 0x2a6540: 0x3e00008  jr          $ra
label_2a6544:
    if (ctx->pc == 0x2A6544u) {
        ctx->pc = 0x2A6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6540u;
        // 0x2a6544: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6548u;
        goto label_fallthrough_0x2a6540;
    }
    ctx->pc = 0x2A6540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6540u;
        // 0x2a6544: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a6540:
    ctx->pc = 0x2A6548u;
}
