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

// Function: sub_00199C90
// Address: 0x199c90 - 0x19a338
void sub_00199C90_0x199c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199C90_0x199c90");
#endif

    switch (ctx->pc) {
        case 0x199c90u: goto label_199c90;
        case 0x199c94u: goto label_199c94;
        case 0x199c98u: goto label_199c98;
        case 0x199c9cu: goto label_199c9c;
        case 0x199ca0u: goto label_199ca0;
        case 0x199ca4u: goto label_199ca4;
        case 0x199ca8u: goto label_199ca8;
        case 0x199cacu: goto label_199cac;
        case 0x199cb0u: goto label_199cb0;
        case 0x199cb4u: goto label_199cb4;
        case 0x199cb8u: goto label_199cb8;
        case 0x199cbcu: goto label_199cbc;
        case 0x199cc0u: goto label_199cc0;
        case 0x199cc4u: goto label_199cc4;
        case 0x199cc8u: goto label_199cc8;
        case 0x199cccu: goto label_199ccc;
        case 0x199cd0u: goto label_199cd0;
        case 0x199cd4u: goto label_199cd4;
        case 0x199cd8u: goto label_199cd8;
        case 0x199cdcu: goto label_199cdc;
        case 0x199ce0u: goto label_199ce0;
        case 0x199ce4u: goto label_199ce4;
        case 0x199ce8u: goto label_199ce8;
        case 0x199cecu: goto label_199cec;
        case 0x199cf0u: goto label_199cf0;
        case 0x199cf4u: goto label_199cf4;
        case 0x199cf8u: goto label_199cf8;
        case 0x199cfcu: goto label_199cfc;
        case 0x199d00u: goto label_199d00;
        case 0x199d04u: goto label_199d04;
        case 0x199d08u: goto label_199d08;
        case 0x199d0cu: goto label_199d0c;
        case 0x199d10u: goto label_199d10;
        case 0x199d14u: goto label_199d14;
        case 0x199d18u: goto label_199d18;
        case 0x199d1cu: goto label_199d1c;
        case 0x199d20u: goto label_199d20;
        case 0x199d24u: goto label_199d24;
        case 0x199d28u: goto label_199d28;
        case 0x199d2cu: goto label_199d2c;
        case 0x199d30u: goto label_199d30;
        case 0x199d34u: goto label_199d34;
        case 0x199d38u: goto label_199d38;
        case 0x199d3cu: goto label_199d3c;
        case 0x199d40u: goto label_199d40;
        case 0x199d44u: goto label_199d44;
        case 0x199d48u: goto label_199d48;
        case 0x199d4cu: goto label_199d4c;
        case 0x199d50u: goto label_199d50;
        case 0x199d54u: goto label_199d54;
        case 0x199d58u: goto label_199d58;
        case 0x199d5cu: goto label_199d5c;
        case 0x199d60u: goto label_199d60;
        case 0x199d64u: goto label_199d64;
        case 0x199d68u: goto label_199d68;
        case 0x199d6cu: goto label_199d6c;
        case 0x199d70u: goto label_199d70;
        case 0x199d74u: goto label_199d74;
        case 0x199d78u: goto label_199d78;
        case 0x199d7cu: goto label_199d7c;
        case 0x199d80u: goto label_199d80;
        case 0x199d84u: goto label_199d84;
        case 0x199d88u: goto label_199d88;
        case 0x199d8cu: goto label_199d8c;
        case 0x199d90u: goto label_199d90;
        case 0x199d94u: goto label_199d94;
        case 0x199d98u: goto label_199d98;
        case 0x199d9cu: goto label_199d9c;
        case 0x199da0u: goto label_199da0;
        case 0x199da4u: goto label_199da4;
        case 0x199da8u: goto label_199da8;
        case 0x199dacu: goto label_199dac;
        case 0x199db0u: goto label_199db0;
        case 0x199db4u: goto label_199db4;
        case 0x199db8u: goto label_199db8;
        case 0x199dbcu: goto label_199dbc;
        case 0x199dc0u: goto label_199dc0;
        case 0x199dc4u: goto label_199dc4;
        case 0x199dc8u: goto label_199dc8;
        case 0x199dccu: goto label_199dcc;
        case 0x199dd0u: goto label_199dd0;
        case 0x199dd4u: goto label_199dd4;
        case 0x199dd8u: goto label_199dd8;
        case 0x199ddcu: goto label_199ddc;
        case 0x199de0u: goto label_199de0;
        case 0x199de4u: goto label_199de4;
        case 0x199de8u: goto label_199de8;
        case 0x199decu: goto label_199dec;
        case 0x199df0u: goto label_199df0;
        case 0x199df4u: goto label_199df4;
        case 0x199df8u: goto label_199df8;
        case 0x199dfcu: goto label_199dfc;
        case 0x199e00u: goto label_199e00;
        case 0x199e04u: goto label_199e04;
        case 0x199e08u: goto label_199e08;
        case 0x199e0cu: goto label_199e0c;
        case 0x199e10u: goto label_199e10;
        case 0x199e14u: goto label_199e14;
        case 0x199e18u: goto label_199e18;
        case 0x199e1cu: goto label_199e1c;
        case 0x199e20u: goto label_199e20;
        case 0x199e24u: goto label_199e24;
        case 0x199e28u: goto label_199e28;
        case 0x199e2cu: goto label_199e2c;
        case 0x199e30u: goto label_199e30;
        case 0x199e34u: goto label_199e34;
        case 0x199e38u: goto label_199e38;
        case 0x199e3cu: goto label_199e3c;
        case 0x199e40u: goto label_199e40;
        case 0x199e44u: goto label_199e44;
        case 0x199e48u: goto label_199e48;
        case 0x199e4cu: goto label_199e4c;
        case 0x199e50u: goto label_199e50;
        case 0x199e54u: goto label_199e54;
        case 0x199e58u: goto label_199e58;
        case 0x199e5cu: goto label_199e5c;
        case 0x199e60u: goto label_199e60;
        case 0x199e64u: goto label_199e64;
        case 0x199e68u: goto label_199e68;
        case 0x199e6cu: goto label_199e6c;
        case 0x199e70u: goto label_199e70;
        case 0x199e74u: goto label_199e74;
        case 0x199e78u: goto label_199e78;
        case 0x199e7cu: goto label_199e7c;
        case 0x199e80u: goto label_199e80;
        case 0x199e84u: goto label_199e84;
        case 0x199e88u: goto label_199e88;
        case 0x199e8cu: goto label_199e8c;
        case 0x199e90u: goto label_199e90;
        case 0x199e94u: goto label_199e94;
        case 0x199e98u: goto label_199e98;
        case 0x199e9cu: goto label_199e9c;
        case 0x199ea0u: goto label_199ea0;
        case 0x199ea4u: goto label_199ea4;
        case 0x199ea8u: goto label_199ea8;
        case 0x199eacu: goto label_199eac;
        case 0x199eb0u: goto label_199eb0;
        case 0x199eb4u: goto label_199eb4;
        case 0x199eb8u: goto label_199eb8;
        case 0x199ebcu: goto label_199ebc;
        case 0x199ec0u: goto label_199ec0;
        case 0x199ec4u: goto label_199ec4;
        case 0x199ec8u: goto label_199ec8;
        case 0x199eccu: goto label_199ecc;
        case 0x199ed0u: goto label_199ed0;
        case 0x199ed4u: goto label_199ed4;
        case 0x199ed8u: goto label_199ed8;
        case 0x199edcu: goto label_199edc;
        case 0x199ee0u: goto label_199ee0;
        case 0x199ee4u: goto label_199ee4;
        case 0x199ee8u: goto label_199ee8;
        case 0x199eecu: goto label_199eec;
        case 0x199ef0u: goto label_199ef0;
        case 0x199ef4u: goto label_199ef4;
        case 0x199ef8u: goto label_199ef8;
        case 0x199efcu: goto label_199efc;
        case 0x199f00u: goto label_199f00;
        case 0x199f04u: goto label_199f04;
        case 0x199f08u: goto label_199f08;
        case 0x199f0cu: goto label_199f0c;
        case 0x199f10u: goto label_199f10;
        case 0x199f14u: goto label_199f14;
        case 0x199f18u: goto label_199f18;
        case 0x199f1cu: goto label_199f1c;
        case 0x199f20u: goto label_199f20;
        case 0x199f24u: goto label_199f24;
        case 0x199f28u: goto label_199f28;
        case 0x199f2cu: goto label_199f2c;
        case 0x199f30u: goto label_199f30;
        case 0x199f34u: goto label_199f34;
        case 0x199f38u: goto label_199f38;
        case 0x199f3cu: goto label_199f3c;
        case 0x199f40u: goto label_199f40;
        case 0x199f44u: goto label_199f44;
        case 0x199f48u: goto label_199f48;
        case 0x199f4cu: goto label_199f4c;
        case 0x199f50u: goto label_199f50;
        case 0x199f54u: goto label_199f54;
        case 0x199f58u: goto label_199f58;
        case 0x199f5cu: goto label_199f5c;
        case 0x199f60u: goto label_199f60;
        case 0x199f64u: goto label_199f64;
        case 0x199f68u: goto label_199f68;
        case 0x199f6cu: goto label_199f6c;
        case 0x199f70u: goto label_199f70;
        case 0x199f74u: goto label_199f74;
        case 0x199f78u: goto label_199f78;
        case 0x199f7cu: goto label_199f7c;
        case 0x199f80u: goto label_199f80;
        case 0x199f84u: goto label_199f84;
        case 0x199f88u: goto label_199f88;
        case 0x199f8cu: goto label_199f8c;
        case 0x199f90u: goto label_199f90;
        case 0x199f94u: goto label_199f94;
        case 0x199f98u: goto label_199f98;
        case 0x199f9cu: goto label_199f9c;
        case 0x199fa0u: goto label_199fa0;
        case 0x199fa4u: goto label_199fa4;
        case 0x199fa8u: goto label_199fa8;
        case 0x199facu: goto label_199fac;
        case 0x199fb0u: goto label_199fb0;
        case 0x199fb4u: goto label_199fb4;
        case 0x199fb8u: goto label_199fb8;
        case 0x199fbcu: goto label_199fbc;
        case 0x199fc0u: goto label_199fc0;
        case 0x199fc4u: goto label_199fc4;
        case 0x199fc8u: goto label_199fc8;
        case 0x199fccu: goto label_199fcc;
        case 0x199fd0u: goto label_199fd0;
        case 0x199fd4u: goto label_199fd4;
        case 0x199fd8u: goto label_199fd8;
        case 0x199fdcu: goto label_199fdc;
        case 0x199fe0u: goto label_199fe0;
        case 0x199fe4u: goto label_199fe4;
        case 0x199fe8u: goto label_199fe8;
        case 0x199fecu: goto label_199fec;
        case 0x199ff0u: goto label_199ff0;
        case 0x199ff4u: goto label_199ff4;
        case 0x199ff8u: goto label_199ff8;
        case 0x199ffcu: goto label_199ffc;
        case 0x19a000u: goto label_19a000;
        case 0x19a004u: goto label_19a004;
        case 0x19a008u: goto label_19a008;
        case 0x19a00cu: goto label_19a00c;
        case 0x19a010u: goto label_19a010;
        case 0x19a014u: goto label_19a014;
        case 0x19a018u: goto label_19a018;
        case 0x19a01cu: goto label_19a01c;
        case 0x19a020u: goto label_19a020;
        case 0x19a024u: goto label_19a024;
        case 0x19a028u: goto label_19a028;
        case 0x19a02cu: goto label_19a02c;
        case 0x19a030u: goto label_19a030;
        case 0x19a034u: goto label_19a034;
        case 0x19a038u: goto label_19a038;
        case 0x19a03cu: goto label_19a03c;
        case 0x19a040u: goto label_19a040;
        case 0x19a044u: goto label_19a044;
        case 0x19a048u: goto label_19a048;
        case 0x19a04cu: goto label_19a04c;
        case 0x19a050u: goto label_19a050;
        case 0x19a054u: goto label_19a054;
        case 0x19a058u: goto label_19a058;
        case 0x19a05cu: goto label_19a05c;
        case 0x19a060u: goto label_19a060;
        case 0x19a064u: goto label_19a064;
        case 0x19a068u: goto label_19a068;
        case 0x19a06cu: goto label_19a06c;
        case 0x19a070u: goto label_19a070;
        case 0x19a074u: goto label_19a074;
        case 0x19a078u: goto label_19a078;
        case 0x19a07cu: goto label_19a07c;
        case 0x19a080u: goto label_19a080;
        case 0x19a084u: goto label_19a084;
        case 0x19a088u: goto label_19a088;
        case 0x19a08cu: goto label_19a08c;
        case 0x19a090u: goto label_19a090;
        case 0x19a094u: goto label_19a094;
        case 0x19a098u: goto label_19a098;
        case 0x19a09cu: goto label_19a09c;
        case 0x19a0a0u: goto label_19a0a0;
        case 0x19a0a4u: goto label_19a0a4;
        case 0x19a0a8u: goto label_19a0a8;
        case 0x19a0acu: goto label_19a0ac;
        case 0x19a0b0u: goto label_19a0b0;
        case 0x19a0b4u: goto label_19a0b4;
        case 0x19a0b8u: goto label_19a0b8;
        case 0x19a0bcu: goto label_19a0bc;
        case 0x19a0c0u: goto label_19a0c0;
        case 0x19a0c4u: goto label_19a0c4;
        case 0x19a0c8u: goto label_19a0c8;
        case 0x19a0ccu: goto label_19a0cc;
        case 0x19a0d0u: goto label_19a0d0;
        case 0x19a0d4u: goto label_19a0d4;
        case 0x19a0d8u: goto label_19a0d8;
        case 0x19a0dcu: goto label_19a0dc;
        case 0x19a0e0u: goto label_19a0e0;
        case 0x19a0e4u: goto label_19a0e4;
        case 0x19a0e8u: goto label_19a0e8;
        case 0x19a0ecu: goto label_19a0ec;
        case 0x19a0f0u: goto label_19a0f0;
        case 0x19a0f4u: goto label_19a0f4;
        case 0x19a0f8u: goto label_19a0f8;
        case 0x19a0fcu: goto label_19a0fc;
        case 0x19a100u: goto label_19a100;
        case 0x19a104u: goto label_19a104;
        case 0x19a108u: goto label_19a108;
        case 0x19a10cu: goto label_19a10c;
        case 0x19a110u: goto label_19a110;
        case 0x19a114u: goto label_19a114;
        case 0x19a118u: goto label_19a118;
        case 0x19a11cu: goto label_19a11c;
        case 0x19a120u: goto label_19a120;
        case 0x19a124u: goto label_19a124;
        case 0x19a128u: goto label_19a128;
        case 0x19a12cu: goto label_19a12c;
        case 0x19a130u: goto label_19a130;
        case 0x19a134u: goto label_19a134;
        case 0x19a138u: goto label_19a138;
        case 0x19a13cu: goto label_19a13c;
        case 0x19a140u: goto label_19a140;
        case 0x19a144u: goto label_19a144;
        case 0x19a148u: goto label_19a148;
        case 0x19a14cu: goto label_19a14c;
        case 0x19a150u: goto label_19a150;
        case 0x19a154u: goto label_19a154;
        case 0x19a158u: goto label_19a158;
        case 0x19a15cu: goto label_19a15c;
        case 0x19a160u: goto label_19a160;
        case 0x19a164u: goto label_19a164;
        case 0x19a168u: goto label_19a168;
        case 0x19a16cu: goto label_19a16c;
        case 0x19a170u: goto label_19a170;
        case 0x19a174u: goto label_19a174;
        case 0x19a178u: goto label_19a178;
        case 0x19a17cu: goto label_19a17c;
        case 0x19a180u: goto label_19a180;
        case 0x19a184u: goto label_19a184;
        case 0x19a188u: goto label_19a188;
        case 0x19a18cu: goto label_19a18c;
        case 0x19a190u: goto label_19a190;
        case 0x19a194u: goto label_19a194;
        case 0x19a198u: goto label_19a198;
        case 0x19a19cu: goto label_19a19c;
        case 0x19a1a0u: goto label_19a1a0;
        case 0x19a1a4u: goto label_19a1a4;
        case 0x19a1a8u: goto label_19a1a8;
        case 0x19a1acu: goto label_19a1ac;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a1b4u: goto label_19a1b4;
        case 0x19a1b8u: goto label_19a1b8;
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1c4u: goto label_19a1c4;
        case 0x19a1c8u: goto label_19a1c8;
        case 0x19a1ccu: goto label_19a1cc;
        case 0x19a1d0u: goto label_19a1d0;
        case 0x19a1d4u: goto label_19a1d4;
        case 0x19a1d8u: goto label_19a1d8;
        case 0x19a1dcu: goto label_19a1dc;
        case 0x19a1e0u: goto label_19a1e0;
        case 0x19a1e4u: goto label_19a1e4;
        case 0x19a1e8u: goto label_19a1e8;
        case 0x19a1ecu: goto label_19a1ec;
        case 0x19a1f0u: goto label_19a1f0;
        case 0x19a1f4u: goto label_19a1f4;
        case 0x19a1f8u: goto label_19a1f8;
        case 0x19a1fcu: goto label_19a1fc;
        case 0x19a200u: goto label_19a200;
        case 0x19a204u: goto label_19a204;
        case 0x19a208u: goto label_19a208;
        case 0x19a20cu: goto label_19a20c;
        case 0x19a210u: goto label_19a210;
        case 0x19a214u: goto label_19a214;
        case 0x19a218u: goto label_19a218;
        case 0x19a21cu: goto label_19a21c;
        case 0x19a220u: goto label_19a220;
        case 0x19a224u: goto label_19a224;
        case 0x19a228u: goto label_19a228;
        case 0x19a22cu: goto label_19a22c;
        case 0x19a230u: goto label_19a230;
        case 0x19a234u: goto label_19a234;
        case 0x19a238u: goto label_19a238;
        case 0x19a23cu: goto label_19a23c;
        case 0x19a240u: goto label_19a240;
        case 0x19a244u: goto label_19a244;
        case 0x19a248u: goto label_19a248;
        case 0x19a24cu: goto label_19a24c;
        case 0x19a250u: goto label_19a250;
        case 0x19a254u: goto label_19a254;
        case 0x19a258u: goto label_19a258;
        case 0x19a25cu: goto label_19a25c;
        case 0x19a260u: goto label_19a260;
        case 0x19a264u: goto label_19a264;
        case 0x19a268u: goto label_19a268;
        case 0x19a26cu: goto label_19a26c;
        case 0x19a270u: goto label_19a270;
        case 0x19a274u: goto label_19a274;
        case 0x19a278u: goto label_19a278;
        case 0x19a27cu: goto label_19a27c;
        case 0x19a280u: goto label_19a280;
        case 0x19a284u: goto label_19a284;
        case 0x19a288u: goto label_19a288;
        case 0x19a28cu: goto label_19a28c;
        case 0x19a290u: goto label_19a290;
        case 0x19a294u: goto label_19a294;
        case 0x19a298u: goto label_19a298;
        case 0x19a29cu: goto label_19a29c;
        case 0x19a2a0u: goto label_19a2a0;
        case 0x19a2a4u: goto label_19a2a4;
        case 0x19a2a8u: goto label_19a2a8;
        case 0x19a2acu: goto label_19a2ac;
        case 0x19a2b0u: goto label_19a2b0;
        case 0x19a2b4u: goto label_19a2b4;
        case 0x19a2b8u: goto label_19a2b8;
        case 0x19a2bcu: goto label_19a2bc;
        case 0x19a2c0u: goto label_19a2c0;
        case 0x19a2c4u: goto label_19a2c4;
        case 0x19a2c8u: goto label_19a2c8;
        case 0x19a2ccu: goto label_19a2cc;
        case 0x19a2d0u: goto label_19a2d0;
        case 0x19a2d4u: goto label_19a2d4;
        case 0x19a2d8u: goto label_19a2d8;
        case 0x19a2dcu: goto label_19a2dc;
        case 0x19a2e0u: goto label_19a2e0;
        case 0x19a2e4u: goto label_19a2e4;
        case 0x19a2e8u: goto label_19a2e8;
        case 0x19a2ecu: goto label_19a2ec;
        case 0x19a2f0u: goto label_19a2f0;
        case 0x19a2f4u: goto label_19a2f4;
        case 0x19a2f8u: goto label_19a2f8;
        case 0x19a2fcu: goto label_19a2fc;
        case 0x19a300u: goto label_19a300;
        case 0x19a304u: goto label_19a304;
        case 0x19a308u: goto label_19a308;
        case 0x19a30cu: goto label_19a30c;
        case 0x19a310u: goto label_19a310;
        case 0x19a314u: goto label_19a314;
        case 0x19a318u: goto label_19a318;
        case 0x19a31cu: goto label_19a31c;
        case 0x19a320u: goto label_19a320;
        case 0x19a324u: goto label_19a324;
        case 0x19a328u: goto label_19a328;
        case 0x19a32cu: goto label_19a32c;
        case 0x19a330u: goto label_19a330;
        case 0x19a334u: goto label_19a334;
        default: break;
    }

    ctx->pc = 0x199c90u;

label_199c90:
    // 0x199c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_199c94:
    // 0x199c94: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x199c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_199c98:
    // 0x199c98: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x199c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_199c9c:
    // 0x199c9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199ca0:
    // 0x199ca0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x199ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_199ca4:
    // 0x199ca4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x199ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_199ca8:
    // 0x199ca8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x199ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_199cac:
    // 0x199cac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199cb0:
    // 0x199cb0: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x199cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
label_199cb4:
    // 0x199cb4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_199cb8:
    if (ctx->pc == 0x199CB8u) {
        ctx->pc = 0x199CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB4u;
        // 0x199cb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CBCu;
        goto label_199cbc;
    }
    ctx->pc = 0x199CB4u;
    {
        const bool branch_taken_0x199cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB4u;
        // 0x199cb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cb4) {
            ctx->pc = 0x199CC4u;
            goto label_199cc4;
        }
    }
    ctx->pc = 0x199CBCu;
label_199cbc:
    // 0x199cbc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_199cc0:
    // 0x199cc0: 0xac400914  sw          $zero, 0x914($v0)
    ctx->pc = 0x199cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2324), GPR_U32(ctx, 0));
label_199cc4:
    // 0x199cc4: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x199cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_199cc8:
    // 0x199cc8: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x199cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_199ccc:
    // 0x199ccc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_199cd0:
    // 0x199cd0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_199cd4:
    if (ctx->pc == 0x199CD4u) {
        ctx->pc = 0x199CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CD0u;
        // 0x199cd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CD8u;
        goto label_199cd8;
    }
    ctx->pc = 0x199CD0u;
    {
        const bool branch_taken_0x199cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x199CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CD0u;
        // 0x199cd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cd0) {
            ctx->pc = 0x199CECu;
            goto label_199cec;
        }
    }
    ctx->pc = 0x199CD8u;
label_199cd8:
    // 0x199cd8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x199cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_199cdc:
    // 0x199cdc: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x199cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_199ce0:
    // 0x199ce0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x199ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_199ce4:
    // 0x199ce4: 0x1000000a  b           . + 4 + (0xA << 2)
label_199ce8:
    if (ctx->pc == 0x199CE8u) {
        ctx->pc = 0x199CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CE4u;
        // 0x199ce8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CECu;
        goto label_199cec;
    }
    ctx->pc = 0x199CE4u;
    {
        const bool branch_taken_0x199ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CE4u;
        // 0x199ce8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ce4) {
            ctx->pc = 0x199D10u;
            goto label_199d10;
        }
    }
    ctx->pc = 0x199CECu;
label_199cec:
    // 0x199cec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_199cf0:
    if (ctx->pc == 0x199CF0u) {
        ctx->pc = 0x199CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CECu;
        // 0x199cf0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CF4u;
        goto label_199cf4;
    }
    ctx->pc = 0x199CECu;
    {
        const bool branch_taken_0x199cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CECu;
        // 0x199cf0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cec) {
            ctx->pc = 0x199D08u;
            goto label_199d08;
        }
    }
    ctx->pc = 0x199CF4u;
label_199cf4:
    // 0x199cf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x199cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199cf8:
    // 0x199cf8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_199cfc:
    if (ctx->pc == 0x199CFCu) {
        ctx->pc = 0x199CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CF8u;
        // 0x199cfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D00u;
        goto label_199d00;
    }
    ctx->pc = 0x199CF8u;
    {
        const bool branch_taken_0x199cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CF8u;
        // 0x199cfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cf8) {
            ctx->pc = 0x199D08u;
            goto label_199d08;
        }
    }
    ctx->pc = 0x199D00u;
label_199d00:
    // 0x199d00: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_199d04:
    if (ctx->pc == 0x199D04u) {
        ctx->pc = 0x199D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D00u;
        // 0x199d04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D08u;
        goto label_199d08;
    }
    ctx->pc = 0x199D00u;
    {
        const bool branch_taken_0x199d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x199D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D00u;
        // 0x199d04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d00) {
            ctx->pc = 0x199D10u;
            goto label_199d10;
        }
    }
    ctx->pc = 0x199D08u;
label_199d08:
    // 0x199d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199d0c:
    // 0x199d0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x199d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_199d10:
    // 0x199d10: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_199d14:
    if (ctx->pc == 0x199D14u) {
        ctx->pc = 0x199D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D10u;
        // 0x199d14: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D18u;
        goto label_199d18;
    }
    ctx->pc = 0x199D10u;
    {
        const bool branch_taken_0x199d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d10) {
            ctx->pc = 0x199D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D10u;
            // 0x199d14: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199D50u;
            goto label_199d50;
        }
    }
    ctx->pc = 0x199D18u;
label_199d18:
    // 0x199d18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x199d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_199d1c:
    // 0x199d1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_199d20:
    if (ctx->pc == 0x199D20u) {
        ctx->pc = 0x199D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D1Cu;
        // 0x199d20: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D24u;
        goto label_199d24;
    }
    ctx->pc = 0x199D1Cu;
    {
        const bool branch_taken_0x199d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D1Cu;
        // 0x199d20: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d1c) {
            ctx->pc = 0x199D38u;
            goto label_199d38;
        }
    }
    ctx->pc = 0x199D24u;
label_199d24:
    // 0x199d24: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x199d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_199d28:
    // 0x199d28: 0xc06fb64  jal         func_1BED90
label_199d2c:
    if (ctx->pc == 0x199D2Cu) {
        ctx->pc = 0x199D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D28u;
        // 0x199d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D30u;
        goto label_199d30;
    }
    ctx->pc = 0x199D28u;
    SET_GPR_U32(ctx, 31, 0x199D30u);
    ctx->pc = 0x199D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D28u;
    // 0x199d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x199D28u, 0x199D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D30u;
label_199d30:
    // 0x199d30: 0x10000007  b           . + 4 + (0x7 << 2)
label_199d34:
    if (ctx->pc == 0x199D34u) {
        ctx->pc = 0x199D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D30u;
        // 0x199d34: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D38u;
        goto label_199d38;
    }
    ctx->pc = 0x199D30u;
    {
        const bool branch_taken_0x199d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D30u;
        // 0x199d34: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d30) {
            ctx->pc = 0x199D50u;
            goto label_199d50;
        }
    }
    ctx->pc = 0x199D38u;
label_199d38:
    // 0x199d38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_199d3c:
    if (ctx->pc == 0x199D3Cu) {
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D38u;
        // 0x199d3c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D40u;
        goto label_199d40;
    }
    ctx->pc = 0x199D38u;
    {
        const bool branch_taken_0x199d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d38) {
            ctx->pc = 0x199D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D38u;
            // 0x199d3c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199D50u;
            goto label_199d50;
        }
    }
    ctx->pc = 0x199D40u;
label_199d40:
    // 0x199d40: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_199d44:
    // 0x199d44: 0xc06fb1e  jal         func_1BEC78
label_199d48:
    if (ctx->pc == 0x199D48u) {
        ctx->pc = 0x199D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D44u;
        // 0x199d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D4Cu;
        goto label_199d4c;
    }
    ctx->pc = 0x199D44u;
    SET_GPR_U32(ctx, 31, 0x199D4Cu);
    ctx->pc = 0x199D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D44u;
    // 0x199d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x199D44u, 0x199D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D4Cu;
label_199d4c:
    // 0x199d4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199d50:
    // 0x199d50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199d54:
    // 0x199d54: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x199d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
label_199d58:
    // 0x199d58: 0xc0f6da6  jal         func_3DB698
label_199d5c:
    if (ctx->pc == 0x199D5Cu) {
        ctx->pc = 0x199D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D58u;
        // 0x199d5c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D60u;
        goto label_199d60;
    }
    ctx->pc = 0x199D58u;
    SET_GPR_U32(ctx, 31, 0x199D60u);
    ctx->pc = 0x199D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D58u;
    // 0x199d5c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x199D58u, 0x199D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D60u;
label_199d60:
    // 0x199d60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_199d64:
    if (ctx->pc == 0x199D64u) {
        ctx->pc = 0x199D68u;
        goto label_199d68;
    }
    ctx->pc = 0x199D60u;
    {
        const bool branch_taken_0x199d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d60) {
            ctx->pc = 0x199D78u;
            goto label_199d78;
        }
    }
    ctx->pc = 0x199D68u;
label_199d68:
    // 0x199d68: 0xc08da4c  jal         func_236930
label_199d6c:
    if (ctx->pc == 0x199D6Cu) {
        ctx->pc = 0x199D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D68u;
        // 0x199d6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D70u;
        goto label_199d70;
    }
    ctx->pc = 0x199D68u;
    SET_GPR_U32(ctx, 31, 0x199D70u);
    ctx->pc = 0x199D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D68u;
    // 0x199d6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236930u, 0x199D68u, 0x199D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D70u;
label_199d70:
    // 0x199d70: 0x1000016a  b           . + 4 + (0x16A << 2)
label_199d74:
    if (ctx->pc == 0x199D74u) {
        ctx->pc = 0x199D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D70u;
        // 0x199d74: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D78u;
        goto label_199d78;
    }
    ctx->pc = 0x199D70u;
    {
        const bool branch_taken_0x199d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D70u;
        // 0x199d74: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d70) {
            ctx->pc = 0x19A31Cu;
            goto label_19a31c;
        }
    }
    ctx->pc = 0x199D78u;
label_199d78:
    // 0x199d78: 0xc061a4c  jal         func_186930
label_199d7c:
    if (ctx->pc == 0x199D7Cu) {
        ctx->pc = 0x199D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D78u;
        // 0x199d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D80u;
        goto label_199d80;
    }
    ctx->pc = 0x199D78u;
    SET_GPR_U32(ctx, 31, 0x199D80u);
    ctx->pc = 0x199D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D78u;
    // 0x199d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x199D78u, 0x199D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D80u;
label_199d80:
    // 0x199d80: 0xc0663c0  jal         func_198F00
label_199d84:
    if (ctx->pc == 0x199D84u) {
        ctx->pc = 0x199D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D80u;
        // 0x199d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D88u;
        goto label_199d88;
    }
    ctx->pc = 0x199D80u;
    SET_GPR_U32(ctx, 31, 0x199D88u);
    ctx->pc = 0x199D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D80u;
    // 0x199d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198F00u, 0x199D80u, 0x199D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D88u;
label_199d88:
    // 0x199d88: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199d8c:
    // 0x199d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_199d90:
    // 0x199d90: 0xc061a12  jal         func_186848
label_199d94:
    if (ctx->pc == 0x199D94u) {
        ctx->pc = 0x199D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D90u;
        // 0x199d94: 0x26101040  addiu       $s0, $s0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D98u;
        goto label_199d98;
    }
    ctx->pc = 0x199D90u;
    SET_GPR_U32(ctx, 31, 0x199D98u);
    ctx->pc = 0x199D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D90u;
    // 0x199d94: 0x26101040  addiu       $s0, $s0, 0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x199D90u, 0x199D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D98u;
label_199d98:
    // 0x199d98: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x199d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_199d9c:
    // 0x199d9c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x199d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_199da0:
    // 0x199da0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x199da0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_199da4:
    // 0x199da4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x199da4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_199da8:
    // 0x199da8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x199da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_199dac:
    // 0x199dac: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x199dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199db0:
    // 0x199db0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x199db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_199db4:
    // 0x199db4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x199db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199db8:
    // 0x199db8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x199db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199dbc:
    // 0x199dbc: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x199dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_199dc0:
    // 0x199dc0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x199dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_199dc4:
    // 0x199dc4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x199dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_199dc8:
    // 0x199dc8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x199dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_199dcc:
    // 0x199dcc: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x199dccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_199dd0:
    // 0x199dd0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x199dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199dd4:
    // 0x199dd4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x199dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_199dd8:
    // 0x199dd8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x199dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_199ddc:
    // 0x199ddc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x199ddcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_199de0:
    // 0x199de0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x199de0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_199de4:
    // 0x199de4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x199de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_199de8:
    // 0x199de8: 0x46000004  c1          0x4
    ctx->pc = 0x199de8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_199dec:
    // 0x199dec: 0xe64000b8  swc1        $f0, 0xB8($s2)
    ctx->pc = 0x199decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_199df0:
    // 0x199df0: 0xc061a12  jal         func_186848
label_199df4:
    if (ctx->pc == 0x199DF4u) {
        ctx->pc = 0x199DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DF0u;
        // 0x199df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DF8u;
        goto label_199df8;
    }
    ctx->pc = 0x199DF0u;
    SET_GPR_U32(ctx, 31, 0x199DF8u);
    ctx->pc = 0x199DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DF0u;
    // 0x199df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x199DF0u, 0x199DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199DF8u;
label_199df8:
    // 0x199df8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x199df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_199dfc:
    // 0x199dfc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x199dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_199e00:
    // 0x199e00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x199e00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_199e04:
    // 0x199e04: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x199e04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_199e08:
    // 0x199e08: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x199e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_199e0c:
    // 0x199e0c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x199e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199e10:
    // 0x199e10: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x199e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199e14:
    // 0x199e14: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x199e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199e18:
    // 0x199e18: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x199e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_199e1c:
    // 0x199e1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x199e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_199e20:
    // 0x199e20: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x199e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_199e24:
    // 0x199e24: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x199e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_199e28:
    // 0x199e28: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x199e28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_199e2c:
    // 0x199e2c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x199e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_199e30:
    // 0x199e30: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x199e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_199e34:
    // 0x199e34: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x199e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_199e38:
    // 0x199e38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x199e38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_199e3c:
    // 0x199e3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x199e3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_199e40:
    // 0x199e40: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x199e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_199e44:
    // 0x199e44: 0x46000004  c1          0x4
    ctx->pc = 0x199e44u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_199e48:
    // 0x199e48: 0xe64000bc  swc1        $f0, 0xBC($s2)
    ctx->pc = 0x199e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
label_199e4c:
    // 0x199e4c: 0xc0668ce  jal         func_19A338
label_199e50:
    if (ctx->pc == 0x199E50u) {
        ctx->pc = 0x199E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E4Cu;
        // 0x199e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E54u;
        goto label_199e54;
    }
    ctx->pc = 0x199E4Cu;
    SET_GPR_U32(ctx, 31, 0x199E54u);
    ctx->pc = 0x199E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E4Cu;
    // 0x199e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A338u, 0x199E4Cu, 0x199E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E54u;
label_199e54:
    // 0x199e54: 0xc061a26  jal         func_186898
label_199e58:
    if (ctx->pc == 0x199E58u) {
        ctx->pc = 0x199E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E54u;
        // 0x199e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E5Cu;
        goto label_199e5c;
    }
    ctx->pc = 0x199E54u;
    SET_GPR_U32(ctx, 31, 0x199E5Cu);
    ctx->pc = 0x199E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E54u;
    // 0x199e58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x199E54u, 0x199E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E5Cu;
label_199e5c:
    // 0x199e5c: 0x24530110  addiu       $s3, $v0, 0x110
    ctx->pc = 0x199e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_199e60:
    // 0x199e60: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x199e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_199e64:
    // 0x199e64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199e68:
    // 0x199e68: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x199e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199e6c:
    // 0x199e6c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x199e6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_199e70:
    // 0x199e70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x199e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199e74:
    // 0x199e74: 0x0  nop
    ctx->pc = 0x199e74u;
    // NOP
label_199e78:
    // 0x199e78: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_199e7c:
    if (ctx->pc == 0x199E7Cu) {
        ctx->pc = 0x199E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E78u;
        // 0x199e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E80u;
        goto label_199e80;
    }
    ctx->pc = 0x199E78u;
    {
        const bool branch_taken_0x199e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E78u;
        // 0x199e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e78) {
            ctx->pc = 0x199E94u;
            goto label_199e94;
        }
    }
    ctx->pc = 0x199E80u;
label_199e80:
    // 0x199e80: 0xc061a1e  jal         func_186878
label_199e84:
    if (ctx->pc == 0x199E84u) {
        ctx->pc = 0x199E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E80u;
        // 0x199e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E88u;
        goto label_199e88;
    }
    ctx->pc = 0x199E80u;
    SET_GPR_U32(ctx, 31, 0x199E88u);
    ctx->pc = 0x199E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E80u;
    // 0x199e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199E80u, 0x199E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E88u;
label_199e88:
    // 0x199e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199e8c:
    // 0x199e8c: 0x10000034  b           . + 4 + (0x34 << 2)
label_199e90:
    if (ctx->pc == 0x199E90u) {
        ctx->pc = 0x199E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E8Cu;
        // 0x199e90: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E94u;
        goto label_199e94;
    }
    ctx->pc = 0x199E8Cu;
    {
        const bool branch_taken_0x199e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E8Cu;
        // 0x199e90: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e8c) {
            ctx->pc = 0x199F60u;
            goto label_199f60;
        }
    }
    ctx->pc = 0x199E94u;
label_199e94:
    // 0x199e94: 0xc061a1e  jal         func_186878
label_199e98:
    if (ctx->pc == 0x199E98u) {
        ctx->pc = 0x199E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E94u;
        // 0x199e98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E9Cu;
        goto label_199e9c;
    }
    ctx->pc = 0x199E94u;
    SET_GPR_U32(ctx, 31, 0x199E9Cu);
    ctx->pc = 0x199E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E94u;
    // 0x199e98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199E94u, 0x199E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E9Cu;
label_199e9c:
    // 0x199e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199ea0:
    // 0x199ea0: 0xc06e0f0  jal         func_1B83C0
label_199ea4:
    if (ctx->pc == 0x199EA4u) {
        ctx->pc = 0x199EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EA0u;
        // 0x199ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EA8u;
        goto label_199ea8;
    }
    ctx->pc = 0x199EA0u;
    SET_GPR_U32(ctx, 31, 0x199EA8u);
    ctx->pc = 0x199EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EA0u;
    // 0x199ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x199EA0u, 0x199EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EA8u;
label_199ea8:
    // 0x199ea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_199eac:
    if (ctx->pc == 0x199EACu) {
        ctx->pc = 0x199EB0u;
        goto label_199eb0;
    }
    ctx->pc = 0x199EA8u;
    {
        const bool branch_taken_0x199ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199ea8) {
            ctx->pc = 0x199EB8u;
            goto label_199eb8;
        }
    }
    ctx->pc = 0x199EB0u;
label_199eb0:
    // 0x199eb0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_199eb4:
    // 0x199eb4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x199eb4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199eb8:
    // 0x199eb8: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_199ebc:
    if (ctx->pc == 0x199EBCu) {
        ctx->pc = 0x199EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EB8u;
        // 0x199ebc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EC0u;
        goto label_199ec0;
    }
    ctx->pc = 0x199EB8u;
    {
        const bool branch_taken_0x199eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EB8u;
        // 0x199ebc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199eb8) {
            ctx->pc = 0x199F60u;
            goto label_199f60;
        }
    }
    ctx->pc = 0x199EC0u;
label_199ec0:
    // 0x199ec0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199ec4:
    // 0x199ec4: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x199ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_199ec8:
    // 0x199ec8: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x199ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_199ecc:
    // 0x199ecc: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_199ed0:
    if (ctx->pc == 0x199ED0u) {
        ctx->pc = 0x199ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199ECCu;
        // 0x199ed0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199ED4u;
        goto label_199ed4;
    }
    ctx->pc = 0x199ECCu;
    {
        const bool branch_taken_0x199ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x199ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199ECCu;
        // 0x199ed0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ecc) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199ED4u;
label_199ed4:
    // 0x199ed4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199ed8:
    // 0x199ed8: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_199edc:
    if (ctx->pc == 0x199EDCu) {
        ctx->pc = 0x199EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199ED8u;
        // 0x199edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EE0u;
        goto label_199ee0;
    }
    ctx->pc = 0x199ED8u;
    {
        const bool branch_taken_0x199ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199ED8u;
        // 0x199edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ed8) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EE0u;
label_199ee0:
    // 0x199ee0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_199ee4:
    if (ctx->pc == 0x199EE4u) {
        ctx->pc = 0x199EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EE0u;
        // 0x199ee4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EE8u;
        goto label_199ee8;
    }
    ctx->pc = 0x199EE0u;
    {
        const bool branch_taken_0x199ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EE0u;
        // 0x199ee4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ee0) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EE8u;
label_199ee8:
    // 0x199ee8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_199eec:
    if (ctx->pc == 0x199EECu) {
        ctx->pc = 0x199EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EE8u;
        // 0x199eec: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EF0u;
        goto label_199ef0;
    }
    ctx->pc = 0x199EE8u;
    {
        const bool branch_taken_0x199ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EE8u;
        // 0x199eec: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ee8) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EF0u;
label_199ef0:
    // 0x199ef0: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_199ef4:
    if (ctx->pc == 0x199EF4u) {
        ctx->pc = 0x199EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EF0u;
        // 0x199ef4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EF8u;
        goto label_199ef8;
    }
    ctx->pc = 0x199EF0u;
    {
        const bool branch_taken_0x199ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x199ef0) {
            ctx->pc = 0x199EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199EF0u;
            // 0x199ef4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F1Cu;
            goto label_199f1c;
        }
    }
    ctx->pc = 0x199EF8u;
label_199ef8:
    // 0x199ef8: 0xc0924a6  jal         func_249298
label_199efc:
    if (ctx->pc == 0x199EFCu) {
        ctx->pc = 0x199EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EF8u;
        // 0x199efc: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F00u;
        goto label_199f00;
    }
    ctx->pc = 0x199EF8u;
    SET_GPR_U32(ctx, 31, 0x199F00u);
    ctx->pc = 0x199EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EF8u;
    // 0x199efc: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249298u, 0x199EF8u, 0x199F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F00u;
label_199f00:
    // 0x199f00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_199f04:
    if (ctx->pc == 0x199F04u) {
        ctx->pc = 0x199F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F00u;
        // 0x199f04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F08u;
        goto label_199f08;
    }
    ctx->pc = 0x199F00u;
    {
        const bool branch_taken_0x199f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199f00) {
            ctx->pc = 0x199F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199F00u;
            // 0x199f04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F1Cu;
            goto label_199f1c;
        }
    }
    ctx->pc = 0x199F08u;
label_199f08:
    // 0x199f08: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x199f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_199f0c:
    // 0x199f0c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x199f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_199f10:
    // 0x199f10: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_199f14:
    if (ctx->pc == 0x199F14u) {
        ctx->pc = 0x199F18u;
        goto label_199f18;
    }
    ctx->pc = 0x199F10u;
    {
        const bool branch_taken_0x199f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199f10) {
            ctx->pc = 0x199F1Cu;
            goto label_199f1c;
        }
    }
    ctx->pc = 0x199F18u;
label_199f18:
    // 0x199f18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199f1c:
    // 0x199f1c: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_199f20:
    if (ctx->pc == 0x199F20u) {
        ctx->pc = 0x199F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F1Cu;
        // 0x199f20: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F24u;
        goto label_199f24;
    }
    ctx->pc = 0x199F1Cu;
    {
        const bool branch_taken_0x199f1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f1c) {
            ctx->pc = 0x199F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199F1Cu;
            // 0x199f20: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F64u;
            goto label_199f64;
        }
    }
    ctx->pc = 0x199F24u;
label_199f24:
    // 0x199f24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199f28:
    // 0x199f28: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x199f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
label_199f2c:
    // 0x199f2c: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_199f30:
    if (ctx->pc == 0x199F30u) {
        ctx->pc = 0x199F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F2Cu;
        // 0x199f30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F34u;
        goto label_199f34;
    }
    ctx->pc = 0x199F2Cu;
    {
        const bool branch_taken_0x199f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199f2c) {
            ctx->pc = 0x199F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199F2Cu;
            // 0x199f30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F64u;
            goto label_199f64;
        }
    }
    ctx->pc = 0x199F34u;
label_199f34:
    // 0x199f34: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x199f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199f38:
    // 0x199f38: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x199f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_199f3c:
    // 0x199f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199f40:
    // 0x199f40: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x199f40u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_199f44:
    // 0x199f44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199f48:
    // 0x199f48: 0x0  nop
    ctx->pc = 0x199f48u;
    // NOP
label_199f4c:
    // 0x199f4c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_199f50:
    if (ctx->pc == 0x199F50u) {
        ctx->pc = 0x199F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F4Cu;
        // 0x199f50: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F54u;
        goto label_199f54;
    }
    ctx->pc = 0x199F4Cu;
    {
        const bool branch_taken_0x199f4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199f4c) {
            ctx->pc = 0x199F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199F4Cu;
            // 0x199f50: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F64u;
            goto label_199f64;
        }
    }
    ctx->pc = 0x199F54u;
label_199f54:
    // 0x199f54: 0xc061a1e  jal         func_186878
label_199f58:
    if (ctx->pc == 0x199F58u) {
        ctx->pc = 0x199F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F54u;
        // 0x199f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F5Cu;
        goto label_199f5c;
    }
    ctx->pc = 0x199F54u;
    SET_GPR_U32(ctx, 31, 0x199F5Cu);
    ctx->pc = 0x199F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F54u;
    // 0x199f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199F54u, 0x199F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F5Cu;
label_199f5c:
    // 0x199f5c: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x199f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_199f60:
    // 0x199f60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x199f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199f64:
    // 0x199f64: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x199f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_199f68:
    // 0x199f68: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x199f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_199f6c:
    // 0x199f6c: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x199f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_199f70:
    // 0x199f70: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x199f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_199f74:
    // 0x199f74: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
label_199f78:
    if (ctx->pc == 0x199F78u) {
        ctx->pc = 0x199F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F74u;
        // 0x199f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F7Cu;
        goto label_199f7c;
    }
    ctx->pc = 0x199F74u;
    {
        const bool branch_taken_0x199f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x199F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F74u;
        // 0x199f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f74) {
            ctx->pc = 0x199F90u;
            goto label_199f90;
        }
    }
    ctx->pc = 0x199F7Cu;
label_199f7c:
    // 0x199f7c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_199f80:
    // 0x199f80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_199f84:
    if (ctx->pc == 0x199F84u) {
        ctx->pc = 0x199F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F80u;
        // 0x199f84: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F88u;
        goto label_199f88;
    }
    ctx->pc = 0x199F80u;
    {
        const bool branch_taken_0x199f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F80u;
        // 0x199f84: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f80) {
            ctx->pc = 0x199F90u;
            goto label_199f90;
        }
    }
    ctx->pc = 0x199F88u;
label_199f88:
    // 0x199f88: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_199f8c:
    if (ctx->pc == 0x199F8Cu) {
        ctx->pc = 0x199F90u;
        goto label_199f90;
    }
    ctx->pc = 0x199F88u;
    {
        const bool branch_taken_0x199f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199f88) {
            ctx->pc = 0x199F94u;
            goto label_199f94;
        }
    }
    ctx->pc = 0x199F90u;
label_199f90:
    // 0x199f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199f94:
    // 0x199f94: 0x50c0001b  beql        $a2, $zero, . + 4 + (0x1B << 2)
label_199f98:
    if (ctx->pc == 0x199F98u) {
        ctx->pc = 0x199F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F94u;
        // 0x199f98: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F9Cu;
        goto label_199f9c;
    }
    ctx->pc = 0x199F94u;
    {
        const bool branch_taken_0x199f94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f94) {
            ctx->pc = 0x199F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199F94u;
            // 0x199f98: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A004u;
            goto label_19a004;
        }
    }
    ctx->pc = 0x199F9Cu;
label_199f9c:
    // 0x199f9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_199fa0:
    // 0x199fa0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_199fa4:
    if (ctx->pc == 0x199FA4u) {
        ctx->pc = 0x199FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FA0u;
        // 0x199fa4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199FA8u;
        goto label_199fa8;
    }
    ctx->pc = 0x199FA0u;
    {
        const bool branch_taken_0x199fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fa0) {
            ctx->pc = 0x199FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199FA0u;
            // 0x199fa4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199FBCu;
            goto label_199fbc;
        }
    }
    ctx->pc = 0x199FA8u;
label_199fa8:
    // 0x199fa8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x199fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_199fac:
    // 0x199fac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x199facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_199fb0:
    // 0x199fb0: 0x40f809  jalr        $v0
label_199fb4:
    if (ctx->pc == 0x199FB4u) {
        ctx->pc = 0x199FB8u;
        goto label_199fb8;
    }
    ctx->pc = 0x199FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199FB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199FB0u, 0x199FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199FB8u;
label_199fb8:
    // 0x199fb8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x199fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_199fbc:
    // 0x199fbc: 0xc061a12  jal         func_186848
label_199fc0:
    if (ctx->pc == 0x199FC0u) {
        ctx->pc = 0x199FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FBCu;
        // 0x199fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199FC4u;
        goto label_199fc4;
    }
    ctx->pc = 0x199FBCu;
    SET_GPR_U32(ctx, 31, 0x199FC4u);
    ctx->pc = 0x199FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FBCu;
    // 0x199fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x199FBCu, 0x199FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FC4u;
label_199fc4:
    // 0x199fc4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_199fc8:
    // 0x199fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199fcc:
    // 0x199fcc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_199fd0:
    // 0x199fd0: 0x40f809  jalr        $v0
label_199fd4:
    if (ctx->pc == 0x199FD4u) {
        ctx->pc = 0x199FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FD0u;
        // 0x199fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199FD8u;
        goto label_199fd8;
    }
    ctx->pc = 0x199FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199FD8u);
        ctx->pc = 0x199FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FD0u;
        // 0x199fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199FD0u, 0x199FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199FD8u;
label_199fd8:
    // 0x199fd8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_199fdc:
    // 0x199fdc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_199fe0:
    // 0x199fe0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x199fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_199fe4:
    // 0x199fe4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x199fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_199fe8:
    // 0x199fe8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_199fec:
    // 0x199fec: 0xac6008d8  sw          $zero, 0x8D8($v1)
    ctx->pc = 0x199fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2264), GPR_U32(ctx, 0));
label_199ff0:
    // 0x199ff0: 0xac4008dc  sw          $zero, 0x8DC($v0)
    ctx->pc = 0x199ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2268), GPR_U32(ctx, 0));
label_199ff4:
    // 0x199ff4: 0xac8008e0  sw          $zero, 0x8E0($a0)
    ctx->pc = 0x199ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2272), GPR_U32(ctx, 0));
label_199ff8:
    // 0x199ff8: 0xaca008e4  sw          $zero, 0x8E4($a1)
    ctx->pc = 0x199ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2276), GPR_U32(ctx, 0));
label_199ffc:
    // 0x199ffc: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_19a000:
    if (ctx->pc == 0x19A000u) {
        ctx->pc = 0x19A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FFCu;
        // 0x19a000: 0xacc008e8  sw          $zero, 0x8E8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A004u;
        goto label_19a004;
    }
    ctx->pc = 0x199FFCu;
    {
        const bool branch_taken_0x199ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FFCu;
        // 0x19a000: 0xacc008e8  sw          $zero, 0x8E8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ffc) {
            ctx->pc = 0x19A318u;
            goto label_19a318;
        }
    }
    ctx->pc = 0x19A004u;
label_19a004:
    // 0x19a004: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x19a004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_19a008:
    // 0x19a008: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_19a00c:
    if (ctx->pc == 0x19A00Cu) {
        ctx->pc = 0x19A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A008u;
        // 0x19a00c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A010u;
        goto label_19a010;
    }
    ctx->pc = 0x19A008u;
    {
        const bool branch_taken_0x19a008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A008u;
        // 0x19a00c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a008) {
            ctx->pc = 0x19A100u;
            goto label_19a100;
        }
    }
    ctx->pc = 0x19A010u;
label_19a010:
    // 0x19a010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19a014:
    // 0x19a014: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_19a018:
    // 0x19a018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a01c:
    // 0x19a01c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a020:
    // 0x19a020: 0x800008  jr          $a0
label_19a024:
    if (ctx->pc == 0x19A024u) {
        ctx->pc = 0x19A028u;
        goto label_19a028;
    }
    ctx->pc = 0x19A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A028u: goto label_19a028;
            case 0x19A038u: goto label_19a038;
            case 0x19A048u: goto label_19a048;
            case 0x19A058u: goto label_19a058;
            case 0x19A068u: goto label_19a068;
            case 0x19A078u: goto label_19a078;
            case 0x19A088u: goto label_19a088;
            case 0x19A098u: goto label_19a098;
            case 0x19A0A8u: goto label_19a0a8;
            case 0x19A0B8u: goto label_19a0b8;
            case 0x19A0C8u: goto label_19a0c8;
            case 0x19A0D8u: goto label_19a0d8;
            case 0x19A0E8u: goto label_19a0e8;
            case 0x19A0F8u: goto label_19a0f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19A028u;
label_19a028:
    // 0x19a028: 0xc067030  jal         func_19C0C0
label_19a02c:
    if (ctx->pc == 0x19A02Cu) {
        ctx->pc = 0x19A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A028u;
        // 0x19a02c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A030u;
        goto label_19a030;
    }
    ctx->pc = 0x19A028u;
    SET_GPR_U32(ctx, 31, 0x19A030u);
    ctx->pc = 0x19A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A028u;
    // 0x19a02c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C0C0u, 0x19A028u, 0x19A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A030u;
label_19a030:
    // 0x19a030: 0x10000034  b           . + 4 + (0x34 << 2)
label_19a034:
    if (ctx->pc == 0x19A034u) {
        ctx->pc = 0x19A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A030u;
        // 0x19a034: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A038u;
        goto label_19a038;
    }
    ctx->pc = 0x19A030u;
    {
        const bool branch_taken_0x19a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A030u;
        // 0x19a034: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a030) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A038u;
label_19a038:
    // 0x19a038: 0xc066a1c  jal         func_19A870
label_19a03c:
    if (ctx->pc == 0x19A03Cu) {
        ctx->pc = 0x19A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A038u;
        // 0x19a03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A040u;
        goto label_19a040;
    }
    ctx->pc = 0x19A038u;
    SET_GPR_U32(ctx, 31, 0x19A040u);
    ctx->pc = 0x19A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A038u;
    // 0x19a03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A870u, 0x19A038u, 0x19A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A040u;
label_19a040:
    // 0x19a040: 0x10000030  b           . + 4 + (0x30 << 2)
label_19a044:
    if (ctx->pc == 0x19A044u) {
        ctx->pc = 0x19A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A040u;
        // 0x19a044: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A048u;
        goto label_19a048;
    }
    ctx->pc = 0x19A040u;
    {
        const bool branch_taken_0x19a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A040u;
        // 0x19a044: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a040) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0xc066a7a  jal         func_19A9E8
label_19a04c:
    if (ctx->pc == 0x19A04Cu) {
        ctx->pc = 0x19A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A048u;
        // 0x19a04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A050u;
        goto label_19a050;
    }
    ctx->pc = 0x19A048u;
    SET_GPR_U32(ctx, 31, 0x19A050u);
    ctx->pc = 0x19A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A048u;
    // 0x19a04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9E8u, 0x19A048u, 0x19A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A050u;
label_19a050:
    // 0x19a050: 0x1000002c  b           . + 4 + (0x2C << 2)
label_19a054:
    if (ctx->pc == 0x19A054u) {
        ctx->pc = 0x19A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A050u;
        // 0x19a054: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A058u;
        goto label_19a058;
    }
    ctx->pc = 0x19A050u;
    {
        const bool branch_taken_0x19a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A050u;
        // 0x19a054: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a050) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A058u;
label_19a058:
    // 0x19a058: 0xc066bb4  jal         func_19AED0
label_19a05c:
    if (ctx->pc == 0x19A05Cu) {
        ctx->pc = 0x19A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A058u;
        // 0x19a05c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A060u;
        goto label_19a060;
    }
    ctx->pc = 0x19A058u;
    SET_GPR_U32(ctx, 31, 0x19A060u);
    ctx->pc = 0x19A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A058u;
    // 0x19a05c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AED0u, 0x19A058u, 0x19A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A060u;
label_19a060:
    // 0x19a060: 0x10000028  b           . + 4 + (0x28 << 2)
label_19a064:
    if (ctx->pc == 0x19A064u) {
        ctx->pc = 0x19A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A060u;
        // 0x19a064: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A068u;
        goto label_19a068;
    }
    ctx->pc = 0x19A060u;
    {
        const bool branch_taken_0x19a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A060u;
        // 0x19a064: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a060) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A068u;
label_19a068:
    // 0x19a068: 0xc066bfe  jal         func_19AFF8
label_19a06c:
    if (ctx->pc == 0x19A06Cu) {
        ctx->pc = 0x19A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A068u;
        // 0x19a06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A070u;
        goto label_19a070;
    }
    ctx->pc = 0x19A068u;
    SET_GPR_U32(ctx, 31, 0x19A070u);
    ctx->pc = 0x19A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A068u;
    // 0x19a06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AFF8u, 0x19A068u, 0x19A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A070u;
label_19a070:
    // 0x19a070: 0x10000024  b           . + 4 + (0x24 << 2)
label_19a074:
    if (ctx->pc == 0x19A074u) {
        ctx->pc = 0x19A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A070u;
        // 0x19a074: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A078u;
        goto label_19a078;
    }
    ctx->pc = 0x19A070u;
    {
        const bool branch_taken_0x19a070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A070u;
        // 0x19a074: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a070) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A078u;
label_19a078:
    // 0x19a078: 0xc066d66  jal         func_19B598
label_19a07c:
    if (ctx->pc == 0x19A07Cu) {
        ctx->pc = 0x19A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A078u;
        // 0x19a07c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A080u;
        goto label_19a080;
    }
    ctx->pc = 0x19A078u;
    SET_GPR_U32(ctx, 31, 0x19A080u);
    ctx->pc = 0x19A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A078u;
    // 0x19a07c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B598u, 0x19A078u, 0x19A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A080u;
label_19a080:
    // 0x19a080: 0x10000020  b           . + 4 + (0x20 << 2)
label_19a084:
    if (ctx->pc == 0x19A084u) {
        ctx->pc = 0x19A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A080u;
        // 0x19a084: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A088u;
        goto label_19a088;
    }
    ctx->pc = 0x19A080u;
    {
        const bool branch_taken_0x19a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A080u;
        // 0x19a084: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a080) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A088u;
label_19a088:
    // 0x19a088: 0xc066b2a  jal         func_19ACA8
label_19a08c:
    if (ctx->pc == 0x19A08Cu) {
        ctx->pc = 0x19A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A088u;
        // 0x19a08c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A090u;
        goto label_19a090;
    }
    ctx->pc = 0x19A088u;
    SET_GPR_U32(ctx, 31, 0x19A090u);
    ctx->pc = 0x19A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A088u;
    // 0x19a08c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ACA8u, 0x19A088u, 0x19A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A090u;
label_19a090:
    // 0x19a090: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19a094:
    if (ctx->pc == 0x19A094u) {
        ctx->pc = 0x19A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A090u;
        // 0x19a094: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A098u;
        goto label_19a098;
    }
    ctx->pc = 0x19A090u;
    {
        const bool branch_taken_0x19a090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A090u;
        // 0x19a094: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a090) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A098u;
label_19a098:
    // 0x19a098: 0xc066e96  jal         func_19BA58
label_19a09c:
    if (ctx->pc == 0x19A09Cu) {
        ctx->pc = 0x19A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A098u;
        // 0x19a09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0A0u;
        goto label_19a0a0;
    }
    ctx->pc = 0x19A098u;
    SET_GPR_U32(ctx, 31, 0x19A0A0u);
    ctx->pc = 0x19A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A098u;
    // 0x19a09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x19A098u, 0x19A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0A0u;
label_19a0a0:
    // 0x19a0a0: 0x10000018  b           . + 4 + (0x18 << 2)
label_19a0a4:
    if (ctx->pc == 0x19A0A4u) {
        ctx->pc = 0x19A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A0u;
        // 0x19a0a4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0A8u;
        goto label_19a0a8;
    }
    ctx->pc = 0x19A0A0u;
    {
        const bool branch_taken_0x19a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A0u;
        // 0x19a0a4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0a0) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0A8u;
label_19a0a8:
    // 0x19a0a8: 0xc066c9a  jal         func_19B268
label_19a0ac:
    if (ctx->pc == 0x19A0ACu) {
        ctx->pc = 0x19A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A8u;
        // 0x19a0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0B0u;
        goto label_19a0b0;
    }
    ctx->pc = 0x19A0A8u;
    SET_GPR_U32(ctx, 31, 0x19A0B0u);
    ctx->pc = 0x19A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0A8u;
    // 0x19a0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B268u, 0x19A0A8u, 0x19A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0B0u;
label_19a0b0:
    // 0x19a0b0: 0x10000014  b           . + 4 + (0x14 << 2)
label_19a0b4:
    if (ctx->pc == 0x19A0B4u) {
        ctx->pc = 0x19A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0B0u;
        // 0x19a0b4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0B8u;
        goto label_19a0b8;
    }
    ctx->pc = 0x19A0B0u;
    {
        const bool branch_taken_0x19a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0B0u;
        // 0x19a0b4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0b0) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0B8u;
label_19a0b8:
    // 0x19a0b8: 0xc066f4c  jal         func_19BD30
label_19a0bc:
    if (ctx->pc == 0x19A0BCu) {
        ctx->pc = 0x19A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0B8u;
        // 0x19a0bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0C0u;
        goto label_19a0c0;
    }
    ctx->pc = 0x19A0B8u;
    SET_GPR_U32(ctx, 31, 0x19A0C0u);
    ctx->pc = 0x19A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0B8u;
    // 0x19a0bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD30u, 0x19A0B8u, 0x19A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0C0u;
label_19a0c0:
    // 0x19a0c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_19a0c4:
    if (ctx->pc == 0x19A0C4u) {
        ctx->pc = 0x19A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0C0u;
        // 0x19a0c4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0C8u;
        goto label_19a0c8;
    }
    ctx->pc = 0x19A0C0u;
    {
        const bool branch_taken_0x19a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0C0u;
        // 0x19a0c4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0c0) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0C8u;
label_19a0c8:
    // 0x19a0c8: 0xc066fd4  jal         func_19BF50
label_19a0cc:
    if (ctx->pc == 0x19A0CCu) {
        ctx->pc = 0x19A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0C8u;
        // 0x19a0cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0D0u;
        goto label_19a0d0;
    }
    ctx->pc = 0x19A0C8u;
    SET_GPR_U32(ctx, 31, 0x19A0D0u);
    ctx->pc = 0x19A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0C8u;
    // 0x19a0cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF50u, 0x19A0C8u, 0x19A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0D0u;
label_19a0d0:
    // 0x19a0d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_19a0d4:
    if (ctx->pc == 0x19A0D4u) {
        ctx->pc = 0x19A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0D0u;
        // 0x19a0d4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0D8u;
        goto label_19a0d8;
    }
    ctx->pc = 0x19A0D0u;
    {
        const bool branch_taken_0x19a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0D0u;
        // 0x19a0d4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0d0) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0D8u;
label_19a0d8:
    // 0x19a0d8: 0xc066fb6  jal         func_19BED8
label_19a0dc:
    if (ctx->pc == 0x19A0DCu) {
        ctx->pc = 0x19A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0D8u;
        // 0x19a0dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0E0u;
        goto label_19a0e0;
    }
    ctx->pc = 0x19A0D8u;
    SET_GPR_U32(ctx, 31, 0x19A0E0u);
    ctx->pc = 0x19A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0D8u;
    // 0x19a0dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED8u, 0x19A0D8u, 0x19A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0E0u;
label_19a0e0:
    // 0x19a0e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_19a0e4:
    if (ctx->pc == 0x19A0E4u) {
        ctx->pc = 0x19A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0E0u;
        // 0x19a0e4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0E8u;
        goto label_19a0e8;
    }
    ctx->pc = 0x19A0E0u;
    {
        const bool branch_taken_0x19a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0E0u;
        // 0x19a0e4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0e0) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0E8u;
label_19a0e8:
    // 0x19a0e8: 0xc067010  jal         func_19C040
label_19a0ec:
    if (ctx->pc == 0x19A0ECu) {
        ctx->pc = 0x19A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0E8u;
        // 0x19a0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0F0u;
        goto label_19a0f0;
    }
    ctx->pc = 0x19A0E8u;
    SET_GPR_U32(ctx, 31, 0x19A0F0u);
    ctx->pc = 0x19A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0E8u;
    // 0x19a0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C040u, 0x19A0E8u, 0x19A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0F0u;
label_19a0f0:
    // 0x19a0f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a0f4:
    if (ctx->pc == 0x19A0F4u) {
        ctx->pc = 0x19A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0F0u;
        // 0x19a0f4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0F8u;
        goto label_19a0f8;
    }
    ctx->pc = 0x19A0F0u;
    {
        const bool branch_taken_0x19a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0F0u;
        // 0x19a0f4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0f0) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0F8u;
label_19a0f8:
    // 0x19a0f8: 0xc066980  jal         func_19A600
label_19a0fc:
    if (ctx->pc == 0x19A0FCu) {
        ctx->pc = 0x19A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0F8u;
        // 0x19a0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A100u;
        goto label_19a100;
    }
    ctx->pc = 0x19A0F8u;
    SET_GPR_U32(ctx, 31, 0x19A100u);
    ctx->pc = 0x19A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0F8u;
    // 0x19a0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A600u, 0x19A0F8u, 0x19A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A100u;
label_19a100:
    // 0x19a100: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_19a104:
    // 0x19a104: 0x8c430910  lw          $v1, 0x910($v0)
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2320)));
label_19a108:
    // 0x19a108: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_19a10c:
    if (ctx->pc == 0x19A10Cu) {
        ctx->pc = 0x19A110u;
        goto label_19a110;
    }
    ctx->pc = 0x19A108u;
    {
        const bool branch_taken_0x19a108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a108) {
            ctx->pc = 0x19A120u;
            goto label_19a120;
        }
    }
    ctx->pc = 0x19A110u;
label_19a110:
    // 0x19a110: 0xc066c1e  jal         func_19B078
label_19a114:
    if (ctx->pc == 0x19A114u) {
        ctx->pc = 0x19A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A110u;
        // 0x19a114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A118u;
        goto label_19a118;
    }
    ctx->pc = 0x19A110u;
    SET_GPR_U32(ctx, 31, 0x19A118u);
    ctx->pc = 0x19A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A110u;
    // 0x19a114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B078u, 0x19A110u, 0x19A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A118u;
label_19a118:
    // 0x19a118: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a11c:
    if (ctx->pc == 0x19A11Cu) {
        ctx->pc = 0x19A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A118u;
        // 0x19a11c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A120u;
        goto label_19a120;
    }
    ctx->pc = 0x19A118u;
    {
        const bool branch_taken_0x19a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A118u;
        // 0x19a11c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a118) {
            ctx->pc = 0x19A12Cu;
            goto label_19a12c;
        }
    }
    ctx->pc = 0x19A120u;
label_19a120:
    // 0x19a120: 0xc066c64  jal         func_19B190
label_19a124:
    if (ctx->pc == 0x19A124u) {
        ctx->pc = 0x19A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A120u;
        // 0x19a124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A128u;
        goto label_19a128;
    }
    ctx->pc = 0x19A120u;
    SET_GPR_U32(ctx, 31, 0x19A128u);
    ctx->pc = 0x19A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A120u;
    // 0x19a124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B190u, 0x19A120u, 0x19A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A128u;
label_19a128:
    // 0x19a128: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19a12c:
    // 0x19a12c: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
label_19a130:
    if (ctx->pc == 0x19A130u) {
        ctx->pc = 0x19A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A12Cu;
        // 0x19a130: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A134u;
        goto label_19a134;
    }
    ctx->pc = 0x19A12Cu;
    {
        const bool branch_taken_0x19a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a12c) {
            ctx->pc = 0x19A130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A12Cu;
            // 0x19a130: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2BCu;
            goto label_19a2bc;
        }
    }
    ctx->pc = 0x19A134u;
label_19a134:
    // 0x19a134: 0x8c421004  lw          $v0, 0x1004($v0)
    ctx->pc = 0x19a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_19a138:
    // 0x19a138: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_19a13c:
    if (ctx->pc == 0x19A13Cu) {
        ctx->pc = 0x19A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A138u;
        // 0x19a13c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A140u;
        goto label_19a140;
    }
    ctx->pc = 0x19A138u;
    {
        const bool branch_taken_0x19a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A138u;
        // 0x19a13c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a138) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A140u;
label_19a140:
    // 0x19a140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a144:
    // 0x19a144: 0xc061a1e  jal         func_186878
label_19a148:
    if (ctx->pc == 0x19A148u) {
        ctx->pc = 0x19A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A144u;
        // 0x19a148: 0x8e112b00  lw          $s1, 0x2B00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A14Cu;
        goto label_19a14c;
    }
    ctx->pc = 0x19A144u;
    SET_GPR_U32(ctx, 31, 0x19A14Cu);
    ctx->pc = 0x19A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A144u;
    // 0x19a148: 0x8e112b00  lw          $s1, 0x2B00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A144u, 0x19A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A14Cu;
label_19a14c:
    // 0x19a14c: 0xc44200e0  lwc1        $f2, 0xE0($v0)
    ctx->pc = 0x19a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a150:
    // 0x19a150: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_19a154:
    if (ctx->pc == 0x19A154u) {
        ctx->pc = 0x19A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A150u;
        // 0x19a154: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A158u;
        goto label_19a158;
    }
    ctx->pc = 0x19A150u;
    {
        const bool branch_taken_0x19a150 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A150u;
        // 0x19a154: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a150) {
            ctx->pc = 0x19A16Cu;
            goto label_19a16c;
        }
    }
    ctx->pc = 0x19A158u;
label_19a158:
    // 0x19a158: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x19a158u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a15c:
    // 0x19a15c: 0x0  nop
    ctx->pc = 0x19a15cu;
    // NOP
label_19a160:
    // 0x19a160: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19a164:
    // 0x19a164: 0x10000009  b           . + 4 + (0x9 << 2)
label_19a168:
    if (ctx->pc == 0x19A168u) {
        ctx->pc = 0x19A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A164u;
        // 0x19a168: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A16Cu;
        goto label_19a16c;
    }
    ctx->pc = 0x19A164u;
    {
        const bool branch_taken_0x19a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A164u;
        // 0x19a168: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a164) {
            ctx->pc = 0x19A18Cu;
            goto label_19a18c;
        }
    }
    ctx->pc = 0x19A16Cu;
label_19a16c:
    // 0x19a16c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x19a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_19a170:
    // 0x19a170: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x19a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_19a174:
    // 0x19a174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19a178:
    // 0x19a178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a17c:
    // 0x19a17c: 0x0  nop
    ctx->pc = 0x19a17cu;
    // NOP
label_19a180:
    // 0x19a180: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19a184:
    // 0x19a184: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19a184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19a188:
    // 0x19a188: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x19a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19a18c:
    // 0x19a18c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_19a190:
    // 0x19a190: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x19a190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_19a194:
    // 0x19a194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a198:
    // 0x19a198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a19c:
    // 0x19a19c: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x19a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_19a1a0:
    // 0x19a1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a1a4:
    // 0x19a1a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19a1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19a1a8:
    // 0x19a1a8: 0x8c660918  lw          $a2, 0x918($v1)
    ctx->pc = 0x19a1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2328)));
label_19a1ac:
    // 0x19a1ac: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_19a1b0:
    // 0x19a1b0: 0x240507b4  addiu       $a1, $zero, 0x7B4
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1972));
label_19a1b4:
    // 0x19a1b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19a1b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19a1b8:
    // 0x19a1b8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_19a1bc:
    // 0x19a1bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19a1c0:
    // 0x19a1c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19a1c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_19a1c4:
    // 0x19a1c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x19a1c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_19a1c8:
    // 0x19a1c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a1cc:
    // 0x19a1cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a1d0:
    // 0x19a1d0: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
label_19a1d4:
    if (ctx->pc == 0x19A1D4u) {
        ctx->pc = 0x19A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1D0u;
        // 0x19a1d4: 0xc4302a  slt         $a2, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1D8u;
        goto label_19a1d8;
    }
    ctx->pc = 0x19A1D0u;
    {
        const bool branch_taken_0x19a1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1D0u;
        // 0x19a1d4: 0xc4302a  slt         $a2, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1d0) {
            ctx->pc = 0x19A1FCu;
            goto label_19a1fc;
        }
    }
    ctx->pc = 0x19A1D8u;
label_19a1d8:
    // 0x19a1d8: 0x240207b6  addiu       $v0, $zero, 0x7B6
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1974));
label_19a1dc:
    // 0x19a1dc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_19a1e0:
    if (ctx->pc == 0x19A1E0u) {
        ctx->pc = 0x19A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1DCu;
        // 0x19a1e0: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1E4u;
        goto label_19a1e4;
    }
    ctx->pc = 0x19A1DCu;
    {
        const bool branch_taken_0x19a1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1DCu;
        // 0x19a1e0: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1dc) {
            ctx->pc = 0x19A1FCu;
            goto label_19a1fc;
        }
    }
    ctx->pc = 0x19A1E4u;
label_19a1e4:
    // 0x19a1e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_19a1e8:
    if (ctx->pc == 0x19A1E8u) {
        ctx->pc = 0x19A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E4u;
        // 0x19a1e8: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1ECu;
        goto label_19a1ec;
    }
    ctx->pc = 0x19A1E4u;
    {
        const bool branch_taken_0x19a1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E4u;
        // 0x19a1e8: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1e4) {
            ctx->pc = 0x19A1FCu;
            goto label_19a1fc;
        }
    }
    ctx->pc = 0x19A1ECu;
label_19a1ec:
    // 0x19a1ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19a1f0:
    if (ctx->pc == 0x19A1F0u) {
        ctx->pc = 0x19A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1ECu;
        // 0x19a1f0: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1F4u;
        goto label_19a1f4;
    }
    ctx->pc = 0x19A1ECu;
    {
        const bool branch_taken_0x19a1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1ECu;
        // 0x19a1f0: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1ec) {
            ctx->pc = 0x19A1FCu;
            goto label_19a1fc;
        }
    }
    ctx->pc = 0x19A1F4u;
label_19a1f4:
    // 0x19a1f4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_19a1f8:
    if (ctx->pc == 0x19A1F8u) {
        ctx->pc = 0x19A1FCu;
        goto label_19a1fc;
    }
    ctx->pc = 0x19A1F4u;
    {
        const bool branch_taken_0x19a1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a1f4) {
            ctx->pc = 0x19A200u;
            goto label_19a200;
        }
    }
    ctx->pc = 0x19A1FCu;
label_19a1fc:
    // 0x19a1fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a200:
    // 0x19a200: 0x54e00017  bnel        $a3, $zero, . + 4 + (0x17 << 2)
label_19a204:
    if (ctx->pc == 0x19A204u) {
        ctx->pc = 0x19A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A200u;
        // 0x19a204: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A208u;
        goto label_19a208;
    }
    ctx->pc = 0x19A200u;
    {
        const bool branch_taken_0x19a200 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a200) {
            ctx->pc = 0x19A204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A200u;
            // 0x19a204: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A260u;
            goto label_19a260;
        }
    }
    ctx->pc = 0x19A208u;
label_19a208:
    // 0x19a208: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19a20c:
    // 0x19a20c: 0x240507b5  addiu       $a1, $zero, 0x7B5
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1973));
label_19a210:
    // 0x19a210: 0x8c441004  lw          $a0, 0x1004($v0)
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_19a214:
    // 0x19a214: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_19a218:
    // 0x19a218: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_19a21c:
    // 0x19a21c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19a220:
    // 0x19a220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a224:
    // 0x19a224: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a228:
    // 0x19a228: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
label_19a22c:
    if (ctx->pc == 0x19A22Cu) {
        ctx->pc = 0x19A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A228u;
        // 0x19a22c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A230u;
        goto label_19a230;
    }
    ctx->pc = 0x19A228u;
    {
        const bool branch_taken_0x19a228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A228u;
        // 0x19a22c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a228) {
            ctx->pc = 0x19A254u;
            goto label_19a254;
        }
    }
    ctx->pc = 0x19A230u;
label_19a230:
    // 0x19a230: 0x240207b7  addiu       $v0, $zero, 0x7B7
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1975));
label_19a234:
    // 0x19a234: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_19a238:
    if (ctx->pc == 0x19A238u) {
        ctx->pc = 0x19A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A234u;
        // 0x19a238: 0x240207b9  addiu       $v0, $zero, 0x7B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1977));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A23Cu;
        goto label_19a23c;
    }
    ctx->pc = 0x19A234u;
    {
        const bool branch_taken_0x19a234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A234u;
        // 0x19a238: 0x240207b9  addiu       $v0, $zero, 0x7B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1977));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a234) {
            ctx->pc = 0x19A254u;
            goto label_19a254;
        }
    }
    ctx->pc = 0x19A23Cu;
label_19a23c:
    // 0x19a23c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_19a240:
    if (ctx->pc == 0x19A240u) {
        ctx->pc = 0x19A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A23Cu;
        // 0x19a240: 0x240207c1  addiu       $v0, $zero, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A244u;
        goto label_19a244;
    }
    ctx->pc = 0x19A23Cu;
    {
        const bool branch_taken_0x19a23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A23Cu;
        // 0x19a240: 0x240207c1  addiu       $v0, $zero, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a23c) {
            ctx->pc = 0x19A254u;
            goto label_19a254;
        }
    }
    ctx->pc = 0x19A244u;
label_19a244:
    // 0x19a244: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19a248:
    if (ctx->pc == 0x19A248u) {
        ctx->pc = 0x19A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A244u;
        // 0x19a248: 0x240207bb  addiu       $v0, $zero, 0x7BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1979));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A24Cu;
        goto label_19a24c;
    }
    ctx->pc = 0x19A244u;
    {
        const bool branch_taken_0x19a244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A244u;
        // 0x19a248: 0x240207bb  addiu       $v0, $zero, 0x7BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1979));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a244) {
            ctx->pc = 0x19A254u;
            goto label_19a254;
        }
    }
    ctx->pc = 0x19A24Cu;
label_19a24c:
    // 0x19a24c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_19a250:
    if (ctx->pc == 0x19A250u) {
        ctx->pc = 0x19A254u;
        goto label_19a254;
    }
    ctx->pc = 0x19A24Cu;
    {
        const bool branch_taken_0x19a24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a24c) {
            ctx->pc = 0x19A258u;
            goto label_19a258;
        }
    }
    ctx->pc = 0x19A254u;
label_19a254:
    // 0x19a254: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a258:
    // 0x19a258: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
label_19a25c:
    if (ctx->pc == 0x19A25Cu) {
        ctx->pc = 0x19A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A258u;
        // 0x19a25c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A260u;
        goto label_19a260;
    }
    ctx->pc = 0x19A258u;
    {
        const bool branch_taken_0x19a258 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a258) {
            ctx->pc = 0x19A25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A258u;
            // 0x19a25c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A260u;
            goto label_19a260;
        }
    }
    ctx->pc = 0x19A260u;
label_19a260:
    // 0x19a260: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
label_19a264:
    if (ctx->pc == 0x19A264u) {
        ctx->pc = 0x19A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A260u;
        // 0x19a264: 0xae400120  sw          $zero, 0x120($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A268u;
        goto label_19a268;
    }
    ctx->pc = 0x19A260u;
    {
        const bool branch_taken_0x19a260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a260) {
            ctx->pc = 0x19A264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A260u;
            // 0x19a264: 0xae400120  sw          $zero, 0x120($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2B4u;
            goto label_19a2b4;
        }
    }
    ctx->pc = 0x19A268u;
label_19a268:
    // 0x19a268: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
label_19a26c:
    if (ctx->pc == 0x19A26Cu) {
        ctx->pc = 0x19A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A268u;
        // 0x19a26c: 0xae400120  sw          $zero, 0x120($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A270u;
        goto label_19a270;
    }
    ctx->pc = 0x19A268u;
    {
        const bool branch_taken_0x19a268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a268) {
            ctx->pc = 0x19A26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A268u;
            // 0x19a26c: 0xae400120  sw          $zero, 0x120($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2B4u;
            goto label_19a2b4;
        }
    }
    ctx->pc = 0x19A270u;
label_19a270:
    // 0x19a270: 0x92420124  lbu         $v0, 0x124($s2)
    ctx->pc = 0x19a270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 292)));
label_19a274:
    // 0x19a274: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_19a278:
    if (ctx->pc == 0x19A278u) {
        ctx->pc = 0x19A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A274u;
        // 0x19a278: 0x8e500120  lw          $s0, 0x120($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A27Cu;
        goto label_19a27c;
    }
    ctx->pc = 0x19A274u;
    {
        const bool branch_taken_0x19a274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a274) {
            ctx->pc = 0x19A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A274u;
            // 0x19a278: 0x8e500120  lw          $s0, 0x120($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A294u;
            goto label_19a294;
        }
    }
    ctx->pc = 0x19A27Cu;
label_19a27c:
    // 0x19a27c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x19a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_19a280:
    // 0x19a280: 0x8d032b00  lw          $v1, 0x2B00($t0)
    ctx->pc = 0x19a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11008)));
label_19a284:
    // 0x19a284: 0x8c442290  lw          $a0, 0x2290($v0)
    ctx->pc = 0x19a284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8848)));
label_19a288:
    // 0x19a288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19a28c:
    // 0x19a28c: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x19a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
label_19a290:
    // 0x19a290: 0x8e500120  lw          $s0, 0x120($s2)
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_19a294:
    // 0x19a294: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_19a298:
    if (ctx->pc == 0x19A298u) {
        ctx->pc = 0x19A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A294u;
        // 0x19a298: 0x8d022b00  lw          $v0, 0x2B00($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A29Cu;
        goto label_19a29c;
    }
    ctx->pc = 0x19A294u;
    {
        const bool branch_taken_0x19a294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A294u;
        // 0x19a298: 0x8d022b00  lw          $v0, 0x2B00($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a294) {
            ctx->pc = 0x19A2B4u;
            goto label_19a2b4;
        }
    }
    ctx->pc = 0x19A29Cu;
label_19a29c:
    // 0x19a29c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x19a29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_19a2a0:
    // 0x19a2a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19a2a4:
    if (ctx->pc == 0x19A2A4u) {
        ctx->pc = 0x19A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2A0u;
        // 0x19a2a4: 0xa2510124  sb          $s1, 0x124($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 292), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2A8u;
        goto label_19a2a8;
    }
    ctx->pc = 0x19A2A0u;
    {
        const bool branch_taken_0x19a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2a0) {
            ctx->pc = 0x19A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2A0u;
            // 0x19a2a4: 0xa2510124  sb          $s1, 0x124($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 292), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A2A8u;
label_19a2a8:
    // 0x19a2a8: 0xc061a1e  jal         func_186878
label_19a2ac:
    if (ctx->pc == 0x19A2ACu) {
        ctx->pc = 0x19A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2A8u;
        // 0x19a2ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2B0u;
        goto label_19a2b0;
    }
    ctx->pc = 0x19A2A8u;
    SET_GPR_U32(ctx, 31, 0x19A2B0u);
    ctx->pc = 0x19A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A2A8u;
    // 0x19a2ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A2A8u, 0x19A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A2B0u;
label_19a2b0:
    // 0x19a2b0: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x19a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
label_19a2b4:
    // 0x19a2b4: 0xa2510124  sb          $s1, 0x124($s2)
    ctx->pc = 0x19a2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 292), (uint8_t)GPR_U32(ctx, 17));
label_19a2b8:
    // 0x19a2b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19a2bc:
    // 0x19a2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a2c0:
    // 0x19a2c0: 0x8c621050  lw          $v0, 0x1050($v1)
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
label_19a2c4:
    // 0x19a2c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19a2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19a2c8:
    // 0x19a2c8: 0xc061a1e  jal         func_186878
label_19a2cc:
    if (ctx->pc == 0x19A2CCu) {
        ctx->pc = 0x19A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2C8u;
        // 0x19a2cc: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2D0u;
        goto label_19a2d0;
    }
    ctx->pc = 0x19A2C8u;
    SET_GPR_U32(ctx, 31, 0x19A2D0u);
    ctx->pc = 0x19A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A2C8u;
    // 0x19a2cc: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A2C8u, 0x19A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A2D0u;
label_19a2d0:
    // 0x19a2d0: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_19a2d4:
    // 0x19a2d4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x19a2d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_19a2d8:
    // 0x19a2d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19a2dc:
    if (ctx->pc == 0x19A2DCu) {
        ctx->pc = 0x19A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2D8u;
        // 0x19a2dc: 0x26430100  addiu       $v1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2E0u;
        goto label_19a2e0;
    }
    ctx->pc = 0x19A2D8u;
    {
        const bool branch_taken_0x19a2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2D8u;
        // 0x19a2dc: 0x26430100  addiu       $v1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2d8) {
            ctx->pc = 0x19A30Cu;
            goto label_19a30c;
        }
    }
    ctx->pc = 0x19A2E0u;
label_19a2e0:
    // 0x19a2e0: 0xc061a1e  jal         func_186878
label_19a2e4:
    if (ctx->pc == 0x19A2E4u) {
        ctx->pc = 0x19A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2E0u;
        // 0x19a2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2E8u;
        goto label_19a2e8;
    }
    ctx->pc = 0x19A2E0u;
    SET_GPR_U32(ctx, 31, 0x19A2E8u);
    ctx->pc = 0x19A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A2E0u;
    // 0x19a2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A2E0u, 0x19A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A2E8u;
label_19a2e8:
    // 0x19a2e8: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_19a2ec:
    // 0x19a2ec: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_19a2f0:
    // 0x19a2f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19a2f4:
    // 0x19a2f4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x19a2f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_19a2f8:
    // 0x19a2f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19a2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a2fc:
    // 0x19a2fc: 0xc0f7218  jal         func_3DC860
label_19a300:
    if (ctx->pc == 0x19A300u) {
        ctx->pc = 0x19A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2FCu;
        // 0x19a300: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A304u;
        goto label_19a304;
    }
    ctx->pc = 0x19A2FCu;
    SET_GPR_U32(ctx, 31, 0x19A304u);
    ctx->pc = 0x19A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A2FCu;
    // 0x19a300: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x19A2FCu, 0x19A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A304u;
label_19a304:
    // 0x19a304: 0x10000005  b           . + 4 + (0x5 << 2)
label_19a308:
    if (ctx->pc == 0x19A308u) {
        ctx->pc = 0x19A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A304u;
        // 0x19a308: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A30Cu;
        goto label_19a30c;
    }
    ctx->pc = 0x19A304u;
    {
        const bool branch_taken_0x19a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A304u;
        // 0x19a308: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a304) {
            ctx->pc = 0x19A31Cu;
            goto label_19a31c;
        }
    }
    ctx->pc = 0x19A30Cu;
label_19a30c:
    // 0x19a30c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19a310:
    // 0x19a310: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x19a310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_19a314:
    // 0x19a314: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x19a314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_19a318:
    // 0x19a318: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19a318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19a31c:
    // 0x19a31c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x19a31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_19a320:
    // 0x19a320: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19a320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19a324:
    // 0x19a324: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x19a324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19a328:
    // 0x19a328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19a32c:
    // 0x19a32c: 0x3e00008  jr          $ra
label_19a330:
    if (ctx->pc == 0x19A330u) {
        ctx->pc = 0x19A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A32Cu;
        // 0x19a330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A334u;
        goto label_19a334;
    }
    ctx->pc = 0x19A32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A32Cu;
        // 0x19a330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A334u;
label_19a334:
    // 0x19a334: 0x0  nop
    ctx->pc = 0x19a334u;
    // NOP
    ctx->pc = 0x19a338u;
}
