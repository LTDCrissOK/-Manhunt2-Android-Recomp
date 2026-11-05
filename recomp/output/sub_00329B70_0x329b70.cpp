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

// Function: sub_00329B70
// Address: 0x329b70 - 0x32bea8
void sub_00329B70_0x329b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329B70_0x329b70");
#endif

    switch (ctx->pc) {
        case 0x329b70u: goto label_329b70;
        case 0x329b74u: goto label_329b74;
        case 0x329b78u: goto label_329b78;
        case 0x329b7cu: goto label_329b7c;
        case 0x329b80u: goto label_329b80;
        case 0x329b84u: goto label_329b84;
        case 0x329b88u: goto label_329b88;
        case 0x329b8cu: goto label_329b8c;
        case 0x329b90u: goto label_329b90;
        case 0x329b94u: goto label_329b94;
        case 0x329b98u: goto label_329b98;
        case 0x329b9cu: goto label_329b9c;
        case 0x329ba0u: goto label_329ba0;
        case 0x329ba4u: goto label_329ba4;
        case 0x329ba8u: goto label_329ba8;
        case 0x329bacu: goto label_329bac;
        case 0x329bb0u: goto label_329bb0;
        case 0x329bb4u: goto label_329bb4;
        case 0x329bb8u: goto label_329bb8;
        case 0x329bbcu: goto label_329bbc;
        case 0x329bc0u: goto label_329bc0;
        case 0x329bc4u: goto label_329bc4;
        case 0x329bc8u: goto label_329bc8;
        case 0x329bccu: goto label_329bcc;
        case 0x329bd0u: goto label_329bd0;
        case 0x329bd4u: goto label_329bd4;
        case 0x329bd8u: goto label_329bd8;
        case 0x329bdcu: goto label_329bdc;
        case 0x329be0u: goto label_329be0;
        case 0x329be4u: goto label_329be4;
        case 0x329be8u: goto label_329be8;
        case 0x329becu: goto label_329bec;
        case 0x329bf0u: goto label_329bf0;
        case 0x329bf4u: goto label_329bf4;
        case 0x329bf8u: goto label_329bf8;
        case 0x329bfcu: goto label_329bfc;
        case 0x329c00u: goto label_329c00;
        case 0x329c04u: goto label_329c04;
        case 0x329c08u: goto label_329c08;
        case 0x329c0cu: goto label_329c0c;
        case 0x329c10u: goto label_329c10;
        case 0x329c14u: goto label_329c14;
        case 0x329c18u: goto label_329c18;
        case 0x329c1cu: goto label_329c1c;
        case 0x329c20u: goto label_329c20;
        case 0x329c24u: goto label_329c24;
        case 0x329c28u: goto label_329c28;
        case 0x329c2cu: goto label_329c2c;
        case 0x329c30u: goto label_329c30;
        case 0x329c34u: goto label_329c34;
        case 0x329c38u: goto label_329c38;
        case 0x329c3cu: goto label_329c3c;
        case 0x329c40u: goto label_329c40;
        case 0x329c44u: goto label_329c44;
        case 0x329c48u: goto label_329c48;
        case 0x329c4cu: goto label_329c4c;
        case 0x329c50u: goto label_329c50;
        case 0x329c54u: goto label_329c54;
        case 0x329c58u: goto label_329c58;
        case 0x329c5cu: goto label_329c5c;
        case 0x329c60u: goto label_329c60;
        case 0x329c64u: goto label_329c64;
        case 0x329c68u: goto label_329c68;
        case 0x329c6cu: goto label_329c6c;
        case 0x329c70u: goto label_329c70;
        case 0x329c74u: goto label_329c74;
        case 0x329c78u: goto label_329c78;
        case 0x329c7cu: goto label_329c7c;
        case 0x329c80u: goto label_329c80;
        case 0x329c84u: goto label_329c84;
        case 0x329c88u: goto label_329c88;
        case 0x329c8cu: goto label_329c8c;
        case 0x329c90u: goto label_329c90;
        case 0x329c94u: goto label_329c94;
        case 0x329c98u: goto label_329c98;
        case 0x329c9cu: goto label_329c9c;
        case 0x329ca0u: goto label_329ca0;
        case 0x329ca4u: goto label_329ca4;
        case 0x329ca8u: goto label_329ca8;
        case 0x329cacu: goto label_329cac;
        case 0x329cb0u: goto label_329cb0;
        case 0x329cb4u: goto label_329cb4;
        case 0x329cb8u: goto label_329cb8;
        case 0x329cbcu: goto label_329cbc;
        case 0x329cc0u: goto label_329cc0;
        case 0x329cc4u: goto label_329cc4;
        case 0x329cc8u: goto label_329cc8;
        case 0x329cccu: goto label_329ccc;
        case 0x329cd0u: goto label_329cd0;
        case 0x329cd4u: goto label_329cd4;
        case 0x329cd8u: goto label_329cd8;
        case 0x329cdcu: goto label_329cdc;
        case 0x329ce0u: goto label_329ce0;
        case 0x329ce4u: goto label_329ce4;
        case 0x329ce8u: goto label_329ce8;
        case 0x329cecu: goto label_329cec;
        case 0x329cf0u: goto label_329cf0;
        case 0x329cf4u: goto label_329cf4;
        case 0x329cf8u: goto label_329cf8;
        case 0x329cfcu: goto label_329cfc;
        case 0x329d00u: goto label_329d00;
        case 0x329d04u: goto label_329d04;
        case 0x329d08u: goto label_329d08;
        case 0x329d0cu: goto label_329d0c;
        case 0x329d10u: goto label_329d10;
        case 0x329d14u: goto label_329d14;
        case 0x329d18u: goto label_329d18;
        case 0x329d1cu: goto label_329d1c;
        case 0x329d20u: goto label_329d20;
        case 0x329d24u: goto label_329d24;
        case 0x329d28u: goto label_329d28;
        case 0x329d2cu: goto label_329d2c;
        case 0x329d30u: goto label_329d30;
        case 0x329d34u: goto label_329d34;
        case 0x329d38u: goto label_329d38;
        case 0x329d3cu: goto label_329d3c;
        case 0x329d40u: goto label_329d40;
        case 0x329d44u: goto label_329d44;
        case 0x329d48u: goto label_329d48;
        case 0x329d4cu: goto label_329d4c;
        case 0x329d50u: goto label_329d50;
        case 0x329d54u: goto label_329d54;
        case 0x329d58u: goto label_329d58;
        case 0x329d5cu: goto label_329d5c;
        case 0x329d60u: goto label_329d60;
        case 0x329d64u: goto label_329d64;
        case 0x329d68u: goto label_329d68;
        case 0x329d6cu: goto label_329d6c;
        case 0x329d70u: goto label_329d70;
        case 0x329d74u: goto label_329d74;
        case 0x329d78u: goto label_329d78;
        case 0x329d7cu: goto label_329d7c;
        case 0x329d80u: goto label_329d80;
        case 0x329d84u: goto label_329d84;
        case 0x329d88u: goto label_329d88;
        case 0x329d8cu: goto label_329d8c;
        case 0x329d90u: goto label_329d90;
        case 0x329d94u: goto label_329d94;
        case 0x329d98u: goto label_329d98;
        case 0x329d9cu: goto label_329d9c;
        case 0x329da0u: goto label_329da0;
        case 0x329da4u: goto label_329da4;
        case 0x329da8u: goto label_329da8;
        case 0x329dacu: goto label_329dac;
        case 0x329db0u: goto label_329db0;
        case 0x329db4u: goto label_329db4;
        case 0x329db8u: goto label_329db8;
        case 0x329dbcu: goto label_329dbc;
        case 0x329dc0u: goto label_329dc0;
        case 0x329dc4u: goto label_329dc4;
        case 0x329dc8u: goto label_329dc8;
        case 0x329dccu: goto label_329dcc;
        case 0x329dd0u: goto label_329dd0;
        case 0x329dd4u: goto label_329dd4;
        case 0x329dd8u: goto label_329dd8;
        case 0x329ddcu: goto label_329ddc;
        case 0x329de0u: goto label_329de0;
        case 0x329de4u: goto label_329de4;
        case 0x329de8u: goto label_329de8;
        case 0x329decu: goto label_329dec;
        case 0x329df0u: goto label_329df0;
        case 0x329df4u: goto label_329df4;
        case 0x329df8u: goto label_329df8;
        case 0x329dfcu: goto label_329dfc;
        case 0x329e00u: goto label_329e00;
        case 0x329e04u: goto label_329e04;
        case 0x329e08u: goto label_329e08;
        case 0x329e0cu: goto label_329e0c;
        case 0x329e10u: goto label_329e10;
        case 0x329e14u: goto label_329e14;
        case 0x329e18u: goto label_329e18;
        case 0x329e1cu: goto label_329e1c;
        case 0x329e20u: goto label_329e20;
        case 0x329e24u: goto label_329e24;
        case 0x329e28u: goto label_329e28;
        case 0x329e2cu: goto label_329e2c;
        case 0x329e30u: goto label_329e30;
        case 0x329e34u: goto label_329e34;
        case 0x329e38u: goto label_329e38;
        case 0x329e3cu: goto label_329e3c;
        case 0x329e40u: goto label_329e40;
        case 0x329e44u: goto label_329e44;
        case 0x329e48u: goto label_329e48;
        case 0x329e4cu: goto label_329e4c;
        case 0x329e50u: goto label_329e50;
        case 0x329e54u: goto label_329e54;
        case 0x329e58u: goto label_329e58;
        case 0x329e5cu: goto label_329e5c;
        case 0x329e60u: goto label_329e60;
        case 0x329e64u: goto label_329e64;
        case 0x329e68u: goto label_329e68;
        case 0x329e6cu: goto label_329e6c;
        case 0x329e70u: goto label_329e70;
        case 0x329e74u: goto label_329e74;
        case 0x329e78u: goto label_329e78;
        case 0x329e7cu: goto label_329e7c;
        case 0x329e80u: goto label_329e80;
        case 0x329e84u: goto label_329e84;
        case 0x329e88u: goto label_329e88;
        case 0x329e8cu: goto label_329e8c;
        case 0x329e90u: goto label_329e90;
        case 0x329e94u: goto label_329e94;
        case 0x329e98u: goto label_329e98;
        case 0x329e9cu: goto label_329e9c;
        case 0x329ea0u: goto label_329ea0;
        case 0x329ea4u: goto label_329ea4;
        case 0x329ea8u: goto label_329ea8;
        case 0x329eacu: goto label_329eac;
        case 0x329eb0u: goto label_329eb0;
        case 0x329eb4u: goto label_329eb4;
        case 0x329eb8u: goto label_329eb8;
        case 0x329ebcu: goto label_329ebc;
        case 0x329ec0u: goto label_329ec0;
        case 0x329ec4u: goto label_329ec4;
        case 0x329ec8u: goto label_329ec8;
        case 0x329eccu: goto label_329ecc;
        case 0x329ed0u: goto label_329ed0;
        case 0x329ed4u: goto label_329ed4;
        case 0x329ed8u: goto label_329ed8;
        case 0x329edcu: goto label_329edc;
        case 0x329ee0u: goto label_329ee0;
        case 0x329ee4u: goto label_329ee4;
        case 0x329ee8u: goto label_329ee8;
        case 0x329eecu: goto label_329eec;
        case 0x329ef0u: goto label_329ef0;
        case 0x329ef4u: goto label_329ef4;
        case 0x329ef8u: goto label_329ef8;
        case 0x329efcu: goto label_329efc;
        case 0x329f00u: goto label_329f00;
        case 0x329f04u: goto label_329f04;
        case 0x329f08u: goto label_329f08;
        case 0x329f0cu: goto label_329f0c;
        case 0x329f10u: goto label_329f10;
        case 0x329f14u: goto label_329f14;
        case 0x329f18u: goto label_329f18;
        case 0x329f1cu: goto label_329f1c;
        case 0x329f20u: goto label_329f20;
        case 0x329f24u: goto label_329f24;
        case 0x329f28u: goto label_329f28;
        case 0x329f2cu: goto label_329f2c;
        case 0x329f30u: goto label_329f30;
        case 0x329f34u: goto label_329f34;
        case 0x329f38u: goto label_329f38;
        case 0x329f3cu: goto label_329f3c;
        case 0x329f40u: goto label_329f40;
        case 0x329f44u: goto label_329f44;
        case 0x329f48u: goto label_329f48;
        case 0x329f4cu: goto label_329f4c;
        case 0x329f50u: goto label_329f50;
        case 0x329f54u: goto label_329f54;
        case 0x329f58u: goto label_329f58;
        case 0x329f5cu: goto label_329f5c;
        case 0x329f60u: goto label_329f60;
        case 0x329f64u: goto label_329f64;
        case 0x329f68u: goto label_329f68;
        case 0x329f6cu: goto label_329f6c;
        case 0x329f70u: goto label_329f70;
        case 0x329f74u: goto label_329f74;
        case 0x329f78u: goto label_329f78;
        case 0x329f7cu: goto label_329f7c;
        case 0x329f80u: goto label_329f80;
        case 0x329f84u: goto label_329f84;
        case 0x329f88u: goto label_329f88;
        case 0x329f8cu: goto label_329f8c;
        case 0x329f90u: goto label_329f90;
        case 0x329f94u: goto label_329f94;
        case 0x329f98u: goto label_329f98;
        case 0x329f9cu: goto label_329f9c;
        case 0x329fa0u: goto label_329fa0;
        case 0x329fa4u: goto label_329fa4;
        case 0x329fa8u: goto label_329fa8;
        case 0x329facu: goto label_329fac;
        case 0x329fb0u: goto label_329fb0;
        case 0x329fb4u: goto label_329fb4;
        case 0x329fb8u: goto label_329fb8;
        case 0x329fbcu: goto label_329fbc;
        case 0x329fc0u: goto label_329fc0;
        case 0x329fc4u: goto label_329fc4;
        case 0x329fc8u: goto label_329fc8;
        case 0x329fccu: goto label_329fcc;
        case 0x329fd0u: goto label_329fd0;
        case 0x329fd4u: goto label_329fd4;
        case 0x329fd8u: goto label_329fd8;
        case 0x329fdcu: goto label_329fdc;
        case 0x329fe0u: goto label_329fe0;
        case 0x329fe4u: goto label_329fe4;
        case 0x329fe8u: goto label_329fe8;
        case 0x329fecu: goto label_329fec;
        case 0x329ff0u: goto label_329ff0;
        case 0x329ff4u: goto label_329ff4;
        case 0x329ff8u: goto label_329ff8;
        case 0x329ffcu: goto label_329ffc;
        case 0x32a000u: goto label_32a000;
        case 0x32a004u: goto label_32a004;
        case 0x32a008u: goto label_32a008;
        case 0x32a00cu: goto label_32a00c;
        case 0x32a010u: goto label_32a010;
        case 0x32a014u: goto label_32a014;
        case 0x32a018u: goto label_32a018;
        case 0x32a01cu: goto label_32a01c;
        case 0x32a020u: goto label_32a020;
        case 0x32a024u: goto label_32a024;
        case 0x32a028u: goto label_32a028;
        case 0x32a02cu: goto label_32a02c;
        case 0x32a030u: goto label_32a030;
        case 0x32a034u: goto label_32a034;
        case 0x32a038u: goto label_32a038;
        case 0x32a03cu: goto label_32a03c;
        case 0x32a040u: goto label_32a040;
        case 0x32a044u: goto label_32a044;
        case 0x32a048u: goto label_32a048;
        case 0x32a04cu: goto label_32a04c;
        case 0x32a050u: goto label_32a050;
        case 0x32a054u: goto label_32a054;
        case 0x32a058u: goto label_32a058;
        case 0x32a05cu: goto label_32a05c;
        case 0x32a060u: goto label_32a060;
        case 0x32a064u: goto label_32a064;
        case 0x32a068u: goto label_32a068;
        case 0x32a06cu: goto label_32a06c;
        case 0x32a070u: goto label_32a070;
        case 0x32a074u: goto label_32a074;
        case 0x32a078u: goto label_32a078;
        case 0x32a07cu: goto label_32a07c;
        case 0x32a080u: goto label_32a080;
        case 0x32a084u: goto label_32a084;
        case 0x32a088u: goto label_32a088;
        case 0x32a08cu: goto label_32a08c;
        case 0x32a090u: goto label_32a090;
        case 0x32a094u: goto label_32a094;
        case 0x32a098u: goto label_32a098;
        case 0x32a09cu: goto label_32a09c;
        case 0x32a0a0u: goto label_32a0a0;
        case 0x32a0a4u: goto label_32a0a4;
        case 0x32a0a8u: goto label_32a0a8;
        case 0x32a0acu: goto label_32a0ac;
        case 0x32a0b0u: goto label_32a0b0;
        case 0x32a0b4u: goto label_32a0b4;
        case 0x32a0b8u: goto label_32a0b8;
        case 0x32a0bcu: goto label_32a0bc;
        case 0x32a0c0u: goto label_32a0c0;
        case 0x32a0c4u: goto label_32a0c4;
        case 0x32a0c8u: goto label_32a0c8;
        case 0x32a0ccu: goto label_32a0cc;
        case 0x32a0d0u: goto label_32a0d0;
        case 0x32a0d4u: goto label_32a0d4;
        case 0x32a0d8u: goto label_32a0d8;
        case 0x32a0dcu: goto label_32a0dc;
        case 0x32a0e0u: goto label_32a0e0;
        case 0x32a0e4u: goto label_32a0e4;
        case 0x32a0e8u: goto label_32a0e8;
        case 0x32a0ecu: goto label_32a0ec;
        case 0x32a0f0u: goto label_32a0f0;
        case 0x32a0f4u: goto label_32a0f4;
        case 0x32a0f8u: goto label_32a0f8;
        case 0x32a0fcu: goto label_32a0fc;
        case 0x32a100u: goto label_32a100;
        case 0x32a104u: goto label_32a104;
        case 0x32a108u: goto label_32a108;
        case 0x32a10cu: goto label_32a10c;
        case 0x32a110u: goto label_32a110;
        case 0x32a114u: goto label_32a114;
        case 0x32a118u: goto label_32a118;
        case 0x32a11cu: goto label_32a11c;
        case 0x32a120u: goto label_32a120;
        case 0x32a124u: goto label_32a124;
        case 0x32a128u: goto label_32a128;
        case 0x32a12cu: goto label_32a12c;
        case 0x32a130u: goto label_32a130;
        case 0x32a134u: goto label_32a134;
        case 0x32a138u: goto label_32a138;
        case 0x32a13cu: goto label_32a13c;
        case 0x32a140u: goto label_32a140;
        case 0x32a144u: goto label_32a144;
        case 0x32a148u: goto label_32a148;
        case 0x32a14cu: goto label_32a14c;
        case 0x32a150u: goto label_32a150;
        case 0x32a154u: goto label_32a154;
        case 0x32a158u: goto label_32a158;
        case 0x32a15cu: goto label_32a15c;
        case 0x32a160u: goto label_32a160;
        case 0x32a164u: goto label_32a164;
        case 0x32a168u: goto label_32a168;
        case 0x32a16cu: goto label_32a16c;
        case 0x32a170u: goto label_32a170;
        case 0x32a174u: goto label_32a174;
        case 0x32a178u: goto label_32a178;
        case 0x32a17cu: goto label_32a17c;
        case 0x32a180u: goto label_32a180;
        case 0x32a184u: goto label_32a184;
        case 0x32a188u: goto label_32a188;
        case 0x32a18cu: goto label_32a18c;
        case 0x32a190u: goto label_32a190;
        case 0x32a194u: goto label_32a194;
        case 0x32a198u: goto label_32a198;
        case 0x32a19cu: goto label_32a19c;
        case 0x32a1a0u: goto label_32a1a0;
        case 0x32a1a4u: goto label_32a1a4;
        case 0x32a1a8u: goto label_32a1a8;
        case 0x32a1acu: goto label_32a1ac;
        case 0x32a1b0u: goto label_32a1b0;
        case 0x32a1b4u: goto label_32a1b4;
        case 0x32a1b8u: goto label_32a1b8;
        case 0x32a1bcu: goto label_32a1bc;
        case 0x32a1c0u: goto label_32a1c0;
        case 0x32a1c4u: goto label_32a1c4;
        case 0x32a1c8u: goto label_32a1c8;
        case 0x32a1ccu: goto label_32a1cc;
        case 0x32a1d0u: goto label_32a1d0;
        case 0x32a1d4u: goto label_32a1d4;
        case 0x32a1d8u: goto label_32a1d8;
        case 0x32a1dcu: goto label_32a1dc;
        case 0x32a1e0u: goto label_32a1e0;
        case 0x32a1e4u: goto label_32a1e4;
        case 0x32a1e8u: goto label_32a1e8;
        case 0x32a1ecu: goto label_32a1ec;
        case 0x32a1f0u: goto label_32a1f0;
        case 0x32a1f4u: goto label_32a1f4;
        case 0x32a1f8u: goto label_32a1f8;
        case 0x32a1fcu: goto label_32a1fc;
        case 0x32a200u: goto label_32a200;
        case 0x32a204u: goto label_32a204;
        case 0x32a208u: goto label_32a208;
        case 0x32a20cu: goto label_32a20c;
        case 0x32a210u: goto label_32a210;
        case 0x32a214u: goto label_32a214;
        case 0x32a218u: goto label_32a218;
        case 0x32a21cu: goto label_32a21c;
        case 0x32a220u: goto label_32a220;
        case 0x32a224u: goto label_32a224;
        case 0x32a228u: goto label_32a228;
        case 0x32a22cu: goto label_32a22c;
        case 0x32a230u: goto label_32a230;
        case 0x32a234u: goto label_32a234;
        case 0x32a238u: goto label_32a238;
        case 0x32a23cu: goto label_32a23c;
        case 0x32a240u: goto label_32a240;
        case 0x32a244u: goto label_32a244;
        case 0x32a248u: goto label_32a248;
        case 0x32a24cu: goto label_32a24c;
        case 0x32a250u: goto label_32a250;
        case 0x32a254u: goto label_32a254;
        case 0x32a258u: goto label_32a258;
        case 0x32a25cu: goto label_32a25c;
        case 0x32a260u: goto label_32a260;
        case 0x32a264u: goto label_32a264;
        case 0x32a268u: goto label_32a268;
        case 0x32a26cu: goto label_32a26c;
        case 0x32a270u: goto label_32a270;
        case 0x32a274u: goto label_32a274;
        case 0x32a278u: goto label_32a278;
        case 0x32a27cu: goto label_32a27c;
        case 0x32a280u: goto label_32a280;
        case 0x32a284u: goto label_32a284;
        case 0x32a288u: goto label_32a288;
        case 0x32a28cu: goto label_32a28c;
        case 0x32a290u: goto label_32a290;
        case 0x32a294u: goto label_32a294;
        case 0x32a298u: goto label_32a298;
        case 0x32a29cu: goto label_32a29c;
        case 0x32a2a0u: goto label_32a2a0;
        case 0x32a2a4u: goto label_32a2a4;
        case 0x32a2a8u: goto label_32a2a8;
        case 0x32a2acu: goto label_32a2ac;
        case 0x32a2b0u: goto label_32a2b0;
        case 0x32a2b4u: goto label_32a2b4;
        case 0x32a2b8u: goto label_32a2b8;
        case 0x32a2bcu: goto label_32a2bc;
        case 0x32a2c0u: goto label_32a2c0;
        case 0x32a2c4u: goto label_32a2c4;
        case 0x32a2c8u: goto label_32a2c8;
        case 0x32a2ccu: goto label_32a2cc;
        case 0x32a2d0u: goto label_32a2d0;
        case 0x32a2d4u: goto label_32a2d4;
        case 0x32a2d8u: goto label_32a2d8;
        case 0x32a2dcu: goto label_32a2dc;
        case 0x32a2e0u: goto label_32a2e0;
        case 0x32a2e4u: goto label_32a2e4;
        case 0x32a2e8u: goto label_32a2e8;
        case 0x32a2ecu: goto label_32a2ec;
        case 0x32a2f0u: goto label_32a2f0;
        case 0x32a2f4u: goto label_32a2f4;
        case 0x32a2f8u: goto label_32a2f8;
        case 0x32a2fcu: goto label_32a2fc;
        case 0x32a300u: goto label_32a300;
        case 0x32a304u: goto label_32a304;
        case 0x32a308u: goto label_32a308;
        case 0x32a30cu: goto label_32a30c;
        case 0x32a310u: goto label_32a310;
        case 0x32a314u: goto label_32a314;
        case 0x32a318u: goto label_32a318;
        case 0x32a31cu: goto label_32a31c;
        case 0x32a320u: goto label_32a320;
        case 0x32a324u: goto label_32a324;
        case 0x32a328u: goto label_32a328;
        case 0x32a32cu: goto label_32a32c;
        case 0x32a330u: goto label_32a330;
        case 0x32a334u: goto label_32a334;
        case 0x32a338u: goto label_32a338;
        case 0x32a33cu: goto label_32a33c;
        case 0x32a340u: goto label_32a340;
        case 0x32a344u: goto label_32a344;
        case 0x32a348u: goto label_32a348;
        case 0x32a34cu: goto label_32a34c;
        case 0x32a350u: goto label_32a350;
        case 0x32a354u: goto label_32a354;
        case 0x32a358u: goto label_32a358;
        case 0x32a35cu: goto label_32a35c;
        case 0x32a360u: goto label_32a360;
        case 0x32a364u: goto label_32a364;
        case 0x32a368u: goto label_32a368;
        case 0x32a36cu: goto label_32a36c;
        case 0x32a370u: goto label_32a370;
        case 0x32a374u: goto label_32a374;
        case 0x32a378u: goto label_32a378;
        case 0x32a37cu: goto label_32a37c;
        case 0x32a380u: goto label_32a380;
        case 0x32a384u: goto label_32a384;
        case 0x32a388u: goto label_32a388;
        case 0x32a38cu: goto label_32a38c;
        case 0x32a390u: goto label_32a390;
        case 0x32a394u: goto label_32a394;
        case 0x32a398u: goto label_32a398;
        case 0x32a39cu: goto label_32a39c;
        case 0x32a3a0u: goto label_32a3a0;
        case 0x32a3a4u: goto label_32a3a4;
        case 0x32a3a8u: goto label_32a3a8;
        case 0x32a3acu: goto label_32a3ac;
        case 0x32a3b0u: goto label_32a3b0;
        case 0x32a3b4u: goto label_32a3b4;
        case 0x32a3b8u: goto label_32a3b8;
        case 0x32a3bcu: goto label_32a3bc;
        case 0x32a3c0u: goto label_32a3c0;
        case 0x32a3c4u: goto label_32a3c4;
        case 0x32a3c8u: goto label_32a3c8;
        case 0x32a3ccu: goto label_32a3cc;
        case 0x32a3d0u: goto label_32a3d0;
        case 0x32a3d4u: goto label_32a3d4;
        case 0x32a3d8u: goto label_32a3d8;
        case 0x32a3dcu: goto label_32a3dc;
        case 0x32a3e0u: goto label_32a3e0;
        case 0x32a3e4u: goto label_32a3e4;
        case 0x32a3e8u: goto label_32a3e8;
        case 0x32a3ecu: goto label_32a3ec;
        case 0x32a3f0u: goto label_32a3f0;
        case 0x32a3f4u: goto label_32a3f4;
        case 0x32a3f8u: goto label_32a3f8;
        case 0x32a3fcu: goto label_32a3fc;
        case 0x32a400u: goto label_32a400;
        case 0x32a404u: goto label_32a404;
        case 0x32a408u: goto label_32a408;
        case 0x32a40cu: goto label_32a40c;
        case 0x32a410u: goto label_32a410;
        case 0x32a414u: goto label_32a414;
        case 0x32a418u: goto label_32a418;
        case 0x32a41cu: goto label_32a41c;
        case 0x32a420u: goto label_32a420;
        case 0x32a424u: goto label_32a424;
        case 0x32a428u: goto label_32a428;
        case 0x32a42cu: goto label_32a42c;
        case 0x32a430u: goto label_32a430;
        case 0x32a434u: goto label_32a434;
        case 0x32a438u: goto label_32a438;
        case 0x32a43cu: goto label_32a43c;
        case 0x32a440u: goto label_32a440;
        case 0x32a444u: goto label_32a444;
        case 0x32a448u: goto label_32a448;
        case 0x32a44cu: goto label_32a44c;
        case 0x32a450u: goto label_32a450;
        case 0x32a454u: goto label_32a454;
        case 0x32a458u: goto label_32a458;
        case 0x32a45cu: goto label_32a45c;
        case 0x32a460u: goto label_32a460;
        case 0x32a464u: goto label_32a464;
        case 0x32a468u: goto label_32a468;
        case 0x32a46cu: goto label_32a46c;
        case 0x32a470u: goto label_32a470;
        case 0x32a474u: goto label_32a474;
        case 0x32a478u: goto label_32a478;
        case 0x32a47cu: goto label_32a47c;
        case 0x32a480u: goto label_32a480;
        case 0x32a484u: goto label_32a484;
        case 0x32a488u: goto label_32a488;
        case 0x32a48cu: goto label_32a48c;
        case 0x32a490u: goto label_32a490;
        case 0x32a494u: goto label_32a494;
        case 0x32a498u: goto label_32a498;
        case 0x32a49cu: goto label_32a49c;
        case 0x32a4a0u: goto label_32a4a0;
        case 0x32a4a4u: goto label_32a4a4;
        case 0x32a4a8u: goto label_32a4a8;
        case 0x32a4acu: goto label_32a4ac;
        case 0x32a4b0u: goto label_32a4b0;
        case 0x32a4b4u: goto label_32a4b4;
        case 0x32a4b8u: goto label_32a4b8;
        case 0x32a4bcu: goto label_32a4bc;
        case 0x32a4c0u: goto label_32a4c0;
        case 0x32a4c4u: goto label_32a4c4;
        case 0x32a4c8u: goto label_32a4c8;
        case 0x32a4ccu: goto label_32a4cc;
        case 0x32a4d0u: goto label_32a4d0;
        case 0x32a4d4u: goto label_32a4d4;
        case 0x32a4d8u: goto label_32a4d8;
        case 0x32a4dcu: goto label_32a4dc;
        case 0x32a4e0u: goto label_32a4e0;
        case 0x32a4e4u: goto label_32a4e4;
        case 0x32a4e8u: goto label_32a4e8;
        case 0x32a4ecu: goto label_32a4ec;
        case 0x32a4f0u: goto label_32a4f0;
        case 0x32a4f4u: goto label_32a4f4;
        case 0x32a4f8u: goto label_32a4f8;
        case 0x32a4fcu: goto label_32a4fc;
        case 0x32a500u: goto label_32a500;
        case 0x32a504u: goto label_32a504;
        case 0x32a508u: goto label_32a508;
        case 0x32a50cu: goto label_32a50c;
        case 0x32a510u: goto label_32a510;
        case 0x32a514u: goto label_32a514;
        case 0x32a518u: goto label_32a518;
        case 0x32a51cu: goto label_32a51c;
        case 0x32a520u: goto label_32a520;
        case 0x32a524u: goto label_32a524;
        case 0x32a528u: goto label_32a528;
        case 0x32a52cu: goto label_32a52c;
        case 0x32a530u: goto label_32a530;
        case 0x32a534u: goto label_32a534;
        case 0x32a538u: goto label_32a538;
        case 0x32a53cu: goto label_32a53c;
        case 0x32a540u: goto label_32a540;
        case 0x32a544u: goto label_32a544;
        case 0x32a548u: goto label_32a548;
        case 0x32a54cu: goto label_32a54c;
        case 0x32a550u: goto label_32a550;
        case 0x32a554u: goto label_32a554;
        case 0x32a558u: goto label_32a558;
        case 0x32a55cu: goto label_32a55c;
        case 0x32a560u: goto label_32a560;
        case 0x32a564u: goto label_32a564;
        case 0x32a568u: goto label_32a568;
        case 0x32a56cu: goto label_32a56c;
        case 0x32a570u: goto label_32a570;
        case 0x32a574u: goto label_32a574;
        case 0x32a578u: goto label_32a578;
        case 0x32a57cu: goto label_32a57c;
        case 0x32a580u: goto label_32a580;
        case 0x32a584u: goto label_32a584;
        case 0x32a588u: goto label_32a588;
        case 0x32a58cu: goto label_32a58c;
        case 0x32a590u: goto label_32a590;
        case 0x32a594u: goto label_32a594;
        case 0x32a598u: goto label_32a598;
        case 0x32a59cu: goto label_32a59c;
        case 0x32a5a0u: goto label_32a5a0;
        case 0x32a5a4u: goto label_32a5a4;
        case 0x32a5a8u: goto label_32a5a8;
        case 0x32a5acu: goto label_32a5ac;
        case 0x32a5b0u: goto label_32a5b0;
        case 0x32a5b4u: goto label_32a5b4;
        case 0x32a5b8u: goto label_32a5b8;
        case 0x32a5bcu: goto label_32a5bc;
        case 0x32a5c0u: goto label_32a5c0;
        case 0x32a5c4u: goto label_32a5c4;
        case 0x32a5c8u: goto label_32a5c8;
        case 0x32a5ccu: goto label_32a5cc;
        case 0x32a5d0u: goto label_32a5d0;
        case 0x32a5d4u: goto label_32a5d4;
        case 0x32a5d8u: goto label_32a5d8;
        case 0x32a5dcu: goto label_32a5dc;
        case 0x32a5e0u: goto label_32a5e0;
        case 0x32a5e4u: goto label_32a5e4;
        case 0x32a5e8u: goto label_32a5e8;
        case 0x32a5ecu: goto label_32a5ec;
        case 0x32a5f0u: goto label_32a5f0;
        case 0x32a5f4u: goto label_32a5f4;
        case 0x32a5f8u: goto label_32a5f8;
        case 0x32a5fcu: goto label_32a5fc;
        case 0x32a600u: goto label_32a600;
        case 0x32a604u: goto label_32a604;
        case 0x32a608u: goto label_32a608;
        case 0x32a60cu: goto label_32a60c;
        case 0x32a610u: goto label_32a610;
        case 0x32a614u: goto label_32a614;
        case 0x32a618u: goto label_32a618;
        case 0x32a61cu: goto label_32a61c;
        case 0x32a620u: goto label_32a620;
        case 0x32a624u: goto label_32a624;
        case 0x32a628u: goto label_32a628;
        case 0x32a62cu: goto label_32a62c;
        case 0x32a630u: goto label_32a630;
        case 0x32a634u: goto label_32a634;
        case 0x32a638u: goto label_32a638;
        case 0x32a63cu: goto label_32a63c;
        case 0x32a640u: goto label_32a640;
        case 0x32a644u: goto label_32a644;
        case 0x32a648u: goto label_32a648;
        case 0x32a64cu: goto label_32a64c;
        case 0x32a650u: goto label_32a650;
        case 0x32a654u: goto label_32a654;
        case 0x32a658u: goto label_32a658;
        case 0x32a65cu: goto label_32a65c;
        case 0x32a660u: goto label_32a660;
        case 0x32a664u: goto label_32a664;
        case 0x32a668u: goto label_32a668;
        case 0x32a66cu: goto label_32a66c;
        case 0x32a670u: goto label_32a670;
        case 0x32a674u: goto label_32a674;
        case 0x32a678u: goto label_32a678;
        case 0x32a67cu: goto label_32a67c;
        case 0x32a680u: goto label_32a680;
        case 0x32a684u: goto label_32a684;
        case 0x32a688u: goto label_32a688;
        case 0x32a68cu: goto label_32a68c;
        case 0x32a690u: goto label_32a690;
        case 0x32a694u: goto label_32a694;
        case 0x32a698u: goto label_32a698;
        case 0x32a69cu: goto label_32a69c;
        case 0x32a6a0u: goto label_32a6a0;
        case 0x32a6a4u: goto label_32a6a4;
        case 0x32a6a8u: goto label_32a6a8;
        case 0x32a6acu: goto label_32a6ac;
        case 0x32a6b0u: goto label_32a6b0;
        case 0x32a6b4u: goto label_32a6b4;
        case 0x32a6b8u: goto label_32a6b8;
        case 0x32a6bcu: goto label_32a6bc;
        case 0x32a6c0u: goto label_32a6c0;
        case 0x32a6c4u: goto label_32a6c4;
        case 0x32a6c8u: goto label_32a6c8;
        case 0x32a6ccu: goto label_32a6cc;
        case 0x32a6d0u: goto label_32a6d0;
        case 0x32a6d4u: goto label_32a6d4;
        case 0x32a6d8u: goto label_32a6d8;
        case 0x32a6dcu: goto label_32a6dc;
        case 0x32a6e0u: goto label_32a6e0;
        case 0x32a6e4u: goto label_32a6e4;
        case 0x32a6e8u: goto label_32a6e8;
        case 0x32a6ecu: goto label_32a6ec;
        case 0x32a6f0u: goto label_32a6f0;
        case 0x32a6f4u: goto label_32a6f4;
        case 0x32a6f8u: goto label_32a6f8;
        case 0x32a6fcu: goto label_32a6fc;
        case 0x32a700u: goto label_32a700;
        case 0x32a704u: goto label_32a704;
        case 0x32a708u: goto label_32a708;
        case 0x32a70cu: goto label_32a70c;
        case 0x32a710u: goto label_32a710;
        case 0x32a714u: goto label_32a714;
        case 0x32a718u: goto label_32a718;
        case 0x32a71cu: goto label_32a71c;
        case 0x32a720u: goto label_32a720;
        case 0x32a724u: goto label_32a724;
        case 0x32a728u: goto label_32a728;
        case 0x32a72cu: goto label_32a72c;
        case 0x32a730u: goto label_32a730;
        case 0x32a734u: goto label_32a734;
        case 0x32a738u: goto label_32a738;
        case 0x32a73cu: goto label_32a73c;
        case 0x32a740u: goto label_32a740;
        case 0x32a744u: goto label_32a744;
        case 0x32a748u: goto label_32a748;
        case 0x32a74cu: goto label_32a74c;
        case 0x32a750u: goto label_32a750;
        case 0x32a754u: goto label_32a754;
        case 0x32a758u: goto label_32a758;
        case 0x32a75cu: goto label_32a75c;
        case 0x32a760u: goto label_32a760;
        case 0x32a764u: goto label_32a764;
        case 0x32a768u: goto label_32a768;
        case 0x32a76cu: goto label_32a76c;
        case 0x32a770u: goto label_32a770;
        case 0x32a774u: goto label_32a774;
        case 0x32a778u: goto label_32a778;
        case 0x32a77cu: goto label_32a77c;
        case 0x32a780u: goto label_32a780;
        case 0x32a784u: goto label_32a784;
        case 0x32a788u: goto label_32a788;
        case 0x32a78cu: goto label_32a78c;
        case 0x32a790u: goto label_32a790;
        case 0x32a794u: goto label_32a794;
        case 0x32a798u: goto label_32a798;
        case 0x32a79cu: goto label_32a79c;
        case 0x32a7a0u: goto label_32a7a0;
        case 0x32a7a4u: goto label_32a7a4;
        case 0x32a7a8u: goto label_32a7a8;
        case 0x32a7acu: goto label_32a7ac;
        case 0x32a7b0u: goto label_32a7b0;
        case 0x32a7b4u: goto label_32a7b4;
        case 0x32a7b8u: goto label_32a7b8;
        case 0x32a7bcu: goto label_32a7bc;
        case 0x32a7c0u: goto label_32a7c0;
        case 0x32a7c4u: goto label_32a7c4;
        case 0x32a7c8u: goto label_32a7c8;
        case 0x32a7ccu: goto label_32a7cc;
        case 0x32a7d0u: goto label_32a7d0;
        case 0x32a7d4u: goto label_32a7d4;
        case 0x32a7d8u: goto label_32a7d8;
        case 0x32a7dcu: goto label_32a7dc;
        case 0x32a7e0u: goto label_32a7e0;
        case 0x32a7e4u: goto label_32a7e4;
        case 0x32a7e8u: goto label_32a7e8;
        case 0x32a7ecu: goto label_32a7ec;
        case 0x32a7f0u: goto label_32a7f0;
        case 0x32a7f4u: goto label_32a7f4;
        case 0x32a7f8u: goto label_32a7f8;
        case 0x32a7fcu: goto label_32a7fc;
        case 0x32a800u: goto label_32a800;
        case 0x32a804u: goto label_32a804;
        case 0x32a808u: goto label_32a808;
        case 0x32a80cu: goto label_32a80c;
        case 0x32a810u: goto label_32a810;
        case 0x32a814u: goto label_32a814;
        case 0x32a818u: goto label_32a818;
        case 0x32a81cu: goto label_32a81c;
        case 0x32a820u: goto label_32a820;
        case 0x32a824u: goto label_32a824;
        case 0x32a828u: goto label_32a828;
        case 0x32a82cu: goto label_32a82c;
        case 0x32a830u: goto label_32a830;
        case 0x32a834u: goto label_32a834;
        case 0x32a838u: goto label_32a838;
        case 0x32a83cu: goto label_32a83c;
        case 0x32a840u: goto label_32a840;
        case 0x32a844u: goto label_32a844;
        case 0x32a848u: goto label_32a848;
        case 0x32a84cu: goto label_32a84c;
        case 0x32a850u: goto label_32a850;
        case 0x32a854u: goto label_32a854;
        case 0x32a858u: goto label_32a858;
        case 0x32a85cu: goto label_32a85c;
        case 0x32a860u: goto label_32a860;
        case 0x32a864u: goto label_32a864;
        case 0x32a868u: goto label_32a868;
        case 0x32a86cu: goto label_32a86c;
        case 0x32a870u: goto label_32a870;
        case 0x32a874u: goto label_32a874;
        case 0x32a878u: goto label_32a878;
        case 0x32a87cu: goto label_32a87c;
        case 0x32a880u: goto label_32a880;
        case 0x32a884u: goto label_32a884;
        case 0x32a888u: goto label_32a888;
        case 0x32a88cu: goto label_32a88c;
        case 0x32a890u: goto label_32a890;
        case 0x32a894u: goto label_32a894;
        case 0x32a898u: goto label_32a898;
        case 0x32a89cu: goto label_32a89c;
        case 0x32a8a0u: goto label_32a8a0;
        case 0x32a8a4u: goto label_32a8a4;
        case 0x32a8a8u: goto label_32a8a8;
        case 0x32a8acu: goto label_32a8ac;
        case 0x32a8b0u: goto label_32a8b0;
        case 0x32a8b4u: goto label_32a8b4;
        case 0x32a8b8u: goto label_32a8b8;
        case 0x32a8bcu: goto label_32a8bc;
        case 0x32a8c0u: goto label_32a8c0;
        case 0x32a8c4u: goto label_32a8c4;
        case 0x32a8c8u: goto label_32a8c8;
        case 0x32a8ccu: goto label_32a8cc;
        case 0x32a8d0u: goto label_32a8d0;
        case 0x32a8d4u: goto label_32a8d4;
        case 0x32a8d8u: goto label_32a8d8;
        case 0x32a8dcu: goto label_32a8dc;
        case 0x32a8e0u: goto label_32a8e0;
        case 0x32a8e4u: goto label_32a8e4;
        case 0x32a8e8u: goto label_32a8e8;
        case 0x32a8ecu: goto label_32a8ec;
        case 0x32a8f0u: goto label_32a8f0;
        case 0x32a8f4u: goto label_32a8f4;
        case 0x32a8f8u: goto label_32a8f8;
        case 0x32a8fcu: goto label_32a8fc;
        case 0x32a900u: goto label_32a900;
        case 0x32a904u: goto label_32a904;
        case 0x32a908u: goto label_32a908;
        case 0x32a90cu: goto label_32a90c;
        case 0x32a910u: goto label_32a910;
        case 0x32a914u: goto label_32a914;
        case 0x32a918u: goto label_32a918;
        case 0x32a91cu: goto label_32a91c;
        case 0x32a920u: goto label_32a920;
        case 0x32a924u: goto label_32a924;
        case 0x32a928u: goto label_32a928;
        case 0x32a92cu: goto label_32a92c;
        case 0x32a930u: goto label_32a930;
        case 0x32a934u: goto label_32a934;
        case 0x32a938u: goto label_32a938;
        case 0x32a93cu: goto label_32a93c;
        case 0x32a940u: goto label_32a940;
        case 0x32a944u: goto label_32a944;
        case 0x32a948u: goto label_32a948;
        case 0x32a94cu: goto label_32a94c;
        case 0x32a950u: goto label_32a950;
        case 0x32a954u: goto label_32a954;
        case 0x32a958u: goto label_32a958;
        case 0x32a95cu: goto label_32a95c;
        case 0x32a960u: goto label_32a960;
        case 0x32a964u: goto label_32a964;
        case 0x32a968u: goto label_32a968;
        case 0x32a96cu: goto label_32a96c;
        case 0x32a970u: goto label_32a970;
        case 0x32a974u: goto label_32a974;
        case 0x32a978u: goto label_32a978;
        case 0x32a97cu: goto label_32a97c;
        case 0x32a980u: goto label_32a980;
        case 0x32a984u: goto label_32a984;
        case 0x32a988u: goto label_32a988;
        case 0x32a98cu: goto label_32a98c;
        case 0x32a990u: goto label_32a990;
        case 0x32a994u: goto label_32a994;
        case 0x32a998u: goto label_32a998;
        case 0x32a99cu: goto label_32a99c;
        case 0x32a9a0u: goto label_32a9a0;
        case 0x32a9a4u: goto label_32a9a4;
        case 0x32a9a8u: goto label_32a9a8;
        case 0x32a9acu: goto label_32a9ac;
        case 0x32a9b0u: goto label_32a9b0;
        case 0x32a9b4u: goto label_32a9b4;
        case 0x32a9b8u: goto label_32a9b8;
        case 0x32a9bcu: goto label_32a9bc;
        case 0x32a9c0u: goto label_32a9c0;
        case 0x32a9c4u: goto label_32a9c4;
        case 0x32a9c8u: goto label_32a9c8;
        case 0x32a9ccu: goto label_32a9cc;
        case 0x32a9d0u: goto label_32a9d0;
        case 0x32a9d4u: goto label_32a9d4;
        case 0x32a9d8u: goto label_32a9d8;
        case 0x32a9dcu: goto label_32a9dc;
        case 0x32a9e0u: goto label_32a9e0;
        case 0x32a9e4u: goto label_32a9e4;
        case 0x32a9e8u: goto label_32a9e8;
        case 0x32a9ecu: goto label_32a9ec;
        case 0x32a9f0u: goto label_32a9f0;
        case 0x32a9f4u: goto label_32a9f4;
        case 0x32a9f8u: goto label_32a9f8;
        case 0x32a9fcu: goto label_32a9fc;
        case 0x32aa00u: goto label_32aa00;
        case 0x32aa04u: goto label_32aa04;
        case 0x32aa08u: goto label_32aa08;
        case 0x32aa0cu: goto label_32aa0c;
        case 0x32aa10u: goto label_32aa10;
        case 0x32aa14u: goto label_32aa14;
        case 0x32aa18u: goto label_32aa18;
        case 0x32aa1cu: goto label_32aa1c;
        case 0x32aa20u: goto label_32aa20;
        case 0x32aa24u: goto label_32aa24;
        case 0x32aa28u: goto label_32aa28;
        case 0x32aa2cu: goto label_32aa2c;
        case 0x32aa30u: goto label_32aa30;
        case 0x32aa34u: goto label_32aa34;
        case 0x32aa38u: goto label_32aa38;
        case 0x32aa3cu: goto label_32aa3c;
        case 0x32aa40u: goto label_32aa40;
        case 0x32aa44u: goto label_32aa44;
        case 0x32aa48u: goto label_32aa48;
        case 0x32aa4cu: goto label_32aa4c;
        case 0x32aa50u: goto label_32aa50;
        case 0x32aa54u: goto label_32aa54;
        case 0x32aa58u: goto label_32aa58;
        case 0x32aa5cu: goto label_32aa5c;
        case 0x32aa60u: goto label_32aa60;
        case 0x32aa64u: goto label_32aa64;
        case 0x32aa68u: goto label_32aa68;
        case 0x32aa6cu: goto label_32aa6c;
        case 0x32aa70u: goto label_32aa70;
        case 0x32aa74u: goto label_32aa74;
        case 0x32aa78u: goto label_32aa78;
        case 0x32aa7cu: goto label_32aa7c;
        case 0x32aa80u: goto label_32aa80;
        case 0x32aa84u: goto label_32aa84;
        case 0x32aa88u: goto label_32aa88;
        case 0x32aa8cu: goto label_32aa8c;
        case 0x32aa90u: goto label_32aa90;
        case 0x32aa94u: goto label_32aa94;
        case 0x32aa98u: goto label_32aa98;
        case 0x32aa9cu: goto label_32aa9c;
        case 0x32aaa0u: goto label_32aaa0;
        case 0x32aaa4u: goto label_32aaa4;
        case 0x32aaa8u: goto label_32aaa8;
        case 0x32aaacu: goto label_32aaac;
        case 0x32aab0u: goto label_32aab0;
        case 0x32aab4u: goto label_32aab4;
        case 0x32aab8u: goto label_32aab8;
        case 0x32aabcu: goto label_32aabc;
        case 0x32aac0u: goto label_32aac0;
        case 0x32aac4u: goto label_32aac4;
        case 0x32aac8u: goto label_32aac8;
        case 0x32aaccu: goto label_32aacc;
        case 0x32aad0u: goto label_32aad0;
        case 0x32aad4u: goto label_32aad4;
        case 0x32aad8u: goto label_32aad8;
        case 0x32aadcu: goto label_32aadc;
        case 0x32aae0u: goto label_32aae0;
        case 0x32aae4u: goto label_32aae4;
        case 0x32aae8u: goto label_32aae8;
        case 0x32aaecu: goto label_32aaec;
        case 0x32aaf0u: goto label_32aaf0;
        case 0x32aaf4u: goto label_32aaf4;
        case 0x32aaf8u: goto label_32aaf8;
        case 0x32aafcu: goto label_32aafc;
        case 0x32ab00u: goto label_32ab00;
        case 0x32ab04u: goto label_32ab04;
        case 0x32ab08u: goto label_32ab08;
        case 0x32ab0cu: goto label_32ab0c;
        case 0x32ab10u: goto label_32ab10;
        case 0x32ab14u: goto label_32ab14;
        case 0x32ab18u: goto label_32ab18;
        case 0x32ab1cu: goto label_32ab1c;
        case 0x32ab20u: goto label_32ab20;
        case 0x32ab24u: goto label_32ab24;
        case 0x32ab28u: goto label_32ab28;
        case 0x32ab2cu: goto label_32ab2c;
        case 0x32ab30u: goto label_32ab30;
        case 0x32ab34u: goto label_32ab34;
        case 0x32ab38u: goto label_32ab38;
        case 0x32ab3cu: goto label_32ab3c;
        case 0x32ab40u: goto label_32ab40;
        case 0x32ab44u: goto label_32ab44;
        case 0x32ab48u: goto label_32ab48;
        case 0x32ab4cu: goto label_32ab4c;
        case 0x32ab50u: goto label_32ab50;
        case 0x32ab54u: goto label_32ab54;
        case 0x32ab58u: goto label_32ab58;
        case 0x32ab5cu: goto label_32ab5c;
        case 0x32ab60u: goto label_32ab60;
        case 0x32ab64u: goto label_32ab64;
        case 0x32ab68u: goto label_32ab68;
        case 0x32ab6cu: goto label_32ab6c;
        case 0x32ab70u: goto label_32ab70;
        case 0x32ab74u: goto label_32ab74;
        case 0x32ab78u: goto label_32ab78;
        case 0x32ab7cu: goto label_32ab7c;
        case 0x32ab80u: goto label_32ab80;
        case 0x32ab84u: goto label_32ab84;
        case 0x32ab88u: goto label_32ab88;
        case 0x32ab8cu: goto label_32ab8c;
        case 0x32ab90u: goto label_32ab90;
        case 0x32ab94u: goto label_32ab94;
        case 0x32ab98u: goto label_32ab98;
        case 0x32ab9cu: goto label_32ab9c;
        case 0x32aba0u: goto label_32aba0;
        case 0x32aba4u: goto label_32aba4;
        case 0x32aba8u: goto label_32aba8;
        case 0x32abacu: goto label_32abac;
        case 0x32abb0u: goto label_32abb0;
        case 0x32abb4u: goto label_32abb4;
        case 0x32abb8u: goto label_32abb8;
        case 0x32abbcu: goto label_32abbc;
        case 0x32abc0u: goto label_32abc0;
        case 0x32abc4u: goto label_32abc4;
        case 0x32abc8u: goto label_32abc8;
        case 0x32abccu: goto label_32abcc;
        case 0x32abd0u: goto label_32abd0;
        case 0x32abd4u: goto label_32abd4;
        case 0x32abd8u: goto label_32abd8;
        case 0x32abdcu: goto label_32abdc;
        case 0x32abe0u: goto label_32abe0;
        case 0x32abe4u: goto label_32abe4;
        case 0x32abe8u: goto label_32abe8;
        case 0x32abecu: goto label_32abec;
        case 0x32abf0u: goto label_32abf0;
        case 0x32abf4u: goto label_32abf4;
        case 0x32abf8u: goto label_32abf8;
        case 0x32abfcu: goto label_32abfc;
        case 0x32ac00u: goto label_32ac00;
        case 0x32ac04u: goto label_32ac04;
        case 0x32ac08u: goto label_32ac08;
        case 0x32ac0cu: goto label_32ac0c;
        case 0x32ac10u: goto label_32ac10;
        case 0x32ac14u: goto label_32ac14;
        case 0x32ac18u: goto label_32ac18;
        case 0x32ac1cu: goto label_32ac1c;
        case 0x32ac20u: goto label_32ac20;
        case 0x32ac24u: goto label_32ac24;
        case 0x32ac28u: goto label_32ac28;
        case 0x32ac2cu: goto label_32ac2c;
        case 0x32ac30u: goto label_32ac30;
        case 0x32ac34u: goto label_32ac34;
        case 0x32ac38u: goto label_32ac38;
        case 0x32ac3cu: goto label_32ac3c;
        case 0x32ac40u: goto label_32ac40;
        case 0x32ac44u: goto label_32ac44;
        case 0x32ac48u: goto label_32ac48;
        case 0x32ac4cu: goto label_32ac4c;
        case 0x32ac50u: goto label_32ac50;
        case 0x32ac54u: goto label_32ac54;
        case 0x32ac58u: goto label_32ac58;
        case 0x32ac5cu: goto label_32ac5c;
        case 0x32ac60u: goto label_32ac60;
        case 0x32ac64u: goto label_32ac64;
        case 0x32ac68u: goto label_32ac68;
        case 0x32ac6cu: goto label_32ac6c;
        case 0x32ac70u: goto label_32ac70;
        case 0x32ac74u: goto label_32ac74;
        case 0x32ac78u: goto label_32ac78;
        case 0x32ac7cu: goto label_32ac7c;
        case 0x32ac80u: goto label_32ac80;
        case 0x32ac84u: goto label_32ac84;
        case 0x32ac88u: goto label_32ac88;
        case 0x32ac8cu: goto label_32ac8c;
        case 0x32ac90u: goto label_32ac90;
        case 0x32ac94u: goto label_32ac94;
        case 0x32ac98u: goto label_32ac98;
        case 0x32ac9cu: goto label_32ac9c;
        case 0x32aca0u: goto label_32aca0;
        case 0x32aca4u: goto label_32aca4;
        case 0x32aca8u: goto label_32aca8;
        case 0x32acacu: goto label_32acac;
        case 0x32acb0u: goto label_32acb0;
        case 0x32acb4u: goto label_32acb4;
        case 0x32acb8u: goto label_32acb8;
        case 0x32acbcu: goto label_32acbc;
        case 0x32acc0u: goto label_32acc0;
        case 0x32acc4u: goto label_32acc4;
        case 0x32acc8u: goto label_32acc8;
        case 0x32acccu: goto label_32accc;
        case 0x32acd0u: goto label_32acd0;
        case 0x32acd4u: goto label_32acd4;
        case 0x32acd8u: goto label_32acd8;
        case 0x32acdcu: goto label_32acdc;
        case 0x32ace0u: goto label_32ace0;
        case 0x32ace4u: goto label_32ace4;
        case 0x32ace8u: goto label_32ace8;
        case 0x32acecu: goto label_32acec;
        case 0x32acf0u: goto label_32acf0;
        case 0x32acf4u: goto label_32acf4;
        case 0x32acf8u: goto label_32acf8;
        case 0x32acfcu: goto label_32acfc;
        case 0x32ad00u: goto label_32ad00;
        case 0x32ad04u: goto label_32ad04;
        case 0x32ad08u: goto label_32ad08;
        case 0x32ad0cu: goto label_32ad0c;
        case 0x32ad10u: goto label_32ad10;
        case 0x32ad14u: goto label_32ad14;
        case 0x32ad18u: goto label_32ad18;
        case 0x32ad1cu: goto label_32ad1c;
        case 0x32ad20u: goto label_32ad20;
        case 0x32ad24u: goto label_32ad24;
        case 0x32ad28u: goto label_32ad28;
        case 0x32ad2cu: goto label_32ad2c;
        case 0x32ad30u: goto label_32ad30;
        case 0x32ad34u: goto label_32ad34;
        case 0x32ad38u: goto label_32ad38;
        case 0x32ad3cu: goto label_32ad3c;
        case 0x32ad40u: goto label_32ad40;
        case 0x32ad44u: goto label_32ad44;
        case 0x32ad48u: goto label_32ad48;
        case 0x32ad4cu: goto label_32ad4c;
        case 0x32ad50u: goto label_32ad50;
        case 0x32ad54u: goto label_32ad54;
        case 0x32ad58u: goto label_32ad58;
        case 0x32ad5cu: goto label_32ad5c;
        case 0x32ad60u: goto label_32ad60;
        case 0x32ad64u: goto label_32ad64;
        case 0x32ad68u: goto label_32ad68;
        case 0x32ad6cu: goto label_32ad6c;
        case 0x32ad70u: goto label_32ad70;
        case 0x32ad74u: goto label_32ad74;
        case 0x32ad78u: goto label_32ad78;
        case 0x32ad7cu: goto label_32ad7c;
        case 0x32ad80u: goto label_32ad80;
        case 0x32ad84u: goto label_32ad84;
        case 0x32ad88u: goto label_32ad88;
        case 0x32ad8cu: goto label_32ad8c;
        case 0x32ad90u: goto label_32ad90;
        case 0x32ad94u: goto label_32ad94;
        case 0x32ad98u: goto label_32ad98;
        case 0x32ad9cu: goto label_32ad9c;
        case 0x32ada0u: goto label_32ada0;
        case 0x32ada4u: goto label_32ada4;
        case 0x32ada8u: goto label_32ada8;
        case 0x32adacu: goto label_32adac;
        case 0x32adb0u: goto label_32adb0;
        case 0x32adb4u: goto label_32adb4;
        case 0x32adb8u: goto label_32adb8;
        case 0x32adbcu: goto label_32adbc;
        case 0x32adc0u: goto label_32adc0;
        case 0x32adc4u: goto label_32adc4;
        case 0x32adc8u: goto label_32adc8;
        case 0x32adccu: goto label_32adcc;
        case 0x32add0u: goto label_32add0;
        case 0x32add4u: goto label_32add4;
        case 0x32add8u: goto label_32add8;
        case 0x32addcu: goto label_32addc;
        case 0x32ade0u: goto label_32ade0;
        case 0x32ade4u: goto label_32ade4;
        case 0x32ade8u: goto label_32ade8;
        case 0x32adecu: goto label_32adec;
        case 0x32adf0u: goto label_32adf0;
        case 0x32adf4u: goto label_32adf4;
        case 0x32adf8u: goto label_32adf8;
        case 0x32adfcu: goto label_32adfc;
        case 0x32ae00u: goto label_32ae00;
        case 0x32ae04u: goto label_32ae04;
        case 0x32ae08u: goto label_32ae08;
        case 0x32ae0cu: goto label_32ae0c;
        case 0x32ae10u: goto label_32ae10;
        case 0x32ae14u: goto label_32ae14;
        case 0x32ae18u: goto label_32ae18;
        case 0x32ae1cu: goto label_32ae1c;
        case 0x32ae20u: goto label_32ae20;
        case 0x32ae24u: goto label_32ae24;
        case 0x32ae28u: goto label_32ae28;
        case 0x32ae2cu: goto label_32ae2c;
        case 0x32ae30u: goto label_32ae30;
        case 0x32ae34u: goto label_32ae34;
        case 0x32ae38u: goto label_32ae38;
        case 0x32ae3cu: goto label_32ae3c;
        case 0x32ae40u: goto label_32ae40;
        case 0x32ae44u: goto label_32ae44;
        case 0x32ae48u: goto label_32ae48;
        case 0x32ae4cu: goto label_32ae4c;
        case 0x32ae50u: goto label_32ae50;
        case 0x32ae54u: goto label_32ae54;
        case 0x32ae58u: goto label_32ae58;
        case 0x32ae5cu: goto label_32ae5c;
        case 0x32ae60u: goto label_32ae60;
        case 0x32ae64u: goto label_32ae64;
        case 0x32ae68u: goto label_32ae68;
        case 0x32ae6cu: goto label_32ae6c;
        case 0x32ae70u: goto label_32ae70;
        case 0x32ae74u: goto label_32ae74;
        case 0x32ae78u: goto label_32ae78;
        case 0x32ae7cu: goto label_32ae7c;
        case 0x32ae80u: goto label_32ae80;
        case 0x32ae84u: goto label_32ae84;
        case 0x32ae88u: goto label_32ae88;
        case 0x32ae8cu: goto label_32ae8c;
        case 0x32ae90u: goto label_32ae90;
        case 0x32ae94u: goto label_32ae94;
        case 0x32ae98u: goto label_32ae98;
        case 0x32ae9cu: goto label_32ae9c;
        case 0x32aea0u: goto label_32aea0;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aea8u: goto label_32aea8;
        case 0x32aeacu: goto label_32aeac;
        case 0x32aeb0u: goto label_32aeb0;
        case 0x32aeb4u: goto label_32aeb4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32aebcu: goto label_32aebc;
        case 0x32aec0u: goto label_32aec0;
        case 0x32aec4u: goto label_32aec4;
        case 0x32aec8u: goto label_32aec8;
        case 0x32aeccu: goto label_32aecc;
        case 0x32aed0u: goto label_32aed0;
        case 0x32aed4u: goto label_32aed4;
        case 0x32aed8u: goto label_32aed8;
        case 0x32aedcu: goto label_32aedc;
        case 0x32aee0u: goto label_32aee0;
        case 0x32aee4u: goto label_32aee4;
        case 0x32aee8u: goto label_32aee8;
        case 0x32aeecu: goto label_32aeec;
        case 0x32aef0u: goto label_32aef0;
        case 0x32aef4u: goto label_32aef4;
        case 0x32aef8u: goto label_32aef8;
        case 0x32aefcu: goto label_32aefc;
        case 0x32af00u: goto label_32af00;
        case 0x32af04u: goto label_32af04;
        case 0x32af08u: goto label_32af08;
        case 0x32af0cu: goto label_32af0c;
        case 0x32af10u: goto label_32af10;
        case 0x32af14u: goto label_32af14;
        case 0x32af18u: goto label_32af18;
        case 0x32af1cu: goto label_32af1c;
        case 0x32af20u: goto label_32af20;
        case 0x32af24u: goto label_32af24;
        case 0x32af28u: goto label_32af28;
        case 0x32af2cu: goto label_32af2c;
        case 0x32af30u: goto label_32af30;
        case 0x32af34u: goto label_32af34;
        case 0x32af38u: goto label_32af38;
        case 0x32af3cu: goto label_32af3c;
        case 0x32af40u: goto label_32af40;
        case 0x32af44u: goto label_32af44;
        case 0x32af48u: goto label_32af48;
        case 0x32af4cu: goto label_32af4c;
        case 0x32af50u: goto label_32af50;
        case 0x32af54u: goto label_32af54;
        case 0x32af58u: goto label_32af58;
        case 0x32af5cu: goto label_32af5c;
        case 0x32af60u: goto label_32af60;
        case 0x32af64u: goto label_32af64;
        case 0x32af68u: goto label_32af68;
        case 0x32af6cu: goto label_32af6c;
        case 0x32af70u: goto label_32af70;
        case 0x32af74u: goto label_32af74;
        case 0x32af78u: goto label_32af78;
        case 0x32af7cu: goto label_32af7c;
        case 0x32af80u: goto label_32af80;
        case 0x32af84u: goto label_32af84;
        case 0x32af88u: goto label_32af88;
        case 0x32af8cu: goto label_32af8c;
        case 0x32af90u: goto label_32af90;
        case 0x32af94u: goto label_32af94;
        case 0x32af98u: goto label_32af98;
        case 0x32af9cu: goto label_32af9c;
        case 0x32afa0u: goto label_32afa0;
        case 0x32afa4u: goto label_32afa4;
        case 0x32afa8u: goto label_32afa8;
        case 0x32afacu: goto label_32afac;
        case 0x32afb0u: goto label_32afb0;
        case 0x32afb4u: goto label_32afb4;
        case 0x32afb8u: goto label_32afb8;
        case 0x32afbcu: goto label_32afbc;
        case 0x32afc0u: goto label_32afc0;
        case 0x32afc4u: goto label_32afc4;
        case 0x32afc8u: goto label_32afc8;
        case 0x32afccu: goto label_32afcc;
        case 0x32afd0u: goto label_32afd0;
        case 0x32afd4u: goto label_32afd4;
        case 0x32afd8u: goto label_32afd8;
        case 0x32afdcu: goto label_32afdc;
        case 0x32afe0u: goto label_32afe0;
        case 0x32afe4u: goto label_32afe4;
        case 0x32afe8u: goto label_32afe8;
        case 0x32afecu: goto label_32afec;
        case 0x32aff0u: goto label_32aff0;
        case 0x32aff4u: goto label_32aff4;
        case 0x32aff8u: goto label_32aff8;
        case 0x32affcu: goto label_32affc;
        case 0x32b000u: goto label_32b000;
        case 0x32b004u: goto label_32b004;
        case 0x32b008u: goto label_32b008;
        case 0x32b00cu: goto label_32b00c;
        case 0x32b010u: goto label_32b010;
        case 0x32b014u: goto label_32b014;
        case 0x32b018u: goto label_32b018;
        case 0x32b01cu: goto label_32b01c;
        case 0x32b020u: goto label_32b020;
        case 0x32b024u: goto label_32b024;
        case 0x32b028u: goto label_32b028;
        case 0x32b02cu: goto label_32b02c;
        case 0x32b030u: goto label_32b030;
        case 0x32b034u: goto label_32b034;
        case 0x32b038u: goto label_32b038;
        case 0x32b03cu: goto label_32b03c;
        case 0x32b040u: goto label_32b040;
        case 0x32b044u: goto label_32b044;
        case 0x32b048u: goto label_32b048;
        case 0x32b04cu: goto label_32b04c;
        case 0x32b050u: goto label_32b050;
        case 0x32b054u: goto label_32b054;
        case 0x32b058u: goto label_32b058;
        case 0x32b05cu: goto label_32b05c;
        case 0x32b060u: goto label_32b060;
        case 0x32b064u: goto label_32b064;
        case 0x32b068u: goto label_32b068;
        case 0x32b06cu: goto label_32b06c;
        case 0x32b070u: goto label_32b070;
        case 0x32b074u: goto label_32b074;
        case 0x32b078u: goto label_32b078;
        case 0x32b07cu: goto label_32b07c;
        case 0x32b080u: goto label_32b080;
        case 0x32b084u: goto label_32b084;
        case 0x32b088u: goto label_32b088;
        case 0x32b08cu: goto label_32b08c;
        case 0x32b090u: goto label_32b090;
        case 0x32b094u: goto label_32b094;
        case 0x32b098u: goto label_32b098;
        case 0x32b09cu: goto label_32b09c;
        case 0x32b0a0u: goto label_32b0a0;
        case 0x32b0a4u: goto label_32b0a4;
        case 0x32b0a8u: goto label_32b0a8;
        case 0x32b0acu: goto label_32b0ac;
        case 0x32b0b0u: goto label_32b0b0;
        case 0x32b0b4u: goto label_32b0b4;
        case 0x32b0b8u: goto label_32b0b8;
        case 0x32b0bcu: goto label_32b0bc;
        case 0x32b0c0u: goto label_32b0c0;
        case 0x32b0c4u: goto label_32b0c4;
        case 0x32b0c8u: goto label_32b0c8;
        case 0x32b0ccu: goto label_32b0cc;
        case 0x32b0d0u: goto label_32b0d0;
        case 0x32b0d4u: goto label_32b0d4;
        case 0x32b0d8u: goto label_32b0d8;
        case 0x32b0dcu: goto label_32b0dc;
        case 0x32b0e0u: goto label_32b0e0;
        case 0x32b0e4u: goto label_32b0e4;
        case 0x32b0e8u: goto label_32b0e8;
        case 0x32b0ecu: goto label_32b0ec;
        case 0x32b0f0u: goto label_32b0f0;
        case 0x32b0f4u: goto label_32b0f4;
        case 0x32b0f8u: goto label_32b0f8;
        case 0x32b0fcu: goto label_32b0fc;
        case 0x32b100u: goto label_32b100;
        case 0x32b104u: goto label_32b104;
        case 0x32b108u: goto label_32b108;
        case 0x32b10cu: goto label_32b10c;
        case 0x32b110u: goto label_32b110;
        case 0x32b114u: goto label_32b114;
        case 0x32b118u: goto label_32b118;
        case 0x32b11cu: goto label_32b11c;
        case 0x32b120u: goto label_32b120;
        case 0x32b124u: goto label_32b124;
        case 0x32b128u: goto label_32b128;
        case 0x32b12cu: goto label_32b12c;
        case 0x32b130u: goto label_32b130;
        case 0x32b134u: goto label_32b134;
        case 0x32b138u: goto label_32b138;
        case 0x32b13cu: goto label_32b13c;
        case 0x32b140u: goto label_32b140;
        case 0x32b144u: goto label_32b144;
        case 0x32b148u: goto label_32b148;
        case 0x32b14cu: goto label_32b14c;
        case 0x32b150u: goto label_32b150;
        case 0x32b154u: goto label_32b154;
        case 0x32b158u: goto label_32b158;
        case 0x32b15cu: goto label_32b15c;
        case 0x32b160u: goto label_32b160;
        case 0x32b164u: goto label_32b164;
        case 0x32b168u: goto label_32b168;
        case 0x32b16cu: goto label_32b16c;
        case 0x32b170u: goto label_32b170;
        case 0x32b174u: goto label_32b174;
        case 0x32b178u: goto label_32b178;
        case 0x32b17cu: goto label_32b17c;
        case 0x32b180u: goto label_32b180;
        case 0x32b184u: goto label_32b184;
        case 0x32b188u: goto label_32b188;
        case 0x32b18cu: goto label_32b18c;
        case 0x32b190u: goto label_32b190;
        case 0x32b194u: goto label_32b194;
        case 0x32b198u: goto label_32b198;
        case 0x32b19cu: goto label_32b19c;
        case 0x32b1a0u: goto label_32b1a0;
        case 0x32b1a4u: goto label_32b1a4;
        case 0x32b1a8u: goto label_32b1a8;
        case 0x32b1acu: goto label_32b1ac;
        case 0x32b1b0u: goto label_32b1b0;
        case 0x32b1b4u: goto label_32b1b4;
        case 0x32b1b8u: goto label_32b1b8;
        case 0x32b1bcu: goto label_32b1bc;
        case 0x32b1c0u: goto label_32b1c0;
        case 0x32b1c4u: goto label_32b1c4;
        case 0x32b1c8u: goto label_32b1c8;
        case 0x32b1ccu: goto label_32b1cc;
        case 0x32b1d0u: goto label_32b1d0;
        case 0x32b1d4u: goto label_32b1d4;
        case 0x32b1d8u: goto label_32b1d8;
        case 0x32b1dcu: goto label_32b1dc;
        case 0x32b1e0u: goto label_32b1e0;
        case 0x32b1e4u: goto label_32b1e4;
        case 0x32b1e8u: goto label_32b1e8;
        case 0x32b1ecu: goto label_32b1ec;
        case 0x32b1f0u: goto label_32b1f0;
        case 0x32b1f4u: goto label_32b1f4;
        case 0x32b1f8u: goto label_32b1f8;
        case 0x32b1fcu: goto label_32b1fc;
        case 0x32b200u: goto label_32b200;
        case 0x32b204u: goto label_32b204;
        case 0x32b208u: goto label_32b208;
        case 0x32b20cu: goto label_32b20c;
        case 0x32b210u: goto label_32b210;
        case 0x32b214u: goto label_32b214;
        case 0x32b218u: goto label_32b218;
        case 0x32b21cu: goto label_32b21c;
        case 0x32b220u: goto label_32b220;
        case 0x32b224u: goto label_32b224;
        case 0x32b228u: goto label_32b228;
        case 0x32b22cu: goto label_32b22c;
        case 0x32b230u: goto label_32b230;
        case 0x32b234u: goto label_32b234;
        case 0x32b238u: goto label_32b238;
        case 0x32b23cu: goto label_32b23c;
        case 0x32b240u: goto label_32b240;
        case 0x32b244u: goto label_32b244;
        case 0x32b248u: goto label_32b248;
        case 0x32b24cu: goto label_32b24c;
        case 0x32b250u: goto label_32b250;
        case 0x32b254u: goto label_32b254;
        case 0x32b258u: goto label_32b258;
        case 0x32b25cu: goto label_32b25c;
        case 0x32b260u: goto label_32b260;
        case 0x32b264u: goto label_32b264;
        case 0x32b268u: goto label_32b268;
        case 0x32b26cu: goto label_32b26c;
        case 0x32b270u: goto label_32b270;
        case 0x32b274u: goto label_32b274;
        case 0x32b278u: goto label_32b278;
        case 0x32b27cu: goto label_32b27c;
        case 0x32b280u: goto label_32b280;
        case 0x32b284u: goto label_32b284;
        case 0x32b288u: goto label_32b288;
        case 0x32b28cu: goto label_32b28c;
        case 0x32b290u: goto label_32b290;
        case 0x32b294u: goto label_32b294;
        case 0x32b298u: goto label_32b298;
        case 0x32b29cu: goto label_32b29c;
        case 0x32b2a0u: goto label_32b2a0;
        case 0x32b2a4u: goto label_32b2a4;
        case 0x32b2a8u: goto label_32b2a8;
        case 0x32b2acu: goto label_32b2ac;
        case 0x32b2b0u: goto label_32b2b0;
        case 0x32b2b4u: goto label_32b2b4;
        case 0x32b2b8u: goto label_32b2b8;
        case 0x32b2bcu: goto label_32b2bc;
        case 0x32b2c0u: goto label_32b2c0;
        case 0x32b2c4u: goto label_32b2c4;
        case 0x32b2c8u: goto label_32b2c8;
        case 0x32b2ccu: goto label_32b2cc;
        case 0x32b2d0u: goto label_32b2d0;
        case 0x32b2d4u: goto label_32b2d4;
        case 0x32b2d8u: goto label_32b2d8;
        case 0x32b2dcu: goto label_32b2dc;
        case 0x32b2e0u: goto label_32b2e0;
        case 0x32b2e4u: goto label_32b2e4;
        case 0x32b2e8u: goto label_32b2e8;
        case 0x32b2ecu: goto label_32b2ec;
        case 0x32b2f0u: goto label_32b2f0;
        case 0x32b2f4u: goto label_32b2f4;
        case 0x32b2f8u: goto label_32b2f8;
        case 0x32b2fcu: goto label_32b2fc;
        case 0x32b300u: goto label_32b300;
        case 0x32b304u: goto label_32b304;
        case 0x32b308u: goto label_32b308;
        case 0x32b30cu: goto label_32b30c;
        case 0x32b310u: goto label_32b310;
        case 0x32b314u: goto label_32b314;
        case 0x32b318u: goto label_32b318;
        case 0x32b31cu: goto label_32b31c;
        case 0x32b320u: goto label_32b320;
        case 0x32b324u: goto label_32b324;
        case 0x32b328u: goto label_32b328;
        case 0x32b32cu: goto label_32b32c;
        case 0x32b330u: goto label_32b330;
        case 0x32b334u: goto label_32b334;
        case 0x32b338u: goto label_32b338;
        case 0x32b33cu: goto label_32b33c;
        case 0x32b340u: goto label_32b340;
        case 0x32b344u: goto label_32b344;
        case 0x32b348u: goto label_32b348;
        case 0x32b34cu: goto label_32b34c;
        case 0x32b350u: goto label_32b350;
        case 0x32b354u: goto label_32b354;
        case 0x32b358u: goto label_32b358;
        case 0x32b35cu: goto label_32b35c;
        case 0x32b360u: goto label_32b360;
        case 0x32b364u: goto label_32b364;
        case 0x32b368u: goto label_32b368;
        case 0x32b36cu: goto label_32b36c;
        case 0x32b370u: goto label_32b370;
        case 0x32b374u: goto label_32b374;
        case 0x32b378u: goto label_32b378;
        case 0x32b37cu: goto label_32b37c;
        case 0x32b380u: goto label_32b380;
        case 0x32b384u: goto label_32b384;
        case 0x32b388u: goto label_32b388;
        case 0x32b38cu: goto label_32b38c;
        case 0x32b390u: goto label_32b390;
        case 0x32b394u: goto label_32b394;
        case 0x32b398u: goto label_32b398;
        case 0x32b39cu: goto label_32b39c;
        case 0x32b3a0u: goto label_32b3a0;
        case 0x32b3a4u: goto label_32b3a4;
        case 0x32b3a8u: goto label_32b3a8;
        case 0x32b3acu: goto label_32b3ac;
        case 0x32b3b0u: goto label_32b3b0;
        case 0x32b3b4u: goto label_32b3b4;
        case 0x32b3b8u: goto label_32b3b8;
        case 0x32b3bcu: goto label_32b3bc;
        case 0x32b3c0u: goto label_32b3c0;
        case 0x32b3c4u: goto label_32b3c4;
        case 0x32b3c8u: goto label_32b3c8;
        case 0x32b3ccu: goto label_32b3cc;
        case 0x32b3d0u: goto label_32b3d0;
        case 0x32b3d4u: goto label_32b3d4;
        case 0x32b3d8u: goto label_32b3d8;
        case 0x32b3dcu: goto label_32b3dc;
        case 0x32b3e0u: goto label_32b3e0;
        case 0x32b3e4u: goto label_32b3e4;
        case 0x32b3e8u: goto label_32b3e8;
        case 0x32b3ecu: goto label_32b3ec;
        case 0x32b3f0u: goto label_32b3f0;
        case 0x32b3f4u: goto label_32b3f4;
        case 0x32b3f8u: goto label_32b3f8;
        case 0x32b3fcu: goto label_32b3fc;
        case 0x32b400u: goto label_32b400;
        case 0x32b404u: goto label_32b404;
        case 0x32b408u: goto label_32b408;
        case 0x32b40cu: goto label_32b40c;
        case 0x32b410u: goto label_32b410;
        case 0x32b414u: goto label_32b414;
        case 0x32b418u: goto label_32b418;
        case 0x32b41cu: goto label_32b41c;
        case 0x32b420u: goto label_32b420;
        case 0x32b424u: goto label_32b424;
        case 0x32b428u: goto label_32b428;
        case 0x32b42cu: goto label_32b42c;
        case 0x32b430u: goto label_32b430;
        case 0x32b434u: goto label_32b434;
        case 0x32b438u: goto label_32b438;
        case 0x32b43cu: goto label_32b43c;
        case 0x32b440u: goto label_32b440;
        case 0x32b444u: goto label_32b444;
        case 0x32b448u: goto label_32b448;
        case 0x32b44cu: goto label_32b44c;
        case 0x32b450u: goto label_32b450;
        case 0x32b454u: goto label_32b454;
        case 0x32b458u: goto label_32b458;
        case 0x32b45cu: goto label_32b45c;
        case 0x32b460u: goto label_32b460;
        case 0x32b464u: goto label_32b464;
        case 0x32b468u: goto label_32b468;
        case 0x32b46cu: goto label_32b46c;
        case 0x32b470u: goto label_32b470;
        case 0x32b474u: goto label_32b474;
        case 0x32b478u: goto label_32b478;
        case 0x32b47cu: goto label_32b47c;
        case 0x32b480u: goto label_32b480;
        case 0x32b484u: goto label_32b484;
        case 0x32b488u: goto label_32b488;
        case 0x32b48cu: goto label_32b48c;
        case 0x32b490u: goto label_32b490;
        case 0x32b494u: goto label_32b494;
        case 0x32b498u: goto label_32b498;
        case 0x32b49cu: goto label_32b49c;
        case 0x32b4a0u: goto label_32b4a0;
        case 0x32b4a4u: goto label_32b4a4;
        case 0x32b4a8u: goto label_32b4a8;
        case 0x32b4acu: goto label_32b4ac;
        case 0x32b4b0u: goto label_32b4b0;
        case 0x32b4b4u: goto label_32b4b4;
        case 0x32b4b8u: goto label_32b4b8;
        case 0x32b4bcu: goto label_32b4bc;
        case 0x32b4c0u: goto label_32b4c0;
        case 0x32b4c4u: goto label_32b4c4;
        case 0x32b4c8u: goto label_32b4c8;
        case 0x32b4ccu: goto label_32b4cc;
        case 0x32b4d0u: goto label_32b4d0;
        case 0x32b4d4u: goto label_32b4d4;
        case 0x32b4d8u: goto label_32b4d8;
        case 0x32b4dcu: goto label_32b4dc;
        case 0x32b4e0u: goto label_32b4e0;
        case 0x32b4e4u: goto label_32b4e4;
        case 0x32b4e8u: goto label_32b4e8;
        case 0x32b4ecu: goto label_32b4ec;
        case 0x32b4f0u: goto label_32b4f0;
        case 0x32b4f4u: goto label_32b4f4;
        case 0x32b4f8u: goto label_32b4f8;
        case 0x32b4fcu: goto label_32b4fc;
        case 0x32b500u: goto label_32b500;
        case 0x32b504u: goto label_32b504;
        case 0x32b508u: goto label_32b508;
        case 0x32b50cu: goto label_32b50c;
        case 0x32b510u: goto label_32b510;
        case 0x32b514u: goto label_32b514;
        case 0x32b518u: goto label_32b518;
        case 0x32b51cu: goto label_32b51c;
        case 0x32b520u: goto label_32b520;
        case 0x32b524u: goto label_32b524;
        case 0x32b528u: goto label_32b528;
        case 0x32b52cu: goto label_32b52c;
        case 0x32b530u: goto label_32b530;
        case 0x32b534u: goto label_32b534;
        case 0x32b538u: goto label_32b538;
        case 0x32b53cu: goto label_32b53c;
        case 0x32b540u: goto label_32b540;
        case 0x32b544u: goto label_32b544;
        case 0x32b548u: goto label_32b548;
        case 0x32b54cu: goto label_32b54c;
        case 0x32b550u: goto label_32b550;
        case 0x32b554u: goto label_32b554;
        case 0x32b558u: goto label_32b558;
        case 0x32b55cu: goto label_32b55c;
        case 0x32b560u: goto label_32b560;
        case 0x32b564u: goto label_32b564;
        case 0x32b568u: goto label_32b568;
        case 0x32b56cu: goto label_32b56c;
        case 0x32b570u: goto label_32b570;
        case 0x32b574u: goto label_32b574;
        case 0x32b578u: goto label_32b578;
        case 0x32b57cu: goto label_32b57c;
        case 0x32b580u: goto label_32b580;
        case 0x32b584u: goto label_32b584;
        case 0x32b588u: goto label_32b588;
        case 0x32b58cu: goto label_32b58c;
        case 0x32b590u: goto label_32b590;
        case 0x32b594u: goto label_32b594;
        case 0x32b598u: goto label_32b598;
        case 0x32b59cu: goto label_32b59c;
        case 0x32b5a0u: goto label_32b5a0;
        case 0x32b5a4u: goto label_32b5a4;
        case 0x32b5a8u: goto label_32b5a8;
        case 0x32b5acu: goto label_32b5ac;
        case 0x32b5b0u: goto label_32b5b0;
        case 0x32b5b4u: goto label_32b5b4;
        case 0x32b5b8u: goto label_32b5b8;
        case 0x32b5bcu: goto label_32b5bc;
        case 0x32b5c0u: goto label_32b5c0;
        case 0x32b5c4u: goto label_32b5c4;
        case 0x32b5c8u: goto label_32b5c8;
        case 0x32b5ccu: goto label_32b5cc;
        case 0x32b5d0u: goto label_32b5d0;
        case 0x32b5d4u: goto label_32b5d4;
        case 0x32b5d8u: goto label_32b5d8;
        case 0x32b5dcu: goto label_32b5dc;
        case 0x32b5e0u: goto label_32b5e0;
        case 0x32b5e4u: goto label_32b5e4;
        case 0x32b5e8u: goto label_32b5e8;
        case 0x32b5ecu: goto label_32b5ec;
        case 0x32b5f0u: goto label_32b5f0;
        case 0x32b5f4u: goto label_32b5f4;
        case 0x32b5f8u: goto label_32b5f8;
        case 0x32b5fcu: goto label_32b5fc;
        case 0x32b600u: goto label_32b600;
        case 0x32b604u: goto label_32b604;
        case 0x32b608u: goto label_32b608;
        case 0x32b60cu: goto label_32b60c;
        case 0x32b610u: goto label_32b610;
        case 0x32b614u: goto label_32b614;
        case 0x32b618u: goto label_32b618;
        case 0x32b61cu: goto label_32b61c;
        case 0x32b620u: goto label_32b620;
        case 0x32b624u: goto label_32b624;
        case 0x32b628u: goto label_32b628;
        case 0x32b62cu: goto label_32b62c;
        case 0x32b630u: goto label_32b630;
        case 0x32b634u: goto label_32b634;
        case 0x32b638u: goto label_32b638;
        case 0x32b63cu: goto label_32b63c;
        case 0x32b640u: goto label_32b640;
        case 0x32b644u: goto label_32b644;
        case 0x32b648u: goto label_32b648;
        case 0x32b64cu: goto label_32b64c;
        case 0x32b650u: goto label_32b650;
        case 0x32b654u: goto label_32b654;
        case 0x32b658u: goto label_32b658;
        case 0x32b65cu: goto label_32b65c;
        case 0x32b660u: goto label_32b660;
        case 0x32b664u: goto label_32b664;
        case 0x32b668u: goto label_32b668;
        case 0x32b66cu: goto label_32b66c;
        case 0x32b670u: goto label_32b670;
        case 0x32b674u: goto label_32b674;
        case 0x32b678u: goto label_32b678;
        case 0x32b67cu: goto label_32b67c;
        case 0x32b680u: goto label_32b680;
        case 0x32b684u: goto label_32b684;
        case 0x32b688u: goto label_32b688;
        case 0x32b68cu: goto label_32b68c;
        case 0x32b690u: goto label_32b690;
        case 0x32b694u: goto label_32b694;
        case 0x32b698u: goto label_32b698;
        case 0x32b69cu: goto label_32b69c;
        case 0x32b6a0u: goto label_32b6a0;
        case 0x32b6a4u: goto label_32b6a4;
        case 0x32b6a8u: goto label_32b6a8;
        case 0x32b6acu: goto label_32b6ac;
        case 0x32b6b0u: goto label_32b6b0;
        case 0x32b6b4u: goto label_32b6b4;
        case 0x32b6b8u: goto label_32b6b8;
        case 0x32b6bcu: goto label_32b6bc;
        case 0x32b6c0u: goto label_32b6c0;
        case 0x32b6c4u: goto label_32b6c4;
        case 0x32b6c8u: goto label_32b6c8;
        case 0x32b6ccu: goto label_32b6cc;
        case 0x32b6d0u: goto label_32b6d0;
        case 0x32b6d4u: goto label_32b6d4;
        case 0x32b6d8u: goto label_32b6d8;
        case 0x32b6dcu: goto label_32b6dc;
        case 0x32b6e0u: goto label_32b6e0;
        case 0x32b6e4u: goto label_32b6e4;
        case 0x32b6e8u: goto label_32b6e8;
        case 0x32b6ecu: goto label_32b6ec;
        case 0x32b6f0u: goto label_32b6f0;
        case 0x32b6f4u: goto label_32b6f4;
        case 0x32b6f8u: goto label_32b6f8;
        case 0x32b6fcu: goto label_32b6fc;
        case 0x32b700u: goto label_32b700;
        case 0x32b704u: goto label_32b704;
        case 0x32b708u: goto label_32b708;
        case 0x32b70cu: goto label_32b70c;
        case 0x32b710u: goto label_32b710;
        case 0x32b714u: goto label_32b714;
        case 0x32b718u: goto label_32b718;
        case 0x32b71cu: goto label_32b71c;
        case 0x32b720u: goto label_32b720;
        case 0x32b724u: goto label_32b724;
        case 0x32b728u: goto label_32b728;
        case 0x32b72cu: goto label_32b72c;
        case 0x32b730u: goto label_32b730;
        case 0x32b734u: goto label_32b734;
        case 0x32b738u: goto label_32b738;
        case 0x32b73cu: goto label_32b73c;
        case 0x32b740u: goto label_32b740;
        case 0x32b744u: goto label_32b744;
        case 0x32b748u: goto label_32b748;
        case 0x32b74cu: goto label_32b74c;
        case 0x32b750u: goto label_32b750;
        case 0x32b754u: goto label_32b754;
        case 0x32b758u: goto label_32b758;
        case 0x32b75cu: goto label_32b75c;
        case 0x32b760u: goto label_32b760;
        case 0x32b764u: goto label_32b764;
        case 0x32b768u: goto label_32b768;
        case 0x32b76cu: goto label_32b76c;
        case 0x32b770u: goto label_32b770;
        case 0x32b774u: goto label_32b774;
        case 0x32b778u: goto label_32b778;
        case 0x32b77cu: goto label_32b77c;
        case 0x32b780u: goto label_32b780;
        case 0x32b784u: goto label_32b784;
        case 0x32b788u: goto label_32b788;
        case 0x32b78cu: goto label_32b78c;
        case 0x32b790u: goto label_32b790;
        case 0x32b794u: goto label_32b794;
        case 0x32b798u: goto label_32b798;
        case 0x32b79cu: goto label_32b79c;
        case 0x32b7a0u: goto label_32b7a0;
        case 0x32b7a4u: goto label_32b7a4;
        case 0x32b7a8u: goto label_32b7a8;
        case 0x32b7acu: goto label_32b7ac;
        case 0x32b7b0u: goto label_32b7b0;
        case 0x32b7b4u: goto label_32b7b4;
        case 0x32b7b8u: goto label_32b7b8;
        case 0x32b7bcu: goto label_32b7bc;
        case 0x32b7c0u: goto label_32b7c0;
        case 0x32b7c4u: goto label_32b7c4;
        case 0x32b7c8u: goto label_32b7c8;
        case 0x32b7ccu: goto label_32b7cc;
        case 0x32b7d0u: goto label_32b7d0;
        case 0x32b7d4u: goto label_32b7d4;
        case 0x32b7d8u: goto label_32b7d8;
        case 0x32b7dcu: goto label_32b7dc;
        case 0x32b7e0u: goto label_32b7e0;
        case 0x32b7e4u: goto label_32b7e4;
        case 0x32b7e8u: goto label_32b7e8;
        case 0x32b7ecu: goto label_32b7ec;
        case 0x32b7f0u: goto label_32b7f0;
        case 0x32b7f4u: goto label_32b7f4;
        case 0x32b7f8u: goto label_32b7f8;
        case 0x32b7fcu: goto label_32b7fc;
        case 0x32b800u: goto label_32b800;
        case 0x32b804u: goto label_32b804;
        case 0x32b808u: goto label_32b808;
        case 0x32b80cu: goto label_32b80c;
        case 0x32b810u: goto label_32b810;
        case 0x32b814u: goto label_32b814;
        case 0x32b818u: goto label_32b818;
        case 0x32b81cu: goto label_32b81c;
        case 0x32b820u: goto label_32b820;
        case 0x32b824u: goto label_32b824;
        case 0x32b828u: goto label_32b828;
        case 0x32b82cu: goto label_32b82c;
        case 0x32b830u: goto label_32b830;
        case 0x32b834u: goto label_32b834;
        case 0x32b838u: goto label_32b838;
        case 0x32b83cu: goto label_32b83c;
        case 0x32b840u: goto label_32b840;
        case 0x32b844u: goto label_32b844;
        case 0x32b848u: goto label_32b848;
        case 0x32b84cu: goto label_32b84c;
        case 0x32b850u: goto label_32b850;
        case 0x32b854u: goto label_32b854;
        case 0x32b858u: goto label_32b858;
        case 0x32b85cu: goto label_32b85c;
        case 0x32b860u: goto label_32b860;
        case 0x32b864u: goto label_32b864;
        case 0x32b868u: goto label_32b868;
        case 0x32b86cu: goto label_32b86c;
        case 0x32b870u: goto label_32b870;
        case 0x32b874u: goto label_32b874;
        case 0x32b878u: goto label_32b878;
        case 0x32b87cu: goto label_32b87c;
        case 0x32b880u: goto label_32b880;
        case 0x32b884u: goto label_32b884;
        case 0x32b888u: goto label_32b888;
        case 0x32b88cu: goto label_32b88c;
        case 0x32b890u: goto label_32b890;
        case 0x32b894u: goto label_32b894;
        case 0x32b898u: goto label_32b898;
        case 0x32b89cu: goto label_32b89c;
        case 0x32b8a0u: goto label_32b8a0;
        case 0x32b8a4u: goto label_32b8a4;
        case 0x32b8a8u: goto label_32b8a8;
        case 0x32b8acu: goto label_32b8ac;
        case 0x32b8b0u: goto label_32b8b0;
        case 0x32b8b4u: goto label_32b8b4;
        case 0x32b8b8u: goto label_32b8b8;
        case 0x32b8bcu: goto label_32b8bc;
        case 0x32b8c0u: goto label_32b8c0;
        case 0x32b8c4u: goto label_32b8c4;
        case 0x32b8c8u: goto label_32b8c8;
        case 0x32b8ccu: goto label_32b8cc;
        case 0x32b8d0u: goto label_32b8d0;
        case 0x32b8d4u: goto label_32b8d4;
        case 0x32b8d8u: goto label_32b8d8;
        case 0x32b8dcu: goto label_32b8dc;
        case 0x32b8e0u: goto label_32b8e0;
        case 0x32b8e4u: goto label_32b8e4;
        case 0x32b8e8u: goto label_32b8e8;
        case 0x32b8ecu: goto label_32b8ec;
        case 0x32b8f0u: goto label_32b8f0;
        case 0x32b8f4u: goto label_32b8f4;
        case 0x32b8f8u: goto label_32b8f8;
        case 0x32b8fcu: goto label_32b8fc;
        case 0x32b900u: goto label_32b900;
        case 0x32b904u: goto label_32b904;
        case 0x32b908u: goto label_32b908;
        case 0x32b90cu: goto label_32b90c;
        case 0x32b910u: goto label_32b910;
        case 0x32b914u: goto label_32b914;
        case 0x32b918u: goto label_32b918;
        case 0x32b91cu: goto label_32b91c;
        case 0x32b920u: goto label_32b920;
        case 0x32b924u: goto label_32b924;
        case 0x32b928u: goto label_32b928;
        case 0x32b92cu: goto label_32b92c;
        case 0x32b930u: goto label_32b930;
        case 0x32b934u: goto label_32b934;
        case 0x32b938u: goto label_32b938;
        case 0x32b93cu: goto label_32b93c;
        case 0x32b940u: goto label_32b940;
        case 0x32b944u: goto label_32b944;
        case 0x32b948u: goto label_32b948;
        case 0x32b94cu: goto label_32b94c;
        case 0x32b950u: goto label_32b950;
        case 0x32b954u: goto label_32b954;
        case 0x32b958u: goto label_32b958;
        case 0x32b95cu: goto label_32b95c;
        case 0x32b960u: goto label_32b960;
        case 0x32b964u: goto label_32b964;
        case 0x32b968u: goto label_32b968;
        case 0x32b96cu: goto label_32b96c;
        case 0x32b970u: goto label_32b970;
        case 0x32b974u: goto label_32b974;
        case 0x32b978u: goto label_32b978;
        case 0x32b97cu: goto label_32b97c;
        case 0x32b980u: goto label_32b980;
        case 0x32b984u: goto label_32b984;
        case 0x32b988u: goto label_32b988;
        case 0x32b98cu: goto label_32b98c;
        case 0x32b990u: goto label_32b990;
        case 0x32b994u: goto label_32b994;
        case 0x32b998u: goto label_32b998;
        case 0x32b99cu: goto label_32b99c;
        case 0x32b9a0u: goto label_32b9a0;
        case 0x32b9a4u: goto label_32b9a4;
        case 0x32b9a8u: goto label_32b9a8;
        case 0x32b9acu: goto label_32b9ac;
        case 0x32b9b0u: goto label_32b9b0;
        case 0x32b9b4u: goto label_32b9b4;
        case 0x32b9b8u: goto label_32b9b8;
        case 0x32b9bcu: goto label_32b9bc;
        case 0x32b9c0u: goto label_32b9c0;
        case 0x32b9c4u: goto label_32b9c4;
        case 0x32b9c8u: goto label_32b9c8;
        case 0x32b9ccu: goto label_32b9cc;
        case 0x32b9d0u: goto label_32b9d0;
        case 0x32b9d4u: goto label_32b9d4;
        case 0x32b9d8u: goto label_32b9d8;
        case 0x32b9dcu: goto label_32b9dc;
        case 0x32b9e0u: goto label_32b9e0;
        case 0x32b9e4u: goto label_32b9e4;
        case 0x32b9e8u: goto label_32b9e8;
        case 0x32b9ecu: goto label_32b9ec;
        case 0x32b9f0u: goto label_32b9f0;
        case 0x32b9f4u: goto label_32b9f4;
        case 0x32b9f8u: goto label_32b9f8;
        case 0x32b9fcu: goto label_32b9fc;
        case 0x32ba00u: goto label_32ba00;
        case 0x32ba04u: goto label_32ba04;
        case 0x32ba08u: goto label_32ba08;
        case 0x32ba0cu: goto label_32ba0c;
        case 0x32ba10u: goto label_32ba10;
        case 0x32ba14u: goto label_32ba14;
        case 0x32ba18u: goto label_32ba18;
        case 0x32ba1cu: goto label_32ba1c;
        case 0x32ba20u: goto label_32ba20;
        case 0x32ba24u: goto label_32ba24;
        case 0x32ba28u: goto label_32ba28;
        case 0x32ba2cu: goto label_32ba2c;
        case 0x32ba30u: goto label_32ba30;
        case 0x32ba34u: goto label_32ba34;
        case 0x32ba38u: goto label_32ba38;
        case 0x32ba3cu: goto label_32ba3c;
        case 0x32ba40u: goto label_32ba40;
        case 0x32ba44u: goto label_32ba44;
        case 0x32ba48u: goto label_32ba48;
        case 0x32ba4cu: goto label_32ba4c;
        case 0x32ba50u: goto label_32ba50;
        case 0x32ba54u: goto label_32ba54;
        case 0x32ba58u: goto label_32ba58;
        case 0x32ba5cu: goto label_32ba5c;
        case 0x32ba60u: goto label_32ba60;
        case 0x32ba64u: goto label_32ba64;
        case 0x32ba68u: goto label_32ba68;
        case 0x32ba6cu: goto label_32ba6c;
        case 0x32ba70u: goto label_32ba70;
        case 0x32ba74u: goto label_32ba74;
        case 0x32ba78u: goto label_32ba78;
        case 0x32ba7cu: goto label_32ba7c;
        case 0x32ba80u: goto label_32ba80;
        case 0x32ba84u: goto label_32ba84;
        case 0x32ba88u: goto label_32ba88;
        case 0x32ba8cu: goto label_32ba8c;
        case 0x32ba90u: goto label_32ba90;
        case 0x32ba94u: goto label_32ba94;
        case 0x32ba98u: goto label_32ba98;
        case 0x32ba9cu: goto label_32ba9c;
        case 0x32baa0u: goto label_32baa0;
        case 0x32baa4u: goto label_32baa4;
        case 0x32baa8u: goto label_32baa8;
        case 0x32baacu: goto label_32baac;
        case 0x32bab0u: goto label_32bab0;
        case 0x32bab4u: goto label_32bab4;
        case 0x32bab8u: goto label_32bab8;
        case 0x32babcu: goto label_32babc;
        case 0x32bac0u: goto label_32bac0;
        case 0x32bac4u: goto label_32bac4;
        case 0x32bac8u: goto label_32bac8;
        case 0x32baccu: goto label_32bacc;
        case 0x32bad0u: goto label_32bad0;
        case 0x32bad4u: goto label_32bad4;
        case 0x32bad8u: goto label_32bad8;
        case 0x32badcu: goto label_32badc;
        case 0x32bae0u: goto label_32bae0;
        case 0x32bae4u: goto label_32bae4;
        case 0x32bae8u: goto label_32bae8;
        case 0x32baecu: goto label_32baec;
        case 0x32baf0u: goto label_32baf0;
        case 0x32baf4u: goto label_32baf4;
        case 0x32baf8u: goto label_32baf8;
        case 0x32bafcu: goto label_32bafc;
        case 0x32bb00u: goto label_32bb00;
        case 0x32bb04u: goto label_32bb04;
        case 0x32bb08u: goto label_32bb08;
        case 0x32bb0cu: goto label_32bb0c;
        case 0x32bb10u: goto label_32bb10;
        case 0x32bb14u: goto label_32bb14;
        case 0x32bb18u: goto label_32bb18;
        case 0x32bb1cu: goto label_32bb1c;
        case 0x32bb20u: goto label_32bb20;
        case 0x32bb24u: goto label_32bb24;
        case 0x32bb28u: goto label_32bb28;
        case 0x32bb2cu: goto label_32bb2c;
        case 0x32bb30u: goto label_32bb30;
        case 0x32bb34u: goto label_32bb34;
        case 0x32bb38u: goto label_32bb38;
        case 0x32bb3cu: goto label_32bb3c;
        case 0x32bb40u: goto label_32bb40;
        case 0x32bb44u: goto label_32bb44;
        case 0x32bb48u: goto label_32bb48;
        case 0x32bb4cu: goto label_32bb4c;
        case 0x32bb50u: goto label_32bb50;
        case 0x32bb54u: goto label_32bb54;
        case 0x32bb58u: goto label_32bb58;
        case 0x32bb5cu: goto label_32bb5c;
        case 0x32bb60u: goto label_32bb60;
        case 0x32bb64u: goto label_32bb64;
        case 0x32bb68u: goto label_32bb68;
        case 0x32bb6cu: goto label_32bb6c;
        case 0x32bb70u: goto label_32bb70;
        case 0x32bb74u: goto label_32bb74;
        case 0x32bb78u: goto label_32bb78;
        case 0x32bb7cu: goto label_32bb7c;
        case 0x32bb80u: goto label_32bb80;
        case 0x32bb84u: goto label_32bb84;
        case 0x32bb88u: goto label_32bb88;
        case 0x32bb8cu: goto label_32bb8c;
        case 0x32bb90u: goto label_32bb90;
        case 0x32bb94u: goto label_32bb94;
        case 0x32bb98u: goto label_32bb98;
        case 0x32bb9cu: goto label_32bb9c;
        case 0x32bba0u: goto label_32bba0;
        case 0x32bba4u: goto label_32bba4;
        case 0x32bba8u: goto label_32bba8;
        case 0x32bbacu: goto label_32bbac;
        case 0x32bbb0u: goto label_32bbb0;
        case 0x32bbb4u: goto label_32bbb4;
        case 0x32bbb8u: goto label_32bbb8;
        case 0x32bbbcu: goto label_32bbbc;
        case 0x32bbc0u: goto label_32bbc0;
        case 0x32bbc4u: goto label_32bbc4;
        case 0x32bbc8u: goto label_32bbc8;
        case 0x32bbccu: goto label_32bbcc;
        case 0x32bbd0u: goto label_32bbd0;
        case 0x32bbd4u: goto label_32bbd4;
        case 0x32bbd8u: goto label_32bbd8;
        case 0x32bbdcu: goto label_32bbdc;
        case 0x32bbe0u: goto label_32bbe0;
        case 0x32bbe4u: goto label_32bbe4;
        case 0x32bbe8u: goto label_32bbe8;
        case 0x32bbecu: goto label_32bbec;
        case 0x32bbf0u: goto label_32bbf0;
        case 0x32bbf4u: goto label_32bbf4;
        case 0x32bbf8u: goto label_32bbf8;
        case 0x32bbfcu: goto label_32bbfc;
        case 0x32bc00u: goto label_32bc00;
        case 0x32bc04u: goto label_32bc04;
        case 0x32bc08u: goto label_32bc08;
        case 0x32bc0cu: goto label_32bc0c;
        case 0x32bc10u: goto label_32bc10;
        case 0x32bc14u: goto label_32bc14;
        case 0x32bc18u: goto label_32bc18;
        case 0x32bc1cu: goto label_32bc1c;
        case 0x32bc20u: goto label_32bc20;
        case 0x32bc24u: goto label_32bc24;
        case 0x32bc28u: goto label_32bc28;
        case 0x32bc2cu: goto label_32bc2c;
        case 0x32bc30u: goto label_32bc30;
        case 0x32bc34u: goto label_32bc34;
        case 0x32bc38u: goto label_32bc38;
        case 0x32bc3cu: goto label_32bc3c;
        case 0x32bc40u: goto label_32bc40;
        case 0x32bc44u: goto label_32bc44;
        case 0x32bc48u: goto label_32bc48;
        case 0x32bc4cu: goto label_32bc4c;
        case 0x32bc50u: goto label_32bc50;
        case 0x32bc54u: goto label_32bc54;
        case 0x32bc58u: goto label_32bc58;
        case 0x32bc5cu: goto label_32bc5c;
        case 0x32bc60u: goto label_32bc60;
        case 0x32bc64u: goto label_32bc64;
        case 0x32bc68u: goto label_32bc68;
        case 0x32bc6cu: goto label_32bc6c;
        case 0x32bc70u: goto label_32bc70;
        case 0x32bc74u: goto label_32bc74;
        case 0x32bc78u: goto label_32bc78;
        case 0x32bc7cu: goto label_32bc7c;
        case 0x32bc80u: goto label_32bc80;
        case 0x32bc84u: goto label_32bc84;
        case 0x32bc88u: goto label_32bc88;
        case 0x32bc8cu: goto label_32bc8c;
        case 0x32bc90u: goto label_32bc90;
        case 0x32bc94u: goto label_32bc94;
        case 0x32bc98u: goto label_32bc98;
        case 0x32bc9cu: goto label_32bc9c;
        case 0x32bca0u: goto label_32bca0;
        case 0x32bca4u: goto label_32bca4;
        case 0x32bca8u: goto label_32bca8;
        case 0x32bcacu: goto label_32bcac;
        case 0x32bcb0u: goto label_32bcb0;
        case 0x32bcb4u: goto label_32bcb4;
        case 0x32bcb8u: goto label_32bcb8;
        case 0x32bcbcu: goto label_32bcbc;
        case 0x32bcc0u: goto label_32bcc0;
        case 0x32bcc4u: goto label_32bcc4;
        case 0x32bcc8u: goto label_32bcc8;
        case 0x32bcccu: goto label_32bccc;
        case 0x32bcd0u: goto label_32bcd0;
        case 0x32bcd4u: goto label_32bcd4;
        case 0x32bcd8u: goto label_32bcd8;
        case 0x32bcdcu: goto label_32bcdc;
        case 0x32bce0u: goto label_32bce0;
        case 0x32bce4u: goto label_32bce4;
        case 0x32bce8u: goto label_32bce8;
        case 0x32bcecu: goto label_32bcec;
        case 0x32bcf0u: goto label_32bcf0;
        case 0x32bcf4u: goto label_32bcf4;
        case 0x32bcf8u: goto label_32bcf8;
        case 0x32bcfcu: goto label_32bcfc;
        case 0x32bd00u: goto label_32bd00;
        case 0x32bd04u: goto label_32bd04;
        case 0x32bd08u: goto label_32bd08;
        case 0x32bd0cu: goto label_32bd0c;
        case 0x32bd10u: goto label_32bd10;
        case 0x32bd14u: goto label_32bd14;
        case 0x32bd18u: goto label_32bd18;
        case 0x32bd1cu: goto label_32bd1c;
        case 0x32bd20u: goto label_32bd20;
        case 0x32bd24u: goto label_32bd24;
        case 0x32bd28u: goto label_32bd28;
        case 0x32bd2cu: goto label_32bd2c;
        case 0x32bd30u: goto label_32bd30;
        case 0x32bd34u: goto label_32bd34;
        case 0x32bd38u: goto label_32bd38;
        case 0x32bd3cu: goto label_32bd3c;
        case 0x32bd40u: goto label_32bd40;
        case 0x32bd44u: goto label_32bd44;
        case 0x32bd48u: goto label_32bd48;
        case 0x32bd4cu: goto label_32bd4c;
        case 0x32bd50u: goto label_32bd50;
        case 0x32bd54u: goto label_32bd54;
        case 0x32bd58u: goto label_32bd58;
        case 0x32bd5cu: goto label_32bd5c;
        case 0x32bd60u: goto label_32bd60;
        case 0x32bd64u: goto label_32bd64;
        case 0x32bd68u: goto label_32bd68;
        case 0x32bd6cu: goto label_32bd6c;
        case 0x32bd70u: goto label_32bd70;
        case 0x32bd74u: goto label_32bd74;
        case 0x32bd78u: goto label_32bd78;
        case 0x32bd7cu: goto label_32bd7c;
        case 0x32bd80u: goto label_32bd80;
        case 0x32bd84u: goto label_32bd84;
        case 0x32bd88u: goto label_32bd88;
        case 0x32bd8cu: goto label_32bd8c;
        case 0x32bd90u: goto label_32bd90;
        case 0x32bd94u: goto label_32bd94;
        case 0x32bd98u: goto label_32bd98;
        case 0x32bd9cu: goto label_32bd9c;
        case 0x32bda0u: goto label_32bda0;
        case 0x32bda4u: goto label_32bda4;
        case 0x32bda8u: goto label_32bda8;
        case 0x32bdacu: goto label_32bdac;
        case 0x32bdb0u: goto label_32bdb0;
        case 0x32bdb4u: goto label_32bdb4;
        case 0x32bdb8u: goto label_32bdb8;
        case 0x32bdbcu: goto label_32bdbc;
        case 0x32bdc0u: goto label_32bdc0;
        case 0x32bdc4u: goto label_32bdc4;
        case 0x32bdc8u: goto label_32bdc8;
        case 0x32bdccu: goto label_32bdcc;
        case 0x32bdd0u: goto label_32bdd0;
        case 0x32bdd4u: goto label_32bdd4;
        case 0x32bdd8u: goto label_32bdd8;
        case 0x32bddcu: goto label_32bddc;
        case 0x32bde0u: goto label_32bde0;
        case 0x32bde4u: goto label_32bde4;
        case 0x32bde8u: goto label_32bde8;
        case 0x32bdecu: goto label_32bdec;
        case 0x32bdf0u: goto label_32bdf0;
        case 0x32bdf4u: goto label_32bdf4;
        case 0x32bdf8u: goto label_32bdf8;
        case 0x32bdfcu: goto label_32bdfc;
        case 0x32be00u: goto label_32be00;
        case 0x32be04u: goto label_32be04;
        case 0x32be08u: goto label_32be08;
        case 0x32be0cu: goto label_32be0c;
        case 0x32be10u: goto label_32be10;
        case 0x32be14u: goto label_32be14;
        case 0x32be18u: goto label_32be18;
        case 0x32be1cu: goto label_32be1c;
        case 0x32be20u: goto label_32be20;
        case 0x32be24u: goto label_32be24;
        case 0x32be28u: goto label_32be28;
        case 0x32be2cu: goto label_32be2c;
        case 0x32be30u: goto label_32be30;
        case 0x32be34u: goto label_32be34;
        case 0x32be38u: goto label_32be38;
        case 0x32be3cu: goto label_32be3c;
        case 0x32be40u: goto label_32be40;
        case 0x32be44u: goto label_32be44;
        case 0x32be48u: goto label_32be48;
        case 0x32be4cu: goto label_32be4c;
        case 0x32be50u: goto label_32be50;
        case 0x32be54u: goto label_32be54;
        case 0x32be58u: goto label_32be58;
        case 0x32be5cu: goto label_32be5c;
        case 0x32be60u: goto label_32be60;
        case 0x32be64u: goto label_32be64;
        case 0x32be68u: goto label_32be68;
        case 0x32be6cu: goto label_32be6c;
        case 0x32be70u: goto label_32be70;
        case 0x32be74u: goto label_32be74;
        case 0x32be78u: goto label_32be78;
        case 0x32be7cu: goto label_32be7c;
        case 0x32be80u: goto label_32be80;
        case 0x32be84u: goto label_32be84;
        case 0x32be88u: goto label_32be88;
        case 0x32be8cu: goto label_32be8c;
        case 0x32be90u: goto label_32be90;
        case 0x32be94u: goto label_32be94;
        case 0x32be98u: goto label_32be98;
        case 0x32be9cu: goto label_32be9c;
        case 0x32bea0u: goto label_32bea0;
        case 0x32bea4u: goto label_32bea4;
        default: break;
    }

    ctx->pc = 0x329b70u;

label_329b70:
    // 0x329b70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x329b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_329b74:
    // 0x329b74: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x329b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_329b78:
    // 0x329b78: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x329b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_329b7c:
    // 0x329b7c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x329b7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329b80:
    // 0x329b80: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x329b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_329b84:
    // 0x329b84: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x329b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_329b88:
    // 0x329b88: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x329b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_329b8c:
    // 0x329b8c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x329b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_329b90:
    // 0x329b90: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x329b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
label_329b94:
    // 0x329b94: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x329b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
label_329b98:
    // 0x329b98: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x329b98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_329b9c:
    // 0x329b9c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x329b9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_329ba0:
    // 0x329ba0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x329ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_329ba4:
    // 0x329ba4: 0x8ec20484  lw          $v0, 0x484($s6)
    ctx->pc = 0x329ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1156)));
label_329ba8:
    // 0x329ba8: 0x2444feb3  addiu       $a0, $v0, -0x14D
    ctx->pc = 0x329ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966963));
label_329bac:
    // 0x329bac: 0x2c83008d  sltiu       $v1, $a0, 0x8D
    ctx->pc = 0x329bacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)141) ? 1 : 0);
label_329bb0:
    // 0x329bb0: 0x106008af  beqz        $v1, . + 4 + (0x8AF << 2)
label_329bb4:
    if (ctx->pc == 0x329BB4u) {
        ctx->pc = 0x329BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BB0u;
        // 0x329bb4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BB8u;
        goto label_329bb8;
    }
    ctx->pc = 0x329BB0u;
    {
        const bool branch_taken_0x329bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BB0u;
        // 0x329bb4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bb0) {
            ctx->pc = 0x32BE70u;
            goto label_32be70;
        }
    }
    ctx->pc = 0x329BB8u;
label_329bb8:
    // 0x329bb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x329bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_329bbc:
    // 0x329bbc: 0x24424c70  addiu       $v0, $v0, 0x4C70
    ctx->pc = 0x329bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19568));
label_329bc0:
    // 0x329bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329bc4:
    // 0x329bc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x329bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_329bc8:
    // 0x329bc8: 0x800008  jr          $a0
label_329bcc:
    if (ctx->pc == 0x329BCCu) {
        ctx->pc = 0x329BD0u;
        goto label_329bd0;
    }
    ctx->pc = 0x329BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x329BD0u: goto label_329bd0;
            case 0x329BF8u: goto label_329bf8;
            case 0x329C20u: goto label_329c20;
            case 0x329C48u: goto label_329c48;
            case 0x329C88u: goto label_329c88;
            case 0x329CC8u: goto label_329cc8;
            case 0x329D20u: goto label_329d20;
            case 0x329D60u: goto label_329d60;
            case 0x329DA0u: goto label_329da0;
            case 0x329DE0u: goto label_329de0;
            case 0x329E38u: goto label_329e38;
            case 0x329E90u: goto label_329e90;
            case 0x329EF0u: goto label_329ef0;
            case 0x329F70u: goto label_329f70;
            case 0x329F98u: goto label_329f98;
            case 0x329FD0u: goto label_329fd0;
            case 0x32A020u: goto label_32a020;
            case 0x32A070u: goto label_32a070;
            case 0x32A0C0u: goto label_32a0c0;
            case 0x32A140u: goto label_32a140;
            case 0x32A198u: goto label_32a198;
            case 0x32A1D8u: goto label_32a1d8;
            case 0x32A218u: goto label_32a218;
            case 0x32A258u: goto label_32a258;
            case 0x32A280u: goto label_32a280;
            case 0x32A2DCu: goto label_32a2dc;
            case 0x32A304u: goto label_32a304;
            case 0x32A32Cu: goto label_32a32c;
            case 0x32A3B8u: goto label_32a3b8;
            case 0x32A458u: goto label_32a458;
            case 0x32A4B4u: goto label_32a4b4;
            case 0x32A524u: goto label_32a524;
            case 0x32A574u: goto label_32a574;
            case 0x32A59Cu: goto label_32a59c;
            case 0x32A608u: goto label_32a608;
            case 0x32A648u: goto label_32a648;
            case 0x32A688u: goto label_32a688;
            case 0x32A6D0u: goto label_32a6d0;
            case 0x32A738u: goto label_32a738;
            case 0x32A770u: goto label_32a770;
            case 0x32A7C0u: goto label_32a7c0;
            case 0x32A800u: goto label_32a800;
            case 0x32A83Cu: goto label_32a83c;
            case 0x32A89Cu: goto label_32a89c;
            case 0x32A8F4u: goto label_32a8f4;
            case 0x32A94Cu: goto label_32a94c;
            case 0x32A9B8u: goto label_32a9b8;
            case 0x32AA18u: goto label_32aa18;
            case 0x32AA4Cu: goto label_32aa4c;
            case 0x32AA80u: goto label_32aa80;
            case 0x32AAE4u: goto label_32aae4;
            case 0x32AB00u: goto label_32ab00;
            case 0x32AB1Cu: goto label_32ab1c;
            case 0x32AB68u: goto label_32ab68;
            case 0x32AC00u: goto label_32ac00;
            case 0x32AC68u: goto label_32ac68;
            case 0x32ACA8u: goto label_32aca8;
            case 0x32ACE0u: goto label_32ace0;
            case 0x32AD18u: goto label_32ad18;
            case 0x32AD68u: goto label_32ad68;
            case 0x32ADC4u: goto label_32adc4;
            case 0x32AFF0u: goto label_32aff0;
            case 0x32B074u: goto label_32b074;
            case 0x32B10Cu: goto label_32b10c;
            case 0x32B16Cu: goto label_32b16c;
            case 0x32B1DCu: goto label_32b1dc;
            case 0x32B214u: goto label_32b214;
            case 0x32B23Cu: goto label_32b23c;
            case 0x32B288u: goto label_32b288;
            case 0x32B2FCu: goto label_32b2fc;
            case 0x32B338u: goto label_32b338;
            case 0x32B37Cu: goto label_32b37c;
            case 0x32B40Cu: goto label_32b40c;
            case 0x32B498u: goto label_32b498;
            case 0x32B54Cu: goto label_32b54c;
            case 0x32B58Cu: goto label_32b58c;
            case 0x32B5DCu: goto label_32b5dc;
            case 0x32B624u: goto label_32b624;
            case 0x32B670u: goto label_32b670;
            case 0x32B704u: goto label_32b704;
            case 0x32B798u: goto label_32b798;
            case 0x32B7ACu: goto label_32b7ac;
            case 0x32B7F8u: goto label_32b7f8;
            case 0x32B858u: goto label_32b858;
            case 0x32B8CCu: goto label_32b8cc;
            case 0x32B954u: goto label_32b954;
            case 0x32B97Cu: goto label_32b97c;
            case 0x32B9ACu: goto label_32b9ac;
            case 0x32B9E0u: goto label_32b9e0;
            case 0x32BA50u: goto label_32ba50;
            case 0x32BA88u: goto label_32ba88;
            case 0x32BAB4u: goto label_32bab4;
            case 0x32BB00u: goto label_32bb00;
            case 0x32BB4Cu: goto label_32bb4c;
            case 0x32BB98u: goto label_32bb98;
            case 0x32BBD8u: goto label_32bbd8;
            case 0x32BC28u: goto label_32bc28;
            case 0x32BC78u: goto label_32bc78;
            case 0x32BCC8u: goto label_32bcc8;
            case 0x32BD08u: goto label_32bd08;
            case 0x32BD94u: goto label_32bd94;
            case 0x32BE38u: goto label_32be38;
            case 0x32BE70u: goto label_32be70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329BC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x329BD0u;
label_329bd0:
    // 0x329bd0: 0xc0cdf2e  jal         func_337CB8
label_329bd4:
    if (ctx->pc == 0x329BD4u) {
        ctx->pc = 0x329BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BD0u;
        // 0x329bd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BD8u;
        goto label_329bd8;
    }
    ctx->pc = 0x329BD0u;
    SET_GPR_U32(ctx, 31, 0x329BD8u);
    ctx->pc = 0x329BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329BD0u;
    // 0x329bd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329BD0u, 0x329BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329BD8u;
label_329bd8:
    // 0x329bd8: 0xc0cdf52  jal         func_337D48
label_329bdc:
    if (ctx->pc == 0x329BDCu) {
        ctx->pc = 0x329BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BD8u;
        // 0x329bdc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BE0u;
        goto label_329be0;
    }
    ctx->pc = 0x329BD8u;
    SET_GPR_U32(ctx, 31, 0x329BE0u);
    ctx->pc = 0x329BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329BD8u;
    // 0x329bdc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329BD8u, 0x329BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329BE0u;
label_329be0:
    // 0x329be0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329be4:
    // 0x329be4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329be8:
    // 0x329be8: 0xc0484fc  jal         func_1213F0
label_329bec:
    if (ctx->pc == 0x329BECu) {
        ctx->pc = 0x329BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BE8u;
        // 0x329bec: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BF0u;
        goto label_329bf0;
    }
    ctx->pc = 0x329BE8u;
    SET_GPR_U32(ctx, 31, 0x329BF0u);
    ctx->pc = 0x329BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329BE8u;
    // 0x329bec: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213F0u, 0x329BE8u, 0x329BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329BF0u;
label_329bf0:
    // 0x329bf0: 0x1000088a  b           . + 4 + (0x88A << 2)
label_329bf4:
    if (ctx->pc == 0x329BF4u) {
        ctx->pc = 0x329BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BF0u;
        // 0x329bf4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BF8u;
        goto label_329bf8;
    }
    ctx->pc = 0x329BF0u;
    {
        const bool branch_taken_0x329bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BF0u;
        // 0x329bf4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bf0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329BF8u;
label_329bf8:
    // 0x329bf8: 0xc0cdf2e  jal         func_337CB8
label_329bfc:
    if (ctx->pc == 0x329BFCu) {
        ctx->pc = 0x329BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BF8u;
        // 0x329bfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C00u;
        goto label_329c00;
    }
    ctx->pc = 0x329BF8u;
    SET_GPR_U32(ctx, 31, 0x329C00u);
    ctx->pc = 0x329BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329BF8u;
    // 0x329bfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329BF8u, 0x329C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C00u;
label_329c00:
    // 0x329c00: 0xc0cdf52  jal         func_337D48
label_329c04:
    if (ctx->pc == 0x329C04u) {
        ctx->pc = 0x329C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C00u;
        // 0x329c04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C08u;
        goto label_329c08;
    }
    ctx->pc = 0x329C00u;
    SET_GPR_U32(ctx, 31, 0x329C08u);
    ctx->pc = 0x329C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C00u;
    // 0x329c04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329C00u, 0x329C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C08u;
label_329c08:
    // 0x329c08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329c0c:
    // 0x329c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329c10:
    // 0x329c10: 0xc048512  jal         func_121448
label_329c14:
    if (ctx->pc == 0x329C14u) {
        ctx->pc = 0x329C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C10u;
        // 0x329c14: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C18u;
        goto label_329c18;
    }
    ctx->pc = 0x329C10u;
    SET_GPR_U32(ctx, 31, 0x329C18u);
    ctx->pc = 0x329C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C10u;
    // 0x329c14: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121448u, 0x329C10u, 0x329C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C18u;
label_329c18:
    // 0x329c18: 0x10000880  b           . + 4 + (0x880 << 2)
label_329c1c:
    if (ctx->pc == 0x329C1Cu) {
        ctx->pc = 0x329C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C18u;
        // 0x329c1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C20u;
        goto label_329c20;
    }
    ctx->pc = 0x329C18u;
    {
        const bool branch_taken_0x329c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C18u;
        // 0x329c1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c18) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329C20u;
label_329c20:
    // 0x329c20: 0xc0cdf2e  jal         func_337CB8
label_329c24:
    if (ctx->pc == 0x329C24u) {
        ctx->pc = 0x329C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C20u;
        // 0x329c24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C28u;
        goto label_329c28;
    }
    ctx->pc = 0x329C20u;
    SET_GPR_U32(ctx, 31, 0x329C28u);
    ctx->pc = 0x329C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C20u;
    // 0x329c24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329C20u, 0x329C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C28u;
label_329c28:
    // 0x329c28: 0xc0cdf52  jal         func_337D48
label_329c2c:
    if (ctx->pc == 0x329C2Cu) {
        ctx->pc = 0x329C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C28u;
        // 0x329c2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C30u;
        goto label_329c30;
    }
    ctx->pc = 0x329C28u;
    SET_GPR_U32(ctx, 31, 0x329C30u);
    ctx->pc = 0x329C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C28u;
    // 0x329c2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329C28u, 0x329C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C30u;
label_329c30:
    // 0x329c30: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329c34:
    // 0x329c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329c38:
    // 0x329c38: 0xc048526  jal         func_121498
label_329c3c:
    if (ctx->pc == 0x329C3Cu) {
        ctx->pc = 0x329C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C38u;
        // 0x329c3c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C40u;
        goto label_329c40;
    }
    ctx->pc = 0x329C38u;
    SET_GPR_U32(ctx, 31, 0x329C40u);
    ctx->pc = 0x329C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C38u;
    // 0x329c3c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121498u, 0x329C38u, 0x329C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C40u;
label_329c40:
    // 0x329c40: 0x10000876  b           . + 4 + (0x876 << 2)
label_329c44:
    if (ctx->pc == 0x329C44u) {
        ctx->pc = 0x329C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C40u;
        // 0x329c44: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C48u;
        goto label_329c48;
    }
    ctx->pc = 0x329C40u;
    {
        const bool branch_taken_0x329c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C40u;
        // 0x329c44: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c40) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329C48u;
label_329c48:
    // 0x329c48: 0xc0cdf2e  jal         func_337CB8
label_329c4c:
    if (ctx->pc == 0x329C4Cu) {
        ctx->pc = 0x329C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C48u;
        // 0x329c4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C50u;
        goto label_329c50;
    }
    ctx->pc = 0x329C48u;
    SET_GPR_U32(ctx, 31, 0x329C50u);
    ctx->pc = 0x329C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C48u;
    // 0x329c4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329C48u, 0x329C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C50u;
label_329c50:
    // 0x329c50: 0xc0cdf52  jal         func_337D48
label_329c54:
    if (ctx->pc == 0x329C54u) {
        ctx->pc = 0x329C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C50u;
        // 0x329c54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C58u;
        goto label_329c58;
    }
    ctx->pc = 0x329C50u;
    SET_GPR_U32(ctx, 31, 0x329C58u);
    ctx->pc = 0x329C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C50u;
    // 0x329c54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329C50u, 0x329C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C58u;
label_329c58:
    // 0x329c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329c5c:
    // 0x329c5c: 0xc0cdf2e  jal         func_337CB8
label_329c60:
    if (ctx->pc == 0x329C60u) {
        ctx->pc = 0x329C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C5Cu;
        // 0x329c60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C64u;
        goto label_329c64;
    }
    ctx->pc = 0x329C5Cu;
    SET_GPR_U32(ctx, 31, 0x329C64u);
    ctx->pc = 0x329C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C5Cu;
    // 0x329c60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329C5Cu, 0x329C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C64u;
label_329c64:
    // 0x329c64: 0xc0cdf52  jal         func_337D48
label_329c68:
    if (ctx->pc == 0x329C68u) {
        ctx->pc = 0x329C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C64u;
        // 0x329c68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C6Cu;
        goto label_329c6c;
    }
    ctx->pc = 0x329C64u;
    SET_GPR_U32(ctx, 31, 0x329C6Cu);
    ctx->pc = 0x329C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C64u;
    // 0x329c68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329C64u, 0x329C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C6Cu;
label_329c6c:
    // 0x329c6c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329c70:
    // 0x329c70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329c74:
    // 0x329c74: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329c78:
    // 0x329c78: 0xc04853a  jal         func_1214E8
label_329c7c:
    if (ctx->pc == 0x329C7Cu) {
        ctx->pc = 0x329C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C78u;
        // 0x329c7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C80u;
        goto label_329c80;
    }
    ctx->pc = 0x329C78u;
    SET_GPR_U32(ctx, 31, 0x329C80u);
    ctx->pc = 0x329C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C78u;
    // 0x329c7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1214E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1214E8u, 0x329C78u, 0x329C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C80u;
label_329c80:
    // 0x329c80: 0x10000866  b           . + 4 + (0x866 << 2)
label_329c84:
    if (ctx->pc == 0x329C84u) {
        ctx->pc = 0x329C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C80u;
        // 0x329c84: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C88u;
        goto label_329c88;
    }
    ctx->pc = 0x329C80u;
    {
        const bool branch_taken_0x329c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C80u;
        // 0x329c84: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c80) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329C88u;
label_329c88:
    // 0x329c88: 0xc0cdf2e  jal         func_337CB8
label_329c8c:
    if (ctx->pc == 0x329C8Cu) {
        ctx->pc = 0x329C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C88u;
        // 0x329c8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C90u;
        goto label_329c90;
    }
    ctx->pc = 0x329C88u;
    SET_GPR_U32(ctx, 31, 0x329C90u);
    ctx->pc = 0x329C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C88u;
    // 0x329c8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329C88u, 0x329C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C90u;
label_329c90:
    // 0x329c90: 0xc0cdf52  jal         func_337D48
label_329c94:
    if (ctx->pc == 0x329C94u) {
        ctx->pc = 0x329C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C90u;
        // 0x329c94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C98u;
        goto label_329c98;
    }
    ctx->pc = 0x329C90u;
    SET_GPR_U32(ctx, 31, 0x329C98u);
    ctx->pc = 0x329C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C90u;
    // 0x329c94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329C90u, 0x329C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C98u;
label_329c98:
    // 0x329c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329c9c:
    // 0x329c9c: 0xc0cdf2e  jal         func_337CB8
label_329ca0:
    if (ctx->pc == 0x329CA0u) {
        ctx->pc = 0x329CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C9Cu;
        // 0x329ca0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CA4u;
        goto label_329ca4;
    }
    ctx->pc = 0x329C9Cu;
    SET_GPR_U32(ctx, 31, 0x329CA4u);
    ctx->pc = 0x329CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C9Cu;
    // 0x329ca0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329C9Cu, 0x329CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CA4u;
label_329ca4:
    // 0x329ca4: 0xc0cdf52  jal         func_337D48
label_329ca8:
    if (ctx->pc == 0x329CA8u) {
        ctx->pc = 0x329CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CA4u;
        // 0x329ca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CACu;
        goto label_329cac;
    }
    ctx->pc = 0x329CA4u;
    SET_GPR_U32(ctx, 31, 0x329CACu);
    ctx->pc = 0x329CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CA4u;
    // 0x329ca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329CA4u, 0x329CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CACu;
label_329cac:
    // 0x329cac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329cb0:
    // 0x329cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329cb4:
    // 0x329cb4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329cb8:
    // 0x329cb8: 0xc048556  jal         func_121558
label_329cbc:
    if (ctx->pc == 0x329CBCu) {
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CC0u;
        goto label_329cc0;
    }
    ctx->pc = 0x329CB8u;
    SET_GPR_U32(ctx, 31, 0x329CC0u);
    ctx->pc = 0x329CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CB8u;
    // 0x329cbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121558u, 0x329CB8u, 0x329CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CC0u;
label_329cc0:
    // 0x329cc0: 0x10000856  b           . + 4 + (0x856 << 2)
label_329cc4:
    if (ctx->pc == 0x329CC4u) {
        ctx->pc = 0x329CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CC0u;
        // 0x329cc4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CC8u;
        goto label_329cc8;
    }
    ctx->pc = 0x329CC0u;
    {
        const bool branch_taken_0x329cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CC0u;
        // 0x329cc4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cc0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329CC8u;
label_329cc8:
    // 0x329cc8: 0xc0cdf2e  jal         func_337CB8
label_329ccc:
    if (ctx->pc == 0x329CCCu) {
        ctx->pc = 0x329CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CC8u;
        // 0x329ccc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CD0u;
        goto label_329cd0;
    }
    ctx->pc = 0x329CC8u;
    SET_GPR_U32(ctx, 31, 0x329CD0u);
    ctx->pc = 0x329CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CC8u;
    // 0x329ccc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329CC8u, 0x329CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CD0u;
label_329cd0:
    // 0x329cd0: 0xc0cdf52  jal         func_337D48
label_329cd4:
    if (ctx->pc == 0x329CD4u) {
        ctx->pc = 0x329CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CD0u;
        // 0x329cd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CD8u;
        goto label_329cd8;
    }
    ctx->pc = 0x329CD0u;
    SET_GPR_U32(ctx, 31, 0x329CD8u);
    ctx->pc = 0x329CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CD0u;
    // 0x329cd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329CD0u, 0x329CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CD8u;
label_329cd8:
    // 0x329cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329cdc:
    // 0x329cdc: 0xc0cdf2e  jal         func_337CB8
label_329ce0:
    if (ctx->pc == 0x329CE0u) {
        ctx->pc = 0x329CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CDCu;
        // 0x329ce0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CE4u;
        goto label_329ce4;
    }
    ctx->pc = 0x329CDCu;
    SET_GPR_U32(ctx, 31, 0x329CE4u);
    ctx->pc = 0x329CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CDCu;
    // 0x329ce0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329CDCu, 0x329CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CE4u;
label_329ce4:
    // 0x329ce4: 0xc0cdf52  jal         func_337D48
label_329ce8:
    if (ctx->pc == 0x329CE8u) {
        ctx->pc = 0x329CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CE4u;
        // 0x329ce8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CECu;
        goto label_329cec;
    }
    ctx->pc = 0x329CE4u;
    SET_GPR_U32(ctx, 31, 0x329CECu);
    ctx->pc = 0x329CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CE4u;
    // 0x329ce8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329CE4u, 0x329CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CECu;
label_329cec:
    // 0x329cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329cf0:
    // 0x329cf0: 0xc0cdf2e  jal         func_337CB8
label_329cf4:
    if (ctx->pc == 0x329CF4u) {
        ctx->pc = 0x329CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CF0u;
        // 0x329cf4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CF8u;
        goto label_329cf8;
    }
    ctx->pc = 0x329CF0u;
    SET_GPR_U32(ctx, 31, 0x329CF8u);
    ctx->pc = 0x329CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CF0u;
    // 0x329cf4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329CF0u, 0x329CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CF8u;
label_329cf8:
    // 0x329cf8: 0xc0cdf52  jal         func_337D48
label_329cfc:
    if (ctx->pc == 0x329CFCu) {
        ctx->pc = 0x329CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CF8u;
        // 0x329cfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D00u;
        goto label_329d00;
    }
    ctx->pc = 0x329CF8u;
    SET_GPR_U32(ctx, 31, 0x329D00u);
    ctx->pc = 0x329CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CF8u;
    // 0x329cfc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329CF8u, 0x329D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D00u;
label_329d00:
    // 0x329d00: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329d04:
    // 0x329d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329d08:
    // 0x329d08: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329d0c:
    // 0x329d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329d10:
    // 0x329d10: 0xc048572  jal         func_1215C8
label_329d14:
    if (ctx->pc == 0x329D14u) {
        ctx->pc = 0x329D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D10u;
        // 0x329d14: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D18u;
        goto label_329d18;
    }
    ctx->pc = 0x329D10u;
    SET_GPR_U32(ctx, 31, 0x329D18u);
    ctx->pc = 0x329D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D10u;
    // 0x329d14: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215C8u, 0x329D10u, 0x329D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D18u;
label_329d18:
    // 0x329d18: 0x10000840  b           . + 4 + (0x840 << 2)
label_329d1c:
    if (ctx->pc == 0x329D1Cu) {
        ctx->pc = 0x329D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D18u;
        // 0x329d1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D20u;
        goto label_329d20;
    }
    ctx->pc = 0x329D18u;
    {
        const bool branch_taken_0x329d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D18u;
        // 0x329d1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d18) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329D20u;
label_329d20:
    // 0x329d20: 0xc0cdf2e  jal         func_337CB8
label_329d24:
    if (ctx->pc == 0x329D24u) {
        ctx->pc = 0x329D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D20u;
        // 0x329d24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D28u;
        goto label_329d28;
    }
    ctx->pc = 0x329D20u;
    SET_GPR_U32(ctx, 31, 0x329D28u);
    ctx->pc = 0x329D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D20u;
    // 0x329d24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329D20u, 0x329D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D28u;
label_329d28:
    // 0x329d28: 0xc0cdf52  jal         func_337D48
label_329d2c:
    if (ctx->pc == 0x329D2Cu) {
        ctx->pc = 0x329D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D28u;
        // 0x329d2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D30u;
        goto label_329d30;
    }
    ctx->pc = 0x329D28u;
    SET_GPR_U32(ctx, 31, 0x329D30u);
    ctx->pc = 0x329D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D28u;
    // 0x329d2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329D28u, 0x329D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D30u;
label_329d30:
    // 0x329d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329d34:
    // 0x329d34: 0xc0cdf2e  jal         func_337CB8
label_329d38:
    if (ctx->pc == 0x329D38u) {
        ctx->pc = 0x329D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D34u;
        // 0x329d38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D3Cu;
        goto label_329d3c;
    }
    ctx->pc = 0x329D34u;
    SET_GPR_U32(ctx, 31, 0x329D3Cu);
    ctx->pc = 0x329D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D34u;
    // 0x329d38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329D34u, 0x329D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D3Cu;
label_329d3c:
    // 0x329d3c: 0xc0cdf52  jal         func_337D48
label_329d40:
    if (ctx->pc == 0x329D40u) {
        ctx->pc = 0x329D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D3Cu;
        // 0x329d40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D44u;
        goto label_329d44;
    }
    ctx->pc = 0x329D3Cu;
    SET_GPR_U32(ctx, 31, 0x329D44u);
    ctx->pc = 0x329D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D3Cu;
    // 0x329d40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329D3Cu, 0x329D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D44u;
label_329d44:
    // 0x329d44: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329d48:
    // 0x329d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329d4c:
    // 0x329d4c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329d50:
    // 0x329d50: 0xc048596  jal         func_121658
label_329d54:
    if (ctx->pc == 0x329D54u) {
        ctx->pc = 0x329D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D50u;
        // 0x329d54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D58u;
        goto label_329d58;
    }
    ctx->pc = 0x329D50u;
    SET_GPR_U32(ctx, 31, 0x329D58u);
    ctx->pc = 0x329D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D50u;
    // 0x329d54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121658u, 0x329D50u, 0x329D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D58u;
label_329d58:
    // 0x329d58: 0x10000830  b           . + 4 + (0x830 << 2)
label_329d5c:
    if (ctx->pc == 0x329D5Cu) {
        ctx->pc = 0x329D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D58u;
        // 0x329d5c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D60u;
        goto label_329d60;
    }
    ctx->pc = 0x329D58u;
    {
        const bool branch_taken_0x329d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D58u;
        // 0x329d5c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d58) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329D60u;
label_329d60:
    // 0x329d60: 0xc0cdf2e  jal         func_337CB8
label_329d64:
    if (ctx->pc == 0x329D64u) {
        ctx->pc = 0x329D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D60u;
        // 0x329d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D68u;
        goto label_329d68;
    }
    ctx->pc = 0x329D60u;
    SET_GPR_U32(ctx, 31, 0x329D68u);
    ctx->pc = 0x329D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D60u;
    // 0x329d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329D60u, 0x329D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D68u;
label_329d68:
    // 0x329d68: 0xc0cdf52  jal         func_337D48
label_329d6c:
    if (ctx->pc == 0x329D6Cu) {
        ctx->pc = 0x329D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D68u;
        // 0x329d6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D70u;
        goto label_329d70;
    }
    ctx->pc = 0x329D68u;
    SET_GPR_U32(ctx, 31, 0x329D70u);
    ctx->pc = 0x329D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D68u;
    // 0x329d6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329D68u, 0x329D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D70u;
label_329d70:
    // 0x329d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329d74:
    // 0x329d74: 0xc0cdf2e  jal         func_337CB8
label_329d78:
    if (ctx->pc == 0x329D78u) {
        ctx->pc = 0x329D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D74u;
        // 0x329d78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D7Cu;
        goto label_329d7c;
    }
    ctx->pc = 0x329D74u;
    SET_GPR_U32(ctx, 31, 0x329D7Cu);
    ctx->pc = 0x329D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D74u;
    // 0x329d78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329D74u, 0x329D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D7Cu;
label_329d7c:
    // 0x329d7c: 0xc0cdf52  jal         func_337D48
label_329d80:
    if (ctx->pc == 0x329D80u) {
        ctx->pc = 0x329D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D7Cu;
        // 0x329d80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D84u;
        goto label_329d84;
    }
    ctx->pc = 0x329D7Cu;
    SET_GPR_U32(ctx, 31, 0x329D84u);
    ctx->pc = 0x329D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D7Cu;
    // 0x329d80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329D7Cu, 0x329D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D84u;
label_329d84:
    // 0x329d84: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329d88:
    // 0x329d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329d8c:
    // 0x329d8c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329d90:
    // 0x329d90: 0xc0485b2  jal         func_1216C8
label_329d94:
    if (ctx->pc == 0x329D94u) {
        ctx->pc = 0x329D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D90u;
        // 0x329d94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D98u;
        goto label_329d98;
    }
    ctx->pc = 0x329D90u;
    SET_GPR_U32(ctx, 31, 0x329D98u);
    ctx->pc = 0x329D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D90u;
    // 0x329d94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216C8u, 0x329D90u, 0x329D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D98u;
label_329d98:
    // 0x329d98: 0x10000820  b           . + 4 + (0x820 << 2)
label_329d9c:
    if (ctx->pc == 0x329D9Cu) {
        ctx->pc = 0x329D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D98u;
        // 0x329d9c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DA0u;
        goto label_329da0;
    }
    ctx->pc = 0x329D98u;
    {
        const bool branch_taken_0x329d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D98u;
        // 0x329d9c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d98) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329DA0u;
label_329da0:
    // 0x329da0: 0xc0cdf2e  jal         func_337CB8
label_329da4:
    if (ctx->pc == 0x329DA4u) {
        ctx->pc = 0x329DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DA0u;
        // 0x329da4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DA8u;
        goto label_329da8;
    }
    ctx->pc = 0x329DA0u;
    SET_GPR_U32(ctx, 31, 0x329DA8u);
    ctx->pc = 0x329DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DA0u;
    // 0x329da4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329DA0u, 0x329DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DA8u;
label_329da8:
    // 0x329da8: 0xc0cdf52  jal         func_337D48
label_329dac:
    if (ctx->pc == 0x329DACu) {
        ctx->pc = 0x329DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DA8u;
        // 0x329dac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DB0u;
        goto label_329db0;
    }
    ctx->pc = 0x329DA8u;
    SET_GPR_U32(ctx, 31, 0x329DB0u);
    ctx->pc = 0x329DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DA8u;
    // 0x329dac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329DA8u, 0x329DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DB0u;
label_329db0:
    // 0x329db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329db4:
    // 0x329db4: 0xc0cdf2e  jal         func_337CB8
label_329db8:
    if (ctx->pc == 0x329DB8u) {
        ctx->pc = 0x329DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DB4u;
        // 0x329db8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DBCu;
        goto label_329dbc;
    }
    ctx->pc = 0x329DB4u;
    SET_GPR_U32(ctx, 31, 0x329DBCu);
    ctx->pc = 0x329DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DB4u;
    // 0x329db8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329DB4u, 0x329DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DBCu;
label_329dbc:
    // 0x329dbc: 0xc0cdf52  jal         func_337D48
label_329dc0:
    if (ctx->pc == 0x329DC0u) {
        ctx->pc = 0x329DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DBCu;
        // 0x329dc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DC4u;
        goto label_329dc4;
    }
    ctx->pc = 0x329DBCu;
    SET_GPR_U32(ctx, 31, 0x329DC4u);
    ctx->pc = 0x329DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DBCu;
    // 0x329dc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329DBCu, 0x329DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DC4u;
label_329dc4:
    // 0x329dc4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329dc8:
    // 0x329dc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329dcc:
    // 0x329dcc: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329dd0:
    // 0x329dd0: 0xc0485ce  jal         func_121738
label_329dd4:
    if (ctx->pc == 0x329DD4u) {
        ctx->pc = 0x329DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DD0u;
        // 0x329dd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DD8u;
        goto label_329dd8;
    }
    ctx->pc = 0x329DD0u;
    SET_GPR_U32(ctx, 31, 0x329DD8u);
    ctx->pc = 0x329DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DD0u;
    // 0x329dd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121738u, 0x329DD0u, 0x329DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DD8u;
label_329dd8:
    // 0x329dd8: 0x10000810  b           . + 4 + (0x810 << 2)
label_329ddc:
    if (ctx->pc == 0x329DDCu) {
        ctx->pc = 0x329DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DD8u;
        // 0x329ddc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DE0u;
        goto label_329de0;
    }
    ctx->pc = 0x329DD8u;
    {
        const bool branch_taken_0x329dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DD8u;
        // 0x329ddc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329dd8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329DE0u;
label_329de0:
    // 0x329de0: 0xc0cdf2e  jal         func_337CB8
label_329de4:
    if (ctx->pc == 0x329DE4u) {
        ctx->pc = 0x329DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DE0u;
        // 0x329de4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DE8u;
        goto label_329de8;
    }
    ctx->pc = 0x329DE0u;
    SET_GPR_U32(ctx, 31, 0x329DE8u);
    ctx->pc = 0x329DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DE0u;
    // 0x329de4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329DE0u, 0x329DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DE8u;
label_329de8:
    // 0x329de8: 0xc0cdf52  jal         func_337D48
label_329dec:
    if (ctx->pc == 0x329DECu) {
        ctx->pc = 0x329DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DE8u;
        // 0x329dec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DF0u;
        goto label_329df0;
    }
    ctx->pc = 0x329DE8u;
    SET_GPR_U32(ctx, 31, 0x329DF0u);
    ctx->pc = 0x329DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DE8u;
    // 0x329dec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329DE8u, 0x329DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DF0u;
label_329df0:
    // 0x329df0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329df4:
    // 0x329df4: 0xc0cdf2e  jal         func_337CB8
label_329df8:
    if (ctx->pc == 0x329DF8u) {
        ctx->pc = 0x329DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DF4u;
        // 0x329df8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DFCu;
        goto label_329dfc;
    }
    ctx->pc = 0x329DF4u;
    SET_GPR_U32(ctx, 31, 0x329DFCu);
    ctx->pc = 0x329DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DF4u;
    // 0x329df8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329DF4u, 0x329DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DFCu;
label_329dfc:
    // 0x329dfc: 0xc0cdf52  jal         func_337D48
label_329e00:
    if (ctx->pc == 0x329E00u) {
        ctx->pc = 0x329E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DFCu;
        // 0x329e00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E04u;
        goto label_329e04;
    }
    ctx->pc = 0x329DFCu;
    SET_GPR_U32(ctx, 31, 0x329E04u);
    ctx->pc = 0x329E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DFCu;
    // 0x329e00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329DFCu, 0x329E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E04u;
label_329e04:
    // 0x329e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329e08:
    // 0x329e08: 0xc0cdf2e  jal         func_337CB8
label_329e0c:
    if (ctx->pc == 0x329E0Cu) {
        ctx->pc = 0x329E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E08u;
        // 0x329e0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E10u;
        goto label_329e10;
    }
    ctx->pc = 0x329E08u;
    SET_GPR_U32(ctx, 31, 0x329E10u);
    ctx->pc = 0x329E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E08u;
    // 0x329e0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329E08u, 0x329E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E10u;
label_329e10:
    // 0x329e10: 0xc0cdf52  jal         func_337D48
label_329e14:
    if (ctx->pc == 0x329E14u) {
        ctx->pc = 0x329E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E10u;
        // 0x329e14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E18u;
        goto label_329e18;
    }
    ctx->pc = 0x329E10u;
    SET_GPR_U32(ctx, 31, 0x329E18u);
    ctx->pc = 0x329E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E10u;
    // 0x329e14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329E10u, 0x329E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E18u;
label_329e18:
    // 0x329e18: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329e1c:
    // 0x329e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329e20:
    // 0x329e20: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329e24:
    // 0x329e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329e28:
    // 0x329e28: 0xc048606  jal         func_121818
label_329e2c:
    if (ctx->pc == 0x329E2Cu) {
        ctx->pc = 0x329E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E28u;
        // 0x329e2c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E30u;
        goto label_329e30;
    }
    ctx->pc = 0x329E28u;
    SET_GPR_U32(ctx, 31, 0x329E30u);
    ctx->pc = 0x329E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E28u;
    // 0x329e2c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121818u, 0x329E28u, 0x329E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E30u;
label_329e30:
    // 0x329e30: 0x100007fa  b           . + 4 + (0x7FA << 2)
label_329e34:
    if (ctx->pc == 0x329E34u) {
        ctx->pc = 0x329E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E30u;
        // 0x329e34: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E38u;
        goto label_329e38;
    }
    ctx->pc = 0x329E30u;
    {
        const bool branch_taken_0x329e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E30u;
        // 0x329e34: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e30) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329E38u;
label_329e38:
    // 0x329e38: 0xc0cdf2e  jal         func_337CB8
label_329e3c:
    if (ctx->pc == 0x329E3Cu) {
        ctx->pc = 0x329E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E38u;
        // 0x329e3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E40u;
        goto label_329e40;
    }
    ctx->pc = 0x329E38u;
    SET_GPR_U32(ctx, 31, 0x329E40u);
    ctx->pc = 0x329E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E38u;
    // 0x329e3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329E38u, 0x329E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E40u;
label_329e40:
    // 0x329e40: 0xc0cdf52  jal         func_337D48
label_329e44:
    if (ctx->pc == 0x329E44u) {
        ctx->pc = 0x329E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E40u;
        // 0x329e44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E48u;
        goto label_329e48;
    }
    ctx->pc = 0x329E40u;
    SET_GPR_U32(ctx, 31, 0x329E48u);
    ctx->pc = 0x329E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E40u;
    // 0x329e44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329E40u, 0x329E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E48u;
label_329e48:
    // 0x329e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329e4c:
    // 0x329e4c: 0xc0cdf2e  jal         func_337CB8
label_329e50:
    if (ctx->pc == 0x329E50u) {
        ctx->pc = 0x329E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E4Cu;
        // 0x329e50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E54u;
        goto label_329e54;
    }
    ctx->pc = 0x329E4Cu;
    SET_GPR_U32(ctx, 31, 0x329E54u);
    ctx->pc = 0x329E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E4Cu;
    // 0x329e50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329E4Cu, 0x329E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E54u;
label_329e54:
    // 0x329e54: 0xc0cdf52  jal         func_337D48
label_329e58:
    if (ctx->pc == 0x329E58u) {
        ctx->pc = 0x329E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E54u;
        // 0x329e58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E5Cu;
        goto label_329e5c;
    }
    ctx->pc = 0x329E54u;
    SET_GPR_U32(ctx, 31, 0x329E5Cu);
    ctx->pc = 0x329E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E54u;
    // 0x329e58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329E54u, 0x329E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E5Cu;
label_329e5c:
    // 0x329e5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329e60:
    // 0x329e60: 0xc0cdf2e  jal         func_337CB8
label_329e64:
    if (ctx->pc == 0x329E64u) {
        ctx->pc = 0x329E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E60u;
        // 0x329e64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E68u;
        goto label_329e68;
    }
    ctx->pc = 0x329E60u;
    SET_GPR_U32(ctx, 31, 0x329E68u);
    ctx->pc = 0x329E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E60u;
    // 0x329e64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329E60u, 0x329E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E68u;
label_329e68:
    // 0x329e68: 0xc0cdf52  jal         func_337D48
label_329e6c:
    if (ctx->pc == 0x329E6Cu) {
        ctx->pc = 0x329E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E68u;
        // 0x329e6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E70u;
        goto label_329e70;
    }
    ctx->pc = 0x329E68u;
    SET_GPR_U32(ctx, 31, 0x329E70u);
    ctx->pc = 0x329E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E68u;
    // 0x329e6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329E68u, 0x329E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E70u;
label_329e70:
    // 0x329e70: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329e74:
    // 0x329e74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329e78:
    // 0x329e78: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329e7c:
    // 0x329e7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329e80:
    // 0x329e80: 0xc04862e  jal         func_1218B8
label_329e84:
    if (ctx->pc == 0x329E84u) {
        ctx->pc = 0x329E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E80u;
        // 0x329e84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E88u;
        goto label_329e88;
    }
    ctx->pc = 0x329E80u;
    SET_GPR_U32(ctx, 31, 0x329E88u);
    ctx->pc = 0x329E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E80u;
    // 0x329e84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1218B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1218B8u, 0x329E80u, 0x329E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E88u;
label_329e88:
    // 0x329e88: 0x100007e4  b           . + 4 + (0x7E4 << 2)
label_329e8c:
    if (ctx->pc == 0x329E8Cu) {
        ctx->pc = 0x329E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E88u;
        // 0x329e8c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E90u;
        goto label_329e90;
    }
    ctx->pc = 0x329E88u;
    {
        const bool branch_taken_0x329e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E88u;
        // 0x329e8c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e88) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329E90u;
label_329e90:
    // 0x329e90: 0xc0cdf2e  jal         func_337CB8
label_329e94:
    if (ctx->pc == 0x329E94u) {
        ctx->pc = 0x329E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E90u;
        // 0x329e94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E98u;
        goto label_329e98;
    }
    ctx->pc = 0x329E90u;
    SET_GPR_U32(ctx, 31, 0x329E98u);
    ctx->pc = 0x329E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E90u;
    // 0x329e94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329E90u, 0x329E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E98u;
label_329e98:
    // 0x329e98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x329e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329e9c:
    // 0x329e9c: 0xc0cdf2e  jal         func_337CB8
label_329ea0:
    if (ctx->pc == 0x329EA0u) {
        ctx->pc = 0x329EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E9Cu;
        // 0x329ea0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EA4u;
        goto label_329ea4;
    }
    ctx->pc = 0x329E9Cu;
    SET_GPR_U32(ctx, 31, 0x329EA4u);
    ctx->pc = 0x329EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E9Cu;
    // 0x329ea0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329E9Cu, 0x329EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EA4u;
label_329ea4:
    // 0x329ea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329ea8:
    // 0x329ea8: 0xc0cdf2e  jal         func_337CB8
label_329eac:
    if (ctx->pc == 0x329EACu) {
        ctx->pc = 0x329EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EA8u;
        // 0x329eac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EB0u;
        goto label_329eb0;
    }
    ctx->pc = 0x329EA8u;
    SET_GPR_U32(ctx, 31, 0x329EB0u);
    ctx->pc = 0x329EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EA8u;
    // 0x329eac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329EA8u, 0x329EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EB0u;
label_329eb0:
    // 0x329eb0: 0xc0cdf52  jal         func_337D48
label_329eb4:
    if (ctx->pc == 0x329EB4u) {
        ctx->pc = 0x329EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EB0u;
        // 0x329eb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EB8u;
        goto label_329eb8;
    }
    ctx->pc = 0x329EB0u;
    SET_GPR_U32(ctx, 31, 0x329EB8u);
    ctx->pc = 0x329EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EB0u;
    // 0x329eb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329EB0u, 0x329EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EB8u;
label_329eb8:
    // 0x329eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329ebc:
    // 0x329ebc: 0xc0cdf2e  jal         func_337CB8
label_329ec0:
    if (ctx->pc == 0x329EC0u) {
        ctx->pc = 0x329EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EBCu;
        // 0x329ec0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EC4u;
        goto label_329ec4;
    }
    ctx->pc = 0x329EBCu;
    SET_GPR_U32(ctx, 31, 0x329EC4u);
    ctx->pc = 0x329EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EBCu;
    // 0x329ec0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329EBCu, 0x329EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EC4u;
label_329ec4:
    // 0x329ec4: 0xc0cdf52  jal         func_337D48
label_329ec8:
    if (ctx->pc == 0x329EC8u) {
        ctx->pc = 0x329EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EC4u;
        // 0x329ec8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329ECCu;
        goto label_329ecc;
    }
    ctx->pc = 0x329EC4u;
    SET_GPR_U32(ctx, 31, 0x329ECCu);
    ctx->pc = 0x329EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EC4u;
    // 0x329ec8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329EC4u, 0x329ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329ECCu;
label_329ecc:
    // 0x329ecc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329ed0:
    // 0x329ed0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329ed4:
    // 0x329ed4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329ed8:
    // 0x329ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329edc:
    // 0x329edc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x329edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329ee0:
    // 0x329ee0: 0xc0486e6  jal         func_121B98
label_329ee4:
    if (ctx->pc == 0x329EE4u) {
        ctx->pc = 0x329EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EE0u;
        // 0x329ee4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EE8u;
        goto label_329ee8;
    }
    ctx->pc = 0x329EE0u;
    SET_GPR_U32(ctx, 31, 0x329EE8u);
    ctx->pc = 0x329EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EE0u;
    // 0x329ee4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121B98u, 0x329EE0u, 0x329EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EE8u;
label_329ee8:
    // 0x329ee8: 0x100007cc  b           . + 4 + (0x7CC << 2)
label_329eec:
    if (ctx->pc == 0x329EECu) {
        ctx->pc = 0x329EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EE8u;
        // 0x329eec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EF0u;
        goto label_329ef0;
    }
    ctx->pc = 0x329EE8u;
    {
        const bool branch_taken_0x329ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EE8u;
        // 0x329eec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ee8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329EF0u;
label_329ef0:
    // 0x329ef0: 0xc0cdf2e  jal         func_337CB8
label_329ef4:
    if (ctx->pc == 0x329EF4u) {
        ctx->pc = 0x329EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EF0u;
        // 0x329ef4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EF8u;
        goto label_329ef8;
    }
    ctx->pc = 0x329EF0u;
    SET_GPR_U32(ctx, 31, 0x329EF8u);
    ctx->pc = 0x329EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EF0u;
    // 0x329ef4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329EF0u, 0x329EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EF8u;
label_329ef8:
    // 0x329ef8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x329ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329efc:
    // 0x329efc: 0xc0cdf40  jal         func_337D00
label_329f00:
    if (ctx->pc == 0x329F00u) {
        ctx->pc = 0x329F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EFCu;
        // 0x329f00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F04u;
        goto label_329f04;
    }
    ctx->pc = 0x329EFCu;
    SET_GPR_U32(ctx, 31, 0x329F04u);
    ctx->pc = 0x329F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EFCu;
    // 0x329f00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x329EFCu, 0x329F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F04u;
label_329f04:
    // 0x329f04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x329f04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_329f08:
    // 0x329f08: 0xc0cdf40  jal         func_337D00
label_329f0c:
    if (ctx->pc == 0x329F0Cu) {
        ctx->pc = 0x329F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F08u;
        // 0x329f0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F10u;
        goto label_329f10;
    }
    ctx->pc = 0x329F08u;
    SET_GPR_U32(ctx, 31, 0x329F10u);
    ctx->pc = 0x329F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F08u;
    // 0x329f0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x329F08u, 0x329F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F10u;
label_329f10:
    // 0x329f10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x329f10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_329f14:
    // 0x329f14: 0xc0cdf2e  jal         func_337CB8
label_329f18:
    if (ctx->pc == 0x329F18u) {
        ctx->pc = 0x329F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F14u;
        // 0x329f18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F1Cu;
        goto label_329f1c;
    }
    ctx->pc = 0x329F14u;
    SET_GPR_U32(ctx, 31, 0x329F1Cu);
    ctx->pc = 0x329F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F14u;
    // 0x329f18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329F14u, 0x329F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F1Cu;
label_329f1c:
    // 0x329f1c: 0xc0cdf52  jal         func_337D48
label_329f20:
    if (ctx->pc == 0x329F20u) {
        ctx->pc = 0x329F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F1Cu;
        // 0x329f20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F24u;
        goto label_329f24;
    }
    ctx->pc = 0x329F1Cu;
    SET_GPR_U32(ctx, 31, 0x329F24u);
    ctx->pc = 0x329F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F1Cu;
    // 0x329f20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329F1Cu, 0x329F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F24u;
label_329f24:
    // 0x329f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329f28:
    // 0x329f28: 0xc0cdf2e  jal         func_337CB8
label_329f2c:
    if (ctx->pc == 0x329F2Cu) {
        ctx->pc = 0x329F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F28u;
        // 0x329f2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F30u;
        goto label_329f30;
    }
    ctx->pc = 0x329F28u;
    SET_GPR_U32(ctx, 31, 0x329F30u);
    ctx->pc = 0x329F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F28u;
    // 0x329f2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329F28u, 0x329F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F30u;
label_329f30:
    // 0x329f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329f34:
    // 0x329f34: 0xc0cdf2e  jal         func_337CB8
label_329f38:
    if (ctx->pc == 0x329F38u) {
        ctx->pc = 0x329F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F34u;
        // 0x329f38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F3Cu;
        goto label_329f3c;
    }
    ctx->pc = 0x329F34u;
    SET_GPR_U32(ctx, 31, 0x329F3Cu);
    ctx->pc = 0x329F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F34u;
    // 0x329f38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329F34u, 0x329F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F3Cu;
label_329f3c:
    // 0x329f3c: 0xc0cdf52  jal         func_337D48
label_329f40:
    if (ctx->pc == 0x329F40u) {
        ctx->pc = 0x329F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F3Cu;
        // 0x329f40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F44u;
        goto label_329f44;
    }
    ctx->pc = 0x329F3Cu;
    SET_GPR_U32(ctx, 31, 0x329F44u);
    ctx->pc = 0x329F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F3Cu;
    // 0x329f40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329F3Cu, 0x329F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F44u;
label_329f44:
    // 0x329f44: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329f48:
    // 0x329f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329f4c:
    // 0x329f4c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329f50:
    // 0x329f50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329f54:
    // 0x329f54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x329f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329f58:
    // 0x329f58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x329f58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_329f5c:
    // 0x329f5c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x329f5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_329f60:
    // 0x329f60: 0xc04871e  jal         func_121C78
label_329f64:
    if (ctx->pc == 0x329F64u) {
        ctx->pc = 0x329F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F60u;
        // 0x329f64: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F68u;
        goto label_329f68;
    }
    ctx->pc = 0x329F60u;
    SET_GPR_U32(ctx, 31, 0x329F68u);
    ctx->pc = 0x329F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F60u;
    // 0x329f64: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C78u, 0x329F60u, 0x329F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F68u;
label_329f68:
    // 0x329f68: 0x100007ac  b           . + 4 + (0x7AC << 2)
label_329f6c:
    if (ctx->pc == 0x329F6Cu) {
        ctx->pc = 0x329F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F68u;
        // 0x329f6c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F70u;
        goto label_329f70;
    }
    ctx->pc = 0x329F68u;
    {
        const bool branch_taken_0x329f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F68u;
        // 0x329f6c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f68) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329F70u;
label_329f70:
    // 0x329f70: 0xc0cdf2e  jal         func_337CB8
label_329f74:
    if (ctx->pc == 0x329F74u) {
        ctx->pc = 0x329F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F70u;
        // 0x329f74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F78u;
        goto label_329f78;
    }
    ctx->pc = 0x329F70u;
    SET_GPR_U32(ctx, 31, 0x329F78u);
    ctx->pc = 0x329F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F70u;
    // 0x329f74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329F70u, 0x329F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F78u;
label_329f78:
    // 0x329f78: 0xc0cdf52  jal         func_337D48
label_329f7c:
    if (ctx->pc == 0x329F7Cu) {
        ctx->pc = 0x329F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F78u;
        // 0x329f7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F80u;
        goto label_329f80;
    }
    ctx->pc = 0x329F78u;
    SET_GPR_U32(ctx, 31, 0x329F80u);
    ctx->pc = 0x329F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F78u;
    // 0x329f7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329F78u, 0x329F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F80u;
label_329f80:
    // 0x329f80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329f84:
    // 0x329f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329f88:
    // 0x329f88: 0xc0484e6  jal         func_121398
label_329f8c:
    if (ctx->pc == 0x329F8Cu) {
        ctx->pc = 0x329F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F88u;
        // 0x329f8c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F90u;
        goto label_329f90;
    }
    ctx->pc = 0x329F88u;
    SET_GPR_U32(ctx, 31, 0x329F90u);
    ctx->pc = 0x329F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F88u;
    // 0x329f8c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121398u, 0x329F88u, 0x329F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F90u;
label_329f90:
    // 0x329f90: 0x100007a2  b           . + 4 + (0x7A2 << 2)
label_329f94:
    if (ctx->pc == 0x329F94u) {
        ctx->pc = 0x329F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F90u;
        // 0x329f94: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F98u;
        goto label_329f98;
    }
    ctx->pc = 0x329F90u;
    {
        const bool branch_taken_0x329f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F90u;
        // 0x329f94: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f90) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329F98u;
label_329f98:
    // 0x329f98: 0xc0cdec0  jal         func_337B00
label_329f9c:
    if (ctx->pc == 0x329F9Cu) {
        ctx->pc = 0x329F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F98u;
        // 0x329f9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FA0u;
        goto label_329fa0;
    }
    ctx->pc = 0x329F98u;
    SET_GPR_U32(ctx, 31, 0x329FA0u);
    ctx->pc = 0x329F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F98u;
    // 0x329f9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329F98u, 0x329FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FA0u;
label_329fa0:
    // 0x329fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329fa4:
    // 0x329fa4: 0xc0cdf2e  jal         func_337CB8
label_329fa8:
    if (ctx->pc == 0x329FA8u) {
        ctx->pc = 0x329FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FA4u;
        // 0x329fa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FACu;
        goto label_329fac;
    }
    ctx->pc = 0x329FA4u;
    SET_GPR_U32(ctx, 31, 0x329FACu);
    ctx->pc = 0x329FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FA4u;
    // 0x329fa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329FA4u, 0x329FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FACu;
label_329fac:
    // 0x329fac: 0xc0cdf52  jal         func_337D48
label_329fb0:
    if (ctx->pc == 0x329FB0u) {
        ctx->pc = 0x329FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FACu;
        // 0x329fb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FB4u;
        goto label_329fb4;
    }
    ctx->pc = 0x329FACu;
    SET_GPR_U32(ctx, 31, 0x329FB4u);
    ctx->pc = 0x329FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FACu;
    // 0x329fb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329FACu, 0x329FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FB4u;
label_329fb4:
    // 0x329fb4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x329fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_329fb8:
    // 0x329fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x329fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329fbc:
    // 0x329fbc: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329fc0:
    // 0x329fc0: 0xc0491ec  jal         func_1247B0
label_329fc4:
    if (ctx->pc == 0x329FC4u) {
        ctx->pc = 0x329FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FC0u;
        // 0x329fc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FC8u;
        goto label_329fc8;
    }
    ctx->pc = 0x329FC0u;
    SET_GPR_U32(ctx, 31, 0x329FC8u);
    ctx->pc = 0x329FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FC0u;
    // 0x329fc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247B0u, 0x329FC0u, 0x329FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FC8u;
label_329fc8:
    // 0x329fc8: 0x10000794  b           . + 4 + (0x794 << 2)
label_329fcc:
    if (ctx->pc == 0x329FCCu) {
        ctx->pc = 0x329FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FC8u;
        // 0x329fcc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FD0u;
        goto label_329fd0;
    }
    ctx->pc = 0x329FC8u;
    {
        const bool branch_taken_0x329fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FC8u;
        // 0x329fcc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fc8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x329FD0u;
label_329fd0:
    // 0x329fd0: 0xc0cdf2e  jal         func_337CB8
label_329fd4:
    if (ctx->pc == 0x329FD4u) {
        ctx->pc = 0x329FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FD0u;
        // 0x329fd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FD8u;
        goto label_329fd8;
    }
    ctx->pc = 0x329FD0u;
    SET_GPR_U32(ctx, 31, 0x329FD8u);
    ctx->pc = 0x329FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FD0u;
    // 0x329fd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329FD0u, 0x329FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FD8u;
label_329fd8:
    // 0x329fd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x329fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_329fdc:
    // 0x329fdc: 0xc0cdec0  jal         func_337B00
label_329fe0:
    if (ctx->pc == 0x329FE0u) {
        ctx->pc = 0x329FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FDCu;
        // 0x329fe0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FE4u;
        goto label_329fe4;
    }
    ctx->pc = 0x329FDCu;
    SET_GPR_U32(ctx, 31, 0x329FE4u);
    ctx->pc = 0x329FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FDCu;
    // 0x329fe0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329FDCu, 0x329FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FE4u;
label_329fe4:
    // 0x329fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329fe8:
    // 0x329fe8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x329fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_329fec:
    // 0x329fec: 0xc0cdbde  jal         func_336F78
label_329ff0:
    if (ctx->pc == 0x329FF0u) {
        ctx->pc = 0x329FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FECu;
        // 0x329ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FF4u;
        goto label_329ff4;
    }
    ctx->pc = 0x329FECu;
    SET_GPR_U32(ctx, 31, 0x329FF4u);
    ctx->pc = 0x329FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FECu;
    // 0x329ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x329FECu, 0x329FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FF4u;
label_329ff4:
    // 0x329ff4: 0x504007a0  beql        $v0, $zero, . + 4 + (0x7A0 << 2)
label_329ff8:
    if (ctx->pc == 0x329FF8u) {
        ctx->pc = 0x329FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FF4u;
        // 0x329ff8: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329FFCu;
        goto label_329ffc;
    }
    ctx->pc = 0x329FF4u;
    {
        const bool branch_taken_0x329ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ff4) {
            ctx->pc = 0x329FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329FF4u;
            // 0x329ff8: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x329FFCu;
label_329ffc:
    // 0x329ffc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_32a000:
    if (ctx->pc == 0x32A000u) {
        ctx->pc = 0x32A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FFCu;
        // 0x32a000: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A004u;
        goto label_32a004;
    }
    ctx->pc = 0x329FFCu;
    {
        const bool branch_taken_0x329ffc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FFCu;
        // 0x32a000: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ffc) {
            ctx->pc = 0x32A010u;
            goto label_32a010;
        }
    }
    ctx->pc = 0x32A004u;
label_32a004:
    // 0x32a004: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32a004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32a008:
    // 0x32a008: 0x1000079a  b           . + 4 + (0x79A << 2)
label_32a00c:
    if (ctx->pc == 0x32A00Cu) {
        ctx->pc = 0x32A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A008u;
        // 0x32a00c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A010u;
        goto label_32a010;
    }
    ctx->pc = 0x32A008u;
    {
        const bool branch_taken_0x32a008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A008u;
        // 0x32a00c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a008) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A010u;
label_32a010:
    // 0x32a010: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x32a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_32a014:
    // 0x32a014: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_32a018:
    // 0x32a018: 0x10000796  b           . + 4 + (0x796 << 2)
label_32a01c:
    if (ctx->pc == 0x32A01Cu) {
        ctx->pc = 0x32A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A018u;
        // 0x32a01c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A020u;
        goto label_32a020;
    }
    ctx->pc = 0x32A018u;
    {
        const bool branch_taken_0x32a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A018u;
        // 0x32a01c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a018) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A020u;
label_32a020:
    // 0x32a020: 0xc0cdf2e  jal         func_337CB8
label_32a024:
    if (ctx->pc == 0x32A024u) {
        ctx->pc = 0x32A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A020u;
        // 0x32a024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A028u;
        goto label_32a028;
    }
    ctx->pc = 0x32A020u;
    SET_GPR_U32(ctx, 31, 0x32A028u);
    ctx->pc = 0x32A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A020u;
    // 0x32a024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A020u, 0x32A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A028u;
label_32a028:
    // 0x32a028: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x32a028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_32a02c:
    // 0x32a02c: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x32a02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_32a030:
    // 0x32a030: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x32a030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a034:
    // 0x32a034: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x32a034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a038:
    // 0x32a038: 0xc0cdf2e  jal         func_337CB8
label_32a03c:
    if (ctx->pc == 0x32A03Cu) {
        ctx->pc = 0x32A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A038u;
        // 0x32a03c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A040u;
        goto label_32a040;
    }
    ctx->pc = 0x32A038u;
    SET_GPR_U32(ctx, 31, 0x32A040u);
    ctx->pc = 0x32A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A038u;
    // 0x32a03c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A038u, 0x32A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A040u;
label_32a040:
    // 0x32a040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a044:
    // 0x32a044: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a048:
    // 0x32a048: 0xc0cdc02  jal         func_337008
label_32a04c:
    if (ctx->pc == 0x32A04Cu) {
        ctx->pc = 0x32A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A048u;
        // 0x32a04c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A050u;
        goto label_32a050;
    }
    ctx->pc = 0x32A048u;
    SET_GPR_U32(ctx, 31, 0x32A050u);
    ctx->pc = 0x32A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A048u;
    // 0x32a04c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x32A048u, 0x32A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A050u;
label_32a050:
    // 0x32a050: 0x50400789  beql        $v0, $zero, . + 4 + (0x789 << 2)
label_32a054:
    if (ctx->pc == 0x32A054u) {
        ctx->pc = 0x32A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A050u;
        // 0x32a054: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A058u;
        goto label_32a058;
    }
    ctx->pc = 0x32A050u;
    {
        const bool branch_taken_0x32a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a050) {
            ctx->pc = 0x32A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A050u;
            // 0x32a054: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A058u;
label_32a058:
    // 0x32a058: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x32a058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_32a05c:
    // 0x32a05c: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x32a05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_32a060:
    // 0x32a060: 0xaa0200b3  swl         $v0, 0xB3($s0)
    ctx->pc = 0x32a060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 179); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a064:
    // 0x32a064: 0xba0200b0  swr         $v0, 0xB0($s0)
    ctx->pc = 0x32a064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a068:
    // 0x32a068: 0x10000783  b           . + 4 + (0x783 << 2)
label_32a06c:
    if (ctx->pc == 0x32A06Cu) {
        ctx->pc = 0x32A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A068u;
        // 0x32a06c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A070u;
        goto label_32a070;
    }
    ctx->pc = 0x32A068u;
    {
        const bool branch_taken_0x32a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A068u;
        // 0x32a06c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a068) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A070u;
label_32a070:
    // 0x32a070: 0xc0cdf2e  jal         func_337CB8
label_32a074:
    if (ctx->pc == 0x32A074u) {
        ctx->pc = 0x32A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A070u;
        // 0x32a074: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A078u;
        goto label_32a078;
    }
    ctx->pc = 0x32A070u;
    SET_GPR_U32(ctx, 31, 0x32A078u);
    ctx->pc = 0x32A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A070u;
    // 0x32a074: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A070u, 0x32A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A078u;
label_32a078:
    // 0x32a078: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x32a078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_32a07c:
    // 0x32a07c: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x32a07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_32a080:
    // 0x32a080: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x32a080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a084:
    // 0x32a084: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x32a084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a088:
    // 0x32a088: 0xc0cdf2e  jal         func_337CB8
label_32a08c:
    if (ctx->pc == 0x32A08Cu) {
        ctx->pc = 0x32A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A088u;
        // 0x32a08c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A090u;
        goto label_32a090;
    }
    ctx->pc = 0x32A088u;
    SET_GPR_U32(ctx, 31, 0x32A090u);
    ctx->pc = 0x32A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A088u;
    // 0x32a08c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A088u, 0x32A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A090u;
label_32a090:
    // 0x32a090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a094:
    // 0x32a094: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a098:
    // 0x32a098: 0xc0cdc02  jal         func_337008
label_32a09c:
    if (ctx->pc == 0x32A09Cu) {
        ctx->pc = 0x32A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A098u;
        // 0x32a09c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0A0u;
        goto label_32a0a0;
    }
    ctx->pc = 0x32A098u;
    SET_GPR_U32(ctx, 31, 0x32A0A0u);
    ctx->pc = 0x32A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A098u;
    // 0x32a09c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x32A098u, 0x32A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0A0u;
label_32a0a0:
    // 0x32a0a0: 0x50400775  beql        $v0, $zero, . + 4 + (0x775 << 2)
label_32a0a4:
    if (ctx->pc == 0x32A0A4u) {
        ctx->pc = 0x32A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0A0u;
        // 0x32a0a4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0A8u;
        goto label_32a0a8;
    }
    ctx->pc = 0x32A0A0u;
    {
        const bool branch_taken_0x32a0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a0a0) {
            ctx->pc = 0x32A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A0A0u;
            // 0x32a0a4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A0A8u;
label_32a0a8:
    // 0x32a0a8: 0x8ba60013  lwl         $a2, 0x13($sp)
    ctx->pc = 0x32a0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_32a0ac:
    // 0x32a0ac: 0x9ba60010  lwr         $a2, 0x10($sp)
    ctx->pc = 0x32a0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_32a0b0:
    // 0x32a0b0: 0xaa0600b7  swl         $a2, 0xB7($s0)
    ctx->pc = 0x32a0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a0b4:
    // 0x32a0b4: 0xba0600b4  swr         $a2, 0xB4($s0)
    ctx->pc = 0x32a0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 180); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_32a0b8:
    // 0x32a0b8: 0x1000076f  b           . + 4 + (0x76F << 2)
label_32a0bc:
    if (ctx->pc == 0x32A0BCu) {
        ctx->pc = 0x32A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0B8u;
        // 0x32a0bc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0C0u;
        goto label_32a0c0;
    }
    ctx->pc = 0x32A0B8u;
    {
        const bool branch_taken_0x32a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0B8u;
        // 0x32a0bc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a0b8) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A0C0u;
label_32a0c0:
    // 0x32a0c0: 0xc0cdf40  jal         func_337D00
label_32a0c4:
    if (ctx->pc == 0x32A0C4u) {
        ctx->pc = 0x32A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0C0u;
        // 0x32a0c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0C8u;
        goto label_32a0c8;
    }
    ctx->pc = 0x32A0C0u;
    SET_GPR_U32(ctx, 31, 0x32A0C8u);
    ctx->pc = 0x32A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0C0u;
    // 0x32a0c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A0C0u, 0x32A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0C8u;
label_32a0c8:
    // 0x32a0c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32a0c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32a0cc:
    // 0x32a0cc: 0xc0cdf2e  jal         func_337CB8
label_32a0d0:
    if (ctx->pc == 0x32A0D0u) {
        ctx->pc = 0x32A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0CCu;
        // 0x32a0d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0D4u;
        goto label_32a0d4;
    }
    ctx->pc = 0x32A0CCu;
    SET_GPR_U32(ctx, 31, 0x32A0D4u);
    ctx->pc = 0x32A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0CCu;
    // 0x32a0d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A0CCu, 0x32A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0D4u;
label_32a0d4:
    // 0x32a0d4: 0xc0cdf52  jal         func_337D48
label_32a0d8:
    if (ctx->pc == 0x32A0D8u) {
        ctx->pc = 0x32A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0D4u;
        // 0x32a0d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0DCu;
        goto label_32a0dc;
    }
    ctx->pc = 0x32A0D4u;
    SET_GPR_U32(ctx, 31, 0x32A0DCu);
    ctx->pc = 0x32A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0D4u;
    // 0x32a0d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A0D4u, 0x32A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0DCu;
label_32a0dc:
    // 0x32a0dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32a0dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a0e0:
    // 0x32a0e0: 0xc0cdf2e  jal         func_337CB8
label_32a0e4:
    if (ctx->pc == 0x32A0E4u) {
        ctx->pc = 0x32A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0E0u;
        // 0x32a0e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0E8u;
        goto label_32a0e8;
    }
    ctx->pc = 0x32A0E0u;
    SET_GPR_U32(ctx, 31, 0x32A0E8u);
    ctx->pc = 0x32A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0E0u;
    // 0x32a0e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A0E0u, 0x32A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0E8u;
label_32a0e8:
    // 0x32a0e8: 0xc0cdf52  jal         func_337D48
label_32a0ec:
    if (ctx->pc == 0x32A0ECu) {
        ctx->pc = 0x32A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0E8u;
        // 0x32a0ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0F0u;
        goto label_32a0f0;
    }
    ctx->pc = 0x32A0E8u;
    SET_GPR_U32(ctx, 31, 0x32A0F0u);
    ctx->pc = 0x32A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0E8u;
    // 0x32a0ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A0E8u, 0x32A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0F0u;
label_32a0f0:
    // 0x32a0f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a0f4:
    // 0x32a0f4: 0xc0cdf2e  jal         func_337CB8
label_32a0f8:
    if (ctx->pc == 0x32A0F8u) {
        ctx->pc = 0x32A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0F4u;
        // 0x32a0f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0FCu;
        goto label_32a0fc;
    }
    ctx->pc = 0x32A0F4u;
    SET_GPR_U32(ctx, 31, 0x32A0FCu);
    ctx->pc = 0x32A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0F4u;
    // 0x32a0f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A0F4u, 0x32A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0FCu;
label_32a0fc:
    // 0x32a0fc: 0xc0cdf52  jal         func_337D48
label_32a100:
    if (ctx->pc == 0x32A100u) {
        ctx->pc = 0x32A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0FCu;
        // 0x32a100: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A104u;
        goto label_32a104;
    }
    ctx->pc = 0x32A0FCu;
    SET_GPR_U32(ctx, 31, 0x32A104u);
    ctx->pc = 0x32A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0FCu;
    // 0x32a100: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A0FCu, 0x32A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A104u;
label_32a104:
    // 0x32a104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a108:
    // 0x32a108: 0xc0cdf2e  jal         func_337CB8
label_32a10c:
    if (ctx->pc == 0x32A10Cu) {
        ctx->pc = 0x32A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A108u;
        // 0x32a10c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A110u;
        goto label_32a110;
    }
    ctx->pc = 0x32A108u;
    SET_GPR_U32(ctx, 31, 0x32A110u);
    ctx->pc = 0x32A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A108u;
    // 0x32a10c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A108u, 0x32A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A110u;
label_32a110:
    // 0x32a110: 0xc0cdf52  jal         func_337D48
label_32a114:
    if (ctx->pc == 0x32A114u) {
        ctx->pc = 0x32A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A110u;
        // 0x32a114: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A118u;
        goto label_32a118;
    }
    ctx->pc = 0x32A110u;
    SET_GPR_U32(ctx, 31, 0x32A118u);
    ctx->pc = 0x32A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A110u;
    // 0x32a114: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A110u, 0x32A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A118u;
label_32a118:
    // 0x32a118: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a11c:
    // 0x32a11c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a120:
    // 0x32a120: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a124:
    // 0x32a124: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a128:
    // 0x32a128: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32a128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a12c:
    // 0x32a12c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32a12cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a130:
    // 0x32a130: 0xc0488b6  jal         func_1222D8
label_32a134:
    if (ctx->pc == 0x32A134u) {
        ctx->pc = 0x32A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A130u;
        // 0x32a134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A138u;
        goto label_32a138;
    }
    ctx->pc = 0x32A130u;
    SET_GPR_U32(ctx, 31, 0x32A138u);
    ctx->pc = 0x32A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A130u;
    // 0x32a134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222D8u, 0x32A130u, 0x32A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A138u;
label_32a138:
    // 0x32a138: 0x10000738  b           . + 4 + (0x738 << 2)
label_32a13c:
    if (ctx->pc == 0x32A13Cu) {
        ctx->pc = 0x32A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A138u;
        // 0x32a13c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A140u;
        goto label_32a140;
    }
    ctx->pc = 0x32A138u;
    {
        const bool branch_taken_0x32a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A138u;
        // 0x32a13c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a138) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A140u;
label_32a140:
    // 0x32a140: 0xc0cdf2e  jal         func_337CB8
label_32a144:
    if (ctx->pc == 0x32A144u) {
        ctx->pc = 0x32A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A140u;
        // 0x32a144: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A148u;
        goto label_32a148;
    }
    ctx->pc = 0x32A140u;
    SET_GPR_U32(ctx, 31, 0x32A148u);
    ctx->pc = 0x32A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A140u;
    // 0x32a144: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A140u, 0x32A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A148u;
label_32a148:
    // 0x32a148: 0xc0cdf52  jal         func_337D48
label_32a14c:
    if (ctx->pc == 0x32A14Cu) {
        ctx->pc = 0x32A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A148u;
        // 0x32a14c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A150u;
        goto label_32a150;
    }
    ctx->pc = 0x32A148u;
    SET_GPR_U32(ctx, 31, 0x32A150u);
    ctx->pc = 0x32A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A148u;
    // 0x32a14c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A148u, 0x32A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A150u;
label_32a150:
    // 0x32a150: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a154:
    // 0x32a154: 0xc0cdf2e  jal         func_337CB8
label_32a158:
    if (ctx->pc == 0x32A158u) {
        ctx->pc = 0x32A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A154u;
        // 0x32a158: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A15Cu;
        goto label_32a15c;
    }
    ctx->pc = 0x32A154u;
    SET_GPR_U32(ctx, 31, 0x32A15Cu);
    ctx->pc = 0x32A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A154u;
    // 0x32a158: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A154u, 0x32A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A15Cu;
label_32a15c:
    // 0x32a15c: 0xc0cdf52  jal         func_337D48
label_32a160:
    if (ctx->pc == 0x32A160u) {
        ctx->pc = 0x32A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A15Cu;
        // 0x32a160: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A164u;
        goto label_32a164;
    }
    ctx->pc = 0x32A15Cu;
    SET_GPR_U32(ctx, 31, 0x32A164u);
    ctx->pc = 0x32A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A15Cu;
    // 0x32a160: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A15Cu, 0x32A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A164u;
label_32a164:
    // 0x32a164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a168:
    // 0x32a168: 0xc0cdf2e  jal         func_337CB8
label_32a16c:
    if (ctx->pc == 0x32A16Cu) {
        ctx->pc = 0x32A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A168u;
        // 0x32a16c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A170u;
        goto label_32a170;
    }
    ctx->pc = 0x32A168u;
    SET_GPR_U32(ctx, 31, 0x32A170u);
    ctx->pc = 0x32A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A168u;
    // 0x32a16c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A168u, 0x32A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A170u;
label_32a170:
    // 0x32a170: 0xc0cdf52  jal         func_337D48
label_32a174:
    if (ctx->pc == 0x32A174u) {
        ctx->pc = 0x32A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A170u;
        // 0x32a174: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A178u;
        goto label_32a178;
    }
    ctx->pc = 0x32A170u;
    SET_GPR_U32(ctx, 31, 0x32A178u);
    ctx->pc = 0x32A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A170u;
    // 0x32a174: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A170u, 0x32A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A178u;
label_32a178:
    // 0x32a178: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a17c:
    // 0x32a17c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a180:
    // 0x32a180: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a184:
    // 0x32a184: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a188:
    // 0x32a188: 0xc048c86  jal         func_123218
label_32a18c:
    if (ctx->pc == 0x32A18Cu) {
        ctx->pc = 0x32A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A188u;
        // 0x32a18c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A190u;
        goto label_32a190;
    }
    ctx->pc = 0x32A188u;
    SET_GPR_U32(ctx, 31, 0x32A190u);
    ctx->pc = 0x32A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A188u;
    // 0x32a18c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123218u, 0x32A188u, 0x32A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A190u;
label_32a190:
    // 0x32a190: 0x10000722  b           . + 4 + (0x722 << 2)
label_32a194:
    if (ctx->pc == 0x32A194u) {
        ctx->pc = 0x32A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A190u;
        // 0x32a194: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A198u;
        goto label_32a198;
    }
    ctx->pc = 0x32A190u;
    {
        const bool branch_taken_0x32a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A190u;
        // 0x32a194: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a190) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A198u;
label_32a198:
    // 0x32a198: 0xc0cdf2e  jal         func_337CB8
label_32a19c:
    if (ctx->pc == 0x32A19Cu) {
        ctx->pc = 0x32A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A198u;
        // 0x32a19c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1A0u;
        goto label_32a1a0;
    }
    ctx->pc = 0x32A198u;
    SET_GPR_U32(ctx, 31, 0x32A1A0u);
    ctx->pc = 0x32A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A198u;
    // 0x32a19c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A198u, 0x32A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1A0u;
label_32a1a0:
    // 0x32a1a0: 0xc0cdf52  jal         func_337D48
label_32a1a4:
    if (ctx->pc == 0x32A1A4u) {
        ctx->pc = 0x32A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1A0u;
        // 0x32a1a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1A8u;
        goto label_32a1a8;
    }
    ctx->pc = 0x32A1A0u;
    SET_GPR_U32(ctx, 31, 0x32A1A8u);
    ctx->pc = 0x32A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1A0u;
    // 0x32a1a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A1A0u, 0x32A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1A8u;
label_32a1a8:
    // 0x32a1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a1ac:
    // 0x32a1ac: 0xc0cdf2e  jal         func_337CB8
label_32a1b0:
    if (ctx->pc == 0x32A1B0u) {
        ctx->pc = 0x32A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1ACu;
        // 0x32a1b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1B4u;
        goto label_32a1b4;
    }
    ctx->pc = 0x32A1ACu;
    SET_GPR_U32(ctx, 31, 0x32A1B4u);
    ctx->pc = 0x32A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1ACu;
    // 0x32a1b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A1ACu, 0x32A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1B4u;
label_32a1b4:
    // 0x32a1b4: 0xc0cdf52  jal         func_337D48
label_32a1b8:
    if (ctx->pc == 0x32A1B8u) {
        ctx->pc = 0x32A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1B4u;
        // 0x32a1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1BCu;
        goto label_32a1bc;
    }
    ctx->pc = 0x32A1B4u;
    SET_GPR_U32(ctx, 31, 0x32A1BCu);
    ctx->pc = 0x32A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1B4u;
    // 0x32a1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A1B4u, 0x32A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1BCu;
label_32a1bc:
    // 0x32a1bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a1c0:
    // 0x32a1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a1c4:
    // 0x32a1c4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a1c8:
    // 0x32a1c8: 0xc048caa  jal         func_1232A8
label_32a1cc:
    if (ctx->pc == 0x32A1CCu) {
        ctx->pc = 0x32A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1C8u;
        // 0x32a1cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1D0u;
        goto label_32a1d0;
    }
    ctx->pc = 0x32A1C8u;
    SET_GPR_U32(ctx, 31, 0x32A1D0u);
    ctx->pc = 0x32A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1C8u;
    // 0x32a1cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1232A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1232A8u, 0x32A1C8u, 0x32A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1D0u;
label_32a1d0:
    // 0x32a1d0: 0x10000712  b           . + 4 + (0x712 << 2)
label_32a1d4:
    if (ctx->pc == 0x32A1D4u) {
        ctx->pc = 0x32A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1D0u;
        // 0x32a1d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1D8u;
        goto label_32a1d8;
    }
    ctx->pc = 0x32A1D0u;
    {
        const bool branch_taken_0x32a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1D0u;
        // 0x32a1d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a1d0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A1D8u;
label_32a1d8:
    // 0x32a1d8: 0xc0cdf2e  jal         func_337CB8
label_32a1dc:
    if (ctx->pc == 0x32A1DCu) {
        ctx->pc = 0x32A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1D8u;
        // 0x32a1dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1E0u;
        goto label_32a1e0;
    }
    ctx->pc = 0x32A1D8u;
    SET_GPR_U32(ctx, 31, 0x32A1E0u);
    ctx->pc = 0x32A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1D8u;
    // 0x32a1dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A1D8u, 0x32A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1E0u;
label_32a1e0:
    // 0x32a1e0: 0xc0cdf52  jal         func_337D48
label_32a1e4:
    if (ctx->pc == 0x32A1E4u) {
        ctx->pc = 0x32A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1E0u;
        // 0x32a1e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1E8u;
        goto label_32a1e8;
    }
    ctx->pc = 0x32A1E0u;
    SET_GPR_U32(ctx, 31, 0x32A1E8u);
    ctx->pc = 0x32A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1E0u;
    // 0x32a1e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A1E0u, 0x32A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1E8u;
label_32a1e8:
    // 0x32a1e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a1ec:
    // 0x32a1ec: 0xc0cdf2e  jal         func_337CB8
label_32a1f0:
    if (ctx->pc == 0x32A1F0u) {
        ctx->pc = 0x32A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1ECu;
        // 0x32a1f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1F4u;
        goto label_32a1f4;
    }
    ctx->pc = 0x32A1ECu;
    SET_GPR_U32(ctx, 31, 0x32A1F4u);
    ctx->pc = 0x32A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1ECu;
    // 0x32a1f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A1ECu, 0x32A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1F4u;
label_32a1f4:
    // 0x32a1f4: 0xc0cdf52  jal         func_337D48
label_32a1f8:
    if (ctx->pc == 0x32A1F8u) {
        ctx->pc = 0x32A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1F4u;
        // 0x32a1f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A1FCu;
        goto label_32a1fc;
    }
    ctx->pc = 0x32A1F4u;
    SET_GPR_U32(ctx, 31, 0x32A1FCu);
    ctx->pc = 0x32A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1F4u;
    // 0x32a1f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A1F4u, 0x32A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1FCu;
label_32a1fc:
    // 0x32a1fc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a200:
    // 0x32a200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a204:
    // 0x32a204: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a208:
    // 0x32a208: 0xc0485ea  jal         func_1217A8
label_32a20c:
    if (ctx->pc == 0x32A20Cu) {
        ctx->pc = 0x32A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A208u;
        // 0x32a20c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A210u;
        goto label_32a210;
    }
    ctx->pc = 0x32A208u;
    SET_GPR_U32(ctx, 31, 0x32A210u);
    ctx->pc = 0x32A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A208u;
    // 0x32a20c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1217A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1217A8u, 0x32A208u, 0x32A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A210u;
label_32a210:
    // 0x32a210: 0x10000702  b           . + 4 + (0x702 << 2)
label_32a214:
    if (ctx->pc == 0x32A214u) {
        ctx->pc = 0x32A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A210u;
        // 0x32a214: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A218u;
        goto label_32a218;
    }
    ctx->pc = 0x32A210u;
    {
        const bool branch_taken_0x32a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A210u;
        // 0x32a214: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a210) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A218u;
label_32a218:
    // 0x32a218: 0xc0cdf2e  jal         func_337CB8
label_32a21c:
    if (ctx->pc == 0x32A21Cu) {
        ctx->pc = 0x32A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A218u;
        // 0x32a21c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A220u;
        goto label_32a220;
    }
    ctx->pc = 0x32A218u;
    SET_GPR_U32(ctx, 31, 0x32A220u);
    ctx->pc = 0x32A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A218u;
    // 0x32a21c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A218u, 0x32A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A220u;
label_32a220:
    // 0x32a220: 0xc0cdf52  jal         func_337D48
label_32a224:
    if (ctx->pc == 0x32A224u) {
        ctx->pc = 0x32A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A220u;
        // 0x32a224: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A228u;
        goto label_32a228;
    }
    ctx->pc = 0x32A220u;
    SET_GPR_U32(ctx, 31, 0x32A228u);
    ctx->pc = 0x32A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A220u;
    // 0x32a224: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A220u, 0x32A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A228u;
label_32a228:
    // 0x32a228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a22c:
    // 0x32a22c: 0xc0cdf2e  jal         func_337CB8
label_32a230:
    if (ctx->pc == 0x32A230u) {
        ctx->pc = 0x32A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A22Cu;
        // 0x32a230: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A234u;
        goto label_32a234;
    }
    ctx->pc = 0x32A22Cu;
    SET_GPR_U32(ctx, 31, 0x32A234u);
    ctx->pc = 0x32A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A22Cu;
    // 0x32a230: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A22Cu, 0x32A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A234u;
label_32a234:
    // 0x32a234: 0xc0cdf52  jal         func_337D48
label_32a238:
    if (ctx->pc == 0x32A238u) {
        ctx->pc = 0x32A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A234u;
        // 0x32a238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A23Cu;
        goto label_32a23c;
    }
    ctx->pc = 0x32A234u;
    SET_GPR_U32(ctx, 31, 0x32A23Cu);
    ctx->pc = 0x32A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A234u;
    // 0x32a238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A234u, 0x32A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A23Cu;
label_32a23c:
    // 0x32a23c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a240:
    // 0x32a240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a244:
    // 0x32a244: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a248:
    // 0x32a248: 0xc048cc6  jal         func_123318
label_32a24c:
    if (ctx->pc == 0x32A24Cu) {
        ctx->pc = 0x32A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A248u;
        // 0x32a24c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A250u;
        goto label_32a250;
    }
    ctx->pc = 0x32A248u;
    SET_GPR_U32(ctx, 31, 0x32A250u);
    ctx->pc = 0x32A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A248u;
    // 0x32a24c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123318u, 0x32A248u, 0x32A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A250u;
label_32a250:
    // 0x32a250: 0x100006f2  b           . + 4 + (0x6F2 << 2)
label_32a254:
    if (ctx->pc == 0x32A254u) {
        ctx->pc = 0x32A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A250u;
        // 0x32a254: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A258u;
        goto label_32a258;
    }
    ctx->pc = 0x32A250u;
    {
        const bool branch_taken_0x32a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A250u;
        // 0x32a254: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a250) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A258u;
label_32a258:
    // 0x32a258: 0xc0cdf2e  jal         func_337CB8
label_32a25c:
    if (ctx->pc == 0x32A25Cu) {
        ctx->pc = 0x32A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A258u;
        // 0x32a25c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A260u;
        goto label_32a260;
    }
    ctx->pc = 0x32A258u;
    SET_GPR_U32(ctx, 31, 0x32A260u);
    ctx->pc = 0x32A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A258u;
    // 0x32a25c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A258u, 0x32A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A260u;
label_32a260:
    // 0x32a260: 0xc0cdf52  jal         func_337D48
label_32a264:
    if (ctx->pc == 0x32A264u) {
        ctx->pc = 0x32A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A260u;
        // 0x32a264: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A268u;
        goto label_32a268;
    }
    ctx->pc = 0x32A260u;
    SET_GPR_U32(ctx, 31, 0x32A268u);
    ctx->pc = 0x32A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A260u;
    // 0x32a264: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A260u, 0x32A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A268u;
label_32a268:
    // 0x32a268: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a26c:
    // 0x32a26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a270:
    // 0x32a270: 0xc048ce2  jal         func_123388
label_32a274:
    if (ctx->pc == 0x32A274u) {
        ctx->pc = 0x32A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A270u;
        // 0x32a274: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A278u;
        goto label_32a278;
    }
    ctx->pc = 0x32A270u;
    SET_GPR_U32(ctx, 31, 0x32A278u);
    ctx->pc = 0x32A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A270u;
    // 0x32a274: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123388u, 0x32A270u, 0x32A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A278u;
label_32a278:
    // 0x32a278: 0x100006fe  b           . + 4 + (0x6FE << 2)
label_32a27c:
    if (ctx->pc == 0x32A27Cu) {
        ctx->pc = 0x32A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A278u;
        // 0x32a27c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A280u;
        goto label_32a280;
    }
    ctx->pc = 0x32A278u;
    {
        const bool branch_taken_0x32a278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A278u;
        // 0x32a27c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a278) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A280u;
label_32a280:
    // 0x32a280: 0xc0cdf40  jal         func_337D00
label_32a284:
    if (ctx->pc == 0x32A284u) {
        ctx->pc = 0x32A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A280u;
        // 0x32a284: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A288u;
        goto label_32a288;
    }
    ctx->pc = 0x32A280u;
    SET_GPR_U32(ctx, 31, 0x32A288u);
    ctx->pc = 0x32A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A280u;
    // 0x32a284: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A280u, 0x32A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A288u;
label_32a288:
    // 0x32a288: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32a288u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32a28c:
    // 0x32a28c: 0xc0cdf2e  jal         func_337CB8
label_32a290:
    if (ctx->pc == 0x32A290u) {
        ctx->pc = 0x32A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A28Cu;
        // 0x32a290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A294u;
        goto label_32a294;
    }
    ctx->pc = 0x32A28Cu;
    SET_GPR_U32(ctx, 31, 0x32A294u);
    ctx->pc = 0x32A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A28Cu;
    // 0x32a290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A28Cu, 0x32A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A294u;
label_32a294:
    // 0x32a294: 0xc0cdf52  jal         func_337D48
label_32a298:
    if (ctx->pc == 0x32A298u) {
        ctx->pc = 0x32A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A294u;
        // 0x32a298: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A29Cu;
        goto label_32a29c;
    }
    ctx->pc = 0x32A294u;
    SET_GPR_U32(ctx, 31, 0x32A29Cu);
    ctx->pc = 0x32A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A294u;
    // 0x32a298: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A294u, 0x32A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A29Cu;
label_32a29c:
    // 0x32a29c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a2a0:
    // 0x32a2a0: 0xc0cdf2e  jal         func_337CB8
label_32a2a4:
    if (ctx->pc == 0x32A2A4u) {
        ctx->pc = 0x32A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2A0u;
        // 0x32a2a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2A8u;
        goto label_32a2a8;
    }
    ctx->pc = 0x32A2A0u;
    SET_GPR_U32(ctx, 31, 0x32A2A8u);
    ctx->pc = 0x32A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2A0u;
    // 0x32a2a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A2A0u, 0x32A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2A8u;
label_32a2a8:
    // 0x32a2a8: 0xc0cdf52  jal         func_337D48
label_32a2ac:
    if (ctx->pc == 0x32A2ACu) {
        ctx->pc = 0x32A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2A8u;
        // 0x32a2ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2B0u;
        goto label_32a2b0;
    }
    ctx->pc = 0x32A2A8u;
    SET_GPR_U32(ctx, 31, 0x32A2B0u);
    ctx->pc = 0x32A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2A8u;
    // 0x32a2ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A2A8u, 0x32A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2B0u;
label_32a2b0:
    // 0x32a2b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a2b4:
    // 0x32a2b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a2b8:
    // 0x32a2b8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a2bc:
    // 0x32a2bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a2c0:
    // 0x32a2c0: 0xc048d1e  jal         func_123478
label_32a2c4:
    if (ctx->pc == 0x32A2C4u) {
        ctx->pc = 0x32A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2C0u;
        // 0x32a2c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2C8u;
        goto label_32a2c8;
    }
    ctx->pc = 0x32A2C0u;
    SET_GPR_U32(ctx, 31, 0x32A2C8u);
    ctx->pc = 0x32A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2C0u;
    // 0x32a2c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x123478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123478u, 0x32A2C0u, 0x32A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2C8u;
label_32a2c8:
    // 0x32a2c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32a2cc:
    // 0x32a2cc: 0x144306e9  bne         $v0, $v1, . + 4 + (0x6E9 << 2)
label_32a2d0:
    if (ctx->pc == 0x32A2D0u) {
        ctx->pc = 0x32A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2CCu;
        // 0x32a2d0: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2D4u;
        goto label_32a2d4;
    }
    ctx->pc = 0x32A2CCu;
    {
        const bool branch_taken_0x32a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2CCu;
        // 0x32a2d0: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2cc) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A2D4u;
label_32a2d4:
    // 0x32a2d4: 0x100006e7  b           . + 4 + (0x6E7 << 2)
label_32a2d8:
    if (ctx->pc == 0x32A2D8u) {
        ctx->pc = 0x32A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2D4u;
        // 0x32a2d8: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2DCu;
        goto label_32a2dc;
    }
    ctx->pc = 0x32A2D4u;
    {
        const bool branch_taken_0x32a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2D4u;
        // 0x32a2d8: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2d4) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A2DCu;
label_32a2dc:
    // 0x32a2dc: 0xc0cdf2e  jal         func_337CB8
label_32a2e0:
    if (ctx->pc == 0x32A2E0u) {
        ctx->pc = 0x32A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2DCu;
        // 0x32a2e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2E4u;
        goto label_32a2e4;
    }
    ctx->pc = 0x32A2DCu;
    SET_GPR_U32(ctx, 31, 0x32A2E4u);
    ctx->pc = 0x32A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2DCu;
    // 0x32a2e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A2DCu, 0x32A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2E4u;
label_32a2e4:
    // 0x32a2e4: 0xc0cdf52  jal         func_337D48
label_32a2e8:
    if (ctx->pc == 0x32A2E8u) {
        ctx->pc = 0x32A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2E4u;
        // 0x32a2e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2ECu;
        goto label_32a2ec;
    }
    ctx->pc = 0x32A2E4u;
    SET_GPR_U32(ctx, 31, 0x32A2ECu);
    ctx->pc = 0x32A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2E4u;
    // 0x32a2e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A2E4u, 0x32A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2ECu;
label_32a2ec:
    // 0x32a2ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a2f0:
    // 0x32a2f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a2f4:
    // 0x32a2f4: 0xc048de8  jal         func_1237A0
label_32a2f8:
    if (ctx->pc == 0x32A2F8u) {
        ctx->pc = 0x32A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2F4u;
        // 0x32a2f8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A2FCu;
        goto label_32a2fc;
    }
    ctx->pc = 0x32A2F4u;
    SET_GPR_U32(ctx, 31, 0x32A2FCu);
    ctx->pc = 0x32A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A2F4u;
    // 0x32a2f8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237A0u, 0x32A2F4u, 0x32A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A2FCu;
label_32a2fc:
    // 0x32a2fc: 0x100006c7  b           . + 4 + (0x6C7 << 2)
label_32a300:
    if (ctx->pc == 0x32A300u) {
        ctx->pc = 0x32A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2FCu;
        // 0x32a300: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A304u;
        goto label_32a304;
    }
    ctx->pc = 0x32A2FCu;
    {
        const bool branch_taken_0x32a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2FCu;
        // 0x32a300: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2fc) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A304u;
label_32a304:
    // 0x32a304: 0xc0cdf2e  jal         func_337CB8
label_32a308:
    if (ctx->pc == 0x32A308u) {
        ctx->pc = 0x32A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A304u;
        // 0x32a308: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A30Cu;
        goto label_32a30c;
    }
    ctx->pc = 0x32A304u;
    SET_GPR_U32(ctx, 31, 0x32A30Cu);
    ctx->pc = 0x32A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A304u;
    // 0x32a308: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A304u, 0x32A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A30Cu;
label_32a30c:
    // 0x32a30c: 0xc0cdf52  jal         func_337D48
label_32a310:
    if (ctx->pc == 0x32A310u) {
        ctx->pc = 0x32A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A30Cu;
        // 0x32a310: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A314u;
        goto label_32a314;
    }
    ctx->pc = 0x32A30Cu;
    SET_GPR_U32(ctx, 31, 0x32A314u);
    ctx->pc = 0x32A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A30Cu;
    // 0x32a310: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A30Cu, 0x32A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A314u;
label_32a314:
    // 0x32a314: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a318:
    // 0x32a318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a31c:
    // 0x32a31c: 0xc048dfc  jal         func_1237F0
label_32a320:
    if (ctx->pc == 0x32A320u) {
        ctx->pc = 0x32A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A31Cu;
        // 0x32a320: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A324u;
        goto label_32a324;
    }
    ctx->pc = 0x32A31Cu;
    SET_GPR_U32(ctx, 31, 0x32A324u);
    ctx->pc = 0x32A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A31Cu;
    // 0x32a320: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237F0u, 0x32A31Cu, 0x32A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A324u;
label_32a324:
    // 0x32a324: 0x100006bd  b           . + 4 + (0x6BD << 2)
label_32a328:
    if (ctx->pc == 0x32A328u) {
        ctx->pc = 0x32A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A324u;
        // 0x32a328: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A32Cu;
        goto label_32a32c;
    }
    ctx->pc = 0x32A324u;
    {
        const bool branch_taken_0x32a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A324u;
        // 0x32a328: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a324) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A32Cu;
label_32a32c:
    // 0x32a32c: 0xc0cdf2e  jal         func_337CB8
label_32a330:
    if (ctx->pc == 0x32A330u) {
        ctx->pc = 0x32A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A32Cu;
        // 0x32a330: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A334u;
        goto label_32a334;
    }
    ctx->pc = 0x32A32Cu;
    SET_GPR_U32(ctx, 31, 0x32A334u);
    ctx->pc = 0x32A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A32Cu;
    // 0x32a330: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A32Cu, 0x32A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A334u;
label_32a334:
    // 0x32a334: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32a334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a338:
    // 0x32a338: 0xc0cdf2e  jal         func_337CB8
label_32a33c:
    if (ctx->pc == 0x32A33Cu) {
        ctx->pc = 0x32A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A338u;
        // 0x32a33c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A340u;
        goto label_32a340;
    }
    ctx->pc = 0x32A338u;
    SET_GPR_U32(ctx, 31, 0x32A340u);
    ctx->pc = 0x32A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A338u;
    // 0x32a33c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A338u, 0x32A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A340u;
label_32a340:
    // 0x32a340: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32a340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a344:
    // 0x32a344: 0xc0cdf2e  jal         func_337CB8
label_32a348:
    if (ctx->pc == 0x32A348u) {
        ctx->pc = 0x32A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A344u;
        // 0x32a348: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A34Cu;
        goto label_32a34c;
    }
    ctx->pc = 0x32A344u;
    SET_GPR_U32(ctx, 31, 0x32A34Cu);
    ctx->pc = 0x32A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A344u;
    // 0x32a348: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A344u, 0x32A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A34Cu;
label_32a34c:
    // 0x32a34c: 0xc0cdf52  jal         func_337D48
label_32a350:
    if (ctx->pc == 0x32A350u) {
        ctx->pc = 0x32A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A34Cu;
        // 0x32a350: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A354u;
        goto label_32a354;
    }
    ctx->pc = 0x32A34Cu;
    SET_GPR_U32(ctx, 31, 0x32A354u);
    ctx->pc = 0x32A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A34Cu;
    // 0x32a350: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A34Cu, 0x32A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A354u;
label_32a354:
    // 0x32a354: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32a354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a358:
    // 0x32a358: 0xc0cdf2e  jal         func_337CB8
label_32a35c:
    if (ctx->pc == 0x32A35Cu) {
        ctx->pc = 0x32A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A358u;
        // 0x32a35c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A360u;
        goto label_32a360;
    }
    ctx->pc = 0x32A358u;
    SET_GPR_U32(ctx, 31, 0x32A360u);
    ctx->pc = 0x32A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A358u;
    // 0x32a35c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A358u, 0x32A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A360u;
label_32a360:
    // 0x32a360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a364:
    // 0x32a364: 0xc0cdf2e  jal         func_337CB8
label_32a368:
    if (ctx->pc == 0x32A368u) {
        ctx->pc = 0x32A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A364u;
        // 0x32a368: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A36Cu;
        goto label_32a36c;
    }
    ctx->pc = 0x32A364u;
    SET_GPR_U32(ctx, 31, 0x32A36Cu);
    ctx->pc = 0x32A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A364u;
    // 0x32a368: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A364u, 0x32A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A36Cu;
label_32a36c:
    // 0x32a36c: 0xc0cdf52  jal         func_337D48
label_32a370:
    if (ctx->pc == 0x32A370u) {
        ctx->pc = 0x32A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A36Cu;
        // 0x32a370: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A374u;
        goto label_32a374;
    }
    ctx->pc = 0x32A36Cu;
    SET_GPR_U32(ctx, 31, 0x32A374u);
    ctx->pc = 0x32A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A36Cu;
    // 0x32a370: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A36Cu, 0x32A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A374u;
label_32a374:
    // 0x32a374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a378:
    // 0x32a378: 0xc0cdf2e  jal         func_337CB8
label_32a37c:
    if (ctx->pc == 0x32A37Cu) {
        ctx->pc = 0x32A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A378u;
        // 0x32a37c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A380u;
        goto label_32a380;
    }
    ctx->pc = 0x32A378u;
    SET_GPR_U32(ctx, 31, 0x32A380u);
    ctx->pc = 0x32A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A378u;
    // 0x32a37c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A378u, 0x32A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A380u;
label_32a380:
    // 0x32a380: 0xc0cdf52  jal         func_337D48
label_32a384:
    if (ctx->pc == 0x32A384u) {
        ctx->pc = 0x32A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A380u;
        // 0x32a384: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A388u;
        goto label_32a388;
    }
    ctx->pc = 0x32A380u;
    SET_GPR_U32(ctx, 31, 0x32A388u);
    ctx->pc = 0x32A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A380u;
    // 0x32a384: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A380u, 0x32A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A388u;
label_32a388:
    // 0x32a388: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a38c:
    // 0x32a38c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a390:
    // 0x32a390: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a394:
    // 0x32a394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a398:
    // 0x32a398: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32a398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a39c:
    // 0x32a39c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32a39cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a3a0:
    // 0x32a3a0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32a3a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32a3a4:
    // 0x32a3a4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x32a3a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a3a8:
    // 0x32a3a8: 0xc048906  jal         func_122418
label_32a3ac:
    if (ctx->pc == 0x32A3ACu) {
        ctx->pc = 0x32A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3A8u;
        // 0x32a3ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3B0u;
        goto label_32a3b0;
    }
    ctx->pc = 0x32A3A8u;
    SET_GPR_U32(ctx, 31, 0x32A3B0u);
    ctx->pc = 0x32A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3A8u;
    // 0x32a3ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122418u, 0x32A3A8u, 0x32A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3B0u;
label_32a3b0:
    // 0x32a3b0: 0x1000069a  b           . + 4 + (0x69A << 2)
label_32a3b4:
    if (ctx->pc == 0x32A3B4u) {
        ctx->pc = 0x32A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B0u;
        // 0x32a3b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3B8u;
        goto label_32a3b8;
    }
    ctx->pc = 0x32A3B0u;
    {
        const bool branch_taken_0x32a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B0u;
        // 0x32a3b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3b0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A3B8u;
label_32a3b8:
    // 0x32a3b8: 0xc0cdf2e  jal         func_337CB8
label_32a3bc:
    if (ctx->pc == 0x32A3BCu) {
        ctx->pc = 0x32A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B8u;
        // 0x32a3bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3C0u;
        goto label_32a3c0;
    }
    ctx->pc = 0x32A3B8u;
    SET_GPR_U32(ctx, 31, 0x32A3C0u);
    ctx->pc = 0x32A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3B8u;
    // 0x32a3bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A3B8u, 0x32A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3C0u;
label_32a3c0:
    // 0x32a3c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x32a3c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a3c4:
    // 0x32a3c4: 0xc0cdf2e  jal         func_337CB8
label_32a3c8:
    if (ctx->pc == 0x32A3C8u) {
        ctx->pc = 0x32A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3C4u;
        // 0x32a3c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3CCu;
        goto label_32a3cc;
    }
    ctx->pc = 0x32A3C4u;
    SET_GPR_U32(ctx, 31, 0x32A3CCu);
    ctx->pc = 0x32A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3C4u;
    // 0x32a3c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A3C4u, 0x32A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3CCu;
label_32a3cc:
    // 0x32a3cc: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x32a3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32a3d0:
    // 0x32a3d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32a3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a3d4:
    // 0x32a3d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32a3d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a3d8:
    // 0x32a3d8: 0xc0cdee8  jal         func_337BA0
label_32a3dc:
    if (ctx->pc == 0x32A3DCu) {
        ctx->pc = 0x32A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3D8u;
        // 0x32a3dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3E0u;
        goto label_32a3e0;
    }
    ctx->pc = 0x32A3D8u;
    SET_GPR_U32(ctx, 31, 0x32A3E0u);
    ctx->pc = 0x32A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3D8u;
    // 0x32a3dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A3D8u, 0x32A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3E0u;
label_32a3e0:
    // 0x32a3e0: 0xc0cdf2e  jal         func_337CB8
label_32a3e4:
    if (ctx->pc == 0x32A3E4u) {
        ctx->pc = 0x32A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3E0u;
        // 0x32a3e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3E8u;
        goto label_32a3e8;
    }
    ctx->pc = 0x32A3E0u;
    SET_GPR_U32(ctx, 31, 0x32A3E8u);
    ctx->pc = 0x32A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3E0u;
    // 0x32a3e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A3E0u, 0x32A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3E8u;
label_32a3e8:
    // 0x32a3e8: 0xc0cdf52  jal         func_337D48
label_32a3ec:
    if (ctx->pc == 0x32A3ECu) {
        ctx->pc = 0x32A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3E8u;
        // 0x32a3ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3F0u;
        goto label_32a3f0;
    }
    ctx->pc = 0x32A3E8u;
    SET_GPR_U32(ctx, 31, 0x32A3F0u);
    ctx->pc = 0x32A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3E8u;
    // 0x32a3ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A3E8u, 0x32A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3F0u;
label_32a3f0:
    // 0x32a3f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32a3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a3f4:
    // 0x32a3f4: 0xc0cdf2e  jal         func_337CB8
label_32a3f8:
    if (ctx->pc == 0x32A3F8u) {
        ctx->pc = 0x32A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3F4u;
        // 0x32a3f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3FCu;
        goto label_32a3fc;
    }
    ctx->pc = 0x32A3F4u;
    SET_GPR_U32(ctx, 31, 0x32A3FCu);
    ctx->pc = 0x32A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3F4u;
    // 0x32a3f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A3F4u, 0x32A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3FCu;
label_32a3fc:
    // 0x32a3fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a400:
    // 0x32a400: 0xc0cdf2e  jal         func_337CB8
label_32a404:
    if (ctx->pc == 0x32A404u) {
        ctx->pc = 0x32A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A400u;
        // 0x32a404: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A408u;
        goto label_32a408;
    }
    ctx->pc = 0x32A400u;
    SET_GPR_U32(ctx, 31, 0x32A408u);
    ctx->pc = 0x32A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A400u;
    // 0x32a404: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A400u, 0x32A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A408u;
label_32a408:
    // 0x32a408: 0xc0cdf52  jal         func_337D48
label_32a40c:
    if (ctx->pc == 0x32A40Cu) {
        ctx->pc = 0x32A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A408u;
        // 0x32a40c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A410u;
        goto label_32a410;
    }
    ctx->pc = 0x32A408u;
    SET_GPR_U32(ctx, 31, 0x32A410u);
    ctx->pc = 0x32A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A408u;
    // 0x32a40c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A408u, 0x32A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A410u;
label_32a410:
    // 0x32a410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a414:
    // 0x32a414: 0xc0cdf2e  jal         func_337CB8
label_32a418:
    if (ctx->pc == 0x32A418u) {
        ctx->pc = 0x32A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A414u;
        // 0x32a418: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A41Cu;
        goto label_32a41c;
    }
    ctx->pc = 0x32A414u;
    SET_GPR_U32(ctx, 31, 0x32A41Cu);
    ctx->pc = 0x32A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A414u;
    // 0x32a418: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A414u, 0x32A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A41Cu;
label_32a41c:
    // 0x32a41c: 0xc0cdf52  jal         func_337D48
label_32a420:
    if (ctx->pc == 0x32A420u) {
        ctx->pc = 0x32A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A41Cu;
        // 0x32a420: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A424u;
        goto label_32a424;
    }
    ctx->pc = 0x32A41Cu;
    SET_GPR_U32(ctx, 31, 0x32A424u);
    ctx->pc = 0x32A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A41Cu;
    // 0x32a420: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A41Cu, 0x32A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A424u;
label_32a424:
    // 0x32a424: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a428:
    // 0x32a428: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a42c:
    // 0x32a42c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a430:
    // 0x32a430: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a434:
    // 0x32a434: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32a434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a438:
    // 0x32a438: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32a438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a43c:
    // 0x32a43c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32a43cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32a440:
    // 0x32a440: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x32a440u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a444:
    // 0x32a444: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x32a444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32a448:
    // 0x32a448: 0xc048912  jal         func_122448
label_32a44c:
    if (ctx->pc == 0x32A44Cu) {
        ctx->pc = 0x32A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A448u;
        // 0x32a44c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A450u;
        goto label_32a450;
    }
    ctx->pc = 0x32A448u;
    SET_GPR_U32(ctx, 31, 0x32A450u);
    ctx->pc = 0x32A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A448u;
    // 0x32a44c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122448u, 0x32A448u, 0x32A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A450u;
label_32a450:
    // 0x32a450: 0x10000672  b           . + 4 + (0x672 << 2)
label_32a454:
    if (ctx->pc == 0x32A454u) {
        ctx->pc = 0x32A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A450u;
        // 0x32a454: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A458u;
        goto label_32a458;
    }
    ctx->pc = 0x32A450u;
    {
        const bool branch_taken_0x32a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A450u;
        // 0x32a454: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a450) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A458u;
label_32a458:
    // 0x32a458: 0xc0cdf2e  jal         func_337CB8
label_32a45c:
    if (ctx->pc == 0x32A45Cu) {
        ctx->pc = 0x32A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A458u;
        // 0x32a45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A460u;
        goto label_32a460;
    }
    ctx->pc = 0x32A458u;
    SET_GPR_U32(ctx, 31, 0x32A460u);
    ctx->pc = 0x32A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A458u;
    // 0x32a45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A458u, 0x32A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A460u;
label_32a460:
    // 0x32a460: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a464:
    // 0x32a464: 0xc0cdf2e  jal         func_337CB8
label_32a468:
    if (ctx->pc == 0x32A468u) {
        ctx->pc = 0x32A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A464u;
        // 0x32a468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A46Cu;
        goto label_32a46c;
    }
    ctx->pc = 0x32A464u;
    SET_GPR_U32(ctx, 31, 0x32A46Cu);
    ctx->pc = 0x32A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A464u;
    // 0x32a468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A464u, 0x32A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A46Cu;
label_32a46c:
    // 0x32a46c: 0xc0cdf52  jal         func_337D48
label_32a470:
    if (ctx->pc == 0x32A470u) {
        ctx->pc = 0x32A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A46Cu;
        // 0x32a470: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A474u;
        goto label_32a474;
    }
    ctx->pc = 0x32A46Cu;
    SET_GPR_U32(ctx, 31, 0x32A474u);
    ctx->pc = 0x32A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A46Cu;
    // 0x32a470: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A46Cu, 0x32A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A474u;
label_32a474:
    // 0x32a474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a478:
    // 0x32a478: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a47c:
    // 0x32a47c: 0xc0cdbf6  jal         func_336FD8
label_32a480:
    if (ctx->pc == 0x32A480u) {
        ctx->pc = 0x32A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A47Cu;
        // 0x32a480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A484u;
        goto label_32a484;
    }
    ctx->pc = 0x32A47Cu;
    SET_GPR_U32(ctx, 31, 0x32A484u);
    ctx->pc = 0x32A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A47Cu;
    // 0x32a480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x32A47Cu, 0x32A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A484u;
label_32a484:
    // 0x32a484: 0x5040067b  beql        $v0, $zero, . + 4 + (0x67B << 2)
label_32a488:
    if (ctx->pc == 0x32A488u) {
        ctx->pc = 0x32A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A484u;
        // 0x32a488: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A48Cu;
        goto label_32a48c;
    }
    ctx->pc = 0x32A484u;
    {
        const bool branch_taken_0x32a484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a484) {
            ctx->pc = 0x32A488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A484u;
            // 0x32a488: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A48Cu;
label_32a48c:
    // 0x32a48c: 0xc085d4e  jal         func_217538
label_32a490:
    if (ctx->pc == 0x32A490u) {
        ctx->pc = 0x32A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A48Cu;
        // 0x32a490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A494u;
        goto label_32a494;
    }
    ctx->pc = 0x32A48Cu;
    SET_GPR_U32(ctx, 31, 0x32A494u);
    ctx->pc = 0x32A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A48Cu;
    // 0x32a490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x32A48Cu, 0x32A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A494u;
label_32a494:
    // 0x32a494: 0x1040ff8f  beqz        $v0, . + 4 + (-0x71 << 2)
label_32a498:
    if (ctx->pc == 0x32A498u) {
        ctx->pc = 0x32A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A494u;
        // 0x32a498: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A49Cu;
        goto label_32a49c;
    }
    ctx->pc = 0x32A494u;
    {
        const bool branch_taken_0x32a494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A494u;
        // 0x32a498: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a494) {
            ctx->pc = 0x32A2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a2d4;
        }
    }
    ctx->pc = 0x32A49Cu;
label_32a49c:
    // 0x32a49c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32a49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a4a0:
    // 0x32a4a0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a4a4:
    // 0x32a4a4: 0xc048e24  jal         func_123890
label_32a4a8:
    if (ctx->pc == 0x32A4A8u) {
        ctx->pc = 0x32A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4A4u;
        // 0x32a4a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4ACu;
        goto label_32a4ac;
    }
    ctx->pc = 0x32A4A4u;
    SET_GPR_U32(ctx, 31, 0x32A4ACu);
    ctx->pc = 0x32A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4A4u;
    // 0x32a4a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123890u, 0x32A4A4u, 0x32A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4ACu;
label_32a4ac:
    // 0x32a4ac: 0x1000065b  b           . + 4 + (0x65B << 2)
label_32a4b0:
    if (ctx->pc == 0x32A4B0u) {
        ctx->pc = 0x32A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4ACu;
        // 0x32a4b0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4B4u;
        goto label_32a4b4;
    }
    ctx->pc = 0x32A4ACu;
    {
        const bool branch_taken_0x32a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4ACu;
        // 0x32a4b0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4ac) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A4B4u;
label_32a4b4:
    // 0x32a4b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a4b8:
    // 0x32a4b8: 0xc0cdf2e  jal         func_337CB8
label_32a4bc:
    if (ctx->pc == 0x32A4BCu) {
        ctx->pc = 0x32A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4B8u;
        // 0x32a4bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4C0u;
        goto label_32a4c0;
    }
    ctx->pc = 0x32A4B8u;
    SET_GPR_U32(ctx, 31, 0x32A4C0u);
    ctx->pc = 0x32A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4B8u;
    // 0x32a4bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A4B8u, 0x32A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4C0u;
label_32a4c0:
    // 0x32a4c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a4c4:
    // 0x32a4c4: 0xc0cdf2e  jal         func_337CB8
label_32a4c8:
    if (ctx->pc == 0x32A4C8u) {
        ctx->pc = 0x32A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4C4u;
        // 0x32a4c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4CCu;
        goto label_32a4cc;
    }
    ctx->pc = 0x32A4C4u;
    SET_GPR_U32(ctx, 31, 0x32A4CCu);
    ctx->pc = 0x32A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4C4u;
    // 0x32a4c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A4C4u, 0x32A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4CCu;
label_32a4cc:
    // 0x32a4cc: 0xc0cdf52  jal         func_337D48
label_32a4d0:
    if (ctx->pc == 0x32A4D0u) {
        ctx->pc = 0x32A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4CCu;
        // 0x32a4d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4D4u;
        goto label_32a4d4;
    }
    ctx->pc = 0x32A4CCu;
    SET_GPR_U32(ctx, 31, 0x32A4D4u);
    ctx->pc = 0x32A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4CCu;
    // 0x32a4d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A4CCu, 0x32A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4D4u;
label_32a4d4:
    // 0x32a4d4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_32a4d8:
    if (ctx->pc == 0x32A4D8u) {
        ctx->pc = 0x32A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4D4u;
        // 0x32a4d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4DCu;
        goto label_32a4dc;
    }
    ctx->pc = 0x32A4D4u;
    {
        const bool branch_taken_0x32a4d4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x32A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4D4u;
        // 0x32a4d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4d4) {
            ctx->pc = 0x32A4E4u;
            goto label_32a4e4;
        }
    }
    ctx->pc = 0x32A4DCu;
label_32a4dc:
    // 0x32a4dc: 0x118823  negu        $s1, $s1
    ctx->pc = 0x32a4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_32a4e0:
    // 0x32a4e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x32a4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a4e4:
    // 0x32a4e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a4e8:
    // 0x32a4e8: 0xc0cdbf6  jal         func_336FD8
label_32a4ec:
    if (ctx->pc == 0x32A4ECu) {
        ctx->pc = 0x32A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4E8u;
        // 0x32a4ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4F0u;
        goto label_32a4f0;
    }
    ctx->pc = 0x32A4E8u;
    SET_GPR_U32(ctx, 31, 0x32A4F0u);
    ctx->pc = 0x32A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4E8u;
    // 0x32a4ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x32A4E8u, 0x32A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4F0u;
label_32a4f0:
    // 0x32a4f0: 0x50400660  beql        $v0, $zero, . + 4 + (0x660 << 2)
label_32a4f4:
    if (ctx->pc == 0x32A4F4u) {
        ctx->pc = 0x32A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4F0u;
        // 0x32a4f4: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A4F8u;
        goto label_32a4f8;
    }
    ctx->pc = 0x32A4F0u;
    {
        const bool branch_taken_0x32a4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a4f0) {
            ctx->pc = 0x32A4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A4F0u;
            // 0x32a4f4: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A4F8u;
label_32a4f8:
    // 0x32a4f8: 0xc085d4e  jal         func_217538
label_32a4fc:
    if (ctx->pc == 0x32A4FCu) {
        ctx->pc = 0x32A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4F8u;
        // 0x32a4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A500u;
        goto label_32a500;
    }
    ctx->pc = 0x32A4F8u;
    SET_GPR_U32(ctx, 31, 0x32A500u);
    ctx->pc = 0x32A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4F8u;
    // 0x32a4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x32A4F8u, 0x32A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A500u;
label_32a500:
    // 0x32a500: 0x1040ff74  beqz        $v0, . + 4 + (-0x8C << 2)
label_32a504:
    if (ctx->pc == 0x32A504u) {
        ctx->pc = 0x32A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A500u;
        // 0x32a504: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A508u;
        goto label_32a508;
    }
    ctx->pc = 0x32A500u;
    {
        const bool branch_taken_0x32a500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A500u;
        // 0x32a504: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a500) {
            ctx->pc = 0x32A2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a2d4;
        }
    }
    ctx->pc = 0x32A508u;
label_32a508:
    // 0x32a508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a50c:
    // 0x32a50c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a510:
    // 0x32a510: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32a510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a514:
    // 0x32a514: 0xc048e3c  jal         func_1238F0
label_32a518:
    if (ctx->pc == 0x32A518u) {
        ctx->pc = 0x32A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A514u;
        // 0x32a518: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A51Cu;
        goto label_32a51c;
    }
    ctx->pc = 0x32A514u;
    SET_GPR_U32(ctx, 31, 0x32A51Cu);
    ctx->pc = 0x32A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A514u;
    // 0x32a518: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F0u, 0x32A514u, 0x32A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A51Cu;
label_32a51c:
    // 0x32a51c: 0x1000063f  b           . + 4 + (0x63F << 2)
label_32a520:
    if (ctx->pc == 0x32A520u) {
        ctx->pc = 0x32A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A51Cu;
        // 0x32a520: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A524u;
        goto label_32a524;
    }
    ctx->pc = 0x32A51Cu;
    {
        const bool branch_taken_0x32a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A51Cu;
        // 0x32a520: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a51c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A524u;
label_32a524:
    // 0x32a524: 0xc0cdf2e  jal         func_337CB8
label_32a528:
    if (ctx->pc == 0x32A528u) {
        ctx->pc = 0x32A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A524u;
        // 0x32a528: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A52Cu;
        goto label_32a52c;
    }
    ctx->pc = 0x32A524u;
    SET_GPR_U32(ctx, 31, 0x32A52Cu);
    ctx->pc = 0x32A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A524u;
    // 0x32a528: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A524u, 0x32A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A52Cu;
label_32a52c:
    // 0x32a52c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a530:
    // 0x32a530: 0xc0cdf2e  jal         func_337CB8
label_32a534:
    if (ctx->pc == 0x32A534u) {
        ctx->pc = 0x32A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A530u;
        // 0x32a534: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A538u;
        goto label_32a538;
    }
    ctx->pc = 0x32A530u;
    SET_GPR_U32(ctx, 31, 0x32A538u);
    ctx->pc = 0x32A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A530u;
    // 0x32a534: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A530u, 0x32A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A538u;
label_32a538:
    // 0x32a538: 0xc0cdf52  jal         func_337D48
label_32a53c:
    if (ctx->pc == 0x32A53Cu) {
        ctx->pc = 0x32A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A538u;
        // 0x32a53c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A540u;
        goto label_32a540;
    }
    ctx->pc = 0x32A538u;
    SET_GPR_U32(ctx, 31, 0x32A540u);
    ctx->pc = 0x32A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A538u;
    // 0x32a53c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A538u, 0x32A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A540u;
label_32a540:
    // 0x32a540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a544:
    // 0x32a544: 0xc0cdf2e  jal         func_337CB8
label_32a548:
    if (ctx->pc == 0x32A548u) {
        ctx->pc = 0x32A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A544u;
        // 0x32a548: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A54Cu;
        goto label_32a54c;
    }
    ctx->pc = 0x32A544u;
    SET_GPR_U32(ctx, 31, 0x32A54Cu);
    ctx->pc = 0x32A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A544u;
    // 0x32a548: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A544u, 0x32A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A54Cu;
label_32a54c:
    // 0x32a54c: 0xc0cdf52  jal         func_337D48
label_32a550:
    if (ctx->pc == 0x32A550u) {
        ctx->pc = 0x32A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A54Cu;
        // 0x32a550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A554u;
        goto label_32a554;
    }
    ctx->pc = 0x32A54Cu;
    SET_GPR_U32(ctx, 31, 0x32A554u);
    ctx->pc = 0x32A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A54Cu;
    // 0x32a550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A54Cu, 0x32A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A554u;
label_32a554:
    // 0x32a554: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a558:
    // 0x32a558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a55c:
    // 0x32a55c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a560:
    // 0x32a560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a564:
    // 0x32a564: 0xc048d3a  jal         func_1234E8
label_32a568:
    if (ctx->pc == 0x32A568u) {
        ctx->pc = 0x32A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A564u;
        // 0x32a568: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A56Cu;
        goto label_32a56c;
    }
    ctx->pc = 0x32A564u;
    SET_GPR_U32(ctx, 31, 0x32A56Cu);
    ctx->pc = 0x32A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A564u;
    // 0x32a568: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1234E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1234E8u, 0x32A564u, 0x32A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A56Cu;
label_32a56c:
    // 0x32a56c: 0x1000062b  b           . + 4 + (0x62B << 2)
label_32a570:
    if (ctx->pc == 0x32A570u) {
        ctx->pc = 0x32A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A56Cu;
        // 0x32a570: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A574u;
        goto label_32a574;
    }
    ctx->pc = 0x32A56Cu;
    {
        const bool branch_taken_0x32a56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A56Cu;
        // 0x32a570: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a56c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A574u;
label_32a574:
    // 0x32a574: 0xc0cdf2e  jal         func_337CB8
label_32a578:
    if (ctx->pc == 0x32A578u) {
        ctx->pc = 0x32A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A574u;
        // 0x32a578: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A57Cu;
        goto label_32a57c;
    }
    ctx->pc = 0x32A574u;
    SET_GPR_U32(ctx, 31, 0x32A57Cu);
    ctx->pc = 0x32A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A574u;
    // 0x32a578: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A574u, 0x32A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A57Cu;
label_32a57c:
    // 0x32a57c: 0xc0cdf52  jal         func_337D48
label_32a580:
    if (ctx->pc == 0x32A580u) {
        ctx->pc = 0x32A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A57Cu;
        // 0x32a580: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A584u;
        goto label_32a584;
    }
    ctx->pc = 0x32A57Cu;
    SET_GPR_U32(ctx, 31, 0x32A584u);
    ctx->pc = 0x32A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A57Cu;
    // 0x32a580: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A57Cu, 0x32A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A584u;
label_32a584:
    // 0x32a584: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a588:
    // 0x32a588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a58c:
    // 0x32a58c: 0xc048e10  jal         func_123840
label_32a590:
    if (ctx->pc == 0x32A590u) {
        ctx->pc = 0x32A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A58Cu;
        // 0x32a590: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A594u;
        goto label_32a594;
    }
    ctx->pc = 0x32A58Cu;
    SET_GPR_U32(ctx, 31, 0x32A594u);
    ctx->pc = 0x32A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A58Cu;
    // 0x32a590: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123840u, 0x32A58Cu, 0x32A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A594u;
label_32a594:
    // 0x32a594: 0x10000621  b           . + 4 + (0x621 << 2)
label_32a598:
    if (ctx->pc == 0x32A598u) {
        ctx->pc = 0x32A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A594u;
        // 0x32a598: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A59Cu;
        goto label_32a59c;
    }
    ctx->pc = 0x32A594u;
    {
        const bool branch_taken_0x32a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A594u;
        // 0x32a598: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a594) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A59Cu;
label_32a59c:
    // 0x32a59c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a5a0:
    // 0x32a5a0: 0xc0cdec0  jal         func_337B00
label_32a5a4:
    if (ctx->pc == 0x32A5A4u) {
        ctx->pc = 0x32A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5A0u;
        // 0x32a5a4: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5A8u;
        goto label_32a5a8;
    }
    ctx->pc = 0x32A5A0u;
    SET_GPR_U32(ctx, 31, 0x32A5A8u);
    ctx->pc = 0x32A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5A0u;
    // 0x32a5a4: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32A5A0u, 0x32A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5A8u;
label_32a5a8:
    // 0x32a5a8: 0x2651bea8  addiu       $s1, $s2, -0x4158
    ctx->pc = 0x32a5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950568));
label_32a5ac:
    // 0x32a5ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a5b0:
    // 0x32a5b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a5b4:
    // 0x32a5b4: 0xc0cdc9a  jal         func_337268
label_32a5b8:
    if (ctx->pc == 0x32A5B8u) {
        ctx->pc = 0x32A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5B4u;
        // 0x32a5b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5BCu;
        goto label_32a5bc;
    }
    ctx->pc = 0x32A5B4u;
    SET_GPR_U32(ctx, 31, 0x32A5BCu);
    ctx->pc = 0x32A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5B4u;
    // 0x32a5b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337268u, 0x32A5B4u, 0x32A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5BCu;
label_32a5bc:
    // 0x32a5bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32a5c0:
    if (ctx->pc == 0x32A5C0u) {
        ctx->pc = 0x32A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5BCu;
        // 0x32a5c0: 0xaed1003c  sw          $s1, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5C4u;
        goto label_32a5c4;
    }
    ctx->pc = 0x32A5BCu;
    {
        const bool branch_taken_0x32a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a5bc) {
            ctx->pc = 0x32A5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A5BCu;
            // 0x32a5c0: 0xaed1003c  sw          $s1, 0x3C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A5DCu;
            goto label_32a5dc;
        }
    }
    ctx->pc = 0x32A5C4u;
label_32a5c4:
    // 0x32a5c4: 0xc08dff8  jal         func_237FE0
label_32a5c8:
    if (ctx->pc == 0x32A5C8u) {
        ctx->pc = 0x32A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5C4u;
        // 0x32a5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5CCu;
        goto label_32a5cc;
    }
    ctx->pc = 0x32A5C4u;
    SET_GPR_U32(ctx, 31, 0x32A5CCu);
    ctx->pc = 0x32A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5C4u;
    // 0x32a5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237FE0u, 0x32A5C4u, 0x32A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5CCu;
label_32a5cc:
    // 0x32a5cc: 0xc040ac8  jal         func_102B20
label_32a5d0:
    if (ctx->pc == 0x32A5D0u) {
        ctx->pc = 0x32A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5CCu;
        // 0x32a5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5D4u;
        goto label_32a5d4;
    }
    ctx->pc = 0x32A5CCu;
    SET_GPR_U32(ctx, 31, 0x32A5D4u);
    ctx->pc = 0x32A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5CCu;
    // 0x32a5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B20u, 0x32A5CCu, 0x32A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5D4u;
label_32a5d4:
    // 0x32a5d4: 0x42880b  movn        $s1, $v0, $v0
    ctx->pc = 0x32a5d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_32a5d8:
    // 0x32a5d8: 0xaed1003c  sw          $s1, 0x3C($s6)
    ctx->pc = 0x32a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 17));
label_32a5dc:
    // 0x32a5dc: 0xc0efc2e  jal         func_3BF0B8
label_32a5e0:
    if (ctx->pc == 0x32A5E0u) {
        ctx->pc = 0x32A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5DCu;
        // 0x32a5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5E4u;
        goto label_32a5e4;
    }
    ctx->pc = 0x32A5DCu;
    SET_GPR_U32(ctx, 31, 0x32A5E4u);
    ctx->pc = 0x32A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5DCu;
    // 0x32a5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x32A5DCu, 0x32A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5E4u;
label_32a5e4:
    // 0x32a5e4: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x32a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
label_32a5e8:
    // 0x32a5e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a5ec:
    // 0x32a5ec: 0xc0cdea8  jal         func_337AA0
label_32a5f0:
    if (ctx->pc == 0x32A5F0u) {
        ctx->pc = 0x32A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5ECu;
        // 0x32a5f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5F4u;
        goto label_32a5f4;
    }
    ctx->pc = 0x32A5ECu;
    SET_GPR_U32(ctx, 31, 0x32A5F4u);
    ctx->pc = 0x32A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5ECu;
    // 0x32a5f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x32A5ECu, 0x32A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5F4u;
label_32a5f4:
    // 0x32a5f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a5f8:
    // 0x32a5f8: 0xc0cdea8  jal         func_337AA0
label_32a5fc:
    if (ctx->pc == 0x32A5FCu) {
        ctx->pc = 0x32A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5F8u;
        // 0x32a5fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A600u;
        goto label_32a600;
    }
    ctx->pc = 0x32A5F8u;
    SET_GPR_U32(ctx, 31, 0x32A600u);
    ctx->pc = 0x32A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5F8u;
    // 0x32a5fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x32A5F8u, 0x32A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A600u;
label_32a600:
    // 0x32a600: 0x1000061d  b           . + 4 + (0x61D << 2)
label_32a604:
    if (ctx->pc == 0x32A604u) {
        ctx->pc = 0x32A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A600u;
        // 0x32a604: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A608u;
        goto label_32a608;
    }
    ctx->pc = 0x32A600u;
    {
        const bool branch_taken_0x32a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A600u;
        // 0x32a604: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a600) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A608u;
label_32a608:
    // 0x32a608: 0xc0cdf2e  jal         func_337CB8
label_32a60c:
    if (ctx->pc == 0x32A60Cu) {
        ctx->pc = 0x32A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A608u;
        // 0x32a60c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A610u;
        goto label_32a610;
    }
    ctx->pc = 0x32A608u;
    SET_GPR_U32(ctx, 31, 0x32A610u);
    ctx->pc = 0x32A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A608u;
    // 0x32a60c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A608u, 0x32A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A610u;
label_32a610:
    // 0x32a610: 0xc0cdf52  jal         func_337D48
label_32a614:
    if (ctx->pc == 0x32A614u) {
        ctx->pc = 0x32A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A610u;
        // 0x32a614: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A618u;
        goto label_32a618;
    }
    ctx->pc = 0x32A610u;
    SET_GPR_U32(ctx, 31, 0x32A618u);
    ctx->pc = 0x32A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A610u;
    // 0x32a614: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A610u, 0x32A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A618u;
label_32a618:
    // 0x32a618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a61c:
    // 0x32a61c: 0xc0cdf2e  jal         func_337CB8
label_32a620:
    if (ctx->pc == 0x32A620u) {
        ctx->pc = 0x32A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A61Cu;
        // 0x32a620: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A624u;
        goto label_32a624;
    }
    ctx->pc = 0x32A61Cu;
    SET_GPR_U32(ctx, 31, 0x32A624u);
    ctx->pc = 0x32A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A61Cu;
    // 0x32a620: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A61Cu, 0x32A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A624u;
label_32a624:
    // 0x32a624: 0xc0cdf52  jal         func_337D48
label_32a628:
    if (ctx->pc == 0x32A628u) {
        ctx->pc = 0x32A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A624u;
        // 0x32a628: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A62Cu;
        goto label_32a62c;
    }
    ctx->pc = 0x32A624u;
    SET_GPR_U32(ctx, 31, 0x32A62Cu);
    ctx->pc = 0x32A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A624u;
    // 0x32a628: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A624u, 0x32A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A62Cu;
label_32a62c:
    // 0x32a62c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a630:
    // 0x32a630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a634:
    // 0x32a634: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a638:
    // 0x32a638: 0xc048672  jal         func_1219C8
label_32a63c:
    if (ctx->pc == 0x32A63Cu) {
        ctx->pc = 0x32A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A638u;
        // 0x32a63c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A640u;
        goto label_32a640;
    }
    ctx->pc = 0x32A638u;
    SET_GPR_U32(ctx, 31, 0x32A640u);
    ctx->pc = 0x32A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A638u;
    // 0x32a63c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1219C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1219C8u, 0x32A638u, 0x32A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A640u;
label_32a640:
    // 0x32a640: 0x100005f6  b           . + 4 + (0x5F6 << 2)
label_32a644:
    if (ctx->pc == 0x32A644u) {
        ctx->pc = 0x32A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A640u;
        // 0x32a644: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A648u;
        goto label_32a648;
    }
    ctx->pc = 0x32A640u;
    {
        const bool branch_taken_0x32a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A640u;
        // 0x32a644: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a640) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A648u;
label_32a648:
    // 0x32a648: 0xc0cdf2e  jal         func_337CB8
label_32a64c:
    if (ctx->pc == 0x32A64Cu) {
        ctx->pc = 0x32A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A648u;
        // 0x32a64c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A650u;
        goto label_32a650;
    }
    ctx->pc = 0x32A648u;
    SET_GPR_U32(ctx, 31, 0x32A650u);
    ctx->pc = 0x32A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A648u;
    // 0x32a64c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A648u, 0x32A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A650u;
label_32a650:
    // 0x32a650: 0xc0cdf52  jal         func_337D48
label_32a654:
    if (ctx->pc == 0x32A654u) {
        ctx->pc = 0x32A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A650u;
        // 0x32a654: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A658u;
        goto label_32a658;
    }
    ctx->pc = 0x32A650u;
    SET_GPR_U32(ctx, 31, 0x32A658u);
    ctx->pc = 0x32A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A650u;
    // 0x32a654: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A650u, 0x32A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A658u;
label_32a658:
    // 0x32a658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a65c:
    // 0x32a65c: 0xc0cdf2e  jal         func_337CB8
label_32a660:
    if (ctx->pc == 0x32A660u) {
        ctx->pc = 0x32A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A65Cu;
        // 0x32a660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A664u;
        goto label_32a664;
    }
    ctx->pc = 0x32A65Cu;
    SET_GPR_U32(ctx, 31, 0x32A664u);
    ctx->pc = 0x32A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A65Cu;
    // 0x32a660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A65Cu, 0x32A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A664u;
label_32a664:
    // 0x32a664: 0xc0cdf52  jal         func_337D48
label_32a668:
    if (ctx->pc == 0x32A668u) {
        ctx->pc = 0x32A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A664u;
        // 0x32a668: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A66Cu;
        goto label_32a66c;
    }
    ctx->pc = 0x32A664u;
    SET_GPR_U32(ctx, 31, 0x32A66Cu);
    ctx->pc = 0x32A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A664u;
    // 0x32a668: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A664u, 0x32A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A66Cu;
label_32a66c:
    // 0x32a66c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a670:
    // 0x32a670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a674:
    // 0x32a674: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a678:
    // 0x32a678: 0xc04868e  jal         func_121A38
label_32a67c:
    if (ctx->pc == 0x32A67Cu) {
        ctx->pc = 0x32A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A678u;
        // 0x32a67c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A680u;
        goto label_32a680;
    }
    ctx->pc = 0x32A678u;
    SET_GPR_U32(ctx, 31, 0x32A680u);
    ctx->pc = 0x32A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A678u;
    // 0x32a67c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121A38u, 0x32A678u, 0x32A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A680u;
label_32a680:
    // 0x32a680: 0x100005e6  b           . + 4 + (0x5E6 << 2)
label_32a684:
    if (ctx->pc == 0x32A684u) {
        ctx->pc = 0x32A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A680u;
        // 0x32a684: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A688u;
        goto label_32a688;
    }
    ctx->pc = 0x32A680u;
    {
        const bool branch_taken_0x32a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A680u;
        // 0x32a684: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a680) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A688u;
label_32a688:
    // 0x32a688: 0xc0cdf2e  jal         func_337CB8
label_32a68c:
    if (ctx->pc == 0x32A68Cu) {
        ctx->pc = 0x32A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A688u;
        // 0x32a68c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A690u;
        goto label_32a690;
    }
    ctx->pc = 0x32A688u;
    SET_GPR_U32(ctx, 31, 0x32A690u);
    ctx->pc = 0x32A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A688u;
    // 0x32a68c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A688u, 0x32A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A690u;
label_32a690:
    // 0x32a690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a694:
    // 0x32a694: 0xc0cdf2e  jal         func_337CB8
label_32a698:
    if (ctx->pc == 0x32A698u) {
        ctx->pc = 0x32A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A694u;
        // 0x32a698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A69Cu;
        goto label_32a69c;
    }
    ctx->pc = 0x32A694u;
    SET_GPR_U32(ctx, 31, 0x32A69Cu);
    ctx->pc = 0x32A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A694u;
    // 0x32a698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A694u, 0x32A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A69Cu;
label_32a69c:
    // 0x32a69c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a6a0:
    // 0x32a6a0: 0xc0cdf2e  jal         func_337CB8
label_32a6a4:
    if (ctx->pc == 0x32A6A4u) {
        ctx->pc = 0x32A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6A0u;
        // 0x32a6a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6A8u;
        goto label_32a6a8;
    }
    ctx->pc = 0x32A6A0u;
    SET_GPR_U32(ctx, 31, 0x32A6A8u);
    ctx->pc = 0x32A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6A0u;
    // 0x32a6a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A6A0u, 0x32A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6A8u;
label_32a6a8:
    // 0x32a6a8: 0xc0cdf52  jal         func_337D48
label_32a6ac:
    if (ctx->pc == 0x32A6ACu) {
        ctx->pc = 0x32A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6A8u;
        // 0x32a6ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6B0u;
        goto label_32a6b0;
    }
    ctx->pc = 0x32A6A8u;
    SET_GPR_U32(ctx, 31, 0x32A6B0u);
    ctx->pc = 0x32A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6A8u;
    // 0x32a6ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A6A8u, 0x32A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6B0u;
label_32a6b0:
    // 0x32a6b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a6b4:
    // 0x32a6b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a6b8:
    // 0x32a6b8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a6bc:
    // 0x32a6bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a6c0:
    // 0x32a6c0: 0xc0490a6  jal         func_124298
label_32a6c4:
    if (ctx->pc == 0x32A6C4u) {
        ctx->pc = 0x32A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6C0u;
        // 0x32a6c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6C8u;
        goto label_32a6c8;
    }
    ctx->pc = 0x32A6C0u;
    SET_GPR_U32(ctx, 31, 0x32A6C8u);
    ctx->pc = 0x32A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6C0u;
    // 0x32a6c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124298u, 0x32A6C0u, 0x32A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6C8u;
label_32a6c8:
    // 0x32a6c8: 0x100005d4  b           . + 4 + (0x5D4 << 2)
label_32a6cc:
    if (ctx->pc == 0x32A6CCu) {
        ctx->pc = 0x32A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6C8u;
        // 0x32a6cc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6D0u;
        goto label_32a6d0;
    }
    ctx->pc = 0x32A6C8u;
    {
        const bool branch_taken_0x32a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6C8u;
        // 0x32a6cc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a6c8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A6D0u;
label_32a6d0:
    // 0x32a6d0: 0xc0cdf2e  jal         func_337CB8
label_32a6d4:
    if (ctx->pc == 0x32A6D4u) {
        ctx->pc = 0x32A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6D0u;
        // 0x32a6d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6D8u;
        goto label_32a6d8;
    }
    ctx->pc = 0x32A6D0u;
    SET_GPR_U32(ctx, 31, 0x32A6D8u);
    ctx->pc = 0x32A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6D0u;
    // 0x32a6d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A6D0u, 0x32A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6D8u;
label_32a6d8:
    // 0x32a6d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32a6d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a6dc:
    // 0x32a6dc: 0xc0cdf2e  jal         func_337CB8
label_32a6e0:
    if (ctx->pc == 0x32A6E0u) {
        ctx->pc = 0x32A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6DCu;
        // 0x32a6e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6E4u;
        goto label_32a6e4;
    }
    ctx->pc = 0x32A6DCu;
    SET_GPR_U32(ctx, 31, 0x32A6E4u);
    ctx->pc = 0x32A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6DCu;
    // 0x32a6e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A6DCu, 0x32A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6E4u;
label_32a6e4:
    // 0x32a6e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32a6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a6e8:
    // 0x32a6e8: 0xc0cdf2e  jal         func_337CB8
label_32a6ec:
    if (ctx->pc == 0x32A6ECu) {
        ctx->pc = 0x32A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6E8u;
        // 0x32a6ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6F0u;
        goto label_32a6f0;
    }
    ctx->pc = 0x32A6E8u;
    SET_GPR_U32(ctx, 31, 0x32A6F0u);
    ctx->pc = 0x32A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6E8u;
    // 0x32a6ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A6E8u, 0x32A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6F0u;
label_32a6f0:
    // 0x32a6f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a6f4:
    // 0x32a6f4: 0xc0cdf2e  jal         func_337CB8
label_32a6f8:
    if (ctx->pc == 0x32A6F8u) {
        ctx->pc = 0x32A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6F4u;
        // 0x32a6f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A6FCu;
        goto label_32a6fc;
    }
    ctx->pc = 0x32A6F4u;
    SET_GPR_U32(ctx, 31, 0x32A6FCu);
    ctx->pc = 0x32A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6F4u;
    // 0x32a6f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A6F4u, 0x32A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6FCu;
label_32a6fc:
    // 0x32a6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a700:
    // 0x32a700: 0xc0cdf2e  jal         func_337CB8
label_32a704:
    if (ctx->pc == 0x32A704u) {
        ctx->pc = 0x32A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A700u;
        // 0x32a704: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A708u;
        goto label_32a708;
    }
    ctx->pc = 0x32A700u;
    SET_GPR_U32(ctx, 31, 0x32A708u);
    ctx->pc = 0x32A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A700u;
    // 0x32a704: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A700u, 0x32A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A708u;
label_32a708:
    // 0x32a708: 0xc0cdf52  jal         func_337D48
label_32a70c:
    if (ctx->pc == 0x32A70Cu) {
        ctx->pc = 0x32A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A708u;
        // 0x32a70c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A710u;
        goto label_32a710;
    }
    ctx->pc = 0x32A708u;
    SET_GPR_U32(ctx, 31, 0x32A710u);
    ctx->pc = 0x32A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A708u;
    // 0x32a70c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A708u, 0x32A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A710u;
label_32a710:
    // 0x32a710: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a714:
    // 0x32a714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a718:
    // 0x32a718: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a71c:
    // 0x32a71c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a720:
    // 0x32a720: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32a720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a724:
    // 0x32a724: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32a724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a728:
    // 0x32a728: 0xc049078  jal         func_1241E0
label_32a72c:
    if (ctx->pc == 0x32A72Cu) {
        ctx->pc = 0x32A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A728u;
        // 0x32a72c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A730u;
        goto label_32a730;
    }
    ctx->pc = 0x32A728u;
    SET_GPR_U32(ctx, 31, 0x32A730u);
    ctx->pc = 0x32A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A728u;
    // 0x32a72c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1241E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1241E0u, 0x32A728u, 0x32A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A730u;
label_32a730:
    // 0x32a730: 0x100005ba  b           . + 4 + (0x5BA << 2)
label_32a734:
    if (ctx->pc == 0x32A734u) {
        ctx->pc = 0x32A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A730u;
        // 0x32a734: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A738u;
        goto label_32a738;
    }
    ctx->pc = 0x32A730u;
    {
        const bool branch_taken_0x32a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A730u;
        // 0x32a734: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a730) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A738u;
label_32a738:
    // 0x32a738: 0xc0cdf2e  jal         func_337CB8
label_32a73c:
    if (ctx->pc == 0x32A73Cu) {
        ctx->pc = 0x32A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A738u;
        // 0x32a73c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A740u;
        goto label_32a740;
    }
    ctx->pc = 0x32A738u;
    SET_GPR_U32(ctx, 31, 0x32A740u);
    ctx->pc = 0x32A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A738u;
    // 0x32a73c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A738u, 0x32A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A740u;
label_32a740:
    // 0x32a740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a744:
    // 0x32a744: 0xc0cdf2e  jal         func_337CB8
label_32a748:
    if (ctx->pc == 0x32A748u) {
        ctx->pc = 0x32A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A744u;
        // 0x32a748: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A74Cu;
        goto label_32a74c;
    }
    ctx->pc = 0x32A744u;
    SET_GPR_U32(ctx, 31, 0x32A74Cu);
    ctx->pc = 0x32A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A744u;
    // 0x32a748: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A744u, 0x32A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A74Cu;
label_32a74c:
    // 0x32a74c: 0xc0cdf52  jal         func_337D48
label_32a750:
    if (ctx->pc == 0x32A750u) {
        ctx->pc = 0x32A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A74Cu;
        // 0x32a750: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A754u;
        goto label_32a754;
    }
    ctx->pc = 0x32A74Cu;
    SET_GPR_U32(ctx, 31, 0x32A754u);
    ctx->pc = 0x32A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A74Cu;
    // 0x32a750: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A74Cu, 0x32A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A754u;
label_32a754:
    // 0x32a754: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a758:
    // 0x32a758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a75c:
    // 0x32a75c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a760:
    // 0x32a760: 0xc048fe0  jal         func_123F80
label_32a764:
    if (ctx->pc == 0x32A764u) {
        ctx->pc = 0x32A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A760u;
        // 0x32a764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A768u;
        goto label_32a768;
    }
    ctx->pc = 0x32A760u;
    SET_GPR_U32(ctx, 31, 0x32A768u);
    ctx->pc = 0x32A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A760u;
    // 0x32a764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123F80u, 0x32A760u, 0x32A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A768u;
label_32a768:
    // 0x32a768: 0x100005ac  b           . + 4 + (0x5AC << 2)
label_32a76c:
    if (ctx->pc == 0x32A76Cu) {
        ctx->pc = 0x32A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A768u;
        // 0x32a76c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A770u;
        goto label_32a770;
    }
    ctx->pc = 0x32A768u;
    {
        const bool branch_taken_0x32a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A768u;
        // 0x32a76c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a768) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A770u;
label_32a770:
    // 0x32a770: 0xc0cdf2e  jal         func_337CB8
label_32a774:
    if (ctx->pc == 0x32A774u) {
        ctx->pc = 0x32A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A770u;
        // 0x32a774: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A778u;
        goto label_32a778;
    }
    ctx->pc = 0x32A770u;
    SET_GPR_U32(ctx, 31, 0x32A778u);
    ctx->pc = 0x32A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A770u;
    // 0x32a774: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A770u, 0x32A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A778u;
label_32a778:
    // 0x32a778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32a778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a77c:
    // 0x32a77c: 0xc0cdf2e  jal         func_337CB8
label_32a780:
    if (ctx->pc == 0x32A780u) {
        ctx->pc = 0x32A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A77Cu;
        // 0x32a780: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A784u;
        goto label_32a784;
    }
    ctx->pc = 0x32A77Cu;
    SET_GPR_U32(ctx, 31, 0x32A784u);
    ctx->pc = 0x32A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A77Cu;
    // 0x32a780: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A77Cu, 0x32A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A784u;
label_32a784:
    // 0x32a784: 0xc0cdf52  jal         func_337D48
label_32a788:
    if (ctx->pc == 0x32A788u) {
        ctx->pc = 0x32A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A784u;
        // 0x32a788: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A78Cu;
        goto label_32a78c;
    }
    ctx->pc = 0x32A784u;
    SET_GPR_U32(ctx, 31, 0x32A78Cu);
    ctx->pc = 0x32A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A784u;
    // 0x32a788: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A784u, 0x32A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A78Cu;
label_32a78c:
    // 0x32a78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a790:
    // 0x32a790: 0xc0cdf2e  jal         func_337CB8
label_32a794:
    if (ctx->pc == 0x32A794u) {
        ctx->pc = 0x32A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A790u;
        // 0x32a794: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A798u;
        goto label_32a798;
    }
    ctx->pc = 0x32A790u;
    SET_GPR_U32(ctx, 31, 0x32A798u);
    ctx->pc = 0x32A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A790u;
    // 0x32a794: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A790u, 0x32A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A798u;
label_32a798:
    // 0x32a798: 0xc0cdf52  jal         func_337D48
label_32a79c:
    if (ctx->pc == 0x32A79Cu) {
        ctx->pc = 0x32A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A798u;
        // 0x32a79c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7A0u;
        goto label_32a7a0;
    }
    ctx->pc = 0x32A798u;
    SET_GPR_U32(ctx, 31, 0x32A7A0u);
    ctx->pc = 0x32A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A798u;
    // 0x32a79c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A798u, 0x32A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7A0u;
label_32a7a0:
    // 0x32a7a0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a7a4:
    // 0x32a7a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a7a8:
    // 0x32a7a8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a7ac:
    // 0x32a7ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32a7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a7b0:
    // 0x32a7b0: 0xc0486c6  jal         func_121B18
label_32a7b4:
    if (ctx->pc == 0x32A7B4u) {
        ctx->pc = 0x32A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7B0u;
        // 0x32a7b4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7B8u;
        goto label_32a7b8;
    }
    ctx->pc = 0x32A7B0u;
    SET_GPR_U32(ctx, 31, 0x32A7B8u);
    ctx->pc = 0x32A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7B0u;
    // 0x32a7b4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121B18u, 0x32A7B0u, 0x32A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7B8u;
label_32a7b8:
    // 0x32a7b8: 0x10000598  b           . + 4 + (0x598 << 2)
label_32a7bc:
    if (ctx->pc == 0x32A7BCu) {
        ctx->pc = 0x32A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7B8u;
        // 0x32a7bc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7C0u;
        goto label_32a7c0;
    }
    ctx->pc = 0x32A7B8u;
    {
        const bool branch_taken_0x32a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7B8u;
        // 0x32a7bc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a7b8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A7C0u;
label_32a7c0:
    // 0x32a7c0: 0xc0cdf2e  jal         func_337CB8
label_32a7c4:
    if (ctx->pc == 0x32A7C4u) {
        ctx->pc = 0x32A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7C0u;
        // 0x32a7c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7C8u;
        goto label_32a7c8;
    }
    ctx->pc = 0x32A7C0u;
    SET_GPR_U32(ctx, 31, 0x32A7C8u);
    ctx->pc = 0x32A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7C0u;
    // 0x32a7c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A7C0u, 0x32A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7C8u;
label_32a7c8:
    // 0x32a7c8: 0xc0cdf52  jal         func_337D48
label_32a7cc:
    if (ctx->pc == 0x32A7CCu) {
        ctx->pc = 0x32A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7C8u;
        // 0x32a7cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7D0u;
        goto label_32a7d0;
    }
    ctx->pc = 0x32A7C8u;
    SET_GPR_U32(ctx, 31, 0x32A7D0u);
    ctx->pc = 0x32A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7C8u;
    // 0x32a7cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A7C8u, 0x32A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7D0u;
label_32a7d0:
    // 0x32a7d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a7d4:
    // 0x32a7d4: 0xc0cdf2e  jal         func_337CB8
label_32a7d8:
    if (ctx->pc == 0x32A7D8u) {
        ctx->pc = 0x32A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7D4u;
        // 0x32a7d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7DCu;
        goto label_32a7dc;
    }
    ctx->pc = 0x32A7D4u;
    SET_GPR_U32(ctx, 31, 0x32A7DCu);
    ctx->pc = 0x32A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7D4u;
    // 0x32a7d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A7D4u, 0x32A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7DCu;
label_32a7dc:
    // 0x32a7dc: 0xc0cdf52  jal         func_337D48
label_32a7e0:
    if (ctx->pc == 0x32A7E0u) {
        ctx->pc = 0x32A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7DCu;
        // 0x32a7e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7E4u;
        goto label_32a7e4;
    }
    ctx->pc = 0x32A7DCu;
    SET_GPR_U32(ctx, 31, 0x32A7E4u);
    ctx->pc = 0x32A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7DCu;
    // 0x32a7e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32A7DCu, 0x32A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7E4u;
label_32a7e4:
    // 0x32a7e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32a7e8:
    // 0x32a7e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a7ec:
    // 0x32a7ec: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32a7f0:
    // 0x32a7f0: 0xc0490ca  jal         func_124328
label_32a7f4:
    if (ctx->pc == 0x32A7F4u) {
        ctx->pc = 0x32A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7F0u;
        // 0x32a7f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A7F8u;
        goto label_32a7f8;
    }
    ctx->pc = 0x32A7F0u;
    SET_GPR_U32(ctx, 31, 0x32A7F8u);
    ctx->pc = 0x32A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7F0u;
    // 0x32a7f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124328u, 0x32A7F0u, 0x32A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7F8u;
label_32a7f8:
    // 0x32a7f8: 0x10000588  b           . + 4 + (0x588 << 2)
label_32a7fc:
    if (ctx->pc == 0x32A7FCu) {
        ctx->pc = 0x32A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7F8u;
        // 0x32a7fc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A800u;
        goto label_32a800;
    }
    ctx->pc = 0x32A7F8u;
    {
        const bool branch_taken_0x32a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7F8u;
        // 0x32a7fc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a7f8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32A800u;
label_32a800:
    // 0x32a800: 0xc0cdf40  jal         func_337D00
label_32a804:
    if (ctx->pc == 0x32A804u) {
        ctx->pc = 0x32A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A800u;
        // 0x32a804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A808u;
        goto label_32a808;
    }
    ctx->pc = 0x32A800u;
    SET_GPR_U32(ctx, 31, 0x32A808u);
    ctx->pc = 0x32A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A800u;
    // 0x32a804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A800u, 0x32A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A808u;
label_32a808:
    // 0x32a808: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x32a808u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_32a80c:
    // 0x32a80c: 0xc0cdf40  jal         func_337D00
label_32a810:
    if (ctx->pc == 0x32A810u) {
        ctx->pc = 0x32A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A80Cu;
        // 0x32a810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A814u;
        goto label_32a814;
    }
    ctx->pc = 0x32A80Cu;
    SET_GPR_U32(ctx, 31, 0x32A814u);
    ctx->pc = 0x32A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A80Cu;
    // 0x32a810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A80Cu, 0x32A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A814u;
label_32a814:
    // 0x32a814: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x32a814u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_32a818:
    // 0x32a818: 0xc0cdf40  jal         func_337D00
label_32a81c:
    if (ctx->pc == 0x32A81Cu) {
        ctx->pc = 0x32A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A818u;
        // 0x32a81c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A820u;
        goto label_32a820;
    }
    ctx->pc = 0x32A818u;
    SET_GPR_U32(ctx, 31, 0x32A820u);
    ctx->pc = 0x32A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A818u;
    // 0x32a81c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A818u, 0x32A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A820u;
label_32a820:
    // 0x32a820: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32a820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32a824:
    // 0x32a824: 0xc0cdf2e  jal         func_337CB8
label_32a828:
    if (ctx->pc == 0x32A828u) {
        ctx->pc = 0x32A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A824u;
        // 0x32a828: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A82Cu;
        goto label_32a82c;
    }
    ctx->pc = 0x32A824u;
    SET_GPR_U32(ctx, 31, 0x32A82Cu);
    ctx->pc = 0x32A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A824u;
    // 0x32a828: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A824u, 0x32A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A82Cu;
label_32a82c:
    // 0x32a82c: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x32a82cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_32a830:
    // 0x32a830: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x32a830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_32a834:
    // 0x32a834: 0x1000058f  b           . + 4 + (0x58F << 2)
label_32a838:
    if (ctx->pc == 0x32A838u) {
        ctx->pc = 0x32A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A834u;
        // 0x32a838: 0xe4550004  swc1        $f21, 0x4($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A83Cu;
        goto label_32a83c;
    }
    ctx->pc = 0x32A834u;
    {
        const bool branch_taken_0x32a834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A834u;
        // 0x32a838: 0xe4550004  swc1        $f21, 0x4($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a834) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A83Cu;
label_32a83c:
    // 0x32a83c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a840:
    // 0x32a840: 0xc0cdee8  jal         func_337BA0
label_32a844:
    if (ctx->pc == 0x32A844u) {
        ctx->pc = 0x32A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A840u;
        // 0x32a844: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A848u;
        goto label_32a848;
    }
    ctx->pc = 0x32A840u;
    SET_GPR_U32(ctx, 31, 0x32A848u);
    ctx->pc = 0x32A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A840u;
    // 0x32a844: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A840u, 0x32A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A848u;
label_32a848:
    // 0x32a848: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x32a848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32a84c:
    // 0x32a84c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32a84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a850:
    // 0x32a850: 0xc0cdee8  jal         func_337BA0
label_32a854:
    if (ctx->pc == 0x32A854u) {
        ctx->pc = 0x32A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A850u;
        // 0x32a854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A858u;
        goto label_32a858;
    }
    ctx->pc = 0x32A850u;
    SET_GPR_U32(ctx, 31, 0x32A858u);
    ctx->pc = 0x32A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A850u;
    // 0x32a854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A850u, 0x32A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A858u;
label_32a858:
    // 0x32a858: 0xc0cdf2e  jal         func_337CB8
label_32a85c:
    if (ctx->pc == 0x32A85Cu) {
        ctx->pc = 0x32A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A858u;
        // 0x32a85c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A860u;
        goto label_32a860;
    }
    ctx->pc = 0x32A858u;
    SET_GPR_U32(ctx, 31, 0x32A860u);
    ctx->pc = 0x32A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A858u;
    // 0x32a85c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A858u, 0x32A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A860u;
label_32a860:
    // 0x32a860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a864:
    // 0x32a864: 0xc0f6a96  jal         func_3DAA58
label_32a868:
    if (ctx->pc == 0x32A868u) {
        ctx->pc = 0x32A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A864u;
        // 0x32a868: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A86Cu;
        goto label_32a86c;
    }
    ctx->pc = 0x32A864u;
    SET_GPR_U32(ctx, 31, 0x32A86Cu);
    ctx->pc = 0x32A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A864u;
    // 0x32a868: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x32A864u, 0x32A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A86Cu;
label_32a86c:
    // 0x32a86c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x32a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a870:
    // 0x32a870: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x32a870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_32a874:
    // 0x32a874: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x32a874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_32a878:
    // 0x32a878: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x32a878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_32a87c:
    // 0x32a87c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x32a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a880:
    // 0x32a880: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x32a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32a884:
    // 0x32a884: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x32a884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_32a888:
    // 0x32a888: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x32a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32a88c:
    // 0x32a88c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x32a88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_32a890:
    // 0x32a890: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x32a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32a894:
    // 0x32a894: 0x10000577  b           . + 4 + (0x577 << 2)
label_32a898:
    if (ctx->pc == 0x32A898u) {
        ctx->pc = 0x32A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A894u;
        // 0x32a898: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A89Cu;
        goto label_32a89c;
    }
    ctx->pc = 0x32A894u;
    {
        const bool branch_taken_0x32a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A894u;
        // 0x32a898: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a894) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32A89Cu;
label_32a89c:
    // 0x32a89c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a8a0:
    // 0x32a8a0: 0xc0cdee8  jal         func_337BA0
label_32a8a4:
    if (ctx->pc == 0x32A8A4u) {
        ctx->pc = 0x32A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8A0u;
        // 0x32a8a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8A8u;
        goto label_32a8a8;
    }
    ctx->pc = 0x32A8A0u;
    SET_GPR_U32(ctx, 31, 0x32A8A8u);
    ctx->pc = 0x32A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8A0u;
    // 0x32a8a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A8A0u, 0x32A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8A8u;
label_32a8a8:
    // 0x32a8a8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x32a8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32a8ac:
    // 0x32a8ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32a8b0:
    // 0x32a8b0: 0xc0cdee8  jal         func_337BA0
label_32a8b4:
    if (ctx->pc == 0x32A8B4u) {
        ctx->pc = 0x32A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8B0u;
        // 0x32a8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8B8u;
        goto label_32a8b8;
    }
    ctx->pc = 0x32A8B0u;
    SET_GPR_U32(ctx, 31, 0x32A8B8u);
    ctx->pc = 0x32A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8B0u;
    // 0x32a8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A8B0u, 0x32A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8B8u;
label_32a8b8:
    // 0x32a8b8: 0xc0cdf2e  jal         func_337CB8
label_32a8bc:
    if (ctx->pc == 0x32A8BCu) {
        ctx->pc = 0x32A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8B8u;
        // 0x32a8bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8C0u;
        goto label_32a8c0;
    }
    ctx->pc = 0x32A8B8u;
    SET_GPR_U32(ctx, 31, 0x32A8C0u);
    ctx->pc = 0x32A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8B8u;
    // 0x32a8bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A8B8u, 0x32A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8C0u;
label_32a8c0:
    // 0x32a8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a8c4:
    // 0x32a8c4: 0xc0f6a96  jal         func_3DAA58
label_32a8c8:
    if (ctx->pc == 0x32A8C8u) {
        ctx->pc = 0x32A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8C4u;
        // 0x32a8c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8CCu;
        goto label_32a8cc;
    }
    ctx->pc = 0x32A8C4u;
    SET_GPR_U32(ctx, 31, 0x32A8CCu);
    ctx->pc = 0x32A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8C4u;
    // 0x32a8c8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x32A8C4u, 0x32A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8CCu;
label_32a8cc:
    // 0x32a8cc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x32a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32a8d0:
    // 0x32a8d0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x32a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a8d4:
    // 0x32a8d4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x32a8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_32a8d8:
    // 0x32a8d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x32a8d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_32a8dc:
    // 0x32a8dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x32a8dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_32a8e0:
    // 0x32a8e0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x32a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a8e4:
    // 0x32a8e4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x32a8e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32a8e8:
    // 0x32a8e8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a8ec:
    // 0x32a8ec: 0x10000562  b           . + 4 + (0x562 << 2)
label_32a8f0:
    if (ctx->pc == 0x32A8F0u) {
        ctx->pc = 0x32A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8ECu;
        // 0x32a8f0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A8F4u;
        goto label_32a8f4;
    }
    ctx->pc = 0x32A8ECu;
    {
        const bool branch_taken_0x32a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8ECu;
        // 0x32a8f0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a8ec) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A8F4u;
label_32a8f4:
    // 0x32a8f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a8f8:
    // 0x32a8f8: 0xc0cdee8  jal         func_337BA0
label_32a8fc:
    if (ctx->pc == 0x32A8FCu) {
        ctx->pc = 0x32A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8F8u;
        // 0x32a8fc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A900u;
        goto label_32a900;
    }
    ctx->pc = 0x32A8F8u;
    SET_GPR_U32(ctx, 31, 0x32A900u);
    ctx->pc = 0x32A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8F8u;
    // 0x32a8fc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A8F8u, 0x32A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A900u;
label_32a900:
    // 0x32a900: 0xc0cdf40  jal         func_337D00
label_32a904:
    if (ctx->pc == 0x32A904u) {
        ctx->pc = 0x32A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A900u;
        // 0x32a904: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A908u;
        goto label_32a908;
    }
    ctx->pc = 0x32A900u;
    SET_GPR_U32(ctx, 31, 0x32A908u);
    ctx->pc = 0x32A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A900u;
    // 0x32a904: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A900u, 0x32A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A908u;
label_32a908:
    // 0x32a908: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32a908u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32a90c:
    // 0x32a90c: 0xc0cdf2e  jal         func_337CB8
label_32a910:
    if (ctx->pc == 0x32A910u) {
        ctx->pc = 0x32A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A90Cu;
        // 0x32a910: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A914u;
        goto label_32a914;
    }
    ctx->pc = 0x32A90Cu;
    SET_GPR_U32(ctx, 31, 0x32A914u);
    ctx->pc = 0x32A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A90Cu;
    // 0x32a910: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A90Cu, 0x32A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A914u;
label_32a914:
    // 0x32a914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a918:
    // 0x32a918: 0xc0f6a96  jal         func_3DAA58
label_32a91c:
    if (ctx->pc == 0x32A91Cu) {
        ctx->pc = 0x32A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A918u;
        // 0x32a91c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A920u;
        goto label_32a920;
    }
    ctx->pc = 0x32A918u;
    SET_GPR_U32(ctx, 31, 0x32A920u);
    ctx->pc = 0x32A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A918u;
    // 0x32a91c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x32A918u, 0x32A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A920u;
label_32a920:
    // 0x32a920: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x32a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a924:
    // 0x32a924: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x32a924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_32a928:
    // 0x32a928: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32a928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_32a92c:
    // 0x32a92c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x32a92cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_32a930:
    // 0x32a930: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x32a930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_32a934:
    // 0x32a934: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x32a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a938:
    // 0x32a938: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x32a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32a93c:
    // 0x32a93c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x32a93cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32a940:
    // 0x32a940: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32a940u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a944:
    // 0x32a944: 0x1000054c  b           . + 4 + (0x54C << 2)
label_32a948:
    if (ctx->pc == 0x32A948u) {
        ctx->pc = 0x32A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A944u;
        // 0x32a948: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A94Cu;
        goto label_32a94c;
    }
    ctx->pc = 0x32A944u;
    {
        const bool branch_taken_0x32a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A944u;
        // 0x32a948: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a944) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A94Cu;
label_32a94c:
    // 0x32a94c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a950:
    // 0x32a950: 0xc0cdee8  jal         func_337BA0
label_32a954:
    if (ctx->pc == 0x32A954u) {
        ctx->pc = 0x32A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A950u;
        // 0x32a954: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A958u;
        goto label_32a958;
    }
    ctx->pc = 0x32A950u;
    SET_GPR_U32(ctx, 31, 0x32A958u);
    ctx->pc = 0x32A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A950u;
    // 0x32a954: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32A950u, 0x32A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A958u;
label_32a958:
    // 0x32a958: 0xc0cdf40  jal         func_337D00
label_32a95c:
    if (ctx->pc == 0x32A95Cu) {
        ctx->pc = 0x32A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A958u;
        // 0x32a95c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A960u;
        goto label_32a960;
    }
    ctx->pc = 0x32A958u;
    SET_GPR_U32(ctx, 31, 0x32A960u);
    ctx->pc = 0x32A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A958u;
    // 0x32a95c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32A958u, 0x32A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A960u;
label_32a960:
    // 0x32a960: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32a960u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32a964:
    // 0x32a964: 0xc0cdf2e  jal         func_337CB8
label_32a968:
    if (ctx->pc == 0x32A968u) {
        ctx->pc = 0x32A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A964u;
        // 0x32a968: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A96Cu;
        goto label_32a96c;
    }
    ctx->pc = 0x32A964u;
    SET_GPR_U32(ctx, 31, 0x32A96Cu);
    ctx->pc = 0x32A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A964u;
    // 0x32a968: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A964u, 0x32A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A96Cu;
label_32a96c:
    // 0x32a96c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32a96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a970:
    // 0x32a970: 0xc0f6a96  jal         func_3DAA58
label_32a974:
    if (ctx->pc == 0x32A974u) {
        ctx->pc = 0x32A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A970u;
        // 0x32a974: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A978u;
        goto label_32a978;
    }
    ctx->pc = 0x32A970u;
    SET_GPR_U32(ctx, 31, 0x32A978u);
    ctx->pc = 0x32A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A970u;
    // 0x32a974: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x32A970u, 0x32A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A978u;
label_32a978:
    // 0x32a978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32a97c:
    // 0x32a97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32a97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32a980:
    // 0x32a980: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x32a980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a984:
    // 0x32a984: 0x0  nop
    ctx->pc = 0x32a984u;
    // NOP
label_32a988:
    // 0x32a988: 0x0  nop
    ctx->pc = 0x32a988u;
    // NOP
label_32a98c:
    // 0x32a98c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x32a98cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_32a990:
    // 0x32a990: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x32a990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_32a994:
    // 0x32a994: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x32a994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32a998:
    // 0x32a998: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x32a998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_32a99c:
    // 0x32a99c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x32a99cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_32a9a0:
    // 0x32a9a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x32a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a9a4:
    // 0x32a9a4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x32a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32a9a8:
    // 0x32a9a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32a9a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_32a9ac:
    // 0x32a9ac: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_32a9b0:
    // 0x32a9b0: 0x10000531  b           . + 4 + (0x531 << 2)
label_32a9b4:
    if (ctx->pc == 0x32A9B4u) {
        ctx->pc = 0x32A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B0u;
        // 0x32a9b4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9B8u;
        goto label_32a9b8;
    }
    ctx->pc = 0x32A9B0u;
    {
        const bool branch_taken_0x32a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B0u;
        // 0x32a9b4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9b0) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32A9B8u;
label_32a9b8:
    // 0x32a9b8: 0xc0cdf2e  jal         func_337CB8
label_32a9bc:
    if (ctx->pc == 0x32A9BCu) {
        ctx->pc = 0x32A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B8u;
        // 0x32a9bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A9C0u;
        goto label_32a9c0;
    }
    ctx->pc = 0x32A9B8u;
    SET_GPR_U32(ctx, 31, 0x32A9C0u);
    ctx->pc = 0x32A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A9B8u;
    // 0x32a9bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32A9B8u, 0x32A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9C0u;
label_32a9c0:
    // 0x32a9c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32a9c4:
    // 0x32a9c4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x32a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32a9c8:
    // 0x32a9c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x32a9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_32a9cc:
    // 0x32a9cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x32a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32a9d0:
    // 0x32a9d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x32a9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_32a9d4:
    // 0x32a9d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x32a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32a9d8:
    // 0x32a9d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_32a9dc:
    // 0x32a9dc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x32a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32a9e0:
    // 0x32a9e0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x32a9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_32a9e4:
    // 0x32a9e4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x32a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32a9e8:
    // 0x32a9e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32a9e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_32a9ec:
    // 0x32a9ec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x32a9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_32a9f0:
    // 0x32a9f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x32a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32a9f4:
    // 0x32a9f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32a9f8:
    // 0x32a9f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x32a9f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_32a9fc:
    // 0x32a9fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32a9fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_32aa00:
    // 0x32aa00: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x32aa00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_32aa04:
    // 0x32aa04: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32aa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_32aa08:
    // 0x32aa08: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x32aa08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_32aa0c:
    // 0x32aa0c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_32aa10:
    // 0x32aa10: 0x10000519  b           . + 4 + (0x519 << 2)
label_32aa14:
    if (ctx->pc == 0x32AA14u) {
        ctx->pc = 0x32AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA10u;
        // 0x32aa14: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA18u;
        goto label_32aa18;
    }
    ctx->pc = 0x32AA10u;
    {
        const bool branch_taken_0x32aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA10u;
        // 0x32aa14: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa10) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32AA18u;
label_32aa18:
    // 0x32aa18: 0xc0cdec0  jal         func_337B00
label_32aa1c:
    if (ctx->pc == 0x32AA1Cu) {
        ctx->pc = 0x32AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA18u;
        // 0x32aa1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA20u;
        goto label_32aa20;
    }
    ctx->pc = 0x32AA18u;
    SET_GPR_U32(ctx, 31, 0x32AA20u);
    ctx->pc = 0x32AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA18u;
    // 0x32aa1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32AA18u, 0x32AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA20u;
label_32aa20:
    // 0x32aa20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32aa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aa24:
    // 0x32aa24: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32aa28:
    // 0x32aa28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32aa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32aa2c:
    // 0x32aa2c: 0xc0cdd08  jal         func_337420
label_32aa30:
    if (ctx->pc == 0x32AA30u) {
        ctx->pc = 0x32AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA2Cu;
        // 0x32aa30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA34u;
        goto label_32aa34;
    }
    ctx->pc = 0x32AA2Cu;
    SET_GPR_U32(ctx, 31, 0x32AA34u);
    ctx->pc = 0x32AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA2Cu;
    // 0x32aa30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337420u, 0x32AA2Cu, 0x32AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA34u;
label_32aa34:
    // 0x32aa34: 0x50400510  beql        $v0, $zero, . + 4 + (0x510 << 2)
label_32aa38:
    if (ctx->pc == 0x32AA38u) {
        ctx->pc = 0x32AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA34u;
        // 0x32aa38: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA3Cu;
        goto label_32aa3c;
    }
    ctx->pc = 0x32AA34u;
    {
        const bool branch_taken_0x32aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa34) {
            ctx->pc = 0x32AA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AA34u;
            // 0x32aa38: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32AA3Cu;
label_32aa3c:
    // 0x32aa3c: 0xc09c0dc  jal         func_270370
label_32aa40:
    if (ctx->pc == 0x32AA40u) {
        ctx->pc = 0x32AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA3Cu;
        // 0x32aa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA44u;
        goto label_32aa44;
    }
    ctx->pc = 0x32AA3Cu;
    SET_GPR_U32(ctx, 31, 0x32AA44u);
    ctx->pc = 0x32AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA3Cu;
    // 0x32aa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270370u, 0x32AA3Cu, 0x32AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA44u;
label_32aa44:
    // 0x32aa44: 0x1000050b  b           . + 4 + (0x50B << 2)
label_32aa48:
    if (ctx->pc == 0x32AA48u) {
        ctx->pc = 0x32AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA44u;
        // 0x32aa48: 0xe6c0003c  swc1        $f0, 0x3C($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA4Cu;
        goto label_32aa4c;
    }
    ctx->pc = 0x32AA44u;
    {
        const bool branch_taken_0x32aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA44u;
        // 0x32aa48: 0xe6c0003c  swc1        $f0, 0x3C($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa44) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32AA4Cu;
label_32aa4c:
    // 0x32aa4c: 0xc0cdec0  jal         func_337B00
label_32aa50:
    if (ctx->pc == 0x32AA50u) {
        ctx->pc = 0x32AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA4Cu;
        // 0x32aa50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA54u;
        goto label_32aa54;
    }
    ctx->pc = 0x32AA4Cu;
    SET_GPR_U32(ctx, 31, 0x32AA54u);
    ctx->pc = 0x32AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA4Cu;
    // 0x32aa50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32AA4Cu, 0x32AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA54u;
label_32aa54:
    // 0x32aa54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32aa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aa58:
    // 0x32aa58: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32aa5c:
    // 0x32aa5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32aa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32aa60:
    // 0x32aa60: 0xc0cdd08  jal         func_337420
label_32aa64:
    if (ctx->pc == 0x32AA64u) {
        ctx->pc = 0x32AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA60u;
        // 0x32aa64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA68u;
        goto label_32aa68;
    }
    ctx->pc = 0x32AA60u;
    SET_GPR_U32(ctx, 31, 0x32AA68u);
    ctx->pc = 0x32AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA60u;
    // 0x32aa64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337420u, 0x32AA60u, 0x32AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA68u;
label_32aa68:
    // 0x32aa68: 0x50400503  beql        $v0, $zero, . + 4 + (0x503 << 2)
label_32aa6c:
    if (ctx->pc == 0x32AA6Cu) {
        ctx->pc = 0x32AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA68u;
        // 0x32aa6c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA70u;
        goto label_32aa70;
    }
    ctx->pc = 0x32AA68u;
    {
        const bool branch_taken_0x32aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa68) {
            ctx->pc = 0x32AA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AA68u;
            // 0x32aa6c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32AA70u;
label_32aa70:
    // 0x32aa70: 0xc09c0ce  jal         func_270338
label_32aa74:
    if (ctx->pc == 0x32AA74u) {
        ctx->pc = 0x32AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA70u;
        // 0x32aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA78u;
        goto label_32aa78;
    }
    ctx->pc = 0x32AA70u;
    SET_GPR_U32(ctx, 31, 0x32AA78u);
    ctx->pc = 0x32AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA70u;
    // 0x32aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270338u, 0x32AA70u, 0x32AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA78u;
label_32aa78:
    // 0x32aa78: 0x100004fe  b           . + 4 + (0x4FE << 2)
label_32aa7c:
    if (ctx->pc == 0x32AA7Cu) {
        ctx->pc = 0x32AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA78u;
        // 0x32aa7c: 0xe6c0003c  swc1        $f0, 0x3C($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA80u;
        goto label_32aa80;
    }
    ctx->pc = 0x32AA78u;
    {
        const bool branch_taken_0x32aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA78u;
        // 0x32aa7c: 0xe6c0003c  swc1        $f0, 0x3C($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa78) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32AA80u;
label_32aa80:
    // 0x32aa80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_32aa84:
    // 0x32aa84: 0x8c62be30  lw          $v0, -0x41D0($v1)
    ctx->pc = 0x32aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950448)));
label_32aa88:
    // 0x32aa88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32aa8c:
    if (ctx->pc == 0x32AA8Cu) {
        ctx->pc = 0x32AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA88u;
        // 0x32aa8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA90u;
        goto label_32aa90;
    }
    ctx->pc = 0x32AA88u;
    {
        const bool branch_taken_0x32aa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA88u;
        // 0x32aa8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa88) {
            ctx->pc = 0x32AA9Cu;
            goto label_32aa9c;
        }
    }
    ctx->pc = 0x32AA90u;
label_32aa90:
    // 0x32aa90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_32aa94:
    // 0x32aa94: 0x10000003  b           . + 4 + (0x3 << 2)
label_32aa98:
    if (ctx->pc == 0x32AA98u) {
        ctx->pc = 0x32AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA94u;
        // 0x32aa98: 0x8c44be28  lw          $a0, -0x41D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AA9Cu;
        goto label_32aa9c;
    }
    ctx->pc = 0x32AA94u;
    {
        const bool branch_taken_0x32aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA94u;
        // 0x32aa98: 0x8c44be28  lw          $a0, -0x41D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa94) {
            ctx->pc = 0x32AAA4u;
            goto label_32aaa4;
        }
    }
    ctx->pc = 0x32AA9Cu;
label_32aa9c:
    // 0x32aa9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_32aaa0:
    // 0x32aaa0: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x32aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_32aaa4:
    // 0x32aaa4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_32aaa8:
    if (ctx->pc == 0x32AAA8u) {
        ctx->pc = 0x32AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAA4u;
        // 0x32aaa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAACu;
        goto label_32aaac;
    }
    ctx->pc = 0x32AAA4u;
    {
        const bool branch_taken_0x32aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aaa4) {
            ctx->pc = 0x32AAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AAA4u;
            // 0x32aaa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AAD0u;
            goto label_32aad0;
        }
    }
    ctx->pc = 0x32AAACu;
label_32aaac:
    // 0x32aaac: 0x8c900100  lw          $s0, 0x100($a0)
    ctx->pc = 0x32aaacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_32aab0:
    // 0x32aab0: 0xc0f70ce  jal         func_3DC338
label_32aab4:
    if (ctx->pc == 0x32AAB4u) {
        ctx->pc = 0x32AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAB0u;
        // 0x32aab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAB8u;
        goto label_32aab8;
    }
    ctx->pc = 0x32AAB0u;
    SET_GPR_U32(ctx, 31, 0x32AAB8u);
    ctx->pc = 0x32AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAB0u;
    // 0x32aab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x32AAB0u, 0x32AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAB8u;
label_32aab8:
    // 0x32aab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32aabc:
    if (ctx->pc == 0x32AABCu) {
        ctx->pc = 0x32AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAB8u;
        // 0x32aabc: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAC0u;
        goto label_32aac0;
    }
    ctx->pc = 0x32AAB8u;
    {
        const bool branch_taken_0x32aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAB8u;
        // 0x32aabc: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aab8) {
            ctx->pc = 0x32AACCu;
            goto label_32aacc;
        }
    }
    ctx->pc = 0x32AAC0u;
label_32aac0:
    // 0x32aac0: 0xc0c4900  jal         func_312400
label_32aac4:
    if (ctx->pc == 0x32AAC4u) {
        ctx->pc = 0x32AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAC0u;
        // 0x32aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAC8u;
        goto label_32aac8;
    }
    ctx->pc = 0x32AAC0u;
    SET_GPR_U32(ctx, 31, 0x32AAC8u);
    ctx->pc = 0x32AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAC0u;
    // 0x32aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x32AAC0u, 0x32AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAC8u;
label_32aac8:
    // 0x32aac8: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x32aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_32aacc:
    // 0x32aacc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32aad0:
    // 0x32aad0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32aad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32aad4:
    // 0x32aad4: 0xc0cdea8  jal         func_337AA0
label_32aad8:
    if (ctx->pc == 0x32AAD8u) {
        ctx->pc = 0x32AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAD4u;
        // 0x32aad8: 0xaec6003c  sw          $a2, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AADCu;
        goto label_32aadc;
    }
    ctx->pc = 0x32AAD4u;
    SET_GPR_U32(ctx, 31, 0x32AADCu);
    ctx->pc = 0x32AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAD4u;
    // 0x32aad8: 0xaec6003c  sw          $a2, 0x3C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x32AAD4u, 0x32AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AADCu;
label_32aadc:
    // 0x32aadc: 0x100004e6  b           . + 4 + (0x4E6 << 2)
label_32aae0:
    if (ctx->pc == 0x32AAE0u) {
        ctx->pc = 0x32AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AADCu;
        // 0x32aae0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAE4u;
        goto label_32aae4;
    }
    ctx->pc = 0x32AADCu;
    {
        const bool branch_taken_0x32aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AADCu;
        // 0x32aae0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aadc) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32AAE4u;
label_32aae4:
    // 0x32aae4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32aae8:
    // 0x32aae8: 0xc0cdee8  jal         func_337BA0
label_32aaec:
    if (ctx->pc == 0x32AAECu) {
        ctx->pc = 0x32AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAE8u;
        // 0x32aaec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAF0u;
        goto label_32aaf0;
    }
    ctx->pc = 0x32AAE8u;
    SET_GPR_U32(ctx, 31, 0x32AAF0u);
    ctx->pc = 0x32AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAE8u;
    // 0x32aaec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32AAE8u, 0x32AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAF0u;
label_32aaf0:
    // 0x32aaf0: 0xc0c99a4  jal         func_326690
label_32aaf4:
    if (ctx->pc == 0x32AAF4u) {
        ctx->pc = 0x32AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF0u;
        // 0x32aaf4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AAF8u;
        goto label_32aaf8;
    }
    ctx->pc = 0x32AAF0u;
    SET_GPR_U32(ctx, 31, 0x32AAF8u);
    ctx->pc = 0x32AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAF0u;
    // 0x32aaf4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326690u, 0x32AAF0u, 0x32AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAF8u;
label_32aaf8:
    // 0x32aaf8: 0x100004de  b           . + 4 + (0x4DE << 2)
label_32aafc:
    if (ctx->pc == 0x32AAFCu) {
        ctx->pc = 0x32AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF8u;
        // 0x32aafc: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB00u;
        goto label_32ab00;
    }
    ctx->pc = 0x32AAF8u;
    {
        const bool branch_taken_0x32aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF8u;
        // 0x32aafc: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aaf8) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32AB00u;
label_32ab00:
    // 0x32ab00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32ab04:
    // 0x32ab04: 0xc0cdee8  jal         func_337BA0
label_32ab08:
    if (ctx->pc == 0x32AB08u) {
        ctx->pc = 0x32AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB04u;
        // 0x32ab08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB0Cu;
        goto label_32ab0c;
    }
    ctx->pc = 0x32AB04u;
    SET_GPR_U32(ctx, 31, 0x32AB0Cu);
    ctx->pc = 0x32AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB04u;
    // 0x32ab08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32AB04u, 0x32AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB0Cu;
label_32ab0c:
    // 0x32ab0c: 0xc0c998e  jal         func_326638
label_32ab10:
    if (ctx->pc == 0x32AB10u) {
        ctx->pc = 0x32AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB0Cu;
        // 0x32ab10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB14u;
        goto label_32ab14;
    }
    ctx->pc = 0x32AB0Cu;
    SET_GPR_U32(ctx, 31, 0x32AB14u);
    ctx->pc = 0x32AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB0Cu;
    // 0x32ab10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326638u, 0x32AB0Cu, 0x32AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB14u;
label_32ab14:
    // 0x32ab14: 0x100004d7  b           . + 4 + (0x4D7 << 2)
label_32ab18:
    if (ctx->pc == 0x32AB18u) {
        ctx->pc = 0x32AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB14u;
        // 0x32ab18: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB1Cu;
        goto label_32ab1c;
    }
    ctx->pc = 0x32AB14u;
    {
        const bool branch_taken_0x32ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB14u;
        // 0x32ab18: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab14) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32AB1Cu;
label_32ab1c:
    // 0x32ab1c: 0xc0cdec0  jal         func_337B00
label_32ab20:
    if (ctx->pc == 0x32AB20u) {
        ctx->pc = 0x32AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB1Cu;
        // 0x32ab20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB24u;
        goto label_32ab24;
    }
    ctx->pc = 0x32AB1Cu;
    SET_GPR_U32(ctx, 31, 0x32AB24u);
    ctx->pc = 0x32AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB1Cu;
    // 0x32ab20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32AB1Cu, 0x32AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB24u;
label_32ab24:
    // 0x32ab24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ab24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab28:
    // 0x32ab28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32ab2c:
    // 0x32ab2c: 0xc0cdbde  jal         func_336F78
label_32ab30:
    if (ctx->pc == 0x32AB30u) {
        ctx->pc = 0x32AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB2Cu;
        // 0x32ab30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB34u;
        goto label_32ab34;
    }
    ctx->pc = 0x32AB2Cu;
    SET_GPR_U32(ctx, 31, 0x32AB34u);
    ctx->pc = 0x32AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB2Cu;
    // 0x32ab30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x32AB2Cu, 0x32AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB34u;
label_32ab34:
    // 0x32ab34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_32ab38:
    if (ctx->pc == 0x32AB38u) {
        ctx->pc = 0x32AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB34u;
        // 0x32ab38: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB3Cu;
        goto label_32ab3c;
    }
    ctx->pc = 0x32AB34u;
    {
        const bool branch_taken_0x32ab34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab34) {
            ctx->pc = 0x32AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB34u;
            // 0x32ab38: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB4Cu;
            goto label_32ab4c;
        }
    }
    ctx->pc = 0x32AB3Cu;
label_32ab3c:
    // 0x32ab3c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x32ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_32ab40:
    // 0x32ab40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ab44:
    // 0x32ab44: 0x10000002  b           . + 4 + (0x2 << 2)
label_32ab48:
    if (ctx->pc == 0x32AB48u) {
        ctx->pc = 0x32AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB44u;
        // 0x32ab48: 0x24620060  addiu       $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB4Cu;
        goto label_32ab4c;
    }
    ctx->pc = 0x32AB44u;
    {
        const bool branch_taken_0x32ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB44u;
        // 0x32ab48: 0x24620060  addiu       $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab44) {
            ctx->pc = 0x32AB50u;
            goto label_32ab50;
        }
    }
    ctx->pc = 0x32AB4Cu;
label_32ab4c:
    // 0x32ab4c: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x32ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
label_32ab50:
    // 0x32ab50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32ab54:
    // 0x32ab54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab58:
    // 0x32ab58: 0xc0cdea8  jal         func_337AA0
label_32ab5c:
    if (ctx->pc == 0x32AB5Cu) {
        ctx->pc = 0x32AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB58u;
        // 0x32ab5c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB60u;
        goto label_32ab60;
    }
    ctx->pc = 0x32AB58u;
    SET_GPR_U32(ctx, 31, 0x32AB60u);
    ctx->pc = 0x32AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB58u;
    // 0x32ab5c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x32AB58u, 0x32AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB60u;
label_32ab60:
    // 0x32ab60: 0x100004c5  b           . + 4 + (0x4C5 << 2)
label_32ab64:
    if (ctx->pc == 0x32AB64u) {
        ctx->pc = 0x32AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB60u;
        // 0x32ab64: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB68u;
        goto label_32ab68;
    }
    ctx->pc = 0x32AB60u;
    {
        const bool branch_taken_0x32ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB60u;
        // 0x32ab64: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab60) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32AB68u;
label_32ab68:
    // 0x32ab68: 0xc0cdf2e  jal         func_337CB8
label_32ab6c:
    if (ctx->pc == 0x32AB6Cu) {
        ctx->pc = 0x32AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB68u;
        // 0x32ab6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB70u;
        goto label_32ab70;
    }
    ctx->pc = 0x32AB68u;
    SET_GPR_U32(ctx, 31, 0x32AB70u);
    ctx->pc = 0x32AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB68u;
    // 0x32ab6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AB68u, 0x32AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB70u;
label_32ab70:
    // 0x32ab70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32ab70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab74:
    // 0x32ab74: 0xc0cdf2e  jal         func_337CB8
label_32ab78:
    if (ctx->pc == 0x32AB78u) {
        ctx->pc = 0x32AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB74u;
        // 0x32ab78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB7Cu;
        goto label_32ab7c;
    }
    ctx->pc = 0x32AB74u;
    SET_GPR_U32(ctx, 31, 0x32AB7Cu);
    ctx->pc = 0x32AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB74u;
    // 0x32ab78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AB74u, 0x32AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB7Cu;
label_32ab7c:
    // 0x32ab7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32ab7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab80:
    // 0x32ab80: 0xc0cdf2e  jal         func_337CB8
label_32ab84:
    if (ctx->pc == 0x32AB84u) {
        ctx->pc = 0x32AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB80u;
        // 0x32ab84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB88u;
        goto label_32ab88;
    }
    ctx->pc = 0x32AB80u;
    SET_GPR_U32(ctx, 31, 0x32AB88u);
    ctx->pc = 0x32AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB80u;
    // 0x32ab84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AB80u, 0x32AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB88u;
label_32ab88:
    // 0x32ab88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32ab88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab8c:
    // 0x32ab8c: 0xc0cdf2e  jal         func_337CB8
label_32ab90:
    if (ctx->pc == 0x32AB90u) {
        ctx->pc = 0x32AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB8Cu;
        // 0x32ab90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB94u;
        goto label_32ab94;
    }
    ctx->pc = 0x32AB8Cu;
    SET_GPR_U32(ctx, 31, 0x32AB94u);
    ctx->pc = 0x32AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB8Cu;
    // 0x32ab90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AB8Cu, 0x32AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB94u;
label_32ab94:
    // 0x32ab94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32ab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ab98:
    // 0x32ab98: 0xc0cdf40  jal         func_337D00
label_32ab9c:
    if (ctx->pc == 0x32AB9Cu) {
        ctx->pc = 0x32AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB98u;
        // 0x32ab9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABA0u;
        goto label_32aba0;
    }
    ctx->pc = 0x32AB98u;
    SET_GPR_U32(ctx, 31, 0x32ABA0u);
    ctx->pc = 0x32AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB98u;
    // 0x32ab9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32AB98u, 0x32ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ABA0u;
label_32aba0:
    // 0x32aba0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x32aba0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_32aba4:
    // 0x32aba4: 0xc0cdf2e  jal         func_337CB8
label_32aba8:
    if (ctx->pc == 0x32ABA8u) {
        ctx->pc = 0x32ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABA4u;
        // 0x32aba8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABACu;
        goto label_32abac;
    }
    ctx->pc = 0x32ABA4u;
    SET_GPR_U32(ctx, 31, 0x32ABACu);
    ctx->pc = 0x32ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABA4u;
    // 0x32aba8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32ABA4u, 0x32ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ABACu;
label_32abac:
    // 0x32abac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32abacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32abb0:
    // 0x32abb0: 0xc0cdf40  jal         func_337D00
label_32abb4:
    if (ctx->pc == 0x32ABB4u) {
        ctx->pc = 0x32ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABB0u;
        // 0x32abb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABB8u;
        goto label_32abb8;
    }
    ctx->pc = 0x32ABB0u;
    SET_GPR_U32(ctx, 31, 0x32ABB8u);
    ctx->pc = 0x32ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABB0u;
    // 0x32abb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32ABB0u, 0x32ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ABB8u;
label_32abb8:
    // 0x32abb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32abb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32abbc:
    // 0x32abbc: 0xc0cdf2e  jal         func_337CB8
label_32abc0:
    if (ctx->pc == 0x32ABC0u) {
        ctx->pc = 0x32ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABBCu;
        // 0x32abc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABC4u;
        goto label_32abc4;
    }
    ctx->pc = 0x32ABBCu;
    SET_GPR_U32(ctx, 31, 0x32ABC4u);
    ctx->pc = 0x32ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABBCu;
    // 0x32abc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32ABBCu, 0x32ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ABC4u;
label_32abc4:
    // 0x32abc4: 0xc0cdf52  jal         func_337D48
label_32abc8:
    if (ctx->pc == 0x32ABC8u) {
        ctx->pc = 0x32ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABC4u;
        // 0x32abc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABCCu;
        goto label_32abcc;
    }
    ctx->pc = 0x32ABC4u;
    SET_GPR_U32(ctx, 31, 0x32ABCCu);
    ctx->pc = 0x32ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABC4u;
    // 0x32abc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32ABC4u, 0x32ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ABCCu;
label_32abcc:
    // 0x32abcc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32abccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32abd0:
    // 0x32abd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32abd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32abd4:
    // 0x32abd4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32abd8:
    // 0x32abd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32abd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32abdc:
    // 0x32abdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32abdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32abe0:
    // 0x32abe0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32abe0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_32abe4:
    // 0x32abe4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32abe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32abe8:
    // 0x32abe8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32abe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32abec:
    // 0x32abec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32abecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32abf0:
    // 0x32abf0: 0xc049268  jal         func_1249A0
label_32abf4:
    if (ctx->pc == 0x32ABF4u) {
        ctx->pc = 0x32ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABF0u;
        // 0x32abf4: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABF8u;
        goto label_32abf8;
    }
    ctx->pc = 0x32ABF0u;
    SET_GPR_U32(ctx, 31, 0x32ABF8u);
    ctx->pc = 0x32ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABF0u;
    // 0x32abf4: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249A0u, 0x32ABF0u, 0x32ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ABF8u;
label_32abf8:
    // 0x32abf8: 0x10000488  b           . + 4 + (0x488 << 2)
label_32abfc:
    if (ctx->pc == 0x32ABFCu) {
        ctx->pc = 0x32ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABF8u;
        // 0x32abfc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC00u;
        goto label_32ac00;
    }
    ctx->pc = 0x32ABF8u;
    {
        const bool branch_taken_0x32abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABF8u;
        // 0x32abfc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abf8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32AC00u;
label_32ac00:
    // 0x32ac00: 0xc0cdf2e  jal         func_337CB8
label_32ac04:
    if (ctx->pc == 0x32AC04u) {
        ctx->pc = 0x32AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC00u;
        // 0x32ac04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC08u;
        goto label_32ac08;
    }
    ctx->pc = 0x32AC00u;
    SET_GPR_U32(ctx, 31, 0x32AC08u);
    ctx->pc = 0x32AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC00u;
    // 0x32ac04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AC00u, 0x32AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC08u;
label_32ac08:
    // 0x32ac08: 0xc0cdf52  jal         func_337D48
label_32ac0c:
    if (ctx->pc == 0x32AC0Cu) {
        ctx->pc = 0x32AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC08u;
        // 0x32ac0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC10u;
        goto label_32ac10;
    }
    ctx->pc = 0x32AC08u;
    SET_GPR_U32(ctx, 31, 0x32AC10u);
    ctx->pc = 0x32AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC08u;
    // 0x32ac0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AC08u, 0x32AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC10u;
label_32ac10:
    // 0x32ac10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32ac10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac14:
    // 0x32ac14: 0xc0cdf2e  jal         func_337CB8
label_32ac18:
    if (ctx->pc == 0x32AC18u) {
        ctx->pc = 0x32AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC14u;
        // 0x32ac18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC1Cu;
        goto label_32ac1c;
    }
    ctx->pc = 0x32AC14u;
    SET_GPR_U32(ctx, 31, 0x32AC1Cu);
    ctx->pc = 0x32AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC14u;
    // 0x32ac18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AC14u, 0x32AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC1Cu;
label_32ac1c:
    // 0x32ac1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32ac1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac20:
    // 0x32ac20: 0xc0cdf2e  jal         func_337CB8
label_32ac24:
    if (ctx->pc == 0x32AC24u) {
        ctx->pc = 0x32AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC20u;
        // 0x32ac24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC28u;
        goto label_32ac28;
    }
    ctx->pc = 0x32AC20u;
    SET_GPR_U32(ctx, 31, 0x32AC28u);
    ctx->pc = 0x32AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC20u;
    // 0x32ac24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AC20u, 0x32AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC28u;
label_32ac28:
    // 0x32ac28: 0xc0cdf52  jal         func_337D48
label_32ac2c:
    if (ctx->pc == 0x32AC2Cu) {
        ctx->pc = 0x32AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC28u;
        // 0x32ac2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC30u;
        goto label_32ac30;
    }
    ctx->pc = 0x32AC28u;
    SET_GPR_U32(ctx, 31, 0x32AC30u);
    ctx->pc = 0x32AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC28u;
    // 0x32ac2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AC28u, 0x32AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC30u;
label_32ac30:
    // 0x32ac30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ac30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac34:
    // 0x32ac34: 0xc0cdf2e  jal         func_337CB8
label_32ac38:
    if (ctx->pc == 0x32AC38u) {
        ctx->pc = 0x32AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC34u;
        // 0x32ac38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC3Cu;
        goto label_32ac3c;
    }
    ctx->pc = 0x32AC34u;
    SET_GPR_U32(ctx, 31, 0x32AC3Cu);
    ctx->pc = 0x32AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC34u;
    // 0x32ac38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AC34u, 0x32AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC3Cu;
label_32ac3c:
    // 0x32ac3c: 0xc0cdf52  jal         func_337D48
label_32ac40:
    if (ctx->pc == 0x32AC40u) {
        ctx->pc = 0x32AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC3Cu;
        // 0x32ac40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC44u;
        goto label_32ac44;
    }
    ctx->pc = 0x32AC3Cu;
    SET_GPR_U32(ctx, 31, 0x32AC44u);
    ctx->pc = 0x32AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC3Cu;
    // 0x32ac40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AC3Cu, 0x32AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC44u;
label_32ac44:
    // 0x32ac44: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32ac48:
    // 0x32ac48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac4c:
    // 0x32ac4c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32ac50:
    // 0x32ac50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32ac50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ac54:
    // 0x32ac54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32ac54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ac58:
    // 0x32ac58: 0xc0492bc  jal         func_124AF0
label_32ac5c:
    if (ctx->pc == 0x32AC5Cu) {
        ctx->pc = 0x32AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC58u;
        // 0x32ac5c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC60u;
        goto label_32ac60;
    }
    ctx->pc = 0x32AC58u;
    SET_GPR_U32(ctx, 31, 0x32AC60u);
    ctx->pc = 0x32AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC58u;
    // 0x32ac5c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124AF0u, 0x32AC58u, 0x32AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC60u;
label_32ac60:
    // 0x32ac60: 0x1000046e  b           . + 4 + (0x46E << 2)
label_32ac64:
    if (ctx->pc == 0x32AC64u) {
        ctx->pc = 0x32AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC60u;
        // 0x32ac64: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC68u;
        goto label_32ac68;
    }
    ctx->pc = 0x32AC60u;
    {
        const bool branch_taken_0x32ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC60u;
        // 0x32ac64: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac60) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32AC68u;
label_32ac68:
    // 0x32ac68: 0xc0cdf2e  jal         func_337CB8
label_32ac6c:
    if (ctx->pc == 0x32AC6Cu) {
        ctx->pc = 0x32AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC68u;
        // 0x32ac6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC70u;
        goto label_32ac70;
    }
    ctx->pc = 0x32AC68u;
    SET_GPR_U32(ctx, 31, 0x32AC70u);
    ctx->pc = 0x32AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC68u;
    // 0x32ac6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AC68u, 0x32AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC70u;
label_32ac70:
    // 0x32ac70: 0xc0cdf52  jal         func_337D48
label_32ac74:
    if (ctx->pc == 0x32AC74u) {
        ctx->pc = 0x32AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC70u;
        // 0x32ac74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC78u;
        goto label_32ac78;
    }
    ctx->pc = 0x32AC70u;
    SET_GPR_U32(ctx, 31, 0x32AC78u);
    ctx->pc = 0x32AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC70u;
    // 0x32ac74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AC70u, 0x32AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC78u;
label_32ac78:
    // 0x32ac78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ac78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac7c:
    // 0x32ac7c: 0xc0cdf2e  jal         func_337CB8
label_32ac80:
    if (ctx->pc == 0x32AC80u) {
        ctx->pc = 0x32AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC7Cu;
        // 0x32ac80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC84u;
        goto label_32ac84;
    }
    ctx->pc = 0x32AC7Cu;
    SET_GPR_U32(ctx, 31, 0x32AC84u);
    ctx->pc = 0x32AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC7Cu;
    // 0x32ac80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AC7Cu, 0x32AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC84u;
label_32ac84:
    // 0x32ac84: 0xc0cdf52  jal         func_337D48
label_32ac88:
    if (ctx->pc == 0x32AC88u) {
        ctx->pc = 0x32AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC84u;
        // 0x32ac88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC8Cu;
        goto label_32ac8c;
    }
    ctx->pc = 0x32AC84u;
    SET_GPR_U32(ctx, 31, 0x32AC8Cu);
    ctx->pc = 0x32AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC84u;
    // 0x32ac88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AC84u, 0x32AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC8Cu;
label_32ac8c:
    // 0x32ac8c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32ac90:
    // 0x32ac90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ac90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac94:
    // 0x32ac94: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32ac98:
    // 0x32ac98: 0xc048656  jal         func_121958
label_32ac9c:
    if (ctx->pc == 0x32AC9Cu) {
        ctx->pc = 0x32AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC98u;
        // 0x32ac9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACA0u;
        goto label_32aca0;
    }
    ctx->pc = 0x32AC98u;
    SET_GPR_U32(ctx, 31, 0x32ACA0u);
    ctx->pc = 0x32AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC98u;
    // 0x32ac9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121958u, 0x32AC98u, 0x32ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACA0u;
label_32aca0:
    // 0x32aca0: 0x1000045e  b           . + 4 + (0x45E << 2)
label_32aca4:
    if (ctx->pc == 0x32ACA4u) {
        ctx->pc = 0x32ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACA0u;
        // 0x32aca4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACA8u;
        goto label_32aca8;
    }
    ctx->pc = 0x32ACA0u;
    {
        const bool branch_taken_0x32aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACA0u;
        // 0x32aca4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aca0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32ACA8u;
label_32aca8:
    // 0x32aca8: 0xc0cdf40  jal         func_337D00
label_32acac:
    if (ctx->pc == 0x32ACACu) {
        ctx->pc = 0x32ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACA8u;
        // 0x32acac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACB0u;
        goto label_32acb0;
    }
    ctx->pc = 0x32ACA8u;
    SET_GPR_U32(ctx, 31, 0x32ACB0u);
    ctx->pc = 0x32ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACA8u;
    // 0x32acac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32ACA8u, 0x32ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACB0u;
label_32acb0:
    // 0x32acb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32acb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32acb4:
    // 0x32acb4: 0xc0cdec0  jal         func_337B00
label_32acb8:
    if (ctx->pc == 0x32ACB8u) {
        ctx->pc = 0x32ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACB4u;
        // 0x32acb8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACBCu;
        goto label_32acbc;
    }
    ctx->pc = 0x32ACB4u;
    SET_GPR_U32(ctx, 31, 0x32ACBCu);
    ctx->pc = 0x32ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACB4u;
    // 0x32acb8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32ACB4u, 0x32ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACBCu;
label_32acbc:
    // 0x32acbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32acbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32acc0:
    // 0x32acc0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32acc4:
    // 0x32acc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32acc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32acc8:
    // 0x32acc8: 0xc0cdc38  jal         func_3370E0
label_32accc:
    if (ctx->pc == 0x32ACCCu) {
        ctx->pc = 0x32ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACC8u;
        // 0x32accc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACD0u;
        goto label_32acd0;
    }
    ctx->pc = 0x32ACC8u;
    SET_GPR_U32(ctx, 31, 0x32ACD0u);
    ctx->pc = 0x32ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACC8u;
    // 0x32accc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3370E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370E0u, 0x32ACC8u, 0x32ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACD0u;
label_32acd0:
    // 0x32acd0: 0x54400468  bnel        $v0, $zero, . + 4 + (0x468 << 2)
label_32acd4:
    if (ctx->pc == 0x32ACD4u) {
        ctx->pc = 0x32ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACD0u;
        // 0x32acd4: 0xe614025c  swc1        $f20, 0x25C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACD8u;
        goto label_32acd8;
    }
    ctx->pc = 0x32ACD0u;
    {
        const bool branch_taken_0x32acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32acd0) {
            ctx->pc = 0x32ACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32ACD0u;
            // 0x32acd4: 0xe614025c  swc1        $f20, 0x25C($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32ACD8u;
label_32acd8:
    // 0x32acd8: 0x10000467  b           . + 4 + (0x467 << 2)
label_32acdc:
    if (ctx->pc == 0x32ACDCu) {
        ctx->pc = 0x32ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACD8u;
        // 0x32acdc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACE0u;
        goto label_32ace0;
    }
    ctx->pc = 0x32ACD8u;
    {
        const bool branch_taken_0x32acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACD8u;
        // 0x32acdc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32acd8) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32ACE0u;
label_32ace0:
    // 0x32ace0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32ace4:
    // 0x32ace4: 0xc0cdee8  jal         func_337BA0
label_32ace8:
    if (ctx->pc == 0x32ACE8u) {
        ctx->pc = 0x32ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACE4u;
        // 0x32ace8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACECu;
        goto label_32acec;
    }
    ctx->pc = 0x32ACE4u;
    SET_GPR_U32(ctx, 31, 0x32ACECu);
    ctx->pc = 0x32ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACE4u;
    // 0x32ace8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32ACE4u, 0x32ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACECu;
label_32acec:
    // 0x32acec: 0xc0cdf2e  jal         func_337CB8
label_32acf0:
    if (ctx->pc == 0x32ACF0u) {
        ctx->pc = 0x32ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACECu;
        // 0x32acf0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACF4u;
        goto label_32acf4;
    }
    ctx->pc = 0x32ACECu;
    SET_GPR_U32(ctx, 31, 0x32ACF4u);
    ctx->pc = 0x32ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACECu;
    // 0x32acf0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32ACECu, 0x32ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACF4u;
label_32acf4:
    // 0x32acf4: 0xc0cdf52  jal         func_337D48
label_32acf8:
    if (ctx->pc == 0x32ACF8u) {
        ctx->pc = 0x32ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACF4u;
        // 0x32acf8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACFCu;
        goto label_32acfc;
    }
    ctx->pc = 0x32ACF4u;
    SET_GPR_U32(ctx, 31, 0x32ACFCu);
    ctx->pc = 0x32ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ACF4u;
    // 0x32acf8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32ACF4u, 0x32ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACFCu;
label_32acfc:
    // 0x32acfc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32ad00:
    // 0x32ad00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad04:
    // 0x32ad04: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32ad08:
    // 0x32ad08: 0xc04910c  jal         func_124430
label_32ad0c:
    if (ctx->pc == 0x32AD0Cu) {
        ctx->pc = 0x32AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD08u;
        // 0x32ad0c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD10u;
        goto label_32ad10;
    }
    ctx->pc = 0x32AD08u;
    SET_GPR_U32(ctx, 31, 0x32AD10u);
    ctx->pc = 0x32AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD08u;
    // 0x32ad0c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124430u, 0x32AD08u, 0x32AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD10u;
label_32ad10:
    // 0x32ad10: 0x10000207  b           . + 4 + (0x207 << 2)
label_32ad14:
    if (ctx->pc == 0x32AD14u) {
        ctx->pc = 0x32AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD10u;
        // 0x32ad14: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD18u;
        goto label_32ad18;
    }
    ctx->pc = 0x32AD10u;
    {
        const bool branch_taken_0x32ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD10u;
        // 0x32ad14: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad10) {
            ctx->pc = 0x32B530u;
            goto label_32b530;
        }
    }
    ctx->pc = 0x32AD18u;
label_32ad18:
    // 0x32ad18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32ad1c:
    // 0x32ad1c: 0xc0cdee8  jal         func_337BA0
label_32ad20:
    if (ctx->pc == 0x32AD20u) {
        ctx->pc = 0x32AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD1Cu;
        // 0x32ad20: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD24u;
        goto label_32ad24;
    }
    ctx->pc = 0x32AD1Cu;
    SET_GPR_U32(ctx, 31, 0x32AD24u);
    ctx->pc = 0x32AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD1Cu;
    // 0x32ad20: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32AD1Cu, 0x32AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD24u;
label_32ad24:
    // 0x32ad24: 0xc0cdf2e  jal         func_337CB8
label_32ad28:
    if (ctx->pc == 0x32AD28u) {
        ctx->pc = 0x32AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD24u;
        // 0x32ad28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD2Cu;
        goto label_32ad2c;
    }
    ctx->pc = 0x32AD24u;
    SET_GPR_U32(ctx, 31, 0x32AD2Cu);
    ctx->pc = 0x32AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD24u;
    // 0x32ad28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AD24u, 0x32AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD2Cu;
label_32ad2c:
    // 0x32ad2c: 0xc0cdf52  jal         func_337D48
label_32ad30:
    if (ctx->pc == 0x32AD30u) {
        ctx->pc = 0x32AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD2Cu;
        // 0x32ad30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD34u;
        goto label_32ad34;
    }
    ctx->pc = 0x32AD2Cu;
    SET_GPR_U32(ctx, 31, 0x32AD34u);
    ctx->pc = 0x32AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD2Cu;
    // 0x32ad30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AD2Cu, 0x32AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD34u;
label_32ad34:
    // 0x32ad34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ad34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad38:
    // 0x32ad38: 0xc0cdf2e  jal         func_337CB8
label_32ad3c:
    if (ctx->pc == 0x32AD3Cu) {
        ctx->pc = 0x32AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD38u;
        // 0x32ad3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD40u;
        goto label_32ad40;
    }
    ctx->pc = 0x32AD38u;
    SET_GPR_U32(ctx, 31, 0x32AD40u);
    ctx->pc = 0x32AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD38u;
    // 0x32ad3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AD38u, 0x32AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD40u;
label_32ad40:
    // 0x32ad40: 0xc0cdf52  jal         func_337D48
label_32ad44:
    if (ctx->pc == 0x32AD44u) {
        ctx->pc = 0x32AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD40u;
        // 0x32ad44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD48u;
        goto label_32ad48;
    }
    ctx->pc = 0x32AD40u;
    SET_GPR_U32(ctx, 31, 0x32AD48u);
    ctx->pc = 0x32AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD40u;
    // 0x32ad44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AD40u, 0x32AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD48u;
label_32ad48:
    // 0x32ad48: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32ad4c:
    // 0x32ad4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ad4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad50:
    // 0x32ad50: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32ad54:
    // 0x32ad54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32ad54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ad58:
    // 0x32ad58: 0xc0490d2  jal         func_124348
label_32ad5c:
    if (ctx->pc == 0x32AD5Cu) {
        ctx->pc = 0x32AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD58u;
        // 0x32ad5c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD60u;
        goto label_32ad60;
    }
    ctx->pc = 0x32AD58u;
    SET_GPR_U32(ctx, 31, 0x32AD60u);
    ctx->pc = 0x32AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD58u;
    // 0x32ad5c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124348u, 0x32AD58u, 0x32AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD60u;
label_32ad60:
    // 0x32ad60: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_32ad64:
    if (ctx->pc == 0x32AD64u) {
        ctx->pc = 0x32AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD60u;
        // 0x32ad64: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD68u;
        goto label_32ad68;
    }
    ctx->pc = 0x32AD60u;
    {
        const bool branch_taken_0x32ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD60u;
        // 0x32ad64: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad60) {
            ctx->pc = 0x32B530u;
            goto label_32b530;
        }
    }
    ctx->pc = 0x32AD68u;
label_32ad68:
    // 0x32ad68: 0xc0cdf2e  jal         func_337CB8
label_32ad6c:
    if (ctx->pc == 0x32AD6Cu) {
        ctx->pc = 0x32AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD68u;
        // 0x32ad6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD70u;
        goto label_32ad70;
    }
    ctx->pc = 0x32AD68u;
    SET_GPR_U32(ctx, 31, 0x32AD70u);
    ctx->pc = 0x32AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD68u;
    // 0x32ad6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AD68u, 0x32AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD70u;
label_32ad70:
    // 0x32ad70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32ad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32ad74:
    // 0x32ad74: 0xc0cdec0  jal         func_337B00
label_32ad78:
    if (ctx->pc == 0x32AD78u) {
        ctx->pc = 0x32AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD74u;
        // 0x32ad78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD7Cu;
        goto label_32ad7c;
    }
    ctx->pc = 0x32AD74u;
    SET_GPR_U32(ctx, 31, 0x32AD7Cu);
    ctx->pc = 0x32AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD74u;
    // 0x32ad78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32AD74u, 0x32AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD7Cu;
label_32ad7c:
    // 0x32ad7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad80:
    // 0x32ad80: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32ad84:
    // 0x32ad84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32ad88:
    // 0x32ad88: 0xc0cdc9a  jal         func_337268
label_32ad8c:
    if (ctx->pc == 0x32AD8Cu) {
        ctx->pc = 0x32AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD88u;
        // 0x32ad8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD90u;
        goto label_32ad90;
    }
    ctx->pc = 0x32AD88u;
    SET_GPR_U32(ctx, 31, 0x32AD90u);
    ctx->pc = 0x32AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD88u;
    // 0x32ad8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337268u, 0x32AD88u, 0x32AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD90u;
label_32ad90:
    // 0x32ad90: 0x10400438  beqz        $v0, . + 4 + (0x438 << 2)
label_32ad94:
    if (ctx->pc == 0x32AD94u) {
        ctx->pc = 0x32AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD90u;
        // 0x32ad94: 0x2e220004  sltiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD98u;
        goto label_32ad98;
    }
    ctx->pc = 0x32AD90u;
    {
        const bool branch_taken_0x32ad90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD90u;
        // 0x32ad94: 0x2e220004  sltiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad90) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32AD98u;
label_32ad98:
    // 0x32ad98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32ad9c:
    if (ctx->pc == 0x32AD9Cu) {
        ctx->pc = 0x32AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD98u;
        // 0x32ad9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADA0u;
        goto label_32ada0;
    }
    ctx->pc = 0x32AD98u;
    {
        const bool branch_taken_0x32ad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD98u;
        // 0x32ad9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad98) {
            ctx->pc = 0x32ADB0u;
            goto label_32adb0;
        }
    }
    ctx->pc = 0x32ADA0u;
label_32ada0:
    // 0x32ada0: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x32ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_32ada4:
    // 0x32ada4: 0xae110478  sw          $s1, 0x478($s0)
    ctx->pc = 0x32ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1144), GPR_U32(ctx, 17));
label_32ada8:
    // 0x32ada8: 0x1000022f  b           . + 4 + (0x22F << 2)
label_32adac:
    if (ctx->pc == 0x32ADACu) {
        ctx->pc = 0x32ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA8u;
        // 0x32adac: 0xac510230  sw          $s1, 0x230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADB0u;
        goto label_32adb0;
    }
    ctx->pc = 0x32ADA8u;
    {
        const bool branch_taken_0x32ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA8u;
        // 0x32adac: 0xac510230  sw          $s1, 0x230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ada8) {
            ctx->pc = 0x32B668u;
            goto label_32b668;
        }
    }
    ctx->pc = 0x32ADB0u;
label_32adb0:
    // 0x32adb0: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x32adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_32adb4:
    // 0x32adb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32adb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32adb8:
    // 0x32adb8: 0xae000478  sw          $zero, 0x478($s0)
    ctx->pc = 0x32adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1144), GPR_U32(ctx, 0));
label_32adbc:
    // 0x32adbc: 0x1000022a  b           . + 4 + (0x22A << 2)
label_32adc0:
    if (ctx->pc == 0x32ADC0u) {
        ctx->pc = 0x32ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADBCu;
        // 0x32adc0: 0xac400230  sw          $zero, 0x230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADC4u;
        goto label_32adc4;
    }
    ctx->pc = 0x32ADBCu;
    {
        const bool branch_taken_0x32adbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADBCu;
        // 0x32adc0: 0xac400230  sw          $zero, 0x230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adbc) {
            ctx->pc = 0x32B668u;
            goto label_32b668;
        }
    }
    ctx->pc = 0x32ADC4u;
label_32adc4:
    // 0x32adc4: 0xc0cdf2e  jal         func_337CB8
label_32adc8:
    if (ctx->pc == 0x32ADC8u) {
        ctx->pc = 0x32ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADC4u;
        // 0x32adc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADCCu;
        goto label_32adcc;
    }
    ctx->pc = 0x32ADC4u;
    SET_GPR_U32(ctx, 31, 0x32ADCCu);
    ctx->pc = 0x32ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ADC4u;
    // 0x32adc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32ADC4u, 0x32ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADCCu;
label_32adcc:
    // 0x32adcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32add0:
    // 0x32add0: 0xc0cdf2e  jal         func_337CB8
label_32add4:
    if (ctx->pc == 0x32ADD4u) {
        ctx->pc = 0x32ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD0u;
        // 0x32add4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADD8u;
        goto label_32add8;
    }
    ctx->pc = 0x32ADD0u;
    SET_GPR_U32(ctx, 31, 0x32ADD8u);
    ctx->pc = 0x32ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ADD0u;
    // 0x32add4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32ADD0u, 0x32ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADD8u;
label_32add8:
    // 0x32add8: 0xc0cdf52  jal         func_337D48
label_32addc:
    if (ctx->pc == 0x32ADDCu) {
        ctx->pc = 0x32ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD8u;
        // 0x32addc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADE0u;
        goto label_32ade0;
    }
    ctx->pc = 0x32ADD8u;
    SET_GPR_U32(ctx, 31, 0x32ADE0u);
    ctx->pc = 0x32ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ADD8u;
    // 0x32addc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32ADD8u, 0x32ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADE0u;
label_32ade0:
    // 0x32ade0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32ade0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ade4:
    // 0x32ade4: 0xc0cdec0  jal         func_337B00
label_32ade8:
    if (ctx->pc == 0x32ADE8u) {
        ctx->pc = 0x32ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADE4u;
        // 0x32ade8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADECu;
        goto label_32adec;
    }
    ctx->pc = 0x32ADE4u;
    SET_GPR_U32(ctx, 31, 0x32ADECu);
    ctx->pc = 0x32ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ADE4u;
    // 0x32ade8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32ADE4u, 0x32ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADECu;
label_32adec:
    // 0x32adec: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32adecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32adf0:
    // 0x32adf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32adf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32adf4:
    // 0x32adf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32adf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32adf8:
    // 0x32adf8: 0xc0cdbf6  jal         func_336FD8
label_32adfc:
    if (ctx->pc == 0x32ADFCu) {
        ctx->pc = 0x32ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADF8u;
        // 0x32adfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE00u;
        goto label_32ae00;
    }
    ctx->pc = 0x32ADF8u;
    SET_GPR_U32(ctx, 31, 0x32AE00u);
    ctx->pc = 0x32ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ADF8u;
    // 0x32adfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x32ADF8u, 0x32AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE00u;
label_32ae00:
    // 0x32ae00: 0x1040041c  beqz        $v0, . + 4 + (0x41C << 2)
label_32ae04:
    if (ctx->pc == 0x32AE04u) {
        ctx->pc = 0x32AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE00u;
        // 0x32ae04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE08u;
        goto label_32ae08;
    }
    ctx->pc = 0x32AE00u;
    {
        const bool branch_taken_0x32ae00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE00u;
        // 0x32ae04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae00) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32AE08u;
label_32ae08:
    // 0x32ae08: 0xc0d7424  jal         func_35D090
label_32ae0c:
    if (ctx->pc == 0x32AE0Cu) {
        ctx->pc = 0x32AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE08u;
        // 0x32ae0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE10u;
        goto label_32ae10;
    }
    ctx->pc = 0x32AE08u;
    SET_GPR_U32(ctx, 31, 0x32AE10u);
    ctx->pc = 0x32AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE08u;
    // 0x32ae0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x32AE08u, 0x32AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE10u;
label_32ae10:
    // 0x32ae10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32ae14:
    // 0x32ae14: 0xc0d75d0  jal         func_35D740
label_32ae18:
    if (ctx->pc == 0x32AE18u) {
        ctx->pc = 0x32AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE14u;
        // 0x32ae18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE1Cu;
        goto label_32ae1c;
    }
    ctx->pc = 0x32AE14u;
    SET_GPR_U32(ctx, 31, 0x32AE1Cu);
    ctx->pc = 0x32AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE14u;
    // 0x32ae18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x32AE14u, 0x32AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE1Cu;
label_32ae1c:
    // 0x32ae1c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x32ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_32ae20:
    // 0x32ae20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32ae24:
    // 0x32ae24: 0xc0d73cc  jal         func_35CF30
label_32ae28:
    if (ctx->pc == 0x32AE28u) {
        ctx->pc = 0x32AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE24u;
        // 0x32ae28: 0x24a54c68  addiu       $a1, $a1, 0x4C68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE2Cu;
        goto label_32ae2c;
    }
    ctx->pc = 0x32AE24u;
    SET_GPR_U32(ctx, 31, 0x32AE2Cu);
    ctx->pc = 0x32AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE24u;
    // 0x32ae28: 0x24a54c68  addiu       $a1, $a1, 0x4C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x32AE24u, 0x32AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE2Cu;
label_32ae2c:
    // 0x32ae2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32ae30:
    // 0x32ae30: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_32ae34:
    if (ctx->pc == 0x32AE34u) {
        ctx->pc = 0x32AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE30u;
        // 0x32ae34: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE38u;
        goto label_32ae38;
    }
    ctx->pc = 0x32AE30u;
    {
        const bool branch_taken_0x32ae30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE30u;
        // 0x32ae34: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae30) {
            ctx->pc = 0x32AF5Cu;
            goto label_32af5c;
        }
    }
    ctx->pc = 0x32AE38u;
label_32ae38:
    // 0x32ae38: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x32ae38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32ae3c:
    // 0x32ae3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ae40:
    // 0x32ae40: 0xc0d7424  jal         func_35D090
label_32ae44:
    if (ctx->pc == 0x32AE44u) {
        ctx->pc = 0x32AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE40u;
        // 0x32ae44: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE48u;
        goto label_32ae48;
    }
    ctx->pc = 0x32AE40u;
    SET_GPR_U32(ctx, 31, 0x32AE48u);
    ctx->pc = 0x32AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE40u;
    // 0x32ae44: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x32AE40u, 0x32AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE48u;
label_32ae48:
    // 0x32ae48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32ae48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ae4c:
    // 0x32ae4c: 0xc0d75ae  jal         func_35D6B8
label_32ae50:
    if (ctx->pc == 0x32AE50u) {
        ctx->pc = 0x32AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE4Cu;
        // 0x32ae50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE54u;
        goto label_32ae54;
    }
    ctx->pc = 0x32AE4Cu;
    SET_GPR_U32(ctx, 31, 0x32AE54u);
    ctx->pc = 0x32AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE4Cu;
    // 0x32ae50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6B8u, 0x32AE4Cu, 0x32AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE54u;
label_32ae54:
    // 0x32ae54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32ae54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32ae58:
    // 0x32ae58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x32ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32ae5c:
    // 0x32ae5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32ae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32ae60:
    // 0x32ae60: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x32ae60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_32ae64:
    // 0x32ae64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x32ae64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_32ae68:
    // 0x32ae68: 0xc0b187c  jal         func_2C61F0
label_32ae6c:
    if (ctx->pc == 0x32AE6Cu) {
        ctx->pc = 0x32AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE68u;
        // 0x32ae6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE70u;
        goto label_32ae70;
    }
    ctx->pc = 0x32AE68u;
    SET_GPR_U32(ctx, 31, 0x32AE70u);
    ctx->pc = 0x32AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE68u;
    // 0x32ae6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x32AE68u, 0x32AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE70u;
label_32ae70:
    // 0x32ae70: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x32ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_32ae74:
    // 0x32ae74: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x32ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_32ae78:
    // 0x32ae78: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x32ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_32ae7c:
    // 0x32ae7c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x32ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_32ae80:
    // 0x32ae80: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x32ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_32ae84:
    // 0x32ae84: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x32ae84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32ae88:
    // 0x32ae88: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_32ae8c:
    if (ctx->pc == 0x32AE8Cu) {
        ctx->pc = 0x32AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE88u;
        // 0x32ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE90u;
        goto label_32ae90;
    }
    ctx->pc = 0x32AE88u;
    {
        const bool branch_taken_0x32ae88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE88u;
        // 0x32ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae88) {
            ctx->pc = 0x32AEB0u;
            goto label_32aeb0;
        }
    }
    ctx->pc = 0x32AE90u;
label_32ae90:
    // 0x32ae90: 0xc07508e  jal         func_1D4238
label_32ae94:
    if (ctx->pc == 0x32AE94u) {
        ctx->pc = 0x32AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE90u;
        // 0x32ae94: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE98u;
        goto label_32ae98;
    }
    ctx->pc = 0x32AE90u;
    SET_GPR_U32(ctx, 31, 0x32AE98u);
    ctx->pc = 0x32AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE90u;
    // 0x32ae94: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4238u, 0x32AE90u, 0x32AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE98u;
label_32ae98:
    // 0x32ae98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ae9c:
    // 0x32ae9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32aea0:
    // 0x32aea0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_32aea4:
    if (ctx->pc == 0x32AEA4u) {
        ctx->pc = 0x32AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEA0u;
        // 0x32aea4: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEA8u;
        goto label_32aea8;
    }
    ctx->pc = 0x32AEA0u;
    {
        const bool branch_taken_0x32aea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEA0u;
        // 0x32aea4: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aea0) {
            ctx->pc = 0x32AEB0u;
            goto label_32aeb0;
        }
    }
    ctx->pc = 0x32AEA8u;
label_32aea8:
    // 0x32aea8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x32aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_32aeac:
    // 0x32aeac: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x32aeacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32aeb0:
    // 0x32aeb0: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_32aeb4:
    if (ctx->pc == 0x32AEB4u) {
        ctx->pc = 0x32AEB8u;
        goto label_32aeb8;
    }
    ctx->pc = 0x32AEB0u;
    {
        const bool branch_taken_0x32aeb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aeb0) {
            ctx->pc = 0x32AEDCu;
            goto label_32aedc;
        }
    }
    ctx->pc = 0x32AEB8u;
label_32aeb8:
    // 0x32aeb8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x32aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_32aebc:
    // 0x32aebc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32aebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32aec0:
    // 0x32aec0: 0xc0f70ce  jal         func_3DC338
label_32aec4:
    if (ctx->pc == 0x32AEC4u) {
        ctx->pc = 0x32AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC0u;
        // 0x32aec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEC8u;
        goto label_32aec8;
    }
    ctx->pc = 0x32AEC0u;
    SET_GPR_U32(ctx, 31, 0x32AEC8u);
    ctx->pc = 0x32AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AEC0u;
    // 0x32aec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x32AEC0u, 0x32AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AEC8u;
label_32aec8:
    // 0x32aec8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32aecc:
    if (ctx->pc == 0x32AECCu) {
        ctx->pc = 0x32AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC8u;
        // 0x32aecc: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AED0u;
        goto label_32aed0;
    }
    ctx->pc = 0x32AEC8u;
    {
        const bool branch_taken_0x32aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC8u;
        // 0x32aecc: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aec8) {
            ctx->pc = 0x32AEDCu;
            goto label_32aedc;
        }
    }
    ctx->pc = 0x32AED0u;
label_32aed0:
    // 0x32aed0: 0xc0c4900  jal         func_312400
label_32aed4:
    if (ctx->pc == 0x32AED4u) {
        ctx->pc = 0x32AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AED0u;
        // 0x32aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AED8u;
        goto label_32aed8;
    }
    ctx->pc = 0x32AED0u;
    SET_GPR_U32(ctx, 31, 0x32AED8u);
    ctx->pc = 0x32AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AED0u;
    // 0x32aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x32AED0u, 0x32AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AED8u;
label_32aed8:
    // 0x32aed8: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x32aed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_32aedc:
    // 0x32aedc: 0xc0b1488  jal         func_2C5220
label_32aee0:
    if (ctx->pc == 0x32AEE0u) {
        ctx->pc = 0x32AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEDCu;
        // 0x32aee0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEE4u;
        goto label_32aee4;
    }
    ctx->pc = 0x32AEDCu;
    SET_GPR_U32(ctx, 31, 0x32AEE4u);
    ctx->pc = 0x32AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AEDCu;
    // 0x32aee0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x32AEDCu, 0x32AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AEE4u;
label_32aee4:
    // 0x32aee4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x32aee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_32aee8:
    // 0x32aee8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32aeec:
    // 0x32aeec: 0xc0b1972  jal         func_2C65C8
label_32aef0:
    if (ctx->pc == 0x32AEF0u) {
        ctx->pc = 0x32AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEECu;
        // 0x32aef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEF4u;
        goto label_32aef4;
    }
    ctx->pc = 0x32AEECu;
    SET_GPR_U32(ctx, 31, 0x32AEF4u);
    ctx->pc = 0x32AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AEECu;
    // 0x32aef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x32AEECu, 0x32AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AEF4u;
label_32aef4:
    // 0x32aef4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x32aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32aef8:
    // 0x32aef8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x32aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_32aefc:
    // 0x32aefc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x32aefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32af00:
    // 0x32af00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x32af00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_32af04:
    // 0x32af04: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x32af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_32af08:
    // 0x32af08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32af08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32af0c:
    // 0x32af0c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x32af0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_32af10:
    // 0x32af10: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x32af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_32af14:
    // 0x32af14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32af14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32af18:
    // 0x32af18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32af18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32af1c:
    // 0x32af1c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x32af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32af20:
    // 0x32af20: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x32af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_32af24:
    // 0x32af24: 0xc0b0a1c  jal         func_2C2870
label_32af28:
    if (ctx->pc == 0x32AF28u) {
        ctx->pc = 0x32AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF24u;
        // 0x32af28: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF2Cu;
        goto label_32af2c;
    }
    ctx->pc = 0x32AF24u;
    SET_GPR_U32(ctx, 31, 0x32AF2Cu);
    ctx->pc = 0x32AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF24u;
    // 0x32af28: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x32AF24u, 0x32AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF2Cu;
label_32af2c:
    // 0x32af2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32af2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32af30:
    // 0x32af30: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_32af34:
    if (ctx->pc == 0x32AF34u) {
        ctx->pc = 0x32AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF30u;
        // 0x32af34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF38u;
        goto label_32af38;
    }
    ctx->pc = 0x32AF30u;
    {
        const bool branch_taken_0x32af30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF30u;
        // 0x32af34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af30) {
            ctx->pc = 0x32AF4Cu;
            goto label_32af4c;
        }
    }
    ctx->pc = 0x32AF38u;
label_32af38:
    // 0x32af38: 0xc0b1080  jal         func_2C4200
label_32af3c:
    if (ctx->pc == 0x32AF3Cu) {
        ctx->pc = 0x32AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF38u;
        // 0x32af3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF40u;
        goto label_32af40;
    }
    ctx->pc = 0x32AF38u;
    SET_GPR_U32(ctx, 31, 0x32AF40u);
    ctx->pc = 0x32AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF38u;
    // 0x32af3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x32AF38u, 0x32AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF40u;
label_32af40:
    // 0x32af40: 0xc0b0eaa  jal         func_2C3AA8
label_32af44:
    if (ctx->pc == 0x32AF44u) {
        ctx->pc = 0x32AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF40u;
        // 0x32af44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF48u;
        goto label_32af48;
    }
    ctx->pc = 0x32AF40u;
    SET_GPR_U32(ctx, 31, 0x32AF48u);
    ctx->pc = 0x32AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF40u;
    // 0x32af44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AA8u, 0x32AF40u, 0x32AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF48u;
label_32af48:
    // 0x32af48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32af48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32af4c:
    // 0x32af4c: 0xc0d7412  jal         func_35D048
label_32af50:
    if (ctx->pc == 0x32AF50u) {
        ctx->pc = 0x32AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF4Cu;
        // 0x32af50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF54u;
        goto label_32af54;
    }
    ctx->pc = 0x32AF4Cu;
    SET_GPR_U32(ctx, 31, 0x32AF54u);
    ctx->pc = 0x32AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF4Cu;
    // 0x32af50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x32AF4Cu, 0x32AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF54u;
label_32af54:
    // 0x32af54: 0x10000022  b           . + 4 + (0x22 << 2)
label_32af58:
    if (ctx->pc == 0x32AF58u) {
        ctx->pc = 0x32AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF54u;
        // 0x32af58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF5Cu;
        goto label_32af5c;
    }
    ctx->pc = 0x32AF54u;
    {
        const bool branch_taken_0x32af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF54u;
        // 0x32af58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af54) {
            ctx->pc = 0x32AFE0u;
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32AF5Cu;
label_32af5c:
    // 0x32af5c: 0xc0efc2e  jal         func_3BF0B8
label_32af60:
    if (ctx->pc == 0x32AF60u) {
        ctx->pc = 0x32AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF5Cu;
        // 0x32af60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF64u;
        goto label_32af64;
    }
    ctx->pc = 0x32AF5Cu;
    SET_GPR_U32(ctx, 31, 0x32AF64u);
    ctx->pc = 0x32AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF5Cu;
    // 0x32af60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x32AF5Cu, 0x32AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF64u;
label_32af64:
    // 0x32af64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_32af68:
    if (ctx->pc == 0x32AF68u) {
        ctx->pc = 0x32AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF64u;
        // 0x32af68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF6Cu;
        goto label_32af6c;
    }
    ctx->pc = 0x32AF64u;
    {
        const bool branch_taken_0x32af64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF64u;
        // 0x32af68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af64) {
            ctx->pc = 0x32AFCCu;
            goto label_32afcc;
        }
    }
    ctx->pc = 0x32AF6Cu;
label_32af6c:
    // 0x32af6c: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x32af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_32af70:
    // 0x32af70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32af70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32af74:
    // 0x32af74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32af78:
    // 0x32af78: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x32af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_32af7c:
    // 0x32af7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32af7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32af80:
    // 0x32af80: 0x40f809  jalr        $v0
label_32af84:
    if (ctx->pc == 0x32AF84u) {
        ctx->pc = 0x32AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF80u;
        // 0x32af84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF88u;
        goto label_32af88;
    }
    ctx->pc = 0x32AF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AF88u);
        ctx->pc = 0x32AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF80u;
        // 0x32af84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF80u, 0x32AF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AF88u;
label_32af88:
    // 0x32af88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32af8c:
    if (ctx->pc == 0x32AF8Cu) {
        ctx->pc = 0x32AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF88u;
        // 0x32af8c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF90u;
        goto label_32af90;
    }
    ctx->pc = 0x32AF88u;
    {
        const bool branch_taken_0x32af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF88u;
        // 0x32af8c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af88) {
            ctx->pc = 0x32AFA4u;
            goto label_32afa4;
        }
    }
    ctx->pc = 0x32AF90u;
label_32af90:
    // 0x32af90: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32af90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_32af94:
    // 0x32af94: 0x8e440194  lw          $a0, 0x194($s2)
    ctx->pc = 0x32af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_32af98:
    // 0x32af98: 0x24a57f78  addiu       $a1, $a1, 0x7F78
    ctx->pc = 0x32af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
label_32af9c:
    // 0x32af9c: 0xc073fde  jal         func_1CFF78
label_32afa0:
    if (ctx->pc == 0x32AFA0u) {
        ctx->pc = 0x32AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF9Cu;
        // 0x32afa0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFA4u;
        goto label_32afa4;
    }
    ctx->pc = 0x32AF9Cu;
    SET_GPR_U32(ctx, 31, 0x32AFA4u);
    ctx->pc = 0x32AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF9Cu;
    // 0x32afa0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x32AF9Cu, 0x32AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFA4u;
label_32afa4:
    // 0x32afa4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_32afa8:
    // 0x32afa8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x32afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_32afac:
    // 0x32afac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32afacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_32afb0:
    // 0x32afb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_32afb4:
    if (ctx->pc == 0x32AFB4u) {
        ctx->pc = 0x32AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB0u;
        // 0x32afb4: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFB8u;
        goto label_32afb8;
    }
    ctx->pc = 0x32AFB0u;
    {
        const bool branch_taken_0x32afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB0u;
        // 0x32afb4: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afb0) {
            ctx->pc = 0x32AFDCu;
            goto label_32afdc;
        }
    }
    ctx->pc = 0x32AFB8u;
label_32afb8:
    // 0x32afb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32afbc:
    // 0x32afbc: 0xc0b4a62  jal         func_2D2988
label_32afc0:
    if (ctx->pc == 0x32AFC0u) {
        ctx->pc = 0x32AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFBCu;
        // 0x32afc0: 0x24847cb0  addiu       $a0, $a0, 0x7CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFC4u;
        goto label_32afc4;
    }
    ctx->pc = 0x32AFBCu;
    SET_GPR_U32(ctx, 31, 0x32AFC4u);
    ctx->pc = 0x32AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFBCu;
    // 0x32afc0: 0x24847cb0  addiu       $a0, $a0, 0x7CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2988u, 0x32AFBCu, 0x32AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFC4u;
label_32afc4:
    // 0x32afc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_32afc8:
    if (ctx->pc == 0x32AFC8u) {
        ctx->pc = 0x32AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFC4u;
        // 0x32afc8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFCCu;
        goto label_32afcc;
    }
    ctx->pc = 0x32AFC4u;
    {
        const bool branch_taken_0x32afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFC4u;
        // 0x32afc8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afc4) {
            ctx->pc = 0x32AFE0u;
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32AFCCu;
label_32afcc:
    // 0x32afcc: 0xc084c84  jal         func_213210
label_32afd0:
    if (ctx->pc == 0x32AFD0u) {
        ctx->pc = 0x32AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFCCu;
        // 0x32afd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFD4u;
        goto label_32afd4;
    }
    ctx->pc = 0x32AFCCu;
    SET_GPR_U32(ctx, 31, 0x32AFD4u);
    ctx->pc = 0x32AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFCCu;
    // 0x32afd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213210u, 0x32AFCCu, 0x32AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFD4u;
label_32afd4:
    // 0x32afd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32afd8:
    // 0x32afd8: 0xaec2003c  sw          $v0, 0x3C($s6)
    ctx->pc = 0x32afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
label_32afdc:
    // 0x32afdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32afe0:
    // 0x32afe0: 0xc0d7412  jal         func_35D048
label_32afe4:
    if (ctx->pc == 0x32AFE4u) {
        ctx->pc = 0x32AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE0u;
        // 0x32afe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFE8u;
        goto label_32afe8;
    }
    ctx->pc = 0x32AFE0u;
    SET_GPR_U32(ctx, 31, 0x32AFE8u);
    ctx->pc = 0x32AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFE0u;
    // 0x32afe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x32AFE0u, 0x32AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFE8u;
label_32afe8:
    // 0x32afe8: 0x100003a3  b           . + 4 + (0x3A3 << 2)
label_32afec:
    if (ctx->pc == 0x32AFECu) {
        ctx->pc = 0x32AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE8u;
        // 0x32afec: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFF0u;
        goto label_32aff0;
    }
    ctx->pc = 0x32AFE8u;
    {
        const bool branch_taken_0x32afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE8u;
        // 0x32afec: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afe8) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32AFF0u;
label_32aff0:
    // 0x32aff0: 0xc0cdf2e  jal         func_337CB8
label_32aff4:
    if (ctx->pc == 0x32AFF4u) {
        ctx->pc = 0x32AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFF0u;
        // 0x32aff4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFF8u;
        goto label_32aff8;
    }
    ctx->pc = 0x32AFF0u;
    SET_GPR_U32(ctx, 31, 0x32AFF8u);
    ctx->pc = 0x32AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFF0u;
    // 0x32aff4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32AFF0u, 0x32AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFF8u;
label_32aff8:
    // 0x32aff8: 0xc0cdf52  jal         func_337D48
label_32affc:
    if (ctx->pc == 0x32AFFCu) {
        ctx->pc = 0x32AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFF8u;
        // 0x32affc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B000u;
        goto label_32b000;
    }
    ctx->pc = 0x32AFF8u;
    SET_GPR_U32(ctx, 31, 0x32B000u);
    ctx->pc = 0x32AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFF8u;
    // 0x32affc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32AFF8u, 0x32B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B000u;
label_32b000:
    // 0x32b000: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32b000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b004:
    // 0x32b004: 0xc0cdf2e  jal         func_337CB8
label_32b008:
    if (ctx->pc == 0x32B008u) {
        ctx->pc = 0x32B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B004u;
        // 0x32b008: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B00Cu;
        goto label_32b00c;
    }
    ctx->pc = 0x32B004u;
    SET_GPR_U32(ctx, 31, 0x32B00Cu);
    ctx->pc = 0x32B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B004u;
    // 0x32b008: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B004u, 0x32B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B00Cu;
label_32b00c:
    // 0x32b00c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32b00cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b010:
    // 0x32b010: 0xc0cdf2e  jal         func_337CB8
label_32b014:
    if (ctx->pc == 0x32B014u) {
        ctx->pc = 0x32B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B010u;
        // 0x32b014: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B018u;
        goto label_32b018;
    }
    ctx->pc = 0x32B010u;
    SET_GPR_U32(ctx, 31, 0x32B018u);
    ctx->pc = 0x32B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B010u;
    // 0x32b014: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B010u, 0x32B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B018u;
label_32b018:
    // 0x32b018: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b01c:
    // 0x32b01c: 0xc0cdf2e  jal         func_337CB8
label_32b020:
    if (ctx->pc == 0x32B020u) {
        ctx->pc = 0x32B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B01Cu;
        // 0x32b020: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B024u;
        goto label_32b024;
    }
    ctx->pc = 0x32B01Cu;
    SET_GPR_U32(ctx, 31, 0x32B024u);
    ctx->pc = 0x32B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B01Cu;
    // 0x32b020: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B01Cu, 0x32B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B024u;
label_32b024:
    // 0x32b024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b028:
    // 0x32b028: 0xc0cdf2e  jal         func_337CB8
label_32b02c:
    if (ctx->pc == 0x32B02Cu) {
        ctx->pc = 0x32B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B028u;
        // 0x32b02c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B030u;
        goto label_32b030;
    }
    ctx->pc = 0x32B028u;
    SET_GPR_U32(ctx, 31, 0x32B030u);
    ctx->pc = 0x32B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B028u;
    // 0x32b02c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B028u, 0x32B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B030u;
label_32b030:
    // 0x32b030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b034:
    // 0x32b034: 0xc0cdf2e  jal         func_337CB8
label_32b038:
    if (ctx->pc == 0x32B038u) {
        ctx->pc = 0x32B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B034u;
        // 0x32b038: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B03Cu;
        goto label_32b03c;
    }
    ctx->pc = 0x32B034u;
    SET_GPR_U32(ctx, 31, 0x32B03Cu);
    ctx->pc = 0x32B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B034u;
    // 0x32b038: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B034u, 0x32B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B03Cu;
label_32b03c:
    // 0x32b03c: 0xc0cdf52  jal         func_337D48
label_32b040:
    if (ctx->pc == 0x32B040u) {
        ctx->pc = 0x32B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B03Cu;
        // 0x32b040: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B044u;
        goto label_32b044;
    }
    ctx->pc = 0x32B03Cu;
    SET_GPR_U32(ctx, 31, 0x32B044u);
    ctx->pc = 0x32B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B03Cu;
    // 0x32b040: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B03Cu, 0x32B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B044u;
label_32b044:
    // 0x32b044: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b048:
    // 0x32b048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b04c:
    // 0x32b04c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b050:
    // 0x32b050: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b054:
    // 0x32b054: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b058:
    // 0x32b058: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b05c:
    // 0x32b05c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32b05cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b060:
    // 0x32b060: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x32b060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b064:
    // 0x32b064: 0xc048ff8  jal         func_123FE0
label_32b068:
    if (ctx->pc == 0x32B068u) {
        ctx->pc = 0x32B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B064u;
        // 0x32b068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B06Cu;
        goto label_32b06c;
    }
    ctx->pc = 0x32B064u;
    SET_GPR_U32(ctx, 31, 0x32B06Cu);
    ctx->pc = 0x32B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B064u;
    // 0x32b068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123FE0u, 0x32B064u, 0x32B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B06Cu;
label_32b06c:
    // 0x32b06c: 0x1000036b  b           . + 4 + (0x36B << 2)
label_32b070:
    if (ctx->pc == 0x32B070u) {
        ctx->pc = 0x32B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B06Cu;
        // 0x32b070: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B074u;
        goto label_32b074;
    }
    ctx->pc = 0x32B06Cu;
    {
        const bool branch_taken_0x32b06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B06Cu;
        // 0x32b070: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b06c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B074u;
label_32b074:
    // 0x32b074: 0xc0cdf40  jal         func_337D00
label_32b078:
    if (ctx->pc == 0x32B078u) {
        ctx->pc = 0x32B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B074u;
        // 0x32b078: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B07Cu;
        goto label_32b07c;
    }
    ctx->pc = 0x32B074u;
    SET_GPR_U32(ctx, 31, 0x32B07Cu);
    ctx->pc = 0x32B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B074u;
    // 0x32b078: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32B074u, 0x32B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B07Cu;
label_32b07c:
    // 0x32b07c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32b07cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32b080:
    // 0x32b080: 0xc0cdf2e  jal         func_337CB8
label_32b084:
    if (ctx->pc == 0x32B084u) {
        ctx->pc = 0x32B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B080u;
        // 0x32b084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B088u;
        goto label_32b088;
    }
    ctx->pc = 0x32B080u;
    SET_GPR_U32(ctx, 31, 0x32B088u);
    ctx->pc = 0x32B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B080u;
    // 0x32b084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B080u, 0x32B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B088u;
label_32b088:
    // 0x32b088: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b08c:
    // 0x32b08c: 0xc0cdf2e  jal         func_337CB8
label_32b090:
    if (ctx->pc == 0x32B090u) {
        ctx->pc = 0x32B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B08Cu;
        // 0x32b090: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B094u;
        goto label_32b094;
    }
    ctx->pc = 0x32B08Cu;
    SET_GPR_U32(ctx, 31, 0x32B094u);
    ctx->pc = 0x32B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B08Cu;
    // 0x32b090: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B08Cu, 0x32B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B094u;
label_32b094:
    // 0x32b094: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b098:
    // 0x32b098: 0xc0cdf2e  jal         func_337CB8
label_32b09c:
    if (ctx->pc == 0x32B09Cu) {
        ctx->pc = 0x32B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B098u;
        // 0x32b09c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0A0u;
        goto label_32b0a0;
    }
    ctx->pc = 0x32B098u;
    SET_GPR_U32(ctx, 31, 0x32B0A0u);
    ctx->pc = 0x32B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B098u;
    // 0x32b09c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B098u, 0x32B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0A0u;
label_32b0a0:
    // 0x32b0a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b0a4:
    // 0x32b0a4: 0xc0cdf2e  jal         func_337CB8
label_32b0a8:
    if (ctx->pc == 0x32B0A8u) {
        ctx->pc = 0x32B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0A4u;
        // 0x32b0a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0ACu;
        goto label_32b0ac;
    }
    ctx->pc = 0x32B0A4u;
    SET_GPR_U32(ctx, 31, 0x32B0ACu);
    ctx->pc = 0x32B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0A4u;
    // 0x32b0a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B0A4u, 0x32B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0ACu;
label_32b0ac:
    // 0x32b0ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b0b0:
    // 0x32b0b0: 0xc0cdf2e  jal         func_337CB8
label_32b0b4:
    if (ctx->pc == 0x32B0B4u) {
        ctx->pc = 0x32B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B0u;
        // 0x32b0b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0B8u;
        goto label_32b0b8;
    }
    ctx->pc = 0x32B0B0u;
    SET_GPR_U32(ctx, 31, 0x32B0B8u);
    ctx->pc = 0x32B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0B0u;
    // 0x32b0b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B0B0u, 0x32B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0B8u;
label_32b0b8:
    // 0x32b0b8: 0xc0cdf52  jal         func_337D48
label_32b0bc:
    if (ctx->pc == 0x32B0BCu) {
        ctx->pc = 0x32B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B8u;
        // 0x32b0bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0C0u;
        goto label_32b0c0;
    }
    ctx->pc = 0x32B0B8u;
    SET_GPR_U32(ctx, 31, 0x32B0C0u);
    ctx->pc = 0x32B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0B8u;
    // 0x32b0bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B0B8u, 0x32B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0C0u;
label_32b0c0:
    // 0x32b0c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_32b0c4:
    if (ctx->pc == 0x32B0C4u) {
        ctx->pc = 0x32B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0C0u;
        // 0x32b0c4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0C8u;
        goto label_32b0c8;
    }
    ctx->pc = 0x32B0C0u;
    {
        const bool branch_taken_0x32b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0C0u;
        // 0x32b0c4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0c0) {
            ctx->pc = 0x32B0F0u;
            goto label_32b0f0;
        }
    }
    ctx->pc = 0x32B0C8u;
label_32b0c8:
    // 0x32b0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b0cc:
    // 0x32b0cc: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b0d0:
    // 0x32b0d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b0d4:
    // 0x32b0d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b0d8:
    // 0x32b0d8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b0d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b0dc:
    // 0x32b0dc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32b0dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b0e0:
    // 0x32b0e0: 0xc049042  jal         func_124108
label_32b0e4:
    if (ctx->pc == 0x32B0E4u) {
        ctx->pc = 0x32B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0E0u;
        // 0x32b0e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0E8u;
        goto label_32b0e8;
    }
    ctx->pc = 0x32B0E0u;
    SET_GPR_U32(ctx, 31, 0x32B0E8u);
    ctx->pc = 0x32B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0E0u;
    // 0x32b0e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x124108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124108u, 0x32B0E0u, 0x32B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B0E8u;
label_32b0e8:
    // 0x32b0e8: 0x1000034c  b           . + 4 + (0x34C << 2)
label_32b0ec:
    if (ctx->pc == 0x32B0ECu) {
        ctx->pc = 0x32B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0E8u;
        // 0x32b0ec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0F0u;
        goto label_32b0f0;
    }
    ctx->pc = 0x32B0E8u;
    {
        const bool branch_taken_0x32b0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0E8u;
        // 0x32b0ec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0e8) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B0F0u;
label_32b0f0:
    // 0x32b0f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b0f4:
    // 0x32b0f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b0f8:
    // 0x32b0f8: 0xaec2003c  sw          $v0, 0x3C($s6)
    ctx->pc = 0x32b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
label_32b0fc:
    // 0x32b0fc: 0xc0cdfdc  jal         func_337F70
label_32b100:
    if (ctx->pc == 0x32B100u) {
        ctx->pc = 0x32B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0FCu;
        // 0x32b100: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B104u;
        goto label_32b104;
    }
    ctx->pc = 0x32B0FCu;
    SET_GPR_U32(ctx, 31, 0x32B104u);
    ctx->pc = 0x32B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0FCu;
    // 0x32b100: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x32B0FCu, 0x32B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B104u;
label_32b104:
    // 0x32b104: 0x1000035c  b           . + 4 + (0x35C << 2)
label_32b108:
    if (ctx->pc == 0x32B108u) {
        ctx->pc = 0x32B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B104u;
        // 0x32b108: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B10Cu;
        goto label_32b10c;
    }
    ctx->pc = 0x32B104u;
    {
        const bool branch_taken_0x32b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B104u;
        // 0x32b108: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b104) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B10Cu;
label_32b10c:
    // 0x32b10c: 0xc0cdf2e  jal         func_337CB8
label_32b110:
    if (ctx->pc == 0x32B110u) {
        ctx->pc = 0x32B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B10Cu;
        // 0x32b110: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B114u;
        goto label_32b114;
    }
    ctx->pc = 0x32B10Cu;
    SET_GPR_U32(ctx, 31, 0x32B114u);
    ctx->pc = 0x32B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B10Cu;
    // 0x32b110: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B10Cu, 0x32B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B114u;
label_32b114:
    // 0x32b114: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b118:
    // 0x32b118: 0xc0cdf2e  jal         func_337CB8
label_32b11c:
    if (ctx->pc == 0x32B11Cu) {
        ctx->pc = 0x32B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B118u;
        // 0x32b11c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B120u;
        goto label_32b120;
    }
    ctx->pc = 0x32B118u;
    SET_GPR_U32(ctx, 31, 0x32B120u);
    ctx->pc = 0x32B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B118u;
    // 0x32b11c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B118u, 0x32B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B120u;
label_32b120:
    // 0x32b120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b124:
    // 0x32b124: 0xc0cdf2e  jal         func_337CB8
label_32b128:
    if (ctx->pc == 0x32B128u) {
        ctx->pc = 0x32B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B124u;
        // 0x32b128: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B12Cu;
        goto label_32b12c;
    }
    ctx->pc = 0x32B124u;
    SET_GPR_U32(ctx, 31, 0x32B12Cu);
    ctx->pc = 0x32B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B124u;
    // 0x32b128: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B124u, 0x32B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B12Cu;
label_32b12c:
    // 0x32b12c: 0xc0cdf52  jal         func_337D48
label_32b130:
    if (ctx->pc == 0x32B130u) {
        ctx->pc = 0x32B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B12Cu;
        // 0x32b130: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B134u;
        goto label_32b134;
    }
    ctx->pc = 0x32B12Cu;
    SET_GPR_U32(ctx, 31, 0x32B134u);
    ctx->pc = 0x32B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B12Cu;
    // 0x32b130: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B12Cu, 0x32B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B134u;
label_32b134:
    // 0x32b134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b138:
    // 0x32b138: 0xc0cdf2e  jal         func_337CB8
label_32b13c:
    if (ctx->pc == 0x32B13Cu) {
        ctx->pc = 0x32B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B138u;
        // 0x32b13c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B140u;
        goto label_32b140;
    }
    ctx->pc = 0x32B138u;
    SET_GPR_U32(ctx, 31, 0x32B140u);
    ctx->pc = 0x32B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B138u;
    // 0x32b13c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B138u, 0x32B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B140u;
label_32b140:
    // 0x32b140: 0xc0cdf52  jal         func_337D48
label_32b144:
    if (ctx->pc == 0x32B144u) {
        ctx->pc = 0x32B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B140u;
        // 0x32b144: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B148u;
        goto label_32b148;
    }
    ctx->pc = 0x32B140u;
    SET_GPR_U32(ctx, 31, 0x32B148u);
    ctx->pc = 0x32B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B140u;
    // 0x32b144: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B140u, 0x32B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B148u;
label_32b148:
    // 0x32b148: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b14c:
    // 0x32b14c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b150:
    // 0x32b150: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b154:
    // 0x32b154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b158:
    // 0x32b158: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b15c:
    // 0x32b15c: 0xc04913a  jal         func_1244E8
label_32b160:
    if (ctx->pc == 0x32B160u) {
        ctx->pc = 0x32B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B15Cu;
        // 0x32b160: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B164u;
        goto label_32b164;
    }
    ctx->pc = 0x32B15Cu;
    SET_GPR_U32(ctx, 31, 0x32B164u);
    ctx->pc = 0x32B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B15Cu;
    // 0x32b160: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1244E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1244E8u, 0x32B15Cu, 0x32B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B164u;
label_32b164:
    // 0x32b164: 0x1000032d  b           . + 4 + (0x32D << 2)
label_32b168:
    if (ctx->pc == 0x32B168u) {
        ctx->pc = 0x32B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B164u;
        // 0x32b168: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B16Cu;
        goto label_32b16c;
    }
    ctx->pc = 0x32B164u;
    {
        const bool branch_taken_0x32b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B164u;
        // 0x32b168: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b164) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B16Cu;
label_32b16c:
    // 0x32b16c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32b170:
    // 0x32b170: 0xc0cdee8  jal         func_337BA0
label_32b174:
    if (ctx->pc == 0x32B174u) {
        ctx->pc = 0x32B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B170u;
        // 0x32b174: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B178u;
        goto label_32b178;
    }
    ctx->pc = 0x32B170u;
    SET_GPR_U32(ctx, 31, 0x32B178u);
    ctx->pc = 0x32B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B170u;
    // 0x32b174: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32B170u, 0x32B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B178u;
label_32b178:
    // 0x32b178: 0xc0cdf2e  jal         func_337CB8
label_32b17c:
    if (ctx->pc == 0x32B17Cu) {
        ctx->pc = 0x32B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B178u;
        // 0x32b17c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B180u;
        goto label_32b180;
    }
    ctx->pc = 0x32B178u;
    SET_GPR_U32(ctx, 31, 0x32B180u);
    ctx->pc = 0x32B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B178u;
    // 0x32b17c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B178u, 0x32B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B180u;
label_32b180:
    // 0x32b180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b184:
    // 0x32b184: 0xc0cdf2e  jal         func_337CB8
label_32b188:
    if (ctx->pc == 0x32B188u) {
        ctx->pc = 0x32B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B184u;
        // 0x32b188: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B18Cu;
        goto label_32b18c;
    }
    ctx->pc = 0x32B184u;
    SET_GPR_U32(ctx, 31, 0x32B18Cu);
    ctx->pc = 0x32B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B184u;
    // 0x32b188: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B184u, 0x32B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B18Cu;
label_32b18c:
    // 0x32b18c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b190:
    // 0x32b190: 0xc0cdf2e  jal         func_337CB8
label_32b194:
    if (ctx->pc == 0x32B194u) {
        ctx->pc = 0x32B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B190u;
        // 0x32b194: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B198u;
        goto label_32b198;
    }
    ctx->pc = 0x32B190u;
    SET_GPR_U32(ctx, 31, 0x32B198u);
    ctx->pc = 0x32B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B190u;
    // 0x32b194: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B190u, 0x32B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B198u;
label_32b198:
    // 0x32b198: 0xc0cdf52  jal         func_337D48
label_32b19c:
    if (ctx->pc == 0x32B19Cu) {
        ctx->pc = 0x32B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B198u;
        // 0x32b19c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1A0u;
        goto label_32b1a0;
    }
    ctx->pc = 0x32B198u;
    SET_GPR_U32(ctx, 31, 0x32B1A0u);
    ctx->pc = 0x32B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B198u;
    // 0x32b19c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B198u, 0x32B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1A0u;
label_32b1a0:
    // 0x32b1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b1a4:
    // 0x32b1a4: 0xc0cdf2e  jal         func_337CB8
label_32b1a8:
    if (ctx->pc == 0x32B1A8u) {
        ctx->pc = 0x32B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1A4u;
        // 0x32b1a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1ACu;
        goto label_32b1ac;
    }
    ctx->pc = 0x32B1A4u;
    SET_GPR_U32(ctx, 31, 0x32B1ACu);
    ctx->pc = 0x32B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1A4u;
    // 0x32b1a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B1A4u, 0x32B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1ACu;
label_32b1ac:
    // 0x32b1ac: 0xc0cdf52  jal         func_337D48
label_32b1b0:
    if (ctx->pc == 0x32B1B0u) {
        ctx->pc = 0x32B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1ACu;
        // 0x32b1b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1B4u;
        goto label_32b1b4;
    }
    ctx->pc = 0x32B1ACu;
    SET_GPR_U32(ctx, 31, 0x32B1B4u);
    ctx->pc = 0x32B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1ACu;
    // 0x32b1b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B1ACu, 0x32B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1B4u;
label_32b1b4:
    // 0x32b1b4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b1b8:
    // 0x32b1b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b1bc:
    // 0x32b1bc: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b1c0:
    // 0x32b1c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b1c4:
    // 0x32b1c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b1c8:
    // 0x32b1c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b1c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b1cc:
    // 0x32b1cc: 0xc049148  jal         func_124520
label_32b1d0:
    if (ctx->pc == 0x32B1D0u) {
        ctx->pc = 0x32B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1CCu;
        // 0x32b1d0: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1D4u;
        goto label_32b1d4;
    }
    ctx->pc = 0x32B1CCu;
    SET_GPR_U32(ctx, 31, 0x32B1D4u);
    ctx->pc = 0x32B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1CCu;
    // 0x32b1d0: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124520u, 0x32B1CCu, 0x32B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1D4u;
label_32b1d4:
    // 0x32b1d4: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_32b1d8:
    if (ctx->pc == 0x32B1D8u) {
        ctx->pc = 0x32B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1D4u;
        // 0x32b1d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1DCu;
        goto label_32b1dc;
    }
    ctx->pc = 0x32B1D4u;
    {
        const bool branch_taken_0x32b1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1D4u;
        // 0x32b1d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1d4) {
            ctx->pc = 0x32B530u;
            goto label_32b530;
        }
    }
    ctx->pc = 0x32B1DCu;
label_32b1dc:
    // 0x32b1dc: 0xc0cdf2e  jal         func_337CB8
label_32b1e0:
    if (ctx->pc == 0x32B1E0u) {
        ctx->pc = 0x32B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1DCu;
        // 0x32b1e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1E4u;
        goto label_32b1e4;
    }
    ctx->pc = 0x32B1DCu;
    SET_GPR_U32(ctx, 31, 0x32B1E4u);
    ctx->pc = 0x32B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1DCu;
    // 0x32b1e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B1DCu, 0x32B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1E4u;
label_32b1e4:
    // 0x32b1e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b1e8:
    // 0x32b1e8: 0xc0cdf2e  jal         func_337CB8
label_32b1ec:
    if (ctx->pc == 0x32B1ECu) {
        ctx->pc = 0x32B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1E8u;
        // 0x32b1ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1F0u;
        goto label_32b1f0;
    }
    ctx->pc = 0x32B1E8u;
    SET_GPR_U32(ctx, 31, 0x32B1F0u);
    ctx->pc = 0x32B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1E8u;
    // 0x32b1ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B1E8u, 0x32B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1F0u;
label_32b1f0:
    // 0x32b1f0: 0xc0cdf52  jal         func_337D48
label_32b1f4:
    if (ctx->pc == 0x32B1F4u) {
        ctx->pc = 0x32B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1F0u;
        // 0x32b1f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1F8u;
        goto label_32b1f8;
    }
    ctx->pc = 0x32B1F0u;
    SET_GPR_U32(ctx, 31, 0x32B1F8u);
    ctx->pc = 0x32B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1F0u;
    // 0x32b1f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B1F0u, 0x32B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1F8u;
label_32b1f8:
    // 0x32b1f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b1fc:
    // 0x32b1fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b200:
    // 0x32b200: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b204:
    // 0x32b204: 0xc048e74  jal         func_1239D0
label_32b208:
    if (ctx->pc == 0x32B208u) {
        ctx->pc = 0x32B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B204u;
        // 0x32b208: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B20Cu;
        goto label_32b20c;
    }
    ctx->pc = 0x32B204u;
    SET_GPR_U32(ctx, 31, 0x32B20Cu);
    ctx->pc = 0x32B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B204u;
    // 0x32b208: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x32B204u, 0x32B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B20Cu;
label_32b20c:
    // 0x32b20c: 0x10000303  b           . + 4 + (0x303 << 2)
label_32b210:
    if (ctx->pc == 0x32B210u) {
        ctx->pc = 0x32B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B20Cu;
        // 0x32b210: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B214u;
        goto label_32b214;
    }
    ctx->pc = 0x32B20Cu;
    {
        const bool branch_taken_0x32b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B20Cu;
        // 0x32b210: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b20c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B214u;
label_32b214:
    // 0x32b214: 0xc0cdf2e  jal         func_337CB8
label_32b218:
    if (ctx->pc == 0x32B218u) {
        ctx->pc = 0x32B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B214u;
        // 0x32b218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B21Cu;
        goto label_32b21c;
    }
    ctx->pc = 0x32B214u;
    SET_GPR_U32(ctx, 31, 0x32B21Cu);
    ctx->pc = 0x32B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B214u;
    // 0x32b218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B214u, 0x32B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B21Cu;
label_32b21c:
    // 0x32b21c: 0xc0cdf52  jal         func_337D48
label_32b220:
    if (ctx->pc == 0x32B220u) {
        ctx->pc = 0x32B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B21Cu;
        // 0x32b220: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B224u;
        goto label_32b224;
    }
    ctx->pc = 0x32B21Cu;
    SET_GPR_U32(ctx, 31, 0x32B224u);
    ctx->pc = 0x32B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B21Cu;
    // 0x32b220: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B21Cu, 0x32B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B224u;
label_32b224:
    // 0x32b224: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b228:
    // 0x32b228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b22c:
    // 0x32b22c: 0xc048e8c  jal         func_123A30
label_32b230:
    if (ctx->pc == 0x32B230u) {
        ctx->pc = 0x32B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B22Cu;
        // 0x32b230: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B234u;
        goto label_32b234;
    }
    ctx->pc = 0x32B22Cu;
    SET_GPR_U32(ctx, 31, 0x32B234u);
    ctx->pc = 0x32B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B22Cu;
    // 0x32b230: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A30u, 0x32B22Cu, 0x32B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B234u;
label_32b234:
    // 0x32b234: 0x100002f9  b           . + 4 + (0x2F9 << 2)
label_32b238:
    if (ctx->pc == 0x32B238u) {
        ctx->pc = 0x32B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B234u;
        // 0x32b238: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B23Cu;
        goto label_32b23c;
    }
    ctx->pc = 0x32B234u;
    {
        const bool branch_taken_0x32b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B234u;
        // 0x32b238: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b234) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B23Cu;
label_32b23c:
    // 0x32b23c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b240:
    // 0x32b240: 0xc0cdf2e  jal         func_337CB8
label_32b244:
    if (ctx->pc == 0x32B244u) {
        ctx->pc = 0x32B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B240u;
        // 0x32b244: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B248u;
        goto label_32b248;
    }
    ctx->pc = 0x32B240u;
    SET_GPR_U32(ctx, 31, 0x32B248u);
    ctx->pc = 0x32B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B240u;
    // 0x32b244: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B240u, 0x32B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B248u;
label_32b248:
    // 0x32b248: 0xc0cdf52  jal         func_337D48
label_32b24c:
    if (ctx->pc == 0x32B24Cu) {
        ctx->pc = 0x32B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B248u;
        // 0x32b24c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B250u;
        goto label_32b250;
    }
    ctx->pc = 0x32B248u;
    SET_GPR_U32(ctx, 31, 0x32B250u);
    ctx->pc = 0x32B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B248u;
    // 0x32b24c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B248u, 0x32B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B250u;
label_32b250:
    // 0x32b250: 0xc085d4e  jal         func_217538
label_32b254:
    if (ctx->pc == 0x32B254u) {
        ctx->pc = 0x32B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B250u;
        // 0x32b254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B258u;
        goto label_32b258;
    }
    ctx->pc = 0x32B250u;
    SET_GPR_U32(ctx, 31, 0x32B258u);
    ctx->pc = 0x32B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B250u;
    // 0x32b254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x32B250u, 0x32B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B258u;
label_32b258:
    // 0x32b258: 0x50400306  beql        $v0, $zero, . + 4 + (0x306 << 2)
label_32b25c:
    if (ctx->pc == 0x32B25Cu) {
        ctx->pc = 0x32B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B258u;
        // 0x32b25c: 0xaed0003c  sw          $s0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B260u;
        goto label_32b260;
    }
    ctx->pc = 0x32B258u;
    {
        const bool branch_taken_0x32b258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b258) {
            ctx->pc = 0x32B25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B258u;
            // 0x32b25c: 0xaed0003c  sw          $s0, 0x3C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B260u;
label_32b260:
    // 0x32b260: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x32b260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32b264:
    // 0x32b264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32b268:
    // 0x32b268: 0x0  nop
    ctx->pc = 0x32b268u;
    // NOP
label_32b26c:
    // 0x32b26c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x32b26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32b270:
    // 0x32b270: 0x0  nop
    ctx->pc = 0x32b270u;
    // NOP
label_32b274:
    // 0x32b274: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_32b278:
    if (ctx->pc == 0x32B278u) {
        ctx->pc = 0x32B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B274u;
        // 0x32b278: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B27Cu;
        goto label_32b27c;
    }
    ctx->pc = 0x32B274u;
    {
        const bool branch_taken_0x32b274 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B274u;
        // 0x32b278: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b274) {
            ctx->pc = 0x32B280u;
            goto label_32b280;
        }
    }
    ctx->pc = 0x32B27Cu;
label_32b27c:
    // 0x32b27c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32b27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b280:
    // 0x32b280: 0x100002fc  b           . + 4 + (0x2FC << 2)
label_32b284:
    if (ctx->pc == 0x32B284u) {
        ctx->pc = 0x32B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B280u;
        // 0x32b284: 0xaed0003c  sw          $s0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B288u;
        goto label_32b288;
    }
    ctx->pc = 0x32B280u;
    {
        const bool branch_taken_0x32b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B280u;
        // 0x32b284: 0xaed0003c  sw          $s0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b280) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B288u;
label_32b288:
    // 0x32b288: 0xc0cdf2e  jal         func_337CB8
label_32b28c:
    if (ctx->pc == 0x32B28Cu) {
        ctx->pc = 0x32B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B288u;
        // 0x32b28c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B290u;
        goto label_32b290;
    }
    ctx->pc = 0x32B288u;
    SET_GPR_U32(ctx, 31, 0x32B290u);
    ctx->pc = 0x32B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B288u;
    // 0x32b28c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B288u, 0x32B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B290u;
label_32b290:
    // 0x32b290: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b294:
    // 0x32b294: 0xc0cdf2e  jal         func_337CB8
label_32b298:
    if (ctx->pc == 0x32B298u) {
        ctx->pc = 0x32B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B294u;
        // 0x32b298: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B29Cu;
        goto label_32b29c;
    }
    ctx->pc = 0x32B294u;
    SET_GPR_U32(ctx, 31, 0x32B29Cu);
    ctx->pc = 0x32B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B294u;
    // 0x32b298: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B294u, 0x32B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B29Cu;
label_32b29c:
    // 0x32b29c: 0xc0cdf52  jal         func_337D48
label_32b2a0:
    if (ctx->pc == 0x32B2A0u) {
        ctx->pc = 0x32B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B29Cu;
        // 0x32b2a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2A4u;
        goto label_32b2a4;
    }
    ctx->pc = 0x32B29Cu;
    SET_GPR_U32(ctx, 31, 0x32B2A4u);
    ctx->pc = 0x32B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B29Cu;
    // 0x32b2a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B29Cu, 0x32B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2A4u;
label_32b2a4:
    // 0x32b2a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b2a8:
    // 0x32b2a8: 0x2e220065  sltiu       $v0, $s1, 0x65
    ctx->pc = 0x32b2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_32b2ac:
    // 0x32b2ac: 0x104002f1  beqz        $v0, . + 4 + (0x2F1 << 2)
label_32b2b0:
    if (ctx->pc == 0x32B2B0u) {
        ctx->pc = 0x32B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2ACu;
        // 0x32b2b0: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2B4u;
        goto label_32b2b4;
    }
    ctx->pc = 0x32B2ACu;
    {
        const bool branch_taken_0x32b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2ACu;
        // 0x32b2b0: 0xaec0003c  sw          $zero, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2ac) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B2B4u;
label_32b2b4:
    // 0x32b2b4: 0xc085d4e  jal         func_217538
label_32b2b8:
    if (ctx->pc == 0x32B2B8u) {
        ctx->pc = 0x32B2BCu;
        goto label_32b2bc;
    }
    ctx->pc = 0x32B2B4u;
    SET_GPR_U32(ctx, 31, 0x32B2BCu);
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x32B2B4u, 0x32B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2BCu;
label_32b2bc:
    // 0x32b2bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b2c0:
    // 0x32b2c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b2c4:
    // 0x32b2c4: 0xc0cdcc0  jal         func_337300
label_32b2c8:
    if (ctx->pc == 0x32B2C8u) {
        ctx->pc = 0x32B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2C4u;
        // 0x32b2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2CCu;
        goto label_32b2cc;
    }
    ctx->pc = 0x32B2C4u;
    SET_GPR_U32(ctx, 31, 0x32B2CCu);
    ctx->pc = 0x32B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2C4u;
    // 0x32b2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337300u, 0x32B2C4u, 0x32B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2CCu;
label_32b2cc:
    // 0x32b2cc: 0x504002ea  beql        $v0, $zero, . + 4 + (0x2EA << 2)
label_32b2d0:
    if (ctx->pc == 0x32B2D0u) {
        ctx->pc = 0x32B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2CCu;
        // 0x32b2d0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2D4u;
        goto label_32b2d4;
    }
    ctx->pc = 0x32B2CCu;
    {
        const bool branch_taken_0x32b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b2cc) {
            ctx->pc = 0x32B2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B2CCu;
            // 0x32b2d0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B2D4u;
label_32b2d4:
    // 0x32b2d4: 0x8e050ff4  lw          $a1, 0xFF4($s0)
    ctx->pc = 0x32b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
label_32b2d8:
    // 0x32b2d8: 0x10a002e6  beqz        $a1, . + 4 + (0x2E6 << 2)
label_32b2dc:
    if (ctx->pc == 0x32B2DCu) {
        ctx->pc = 0x32B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2D8u;
        // 0x32b2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2E0u;
        goto label_32b2e0;
    }
    ctx->pc = 0x32B2D8u;
    {
        const bool branch_taken_0x32b2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2D8u;
        // 0x32b2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2d8) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B2E0u;
label_32b2e0:
    // 0x32b2e0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x32b2e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32b2e4:
    // 0x32b2e4: 0x0  nop
    ctx->pc = 0x32b2e4u;
    // NOP
label_32b2e8:
    // 0x32b2e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32b2ec:
    // 0x32b2ec: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x32b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_32b2f0:
    // 0x32b2f0: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x32b2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_32b2f4:
    // 0x32b2f4: 0x100002df  b           . + 4 + (0x2DF << 2)
label_32b2f8:
    if (ctx->pc == 0x32B2F8u) {
        ctx->pc = 0x32B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2F4u;
        // 0x32b2f8: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2FCu;
        goto label_32b2fc;
    }
    ctx->pc = 0x32B2F4u;
    {
        const bool branch_taken_0x32b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2F4u;
        // 0x32b2f8: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2f4) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B2FCu;
label_32b2fc:
    // 0x32b2fc: 0xc0cdf40  jal         func_337D00
label_32b300:
    if (ctx->pc == 0x32B300u) {
        ctx->pc = 0x32B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2FCu;
        // 0x32b300: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B304u;
        goto label_32b304;
    }
    ctx->pc = 0x32B2FCu;
    SET_GPR_U32(ctx, 31, 0x32B304u);
    ctx->pc = 0x32B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2FCu;
    // 0x32b300: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32B2FCu, 0x32B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B304u;
label_32b304:
    // 0x32b304: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b308:
    // 0x32b308: 0xc0cdec0  jal         func_337B00
label_32b30c:
    if (ctx->pc == 0x32B30Cu) {
        ctx->pc = 0x32B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B308u;
        // 0x32b30c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B310u;
        goto label_32b310;
    }
    ctx->pc = 0x32B308u;
    SET_GPR_U32(ctx, 31, 0x32B310u);
    ctx->pc = 0x32B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B308u;
    // 0x32b30c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32B308u, 0x32B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B310u;
label_32b310:
    // 0x32b310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b314:
    // 0x32b314: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b318:
    // 0x32b318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b31c:
    // 0x32b31c: 0xc0cdc38  jal         func_3370E0
label_32b320:
    if (ctx->pc == 0x32B320u) {
        ctx->pc = 0x32B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B31Cu;
        // 0x32b320: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B324u;
        goto label_32b324;
    }
    ctx->pc = 0x32B31Cu;
    SET_GPR_U32(ctx, 31, 0x32B324u);
    ctx->pc = 0x32B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B31Cu;
    // 0x32b320: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3370E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370E0u, 0x32B31Cu, 0x32B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B324u;
label_32b324:
    // 0x32b324: 0x504002d4  beql        $v0, $zero, . + 4 + (0x2D4 << 2)
label_32b328:
    if (ctx->pc == 0x32B328u) {
        ctx->pc = 0x32B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B324u;
        // 0x32b328: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B32Cu;
        goto label_32b32c;
    }
    ctx->pc = 0x32B324u;
    {
        const bool branch_taken_0x32b324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b324) {
            ctx->pc = 0x32B328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B324u;
            // 0x32b328: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B32Cu;
label_32b32c:
    // 0x32b32c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x32b32cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
label_32b330:
    // 0x32b330: 0x100002d0  b           . + 4 + (0x2D0 << 2)
label_32b334:
    if (ctx->pc == 0x32B334u) {
        ctx->pc = 0x32B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B330u;
        // 0x32b334: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B338u;
        goto label_32b338;
    }
    ctx->pc = 0x32B330u;
    {
        const bool branch_taken_0x32b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B330u;
        // 0x32b334: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b330) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B338u;
label_32b338:
    // 0x32b338: 0xc0cdf2e  jal         func_337CB8
label_32b33c:
    if (ctx->pc == 0x32B33Cu) {
        ctx->pc = 0x32B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B338u;
        // 0x32b33c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B340u;
        goto label_32b340;
    }
    ctx->pc = 0x32B338u;
    SET_GPR_U32(ctx, 31, 0x32B340u);
    ctx->pc = 0x32B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B338u;
    // 0x32b33c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B338u, 0x32B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B340u;
label_32b340:
    // 0x32b340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b344:
    // 0x32b344: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32b344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32b348:
    // 0x32b348: 0xc0cdee8  jal         func_337BA0
label_32b34c:
    if (ctx->pc == 0x32B34Cu) {
        ctx->pc = 0x32B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B348u;
        // 0x32b34c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B350u;
        goto label_32b350;
    }
    ctx->pc = 0x32B348u;
    SET_GPR_U32(ctx, 31, 0x32B350u);
    ctx->pc = 0x32B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B348u;
    // 0x32b34c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32B348u, 0x32B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B350u;
label_32b350:
    // 0x32b350: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x32b350u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32b354:
    // 0x32b354: 0x0  nop
    ctx->pc = 0x32b354u;
    // NOP
label_32b358:
    // 0x32b358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32b35c:
    // 0x32b35c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x32b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_32b360:
    // 0x32b360: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x32b360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_32b364:
    // 0x32b364: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32b364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32b368:
    // 0x32b368: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32b36c:
    // 0x32b36c: 0xc0c97d0  jal         func_325F40
label_32b370:
    if (ctx->pc == 0x32B370u) {
        ctx->pc = 0x32B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B36Cu;
        // 0x32b370: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B374u;
        goto label_32b374;
    }
    ctx->pc = 0x32B36Cu;
    SET_GPR_U32(ctx, 31, 0x32B374u);
    ctx->pc = 0x32B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B36Cu;
    // 0x32b370: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x325F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F40u, 0x32B36Cu, 0x32B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B374u;
label_32b374:
    // 0x32b374: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_32b378:
    if (ctx->pc == 0x32B378u) {
        ctx->pc = 0x32B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B374u;
        // 0x32b378: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B37Cu;
        goto label_32b37c;
    }
    ctx->pc = 0x32B374u;
    {
        const bool branch_taken_0x32b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B374u;
        // 0x32b378: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b374) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B37Cu;
label_32b37c:
    // 0x32b37c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32b380:
    // 0x32b380: 0xc0cdee8  jal         func_337BA0
label_32b384:
    if (ctx->pc == 0x32B384u) {
        ctx->pc = 0x32B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B380u;
        // 0x32b384: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B388u;
        goto label_32b388;
    }
    ctx->pc = 0x32B380u;
    SET_GPR_U32(ctx, 31, 0x32B388u);
    ctx->pc = 0x32B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B380u;
    // 0x32b384: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32B380u, 0x32B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B388u;
label_32b388:
    // 0x32b388: 0xc0cdf2e  jal         func_337CB8
label_32b38c:
    if (ctx->pc == 0x32B38Cu) {
        ctx->pc = 0x32B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B388u;
        // 0x32b38c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B390u;
        goto label_32b390;
    }
    ctx->pc = 0x32B388u;
    SET_GPR_U32(ctx, 31, 0x32B390u);
    ctx->pc = 0x32B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B388u;
    // 0x32b38c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B388u, 0x32B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B390u;
label_32b390:
    // 0x32b390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b394:
    // 0x32b394: 0xc0cdf40  jal         func_337D00
label_32b398:
    if (ctx->pc == 0x32B398u) {
        ctx->pc = 0x32B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B394u;
        // 0x32b398: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B39Cu;
        goto label_32b39c;
    }
    ctx->pc = 0x32B394u;
    SET_GPR_U32(ctx, 31, 0x32B39Cu);
    ctx->pc = 0x32B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B394u;
    // 0x32b398: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32B394u, 0x32B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B39Cu;
label_32b39c:
    // 0x32b39c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x32b39cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_32b3a0:
    // 0x32b3a0: 0xc0cdf40  jal         func_337D00
label_32b3a4:
    if (ctx->pc == 0x32B3A4u) {
        ctx->pc = 0x32B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3A0u;
        // 0x32b3a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3A8u;
        goto label_32b3a8;
    }
    ctx->pc = 0x32B3A0u;
    SET_GPR_U32(ctx, 31, 0x32B3A8u);
    ctx->pc = 0x32B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3A0u;
    // 0x32b3a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32B3A0u, 0x32B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3A8u;
label_32b3a8:
    // 0x32b3a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32b3a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32b3ac:
    // 0x32b3ac: 0xc0cdf2e  jal         func_337CB8
label_32b3b0:
    if (ctx->pc == 0x32B3B0u) {
        ctx->pc = 0x32B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3ACu;
        // 0x32b3b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3B4u;
        goto label_32b3b4;
    }
    ctx->pc = 0x32B3ACu;
    SET_GPR_U32(ctx, 31, 0x32B3B4u);
    ctx->pc = 0x32B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3ACu;
    // 0x32b3b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B3ACu, 0x32B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3B4u;
label_32b3b4:
    // 0x32b3b4: 0xc0cdf52  jal         func_337D48
label_32b3b8:
    if (ctx->pc == 0x32B3B8u) {
        ctx->pc = 0x32B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3B4u;
        // 0x32b3b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3BCu;
        goto label_32b3bc;
    }
    ctx->pc = 0x32B3B4u;
    SET_GPR_U32(ctx, 31, 0x32B3BCu);
    ctx->pc = 0x32B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3B4u;
    // 0x32b3b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B3B4u, 0x32B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3BCu;
label_32b3bc:
    // 0x32b3bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b3c0:
    // 0x32b3c0: 0xc0cdf2e  jal         func_337CB8
label_32b3c4:
    if (ctx->pc == 0x32B3C4u) {
        ctx->pc = 0x32B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3C0u;
        // 0x32b3c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3C8u;
        goto label_32b3c8;
    }
    ctx->pc = 0x32B3C0u;
    SET_GPR_U32(ctx, 31, 0x32B3C8u);
    ctx->pc = 0x32B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3C0u;
    // 0x32b3c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B3C0u, 0x32B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3C8u;
label_32b3c8:
    // 0x32b3c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b3cc:
    // 0x32b3cc: 0xc0cdf2e  jal         func_337CB8
label_32b3d0:
    if (ctx->pc == 0x32B3D0u) {
        ctx->pc = 0x32B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3CCu;
        // 0x32b3d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3D4u;
        goto label_32b3d4;
    }
    ctx->pc = 0x32B3CCu;
    SET_GPR_U32(ctx, 31, 0x32B3D4u);
    ctx->pc = 0x32B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3CCu;
    // 0x32b3d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B3CCu, 0x32B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3D4u;
label_32b3d4:
    // 0x32b3d4: 0xc0cdf52  jal         func_337D48
label_32b3d8:
    if (ctx->pc == 0x32B3D8u) {
        ctx->pc = 0x32B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3D4u;
        // 0x32b3d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B3DCu;
        goto label_32b3dc;
    }
    ctx->pc = 0x32B3D4u;
    SET_GPR_U32(ctx, 31, 0x32B3DCu);
    ctx->pc = 0x32B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3D4u;
    // 0x32b3d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B3D4u, 0x32B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3DCu;
label_32b3dc:
    // 0x32b3dc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b3e0:
    // 0x32b3e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b3e4:
    // 0x32b3e4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b3e8:
    // 0x32b3e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b3ec:
    // 0x32b3ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b3f0:
    // 0x32b3f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32b3f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32b3f4:
    // 0x32b3f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32b3f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_32b3f8:
    // 0x32b3f8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b3fc:
    // 0x32b3fc: 0xc048732  jal         func_121CC8
label_32b400:
    if (ctx->pc == 0x32B400u) {
        ctx->pc = 0x32B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3FCu;
        // 0x32b400: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B404u;
        goto label_32b404;
    }
    ctx->pc = 0x32B3FCu;
    SET_GPR_U32(ctx, 31, 0x32B404u);
    ctx->pc = 0x32B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3FCu;
    // 0x32b400: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CC8u, 0x32B3FCu, 0x32B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B404u;
label_32b404:
    // 0x32b404: 0x1000004a  b           . + 4 + (0x4A << 2)
label_32b408:
    if (ctx->pc == 0x32B408u) {
        ctx->pc = 0x32B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B404u;
        // 0x32b408: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B40Cu;
        goto label_32b40c;
    }
    ctx->pc = 0x32B404u;
    {
        const bool branch_taken_0x32b404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B404u;
        // 0x32b408: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b404) {
            ctx->pc = 0x32B530u;
            goto label_32b530;
        }
    }
    ctx->pc = 0x32B40Cu;
label_32b40c:
    // 0x32b40c: 0xc0cdf2e  jal         func_337CB8
label_32b410:
    if (ctx->pc == 0x32B410u) {
        ctx->pc = 0x32B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B40Cu;
        // 0x32b410: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B414u;
        goto label_32b414;
    }
    ctx->pc = 0x32B40Cu;
    SET_GPR_U32(ctx, 31, 0x32B414u);
    ctx->pc = 0x32B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B40Cu;
    // 0x32b410: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B40Cu, 0x32B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B414u;
label_32b414:
    // 0x32b414: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32b414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b418:
    // 0x32b418: 0xc0cdf2e  jal         func_337CB8
label_32b41c:
    if (ctx->pc == 0x32B41Cu) {
        ctx->pc = 0x32B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B418u;
        // 0x32b41c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B420u;
        goto label_32b420;
    }
    ctx->pc = 0x32B418u;
    SET_GPR_U32(ctx, 31, 0x32B420u);
    ctx->pc = 0x32B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B418u;
    // 0x32b41c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B418u, 0x32B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B420u;
label_32b420:
    // 0x32b420: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32b420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b424:
    // 0x32b424: 0xc0cdf2e  jal         func_337CB8
label_32b428:
    if (ctx->pc == 0x32B428u) {
        ctx->pc = 0x32B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B424u;
        // 0x32b428: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B42Cu;
        goto label_32b42c;
    }
    ctx->pc = 0x32B424u;
    SET_GPR_U32(ctx, 31, 0x32B42Cu);
    ctx->pc = 0x32B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B424u;
    // 0x32b428: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B424u, 0x32B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B42Cu;
label_32b42c:
    // 0x32b42c: 0xc0cdf52  jal         func_337D48
label_32b430:
    if (ctx->pc == 0x32B430u) {
        ctx->pc = 0x32B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B42Cu;
        // 0x32b430: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B434u;
        goto label_32b434;
    }
    ctx->pc = 0x32B42Cu;
    SET_GPR_U32(ctx, 31, 0x32B434u);
    ctx->pc = 0x32B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B42Cu;
    // 0x32b430: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B42Cu, 0x32B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B434u;
label_32b434:
    // 0x32b434: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b438:
    // 0x32b438: 0xc0cdf2e  jal         func_337CB8
label_32b43c:
    if (ctx->pc == 0x32B43Cu) {
        ctx->pc = 0x32B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B438u;
        // 0x32b43c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B440u;
        goto label_32b440;
    }
    ctx->pc = 0x32B438u;
    SET_GPR_U32(ctx, 31, 0x32B440u);
    ctx->pc = 0x32B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B438u;
    // 0x32b43c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B438u, 0x32B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B440u;
label_32b440:
    // 0x32b440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b444:
    // 0x32b444: 0xc0cdf2e  jal         func_337CB8
label_32b448:
    if (ctx->pc == 0x32B448u) {
        ctx->pc = 0x32B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B444u;
        // 0x32b448: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B44Cu;
        goto label_32b44c;
    }
    ctx->pc = 0x32B444u;
    SET_GPR_U32(ctx, 31, 0x32B44Cu);
    ctx->pc = 0x32B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B444u;
    // 0x32b448: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B444u, 0x32B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B44Cu;
label_32b44c:
    // 0x32b44c: 0xc0cdf52  jal         func_337D48
label_32b450:
    if (ctx->pc == 0x32B450u) {
        ctx->pc = 0x32B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B44Cu;
        // 0x32b450: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B454u;
        goto label_32b454;
    }
    ctx->pc = 0x32B44Cu;
    SET_GPR_U32(ctx, 31, 0x32B454u);
    ctx->pc = 0x32B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B44Cu;
    // 0x32b450: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B44Cu, 0x32B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B454u;
label_32b454:
    // 0x32b454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b458:
    // 0x32b458: 0xc0cdf2e  jal         func_337CB8
label_32b45c:
    if (ctx->pc == 0x32B45Cu) {
        ctx->pc = 0x32B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B458u;
        // 0x32b45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B460u;
        goto label_32b460;
    }
    ctx->pc = 0x32B458u;
    SET_GPR_U32(ctx, 31, 0x32B460u);
    ctx->pc = 0x32B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B458u;
    // 0x32b45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B458u, 0x32B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B460u;
label_32b460:
    // 0x32b460: 0xc0cdf52  jal         func_337D48
label_32b464:
    if (ctx->pc == 0x32B464u) {
        ctx->pc = 0x32B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B460u;
        // 0x32b464: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B468u;
        goto label_32b468;
    }
    ctx->pc = 0x32B460u;
    SET_GPR_U32(ctx, 31, 0x32B468u);
    ctx->pc = 0x32B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B460u;
    // 0x32b464: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B460u, 0x32B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B468u;
label_32b468:
    // 0x32b468: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b46c:
    // 0x32b46c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b470:
    // 0x32b470: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b474:
    // 0x32b474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b478:
    // 0x32b478: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b47c:
    // 0x32b47c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b480:
    // 0x32b480: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32b480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b484:
    // 0x32b484: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x32b484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b488:
    // 0x32b488: 0xc04894c  jal         func_122530
label_32b48c:
    if (ctx->pc == 0x32B48Cu) {
        ctx->pc = 0x32B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B488u;
        // 0x32b48c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B490u;
        goto label_32b490;
    }
    ctx->pc = 0x32B488u;
    SET_GPR_U32(ctx, 31, 0x32B490u);
    ctx->pc = 0x32B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B488u;
    // 0x32b48c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122530u, 0x32B488u, 0x32B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B490u;
label_32b490:
    // 0x32b490: 0x10000262  b           . + 4 + (0x262 << 2)
label_32b494:
    if (ctx->pc == 0x32B494u) {
        ctx->pc = 0x32B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B490u;
        // 0x32b494: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B498u;
        goto label_32b498;
    }
    ctx->pc = 0x32B490u;
    {
        const bool branch_taken_0x32b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B490u;
        // 0x32b494: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b490) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B498u;
label_32b498:
    // 0x32b498: 0xc0cdf2e  jal         func_337CB8
label_32b49c:
    if (ctx->pc == 0x32B49Cu) {
        ctx->pc = 0x32B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B498u;
        // 0x32b49c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4A0u;
        goto label_32b4a0;
    }
    ctx->pc = 0x32B498u;
    SET_GPR_U32(ctx, 31, 0x32B4A0u);
    ctx->pc = 0x32B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B498u;
    // 0x32b49c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B498u, 0x32B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4A0u;
label_32b4a0:
    // 0x32b4a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32b4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b4a4:
    // 0x32b4a4: 0xc0cdf2e  jal         func_337CB8
label_32b4a8:
    if (ctx->pc == 0x32B4A8u) {
        ctx->pc = 0x32B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4A4u;
        // 0x32b4a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4ACu;
        goto label_32b4ac;
    }
    ctx->pc = 0x32B4A4u;
    SET_GPR_U32(ctx, 31, 0x32B4ACu);
    ctx->pc = 0x32B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4A4u;
    // 0x32b4a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B4A4u, 0x32B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4ACu;
label_32b4ac:
    // 0x32b4ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32b4b0:
    // 0x32b4b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32b4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b4b4:
    // 0x32b4b4: 0xc0cdee8  jal         func_337BA0
label_32b4b8:
    if (ctx->pc == 0x32B4B8u) {
        ctx->pc = 0x32B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4B4u;
        // 0x32b4b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4BCu;
        goto label_32b4bc;
    }
    ctx->pc = 0x32B4B4u;
    SET_GPR_U32(ctx, 31, 0x32B4BCu);
    ctx->pc = 0x32B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4B4u;
    // 0x32b4b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32B4B4u, 0x32B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4BCu;
label_32b4bc:
    // 0x32b4bc: 0xc0cdf2e  jal         func_337CB8
label_32b4c0:
    if (ctx->pc == 0x32B4C0u) {
        ctx->pc = 0x32B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4BCu;
        // 0x32b4c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4C4u;
        goto label_32b4c4;
    }
    ctx->pc = 0x32B4BCu;
    SET_GPR_U32(ctx, 31, 0x32B4C4u);
    ctx->pc = 0x32B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4BCu;
    // 0x32b4c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B4BCu, 0x32B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4C4u;
label_32b4c4:
    // 0x32b4c4: 0xc0cdf52  jal         func_337D48
label_32b4c8:
    if (ctx->pc == 0x32B4C8u) {
        ctx->pc = 0x32B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4C4u;
        // 0x32b4c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4CCu;
        goto label_32b4cc;
    }
    ctx->pc = 0x32B4C4u;
    SET_GPR_U32(ctx, 31, 0x32B4CCu);
    ctx->pc = 0x32B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4C4u;
    // 0x32b4c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B4C4u, 0x32B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4CCu;
label_32b4cc:
    // 0x32b4cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b4ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b4d0:
    // 0x32b4d0: 0xc0cdf2e  jal         func_337CB8
label_32b4d4:
    if (ctx->pc == 0x32B4D4u) {
        ctx->pc = 0x32B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4D0u;
        // 0x32b4d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4D8u;
        goto label_32b4d8;
    }
    ctx->pc = 0x32B4D0u;
    SET_GPR_U32(ctx, 31, 0x32B4D8u);
    ctx->pc = 0x32B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4D0u;
    // 0x32b4d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B4D0u, 0x32B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4D8u;
label_32b4d8:
    // 0x32b4d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b4dc:
    // 0x32b4dc: 0xc0cdf2e  jal         func_337CB8
label_32b4e0:
    if (ctx->pc == 0x32B4E0u) {
        ctx->pc = 0x32B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4DCu;
        // 0x32b4e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4E4u;
        goto label_32b4e4;
    }
    ctx->pc = 0x32B4DCu;
    SET_GPR_U32(ctx, 31, 0x32B4E4u);
    ctx->pc = 0x32B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4DCu;
    // 0x32b4e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B4DCu, 0x32B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4E4u;
label_32b4e4:
    // 0x32b4e4: 0xc0cdf52  jal         func_337D48
label_32b4e8:
    if (ctx->pc == 0x32B4E8u) {
        ctx->pc = 0x32B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4E4u;
        // 0x32b4e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4ECu;
        goto label_32b4ec;
    }
    ctx->pc = 0x32B4E4u;
    SET_GPR_U32(ctx, 31, 0x32B4ECu);
    ctx->pc = 0x32B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4E4u;
    // 0x32b4e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B4E4u, 0x32B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4ECu;
label_32b4ec:
    // 0x32b4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b4f0:
    // 0x32b4f0: 0xc0cdf2e  jal         func_337CB8
label_32b4f4:
    if (ctx->pc == 0x32B4F4u) {
        ctx->pc = 0x32B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4F0u;
        // 0x32b4f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B4F8u;
        goto label_32b4f8;
    }
    ctx->pc = 0x32B4F0u;
    SET_GPR_U32(ctx, 31, 0x32B4F8u);
    ctx->pc = 0x32B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4F0u;
    // 0x32b4f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B4F0u, 0x32B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4F8u;
label_32b4f8:
    // 0x32b4f8: 0xc0cdf52  jal         func_337D48
label_32b4fc:
    if (ctx->pc == 0x32B4FCu) {
        ctx->pc = 0x32B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4F8u;
        // 0x32b4fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B500u;
        goto label_32b500;
    }
    ctx->pc = 0x32B4F8u;
    SET_GPR_U32(ctx, 31, 0x32B500u);
    ctx->pc = 0x32B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4F8u;
    // 0x32b4fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B4F8u, 0x32B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B500u;
label_32b500:
    // 0x32b500: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b504:
    // 0x32b504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b508:
    // 0x32b508: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b50c:
    // 0x32b50c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b510:
    // 0x32b510: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b514:
    // 0x32b514: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b518:
    // 0x32b518: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x32b518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b51c:
    // 0x32b51c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x32b51cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b520:
    // 0x32b520: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x32b520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_32b524:
    // 0x32b524: 0xc04895a  jal         func_122568
label_32b528:
    if (ctx->pc == 0x32B528u) {
        ctx->pc = 0x32B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B524u;
        // 0x32b528: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B52Cu;
        goto label_32b52c;
    }
    ctx->pc = 0x32B524u;
    SET_GPR_U32(ctx, 31, 0x32B52Cu);
    ctx->pc = 0x32B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B524u;
    // 0x32b528: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122568u, 0x32B524u, 0x32B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B52Cu;
label_32b52c:
    // 0x32b52c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b530:
    // 0x32b530: 0x14430250  bne         $v0, $v1, . + 4 + (0x250 << 2)
label_32b534:
    if (ctx->pc == 0x32B534u) {
        ctx->pc = 0x32B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B530u;
        // 0x32b534: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B538u;
        goto label_32b538;
    }
    ctx->pc = 0x32B530u;
    {
        const bool branch_taken_0x32b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B530u;
        // 0x32b534: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b530) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B538u;
label_32b538:
    // 0x32b538: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b53c:
    // 0x32b53c: 0xc0cdfdc  jal         func_337F70
label_32b540:
    if (ctx->pc == 0x32B540u) {
        ctx->pc = 0x32B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B53Cu;
        // 0x32b540: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B544u;
        goto label_32b544;
    }
    ctx->pc = 0x32B53Cu;
    SET_GPR_U32(ctx, 31, 0x32B544u);
    ctx->pc = 0x32B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B53Cu;
    // 0x32b540: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x32B53Cu, 0x32B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B544u;
label_32b544:
    // 0x32b544: 0x1000024c  b           . + 4 + (0x24C << 2)
label_32b548:
    if (ctx->pc == 0x32B548u) {
        ctx->pc = 0x32B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B544u;
        // 0x32b548: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B54Cu;
        goto label_32b54c;
    }
    ctx->pc = 0x32B544u;
    {
        const bool branch_taken_0x32b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B544u;
        // 0x32b548: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b544) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B54Cu;
label_32b54c:
    // 0x32b54c: 0xc0cdf2e  jal         func_337CB8
label_32b550:
    if (ctx->pc == 0x32B550u) {
        ctx->pc = 0x32B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B54Cu;
        // 0x32b550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B554u;
        goto label_32b554;
    }
    ctx->pc = 0x32B54Cu;
    SET_GPR_U32(ctx, 31, 0x32B554u);
    ctx->pc = 0x32B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B54Cu;
    // 0x32b550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B54Cu, 0x32B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B554u;
label_32b554:
    // 0x32b554: 0xc0cdf52  jal         func_337D48
label_32b558:
    if (ctx->pc == 0x32B558u) {
        ctx->pc = 0x32B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B554u;
        // 0x32b558: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B55Cu;
        goto label_32b55c;
    }
    ctx->pc = 0x32B554u;
    SET_GPR_U32(ctx, 31, 0x32B55Cu);
    ctx->pc = 0x32B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B554u;
    // 0x32b558: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B554u, 0x32B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B55Cu;
label_32b55c:
    // 0x32b55c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b560:
    // 0x32b560: 0xc0cdf2e  jal         func_337CB8
label_32b564:
    if (ctx->pc == 0x32B564u) {
        ctx->pc = 0x32B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B560u;
        // 0x32b564: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B568u;
        goto label_32b568;
    }
    ctx->pc = 0x32B560u;
    SET_GPR_U32(ctx, 31, 0x32B568u);
    ctx->pc = 0x32B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B560u;
    // 0x32b564: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B560u, 0x32B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B568u;
label_32b568:
    // 0x32b568: 0xc0cdf52  jal         func_337D48
label_32b56c:
    if (ctx->pc == 0x32B56Cu) {
        ctx->pc = 0x32B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B568u;
        // 0x32b56c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B570u;
        goto label_32b570;
    }
    ctx->pc = 0x32B568u;
    SET_GPR_U32(ctx, 31, 0x32B570u);
    ctx->pc = 0x32B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B568u;
    // 0x32b56c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B568u, 0x32B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B570u;
label_32b570:
    // 0x32b570: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b574:
    // 0x32b574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b578:
    // 0x32b578: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b57c:
    // 0x32b57c: 0xc04930e  jal         func_124C38
label_32b580:
    if (ctx->pc == 0x32B580u) {
        ctx->pc = 0x32B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B57Cu;
        // 0x32b580: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B584u;
        goto label_32b584;
    }
    ctx->pc = 0x32B57Cu;
    SET_GPR_U32(ctx, 31, 0x32B584u);
    ctx->pc = 0x32B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B57Cu;
    // 0x32b580: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C38u, 0x32B57Cu, 0x32B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B584u;
label_32b584:
    // 0x32b584: 0x10000225  b           . + 4 + (0x225 << 2)
label_32b588:
    if (ctx->pc == 0x32B588u) {
        ctx->pc = 0x32B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B584u;
        // 0x32b588: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B58Cu;
        goto label_32b58c;
    }
    ctx->pc = 0x32B584u;
    {
        const bool branch_taken_0x32b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B584u;
        // 0x32b588: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b584) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B58Cu;
label_32b58c:
    // 0x32b58c: 0xc0cdf40  jal         func_337D00
label_32b590:
    if (ctx->pc == 0x32B590u) {
        ctx->pc = 0x32B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B58Cu;
        // 0x32b590: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B594u;
        goto label_32b594;
    }
    ctx->pc = 0x32B58Cu;
    SET_GPR_U32(ctx, 31, 0x32B594u);
    ctx->pc = 0x32B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B58Cu;
    // 0x32b590: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32B58Cu, 0x32B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B594u;
label_32b594:
    // 0x32b594: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32b594u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32b598:
    // 0x32b598: 0xc0cdf2e  jal         func_337CB8
label_32b59c:
    if (ctx->pc == 0x32B59Cu) {
        ctx->pc = 0x32B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B598u;
        // 0x32b59c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5A0u;
        goto label_32b5a0;
    }
    ctx->pc = 0x32B598u;
    SET_GPR_U32(ctx, 31, 0x32B5A0u);
    ctx->pc = 0x32B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B598u;
    // 0x32b59c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B598u, 0x32B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5A0u;
label_32b5a0:
    // 0x32b5a0: 0xc0cdf52  jal         func_337D48
label_32b5a4:
    if (ctx->pc == 0x32B5A4u) {
        ctx->pc = 0x32B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5A0u;
        // 0x32b5a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5A8u;
        goto label_32b5a8;
    }
    ctx->pc = 0x32B5A0u;
    SET_GPR_U32(ctx, 31, 0x32B5A8u);
    ctx->pc = 0x32B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5A0u;
    // 0x32b5a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B5A0u, 0x32B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5A8u;
label_32b5a8:
    // 0x32b5a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b5ac:
    // 0x32b5ac: 0xc0cdf2e  jal         func_337CB8
label_32b5b0:
    if (ctx->pc == 0x32B5B0u) {
        ctx->pc = 0x32B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5ACu;
        // 0x32b5b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5B4u;
        goto label_32b5b4;
    }
    ctx->pc = 0x32B5ACu;
    SET_GPR_U32(ctx, 31, 0x32B5B4u);
    ctx->pc = 0x32B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5ACu;
    // 0x32b5b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B5ACu, 0x32B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5B4u;
label_32b5b4:
    // 0x32b5b4: 0xc0cdf52  jal         func_337D48
label_32b5b8:
    if (ctx->pc == 0x32B5B8u) {
        ctx->pc = 0x32B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5B4u;
        // 0x32b5b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5BCu;
        goto label_32b5bc;
    }
    ctx->pc = 0x32B5B4u;
    SET_GPR_U32(ctx, 31, 0x32B5BCu);
    ctx->pc = 0x32B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5B4u;
    // 0x32b5b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B5B4u, 0x32B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5BCu;
label_32b5bc:
    // 0x32b5bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b5c0:
    // 0x32b5c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b5c4:
    // 0x32b5c4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b5c8:
    // 0x32b5c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b5cc:
    // 0x32b5cc: 0xc04932c  jal         func_124CB0
label_32b5d0:
    if (ctx->pc == 0x32B5D0u) {
        ctx->pc = 0x32B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5CCu;
        // 0x32b5d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5D4u;
        goto label_32b5d4;
    }
    ctx->pc = 0x32B5CCu;
    SET_GPR_U32(ctx, 31, 0x32B5D4u);
    ctx->pc = 0x32B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5CCu;
    // 0x32b5d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x124CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124CB0u, 0x32B5CCu, 0x32B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5D4u;
label_32b5d4:
    // 0x32b5d4: 0x10000211  b           . + 4 + (0x211 << 2)
label_32b5d8:
    if (ctx->pc == 0x32B5D8u) {
        ctx->pc = 0x32B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5D4u;
        // 0x32b5d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5DCu;
        goto label_32b5dc;
    }
    ctx->pc = 0x32B5D4u;
    {
        const bool branch_taken_0x32b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5D4u;
        // 0x32b5d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5d4) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B5DCu;
label_32b5dc:
    // 0x32b5dc: 0xc0cdf2e  jal         func_337CB8
label_32b5e0:
    if (ctx->pc == 0x32B5E0u) {
        ctx->pc = 0x32B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5DCu;
        // 0x32b5e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5E4u;
        goto label_32b5e4;
    }
    ctx->pc = 0x32B5DCu;
    SET_GPR_U32(ctx, 31, 0x32B5E4u);
    ctx->pc = 0x32B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5DCu;
    // 0x32b5e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B5DCu, 0x32B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5E4u;
label_32b5e4:
    // 0x32b5e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b5e8:
    // 0x32b5e8: 0xc0cdf2e  jal         func_337CB8
label_32b5ec:
    if (ctx->pc == 0x32B5ECu) {
        ctx->pc = 0x32B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5E8u;
        // 0x32b5ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5F0u;
        goto label_32b5f0;
    }
    ctx->pc = 0x32B5E8u;
    SET_GPR_U32(ctx, 31, 0x32B5F0u);
    ctx->pc = 0x32B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5E8u;
    // 0x32b5ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B5E8u, 0x32B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5F0u;
label_32b5f0:
    // 0x32b5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b5f4:
    // 0x32b5f4: 0xc0cdf2e  jal         func_337CB8
label_32b5f8:
    if (ctx->pc == 0x32B5F8u) {
        ctx->pc = 0x32B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5F4u;
        // 0x32b5f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B5FCu;
        goto label_32b5fc;
    }
    ctx->pc = 0x32B5F4u;
    SET_GPR_U32(ctx, 31, 0x32B5FCu);
    ctx->pc = 0x32B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5F4u;
    // 0x32b5f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B5F4u, 0x32B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5FCu;
label_32b5fc:
    // 0x32b5fc: 0xc0cdf52  jal         func_337D48
label_32b600:
    if (ctx->pc == 0x32B600u) {
        ctx->pc = 0x32B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5FCu;
        // 0x32b600: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B604u;
        goto label_32b604;
    }
    ctx->pc = 0x32B5FCu;
    SET_GPR_U32(ctx, 31, 0x32B604u);
    ctx->pc = 0x32B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5FCu;
    // 0x32b600: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B5FCu, 0x32B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B604u;
label_32b604:
    // 0x32b604: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b608:
    // 0x32b608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b60c:
    // 0x32b60c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b610:
    // 0x32b610: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b614:
    // 0x32b614: 0xc048e58  jal         func_123960
label_32b618:
    if (ctx->pc == 0x32B618u) {
        ctx->pc = 0x32B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B614u;
        // 0x32b618: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B61Cu;
        goto label_32b61c;
    }
    ctx->pc = 0x32B614u;
    SET_GPR_U32(ctx, 31, 0x32B61Cu);
    ctx->pc = 0x32B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B614u;
    // 0x32b618: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x32B614u, 0x32B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B61Cu;
label_32b61c:
    // 0x32b61c: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_32b620:
    if (ctx->pc == 0x32B620u) {
        ctx->pc = 0x32B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B61Cu;
        // 0x32b620: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B624u;
        goto label_32b624;
    }
    ctx->pc = 0x32B61Cu;
    {
        const bool branch_taken_0x32b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B61Cu;
        // 0x32b620: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b61c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B624u;
label_32b624:
    // 0x32b624: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32b624u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32b628:
    // 0x32b628: 0xc0cdec0  jal         func_337B00
label_32b62c:
    if (ctx->pc == 0x32B62Cu) {
        ctx->pc = 0x32B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B628u;
        // 0x32b62c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B630u;
        goto label_32b630;
    }
    ctx->pc = 0x32B628u;
    SET_GPR_U32(ctx, 31, 0x32B630u);
    ctx->pc = 0x32B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B628u;
    // 0x32b62c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32B628u, 0x32B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B630u;
label_32b630:
    // 0x32b630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b634:
    // 0x32b634: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b638:
    // 0x32b638: 0xc0cdbde  jal         func_336F78
label_32b63c:
    if (ctx->pc == 0x32B63Cu) {
        ctx->pc = 0x32B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B638u;
        // 0x32b63c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B640u;
        goto label_32b640;
    }
    ctx->pc = 0x32B638u;
    SET_GPR_U32(ctx, 31, 0x32B640u);
    ctx->pc = 0x32B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B638u;
    // 0x32b63c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x32B638u, 0x32B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B640u;
label_32b640:
    // 0x32b640: 0x5040020d  beql        $v0, $zero, . + 4 + (0x20D << 2)
label_32b644:
    if (ctx->pc == 0x32B644u) {
        ctx->pc = 0x32B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B640u;
        // 0x32b644: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B648u;
        goto label_32b648;
    }
    ctx->pc = 0x32B640u;
    {
        const bool branch_taken_0x32b640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b640) {
            ctx->pc = 0x32B644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B640u;
            // 0x32b644: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B648u;
label_32b648:
    // 0x32b648: 0xc0cd984  jal         func_336610
label_32b64c:
    if (ctx->pc == 0x32B64Cu) {
        ctx->pc = 0x32B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B648u;
        // 0x32b64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B650u;
        goto label_32b650;
    }
    ctx->pc = 0x32B648u;
    SET_GPR_U32(ctx, 31, 0x32B650u);
    ctx->pc = 0x32B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B648u;
    // 0x32b64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x32B648u, 0x32B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B650u;
label_32b650:
    // 0x32b650: 0x10400208  beqz        $v0, . + 4 + (0x208 << 2)
label_32b654:
    if (ctx->pc == 0x32B654u) {
        ctx->pc = 0x32B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B650u;
        // 0x32b654: 0x244401c4  addiu       $a0, $v0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B658u;
        goto label_32b658;
    }
    ctx->pc = 0x32B650u;
    {
        const bool branch_taken_0x32b650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B650u;
        // 0x32b654: 0x244401c4  addiu       $a0, $v0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b650) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B658u;
label_32b658:
    // 0x32b658: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x32b658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32b65c:
    // 0x32b65c: 0xc0efab3  jal         func_3BEACC
label_32b660:
    if (ctx->pc == 0x32B660u) {
        ctx->pc = 0x32B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B65Cu;
        // 0x32b660: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B664u;
        goto label_32b664;
    }
    ctx->pc = 0x32B65Cu;
    SET_GPR_U32(ctx, 31, 0x32B664u);
    ctx->pc = 0x32B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B65Cu;
    // 0x32b660: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x32B65Cu, 0x32B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B664u;
label_32b664:
    // 0x32b664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b668:
    // 0x32b668: 0x10000202  b           . + 4 + (0x202 << 2)
label_32b66c:
    if (ctx->pc == 0x32B66Cu) {
        ctx->pc = 0x32B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B668u;
        // 0x32b66c: 0xaec3003c  sw          $v1, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B670u;
        goto label_32b670;
    }
    ctx->pc = 0x32B668u;
    {
        const bool branch_taken_0x32b668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B668u;
        // 0x32b66c: 0xaec3003c  sw          $v1, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b668) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B670u;
label_32b670:
    // 0x32b670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b674:
    // 0x32b674: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b678:
    // 0x32b678: 0xc0cdf2e  jal         func_337CB8
label_32b67c:
    if (ctx->pc == 0x32B67Cu) {
        ctx->pc = 0x32B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B678u;
        // 0x32b67c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B680u;
        goto label_32b680;
    }
    ctx->pc = 0x32B678u;
    SET_GPR_U32(ctx, 31, 0x32B680u);
    ctx->pc = 0x32B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B678u;
    // 0x32b67c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B678u, 0x32B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B680u;
label_32b680:
    // 0x32b680: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b684:
    // 0x32b684: 0xc0cdec0  jal         func_337B00
label_32b688:
    if (ctx->pc == 0x32B688u) {
        ctx->pc = 0x32B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B684u;
        // 0x32b688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B68Cu;
        goto label_32b68c;
    }
    ctx->pc = 0x32B684u;
    SET_GPR_U32(ctx, 31, 0x32B68Cu);
    ctx->pc = 0x32B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B684u;
    // 0x32b688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32B684u, 0x32B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B68Cu;
label_32b68c:
    // 0x32b68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b690:
    // 0x32b690: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b694:
    // 0x32b694: 0xc0cdc76  jal         func_3371D8
label_32b698:
    if (ctx->pc == 0x32B698u) {
        ctx->pc = 0x32B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B694u;
        // 0x32b698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B69Cu;
        goto label_32b69c;
    }
    ctx->pc = 0x32B694u;
    SET_GPR_U32(ctx, 31, 0x32B69Cu);
    ctx->pc = 0x32B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B694u;
    // 0x32b698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x32B694u, 0x32B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B69Cu;
label_32b69c:
    // 0x32b69c: 0x504001f6  beql        $v0, $zero, . + 4 + (0x1F6 << 2)
label_32b6a0:
    if (ctx->pc == 0x32B6A0u) {
        ctx->pc = 0x32B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B69Cu;
        // 0x32b6a0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6A4u;
        goto label_32b6a4;
    }
    ctx->pc = 0x32B69Cu;
    {
        const bool branch_taken_0x32b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b69c) {
            ctx->pc = 0x32B6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B69Cu;
            // 0x32b6a0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B6A4u;
label_32b6a4:
    // 0x32b6a4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x32b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_32b6a8:
    // 0x32b6a8: 0x508001f3  beql        $a0, $zero, . + 4 + (0x1F3 << 2)
label_32b6ac:
    if (ctx->pc == 0x32B6ACu) {
        ctx->pc = 0x32B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6A8u;
        // 0x32b6ac: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6B0u;
        goto label_32b6b0;
    }
    ctx->pc = 0x32B6A8u;
    {
        const bool branch_taken_0x32b6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b6a8) {
            ctx->pc = 0x32B6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B6A8u;
            // 0x32b6ac: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B6B0u;
label_32b6b0:
    // 0x32b6b0: 0xc0ac9b2  jal         func_2B26C8
label_32b6b4:
    if (ctx->pc == 0x32B6B4u) {
        ctx->pc = 0x32B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6B0u;
        // 0x32b6b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6B8u;
        goto label_32b6b8;
    }
    ctx->pc = 0x32B6B0u;
    SET_GPR_U32(ctx, 31, 0x32B6B8u);
    ctx->pc = 0x32B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6B0u;
    // 0x32b6b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x32B6B0u, 0x32B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6B8u;
label_32b6b8:
    // 0x32b6b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b6bc:
    // 0x32b6bc: 0x108001ee  beqz        $a0, . + 4 + (0x1EE << 2)
label_32b6c0:
    if (ctx->pc == 0x32B6C0u) {
        ctx->pc = 0x32B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6BCu;
        // 0x32b6c0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6C4u;
        goto label_32b6c4;
    }
    ctx->pc = 0x32B6BCu;
    {
        const bool branch_taken_0x32b6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6BCu;
        // 0x32b6c0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6bc) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B6C4u;
label_32b6c4:
    // 0x32b6c4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_32b6c8:
    // 0x32b6c8: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x32b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_32b6cc:
    // 0x32b6cc: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x32b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_32b6d0:
    // 0x32b6d0: 0x544001ea  bnel        $v0, $zero, . + 4 + (0x1EA << 2)
label_32b6d4:
    if (ctx->pc == 0x32B6D4u) {
        ctx->pc = 0x32B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6D0u;
        // 0x32b6d4: 0xdfb100a8  ld          $s1, 0xA8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6D8u;
        goto label_32b6d8;
    }
    ctx->pc = 0x32B6D0u;
    {
        const bool branch_taken_0x32b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b6d0) {
            ctx->pc = 0x32B6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B6D0u;
            // 0x32b6d4: 0xdfb100a8  ld          $s1, 0xA8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE7Cu;
            goto label_32be7c;
        }
    }
    ctx->pc = 0x32B6D8u;
label_32b6d8:
    // 0x32b6d8: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x32b6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_32b6dc:
    // 0x32b6dc: 0x520001e6  beql        $s0, $zero, . + 4 + (0x1E6 << 2)
label_32b6e0:
    if (ctx->pc == 0x32B6E0u) {
        ctx->pc = 0x32B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6DCu;
        // 0x32b6e0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6E4u;
        goto label_32b6e4;
    }
    ctx->pc = 0x32B6DCu;
    {
        const bool branch_taken_0x32b6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b6dc) {
            ctx->pc = 0x32B6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B6DCu;
            // 0x32b6e0: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B6E4u;
label_32b6e4:
    // 0x32b6e4: 0xc0d8de2  jal         func_363788
label_32b6e8:
    if (ctx->pc == 0x32B6E8u) {
        ctx->pc = 0x32B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6E4u;
        // 0x32b6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6ECu;
        goto label_32b6ec;
    }
    ctx->pc = 0x32B6E4u;
    SET_GPR_U32(ctx, 31, 0x32B6ECu);
    ctx->pc = 0x32B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6E4u;
    // 0x32b6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x32B6E4u, 0x32B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6ECu;
label_32b6ec:
    // 0x32b6ec: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x32b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_32b6f0:
    // 0x32b6f0: 0x544001e1  bnel        $v0, $zero, . + 4 + (0x1E1 << 2)
label_32b6f4:
    if (ctx->pc == 0x32B6F4u) {
        ctx->pc = 0x32B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6F0u;
        // 0x32b6f4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B6F8u;
        goto label_32b6f8;
    }
    ctx->pc = 0x32B6F0u;
    {
        const bool branch_taken_0x32b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b6f0) {
            ctx->pc = 0x32B6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B6F0u;
            // 0x32b6f4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B6F8u;
label_32b6f8:
    // 0x32b6f8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x32b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_32b6fc:
    // 0x32b6fc: 0x100001dd  b           . + 4 + (0x1DD << 2)
label_32b700:
    if (ctx->pc == 0x32B700u) {
        ctx->pc = 0x32B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6FCu;
        // 0x32b700: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B704u;
        goto label_32b704;
    }
    ctx->pc = 0x32B6FCu;
    {
        const bool branch_taken_0x32b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6FCu;
        // 0x32b700: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6fc) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B704u;
label_32b704:
    // 0x32b704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b708:
    // 0x32b708: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b70c:
    // 0x32b70c: 0xc0cdf2e  jal         func_337CB8
label_32b710:
    if (ctx->pc == 0x32B710u) {
        ctx->pc = 0x32B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B70Cu;
        // 0x32b710: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B714u;
        goto label_32b714;
    }
    ctx->pc = 0x32B70Cu;
    SET_GPR_U32(ctx, 31, 0x32B714u);
    ctx->pc = 0x32B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B70Cu;
    // 0x32b710: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B70Cu, 0x32B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B714u;
label_32b714:
    // 0x32b714: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b718:
    // 0x32b718: 0xc0cdec0  jal         func_337B00
label_32b71c:
    if (ctx->pc == 0x32B71Cu) {
        ctx->pc = 0x32B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B718u;
        // 0x32b71c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B720u;
        goto label_32b720;
    }
    ctx->pc = 0x32B718u;
    SET_GPR_U32(ctx, 31, 0x32B720u);
    ctx->pc = 0x32B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B718u;
    // 0x32b71c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32B718u, 0x32B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B720u;
label_32b720:
    // 0x32b720: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b724:
    // 0x32b724: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b728:
    // 0x32b728: 0xc0cdc76  jal         func_3371D8
label_32b72c:
    if (ctx->pc == 0x32B72Cu) {
        ctx->pc = 0x32B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B728u;
        // 0x32b72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B730u;
        goto label_32b730;
    }
    ctx->pc = 0x32B728u;
    SET_GPR_U32(ctx, 31, 0x32B730u);
    ctx->pc = 0x32B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B728u;
    // 0x32b72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x32B728u, 0x32B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B730u;
label_32b730:
    // 0x32b730: 0x504001d1  beql        $v0, $zero, . + 4 + (0x1D1 << 2)
label_32b734:
    if (ctx->pc == 0x32B734u) {
        ctx->pc = 0x32B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B730u;
        // 0x32b734: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B738u;
        goto label_32b738;
    }
    ctx->pc = 0x32B730u;
    {
        const bool branch_taken_0x32b730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b730) {
            ctx->pc = 0x32B734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B730u;
            // 0x32b734: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B738u;
label_32b738:
    // 0x32b738: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x32b738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_32b73c:
    // 0x32b73c: 0x508001ce  beql        $a0, $zero, . + 4 + (0x1CE << 2)
label_32b740:
    if (ctx->pc == 0x32B740u) {
        ctx->pc = 0x32B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B73Cu;
        // 0x32b740: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B744u;
        goto label_32b744;
    }
    ctx->pc = 0x32B73Cu;
    {
        const bool branch_taken_0x32b73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b73c) {
            ctx->pc = 0x32B740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B73Cu;
            // 0x32b740: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B744u;
label_32b744:
    // 0x32b744: 0xc0ac9b2  jal         func_2B26C8
label_32b748:
    if (ctx->pc == 0x32B748u) {
        ctx->pc = 0x32B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B744u;
        // 0x32b748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B74Cu;
        goto label_32b74c;
    }
    ctx->pc = 0x32B744u;
    SET_GPR_U32(ctx, 31, 0x32B74Cu);
    ctx->pc = 0x32B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B744u;
    // 0x32b748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x32B744u, 0x32B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B74Cu;
label_32b74c:
    // 0x32b74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b750:
    // 0x32b750: 0x108001c9  beqz        $a0, . + 4 + (0x1C9 << 2)
label_32b754:
    if (ctx->pc == 0x32B754u) {
        ctx->pc = 0x32B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B750u;
        // 0x32b754: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B758u;
        goto label_32b758;
    }
    ctx->pc = 0x32B750u;
    {
        const bool branch_taken_0x32b750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B750u;
        // 0x32b754: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b750) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B758u;
label_32b758:
    // 0x32b758: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_32b75c:
    // 0x32b75c: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x32b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_32b760:
    // 0x32b760: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x32b760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_32b764:
    // 0x32b764: 0x544001c5  bnel        $v0, $zero, . + 4 + (0x1C5 << 2)
label_32b768:
    if (ctx->pc == 0x32B768u) {
        ctx->pc = 0x32B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B764u;
        // 0x32b768: 0xdfb100a8  ld          $s1, 0xA8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B76Cu;
        goto label_32b76c;
    }
    ctx->pc = 0x32B764u;
    {
        const bool branch_taken_0x32b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b764) {
            ctx->pc = 0x32B768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B764u;
            // 0x32b768: 0xdfb100a8  ld          $s1, 0xA8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE7Cu;
            goto label_32be7c;
        }
    }
    ctx->pc = 0x32B76Cu;
label_32b76c:
    // 0x32b76c: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x32b76cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_32b770:
    // 0x32b770: 0x520001c1  beql        $s0, $zero, . + 4 + (0x1C1 << 2)
label_32b774:
    if (ctx->pc == 0x32B774u) {
        ctx->pc = 0x32B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B770u;
        // 0x32b774: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B778u;
        goto label_32b778;
    }
    ctx->pc = 0x32B770u;
    {
        const bool branch_taken_0x32b770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b770) {
            ctx->pc = 0x32B774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B770u;
            // 0x32b774: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B778u;
label_32b778:
    // 0x32b778: 0xc0d8de2  jal         func_363788
label_32b77c:
    if (ctx->pc == 0x32B77Cu) {
        ctx->pc = 0x32B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B778u;
        // 0x32b77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B780u;
        goto label_32b780;
    }
    ctx->pc = 0x32B778u;
    SET_GPR_U32(ctx, 31, 0x32B780u);
    ctx->pc = 0x32B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B778u;
    // 0x32b77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x32B778u, 0x32B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B780u;
label_32b780:
    // 0x32b780: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x32b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_32b784:
    // 0x32b784: 0x544001bc  bnel        $v0, $zero, . + 4 + (0x1BC << 2)
label_32b788:
    if (ctx->pc == 0x32B788u) {
        ctx->pc = 0x32B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B784u;
        // 0x32b788: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B78Cu;
        goto label_32b78c;
    }
    ctx->pc = 0x32B784u;
    {
        const bool branch_taken_0x32b784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b784) {
            ctx->pc = 0x32B788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B784u;
            // 0x32b788: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B78Cu;
label_32b78c:
    // 0x32b78c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x32b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_32b790:
    // 0x32b790: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_32b794:
    if (ctx->pc == 0x32B794u) {
        ctx->pc = 0x32B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B790u;
        // 0x32b794: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B798u;
        goto label_32b798;
    }
    ctx->pc = 0x32B790u;
    {
        const bool branch_taken_0x32b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B790u;
        // 0x32b794: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b790) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B798u;
label_32b798:
    // 0x32b798: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b79c:
    // 0x32b79c: 0xc049226  jal         func_124898
label_32b7a0:
    if (ctx->pc == 0x32B7A0u) {
        ctx->pc = 0x32B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B79Cu;
        // 0x32b7a0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7A4u;
        goto label_32b7a4;
    }
    ctx->pc = 0x32B79Cu;
    SET_GPR_U32(ctx, 31, 0x32B7A4u);
    ctx->pc = 0x32B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B79Cu;
    // 0x32b7a0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124898u, 0x32B79Cu, 0x32B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7A4u;
label_32b7a4:
    // 0x32b7a4: 0x1000019d  b           . + 4 + (0x19D << 2)
label_32b7a8:
    if (ctx->pc == 0x32B7A8u) {
        ctx->pc = 0x32B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7A4u;
        // 0x32b7a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7ACu;
        goto label_32b7ac;
    }
    ctx->pc = 0x32B7A4u;
    {
        const bool branch_taken_0x32b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7A4u;
        // 0x32b7a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7a4) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B7ACu;
label_32b7ac:
    // 0x32b7ac: 0xc0cdf2e  jal         func_337CB8
label_32b7b0:
    if (ctx->pc == 0x32B7B0u) {
        ctx->pc = 0x32B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7ACu;
        // 0x32b7b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7B4u;
        goto label_32b7b4;
    }
    ctx->pc = 0x32B7ACu;
    SET_GPR_U32(ctx, 31, 0x32B7B4u);
    ctx->pc = 0x32B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7ACu;
    // 0x32b7b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B7ACu, 0x32B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7B4u;
label_32b7b4:
    // 0x32b7b4: 0xc0cdf52  jal         func_337D48
label_32b7b8:
    if (ctx->pc == 0x32B7B8u) {
        ctx->pc = 0x32B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7B4u;
        // 0x32b7b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7BCu;
        goto label_32b7bc;
    }
    ctx->pc = 0x32B7B4u;
    SET_GPR_U32(ctx, 31, 0x32B7BCu);
    ctx->pc = 0x32B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7B4u;
    // 0x32b7b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B7B4u, 0x32B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7BCu;
label_32b7bc:
    // 0x32b7bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b7c0:
    // 0x32b7c0: 0xc0cdf2e  jal         func_337CB8
label_32b7c4:
    if (ctx->pc == 0x32B7C4u) {
        ctx->pc = 0x32B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7C0u;
        // 0x32b7c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7C8u;
        goto label_32b7c8;
    }
    ctx->pc = 0x32B7C0u;
    SET_GPR_U32(ctx, 31, 0x32B7C8u);
    ctx->pc = 0x32B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7C0u;
    // 0x32b7c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B7C0u, 0x32B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7C8u;
label_32b7c8:
    // 0x32b7c8: 0xc0cdf52  jal         func_337D48
label_32b7cc:
    if (ctx->pc == 0x32B7CCu) {
        ctx->pc = 0x32B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7C8u;
        // 0x32b7cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7D0u;
        goto label_32b7d0;
    }
    ctx->pc = 0x32B7C8u;
    SET_GPR_U32(ctx, 31, 0x32B7D0u);
    ctx->pc = 0x32B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7C8u;
    // 0x32b7cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B7C8u, 0x32B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7D0u;
label_32b7d0:
    // 0x32b7d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b7d4:
    // 0x32b7d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b7d8:
    // 0x32b7d8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b7dc:
    // 0x32b7dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b7e0:
    // 0x32b7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32b7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b7e4:
    // 0x32b7e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32b7e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b7e8:
    // 0x32b7e8: 0xc04922e  jal         func_1248B8
label_32b7ec:
    if (ctx->pc == 0x32B7ECu) {
        ctx->pc = 0x32B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7E8u;
        // 0x32b7ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7F0u;
        goto label_32b7f0;
    }
    ctx->pc = 0x32B7E8u;
    SET_GPR_U32(ctx, 31, 0x32B7F0u);
    ctx->pc = 0x32B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7E8u;
    // 0x32b7ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248B8u, 0x32B7E8u, 0x32B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7F0u;
label_32b7f0:
    // 0x32b7f0: 0x1000018a  b           . + 4 + (0x18A << 2)
label_32b7f4:
    if (ctx->pc == 0x32B7F4u) {
        ctx->pc = 0x32B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7F0u;
        // 0x32b7f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B7F8u;
        goto label_32b7f8;
    }
    ctx->pc = 0x32B7F0u;
    {
        const bool branch_taken_0x32b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7F0u;
        // 0x32b7f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7f0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B7F8u;
label_32b7f8:
    // 0x32b7f8: 0xc0cdf2e  jal         func_337CB8
label_32b7fc:
    if (ctx->pc == 0x32B7FCu) {
        ctx->pc = 0x32B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7F8u;
        // 0x32b7fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B800u;
        goto label_32b800;
    }
    ctx->pc = 0x32B7F8u;
    SET_GPR_U32(ctx, 31, 0x32B800u);
    ctx->pc = 0x32B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7F8u;
    // 0x32b7fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B7F8u, 0x32B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B800u;
label_32b800:
    // 0x32b800: 0xc0cdf52  jal         func_337D48
label_32b804:
    if (ctx->pc == 0x32B804u) {
        ctx->pc = 0x32B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B800u;
        // 0x32b804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B808u;
        goto label_32b808;
    }
    ctx->pc = 0x32B800u;
    SET_GPR_U32(ctx, 31, 0x32B808u);
    ctx->pc = 0x32B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B800u;
    // 0x32b804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B800u, 0x32B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B808u;
label_32b808:
    // 0x32b808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b80c:
    // 0x32b80c: 0xc0cdf2e  jal         func_337CB8
label_32b810:
    if (ctx->pc == 0x32B810u) {
        ctx->pc = 0x32B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B80Cu;
        // 0x32b810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B814u;
        goto label_32b814;
    }
    ctx->pc = 0x32B80Cu;
    SET_GPR_U32(ctx, 31, 0x32B814u);
    ctx->pc = 0x32B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B80Cu;
    // 0x32b810: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B80Cu, 0x32B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B814u;
label_32b814:
    // 0x32b814: 0xc0cdf52  jal         func_337D48
label_32b818:
    if (ctx->pc == 0x32B818u) {
        ctx->pc = 0x32B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B814u;
        // 0x32b818: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B81Cu;
        goto label_32b81c;
    }
    ctx->pc = 0x32B814u;
    SET_GPR_U32(ctx, 31, 0x32B81Cu);
    ctx->pc = 0x32B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B814u;
    // 0x32b818: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B814u, 0x32B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B81Cu;
label_32b81c:
    // 0x32b81c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b820:
    // 0x32b820: 0xc0cdf2e  jal         func_337CB8
label_32b824:
    if (ctx->pc == 0x32B824u) {
        ctx->pc = 0x32B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B820u;
        // 0x32b824: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B828u;
        goto label_32b828;
    }
    ctx->pc = 0x32B820u;
    SET_GPR_U32(ctx, 31, 0x32B828u);
    ctx->pc = 0x32B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B820u;
    // 0x32b824: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B820u, 0x32B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B828u;
label_32b828:
    // 0x32b828: 0xc0cdf52  jal         func_337D48
label_32b82c:
    if (ctx->pc == 0x32B82Cu) {
        ctx->pc = 0x32B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B828u;
        // 0x32b82c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B830u;
        goto label_32b830;
    }
    ctx->pc = 0x32B828u;
    SET_GPR_U32(ctx, 31, 0x32B830u);
    ctx->pc = 0x32B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B828u;
    // 0x32b82c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B828u, 0x32B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B830u;
label_32b830:
    // 0x32b830: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b834:
    // 0x32b834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b838:
    // 0x32b838: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b83c:
    // 0x32b83c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b840:
    // 0x32b840: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b844:
    // 0x32b844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32b844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b848:
    // 0x32b848: 0xc04922e  jal         func_1248B8
label_32b84c:
    if (ctx->pc == 0x32B84Cu) {
        ctx->pc = 0x32B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B848u;
        // 0x32b84c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B850u;
        goto label_32b850;
    }
    ctx->pc = 0x32B848u;
    SET_GPR_U32(ctx, 31, 0x32B850u);
    ctx->pc = 0x32B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B848u;
    // 0x32b84c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248B8u, 0x32B848u, 0x32B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B850u;
label_32b850:
    // 0x32b850: 0x10000172  b           . + 4 + (0x172 << 2)
label_32b854:
    if (ctx->pc == 0x32B854u) {
        ctx->pc = 0x32B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B850u;
        // 0x32b854: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B858u;
        goto label_32b858;
    }
    ctx->pc = 0x32B850u;
    {
        const bool branch_taken_0x32b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B850u;
        // 0x32b854: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b850) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B858u;
label_32b858:
    // 0x32b858: 0xc0cdf2e  jal         func_337CB8
label_32b85c:
    if (ctx->pc == 0x32B85Cu) {
        ctx->pc = 0x32B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B858u;
        // 0x32b85c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B860u;
        goto label_32b860;
    }
    ctx->pc = 0x32B858u;
    SET_GPR_U32(ctx, 31, 0x32B860u);
    ctx->pc = 0x32B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B858u;
    // 0x32b85c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B858u, 0x32B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B860u;
label_32b860:
    // 0x32b860: 0xc0cdf52  jal         func_337D48
label_32b864:
    if (ctx->pc == 0x32B864u) {
        ctx->pc = 0x32B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B860u;
        // 0x32b864: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B868u;
        goto label_32b868;
    }
    ctx->pc = 0x32B860u;
    SET_GPR_U32(ctx, 31, 0x32B868u);
    ctx->pc = 0x32B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B860u;
    // 0x32b864: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B860u, 0x32B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B868u;
label_32b868:
    // 0x32b868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b86c:
    // 0x32b86c: 0xc0cdf2e  jal         func_337CB8
label_32b870:
    if (ctx->pc == 0x32B870u) {
        ctx->pc = 0x32B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B86Cu;
        // 0x32b870: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B874u;
        goto label_32b874;
    }
    ctx->pc = 0x32B86Cu;
    SET_GPR_U32(ctx, 31, 0x32B874u);
    ctx->pc = 0x32B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B86Cu;
    // 0x32b870: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B86Cu, 0x32B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B874u;
label_32b874:
    // 0x32b874: 0xc0cdf52  jal         func_337D48
label_32b878:
    if (ctx->pc == 0x32B878u) {
        ctx->pc = 0x32B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B874u;
        // 0x32b878: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B87Cu;
        goto label_32b87c;
    }
    ctx->pc = 0x32B874u;
    SET_GPR_U32(ctx, 31, 0x32B87Cu);
    ctx->pc = 0x32B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B874u;
    // 0x32b878: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B874u, 0x32B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B87Cu;
label_32b87c:
    // 0x32b87c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b880:
    // 0x32b880: 0xc0cdf2e  jal         func_337CB8
label_32b884:
    if (ctx->pc == 0x32B884u) {
        ctx->pc = 0x32B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B880u;
        // 0x32b884: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B888u;
        goto label_32b888;
    }
    ctx->pc = 0x32B880u;
    SET_GPR_U32(ctx, 31, 0x32B888u);
    ctx->pc = 0x32B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B880u;
    // 0x32b884: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B880u, 0x32B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B888u;
label_32b888:
    // 0x32b888: 0xc0cdf52  jal         func_337D48
label_32b88c:
    if (ctx->pc == 0x32B88Cu) {
        ctx->pc = 0x32B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B888u;
        // 0x32b88c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B890u;
        goto label_32b890;
    }
    ctx->pc = 0x32B888u;
    SET_GPR_U32(ctx, 31, 0x32B890u);
    ctx->pc = 0x32B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B888u;
    // 0x32b88c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B888u, 0x32B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B890u;
label_32b890:
    // 0x32b890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b894:
    // 0x32b894: 0xc0cdf2e  jal         func_337CB8
label_32b898:
    if (ctx->pc == 0x32B898u) {
        ctx->pc = 0x32B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B894u;
        // 0x32b898: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B89Cu;
        goto label_32b89c;
    }
    ctx->pc = 0x32B894u;
    SET_GPR_U32(ctx, 31, 0x32B89Cu);
    ctx->pc = 0x32B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B894u;
    // 0x32b898: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B894u, 0x32B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B89Cu;
label_32b89c:
    // 0x32b89c: 0xc0cdf52  jal         func_337D48
label_32b8a0:
    if (ctx->pc == 0x32B8A0u) {
        ctx->pc = 0x32B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B89Cu;
        // 0x32b8a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8A4u;
        goto label_32b8a4;
    }
    ctx->pc = 0x32B89Cu;
    SET_GPR_U32(ctx, 31, 0x32B8A4u);
    ctx->pc = 0x32B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B89Cu;
    // 0x32b8a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B89Cu, 0x32B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8A4u;
label_32b8a4:
    // 0x32b8a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b8a8:
    // 0x32b8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b8ac:
    // 0x32b8ac: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b8b0:
    // 0x32b8b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b8b4:
    // 0x32b8b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b8b8:
    // 0x32b8b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b8b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b8bc:
    // 0x32b8bc: 0xc04922e  jal         func_1248B8
label_32b8c0:
    if (ctx->pc == 0x32B8C0u) {
        ctx->pc = 0x32B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8BCu;
        // 0x32b8c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8C4u;
        goto label_32b8c4;
    }
    ctx->pc = 0x32B8BCu;
    SET_GPR_U32(ctx, 31, 0x32B8C4u);
    ctx->pc = 0x32B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8BCu;
    // 0x32b8c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248B8u, 0x32B8BCu, 0x32B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8C4u;
label_32b8c4:
    // 0x32b8c4: 0x10000155  b           . + 4 + (0x155 << 2)
label_32b8c8:
    if (ctx->pc == 0x32B8C8u) {
        ctx->pc = 0x32B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8C4u;
        // 0x32b8c8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8CCu;
        goto label_32b8cc;
    }
    ctx->pc = 0x32B8C4u;
    {
        const bool branch_taken_0x32b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8C4u;
        // 0x32b8c8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8c4) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B8CCu;
label_32b8cc:
    // 0x32b8cc: 0xc0cdf2e  jal         func_337CB8
label_32b8d0:
    if (ctx->pc == 0x32B8D0u) {
        ctx->pc = 0x32B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8CCu;
        // 0x32b8d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8D4u;
        goto label_32b8d4;
    }
    ctx->pc = 0x32B8CCu;
    SET_GPR_U32(ctx, 31, 0x32B8D4u);
    ctx->pc = 0x32B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8CCu;
    // 0x32b8d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B8CCu, 0x32B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8D4u;
label_32b8d4:
    // 0x32b8d4: 0xc0cdf52  jal         func_337D48
label_32b8d8:
    if (ctx->pc == 0x32B8D8u) {
        ctx->pc = 0x32B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8D4u;
        // 0x32b8d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8DCu;
        goto label_32b8dc;
    }
    ctx->pc = 0x32B8D4u;
    SET_GPR_U32(ctx, 31, 0x32B8DCu);
    ctx->pc = 0x32B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8D4u;
    // 0x32b8d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B8D4u, 0x32B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8DCu;
label_32b8dc:
    // 0x32b8dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32b8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b8e0:
    // 0x32b8e0: 0xc0cdf2e  jal         func_337CB8
label_32b8e4:
    if (ctx->pc == 0x32B8E4u) {
        ctx->pc = 0x32B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8E0u;
        // 0x32b8e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8E8u;
        goto label_32b8e8;
    }
    ctx->pc = 0x32B8E0u;
    SET_GPR_U32(ctx, 31, 0x32B8E8u);
    ctx->pc = 0x32B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8E0u;
    // 0x32b8e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B8E0u, 0x32B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8E8u;
label_32b8e8:
    // 0x32b8e8: 0xc0cdf52  jal         func_337D48
label_32b8ec:
    if (ctx->pc == 0x32B8ECu) {
        ctx->pc = 0x32B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8E8u;
        // 0x32b8ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8F0u;
        goto label_32b8f0;
    }
    ctx->pc = 0x32B8E8u;
    SET_GPR_U32(ctx, 31, 0x32B8F0u);
    ctx->pc = 0x32B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8E8u;
    // 0x32b8ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B8E8u, 0x32B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8F0u;
label_32b8f0:
    // 0x32b8f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b8f4:
    // 0x32b8f4: 0xc0cdf2e  jal         func_337CB8
label_32b8f8:
    if (ctx->pc == 0x32B8F8u) {
        ctx->pc = 0x32B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8F4u;
        // 0x32b8f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8FCu;
        goto label_32b8fc;
    }
    ctx->pc = 0x32B8F4u;
    SET_GPR_U32(ctx, 31, 0x32B8FCu);
    ctx->pc = 0x32B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8F4u;
    // 0x32b8f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B8F4u, 0x32B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8FCu;
label_32b8fc:
    // 0x32b8fc: 0xc0cdf52  jal         func_337D48
label_32b900:
    if (ctx->pc == 0x32B900u) {
        ctx->pc = 0x32B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8FCu;
        // 0x32b900: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B904u;
        goto label_32b904;
    }
    ctx->pc = 0x32B8FCu;
    SET_GPR_U32(ctx, 31, 0x32B904u);
    ctx->pc = 0x32B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8FCu;
    // 0x32b900: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B8FCu, 0x32B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B904u;
label_32b904:
    // 0x32b904: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b908:
    // 0x32b908: 0xc0cdf2e  jal         func_337CB8
label_32b90c:
    if (ctx->pc == 0x32B90Cu) {
        ctx->pc = 0x32B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B908u;
        // 0x32b90c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B910u;
        goto label_32b910;
    }
    ctx->pc = 0x32B908u;
    SET_GPR_U32(ctx, 31, 0x32B910u);
    ctx->pc = 0x32B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B908u;
    // 0x32b90c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B908u, 0x32B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B910u;
label_32b910:
    // 0x32b910: 0xc0cdf52  jal         func_337D48
label_32b914:
    if (ctx->pc == 0x32B914u) {
        ctx->pc = 0x32B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B910u;
        // 0x32b914: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B918u;
        goto label_32b918;
    }
    ctx->pc = 0x32B910u;
    SET_GPR_U32(ctx, 31, 0x32B918u);
    ctx->pc = 0x32B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B910u;
    // 0x32b914: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B910u, 0x32B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B918u;
label_32b918:
    // 0x32b918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b91c:
    // 0x32b91c: 0xc0cdf2e  jal         func_337CB8
label_32b920:
    if (ctx->pc == 0x32B920u) {
        ctx->pc = 0x32B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B91Cu;
        // 0x32b920: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B924u;
        goto label_32b924;
    }
    ctx->pc = 0x32B91Cu;
    SET_GPR_U32(ctx, 31, 0x32B924u);
    ctx->pc = 0x32B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B91Cu;
    // 0x32b920: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B91Cu, 0x32B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B924u;
label_32b924:
    // 0x32b924: 0xc0cdf52  jal         func_337D48
label_32b928:
    if (ctx->pc == 0x32B928u) {
        ctx->pc = 0x32B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B924u;
        // 0x32b928: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B92Cu;
        goto label_32b92c;
    }
    ctx->pc = 0x32B924u;
    SET_GPR_U32(ctx, 31, 0x32B92Cu);
    ctx->pc = 0x32B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B924u;
    // 0x32b928: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B924u, 0x32B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B92Cu;
label_32b92c:
    // 0x32b92c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b930:
    // 0x32b930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b934:
    // 0x32b934: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32b934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32b938:
    // 0x32b938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32b938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b93c:
    // 0x32b93c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32b93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b940:
    // 0x32b940: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32b940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b944:
    // 0x32b944: 0xc04922e  jal         func_1248B8
label_32b948:
    if (ctx->pc == 0x32B948u) {
        ctx->pc = 0x32B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B944u;
        // 0x32b948: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B94Cu;
        goto label_32b94c;
    }
    ctx->pc = 0x32B944u;
    SET_GPR_U32(ctx, 31, 0x32B94Cu);
    ctx->pc = 0x32B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B944u;
    // 0x32b948: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248B8u, 0x32B944u, 0x32B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B94Cu;
label_32b94c:
    // 0x32b94c: 0x10000133  b           . + 4 + (0x133 << 2)
label_32b950:
    if (ctx->pc == 0x32B950u) {
        ctx->pc = 0x32B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B94Cu;
        // 0x32b950: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B954u;
        goto label_32b954;
    }
    ctx->pc = 0x32B94Cu;
    {
        const bool branch_taken_0x32b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B94Cu;
        // 0x32b950: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b94c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B954u;
label_32b954:
    // 0x32b954: 0xc0cdf2e  jal         func_337CB8
label_32b958:
    if (ctx->pc == 0x32B958u) {
        ctx->pc = 0x32B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B954u;
        // 0x32b958: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B95Cu;
        goto label_32b95c;
    }
    ctx->pc = 0x32B954u;
    SET_GPR_U32(ctx, 31, 0x32B95Cu);
    ctx->pc = 0x32B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B954u;
    // 0x32b958: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B954u, 0x32B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B95Cu;
label_32b95c:
    // 0x32b95c: 0xc0cdf52  jal         func_337D48
label_32b960:
    if (ctx->pc == 0x32B960u) {
        ctx->pc = 0x32B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B95Cu;
        // 0x32b960: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B964u;
        goto label_32b964;
    }
    ctx->pc = 0x32B95Cu;
    SET_GPR_U32(ctx, 31, 0x32B964u);
    ctx->pc = 0x32B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B95Cu;
    // 0x32b960: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B95Cu, 0x32B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B964u;
label_32b964:
    // 0x32b964: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32b964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32b968:
    // 0x32b968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b96c:
    // 0x32b96c: 0xc048ea0  jal         func_123A80
label_32b970:
    if (ctx->pc == 0x32B970u) {
        ctx->pc = 0x32B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B96Cu;
        // 0x32b970: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B974u;
        goto label_32b974;
    }
    ctx->pc = 0x32B96Cu;
    SET_GPR_U32(ctx, 31, 0x32B974u);
    ctx->pc = 0x32B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B96Cu;
    // 0x32b970: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A80u, 0x32B96Cu, 0x32B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B974u;
label_32b974:
    // 0x32b974: 0x10000129  b           . + 4 + (0x129 << 2)
label_32b978:
    if (ctx->pc == 0x32B978u) {
        ctx->pc = 0x32B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B974u;
        // 0x32b978: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B97Cu;
        goto label_32b97c;
    }
    ctx->pc = 0x32B974u;
    {
        const bool branch_taken_0x32b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B974u;
        // 0x32b978: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b974) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32B97Cu;
label_32b97c:
    // 0x32b97c: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32b980:
    // 0x32b980: 0xc0cdec0  jal         func_337B00
label_32b984:
    if (ctx->pc == 0x32B984u) {
        ctx->pc = 0x32B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B980u;
        // 0x32b984: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B988u;
        goto label_32b988;
    }
    ctx->pc = 0x32B980u;
    SET_GPR_U32(ctx, 31, 0x32B988u);
    ctx->pc = 0x32B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B980u;
    // 0x32b984: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32B980u, 0x32B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B988u;
label_32b988:
    // 0x32b988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b98c:
    // 0x32b98c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b990:
    // 0x32b990: 0xc0cdc76  jal         func_3371D8
label_32b994:
    if (ctx->pc == 0x32B994u) {
        ctx->pc = 0x32B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B990u;
        // 0x32b994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B998u;
        goto label_32b998;
    }
    ctx->pc = 0x32B990u;
    SET_GPR_U32(ctx, 31, 0x32B998u);
    ctx->pc = 0x32B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B990u;
    // 0x32b994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x32B990u, 0x32B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B998u;
label_32b998:
    // 0x32b998: 0x50400137  beql        $v0, $zero, . + 4 + (0x137 << 2)
label_32b99c:
    if (ctx->pc == 0x32B99Cu) {
        ctx->pc = 0x32B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B998u;
        // 0x32b99c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9A0u;
        goto label_32b9a0;
    }
    ctx->pc = 0x32B998u;
    {
        const bool branch_taken_0x32b998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b998) {
            ctx->pc = 0x32B99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B998u;
            // 0x32b99c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32B9A0u;
label_32b9a0:
    // 0x32b9a0: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x32b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_32b9a4:
    // 0x32b9a4: 0x10000133  b           . + 4 + (0x133 << 2)
label_32b9a8:
    if (ctx->pc == 0x32B9A8u) {
        ctx->pc = 0x32B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9A4u;
        // 0x32b9a8: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9ACu;
        goto label_32b9ac;
    }
    ctx->pc = 0x32B9A4u;
    {
        const bool branch_taken_0x32b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9A4u;
        // 0x32b9a8: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9a4) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32B9ACu;
label_32b9ac:
    // 0x32b9ac: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32b9b0:
    // 0x32b9b0: 0xc0cdf2e  jal         func_337CB8
label_32b9b4:
    if (ctx->pc == 0x32B9B4u) {
        ctx->pc = 0x32B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B0u;
        // 0x32b9b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9B8u;
        goto label_32b9b8;
    }
    ctx->pc = 0x32B9B0u;
    SET_GPR_U32(ctx, 31, 0x32B9B8u);
    ctx->pc = 0x32B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9B0u;
    // 0x32b9b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B9B0u, 0x32B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9B8u;
label_32b9b8:
    // 0x32b9b8: 0xc0cdf52  jal         func_337D48
label_32b9bc:
    if (ctx->pc == 0x32B9BCu) {
        ctx->pc = 0x32B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B8u;
        // 0x32b9bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9C0u;
        goto label_32b9c0;
    }
    ctx->pc = 0x32B9B8u;
    SET_GPR_U32(ctx, 31, 0x32B9C0u);
    ctx->pc = 0x32B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9B8u;
    // 0x32b9bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32B9B8u, 0x32B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9C0u;
label_32b9c0:
    // 0x32b9c0: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x32b9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_32b9c4:
    // 0x32b9c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32b9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32b9c8:
    // 0x32b9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b9cc:
    // 0x32b9cc: 0x25088000  addiu       $t0, $t0, -0x8000
    ctx->pc = 0x32b9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934528));
label_32b9d0:
    // 0x32b9d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b9d4:
    // 0x32b9d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b9d8:
    // 0x32b9d8: 0x10000019  b           . + 4 + (0x19 << 2)
label_32b9dc:
    if (ctx->pc == 0x32B9DCu) {
        ctx->pc = 0x32B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9D8u;
        // 0x32b9dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9E0u;
        goto label_32b9e0;
    }
    ctx->pc = 0x32B9D8u;
    {
        const bool branch_taken_0x32b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9D8u;
        // 0x32b9dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9d8) {
            ctx->pc = 0x32BA40u;
            goto label_32ba40;
        }
    }
    ctx->pc = 0x32B9E0u;
label_32b9e0:
    // 0x32b9e0: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32b9e4:
    // 0x32b9e4: 0xc0cdf2e  jal         func_337CB8
label_32b9e8:
    if (ctx->pc == 0x32B9E8u) {
        ctx->pc = 0x32B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9E4u;
        // 0x32b9e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9ECu;
        goto label_32b9ec;
    }
    ctx->pc = 0x32B9E4u;
    SET_GPR_U32(ctx, 31, 0x32B9ECu);
    ctx->pc = 0x32B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9E4u;
    // 0x32b9e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B9E4u, 0x32B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9ECu;
label_32b9ec:
    // 0x32b9ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b9ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b9f0:
    // 0x32b9f0: 0xc0cdf2e  jal         func_337CB8
label_32b9f4:
    if (ctx->pc == 0x32B9F4u) {
        ctx->pc = 0x32B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9F0u;
        // 0x32b9f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9F8u;
        goto label_32b9f8;
    }
    ctx->pc = 0x32B9F0u;
    SET_GPR_U32(ctx, 31, 0x32B9F8u);
    ctx->pc = 0x32B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9F0u;
    // 0x32b9f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B9F0u, 0x32B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9F8u;
label_32b9f8:
    // 0x32b9f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32b9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b9fc:
    // 0x32b9fc: 0xc0cdf2e  jal         func_337CB8
label_32ba00:
    if (ctx->pc == 0x32BA00u) {
        ctx->pc = 0x32BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9FCu;
        // 0x32ba00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA04u;
        goto label_32ba04;
    }
    ctx->pc = 0x32B9FCu;
    SET_GPR_U32(ctx, 31, 0x32BA04u);
    ctx->pc = 0x32BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9FCu;
    // 0x32ba00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32B9FCu, 0x32BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA04u;
label_32ba04:
    // 0x32ba04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ba04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ba08:
    // 0x32ba08: 0xc0cdf40  jal         func_337D00
label_32ba0c:
    if (ctx->pc == 0x32BA0Cu) {
        ctx->pc = 0x32BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA08u;
        // 0x32ba0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA10u;
        goto label_32ba10;
    }
    ctx->pc = 0x32BA08u;
    SET_GPR_U32(ctx, 31, 0x32BA10u);
    ctx->pc = 0x32BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA08u;
    // 0x32ba0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BA08u, 0x32BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA10u;
label_32ba10:
    // 0x32ba10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32ba10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_32ba14:
    // 0x32ba14: 0xc0cdf2e  jal         func_337CB8
label_32ba18:
    if (ctx->pc == 0x32BA18u) {
        ctx->pc = 0x32BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA14u;
        // 0x32ba18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA1Cu;
        goto label_32ba1c;
    }
    ctx->pc = 0x32BA14u;
    SET_GPR_U32(ctx, 31, 0x32BA1Cu);
    ctx->pc = 0x32BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA14u;
    // 0x32ba18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BA14u, 0x32BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA1Cu;
label_32ba1c:
    // 0x32ba1c: 0xc0cdf52  jal         func_337D48
label_32ba20:
    if (ctx->pc == 0x32BA20u) {
        ctx->pc = 0x32BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA1Cu;
        // 0x32ba20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA24u;
        goto label_32ba24;
    }
    ctx->pc = 0x32BA1Cu;
    SET_GPR_U32(ctx, 31, 0x32BA24u);
    ctx->pc = 0x32BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA1Cu;
    // 0x32ba20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BA1Cu, 0x32BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA24u;
label_32ba24:
    // 0x32ba24: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x32ba24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_32ba28:
    // 0x32ba28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ba2c:
    // 0x32ba2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32ba2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32ba30:
    // 0x32ba30: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x32ba30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_32ba34:
    // 0x32ba34: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x32ba34u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32ba38:
    // 0x32ba38: 0x12382b  sltu        $a3, $zero, $s2
    ctx->pc = 0x32ba38u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_32ba3c:
    // 0x32ba3c: 0x25088000  addiu       $t0, $t0, -0x8000
    ctx->pc = 0x32ba3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934528));
label_32ba40:
    // 0x32ba40: 0xc0c78fa  jal         func_31E3E8
label_32ba44:
    if (ctx->pc == 0x32BA44u) {
        ctx->pc = 0x32BA48u;
        goto label_32ba48;
    }
    ctx->pc = 0x32BA40u;
    SET_GPR_U32(ctx, 31, 0x32BA48u);
    ctx->pc = 0x31E3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3E8u, 0x32BA40u, 0x32BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA48u;
label_32ba48:
    // 0x32ba48: 0x1000010a  b           . + 4 + (0x10A << 2)
label_32ba4c:
    if (ctx->pc == 0x32BA4Cu) {
        ctx->pc = 0x32BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA48u;
        // 0x32ba4c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA50u;
        goto label_32ba50;
    }
    ctx->pc = 0x32BA48u;
    {
        const bool branch_taken_0x32ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA48u;
        // 0x32ba4c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba48) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BA50u;
label_32ba50:
    // 0x32ba50: 0xc0cdf2e  jal         func_337CB8
label_32ba54:
    if (ctx->pc == 0x32BA54u) {
        ctx->pc = 0x32BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA50u;
        // 0x32ba54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA58u;
        goto label_32ba58;
    }
    ctx->pc = 0x32BA50u;
    SET_GPR_U32(ctx, 31, 0x32BA58u);
    ctx->pc = 0x32BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA50u;
    // 0x32ba54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BA50u, 0x32BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA58u;
label_32ba58:
    // 0x32ba58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ba5c:
    // 0x32ba5c: 0xc0cdf2e  jal         func_337CB8
label_32ba60:
    if (ctx->pc == 0x32BA60u) {
        ctx->pc = 0x32BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA5Cu;
        // 0x32ba60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA64u;
        goto label_32ba64;
    }
    ctx->pc = 0x32BA5Cu;
    SET_GPR_U32(ctx, 31, 0x32BA64u);
    ctx->pc = 0x32BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA5Cu;
    // 0x32ba60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BA5Cu, 0x32BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA64u;
label_32ba64:
    // 0x32ba64: 0xc0cdf52  jal         func_337D48
label_32ba68:
    if (ctx->pc == 0x32BA68u) {
        ctx->pc = 0x32BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA64u;
        // 0x32ba68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA6Cu;
        goto label_32ba6c;
    }
    ctx->pc = 0x32BA64u;
    SET_GPR_U32(ctx, 31, 0x32BA6Cu);
    ctx->pc = 0x32BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA64u;
    // 0x32ba68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BA64u, 0x32BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA6Cu;
label_32ba6c:
    // 0x32ba6c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32ba70:
    // 0x32ba70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ba74:
    // 0x32ba74: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32ba78:
    // 0x32ba78: 0xc048bbc  jal         func_122EF0
label_32ba7c:
    if (ctx->pc == 0x32BA7Cu) {
        ctx->pc = 0x32BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA78u;
        // 0x32ba7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA80u;
        goto label_32ba80;
    }
    ctx->pc = 0x32BA78u;
    SET_GPR_U32(ctx, 31, 0x32BA80u);
    ctx->pc = 0x32BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA78u;
    // 0x32ba7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x32BA78u, 0x32BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA80u;
label_32ba80:
    // 0x32ba80: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_32ba84:
    if (ctx->pc == 0x32BA84u) {
        ctx->pc = 0x32BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA80u;
        // 0x32ba84: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA88u;
        goto label_32ba88;
    }
    ctx->pc = 0x32BA80u;
    {
        const bool branch_taken_0x32ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA80u;
        // 0x32ba84: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba80) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32BA88u;
label_32ba88:
    // 0x32ba88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_32ba8c:
    // 0x32ba8c: 0x9062bdac  lbu         $v0, -0x4254($v1)
    ctx->pc = 0x32ba8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950316)));
label_32ba90:
    // 0x32ba90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_32ba94:
    if (ctx->pc == 0x32BA94u) {
        ctx->pc = 0x32BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA90u;
        // 0x32ba94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA98u;
        goto label_32ba98;
    }
    ctx->pc = 0x32BA90u;
    {
        const bool branch_taken_0x32ba90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA90u;
        // 0x32ba94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba90) {
            ctx->pc = 0x32BAA8u;
            goto label_32baa8;
        }
    }
    ctx->pc = 0x32BA98u;
label_32ba98:
    // 0x32ba98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_32ba9c:
    // 0x32ba9c: 0x9043bdad  lbu         $v1, -0x4253($v0)
    ctx->pc = 0x32ba9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950317)));
label_32baa0:
    // 0x32baa0: 0x506000f4  beql        $v1, $zero, . + 4 + (0xF4 << 2)
label_32baa4:
    if (ctx->pc == 0x32BAA4u) {
        ctx->pc = 0x32BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAA0u;
        // 0x32baa4: 0xaec4003c  sw          $a0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAA8u;
        goto label_32baa8;
    }
    ctx->pc = 0x32BAA0u;
    {
        const bool branch_taken_0x32baa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32baa0) {
            ctx->pc = 0x32BAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BAA0u;
            // 0x32baa4: 0xaec4003c  sw          $a0, 0x3C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BAA8u;
label_32baa8:
    // 0x32baa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32baac:
    // 0x32baac: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_32bab0:
    if (ctx->pc == 0x32BAB0u) {
        ctx->pc = 0x32BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAACu;
        // 0x32bab0: 0xaec4003c  sw          $a0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAB4u;
        goto label_32bab4;
    }
    ctx->pc = 0x32BAACu;
    {
        const bool branch_taken_0x32baac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAACu;
        // 0x32bab0: 0xaec4003c  sw          $a0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32baac) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BAB4u;
label_32bab4:
    // 0x32bab4: 0xc0cdf40  jal         func_337D00
label_32bab8:
    if (ctx->pc == 0x32BAB8u) {
        ctx->pc = 0x32BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAB4u;
        // 0x32bab8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BABCu;
        goto label_32babc;
    }
    ctx->pc = 0x32BAB4u;
    SET_GPR_U32(ctx, 31, 0x32BABCu);
    ctx->pc = 0x32BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAB4u;
    // 0x32bab8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BAB4u, 0x32BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BABCu;
label_32babc:
    // 0x32babc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bac0:
    // 0x32bac0: 0xc0cdf40  jal         func_337D00
label_32bac4:
    if (ctx->pc == 0x32BAC4u) {
        ctx->pc = 0x32BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAC0u;
        // 0x32bac4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAC8u;
        goto label_32bac8;
    }
    ctx->pc = 0x32BAC0u;
    SET_GPR_U32(ctx, 31, 0x32BAC8u);
    ctx->pc = 0x32BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAC0u;
    // 0x32bac4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BAC0u, 0x32BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAC8u;
label_32bac8:
    // 0x32bac8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bacc:
    // 0x32bacc: 0xc0cdec0  jal         func_337B00
label_32bad0:
    if (ctx->pc == 0x32BAD0u) {
        ctx->pc = 0x32BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BACCu;
        // 0x32bad0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAD4u;
        goto label_32bad4;
    }
    ctx->pc = 0x32BACCu;
    SET_GPR_U32(ctx, 31, 0x32BAD4u);
    ctx->pc = 0x32BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BACCu;
    // 0x32bad0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BACCu, 0x32BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAD4u;
label_32bad4:
    // 0x32bad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bad8:
    // 0x32bad8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32badc:
    // 0x32badc: 0xc0cdc9a  jal         func_337268
label_32bae0:
    if (ctx->pc == 0x32BAE0u) {
        ctx->pc = 0x32BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BADCu;
        // 0x32bae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAE4u;
        goto label_32bae4;
    }
    ctx->pc = 0x32BADCu;
    SET_GPR_U32(ctx, 31, 0x32BAE4u);
    ctx->pc = 0x32BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BADCu;
    // 0x32bae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337268u, 0x32BADCu, 0x32BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAE4u;
label_32bae4:
    // 0x32bae4: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
label_32bae8:
    if (ctx->pc == 0x32BAE8u) {
        ctx->pc = 0x32BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAE4u;
        // 0x32bae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAECu;
        goto label_32baec;
    }
    ctx->pc = 0x32BAE4u;
    {
        const bool branch_taken_0x32bae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAE4u;
        // 0x32bae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bae4) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BAECu;
label_32baec:
    // 0x32baec: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x32baecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_32baf0:
    // 0x32baf0: 0xc06ce80  jal         func_1B3A00
label_32baf4:
    if (ctx->pc == 0x32BAF4u) {
        ctx->pc = 0x32BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAF0u;
        // 0x32baf4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BAF8u;
        goto label_32baf8;
    }
    ctx->pc = 0x32BAF0u;
    SET_GPR_U32(ctx, 31, 0x32BAF8u);
    ctx->pc = 0x32BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAF0u;
    // 0x32baf4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A00u, 0x32BAF0u, 0x32BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAF8u;
label_32baf8:
    // 0x32baf8: 0x100000df  b           . + 4 + (0xDF << 2)
label_32bafc:
    if (ctx->pc == 0x32BAFCu) {
        ctx->pc = 0x32BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAF8u;
        // 0x32bafc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB00u;
        goto label_32bb00;
    }
    ctx->pc = 0x32BAF8u;
    {
        const bool branch_taken_0x32baf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAF8u;
        // 0x32bafc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32baf8) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32BB00u;
label_32bb00:
    // 0x32bb00: 0xc0cdf40  jal         func_337D00
label_32bb04:
    if (ctx->pc == 0x32BB04u) {
        ctx->pc = 0x32BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB00u;
        // 0x32bb04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB08u;
        goto label_32bb08;
    }
    ctx->pc = 0x32BB00u;
    SET_GPR_U32(ctx, 31, 0x32BB08u);
    ctx->pc = 0x32BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB00u;
    // 0x32bb04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BB00u, 0x32BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB08u;
label_32bb08:
    // 0x32bb08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bb0c:
    // 0x32bb0c: 0xc0cdf40  jal         func_337D00
label_32bb10:
    if (ctx->pc == 0x32BB10u) {
        ctx->pc = 0x32BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB0Cu;
        // 0x32bb10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB14u;
        goto label_32bb14;
    }
    ctx->pc = 0x32BB0Cu;
    SET_GPR_U32(ctx, 31, 0x32BB14u);
    ctx->pc = 0x32BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB0Cu;
    // 0x32bb10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BB0Cu, 0x32BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB14u;
label_32bb14:
    // 0x32bb14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bb18:
    // 0x32bb18: 0xc0cdec0  jal         func_337B00
label_32bb1c:
    if (ctx->pc == 0x32BB1Cu) {
        ctx->pc = 0x32BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB18u;
        // 0x32bb1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB20u;
        goto label_32bb20;
    }
    ctx->pc = 0x32BB18u;
    SET_GPR_U32(ctx, 31, 0x32BB20u);
    ctx->pc = 0x32BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB18u;
    // 0x32bb1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BB18u, 0x32BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB20u;
label_32bb20:
    // 0x32bb20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bb24:
    // 0x32bb24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bb28:
    // 0x32bb28: 0xc0cdc9a  jal         func_337268
label_32bb2c:
    if (ctx->pc == 0x32BB2Cu) {
        ctx->pc = 0x32BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB28u;
        // 0x32bb2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB30u;
        goto label_32bb30;
    }
    ctx->pc = 0x32BB28u;
    SET_GPR_U32(ctx, 31, 0x32BB30u);
    ctx->pc = 0x32BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB28u;
    // 0x32bb2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337268u, 0x32BB28u, 0x32BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB30u;
label_32bb30:
    // 0x32bb30: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
label_32bb34:
    if (ctx->pc == 0x32BB34u) {
        ctx->pc = 0x32BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB30u;
        // 0x32bb34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB38u;
        goto label_32bb38;
    }
    ctx->pc = 0x32BB30u;
    {
        const bool branch_taken_0x32bb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB30u;
        // 0x32bb34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb30) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BB38u;
label_32bb38:
    // 0x32bb38: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x32bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_32bb3c:
    // 0x32bb3c: 0xc06ce84  jal         func_1B3A10
label_32bb40:
    if (ctx->pc == 0x32BB40u) {
        ctx->pc = 0x32BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB3Cu;
        // 0x32bb40: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB44u;
        goto label_32bb44;
    }
    ctx->pc = 0x32BB3Cu;
    SET_GPR_U32(ctx, 31, 0x32BB44u);
    ctx->pc = 0x32BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB3Cu;
    // 0x32bb40: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A10u, 0x32BB3Cu, 0x32BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB44u;
label_32bb44:
    // 0x32bb44: 0x100000cc  b           . + 4 + (0xCC << 2)
label_32bb48:
    if (ctx->pc == 0x32BB48u) {
        ctx->pc = 0x32BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB44u;
        // 0x32bb48: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB4Cu;
        goto label_32bb4c;
    }
    ctx->pc = 0x32BB44u;
    {
        const bool branch_taken_0x32bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB44u;
        // 0x32bb48: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb44) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32BB4Cu;
label_32bb4c:
    // 0x32bb4c: 0xc0cdf40  jal         func_337D00
label_32bb50:
    if (ctx->pc == 0x32BB50u) {
        ctx->pc = 0x32BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB4Cu;
        // 0x32bb50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB54u;
        goto label_32bb54;
    }
    ctx->pc = 0x32BB4Cu;
    SET_GPR_U32(ctx, 31, 0x32BB54u);
    ctx->pc = 0x32BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB4Cu;
    // 0x32bb50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BB4Cu, 0x32BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB54u;
label_32bb54:
    // 0x32bb54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bb58:
    // 0x32bb58: 0xc0cdf40  jal         func_337D00
label_32bb5c:
    if (ctx->pc == 0x32BB5Cu) {
        ctx->pc = 0x32BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB58u;
        // 0x32bb5c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB60u;
        goto label_32bb60;
    }
    ctx->pc = 0x32BB58u;
    SET_GPR_U32(ctx, 31, 0x32BB60u);
    ctx->pc = 0x32BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB58u;
    // 0x32bb5c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BB58u, 0x32BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB60u;
label_32bb60:
    // 0x32bb60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bb64:
    // 0x32bb64: 0xc0cdec0  jal         func_337B00
label_32bb68:
    if (ctx->pc == 0x32BB68u) {
        ctx->pc = 0x32BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB64u;
        // 0x32bb68: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB6Cu;
        goto label_32bb6c;
    }
    ctx->pc = 0x32BB64u;
    SET_GPR_U32(ctx, 31, 0x32BB6Cu);
    ctx->pc = 0x32BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB64u;
    // 0x32bb68: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BB64u, 0x32BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB6Cu;
label_32bb6c:
    // 0x32bb6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bb70:
    // 0x32bb70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bb74:
    // 0x32bb74: 0xc0cdc9a  jal         func_337268
label_32bb78:
    if (ctx->pc == 0x32BB78u) {
        ctx->pc = 0x32BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB74u;
        // 0x32bb78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB7Cu;
        goto label_32bb7c;
    }
    ctx->pc = 0x32BB74u;
    SET_GPR_U32(ctx, 31, 0x32BB7Cu);
    ctx->pc = 0x32BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB74u;
    // 0x32bb78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337268u, 0x32BB74u, 0x32BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB7Cu;
label_32bb7c:
    // 0x32bb7c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_32bb80:
    if (ctx->pc == 0x32BB80u) {
        ctx->pc = 0x32BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB7Cu;
        // 0x32bb80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB84u;
        goto label_32bb84;
    }
    ctx->pc = 0x32BB7Cu;
    {
        const bool branch_taken_0x32bb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB7Cu;
        // 0x32bb80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb7c) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BB84u;
label_32bb84:
    // 0x32bb84: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x32bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_32bb88:
    // 0x32bb88: 0xc06ce88  jal         func_1B3A20
label_32bb8c:
    if (ctx->pc == 0x32BB8Cu) {
        ctx->pc = 0x32BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB88u;
        // 0x32bb8c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB90u;
        goto label_32bb90;
    }
    ctx->pc = 0x32BB88u;
    SET_GPR_U32(ctx, 31, 0x32BB90u);
    ctx->pc = 0x32BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB88u;
    // 0x32bb8c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A20u, 0x32BB88u, 0x32BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB90u;
label_32bb90:
    // 0x32bb90: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_32bb94:
    if (ctx->pc == 0x32BB94u) {
        ctx->pc = 0x32BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB90u;
        // 0x32bb94: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BB98u;
        goto label_32bb98;
    }
    ctx->pc = 0x32BB90u;
    {
        const bool branch_taken_0x32bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB90u;
        // 0x32bb94: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb90) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32BB98u;
label_32bb98:
    // 0x32bb98: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32bb9c:
    // 0x32bb9c: 0xc0cdf2e  jal         func_337CB8
label_32bba0:
    if (ctx->pc == 0x32BBA0u) {
        ctx->pc = 0x32BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB9Cu;
        // 0x32bba0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBA4u;
        goto label_32bba4;
    }
    ctx->pc = 0x32BB9Cu;
    SET_GPR_U32(ctx, 31, 0x32BBA4u);
    ctx->pc = 0x32BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB9Cu;
    // 0x32bba0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BB9Cu, 0x32BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBA4u;
label_32bba4:
    // 0x32bba4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bba8:
    // 0x32bba8: 0xc0cdec0  jal         func_337B00
label_32bbac:
    if (ctx->pc == 0x32BBACu) {
        ctx->pc = 0x32BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBA8u;
        // 0x32bbac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBB0u;
        goto label_32bbb0;
    }
    ctx->pc = 0x32BBA8u;
    SET_GPR_U32(ctx, 31, 0x32BBB0u);
    ctx->pc = 0x32BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBA8u;
    // 0x32bbac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BBA8u, 0x32BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBB0u;
label_32bbb0:
    // 0x32bbb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bbb4:
    // 0x32bbb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bbb8:
    // 0x32bbb8: 0xc0cdc50  jal         func_337140
label_32bbbc:
    if (ctx->pc == 0x32BBBCu) {
        ctx->pc = 0x32BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBB8u;
        // 0x32bbbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBC0u;
        goto label_32bbc0;
    }
    ctx->pc = 0x32BBB8u;
    SET_GPR_U32(ctx, 31, 0x32BBC0u);
    ctx->pc = 0x32BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBB8u;
    // 0x32bbbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x32BBB8u, 0x32BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBC0u;
label_32bbc0:
    // 0x32bbc0: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_32bbc4:
    if (ctx->pc == 0x32BBC4u) {
        ctx->pc = 0x32BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBC0u;
        // 0x32bbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBC8u;
        goto label_32bbc8;
    }
    ctx->pc = 0x32BBC0u;
    {
        const bool branch_taken_0x32bbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBC0u;
        // 0x32bbc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbc0) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BBC8u;
label_32bbc8:
    // 0x32bbc8: 0xc09b7b2  jal         func_26DEC8
label_32bbcc:
    if (ctx->pc == 0x32BBCCu) {
        ctx->pc = 0x32BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBC8u;
        // 0x32bbcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBD0u;
        goto label_32bbd0;
    }
    ctx->pc = 0x32BBC8u;
    SET_GPR_U32(ctx, 31, 0x32BBD0u);
    ctx->pc = 0x32BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBC8u;
    // 0x32bbcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DEC8u, 0x32BBC8u, 0x32BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBD0u;
label_32bbd0:
    // 0x32bbd0: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_32bbd4:
    if (ctx->pc == 0x32BBD4u) {
        ctx->pc = 0x32BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBD0u;
        // 0x32bbd4: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBD8u;
        goto label_32bbd8;
    }
    ctx->pc = 0x32BBD0u;
    {
        const bool branch_taken_0x32bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBD0u;
        // 0x32bbd4: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbd0) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BBD8u;
label_32bbd8:
    // 0x32bbd8: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32bbdc:
    // 0x32bbdc: 0xc0cdf40  jal         func_337D00
label_32bbe0:
    if (ctx->pc == 0x32BBE0u) {
        ctx->pc = 0x32BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBDCu;
        // 0x32bbe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBE4u;
        goto label_32bbe4;
    }
    ctx->pc = 0x32BBDCu;
    SET_GPR_U32(ctx, 31, 0x32BBE4u);
    ctx->pc = 0x32BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBDCu;
    // 0x32bbe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BBDCu, 0x32BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBE4u;
label_32bbe4:
    // 0x32bbe4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bbe8:
    // 0x32bbe8: 0xc0cdec0  jal         func_337B00
label_32bbec:
    if (ctx->pc == 0x32BBECu) {
        ctx->pc = 0x32BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBE8u;
        // 0x32bbec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BBF0u;
        goto label_32bbf0;
    }
    ctx->pc = 0x32BBE8u;
    SET_GPR_U32(ctx, 31, 0x32BBF0u);
    ctx->pc = 0x32BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBE8u;
    // 0x32bbec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BBE8u, 0x32BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBF0u;
label_32bbf0:
    // 0x32bbf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bbf4:
    // 0x32bbf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bbf8:
    // 0x32bbf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32bbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32bbfc:
    // 0x32bbfc: 0xc0cdc22  jal         func_337088
label_32bc00:
    if (ctx->pc == 0x32BC00u) {
        ctx->pc = 0x32BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBFCu;
        // 0x32bc00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC04u;
        goto label_32bc04;
    }
    ctx->pc = 0x32BBFCu;
    SET_GPR_U32(ctx, 31, 0x32BC04u);
    ctx->pc = 0x32BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBFCu;
    // 0x32bc00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337088u, 0x32BBFCu, 0x32BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC04u;
label_32bc04:
    // 0x32bc04: 0x5040009c  beql        $v0, $zero, . + 4 + (0x9C << 2)
label_32bc08:
    if (ctx->pc == 0x32BC08u) {
        ctx->pc = 0x32BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC04u;
        // 0x32bc08: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC0Cu;
        goto label_32bc0c;
    }
    ctx->pc = 0x32BC04u;
    {
        const bool branch_taken_0x32bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc04) {
            ctx->pc = 0x32BC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BC04u;
            // 0x32bc08: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32BC0Cu;
label_32bc0c:
    // 0x32bc0c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x32bc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_32bc10:
    // 0x32bc10: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x32bc10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_32bc14:
    // 0x32bc14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32bc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32bc18:
    // 0x32bc18: 0x0  nop
    ctx->pc = 0x32bc18u;
    // NOP
label_32bc1c:
    // 0x32bc1c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x32bc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_32bc20:
    // 0x32bc20: 0x10000094  b           . + 4 + (0x94 << 2)
label_32bc24:
    if (ctx->pc == 0x32BC24u) {
        ctx->pc = 0x32BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC20u;
        // 0x32bc24: 0xe60002c0  swc1        $f0, 0x2C0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC28u;
        goto label_32bc28;
    }
    ctx->pc = 0x32BC20u;
    {
        const bool branch_taken_0x32bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC20u;
        // 0x32bc24: 0xe60002c0  swc1        $f0, 0x2C0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bc20) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BC28u;
label_32bc28:
    // 0x32bc28: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32bc2c:
    // 0x32bc2c: 0xc0cdf40  jal         func_337D00
label_32bc30:
    if (ctx->pc == 0x32BC30u) {
        ctx->pc = 0x32BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC2Cu;
        // 0x32bc30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC34u;
        goto label_32bc34;
    }
    ctx->pc = 0x32BC2Cu;
    SET_GPR_U32(ctx, 31, 0x32BC34u);
    ctx->pc = 0x32BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC2Cu;
    // 0x32bc30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32BC2Cu, 0x32BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC34u;
label_32bc34:
    // 0x32bc34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bc38:
    // 0x32bc38: 0xc0cdec0  jal         func_337B00
label_32bc3c:
    if (ctx->pc == 0x32BC3Cu) {
        ctx->pc = 0x32BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC38u;
        // 0x32bc3c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC40u;
        goto label_32bc40;
    }
    ctx->pc = 0x32BC38u;
    SET_GPR_U32(ctx, 31, 0x32BC40u);
    ctx->pc = 0x32BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC38u;
    // 0x32bc3c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BC38u, 0x32BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC40u;
label_32bc40:
    // 0x32bc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bc44:
    // 0x32bc44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bc48:
    // 0x32bc48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32bc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32bc4c:
    // 0x32bc4c: 0xc0cdc22  jal         func_337088
label_32bc50:
    if (ctx->pc == 0x32BC50u) {
        ctx->pc = 0x32BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC4Cu;
        // 0x32bc50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC54u;
        goto label_32bc54;
    }
    ctx->pc = 0x32BC4Cu;
    SET_GPR_U32(ctx, 31, 0x32BC54u);
    ctx->pc = 0x32BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC4Cu;
    // 0x32bc50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337088u, 0x32BC4Cu, 0x32BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC54u;
label_32bc54:
    // 0x32bc54: 0x50400088  beql        $v0, $zero, . + 4 + (0x88 << 2)
label_32bc58:
    if (ctx->pc == 0x32BC58u) {
        ctx->pc = 0x32BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC54u;
        // 0x32bc58: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC5Cu;
        goto label_32bc5c;
    }
    ctx->pc = 0x32BC54u;
    {
        const bool branch_taken_0x32bc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc54) {
            ctx->pc = 0x32BC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BC54u;
            // 0x32bc58: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32BC5Cu;
label_32bc5c:
    // 0x32bc5c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x32bc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_32bc60:
    // 0x32bc60: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x32bc60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_32bc64:
    // 0x32bc64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32bc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32bc68:
    // 0x32bc68: 0x0  nop
    ctx->pc = 0x32bc68u;
    // NOP
label_32bc6c:
    // 0x32bc6c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x32bc6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_32bc70:
    // 0x32bc70: 0x10000080  b           . + 4 + (0x80 << 2)
label_32bc74:
    if (ctx->pc == 0x32BC74u) {
        ctx->pc = 0x32BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC70u;
        // 0x32bc74: 0xe60002c4  swc1        $f0, 0x2C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC78u;
        goto label_32bc78;
    }
    ctx->pc = 0x32BC70u;
    {
        const bool branch_taken_0x32bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC70u;
        // 0x32bc74: 0xe60002c4  swc1        $f0, 0x2C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bc70) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BC78u;
label_32bc78:
    // 0x32bc78: 0xc0cdf2e  jal         func_337CB8
label_32bc7c:
    if (ctx->pc == 0x32BC7Cu) {
        ctx->pc = 0x32BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC78u;
        // 0x32bc7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC80u;
        goto label_32bc80;
    }
    ctx->pc = 0x32BC78u;
    SET_GPR_U32(ctx, 31, 0x32BC80u);
    ctx->pc = 0x32BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC78u;
    // 0x32bc7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BC78u, 0x32BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC80u;
label_32bc80:
    // 0x32bc80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32bc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bc84:
    // 0x32bc84: 0xc0cdf2e  jal         func_337CB8
label_32bc88:
    if (ctx->pc == 0x32BC88u) {
        ctx->pc = 0x32BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC84u;
        // 0x32bc88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC8Cu;
        goto label_32bc8c;
    }
    ctx->pc = 0x32BC84u;
    SET_GPR_U32(ctx, 31, 0x32BC8Cu);
    ctx->pc = 0x32BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC84u;
    // 0x32bc88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BC84u, 0x32BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC8Cu;
label_32bc8c:
    // 0x32bc8c: 0xc0cdf52  jal         func_337D48
label_32bc90:
    if (ctx->pc == 0x32BC90u) {
        ctx->pc = 0x32BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC8Cu;
        // 0x32bc90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BC94u;
        goto label_32bc94;
    }
    ctx->pc = 0x32BC8Cu;
    SET_GPR_U32(ctx, 31, 0x32BC94u);
    ctx->pc = 0x32BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC8Cu;
    // 0x32bc90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BC8Cu, 0x32BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC94u;
label_32bc94:
    // 0x32bc94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bc98:
    // 0x32bc98: 0xc0cdf2e  jal         func_337CB8
label_32bc9c:
    if (ctx->pc == 0x32BC9Cu) {
        ctx->pc = 0x32BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC98u;
        // 0x32bc9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCA0u;
        goto label_32bca0;
    }
    ctx->pc = 0x32BC98u;
    SET_GPR_U32(ctx, 31, 0x32BCA0u);
    ctx->pc = 0x32BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC98u;
    // 0x32bc9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BC98u, 0x32BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCA0u;
label_32bca0:
    // 0x32bca0: 0xc0cdf52  jal         func_337D48
label_32bca4:
    if (ctx->pc == 0x32BCA4u) {
        ctx->pc = 0x32BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCA0u;
        // 0x32bca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCA8u;
        goto label_32bca8;
    }
    ctx->pc = 0x32BCA0u;
    SET_GPR_U32(ctx, 31, 0x32BCA8u);
    ctx->pc = 0x32BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCA0u;
    // 0x32bca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BCA0u, 0x32BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCA8u;
label_32bca8:
    // 0x32bca8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32bcac:
    // 0x32bcac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bcb0:
    // 0x32bcb0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32bcb4:
    // 0x32bcb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32bcb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32bcb8:
    // 0x32bcb8: 0xc048c1e  jal         func_123078
label_32bcbc:
    if (ctx->pc == 0x32BCBCu) {
        ctx->pc = 0x32BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCB8u;
        // 0x32bcbc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCC0u;
        goto label_32bcc0;
    }
    ctx->pc = 0x32BCB8u;
    SET_GPR_U32(ctx, 31, 0x32BCC0u);
    ctx->pc = 0x32BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCB8u;
    // 0x32bcbc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123078u, 0x32BCB8u, 0x32BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCC0u;
label_32bcc0:
    // 0x32bcc0: 0x10000056  b           . + 4 + (0x56 << 2)
label_32bcc4:
    if (ctx->pc == 0x32BCC4u) {
        ctx->pc = 0x32BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCC0u;
        // 0x32bcc4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCC8u;
        goto label_32bcc8;
    }
    ctx->pc = 0x32BCC0u;
    {
        const bool branch_taken_0x32bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCC0u;
        // 0x32bcc4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcc0) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32BCC8u;
label_32bcc8:
    // 0x32bcc8: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x32bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
label_32bccc:
    // 0x32bccc: 0xc0cdf2e  jal         func_337CB8
label_32bcd0:
    if (ctx->pc == 0x32BCD0u) {
        ctx->pc = 0x32BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCCCu;
        // 0x32bcd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCD4u;
        goto label_32bcd4;
    }
    ctx->pc = 0x32BCCCu;
    SET_GPR_U32(ctx, 31, 0x32BCD4u);
    ctx->pc = 0x32BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCCCu;
    // 0x32bcd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BCCCu, 0x32BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCD4u;
label_32bcd4:
    // 0x32bcd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bcd8:
    // 0x32bcd8: 0xc0cdec0  jal         func_337B00
label_32bcdc:
    if (ctx->pc == 0x32BCDCu) {
        ctx->pc = 0x32BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCD8u;
        // 0x32bcdc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCE0u;
        goto label_32bce0;
    }
    ctx->pc = 0x32BCD8u;
    SET_GPR_U32(ctx, 31, 0x32BCE0u);
    ctx->pc = 0x32BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCD8u;
    // 0x32bcdc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32BCD8u, 0x32BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCE0u;
label_32bce0:
    // 0x32bce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bce4:
    // 0x32bce4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32bce8:
    // 0x32bce8: 0xc0cdc50  jal         func_337140
label_32bcec:
    if (ctx->pc == 0x32BCECu) {
        ctx->pc = 0x32BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCE8u;
        // 0x32bcec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCF0u;
        goto label_32bcf0;
    }
    ctx->pc = 0x32BCE8u;
    SET_GPR_U32(ctx, 31, 0x32BCF0u);
    ctx->pc = 0x32BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCE8u;
    // 0x32bcec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x32BCE8u, 0x32BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCF0u;
label_32bcf0:
    // 0x32bcf0: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_32bcf4:
    if (ctx->pc == 0x32BCF4u) {
        ctx->pc = 0x32BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCF0u;
        // 0x32bcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BCF8u;
        goto label_32bcf8;
    }
    ctx->pc = 0x32BCF0u;
    {
        const bool branch_taken_0x32bcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCF0u;
        // 0x32bcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcf0) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BCF8u;
label_32bcf8:
    // 0x32bcf8: 0xc09b7d4  jal         func_26DF50
label_32bcfc:
    if (ctx->pc == 0x32BCFCu) {
        ctx->pc = 0x32BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCF8u;
        // 0x32bcfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD00u;
        goto label_32bd00;
    }
    ctx->pc = 0x32BCF8u;
    SET_GPR_U32(ctx, 31, 0x32BD00u);
    ctx->pc = 0x32BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCF8u;
    // 0x32bcfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF50u, 0x32BCF8u, 0x32BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD00u;
label_32bd00:
    // 0x32bd00: 0x1000005c  b           . + 4 + (0x5C << 2)
label_32bd04:
    if (ctx->pc == 0x32BD04u) {
        ctx->pc = 0x32BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD00u;
        // 0x32bd04: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD08u;
        goto label_32bd08;
    }
    ctx->pc = 0x32BD00u;
    {
        const bool branch_taken_0x32bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD00u;
        // 0x32bd04: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bd00) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BD08u;
label_32bd08:
    // 0x32bd08: 0xc0cdf2e  jal         func_337CB8
label_32bd0c:
    if (ctx->pc == 0x32BD0Cu) {
        ctx->pc = 0x32BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD08u;
        // 0x32bd0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD10u;
        goto label_32bd10;
    }
    ctx->pc = 0x32BD08u;
    SET_GPR_U32(ctx, 31, 0x32BD10u);
    ctx->pc = 0x32BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD08u;
    // 0x32bd0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD08u, 0x32BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD10u;
label_32bd10:
    // 0x32bd10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32bd10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bd14:
    // 0x32bd14: 0xc0cdf2e  jal         func_337CB8
label_32bd18:
    if (ctx->pc == 0x32BD18u) {
        ctx->pc = 0x32BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD14u;
        // 0x32bd18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD1Cu;
        goto label_32bd1c;
    }
    ctx->pc = 0x32BD14u;
    SET_GPR_U32(ctx, 31, 0x32BD1Cu);
    ctx->pc = 0x32BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD14u;
    // 0x32bd18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD14u, 0x32BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD1Cu;
label_32bd1c:
    // 0x32bd1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32bd1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bd20:
    // 0x32bd20: 0xc0cdf2e  jal         func_337CB8
label_32bd24:
    if (ctx->pc == 0x32BD24u) {
        ctx->pc = 0x32BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD20u;
        // 0x32bd24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD28u;
        goto label_32bd28;
    }
    ctx->pc = 0x32BD20u;
    SET_GPR_U32(ctx, 31, 0x32BD28u);
    ctx->pc = 0x32BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD20u;
    // 0x32bd24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD20u, 0x32BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD28u;
label_32bd28:
    // 0x32bd28: 0xc0cdf52  jal         func_337D48
label_32bd2c:
    if (ctx->pc == 0x32BD2Cu) {
        ctx->pc = 0x32BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD28u;
        // 0x32bd2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD30u;
        goto label_32bd30;
    }
    ctx->pc = 0x32BD28u;
    SET_GPR_U32(ctx, 31, 0x32BD30u);
    ctx->pc = 0x32BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD28u;
    // 0x32bd2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BD28u, 0x32BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD30u;
label_32bd30:
    // 0x32bd30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32bd30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bd34:
    // 0x32bd34: 0xc0cdf2e  jal         func_337CB8
label_32bd38:
    if (ctx->pc == 0x32BD38u) {
        ctx->pc = 0x32BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD34u;
        // 0x32bd38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD3Cu;
        goto label_32bd3c;
    }
    ctx->pc = 0x32BD34u;
    SET_GPR_U32(ctx, 31, 0x32BD3Cu);
    ctx->pc = 0x32BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD34u;
    // 0x32bd38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD34u, 0x32BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD3Cu;
label_32bd3c:
    // 0x32bd3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32bd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bd40:
    // 0x32bd40: 0xc0cdf2e  jal         func_337CB8
label_32bd44:
    if (ctx->pc == 0x32BD44u) {
        ctx->pc = 0x32BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD40u;
        // 0x32bd44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD48u;
        goto label_32bd48;
    }
    ctx->pc = 0x32BD40u;
    SET_GPR_U32(ctx, 31, 0x32BD48u);
    ctx->pc = 0x32BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD40u;
    // 0x32bd44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD40u, 0x32BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD48u;
label_32bd48:
    // 0x32bd48: 0xc0cdf52  jal         func_337D48
label_32bd4c:
    if (ctx->pc == 0x32BD4Cu) {
        ctx->pc = 0x32BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD48u;
        // 0x32bd4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD50u;
        goto label_32bd50;
    }
    ctx->pc = 0x32BD48u;
    SET_GPR_U32(ctx, 31, 0x32BD50u);
    ctx->pc = 0x32BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD48u;
    // 0x32bd4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BD48u, 0x32BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD50u;
label_32bd50:
    // 0x32bd50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bd54:
    // 0x32bd54: 0xc0cdf2e  jal         func_337CB8
label_32bd58:
    if (ctx->pc == 0x32BD58u) {
        ctx->pc = 0x32BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD54u;
        // 0x32bd58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD5Cu;
        goto label_32bd5c;
    }
    ctx->pc = 0x32BD54u;
    SET_GPR_U32(ctx, 31, 0x32BD5Cu);
    ctx->pc = 0x32BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD54u;
    // 0x32bd58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD54u, 0x32BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD5Cu;
label_32bd5c:
    // 0x32bd5c: 0xc0cdf52  jal         func_337D48
label_32bd60:
    if (ctx->pc == 0x32BD60u) {
        ctx->pc = 0x32BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD5Cu;
        // 0x32bd60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD64u;
        goto label_32bd64;
    }
    ctx->pc = 0x32BD5Cu;
    SET_GPR_U32(ctx, 31, 0x32BD64u);
    ctx->pc = 0x32BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD5Cu;
    // 0x32bd60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BD5Cu, 0x32BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD64u;
label_32bd64:
    // 0x32bd64: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32bd68:
    // 0x32bd68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bd6c:
    // 0x32bd6c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32bd70:
    // 0x32bd70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32bd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32bd74:
    // 0x32bd74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32bd74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32bd78:
    // 0x32bd78: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32bd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32bd7c:
    // 0x32bd7c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32bd7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32bd80:
    // 0x32bd80: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x32bd80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32bd84:
    // 0x32bd84: 0xc04891c  jal         func_122470
label_32bd88:
    if (ctx->pc == 0x32BD88u) {
        ctx->pc = 0x32BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD84u;
        // 0x32bd88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD8Cu;
        goto label_32bd8c;
    }
    ctx->pc = 0x32BD84u;
    SET_GPR_U32(ctx, 31, 0x32BD8Cu);
    ctx->pc = 0x32BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD84u;
    // 0x32bd88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122470u, 0x32BD84u, 0x32BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD8Cu;
label_32bd8c:
    // 0x32bd8c: 0x10000023  b           . + 4 + (0x23 << 2)
label_32bd90:
    if (ctx->pc == 0x32BD90u) {
        ctx->pc = 0x32BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD8Cu;
        // 0x32bd90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD94u;
        goto label_32bd94;
    }
    ctx->pc = 0x32BD8Cu;
    {
        const bool branch_taken_0x32bd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD8Cu;
        // 0x32bd90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bd8c) {
            ctx->pc = 0x32BE1Cu;
            goto label_32be1c;
        }
    }
    ctx->pc = 0x32BD94u;
label_32bd94:
    // 0x32bd94: 0xc0cdf2e  jal         func_337CB8
label_32bd98:
    if (ctx->pc == 0x32BD98u) {
        ctx->pc = 0x32BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD94u;
        // 0x32bd98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BD9Cu;
        goto label_32bd9c;
    }
    ctx->pc = 0x32BD94u;
    SET_GPR_U32(ctx, 31, 0x32BD9Cu);
    ctx->pc = 0x32BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD94u;
    // 0x32bd98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BD94u, 0x32BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD9Cu;
label_32bd9c:
    // 0x32bd9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32bd9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bda0:
    // 0x32bda0: 0xc0cdf2e  jal         func_337CB8
label_32bda4:
    if (ctx->pc == 0x32BDA4u) {
        ctx->pc = 0x32BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDA0u;
        // 0x32bda4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDA8u;
        goto label_32bda8;
    }
    ctx->pc = 0x32BDA0u;
    SET_GPR_U32(ctx, 31, 0x32BDA8u);
    ctx->pc = 0x32BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDA0u;
    // 0x32bda4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BDA0u, 0x32BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDA8u;
label_32bda8:
    // 0x32bda8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32bda8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bdac:
    // 0x32bdac: 0xc0cdf2e  jal         func_337CB8
label_32bdb0:
    if (ctx->pc == 0x32BDB0u) {
        ctx->pc = 0x32BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDACu;
        // 0x32bdb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDB4u;
        goto label_32bdb4;
    }
    ctx->pc = 0x32BDACu;
    SET_GPR_U32(ctx, 31, 0x32BDB4u);
    ctx->pc = 0x32BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDACu;
    // 0x32bdb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BDACu, 0x32BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDB4u;
label_32bdb4:
    // 0x32bdb4: 0xc0cdf52  jal         func_337D48
label_32bdb8:
    if (ctx->pc == 0x32BDB8u) {
        ctx->pc = 0x32BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDB4u;
        // 0x32bdb8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDBCu;
        goto label_32bdbc;
    }
    ctx->pc = 0x32BDB4u;
    SET_GPR_U32(ctx, 31, 0x32BDBCu);
    ctx->pc = 0x32BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDB4u;
    // 0x32bdb8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BDB4u, 0x32BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDBCu;
label_32bdbc:
    // 0x32bdbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32bdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bdc0:
    // 0x32bdc0: 0xc0cdf2e  jal         func_337CB8
label_32bdc4:
    if (ctx->pc == 0x32BDC4u) {
        ctx->pc = 0x32BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDC0u;
        // 0x32bdc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDC8u;
        goto label_32bdc8;
    }
    ctx->pc = 0x32BDC0u;
    SET_GPR_U32(ctx, 31, 0x32BDC8u);
    ctx->pc = 0x32BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDC0u;
    // 0x32bdc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BDC0u, 0x32BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDC8u;
label_32bdc8:
    // 0x32bdc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32bdc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bdcc:
    // 0x32bdcc: 0xc0cdf2e  jal         func_337CB8
label_32bdd0:
    if (ctx->pc == 0x32BDD0u) {
        ctx->pc = 0x32BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDCCu;
        // 0x32bdd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDD4u;
        goto label_32bdd4;
    }
    ctx->pc = 0x32BDCCu;
    SET_GPR_U32(ctx, 31, 0x32BDD4u);
    ctx->pc = 0x32BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDCCu;
    // 0x32bdd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BDCCu, 0x32BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDD4u;
label_32bdd4:
    // 0x32bdd4: 0xc0cdf52  jal         func_337D48
label_32bdd8:
    if (ctx->pc == 0x32BDD8u) {
        ctx->pc = 0x32BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDD4u;
        // 0x32bdd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDDCu;
        goto label_32bddc;
    }
    ctx->pc = 0x32BDD4u;
    SET_GPR_U32(ctx, 31, 0x32BDDCu);
    ctx->pc = 0x32BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDD4u;
    // 0x32bdd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BDD4u, 0x32BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDDCu;
label_32bddc:
    // 0x32bddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32bddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bde0:
    // 0x32bde0: 0xc0cdf2e  jal         func_337CB8
label_32bde4:
    if (ctx->pc == 0x32BDE4u) {
        ctx->pc = 0x32BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDE0u;
        // 0x32bde4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDE8u;
        goto label_32bde8;
    }
    ctx->pc = 0x32BDE0u;
    SET_GPR_U32(ctx, 31, 0x32BDE8u);
    ctx->pc = 0x32BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDE0u;
    // 0x32bde4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BDE0u, 0x32BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDE8u;
label_32bde8:
    // 0x32bde8: 0xc0cdf52  jal         func_337D48
label_32bdec:
    if (ctx->pc == 0x32BDECu) {
        ctx->pc = 0x32BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDE8u;
        // 0x32bdec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BDF0u;
        goto label_32bdf0;
    }
    ctx->pc = 0x32BDE8u;
    SET_GPR_U32(ctx, 31, 0x32BDF0u);
    ctx->pc = 0x32BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDE8u;
    // 0x32bdec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BDE8u, 0x32BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDF0u;
label_32bdf0:
    // 0x32bdf0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_32bdf4:
    // 0x32bdf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bdf8:
    // 0x32bdf8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x32bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_32bdfc:
    // 0x32bdfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32bdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32be00:
    // 0x32be00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32be00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32be04:
    // 0x32be04: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32be04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32be08:
    // 0x32be08: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x32be08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32be0c:
    // 0x32be0c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x32be0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32be10:
    // 0x32be10: 0xc048964  jal         func_122590
label_32be14:
    if (ctx->pc == 0x32BE14u) {
        ctx->pc = 0x32BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE10u;
        // 0x32be14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE18u;
        goto label_32be18;
    }
    ctx->pc = 0x32BE10u;
    SET_GPR_U32(ctx, 31, 0x32BE18u);
    ctx->pc = 0x32BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE10u;
    // 0x32be14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122590u, 0x32BE10u, 0x32BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE18u;
label_32be18:
    // 0x32be18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32be1c:
    // 0x32be1c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_32be20:
    if (ctx->pc == 0x32BE20u) {
        ctx->pc = 0x32BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE1Cu;
        // 0x32be20: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE24u;
        goto label_32be24;
    }
    ctx->pc = 0x32BE1Cu;
    {
        const bool branch_taken_0x32be1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE1Cu;
        // 0x32be20: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be1c) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BE24u;
label_32be24:
    // 0x32be24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32be28:
    // 0x32be28: 0xc0cdfdc  jal         func_337F70
label_32be2c:
    if (ctx->pc == 0x32BE2Cu) {
        ctx->pc = 0x32BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE28u;
        // 0x32be2c: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE30u;
        goto label_32be30;
    }
    ctx->pc = 0x32BE28u;
    SET_GPR_U32(ctx, 31, 0x32BE30u);
    ctx->pc = 0x32BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE28u;
    // 0x32be2c: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x32BE28u, 0x32BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE30u;
label_32be30:
    // 0x32be30: 0x10000011  b           . + 4 + (0x11 << 2)
label_32be34:
    if (ctx->pc == 0x32BE34u) {
        ctx->pc = 0x32BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE30u;
        // 0x32be34: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE38u;
        goto label_32be38;
    }
    ctx->pc = 0x32BE30u;
    {
        const bool branch_taken_0x32be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE30u;
        // 0x32be34: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be30) {
            ctx->pc = 0x32BE78u;
            goto label_32be78;
        }
    }
    ctx->pc = 0x32BE38u;
label_32be38:
    // 0x32be38: 0xc0cdf2e  jal         func_337CB8
label_32be3c:
    if (ctx->pc == 0x32BE3Cu) {
        ctx->pc = 0x32BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE38u;
        // 0x32be3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE40u;
        goto label_32be40;
    }
    ctx->pc = 0x32BE38u;
    SET_GPR_U32(ctx, 31, 0x32BE40u);
    ctx->pc = 0x32BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE38u;
    // 0x32be3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BE38u, 0x32BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE40u;
label_32be40:
    // 0x32be40: 0xc0cdf52  jal         func_337D48
label_32be44:
    if (ctx->pc == 0x32BE44u) {
        ctx->pc = 0x32BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE40u;
        // 0x32be44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE48u;
        goto label_32be48;
    }
    ctx->pc = 0x32BE40u;
    SET_GPR_U32(ctx, 31, 0x32BE48u);
    ctx->pc = 0x32BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE40u;
    // 0x32be44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BE40u, 0x32BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE48u;
label_32be48:
    // 0x32be48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32be48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32be4c:
    // 0x32be4c: 0xc0cdf2e  jal         func_337CB8
label_32be50:
    if (ctx->pc == 0x32BE50u) {
        ctx->pc = 0x32BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE4Cu;
        // 0x32be50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE54u;
        goto label_32be54;
    }
    ctx->pc = 0x32BE4Cu;
    SET_GPR_U32(ctx, 31, 0x32BE54u);
    ctx->pc = 0x32BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE4Cu;
    // 0x32be50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32BE4Cu, 0x32BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE54u;
label_32be54:
    // 0x32be54: 0xc0cdf52  jal         func_337D48
label_32be58:
    if (ctx->pc == 0x32BE58u) {
        ctx->pc = 0x32BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE54u;
        // 0x32be58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE5Cu;
        goto label_32be5c;
    }
    ctx->pc = 0x32BE54u;
    SET_GPR_U32(ctx, 31, 0x32BE5Cu);
    ctx->pc = 0x32BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE54u;
    // 0x32be58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32BE54u, 0x32BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE5Cu;
label_32be5c:
    // 0x32be5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32be60:
    // 0x32be60: 0xc0cd9c8  jal         func_336720
label_32be64:
    if (ctx->pc == 0x32BE64u) {
        ctx->pc = 0x32BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE60u;
        // 0x32be64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE68u;
        goto label_32be68;
    }
    ctx->pc = 0x32BE60u;
    SET_GPR_U32(ctx, 31, 0x32BE68u);
    ctx->pc = 0x32BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE60u;
    // 0x32be64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336720u, 0x32BE60u, 0x32BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE68u;
label_32be68:
    // 0x32be68: 0x10000002  b           . + 4 + (0x2 << 2)
label_32be6c:
    if (ctx->pc == 0x32BE6Cu) {
        ctx->pc = 0x32BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE68u;
        // 0x32be6c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BE70u;
        goto label_32be70;
    }
    ctx->pc = 0x32BE68u;
    {
        const bool branch_taken_0x32be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE68u;
        // 0x32be6c: 0xaec2003c  sw          $v0, 0x3C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be68) {
            ctx->pc = 0x32BE74u;
            goto label_32be74;
        }
    }
    ctx->pc = 0x32BE70u;
label_32be70:
    // 0x32be70: 0xaec00498  sw          $zero, 0x498($s6)
    ctx->pc = 0x32be70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1176), GPR_U32(ctx, 0));
label_32be74:
    // 0x32be74: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x32be74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_32be78:
    // 0x32be78: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x32be78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_32be7c:
    // 0x32be7c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x32be7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_32be80:
    // 0x32be80: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x32be80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_32be84:
    // 0x32be84: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x32be84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_32be88:
    // 0x32be88: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x32be88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_32be8c:
    // 0x32be8c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x32be8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_32be90:
    // 0x32be90: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x32be90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_32be94:
    // 0x32be94: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x32be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_32be98:
    // 0x32be98: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x32be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_32be9c:
    // 0x32be9c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x32be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32bea0:
    // 0x32bea0: 0x3e00008  jr          $ra
label_32bea4:
    if (ctx->pc == 0x32BEA4u) {
        ctx->pc = 0x32BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEA0u;
        // 0x32bea4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BEA8u;
        goto label_fallthrough_0x32bea0;
    }
    ctx->pc = 0x32BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEA0u;
        // 0x32bea4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32bea0:
    ctx->pc = 0x32BEA8u;
}
