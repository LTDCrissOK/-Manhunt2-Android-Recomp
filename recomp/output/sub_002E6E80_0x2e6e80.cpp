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

// Function: sub_002E6E80
// Address: 0x2e6e80 - 0x2e7830
void sub_002E6E80_0x2e6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6E80_0x2e6e80");
#endif

    switch (ctx->pc) {
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6e84u: goto label_2e6e84;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e8cu: goto label_2e6e8c;
        case 0x2e6e90u: goto label_2e6e90;
        case 0x2e6e94u: goto label_2e6e94;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6e9cu: goto label_2e6e9c;
        case 0x2e6ea0u: goto label_2e6ea0;
        case 0x2e6ea4u: goto label_2e6ea4;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eacu: goto label_2e6eac;
        case 0x2e6eb0u: goto label_2e6eb0;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6ebcu: goto label_2e6ebc;
        case 0x2e6ec0u: goto label_2e6ec0;
        case 0x2e6ec4u: goto label_2e6ec4;
        case 0x2e6ec8u: goto label_2e6ec8;
        case 0x2e6eccu: goto label_2e6ecc;
        case 0x2e6ed0u: goto label_2e6ed0;
        case 0x2e6ed4u: goto label_2e6ed4;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6edcu: goto label_2e6edc;
        case 0x2e6ee0u: goto label_2e6ee0;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6ee8u: goto label_2e6ee8;
        case 0x2e6eecu: goto label_2e6eec;
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6ef4u: goto label_2e6ef4;
        case 0x2e6ef8u: goto label_2e6ef8;
        case 0x2e6efcu: goto label_2e6efc;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f04u: goto label_2e6f04;
        case 0x2e6f08u: goto label_2e6f08;
        case 0x2e6f0cu: goto label_2e6f0c;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f1cu: goto label_2e6f1c;
        case 0x2e6f20u: goto label_2e6f20;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f2cu: goto label_2e6f2c;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f34u: goto label_2e6f34;
        case 0x2e6f38u: goto label_2e6f38;
        case 0x2e6f3cu: goto label_2e6f3c;
        case 0x2e6f40u: goto label_2e6f40;
        case 0x2e6f44u: goto label_2e6f44;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e6f4cu: goto label_2e6f4c;
        case 0x2e6f50u: goto label_2e6f50;
        case 0x2e6f54u: goto label_2e6f54;
        case 0x2e6f58u: goto label_2e6f58;
        case 0x2e6f5cu: goto label_2e6f5c;
        case 0x2e6f60u: goto label_2e6f60;
        case 0x2e6f64u: goto label_2e6f64;
        case 0x2e6f68u: goto label_2e6f68;
        case 0x2e6f6cu: goto label_2e6f6c;
        case 0x2e6f70u: goto label_2e6f70;
        case 0x2e6f74u: goto label_2e6f74;
        case 0x2e6f78u: goto label_2e6f78;
        case 0x2e6f7cu: goto label_2e6f7c;
        case 0x2e6f80u: goto label_2e6f80;
        case 0x2e6f84u: goto label_2e6f84;
        case 0x2e6f88u: goto label_2e6f88;
        case 0x2e6f8cu: goto label_2e6f8c;
        case 0x2e6f90u: goto label_2e6f90;
        case 0x2e6f94u: goto label_2e6f94;
        case 0x2e6f98u: goto label_2e6f98;
        case 0x2e6f9cu: goto label_2e6f9c;
        case 0x2e6fa0u: goto label_2e6fa0;
        case 0x2e6fa4u: goto label_2e6fa4;
        case 0x2e6fa8u: goto label_2e6fa8;
        case 0x2e6facu: goto label_2e6fac;
        case 0x2e6fb0u: goto label_2e6fb0;
        case 0x2e6fb4u: goto label_2e6fb4;
        case 0x2e6fb8u: goto label_2e6fb8;
        case 0x2e6fbcu: goto label_2e6fbc;
        case 0x2e6fc0u: goto label_2e6fc0;
        case 0x2e6fc4u: goto label_2e6fc4;
        case 0x2e6fc8u: goto label_2e6fc8;
        case 0x2e6fccu: goto label_2e6fcc;
        case 0x2e6fd0u: goto label_2e6fd0;
        case 0x2e6fd4u: goto label_2e6fd4;
        case 0x2e6fd8u: goto label_2e6fd8;
        case 0x2e6fdcu: goto label_2e6fdc;
        case 0x2e6fe0u: goto label_2e6fe0;
        case 0x2e6fe4u: goto label_2e6fe4;
        case 0x2e6fe8u: goto label_2e6fe8;
        case 0x2e6fecu: goto label_2e6fec;
        case 0x2e6ff0u: goto label_2e6ff0;
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e6ff8u: goto label_2e6ff8;
        case 0x2e6ffcu: goto label_2e6ffc;
        case 0x2e7000u: goto label_2e7000;
        case 0x2e7004u: goto label_2e7004;
        case 0x2e7008u: goto label_2e7008;
        case 0x2e700cu: goto label_2e700c;
        case 0x2e7010u: goto label_2e7010;
        case 0x2e7014u: goto label_2e7014;
        case 0x2e7018u: goto label_2e7018;
        case 0x2e701cu: goto label_2e701c;
        case 0x2e7020u: goto label_2e7020;
        case 0x2e7024u: goto label_2e7024;
        case 0x2e7028u: goto label_2e7028;
        case 0x2e702cu: goto label_2e702c;
        case 0x2e7030u: goto label_2e7030;
        case 0x2e7034u: goto label_2e7034;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e703cu: goto label_2e703c;
        case 0x2e7040u: goto label_2e7040;
        case 0x2e7044u: goto label_2e7044;
        case 0x2e7048u: goto label_2e7048;
        case 0x2e704cu: goto label_2e704c;
        case 0x2e7050u: goto label_2e7050;
        case 0x2e7054u: goto label_2e7054;
        case 0x2e7058u: goto label_2e7058;
        case 0x2e705cu: goto label_2e705c;
        case 0x2e7060u: goto label_2e7060;
        case 0x2e7064u: goto label_2e7064;
        case 0x2e7068u: goto label_2e7068;
        case 0x2e706cu: goto label_2e706c;
        case 0x2e7070u: goto label_2e7070;
        case 0x2e7074u: goto label_2e7074;
        case 0x2e7078u: goto label_2e7078;
        case 0x2e707cu: goto label_2e707c;
        case 0x2e7080u: goto label_2e7080;
        case 0x2e7084u: goto label_2e7084;
        case 0x2e7088u: goto label_2e7088;
        case 0x2e708cu: goto label_2e708c;
        case 0x2e7090u: goto label_2e7090;
        case 0x2e7094u: goto label_2e7094;
        case 0x2e7098u: goto label_2e7098;
        case 0x2e709cu: goto label_2e709c;
        case 0x2e70a0u: goto label_2e70a0;
        case 0x2e70a4u: goto label_2e70a4;
        case 0x2e70a8u: goto label_2e70a8;
        case 0x2e70acu: goto label_2e70ac;
        case 0x2e70b0u: goto label_2e70b0;
        case 0x2e70b4u: goto label_2e70b4;
        case 0x2e70b8u: goto label_2e70b8;
        case 0x2e70bcu: goto label_2e70bc;
        case 0x2e70c0u: goto label_2e70c0;
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70c8u: goto label_2e70c8;
        case 0x2e70ccu: goto label_2e70cc;
        case 0x2e70d0u: goto label_2e70d0;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70d8u: goto label_2e70d8;
        case 0x2e70dcu: goto label_2e70dc;
        case 0x2e70e0u: goto label_2e70e0;
        case 0x2e70e4u: goto label_2e70e4;
        case 0x2e70e8u: goto label_2e70e8;
        case 0x2e70ecu: goto label_2e70ec;
        case 0x2e70f0u: goto label_2e70f0;
        case 0x2e70f4u: goto label_2e70f4;
        case 0x2e70f8u: goto label_2e70f8;
        case 0x2e70fcu: goto label_2e70fc;
        case 0x2e7100u: goto label_2e7100;
        case 0x2e7104u: goto label_2e7104;
        case 0x2e7108u: goto label_2e7108;
        case 0x2e710cu: goto label_2e710c;
        case 0x2e7110u: goto label_2e7110;
        case 0x2e7114u: goto label_2e7114;
        case 0x2e7118u: goto label_2e7118;
        case 0x2e711cu: goto label_2e711c;
        case 0x2e7120u: goto label_2e7120;
        case 0x2e7124u: goto label_2e7124;
        case 0x2e7128u: goto label_2e7128;
        case 0x2e712cu: goto label_2e712c;
        case 0x2e7130u: goto label_2e7130;
        case 0x2e7134u: goto label_2e7134;
        case 0x2e7138u: goto label_2e7138;
        case 0x2e713cu: goto label_2e713c;
        case 0x2e7140u: goto label_2e7140;
        case 0x2e7144u: goto label_2e7144;
        case 0x2e7148u: goto label_2e7148;
        case 0x2e714cu: goto label_2e714c;
        case 0x2e7150u: goto label_2e7150;
        case 0x2e7154u: goto label_2e7154;
        case 0x2e7158u: goto label_2e7158;
        case 0x2e715cu: goto label_2e715c;
        case 0x2e7160u: goto label_2e7160;
        case 0x2e7164u: goto label_2e7164;
        case 0x2e7168u: goto label_2e7168;
        case 0x2e716cu: goto label_2e716c;
        case 0x2e7170u: goto label_2e7170;
        case 0x2e7174u: goto label_2e7174;
        case 0x2e7178u: goto label_2e7178;
        case 0x2e717cu: goto label_2e717c;
        case 0x2e7180u: goto label_2e7180;
        case 0x2e7184u: goto label_2e7184;
        case 0x2e7188u: goto label_2e7188;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e7190u: goto label_2e7190;
        case 0x2e7194u: goto label_2e7194;
        case 0x2e7198u: goto label_2e7198;
        case 0x2e719cu: goto label_2e719c;
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71a4u: goto label_2e71a4;
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71b0u: goto label_2e71b0;
        case 0x2e71b4u: goto label_2e71b4;
        case 0x2e71b8u: goto label_2e71b8;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71c0u: goto label_2e71c0;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e71c8u: goto label_2e71c8;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71d0u: goto label_2e71d0;
        case 0x2e71d4u: goto label_2e71d4;
        case 0x2e71d8u: goto label_2e71d8;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71e4u: goto label_2e71e4;
        case 0x2e71e8u: goto label_2e71e8;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f0u: goto label_2e71f0;
        case 0x2e71f4u: goto label_2e71f4;
        case 0x2e71f8u: goto label_2e71f8;
        case 0x2e71fcu: goto label_2e71fc;
        case 0x2e7200u: goto label_2e7200;
        case 0x2e7204u: goto label_2e7204;
        case 0x2e7208u: goto label_2e7208;
        case 0x2e720cu: goto label_2e720c;
        case 0x2e7210u: goto label_2e7210;
        case 0x2e7214u: goto label_2e7214;
        case 0x2e7218u: goto label_2e7218;
        case 0x2e721cu: goto label_2e721c;
        case 0x2e7220u: goto label_2e7220;
        case 0x2e7224u: goto label_2e7224;
        case 0x2e7228u: goto label_2e7228;
        case 0x2e722cu: goto label_2e722c;
        case 0x2e7230u: goto label_2e7230;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e723cu: goto label_2e723c;
        case 0x2e7240u: goto label_2e7240;
        case 0x2e7244u: goto label_2e7244;
        case 0x2e7248u: goto label_2e7248;
        case 0x2e724cu: goto label_2e724c;
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        case 0x2e73e4u: goto label_2e73e4;
        case 0x2e73e8u: goto label_2e73e8;
        case 0x2e73ecu: goto label_2e73ec;
        case 0x2e73f0u: goto label_2e73f0;
        case 0x2e73f4u: goto label_2e73f4;
        case 0x2e73f8u: goto label_2e73f8;
        case 0x2e73fcu: goto label_2e73fc;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7404u: goto label_2e7404;
        case 0x2e7408u: goto label_2e7408;
        case 0x2e740cu: goto label_2e740c;
        case 0x2e7410u: goto label_2e7410;
        case 0x2e7414u: goto label_2e7414;
        case 0x2e7418u: goto label_2e7418;
        case 0x2e741cu: goto label_2e741c;
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7424u: goto label_2e7424;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e742cu: goto label_2e742c;
        case 0x2e7430u: goto label_2e7430;
        case 0x2e7434u: goto label_2e7434;
        case 0x2e7438u: goto label_2e7438;
        case 0x2e743cu: goto label_2e743c;
        case 0x2e7440u: goto label_2e7440;
        case 0x2e7444u: goto label_2e7444;
        case 0x2e7448u: goto label_2e7448;
        case 0x2e744cu: goto label_2e744c;
        case 0x2e7450u: goto label_2e7450;
        case 0x2e7454u: goto label_2e7454;
        case 0x2e7458u: goto label_2e7458;
        case 0x2e745cu: goto label_2e745c;
        case 0x2e7460u: goto label_2e7460;
        case 0x2e7464u: goto label_2e7464;
        case 0x2e7468u: goto label_2e7468;
        case 0x2e746cu: goto label_2e746c;
        case 0x2e7470u: goto label_2e7470;
        case 0x2e7474u: goto label_2e7474;
        case 0x2e7478u: goto label_2e7478;
        case 0x2e747cu: goto label_2e747c;
        case 0x2e7480u: goto label_2e7480;
        case 0x2e7484u: goto label_2e7484;
        case 0x2e7488u: goto label_2e7488;
        case 0x2e748cu: goto label_2e748c;
        case 0x2e7490u: goto label_2e7490;
        case 0x2e7494u: goto label_2e7494;
        case 0x2e7498u: goto label_2e7498;
        case 0x2e749cu: goto label_2e749c;
        case 0x2e74a0u: goto label_2e74a0;
        case 0x2e74a4u: goto label_2e74a4;
        case 0x2e74a8u: goto label_2e74a8;
        case 0x2e74acu: goto label_2e74ac;
        case 0x2e74b0u: goto label_2e74b0;
        case 0x2e74b4u: goto label_2e74b4;
        case 0x2e74b8u: goto label_2e74b8;
        case 0x2e74bcu: goto label_2e74bc;
        case 0x2e74c0u: goto label_2e74c0;
        case 0x2e74c4u: goto label_2e74c4;
        case 0x2e74c8u: goto label_2e74c8;
        case 0x2e74ccu: goto label_2e74cc;
        case 0x2e74d0u: goto label_2e74d0;
        case 0x2e74d4u: goto label_2e74d4;
        case 0x2e74d8u: goto label_2e74d8;
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e74e0u: goto label_2e74e0;
        case 0x2e74e4u: goto label_2e74e4;
        case 0x2e74e8u: goto label_2e74e8;
        case 0x2e74ecu: goto label_2e74ec;
        case 0x2e74f0u: goto label_2e74f0;
        case 0x2e74f4u: goto label_2e74f4;
        case 0x2e74f8u: goto label_2e74f8;
        case 0x2e74fcu: goto label_2e74fc;
        case 0x2e7500u: goto label_2e7500;
        case 0x2e7504u: goto label_2e7504;
        case 0x2e7508u: goto label_2e7508;
        case 0x2e750cu: goto label_2e750c;
        case 0x2e7510u: goto label_2e7510;
        case 0x2e7514u: goto label_2e7514;
        case 0x2e7518u: goto label_2e7518;
        case 0x2e751cu: goto label_2e751c;
        case 0x2e7520u: goto label_2e7520;
        case 0x2e7524u: goto label_2e7524;
        case 0x2e7528u: goto label_2e7528;
        case 0x2e752cu: goto label_2e752c;
        case 0x2e7530u: goto label_2e7530;
        case 0x2e7534u: goto label_2e7534;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e753cu: goto label_2e753c;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7544u: goto label_2e7544;
        case 0x2e7548u: goto label_2e7548;
        case 0x2e754cu: goto label_2e754c;
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7554u: goto label_2e7554;
        case 0x2e7558u: goto label_2e7558;
        case 0x2e755cu: goto label_2e755c;
        case 0x2e7560u: goto label_2e7560;
        case 0x2e7564u: goto label_2e7564;
        case 0x2e7568u: goto label_2e7568;
        case 0x2e756cu: goto label_2e756c;
        case 0x2e7570u: goto label_2e7570;
        case 0x2e7574u: goto label_2e7574;
        case 0x2e7578u: goto label_2e7578;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7580u: goto label_2e7580;
        case 0x2e7584u: goto label_2e7584;
        case 0x2e7588u: goto label_2e7588;
        case 0x2e758cu: goto label_2e758c;
        case 0x2e7590u: goto label_2e7590;
        case 0x2e7594u: goto label_2e7594;
        case 0x2e7598u: goto label_2e7598;
        case 0x2e759cu: goto label_2e759c;
        case 0x2e75a0u: goto label_2e75a0;
        case 0x2e75a4u: goto label_2e75a4;
        case 0x2e75a8u: goto label_2e75a8;
        case 0x2e75acu: goto label_2e75ac;
        case 0x2e75b0u: goto label_2e75b0;
        case 0x2e75b4u: goto label_2e75b4;
        case 0x2e75b8u: goto label_2e75b8;
        case 0x2e75bcu: goto label_2e75bc;
        case 0x2e75c0u: goto label_2e75c0;
        case 0x2e75c4u: goto label_2e75c4;
        case 0x2e75c8u: goto label_2e75c8;
        case 0x2e75ccu: goto label_2e75cc;
        case 0x2e75d0u: goto label_2e75d0;
        case 0x2e75d4u: goto label_2e75d4;
        case 0x2e75d8u: goto label_2e75d8;
        case 0x2e75dcu: goto label_2e75dc;
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75e4u: goto label_2e75e4;
        case 0x2e75e8u: goto label_2e75e8;
        case 0x2e75ecu: goto label_2e75ec;
        case 0x2e75f0u: goto label_2e75f0;
        case 0x2e75f4u: goto label_2e75f4;
        case 0x2e75f8u: goto label_2e75f8;
        case 0x2e75fcu: goto label_2e75fc;
        case 0x2e7600u: goto label_2e7600;
        case 0x2e7604u: goto label_2e7604;
        case 0x2e7608u: goto label_2e7608;
        case 0x2e760cu: goto label_2e760c;
        case 0x2e7610u: goto label_2e7610;
        case 0x2e7614u: goto label_2e7614;
        case 0x2e7618u: goto label_2e7618;
        case 0x2e761cu: goto label_2e761c;
        case 0x2e7620u: goto label_2e7620;
        case 0x2e7624u: goto label_2e7624;
        case 0x2e7628u: goto label_2e7628;
        case 0x2e762cu: goto label_2e762c;
        case 0x2e7630u: goto label_2e7630;
        case 0x2e7634u: goto label_2e7634;
        case 0x2e7638u: goto label_2e7638;
        case 0x2e763cu: goto label_2e763c;
        case 0x2e7640u: goto label_2e7640;
        case 0x2e7644u: goto label_2e7644;
        case 0x2e7648u: goto label_2e7648;
        case 0x2e764cu: goto label_2e764c;
        case 0x2e7650u: goto label_2e7650;
        case 0x2e7654u: goto label_2e7654;
        case 0x2e7658u: goto label_2e7658;
        case 0x2e765cu: goto label_2e765c;
        case 0x2e7660u: goto label_2e7660;
        case 0x2e7664u: goto label_2e7664;
        case 0x2e7668u: goto label_2e7668;
        case 0x2e766cu: goto label_2e766c;
        case 0x2e7670u: goto label_2e7670;
        case 0x2e7674u: goto label_2e7674;
        case 0x2e7678u: goto label_2e7678;
        case 0x2e767cu: goto label_2e767c;
        case 0x2e7680u: goto label_2e7680;
        case 0x2e7684u: goto label_2e7684;
        case 0x2e7688u: goto label_2e7688;
        case 0x2e768cu: goto label_2e768c;
        case 0x2e7690u: goto label_2e7690;
        case 0x2e7694u: goto label_2e7694;
        case 0x2e7698u: goto label_2e7698;
        case 0x2e769cu: goto label_2e769c;
        case 0x2e76a0u: goto label_2e76a0;
        case 0x2e76a4u: goto label_2e76a4;
        case 0x2e76a8u: goto label_2e76a8;
        case 0x2e76acu: goto label_2e76ac;
        case 0x2e76b0u: goto label_2e76b0;
        case 0x2e76b4u: goto label_2e76b4;
        case 0x2e76b8u: goto label_2e76b8;
        case 0x2e76bcu: goto label_2e76bc;
        case 0x2e76c0u: goto label_2e76c0;
        case 0x2e76c4u: goto label_2e76c4;
        case 0x2e76c8u: goto label_2e76c8;
        case 0x2e76ccu: goto label_2e76cc;
        case 0x2e76d0u: goto label_2e76d0;
        case 0x2e76d4u: goto label_2e76d4;
        case 0x2e76d8u: goto label_2e76d8;
        case 0x2e76dcu: goto label_2e76dc;
        case 0x2e76e0u: goto label_2e76e0;
        case 0x2e76e4u: goto label_2e76e4;
        case 0x2e76e8u: goto label_2e76e8;
        case 0x2e76ecu: goto label_2e76ec;
        case 0x2e76f0u: goto label_2e76f0;
        case 0x2e76f4u: goto label_2e76f4;
        case 0x2e76f8u: goto label_2e76f8;
        case 0x2e76fcu: goto label_2e76fc;
        case 0x2e7700u: goto label_2e7700;
        case 0x2e7704u: goto label_2e7704;
        case 0x2e7708u: goto label_2e7708;
        case 0x2e770cu: goto label_2e770c;
        case 0x2e7710u: goto label_2e7710;
        case 0x2e7714u: goto label_2e7714;
        case 0x2e7718u: goto label_2e7718;
        case 0x2e771cu: goto label_2e771c;
        case 0x2e7720u: goto label_2e7720;
        case 0x2e7724u: goto label_2e7724;
        case 0x2e7728u: goto label_2e7728;
        case 0x2e772cu: goto label_2e772c;
        case 0x2e7730u: goto label_2e7730;
        case 0x2e7734u: goto label_2e7734;
        case 0x2e7738u: goto label_2e7738;
        case 0x2e773cu: goto label_2e773c;
        case 0x2e7740u: goto label_2e7740;
        case 0x2e7744u: goto label_2e7744;
        case 0x2e7748u: goto label_2e7748;
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7750u: goto label_2e7750;
        case 0x2e7754u: goto label_2e7754;
        case 0x2e7758u: goto label_2e7758;
        case 0x2e775cu: goto label_2e775c;
        case 0x2e7760u: goto label_2e7760;
        case 0x2e7764u: goto label_2e7764;
        case 0x2e7768u: goto label_2e7768;
        case 0x2e776cu: goto label_2e776c;
        case 0x2e7770u: goto label_2e7770;
        case 0x2e7774u: goto label_2e7774;
        case 0x2e7778u: goto label_2e7778;
        case 0x2e777cu: goto label_2e777c;
        case 0x2e7780u: goto label_2e7780;
        case 0x2e7784u: goto label_2e7784;
        case 0x2e7788u: goto label_2e7788;
        case 0x2e778cu: goto label_2e778c;
        case 0x2e7790u: goto label_2e7790;
        case 0x2e7794u: goto label_2e7794;
        case 0x2e7798u: goto label_2e7798;
        case 0x2e779cu: goto label_2e779c;
        case 0x2e77a0u: goto label_2e77a0;
        case 0x2e77a4u: goto label_2e77a4;
        case 0x2e77a8u: goto label_2e77a8;
        case 0x2e77acu: goto label_2e77ac;
        case 0x2e77b0u: goto label_2e77b0;
        case 0x2e77b4u: goto label_2e77b4;
        case 0x2e77b8u: goto label_2e77b8;
        case 0x2e77bcu: goto label_2e77bc;
        case 0x2e77c0u: goto label_2e77c0;
        case 0x2e77c4u: goto label_2e77c4;
        case 0x2e77c8u: goto label_2e77c8;
        case 0x2e77ccu: goto label_2e77cc;
        case 0x2e77d0u: goto label_2e77d0;
        case 0x2e77d4u: goto label_2e77d4;
        case 0x2e77d8u: goto label_2e77d8;
        case 0x2e77dcu: goto label_2e77dc;
        case 0x2e77e0u: goto label_2e77e0;
        case 0x2e77e4u: goto label_2e77e4;
        case 0x2e77e8u: goto label_2e77e8;
        case 0x2e77ecu: goto label_2e77ec;
        case 0x2e77f0u: goto label_2e77f0;
        case 0x2e77f4u: goto label_2e77f4;
        case 0x2e77f8u: goto label_2e77f8;
        case 0x2e77fcu: goto label_2e77fc;
        case 0x2e7800u: goto label_2e7800;
        case 0x2e7804u: goto label_2e7804;
        case 0x2e7808u: goto label_2e7808;
        case 0x2e780cu: goto label_2e780c;
        case 0x2e7810u: goto label_2e7810;
        case 0x2e7814u: goto label_2e7814;
        case 0x2e7818u: goto label_2e7818;
        case 0x2e781cu: goto label_2e781c;
        case 0x2e7820u: goto label_2e7820;
        case 0x2e7824u: goto label_2e7824;
        case 0x2e7828u: goto label_2e7828;
        case 0x2e782cu: goto label_2e782c;
        default: break;
    }

    ctx->pc = 0x2e6e80u;

label_2e6e80:
    // 0x2e6e80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2e6e84:
    // 0x2e6e84: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2e6e88:
    // 0x2e6e88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2e6e8c:
    // 0x2e6e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e6e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e90:
    // 0x2e6e90: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2e6e94:
    // 0x2e6e94: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2e6e98:
    // 0x2e6e98: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2e6e9c:
    // 0x2e6e9c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2e6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2e6ea0:
    // 0x2e6ea0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e6ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2e6ea4:
    // 0x2e6ea4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2e6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_2e6ea8:
    // 0x2e6ea8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2e6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_2e6eac:
    // 0x2e6eac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2e6eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2e6eb0:
    // 0x2e6eb0: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2e6eb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2e6eb4:
    // 0x2e6eb4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2e6eb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2e6eb8:
    // 0x2e6eb8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2e6eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2e6ebc:
    // 0x2e6ebc: 0x922213d4  lbu         $v0, 0x13D4($s1)
    ctx->pc = 0x2e6ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5076)));
label_2e6ec0:
    // 0x2e6ec0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e6ec4:
    if (ctx->pc == 0x2E6EC4u) {
        ctx->pc = 0x2E6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC0u;
        // 0x2e6ec4: 0x262213e0  addiu       $v0, $s1, 0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EC8u;
        goto label_2e6ec8;
    }
    ctx->pc = 0x2E6EC0u;
    {
        const bool branch_taken_0x2e6ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC0u;
        // 0x2e6ec4: 0x262213e0  addiu       $v0, $s1, 0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ec0) {
            ctx->pc = 0x2E6EDCu;
            goto label_2e6edc;
        }
    }
    ctx->pc = 0x2E6EC8u;
label_2e6ec8:
    // 0x2e6ec8: 0xa22013d4  sb          $zero, 0x13D4($s1)
    ctx->pc = 0x2e6ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5076), (uint8_t)GPR_U32(ctx, 0));
label_2e6ecc:
    // 0x2e6ecc: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2e6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2e6ed0:
    // 0x2e6ed0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e6ed4:
    // 0x2e6ed4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e6ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6ed8:
    // 0x2e6ed8: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2e6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e6edc:
    // 0x2e6edc: 0xc0b9b6a  jal         func_2E6DA8
label_2e6ee0:
    if (ctx->pc == 0x2E6EE0u) {
        ctx->pc = 0x2E6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EDCu;
        // 0x2e6ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EE4u;
        goto label_2e6ee4;
    }
    ctx->pc = 0x2E6EDCu;
    SET_GPR_U32(ctx, 31, 0x2E6EE4u);
    ctx->pc = 0x2E6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EDCu;
    // 0x2e6ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6DA8u, 0x2E6EDCu, 0x2E6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EE4u;
label_2e6ee4:
    // 0x2e6ee4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2e6ee8:
    // 0x2e6ee8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_2e6eec:
    // 0x2e6eec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e6eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e6ef0:
    // 0x2e6ef0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e6ef4:
    if (ctx->pc == 0x2E6EF4u) {
        ctx->pc = 0x2E6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF0u;
        // 0x2e6ef4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EF8u;
        goto label_2e6ef8;
    }
    ctx->pc = 0x2E6EF0u;
    {
        const bool branch_taken_0x2e6ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF0u;
        // 0x2e6ef4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ef0) {
            ctx->pc = 0x2E6F0Cu;
            goto label_2e6f0c;
        }
    }
    ctx->pc = 0x2E6EF8u;
label_2e6ef8:
    // 0x2e6ef8: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2e6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2e6efc:
    // 0x2e6efc: 0xae220140  sw          $v0, 0x140($s1)
    ctx->pc = 0x2e6efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
label_2e6f00:
    // 0x2e6f00: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2e6f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_2e6f04:
    // 0x2e6f04: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x2e6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_2e6f08:
    // 0x2e6f08: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x2e6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
label_2e6f0c:
    // 0x2e6f0c: 0xc092ac8  jal         func_24AB20
label_2e6f10:
    if (ctx->pc == 0x2E6F10u) {
        ctx->pc = 0x2E6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F0Cu;
        // 0x2e6f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F14u;
        goto label_2e6f14;
    }
    ctx->pc = 0x2E6F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F14u);
    ctx->pc = 0x2E6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F0Cu;
    // 0x2e6f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AB20u, 0x2E6F0Cu, 0x2E6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F14u;
label_2e6f14:
    // 0x2e6f14: 0xc0be44e  jal         func_2F9138
label_2e6f18:
    if (ctx->pc == 0x2E6F18u) {
        ctx->pc = 0x2E6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F14u;
        // 0x2e6f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F1Cu;
        goto label_2e6f1c;
    }
    ctx->pc = 0x2E6F14u;
    SET_GPR_U32(ctx, 31, 0x2E6F1Cu);
    ctx->pc = 0x2E6F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F14u;
    // 0x2e6f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9138u, 0x2E6F14u, 0x2E6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F1Cu;
label_2e6f1c:
    // 0x2e6f1c: 0xc0899bc  jal         func_2266F0
label_2e6f20:
    if (ctx->pc == 0x2E6F20u) {
        ctx->pc = 0x2E6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F1Cu;
        // 0x2e6f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F24u;
        goto label_2e6f24;
    }
    ctx->pc = 0x2E6F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F24u);
    ctx->pc = 0x2E6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F1Cu;
    // 0x2e6f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E6F1Cu, 0x2E6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F24u;
label_2e6f24:
    // 0x2e6f24: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2e6f28:
    if (ctx->pc == 0x2E6F28u) {
        ctx->pc = 0x2E6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F24u;
        // 0x2e6f28: 0x8e3e00b8  lw          $fp, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F2Cu;
        goto label_2e6f2c;
    }
    ctx->pc = 0x2E6F24u;
    {
        const bool branch_taken_0x2e6f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f24) {
            ctx->pc = 0x2E6F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6F24u;
            // 0x2e6f28: 0x8e3e00b8  lw          $fp, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F58u;
            goto label_2e6f58;
        }
    }
    ctx->pc = 0x2E6F2Cu;
label_2e6f2c:
    // 0x2e6f2c: 0xc0899bc  jal         func_2266F0
label_2e6f30:
    if (ctx->pc == 0x2E6F30u) {
        ctx->pc = 0x2E6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F2Cu;
        // 0x2e6f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F34u;
        goto label_2e6f34;
    }
    ctx->pc = 0x2E6F2Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F34u);
    ctx->pc = 0x2E6F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F2Cu;
    // 0x2e6f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E6F2Cu, 0x2E6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F34u;
label_2e6f34:
    // 0x2e6f34: 0xc097f26  jal         func_25FC98
label_2e6f38:
    if (ctx->pc == 0x2E6F38u) {
        ctx->pc = 0x2E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F34u;
        // 0x2e6f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F3Cu;
        goto label_2e6f3c;
    }
    ctx->pc = 0x2E6F34u;
    SET_GPR_U32(ctx, 31, 0x2E6F3Cu);
    ctx->pc = 0x2E6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F34u;
    // 0x2e6f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E6F34u, 0x2E6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F3Cu;
label_2e6f3c:
    // 0x2e6f3c: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x2e6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_2e6f40:
    // 0x2e6f40: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2e6f44:
    if (ctx->pc == 0x2E6F44u) {
        ctx->pc = 0x2E6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F40u;
        // 0x2e6f44: 0x8e3e00b8  lw          $fp, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F48u;
        goto label_2e6f48;
    }
    ctx->pc = 0x2E6F40u;
    {
        const bool branch_taken_0x2e6f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e6f40) {
            ctx->pc = 0x2E6F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6F40u;
            // 0x2e6f44: 0x8e3e00b8  lw          $fp, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F58u;
            goto label_2e6f58;
        }
    }
    ctx->pc = 0x2E6F48u;
label_2e6f48:
    // 0x2e6f48: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2e6f4c:
    // 0x2e6f4c: 0xc0ae6b6  jal         func_2B9AD8
label_2e6f50:
    if (ctx->pc == 0x2E6F50u) {
        ctx->pc = 0x2E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F4Cu;
        // 0x2e6f50: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F54u;
        goto label_2e6f54;
    }
    ctx->pc = 0x2E6F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F54u);
    ctx->pc = 0x2E6F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F4Cu;
    // 0x2e6f50: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AD8u, 0x2E6F4Cu, 0x2E6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F54u;
label_2e6f54:
    // 0x2e6f54: 0x8e3e00b8  lw          $fp, 0xB8($s1)
    ctx->pc = 0x2e6f54u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2e6f58:
    // 0x2e6f58: 0xc0a21aa  jal         func_2886A8
label_2e6f5c:
    if (ctx->pc == 0x2E6F5Cu) {
        ctx->pc = 0x2E6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F58u;
        // 0x2e6f5c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F60u;
        goto label_2e6f60;
    }
    ctx->pc = 0x2E6F58u;
    SET_GPR_U32(ctx, 31, 0x2E6F60u);
    ctx->pc = 0x2E6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F58u;
    // 0x2e6f5c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2886A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886A8u, 0x2E6F58u, 0x2E6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F60u;
label_2e6f60:
    // 0x2e6f60: 0x8e03b958  lw          $v1, -0x46A8($s0)
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949208)));
label_2e6f64:
    // 0x2e6f64: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2e6f68:
    if (ctx->pc == 0x2E6F68u) {
        ctx->pc = 0x2E6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F64u;
        // 0x2e6f68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F6Cu;
        goto label_2e6f6c;
    }
    ctx->pc = 0x2E6F64u;
    {
        const bool branch_taken_0x2e6f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F64u;
        // 0x2e6f68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f64) {
            ctx->pc = 0x2E6F84u;
            goto label_2e6f84;
        }
    }
    ctx->pc = 0x2E6F6Cu;
label_2e6f6c:
    // 0x2e6f6c: 0xc0a21aa  jal         func_2886A8
label_2e6f70:
    if (ctx->pc == 0x2E6F70u) {
        ctx->pc = 0x2E6F74u;
        goto label_2e6f74;
    }
    ctx->pc = 0x2E6F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F74u);
    ctx->pc = 0x2886A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886A8u, 0x2E6F6Cu, 0x2E6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F74u;
label_2e6f74:
    // 0x2e6f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f78:
    // 0x2e6f78: 0xc0b9306  jal         func_2E4C18
label_2e6f7c:
    if (ctx->pc == 0x2E6F7Cu) {
        ctx->pc = 0x2E6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F78u;
        // 0x2e6f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F80u;
        goto label_2e6f80;
    }
    ctx->pc = 0x2E6F78u;
    SET_GPR_U32(ctx, 31, 0x2E6F80u);
    ctx->pc = 0x2E6F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F78u;
    // 0x2e6f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C18u, 0x2E6F78u, 0x2E6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F80u;
label_2e6f80:
    // 0x2e6f80: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e6f84:
    // 0x2e6f84: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2e6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2e6f88:
    // 0x2e6f88: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x2e6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950244)));
label_2e6f8c:
    // 0x2e6f8c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2e6f90:
    if (ctx->pc == 0x2E6F90u) {
        ctx->pc = 0x2E6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F8Cu;
        // 0x2e6f90: 0xac80b830  sw          $zero, -0x47D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294948912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F94u;
        goto label_2e6f94;
    }
    ctx->pc = 0x2E6F8Cu;
    {
        const bool branch_taken_0x2e6f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F8Cu;
        // 0x2e6f90: 0xac80b830  sw          $zero, -0x47D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294948912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f8c) {
            ctx->pc = 0x2E6FC0u;
            goto label_2e6fc0;
        }
    }
    ctx->pc = 0x2E6F94u;
label_2e6f94:
    // 0x2e6f94: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2e6f98:
    // 0x2e6f98: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e6f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2e6f9c:
    // 0x2e6f9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e6fa0:
    if (ctx->pc == 0x2E6FA0u) {
        ctx->pc = 0x2E6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F9Cu;
        // 0x2e6fa0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FA4u;
        goto label_2e6fa4;
    }
    ctx->pc = 0x2E6F9Cu;
    {
        const bool branch_taken_0x2e6f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F9Cu;
        // 0x2e6fa0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f9c) {
            ctx->pc = 0x2E6FC4u;
            goto label_2e6fc4;
        }
    }
    ctx->pc = 0x2E6FA4u;
label_2e6fa4:
    // 0x2e6fa4: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x2e6fa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
label_2e6fa8:
    // 0x2e6fa8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2e6fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_2e6fac:
    // 0x2e6fac: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2e6facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_2e6fb0:
    // 0x2e6fb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e6fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2e6fb4:
    // 0x2e6fb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e6fb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2e6fb8:
    // 0x2e6fb8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2e6fbc:
    if (ctx->pc == 0x2E6FBCu) {
        ctx->pc = 0x2E6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB8u;
        // 0x2e6fbc: 0xc494b830  lwc1        $f20, -0x47D0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294948912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FC0u;
        goto label_2e6fc0;
    }
    ctx->pc = 0x2E6FB8u;
    {
        const bool branch_taken_0x2e6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB8u;
        // 0x2e6fbc: 0xc494b830  lwc1        $f20, -0x47D0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294948912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fb8) {
            ctx->pc = 0x2E7004u;
            goto label_2e7004;
        }
    }
    ctx->pc = 0x2E6FC0u;
label_2e6fc0:
    // 0x2e6fc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e6fc4:
    // 0x2e6fc4: 0x8c43bd68  lw          $v1, -0x4298($v0)
    ctx->pc = 0x2e6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950248)));
label_2e6fc8:
    // 0x2e6fc8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2e6fcc:
    if (ctx->pc == 0x2E6FCCu) {
        ctx->pc = 0x2E6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FC8u;
        // 0x2e6fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FD0u;
        goto label_2e6fd0;
    }
    ctx->pc = 0x2E6FC8u;
    {
        const bool branch_taken_0x2e6fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FC8u;
        // 0x2e6fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fc8) {
            ctx->pc = 0x2E6FF4u;
            goto label_2e6ff4;
        }
    }
    ctx->pc = 0x2E6FD0u;
label_2e6fd0:
    // 0x2e6fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6fd4:
    // 0x2e6fd4: 0x0  nop
    ctx->pc = 0x2e6fd4u;
    // NOP
label_2e6fd8:
    // 0x2e6fd8: 0xe62004fc  swc1        $f0, 0x4FC($s1)
    ctx->pc = 0x2e6fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1276), bits); }
label_2e6fdc:
    // 0x2e6fdc: 0xc0baf26  jal         func_2EBC98
label_2e6fe0:
    if (ctx->pc == 0x2E6FE0u) {
        ctx->pc = 0x2E6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FDCu;
        // 0x2e6fe0: 0xe6200500  swc1        $f0, 0x500($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FE4u;
        goto label_2e6fe4;
    }
    ctx->pc = 0x2E6FDCu;
    SET_GPR_U32(ctx, 31, 0x2E6FE4u);
    ctx->pc = 0x2E6FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FDCu;
    // 0x2e6fe0: 0xe6200500  swc1        $f0, 0x500($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC98u, 0x2E6FDCu, 0x2E6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FE4u;
label_2e6fe4:
    // 0x2e6fe4: 0xc0b9556  jal         func_2E5558
label_2e6fe8:
    if (ctx->pc == 0x2E6FE8u) {
        ctx->pc = 0x2E6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FE4u;
        // 0x2e6fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FECu;
        goto label_2e6fec;
    }
    ctx->pc = 0x2E6FE4u;
    SET_GPR_U32(ctx, 31, 0x2E6FECu);
    ctx->pc = 0x2E6FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FE4u;
    // 0x2e6fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5558u, 0x2E6FE4u, 0x2E6FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FECu;
label_2e6fec:
    // 0x2e6fec: 0xc0b9562  jal         func_2E5588
label_2e6ff0:
    if (ctx->pc == 0x2E6FF0u) {
        ctx->pc = 0x2E6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FECu;
        // 0x2e6ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FF4u;
        goto label_2e6ff4;
    }
    ctx->pc = 0x2E6FECu;
    SET_GPR_U32(ctx, 31, 0x2E6FF4u);
    ctx->pc = 0x2E6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FECu;
    // 0x2e6ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5588u, 0x2E6FECu, 0x2E6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FF4u;
label_2e6ff4:
    // 0x2e6ff4: 0xc0944f8  jal         func_2513E0
label_2e6ff8:
    if (ctx->pc == 0x2E6FF8u) {
        ctx->pc = 0x2E6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FF4u;
        // 0x2e6ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FFCu;
        goto label_2e6ffc;
    }
    ctx->pc = 0x2E6FF4u;
    SET_GPR_U32(ctx, 31, 0x2E6FFCu);
    ctx->pc = 0x2E6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FF4u;
    // 0x2e6ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513E0u, 0x2E6FF4u, 0x2E6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FFCu;
label_2e6ffc:
    // 0x2e6ffc: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_2e7000:
    if (ctx->pc == 0x2E7000u) {
        ctx->pc = 0x2E7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FFCu;
        // 0x2e7000: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7004u;
        goto label_2e7004;
    }
    ctx->pc = 0x2E6FFCu;
    {
        const bool branch_taken_0x2e6ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FFCu;
        // 0x2e7000: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ffc) {
            ctx->pc = 0x2E77F8u;
            goto label_2e77f8;
        }
    }
    ctx->pc = 0x2E7004u;
label_2e7004:
    // 0x2e7004: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x2e7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7008:
    // 0x2e7008: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e7008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e700c:
    // 0x2e700c: 0x0  nop
    ctx->pc = 0x2e700cu;
    // NOP
label_2e7010:
    // 0x2e7010: 0x45000188  bc1f        . + 4 + (0x188 << 2)
label_2e7014:
    if (ctx->pc == 0x2E7014u) {
        ctx->pc = 0x2E7018u;
        goto label_2e7018;
    }
    ctx->pc = 0x2E7010u;
    {
        const bool branch_taken_0x2e7010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7010) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E7018u;
label_2e7018:
    // 0x2e7018: 0xc0baf26  jal         func_2EBC98
label_2e701c:
    if (ctx->pc == 0x2E701Cu) {
        ctx->pc = 0x2E701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7018u;
        // 0x2e701c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7020u;
        goto label_2e7020;
    }
    ctx->pc = 0x2E7018u;
    SET_GPR_U32(ctx, 31, 0x2E7020u);
    ctx->pc = 0x2E701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7018u;
    // 0x2e701c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC98u, 0x2E7018u, 0x2E7020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7020u;
label_2e7020:
    // 0x2e7020: 0xc0b9556  jal         func_2E5558
label_2e7024:
    if (ctx->pc == 0x2E7024u) {
        ctx->pc = 0x2E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7020u;
        // 0x2e7024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7028u;
        goto label_2e7028;
    }
    ctx->pc = 0x2E7020u;
    SET_GPR_U32(ctx, 31, 0x2E7028u);
    ctx->pc = 0x2E7024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7020u;
    // 0x2e7024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5558u, 0x2E7020u, 0x2E7028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7028u;
label_2e7028:
    // 0x2e7028: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2e702c:
    // 0x2e702c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e7030:
    // 0x2e7030: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e7034:
    if (ctx->pc == 0x2E7034u) {
        ctx->pc = 0x2E7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7030u;
        // 0x2e7034: 0xc62004f0  lwc1        $f0, 0x4F0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7038u;
        goto label_2e7038;
    }
    ctx->pc = 0x2E7030u;
    {
        const bool branch_taken_0x2e7030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7030) {
            ctx->pc = 0x2E7034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7030u;
            // 0x2e7034: 0xc62004f0  lwc1        $f0, 0x4F0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7044u;
            goto label_2e7044;
        }
    }
    ctx->pc = 0x2E7038u;
label_2e7038:
    // 0x2e7038: 0xc0b9562  jal         func_2E5588
label_2e703c:
    if (ctx->pc == 0x2E703Cu) {
        ctx->pc = 0x2E703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7038u;
        // 0x2e703c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7040u;
        goto label_2e7040;
    }
    ctx->pc = 0x2E7038u;
    SET_GPR_U32(ctx, 31, 0x2E7040u);
    ctx->pc = 0x2E703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7038u;
    // 0x2e703c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5588u, 0x2E7038u, 0x2E7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7040u;
label_2e7040:
    // 0x2e7040: 0xc62004f0  lwc1        $f0, 0x4F0($s1)
    ctx->pc = 0x2e7040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7044:
    // 0x2e7044: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2e7044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7048:
    // 0x2e7048: 0x0  nop
    ctx->pc = 0x2e7048u;
    // NOP
label_2e704c:
    // 0x2e704c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2e7050:
    if (ctx->pc == 0x2E7050u) {
        ctx->pc = 0x2E7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E704Cu;
        // 0x2e7050: 0x8e2411c0  lw          $a0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7054u;
        goto label_2e7054;
    }
    ctx->pc = 0x2E704Cu;
    {
        const bool branch_taken_0x2e704c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e704c) {
            ctx->pc = 0x2E7050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E704Cu;
            // 0x2e7050: 0x8e2411c0  lw          $a0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7060u;
            goto label_2e7060;
        }
    }
    ctx->pc = 0x2E7054u;
label_2e7054:
    // 0x2e7054: 0xc0bbf2a  jal         func_2EFCA8
label_2e7058:
    if (ctx->pc == 0x2E7058u) {
        ctx->pc = 0x2E7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7054u;
        // 0x2e7058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E705Cu;
        goto label_2e705c;
    }
    ctx->pc = 0x2E7054u;
    SET_GPR_U32(ctx, 31, 0x2E705Cu);
    ctx->pc = 0x2E7058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7054u;
    // 0x2e7058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCA8u, 0x2E7054u, 0x2E705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E705Cu;
label_2e705c:
    // 0x2e705c: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x2e705cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2e7060:
    // 0x2e7060: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2e7064:
    // 0x2e7064: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2e7064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2e7068:
    // 0x2e7068: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_2e706c:
    if (ctx->pc == 0x2E706Cu) {
        ctx->pc = 0x2E706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7068u;
        // 0x2e706c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7070u;
        goto label_2e7070;
    }
    ctx->pc = 0x2E7068u;
    {
        const bool branch_taken_0x2e7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7068u;
        // 0x2e706c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7068) {
            ctx->pc = 0x2E70B4u;
            goto label_2e70b4;
        }
    }
    ctx->pc = 0x2E7070u;
label_2e7070:
    // 0x2e7070: 0xc62112b4  lwc1        $f1, 0x12B4($s1)
    ctx->pc = 0x2e7070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7074:
    // 0x2e7074: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2e7074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7078:
    // 0x2e7078: 0x0  nop
    ctx->pc = 0x2e7078u;
    // NOP
label_2e707c:
    // 0x2e707c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2e7080:
    if (ctx->pc == 0x2E7080u) {
        ctx->pc = 0x2E7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E707Cu;
        // 0x2e7080: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7084u;
        goto label_2e7084;
    }
    ctx->pc = 0x2E707Cu;
    {
        const bool branch_taken_0x2e707c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E707Cu;
        // 0x2e7080: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e707c) {
            ctx->pc = 0x2E70B0u;
            goto label_2e70b0;
        }
    }
    ctx->pc = 0x2E7084u;
label_2e7084:
    // 0x2e7084: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7088:
    // 0x2e7088: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e708c:
    // 0x2e708c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2e708cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7090:
    // 0x2e7090: 0x0  nop
    ctx->pc = 0x2e7090u;
    // NOP
label_2e7094:
    // 0x2e7094: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2e7098:
    if (ctx->pc == 0x2E7098u) {
        ctx->pc = 0x2E7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7094u;
        // 0x2e7098: 0xe62012b4  swc1        $f0, 0x12B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E709Cu;
        goto label_2e709c;
    }
    ctx->pc = 0x2E7094u;
    {
        const bool branch_taken_0x2e7094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7094u;
        // 0x2e7098: 0xe62012b4  swc1        $f0, 0x12B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7094) {
            ctx->pc = 0x2E70B0u;
            goto label_2e70b0;
        }
    }
    ctx->pc = 0x2E709Cu;
label_2e709c:
    // 0x2e709c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2e709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_2e70a0:
    // 0x2e70a0: 0xe63412b4  swc1        $f20, 0x12B4($s1)
    ctx->pc = 0x2e70a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
label_2e70a4:
    // 0x2e70a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e70a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e70a8:
    // 0x2e70a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2e70ac:
    // 0x2e70ac: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e70acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2e70b0:
    // 0x2e70b0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2e70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2e70b4:
    // 0x2e70b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e70b8:
    // 0x2e70b8: 0xc0f6a96  jal         func_3DAA58
label_2e70bc:
    if (ctx->pc == 0x2E70BCu) {
        ctx->pc = 0x2E70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70B8u;
        // 0x2e70bc: 0xc4561760  lwc1        $f22, 0x1760($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70C0u;
        goto label_2e70c0;
    }
    ctx->pc = 0x2E70B8u;
    SET_GPR_U32(ctx, 31, 0x2E70C0u);
    ctx->pc = 0x2E70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70B8u;
    // 0x2e70bc: 0xc4561760  lwc1        $f22, 0x1760($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E70B8u, 0x2E70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70C0u;
label_2e70c0:
    // 0x2e70c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2e70c4:
    // 0x2e70c4: 0x9223047d  lbu         $v1, 0x47D($s1)
    ctx->pc = 0x2e70c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_2e70c8:
    // 0x2e70c8: 0x24455870  addiu       $a1, $v0, 0x5870
    ctx->pc = 0x2e70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
label_2e70cc:
    // 0x2e70cc: 0x1460011b  bnez        $v1, . + 4 + (0x11B << 2)
label_2e70d0:
    if (ctx->pc == 0x2E70D0u) {
        ctx->pc = 0x2E70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70CCu;
        // 0x2e70d0: 0xae2011e0  sw          $zero, 0x11E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70D4u;
        goto label_2e70d4;
    }
    ctx->pc = 0x2E70CCu;
    {
        const bool branch_taken_0x2e70cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70CCu;
        // 0x2e70d0: 0xae2011e0  sw          $zero, 0x11E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70cc) {
            ctx->pc = 0x2E753Cu;
            goto label_2e753c;
        }
    }
    ctx->pc = 0x2E70D4u;
label_2e70d4:
    // 0x2e70d4: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2e70d8:
    // 0x2e70d8: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2e70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2e70dc:
    // 0x2e70dc: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2e70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2e70e0:
    // 0x2e70e0: 0x50640117  beql        $v1, $a0, . + 4 + (0x117 << 2)
label_2e70e4:
    if (ctx->pc == 0x2E70E4u) {
        ctx->pc = 0x2E70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70E0u;
        // 0x2e70e4: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70E8u;
        goto label_2e70e8;
    }
    ctx->pc = 0x2E70E0u;
    {
        const bool branch_taken_0x2e70e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e70e0) {
            ctx->pc = 0x2E70E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E70E0u;
            // 0x2e70e4: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7540u;
            goto label_2e7540;
        }
    }
    ctx->pc = 0x2E70E8u;
label_2e70e8:
    // 0x2e70e8: 0x90a2027c  lbu         $v0, 0x27C($a1)
    ctx->pc = 0x2e70e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 636)));
label_2e70ec:
    // 0x2e70ec: 0x50400114  beql        $v0, $zero, . + 4 + (0x114 << 2)
label_2e70f0:
    if (ctx->pc == 0x2E70F0u) {
        ctx->pc = 0x2E70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70ECu;
        // 0x2e70f0: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70F4u;
        goto label_2e70f4;
    }
    ctx->pc = 0x2E70ECu;
    {
        const bool branch_taken_0x2e70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e70ec) {
            ctx->pc = 0x2E70F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E70ECu;
            // 0x2e70f0: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7540u;
            goto label_2e7540;
        }
    }
    ctx->pc = 0x2E70F4u;
label_2e70f4:
    // 0x2e70f4: 0x8e240ffc  lw          $a0, 0xFFC($s1)
    ctx->pc = 0x2e70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
label_2e70f8:
    // 0x2e70f8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2e70fc:
    // 0x2e70fc: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2e70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2e7100:
    // 0x2e7100: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e7100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e7104:
    // 0x2e7104: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2e7104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2e7108:
    // 0x2e7108: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
label_2e710c:
    if (ctx->pc == 0x2E710Cu) {
        ctx->pc = 0x2E710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7108u;
        // 0x2e710c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7110u;
        goto label_2e7110;
    }
    ctx->pc = 0x2E7108u;
    {
        const bool branch_taken_0x2e7108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7108u;
        // 0x2e710c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7108) {
            ctx->pc = 0x2E7438u;
            goto label_2e7438;
        }
    }
    ctx->pc = 0x2E7110u;
label_2e7110:
    // 0x2e7110: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2e7110u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e7114:
    // 0x2e7114: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x2e7114u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
label_2e7118:
    // 0x2e7118: 0x8e220ffc  lw          $v0, 0xFFC($s1)
    ctx->pc = 0x2e7118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
label_2e711c:
    // 0x2e711c: 0x0  nop
    ctx->pc = 0x2e711cu;
    // NOP
label_2e7120:
    // 0x2e7120: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x2e7120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2e7124:
    // 0x2e7124: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2e7124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2e7128:
    // 0x2e7128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e712c:
    // 0x2e712c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2e712cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e7130:
    // 0x2e7130: 0x524000ba  beql        $s2, $zero, . + 4 + (0xBA << 2)
label_2e7134:
    if (ctx->pc == 0x2E7134u) {
        ctx->pc = 0x2E7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7130u;
        // 0x2e7134: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7138u;
        goto label_2e7138;
    }
    ctx->pc = 0x2E7130u;
    {
        const bool branch_taken_0x2e7130 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7130) {
            ctx->pc = 0x2E7134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7130u;
            // 0x2e7134: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E741Cu;
            goto label_2e741c;
        }
    }
    ctx->pc = 0x2E7138u;
label_2e7138:
    // 0x2e7138: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2e7138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_2e713c:
    // 0x2e713c: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x2e713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_2e7140:
    // 0x2e7140: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x2e7140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_2e7144:
    // 0x2e7144: 0x544000b4  bnel        $v0, $zero, . + 4 + (0xB4 << 2)
label_2e7148:
    if (ctx->pc == 0x2E7148u) {
        ctx->pc = 0x2E7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7144u;
        // 0x2e7148: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E714Cu;
        goto label_2e714c;
    }
    ctx->pc = 0x2E7144u;
    {
        const bool branch_taken_0x2e7144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7144) {
            ctx->pc = 0x2E7148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7144u;
            // 0x2e7148: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E714Cu;
label_2e714c:
    // 0x2e714c: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x2e714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2e7150:
    // 0x2e7150: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e7150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2e7154:
    // 0x2e7154: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_2e7158:
    if (ctx->pc == 0x2E7158u) {
        ctx->pc = 0x2E7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7154u;
        // 0x2e7158: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E715Cu;
        goto label_2e715c;
    }
    ctx->pc = 0x2E7154u;
    {
        const bool branch_taken_0x2e7154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7154) {
            ctx->pc = 0x2E7158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7154u;
            // 0x2e7158: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E715Cu;
label_2e715c:
    // 0x2e715c: 0x8e300224  lw          $s0, 0x224($s1)
    ctx->pc = 0x2e715cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2e7160:
    // 0x2e7160: 0xc097f2a  jal         func_25FCA8
label_2e7164:
    if (ctx->pc == 0x2E7164u) {
        ctx->pc = 0x2E7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7160u;
        // 0x2e7164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7168u;
        goto label_2e7168;
    }
    ctx->pc = 0x2E7160u;
    SET_GPR_U32(ctx, 31, 0x2E7168u);
    ctx->pc = 0x2E7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7160u;
    // 0x2e7164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2E7160u, 0x2E7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7168u;
label_2e7168:
    // 0x2e7168: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e7168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e716c:
    // 0x2e716c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e716cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e7170:
    // 0x2e7170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e7174:
    // 0x2e7174: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2e7174u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7178:
    // 0x2e7178: 0x52600011  beql        $s3, $zero, . + 4 + (0x11 << 2)
label_2e717c:
    if (ctx->pc == 0x2E717Cu) {
        ctx->pc = 0x2E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7178u;
        // 0x2e717c: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7180u;
        goto label_2e7180;
    }
    ctx->pc = 0x2E7178u;
    {
        const bool branch_taken_0x2e7178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7178) {
            ctx->pc = 0x2E717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7178u;
            // 0x2e717c: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71C0u;
            goto label_2e71c0;
        }
    }
    ctx->pc = 0x2E7180u;
label_2e7180:
    // 0x2e7180: 0xc097f2e  jal         func_25FCB8
label_2e7184:
    if (ctx->pc == 0x2E7184u) {
        ctx->pc = 0x2E7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7180u;
        // 0x2e7184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7188u;
        goto label_2e7188;
    }
    ctx->pc = 0x2E7180u;
    SET_GPR_U32(ctx, 31, 0x2E7188u);
    ctx->pc = 0x2E7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7180u;
    // 0x2e7184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCB8u, 0x2E7180u, 0x2E7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7188u;
label_2e7188:
    // 0x2e7188: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2e718c:
    if (ctx->pc == 0x2E718Cu) {
        ctx->pc = 0x2E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7188u;
        // 0x2e718c: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7190u;
        goto label_2e7190;
    }
    ctx->pc = 0x2E7188u;
    {
        const bool branch_taken_0x2e7188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7188) {
            ctx->pc = 0x2E718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7188u;
            // 0x2e718c: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71C0u;
            goto label_2e71c0;
        }
    }
    ctx->pc = 0x2E7190u;
label_2e7190:
    // 0x2e7190: 0xc097f52  jal         func_25FD48
label_2e7194:
    if (ctx->pc == 0x2E7194u) {
        ctx->pc = 0x2E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7190u;
        // 0x2e7194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7198u;
        goto label_2e7198;
    }
    ctx->pc = 0x2E7190u;
    SET_GPR_U32(ctx, 31, 0x2E7198u);
    ctx->pc = 0x2E7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7190u;
    // 0x2e7194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FD48u, 0x2E7190u, 0x2E7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7198u;
label_2e7198:
    // 0x2e7198: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2e719c:
    if (ctx->pc == 0x2E719Cu) {
        ctx->pc = 0x2E719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7198u;
        // 0x2e719c: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71A0u;
        goto label_2e71a0;
    }
    ctx->pc = 0x2E7198u;
    {
        const bool branch_taken_0x2e7198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7198) {
            ctx->pc = 0x2E719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7198u;
            // 0x2e719c: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71C0u;
            goto label_2e71c0;
        }
    }
    ctx->pc = 0x2E71A0u;
label_2e71a0:
    // 0x2e71a0: 0xc097f26  jal         func_25FC98
label_2e71a4:
    if (ctx->pc == 0x2E71A4u) {
        ctx->pc = 0x2E71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71A0u;
        // 0x2e71a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71A8u;
        goto label_2e71a8;
    }
    ctx->pc = 0x2E71A0u;
    SET_GPR_U32(ctx, 31, 0x2E71A8u);
    ctx->pc = 0x2E71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71A0u;
    // 0x2e71a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E71A0u, 0x2E71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71A8u;
label_2e71a8:
    // 0x2e71a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e71a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e71ac:
    // 0x2e71ac: 0xc097f26  jal         func_25FC98
label_2e71b0:
    if (ctx->pc == 0x2E71B0u) {
        ctx->pc = 0x2E71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71ACu;
        // 0x2e71b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71B4u;
        goto label_2e71b4;
    }
    ctx->pc = 0x2E71ACu;
    SET_GPR_U32(ctx, 31, 0x2E71B4u);
    ctx->pc = 0x2E71B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71ACu;
    // 0x2e71b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E71ACu, 0x2E71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71B4u;
label_2e71b4:
    // 0x2e71b4: 0x52020098  beql        $s0, $v0, . + 4 + (0x98 << 2)
label_2e71b8:
    if (ctx->pc == 0x2E71B8u) {
        ctx->pc = 0x2E71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71B4u;
        // 0x2e71b8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71BCu;
        goto label_2e71bc;
    }
    ctx->pc = 0x2E71B4u;
    {
        const bool branch_taken_0x2e71b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e71b4) {
            ctx->pc = 0x2E71B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E71B4u;
            // 0x2e71b8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E71BCu;
label_2e71bc:
    // 0x2e71bc: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2e71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2e71c0:
    // 0x2e71c0: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x2e71c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2e71c4:
    // 0x2e71c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e71c8:
    // 0x2e71c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e71cc:
    // 0x2e71cc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2e71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2e71d0:
    // 0x2e71d0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2e71d4:
    // 0x2e71d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e71d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e71d8:
    // 0x2e71d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e71d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e71dc:
    // 0x2e71dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e71dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e71e0:
    // 0x2e71e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2e71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e71e4:
    // 0x2e71e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2e71e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e71e8:
    // 0x2e71e8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e71e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e71ec:
    // 0x2e71ec: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2e71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e71f0:
    // 0x2e71f0: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2e71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e71f4:
    // 0x2e71f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e71f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2e71f8:
    // 0x2e71f8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e71f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2e71fc:
    // 0x2e71fc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e71fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e7200:
    // 0x2e7200: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2e7200u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2e7204:
    // 0x2e7204: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2e7204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2e7208:
    // 0x2e7208: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e7208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e720c:
    // 0x2e720c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7210:
    // 0x2e7210: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e7210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e7214:
    // 0x2e7214: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e7214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2e7218:
    // 0x2e7218: 0x0  nop
    ctx->pc = 0x2e7218u;
    // NOP
label_2e721c:
    // 0x2e721c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2e721cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7220:
    // 0x2e7220: 0x0  nop
    ctx->pc = 0x2e7220u;
    // NOP
label_2e7224:
    // 0x2e7224: 0x4503007c  bc1tl       . + 4 + (0x7C << 2)
label_2e7228:
    if (ctx->pc == 0x2E7228u) {
        ctx->pc = 0x2E7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7224u;
        // 0x2e7228: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E722Cu;
        goto label_2e722c;
    }
    ctx->pc = 0x2E7224u;
    {
        const bool branch_taken_0x2e7224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7224) {
            ctx->pc = 0x2E7228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7224u;
            // 0x2e7228: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E722Cu;
label_2e722c:
    // 0x2e722c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2e722cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2e7230:
    // 0x2e7230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7234:
    // 0x2e7234: 0x0  nop
    ctx->pc = 0x2e7234u;
    // NOP
label_2e7238:
    // 0x2e7238: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e7238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e723c:
    // 0x2e723c: 0x0  nop
    ctx->pc = 0x2e723cu;
    // NOP
label_2e7240:
    // 0x2e7240: 0x45030075  bc1tl       . + 4 + (0x75 << 2)
label_2e7244:
    if (ctx->pc == 0x2E7244u) {
        ctx->pc = 0x2E7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7240u;
        // 0x2e7244: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7248u;
        goto label_2e7248;
    }
    ctx->pc = 0x2E7240u;
    {
        const bool branch_taken_0x2e7240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7240) {
            ctx->pc = 0x2E7244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7240u;
            // 0x2e7244: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E7248u;
label_2e7248:
    // 0x2e7248: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e7248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2e724c:
    // 0x2e724c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7250:
    // 0x2e7250: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e7250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e7254:
    // 0x2e7254: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e7254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e7258:
    // 0x2e7258: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e7258u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e725c:
    // 0x2e725c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e725cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e7260:
    // 0x2e7260: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2e7260u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e7264:
    // 0x2e7264: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e7268:
    // 0x2e7268: 0xc440b804  lwc1        $f0, -0x47FC($v0)
    ctx->pc = 0x2e7268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e726c:
    // 0x2e726c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e726cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7270:
    // 0x2e7270: 0x0  nop
    ctx->pc = 0x2e7270u;
    // NOP
label_2e7274:
    // 0x2e7274: 0x45020068  bc1fl       . + 4 + (0x68 << 2)
label_2e7278:
    if (ctx->pc == 0x2E7278u) {
        ctx->pc = 0x2E7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7274u;
        // 0x2e7278: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E727Cu;
        goto label_2e727c;
    }
    ctx->pc = 0x2E7274u;
    {
        const bool branch_taken_0x2e7274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7274) {
            ctx->pc = 0x2E7278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7274u;
            // 0x2e7278: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E727Cu;
label_2e727c:
    // 0x2e727c: 0xc097fb6  jal         func_25FED8
label_2e7280:
    if (ctx->pc == 0x2E7280u) {
        ctx->pc = 0x2E7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E727Cu;
        // 0x2e7280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7284u;
        goto label_2e7284;
    }
    ctx->pc = 0x2E727Cu;
    SET_GPR_U32(ctx, 31, 0x2E7284u);
    ctx->pc = 0x2E7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E727Cu;
    // 0x2e7280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FED8u, 0x2E727Cu, 0x2E7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7284u;
label_2e7284:
    // 0x2e7284: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_2e7288:
    if (ctx->pc == 0x2E7288u) {
        ctx->pc = 0x2E728Cu;
        goto label_2e728c;
    }
    ctx->pc = 0x2E7284u;
    {
        const bool branch_taken_0x2e7284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7284) {
            ctx->pc = 0x2E7380u;
            goto label_2e7380;
        }
    }
    ctx->pc = 0x2E728Cu;
label_2e728c:
    // 0x2e728c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e7290:
    // 0x2e7290: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e7290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
label_2e7294:
    // 0x2e7294: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2e7298:
    if (ctx->pc == 0x2E7298u) {
        ctx->pc = 0x2E7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7294u;
        // 0x2e7298: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E729Cu;
        goto label_2e729c;
    }
    ctx->pc = 0x2E7294u;
    {
        const bool branch_taken_0x2e7294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7294) {
            ctx->pc = 0x2E7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7294u;
            // 0x2e7298: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E72B0u;
            goto label_2e72b0;
        }
    }
    ctx->pc = 0x2E729Cu;
label_2e729c:
    // 0x2e729c: 0xc08f68a  jal         func_23DA28
label_2e72a0:
    if (ctx->pc == 0x2E72A0u) {
        ctx->pc = 0x2E72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E729Cu;
        // 0x2e72a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72A4u;
        goto label_2e72a4;
    }
    ctx->pc = 0x2E729Cu;
    SET_GPR_U32(ctx, 31, 0x2E72A4u);
    ctx->pc = 0x2E72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E729Cu;
    // 0x2e72a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2E729Cu, 0x2E72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72A4u;
label_2e72a4:
    // 0x2e72a4: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
label_2e72a8:
    if (ctx->pc == 0x2E72A8u) {
        ctx->pc = 0x2E72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A4u;
        // 0x2e72a8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72ACu;
        goto label_2e72ac;
    }
    ctx->pc = 0x2E72A4u;
    {
        const bool branch_taken_0x2e72a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72a4) {
            ctx->pc = 0x2E72A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E72A4u;
            // 0x2e72a8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E72ACu;
label_2e72ac:
    // 0x2e72ac: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2e72acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2e72b0:
    // 0x2e72b0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2e72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2e72b4:
    // 0x2e72b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2e72b8:
    if (ctx->pc == 0x2E72B8u) {
        ctx->pc = 0x2E72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72B4u;
        // 0x2e72b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72BCu;
        goto label_2e72bc;
    }
    ctx->pc = 0x2E72B4u;
    {
        const bool branch_taken_0x2e72b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72B4u;
        // 0x2e72b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72b4) {
            ctx->pc = 0x2E72D0u;
            goto label_2e72d0;
        }
    }
    ctx->pc = 0x2E72BCu;
label_2e72bc:
    // 0x2e72bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e72bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e72c0:
    // 0x2e72c0: 0x0  nop
    ctx->pc = 0x2e72c0u;
    // NOP
label_2e72c4:
    // 0x2e72c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2e72c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2e72c8:
    // 0x2e72c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e72cc:
    if (ctx->pc == 0x2E72CCu) {
        ctx->pc = 0x2E72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C8u;
        // 0x2e72cc: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72D0u;
        goto label_2e72d0;
    }
    ctx->pc = 0x2E72C8u;
    {
        const bool branch_taken_0x2e72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C8u;
        // 0x2e72cc: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72c8) {
            ctx->pc = 0x2E72ECu;
            goto label_2e72ec;
        }
    }
    ctx->pc = 0x2E72D0u;
label_2e72d0:
    // 0x2e72d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e72d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e72d4:
    // 0x2e72d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e72d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e72d8:
    // 0x2e72d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e72d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e72dc:
    // 0x2e72dc: 0x0  nop
    ctx->pc = 0x2e72dcu;
    // NOP
label_2e72e0:
    // 0x2e72e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2e72e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2e72e4:
    // 0x2e72e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2e72e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2e72e8:
    // 0x2e72e8: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x2e72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e72ec:
    // 0x2e72ec: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2e72ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e72f0:
    // 0x2e72f0: 0x0  nop
    ctx->pc = 0x2e72f0u;
    // NOP
label_2e72f4:
    // 0x2e72f4: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
label_2e72f8:
    if (ctx->pc == 0x2E72F8u) {
        ctx->pc = 0x2E72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72F4u;
        // 0x2e72f8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72FCu;
        goto label_2e72fc;
    }
    ctx->pc = 0x2E72F4u;
    {
        const bool branch_taken_0x2e72f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e72f4) {
            ctx->pc = 0x2E72F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E72F4u;
            // 0x2e72f8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E72FCu;
label_2e72fc:
    // 0x2e72fc: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x2e72fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_2e7300:
    // 0x2e7300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7304:
    // 0x2e7304: 0x0  nop
    ctx->pc = 0x2e7304u;
    // NOP
label_2e7308:
    // 0x2e7308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e730c:
    // 0x2e730c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2e730cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7310:
    // 0x2e7310: 0x0  nop
    ctx->pc = 0x2e7310u;
    // NOP
label_2e7314:
    // 0x2e7314: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2e7318:
    if (ctx->pc == 0x2E7318u) {
        ctx->pc = 0x2E7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7314u;
        // 0x2e7318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E731Cu;
        goto label_2e731c;
    }
    ctx->pc = 0x2E7314u;
    {
        const bool branch_taken_0x2e7314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7314) {
            ctx->pc = 0x2E7318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7314u;
            // 0x2e7318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E732Cu;
            goto label_2e732c;
        }
    }
    ctx->pc = 0x2E731Cu;
label_2e731c:
    // 0x2e731c: 0xc083976  jal         func_20E5D8
label_2e7320:
    if (ctx->pc == 0x2E7320u) {
        ctx->pc = 0x2E7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E731Cu;
        // 0x2e7320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7324u;
        goto label_2e7324;
    }
    ctx->pc = 0x2E731Cu;
    SET_GPR_U32(ctx, 31, 0x2E7324u);
    ctx->pc = 0x2E7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E731Cu;
    // 0x2e7320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2E731Cu, 0x2E7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7324u;
label_2e7324:
    // 0x2e7324: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e7328:
    if (ctx->pc == 0x2E7328u) {
        ctx->pc = 0x2E7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7324u;
        // 0x2e7328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E732Cu;
        goto label_2e732c;
    }
    ctx->pc = 0x2E7324u;
    {
        const bool branch_taken_0x2e7324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7324u;
        // 0x2e7328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7324) {
            ctx->pc = 0x2E7338u;
            goto label_2e7338;
        }
    }
    ctx->pc = 0x2E732Cu;
label_2e732c:
    // 0x2e732c: 0xc083976  jal         func_20E5D8
label_2e7330:
    if (ctx->pc == 0x2E7330u) {
        ctx->pc = 0x2E7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E732Cu;
        // 0x2e7330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7334u;
        goto label_2e7334;
    }
    ctx->pc = 0x2E732Cu;
    SET_GPR_U32(ctx, 31, 0x2E7334u);
    ctx->pc = 0x2E7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E732Cu;
    // 0x2e7330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2E732Cu, 0x2E7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7334u;
label_2e7334:
    // 0x2e7334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7338:
    // 0x2e7338: 0xc0cda26  jal         func_336898
label_2e733c:
    if (ctx->pc == 0x2E733Cu) {
        ctx->pc = 0x2E733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7338u;
        // 0x2e733c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7340u;
        goto label_2e7340;
    }
    ctx->pc = 0x2E7338u;
    SET_GPR_U32(ctx, 31, 0x2E7340u);
    ctx->pc = 0x2E733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7338u;
    // 0x2e733c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2E7338u, 0x2E7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7340u;
label_2e7340:
    // 0x2e7340: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e7340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e7344:
    // 0x2e7344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7348:
    // 0x2e7348: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e734c:
    // 0x2e734c: 0xc07f540  jal         func_1FD500
label_2e7350:
    if (ctx->pc == 0x2E7350u) {
        ctx->pc = 0x2E7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E734Cu;
        // 0x2e7350: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7354u;
        goto label_2e7354;
    }
    ctx->pc = 0x2E734Cu;
    SET_GPR_U32(ctx, 31, 0x2E7354u);
    ctx->pc = 0x2E7350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E734Cu;
    // 0x2e7350: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2E734Cu, 0x2E7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7354u;
label_2e7354:
    // 0x2e7354: 0xc097f26  jal         func_25FC98
label_2e7358:
    if (ctx->pc == 0x2E7358u) {
        ctx->pc = 0x2E7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7354u;
        // 0x2e7358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E735Cu;
        goto label_2e735c;
    }
    ctx->pc = 0x2E7354u;
    SET_GPR_U32(ctx, 31, 0x2E735Cu);
    ctx->pc = 0x2E7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7354u;
    // 0x2e7358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E7354u, 0x2E735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E735Cu;
label_2e735c:
    // 0x2e735c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e735cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e7360:
    // 0x2e7360: 0xc097f26  jal         func_25FC98
label_2e7364:
    if (ctx->pc == 0x2E7364u) {
        ctx->pc = 0x2E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7360u;
        // 0x2e7364: 0xae22022c  sw          $v0, 0x22C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7368u;
        goto label_2e7368;
    }
    ctx->pc = 0x2E7360u;
    SET_GPR_U32(ctx, 31, 0x2E7368u);
    ctx->pc = 0x2E7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7360u;
    // 0x2e7364: 0xae22022c  sw          $v0, 0x22C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E7360u, 0x2E7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7368u;
label_2e7368:
    // 0x2e7368: 0xc0a2dc4  jal         func_28B710
label_2e736c:
    if (ctx->pc == 0x2E736Cu) {
        ctx->pc = 0x2E736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7368u;
        // 0x2e736c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7370u;
        goto label_2e7370;
    }
    ctx->pc = 0x2E7368u;
    SET_GPR_U32(ctx, 31, 0x2E7370u);
    ctx->pc = 0x2E736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7368u;
    // 0x2e736c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B710u, 0x2E7368u, 0x2E7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7370u;
label_2e7370:
    // 0x2e7370: 0xc0837b4  jal         func_20DED0
label_2e7374:
    if (ctx->pc == 0x2E7374u) {
        ctx->pc = 0x2E7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7370u;
        // 0x2e7374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7378u;
        goto label_2e7378;
    }
    ctx->pc = 0x2E7370u;
    SET_GPR_U32(ctx, 31, 0x2E7378u);
    ctx->pc = 0x2E7374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7370u;
    // 0x2e7374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x2E7370u, 0x2E7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7378u;
label_2e7378:
    // 0x2e7378: 0x10000027  b           . + 4 + (0x27 << 2)
label_2e737c:
    if (ctx->pc == 0x2E737Cu) {
        ctx->pc = 0x2E737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7378u;
        // 0x2e737c: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7380u;
        goto label_2e7380;
    }
    ctx->pc = 0x2E7378u;
    {
        const bool branch_taken_0x2e7378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7378u;
        // 0x2e737c: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7378) {
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E7380u;
label_2e7380:
    // 0x2e7380: 0xc097fa2  jal         func_25FE88
label_2e7384:
    if (ctx->pc == 0x2E7384u) {
        ctx->pc = 0x2E7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7380u;
        // 0x2e7384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7388u;
        goto label_2e7388;
    }
    ctx->pc = 0x2E7380u;
    SET_GPR_U32(ctx, 31, 0x2E7388u);
    ctx->pc = 0x2E7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7380u;
    // 0x2e7384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE88u, 0x2E7380u, 0x2E7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7388u;
label_2e7388:
    // 0x2e7388: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2e738c:
    if (ctx->pc == 0x2E738Cu) {
        ctx->pc = 0x2E7390u;
        goto label_2e7390;
    }
    ctx->pc = 0x2E7388u;
    {
        const bool branch_taken_0x2e7388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7388) {
            ctx->pc = 0x2E73FCu;
            goto label_2e73fc;
        }
    }
    ctx->pc = 0x2E7390u;
label_2e7390:
    // 0x2e7390: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e7390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e7394:
    // 0x2e7394: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e7394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
label_2e7398:
    // 0x2e7398: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_2e739c:
    if (ctx->pc == 0x2E739Cu) {
        ctx->pc = 0x2E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7398u;
        // 0x2e739c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73A0u;
        goto label_2e73a0;
    }
    ctx->pc = 0x2E7398u;
    {
        const bool branch_taken_0x2e7398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7398u;
        // 0x2e739c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7398) {
            ctx->pc = 0x2E7414u;
            goto label_2e7414;
        }
    }
    ctx->pc = 0x2E73A0u;
label_2e73a0:
    // 0x2e73a0: 0xc0bbea2  jal         func_2EFA88
label_2e73a4:
    if (ctx->pc == 0x2E73A4u) {
        ctx->pc = 0x2E73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A0u;
        // 0x2e73a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73A8u;
        goto label_2e73a8;
    }
    ctx->pc = 0x2E73A0u;
    SET_GPR_U32(ctx, 31, 0x2E73A8u);
    ctx->pc = 0x2E73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73A0u;
    // 0x2e73a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA88u, 0x2E73A0u, 0x2E73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73A8u;
label_2e73a8:
    // 0x2e73a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2e73ac:
    if (ctx->pc == 0x2E73ACu) {
        ctx->pc = 0x2E73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A8u;
        // 0x2e73ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73B0u;
        goto label_2e73b0;
    }
    ctx->pc = 0x2E73A8u;
    {
        const bool branch_taken_0x2e73a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A8u;
        // 0x2e73ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73a8) {
            ctx->pc = 0x2E7414u;
            goto label_2e7414;
        }
    }
    ctx->pc = 0x2E73B0u;
label_2e73b0:
    // 0x2e73b0: 0xc0cda26  jal         func_336898
label_2e73b4:
    if (ctx->pc == 0x2E73B4u) {
        ctx->pc = 0x2E73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73B0u;
        // 0x2e73b4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73B8u;
        goto label_2e73b8;
    }
    ctx->pc = 0x2E73B0u;
    SET_GPR_U32(ctx, 31, 0x2E73B8u);
    ctx->pc = 0x2E73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73B0u;
    // 0x2e73b4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2E73B0u, 0x2E73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73B8u;
label_2e73b8:
    // 0x2e73b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e73b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2e73bc:
    // 0x2e73bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e73bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e73c0:
    // 0x2e73c0: 0xc07f540  jal         func_1FD500
label_2e73c4:
    if (ctx->pc == 0x2E73C4u) {
        ctx->pc = 0x2E73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73C0u;
        // 0x2e73c4: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73C8u;
        goto label_2e73c8;
    }
    ctx->pc = 0x2E73C0u;
    SET_GPR_U32(ctx, 31, 0x2E73C8u);
    ctx->pc = 0x2E73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73C0u;
    // 0x2e73c4: 0x26a49b10  addiu       $a0, $s5, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2E73C0u, 0x2E73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73C8u;
label_2e73c8:
    // 0x2e73c8: 0xc097f26  jal         func_25FC98
label_2e73cc:
    if (ctx->pc == 0x2E73CCu) {
        ctx->pc = 0x2E73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73C8u;
        // 0x2e73cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73D0u;
        goto label_2e73d0;
    }
    ctx->pc = 0x2E73C8u;
    SET_GPR_U32(ctx, 31, 0x2E73D0u);
    ctx->pc = 0x2E73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73C8u;
    // 0x2e73cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E73C8u, 0x2E73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73D0u;
label_2e73d0:
    // 0x2e73d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e73d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e73d4:
    // 0x2e73d4: 0xc097f26  jal         func_25FC98
label_2e73d8:
    if (ctx->pc == 0x2E73D8u) {
        ctx->pc = 0x2E73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D4u;
        // 0x2e73d8: 0xae22022c  sw          $v0, 0x22C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73DCu;
        goto label_2e73dc;
    }
    ctx->pc = 0x2E73D4u;
    SET_GPR_U32(ctx, 31, 0x2E73DCu);
    ctx->pc = 0x2E73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73D4u;
    // 0x2e73d8: 0xae22022c  sw          $v0, 0x22C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E73D4u, 0x2E73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73DCu;
label_2e73dc:
    // 0x2e73dc: 0xc0a2dc4  jal         func_28B710
label_2e73e0:
    if (ctx->pc == 0x2E73E0u) {
        ctx->pc = 0x2E73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73DCu;
        // 0x2e73e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73E4u;
        goto label_2e73e4;
    }
    ctx->pc = 0x2E73DCu;
    SET_GPR_U32(ctx, 31, 0x2E73E4u);
    ctx->pc = 0x2E73E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73DCu;
    // 0x2e73e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B710u, 0x2E73DCu, 0x2E73E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73E4u;
label_2e73e4:
    // 0x2e73e4: 0xc0837b4  jal         func_20DED0
label_2e73e8:
    if (ctx->pc == 0x2E73E8u) {
        ctx->pc = 0x2E73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73E4u;
        // 0x2e73e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73ECu;
        goto label_2e73ec;
    }
    ctx->pc = 0x2E73E4u;
    SET_GPR_U32(ctx, 31, 0x2E73ECu);
    ctx->pc = 0x2E73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73E4u;
    // 0x2e73e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x2E73E4u, 0x2E73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73ECu;
label_2e73ec:
    // 0x2e73ec: 0xc0a2df0  jal         func_28B7C0
label_2e73f0:
    if (ctx->pc == 0x2E73F0u) {
        ctx->pc = 0x2E73F4u;
        goto label_2e73f4;
    }
    ctx->pc = 0x2E73ECu;
    SET_GPR_U32(ctx, 31, 0x2E73F4u);
    ctx->pc = 0x28B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B7C0u, 0x2E73ECu, 0x2E73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73F4u;
label_2e73f4:
    // 0x2e73f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e73f8:
    if (ctx->pc == 0x2E73F8u) {
        ctx->pc = 0x2E73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73F4u;
        // 0x2e73f8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73FCu;
        goto label_2e73fc;
    }
    ctx->pc = 0x2E73F4u;
    {
        const bool branch_taken_0x2e73f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73F4u;
        // 0x2e73f8: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73f4) {
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E73FCu;
label_2e73fc:
    // 0x2e73fc: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2e73fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7400:
    // 0x2e7400: 0x0  nop
    ctx->pc = 0x2e7400u;
    // NOP
label_2e7404:
    // 0x2e7404: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2e7408:
    if (ctx->pc == 0x2E7408u) {
        ctx->pc = 0x2E7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7404u;
        // 0x2e7408: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E740Cu;
        goto label_2e740c;
    }
    ctx->pc = 0x2E7404u;
    {
        const bool branch_taken_0x2e7404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7404) {
            ctx->pc = 0x2E7408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7404u;
            // 0x2e7408: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7418u;
            goto label_2e7418;
        }
    }
    ctx->pc = 0x2E740Cu;
label_2e740c:
    // 0x2e740c: 0xae3211e0  sw          $s2, 0x11E0($s1)
    ctx->pc = 0x2e740cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 18));
label_2e7410:
    // 0x2e7410: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2e7410u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_2e7414:
    // 0x2e7414: 0x8e220ffc  lw          $v0, 0xFFC($s1)
    ctx->pc = 0x2e7414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
label_2e7418:
    // 0x2e7418: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e7418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e741c:
    // 0x2e741c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2e741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2e7420:
    // 0x2e7420: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2e7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2e7424:
    // 0x2e7424: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e7424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e7428:
    // 0x2e7428: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2e7428u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2e742c:
    // 0x2e742c: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e742cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e7430:
    // 0x2e7430: 0x5460ff3b  bnel        $v1, $zero, . + 4 + (-0xC5 << 2)
label_2e7434:
    if (ctx->pc == 0x2E7434u) {
        ctx->pc = 0x2E7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7430u;
        // 0x2e7434: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7438u;
        goto label_2e7438;
    }
    ctx->pc = 0x2E7430u;
    {
        const bool branch_taken_0x2e7430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7430) {
            ctx->pc = 0x2E7434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7430u;
            // 0x2e7434: 0x8e220ffc  lw          $v0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7120;
        }
    }
    ctx->pc = 0x2E7438u;
label_2e7438:
    // 0x2e7438: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2e7438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2e743c:
    // 0x2e743c: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_2e7440:
    if (ctx->pc == 0x2E7440u) {
        ctx->pc = 0x2E7444u;
        goto label_2e7444;
    }
    ctx->pc = 0x2E743Cu;
    {
        const bool branch_taken_0x2e743c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e743c) {
            ctx->pc = 0x2E7534u;
            goto label_2e7534;
        }
    }
    ctx->pc = 0x2E7444u;
label_2e7444:
    // 0x2e7444: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e7448:
    // 0x2e7448: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e7448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
label_2e744c:
    // 0x2e744c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2e7450:
    if (ctx->pc == 0x2E7450u) {
        ctx->pc = 0x2E7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E744Cu;
        // 0x2e7450: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7454u;
        goto label_2e7454;
    }
    ctx->pc = 0x2E744Cu;
    {
        const bool branch_taken_0x2e744c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E744Cu;
        // 0x2e7450: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e744c) {
            ctx->pc = 0x2E7468u;
            goto label_2e7468;
        }
    }
    ctx->pc = 0x2E7454u;
label_2e7454:
    // 0x2e7454: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2e7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2e7458:
    // 0x2e7458: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2e7458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2e745c:
    // 0x2e745c: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x2e745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
label_2e7460:
    // 0x2e7460: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2e7464:
    if (ctx->pc == 0x2E7464u) {
        ctx->pc = 0x2E7468u;
        goto label_2e7468;
    }
    ctx->pc = 0x2E7460u;
    {
        const bool branch_taken_0x2e7460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7460) {
            ctx->pc = 0x2E74ECu;
            goto label_2e74ec;
        }
    }
    ctx->pc = 0x2E7468u;
label_2e7468:
    // 0x2e7468: 0xc0899bc  jal         func_2266F0
label_2e746c:
    if (ctx->pc == 0x2E746Cu) {
        ctx->pc = 0x2E746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7468u;
        // 0x2e746c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7470u;
        goto label_2e7470;
    }
    ctx->pc = 0x2E7468u;
    SET_GPR_U32(ctx, 31, 0x2E7470u);
    ctx->pc = 0x2E746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7468u;
    // 0x2e746c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E7468u, 0x2E7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7470u;
label_2e7470:
    // 0x2e7470: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2e7474:
    if (ctx->pc == 0x2E7474u) {
        ctx->pc = 0x2E7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7470u;
        // 0x2e7474: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7478u;
        goto label_2e7478;
    }
    ctx->pc = 0x2E7470u;
    {
        const bool branch_taken_0x2e7470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7470) {
            ctx->pc = 0x2E7474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7470u;
            // 0x2e7474: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7494u;
            goto label_2e7494;
        }
    }
    ctx->pc = 0x2E7478u;
label_2e7478:
    // 0x2e7478: 0xc0899bc  jal         func_2266F0
label_2e747c:
    if (ctx->pc == 0x2E747Cu) {
        ctx->pc = 0x2E747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7478u;
        // 0x2e747c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7480u;
        goto label_2e7480;
    }
    ctx->pc = 0x2E7478u;
    SET_GPR_U32(ctx, 31, 0x2E7480u);
    ctx->pc = 0x2E747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7478u;
    // 0x2e747c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E7478u, 0x2E7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7480u;
label_2e7480:
    // 0x2e7480: 0xc097f26  jal         func_25FC98
label_2e7484:
    if (ctx->pc == 0x2E7484u) {
        ctx->pc = 0x2E7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7480u;
        // 0x2e7484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7488u;
        goto label_2e7488;
    }
    ctx->pc = 0x2E7480u;
    SET_GPR_U32(ctx, 31, 0x2E7488u);
    ctx->pc = 0x2E7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7480u;
    // 0x2e7484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E7480u, 0x2E7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7488u;
label_2e7488:
    // 0x2e7488: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x2e7488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_2e748c:
    // 0x2e748c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2e748cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e7490:
    // 0x2e7490: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2e7490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2e7494:
    // 0x2e7494: 0x8e2511e4  lw          $a1, 0x11E4($s1)
    ctx->pc = 0x2e7494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2e7498:
    // 0x2e7498: 0x8c660088  lw          $a2, 0x88($v1)
    ctx->pc = 0x2e7498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2e749c:
    // 0x2e749c: 0x8c6400b4  lw          $a0, 0xB4($v1)
    ctx->pc = 0x2e749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_2e74a0:
    // 0x2e74a0: 0x38c20011  xori        $v0, $a2, 0x11
    ctx->pc = 0x2e74a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)17);
label_2e74a4:
    // 0x2e74a4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2e74a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2e74a8:
    // 0x2e74a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e74ac:
    if (ctx->pc == 0x2E74ACu) {
        ctx->pc = 0x2E74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74A8u;
        // 0x2e74ac: 0x5800b  movn        $s0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74B0u;
        goto label_2e74b0;
    }
    ctx->pc = 0x2E74A8u;
    {
        const bool branch_taken_0x2e74a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74A8u;
        // 0x2e74ac: 0x5800b  movn        $s0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74a8) {
            ctx->pc = 0x2E74B8u;
            goto label_2e74b8;
        }
    }
    ctx->pc = 0x2E74B0u;
label_2e74b0:
    // 0x2e74b0: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_2e74b4:
    if (ctx->pc == 0x2E74B4u) {
        ctx->pc = 0x2E74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74B0u;
        // 0x2e74b4: 0x8e2411e0  lw          $a0, 0x11E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74B8u;
        goto label_2e74b8;
    }
    ctx->pc = 0x2E74B0u;
    {
        const bool branch_taken_0x2e74b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74b0) {
            ctx->pc = 0x2E74B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E74B0u;
            // 0x2e74b4: 0x8e2411e0  lw          $a0, 0x11E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E74C0u;
            goto label_2e74c0;
        }
    }
    ctx->pc = 0x2E74B8u;
label_2e74b8:
    // 0x2e74b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e74b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e74bc:
    // 0x2e74bc: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2e74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2e74c0:
    // 0x2e74c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e74c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e74c4:
    // 0x2e74c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e74c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e74c8:
    // 0x2e74c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e74c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e74cc:
    // 0x2e74cc: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2e74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2e74d0:
    // 0x2e74d0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e74d4:
    // 0x2e74d4: 0x40f809  jalr        $v0
label_2e74d8:
    if (ctx->pc == 0x2E74D8u) {
        ctx->pc = 0x2E74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74D4u;
        // 0x2e74d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74DCu;
        goto label_2e74dc;
    }
    ctx->pc = 0x2E74D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E74DCu);
        ctx->pc = 0x2E74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74D4u;
        // 0x2e74d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E74D4u, 0x2E74DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E74DCu;
label_2e74dc:
    // 0x2e74dc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2e74e0:
    if (ctx->pc == 0x2E74E0u) {
        ctx->pc = 0x2E74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74DCu;
        // 0x2e74e0: 0xae2011e0  sw          $zero, 0x11E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74E4u;
        goto label_2e74e4;
    }
    ctx->pc = 0x2E74DCu;
    {
        const bool branch_taken_0x2e74dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e74dc) {
            ctx->pc = 0x2E74E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E74DCu;
            // 0x2e74e0: 0xae2011e0  sw          $zero, 0x11E0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E753Cu;
            goto label_2e753c;
        }
    }
    ctx->pc = 0x2E74E4u;
label_2e74e4:
    // 0x2e74e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2e74e8:
    if (ctx->pc == 0x2E74E8u) {
        ctx->pc = 0x2E74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74E4u;
        // 0x2e74e8: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74ECu;
        goto label_2e74ec;
    }
    ctx->pc = 0x2E74E4u;
    {
        const bool branch_taken_0x2e74e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74E4u;
        // 0x2e74e8: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74e4) {
            ctx->pc = 0x2E7540u;
            goto label_2e7540;
        }
    }
    ctx->pc = 0x2E74ECu;
label_2e74ec:
    // 0x2e74ec: 0xc097f2a  jal         func_25FCA8
label_2e74f0:
    if (ctx->pc == 0x2E74F0u) {
        ctx->pc = 0x2E74F4u;
        goto label_2e74f4;
    }
    ctx->pc = 0x2E74ECu;
    SET_GPR_U32(ctx, 31, 0x2E74F4u);
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2E74ECu, 0x2E74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74F4u;
label_2e74f4:
    // 0x2e74f4: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2e74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2e74f8:
    // 0x2e74f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e74fc:
    // 0x2e74fc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2e7500:
    // 0x2e7500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e7504:
    // 0x2e7504: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7508:
    // 0x2e7508: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2e750c:
    if (ctx->pc == 0x2E750Cu) {
        ctx->pc = 0x2E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7508u;
        // 0x2e750c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7510u;
        goto label_2e7510;
    }
    ctx->pc = 0x2E7508u;
    {
        const bool branch_taken_0x2e7508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7508u;
        // 0x2e750c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7508) {
            ctx->pc = 0x2E753Cu;
            goto label_2e753c;
        }
    }
    ctx->pc = 0x2E7510u;
label_2e7510:
    // 0x2e7510: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2e7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2e7514:
    // 0x2e7514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7518:
    // 0x2e7518: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e751c:
    // 0x2e751c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2e751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2e7520:
    // 0x2e7520: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e7520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e7524:
    // 0x2e7524: 0x40f809  jalr        $v0
label_2e7528:
    if (ctx->pc == 0x2E7528u) {
        ctx->pc = 0x2E7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7524u;
        // 0x2e7528: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E752Cu;
        goto label_2e752c;
    }
    ctx->pc = 0x2E7524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E752Cu);
        ctx->pc = 0x2E7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7524u;
        // 0x2e7528: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7524u, 0x2E752Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E752Cu;
label_2e752c:
    // 0x2e752c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e7530:
    if (ctx->pc == 0x2E7530u) {
        ctx->pc = 0x2E7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E752Cu;
        // 0x2e7530: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7534u;
        goto label_2e7534;
    }
    ctx->pc = 0x2E752Cu;
    {
        const bool branch_taken_0x2e752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E752Cu;
        // 0x2e7530: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e752c) {
            ctx->pc = 0x2E7540u;
            goto label_2e7540;
        }
    }
    ctx->pc = 0x2E7534u;
label_2e7534:
    // 0x2e7534: 0xc0a2d78  jal         func_28B5E0
label_2e7538:
    if (ctx->pc == 0x2E7538u) {
        ctx->pc = 0x2E7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7534u;
        // 0x2e7538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E753Cu;
        goto label_2e753c;
    }
    ctx->pc = 0x2E7534u;
    SET_GPR_U32(ctx, 31, 0x2E753Cu);
    ctx->pc = 0x2E7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7534u;
    // 0x2e7538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B5E0u, 0x2E7534u, 0x2E753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E753Cu;
label_2e753c:
    // 0x2e753c: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2e753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2e7540:
    // 0x2e7540: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_2e7544:
    if (ctx->pc == 0x2E7544u) {
        ctx->pc = 0x2E7548u;
        goto label_2e7548;
    }
    ctx->pc = 0x2E7540u;
    {
        const bool branch_taken_0x2e7540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7540) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E7548u;
label_2e7548:
    // 0x2e7548: 0x8e2204f4  lw          $v0, 0x4F4($s1)
    ctx->pc = 0x2e7548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1268)));
label_2e754c:
    // 0x2e754c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e754cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e7550:
    // 0x2e7550: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2e7554:
    if (ctx->pc == 0x2E7554u) {
        ctx->pc = 0x2E7558u;
        goto label_2e7558;
    }
    ctx->pc = 0x2E7550u;
    {
        const bool branch_taken_0x2e7550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7550) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E7558u;
label_2e7558:
    // 0x2e7558: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x2e7558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_2e755c:
    // 0x2e755c: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
label_2e7560:
    if (ctx->pc == 0x2E7560u) {
        ctx->pc = 0x2E7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E755Cu;
        // 0x2e7560: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7564u;
        goto label_2e7564;
    }
    ctx->pc = 0x2E755Cu;
    {
        const bool branch_taken_0x2e755c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E755Cu;
        // 0x2e7560: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e755c) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E7564u;
label_2e7564:
    // 0x2e7564: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x2e7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_2e7568:
    // 0x2e7568: 0x10510032  beq         $v0, $s1, . + 4 + (0x32 << 2)
label_2e756c:
    if (ctx->pc == 0x2E756Cu) {
        ctx->pc = 0x2E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7568u;
        // 0x2e756c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7570u;
        goto label_2e7570;
    }
    ctx->pc = 0x2E7568u;
    {
        const bool branch_taken_0x2e7568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7568u;
        // 0x2e756c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7568) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E7570u;
label_2e7570:
    // 0x2e7570: 0x8e2312bc  lw          $v1, 0x12BC($s1)
    ctx->pc = 0x2e7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_2e7574:
    // 0x2e7574: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_2e7578:
    if (ctx->pc == 0x2E7578u) {
        ctx->pc = 0x2E757Cu;
        goto label_2e757c;
    }
    ctx->pc = 0x2E7574u;
    {
        const bool branch_taken_0x2e7574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7574) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E757Cu;
label_2e757c:
    // 0x2e757c: 0x8c9400b8  lw          $s4, 0xB8($a0)
    ctx->pc = 0x2e757cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2e7580:
    // 0x2e7580: 0x8e8201d4  lw          $v0, 0x1D4($s4)
    ctx->pc = 0x2e7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
label_2e7584:
    // 0x2e7584: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
label_2e7588:
    if (ctx->pc == 0x2E7588u) {
        ctx->pc = 0x2E7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7584u;
        // 0x2e7588: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E758Cu;
        goto label_2e758c;
    }
    ctx->pc = 0x2E7584u;
    {
        const bool branch_taken_0x2e7584 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7584u;
        // 0x2e7588: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7584) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E758Cu;
label_2e758c:
    // 0x2e758c: 0x24170013  addiu       $s7, $zero, 0x13
    ctx->pc = 0x2e758cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2e7590:
    // 0x2e7590: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x2e7590u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
label_2e7594:
    // 0x2e7594: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2e7594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7598:
    // 0x2e7598: 0x269201bc  addiu       $s2, $s4, 0x1BC
    ctx->pc = 0x2e7598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
label_2e759c:
    // 0x2e759c: 0x0  nop
    ctx->pc = 0x2e759cu;
    // NOP
label_2e75a0:
    // 0x2e75a0: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2e75a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_2e75a4:
    // 0x2e75a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e75a8:
    if (ctx->pc == 0x2E75A8u) {
        ctx->pc = 0x2E75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75A4u;
        // 0x2e75a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75ACu;
        goto label_2e75ac;
    }
    ctx->pc = 0x2E75A4u;
    {
        const bool branch_taken_0x2e75a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75A4u;
        // 0x2e75a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75a4) {
            ctx->pc = 0x2E75B0u;
            goto label_2e75b0;
        }
    }
    ctx->pc = 0x2E75ACu;
label_2e75ac:
    // 0x2e75ac: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2e75acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e75b0:
    // 0x2e75b0: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_2e75b4:
    if (ctx->pc == 0x2E75B4u) {
        ctx->pc = 0x2E75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75B0u;
        // 0x2e75b4: 0x8e8201d4  lw          $v0, 0x1D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75B8u;
        goto label_2e75b8;
    }
    ctx->pc = 0x2E75B0u;
    {
        const bool branch_taken_0x2e75b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75b0) {
            ctx->pc = 0x2E75B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E75B0u;
            // 0x2e75b4: 0x8e8201d4  lw          $v0, 0x1D4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7624u;
            goto label_2e7624;
        }
    }
    ctx->pc = 0x2E75B8u;
label_2e75b8:
    // 0x2e75b8: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x2e75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_2e75bc:
    // 0x2e75bc: 0x14570002  bne         $v0, $s7, . + 4 + (0x2 << 2)
label_2e75c0:
    if (ctx->pc == 0x2E75C0u) {
        ctx->pc = 0x2E75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75BCu;
        // 0x2e75c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75C4u;
        goto label_2e75c4;
    }
    ctx->pc = 0x2E75BCu;
    {
        const bool branch_taken_0x2e75bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2E75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75BCu;
        // 0x2e75c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75bc) {
            ctx->pc = 0x2E75C8u;
            goto label_2e75c8;
        }
    }
    ctx->pc = 0x2E75C4u;
label_2e75c4:
    // 0x2e75c4: 0x8e2311e4  lw          $v1, 0x11E4($s1)
    ctx->pc = 0x2e75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2e75c8:
    // 0x2e75c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2e75cc:
    if (ctx->pc == 0x2E75CCu) {
        ctx->pc = 0x2E75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75C8u;
        // 0x2e75cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75D0u;
        goto label_2e75d0;
    }
    ctx->pc = 0x2E75C8u;
    {
        const bool branch_taken_0x2e75c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75C8u;
        // 0x2e75cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75c8) {
            ctx->pc = 0x2E75E0u;
            goto label_2e75e0;
        }
    }
    ctx->pc = 0x2E75D0u;
label_2e75d0:
    // 0x2e75d0: 0xc0efb95  jal         func_3BEE54
label_2e75d4:
    if (ctx->pc == 0x2E75D4u) {
        ctx->pc = 0x2E75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75D0u;
        // 0x2e75d4: 0x26a51758  addiu       $a1, $s5, 0x1758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75D8u;
        goto label_2e75d8;
    }
    ctx->pc = 0x2E75D0u;
    SET_GPR_U32(ctx, 31, 0x2E75D8u);
    ctx->pc = 0x2E75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75D0u;
    // 0x2e75d4: 0x26a51758  addiu       $a1, $s5, 0x1758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2E75D0u, 0x2E75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75D8u;
label_2e75d8:
    // 0x2e75d8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2e75dc:
    if (ctx->pc == 0x2E75DCu) {
        ctx->pc = 0x2E75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75D8u;
        // 0x2e75dc: 0xae3604f4  sw          $s6, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75E0u;
        goto label_2e75e0;
    }
    ctx->pc = 0x2E75D8u;
    {
        const bool branch_taken_0x2e75d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75d8) {
            ctx->pc = 0x2E75DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E75D8u;
            // 0x2e75dc: 0xae3604f4  sw          $s6, 0x4F4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E75E0u;
label_2e75e0:
    // 0x2e75e0: 0xc0899bc  jal         func_2266F0
label_2e75e4:
    if (ctx->pc == 0x2E75E4u) {
        ctx->pc = 0x2E75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75E0u;
        // 0x2e75e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75E8u;
        goto label_2e75e8;
    }
    ctx->pc = 0x2E75E0u;
    SET_GPR_U32(ctx, 31, 0x2E75E8u);
    ctx->pc = 0x2E75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75E0u;
    // 0x2e75e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E75E0u, 0x2E75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75E8u;
label_2e75e8:
    // 0x2e75e8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2e75ec:
    if (ctx->pc == 0x2E75ECu) {
        ctx->pc = 0x2E75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75E8u;
        // 0x2e75ec: 0x8e8201d4  lw          $v0, 0x1D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75F0u;
        goto label_2e75f0;
    }
    ctx->pc = 0x2E75E8u;
    {
        const bool branch_taken_0x2e75e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75e8) {
            ctx->pc = 0x2E75ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E75E8u;
            // 0x2e75ec: 0x8e8201d4  lw          $v0, 0x1D4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7624u;
            goto label_2e7624;
        }
    }
    ctx->pc = 0x2E75F0u;
label_2e75f0:
    // 0x2e75f0: 0xc0899bc  jal         func_2266F0
label_2e75f4:
    if (ctx->pc == 0x2E75F4u) {
        ctx->pc = 0x2E75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75F0u;
        // 0x2e75f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75F8u;
        goto label_2e75f8;
    }
    ctx->pc = 0x2E75F0u;
    SET_GPR_U32(ctx, 31, 0x2E75F8u);
    ctx->pc = 0x2E75F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75F0u;
    // 0x2e75f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E75F0u, 0x2E75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75F8u;
label_2e75f8:
    // 0x2e75f8: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x2e75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2e75fc:
    // 0x2e75fc: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x2e75fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7600:
    // 0x2e7600: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2e7604:
    if (ctx->pc == 0x2E7604u) {
        ctx->pc = 0x2E7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7600u;
        // 0x2e7604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7608u;
        goto label_2e7608;
    }
    ctx->pc = 0x2E7600u;
    {
        const bool branch_taken_0x2e7600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7600) {
            ctx->pc = 0x2E7604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7600u;
            // 0x2e7604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E760Cu;
            goto label_2e760c;
        }
    }
    ctx->pc = 0x2E7608u;
label_2e7608:
    // 0x2e7608: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2e7608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2e760c:
    // 0x2e760c: 0xc0efb95  jal         func_3BEE54
label_2e7610:
    if (ctx->pc == 0x2E7610u) {
        ctx->pc = 0x2E7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E760Cu;
        // 0x2e7610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7614u;
        goto label_2e7614;
    }
    ctx->pc = 0x2E760Cu;
    SET_GPR_U32(ctx, 31, 0x2E7614u);
    ctx->pc = 0x2E7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E760Cu;
    // 0x2e7610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2E760Cu, 0x2E7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7614u;
label_2e7614:
    // 0x2e7614: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2e7618:
    if (ctx->pc == 0x2E7618u) {
        ctx->pc = 0x2E7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7614u;
        // 0x2e7618: 0x8e8201d4  lw          $v0, 0x1D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E761Cu;
        goto label_2e761c;
    }
    ctx->pc = 0x2E7614u;
    {
        const bool branch_taken_0x2e7614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7614) {
            ctx->pc = 0x2E7618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7614u;
            // 0x2e7618: 0x8e8201d4  lw          $v0, 0x1D4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7624u;
            goto label_2e7624;
        }
    }
    ctx->pc = 0x2E761Cu;
label_2e761c:
    // 0x2e761c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7620:
    if (ctx->pc == 0x2E7620u) {
        ctx->pc = 0x2E7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E761Cu;
        // 0x2e7620: 0xae3604f4  sw          $s6, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7624u;
        goto label_2e7624;
    }
    ctx->pc = 0x2E761Cu;
    {
        const bool branch_taken_0x2e761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E761Cu;
        // 0x2e7620: 0xae3604f4  sw          $s6, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e761c) {
            ctx->pc = 0x2E7634u;
            goto label_2e7634;
        }
    }
    ctx->pc = 0x2E7624u;
label_2e7624:
    // 0x2e7624: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e7624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2e7628:
    // 0x2e7628: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2e7628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e762c:
    // 0x2e762c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2e7630:
    if (ctx->pc == 0x2E7630u) {
        ctx->pc = 0x2E7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E762Cu;
        // 0x2e7630: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7634u;
        goto label_2e7634;
    }
    ctx->pc = 0x2E762Cu;
    {
        const bool branch_taken_0x2e762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E762Cu;
        // 0x2e7630: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e762c) {
            ctx->pc = 0x2E75A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e75a0;
        }
    }
    ctx->pc = 0x2E7634u;
label_2e7634:
    // 0x2e7634: 0xc0b93e0  jal         func_2E4F80
label_2e7638:
    if (ctx->pc == 0x2E7638u) {
        ctx->pc = 0x2E7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7634u;
        // 0x2e7638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E763Cu;
        goto label_2e763c;
    }
    ctx->pc = 0x2E7634u;
    SET_GPR_U32(ctx, 31, 0x2E763Cu);
    ctx->pc = 0x2E7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7634u;
    // 0x2e7638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2E7634u, 0x2E763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E763Cu;
label_2e763c:
    // 0x2e763c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2e7640:
    if (ctx->pc == 0x2E7640u) {
        ctx->pc = 0x2E7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E763Cu;
        // 0x2e7640: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7644u;
        goto label_2e7644;
    }
    ctx->pc = 0x2E763Cu;
    {
        const bool branch_taken_0x2e763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E763Cu;
        // 0x2e7640: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e763c) {
            ctx->pc = 0x2E7674u;
            goto label_2e7674;
        }
    }
    ctx->pc = 0x2E7644u;
label_2e7644:
    // 0x2e7644: 0xc7c014e4  lwc1        $f0, 0x14E4($fp)
    ctx->pc = 0x2e7644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 5348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7648:
    // 0x2e7648: 0xc7c114e8  lwc1        $f1, 0x14E8($fp)
    ctx->pc = 0x2e7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 5352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e764c:
    // 0x2e764c: 0xc62312e0  lwc1        $f3, 0x12E0($s1)
    ctx->pc = 0x2e764cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e7650:
    // 0x2e7650: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e7650u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7654:
    // 0x2e7654: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2e7654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2e7658:
    // 0x2e7658: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e7658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e765c:
    // 0x2e765c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e765cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e7660:
    // 0x2e7660: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2e7660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2e7664:
    // 0x2e7664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e7668:
    // 0x2e7668: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x2e7668u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_2e766c:
    // 0x2e766c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e7670:
    if (ctx->pc == 0x2E7670u) {
        ctx->pc = 0x2E7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E766Cu;
        // 0x2e7670: 0xe4402c48  swc1        $f0, 0x2C48($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7674u;
        goto label_2e7674;
    }
    ctx->pc = 0x2E766Cu;
    {
        const bool branch_taken_0x2e766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E766Cu;
        // 0x2e7670: 0xe4402c48  swc1        $f0, 0x2C48($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e766c) {
            ctx->pc = 0x2E7688u;
            goto label_2e7688;
        }
    }
    ctx->pc = 0x2E7674u;
label_2e7674:
    // 0x2e7674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e7678:
    // 0x2e7678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e767c:
    // 0x2e767c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2e7680:
    // 0x2e7680: 0xe4602c48  swc1        $f0, 0x2C48($v1)
    ctx->pc = 0x2e7680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 11336), bits); }
label_2e7684:
    // 0x2e7684: 0xae2012e0  sw          $zero, 0x12E0($s1)
    ctx->pc = 0x2e7684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4832), GPR_U32(ctx, 0));
label_2e7688:
    // 0x2e7688: 0x8e221420  lw          $v0, 0x1420($s1)
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5152)));
label_2e768c:
    // 0x2e768c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2e7690:
    if (ctx->pc == 0x2E7690u) {
        ctx->pc = 0x2E7694u;
        goto label_2e7694;
    }
    ctx->pc = 0x2E768Cu;
    {
        const bool branch_taken_0x2e768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e768c) {
            ctx->pc = 0x2E76C0u;
            goto label_2e76c0;
        }
    }
    ctx->pc = 0x2E7694u;
label_2e7694:
    // 0x2e7694: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2e7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2e7698:
    // 0x2e7698: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2e769c:
    // 0x2e769c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e76a0:
    if (ctx->pc == 0x2E76A0u) {
        ctx->pc = 0x2E76A4u;
        goto label_2e76a4;
    }
    ctx->pc = 0x2E769Cu;
    {
        const bool branch_taken_0x2e769c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e769c) {
            ctx->pc = 0x2E76C0u;
            goto label_2e76c0;
        }
    }
    ctx->pc = 0x2E76A4u;
label_2e76a4:
    // 0x2e76a4: 0xc0c11da  jal         func_304768
label_2e76a8:
    if (ctx->pc == 0x2E76A8u) {
        ctx->pc = 0x2E76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76A4u;
        // 0x2e76a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E76ACu;
        goto label_2e76ac;
    }
    ctx->pc = 0x2E76A4u;
    SET_GPR_U32(ctx, 31, 0x2E76ACu);
    ctx->pc = 0x2E76A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76A4u;
    // 0x2e76a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304768u, 0x2E76A4u, 0x2E76ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76ACu;
label_2e76ac:
    // 0x2e76ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e76acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e76b0:
    // 0x2e76b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e76b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e76b4:
    // 0x2e76b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e76b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e76b8:
    // 0x2e76b8: 0xc0bf892  jal         func_2FE248
label_2e76bc:
    if (ctx->pc == 0x2E76BCu) {
        ctx->pc = 0x2E76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76B8u;
        // 0x2e76bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E76C0u;
        goto label_2e76c0;
    }
    ctx->pc = 0x2E76B8u;
    SET_GPR_U32(ctx, 31, 0x2E76C0u);
    ctx->pc = 0x2E76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76B8u;
    // 0x2e76bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE248u, 0x2E76B8u, 0x2E76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76C0u;
label_2e76c0:
    // 0x2e76c0: 0xc0b9eac  jal         func_2E7AB0
label_2e76c4:
    if (ctx->pc == 0x2E76C4u) {
        ctx->pc = 0x2E76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76C0u;
        // 0x2e76c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E76C8u;
        goto label_2e76c8;
    }
    ctx->pc = 0x2E76C0u;
    SET_GPR_U32(ctx, 31, 0x2E76C8u);
    ctx->pc = 0x2E76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76C0u;
    // 0x2e76c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7AB0u, 0x2E76C0u, 0x2E76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76C8u;
label_2e76c8:
    // 0x2e76c8: 0xc089498  jal         func_225260
label_2e76cc:
    if (ctx->pc == 0x2E76CCu) {
        ctx->pc = 0x2E76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76C8u;
        // 0x2e76cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E76D0u;
        goto label_2e76d0;
    }
    ctx->pc = 0x2E76C8u;
    SET_GPR_U32(ctx, 31, 0x2E76D0u);
    ctx->pc = 0x2E76CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76C8u;
    // 0x2e76cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225260u, 0x2E76C8u, 0x2E76D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76D0u;
label_2e76d0:
    // 0x2e76d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2e76d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2e76d4:
    // 0x2e76d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e76d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e76d8:
    // 0x2e76d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e76dc:
    // 0x2e76dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e76dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e76e0:
    // 0x2e76e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e76e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e76e4:
    // 0x2e76e4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e76e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2e76e8:
    // 0x2e76e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2e76e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2e76ec:
    // 0x2e76ec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2e76ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e76f0:
    // 0x2e76f0: 0x0  nop
    ctx->pc = 0x2e76f0u;
    // NOP
label_2e76f4:
    // 0x2e76f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e76f8:
    if (ctx->pc == 0x2E76F8u) {
        ctx->pc = 0x2E76FCu;
        goto label_2e76fc;
    }
    ctx->pc = 0x2E76F4u;
    {
        const bool branch_taken_0x2e76f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e76f4) {
            ctx->pc = 0x2E7704u;
            goto label_2e7704;
        }
    }
    ctx->pc = 0x2E76FCu;
label_2e76fc:
    // 0x2e76fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7700:
    if (ctx->pc == 0x2E7700u) {
        ctx->pc = 0x2E7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76FCu;
        // 0x2e7700: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7704u;
        goto label_2e7704;
    }
    ctx->pc = 0x2E76FCu;
    {
        const bool branch_taken_0x2e76fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76FCu;
        // 0x2e7700: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76fc) {
            ctx->pc = 0x2E7714u;
            goto label_2e7714;
        }
    }
    ctx->pc = 0x2E7704u;
label_2e7704:
    // 0x2e7704: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e7704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7708:
    // 0x2e7708: 0x0  nop
    ctx->pc = 0x2e7708u;
    // NOP
label_2e770c:
    // 0x2e770c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e7710:
    if (ctx->pc == 0x2E7710u) {
        ctx->pc = 0x2E7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E770Cu;
        // 0x2e7710: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7714u;
        goto label_2e7714;
    }
    ctx->pc = 0x2E770Cu;
    {
        const bool branch_taken_0x2e770c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e770c) {
            ctx->pc = 0x2E7710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E770Cu;
            // 0x2e7710: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7714u;
            goto label_2e7714;
        }
    }
    ctx->pc = 0x2E7714u;
label_2e7714:
    // 0x2e7714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7718:
    // 0x2e7718: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x2e7718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
label_2e771c:
    // 0x2e771c: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x2e771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
label_2e7720:
    // 0x2e7720: 0xc089ee6  jal         func_227B98
label_2e7724:
    if (ctx->pc == 0x2E7724u) {
        ctx->pc = 0x2E7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7720u;
        // 0x2e7724: 0xe6200158  swc1        $f0, 0x158($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7728u;
        goto label_2e7728;
    }
    ctx->pc = 0x2E7720u;
    SET_GPR_U32(ctx, 31, 0x2E7728u);
    ctx->pc = 0x2E7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7720u;
    // 0x2e7724: 0xe6200158  swc1        $f0, 0x158($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x2E7720u, 0x2E7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7728u;
label_2e7728:
    // 0x2e7728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e7728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e772c:
    // 0x2e772c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e772cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2e7730:
    // 0x2e7730: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x2e7730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950216)));
label_2e7734:
    // 0x2e7734: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x2e7734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_2e7738:
    // 0x2e7738: 0xc0f70ce  jal         func_3DC338
label_2e773c:
    if (ctx->pc == 0x2E773Cu) {
        ctx->pc = 0x2E773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7738u;
        // 0x2e773c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7740u;
        goto label_2e7740;
    }
    ctx->pc = 0x2E7738u;
    SET_GPR_U32(ctx, 31, 0x2E7740u);
    ctx->pc = 0x2E773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7738u;
    // 0x2e773c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2E7738u, 0x2E7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7740u;
label_2e7740:
    // 0x2e7740: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e7744:
    if (ctx->pc == 0x2E7744u) {
        ctx->pc = 0x2E7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7740u;
        // 0x2e7744: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7748u;
        goto label_2e7748;
    }
    ctx->pc = 0x2E7740u;
    {
        const bool branch_taken_0x2e7740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7740u;
        // 0x2e7744: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7740) {
            ctx->pc = 0x2E7754u;
            goto label_2e7754;
        }
    }
    ctx->pc = 0x2E7748u;
label_2e7748:
    // 0x2e7748: 0xc0c4900  jal         func_312400
label_2e774c:
    if (ctx->pc == 0x2E774Cu) {
        ctx->pc = 0x2E774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7748u;
        // 0x2e774c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7750u;
        goto label_2e7750;
    }
    ctx->pc = 0x2E7748u;
    SET_GPR_U32(ctx, 31, 0x2E7750u);
    ctx->pc = 0x2E774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7748u;
    // 0x2e774c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2E7748u, 0x2E7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7750u;
label_2e7750:
    // 0x2e7750: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2e7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2e7754:
    // 0x2e7754: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2e7754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7758:
    // 0x2e7758: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e7758u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e775c:
    // 0x2e775c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e775cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e7760:
    // 0x2e7760: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2e7760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e7764:
    // 0x2e7764: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e7764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7768:
    // 0x2e7768: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e7768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e776c:
    // 0x2e776c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2e776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7770:
    // 0x2e7770: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2e7770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e7774:
    // 0x2e7774: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e7774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e7778:
    // 0x2e7778: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e7778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e777c:
    // 0x2e777c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e777cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e7780:
    // 0x2e7780: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2e7780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2e7784:
    // 0x2e7784: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e7784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7788:
    // 0x2e7788: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e7788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e778c:
    // 0x2e778c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e778cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e7790:
    // 0x2e7790: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e7790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e7794:
    // 0x2e7794: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e7794u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2e7798:
    // 0x2e7798: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e7798u;
    // VWAITQ (Q already resolved in this runtime)
label_2e779c:
    // 0x2e779c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e779cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e77a0:
    // 0x2e77a0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e77a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e77a4:
    // 0x2e77a4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e77a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e77a8:
    // 0x2e77a8: 0xfa210170  sqc2        $vf1, 0x170($s1)
    ctx->pc = 0x2e77a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 368), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e77ac:
    // 0x2e77ac: 0x8e22053c  lw          $v0, 0x53C($s1)
    ctx->pc = 0x2e77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1340)));
label_2e77b0:
    // 0x2e77b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e77b4:
    if (ctx->pc == 0x2E77B4u) {
        ctx->pc = 0x2E77B8u;
        goto label_2e77b8;
    }
    ctx->pc = 0x2E77B0u;
    {
        const bool branch_taken_0x2e77b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e77b0) {
            ctx->pc = 0x2E77DCu;
            goto label_2e77dc;
        }
    }
    ctx->pc = 0x2E77B8u;
label_2e77b8:
    // 0x2e77b8: 0xc6200170  lwc1        $f0, 0x170($s1)
    ctx->pc = 0x2e77b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e77bc:
    // 0x2e77bc: 0xc6210174  lwc1        $f1, 0x174($s1)
    ctx->pc = 0x2e77bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e77c0:
    // 0x2e77c0: 0xc6220178  lwc1        $f2, 0x178($s1)
    ctx->pc = 0x2e77c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e77c4:
    // 0x2e77c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e77c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2e77c8:
    // 0x2e77c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e77c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2e77cc:
    // 0x2e77cc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2e77ccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2e77d0:
    // 0x2e77d0: 0xe6200170  swc1        $f0, 0x170($s1)
    ctx->pc = 0x2e77d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
label_2e77d4:
    // 0x2e77d4: 0xe6210174  swc1        $f1, 0x174($s1)
    ctx->pc = 0x2e77d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
label_2e77d8:
    // 0x2e77d8: 0xe6220178  swc1        $f2, 0x178($s1)
    ctx->pc = 0x2e77d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
label_2e77dc:
    // 0x2e77dc: 0xc0b9e0c  jal         func_2E7830
label_2e77e0:
    if (ctx->pc == 0x2E77E0u) {
        ctx->pc = 0x2E77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77DCu;
        // 0x2e77e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E77E4u;
        goto label_2e77e4;
    }
    ctx->pc = 0x2E77DCu;
    SET_GPR_U32(ctx, 31, 0x2E77E4u);
    ctx->pc = 0x2E77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77DCu;
    // 0x2e77e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7830u, 0x2E77DCu, 0x2E77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77E4u;
label_2e77e4:
    // 0x2e77e4: 0xc0b9e40  jal         func_2E7900
label_2e77e8:
    if (ctx->pc == 0x2E77E8u) {
        ctx->pc = 0x2E77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77E4u;
        // 0x2e77e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E77ECu;
        goto label_2e77ec;
    }
    ctx->pc = 0x2E77E4u;
    SET_GPR_U32(ctx, 31, 0x2E77ECu);
    ctx->pc = 0x2E77E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77E4u;
    // 0x2e77e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7900u, 0x2E77E4u, 0x2E77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77ECu;
label_2e77ec:
    // 0x2e77ec: 0xc0944f8  jal         func_2513E0
label_2e77f0:
    if (ctx->pc == 0x2E77F0u) {
        ctx->pc = 0x2E77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77ECu;
        // 0x2e77f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E77F4u;
        goto label_2e77f4;
    }
    ctx->pc = 0x2E77ECu;
    SET_GPR_U32(ctx, 31, 0x2E77F4u);
    ctx->pc = 0x2E77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77ECu;
    // 0x2e77f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513E0u, 0x2E77ECu, 0x2E77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77F4u;
label_2e77f4:
    // 0x2e77f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e77f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e77f8:
    // 0x2e77f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e77f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e77fc:
    // 0x2e77fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e77fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7800:
    // 0x2e7800: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e7800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2e7804:
    // 0x2e7804: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e7804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e7808:
    // 0x2e7808: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2e7808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2e780c:
    // 0x2e780c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e780cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e7810:
    // 0x2e7810: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2e7810u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2e7814:
    // 0x2e7814: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2e7814u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e7818:
    // 0x2e7818: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2e7818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2e781c:
    // 0x2e781c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2e781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e7820:
    // 0x2e7820: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2e7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e7824:
    // 0x2e7824: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2e7824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e7828:
    // 0x2e7828: 0x3e00008  jr          $ra
label_2e782c:
    if (ctx->pc == 0x2E782Cu) {
        ctx->pc = 0x2E782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7828u;
        // 0x2e782c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7830u;
        goto label_fallthrough_0x2e7828;
    }
    ctx->pc = 0x2E7828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7828u;
        // 0x2e782c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e7828:
    ctx->pc = 0x2E7830u;
}
