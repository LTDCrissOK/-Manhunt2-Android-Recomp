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

// Function: sub_002E7D38
// Address: 0x2e7d38 - 0x2e8430
void sub_002E7D38_0x2e7d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7D38_0x2e7d38");
#endif

    switch (ctx->pc) {
        case 0x2e7d38u: goto label_2e7d38;
        case 0x2e7d3cu: goto label_2e7d3c;
        case 0x2e7d40u: goto label_2e7d40;
        case 0x2e7d44u: goto label_2e7d44;
        case 0x2e7d48u: goto label_2e7d48;
        case 0x2e7d4cu: goto label_2e7d4c;
        case 0x2e7d50u: goto label_2e7d50;
        case 0x2e7d54u: goto label_2e7d54;
        case 0x2e7d58u: goto label_2e7d58;
        case 0x2e7d5cu: goto label_2e7d5c;
        case 0x2e7d60u: goto label_2e7d60;
        case 0x2e7d64u: goto label_2e7d64;
        case 0x2e7d68u: goto label_2e7d68;
        case 0x2e7d6cu: goto label_2e7d6c;
        case 0x2e7d70u: goto label_2e7d70;
        case 0x2e7d74u: goto label_2e7d74;
        case 0x2e7d78u: goto label_2e7d78;
        case 0x2e7d7cu: goto label_2e7d7c;
        case 0x2e7d80u: goto label_2e7d80;
        case 0x2e7d84u: goto label_2e7d84;
        case 0x2e7d88u: goto label_2e7d88;
        case 0x2e7d8cu: goto label_2e7d8c;
        case 0x2e7d90u: goto label_2e7d90;
        case 0x2e7d94u: goto label_2e7d94;
        case 0x2e7d98u: goto label_2e7d98;
        case 0x2e7d9cu: goto label_2e7d9c;
        case 0x2e7da0u: goto label_2e7da0;
        case 0x2e7da4u: goto label_2e7da4;
        case 0x2e7da8u: goto label_2e7da8;
        case 0x2e7dacu: goto label_2e7dac;
        case 0x2e7db0u: goto label_2e7db0;
        case 0x2e7db4u: goto label_2e7db4;
        case 0x2e7db8u: goto label_2e7db8;
        case 0x2e7dbcu: goto label_2e7dbc;
        case 0x2e7dc0u: goto label_2e7dc0;
        case 0x2e7dc4u: goto label_2e7dc4;
        case 0x2e7dc8u: goto label_2e7dc8;
        case 0x2e7dccu: goto label_2e7dcc;
        case 0x2e7dd0u: goto label_2e7dd0;
        case 0x2e7dd4u: goto label_2e7dd4;
        case 0x2e7dd8u: goto label_2e7dd8;
        case 0x2e7ddcu: goto label_2e7ddc;
        case 0x2e7de0u: goto label_2e7de0;
        case 0x2e7de4u: goto label_2e7de4;
        case 0x2e7de8u: goto label_2e7de8;
        case 0x2e7decu: goto label_2e7dec;
        case 0x2e7df0u: goto label_2e7df0;
        case 0x2e7df4u: goto label_2e7df4;
        case 0x2e7df8u: goto label_2e7df8;
        case 0x2e7dfcu: goto label_2e7dfc;
        case 0x2e7e00u: goto label_2e7e00;
        case 0x2e7e04u: goto label_2e7e04;
        case 0x2e7e08u: goto label_2e7e08;
        case 0x2e7e0cu: goto label_2e7e0c;
        case 0x2e7e10u: goto label_2e7e10;
        case 0x2e7e14u: goto label_2e7e14;
        case 0x2e7e18u: goto label_2e7e18;
        case 0x2e7e1cu: goto label_2e7e1c;
        case 0x2e7e20u: goto label_2e7e20;
        case 0x2e7e24u: goto label_2e7e24;
        case 0x2e7e28u: goto label_2e7e28;
        case 0x2e7e2cu: goto label_2e7e2c;
        case 0x2e7e30u: goto label_2e7e30;
        case 0x2e7e34u: goto label_2e7e34;
        case 0x2e7e38u: goto label_2e7e38;
        case 0x2e7e3cu: goto label_2e7e3c;
        case 0x2e7e40u: goto label_2e7e40;
        case 0x2e7e44u: goto label_2e7e44;
        case 0x2e7e48u: goto label_2e7e48;
        case 0x2e7e4cu: goto label_2e7e4c;
        case 0x2e7e50u: goto label_2e7e50;
        case 0x2e7e54u: goto label_2e7e54;
        case 0x2e7e58u: goto label_2e7e58;
        case 0x2e7e5cu: goto label_2e7e5c;
        case 0x2e7e60u: goto label_2e7e60;
        case 0x2e7e64u: goto label_2e7e64;
        case 0x2e7e68u: goto label_2e7e68;
        case 0x2e7e6cu: goto label_2e7e6c;
        case 0x2e7e70u: goto label_2e7e70;
        case 0x2e7e74u: goto label_2e7e74;
        case 0x2e7e78u: goto label_2e7e78;
        case 0x2e7e7cu: goto label_2e7e7c;
        case 0x2e7e80u: goto label_2e7e80;
        case 0x2e7e84u: goto label_2e7e84;
        case 0x2e7e88u: goto label_2e7e88;
        case 0x2e7e8cu: goto label_2e7e8c;
        case 0x2e7e90u: goto label_2e7e90;
        case 0x2e7e94u: goto label_2e7e94;
        case 0x2e7e98u: goto label_2e7e98;
        case 0x2e7e9cu: goto label_2e7e9c;
        case 0x2e7ea0u: goto label_2e7ea0;
        case 0x2e7ea4u: goto label_2e7ea4;
        case 0x2e7ea8u: goto label_2e7ea8;
        case 0x2e7eacu: goto label_2e7eac;
        case 0x2e7eb0u: goto label_2e7eb0;
        case 0x2e7eb4u: goto label_2e7eb4;
        case 0x2e7eb8u: goto label_2e7eb8;
        case 0x2e7ebcu: goto label_2e7ebc;
        case 0x2e7ec0u: goto label_2e7ec0;
        case 0x2e7ec4u: goto label_2e7ec4;
        case 0x2e7ec8u: goto label_2e7ec8;
        case 0x2e7eccu: goto label_2e7ecc;
        case 0x2e7ed0u: goto label_2e7ed0;
        case 0x2e7ed4u: goto label_2e7ed4;
        case 0x2e7ed8u: goto label_2e7ed8;
        case 0x2e7edcu: goto label_2e7edc;
        case 0x2e7ee0u: goto label_2e7ee0;
        case 0x2e7ee4u: goto label_2e7ee4;
        case 0x2e7ee8u: goto label_2e7ee8;
        case 0x2e7eecu: goto label_2e7eec;
        case 0x2e7ef0u: goto label_2e7ef0;
        case 0x2e7ef4u: goto label_2e7ef4;
        case 0x2e7ef8u: goto label_2e7ef8;
        case 0x2e7efcu: goto label_2e7efc;
        case 0x2e7f00u: goto label_2e7f00;
        case 0x2e7f04u: goto label_2e7f04;
        case 0x2e7f08u: goto label_2e7f08;
        case 0x2e7f0cu: goto label_2e7f0c;
        case 0x2e7f10u: goto label_2e7f10;
        case 0x2e7f14u: goto label_2e7f14;
        case 0x2e7f18u: goto label_2e7f18;
        case 0x2e7f1cu: goto label_2e7f1c;
        case 0x2e7f20u: goto label_2e7f20;
        case 0x2e7f24u: goto label_2e7f24;
        case 0x2e7f28u: goto label_2e7f28;
        case 0x2e7f2cu: goto label_2e7f2c;
        case 0x2e7f30u: goto label_2e7f30;
        case 0x2e7f34u: goto label_2e7f34;
        case 0x2e7f38u: goto label_2e7f38;
        case 0x2e7f3cu: goto label_2e7f3c;
        case 0x2e7f40u: goto label_2e7f40;
        case 0x2e7f44u: goto label_2e7f44;
        case 0x2e7f48u: goto label_2e7f48;
        case 0x2e7f4cu: goto label_2e7f4c;
        case 0x2e7f50u: goto label_2e7f50;
        case 0x2e7f54u: goto label_2e7f54;
        case 0x2e7f58u: goto label_2e7f58;
        case 0x2e7f5cu: goto label_2e7f5c;
        case 0x2e7f60u: goto label_2e7f60;
        case 0x2e7f64u: goto label_2e7f64;
        case 0x2e7f68u: goto label_2e7f68;
        case 0x2e7f6cu: goto label_2e7f6c;
        case 0x2e7f70u: goto label_2e7f70;
        case 0x2e7f74u: goto label_2e7f74;
        case 0x2e7f78u: goto label_2e7f78;
        case 0x2e7f7cu: goto label_2e7f7c;
        case 0x2e7f80u: goto label_2e7f80;
        case 0x2e7f84u: goto label_2e7f84;
        case 0x2e7f88u: goto label_2e7f88;
        case 0x2e7f8cu: goto label_2e7f8c;
        case 0x2e7f90u: goto label_2e7f90;
        case 0x2e7f94u: goto label_2e7f94;
        case 0x2e7f98u: goto label_2e7f98;
        case 0x2e7f9cu: goto label_2e7f9c;
        case 0x2e7fa0u: goto label_2e7fa0;
        case 0x2e7fa4u: goto label_2e7fa4;
        case 0x2e7fa8u: goto label_2e7fa8;
        case 0x2e7facu: goto label_2e7fac;
        case 0x2e7fb0u: goto label_2e7fb0;
        case 0x2e7fb4u: goto label_2e7fb4;
        case 0x2e7fb8u: goto label_2e7fb8;
        case 0x2e7fbcu: goto label_2e7fbc;
        case 0x2e7fc0u: goto label_2e7fc0;
        case 0x2e7fc4u: goto label_2e7fc4;
        case 0x2e7fc8u: goto label_2e7fc8;
        case 0x2e7fccu: goto label_2e7fcc;
        case 0x2e7fd0u: goto label_2e7fd0;
        case 0x2e7fd4u: goto label_2e7fd4;
        case 0x2e7fd8u: goto label_2e7fd8;
        case 0x2e7fdcu: goto label_2e7fdc;
        case 0x2e7fe0u: goto label_2e7fe0;
        case 0x2e7fe4u: goto label_2e7fe4;
        case 0x2e7fe8u: goto label_2e7fe8;
        case 0x2e7fecu: goto label_2e7fec;
        case 0x2e7ff0u: goto label_2e7ff0;
        case 0x2e7ff4u: goto label_2e7ff4;
        case 0x2e7ff8u: goto label_2e7ff8;
        case 0x2e7ffcu: goto label_2e7ffc;
        case 0x2e8000u: goto label_2e8000;
        case 0x2e8004u: goto label_2e8004;
        case 0x2e8008u: goto label_2e8008;
        case 0x2e800cu: goto label_2e800c;
        case 0x2e8010u: goto label_2e8010;
        case 0x2e8014u: goto label_2e8014;
        case 0x2e8018u: goto label_2e8018;
        case 0x2e801cu: goto label_2e801c;
        case 0x2e8020u: goto label_2e8020;
        case 0x2e8024u: goto label_2e8024;
        case 0x2e8028u: goto label_2e8028;
        case 0x2e802cu: goto label_2e802c;
        case 0x2e8030u: goto label_2e8030;
        case 0x2e8034u: goto label_2e8034;
        case 0x2e8038u: goto label_2e8038;
        case 0x2e803cu: goto label_2e803c;
        case 0x2e8040u: goto label_2e8040;
        case 0x2e8044u: goto label_2e8044;
        case 0x2e8048u: goto label_2e8048;
        case 0x2e804cu: goto label_2e804c;
        case 0x2e8050u: goto label_2e8050;
        case 0x2e8054u: goto label_2e8054;
        case 0x2e8058u: goto label_2e8058;
        case 0x2e805cu: goto label_2e805c;
        case 0x2e8060u: goto label_2e8060;
        case 0x2e8064u: goto label_2e8064;
        case 0x2e8068u: goto label_2e8068;
        case 0x2e806cu: goto label_2e806c;
        case 0x2e8070u: goto label_2e8070;
        case 0x2e8074u: goto label_2e8074;
        case 0x2e8078u: goto label_2e8078;
        case 0x2e807cu: goto label_2e807c;
        case 0x2e8080u: goto label_2e8080;
        case 0x2e8084u: goto label_2e8084;
        case 0x2e8088u: goto label_2e8088;
        case 0x2e808cu: goto label_2e808c;
        case 0x2e8090u: goto label_2e8090;
        case 0x2e8094u: goto label_2e8094;
        case 0x2e8098u: goto label_2e8098;
        case 0x2e809cu: goto label_2e809c;
        case 0x2e80a0u: goto label_2e80a0;
        case 0x2e80a4u: goto label_2e80a4;
        case 0x2e80a8u: goto label_2e80a8;
        case 0x2e80acu: goto label_2e80ac;
        case 0x2e80b0u: goto label_2e80b0;
        case 0x2e80b4u: goto label_2e80b4;
        case 0x2e80b8u: goto label_2e80b8;
        case 0x2e80bcu: goto label_2e80bc;
        case 0x2e80c0u: goto label_2e80c0;
        case 0x2e80c4u: goto label_2e80c4;
        case 0x2e80c8u: goto label_2e80c8;
        case 0x2e80ccu: goto label_2e80cc;
        case 0x2e80d0u: goto label_2e80d0;
        case 0x2e80d4u: goto label_2e80d4;
        case 0x2e80d8u: goto label_2e80d8;
        case 0x2e80dcu: goto label_2e80dc;
        case 0x2e80e0u: goto label_2e80e0;
        case 0x2e80e4u: goto label_2e80e4;
        case 0x2e80e8u: goto label_2e80e8;
        case 0x2e80ecu: goto label_2e80ec;
        case 0x2e80f0u: goto label_2e80f0;
        case 0x2e80f4u: goto label_2e80f4;
        case 0x2e80f8u: goto label_2e80f8;
        case 0x2e80fcu: goto label_2e80fc;
        case 0x2e8100u: goto label_2e8100;
        case 0x2e8104u: goto label_2e8104;
        case 0x2e8108u: goto label_2e8108;
        case 0x2e810cu: goto label_2e810c;
        case 0x2e8110u: goto label_2e8110;
        case 0x2e8114u: goto label_2e8114;
        case 0x2e8118u: goto label_2e8118;
        case 0x2e811cu: goto label_2e811c;
        case 0x2e8120u: goto label_2e8120;
        case 0x2e8124u: goto label_2e8124;
        case 0x2e8128u: goto label_2e8128;
        case 0x2e812cu: goto label_2e812c;
        case 0x2e8130u: goto label_2e8130;
        case 0x2e8134u: goto label_2e8134;
        case 0x2e8138u: goto label_2e8138;
        case 0x2e813cu: goto label_2e813c;
        case 0x2e8140u: goto label_2e8140;
        case 0x2e8144u: goto label_2e8144;
        case 0x2e8148u: goto label_2e8148;
        case 0x2e814cu: goto label_2e814c;
        case 0x2e8150u: goto label_2e8150;
        case 0x2e8154u: goto label_2e8154;
        case 0x2e8158u: goto label_2e8158;
        case 0x2e815cu: goto label_2e815c;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e8164u: goto label_2e8164;
        case 0x2e8168u: goto label_2e8168;
        case 0x2e816cu: goto label_2e816c;
        case 0x2e8170u: goto label_2e8170;
        case 0x2e8174u: goto label_2e8174;
        case 0x2e8178u: goto label_2e8178;
        case 0x2e817cu: goto label_2e817c;
        case 0x2e8180u: goto label_2e8180;
        case 0x2e8184u: goto label_2e8184;
        case 0x2e8188u: goto label_2e8188;
        case 0x2e818cu: goto label_2e818c;
        case 0x2e8190u: goto label_2e8190;
        case 0x2e8194u: goto label_2e8194;
        case 0x2e8198u: goto label_2e8198;
        case 0x2e819cu: goto label_2e819c;
        case 0x2e81a0u: goto label_2e81a0;
        case 0x2e81a4u: goto label_2e81a4;
        case 0x2e81a8u: goto label_2e81a8;
        case 0x2e81acu: goto label_2e81ac;
        case 0x2e81b0u: goto label_2e81b0;
        case 0x2e81b4u: goto label_2e81b4;
        case 0x2e81b8u: goto label_2e81b8;
        case 0x2e81bcu: goto label_2e81bc;
        case 0x2e81c0u: goto label_2e81c0;
        case 0x2e81c4u: goto label_2e81c4;
        case 0x2e81c8u: goto label_2e81c8;
        case 0x2e81ccu: goto label_2e81cc;
        case 0x2e81d0u: goto label_2e81d0;
        case 0x2e81d4u: goto label_2e81d4;
        case 0x2e81d8u: goto label_2e81d8;
        case 0x2e81dcu: goto label_2e81dc;
        case 0x2e81e0u: goto label_2e81e0;
        case 0x2e81e4u: goto label_2e81e4;
        case 0x2e81e8u: goto label_2e81e8;
        case 0x2e81ecu: goto label_2e81ec;
        case 0x2e81f0u: goto label_2e81f0;
        case 0x2e81f4u: goto label_2e81f4;
        case 0x2e81f8u: goto label_2e81f8;
        case 0x2e81fcu: goto label_2e81fc;
        case 0x2e8200u: goto label_2e8200;
        case 0x2e8204u: goto label_2e8204;
        case 0x2e8208u: goto label_2e8208;
        case 0x2e820cu: goto label_2e820c;
        case 0x2e8210u: goto label_2e8210;
        case 0x2e8214u: goto label_2e8214;
        case 0x2e8218u: goto label_2e8218;
        case 0x2e821cu: goto label_2e821c;
        case 0x2e8220u: goto label_2e8220;
        case 0x2e8224u: goto label_2e8224;
        case 0x2e8228u: goto label_2e8228;
        case 0x2e822cu: goto label_2e822c;
        case 0x2e8230u: goto label_2e8230;
        case 0x2e8234u: goto label_2e8234;
        case 0x2e8238u: goto label_2e8238;
        case 0x2e823cu: goto label_2e823c;
        case 0x2e8240u: goto label_2e8240;
        case 0x2e8244u: goto label_2e8244;
        case 0x2e8248u: goto label_2e8248;
        case 0x2e824cu: goto label_2e824c;
        case 0x2e8250u: goto label_2e8250;
        case 0x2e8254u: goto label_2e8254;
        case 0x2e8258u: goto label_2e8258;
        case 0x2e825cu: goto label_2e825c;
        case 0x2e8260u: goto label_2e8260;
        case 0x2e8264u: goto label_2e8264;
        case 0x2e8268u: goto label_2e8268;
        case 0x2e826cu: goto label_2e826c;
        case 0x2e8270u: goto label_2e8270;
        case 0x2e8274u: goto label_2e8274;
        case 0x2e8278u: goto label_2e8278;
        case 0x2e827cu: goto label_2e827c;
        case 0x2e8280u: goto label_2e8280;
        case 0x2e8284u: goto label_2e8284;
        case 0x2e8288u: goto label_2e8288;
        case 0x2e828cu: goto label_2e828c;
        case 0x2e8290u: goto label_2e8290;
        case 0x2e8294u: goto label_2e8294;
        case 0x2e8298u: goto label_2e8298;
        case 0x2e829cu: goto label_2e829c;
        case 0x2e82a0u: goto label_2e82a0;
        case 0x2e82a4u: goto label_2e82a4;
        case 0x2e82a8u: goto label_2e82a8;
        case 0x2e82acu: goto label_2e82ac;
        case 0x2e82b0u: goto label_2e82b0;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e82b8u: goto label_2e82b8;
        case 0x2e82bcu: goto label_2e82bc;
        case 0x2e82c0u: goto label_2e82c0;
        case 0x2e82c4u: goto label_2e82c4;
        case 0x2e82c8u: goto label_2e82c8;
        case 0x2e82ccu: goto label_2e82cc;
        case 0x2e82d0u: goto label_2e82d0;
        case 0x2e82d4u: goto label_2e82d4;
        case 0x2e82d8u: goto label_2e82d8;
        case 0x2e82dcu: goto label_2e82dc;
        case 0x2e82e0u: goto label_2e82e0;
        case 0x2e82e4u: goto label_2e82e4;
        case 0x2e82e8u: goto label_2e82e8;
        case 0x2e82ecu: goto label_2e82ec;
        case 0x2e82f0u: goto label_2e82f0;
        case 0x2e82f4u: goto label_2e82f4;
        case 0x2e82f8u: goto label_2e82f8;
        case 0x2e82fcu: goto label_2e82fc;
        case 0x2e8300u: goto label_2e8300;
        case 0x2e8304u: goto label_2e8304;
        case 0x2e8308u: goto label_2e8308;
        case 0x2e830cu: goto label_2e830c;
        case 0x2e8310u: goto label_2e8310;
        case 0x2e8314u: goto label_2e8314;
        case 0x2e8318u: goto label_2e8318;
        case 0x2e831cu: goto label_2e831c;
        case 0x2e8320u: goto label_2e8320;
        case 0x2e8324u: goto label_2e8324;
        case 0x2e8328u: goto label_2e8328;
        case 0x2e832cu: goto label_2e832c;
        case 0x2e8330u: goto label_2e8330;
        case 0x2e8334u: goto label_2e8334;
        case 0x2e8338u: goto label_2e8338;
        case 0x2e833cu: goto label_2e833c;
        case 0x2e8340u: goto label_2e8340;
        case 0x2e8344u: goto label_2e8344;
        case 0x2e8348u: goto label_2e8348;
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8350u: goto label_2e8350;
        case 0x2e8354u: goto label_2e8354;
        case 0x2e8358u: goto label_2e8358;
        case 0x2e835cu: goto label_2e835c;
        case 0x2e8360u: goto label_2e8360;
        case 0x2e8364u: goto label_2e8364;
        case 0x2e8368u: goto label_2e8368;
        case 0x2e836cu: goto label_2e836c;
        case 0x2e8370u: goto label_2e8370;
        case 0x2e8374u: goto label_2e8374;
        case 0x2e8378u: goto label_2e8378;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e8380u: goto label_2e8380;
        case 0x2e8384u: goto label_2e8384;
        case 0x2e8388u: goto label_2e8388;
        case 0x2e838cu: goto label_2e838c;
        case 0x2e8390u: goto label_2e8390;
        case 0x2e8394u: goto label_2e8394;
        case 0x2e8398u: goto label_2e8398;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83a0u: goto label_2e83a0;
        case 0x2e83a4u: goto label_2e83a4;
        case 0x2e83a8u: goto label_2e83a8;
        case 0x2e83acu: goto label_2e83ac;
        case 0x2e83b0u: goto label_2e83b0;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83b8u: goto label_2e83b8;
        case 0x2e83bcu: goto label_2e83bc;
        case 0x2e83c0u: goto label_2e83c0;
        case 0x2e83c4u: goto label_2e83c4;
        case 0x2e83c8u: goto label_2e83c8;
        case 0x2e83ccu: goto label_2e83cc;
        case 0x2e83d0u: goto label_2e83d0;
        case 0x2e83d4u: goto label_2e83d4;
        case 0x2e83d8u: goto label_2e83d8;
        case 0x2e83dcu: goto label_2e83dc;
        case 0x2e83e0u: goto label_2e83e0;
        case 0x2e83e4u: goto label_2e83e4;
        case 0x2e83e8u: goto label_2e83e8;
        case 0x2e83ecu: goto label_2e83ec;
        case 0x2e83f0u: goto label_2e83f0;
        case 0x2e83f4u: goto label_2e83f4;
        case 0x2e83f8u: goto label_2e83f8;
        case 0x2e83fcu: goto label_2e83fc;
        case 0x2e8400u: goto label_2e8400;
        case 0x2e8404u: goto label_2e8404;
        case 0x2e8408u: goto label_2e8408;
        case 0x2e840cu: goto label_2e840c;
        case 0x2e8410u: goto label_2e8410;
        case 0x2e8414u: goto label_2e8414;
        case 0x2e8418u: goto label_2e8418;
        case 0x2e841cu: goto label_2e841c;
        case 0x2e8420u: goto label_2e8420;
        case 0x2e8424u: goto label_2e8424;
        case 0x2e8428u: goto label_2e8428;
        case 0x2e842cu: goto label_2e842c;
        default: break;
    }

    ctx->pc = 0x2e7d38u;

label_2e7d38:
    // 0x2e7d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e7d3c:
    // 0x2e7d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e7d40:
    // 0x2e7d40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e7d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e7d44:
    // 0x2e7d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d48:
    // 0x2e7d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e7d4c:
    // 0x2e7d4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e7d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d50:
    // 0x2e7d50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e7d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e7d54:
    // 0x2e7d54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e7d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2e7d58:
    // 0x2e7d58: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2e7d5c:
    if (ctx->pc == 0x2E7D5Cu) {
        ctx->pc = 0x2E7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D58u;
        // 0x2e7d5c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D60u;
        goto label_2e7d60;
    }
    ctx->pc = 0x2E7D58u;
    {
        const bool branch_taken_0x2e7d58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D58u;
        // 0x2e7d5c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d58) {
            ctx->pc = 0x2E7D68u;
            goto label_2e7d68;
        }
    }
    ctx->pc = 0x2E7D60u;
label_2e7d60:
    // 0x2e7d60: 0xc091dfc  jal         func_2477F0
label_2e7d64:
    if (ctx->pc == 0x2E7D64u) {
        ctx->pc = 0x2E7D68u;
        goto label_2e7d68;
    }
    ctx->pc = 0x2E7D60u;
    SET_GPR_U32(ctx, 31, 0x2E7D68u);
    ctx->pc = 0x2477F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477F0u, 0x2E7D60u, 0x2E7D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D68u;
label_2e7d68:
    // 0x2e7d68: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2e7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2e7d6c:
    // 0x2e7d6c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2e7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2e7d70:
    // 0x2e7d70: 0x106200cc  beq         $v1, $v0, . + 4 + (0xCC << 2)
label_2e7d74:
    if (ctx->pc == 0x2E7D74u) {
        ctx->pc = 0x2E7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D70u;
        // 0x2e7d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D78u;
        goto label_2e7d78;
    }
    ctx->pc = 0x2E7D70u;
    {
        const bool branch_taken_0x2e7d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D70u;
        // 0x2e7d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d70) {
            ctx->pc = 0x2E80A4u;
            goto label_2e80a4;
        }
    }
    ctx->pc = 0x2E7D78u;
label_2e7d78:
    // 0x2e7d78: 0xc0ba73e  jal         func_2E9CF8
label_2e7d7c:
    if (ctx->pc == 0x2E7D7Cu) {
        ctx->pc = 0x2E7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D78u;
        // 0x2e7d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D80u;
        goto label_2e7d80;
    }
    ctx->pc = 0x2E7D78u;
    SET_GPR_U32(ctx, 31, 0x2E7D80u);
    ctx->pc = 0x2E7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D78u;
    // 0x2e7d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CF8u, 0x2E7D78u, 0x2E7D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D80u;
label_2e7d80:
    // 0x2e7d80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e7d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d84:
    // 0x2e7d84: 0xc0b93e0  jal         func_2E4F80
label_2e7d88:
    if (ctx->pc == 0x2E7D88u) {
        ctx->pc = 0x2E7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D84u;
        // 0x2e7d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D8Cu;
        goto label_2e7d8c;
    }
    ctx->pc = 0x2E7D84u;
    SET_GPR_U32(ctx, 31, 0x2E7D8Cu);
    ctx->pc = 0x2E7D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D84u;
    // 0x2e7d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2E7D84u, 0x2E7D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D8Cu;
label_2e7d8c:
    // 0x2e7d8c: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
label_2e7d90:
    if (ctx->pc == 0x2E7D90u) {
        ctx->pc = 0x2E7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D8Cu;
        // 0x2e7d90: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D94u;
        goto label_2e7d94;
    }
    ctx->pc = 0x2E7D8Cu;
    {
        const bool branch_taken_0x2e7d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D8Cu;
        // 0x2e7d90: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d8c) {
            ctx->pc = 0x2E80A8u;
            goto label_2e80a8;
        }
    }
    ctx->pc = 0x2E7D94u;
label_2e7d94:
    // 0x2e7d94: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x2e7d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
label_2e7d98:
    // 0x2e7d98: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
label_2e7d9c:
    if (ctx->pc == 0x2E7D9Cu) {
        ctx->pc = 0x2E7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D98u;
        // 0x2e7d9c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DA0u;
        goto label_2e7da0;
    }
    ctx->pc = 0x2E7D98u;
    {
        const bool branch_taken_0x2e7d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D98u;
        // 0x2e7d9c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d98) {
            ctx->pc = 0x2E80A8u;
            goto label_2e80a8;
        }
    }
    ctx->pc = 0x2E7DA0u;
label_2e7da0:
    // 0x2e7da0: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
label_2e7da4:
    if (ctx->pc == 0x2E7DA4u) {
        ctx->pc = 0x2E7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA0u;
        // 0x2e7da4: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DA8u;
        goto label_2e7da8;
    }
    ctx->pc = 0x2E7DA0u;
    {
        const bool branch_taken_0x2e7da0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7da0) {
            ctx->pc = 0x2E7DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DA0u;
            // 0x2e7da4: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7DCCu;
            goto label_2e7dcc;
        }
    }
    ctx->pc = 0x2E7DA8u;
label_2e7da8:
    // 0x2e7da8: 0xc08da92  jal         func_236A48
label_2e7dac:
    if (ctx->pc == 0x2E7DACu) {
        ctx->pc = 0x2E7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA8u;
        // 0x2e7dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DB0u;
        goto label_2e7db0;
    }
    ctx->pc = 0x2E7DA8u;
    SET_GPR_U32(ctx, 31, 0x2E7DB0u);
    ctx->pc = 0x2E7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DA8u;
    // 0x2e7dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2E7DA8u, 0x2E7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DB0u;
label_2e7db0:
    // 0x2e7db0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2e7db4:
    if (ctx->pc == 0x2E7DB4u) {
        ctx->pc = 0x2E7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DB0u;
        // 0x2e7db4: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DB8u;
        goto label_2e7db8;
    }
    ctx->pc = 0x2E7DB0u;
    {
        const bool branch_taken_0x2e7db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7db0) {
            ctx->pc = 0x2E7DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DB0u;
            // 0x2e7db4: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7DCCu;
            goto label_2e7dcc;
        }
    }
    ctx->pc = 0x2E7DB8u;
label_2e7db8:
    // 0x2e7db8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e7dbc:
    // 0x2e7dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e7dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e7dc0:
    // 0x2e7dc0: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
label_2e7dc4:
    if (ctx->pc == 0x2E7DC4u) {
        ctx->pc = 0x2E7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DC0u;
        // 0x2e7dc4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DC8u;
        goto label_2e7dc8;
    }
    ctx->pc = 0x2E7DC0u;
    {
        const bool branch_taken_0x2e7dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DC0u;
        // 0x2e7dc4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dc0) {
            ctx->pc = 0x2E80A8u;
            goto label_2e80a8;
        }
    }
    ctx->pc = 0x2E7DC8u;
label_2e7dc8:
    // 0x2e7dc8: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2e7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e7dcc:
    // 0x2e7dcc: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2e7dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2e7dd0:
    // 0x2e7dd0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2e7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2e7dd4:
    // 0x2e7dd4: 0x106400b3  beq         $v1, $a0, . + 4 + (0xB3 << 2)
label_2e7dd8:
    if (ctx->pc == 0x2E7DD8u) {
        ctx->pc = 0x2E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DD4u;
        // 0x2e7dd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DDCu;
        goto label_2e7ddc;
    }
    ctx->pc = 0x2E7DD4u;
    {
        const bool branch_taken_0x2e7dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DD4u;
        // 0x2e7dd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dd4) {
            ctx->pc = 0x2E80A4u;
            goto label_2e80a4;
        }
    }
    ctx->pc = 0x2E7DDCu;
label_2e7ddc:
    // 0x2e7ddc: 0xc08dab6  jal         func_236AD8
label_2e7de0:
    if (ctx->pc == 0x2E7DE0u) {
        ctx->pc = 0x2E7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DDCu;
        // 0x2e7de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DE4u;
        goto label_2e7de4;
    }
    ctx->pc = 0x2E7DDCu;
    SET_GPR_U32(ctx, 31, 0x2E7DE4u);
    ctx->pc = 0x2E7DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DDCu;
    // 0x2e7de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2E7DDCu, 0x2E7DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DE4u;
label_2e7de4:
    // 0x2e7de4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2e7de8:
    if (ctx->pc == 0x2E7DE8u) {
        ctx->pc = 0x2E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DE4u;
        // 0x2e7de8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DECu;
        goto label_2e7dec;
    }
    ctx->pc = 0x2E7DE4u;
    {
        const bool branch_taken_0x2e7de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7de4) {
            ctx->pc = 0x2E7DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DE4u;
            // 0x2e7de8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E00u;
            goto label_2e7e00;
        }
    }
    ctx->pc = 0x2E7DECu;
label_2e7dec:
    // 0x2e7dec: 0xc08db10  jal         func_236C40
label_2e7df0:
    if (ctx->pc == 0x2E7DF0u) {
        ctx->pc = 0x2E7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DECu;
        // 0x2e7df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DF4u;
        goto label_2e7df4;
    }
    ctx->pc = 0x2E7DECu;
    SET_GPR_U32(ctx, 31, 0x2E7DF4u);
    ctx->pc = 0x2E7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DECu;
    // 0x2e7df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C40u, 0x2E7DECu, 0x2E7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DF4u;
label_2e7df4:
    // 0x2e7df4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2e7df8:
    if (ctx->pc == 0x2E7DF8u) {
        ctx->pc = 0x2E7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DF4u;
        // 0x2e7df8: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DFCu;
        goto label_2e7dfc;
    }
    ctx->pc = 0x2E7DF4u;
    {
        const bool branch_taken_0x2e7df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7df4) {
            ctx->pc = 0x2E7DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DF4u;
            // 0x2e7df8: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E04u;
            goto label_2e7e04;
        }
    }
    ctx->pc = 0x2E7DFCu;
label_2e7dfc:
    // 0x2e7dfc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e7dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7e00:
    // 0x2e7e00: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2e7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2e7e04:
    // 0x2e7e04: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e7e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2e7e08:
    // 0x2e7e08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e7e0c:
    if (ctx->pc == 0x2E7E0Cu) {
        ctx->pc = 0x2E7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E08u;
        // 0x2e7e0c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E10u;
        goto label_2e7e10;
    }
    ctx->pc = 0x2E7E08u;
    {
        const bool branch_taken_0x2e7e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E08u;
        // 0x2e7e0c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e08) {
            ctx->pc = 0x2E7E14u;
            goto label_2e7e14;
        }
    }
    ctx->pc = 0x2E7E10u;
label_2e7e10:
    // 0x2e7e10: 0x3a330001  xori        $s3, $s1, 0x1
    ctx->pc = 0x2e7e10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_2e7e14:
    // 0x2e7e14: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_2e7e18:
    if (ctx->pc == 0x2E7E18u) {
        ctx->pc = 0x2E7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E14u;
        // 0x2e7e18: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E1Cu;
        goto label_2e7e1c;
    }
    ctx->pc = 0x2E7E14u;
    {
        const bool branch_taken_0x2e7e14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E14u;
        // 0x2e7e18: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e14) {
            ctx->pc = 0x2E7E48u;
            goto label_2e7e48;
        }
    }
    ctx->pc = 0x2E7E1Cu;
label_2e7e1c:
    // 0x2e7e1c: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2e7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e7e20:
    // 0x2e7e20: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_2e7e24:
    if (ctx->pc == 0x2E7E24u) {
        ctx->pc = 0x2E7E28u;
        goto label_2e7e28;
    }
    ctx->pc = 0x2E7E20u;
    {
        const bool branch_taken_0x2e7e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e7e20) {
            ctx->pc = 0x2E7E48u;
            goto label_2e7e48;
        }
    }
    ctx->pc = 0x2E7E28u;
label_2e7e28:
    // 0x2e7e28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2e7e2c:
    if (ctx->pc == 0x2E7E2Cu) {
        ctx->pc = 0x2E7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E28u;
        // 0x2e7e2c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E30u;
        goto label_2e7e30;
    }
    ctx->pc = 0x2E7E28u;
    {
        const bool branch_taken_0x2e7e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E28u;
        // 0x2e7e2c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e28) {
            ctx->pc = 0x2E7E48u;
            goto label_2e7e48;
        }
    }
    ctx->pc = 0x2E7E30u;
label_2e7e30:
    // 0x2e7e30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7e34:
    if (ctx->pc == 0x2E7E34u) {
        ctx->pc = 0x2E7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E30u;
        // 0x2e7e34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E38u;
        goto label_2e7e38;
    }
    ctx->pc = 0x2E7E30u;
    {
        const bool branch_taken_0x2e7e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E30u;
        // 0x2e7e34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e30) {
            ctx->pc = 0x2E7E48u;
            goto label_2e7e48;
        }
    }
    ctx->pc = 0x2E7E38u;
label_2e7e38:
    // 0x2e7e38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2e7e3c:
    if (ctx->pc == 0x2E7E3Cu) {
        ctx->pc = 0x2E7E40u;
        goto label_2e7e40;
    }
    ctx->pc = 0x2E7E38u;
    {
        const bool branch_taken_0x2e7e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7e38) {
            ctx->pc = 0x2E7E48u;
            goto label_2e7e48;
        }
    }
    ctx->pc = 0x2E7E40u;
label_2e7e40:
    // 0x2e7e40: 0x10000173  b           . + 4 + (0x173 << 2)
label_2e7e44:
    if (ctx->pc == 0x2E7E44u) {
        ctx->pc = 0x2E7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E40u;
        // 0x2e7e44: 0xae0412bc  sw          $a0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E48u;
        goto label_2e7e48;
    }
    ctx->pc = 0x2E7E40u;
    {
        const bool branch_taken_0x2e7e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E40u;
        // 0x2e7e44: 0xae0412bc  sw          $a0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e40) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E7E48u;
label_2e7e48:
    // 0x2e7e48: 0x5240003c  beql        $s2, $zero, . + 4 + (0x3C << 2)
label_2e7e4c:
    if (ctx->pc == 0x2E7E4Cu) {
        ctx->pc = 0x2E7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E48u;
        // 0x2e7e4c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E50u;
        goto label_2e7e50;
    }
    ctx->pc = 0x2E7E48u;
    {
        const bool branch_taken_0x2e7e48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e48) {
            ctx->pc = 0x2E7E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7E48u;
            // 0x2e7e4c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F3Cu;
            goto label_2e7f3c;
        }
    }
    ctx->pc = 0x2E7E50u;
label_2e7e50:
    // 0x2e7e50: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e7e54:
    // 0x2e7e54: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2e7e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e7e58:
    // 0x2e7e58: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x2e7e58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_2e7e5c:
    // 0x2e7e5c: 0x10600154  beqz        $v1, . + 4 + (0x154 << 2)
label_2e7e60:
    if (ctx->pc == 0x2E7E60u) {
        ctx->pc = 0x2E7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E5Cu;
        // 0x2e7e60: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E64u;
        goto label_2e7e64;
    }
    ctx->pc = 0x2E7E5Cu;
    {
        const bool branch_taken_0x2e7e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E5Cu;
        // 0x2e7e60: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e5c) {
            ctx->pc = 0x2E83B0u;
            goto label_2e83b0;
        }
    }
    ctx->pc = 0x2E7E64u;
label_2e7e64:
    // 0x2e7e64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2e7e68:
    // 0x2e7e68: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x2e7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
label_2e7e6c:
    // 0x2e7e6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e7e70:
    // 0x2e7e70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e7e74:
    // 0x2e7e74: 0x800008  jr          $a0
label_2e7e78:
    if (ctx->pc == 0x2E7E78u) {
        ctx->pc = 0x2E7E7Cu;
        goto label_2e7e7c;
    }
    ctx->pc = 0x2E7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7E7Cu: goto label_2e7e7c;
            case 0x2E7EA4u: goto label_2e7ea4;
            case 0x2E7EB8u: goto label_2e7eb8;
            case 0x2E7F24u: goto label_2e7f24;
            case 0x2E83B0u: goto label_2e83b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7E74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E7E7Cu;
label_2e7e7c:
    // 0x2e7e7c: 0x8e02053c  lw          $v0, 0x53C($s0)
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1340)));
label_2e7e80:
    // 0x2e7e80: 0x1440014c  bnez        $v0, . + 4 + (0x14C << 2)
label_2e7e84:
    if (ctx->pc == 0x2E7E84u) {
        ctx->pc = 0x2E7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E80u;
        // 0x2e7e84: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E88u;
        goto label_2e7e88;
    }
    ctx->pc = 0x2E7E80u;
    {
        const bool branch_taken_0x2e7e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E80u;
        // 0x2e7e84: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e80) {
            ctx->pc = 0x2E83B4u;
            goto label_2e83b4;
        }
    }
    ctx->pc = 0x2E7E88u;
label_2e7e88:
    // 0x2e7e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7e8c:
    // 0x2e7e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7e90:
    // 0x2e7e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7e94:
    // 0x2e7e94: 0xc0bc58c  jal         func_2F1630
label_2e7e98:
    if (ctx->pc == 0x2E7E98u) {
        ctx->pc = 0x2E7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E94u;
        // 0x2e7e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E9Cu;
        goto label_2e7e9c;
    }
    ctx->pc = 0x2E7E94u;
    SET_GPR_U32(ctx, 31, 0x2E7E9Cu);
    ctx->pc = 0x2E7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E94u;
    // 0x2e7e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1630u, 0x2E7E94u, 0x2E7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E9Cu;
label_2e7e9c:
    // 0x2e7e9c: 0x10000145  b           . + 4 + (0x145 << 2)
label_2e7ea0:
    if (ctx->pc == 0x2E7EA0u) {
        ctx->pc = 0x2E7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E9Cu;
        // 0x2e7ea0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EA4u;
        goto label_2e7ea4;
    }
    ctx->pc = 0x2E7E9Cu;
    {
        const bool branch_taken_0x2e7e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E9Cu;
        // 0x2e7ea0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e9c) {
            ctx->pc = 0x2E83B4u;
            goto label_2e83b4;
        }
    }
    ctx->pc = 0x2E7EA4u;
label_2e7ea4:
    // 0x2e7ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ea8:
    // 0x2e7ea8: 0xc0bc032  jal         func_2F00C8
label_2e7eac:
    if (ctx->pc == 0x2E7EACu) {
        ctx->pc = 0x2E7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EA8u;
        // 0x2e7eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EB0u;
        goto label_2e7eb0;
    }
    ctx->pc = 0x2E7EA8u;
    SET_GPR_U32(ctx, 31, 0x2E7EB0u);
    ctx->pc = 0x2E7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7EA8u;
    // 0x2e7eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F00C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F00C8u, 0x2E7EA8u, 0x2E7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EB0u;
label_2e7eb0:
    // 0x2e7eb0: 0x10000140  b           . + 4 + (0x140 << 2)
label_2e7eb4:
    if (ctx->pc == 0x2E7EB4u) {
        ctx->pc = 0x2E7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EB0u;
        // 0x2e7eb4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EB8u;
        goto label_2e7eb8;
    }
    ctx->pc = 0x2E7EB0u;
    {
        const bool branch_taken_0x2e7eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EB0u;
        // 0x2e7eb4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7eb0) {
            ctx->pc = 0x2E83B4u;
            goto label_2e83b4;
        }
    }
    ctx->pc = 0x2E7EB8u;
label_2e7eb8:
    // 0x2e7eb8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e7ebc:
    // 0x2e7ebc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2e7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2e7ec0:
    // 0x2e7ec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e7ec4:
    // 0x2e7ec4: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_2e7ec8:
    if (ctx->pc == 0x2E7EC8u) {
        ctx->pc = 0x2E7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EC4u;
        // 0x2e7ec8: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7ECCu;
        goto label_2e7ecc;
    }
    ctx->pc = 0x2E7EC4u;
    {
        const bool branch_taken_0x2e7ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e7ec4) {
            ctx->pc = 0x2E7EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7EC4u;
            // 0x2e7ec8: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F04u;
            goto label_2e7f04;
        }
    }
    ctx->pc = 0x2E7ECCu;
label_2e7ecc:
    // 0x2e7ecc: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2e7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2e7ed0:
    // 0x2e7ed0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2e7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2e7ed4:
    // 0x2e7ed4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2e7ed8:
    if (ctx->pc == 0x2E7ED8u) {
        ctx->pc = 0x2E7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ED4u;
        // 0x2e7ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EDCu;
        goto label_2e7edc;
    }
    ctx->pc = 0x2E7ED4u;
    {
        const bool branch_taken_0x2e7ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ED4u;
        // 0x2e7ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ed4) {
            ctx->pc = 0x2E7EE0u;
            goto label_2e7ee0;
        }
    }
    ctx->pc = 0x2E7EDCu;
label_2e7edc:
    // 0x2e7edc: 0x8e0411e4  lw          $a0, 0x11E4($s0)
    ctx->pc = 0x2e7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2e7ee0:
    // 0x2e7ee0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2e7ee4:
    if (ctx->pc == 0x2E7EE4u) {
        ctx->pc = 0x2E7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EE0u;
        // 0x2e7ee4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EE8u;
        goto label_2e7ee8;
    }
    ctx->pc = 0x2E7EE0u;
    {
        const bool branch_taken_0x2e7ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EE0u;
        // 0x2e7ee4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ee0) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7EE8u;
label_2e7ee8:
    // 0x2e7ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7eec:
    // 0x2e7eec: 0xc07146c  jal         func_1C51B0
label_2e7ef0:
    if (ctx->pc == 0x2E7EF0u) {
        ctx->pc = 0x2E7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EECu;
        // 0x2e7ef0: 0xc44c96c0  lwc1        $f12, -0x6940($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EF4u;
        goto label_2e7ef4;
    }
    ctx->pc = 0x2E7EECu;
    SET_GPR_U32(ctx, 31, 0x2E7EF4u);
    ctx->pc = 0x2E7EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7EECu;
    // 0x2e7ef0: 0xc44c96c0  lwc1        $f12, -0x6940($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C51B0u, 0x2E7EECu, 0x2E7EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7EF4u;
label_2e7ef4:
    // 0x2e7ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ef8:
    // 0x2e7ef8: 0xc08dbd8  jal         func_236F60
label_2e7efc:
    if (ctx->pc == 0x2E7EFCu) {
        ctx->pc = 0x2E7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EF8u;
        // 0x2e7efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F00u;
        goto label_2e7f00;
    }
    ctx->pc = 0x2E7EF8u;
    SET_GPR_U32(ctx, 31, 0x2E7F00u);
    ctx->pc = 0x2E7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7EF8u;
    // 0x2e7efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x2E7EF8u, 0x2E7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F00u;
label_2e7f00:
    // 0x2e7f00: 0x8e040388  lw          $a0, 0x388($s0)
    ctx->pc = 0x2e7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2e7f04:
    // 0x2e7f04: 0x1080012b  beqz        $a0, . + 4 + (0x12B << 2)
label_2e7f08:
    if (ctx->pc == 0x2E7F08u) {
        ctx->pc = 0x2E7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F04u;
        // 0x2e7f08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F0Cu;
        goto label_2e7f0c;
    }
    ctx->pc = 0x2E7F04u;
    {
        const bool branch_taken_0x2e7f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F04u;
        // 0x2e7f08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f04) {
            ctx->pc = 0x2E83B4u;
            goto label_2e83b4;
        }
    }
    ctx->pc = 0x2E7F0Cu;
label_2e7f0c:
    // 0x2e7f0c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2e7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2e7f10:
    // 0x2e7f10: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e7f14:
    // 0x2e7f14: 0x40f809  jalr        $v0
label_2e7f18:
    if (ctx->pc == 0x2E7F18u) {
        ctx->pc = 0x2E7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F14u;
        // 0x2e7f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F1Cu;
        goto label_2e7f1c;
    }
    ctx->pc = 0x2E7F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7F1Cu);
        ctx->pc = 0x2E7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F14u;
        // 0x2e7f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F14u, 0x2E7F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7F1Cu;
label_2e7f1c:
    // 0x2e7f1c: 0x10000125  b           . + 4 + (0x125 << 2)
label_2e7f20:
    if (ctx->pc == 0x2E7F20u) {
        ctx->pc = 0x2E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F1Cu;
        // 0x2e7f20: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F24u;
        goto label_2e7f24;
    }
    ctx->pc = 0x2E7F1Cu;
    {
        const bool branch_taken_0x2e7f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F1Cu;
        // 0x2e7f20: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f1c) {
            ctx->pc = 0x2E83B4u;
            goto label_2e83b4;
        }
    }
    ctx->pc = 0x2E7F24u;
label_2e7f24:
    // 0x2e7f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f28:
    // 0x2e7f28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7f2c:
    // 0x2e7f2c: 0xc08d84e  jal         func_236138
label_2e7f30:
    if (ctx->pc == 0x2E7F30u) {
        ctx->pc = 0x2E7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F2Cu;
        // 0x2e7f30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F34u;
        goto label_2e7f34;
    }
    ctx->pc = 0x2E7F2Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F34u);
    ctx->pc = 0x2E7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F2Cu;
    // 0x2e7f30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236138u, 0x2E7F2Cu, 0x2E7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F34u;
label_2e7f34:
    // 0x2e7f34: 0x1000011f  b           . + 4 + (0x11F << 2)
label_2e7f38:
    if (ctx->pc == 0x2E7F38u) {
        ctx->pc = 0x2E7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F34u;
        // 0x2e7f38: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F3Cu;
        goto label_2e7f3c;
    }
    ctx->pc = 0x2E7F34u;
    {
        const bool branch_taken_0x2e7f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F34u;
        // 0x2e7f38: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f34) {
            ctx->pc = 0x2E83B4u;
            goto label_2e83b4;
        }
    }
    ctx->pc = 0x2E7F3Cu;
label_2e7f3c:
    // 0x2e7f3c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e7f40:
    // 0x2e7f40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2e7f44:
    if (ctx->pc == 0x2E7F44u) {
        ctx->pc = 0x2E7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F40u;
        // 0x2e7f44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F48u;
        goto label_2e7f48;
    }
    ctx->pc = 0x2E7F40u;
    {
        const bool branch_taken_0x2e7f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F40u;
        // 0x2e7f44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f40) {
            ctx->pc = 0x2E7F60u;
            goto label_2e7f60;
        }
    }
    ctx->pc = 0x2E7F48u;
label_2e7f48:
    // 0x2e7f48: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7f4c:
    if (ctx->pc == 0x2E7F4Cu) {
        ctx->pc = 0x2E7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F48u;
        // 0x2e7f4c: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F50u;
        goto label_2e7f50;
    }
    ctx->pc = 0x2E7F48u;
    {
        const bool branch_taken_0x2e7f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F48u;
        // 0x2e7f4c: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f48) {
            ctx->pc = 0x2E7F60u;
            goto label_2e7f60;
        }
    }
    ctx->pc = 0x2E7F50u;
label_2e7f50:
    // 0x2e7f50: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
label_2e7f54:
    if (ctx->pc == 0x2E7F54u) {
        ctx->pc = 0x2E7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F50u;
        // 0x2e7f54: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F58u;
        goto label_2e7f58;
    }
    ctx->pc = 0x2E7F50u;
    {
        const bool branch_taken_0x2e7f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F50u;
        // 0x2e7f54: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f50) {
            ctx->pc = 0x2E7F60u;
            goto label_2e7f60;
        }
    }
    ctx->pc = 0x2E7F58u;
label_2e7f58:
    // 0x2e7f58: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_2e7f5c:
    if (ctx->pc == 0x2E7F5Cu) {
        ctx->pc = 0x2E7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F58u;
        // 0x2e7f5c: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F60u;
        goto label_2e7f60;
    }
    ctx->pc = 0x2E7F58u;
    {
        const bool branch_taken_0x2e7f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7f58) {
            ctx->pc = 0x2E7F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F58u;
            // 0x2e7f5c: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F68u;
            goto label_2e7f68;
        }
    }
    ctx->pc = 0x2E7F60u;
label_2e7f60:
    // 0x2e7f60: 0x1000012b  b           . + 4 + (0x12B << 2)
label_2e7f64:
    if (ctx->pc == 0x2E7F64u) {
        ctx->pc = 0x2E7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F60u;
        // 0x2e7f64: 0xae0012bc  sw          $zero, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F68u;
        goto label_2e7f68;
    }
    ctx->pc = 0x2E7F60u;
    {
        const bool branch_taken_0x2e7f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F60u;
        // 0x2e7f64: 0xae0012bc  sw          $zero, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f60) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E7F68u;
label_2e7f68:
    // 0x2e7f68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e7f6c:
    if (ctx->pc == 0x2E7F6Cu) {
        ctx->pc = 0x2E7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F68u;
        // 0x2e7f6c: 0xae1112bc  sw          $s1, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F70u;
        goto label_2e7f70;
    }
    ctx->pc = 0x2E7F68u;
    {
        const bool branch_taken_0x2e7f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f68) {
            ctx->pc = 0x2E7F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F68u;
            // 0x2e7f6c: 0xae1112bc  sw          $s1, 0x12BC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F70u;
            goto label_2e7f70;
        }
    }
    ctx->pc = 0x2E7F70u;
label_2e7f70:
    // 0x2e7f70: 0x566000af  bnel        $s3, $zero, . + 4 + (0xAF << 2)
label_2e7f74:
    if (ctx->pc == 0x2E7F74u) {
        ctx->pc = 0x2E7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F70u;
        // 0x2e7f74: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F78u;
        goto label_2e7f78;
    }
    ctx->pc = 0x2E7F70u;
    {
        const bool branch_taken_0x2e7f70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f70) {
            ctx->pc = 0x2E7F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F70u;
            // 0x2e7f74: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8230u;
            goto label_2e8230;
        }
    }
    ctx->pc = 0x2E7F78u;
label_2e7f78:
    // 0x2e7f78: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e7f7c:
    // 0x2e7f7c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2e7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2e7f80:
    // 0x2e7f80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e7f84:
    // 0x2e7f84: 0x5443004a  bnel        $v0, $v1, . + 4 + (0x4A << 2)
label_2e7f88:
    if (ctx->pc == 0x2E7F88u) {
        ctx->pc = 0x2E7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F84u;
        // 0x2e7f88: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F8Cu;
        goto label_2e7f8c;
    }
    ctx->pc = 0x2E7F84u;
    {
        const bool branch_taken_0x2e7f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e7f84) {
            ctx->pc = 0x2E7F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F84u;
            // 0x2e7f88: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E80B0u;
            goto label_2e80b0;
        }
    }
    ctx->pc = 0x2E7F8Cu;
label_2e7f8c:
    // 0x2e7f8c: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2e7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2e7f90:
    // 0x2e7f90: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2e7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2e7f94:
    // 0x2e7f94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2e7f98:
    if (ctx->pc == 0x2E7F98u) {
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F94u;
        // 0x2e7f98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F9Cu;
        goto label_2e7f9c;
    }
    ctx->pc = 0x2E7F94u;
    {
        const bool branch_taken_0x2e7f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F94u;
        // 0x2e7f98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f94) {
            ctx->pc = 0x2E7FA0u;
            goto label_2e7fa0;
        }
    }
    ctx->pc = 0x2E7F9Cu;
label_2e7f9c:
    // 0x2e7f9c: 0x8e0411e4  lw          $a0, 0x11E4($s0)
    ctx->pc = 0x2e7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2e7fa0:
    // 0x2e7fa0: 0x50800030  beql        $a0, $zero, . + 4 + (0x30 << 2)
label_2e7fa4:
    if (ctx->pc == 0x2E7FA4u) {
        ctx->pc = 0x2E7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FA0u;
        // 0x2e7fa4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FA8u;
        goto label_2e7fa8;
    }
    ctx->pc = 0x2E7FA0u;
    {
        const bool branch_taken_0x2e7fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fa0) {
            ctx->pc = 0x2E7FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7FA0u;
            // 0x2e7fa4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8064u;
            goto label_2e8064;
        }
    }
    ctx->pc = 0x2E7FA8u;
label_2e7fa8:
    // 0x2e7fa8: 0x8e020388  lw          $v0, 0x388($s0)
    ctx->pc = 0x2e7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2e7fac:
    // 0x2e7fac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2e7fb0:
    if (ctx->pc == 0x2E7FB0u) {
        ctx->pc = 0x2E7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FACu;
        // 0x2e7fb0: 0x8e030388  lw          $v1, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FB4u;
        goto label_2e7fb4;
    }
    ctx->pc = 0x2E7FACu;
    {
        const bool branch_taken_0x2e7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fac) {
            ctx->pc = 0x2E7FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7FACu;
            // 0x2e7fb0: 0x8e030388  lw          $v1, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7FE0u;
            goto label_2e7fe0;
        }
    }
    ctx->pc = 0x2E7FB4u;
label_2e7fb4:
    // 0x2e7fb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e7fb8:
    // 0x2e7fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7fbc:
    // 0x2e7fbc: 0xc07146c  jal         func_1C51B0
label_2e7fc0:
    if (ctx->pc == 0x2E7FC0u) {
        ctx->pc = 0x2E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FBCu;
        // 0x2e7fc0: 0xc44c96c0  lwc1        $f12, -0x6940($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FC4u;
        goto label_2e7fc4;
    }
    ctx->pc = 0x2E7FBCu;
    SET_GPR_U32(ctx, 31, 0x2E7FC4u);
    ctx->pc = 0x2E7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FBCu;
    // 0x2e7fc0: 0xc44c96c0  lwc1        $f12, -0x6940($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C51B0u, 0x2E7FBCu, 0x2E7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FC4u;
label_2e7fc4:
    // 0x2e7fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7fc8:
    // 0x2e7fc8: 0xc08dbd8  jal         func_236F60
label_2e7fcc:
    if (ctx->pc == 0x2E7FCCu) {
        ctx->pc = 0x2E7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FC8u;
        // 0x2e7fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FD0u;
        goto label_2e7fd0;
    }
    ctx->pc = 0x2E7FC8u;
    SET_GPR_U32(ctx, 31, 0x2E7FD0u);
    ctx->pc = 0x2E7FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FC8u;
    // 0x2e7fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x2E7FC8u, 0x2E7FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FD0u;
label_2e7fd0:
    // 0x2e7fd0: 0x8e020388  lw          $v0, 0x388($s0)
    ctx->pc = 0x2e7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2e7fd4:
    // 0x2e7fd4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2e7fd8:
    if (ctx->pc == 0x2E7FD8u) {
        ctx->pc = 0x2E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FD4u;
        // 0x2e7fd8: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FDCu;
        goto label_2e7fdc;
    }
    ctx->pc = 0x2E7FD4u;
    {
        const bool branch_taken_0x2e7fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fd4) {
            ctx->pc = 0x2E7FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7FD4u;
            // 0x2e7fd8: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8044u;
            goto label_2e8044;
        }
    }
    ctx->pc = 0x2E7FDCu;
label_2e7fdc:
    // 0x2e7fdc: 0x8e030388  lw          $v1, 0x388($s0)
    ctx->pc = 0x2e7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2e7fe0:
    // 0x2e7fe0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e7fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e7fe4:
    // 0x2e7fe4: 0x8c6300b8  lw          $v1, 0xB8($v1)
    ctx->pc = 0x2e7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_2e7fe8:
    // 0x2e7fe8: 0x846201c0  lh          $v0, 0x1C0($v1)
    ctx->pc = 0x2e7fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_2e7fec:
    // 0x2e7fec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e7ff0:
    if (ctx->pc == 0x2E7FF0u) {
        ctx->pc = 0x2E7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FECu;
        // 0x2e7ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FF4u;
        goto label_2e7ff4;
    }
    ctx->pc = 0x2E7FECu;
    {
        const bool branch_taken_0x2e7fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FECu;
        // 0x2e7ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fec) {
            ctx->pc = 0x2E7FF8u;
            goto label_2e7ff8;
        }
    }
    ctx->pc = 0x2E7FF4u;
label_2e7ff4:
    // 0x2e7ff4: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x2e7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_2e7ff8:
    // 0x2e7ff8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2e7ffc:
    if (ctx->pc == 0x2E7FFCu) {
        ctx->pc = 0x2E7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FF8u;
        // 0x2e7ffc: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8000u;
        goto label_2e8000;
    }
    ctx->pc = 0x2E7FF8u;
    {
        const bool branch_taken_0x2e7ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ff8) {
            ctx->pc = 0x2E7FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7FF8u;
            // 0x2e7ffc: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8044u;
            goto label_2e8044;
        }
    }
    ctx->pc = 0x2E8000u;
label_2e8000:
    // 0x2e8000: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x2e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2e8004:
    // 0x2e8004: 0x846201c0  lh          $v0, 0x1C0($v1)
    ctx->pc = 0x2e8004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_2e8008:
    // 0x2e8008: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e800c:
    if (ctx->pc == 0x2E800Cu) {
        ctx->pc = 0x2E800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8008u;
        // 0x2e800c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8010u;
        goto label_2e8010;
    }
    ctx->pc = 0x2E8008u;
    {
        const bool branch_taken_0x2e8008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8008u;
        // 0x2e800c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8008) {
            ctx->pc = 0x2E8014u;
            goto label_2e8014;
        }
    }
    ctx->pc = 0x2E8010u;
label_2e8010:
    // 0x2e8010: 0x8c6401bc  lw          $a0, 0x1BC($v1)
    ctx->pc = 0x2e8010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_2e8014:
    // 0x2e8014: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2e8014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2e8018:
    // 0x2e8018: 0xc0efb95  jal         func_3BEE54
label_2e801c:
    if (ctx->pc == 0x2E801Cu) {
        ctx->pc = 0x2E801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8018u;
        // 0x2e801c: 0x24a51758  addiu       $a1, $a1, 0x1758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8020u;
        goto label_2e8020;
    }
    ctx->pc = 0x2E8018u;
    SET_GPR_U32(ctx, 31, 0x2E8020u);
    ctx->pc = 0x2E801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8018u;
    // 0x2e801c: 0x24a51758  addiu       $a1, $a1, 0x1758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2E8018u, 0x2E8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8020u;
label_2e8020:
    // 0x2e8020: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2e8024:
    if (ctx->pc == 0x2E8024u) {
        ctx->pc = 0x2E8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8020u;
        // 0x2e8024: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8028u;
        goto label_2e8028;
    }
    ctx->pc = 0x2E8020u;
    {
        const bool branch_taken_0x2e8020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8020) {
            ctx->pc = 0x2E8024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8020u;
            // 0x2e8024: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8044u;
            goto label_2e8044;
        }
    }
    ctx->pc = 0x2E8028u;
label_2e8028:
    // 0x2e8028: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2e8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e802c:
    // 0x2e802c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2e802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2e8030:
    // 0x2e8030: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2e8030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2e8034:
    // 0x2e8034: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
label_2e8038:
    if (ctx->pc == 0x2E8038u) {
        ctx->pc = 0x2E8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8034u;
        // 0x2e8038: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E803Cu;
        goto label_2e803c;
    }
    ctx->pc = 0x2E8034u;
    {
        const bool branch_taken_0x2e8034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8034u;
        // 0x2e8038: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8034) {
            ctx->pc = 0x2E80A4u;
            goto label_2e80a4;
        }
    }
    ctx->pc = 0x2E803Cu;
label_2e803c:
    // 0x2e803c: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_2e8040:
    if (ctx->pc == 0x2E8040u) {
        ctx->pc = 0x2E8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E803Cu;
        // 0x2e8040: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8044u;
        goto label_2e8044;
    }
    ctx->pc = 0x2E803Cu;
    {
        const bool branch_taken_0x2e803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E803Cu;
        // 0x2e8040: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e803c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8044u;
label_2e8044:
    // 0x2e8044: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e8048:
    // 0x2e8048: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2e804c:
    if (ctx->pc == 0x2E804Cu) {
        ctx->pc = 0x2E804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8048u;
        // 0x2e804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8050u;
        goto label_2e8050;
    }
    ctx->pc = 0x2E8048u;
    {
        const bool branch_taken_0x2e8048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8048u;
        // 0x2e804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8048) {
            ctx->pc = 0x2E8058u;
            goto label_2e8058;
        }
    }
    ctx->pc = 0x2E8050u;
label_2e8050:
    // 0x2e8050: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e8050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8054:
    // 0x2e8054: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e8054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2e8058:
    // 0x2e8058: 0xc08dbd8  jal         func_236F60
label_2e805c:
    if (ctx->pc == 0x2E805Cu) {
        ctx->pc = 0x2E805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8058u;
        // 0x2e805c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8060u;
        goto label_2e8060;
    }
    ctx->pc = 0x2E8058u;
    SET_GPR_U32(ctx, 31, 0x2E8060u);
    ctx->pc = 0x2E805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8058u;
    // 0x2e805c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x2E8058u, 0x2E8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8060u;
label_2e8060:
    // 0x2e8060: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2e8064:
    // 0x2e8064: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e8064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2e8068:
    // 0x2e8068: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2e806c:
    if (ctx->pc == 0x2E806Cu) {
        ctx->pc = 0x2E806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8068u;
        // 0x2e806c: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8070u;
        goto label_2e8070;
    }
    ctx->pc = 0x2E8068u;
    {
        const bool branch_taken_0x2e8068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8068) {
            ctx->pc = 0x2E806Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8068u;
            // 0x2e806c: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8090u;
            goto label_2e8090;
        }
    }
    ctx->pc = 0x2E8070u;
label_2e8070:
    // 0x2e8070: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2e8070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e8074:
    // 0x2e8074: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2e8074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2e8078:
    // 0x2e8078: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2e8078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2e807c:
    // 0x2e807c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_2e8080:
    if (ctx->pc == 0x2E8080u) {
        ctx->pc = 0x2E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E807Cu;
        // 0x2e8080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8084u;
        goto label_2e8084;
    }
    ctx->pc = 0x2E807Cu;
    {
        const bool branch_taken_0x2e807c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E807Cu;
        // 0x2e8080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e807c) {
            ctx->pc = 0x2E808Cu;
            goto label_2e808c;
        }
    }
    ctx->pc = 0x2E8084u;
label_2e8084:
    // 0x2e8084: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_2e8088:
    if (ctx->pc == 0x2E8088u) {
        ctx->pc = 0x2E8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8084u;
        // 0x2e8088: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E808Cu;
        goto label_2e808c;
    }
    ctx->pc = 0x2E8084u;
    {
        const bool branch_taken_0x2e8084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8084u;
        // 0x2e8088: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8084) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E808Cu;
label_2e808c:
    // 0x2e808c: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2e808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e8090:
    // 0x2e8090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8094:
    // 0x2e8094: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2e8098:
    if (ctx->pc == 0x2E8098u) {
        ctx->pc = 0x2E8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8094u;
        // 0x2e8098: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E809Cu;
        goto label_2e809c;
    }
    ctx->pc = 0x2E8094u;
    {
        const bool branch_taken_0x2e8094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8094u;
        // 0x2e8098: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8094) {
            ctx->pc = 0x2E80A4u;
            goto label_2e80a4;
        }
    }
    ctx->pc = 0x2E809Cu;
label_2e809c:
    // 0x2e809c: 0x546200dd  bnel        $v1, $v0, . + 4 + (0xDD << 2)
label_2e80a0:
    if (ctx->pc == 0x2E80A0u) {
        ctx->pc = 0x2E80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E809Cu;
        // 0x2e80a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80A4u;
        goto label_2e80a4;
    }
    ctx->pc = 0x2E809Cu;
    {
        const bool branch_taken_0x2e809c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e809c) {
            ctx->pc = 0x2E80A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E809Cu;
            // 0x2e80a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8414u;
            goto label_2e8414;
        }
    }
    ctx->pc = 0x2E80A4u;
label_2e80a4:
    // 0x2e80a4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e80a8:
    // 0x2e80a8: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_2e80ac:
    if (ctx->pc == 0x2E80ACu) {
        ctx->pc = 0x2E80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A8u;
        // 0x2e80ac: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80B0u;
        goto label_2e80b0;
    }
    ctx->pc = 0x2E80A8u;
    {
        const bool branch_taken_0x2e80a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A8u;
        // 0x2e80ac: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80a8) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E80B0u;
label_2e80b0:
    // 0x2e80b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e80b4:
    // 0x2e80b4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2e80b8:
    if (ctx->pc == 0x2E80B8u) {
        ctx->pc = 0x2E80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80B4u;
        // 0x2e80b8: 0xae1112bc  sw          $s1, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80BCu;
        goto label_2e80bc;
    }
    ctx->pc = 0x2E80B4u;
    {
        const bool branch_taken_0x2e80b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e80b4) {
            ctx->pc = 0x2E80B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E80B4u;
            // 0x2e80b8: 0xae1112bc  sw          $s1, 0x12BC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E80BCu;
            goto label_2e80bc;
        }
    }
    ctx->pc = 0x2E80BCu;
label_2e80bc:
    // 0x2e80bc: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e80c0:
    // 0x2e80c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2e80c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e80c4:
    // 0x2e80c4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_2e80c8:
    if (ctx->pc == 0x2E80C8u) {
        ctx->pc = 0x2E80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80C4u;
        // 0x2e80c8: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80CCu;
        goto label_2e80cc;
    }
    ctx->pc = 0x2E80C4u;
    {
        const bool branch_taken_0x2e80c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e80c4) {
            ctx->pc = 0x2E80C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E80C4u;
            // 0x2e80c8: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8144u;
            goto label_2e8144;
        }
    }
    ctx->pc = 0x2E80CCu;
label_2e80cc:
    // 0x2e80cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e80d0:
    // 0x2e80d0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e80d4:
    // 0x2e80d4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e80d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e80d8:
    // 0x2e80d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e80d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e80dc:
    // 0x2e80dc: 0xc440b7f8  lwc1        $f0, -0x4808($v0)
    ctx->pc = 0x2e80dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e80e0:
    // 0x2e80e0: 0xc60112c8  lwc1        $f1, 0x12C8($s0)
    ctx->pc = 0x2e80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e80e4:
    // 0x2e80e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e80e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2e80e8:
    // 0x2e80e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e80e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e80ec:
    // 0x2e80ec: 0x0  nop
    ctx->pc = 0x2e80ecu;
    // NOP
label_2e80f0:
    // 0x2e80f0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2e80f4:
    if (ctx->pc == 0x2E80F4u) {
        ctx->pc = 0x2E80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80F0u;
        // 0x2e80f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80F8u;
        goto label_2e80f8;
    }
    ctx->pc = 0x2E80F0u;
    {
        const bool branch_taken_0x2e80f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80F0u;
        // 0x2e80f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80f0) {
            ctx->pc = 0x2E8140u;
            goto label_2e8140;
        }
    }
    ctx->pc = 0x2E80F8u;
label_2e80f8:
    // 0x2e80f8: 0xc0bc032  jal         func_2F00C8
label_2e80fc:
    if (ctx->pc == 0x2E80FCu) {
        ctx->pc = 0x2E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80F8u;
        // 0x2e80fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8100u;
        goto label_2e8100;
    }
    ctx->pc = 0x2E80F8u;
    SET_GPR_U32(ctx, 31, 0x2E8100u);
    ctx->pc = 0x2E80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E80F8u;
    // 0x2e80fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F00C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F00C8u, 0x2E80F8u, 0x2E8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8100u;
label_2e8100:
    // 0x2e8100: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2e8104:
    if (ctx->pc == 0x2E8104u) {
        ctx->pc = 0x2E8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8100u;
        // 0x2e8104: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8108u;
        goto label_2e8108;
    }
    ctx->pc = 0x2E8100u;
    {
        const bool branch_taken_0x2e8100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8100) {
            ctx->pc = 0x2E8104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8100u;
            // 0x2e8104: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8130u;
            goto label_2e8130;
        }
    }
    ctx->pc = 0x2E8108u;
label_2e8108:
    // 0x2e8108: 0x8e031200  lw          $v1, 0x1200($s0)
    ctx->pc = 0x2e8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_2e810c:
    // 0x2e810c: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x2e810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
label_2e8110:
    // 0x2e8110: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e8110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2e8114:
    // 0x2e8114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8118:
    if (ctx->pc == 0x2E8118u) {
        ctx->pc = 0x2E8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8114u;
        // 0x2e8118: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E811Cu;
        goto label_2e811c;
    }
    ctx->pc = 0x2E8114u;
    {
        const bool branch_taken_0x2e8114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8114u;
        // 0x2e8118: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8114) {
            ctx->pc = 0x2E8124u;
            goto label_2e8124;
        }
    }
    ctx->pc = 0x2E811Cu;
label_2e811c:
    // 0x2e811c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_2e8120:
    if (ctx->pc == 0x2E8120u) {
        ctx->pc = 0x2E8120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E811Cu;
        // 0x2e8120: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8124u;
        goto label_2e8124;
    }
    ctx->pc = 0x2E811Cu;
    {
        const bool branch_taken_0x2e811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E811Cu;
        // 0x2e8120: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e811c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8124u;
label_2e8124:
    // 0x2e8124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e8128:
    // 0x2e8128: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2e812c:
    if (ctx->pc == 0x2E812Cu) {
        ctx->pc = 0x2E812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8128u;
        // 0x2e812c: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8130u;
        goto label_2e8130;
    }
    ctx->pc = 0x2E8128u;
    {
        const bool branch_taken_0x2e8128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8128u;
        // 0x2e812c: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8128) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8130u;
label_2e8130:
    // 0x2e8130: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2e8130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2e8134:
    // 0x2e8134: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e8134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e8138:
    // 0x2e8138: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2e813c:
    if (ctx->pc == 0x2E813Cu) {
        ctx->pc = 0x2E813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8138u;
        // 0x2e813c: 0xae1112bc  sw          $s1, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8140u;
        goto label_2e8140;
    }
    ctx->pc = 0x2E8138u;
    {
        const bool branch_taken_0x2e8138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8138) {
            ctx->pc = 0x2E813Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8138u;
            // 0x2e813c: 0xae1112bc  sw          $s1, 0x12BC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8140u;
            goto label_2e8140;
        }
    }
    ctx->pc = 0x2E8140u;
label_2e8140:
    // 0x2e8140: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e8144:
    // 0x2e8144: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2e8144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e8148:
    // 0x2e8148: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2e814c:
    if (ctx->pc == 0x2E814Cu) {
        ctx->pc = 0x2E814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8148u;
        // 0x2e814c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8150u;
        goto label_2e8150;
    }
    ctx->pc = 0x2E8148u;
    {
        const bool branch_taken_0x2e8148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8148u;
        // 0x2e814c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8148) {
            ctx->pc = 0x2E81A4u;
            goto label_2e81a4;
        }
    }
    ctx->pc = 0x2E8150u;
label_2e8150:
    // 0x2e8150: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e8150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e8154:
    // 0x2e8154: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e8154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e8158:
    // 0x2e8158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e8158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e815c:
    // 0x2e815c: 0xc440b7f8  lwc1        $f0, -0x4808($v0)
    ctx->pc = 0x2e815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8160:
    // 0x2e8160: 0xc60112c0  lwc1        $f1, 0x12C0($s0)
    ctx->pc = 0x2e8160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8164:
    // 0x2e8164: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e8164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2e8168:
    // 0x2e8168: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e8168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e816c:
    // 0x2e816c: 0x0  nop
    ctx->pc = 0x2e816cu;
    // NOP
label_2e8170:
    // 0x2e8170: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2e8174:
    if (ctx->pc == 0x2E8174u) {
        ctx->pc = 0x2E8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8170u;
        // 0x2e8174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8178u;
        goto label_2e8178;
    }
    ctx->pc = 0x2E8170u;
    {
        const bool branch_taken_0x2e8170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8170u;
        // 0x2e8174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8170) {
            ctx->pc = 0x2E81A4u;
            goto label_2e81a4;
        }
    }
    ctx->pc = 0x2E8178u;
label_2e8178:
    // 0x2e8178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e817c:
    // 0x2e817c: 0xc0bc120  jal         func_2F0480
label_2e8180:
    if (ctx->pc == 0x2E8180u) {
        ctx->pc = 0x2E8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E817Cu;
        // 0x2e8180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8184u;
        goto label_2e8184;
    }
    ctx->pc = 0x2E817Cu;
    SET_GPR_U32(ctx, 31, 0x2E8184u);
    ctx->pc = 0x2E8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E817Cu;
    // 0x2e8180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0480u, 0x2E817Cu, 0x2E8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8184u;
label_2e8184:
    // 0x2e8184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8188:
    if (ctx->pc == 0x2E8188u) {
        ctx->pc = 0x2E8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8184u;
        // 0x2e8188: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E818Cu;
        goto label_2e818c;
    }
    ctx->pc = 0x2E8184u;
    {
        const bool branch_taken_0x2e8184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8184u;
        // 0x2e8188: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8184) {
            ctx->pc = 0x2E8194u;
            goto label_2e8194;
        }
    }
    ctx->pc = 0x2E818Cu;
label_2e818c:
    // 0x2e818c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2e8190:
    if (ctx->pc == 0x2E8190u) {
        ctx->pc = 0x2E8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E818Cu;
        // 0x2e8190: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8194u;
        goto label_2e8194;
    }
    ctx->pc = 0x2E818Cu;
    {
        const bool branch_taken_0x2e818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E818Cu;
        // 0x2e8190: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e818c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8194u;
label_2e8194:
    // 0x2e8194: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2e8194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e8198:
    // 0x2e8198: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2e819c:
    if (ctx->pc == 0x2E819Cu) {
        ctx->pc = 0x2E819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8198u;
        // 0x2e819c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81A0u;
        goto label_2e81a0;
    }
    ctx->pc = 0x2E8198u;
    {
        const bool branch_taken_0x2e8198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8198u;
        // 0x2e819c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8198) {
            ctx->pc = 0x2E81A4u;
            goto label_2e81a4;
        }
    }
    ctx->pc = 0x2E81A0u;
label_2e81a0:
    // 0x2e81a0: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2e81a4:
    // 0x2e81a4: 0xc0ba10c  jal         func_2E8430
label_2e81a8:
    if (ctx->pc == 0x2E81A8u) {
        ctx->pc = 0x2E81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A4u;
        // 0x2e81a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81ACu;
        goto label_2e81ac;
    }
    ctx->pc = 0x2E81A4u;
    SET_GPR_U32(ctx, 31, 0x2E81ACu);
    ctx->pc = 0x2E81A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81A4u;
    // 0x2e81a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8430u, 0x2E81A4u, 0x2E81ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81ACu;
label_2e81ac:
    // 0x2e81ac: 0x54400099  bnel        $v0, $zero, . + 4 + (0x99 << 2)
label_2e81b0:
    if (ctx->pc == 0x2E81B0u) {
        ctx->pc = 0x2E81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81ACu;
        // 0x2e81b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81B4u;
        goto label_2e81b4;
    }
    ctx->pc = 0x2E81ACu;
    {
        const bool branch_taken_0x2e81ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e81ac) {
            ctx->pc = 0x2E81B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E81ACu;
            // 0x2e81b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8414u;
            goto label_2e8414;
        }
    }
    ctx->pc = 0x2E81B4u;
label_2e81b4:
    // 0x2e81b4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2e81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e81b8:
    // 0x2e81b8: 0x2403078f  addiu       $v1, $zero, 0x78F
    ctx->pc = 0x2e81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
label_2e81bc:
    // 0x2e81bc: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2e81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2e81c0:
    // 0x2e81c0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2e81c4:
    if (ctx->pc == 0x2E81C4u) {
        ctx->pc = 0x2E81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81C0u;
        // 0x2e81c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81C8u;
        goto label_2e81c8;
    }
    ctx->pc = 0x2E81C0u;
    {
        const bool branch_taken_0x2e81c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81C0u;
        // 0x2e81c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81c0) {
            ctx->pc = 0x2E81D4u;
            goto label_2e81d4;
        }
    }
    ctx->pc = 0x2E81C8u;
label_2e81c8:
    // 0x2e81c8: 0x920210ce  lbu         $v0, 0x10CE($s0)
    ctx->pc = 0x2e81c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4302)));
label_2e81cc:
    // 0x2e81cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2e81d0:
    if (ctx->pc == 0x2E81D0u) {
        ctx->pc = 0x2E81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81CCu;
        // 0x2e81d0: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81D4u;
        goto label_2e81d4;
    }
    ctx->pc = 0x2E81CCu;
    {
        const bool branch_taken_0x2e81cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e81cc) {
            ctx->pc = 0x2E81D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E81CCu;
            // 0x2e81d0: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E81DCu;
            goto label_2e81dc;
        }
    }
    ctx->pc = 0x2E81D4u;
label_2e81d4:
    // 0x2e81d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e81d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e81d8:
    // 0x2e81d8: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e81dc:
    // 0x2e81dc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2e81dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_2e81e0:
    // 0x2e81e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2e81e4:
    if (ctx->pc == 0x2E81E4u) {
        ctx->pc = 0x2E81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E0u;
        // 0x2e81e4: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81E8u;
        goto label_2e81e8;
    }
    ctx->pc = 0x2E81E0u;
    {
        const bool branch_taken_0x2e81e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e81e0) {
            ctx->pc = 0x2E81E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E81E0u;
            // 0x2e81e4: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8200u;
            goto label_2e8200;
        }
    }
    ctx->pc = 0x2E81E8u;
label_2e81e8:
    // 0x2e81e8: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
label_2e81ec:
    if (ctx->pc == 0x2E81ECu) {
        ctx->pc = 0x2E81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E8u;
        // 0x2e81ec: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81F0u;
        goto label_2e81f0;
    }
    ctx->pc = 0x2E81E8u;
    {
        const bool branch_taken_0x2e81e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e81e8) {
            ctx->pc = 0x2E81ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E81E8u;
            // 0x2e81ec: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8200u;
            goto label_2e8200;
        }
    }
    ctx->pc = 0x2E81F0u;
label_2e81f0:
    // 0x2e81f0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_2e81f4:
    if (ctx->pc == 0x2E81F4u) {
        ctx->pc = 0x2E81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81F0u;
        // 0x2e81f4: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81F8u;
        goto label_2e81f8;
    }
    ctx->pc = 0x2E81F0u;
    {
        const bool branch_taken_0x2e81f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e81f0) {
            ctx->pc = 0x2E81F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E81F0u;
            // 0x2e81f4: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8200u;
            goto label_2e8200;
        }
    }
    ctx->pc = 0x2E81F8u;
label_2e81f8:
    // 0x2e81f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e81fc:
    if (ctx->pc == 0x2E81FCu) {
        ctx->pc = 0x2E81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81F8u;
        // 0x2e81fc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8200u;
        goto label_2e8200;
    }
    ctx->pc = 0x2E81F8u;
    {
        const bool branch_taken_0x2e81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81F8u;
        // 0x2e81fc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81f8) {
            ctx->pc = 0x2E8210u;
            goto label_2e8210;
        }
    }
    ctx->pc = 0x2E8200u;
label_2e8200:
    // 0x2e8200: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e8204:
    // 0x2e8204: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8208:
    if (ctx->pc == 0x2E8208u) {
        ctx->pc = 0x2E8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8204u;
        // 0x2e8208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E820Cu;
        goto label_2e820c;
    }
    ctx->pc = 0x2E8204u;
    {
        const bool branch_taken_0x2e8204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8204u;
        // 0x2e8208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8204) {
            ctx->pc = 0x2E8218u;
            goto label_2e8218;
        }
    }
    ctx->pc = 0x2E820Cu;
label_2e820c:
    // 0x2e820c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8210:
    // 0x2e8210: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e8210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2e8214:
    // 0x2e8214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8218:
    // 0x2e8218: 0xc08ca14  jal         func_232850
label_2e821c:
    if (ctx->pc == 0x2E821Cu) {
        ctx->pc = 0x2E821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8218u;
        // 0x2e821c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8220u;
        goto label_2e8220;
    }
    ctx->pc = 0x2E8218u;
    SET_GPR_U32(ctx, 31, 0x2E8220u);
    ctx->pc = 0x2E821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8218u;
    // 0x2e821c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232850u, 0x2E8218u, 0x2E8220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8220u;
label_2e8220:
    // 0x2e8220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e8224:
    if (ctx->pc == 0x2E8224u) {
        ctx->pc = 0x2E8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8220u;
        // 0x2e8224: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8228u;
        goto label_2e8228;
    }
    ctx->pc = 0x2E8220u;
    {
        const bool branch_taken_0x2e8220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8220u;
        // 0x2e8224: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8220) {
            ctx->pc = 0x2E822Cu;
            goto label_2e822c;
        }
    }
    ctx->pc = 0x2E8228u;
label_2e8228:
    // 0x2e8228: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e8228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2e822c:
    // 0x2e822c: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e8230:
    // 0x2e8230: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2e8230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_2e8234:
    // 0x2e8234: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2e8238:
    if (ctx->pc == 0x2E8238u) {
        ctx->pc = 0x2E8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8234u;
        // 0x2e8238: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E823Cu;
        goto label_2e823c;
    }
    ctx->pc = 0x2E8234u;
    {
        const bool branch_taken_0x2e8234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8234u;
        // 0x2e8238: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8234) {
            ctx->pc = 0x2E82C8u;
            goto label_2e82c8;
        }
    }
    ctx->pc = 0x2E823Cu;
label_2e823c:
    // 0x2e823c: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2e823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2e8240:
    // 0x2e8240: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
label_2e8244:
    if (ctx->pc == 0x2E8244u) {
        ctx->pc = 0x2E8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8240u;
        // 0x2e8244: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8248u;
        goto label_2e8248;
    }
    ctx->pc = 0x2E8240u;
    {
        const bool branch_taken_0x2e8240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8240) {
            ctx->pc = 0x2E8244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8240u;
            // 0x2e8244: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E82B4u;
            goto label_2e82b4;
        }
    }
    ctx->pc = 0x2E8248u;
label_2e8248:
    // 0x2e8248: 0xc092432  jal         func_2490C8
label_2e824c:
    if (ctx->pc == 0x2E824Cu) {
        ctx->pc = 0x2E824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8248u;
        // 0x2e824c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8250u;
        goto label_2e8250;
    }
    ctx->pc = 0x2E8248u;
    SET_GPR_U32(ctx, 31, 0x2E8250u);
    ctx->pc = 0x2E824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8248u;
    // 0x2e824c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x2E8248u, 0x2E8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8250u;
label_2e8250:
    // 0x2e8250: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2e8254:
    if (ctx->pc == 0x2E8254u) {
        ctx->pc = 0x2E8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8250u;
        // 0x2e8254: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8258u;
        goto label_2e8258;
    }
    ctx->pc = 0x2E8250u;
    {
        const bool branch_taken_0x2e8250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8250) {
            ctx->pc = 0x2E8254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8250u;
            // 0x2e8254: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E82B4u;
            goto label_2e82b4;
        }
    }
    ctx->pc = 0x2E8258u;
label_2e8258:
    // 0x2e8258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e825c:
    // 0x2e825c: 0x260512d0  addiu       $a1, $s0, 0x12D0
    ctx->pc = 0x2e825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
label_2e8260:
    // 0x2e8260: 0xc08cb62  jal         func_232D88
label_2e8264:
    if (ctx->pc == 0x2E8264u) {
        ctx->pc = 0x2E8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8260u;
        // 0x2e8264: 0x260612d8  addiu       $a2, $s0, 0x12D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8268u;
        goto label_2e8268;
    }
    ctx->pc = 0x2E8260u;
    SET_GPR_U32(ctx, 31, 0x2E8268u);
    ctx->pc = 0x2E8264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8260u;
    // 0x2e8264: 0x260612d8  addiu       $a2, $s0, 0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D88u, 0x2E8260u, 0x2E8268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8268u;
label_2e8268:
    // 0x2e8268: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2e826c:
    if (ctx->pc == 0x2E826Cu) {
        ctx->pc = 0x2E826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8268u;
        // 0x2e826c: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8270u;
        goto label_2e8270;
    }
    ctx->pc = 0x2E8268u;
    {
        const bool branch_taken_0x2e8268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8268) {
            ctx->pc = 0x2E826Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8268u;
            // 0x2e826c: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E82B4u;
            goto label_2e82b4;
        }
    }
    ctx->pc = 0x2E8270u;
label_2e8270:
    // 0x2e8270: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
label_2e8274:
    if (ctx->pc == 0x2E8274u) {
        ctx->pc = 0x2E8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8270u;
        // 0x2e8274: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8278u;
        goto label_2e8278;
    }
    ctx->pc = 0x2E8270u;
    {
        const bool branch_taken_0x2e8270 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8270) {
            ctx->pc = 0x2E8274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8270u;
            // 0x2e8274: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8294u;
            goto label_2e8294;
        }
    }
    ctx->pc = 0x2E8278u;
label_2e8278:
    // 0x2e8278: 0xc08ca3a  jal         func_2328E8
label_2e827c:
    if (ctx->pc == 0x2E827Cu) {
        ctx->pc = 0x2E827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8278u;
        // 0x2e827c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8280u;
        goto label_2e8280;
    }
    ctx->pc = 0x2E8278u;
    SET_GPR_U32(ctx, 31, 0x2E8280u);
    ctx->pc = 0x2E827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8278u;
    // 0x2e827c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2328E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2328E8u, 0x2E8278u, 0x2E8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8280u;
label_2e8280:
    // 0x2e8280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8284:
    if (ctx->pc == 0x2E8284u) {
        ctx->pc = 0x2E8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8280u;
        // 0x2e8284: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8288u;
        goto label_2e8288;
    }
    ctx->pc = 0x2E8280u;
    {
        const bool branch_taken_0x2e8280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8280u;
        // 0x2e8284: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8280) {
            ctx->pc = 0x2E8290u;
            goto label_2e8290;
        }
    }
    ctx->pc = 0x2E8288u;
label_2e8288:
    // 0x2e8288: 0x10000061  b           . + 4 + (0x61 << 2)
label_2e828c:
    if (ctx->pc == 0x2E828Cu) {
        ctx->pc = 0x2E828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8288u;
        // 0x2e828c: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8290u;
        goto label_2e8290;
    }
    ctx->pc = 0x2E8288u;
    {
        const bool branch_taken_0x2e8288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8288u;
        // 0x2e828c: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8288) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8290u;
label_2e8290:
    // 0x2e8290: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2e8290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e8294:
    // 0x2e8294: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e8294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e8298:
    // 0x2e8298: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2e829c:
    if (ctx->pc == 0x2E829Cu) {
        ctx->pc = 0x2E829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8298u;
        // 0x2e829c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82A0u;
        goto label_2e82a0;
    }
    ctx->pc = 0x2E8298u;
    {
        const bool branch_taken_0x2e8298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8298u;
        // 0x2e829c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8298) {
            ctx->pc = 0x2E82ACu;
            goto label_2e82ac;
        }
    }
    ctx->pc = 0x2E82A0u;
label_2e82a0:
    // 0x2e82a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2e82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2e82a4:
    // 0x2e82a4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2e82a8:
    if (ctx->pc == 0x2E82A8u) {
        ctx->pc = 0x2E82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82A4u;
        // 0x2e82a8: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82ACu;
        goto label_2e82ac;
    }
    ctx->pc = 0x2E82A4u;
    {
        const bool branch_taken_0x2e82a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82A4u;
        // 0x2e82a8: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82a4) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E82ACu;
label_2e82ac:
    // 0x2e82ac: 0x10000058  b           . + 4 + (0x58 << 2)
label_2e82b0:
    if (ctx->pc == 0x2E82B0u) {
        ctx->pc = 0x2E82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82ACu;
        // 0x2e82b0: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82B4u;
        goto label_2e82b4;
    }
    ctx->pc = 0x2E82ACu;
    {
        const bool branch_taken_0x2e82ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82ACu;
        // 0x2e82b0: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82ac) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E82B4u;
label_2e82b4:
    // 0x2e82b4: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_2e82b8:
    // 0x2e82b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e82b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e82bc:
    // 0x2e82bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e82c0:
    if (ctx->pc == 0x2E82C0u) {
        ctx->pc = 0x2E82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82BCu;
        // 0x2e82c0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82C4u;
        goto label_2e82c4;
    }
    ctx->pc = 0x2E82BCu;
    {
        const bool branch_taken_0x2e82bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82BCu;
        // 0x2e82c0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82bc) {
            ctx->pc = 0x2E82C8u;
            goto label_2e82c8;
        }
    }
    ctx->pc = 0x2E82C4u;
label_2e82c4:
    // 0x2e82c4: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2e82c8:
    // 0x2e82c8: 0x1660003c  bnez        $s3, . + 4 + (0x3C << 2)
label_2e82cc:
    if (ctx->pc == 0x2E82CCu) {
        ctx->pc = 0x2E82D0u;
        goto label_2e82d0;
    }
    ctx->pc = 0x2E82C8u;
    {
        const bool branch_taken_0x2e82c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e82c8) {
            ctx->pc = 0x2E83BCu;
            goto label_2e83bc;
        }
    }
    ctx->pc = 0x2E82D0u;
label_2e82d0:
    // 0x2e82d0: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e82d4:
    // 0x2e82d4: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2e82d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2e82d8:
    // 0x2e82d8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_2e82dc:
    if (ctx->pc == 0x2E82DCu) {
        ctx->pc = 0x2E82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82D8u;
        // 0x2e82dc: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82E0u;
        goto label_2e82e0;
    }
    ctx->pc = 0x2E82D8u;
    {
        const bool branch_taken_0x2e82d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e82d8) {
            ctx->pc = 0x2E82DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E82D8u;
            // 0x2e82dc: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8350u;
            goto label_2e8350;
        }
    }
    ctx->pc = 0x2E82E0u;
label_2e82e0:
    // 0x2e82e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e82e4:
    // 0x2e82e4: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e82e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e82e8:
    // 0x2e82e8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e82e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e82ec:
    // 0x2e82ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e82ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e82f0:
    // 0x2e82f0: 0xc440b7f8  lwc1        $f0, -0x4808($v0)
    ctx->pc = 0x2e82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e82f4:
    // 0x2e82f4: 0xc60112c0  lwc1        $f1, 0x12C0($s0)
    ctx->pc = 0x2e82f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e82f8:
    // 0x2e82f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e82f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2e82fc:
    // 0x2e82fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e82fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8300:
    // 0x2e8300: 0x0  nop
    ctx->pc = 0x2e8300u;
    // NOP
label_2e8304:
    // 0x2e8304: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2e8308:
    if (ctx->pc == 0x2E8308u) {
        ctx->pc = 0x2E8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8304u;
        // 0x2e8308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E830Cu;
        goto label_2e830c;
    }
    ctx->pc = 0x2E8304u;
    {
        const bool branch_taken_0x2e8304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8304u;
        // 0x2e8308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8304) {
            ctx->pc = 0x2E834Cu;
            goto label_2e834c;
        }
    }
    ctx->pc = 0x2E830Cu;
label_2e830c:
    // 0x2e830c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8310:
    // 0x2e8310: 0xc0bc120  jal         func_2F0480
label_2e8314:
    if (ctx->pc == 0x2E8314u) {
        ctx->pc = 0x2E8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8310u;
        // 0x2e8314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8318u;
        goto label_2e8318;
    }
    ctx->pc = 0x2E8310u;
    SET_GPR_U32(ctx, 31, 0x2E8318u);
    ctx->pc = 0x2E8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8310u;
    // 0x2e8314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0480u, 0x2E8310u, 0x2E8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8318u;
label_2e8318:
    // 0x2e8318: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2e831c:
    if (ctx->pc == 0x2E831Cu) {
        ctx->pc = 0x2E831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8318u;
        // 0x2e831c: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8320u;
        goto label_2e8320;
    }
    ctx->pc = 0x2E8318u;
    {
        const bool branch_taken_0x2e8318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8318) {
            ctx->pc = 0x2E831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8318u;
            // 0x2e831c: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8338u;
            goto label_2e8338;
        }
    }
    ctx->pc = 0x2E8320u;
label_2e8320:
    // 0x2e8320: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x2e8320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
label_2e8324:
    // 0x2e8324: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e8328:
    if (ctx->pc == 0x2E8328u) {
        ctx->pc = 0x2E8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8324u;
        // 0x2e8328: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E832Cu;
        goto label_2e832c;
    }
    ctx->pc = 0x2E8324u;
    {
        const bool branch_taken_0x2e8324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8324) {
            ctx->pc = 0x2E8328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8324u;
            // 0x2e8328: 0x8e0312bc  lw          $v1, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8338u;
            goto label_2e8338;
        }
    }
    ctx->pc = 0x2E832Cu;
label_2e832c:
    // 0x2e832c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e8330:
    // 0x2e8330: 0x10000037  b           . + 4 + (0x37 << 2)
label_2e8334:
    if (ctx->pc == 0x2E8334u) {
        ctx->pc = 0x2E8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8330u;
        // 0x2e8334: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8338u;
        goto label_2e8338;
    }
    ctx->pc = 0x2E8330u;
    {
        const bool branch_taken_0x2e8330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8330u;
        // 0x2e8334: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8330) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8338u;
label_2e8338:
    // 0x2e8338: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e8338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e833c:
    // 0x2e833c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2e8340:
    if (ctx->pc == 0x2E8340u) {
        ctx->pc = 0x2E8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E833Cu;
        // 0x2e8340: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8344u;
        goto label_2e8344;
    }
    ctx->pc = 0x2E833Cu;
    {
        const bool branch_taken_0x2e833c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e833c) {
            ctx->pc = 0x2E8340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E833Cu;
            // 0x2e8340: 0x8e0212bc  lw          $v0, 0x12BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8350u;
            goto label_2e8350;
        }
    }
    ctx->pc = 0x2E8344u;
label_2e8344:
    // 0x2e8344: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8348:
    // 0x2e8348: 0xae0212bc  sw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e8348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
label_2e834c:
    // 0x2e834c: 0x8e0212bc  lw          $v0, 0x12BC($s0)
    ctx->pc = 0x2e834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e8350:
    // 0x2e8350: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x2e8350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_2e8354:
    // 0x2e8354: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2e8358:
    if (ctx->pc == 0x2E8358u) {
        ctx->pc = 0x2E8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8354u;
        // 0x2e8358: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E835Cu;
        goto label_2e835c;
    }
    ctx->pc = 0x2E8354u;
    {
        const bool branch_taken_0x2e8354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8354) {
            ctx->pc = 0x2E8358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8354u;
            // 0x2e8358: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83D0u;
            goto label_2e83d0;
        }
    }
    ctx->pc = 0x2E835Cu;
label_2e835c:
    // 0x2e835c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e8360:
    // 0x2e8360: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2e8360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2e8364:
    // 0x2e8364: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2e8364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2e8368:
    // 0x2e8368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e8368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e836c:
    // 0x2e836c: 0xc440b7f8  lwc1        $f0, -0x4808($v0)
    ctx->pc = 0x2e836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8370:
    // 0x2e8370: 0xc60112c4  lwc1        $f1, 0x12C4($s0)
    ctx->pc = 0x2e8370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8374:
    // 0x2e8374: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e8374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2e8378:
    // 0x2e8378: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e8378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e837c:
    // 0x2e837c: 0x0  nop
    ctx->pc = 0x2e837cu;
    // NOP
label_2e8380:
    // 0x2e8380: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2e8384:
    if (ctx->pc == 0x2E8384u) {
        ctx->pc = 0x2E8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8380u;
        // 0x2e8384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8388u;
        goto label_2e8388;
    }
    ctx->pc = 0x2E8380u;
    {
        const bool branch_taken_0x2e8380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8380u;
        // 0x2e8384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8380) {
            ctx->pc = 0x2E83CCu;
            goto label_2e83cc;
        }
    }
    ctx->pc = 0x2E8388u;
label_2e8388:
    // 0x2e8388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e838c:
    // 0x2e838c: 0xc08d84e  jal         func_236138
label_2e8390:
    if (ctx->pc == 0x2E8390u) {
        ctx->pc = 0x2E8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E838Cu;
        // 0x2e8390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8394u;
        goto label_2e8394;
    }
    ctx->pc = 0x2E838Cu;
    SET_GPR_U32(ctx, 31, 0x2E8394u);
    ctx->pc = 0x2E8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E838Cu;
    // 0x2e8390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236138u, 0x2E838Cu, 0x2E8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8394u;
label_2e8394:
    // 0x2e8394: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8398:
    if (ctx->pc == 0x2E8398u) {
        ctx->pc = 0x2E8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8394u;
        // 0x2e8398: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E839Cu;
        goto label_2e839c;
    }
    ctx->pc = 0x2E8394u;
    {
        const bool branch_taken_0x2e8394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8394u;
        // 0x2e8398: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8394) {
            ctx->pc = 0x2E83A4u;
            goto label_2e83a4;
        }
    }
    ctx->pc = 0x2E839Cu;
label_2e839c:
    // 0x2e839c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2e83a0:
    if (ctx->pc == 0x2E83A0u) {
        ctx->pc = 0x2E83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E839Cu;
        // 0x2e83a0: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83A4u;
        goto label_2e83a4;
    }
    ctx->pc = 0x2E839Cu;
    {
        const bool branch_taken_0x2e839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E839Cu;
        // 0x2e83a0: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e839c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E83A4u;
label_2e83a4:
    // 0x2e83a4: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2e83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
label_2e83a8:
    // 0x2e83a8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_2e83ac:
    if (ctx->pc == 0x2E83ACu) {
        ctx->pc = 0x2E83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A8u;
        // 0x2e83ac: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83B0u;
        goto label_2e83b0;
    }
    ctx->pc = 0x2E83A8u;
    {
        const bool branch_taken_0x2e83a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e83a8) {
            ctx->pc = 0x2E83ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83A8u;
            // 0x2e83ac: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83D0u;
            goto label_2e83d0;
        }
    }
    ctx->pc = 0x2E83B0u;
label_2e83b0:
    // 0x2e83b0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e83b4:
    // 0x2e83b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e83b8:
    if (ctx->pc == 0x2E83B8u) {
        ctx->pc = 0x2E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83B4u;
        // 0x2e83b8: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83BCu;
        goto label_2e83bc;
    }
    ctx->pc = 0x2E83B4u;
    {
        const bool branch_taken_0x2e83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83B4u;
        // 0x2e83b8: 0xae0212bc  sw          $v0, 0x12BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83b4) {
            ctx->pc = 0x2E83CCu;
            goto label_2e83cc;
        }
    }
    ctx->pc = 0x2E83BCu;
label_2e83bc:
    // 0x2e83bc: 0xc0ba10c  jal         func_2E8430
label_2e83c0:
    if (ctx->pc == 0x2E83C0u) {
        ctx->pc = 0x2E83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83BCu;
        // 0x2e83c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83C4u;
        goto label_2e83c4;
    }
    ctx->pc = 0x2E83BCu;
    SET_GPR_U32(ctx, 31, 0x2E83C4u);
    ctx->pc = 0x2E83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83BCu;
    // 0x2e83c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8430u, 0x2E83BCu, 0x2E83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83C4u;
label_2e83c4:
    // 0x2e83c4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2e83c8:
    if (ctx->pc == 0x2E83C8u) {
        ctx->pc = 0x2E83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83C4u;
        // 0x2e83c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83CCu;
        goto label_2e83cc;
    }
    ctx->pc = 0x2E83C4u;
    {
        const bool branch_taken_0x2e83c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e83c4) {
            ctx->pc = 0x2E83C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83C4u;
            // 0x2e83c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8414u;
            goto label_2e8414;
        }
    }
    ctx->pc = 0x2E83CCu;
label_2e83cc:
    // 0x2e83cc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2e83ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2e83d0:
    // 0x2e83d0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2e83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2e83d4:
    // 0x2e83d4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2e83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2e83d8:
    // 0x2e83d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2e83dc:
    if (ctx->pc == 0x2E83DCu) {
        ctx->pc = 0x2E83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D8u;
        // 0x2e83dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83E0u;
        goto label_2e83e0;
    }
    ctx->pc = 0x2E83D8u;
    {
        const bool branch_taken_0x2e83d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D8u;
        // 0x2e83dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83d8) {
            ctx->pc = 0x2E83E8u;
            goto label_2e83e8;
        }
    }
    ctx->pc = 0x2E83E0u;
label_2e83e0:
    // 0x2e83e0: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2e83e4:
    // 0x2e83e4: 0x284506b8  slti        $a1, $v0, 0x6B8
    ctx->pc = 0x2e83e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1720) ? 1 : 0);
label_2e83e8:
    // 0x2e83e8: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
label_2e83ec:
    if (ctx->pc == 0x2E83ECu) {
        ctx->pc = 0x2E83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E8u;
        // 0x2e83ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83F0u;
        goto label_2e83f0;
    }
    ctx->pc = 0x2E83E8u;
    {
        const bool branch_taken_0x2e83e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e83e8) {
            ctx->pc = 0x2E83ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83E8u;
            // 0x2e83ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8414u;
            goto label_2e8414;
        }
    }
    ctx->pc = 0x2E83F0u;
label_2e83f0:
    // 0x2e83f0: 0x8e040388  lw          $a0, 0x388($s0)
    ctx->pc = 0x2e83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2e83f4:
    // 0x2e83f4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2e83f8:
    if (ctx->pc == 0x2E83F8u) {
        ctx->pc = 0x2E83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83F4u;
        // 0x2e83f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83FCu;
        goto label_2e83fc;
    }
    ctx->pc = 0x2E83F4u;
    {
        const bool branch_taken_0x2e83f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e83f4) {
            ctx->pc = 0x2E83F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83F4u;
            // 0x2e83f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8414u;
            goto label_2e8414;
        }
    }
    ctx->pc = 0x2E83FCu;
label_2e83fc:
    // 0x2e83fc: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x2e83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_2e8400:
    // 0x2e8400: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_2e8404:
    if (ctx->pc == 0x2E8404u) {
        ctx->pc = 0x2E8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8400u;
        // 0x2e8404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8408u;
        goto label_2e8408;
    }
    ctx->pc = 0x2E8400u;
    {
        const bool branch_taken_0x2e8400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8400u;
        // 0x2e8404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8400) {
            ctx->pc = 0x2E8414u;
            goto label_2e8414;
        }
    }
    ctx->pc = 0x2E8408u;
label_2e8408:
    // 0x2e8408: 0xc09bf28  jal         func_26FCA0
label_2e840c:
    if (ctx->pc == 0x2E840Cu) {
        ctx->pc = 0x2E8410u;
        goto label_2e8410;
    }
    ctx->pc = 0x2E8408u;
    SET_GPR_U32(ctx, 31, 0x2E8410u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x2E8408u, 0x2E8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8410u;
label_2e8410:
    // 0x2e8410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8414:
    // 0x2e8414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e8418:
    // 0x2e8418: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e8418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e841c:
    // 0x2e841c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e841cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e8420:
    // 0x2e8420: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e8420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8424:
    // 0x2e8424: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e8424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e8428:
    // 0x2e8428: 0x3e00008  jr          $ra
label_2e842c:
    if (ctx->pc == 0x2E842Cu) {
        ctx->pc = 0x2E842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8428u;
        // 0x2e842c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8430u;
        goto label_fallthrough_0x2e8428;
    }
    ctx->pc = 0x2E8428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8428u;
        // 0x2e842c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8428:
    ctx->pc = 0x2E8430u;
}
