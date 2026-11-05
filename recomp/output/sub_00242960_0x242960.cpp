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

// Function: sub_00242960
// Address: 0x242960 - 0x2432b8
void sub_00242960_0x242960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242960_0x242960");
#endif

    switch (ctx->pc) {
        case 0x242960u: goto label_242960;
        case 0x242964u: goto label_242964;
        case 0x242968u: goto label_242968;
        case 0x24296cu: goto label_24296c;
        case 0x242970u: goto label_242970;
        case 0x242974u: goto label_242974;
        case 0x242978u: goto label_242978;
        case 0x24297cu: goto label_24297c;
        case 0x242980u: goto label_242980;
        case 0x242984u: goto label_242984;
        case 0x242988u: goto label_242988;
        case 0x24298cu: goto label_24298c;
        case 0x242990u: goto label_242990;
        case 0x242994u: goto label_242994;
        case 0x242998u: goto label_242998;
        case 0x24299cu: goto label_24299c;
        case 0x2429a0u: goto label_2429a0;
        case 0x2429a4u: goto label_2429a4;
        case 0x2429a8u: goto label_2429a8;
        case 0x2429acu: goto label_2429ac;
        case 0x2429b0u: goto label_2429b0;
        case 0x2429b4u: goto label_2429b4;
        case 0x2429b8u: goto label_2429b8;
        case 0x2429bcu: goto label_2429bc;
        case 0x2429c0u: goto label_2429c0;
        case 0x2429c4u: goto label_2429c4;
        case 0x2429c8u: goto label_2429c8;
        case 0x2429ccu: goto label_2429cc;
        case 0x2429d0u: goto label_2429d0;
        case 0x2429d4u: goto label_2429d4;
        case 0x2429d8u: goto label_2429d8;
        case 0x2429dcu: goto label_2429dc;
        case 0x2429e0u: goto label_2429e0;
        case 0x2429e4u: goto label_2429e4;
        case 0x2429e8u: goto label_2429e8;
        case 0x2429ecu: goto label_2429ec;
        case 0x2429f0u: goto label_2429f0;
        case 0x2429f4u: goto label_2429f4;
        case 0x2429f8u: goto label_2429f8;
        case 0x2429fcu: goto label_2429fc;
        case 0x242a00u: goto label_242a00;
        case 0x242a04u: goto label_242a04;
        case 0x242a08u: goto label_242a08;
        case 0x242a0cu: goto label_242a0c;
        case 0x242a10u: goto label_242a10;
        case 0x242a14u: goto label_242a14;
        case 0x242a18u: goto label_242a18;
        case 0x242a1cu: goto label_242a1c;
        case 0x242a20u: goto label_242a20;
        case 0x242a24u: goto label_242a24;
        case 0x242a28u: goto label_242a28;
        case 0x242a2cu: goto label_242a2c;
        case 0x242a30u: goto label_242a30;
        case 0x242a34u: goto label_242a34;
        case 0x242a38u: goto label_242a38;
        case 0x242a3cu: goto label_242a3c;
        case 0x242a40u: goto label_242a40;
        case 0x242a44u: goto label_242a44;
        case 0x242a48u: goto label_242a48;
        case 0x242a4cu: goto label_242a4c;
        case 0x242a50u: goto label_242a50;
        case 0x242a54u: goto label_242a54;
        case 0x242a58u: goto label_242a58;
        case 0x242a5cu: goto label_242a5c;
        case 0x242a60u: goto label_242a60;
        case 0x242a64u: goto label_242a64;
        case 0x242a68u: goto label_242a68;
        case 0x242a6cu: goto label_242a6c;
        case 0x242a70u: goto label_242a70;
        case 0x242a74u: goto label_242a74;
        case 0x242a78u: goto label_242a78;
        case 0x242a7cu: goto label_242a7c;
        case 0x242a80u: goto label_242a80;
        case 0x242a84u: goto label_242a84;
        case 0x242a88u: goto label_242a88;
        case 0x242a8cu: goto label_242a8c;
        case 0x242a90u: goto label_242a90;
        case 0x242a94u: goto label_242a94;
        case 0x242a98u: goto label_242a98;
        case 0x242a9cu: goto label_242a9c;
        case 0x242aa0u: goto label_242aa0;
        case 0x242aa4u: goto label_242aa4;
        case 0x242aa8u: goto label_242aa8;
        case 0x242aacu: goto label_242aac;
        case 0x242ab0u: goto label_242ab0;
        case 0x242ab4u: goto label_242ab4;
        case 0x242ab8u: goto label_242ab8;
        case 0x242abcu: goto label_242abc;
        case 0x242ac0u: goto label_242ac0;
        case 0x242ac4u: goto label_242ac4;
        case 0x242ac8u: goto label_242ac8;
        case 0x242accu: goto label_242acc;
        case 0x242ad0u: goto label_242ad0;
        case 0x242ad4u: goto label_242ad4;
        case 0x242ad8u: goto label_242ad8;
        case 0x242adcu: goto label_242adc;
        case 0x242ae0u: goto label_242ae0;
        case 0x242ae4u: goto label_242ae4;
        case 0x242ae8u: goto label_242ae8;
        case 0x242aecu: goto label_242aec;
        case 0x242af0u: goto label_242af0;
        case 0x242af4u: goto label_242af4;
        case 0x242af8u: goto label_242af8;
        case 0x242afcu: goto label_242afc;
        case 0x242b00u: goto label_242b00;
        case 0x242b04u: goto label_242b04;
        case 0x242b08u: goto label_242b08;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b10u: goto label_242b10;
        case 0x242b14u: goto label_242b14;
        case 0x242b18u: goto label_242b18;
        case 0x242b1cu: goto label_242b1c;
        case 0x242b20u: goto label_242b20;
        case 0x242b24u: goto label_242b24;
        case 0x242b28u: goto label_242b28;
        case 0x242b2cu: goto label_242b2c;
        case 0x242b30u: goto label_242b30;
        case 0x242b34u: goto label_242b34;
        case 0x242b38u: goto label_242b38;
        case 0x242b3cu: goto label_242b3c;
        case 0x242b40u: goto label_242b40;
        case 0x242b44u: goto label_242b44;
        case 0x242b48u: goto label_242b48;
        case 0x242b4cu: goto label_242b4c;
        case 0x242b50u: goto label_242b50;
        case 0x242b54u: goto label_242b54;
        case 0x242b58u: goto label_242b58;
        case 0x242b5cu: goto label_242b5c;
        case 0x242b60u: goto label_242b60;
        case 0x242b64u: goto label_242b64;
        case 0x242b68u: goto label_242b68;
        case 0x242b6cu: goto label_242b6c;
        case 0x242b70u: goto label_242b70;
        case 0x242b74u: goto label_242b74;
        case 0x242b78u: goto label_242b78;
        case 0x242b7cu: goto label_242b7c;
        case 0x242b80u: goto label_242b80;
        case 0x242b84u: goto label_242b84;
        case 0x242b88u: goto label_242b88;
        case 0x242b8cu: goto label_242b8c;
        case 0x242b90u: goto label_242b90;
        case 0x242b94u: goto label_242b94;
        case 0x242b98u: goto label_242b98;
        case 0x242b9cu: goto label_242b9c;
        case 0x242ba0u: goto label_242ba0;
        case 0x242ba4u: goto label_242ba4;
        case 0x242ba8u: goto label_242ba8;
        case 0x242bacu: goto label_242bac;
        case 0x242bb0u: goto label_242bb0;
        case 0x242bb4u: goto label_242bb4;
        case 0x242bb8u: goto label_242bb8;
        case 0x242bbcu: goto label_242bbc;
        case 0x242bc0u: goto label_242bc0;
        case 0x242bc4u: goto label_242bc4;
        case 0x242bc8u: goto label_242bc8;
        case 0x242bccu: goto label_242bcc;
        case 0x242bd0u: goto label_242bd0;
        case 0x242bd4u: goto label_242bd4;
        case 0x242bd8u: goto label_242bd8;
        case 0x242bdcu: goto label_242bdc;
        case 0x242be0u: goto label_242be0;
        case 0x242be4u: goto label_242be4;
        case 0x242be8u: goto label_242be8;
        case 0x242becu: goto label_242bec;
        case 0x242bf0u: goto label_242bf0;
        case 0x242bf4u: goto label_242bf4;
        case 0x242bf8u: goto label_242bf8;
        case 0x242bfcu: goto label_242bfc;
        case 0x242c00u: goto label_242c00;
        case 0x242c04u: goto label_242c04;
        case 0x242c08u: goto label_242c08;
        case 0x242c0cu: goto label_242c0c;
        case 0x242c10u: goto label_242c10;
        case 0x242c14u: goto label_242c14;
        case 0x242c18u: goto label_242c18;
        case 0x242c1cu: goto label_242c1c;
        case 0x242c20u: goto label_242c20;
        case 0x242c24u: goto label_242c24;
        case 0x242c28u: goto label_242c28;
        case 0x242c2cu: goto label_242c2c;
        case 0x242c30u: goto label_242c30;
        case 0x242c34u: goto label_242c34;
        case 0x242c38u: goto label_242c38;
        case 0x242c3cu: goto label_242c3c;
        case 0x242c40u: goto label_242c40;
        case 0x242c44u: goto label_242c44;
        case 0x242c48u: goto label_242c48;
        case 0x242c4cu: goto label_242c4c;
        case 0x242c50u: goto label_242c50;
        case 0x242c54u: goto label_242c54;
        case 0x242c58u: goto label_242c58;
        case 0x242c5cu: goto label_242c5c;
        case 0x242c60u: goto label_242c60;
        case 0x242c64u: goto label_242c64;
        case 0x242c68u: goto label_242c68;
        case 0x242c6cu: goto label_242c6c;
        case 0x242c70u: goto label_242c70;
        case 0x242c74u: goto label_242c74;
        case 0x242c78u: goto label_242c78;
        case 0x242c7cu: goto label_242c7c;
        case 0x242c80u: goto label_242c80;
        case 0x242c84u: goto label_242c84;
        case 0x242c88u: goto label_242c88;
        case 0x242c8cu: goto label_242c8c;
        case 0x242c90u: goto label_242c90;
        case 0x242c94u: goto label_242c94;
        case 0x242c98u: goto label_242c98;
        case 0x242c9cu: goto label_242c9c;
        case 0x242ca0u: goto label_242ca0;
        case 0x242ca4u: goto label_242ca4;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cacu: goto label_242cac;
        case 0x242cb0u: goto label_242cb0;
        case 0x242cb4u: goto label_242cb4;
        case 0x242cb8u: goto label_242cb8;
        case 0x242cbcu: goto label_242cbc;
        case 0x242cc0u: goto label_242cc0;
        case 0x242cc4u: goto label_242cc4;
        case 0x242cc8u: goto label_242cc8;
        case 0x242cccu: goto label_242ccc;
        case 0x242cd0u: goto label_242cd0;
        case 0x242cd4u: goto label_242cd4;
        case 0x242cd8u: goto label_242cd8;
        case 0x242cdcu: goto label_242cdc;
        case 0x242ce0u: goto label_242ce0;
        case 0x242ce4u: goto label_242ce4;
        case 0x242ce8u: goto label_242ce8;
        case 0x242cecu: goto label_242cec;
        case 0x242cf0u: goto label_242cf0;
        case 0x242cf4u: goto label_242cf4;
        case 0x242cf8u: goto label_242cf8;
        case 0x242cfcu: goto label_242cfc;
        case 0x242d00u: goto label_242d00;
        case 0x242d04u: goto label_242d04;
        case 0x242d08u: goto label_242d08;
        case 0x242d0cu: goto label_242d0c;
        case 0x242d10u: goto label_242d10;
        case 0x242d14u: goto label_242d14;
        case 0x242d18u: goto label_242d18;
        case 0x242d1cu: goto label_242d1c;
        case 0x242d20u: goto label_242d20;
        case 0x242d24u: goto label_242d24;
        case 0x242d28u: goto label_242d28;
        case 0x242d2cu: goto label_242d2c;
        case 0x242d30u: goto label_242d30;
        case 0x242d34u: goto label_242d34;
        case 0x242d38u: goto label_242d38;
        case 0x242d3cu: goto label_242d3c;
        case 0x242d40u: goto label_242d40;
        case 0x242d44u: goto label_242d44;
        case 0x242d48u: goto label_242d48;
        case 0x242d4cu: goto label_242d4c;
        case 0x242d50u: goto label_242d50;
        case 0x242d54u: goto label_242d54;
        case 0x242d58u: goto label_242d58;
        case 0x242d5cu: goto label_242d5c;
        case 0x242d60u: goto label_242d60;
        case 0x242d64u: goto label_242d64;
        case 0x242d68u: goto label_242d68;
        case 0x242d6cu: goto label_242d6c;
        case 0x242d70u: goto label_242d70;
        case 0x242d74u: goto label_242d74;
        case 0x242d78u: goto label_242d78;
        case 0x242d7cu: goto label_242d7c;
        case 0x242d80u: goto label_242d80;
        case 0x242d84u: goto label_242d84;
        case 0x242d88u: goto label_242d88;
        case 0x242d8cu: goto label_242d8c;
        case 0x242d90u: goto label_242d90;
        case 0x242d94u: goto label_242d94;
        case 0x242d98u: goto label_242d98;
        case 0x242d9cu: goto label_242d9c;
        case 0x242da0u: goto label_242da0;
        case 0x242da4u: goto label_242da4;
        case 0x242da8u: goto label_242da8;
        case 0x242dacu: goto label_242dac;
        case 0x242db0u: goto label_242db0;
        case 0x242db4u: goto label_242db4;
        case 0x242db8u: goto label_242db8;
        case 0x242dbcu: goto label_242dbc;
        case 0x242dc0u: goto label_242dc0;
        case 0x242dc4u: goto label_242dc4;
        case 0x242dc8u: goto label_242dc8;
        case 0x242dccu: goto label_242dcc;
        case 0x242dd0u: goto label_242dd0;
        case 0x242dd4u: goto label_242dd4;
        case 0x242dd8u: goto label_242dd8;
        case 0x242ddcu: goto label_242ddc;
        case 0x242de0u: goto label_242de0;
        case 0x242de4u: goto label_242de4;
        case 0x242de8u: goto label_242de8;
        case 0x242decu: goto label_242dec;
        case 0x242df0u: goto label_242df0;
        case 0x242df4u: goto label_242df4;
        case 0x242df8u: goto label_242df8;
        case 0x242dfcu: goto label_242dfc;
        case 0x242e00u: goto label_242e00;
        case 0x242e04u: goto label_242e04;
        case 0x242e08u: goto label_242e08;
        case 0x242e0cu: goto label_242e0c;
        case 0x242e10u: goto label_242e10;
        case 0x242e14u: goto label_242e14;
        case 0x242e18u: goto label_242e18;
        case 0x242e1cu: goto label_242e1c;
        case 0x242e20u: goto label_242e20;
        case 0x242e24u: goto label_242e24;
        case 0x242e28u: goto label_242e28;
        case 0x242e2cu: goto label_242e2c;
        case 0x242e30u: goto label_242e30;
        case 0x242e34u: goto label_242e34;
        case 0x242e38u: goto label_242e38;
        case 0x242e3cu: goto label_242e3c;
        case 0x242e40u: goto label_242e40;
        case 0x242e44u: goto label_242e44;
        case 0x242e48u: goto label_242e48;
        case 0x242e4cu: goto label_242e4c;
        case 0x242e50u: goto label_242e50;
        case 0x242e54u: goto label_242e54;
        case 0x242e58u: goto label_242e58;
        case 0x242e5cu: goto label_242e5c;
        case 0x242e60u: goto label_242e60;
        case 0x242e64u: goto label_242e64;
        case 0x242e68u: goto label_242e68;
        case 0x242e6cu: goto label_242e6c;
        case 0x242e70u: goto label_242e70;
        case 0x242e74u: goto label_242e74;
        case 0x242e78u: goto label_242e78;
        case 0x242e7cu: goto label_242e7c;
        case 0x242e80u: goto label_242e80;
        case 0x242e84u: goto label_242e84;
        case 0x242e88u: goto label_242e88;
        case 0x242e8cu: goto label_242e8c;
        case 0x242e90u: goto label_242e90;
        case 0x242e94u: goto label_242e94;
        case 0x242e98u: goto label_242e98;
        case 0x242e9cu: goto label_242e9c;
        case 0x242ea0u: goto label_242ea0;
        case 0x242ea4u: goto label_242ea4;
        case 0x242ea8u: goto label_242ea8;
        case 0x242eacu: goto label_242eac;
        case 0x242eb0u: goto label_242eb0;
        case 0x242eb4u: goto label_242eb4;
        case 0x242eb8u: goto label_242eb8;
        case 0x242ebcu: goto label_242ebc;
        case 0x242ec0u: goto label_242ec0;
        case 0x242ec4u: goto label_242ec4;
        case 0x242ec8u: goto label_242ec8;
        case 0x242eccu: goto label_242ecc;
        case 0x242ed0u: goto label_242ed0;
        case 0x242ed4u: goto label_242ed4;
        case 0x242ed8u: goto label_242ed8;
        case 0x242edcu: goto label_242edc;
        case 0x242ee0u: goto label_242ee0;
        case 0x242ee4u: goto label_242ee4;
        case 0x242ee8u: goto label_242ee8;
        case 0x242eecu: goto label_242eec;
        case 0x242ef0u: goto label_242ef0;
        case 0x242ef4u: goto label_242ef4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242efcu: goto label_242efc;
        case 0x242f00u: goto label_242f00;
        case 0x242f04u: goto label_242f04;
        case 0x242f08u: goto label_242f08;
        case 0x242f0cu: goto label_242f0c;
        case 0x242f10u: goto label_242f10;
        case 0x242f14u: goto label_242f14;
        case 0x242f18u: goto label_242f18;
        case 0x242f1cu: goto label_242f1c;
        case 0x242f20u: goto label_242f20;
        case 0x242f24u: goto label_242f24;
        case 0x242f28u: goto label_242f28;
        case 0x242f2cu: goto label_242f2c;
        case 0x242f30u: goto label_242f30;
        case 0x242f34u: goto label_242f34;
        case 0x242f38u: goto label_242f38;
        case 0x242f3cu: goto label_242f3c;
        case 0x242f40u: goto label_242f40;
        case 0x242f44u: goto label_242f44;
        case 0x242f48u: goto label_242f48;
        case 0x242f4cu: goto label_242f4c;
        case 0x242f50u: goto label_242f50;
        case 0x242f54u: goto label_242f54;
        case 0x242f58u: goto label_242f58;
        case 0x242f5cu: goto label_242f5c;
        case 0x242f60u: goto label_242f60;
        case 0x242f64u: goto label_242f64;
        case 0x242f68u: goto label_242f68;
        case 0x242f6cu: goto label_242f6c;
        case 0x242f70u: goto label_242f70;
        case 0x242f74u: goto label_242f74;
        case 0x242f78u: goto label_242f78;
        case 0x242f7cu: goto label_242f7c;
        case 0x242f80u: goto label_242f80;
        case 0x242f84u: goto label_242f84;
        case 0x242f88u: goto label_242f88;
        case 0x242f8cu: goto label_242f8c;
        case 0x242f90u: goto label_242f90;
        case 0x242f94u: goto label_242f94;
        case 0x242f98u: goto label_242f98;
        case 0x242f9cu: goto label_242f9c;
        case 0x242fa0u: goto label_242fa0;
        case 0x242fa4u: goto label_242fa4;
        case 0x242fa8u: goto label_242fa8;
        case 0x242facu: goto label_242fac;
        case 0x242fb0u: goto label_242fb0;
        case 0x242fb4u: goto label_242fb4;
        case 0x242fb8u: goto label_242fb8;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        case 0x243018u: goto label_243018;
        case 0x24301cu: goto label_24301c;
        case 0x243020u: goto label_243020;
        case 0x243024u: goto label_243024;
        case 0x243028u: goto label_243028;
        case 0x24302cu: goto label_24302c;
        case 0x243030u: goto label_243030;
        case 0x243034u: goto label_243034;
        case 0x243038u: goto label_243038;
        case 0x24303cu: goto label_24303c;
        case 0x243040u: goto label_243040;
        case 0x243044u: goto label_243044;
        case 0x243048u: goto label_243048;
        case 0x24304cu: goto label_24304c;
        case 0x243050u: goto label_243050;
        case 0x243054u: goto label_243054;
        case 0x243058u: goto label_243058;
        case 0x24305cu: goto label_24305c;
        case 0x243060u: goto label_243060;
        case 0x243064u: goto label_243064;
        case 0x243068u: goto label_243068;
        case 0x24306cu: goto label_24306c;
        case 0x243070u: goto label_243070;
        case 0x243074u: goto label_243074;
        case 0x243078u: goto label_243078;
        case 0x24307cu: goto label_24307c;
        case 0x243080u: goto label_243080;
        case 0x243084u: goto label_243084;
        case 0x243088u: goto label_243088;
        case 0x24308cu: goto label_24308c;
        case 0x243090u: goto label_243090;
        case 0x243094u: goto label_243094;
        case 0x243098u: goto label_243098;
        case 0x24309cu: goto label_24309c;
        case 0x2430a0u: goto label_2430a0;
        case 0x2430a4u: goto label_2430a4;
        case 0x2430a8u: goto label_2430a8;
        case 0x2430acu: goto label_2430ac;
        case 0x2430b0u: goto label_2430b0;
        case 0x2430b4u: goto label_2430b4;
        case 0x2430b8u: goto label_2430b8;
        case 0x2430bcu: goto label_2430bc;
        case 0x2430c0u: goto label_2430c0;
        case 0x2430c4u: goto label_2430c4;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430ccu: goto label_2430cc;
        case 0x2430d0u: goto label_2430d0;
        case 0x2430d4u: goto label_2430d4;
        case 0x2430d8u: goto label_2430d8;
        case 0x2430dcu: goto label_2430dc;
        case 0x2430e0u: goto label_2430e0;
        case 0x2430e4u: goto label_2430e4;
        case 0x2430e8u: goto label_2430e8;
        case 0x2430ecu: goto label_2430ec;
        case 0x2430f0u: goto label_2430f0;
        case 0x2430f4u: goto label_2430f4;
        case 0x2430f8u: goto label_2430f8;
        case 0x2430fcu: goto label_2430fc;
        case 0x243100u: goto label_243100;
        case 0x243104u: goto label_243104;
        case 0x243108u: goto label_243108;
        case 0x24310cu: goto label_24310c;
        case 0x243110u: goto label_243110;
        case 0x243114u: goto label_243114;
        case 0x243118u: goto label_243118;
        case 0x24311cu: goto label_24311c;
        case 0x243120u: goto label_243120;
        case 0x243124u: goto label_243124;
        case 0x243128u: goto label_243128;
        case 0x24312cu: goto label_24312c;
        case 0x243130u: goto label_243130;
        case 0x243134u: goto label_243134;
        case 0x243138u: goto label_243138;
        case 0x24313cu: goto label_24313c;
        case 0x243140u: goto label_243140;
        case 0x243144u: goto label_243144;
        case 0x243148u: goto label_243148;
        case 0x24314cu: goto label_24314c;
        case 0x243150u: goto label_243150;
        case 0x243154u: goto label_243154;
        case 0x243158u: goto label_243158;
        case 0x24315cu: goto label_24315c;
        case 0x243160u: goto label_243160;
        case 0x243164u: goto label_243164;
        case 0x243168u: goto label_243168;
        case 0x24316cu: goto label_24316c;
        case 0x243170u: goto label_243170;
        case 0x243174u: goto label_243174;
        case 0x243178u: goto label_243178;
        case 0x24317cu: goto label_24317c;
        case 0x243180u: goto label_243180;
        case 0x243184u: goto label_243184;
        case 0x243188u: goto label_243188;
        case 0x24318cu: goto label_24318c;
        case 0x243190u: goto label_243190;
        case 0x243194u: goto label_243194;
        case 0x243198u: goto label_243198;
        case 0x24319cu: goto label_24319c;
        case 0x2431a0u: goto label_2431a0;
        case 0x2431a4u: goto label_2431a4;
        case 0x2431a8u: goto label_2431a8;
        case 0x2431acu: goto label_2431ac;
        case 0x2431b0u: goto label_2431b0;
        case 0x2431b4u: goto label_2431b4;
        case 0x2431b8u: goto label_2431b8;
        case 0x2431bcu: goto label_2431bc;
        case 0x2431c0u: goto label_2431c0;
        case 0x2431c4u: goto label_2431c4;
        case 0x2431c8u: goto label_2431c8;
        case 0x2431ccu: goto label_2431cc;
        case 0x2431d0u: goto label_2431d0;
        case 0x2431d4u: goto label_2431d4;
        case 0x2431d8u: goto label_2431d8;
        case 0x2431dcu: goto label_2431dc;
        case 0x2431e0u: goto label_2431e0;
        case 0x2431e4u: goto label_2431e4;
        case 0x2431e8u: goto label_2431e8;
        case 0x2431ecu: goto label_2431ec;
        case 0x2431f0u: goto label_2431f0;
        case 0x2431f4u: goto label_2431f4;
        case 0x2431f8u: goto label_2431f8;
        case 0x2431fcu: goto label_2431fc;
        case 0x243200u: goto label_243200;
        case 0x243204u: goto label_243204;
        case 0x243208u: goto label_243208;
        case 0x24320cu: goto label_24320c;
        case 0x243210u: goto label_243210;
        case 0x243214u: goto label_243214;
        case 0x243218u: goto label_243218;
        case 0x24321cu: goto label_24321c;
        case 0x243220u: goto label_243220;
        case 0x243224u: goto label_243224;
        case 0x243228u: goto label_243228;
        case 0x24322cu: goto label_24322c;
        case 0x243230u: goto label_243230;
        case 0x243234u: goto label_243234;
        case 0x243238u: goto label_243238;
        case 0x24323cu: goto label_24323c;
        case 0x243240u: goto label_243240;
        case 0x243244u: goto label_243244;
        case 0x243248u: goto label_243248;
        case 0x24324cu: goto label_24324c;
        case 0x243250u: goto label_243250;
        case 0x243254u: goto label_243254;
        case 0x243258u: goto label_243258;
        case 0x24325cu: goto label_24325c;
        case 0x243260u: goto label_243260;
        case 0x243264u: goto label_243264;
        case 0x243268u: goto label_243268;
        case 0x24326cu: goto label_24326c;
        case 0x243270u: goto label_243270;
        case 0x243274u: goto label_243274;
        case 0x243278u: goto label_243278;
        case 0x24327cu: goto label_24327c;
        case 0x243280u: goto label_243280;
        case 0x243284u: goto label_243284;
        case 0x243288u: goto label_243288;
        case 0x24328cu: goto label_24328c;
        case 0x243290u: goto label_243290;
        case 0x243294u: goto label_243294;
        case 0x243298u: goto label_243298;
        case 0x24329cu: goto label_24329c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432a8u: goto label_2432a8;
        case 0x2432acu: goto label_2432ac;
        case 0x2432b0u: goto label_2432b0;
        case 0x2432b4u: goto label_2432b4;
        default: break;
    }

    ctx->pc = 0x242960u;

label_242960:
    // 0x242960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x242960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_242964:
    // 0x242964: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x242964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_242968:
    // 0x242968: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x242968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_24296c:
    // 0x24296c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24296cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242970:
    // 0x242970: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x242970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_242974:
    // 0x242974: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x242974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_242978:
    // 0x242978: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x242978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_24297c:
    // 0x24297c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x24297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_242980:
    // 0x242980: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x242980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_242984:
    // 0x242984: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x242984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_242988:
    // 0x242988: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x242988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_24298c:
    // 0x24298c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x24298cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_242990:
    // 0x242990: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242994:
    // 0x242994: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x242994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_242998:
    // 0x242998: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x242998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_24299c:
    // 0x24299c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2429a0:
    if (ctx->pc == 0x2429A0u) {
        ctx->pc = 0x2429A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24299Cu;
        // 0x2429a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429A4u;
        goto label_2429a4;
    }
    ctx->pc = 0x24299Cu;
    {
        const bool branch_taken_0x24299c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24299Cu;
        // 0x2429a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24299c) {
            ctx->pc = 0x2429B4u;
            goto label_2429b4;
        }
    }
    ctx->pc = 0x2429A4u;
label_2429a4:
    // 0x2429a4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2429a8:
    if (ctx->pc == 0x2429A8u) {
        ctx->pc = 0x2429A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429A4u;
        // 0x2429a8: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429ACu;
        goto label_2429ac;
    }
    ctx->pc = 0x2429A4u;
    {
        const bool branch_taken_0x2429a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429A4u;
        // 0x2429a8: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429a4) {
            ctx->pc = 0x2429DCu;
            goto label_2429dc;
        }
    }
    ctx->pc = 0x2429ACu;
label_2429ac:
    // 0x2429ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_2429b0:
    if (ctx->pc == 0x2429B0u) {
        ctx->pc = 0x2429B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ACu;
        // 0x2429b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429B4u;
        goto label_2429b4;
    }
    ctx->pc = 0x2429ACu;
    {
        const bool branch_taken_0x2429ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ACu;
        // 0x2429b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429ac) {
            ctx->pc = 0x2429DCu;
            goto label_2429dc;
        }
    }
    ctx->pc = 0x2429B4u;
label_2429b4:
    // 0x2429b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2429b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2429b8:
    // 0x2429b8: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x2429b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_2429bc:
    // 0x2429bc: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2429bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_2429c0:
    // 0x2429c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2429c4:
    // 0x2429c4: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_2429c8:
    if (ctx->pc == 0x2429C8u) {
        ctx->pc = 0x2429C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429C4u;
        // 0x2429c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429CCu;
        goto label_2429cc;
    }
    ctx->pc = 0x2429C4u;
    {
        const bool branch_taken_0x2429c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2429C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429C4u;
        // 0x2429c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429c4) {
            ctx->pc = 0x2429ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2429ac;
        }
    }
    ctx->pc = 0x2429CCu;
label_2429cc:
    // 0x2429cc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2429ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_2429d0:
    // 0x2429d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2429d4:
    if (ctx->pc == 0x2429D4u) {
        ctx->pc = 0x2429D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429D0u;
        // 0x2429d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429D8u;
        goto label_2429d8;
    }
    ctx->pc = 0x2429D0u;
    {
        const bool branch_taken_0x2429d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2429D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429D0u;
        // 0x2429d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429d0) {
            ctx->pc = 0x2429C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2429c0;
        }
    }
    ctx->pc = 0x2429D8u;
label_2429d8:
    // 0x2429d8: 0x8cf201e8  lw          $s2, 0x1E8($a3)
    ctx->pc = 0x2429d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2429dc:
    // 0x2429dc: 0x24a567c8  addiu       $a1, $a1, 0x67C8
    ctx->pc = 0x2429dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26568));
label_2429e0:
    // 0x2429e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2429e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2429e4:
    // 0x2429e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2429e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2429e8:
    // 0x2429e8: 0xc073fde  jal         func_1CFF78
label_2429ec:
    if (ctx->pc == 0x2429ECu) {
        ctx->pc = 0x2429ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429E8u;
        // 0x2429ec: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429F0u;
        goto label_2429f0;
    }
    ctx->pc = 0x2429E8u;
    SET_GPR_U32(ctx, 31, 0x2429F0u);
    ctx->pc = 0x2429ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429E8u;
    // 0x2429ec: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2429E8u, 0x2429F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429F0u;
label_2429f0:
    // 0x2429f0: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x2429f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2429f4:
    // 0x2429f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2429f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2429f8:
    // 0x2429f8: 0x0  nop
    ctx->pc = 0x2429f8u;
    // NOP
label_2429fc:
    // 0x2429fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2429fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242a00:
    // 0x242a00: 0x0  nop
    ctx->pc = 0x242a00u;
    // NOP
label_242a04:
    // 0x242a04: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_242a08:
    if (ctx->pc == 0x242A08u) {
        ctx->pc = 0x242A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A04u;
        // 0x242a08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A0Cu;
        goto label_242a0c;
    }
    ctx->pc = 0x242A04u;
    {
        const bool branch_taken_0x242a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242a04) {
            ctx->pc = 0x242A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242A04u;
            // 0x242a08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242A0Cu;
            goto label_242a0c;
        }
    }
    ctx->pc = 0x242A0Cu;
label_242a0c:
    // 0x242a0c: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x242a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242a10:
    // 0x242a10: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x242a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_242a14:
    // 0x242a14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_242a18:
    if (ctx->pc == 0x242A18u) {
        ctx->pc = 0x242A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A14u;
        // 0x242a18: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A1Cu;
        goto label_242a1c;
    }
    ctx->pc = 0x242A14u;
    {
        const bool branch_taken_0x242a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A14u;
        // 0x242a18: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a14) {
            ctx->pc = 0x242A44u;
            goto label_242a44;
        }
    }
    ctx->pc = 0x242A1Cu;
label_242a1c:
    // 0x242a1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242a20:
    // 0x242a20: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x242a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_242a24:
    // 0x242a24: 0x0  nop
    ctx->pc = 0x242a24u;
    // NOP
label_242a28:
    // 0x242a28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242a2c:
    // 0x242a2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_242a30:
    if (ctx->pc == 0x242A30u) {
        ctx->pc = 0x242A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A2Cu;
        // 0x242a30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A34u;
        goto label_242a34;
    }
    ctx->pc = 0x242A2Cu;
    {
        const bool branch_taken_0x242a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A2Cu;
        // 0x242a30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a2c) {
            ctx->pc = 0x242A44u;
            goto label_242a44;
        }
    }
    ctx->pc = 0x242A34u;
label_242a34:
    // 0x242a34: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x242a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_242a38:
    // 0x242a38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_242a3c:
    if (ctx->pc == 0x242A3Cu) {
        ctx->pc = 0x242A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A38u;
        // 0x242a3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A40u;
        goto label_242a40;
    }
    ctx->pc = 0x242A38u;
    {
        const bool branch_taken_0x242a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A38u;
        // 0x242a3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a38) {
            ctx->pc = 0x242A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242a28;
        }
    }
    ctx->pc = 0x242A40u;
label_242a40:
    // 0x242a40: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x242a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_242a44:
    // 0x242a44: 0x8cc301e4  lw          $v1, 0x1E4($a2)
    ctx->pc = 0x242a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_242a48:
    // 0x242a48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_242a4c:
    if (ctx->pc == 0x242A4Cu) {
        ctx->pc = 0x242A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A48u;
        // 0x242a4c: 0xc455001c  lwc1        $f21, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A50u;
        goto label_242a50;
    }
    ctx->pc = 0x242A48u;
    {
        const bool branch_taken_0x242a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A48u;
        // 0x242a4c: 0xc455001c  lwc1        $f21, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a48) {
            ctx->pc = 0x242A58u;
            goto label_242a58;
        }
    }
    ctx->pc = 0x242A50u;
label_242a50:
    // 0x242a50: 0x1000000a  b           . + 4 + (0xA << 2)
label_242a54:
    if (ctx->pc == 0x242A54u) {
        ctx->pc = 0x242A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A50u;
        // 0x242a54: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A58u;
        goto label_242a58;
    }
    ctx->pc = 0x242A50u;
    {
        const bool branch_taken_0x242a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A50u;
        // 0x242a54: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a50) {
            ctx->pc = 0x242A7Cu;
            goto label_242a7c;
        }
    }
    ctx->pc = 0x242A58u;
label_242a58:
    // 0x242a58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242a5c:
    // 0x242a5c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x242a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_242a60:
    // 0x242a60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242a64:
    // 0x242a64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_242a68:
    if (ctx->pc == 0x242A68u) {
        ctx->pc = 0x242A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A64u;
        // 0x242a68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A6Cu;
        goto label_242a6c;
    }
    ctx->pc = 0x242A64u;
    {
        const bool branch_taken_0x242a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A64u;
        // 0x242a68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a64) {
            ctx->pc = 0x242A7Cu;
            goto label_242a7c;
        }
    }
    ctx->pc = 0x242A6Cu;
label_242a6c:
    // 0x242a6c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x242a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_242a70:
    // 0x242a70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_242a74:
    if (ctx->pc == 0x242A74u) {
        ctx->pc = 0x242A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A70u;
        // 0x242a74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A78u;
        goto label_242a78;
    }
    ctx->pc = 0x242A70u;
    {
        const bool branch_taken_0x242a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A70u;
        // 0x242a74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a70) {
            ctx->pc = 0x242A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242a60;
        }
    }
    ctx->pc = 0x242A78u;
label_242a78:
    // 0x242a78: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x242a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_242a7c:
    // 0x242a7c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x242a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_242a80:
    // 0x242a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242a84:
    // 0x242a84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x242a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242a88:
    // 0x242a88: 0xc0899bc  jal         func_2266F0
label_242a8c:
    if (ctx->pc == 0x242A8Cu) {
        ctx->pc = 0x242A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A88u;
        // 0x242a8c: 0xc4540010  lwc1        $f20, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A90u;
        goto label_242a90;
    }
    ctx->pc = 0x242A88u;
    SET_GPR_U32(ctx, 31, 0x242A90u);
    ctx->pc = 0x242A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A88u;
    // 0x242a8c: 0xc4540010  lwc1        $f20, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x242A88u, 0x242A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A90u;
label_242a90:
    // 0x242a90: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x242a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242a94:
    // 0x242a94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242a98:
    // 0x242a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242a9c:
    // 0x242a9c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x242a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_242aa0:
    // 0x242aa0: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x242aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
label_242aa4:
    // 0x242aa4: 0xc08da92  jal         func_236A48
label_242aa8:
    if (ctx->pc == 0x242AA8u) {
        ctx->pc = 0x242AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AA4u;
        // 0x242aa8: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AACu;
        goto label_242aac;
    }
    ctx->pc = 0x242AA4u;
    SET_GPR_U32(ctx, 31, 0x242AACu);
    ctx->pc = 0x242AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AA4u;
    // 0x242aa8: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x242AA4u, 0x242AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AACu;
label_242aac:
    // 0x242aac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_242ab0:
    if (ctx->pc == 0x242AB0u) {
        ctx->pc = 0x242AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AACu;
        // 0x242ab0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AB4u;
        goto label_242ab4;
    }
    ctx->pc = 0x242AACu;
    {
        const bool branch_taken_0x242aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242aac) {
            ctx->pc = 0x242AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242AACu;
            // 0x242ab0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242AC8u;
            goto label_242ac8;
        }
    }
    ctx->pc = 0x242AB4u;
label_242ab4:
    // 0x242ab4: 0xc097f26  jal         func_25FC98
label_242ab8:
    if (ctx->pc == 0x242AB8u) {
        ctx->pc = 0x242AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AB4u;
        // 0x242ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242ABCu;
        goto label_242abc;
    }
    ctx->pc = 0x242AB4u;
    SET_GPR_U32(ctx, 31, 0x242ABCu);
    ctx->pc = 0x242AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AB4u;
    // 0x242ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x242AB4u, 0x242ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242ABCu;
label_242abc:
    // 0x242abc: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x242abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_242ac0:
    // 0x242ac0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_242ac4:
    if (ctx->pc == 0x242AC4u) {
        ctx->pc = 0x242AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AC0u;
        // 0x242ac4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AC8u;
        goto label_242ac8;
    }
    ctx->pc = 0x242AC0u;
    {
        const bool branch_taken_0x242ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x242ac0) {
            ctx->pc = 0x242AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242AC0u;
            // 0x242ac4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242AC8u;
            goto label_242ac8;
        }
    }
    ctx->pc = 0x242AC8u;
label_242ac8:
    // 0x242ac8: 0x12a00089  beqz        $s5, . + 4 + (0x89 << 2)
label_242acc:
    if (ctx->pc == 0x242ACCu) {
        ctx->pc = 0x242ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AC8u;
        // 0x242acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AD0u;
        goto label_242ad0;
    }
    ctx->pc = 0x242AC8u;
    {
        const bool branch_taken_0x242ac8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x242ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AC8u;
        // 0x242acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ac8) {
            ctx->pc = 0x242CF0u;
            goto label_242cf0;
        }
    }
    ctx->pc = 0x242AD0u;
label_242ad0:
    // 0x242ad0: 0xc08a15a  jal         func_228568
label_242ad4:
    if (ctx->pc == 0x242AD4u) {
        ctx->pc = 0x242AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AD0u;
        // 0x242ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AD8u;
        goto label_242ad8;
    }
    ctx->pc = 0x242AD0u;
    SET_GPR_U32(ctx, 31, 0x242AD8u);
    ctx->pc = 0x242AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AD0u;
    // 0x242ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x242AD0u, 0x242AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AD8u;
label_242ad8:
    // 0x242ad8: 0x5660006a  bnel        $s3, $zero, . + 4 + (0x6A << 2)
label_242adc:
    if (ctx->pc == 0x242ADCu) {
        ctx->pc = 0x242ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AD8u;
        // 0x242adc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AE0u;
        goto label_242ae0;
    }
    ctx->pc = 0x242AD8u;
    {
        const bool branch_taken_0x242ad8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ad8) {
            ctx->pc = 0x242ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242AD8u;
            // 0x242adc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C84u;
            goto label_242c84;
        }
    }
    ctx->pc = 0x242AE0u;
label_242ae0:
    // 0x242ae0: 0x12800067  beqz        $s4, . + 4 + (0x67 << 2)
label_242ae4:
    if (ctx->pc == 0x242AE4u) {
        ctx->pc = 0x242AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AE0u;
        // 0x242ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AE8u;
        goto label_242ae8;
    }
    ctx->pc = 0x242AE0u;
    {
        const bool branch_taken_0x242ae0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x242AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AE0u;
        // 0x242ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ae0) {
            ctx->pc = 0x242C80u;
            goto label_242c80;
        }
    }
    ctx->pc = 0x242AE8u;
label_242ae8:
    // 0x242ae8: 0xc08dc16  jal         func_237058
label_242aec:
    if (ctx->pc == 0x242AECu) {
        ctx->pc = 0x242AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AE8u;
        // 0x242aec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AF0u;
        goto label_242af0;
    }
    ctx->pc = 0x242AE8u;
    SET_GPR_U32(ctx, 31, 0x242AF0u);
    ctx->pc = 0x242AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AE8u;
    // 0x242aec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x242AE8u, 0x242AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242AF0u;
label_242af0:
    // 0x242af0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x242af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242af4:
    // 0x242af4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_242af8:
    // 0x242af8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x242af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_242afc:
    // 0x242afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242b00:
    // 0x242b00: 0x0  nop
    ctx->pc = 0x242b00u;
    // NOP
label_242b04:
    // 0x242b04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242b08:
    // 0x242b08: 0x0  nop
    ctx->pc = 0x242b08u;
    // NOP
label_242b0c:
    // 0x242b0c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_242b10:
    if (ctx->pc == 0x242B10u) {
        ctx->pc = 0x242B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B0Cu;
        // 0x242b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B14u;
        goto label_242b14;
    }
    ctx->pc = 0x242B0Cu;
    {
        const bool branch_taken_0x242b0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B0Cu;
        // 0x242b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b0c) {
            ctx->pc = 0x242C6Cu;
            goto label_242c6c;
        }
    }
    ctx->pc = 0x242B14u;
label_242b14:
    // 0x242b14: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x242b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_242b18:
    // 0x242b18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_242b1c:
    // 0x242b1c: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
label_242b20:
    if (ctx->pc == 0x242B20u) {
        ctx->pc = 0x242B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B1Cu;
        // 0x242b20: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B24u;
        goto label_242b24;
    }
    ctx->pc = 0x242B1Cu;
    {
        const bool branch_taken_0x242b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242b1c) {
            ctx->pc = 0x242B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242B1Cu;
            // 0x242b20: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242B24u;
label_242b24:
    // 0x242b24: 0x8e320278  lw          $s2, 0x278($s1)
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_242b28:
    // 0x242b28: 0xc0b1488  jal         func_2C5220
label_242b2c:
    if (ctx->pc == 0x242B2Cu) {
        ctx->pc = 0x242B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B28u;
        // 0x242b2c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B30u;
        goto label_242b30;
    }
    ctx->pc = 0x242B28u;
    SET_GPR_U32(ctx, 31, 0x242B30u);
    ctx->pc = 0x242B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B28u;
    // 0x242b2c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x242B28u, 0x242B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B30u;
label_242b30:
    // 0x242b30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x242b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_242b34:
    // 0x242b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242b38:
    // 0x242b38: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x242b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_242b3c:
    // 0x242b3c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x242b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_242b40:
    // 0x242b40: 0x260303e0  addiu       $v1, $s0, 0x3E0
    ctx->pc = 0x242b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
label_242b44:
    // 0x242b44: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x242b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_242b48:
    // 0x242b48: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x242b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_242b4c:
    // 0x242b4c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x242b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_242b50:
    // 0x242b50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x242b50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_242b54:
    // 0x242b54: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x242b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242b58:
    // 0x242b58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x242b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242b5c:
    // 0x242b5c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x242b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_242b60:
    // 0x242b60: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x242b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242b64:
    // 0x242b64: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x242b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_242b68:
    // 0x242b68: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x242b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242b6c:
    // 0x242b6c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x242b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242b70:
    // 0x242b70: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x242b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242b74:
    // 0x242b74: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x242b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_242b78:
    // 0x242b78: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x242b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_242b7c:
    // 0x242b7c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x242b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_242b80:
    // 0x242b80: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x242b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_242b84:
    // 0x242b84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x242b84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242b88:
    // 0x242b88: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x242b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_242b8c:
    // 0x242b8c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x242b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242b90:
    // 0x242b90: 0x240407b4  addiu       $a0, $zero, 0x7B4
    ctx->pc = 0x242b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1972));
label_242b94:
    // 0x242b94: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x242b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_242b98:
    // 0x242b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242b9c:
    // 0x242b9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242ba0:
    // 0x242ba0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x242ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242ba4:
    // 0x242ba4: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_242ba8:
    if (ctx->pc == 0x242BA8u) {
        ctx->pc = 0x242BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA4u;
        // 0x242ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BACu;
        goto label_242bac;
    }
    ctx->pc = 0x242BA4u;
    {
        const bool branch_taken_0x242ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x242BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA4u;
        // 0x242ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ba4) {
            ctx->pc = 0x242BD0u;
            goto label_242bd0;
        }
    }
    ctx->pc = 0x242BACu;
label_242bac:
    // 0x242bac: 0x240207b6  addiu       $v0, $zero, 0x7B6
    ctx->pc = 0x242bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1974));
label_242bb0:
    // 0x242bb0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_242bb4:
    if (ctx->pc == 0x242BB4u) {
        ctx->pc = 0x242BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB0u;
        // 0x242bb4: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BB8u;
        goto label_242bb8;
    }
    ctx->pc = 0x242BB0u;
    {
        const bool branch_taken_0x242bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB0u;
        // 0x242bb4: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bb0) {
            ctx->pc = 0x242BD0u;
            goto label_242bd0;
        }
    }
    ctx->pc = 0x242BB8u;
label_242bb8:
    // 0x242bb8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_242bbc:
    if (ctx->pc == 0x242BBCu) {
        ctx->pc = 0x242BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB8u;
        // 0x242bbc: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BC0u;
        goto label_242bc0;
    }
    ctx->pc = 0x242BB8u;
    {
        const bool branch_taken_0x242bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BB8u;
        // 0x242bbc: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bb8) {
            ctx->pc = 0x242BD0u;
            goto label_242bd0;
        }
    }
    ctx->pc = 0x242BC0u;
label_242bc0:
    // 0x242bc0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_242bc4:
    if (ctx->pc == 0x242BC4u) {
        ctx->pc = 0x242BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BC0u;
        // 0x242bc4: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BC8u;
        goto label_242bc8;
    }
    ctx->pc = 0x242BC0u;
    {
        const bool branch_taken_0x242bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BC0u;
        // 0x242bc4: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bc0) {
            ctx->pc = 0x242BD0u;
            goto label_242bd0;
        }
    }
    ctx->pc = 0x242BC8u;
label_242bc8:
    // 0x242bc8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_242bcc:
    if (ctx->pc == 0x242BCCu) {
        ctx->pc = 0x242BD0u;
        goto label_242bd0;
    }
    ctx->pc = 0x242BC8u;
    {
        const bool branch_taken_0x242bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242bc8) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242BD0u;
label_242bd0:
    // 0x242bd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242bd4:
    // 0x242bd4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_242bd8:
    if (ctx->pc == 0x242BD8u) {
        ctx->pc = 0x242BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BD4u;
        // 0x242bd8: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BDCu;
        goto label_242bdc;
    }
    ctx->pc = 0x242BD4u;
    {
        const bool branch_taken_0x242bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BD4u;
        // 0x242bd8: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bd4) {
            ctx->pc = 0x242BF8u;
            goto label_242bf8;
        }
    }
    ctx->pc = 0x242BDCu;
label_242bdc:
    // 0x242bdc: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x242bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_242be0:
    // 0x242be0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x242be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_242be4:
    // 0x242be4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x242be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242be8:
    // 0x242be8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x242be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242bec:
    // 0x242bec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x242becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_242bf0:
    // 0x242bf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_242bf4:
    if (ctx->pc == 0x242BF4u) {
        ctx->pc = 0x242BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BF0u;
        // 0x242bf4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BF8u;
        goto label_242bf8;
    }
    ctx->pc = 0x242BF0u;
    {
        const bool branch_taken_0x242bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BF0u;
        // 0x242bf4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bf0) {
            ctx->pc = 0x242C10u;
            goto label_242c10;
        }
    }
    ctx->pc = 0x242BF8u;
label_242bf8:
    // 0x242bf8: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x242bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_242bfc:
    // 0x242bfc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x242bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_242c00:
    // 0x242c00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x242c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242c04:
    // 0x242c04: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x242c04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242c08:
    // 0x242c08: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x242c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_242c0c:
    // 0x242c0c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x242c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_242c10:
    // 0x242c10: 0x8e530010  lw          $s3, 0x10($s2)
    ctx->pc = 0x242c10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_242c14:
    // 0x242c14: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x242c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_242c18:
    // 0x242c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242c1c:
    // 0x242c1c: 0xc098b52  jal         func_262D48
label_242c20:
    if (ctx->pc == 0x242C20u) {
        ctx->pc = 0x242C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C1Cu;
        // 0x242c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C24u;
        goto label_242c24;
    }
    ctx->pc = 0x242C1Cu;
    SET_GPR_U32(ctx, 31, 0x242C24u);
    ctx->pc = 0x242C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C1Cu;
    // 0x242c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D48u, 0x242C1Cu, 0x242C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C24u;
label_242c24:
    // 0x242c24: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_242c28:
    // 0x242c28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_242c2c:
    if (ctx->pc == 0x242C2Cu) {
        ctx->pc = 0x242C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C28u;
        // 0x242c2c: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C30u;
        goto label_242c30;
    }
    ctx->pc = 0x242C28u;
    {
        const bool branch_taken_0x242c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c28) {
            ctx->pc = 0x242C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C28u;
            // 0x242c2c: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C54u;
            goto label_242c54;
        }
    }
    ctx->pc = 0x242C30u;
label_242c30:
    // 0x242c30: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x242c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_242c34:
    // 0x242c34: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x242c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_242c38:
    // 0x242c38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_242c3c:
    if (ctx->pc == 0x242C3Cu) {
        ctx->pc = 0x242C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C38u;
        // 0x242c3c: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C40u;
        goto label_242c40;
    }
    ctx->pc = 0x242C38u;
    {
        const bool branch_taken_0x242c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242c38) {
            ctx->pc = 0x242C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C38u;
            // 0x242c3c: 0xae530010  sw          $s3, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C54u;
            goto label_242c54;
        }
    }
    ctx->pc = 0x242C40u;
label_242c40:
    // 0x242c40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x242c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_242c44:
    // 0x242c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242c48:
    // 0x242c48: 0xc0ae6b8  jal         func_2B9AE0
label_242c4c:
    if (ctx->pc == 0x242C4Cu) {
        ctx->pc = 0x242C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C48u;
        // 0x242c4c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C50u;
        goto label_242c50;
    }
    ctx->pc = 0x242C48u;
    SET_GPR_U32(ctx, 31, 0x242C50u);
    ctx->pc = 0x242C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C48u;
    // 0x242c4c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x242C48u, 0x242C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C50u;
label_242c50:
    // 0x242c50: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x242c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
label_242c54:
    // 0x242c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242c58:
    // 0x242c58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242c5c:
    // 0x242c5c: 0xc08fed2  jal         func_23FB48
label_242c60:
    if (ctx->pc == 0x242C60u) {
        ctx->pc = 0x242C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C5Cu;
        // 0x242c60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C64u;
        goto label_242c64;
    }
    ctx->pc = 0x242C5Cu;
    SET_GPR_U32(ctx, 31, 0x242C64u);
    ctx->pc = 0x242C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C5Cu;
    // 0x242c60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242C5Cu, 0x242C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C64u;
label_242c64:
    // 0x242c64: 0x10000038  b           . + 4 + (0x38 << 2)
label_242c68:
    if (ctx->pc == 0x242C68u) {
        ctx->pc = 0x242C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C64u;
        // 0x242c68: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C6Cu;
        goto label_242c6c;
    }
    ctx->pc = 0x242C64u;
    {
        const bool branch_taken_0x242c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C64u;
        // 0x242c68: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c64) {
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242C6Cu;
label_242c6c:
    // 0x242c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242c70:
    // 0x242c70: 0xc08fed2  jal         func_23FB48
label_242c74:
    if (ctx->pc == 0x242C74u) {
        ctx->pc = 0x242C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C70u;
        // 0x242c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C78u;
        goto label_242c78;
    }
    ctx->pc = 0x242C70u;
    SET_GPR_U32(ctx, 31, 0x242C78u);
    ctx->pc = 0x242C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C70u;
    // 0x242c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242C70u, 0x242C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C78u;
label_242c78:
    // 0x242c78: 0x10000033  b           . + 4 + (0x33 << 2)
label_242c7c:
    if (ctx->pc == 0x242C7Cu) {
        ctx->pc = 0x242C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C78u;
        // 0x242c7c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C80u;
        goto label_242c80;
    }
    ctx->pc = 0x242C78u;
    {
        const bool branch_taken_0x242c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C78u;
        // 0x242c7c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c78) {
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242C80u;
label_242c80:
    // 0x242c80: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242c84:
    // 0x242c84: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x242c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_242c88:
    // 0x242c88: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_242c8c:
    // 0x242c8c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_242c90:
    if (ctx->pc == 0x242C90u) {
        ctx->pc = 0x242C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C8Cu;
        // 0x242c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C94u;
        goto label_242c94;
    }
    ctx->pc = 0x242C8Cu;
    {
        const bool branch_taken_0x242c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x242C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C8Cu;
        // 0x242c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c8c) {
            ctx->pc = 0x242CB4u;
            goto label_242cb4;
        }
    }
    ctx->pc = 0x242C94u;
label_242c94:
    // 0x242c94: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x242c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_242c98:
    // 0x242c98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x242c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_242c9c:
    // 0x242c9c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x242c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242ca0:
    // 0x242ca0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x242ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242ca4:
    // 0x242ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242ca8:
    // 0x242ca8: 0x0  nop
    ctx->pc = 0x242ca8u;
    // NOP
label_242cac:
    // 0x242cac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_242cb0:
    if (ctx->pc == 0x242CB0u) {
        ctx->pc = 0x242CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CACu;
        // 0x242cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CB4u;
        goto label_242cb4;
    }
    ctx->pc = 0x242CACu;
    {
        const bool branch_taken_0x242cac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242cac) {
            ctx->pc = 0x242CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242CACu;
            // 0x242cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242CB4u;
            goto label_242cb4;
        }
    }
    ctx->pc = 0x242CB4u;
label_242cb4:
    // 0x242cb4: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_242cb8:
    if (ctx->pc == 0x242CB8u) {
        ctx->pc = 0x242CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CB4u;
        // 0x242cb8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CBCu;
        goto label_242cbc;
    }
    ctx->pc = 0x242CB4u;
    {
        const bool branch_taken_0x242cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CB4u;
        // 0x242cb8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cb4) {
            ctx->pc = 0x242D44u;
            goto label_242d44;
        }
    }
    ctx->pc = 0x242CBCu;
label_242cbc:
    // 0x242cbc: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x242cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242cc0:
    // 0x242cc0: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x242cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_242cc4:
    // 0x242cc4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_242cc8:
    if (ctx->pc == 0x242CC8u) {
        ctx->pc = 0x242CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CC4u;
        // 0x242cc8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CCCu;
        goto label_242ccc;
    }
    ctx->pc = 0x242CC4u;
    {
        const bool branch_taken_0x242cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CC4u;
        // 0x242cc8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cc4) {
            ctx->pc = 0x242D44u;
            goto label_242d44;
        }
    }
    ctx->pc = 0x242CCCu;
label_242ccc:
    // 0x242ccc: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
label_242cd0:
    if (ctx->pc == 0x242CD0u) {
        ctx->pc = 0x242CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CCCu;
        // 0x242cd0: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CD4u;
        goto label_242cd4;
    }
    ctx->pc = 0x242CCCu;
    {
        const bool branch_taken_0x242ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x242ccc) {
            ctx->pc = 0x242CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242CCCu;
            // 0x242cd0: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242CD4u;
label_242cd4:
    // 0x242cd4: 0xc06b85c  jal         func_1AE170
label_242cd8:
    if (ctx->pc == 0x242CD8u) {
        ctx->pc = 0x242CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CD4u;
        // 0x242cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CDCu;
        goto label_242cdc;
    }
    ctx->pc = 0x242CD4u;
    SET_GPR_U32(ctx, 31, 0x242CDCu);
    ctx->pc = 0x242CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CD4u;
    // 0x242cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x242CD4u, 0x242CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CDCu;
label_242cdc:
    // 0x242cdc: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x242cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242ce0:
    // 0x242ce0: 0xc06bfc8  jal         func_1AFF20
label_242ce4:
    if (ctx->pc == 0x242CE4u) {
        ctx->pc = 0x242CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CE0u;
        // 0x242ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CE8u;
        goto label_242ce8;
    }
    ctx->pc = 0x242CE0u;
    SET_GPR_U32(ctx, 31, 0x242CE8u);
    ctx->pc = 0x242CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CE0u;
    // 0x242ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x242CE0u, 0x242CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CE8u;
label_242ce8:
    // 0x242ce8: 0x10000017  b           . + 4 + (0x17 << 2)
label_242cec:
    if (ctx->pc == 0x242CECu) {
        ctx->pc = 0x242CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CE8u;
        // 0x242cec: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CF0u;
        goto label_242cf0;
    }
    ctx->pc = 0x242CE8u;
    {
        const bool branch_taken_0x242ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CE8u;
        // 0x242cec: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ce8) {
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242CF0u;
label_242cf0:
    // 0x242cf0: 0xc08a15a  jal         func_228568
label_242cf4:
    if (ctx->pc == 0x242CF4u) {
        ctx->pc = 0x242CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CF0u;
        // 0x242cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CF8u;
        goto label_242cf8;
    }
    ctx->pc = 0x242CF0u;
    SET_GPR_U32(ctx, 31, 0x242CF8u);
    ctx->pc = 0x242CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CF0u;
    // 0x242cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x242CF0u, 0x242CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CF8u;
label_242cf8:
    // 0x242cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242cfc:
    // 0x242cfc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x242cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_242d00:
    // 0x242d00: 0xc08fed2  jal         func_23FB48
label_242d04:
    if (ctx->pc == 0x242D04u) {
        ctx->pc = 0x242D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D00u;
        // 0x242d04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D08u;
        goto label_242d08;
    }
    ctx->pc = 0x242D00u;
    SET_GPR_U32(ctx, 31, 0x242D08u);
    ctx->pc = 0x242D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D00u;
    // 0x242d04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242D00u, 0x242D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D08u;
label_242d08:
    // 0x242d08: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x242d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242d0c:
    // 0x242d0c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_242d10:
    // 0x242d10: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x242d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_242d14:
    // 0x242d14: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_242d18:
    if (ctx->pc == 0x242D18u) {
        ctx->pc = 0x242D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D14u;
        // 0x242d18: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D1Cu;
        goto label_242d1c;
    }
    ctx->pc = 0x242D14u;
    {
        const bool branch_taken_0x242d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242d14) {
            ctx->pc = 0x242D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D14u;
            // 0x242d18: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242D1Cu;
label_242d1c:
    // 0x242d1c: 0xc097f90  jal         func_25FE40
label_242d20:
    if (ctx->pc == 0x242D20u) {
        ctx->pc = 0x242D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D1Cu;
        // 0x242d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D24u;
        goto label_242d24;
    }
    ctx->pc = 0x242D1Cu;
    SET_GPR_U32(ctx, 31, 0x242D24u);
    ctx->pc = 0x242D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D1Cu;
    // 0x242d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x242D1Cu, 0x242D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D24u;
label_242d24:
    // 0x242d24: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_242d28:
    if (ctx->pc == 0x242D28u) {
        ctx->pc = 0x242D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D24u;
        // 0x242d28: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D2Cu;
        goto label_242d2c;
    }
    ctx->pc = 0x242D24u;
    {
        const bool branch_taken_0x242d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242d24) {
            ctx->pc = 0x242D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D24u;
            // 0x242d28: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242D2Cu;
label_242d2c:
    // 0x242d2c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x242d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242d30:
    // 0x242d30: 0xc06b85c  jal         func_1AE170
label_242d34:
    if (ctx->pc == 0x242D34u) {
        ctx->pc = 0x242D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D30u;
        // 0x242d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D38u;
        goto label_242d38;
    }
    ctx->pc = 0x242D30u;
    SET_GPR_U32(ctx, 31, 0x242D38u);
    ctx->pc = 0x242D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D30u;
    // 0x242d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x242D30u, 0x242D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D38u;
label_242d38:
    // 0x242d38: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x242d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242d3c:
    // 0x242d3c: 0xc06bfc8  jal         func_1AFF20
label_242d40:
    if (ctx->pc == 0x242D40u) {
        ctx->pc = 0x242D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D3Cu;
        // 0x242d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D44u;
        goto label_242d44;
    }
    ctx->pc = 0x242D3Cu;
    SET_GPR_U32(ctx, 31, 0x242D44u);
    ctx->pc = 0x242D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D3Cu;
    // 0x242d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x242D3Cu, 0x242D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D44u;
label_242d44:
    // 0x242d44: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x242d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_242d48:
    // 0x242d48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x242d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_242d4c:
    // 0x242d4c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_242d50:
    if (ctx->pc == 0x242D50u) {
        ctx->pc = 0x242D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D4Cu;
        // 0x242d50: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D54u;
        goto label_242d54;
    }
    ctx->pc = 0x242D4Cu;
    {
        const bool branch_taken_0x242d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D4Cu;
        // 0x242d50: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d4c) {
            ctx->pc = 0x242E08u;
            goto label_242e08;
        }
    }
    ctx->pc = 0x242D54u;
label_242d54:
    // 0x242d54: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_242d58:
    if (ctx->pc == 0x242D58u) {
        ctx->pc = 0x242D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D54u;
        // 0x242d58: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D5Cu;
        goto label_242d5c;
    }
    ctx->pc = 0x242D54u;
    {
        const bool branch_taken_0x242d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D54u;
        // 0x242d58: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d54) {
            ctx->pc = 0x242E08u;
            goto label_242e08;
        }
    }
    ctx->pc = 0x242D5Cu;
label_242d5c:
    // 0x242d5c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_242d60:
    if (ctx->pc == 0x242D60u) {
        ctx->pc = 0x242D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D5Cu;
        // 0x242d60: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D64u;
        goto label_242d64;
    }
    ctx->pc = 0x242D5Cu;
    {
        const bool branch_taken_0x242d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D5Cu;
        // 0x242d60: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d5c) {
            ctx->pc = 0x242E08u;
            goto label_242e08;
        }
    }
    ctx->pc = 0x242D64u;
label_242d64:
    // 0x242d64: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
label_242d68:
    if (ctx->pc == 0x242D68u) {
        ctx->pc = 0x242D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D64u;
        // 0x242d68: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D6Cu;
        goto label_242d6c;
    }
    ctx->pc = 0x242D64u;
    {
        const bool branch_taken_0x242d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x242d64) {
            ctx->pc = 0x242D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D64u;
            // 0x242d68: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E0Cu;
            goto label_242e0c;
        }
    }
    ctx->pc = 0x242D6Cu;
label_242d6c:
    // 0x242d6c: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x242d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242d70:
    // 0x242d70: 0x0  nop
    ctx->pc = 0x242d70u;
    // NOP
label_242d74:
    // 0x242d74: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_242d78:
    if (ctx->pc == 0x242D78u) {
        ctx->pc = 0x242D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D74u;
        // 0x242d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D7Cu;
        goto label_242d7c;
    }
    ctx->pc = 0x242D74u;
    {
        const bool branch_taken_0x242d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D74u;
        // 0x242d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d74) {
            ctx->pc = 0x242E90u;
            goto label_242e90;
        }
    }
    ctx->pc = 0x242D7Cu;
label_242d7c:
    // 0x242d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242d80:
    // 0x242d80: 0xc08bf70  jal         func_22FDC0
label_242d84:
    if (ctx->pc == 0x242D84u) {
        ctx->pc = 0x242D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D80u;
        // 0x242d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D88u;
        goto label_242d88;
    }
    ctx->pc = 0x242D80u;
    SET_GPR_U32(ctx, 31, 0x242D88u);
    ctx->pc = 0x242D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D80u;
    // 0x242d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x242D80u, 0x242D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D88u;
label_242d88:
    // 0x242d88: 0xc069992  jal         func_1A6648
label_242d8c:
    if (ctx->pc == 0x242D8Cu) {
        ctx->pc = 0x242D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D88u;
        // 0x242d8c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D90u;
        goto label_242d90;
    }
    ctx->pc = 0x242D88u;
    SET_GPR_U32(ctx, 31, 0x242D90u);
    ctx->pc = 0x242D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D88u;
    // 0x242d8c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6648u, 0x242D88u, 0x242D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D90u;
label_242d90:
    // 0x242d90: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x242d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242d94:
    // 0x242d94: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x242d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_242d98:
    // 0x242d98: 0x284207bc  slti        $v0, $v0, 0x7BC
    ctx->pc = 0x242d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1980) ? 1 : 0);
label_242d9c:
    // 0x242d9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_242da0:
    if (ctx->pc == 0x242DA0u) {
        ctx->pc = 0x242DA4u;
        goto label_242da4;
    }
    ctx->pc = 0x242D9Cu;
    {
        const bool branch_taken_0x242d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242d9c) {
            ctx->pc = 0x242DB4u;
            goto label_242db4;
        }
    }
    ctx->pc = 0x242DA4u;
label_242da4:
    // 0x242da4: 0xc06a05e  jal         func_1A8178
label_242da8:
    if (ctx->pc == 0x242DA8u) {
        ctx->pc = 0x242DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DA4u;
        // 0x242da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DACu;
        goto label_242dac;
    }
    ctx->pc = 0x242DA4u;
    SET_GPR_U32(ctx, 31, 0x242DACu);
    ctx->pc = 0x242DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DA4u;
    // 0x242da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x242DA4u, 0x242DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DACu;
label_242dac:
    // 0x242dac: 0x1000000b  b           . + 4 + (0xB << 2)
label_242db0:
    if (ctx->pc == 0x242DB0u) {
        ctx->pc = 0x242DB4u;
        goto label_242db4;
    }
    ctx->pc = 0x242DACu;
    {
        const bool branch_taken_0x242dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242dac) {
            ctx->pc = 0x242DDCu;
            goto label_242ddc;
        }
    }
    ctx->pc = 0x242DB4u;
label_242db4:
    // 0x242db4: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_242db8:
    if (ctx->pc == 0x242DB8u) {
        ctx->pc = 0x242DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DB4u;
        // 0x242db8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DBCu;
        goto label_242dbc;
    }
    ctx->pc = 0x242DB4u;
    {
        const bool branch_taken_0x242db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x242db4) {
            ctx->pc = 0x242DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242DB4u;
            // 0x242db8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242DD4u;
            goto label_242dd4;
        }
    }
    ctx->pc = 0x242DBCu;
label_242dbc:
    // 0x242dbc: 0xc097f26  jal         func_25FC98
label_242dc0:
    if (ctx->pc == 0x242DC0u) {
        ctx->pc = 0x242DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DBCu;
        // 0x242dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DC4u;
        goto label_242dc4;
    }
    ctx->pc = 0x242DBCu;
    SET_GPR_U32(ctx, 31, 0x242DC4u);
    ctx->pc = 0x242DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DBCu;
    // 0x242dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x242DBCu, 0x242DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DC4u;
label_242dc4:
    // 0x242dc4: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x242dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_242dc8:
    // 0x242dc8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_242dcc:
    if (ctx->pc == 0x242DCCu) {
        ctx->pc = 0x242DD0u;
        goto label_242dd0;
    }
    ctx->pc = 0x242DC8u;
    {
        const bool branch_taken_0x242dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x242dc8) {
            ctx->pc = 0x242DDCu;
            goto label_242ddc;
        }
    }
    ctx->pc = 0x242DD0u;
label_242dd0:
    // 0x242dd0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x242dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242dd4:
    // 0x242dd4: 0xc06a05e  jal         func_1A8178
label_242dd8:
    if (ctx->pc == 0x242DD8u) {
        ctx->pc = 0x242DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DD4u;
        // 0x242dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DDCu;
        goto label_242ddc;
    }
    ctx->pc = 0x242DD4u;
    SET_GPR_U32(ctx, 31, 0x242DDCu);
    ctx->pc = 0x242DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DD4u;
    // 0x242dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x242DD4u, 0x242DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DDCu;
label_242ddc:
    // 0x242ddc: 0xc06a328  jal         func_1A8CA0
label_242de0:
    if (ctx->pc == 0x242DE0u) {
        ctx->pc = 0x242DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DDCu;
        // 0x242de0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DE4u;
        goto label_242de4;
    }
    ctx->pc = 0x242DDCu;
    SET_GPR_U32(ctx, 31, 0x242DE4u);
    ctx->pc = 0x242DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DDCu;
    // 0x242de0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x242DDCu, 0x242DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DE4u;
label_242de4:
    // 0x242de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242de8:
    // 0x242de8: 0xc08bdc6  jal         func_22F718
label_242dec:
    if (ctx->pc == 0x242DECu) {
        ctx->pc = 0x242DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DE8u;
        // 0x242dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DF0u;
        goto label_242df0;
    }
    ctx->pc = 0x242DE8u;
    SET_GPR_U32(ctx, 31, 0x242DF0u);
    ctx->pc = 0x242DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DE8u;
    // 0x242dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x242DE8u, 0x242DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DF0u;
label_242df0:
    // 0x242df0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x242df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_242df4:
    // 0x242df4: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x242df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_242df8:
    // 0x242df8: 0x40f809  jalr        $v0
label_242dfc:
    if (ctx->pc == 0x242DFCu) {
        ctx->pc = 0x242DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF8u;
        // 0x242dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E00u;
        goto label_242e00;
    }
    ctx->pc = 0x242DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242E00u);
        ctx->pc = 0x242DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF8u;
        // 0x242dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242DF8u, 0x242E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242E00u;
label_242e00:
    // 0x242e00: 0x10000123  b           . + 4 + (0x123 << 2)
label_242e04:
    if (ctx->pc == 0x242E04u) {
        ctx->pc = 0x242E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E00u;
        // 0x242e04: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E08u;
        goto label_242e08;
    }
    ctx->pc = 0x242E00u;
    {
        const bool branch_taken_0x242e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E00u;
        // 0x242e04: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e00) {
            ctx->pc = 0x243290u;
            goto label_243290;
        }
    }
    ctx->pc = 0x242E08u;
label_242e08:
    // 0x242e08: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x242e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242e0c:
    // 0x242e0c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_242e10:
    // 0x242e10: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x242e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_242e14:
    // 0x242e14: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
label_242e18:
    if (ctx->pc == 0x242E18u) {
        ctx->pc = 0x242E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E14u;
        // 0x242e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E1Cu;
        goto label_242e1c;
    }
    ctx->pc = 0x242E14u;
    {
        const bool branch_taken_0x242e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x242E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E14u;
        // 0x242e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e14) {
            ctx->pc = 0x242E54u;
            goto label_242e54;
        }
    }
    ctx->pc = 0x242E1Cu;
label_242e1c:
    // 0x242e1c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x242e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_242e20:
    // 0x242e20: 0xc08fed2  jal         func_23FB48
label_242e24:
    if (ctx->pc == 0x242E24u) {
        ctx->pc = 0x242E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E20u;
        // 0x242e24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E28u;
        goto label_242e28;
    }
    ctx->pc = 0x242E20u;
    SET_GPR_U32(ctx, 31, 0x242E28u);
    ctx->pc = 0x242E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E20u;
    // 0x242e24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242E20u, 0x242E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E28u;
label_242e28:
    // 0x242e28: 0xc08dada  jal         func_236B68
label_242e2c:
    if (ctx->pc == 0x242E2Cu) {
        ctx->pc = 0x242E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E28u;
        // 0x242e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E30u;
        goto label_242e30;
    }
    ctx->pc = 0x242E28u;
    SET_GPR_U32(ctx, 31, 0x242E30u);
    ctx->pc = 0x242E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E28u;
    // 0x242e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x242E28u, 0x242E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E30u;
label_242e30:
    // 0x242e30: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_242e34:
    if (ctx->pc == 0x242E34u) {
        ctx->pc = 0x242E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E30u;
        // 0x242e34: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E38u;
        goto label_242e38;
    }
    ctx->pc = 0x242E30u;
    {
        const bool branch_taken_0x242e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e30) {
            ctx->pc = 0x242E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E30u;
            // 0x242e34: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E94u;
            goto label_242e94;
        }
    }
    ctx->pc = 0x242E38u;
label_242e38:
    // 0x242e38: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x242e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_242e3c:
    // 0x242e3c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x242e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_242e40:
    // 0x242e40: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x242e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_242e44:
    // 0x242e44: 0x40f809  jalr        $v0
label_242e48:
    if (ctx->pc == 0x242E48u) {
        ctx->pc = 0x242E4Cu;
        goto label_242e4c;
    }
    ctx->pc = 0x242E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242E4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E44u, 0x242E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242E4Cu;
label_242e4c:
    // 0x242e4c: 0x10000011  b           . + 4 + (0x11 << 2)
label_242e50:
    if (ctx->pc == 0x242E50u) {
        ctx->pc = 0x242E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E4Cu;
        // 0x242e50: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E54u;
        goto label_242e54;
    }
    ctx->pc = 0x242E4Cu;
    {
        const bool branch_taken_0x242e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E4Cu;
        // 0x242e50: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e4c) {
            ctx->pc = 0x242E94u;
            goto label_242e94;
        }
    }
    ctx->pc = 0x242E54u;
label_242e54:
    // 0x242e54: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x242e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_242e58:
    // 0x242e58: 0xc08fed2  jal         func_23FB48
label_242e5c:
    if (ctx->pc == 0x242E5Cu) {
        ctx->pc = 0x242E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E58u;
        // 0x242e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E60u;
        goto label_242e60;
    }
    ctx->pc = 0x242E58u;
    SET_GPR_U32(ctx, 31, 0x242E60u);
    ctx->pc = 0x242E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E58u;
    // 0x242e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242E58u, 0x242E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E60u;
label_242e60:
    // 0x242e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242e64:
    // 0x242e64: 0xc08a15a  jal         func_228568
label_242e68:
    if (ctx->pc == 0x242E68u) {
        ctx->pc = 0x242E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E64u;
        // 0x242e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E6Cu;
        goto label_242e6c;
    }
    ctx->pc = 0x242E64u;
    SET_GPR_U32(ctx, 31, 0x242E6Cu);
    ctx->pc = 0x242E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E64u;
    // 0x242e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x242E64u, 0x242E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E6Cu;
label_242e6c:
    // 0x242e6c: 0xc08dada  jal         func_236B68
label_242e70:
    if (ctx->pc == 0x242E70u) {
        ctx->pc = 0x242E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E6Cu;
        // 0x242e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E74u;
        goto label_242e74;
    }
    ctx->pc = 0x242E6Cu;
    SET_GPR_U32(ctx, 31, 0x242E74u);
    ctx->pc = 0x242E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E6Cu;
    // 0x242e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x242E6Cu, 0x242E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E74u;
label_242e74:
    // 0x242e74: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_242e78:
    if (ctx->pc == 0x242E78u) {
        ctx->pc = 0x242E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E74u;
        // 0x242e78: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E7Cu;
        goto label_242e7c;
    }
    ctx->pc = 0x242E74u;
    {
        const bool branch_taken_0x242e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e74) {
            ctx->pc = 0x242E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E74u;
            // 0x242e78: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E94u;
            goto label_242e94;
        }
    }
    ctx->pc = 0x242E7Cu;
label_242e7c:
    // 0x242e7c: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x242e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_242e80:
    // 0x242e80: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x242e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_242e84:
    // 0x242e84: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x242e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_242e88:
    // 0x242e88: 0x40f809  jalr        $v0
label_242e8c:
    if (ctx->pc == 0x242E8Cu) {
        ctx->pc = 0x242E90u;
        goto label_242e90;
    }
    ctx->pc = 0x242E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242E90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E88u, 0x242E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242E90u;
label_242e90:
    // 0x242e90: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x242e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242e94:
    // 0x242e94: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x242e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_242e98:
    // 0x242e98: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x242e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_242e9c:
    // 0x242e9c: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
label_242ea0:
    if (ctx->pc == 0x242EA0u) {
        ctx->pc = 0x242EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E9Cu;
        // 0x242ea0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EA4u;
        goto label_242ea4;
    }
    ctx->pc = 0x242E9Cu;
    {
        const bool branch_taken_0x242e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x242e9c) {
            ctx->pc = 0x242EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E9Cu;
            // 0x242ea0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EC4u;
            goto label_242ec4;
        }
    }
    ctx->pc = 0x242EA4u;
label_242ea4:
    // 0x242ea4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x242ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_242ea8:
    // 0x242ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_242eac:
    // 0x242eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242eb0:
    // 0x242eb0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x242eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242eb4:
    // 0x242eb4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x242eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_242eb8:
    // 0x242eb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x242eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_242ebc:
    // 0x242ebc: 0x10000005  b           . + 4 + (0x5 << 2)
label_242ec0:
    if (ctx->pc == 0x242EC0u) {
        ctx->pc = 0x242EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EBCu;
        // 0x242ec0: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EC4u;
        goto label_242ec4;
    }
    ctx->pc = 0x242EBCu;
    {
        const bool branch_taken_0x242ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EBCu;
        // 0x242ec0: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ebc) {
            ctx->pc = 0x242ED4u;
            goto label_242ed4;
        }
    }
    ctx->pc = 0x242EC4u;
label_242ec4:
    // 0x242ec4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x242ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_242ec8:
    // 0x242ec8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x242ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242ecc:
    // 0x242ecc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x242eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_242ed0:
    // 0x242ed0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x242ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_242ed4:
    // 0x242ed4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x242ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242ed8:
    // 0x242ed8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x242ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242edc:
    // 0x242edc: 0xe4400174  swc1        $f0, 0x174($v0)
    ctx->pc = 0x242edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_242ee0:
    // 0x242ee0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x242ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242ee4:
    // 0x242ee4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_242ee8:
    if (ctx->pc == 0x242EE8u) {
        ctx->pc = 0x242EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EE4u;
        // 0x242ee8: 0xe4410178  swc1        $f1, 0x178($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EECu;
        goto label_242eec;
    }
    ctx->pc = 0x242EE4u;
    {
        const bool branch_taken_0x242ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EE4u;
        // 0x242ee8: 0xe4410178  swc1        $f1, 0x178($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ee4) {
            ctx->pc = 0x242F5Cu;
            goto label_242f5c;
        }
    }
    ctx->pc = 0x242EECu;
label_242eec:
    // 0x242eec: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x242eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_242ef0:
    // 0x242ef0: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x242ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
label_242ef4:
    // 0x242ef4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_242ef8:
    if (ctx->pc == 0x242EF8u) {
        ctx->pc = 0x242EFCu;
        goto label_242efc;
    }
    ctx->pc = 0x242EF4u;
    {
        const bool branch_taken_0x242ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ef4) {
            ctx->pc = 0x242F5Cu;
            goto label_242f5c;
        }
    }
    ctx->pc = 0x242EFCu;
label_242efc:
    // 0x242efc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x242efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_242f00:
    // 0x242f00: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x242f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_242f04:
    // 0x242f04: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_242f08:
    if (ctx->pc == 0x242F08u) {
        ctx->pc = 0x242F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F04u;
        // 0x242f08: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F0Cu;
        goto label_242f0c;
    }
    ctx->pc = 0x242F04u;
    {
        const bool branch_taken_0x242f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F04u;
        // 0x242f08: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f04) {
            ctx->pc = 0x242F5Cu;
            goto label_242f5c;
        }
    }
    ctx->pc = 0x242F0Cu;
label_242f0c:
    // 0x242f0c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x242f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242f10:
    // 0x242f10: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x242f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_242f14:
    // 0x242f14: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_242f18:
    if (ctx->pc == 0x242F18u) {
        ctx->pc = 0x242F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F14u;
        // 0x242f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F1Cu;
        goto label_242f1c;
    }
    ctx->pc = 0x242F14u;
    {
        const bool branch_taken_0x242f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x242F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F14u;
        // 0x242f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f14) {
            ctx->pc = 0x242F3Cu;
            goto label_242f3c;
        }
    }
    ctx->pc = 0x242F1Cu;
label_242f1c:
    // 0x242f1c: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x242f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_242f20:
    // 0x242f20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x242f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_242f24:
    // 0x242f24: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x242f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242f28:
    // 0x242f28: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x242f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242f2c:
    // 0x242f2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242f30:
    // 0x242f30: 0x0  nop
    ctx->pc = 0x242f30u;
    // NOP
label_242f34:
    // 0x242f34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_242f38:
    if (ctx->pc == 0x242F38u) {
        ctx->pc = 0x242F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F34u;
        // 0x242f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F3Cu;
        goto label_242f3c;
    }
    ctx->pc = 0x242F34u;
    {
        const bool branch_taken_0x242f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242f34) {
            ctx->pc = 0x242F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F34u;
            // 0x242f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242F3Cu;
            goto label_242f3c;
        }
    }
    ctx->pc = 0x242F3Cu;
label_242f3c:
    // 0x242f3c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_242f40:
    if (ctx->pc == 0x242F40u) {
        ctx->pc = 0x242F44u;
        goto label_242f44;
    }
    ctx->pc = 0x242F3Cu;
    {
        const bool branch_taken_0x242f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f3c) {
            ctx->pc = 0x242F54u;
            goto label_242f54;
        }
    }
    ctx->pc = 0x242F44u;
label_242f44:
    // 0x242f44: 0xc09854c  jal         func_261530
label_242f48:
    if (ctx->pc == 0x242F48u) {
        ctx->pc = 0x242F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F44u;
        // 0x242f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F4Cu;
        goto label_242f4c;
    }
    ctx->pc = 0x242F44u;
    SET_GPR_U32(ctx, 31, 0x242F4Cu);
    ctx->pc = 0x242F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F44u;
    // 0x242f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261530u, 0x242F44u, 0x242F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F4Cu;
label_242f4c:
    // 0x242f4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_242f50:
    if (ctx->pc == 0x242F50u) {
        ctx->pc = 0x242F54u;
        goto label_242f54;
    }
    ctx->pc = 0x242F4Cu;
    {
        const bool branch_taken_0x242f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f4c) {
            ctx->pc = 0x242F5Cu;
            goto label_242f5c;
        }
    }
    ctx->pc = 0x242F54u;
label_242f54:
    // 0x242f54: 0xc098554  jal         func_261550
label_242f58:
    if (ctx->pc == 0x242F58u) {
        ctx->pc = 0x242F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F54u;
        // 0x242f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F5Cu;
        goto label_242f5c;
    }
    ctx->pc = 0x242F54u;
    SET_GPR_U32(ctx, 31, 0x242F5Cu);
    ctx->pc = 0x242F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F54u;
    // 0x242f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261550u, 0x242F54u, 0x242F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F5Cu;
label_242f5c:
    // 0x242f5c: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
label_242f60:
    if (ctx->pc == 0x242F60u) {
        ctx->pc = 0x242F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F5Cu;
        // 0x242f60: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F64u;
        goto label_242f64;
    }
    ctx->pc = 0x242F5Cu;
    {
        const bool branch_taken_0x242f5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f5c) {
            ctx->pc = 0x242F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F5Cu;
            // 0x242f60: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242F84u;
            goto label_242f84;
        }
    }
    ctx->pc = 0x242F64u;
label_242f64:
    // 0x242f64: 0x522000ca  beql        $s1, $zero, . + 4 + (0xCA << 2)
label_242f68:
    if (ctx->pc == 0x242F68u) {
        ctx->pc = 0x242F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F64u;
        // 0x242f68: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F6Cu;
        goto label_242f6c;
    }
    ctx->pc = 0x242F64u;
    {
        const bool branch_taken_0x242f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f64) {
            ctx->pc = 0x242F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F64u;
            // 0x242f68: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243290u;
            goto label_243290;
        }
    }
    ctx->pc = 0x242F6Cu;
label_242f6c:
    // 0x242f6c: 0xc097f26  jal         func_25FC98
label_242f70:
    if (ctx->pc == 0x242F70u) {
        ctx->pc = 0x242F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F6Cu;
        // 0x242f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F74u;
        goto label_242f74;
    }
    ctx->pc = 0x242F6Cu;
    SET_GPR_U32(ctx, 31, 0x242F74u);
    ctx->pc = 0x242F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F6Cu;
    // 0x242f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x242F6Cu, 0x242F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F74u;
label_242f74:
    // 0x242f74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x242f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_242f78:
    // 0x242f78: 0x544300c5  bnel        $v0, $v1, . + 4 + (0xC5 << 2)
label_242f7c:
    if (ctx->pc == 0x242F7Cu) {
        ctx->pc = 0x242F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F78u;
        // 0x242f7c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F80u;
        goto label_242f80;
    }
    ctx->pc = 0x242F78u;
    {
        const bool branch_taken_0x242f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x242f78) {
            ctx->pc = 0x242F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F78u;
            // 0x242f7c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243290u;
            goto label_243290;
        }
    }
    ctx->pc = 0x242F80u;
label_242f80:
    // 0x242f80: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242f84:
    // 0x242f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242f88:
    // 0x242f88: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_242f8c:
    // 0x242f8c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x242f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_242f90:
    // 0x242f90: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_242f94:
    if (ctx->pc == 0x242F94u) {
        ctx->pc = 0x242F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F90u;
        // 0x242f94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F98u;
        goto label_242f98;
    }
    ctx->pc = 0x242F90u;
    {
        const bool branch_taken_0x242f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x242F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F90u;
        // 0x242f94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f90) {
            ctx->pc = 0x242FB8u;
            goto label_242fb8;
        }
    }
    ctx->pc = 0x242F98u;
label_242f98:
    // 0x242f98: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x242f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_242f9c:
    // 0x242f9c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x242f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_242fa0:
    // 0x242fa0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x242fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242fa4:
    // 0x242fa4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x242fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242fa8:
    // 0x242fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242fac:
    // 0x242fac: 0x0  nop
    ctx->pc = 0x242facu;
    // NOP
label_242fb0:
    // 0x242fb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_242fb4:
    if (ctx->pc == 0x242FB4u) {
        ctx->pc = 0x242FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FB0u;
        // 0x242fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FB8u;
        goto label_242fb8;
    }
    ctx->pc = 0x242FB0u;
    {
        const bool branch_taken_0x242fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242fb0) {
            ctx->pc = 0x242FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FB0u;
            // 0x242fb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242FB8u;
            goto label_242fb8;
        }
    }
    ctx->pc = 0x242FB8u;
label_242fb8:
    // 0x242fb8: 0x54a000b5  bnel        $a1, $zero, . + 4 + (0xB5 << 2)
label_242fbc:
    if (ctx->pc == 0x242FBCu) {
        ctx->pc = 0x242FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FB8u;
        // 0x242fbc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FC0u;
        goto label_242fc0;
    }
    ctx->pc = 0x242FB8u;
    {
        const bool branch_taken_0x242fb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x242fb8) {
            ctx->pc = 0x242FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FB8u;
            // 0x242fbc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243290u;
            goto label_243290;
        }
    }
    ctx->pc = 0x242FC0u;
label_242fc0:
    // 0x242fc0: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x242fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_242fc4:
    // 0x242fc4: 0x0  nop
    ctx->pc = 0x242fc4u;
    // NOP
label_242fc8:
    // 0x242fc8: 0x0  nop
    ctx->pc = 0x242fc8u;
    // NOP
label_242fcc:
    // 0x242fcc: 0x4614ad03  div.s       $f20, $f21, $f20
    ctx->pc = 0x242fccu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_242fd0:
    // 0x242fd0: 0x240307b4  addiu       $v1, $zero, 0x7B4
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1972));
label_242fd4:
    // 0x242fd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242fd8:
    // 0x242fd8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_242fdc:
    // 0x242fdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242fe0:
    // 0x242fe0: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_242fe4:
    if (ctx->pc == 0x242FE4u) {
        ctx->pc = 0x242FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE0u;
        // 0x242fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FE8u;
        goto label_242fe8;
    }
    ctx->pc = 0x242FE0u;
    {
        const bool branch_taken_0x242fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x242FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FE0u;
        // 0x242fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fe0) {
            ctx->pc = 0x24300Cu;
            goto label_24300c;
        }
    }
    ctx->pc = 0x242FE8u;
label_242fe8:
    // 0x242fe8: 0x240207b6  addiu       $v0, $zero, 0x7B6
    ctx->pc = 0x242fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1974));
label_242fec:
    // 0x242fec: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_242ff0:
    if (ctx->pc == 0x242FF0u) {
        ctx->pc = 0x242FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FECu;
        // 0x242ff0: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FF4u;
        goto label_242ff4;
    }
    ctx->pc = 0x242FECu;
    {
        const bool branch_taken_0x242fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x242FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FECu;
        // 0x242ff0: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fec) {
            ctx->pc = 0x24300Cu;
            goto label_24300c;
        }
    }
    ctx->pc = 0x242FF4u;
label_242ff4:
    // 0x242ff4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_242ff8:
    if (ctx->pc == 0x242FF8u) {
        ctx->pc = 0x242FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FF4u;
        // 0x242ff8: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FFCu;
        goto label_242ffc;
    }
    ctx->pc = 0x242FF4u;
    {
        const bool branch_taken_0x242ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x242FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FF4u;
        // 0x242ff8: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ff4) {
            ctx->pc = 0x24300Cu;
            goto label_24300c;
        }
    }
    ctx->pc = 0x242FFCu;
label_242ffc:
    // 0x242ffc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_243000:
    if (ctx->pc == 0x243000u) {
        ctx->pc = 0x243000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FFCu;
        // 0x243000: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243004u;
        goto label_243004;
    }
    ctx->pc = 0x242FFCu;
    {
        const bool branch_taken_0x242ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x243000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FFCu;
        // 0x243000: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ffc) {
            ctx->pc = 0x24300Cu;
            goto label_24300c;
        }
    }
    ctx->pc = 0x243004u;
label_243004:
    // 0x243004: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_243008:
    if (ctx->pc == 0x243008u) {
        ctx->pc = 0x24300Cu;
        goto label_24300c;
    }
    ctx->pc = 0x243004u;
    {
        const bool branch_taken_0x243004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x243004) {
            ctx->pc = 0x243010u;
            goto label_243010;
        }
    }
    ctx->pc = 0x24300Cu;
label_24300c:
    // 0x24300c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243010:
    // 0x243010: 0x54a00015  bnel        $a1, $zero, . + 4 + (0x15 << 2)
label_243014:
    if (ctx->pc == 0x243014u) {
        ctx->pc = 0x243014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243010u;
        // 0x243014: 0xc60003e0  lwc1        $f0, 0x3E0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243018u;
        goto label_243018;
    }
    ctx->pc = 0x243010u;
    {
        const bool branch_taken_0x243010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x243010) {
            ctx->pc = 0x243014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243010u;
            // 0x243014: 0xc60003e0  lwc1        $f0, 0x3E0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x243068u;
            goto label_243068;
        }
    }
    ctx->pc = 0x243018u;
label_243018:
    // 0x243018: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x243018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_24301c:
    // 0x24301c: 0x240307b5  addiu       $v1, $zero, 0x7B5
    ctx->pc = 0x24301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1973));
label_243020:
    // 0x243020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_243024:
    // 0x243024: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x243024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_243028:
    // 0x243028: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24302c:
    // 0x24302c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_243030:
    if (ctx->pc == 0x243030u) {
        ctx->pc = 0x243030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24302Cu;
        // 0x243030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243034u;
        goto label_243034;
    }
    ctx->pc = 0x24302Cu;
    {
        const bool branch_taken_0x24302c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x243030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24302Cu;
        // 0x243030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24302c) {
            ctx->pc = 0x243058u;
            goto label_243058;
        }
    }
    ctx->pc = 0x243034u;
label_243034:
    // 0x243034: 0x240207b7  addiu       $v0, $zero, 0x7B7
    ctx->pc = 0x243034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1975));
label_243038:
    // 0x243038: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_24303c:
    if (ctx->pc == 0x24303Cu) {
        ctx->pc = 0x24303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243038u;
        // 0x24303c: 0x240207b9  addiu       $v0, $zero, 0x7B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1977));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243040u;
        goto label_243040;
    }
    ctx->pc = 0x243038u;
    {
        const bool branch_taken_0x243038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243038u;
        // 0x24303c: 0x240207b9  addiu       $v0, $zero, 0x7B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1977));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243038) {
            ctx->pc = 0x243058u;
            goto label_243058;
        }
    }
    ctx->pc = 0x243040u;
label_243040:
    // 0x243040: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_243044:
    if (ctx->pc == 0x243044u) {
        ctx->pc = 0x243044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243040u;
        // 0x243044: 0x240207c1  addiu       $v0, $zero, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243048u;
        goto label_243048;
    }
    ctx->pc = 0x243040u;
    {
        const bool branch_taken_0x243040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x243044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243040u;
        // 0x243044: 0x240207c1  addiu       $v0, $zero, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243040) {
            ctx->pc = 0x243058u;
            goto label_243058;
        }
    }
    ctx->pc = 0x243048u;
label_243048:
    // 0x243048: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_24304c:
    if (ctx->pc == 0x24304Cu) {
        ctx->pc = 0x24304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243048u;
        // 0x24304c: 0x240207bb  addiu       $v0, $zero, 0x7BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1979));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243050u;
        goto label_243050;
    }
    ctx->pc = 0x243048u;
    {
        const bool branch_taken_0x243048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243048u;
        // 0x24304c: 0x240207bb  addiu       $v0, $zero, 0x7BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1979));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243048) {
            ctx->pc = 0x243058u;
            goto label_243058;
        }
    }
    ctx->pc = 0x243050u;
label_243050:
    // 0x243050: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_243054:
    if (ctx->pc == 0x243054u) {
        ctx->pc = 0x243058u;
        goto label_243058;
    }
    ctx->pc = 0x243050u;
    {
        const bool branch_taken_0x243050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x243050) {
            ctx->pc = 0x24305Cu;
            goto label_24305c;
        }
    }
    ctx->pc = 0x243058u;
label_243058:
    // 0x243058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24305c:
    // 0x24305c: 0x10a0007d  beqz        $a1, . + 4 + (0x7D << 2)
label_243060:
    if (ctx->pc == 0x243060u) {
        ctx->pc = 0x243064u;
        goto label_243064;
    }
    ctx->pc = 0x24305Cu;
    {
        const bool branch_taken_0x24305c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24305c) {
            ctx->pc = 0x243254u;
            goto label_243254;
        }
    }
    ctx->pc = 0x243064u;
label_243064:
    // 0x243064: 0xc60003e0  lwc1        $f0, 0x3E0($s0)
    ctx->pc = 0x243064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243068:
    // 0x243068: 0x260203e0  addiu       $v0, $s0, 0x3E0
    ctx->pc = 0x243068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
label_24306c:
    // 0x24306c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_243070:
    // 0x243070: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x243070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_243074:
    // 0x243074: 0x240407b4  addiu       $a0, $zero, 0x7B4
    ctx->pc = 0x243074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1972));
label_243078:
    // 0x243078: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x243078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24307c:
    // 0x24307c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x24307cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_243080:
    // 0x243080: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x243080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243084:
    // 0x243084: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x243084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_243088:
    // 0x243088: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x243088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24308c:
    // 0x24308c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x24308cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_243090:
    // 0x243090: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_243094:
    // 0x243094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x243094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_243098:
    // 0x243098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24309c:
    // 0x24309c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2430a0:
    // 0x2430a0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_2430a4:
    if (ctx->pc == 0x2430A4u) {
        ctx->pc = 0x2430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430A0u;
        // 0x2430a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430A8u;
        goto label_2430a8;
    }
    ctx->pc = 0x2430A0u;
    {
        const bool branch_taken_0x2430a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430A0u;
        // 0x2430a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430a0) {
            ctx->pc = 0x2430CCu;
            goto label_2430cc;
        }
    }
    ctx->pc = 0x2430A8u;
label_2430a8:
    // 0x2430a8: 0x240207b6  addiu       $v0, $zero, 0x7B6
    ctx->pc = 0x2430a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1974));
label_2430ac:
    // 0x2430ac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2430b0:
    if (ctx->pc == 0x2430B0u) {
        ctx->pc = 0x2430B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430ACu;
        // 0x2430b0: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430B4u;
        goto label_2430b4;
    }
    ctx->pc = 0x2430ACu;
    {
        const bool branch_taken_0x2430ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2430B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430ACu;
        // 0x2430b0: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430ac) {
            ctx->pc = 0x2430CCu;
            goto label_2430cc;
        }
    }
    ctx->pc = 0x2430B4u;
label_2430b4:
    // 0x2430b4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2430b8:
    if (ctx->pc == 0x2430B8u) {
        ctx->pc = 0x2430B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430B4u;
        // 0x2430b8: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430BCu;
        goto label_2430bc;
    }
    ctx->pc = 0x2430B4u;
    {
        const bool branch_taken_0x2430b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2430B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430B4u;
        // 0x2430b8: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430b4) {
            ctx->pc = 0x2430CCu;
            goto label_2430cc;
        }
    }
    ctx->pc = 0x2430BCu;
label_2430bc:
    // 0x2430bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2430c0:
    if (ctx->pc == 0x2430C0u) {
        ctx->pc = 0x2430C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430BCu;
        // 0x2430c0: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430C4u;
        goto label_2430c4;
    }
    ctx->pc = 0x2430BCu;
    {
        const bool branch_taken_0x2430bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2430C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430BCu;
        // 0x2430c0: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430bc) {
            ctx->pc = 0x2430CCu;
            goto label_2430cc;
        }
    }
    ctx->pc = 0x2430C4u;
label_2430c4:
    // 0x2430c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2430c8:
    if (ctx->pc == 0x2430C8u) {
        ctx->pc = 0x2430CCu;
        goto label_2430cc;
    }
    ctx->pc = 0x2430C4u;
    {
        const bool branch_taken_0x2430c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2430c4) {
            ctx->pc = 0x2430D0u;
            goto label_2430d0;
        }
    }
    ctx->pc = 0x2430CCu;
label_2430cc:
    // 0x2430cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2430ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2430d0:
    // 0x2430d0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_2430d4:
    if (ctx->pc == 0x2430D4u) {
        ctx->pc = 0x2430D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430D0u;
        // 0x2430d4: 0x260203f0  addiu       $v0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430D8u;
        goto label_2430d8;
    }
    ctx->pc = 0x2430D0u;
    {
        const bool branch_taken_0x2430d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430D0u;
        // 0x2430d4: 0x260203f0  addiu       $v0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430d0) {
            ctx->pc = 0x243128u;
            goto label_243128;
        }
    }
    ctx->pc = 0x2430D8u;
label_2430d8:
    // 0x2430d8: 0xc60203f0  lwc1        $f2, 0x3F0($s0)
    ctx->pc = 0x2430d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2430dc:
    // 0x2430dc: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2430dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2430e0:
    // 0x2430e0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2430e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2430e4:
    // 0x2430e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2430e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2430e8:
    // 0x2430e8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2430e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_2430ec:
    // 0x2430ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2430ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2430f0:
    // 0x2430f0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2430f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_2430f4:
    // 0x2430f4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2430f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2430f8:
    // 0x2430f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2430f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2430fc:
    // 0x2430fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2430fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_243100:
    // 0x243100: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x243100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_243104:
    // 0x243104: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x243104u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_243108:
    // 0x243108: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x243108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_24310c:
    // 0x24310c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24310cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_243110:
    // 0x243110: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x243110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_243114:
    // 0x243114: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x243114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_243118:
    // 0x243118: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x243118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24311c:
    // 0x24311c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_243120:
    // 0x243120: 0x10000014  b           . + 4 + (0x14 << 2)
label_243124:
    if (ctx->pc == 0x243124u) {
        ctx->pc = 0x243124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243120u;
        // 0x243124: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243128u;
        goto label_243128;
    }
    ctx->pc = 0x243120u;
    {
        const bool branch_taken_0x243120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243120u;
        // 0x243124: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243120) {
            ctx->pc = 0x243174u;
            goto label_243174;
        }
    }
    ctx->pc = 0x243128u;
label_243128:
    // 0x243128: 0xc60203f0  lwc1        $f2, 0x3F0($s0)
    ctx->pc = 0x243128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24312c:
    // 0x24312c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x24312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243130:
    // 0x243130: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x243130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_243134:
    // 0x243134: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x243134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243138:
    // 0x243138: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x243138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_24313c:
    // 0x24313c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243140:
    // 0x243140: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x243140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_243144:
    // 0x243144: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x243144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_243148:
    // 0x243148: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x243148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24314c:
    // 0x24314c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x24314cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_243150:
    // 0x243150: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x243150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_243154:
    // 0x243154: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x243154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_243158:
    // 0x243158: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x243158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_24315c:
    // 0x24315c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_243160:
    // 0x243160: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x243160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_243164:
    // 0x243164: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x243164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_243168:
    // 0x243168: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x243168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24316c:
    // 0x24316c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_243170:
    // 0x243170: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x243170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_243174:
    // 0x243174: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243178:
    // 0x243178: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x243178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_24317c:
    // 0x24317c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_243180:
    // 0x243180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243184:
    // 0x243184: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x243184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243188:
    // 0x243188: 0xc0b1488  jal         func_2C5220
label_24318c:
    if (ctx->pc == 0x24318Cu) {
        ctx->pc = 0x24318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243188u;
        // 0x24318c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243190u;
        goto label_243190;
    }
    ctx->pc = 0x243188u;
    SET_GPR_U32(ctx, 31, 0x243190u);
    ctx->pc = 0x24318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243188u;
    // 0x24318c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x243188u, 0x243190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243190u;
label_243190:
    // 0x243190: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x243190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_243194:
    // 0x243194: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_243198:
    // 0x243198: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_24319c:
    // 0x24319c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24319cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2431a0:
    // 0x2431a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2431a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2431a4:
    // 0x2431a4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2431a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2431a8:
    // 0x2431a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2431a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2431ac:
    // 0x2431ac: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2431acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2431b0:
    // 0x2431b0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2431b4:
    // 0x2431b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2431b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2431b8:
    // 0x2431b8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2431b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2431bc:
    // 0x2431bc: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2431bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2431c0:
    // 0x2431c0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2431c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2431c4:
    // 0x2431c4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2431c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2431c8:
    // 0x2431c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2431c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2431cc:
    // 0x2431cc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2431ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2431d0:
    // 0x2431d0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2431d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2431d4:
    // 0x2431d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2431d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2431d8:
    // 0x2431d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2431d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2431dc:
    // 0x2431dc: 0xc0f6a9a  jal         func_3DAA68
label_2431e0:
    if (ctx->pc == 0x2431E0u) {
        ctx->pc = 0x2431E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431DCu;
        // 0x2431e0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2431E4u;
        goto label_2431e4;
    }
    ctx->pc = 0x2431DCu;
    SET_GPR_U32(ctx, 31, 0x2431E4u);
    ctx->pc = 0x2431E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431DCu;
    // 0x2431e0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x2431DCu, 0x2431E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431E4u;
label_2431e4:
    // 0x2431e4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2431e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2431e8:
    // 0x2431e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2431e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2431ec:
    // 0x2431ec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2431ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2431f0:
    // 0x2431f0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2431f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2431f4:
    // 0x2431f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2431f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2431f8:
    // 0x2431f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2431f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2431fc:
    // 0x2431fc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2431fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_243200:
    // 0x243200: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x243200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_243204:
    // 0x243204: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x243204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_243208:
    // 0x243208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24320c:
    // 0x24320c: 0x0  nop
    ctx->pc = 0x24320cu;
    // NOP
label_243210:
    // 0x243210: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243214:
    // 0x243214: 0x0  nop
    ctx->pc = 0x243214u;
    // NOP
label_243218:
    // 0x243218: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_24321c:
    if (ctx->pc == 0x24321Cu) {
        ctx->pc = 0x243220u;
        goto label_243220;
    }
    ctx->pc = 0x243218u;
    {
        const bool branch_taken_0x243218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243218) {
            ctx->pc = 0x243254u;
            goto label_243254;
        }
    }
    ctx->pc = 0x243220u;
label_243220:
    // 0x243220: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x243220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_243224:
    // 0x243224: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x243224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_243228:
    // 0x243228: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_24322c:
    if (ctx->pc == 0x24322Cu) {
        ctx->pc = 0x24322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243228u;
        // 0x24322c: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243230u;
        goto label_243230;
    }
    ctx->pc = 0x243228u;
    {
        const bool branch_taken_0x243228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243228) {
            ctx->pc = 0x24322Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243228u;
            // 0x24322c: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243248u;
            goto label_243248;
        }
    }
    ctx->pc = 0x243230u;
label_243230:
    // 0x243230: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243234:
    // 0x243234: 0xc08e0fa  jal         func_2383E8
label_243238:
    if (ctx->pc == 0x243238u) {
        ctx->pc = 0x243238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243234u;
        // 0x243238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24323Cu;
        goto label_24323c;
    }
    ctx->pc = 0x243234u;
    SET_GPR_U32(ctx, 31, 0x24323Cu);
    ctx->pc = 0x243238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243234u;
    // 0x243238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x243234u, 0x24323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24323Cu;
label_24323c:
    // 0x24323c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243240:
    if (ctx->pc == 0x243240u) {
        ctx->pc = 0x243244u;
        goto label_243244;
    }
    ctx->pc = 0x24323Cu;
    {
        const bool branch_taken_0x24323c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24323c) {
            ctx->pc = 0x243254u;
            goto label_243254;
        }
    }
    ctx->pc = 0x243244u;
label_243244:
    // 0x243244: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x243244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_243248:
    // 0x243248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24324c:
    // 0x24324c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x24324cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_243250:
    // 0x243250: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x243250u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_243254:
    // 0x243254: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
label_243258:
    if (ctx->pc == 0x243258u) {
        ctx->pc = 0x243258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243254u;
        // 0x243258: 0xc60c0404  lwc1        $f12, 0x404($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24325Cu;
        goto label_24325c;
    }
    ctx->pc = 0x243254u;
    {
        const bool branch_taken_0x243254 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x243254) {
            ctx->pc = 0x243258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243254u;
            // 0x243258: 0xc60c0404  lwc1        $f12, 0x404($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24326Cu;
            goto label_24326c;
        }
    }
    ctx->pc = 0x24325Cu;
label_24325c:
    // 0x24325c: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x24325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
label_243260:
    // 0x243260: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_243264:
    if (ctx->pc == 0x243264u) {
        ctx->pc = 0x243264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243260u;
        // 0x243264: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243268u;
        goto label_243268;
    }
    ctx->pc = 0x243260u;
    {
        const bool branch_taken_0x243260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243260) {
            ctx->pc = 0x243264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243260u;
            // 0x243264: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243290u;
            goto label_243290;
        }
    }
    ctx->pc = 0x243268u;
label_243268:
    // 0x243268: 0xc60c0404  lwc1        $f12, 0x404($s0)
    ctx->pc = 0x243268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24326c:
    // 0x24326c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24326cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243270:
    // 0x243270: 0xc6000400  lwc1        $f0, 0x400($s0)
    ctx->pc = 0x243270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243274:
    // 0x243274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243278:
    // 0x243278: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x243278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_24327c:
    // 0x24327c: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x24327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_243280:
    // 0x243280: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x243280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
label_243284:
    // 0x243284: 0x60f809  jalr        $v1
label_243288:
    if (ctx->pc == 0x243288u) {
        ctx->pc = 0x243288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243284u;
        // 0x243288: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24328Cu;
        goto label_24328c;
    }
    ctx->pc = 0x243284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24328Cu);
        ctx->pc = 0x243288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243284u;
        // 0x243288: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243284u, 0x24328Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24328Cu;
label_24328c:
    // 0x24328c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x24328cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_243290:
    // 0x243290: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x243290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_243294:
    // 0x243294: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x243294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_243298:
    // 0x243298: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x243298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_24329c:
    // 0x24329c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x24329cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2432a0:
    // 0x2432a0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2432a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2432a4:
    // 0x2432a4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2432a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2432a8:
    // 0x2432a8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2432a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2432ac:
    // 0x2432ac: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2432acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2432b0:
    // 0x2432b0: 0x3e00008  jr          $ra
label_2432b4:
    if (ctx->pc == 0x2432B4u) {
        ctx->pc = 0x2432B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432B0u;
        // 0x2432b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2432B8u;
        goto label_fallthrough_0x2432b0;
    }
    ctx->pc = 0x2432B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2432B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432B0u;
        // 0x2432b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2432B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2432b0:
    ctx->pc = 0x2432B8u;
}
