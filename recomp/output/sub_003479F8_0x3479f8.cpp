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

// Function: sub_003479F8
// Address: 0x3479f8 - 0x348ab0
void sub_003479F8_0x3479f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003479F8_0x3479f8");
#endif

    switch (ctx->pc) {
        case 0x3479f8u: goto label_3479f8;
        case 0x3479fcu: goto label_3479fc;
        case 0x347a00u: goto label_347a00;
        case 0x347a04u: goto label_347a04;
        case 0x347a08u: goto label_347a08;
        case 0x347a0cu: goto label_347a0c;
        case 0x347a10u: goto label_347a10;
        case 0x347a14u: goto label_347a14;
        case 0x347a18u: goto label_347a18;
        case 0x347a1cu: goto label_347a1c;
        case 0x347a20u: goto label_347a20;
        case 0x347a24u: goto label_347a24;
        case 0x347a28u: goto label_347a28;
        case 0x347a2cu: goto label_347a2c;
        case 0x347a30u: goto label_347a30;
        case 0x347a34u: goto label_347a34;
        case 0x347a38u: goto label_347a38;
        case 0x347a3cu: goto label_347a3c;
        case 0x347a40u: goto label_347a40;
        case 0x347a44u: goto label_347a44;
        case 0x347a48u: goto label_347a48;
        case 0x347a4cu: goto label_347a4c;
        case 0x347a50u: goto label_347a50;
        case 0x347a54u: goto label_347a54;
        case 0x347a58u: goto label_347a58;
        case 0x347a5cu: goto label_347a5c;
        case 0x347a60u: goto label_347a60;
        case 0x347a64u: goto label_347a64;
        case 0x347a68u: goto label_347a68;
        case 0x347a6cu: goto label_347a6c;
        case 0x347a70u: goto label_347a70;
        case 0x347a74u: goto label_347a74;
        case 0x347a78u: goto label_347a78;
        case 0x347a7cu: goto label_347a7c;
        case 0x347a80u: goto label_347a80;
        case 0x347a84u: goto label_347a84;
        case 0x347a88u: goto label_347a88;
        case 0x347a8cu: goto label_347a8c;
        case 0x347a90u: goto label_347a90;
        case 0x347a94u: goto label_347a94;
        case 0x347a98u: goto label_347a98;
        case 0x347a9cu: goto label_347a9c;
        case 0x347aa0u: goto label_347aa0;
        case 0x347aa4u: goto label_347aa4;
        case 0x347aa8u: goto label_347aa8;
        case 0x347aacu: goto label_347aac;
        case 0x347ab0u: goto label_347ab0;
        case 0x347ab4u: goto label_347ab4;
        case 0x347ab8u: goto label_347ab8;
        case 0x347abcu: goto label_347abc;
        case 0x347ac0u: goto label_347ac0;
        case 0x347ac4u: goto label_347ac4;
        case 0x347ac8u: goto label_347ac8;
        case 0x347accu: goto label_347acc;
        case 0x347ad0u: goto label_347ad0;
        case 0x347ad4u: goto label_347ad4;
        case 0x347ad8u: goto label_347ad8;
        case 0x347adcu: goto label_347adc;
        case 0x347ae0u: goto label_347ae0;
        case 0x347ae4u: goto label_347ae4;
        case 0x347ae8u: goto label_347ae8;
        case 0x347aecu: goto label_347aec;
        case 0x347af0u: goto label_347af0;
        case 0x347af4u: goto label_347af4;
        case 0x347af8u: goto label_347af8;
        case 0x347afcu: goto label_347afc;
        case 0x347b00u: goto label_347b00;
        case 0x347b04u: goto label_347b04;
        case 0x347b08u: goto label_347b08;
        case 0x347b0cu: goto label_347b0c;
        case 0x347b10u: goto label_347b10;
        case 0x347b14u: goto label_347b14;
        case 0x347b18u: goto label_347b18;
        case 0x347b1cu: goto label_347b1c;
        case 0x347b20u: goto label_347b20;
        case 0x347b24u: goto label_347b24;
        case 0x347b28u: goto label_347b28;
        case 0x347b2cu: goto label_347b2c;
        case 0x347b30u: goto label_347b30;
        case 0x347b34u: goto label_347b34;
        case 0x347b38u: goto label_347b38;
        case 0x347b3cu: goto label_347b3c;
        case 0x347b40u: goto label_347b40;
        case 0x347b44u: goto label_347b44;
        case 0x347b48u: goto label_347b48;
        case 0x347b4cu: goto label_347b4c;
        case 0x347b50u: goto label_347b50;
        case 0x347b54u: goto label_347b54;
        case 0x347b58u: goto label_347b58;
        case 0x347b5cu: goto label_347b5c;
        case 0x347b60u: goto label_347b60;
        case 0x347b64u: goto label_347b64;
        case 0x347b68u: goto label_347b68;
        case 0x347b6cu: goto label_347b6c;
        case 0x347b70u: goto label_347b70;
        case 0x347b74u: goto label_347b74;
        case 0x347b78u: goto label_347b78;
        case 0x347b7cu: goto label_347b7c;
        case 0x347b80u: goto label_347b80;
        case 0x347b84u: goto label_347b84;
        case 0x347b88u: goto label_347b88;
        case 0x347b8cu: goto label_347b8c;
        case 0x347b90u: goto label_347b90;
        case 0x347b94u: goto label_347b94;
        case 0x347b98u: goto label_347b98;
        case 0x347b9cu: goto label_347b9c;
        case 0x347ba0u: goto label_347ba0;
        case 0x347ba4u: goto label_347ba4;
        case 0x347ba8u: goto label_347ba8;
        case 0x347bacu: goto label_347bac;
        case 0x347bb0u: goto label_347bb0;
        case 0x347bb4u: goto label_347bb4;
        case 0x347bb8u: goto label_347bb8;
        case 0x347bbcu: goto label_347bbc;
        case 0x347bc0u: goto label_347bc0;
        case 0x347bc4u: goto label_347bc4;
        case 0x347bc8u: goto label_347bc8;
        case 0x347bccu: goto label_347bcc;
        case 0x347bd0u: goto label_347bd0;
        case 0x347bd4u: goto label_347bd4;
        case 0x347bd8u: goto label_347bd8;
        case 0x347bdcu: goto label_347bdc;
        case 0x347be0u: goto label_347be0;
        case 0x347be4u: goto label_347be4;
        case 0x347be8u: goto label_347be8;
        case 0x347becu: goto label_347bec;
        case 0x347bf0u: goto label_347bf0;
        case 0x347bf4u: goto label_347bf4;
        case 0x347bf8u: goto label_347bf8;
        case 0x347bfcu: goto label_347bfc;
        case 0x347c00u: goto label_347c00;
        case 0x347c04u: goto label_347c04;
        case 0x347c08u: goto label_347c08;
        case 0x347c0cu: goto label_347c0c;
        case 0x347c10u: goto label_347c10;
        case 0x347c14u: goto label_347c14;
        case 0x347c18u: goto label_347c18;
        case 0x347c1cu: goto label_347c1c;
        case 0x347c20u: goto label_347c20;
        case 0x347c24u: goto label_347c24;
        case 0x347c28u: goto label_347c28;
        case 0x347c2cu: goto label_347c2c;
        case 0x347c30u: goto label_347c30;
        case 0x347c34u: goto label_347c34;
        case 0x347c38u: goto label_347c38;
        case 0x347c3cu: goto label_347c3c;
        case 0x347c40u: goto label_347c40;
        case 0x347c44u: goto label_347c44;
        case 0x347c48u: goto label_347c48;
        case 0x347c4cu: goto label_347c4c;
        case 0x347c50u: goto label_347c50;
        case 0x347c54u: goto label_347c54;
        case 0x347c58u: goto label_347c58;
        case 0x347c5cu: goto label_347c5c;
        case 0x347c60u: goto label_347c60;
        case 0x347c64u: goto label_347c64;
        case 0x347c68u: goto label_347c68;
        case 0x347c6cu: goto label_347c6c;
        case 0x347c70u: goto label_347c70;
        case 0x347c74u: goto label_347c74;
        case 0x347c78u: goto label_347c78;
        case 0x347c7cu: goto label_347c7c;
        case 0x347c80u: goto label_347c80;
        case 0x347c84u: goto label_347c84;
        case 0x347c88u: goto label_347c88;
        case 0x347c8cu: goto label_347c8c;
        case 0x347c90u: goto label_347c90;
        case 0x347c94u: goto label_347c94;
        case 0x347c98u: goto label_347c98;
        case 0x347c9cu: goto label_347c9c;
        case 0x347ca0u: goto label_347ca0;
        case 0x347ca4u: goto label_347ca4;
        case 0x347ca8u: goto label_347ca8;
        case 0x347cacu: goto label_347cac;
        case 0x347cb0u: goto label_347cb0;
        case 0x347cb4u: goto label_347cb4;
        case 0x347cb8u: goto label_347cb8;
        case 0x347cbcu: goto label_347cbc;
        case 0x347cc0u: goto label_347cc0;
        case 0x347cc4u: goto label_347cc4;
        case 0x347cc8u: goto label_347cc8;
        case 0x347cccu: goto label_347ccc;
        case 0x347cd0u: goto label_347cd0;
        case 0x347cd4u: goto label_347cd4;
        case 0x347cd8u: goto label_347cd8;
        case 0x347cdcu: goto label_347cdc;
        case 0x347ce0u: goto label_347ce0;
        case 0x347ce4u: goto label_347ce4;
        case 0x347ce8u: goto label_347ce8;
        case 0x347cecu: goto label_347cec;
        case 0x347cf0u: goto label_347cf0;
        case 0x347cf4u: goto label_347cf4;
        case 0x347cf8u: goto label_347cf8;
        case 0x347cfcu: goto label_347cfc;
        case 0x347d00u: goto label_347d00;
        case 0x347d04u: goto label_347d04;
        case 0x347d08u: goto label_347d08;
        case 0x347d0cu: goto label_347d0c;
        case 0x347d10u: goto label_347d10;
        case 0x347d14u: goto label_347d14;
        case 0x347d18u: goto label_347d18;
        case 0x347d1cu: goto label_347d1c;
        case 0x347d20u: goto label_347d20;
        case 0x347d24u: goto label_347d24;
        case 0x347d28u: goto label_347d28;
        case 0x347d2cu: goto label_347d2c;
        case 0x347d30u: goto label_347d30;
        case 0x347d34u: goto label_347d34;
        case 0x347d38u: goto label_347d38;
        case 0x347d3cu: goto label_347d3c;
        case 0x347d40u: goto label_347d40;
        case 0x347d44u: goto label_347d44;
        case 0x347d48u: goto label_347d48;
        case 0x347d4cu: goto label_347d4c;
        case 0x347d50u: goto label_347d50;
        case 0x347d54u: goto label_347d54;
        case 0x347d58u: goto label_347d58;
        case 0x347d5cu: goto label_347d5c;
        case 0x347d60u: goto label_347d60;
        case 0x347d64u: goto label_347d64;
        case 0x347d68u: goto label_347d68;
        case 0x347d6cu: goto label_347d6c;
        case 0x347d70u: goto label_347d70;
        case 0x347d74u: goto label_347d74;
        case 0x347d78u: goto label_347d78;
        case 0x347d7cu: goto label_347d7c;
        case 0x347d80u: goto label_347d80;
        case 0x347d84u: goto label_347d84;
        case 0x347d88u: goto label_347d88;
        case 0x347d8cu: goto label_347d8c;
        case 0x347d90u: goto label_347d90;
        case 0x347d94u: goto label_347d94;
        case 0x347d98u: goto label_347d98;
        case 0x347d9cu: goto label_347d9c;
        case 0x347da0u: goto label_347da0;
        case 0x347da4u: goto label_347da4;
        case 0x347da8u: goto label_347da8;
        case 0x347dacu: goto label_347dac;
        case 0x347db0u: goto label_347db0;
        case 0x347db4u: goto label_347db4;
        case 0x347db8u: goto label_347db8;
        case 0x347dbcu: goto label_347dbc;
        case 0x347dc0u: goto label_347dc0;
        case 0x347dc4u: goto label_347dc4;
        case 0x347dc8u: goto label_347dc8;
        case 0x347dccu: goto label_347dcc;
        case 0x347dd0u: goto label_347dd0;
        case 0x347dd4u: goto label_347dd4;
        case 0x347dd8u: goto label_347dd8;
        case 0x347ddcu: goto label_347ddc;
        case 0x347de0u: goto label_347de0;
        case 0x347de4u: goto label_347de4;
        case 0x347de8u: goto label_347de8;
        case 0x347decu: goto label_347dec;
        case 0x347df0u: goto label_347df0;
        case 0x347df4u: goto label_347df4;
        case 0x347df8u: goto label_347df8;
        case 0x347dfcu: goto label_347dfc;
        case 0x347e00u: goto label_347e00;
        case 0x347e04u: goto label_347e04;
        case 0x347e08u: goto label_347e08;
        case 0x347e0cu: goto label_347e0c;
        case 0x347e10u: goto label_347e10;
        case 0x347e14u: goto label_347e14;
        case 0x347e18u: goto label_347e18;
        case 0x347e1cu: goto label_347e1c;
        case 0x347e20u: goto label_347e20;
        case 0x347e24u: goto label_347e24;
        case 0x347e28u: goto label_347e28;
        case 0x347e2cu: goto label_347e2c;
        case 0x347e30u: goto label_347e30;
        case 0x347e34u: goto label_347e34;
        case 0x347e38u: goto label_347e38;
        case 0x347e3cu: goto label_347e3c;
        case 0x347e40u: goto label_347e40;
        case 0x347e44u: goto label_347e44;
        case 0x347e48u: goto label_347e48;
        case 0x347e4cu: goto label_347e4c;
        case 0x347e50u: goto label_347e50;
        case 0x347e54u: goto label_347e54;
        case 0x347e58u: goto label_347e58;
        case 0x347e5cu: goto label_347e5c;
        case 0x347e60u: goto label_347e60;
        case 0x347e64u: goto label_347e64;
        case 0x347e68u: goto label_347e68;
        case 0x347e6cu: goto label_347e6c;
        case 0x347e70u: goto label_347e70;
        case 0x347e74u: goto label_347e74;
        case 0x347e78u: goto label_347e78;
        case 0x347e7cu: goto label_347e7c;
        case 0x347e80u: goto label_347e80;
        case 0x347e84u: goto label_347e84;
        case 0x347e88u: goto label_347e88;
        case 0x347e8cu: goto label_347e8c;
        case 0x347e90u: goto label_347e90;
        case 0x347e94u: goto label_347e94;
        case 0x347e98u: goto label_347e98;
        case 0x347e9cu: goto label_347e9c;
        case 0x347ea0u: goto label_347ea0;
        case 0x347ea4u: goto label_347ea4;
        case 0x347ea8u: goto label_347ea8;
        case 0x347eacu: goto label_347eac;
        case 0x347eb0u: goto label_347eb0;
        case 0x347eb4u: goto label_347eb4;
        case 0x347eb8u: goto label_347eb8;
        case 0x347ebcu: goto label_347ebc;
        case 0x347ec0u: goto label_347ec0;
        case 0x347ec4u: goto label_347ec4;
        case 0x347ec8u: goto label_347ec8;
        case 0x347eccu: goto label_347ecc;
        case 0x347ed0u: goto label_347ed0;
        case 0x347ed4u: goto label_347ed4;
        case 0x347ed8u: goto label_347ed8;
        case 0x347edcu: goto label_347edc;
        case 0x347ee0u: goto label_347ee0;
        case 0x347ee4u: goto label_347ee4;
        case 0x347ee8u: goto label_347ee8;
        case 0x347eecu: goto label_347eec;
        case 0x347ef0u: goto label_347ef0;
        case 0x347ef4u: goto label_347ef4;
        case 0x347ef8u: goto label_347ef8;
        case 0x347efcu: goto label_347efc;
        case 0x347f00u: goto label_347f00;
        case 0x347f04u: goto label_347f04;
        case 0x347f08u: goto label_347f08;
        case 0x347f0cu: goto label_347f0c;
        case 0x347f10u: goto label_347f10;
        case 0x347f14u: goto label_347f14;
        case 0x347f18u: goto label_347f18;
        case 0x347f1cu: goto label_347f1c;
        case 0x347f20u: goto label_347f20;
        case 0x347f24u: goto label_347f24;
        case 0x347f28u: goto label_347f28;
        case 0x347f2cu: goto label_347f2c;
        case 0x347f30u: goto label_347f30;
        case 0x347f34u: goto label_347f34;
        case 0x347f38u: goto label_347f38;
        case 0x347f3cu: goto label_347f3c;
        case 0x347f40u: goto label_347f40;
        case 0x347f44u: goto label_347f44;
        case 0x347f48u: goto label_347f48;
        case 0x347f4cu: goto label_347f4c;
        case 0x347f50u: goto label_347f50;
        case 0x347f54u: goto label_347f54;
        case 0x347f58u: goto label_347f58;
        case 0x347f5cu: goto label_347f5c;
        case 0x347f60u: goto label_347f60;
        case 0x347f64u: goto label_347f64;
        case 0x347f68u: goto label_347f68;
        case 0x347f6cu: goto label_347f6c;
        case 0x347f70u: goto label_347f70;
        case 0x347f74u: goto label_347f74;
        case 0x347f78u: goto label_347f78;
        case 0x347f7cu: goto label_347f7c;
        case 0x347f80u: goto label_347f80;
        case 0x347f84u: goto label_347f84;
        case 0x347f88u: goto label_347f88;
        case 0x347f8cu: goto label_347f8c;
        case 0x347f90u: goto label_347f90;
        case 0x347f94u: goto label_347f94;
        case 0x347f98u: goto label_347f98;
        case 0x347f9cu: goto label_347f9c;
        case 0x347fa0u: goto label_347fa0;
        case 0x347fa4u: goto label_347fa4;
        case 0x347fa8u: goto label_347fa8;
        case 0x347facu: goto label_347fac;
        case 0x347fb0u: goto label_347fb0;
        case 0x347fb4u: goto label_347fb4;
        case 0x347fb8u: goto label_347fb8;
        case 0x347fbcu: goto label_347fbc;
        case 0x347fc0u: goto label_347fc0;
        case 0x347fc4u: goto label_347fc4;
        case 0x347fc8u: goto label_347fc8;
        case 0x347fccu: goto label_347fcc;
        case 0x347fd0u: goto label_347fd0;
        case 0x347fd4u: goto label_347fd4;
        case 0x347fd8u: goto label_347fd8;
        case 0x347fdcu: goto label_347fdc;
        case 0x347fe0u: goto label_347fe0;
        case 0x347fe4u: goto label_347fe4;
        case 0x347fe8u: goto label_347fe8;
        case 0x347fecu: goto label_347fec;
        case 0x347ff0u: goto label_347ff0;
        case 0x347ff4u: goto label_347ff4;
        case 0x347ff8u: goto label_347ff8;
        case 0x347ffcu: goto label_347ffc;
        case 0x348000u: goto label_348000;
        case 0x348004u: goto label_348004;
        case 0x348008u: goto label_348008;
        case 0x34800cu: goto label_34800c;
        case 0x348010u: goto label_348010;
        case 0x348014u: goto label_348014;
        case 0x348018u: goto label_348018;
        case 0x34801cu: goto label_34801c;
        case 0x348020u: goto label_348020;
        case 0x348024u: goto label_348024;
        case 0x348028u: goto label_348028;
        case 0x34802cu: goto label_34802c;
        case 0x348030u: goto label_348030;
        case 0x348034u: goto label_348034;
        case 0x348038u: goto label_348038;
        case 0x34803cu: goto label_34803c;
        case 0x348040u: goto label_348040;
        case 0x348044u: goto label_348044;
        case 0x348048u: goto label_348048;
        case 0x34804cu: goto label_34804c;
        case 0x348050u: goto label_348050;
        case 0x348054u: goto label_348054;
        case 0x348058u: goto label_348058;
        case 0x34805cu: goto label_34805c;
        case 0x348060u: goto label_348060;
        case 0x348064u: goto label_348064;
        case 0x348068u: goto label_348068;
        case 0x34806cu: goto label_34806c;
        case 0x348070u: goto label_348070;
        case 0x348074u: goto label_348074;
        case 0x348078u: goto label_348078;
        case 0x34807cu: goto label_34807c;
        case 0x348080u: goto label_348080;
        case 0x348084u: goto label_348084;
        case 0x348088u: goto label_348088;
        case 0x34808cu: goto label_34808c;
        case 0x348090u: goto label_348090;
        case 0x348094u: goto label_348094;
        case 0x348098u: goto label_348098;
        case 0x34809cu: goto label_34809c;
        case 0x3480a0u: goto label_3480a0;
        case 0x3480a4u: goto label_3480a4;
        case 0x3480a8u: goto label_3480a8;
        case 0x3480acu: goto label_3480ac;
        case 0x3480b0u: goto label_3480b0;
        case 0x3480b4u: goto label_3480b4;
        case 0x3480b8u: goto label_3480b8;
        case 0x3480bcu: goto label_3480bc;
        case 0x3480c0u: goto label_3480c0;
        case 0x3480c4u: goto label_3480c4;
        case 0x3480c8u: goto label_3480c8;
        case 0x3480ccu: goto label_3480cc;
        case 0x3480d0u: goto label_3480d0;
        case 0x3480d4u: goto label_3480d4;
        case 0x3480d8u: goto label_3480d8;
        case 0x3480dcu: goto label_3480dc;
        case 0x3480e0u: goto label_3480e0;
        case 0x3480e4u: goto label_3480e4;
        case 0x3480e8u: goto label_3480e8;
        case 0x3480ecu: goto label_3480ec;
        case 0x3480f0u: goto label_3480f0;
        case 0x3480f4u: goto label_3480f4;
        case 0x3480f8u: goto label_3480f8;
        case 0x3480fcu: goto label_3480fc;
        case 0x348100u: goto label_348100;
        case 0x348104u: goto label_348104;
        case 0x348108u: goto label_348108;
        case 0x34810cu: goto label_34810c;
        case 0x348110u: goto label_348110;
        case 0x348114u: goto label_348114;
        case 0x348118u: goto label_348118;
        case 0x34811cu: goto label_34811c;
        case 0x348120u: goto label_348120;
        case 0x348124u: goto label_348124;
        case 0x348128u: goto label_348128;
        case 0x34812cu: goto label_34812c;
        case 0x348130u: goto label_348130;
        case 0x348134u: goto label_348134;
        case 0x348138u: goto label_348138;
        case 0x34813cu: goto label_34813c;
        case 0x348140u: goto label_348140;
        case 0x348144u: goto label_348144;
        case 0x348148u: goto label_348148;
        case 0x34814cu: goto label_34814c;
        case 0x348150u: goto label_348150;
        case 0x348154u: goto label_348154;
        case 0x348158u: goto label_348158;
        case 0x34815cu: goto label_34815c;
        case 0x348160u: goto label_348160;
        case 0x348164u: goto label_348164;
        case 0x348168u: goto label_348168;
        case 0x34816cu: goto label_34816c;
        case 0x348170u: goto label_348170;
        case 0x348174u: goto label_348174;
        case 0x348178u: goto label_348178;
        case 0x34817cu: goto label_34817c;
        case 0x348180u: goto label_348180;
        case 0x348184u: goto label_348184;
        case 0x348188u: goto label_348188;
        case 0x34818cu: goto label_34818c;
        case 0x348190u: goto label_348190;
        case 0x348194u: goto label_348194;
        case 0x348198u: goto label_348198;
        case 0x34819cu: goto label_34819c;
        case 0x3481a0u: goto label_3481a0;
        case 0x3481a4u: goto label_3481a4;
        case 0x3481a8u: goto label_3481a8;
        case 0x3481acu: goto label_3481ac;
        case 0x3481b0u: goto label_3481b0;
        case 0x3481b4u: goto label_3481b4;
        case 0x3481b8u: goto label_3481b8;
        case 0x3481bcu: goto label_3481bc;
        case 0x3481c0u: goto label_3481c0;
        case 0x3481c4u: goto label_3481c4;
        case 0x3481c8u: goto label_3481c8;
        case 0x3481ccu: goto label_3481cc;
        case 0x3481d0u: goto label_3481d0;
        case 0x3481d4u: goto label_3481d4;
        case 0x3481d8u: goto label_3481d8;
        case 0x3481dcu: goto label_3481dc;
        case 0x3481e0u: goto label_3481e0;
        case 0x3481e4u: goto label_3481e4;
        case 0x3481e8u: goto label_3481e8;
        case 0x3481ecu: goto label_3481ec;
        case 0x3481f0u: goto label_3481f0;
        case 0x3481f4u: goto label_3481f4;
        case 0x3481f8u: goto label_3481f8;
        case 0x3481fcu: goto label_3481fc;
        case 0x348200u: goto label_348200;
        case 0x348204u: goto label_348204;
        case 0x348208u: goto label_348208;
        case 0x34820cu: goto label_34820c;
        case 0x348210u: goto label_348210;
        case 0x348214u: goto label_348214;
        case 0x348218u: goto label_348218;
        case 0x34821cu: goto label_34821c;
        case 0x348220u: goto label_348220;
        case 0x348224u: goto label_348224;
        case 0x348228u: goto label_348228;
        case 0x34822cu: goto label_34822c;
        case 0x348230u: goto label_348230;
        case 0x348234u: goto label_348234;
        case 0x348238u: goto label_348238;
        case 0x34823cu: goto label_34823c;
        case 0x348240u: goto label_348240;
        case 0x348244u: goto label_348244;
        case 0x348248u: goto label_348248;
        case 0x34824cu: goto label_34824c;
        case 0x348250u: goto label_348250;
        case 0x348254u: goto label_348254;
        case 0x348258u: goto label_348258;
        case 0x34825cu: goto label_34825c;
        case 0x348260u: goto label_348260;
        case 0x348264u: goto label_348264;
        case 0x348268u: goto label_348268;
        case 0x34826cu: goto label_34826c;
        case 0x348270u: goto label_348270;
        case 0x348274u: goto label_348274;
        case 0x348278u: goto label_348278;
        case 0x34827cu: goto label_34827c;
        case 0x348280u: goto label_348280;
        case 0x348284u: goto label_348284;
        case 0x348288u: goto label_348288;
        case 0x34828cu: goto label_34828c;
        case 0x348290u: goto label_348290;
        case 0x348294u: goto label_348294;
        case 0x348298u: goto label_348298;
        case 0x34829cu: goto label_34829c;
        case 0x3482a0u: goto label_3482a0;
        case 0x3482a4u: goto label_3482a4;
        case 0x3482a8u: goto label_3482a8;
        case 0x3482acu: goto label_3482ac;
        case 0x3482b0u: goto label_3482b0;
        case 0x3482b4u: goto label_3482b4;
        case 0x3482b8u: goto label_3482b8;
        case 0x3482bcu: goto label_3482bc;
        case 0x3482c0u: goto label_3482c0;
        case 0x3482c4u: goto label_3482c4;
        case 0x3482c8u: goto label_3482c8;
        case 0x3482ccu: goto label_3482cc;
        case 0x3482d0u: goto label_3482d0;
        case 0x3482d4u: goto label_3482d4;
        case 0x3482d8u: goto label_3482d8;
        case 0x3482dcu: goto label_3482dc;
        case 0x3482e0u: goto label_3482e0;
        case 0x3482e4u: goto label_3482e4;
        case 0x3482e8u: goto label_3482e8;
        case 0x3482ecu: goto label_3482ec;
        case 0x3482f0u: goto label_3482f0;
        case 0x3482f4u: goto label_3482f4;
        case 0x3482f8u: goto label_3482f8;
        case 0x3482fcu: goto label_3482fc;
        case 0x348300u: goto label_348300;
        case 0x348304u: goto label_348304;
        case 0x348308u: goto label_348308;
        case 0x34830cu: goto label_34830c;
        case 0x348310u: goto label_348310;
        case 0x348314u: goto label_348314;
        case 0x348318u: goto label_348318;
        case 0x34831cu: goto label_34831c;
        case 0x348320u: goto label_348320;
        case 0x348324u: goto label_348324;
        case 0x348328u: goto label_348328;
        case 0x34832cu: goto label_34832c;
        case 0x348330u: goto label_348330;
        case 0x348334u: goto label_348334;
        case 0x348338u: goto label_348338;
        case 0x34833cu: goto label_34833c;
        case 0x348340u: goto label_348340;
        case 0x348344u: goto label_348344;
        case 0x348348u: goto label_348348;
        case 0x34834cu: goto label_34834c;
        case 0x348350u: goto label_348350;
        case 0x348354u: goto label_348354;
        case 0x348358u: goto label_348358;
        case 0x34835cu: goto label_34835c;
        case 0x348360u: goto label_348360;
        case 0x348364u: goto label_348364;
        case 0x348368u: goto label_348368;
        case 0x34836cu: goto label_34836c;
        case 0x348370u: goto label_348370;
        case 0x348374u: goto label_348374;
        case 0x348378u: goto label_348378;
        case 0x34837cu: goto label_34837c;
        case 0x348380u: goto label_348380;
        case 0x348384u: goto label_348384;
        case 0x348388u: goto label_348388;
        case 0x34838cu: goto label_34838c;
        case 0x348390u: goto label_348390;
        case 0x348394u: goto label_348394;
        case 0x348398u: goto label_348398;
        case 0x34839cu: goto label_34839c;
        case 0x3483a0u: goto label_3483a0;
        case 0x3483a4u: goto label_3483a4;
        case 0x3483a8u: goto label_3483a8;
        case 0x3483acu: goto label_3483ac;
        case 0x3483b0u: goto label_3483b0;
        case 0x3483b4u: goto label_3483b4;
        case 0x3483b8u: goto label_3483b8;
        case 0x3483bcu: goto label_3483bc;
        case 0x3483c0u: goto label_3483c0;
        case 0x3483c4u: goto label_3483c4;
        case 0x3483c8u: goto label_3483c8;
        case 0x3483ccu: goto label_3483cc;
        case 0x3483d0u: goto label_3483d0;
        case 0x3483d4u: goto label_3483d4;
        case 0x3483d8u: goto label_3483d8;
        case 0x3483dcu: goto label_3483dc;
        case 0x3483e0u: goto label_3483e0;
        case 0x3483e4u: goto label_3483e4;
        case 0x3483e8u: goto label_3483e8;
        case 0x3483ecu: goto label_3483ec;
        case 0x3483f0u: goto label_3483f0;
        case 0x3483f4u: goto label_3483f4;
        case 0x3483f8u: goto label_3483f8;
        case 0x3483fcu: goto label_3483fc;
        case 0x348400u: goto label_348400;
        case 0x348404u: goto label_348404;
        case 0x348408u: goto label_348408;
        case 0x34840cu: goto label_34840c;
        case 0x348410u: goto label_348410;
        case 0x348414u: goto label_348414;
        case 0x348418u: goto label_348418;
        case 0x34841cu: goto label_34841c;
        case 0x348420u: goto label_348420;
        case 0x348424u: goto label_348424;
        case 0x348428u: goto label_348428;
        case 0x34842cu: goto label_34842c;
        case 0x348430u: goto label_348430;
        case 0x348434u: goto label_348434;
        case 0x348438u: goto label_348438;
        case 0x34843cu: goto label_34843c;
        case 0x348440u: goto label_348440;
        case 0x348444u: goto label_348444;
        case 0x348448u: goto label_348448;
        case 0x34844cu: goto label_34844c;
        case 0x348450u: goto label_348450;
        case 0x348454u: goto label_348454;
        case 0x348458u: goto label_348458;
        case 0x34845cu: goto label_34845c;
        case 0x348460u: goto label_348460;
        case 0x348464u: goto label_348464;
        case 0x348468u: goto label_348468;
        case 0x34846cu: goto label_34846c;
        case 0x348470u: goto label_348470;
        case 0x348474u: goto label_348474;
        case 0x348478u: goto label_348478;
        case 0x34847cu: goto label_34847c;
        case 0x348480u: goto label_348480;
        case 0x348484u: goto label_348484;
        case 0x348488u: goto label_348488;
        case 0x34848cu: goto label_34848c;
        case 0x348490u: goto label_348490;
        case 0x348494u: goto label_348494;
        case 0x348498u: goto label_348498;
        case 0x34849cu: goto label_34849c;
        case 0x3484a0u: goto label_3484a0;
        case 0x3484a4u: goto label_3484a4;
        case 0x3484a8u: goto label_3484a8;
        case 0x3484acu: goto label_3484ac;
        case 0x3484b0u: goto label_3484b0;
        case 0x3484b4u: goto label_3484b4;
        case 0x3484b8u: goto label_3484b8;
        case 0x3484bcu: goto label_3484bc;
        case 0x3484c0u: goto label_3484c0;
        case 0x3484c4u: goto label_3484c4;
        case 0x3484c8u: goto label_3484c8;
        case 0x3484ccu: goto label_3484cc;
        case 0x3484d0u: goto label_3484d0;
        case 0x3484d4u: goto label_3484d4;
        case 0x3484d8u: goto label_3484d8;
        case 0x3484dcu: goto label_3484dc;
        case 0x3484e0u: goto label_3484e0;
        case 0x3484e4u: goto label_3484e4;
        case 0x3484e8u: goto label_3484e8;
        case 0x3484ecu: goto label_3484ec;
        case 0x3484f0u: goto label_3484f0;
        case 0x3484f4u: goto label_3484f4;
        case 0x3484f8u: goto label_3484f8;
        case 0x3484fcu: goto label_3484fc;
        case 0x348500u: goto label_348500;
        case 0x348504u: goto label_348504;
        case 0x348508u: goto label_348508;
        case 0x34850cu: goto label_34850c;
        case 0x348510u: goto label_348510;
        case 0x348514u: goto label_348514;
        case 0x348518u: goto label_348518;
        case 0x34851cu: goto label_34851c;
        case 0x348520u: goto label_348520;
        case 0x348524u: goto label_348524;
        case 0x348528u: goto label_348528;
        case 0x34852cu: goto label_34852c;
        case 0x348530u: goto label_348530;
        case 0x348534u: goto label_348534;
        case 0x348538u: goto label_348538;
        case 0x34853cu: goto label_34853c;
        case 0x348540u: goto label_348540;
        case 0x348544u: goto label_348544;
        case 0x348548u: goto label_348548;
        case 0x34854cu: goto label_34854c;
        case 0x348550u: goto label_348550;
        case 0x348554u: goto label_348554;
        case 0x348558u: goto label_348558;
        case 0x34855cu: goto label_34855c;
        case 0x348560u: goto label_348560;
        case 0x348564u: goto label_348564;
        case 0x348568u: goto label_348568;
        case 0x34856cu: goto label_34856c;
        case 0x348570u: goto label_348570;
        case 0x348574u: goto label_348574;
        case 0x348578u: goto label_348578;
        case 0x34857cu: goto label_34857c;
        case 0x348580u: goto label_348580;
        case 0x348584u: goto label_348584;
        case 0x348588u: goto label_348588;
        case 0x34858cu: goto label_34858c;
        case 0x348590u: goto label_348590;
        case 0x348594u: goto label_348594;
        case 0x348598u: goto label_348598;
        case 0x34859cu: goto label_34859c;
        case 0x3485a0u: goto label_3485a0;
        case 0x3485a4u: goto label_3485a4;
        case 0x3485a8u: goto label_3485a8;
        case 0x3485acu: goto label_3485ac;
        case 0x3485b0u: goto label_3485b0;
        case 0x3485b4u: goto label_3485b4;
        case 0x3485b8u: goto label_3485b8;
        case 0x3485bcu: goto label_3485bc;
        case 0x3485c0u: goto label_3485c0;
        case 0x3485c4u: goto label_3485c4;
        case 0x3485c8u: goto label_3485c8;
        case 0x3485ccu: goto label_3485cc;
        case 0x3485d0u: goto label_3485d0;
        case 0x3485d4u: goto label_3485d4;
        case 0x3485d8u: goto label_3485d8;
        case 0x3485dcu: goto label_3485dc;
        case 0x3485e0u: goto label_3485e0;
        case 0x3485e4u: goto label_3485e4;
        case 0x3485e8u: goto label_3485e8;
        case 0x3485ecu: goto label_3485ec;
        case 0x3485f0u: goto label_3485f0;
        case 0x3485f4u: goto label_3485f4;
        case 0x3485f8u: goto label_3485f8;
        case 0x3485fcu: goto label_3485fc;
        case 0x348600u: goto label_348600;
        case 0x348604u: goto label_348604;
        case 0x348608u: goto label_348608;
        case 0x34860cu: goto label_34860c;
        case 0x348610u: goto label_348610;
        case 0x348614u: goto label_348614;
        case 0x348618u: goto label_348618;
        case 0x34861cu: goto label_34861c;
        case 0x348620u: goto label_348620;
        case 0x348624u: goto label_348624;
        case 0x348628u: goto label_348628;
        case 0x34862cu: goto label_34862c;
        case 0x348630u: goto label_348630;
        case 0x348634u: goto label_348634;
        case 0x348638u: goto label_348638;
        case 0x34863cu: goto label_34863c;
        case 0x348640u: goto label_348640;
        case 0x348644u: goto label_348644;
        case 0x348648u: goto label_348648;
        case 0x34864cu: goto label_34864c;
        case 0x348650u: goto label_348650;
        case 0x348654u: goto label_348654;
        case 0x348658u: goto label_348658;
        case 0x34865cu: goto label_34865c;
        case 0x348660u: goto label_348660;
        case 0x348664u: goto label_348664;
        case 0x348668u: goto label_348668;
        case 0x34866cu: goto label_34866c;
        case 0x348670u: goto label_348670;
        case 0x348674u: goto label_348674;
        case 0x348678u: goto label_348678;
        case 0x34867cu: goto label_34867c;
        case 0x348680u: goto label_348680;
        case 0x348684u: goto label_348684;
        case 0x348688u: goto label_348688;
        case 0x34868cu: goto label_34868c;
        case 0x348690u: goto label_348690;
        case 0x348694u: goto label_348694;
        case 0x348698u: goto label_348698;
        case 0x34869cu: goto label_34869c;
        case 0x3486a0u: goto label_3486a0;
        case 0x3486a4u: goto label_3486a4;
        case 0x3486a8u: goto label_3486a8;
        case 0x3486acu: goto label_3486ac;
        case 0x3486b0u: goto label_3486b0;
        case 0x3486b4u: goto label_3486b4;
        case 0x3486b8u: goto label_3486b8;
        case 0x3486bcu: goto label_3486bc;
        case 0x3486c0u: goto label_3486c0;
        case 0x3486c4u: goto label_3486c4;
        case 0x3486c8u: goto label_3486c8;
        case 0x3486ccu: goto label_3486cc;
        case 0x3486d0u: goto label_3486d0;
        case 0x3486d4u: goto label_3486d4;
        case 0x3486d8u: goto label_3486d8;
        case 0x3486dcu: goto label_3486dc;
        case 0x3486e0u: goto label_3486e0;
        case 0x3486e4u: goto label_3486e4;
        case 0x3486e8u: goto label_3486e8;
        case 0x3486ecu: goto label_3486ec;
        case 0x3486f0u: goto label_3486f0;
        case 0x3486f4u: goto label_3486f4;
        case 0x3486f8u: goto label_3486f8;
        case 0x3486fcu: goto label_3486fc;
        case 0x348700u: goto label_348700;
        case 0x348704u: goto label_348704;
        case 0x348708u: goto label_348708;
        case 0x34870cu: goto label_34870c;
        case 0x348710u: goto label_348710;
        case 0x348714u: goto label_348714;
        case 0x348718u: goto label_348718;
        case 0x34871cu: goto label_34871c;
        case 0x348720u: goto label_348720;
        case 0x348724u: goto label_348724;
        case 0x348728u: goto label_348728;
        case 0x34872cu: goto label_34872c;
        case 0x348730u: goto label_348730;
        case 0x348734u: goto label_348734;
        case 0x348738u: goto label_348738;
        case 0x34873cu: goto label_34873c;
        case 0x348740u: goto label_348740;
        case 0x348744u: goto label_348744;
        case 0x348748u: goto label_348748;
        case 0x34874cu: goto label_34874c;
        case 0x348750u: goto label_348750;
        case 0x348754u: goto label_348754;
        case 0x348758u: goto label_348758;
        case 0x34875cu: goto label_34875c;
        case 0x348760u: goto label_348760;
        case 0x348764u: goto label_348764;
        case 0x348768u: goto label_348768;
        case 0x34876cu: goto label_34876c;
        case 0x348770u: goto label_348770;
        case 0x348774u: goto label_348774;
        case 0x348778u: goto label_348778;
        case 0x34877cu: goto label_34877c;
        case 0x348780u: goto label_348780;
        case 0x348784u: goto label_348784;
        case 0x348788u: goto label_348788;
        case 0x34878cu: goto label_34878c;
        case 0x348790u: goto label_348790;
        case 0x348794u: goto label_348794;
        case 0x348798u: goto label_348798;
        case 0x34879cu: goto label_34879c;
        case 0x3487a0u: goto label_3487a0;
        case 0x3487a4u: goto label_3487a4;
        case 0x3487a8u: goto label_3487a8;
        case 0x3487acu: goto label_3487ac;
        case 0x3487b0u: goto label_3487b0;
        case 0x3487b4u: goto label_3487b4;
        case 0x3487b8u: goto label_3487b8;
        case 0x3487bcu: goto label_3487bc;
        case 0x3487c0u: goto label_3487c0;
        case 0x3487c4u: goto label_3487c4;
        case 0x3487c8u: goto label_3487c8;
        case 0x3487ccu: goto label_3487cc;
        case 0x3487d0u: goto label_3487d0;
        case 0x3487d4u: goto label_3487d4;
        case 0x3487d8u: goto label_3487d8;
        case 0x3487dcu: goto label_3487dc;
        case 0x3487e0u: goto label_3487e0;
        case 0x3487e4u: goto label_3487e4;
        case 0x3487e8u: goto label_3487e8;
        case 0x3487ecu: goto label_3487ec;
        case 0x3487f0u: goto label_3487f0;
        case 0x3487f4u: goto label_3487f4;
        case 0x3487f8u: goto label_3487f8;
        case 0x3487fcu: goto label_3487fc;
        case 0x348800u: goto label_348800;
        case 0x348804u: goto label_348804;
        case 0x348808u: goto label_348808;
        case 0x34880cu: goto label_34880c;
        case 0x348810u: goto label_348810;
        case 0x348814u: goto label_348814;
        case 0x348818u: goto label_348818;
        case 0x34881cu: goto label_34881c;
        case 0x348820u: goto label_348820;
        case 0x348824u: goto label_348824;
        case 0x348828u: goto label_348828;
        case 0x34882cu: goto label_34882c;
        case 0x348830u: goto label_348830;
        case 0x348834u: goto label_348834;
        case 0x348838u: goto label_348838;
        case 0x34883cu: goto label_34883c;
        case 0x348840u: goto label_348840;
        case 0x348844u: goto label_348844;
        case 0x348848u: goto label_348848;
        case 0x34884cu: goto label_34884c;
        case 0x348850u: goto label_348850;
        case 0x348854u: goto label_348854;
        case 0x348858u: goto label_348858;
        case 0x34885cu: goto label_34885c;
        case 0x348860u: goto label_348860;
        case 0x348864u: goto label_348864;
        case 0x348868u: goto label_348868;
        case 0x34886cu: goto label_34886c;
        case 0x348870u: goto label_348870;
        case 0x348874u: goto label_348874;
        case 0x348878u: goto label_348878;
        case 0x34887cu: goto label_34887c;
        case 0x348880u: goto label_348880;
        case 0x348884u: goto label_348884;
        case 0x348888u: goto label_348888;
        case 0x34888cu: goto label_34888c;
        case 0x348890u: goto label_348890;
        case 0x348894u: goto label_348894;
        case 0x348898u: goto label_348898;
        case 0x34889cu: goto label_34889c;
        case 0x3488a0u: goto label_3488a0;
        case 0x3488a4u: goto label_3488a4;
        case 0x3488a8u: goto label_3488a8;
        case 0x3488acu: goto label_3488ac;
        case 0x3488b0u: goto label_3488b0;
        case 0x3488b4u: goto label_3488b4;
        case 0x3488b8u: goto label_3488b8;
        case 0x3488bcu: goto label_3488bc;
        case 0x3488c0u: goto label_3488c0;
        case 0x3488c4u: goto label_3488c4;
        case 0x3488c8u: goto label_3488c8;
        case 0x3488ccu: goto label_3488cc;
        case 0x3488d0u: goto label_3488d0;
        case 0x3488d4u: goto label_3488d4;
        case 0x3488d8u: goto label_3488d8;
        case 0x3488dcu: goto label_3488dc;
        case 0x3488e0u: goto label_3488e0;
        case 0x3488e4u: goto label_3488e4;
        case 0x3488e8u: goto label_3488e8;
        case 0x3488ecu: goto label_3488ec;
        case 0x3488f0u: goto label_3488f0;
        case 0x3488f4u: goto label_3488f4;
        case 0x3488f8u: goto label_3488f8;
        case 0x3488fcu: goto label_3488fc;
        case 0x348900u: goto label_348900;
        case 0x348904u: goto label_348904;
        case 0x348908u: goto label_348908;
        case 0x34890cu: goto label_34890c;
        case 0x348910u: goto label_348910;
        case 0x348914u: goto label_348914;
        case 0x348918u: goto label_348918;
        case 0x34891cu: goto label_34891c;
        case 0x348920u: goto label_348920;
        case 0x348924u: goto label_348924;
        case 0x348928u: goto label_348928;
        case 0x34892cu: goto label_34892c;
        case 0x348930u: goto label_348930;
        case 0x348934u: goto label_348934;
        case 0x348938u: goto label_348938;
        case 0x34893cu: goto label_34893c;
        case 0x348940u: goto label_348940;
        case 0x348944u: goto label_348944;
        case 0x348948u: goto label_348948;
        case 0x34894cu: goto label_34894c;
        case 0x348950u: goto label_348950;
        case 0x348954u: goto label_348954;
        case 0x348958u: goto label_348958;
        case 0x34895cu: goto label_34895c;
        case 0x348960u: goto label_348960;
        case 0x348964u: goto label_348964;
        case 0x348968u: goto label_348968;
        case 0x34896cu: goto label_34896c;
        case 0x348970u: goto label_348970;
        case 0x348974u: goto label_348974;
        case 0x348978u: goto label_348978;
        case 0x34897cu: goto label_34897c;
        case 0x348980u: goto label_348980;
        case 0x348984u: goto label_348984;
        case 0x348988u: goto label_348988;
        case 0x34898cu: goto label_34898c;
        case 0x348990u: goto label_348990;
        case 0x348994u: goto label_348994;
        case 0x348998u: goto label_348998;
        case 0x34899cu: goto label_34899c;
        case 0x3489a0u: goto label_3489a0;
        case 0x3489a4u: goto label_3489a4;
        case 0x3489a8u: goto label_3489a8;
        case 0x3489acu: goto label_3489ac;
        case 0x3489b0u: goto label_3489b0;
        case 0x3489b4u: goto label_3489b4;
        case 0x3489b8u: goto label_3489b8;
        case 0x3489bcu: goto label_3489bc;
        case 0x3489c0u: goto label_3489c0;
        case 0x3489c4u: goto label_3489c4;
        case 0x3489c8u: goto label_3489c8;
        case 0x3489ccu: goto label_3489cc;
        case 0x3489d0u: goto label_3489d0;
        case 0x3489d4u: goto label_3489d4;
        case 0x3489d8u: goto label_3489d8;
        case 0x3489dcu: goto label_3489dc;
        case 0x3489e0u: goto label_3489e0;
        case 0x3489e4u: goto label_3489e4;
        case 0x3489e8u: goto label_3489e8;
        case 0x3489ecu: goto label_3489ec;
        case 0x3489f0u: goto label_3489f0;
        case 0x3489f4u: goto label_3489f4;
        case 0x3489f8u: goto label_3489f8;
        case 0x3489fcu: goto label_3489fc;
        case 0x348a00u: goto label_348a00;
        case 0x348a04u: goto label_348a04;
        case 0x348a08u: goto label_348a08;
        case 0x348a0cu: goto label_348a0c;
        case 0x348a10u: goto label_348a10;
        case 0x348a14u: goto label_348a14;
        case 0x348a18u: goto label_348a18;
        case 0x348a1cu: goto label_348a1c;
        case 0x348a20u: goto label_348a20;
        case 0x348a24u: goto label_348a24;
        case 0x348a28u: goto label_348a28;
        case 0x348a2cu: goto label_348a2c;
        case 0x348a30u: goto label_348a30;
        case 0x348a34u: goto label_348a34;
        case 0x348a38u: goto label_348a38;
        case 0x348a3cu: goto label_348a3c;
        case 0x348a40u: goto label_348a40;
        case 0x348a44u: goto label_348a44;
        case 0x348a48u: goto label_348a48;
        case 0x348a4cu: goto label_348a4c;
        case 0x348a50u: goto label_348a50;
        case 0x348a54u: goto label_348a54;
        case 0x348a58u: goto label_348a58;
        case 0x348a5cu: goto label_348a5c;
        case 0x348a60u: goto label_348a60;
        case 0x348a64u: goto label_348a64;
        case 0x348a68u: goto label_348a68;
        case 0x348a6cu: goto label_348a6c;
        case 0x348a70u: goto label_348a70;
        case 0x348a74u: goto label_348a74;
        case 0x348a78u: goto label_348a78;
        case 0x348a7cu: goto label_348a7c;
        case 0x348a80u: goto label_348a80;
        case 0x348a84u: goto label_348a84;
        case 0x348a88u: goto label_348a88;
        case 0x348a8cu: goto label_348a8c;
        case 0x348a90u: goto label_348a90;
        case 0x348a94u: goto label_348a94;
        case 0x348a98u: goto label_348a98;
        case 0x348a9cu: goto label_348a9c;
        case 0x348aa0u: goto label_348aa0;
        case 0x348aa4u: goto label_348aa4;
        case 0x348aa8u: goto label_348aa8;
        case 0x348aacu: goto label_348aac;
        default: break;
    }

    ctx->pc = 0x3479f8u;

label_3479f8:
    // 0x3479f8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3479f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_3479fc:
    // 0x3479fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3479fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347a00:
    // 0x347a00: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x347a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
label_347a04:
    // 0x347a04: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x347a04u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_347a08:
    // 0x347a08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x347a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347a0c:
    // 0x347a0c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x347a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
label_347a10:
    // 0x347a10: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x347a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
label_347a14:
    // 0x347a14: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x347a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
label_347a18:
    // 0x347a18: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x347a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
label_347a1c:
    // 0x347a1c: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x347a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
label_347a20:
    // 0x347a20: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x347a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
label_347a24:
    // 0x347a24: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x347a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
label_347a28:
    // 0x347a28: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x347a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
label_347a2c:
    // 0x347a2c: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x347a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
label_347a30:
    // 0x347a30: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x347a30u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_347a34:
    // 0x347a34: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x347a34u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_347a38:
    // 0x347a38: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x347a38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_347a3c:
    // 0x347a3c: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x347a3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_347a40:
    // 0x347a40: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x347a40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_347a44:
    // 0x347a44: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x347a44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_347a48:
    // 0x347a48: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x347a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_347a4c:
    // 0x347a4c: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x347a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347a50:
    // 0x347a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347a54:
    // 0x347a54: 0x0  nop
    ctx->pc = 0x347a54u;
    // NOP
label_347a58:
    // 0x347a58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_347a5c:
    if (ctx->pc == 0x347A5Cu) {
        ctx->pc = 0x347A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A58u;
        // 0x347a5c: 0x460066c6  mov.s       $f27, $f12 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347A60u;
        goto label_347a60;
    }
    ctx->pc = 0x347A58u;
    {
        const bool branch_taken_0x347a58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x347A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A58u;
        // 0x347a5c: 0x460066c6  mov.s       $f27, $f12 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a58) {
            ctx->pc = 0x347A6Cu;
            goto label_347a6c;
        }
    }
    ctx->pc = 0x347A60u;
label_347a60:
    // 0x347a60: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x347a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
label_347a64:
    // 0x347a64: 0x100003fd  b           . + 4 + (0x3FD << 2)
label_347a68:
    if (ctx->pc == 0x347A68u) {
        ctx->pc = 0x347A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A64u;
        // 0x347a68: 0xe6400068  swc1        $f0, 0x68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x347A6Cu;
        goto label_347a6c;
    }
    ctx->pc = 0x347A64u;
    {
        const bool branch_taken_0x347a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A64u;
        // 0x347a68: 0xe6400068  swc1        $f0, 0x68($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a64) {
            ctx->pc = 0x348A5Cu;
            goto label_348a5c;
        }
    }
    ctx->pc = 0x347A6Cu;
label_347a6c:
    // 0x347a6c: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x347a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347a70:
    // 0x347a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347a74:
    // 0x347a74: 0x0  nop
    ctx->pc = 0x347a74u;
    // NOP
label_347a78:
    // 0x347a78: 0x450203f7  bc1fl       . + 4 + (0x3F7 << 2)
label_347a7c:
    if (ctx->pc == 0x347A7Cu) {
        ctx->pc = 0x347A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A78u;
        // 0x347a7c: 0x461b0000  add.s       $f0, $f0, $f27 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347A80u;
        goto label_347a80;
    }
    ctx->pc = 0x347A78u;
    {
        const bool branch_taken_0x347a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347a78) {
            ctx->pc = 0x347A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347A78u;
            // 0x347a7c: 0x461b0000  add.s       $f0, $f0, $f27 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A58u;
            goto label_348a58;
        }
    }
    ctx->pc = 0x347A80u;
label_347a80:
    // 0x347a80: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x347a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_347a84:
    // 0x347a84: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x347a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_347a88:
    // 0x347a88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x347a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_347a8c:
    // 0x347a8c: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_347a90:
    if (ctx->pc == 0x347A90u) {
        ctx->pc = 0x347A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A8Cu;
        // 0x347a90: 0x24560040  addiu       $s6, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347A94u;
        goto label_347a94;
    }
    ctx->pc = 0x347A8Cu;
    {
        const bool branch_taken_0x347a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A8Cu;
        // 0x347a90: 0x24560040  addiu       $s6, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a8c) {
            ctx->pc = 0x347BBCu;
            goto label_347bbc;
        }
    }
    ctx->pc = 0x347A94u;
label_347a94:
    // 0x347a94: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x347a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347a98:
    // 0x347a98: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x347a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
label_347a9c:
    // 0x347a9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347aa0:
    // 0x347aa0: 0x0  nop
    ctx->pc = 0x347aa0u;
    // NOP
label_347aa4:
    // 0x347aa4: 0x450103ed  bc1t        . + 4 + (0x3ED << 2)
label_347aa8:
    if (ctx->pc == 0x347AA8u) {
        ctx->pc = 0x347AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AA4u;
        // 0x347aa8: 0xe6400064  swc1        $f0, 0x64($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x347AACu;
        goto label_347aac;
    }
    ctx->pc = 0x347AA4u;
    {
        const bool branch_taken_0x347aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x347AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AA4u;
        // 0x347aa8: 0xe6400064  swc1        $f0, 0x64($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347aa4) {
            ctx->pc = 0x348A5Cu;
            goto label_348a5c;
        }
    }
    ctx->pc = 0x347AACu;
label_347aac:
    // 0x347aac: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x347aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_347ab0:
    // 0x347ab0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x347ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_347ab4:
    // 0x347ab4: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_347ab8:
    // 0x347ab8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347abc:
    // 0x347abc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x347abcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347ac0:
    // 0x347ac0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x347ac0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347ac4:
    // 0x347ac4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x347ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_347ac8:
    // 0x347ac8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x347ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_347acc:
    // 0x347acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x347accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347ad0:
    // 0x347ad0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x347ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_347ad4:
    // 0x347ad4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x347ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_347ad8:
    // 0x347ad8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x347ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_347adc:
    // 0x347adc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x347adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_347ae0:
    // 0x347ae0: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x347ae0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
label_347ae4:
    // 0x347ae4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x347ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347ae8:
    // 0x347ae8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x347ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347aec:
    // 0x347aec: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x347aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347af0:
    // 0x347af0: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x347af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347af4:
    // 0x347af4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x347af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_347af8:
    // 0x347af8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x347af8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_347afc:
    // 0x347afc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x347afcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_347b00:
    // 0x347b00: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_347b04:
    if (ctx->pc == 0x347B04u) {
        ctx->pc = 0x347B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B00u;
        // 0x347b04: 0xe7a40010  swc1        $f4, 0x10($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B08u;
        goto label_347b08;
    }
    ctx->pc = 0x347B00u;
    {
        const bool branch_taken_0x347b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x347B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B00u;
        // 0x347b04: 0xe7a40010  swc1        $f4, 0x10($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b00) {
            ctx->pc = 0x347B38u;
            goto label_347b38;
        }
    }
    ctx->pc = 0x347B08u;
label_347b08:
    // 0x347b08: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x347b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347b0c:
    // 0x347b0c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x347b0cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_347b10:
    // 0x347b10: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x347b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347b14:
    // 0x347b14: 0x0  nop
    ctx->pc = 0x347b14u;
    // NOP
label_347b18:
    // 0x347b18: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_347b1c:
    if (ctx->pc == 0x347B1Cu) {
        ctx->pc = 0x347B20u;
        goto label_347b20;
    }
    ctx->pc = 0x347B18u;
    {
        const bool branch_taken_0x347b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347b18) {
            ctx->pc = 0x347B38u;
            goto label_347b38;
        }
    }
    ctx->pc = 0x347B20u;
label_347b20:
    // 0x347b20: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x347b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347b24:
    // 0x347b24: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x347b24u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_347b28:
    // 0x347b28: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x347b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347b2c:
    // 0x347b2c: 0x0  nop
    ctx->pc = 0x347b2cu;
    // NOP
label_347b30:
    // 0x347b30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_347b34:
    if (ctx->pc == 0x347B34u) {
        ctx->pc = 0x347B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B30u;
        // 0x347b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B38u;
        goto label_347b38;
    }
    ctx->pc = 0x347B30u;
    {
        const bool branch_taken_0x347b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347b30) {
            ctx->pc = 0x347B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B30u;
            // 0x347b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347B38u;
            goto label_347b38;
        }
    }
    ctx->pc = 0x347B38u;
label_347b38:
    // 0x347b38: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_347b3c:
    if (ctx->pc == 0x347B3Cu) {
        ctx->pc = 0x347B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B38u;
        // 0x347b3c: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B40u;
        goto label_347b40;
    }
    ctx->pc = 0x347B38u;
    {
        const bool branch_taken_0x347b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347b38) {
            ctx->pc = 0x347B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B38u;
            // 0x347b3c: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347BF4u;
            goto label_347bf4;
        }
    }
    ctx->pc = 0x347B40u;
label_347b40:
    // 0x347b40: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x347b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_347b44:
    // 0x347b44: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x347b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347b48:
    // 0x347b48: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x347b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347b4c:
    // 0x347b4c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x347b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347b50:
    // 0x347b50: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x347b50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_347b54:
    // 0x347b54: 0x4a0003bf  vwaitq
    ctx->pc = 0x347b54u;
    // VWAITQ (Q already resolved in this runtime)
label_347b58:
    // 0x347b58: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x347b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347b5c:
    // 0x347b5c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x347b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_347b60:
    // 0x347b60: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x347b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347b64:
    // 0x347b64: 0x26c30030  addiu       $v1, $s6, 0x30
    ctx->pc = 0x347b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_347b68:
    // 0x347b68: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x347b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_347b6c:
    // 0x347b6c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x347b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_347b70:
    // 0x347b70: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x347b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347b74:
    // 0x347b74: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x347b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_347b78:
    // 0x347b78: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x347b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_347b7c:
    // 0x347b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x347b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347b80:
    // 0x347b80: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x347b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347b84:
    // 0x347b84: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x347b84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_347b88:
    // 0x347b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x347b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_347b8c:
    // 0x347b8c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x347b8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_347b90:
    // 0x347b90: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x347b90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_347b94:
    // 0x347b94: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x347b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_347b98:
    // 0x347b98: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x347b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_347b9c:
    // 0x347b9c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x347b9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_347ba0:
    // 0x347ba0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x347ba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_347ba4:
    // 0x347ba4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347ba8:
    // 0x347ba8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x347ba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347bac:
    // 0x347bac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x347bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347bb0:
    // 0x347bb0: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x347bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_347bb4:
    // 0x347bb4: 0x1000000f  b           . + 4 + (0xF << 2)
label_347bb8:
    if (ctx->pc == 0x347BB8u) {
        ctx->pc = 0x347BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BB4u;
        // 0x347bb8: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347BBCu;
        goto label_347bbc;
    }
    ctx->pc = 0x347BB4u;
    {
        const bool branch_taken_0x347bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BB4u;
        // 0x347bb8: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bb4) {
            ctx->pc = 0x347BF4u;
            goto label_347bf4;
        }
    }
    ctx->pc = 0x347BBCu;
label_347bbc:
    // 0x347bbc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x347bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_347bc0:
    // 0x347bc0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x347bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_347bc4:
    // 0x347bc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_347bc8:
    if (ctx->pc == 0x347BC8u) {
        ctx->pc = 0x347BCCu;
        goto label_347bcc;
    }
    ctx->pc = 0x347BC4u;
    {
        const bool branch_taken_0x347bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x347bc4) {
            ctx->pc = 0x347BD8u;
            goto label_347bd8;
        }
    }
    ctx->pc = 0x347BCCu;
label_347bcc:
    // 0x347bcc: 0x924200f0  lbu         $v0, 0xF0($s2)
    ctx->pc = 0x347bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
label_347bd0:
    // 0x347bd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_347bd4:
    if (ctx->pc == 0x347BD4u) {
        ctx->pc = 0x347BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BD0u;
        // 0x347bd4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347BD8u;
        goto label_347bd8;
    }
    ctx->pc = 0x347BD0u;
    {
        const bool branch_taken_0x347bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BD0u;
        // 0x347bd4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bd0) {
            ctx->pc = 0x347BF8u;
            goto label_347bf8;
        }
    }
    ctx->pc = 0x347BD8u;
label_347bd8:
    // 0x347bd8: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x347bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
label_347bdc:
    // 0x347bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x347bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347be0:
    // 0x347be0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x347be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347be4:
    // 0x347be4: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x347be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
label_347be8:
    // 0x347be8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x347be8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_347bec:
    // 0x347bec: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x347becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_347bf0:
    // 0x347bf0: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x347bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_347bf4:
    // 0x347bf4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x347bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_347bf8:
    // 0x347bf8: 0x146200b9  bne         $v1, $v0, . + 4 + (0xB9 << 2)
label_347bfc:
    if (ctx->pc == 0x347BFCu) {
        ctx->pc = 0x347BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BF8u;
        // 0x347bfc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C00u;
        goto label_347c00;
    }
    ctx->pc = 0x347BF8u;
    {
        const bool branch_taken_0x347bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BF8u;
        // 0x347bfc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bf8) {
            ctx->pc = 0x347EE0u;
            goto label_347ee0;
        }
    }
    ctx->pc = 0x347C00u;
label_347c00:
    // 0x347c00: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x347c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_347c04:
    // 0x347c04: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
label_347c08:
    if (ctx->pc == 0x347C08u) {
        ctx->pc = 0x347C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C04u;
        // 0x347c08: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C0Cu;
        goto label_347c0c;
    }
    ctx->pc = 0x347C04u;
    {
        const bool branch_taken_0x347c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C04u;
        // 0x347c08: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c04) {
            ctx->pc = 0x347EDCu;
            goto label_347edc;
        }
    }
    ctx->pc = 0x347C0Cu;
label_347c0c:
    // 0x347c0c: 0xc0f6a96  jal         func_3DAA58
label_347c10:
    if (ctx->pc == 0x347C10u) {
        ctx->pc = 0x347C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C0Cu;
        // 0x347c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C14u;
        goto label_347c14;
    }
    ctx->pc = 0x347C0Cu;
    SET_GPR_U32(ctx, 31, 0x347C14u);
    ctx->pc = 0x347C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C0Cu;
    // 0x347c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347C0Cu, 0x347C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C14u;
label_347c14:
    // 0x347c14: 0x8e5000a4  lw          $s0, 0xA4($s2)
    ctx->pc = 0x347c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_347c18:
    // 0x347c18: 0xc0f70ce  jal         func_3DC338
label_347c1c:
    if (ctx->pc == 0x347C1Cu) {
        ctx->pc = 0x347C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C18u;
        // 0x347c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C20u;
        goto label_347c20;
    }
    ctx->pc = 0x347C18u;
    SET_GPR_U32(ctx, 31, 0x347C20u);
    ctx->pc = 0x347C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C18u;
    // 0x347c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x347C18u, 0x347C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C20u;
label_347c20:
    // 0x347c20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_347c24:
    if (ctx->pc == 0x347C24u) {
        ctx->pc = 0x347C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C20u;
        // 0x347c24: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C28u;
        goto label_347c28;
    }
    ctx->pc = 0x347C20u;
    {
        const bool branch_taken_0x347c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C20u;
        // 0x347c24: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c20) {
            ctx->pc = 0x347C34u;
            goto label_347c34;
        }
    }
    ctx->pc = 0x347C28u;
label_347c28:
    // 0x347c28: 0xc0c4900  jal         func_312400
label_347c2c:
    if (ctx->pc == 0x347C2Cu) {
        ctx->pc = 0x347C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C28u;
        // 0x347c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C30u;
        goto label_347c30;
    }
    ctx->pc = 0x347C28u;
    SET_GPR_U32(ctx, 31, 0x347C30u);
    ctx->pc = 0x347C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C28u;
    // 0x347c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x347C28u, 0x347C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C30u;
label_347c30:
    // 0x347c30: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x347c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_347c34:
    // 0x347c34: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x347c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_347c38:
    // 0x347c38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347c3c:
    // 0x347c3c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x347c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347c40:
    // 0x347c40: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x347c40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_347c44:
    // 0x347c44: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x347c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_347c48:
    // 0x347c48: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x347c48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_347c4c:
    // 0x347c4c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x347c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_347c50:
    // 0x347c50: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x347c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_347c54:
    // 0x347c54: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x347c54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_347c58:
    // 0x347c58: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x347c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_347c5c:
    // 0x347c5c: 0xc0f6a96  jal         func_3DAA58
label_347c60:
    if (ctx->pc == 0x347C60u) {
        ctx->pc = 0x347C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C5Cu;
        // 0x347c60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C64u;
        goto label_347c64;
    }
    ctx->pc = 0x347C5Cu;
    SET_GPR_U32(ctx, 31, 0x347C64u);
    ctx->pc = 0x347C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C5Cu;
    // 0x347c60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x347C5Cu, 0x347C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C64u;
label_347c64:
    // 0x347c64: 0x8e5000a4  lw          $s0, 0xA4($s2)
    ctx->pc = 0x347c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_347c68:
    // 0x347c68: 0xc0f70ce  jal         func_3DC338
label_347c6c:
    if (ctx->pc == 0x347C6Cu) {
        ctx->pc = 0x347C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C68u;
        // 0x347c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C70u;
        goto label_347c70;
    }
    ctx->pc = 0x347C68u;
    SET_GPR_U32(ctx, 31, 0x347C70u);
    ctx->pc = 0x347C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C68u;
    // 0x347c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x347C68u, 0x347C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C70u;
label_347c70:
    // 0x347c70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_347c74:
    if (ctx->pc == 0x347C74u) {
        ctx->pc = 0x347C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C70u;
        // 0x347c74: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C78u;
        goto label_347c78;
    }
    ctx->pc = 0x347C70u;
    {
        const bool branch_taken_0x347c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C70u;
        // 0x347c74: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c70) {
            ctx->pc = 0x347C84u;
            goto label_347c84;
        }
    }
    ctx->pc = 0x347C78u;
label_347c78:
    // 0x347c78: 0xc0c4900  jal         func_312400
label_347c7c:
    if (ctx->pc == 0x347C7Cu) {
        ctx->pc = 0x347C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C78u;
        // 0x347c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C80u;
        goto label_347c80;
    }
    ctx->pc = 0x347C78u;
    SET_GPR_U32(ctx, 31, 0x347C80u);
    ctx->pc = 0x347C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C78u;
    // 0x347c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x347C78u, 0x347C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C80u;
label_347c80:
    // 0x347c80: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x347c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_347c84:
    // 0x347c84: 0x264200c0  addiu       $v0, $s2, 0xC0
    ctx->pc = 0x347c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_347c88:
    // 0x347c88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347c8c:
    // 0x347c8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x347c8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347c90:
    // 0x347c90: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x347c90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_347c94:
    // 0x347c94: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x347c94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_347c98:
    // 0x347c98: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x347c98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_347c9c:
    // 0x347c9c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x347c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_347ca0:
    // 0x347ca0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x347ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_347ca4:
    // 0x347ca4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x347ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_347ca8:
    // 0x347ca8: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x347ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_347cac:
    // 0x347cac: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x347cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_347cb0:
    // 0x347cb0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x347cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_347cb4:
    // 0x347cb4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x347cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347cb8:
    // 0x347cb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x347cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347cbc:
    // 0x347cbc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x347cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347cc0:
    // 0x347cc0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x347cc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_347cc4:
    // 0x347cc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x347cc4u;
    // VWAITQ (Q already resolved in this runtime)
label_347cc8:
    // 0x347cc8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x347cc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347ccc:
    // 0x347ccc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x347cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_347cd0:
    // 0x347cd0: 0x8e5000a4  lw          $s0, 0xA4($s2)
    ctx->pc = 0x347cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_347cd4:
    // 0x347cd4: 0x26d40030  addiu       $s4, $s6, 0x30
    ctx->pc = 0x347cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_347cd8:
    // 0x347cd8: 0xc0f70ce  jal         func_3DC338
label_347cdc:
    if (ctx->pc == 0x347CDCu) {
        ctx->pc = 0x347CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CD8u;
        // 0x347cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347CE0u;
        goto label_347ce0;
    }
    ctx->pc = 0x347CD8u;
    SET_GPR_U32(ctx, 31, 0x347CE0u);
    ctx->pc = 0x347CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CD8u;
    // 0x347cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x347CD8u, 0x347CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CE0u;
label_347ce0:
    // 0x347ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_347ce4:
    if (ctx->pc == 0x347CE4u) {
        ctx->pc = 0x347CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CE0u;
        // 0x347ce4: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347CE8u;
        goto label_347ce8;
    }
    ctx->pc = 0x347CE0u;
    {
        const bool branch_taken_0x347ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CE0u;
        // 0x347ce4: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ce0) {
            ctx->pc = 0x347CF4u;
            goto label_347cf4;
        }
    }
    ctx->pc = 0x347CE8u;
label_347ce8:
    // 0x347ce8: 0xc0c4900  jal         func_312400
label_347cec:
    if (ctx->pc == 0x347CECu) {
        ctx->pc = 0x347CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CE8u;
        // 0x347cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347CF0u;
        goto label_347cf0;
    }
    ctx->pc = 0x347CE8u;
    SET_GPR_U32(ctx, 31, 0x347CF0u);
    ctx->pc = 0x347CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CE8u;
    // 0x347cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x347CE8u, 0x347CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CF0u;
label_347cf0:
    // 0x347cf0: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x347cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_347cf4:
    // 0x347cf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347cf8:
    // 0x347cf8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x347cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_347cfc:
    // 0x347cfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x347cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347d00:
    // 0x347d00: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x347d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_347d04:
    // 0x347d04: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x347d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347d08:
    // 0x347d08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x347d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_347d0c:
    // 0x347d0c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x347d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347d10:
    // 0x347d10: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x347d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_347d14:
    // 0x347d14: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x347d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347d18:
    // 0x347d18: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x347d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347d1c:
    // 0x347d1c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x347d1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_347d20:
    // 0x347d20: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x347d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_347d24:
    // 0x347d24: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x347d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_347d28:
    // 0x347d28: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x347d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_347d2c:
    // 0x347d2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347d2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347d30:
    // 0x347d30: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x347d30u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_347d34:
    // 0x347d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x347d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_347d38:
    // 0x347d38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x347d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347d3c:
    // 0x347d3c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x347d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_347d40:
    // 0x347d40: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x347d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_347d44:
    // 0x347d44: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x347d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_347d48:
    // 0x347d48: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x347d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_347d4c:
    // 0x347d4c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x347d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_347d50:
    // 0x347d50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347d54:
    // 0x347d54: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x347d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_347d58:
    // 0x347d58: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x347d58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_347d5c:
    // 0x347d5c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x347d5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347d60:
    // 0x347d60: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x347d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_347d64:
    // 0x347d64: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x347d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347d68:
    // 0x347d68: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x347d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347d6c:
    // 0x347d6c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x347d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347d70:
    // 0x347d70: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x347d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347d74:
    // 0x347d74: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x347d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_347d78:
    // 0x347d78: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x347d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_347d7c:
    // 0x347d7c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x347d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_347d80:
    // 0x347d80: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x347d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_347d84:
    // 0x347d84: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x347d84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_347d88:
    // 0x347d88: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x347d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347d8c:
    // 0x347d8c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x347d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347d90:
    // 0x347d90: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x347d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347d94:
    // 0x347d94: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x347d94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_347d98:
    // 0x347d98: 0x4a0003bf  vwaitq
    ctx->pc = 0x347d98u;
    // VWAITQ (Q already resolved in this runtime)
label_347d9c:
    // 0x347d9c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x347d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347da0:
    // 0x347da0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x347da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_347da4:
    // 0x347da4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x347da4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_347da8:
    // 0x347da8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x347da8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_347dac:
    // 0x347dac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x347dacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_347db0:
    // 0x347db0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x347db0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347db4:
    // 0x347db4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x347db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_347db8:
    // 0x347db8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x347db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347dbc:
    // 0x347dbc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x347dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347dc0:
    // 0x347dc0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x347dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347dc4:
    // 0x347dc4: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x347dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347dc8:
    // 0x347dc8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x347dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_347dcc:
    // 0x347dcc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x347dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_347dd0:
    // 0x347dd0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x347dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_347dd4:
    // 0x347dd4: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x347dd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_347dd8:
    // 0x347dd8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347ddc:
    // 0x347ddc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x347ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_347de0:
    // 0x347de0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347de4:
    // 0x347de4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x347de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347de8:
    // 0x347de8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x347de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347dec:
    // 0x347dec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x347decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_347df0:
    // 0x347df0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x347df0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_347df4:
    // 0x347df4: 0x4a0003bf  vwaitq
    ctx->pc = 0x347df4u;
    // VWAITQ (Q already resolved in this runtime)
label_347df8:
    // 0x347df8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x347df8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347dfc:
    // 0x347dfc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x347dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_347e00:
    // 0x347e00: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x347e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347e04:
    // 0x347e04: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x347e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347e08:
    // 0x347e08: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x347e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347e0c:
    // 0x347e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x347e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_347e10:
    // 0x347e10: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x347e10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_347e14:
    // 0x347e14: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x347e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_347e18:
    // 0x347e18: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x347e18u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_347e1c:
    // 0x347e1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x347e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_347e20:
    // 0x347e20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x347e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_347e24:
    // 0x347e24: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x347e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_347e28:
    // 0x347e28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347e28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347e2c:
    // 0x347e2c: 0xfac10020  sqc2        $vf1, 0x20($s6)
    ctx->pc = 0x347e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_347e30:
    // 0x347e30: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x347e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347e34:
    // 0x347e34: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x347e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347e38:
    // 0x347e38: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x347e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347e3c:
    // 0x347e3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x347e3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_347e40:
    // 0x347e40: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x347e40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_347e44:
    // 0x347e44: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x347e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_347e48:
    // 0x347e48: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x347e48u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_347e4c:
    // 0x347e4c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x347e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_347e50:
    // 0x347e50: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x347e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_347e54:
    // 0x347e54: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x347e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_347e58:
    // 0x347e58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347e5c:
    // 0x347e5c: 0xfac10010  sqc2        $vf1, 0x10($s6)
    ctx->pc = 0x347e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_347e60:
    // 0x347e60: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x347e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347e64:
    // 0x347e64: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x347e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347e68:
    // 0x347e68: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x347e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347e6c:
    // 0x347e6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x347e6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_347e70:
    // 0x347e70: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x347e70u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_347e74:
    // 0x347e74: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x347e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_347e78:
    // 0x347e78: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x347e78u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_347e7c:
    // 0x347e7c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x347e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_347e80:
    // 0x347e80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x347e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_347e84:
    // 0x347e84: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x347e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_347e88:
    // 0x347e88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347e8c:
    // 0x347e8c: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x347e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_347e90:
    // 0x347e90: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x347e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_347e94:
    // 0x347e94: 0xc0c48da  jal         func_312368
label_347e98:
    if (ctx->pc == 0x347E98u) {
        ctx->pc = 0x347E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E94u;
        // 0x347e98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347E9Cu;
        goto label_347e9c;
    }
    ctx->pc = 0x347E94u;
    SET_GPR_U32(ctx, 31, 0x347E9Cu);
    ctx->pc = 0x347E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E94u;
    // 0x347e98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x347E94u, 0x347E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E9Cu;
label_347e9c:
    // 0x347e9c: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x347e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347ea0:
    // 0x347ea0: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x347ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_347ea4:
    // 0x347ea4: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x347ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_347ea8:
    // 0x347ea8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x347ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_347eac:
    // 0x347eac: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x347eacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_347eb0:
    // 0x347eb0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x347eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347eb4:
    // 0x347eb4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x347eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_347eb8:
    // 0x347eb8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x347eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347ebc:
    // 0x347ebc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x347ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347ec0:
    // 0x347ec0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x347ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347ec4:
    // 0x347ec4: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x347ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347ec8:
    // 0x347ec8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x347ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_347ecc:
    // 0x347ecc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x347eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_347ed0:
    // 0x347ed0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x347ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_347ed4:
    // 0x347ed4: 0x100002e1  b           . + 4 + (0x2E1 << 2)
label_347ed8:
    if (ctx->pc == 0x347ED8u) {
        ctx->pc = 0x347ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ED4u;
        // 0x347ed8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x347EDCu;
        goto label_347edc;
    }
    ctx->pc = 0x347ED4u;
    {
        const bool branch_taken_0x347ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ED4u;
        // 0x347ed8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ed4) {
            ctx->pc = 0x348A5Cu;
            goto label_348a5c;
        }
    }
    ctx->pc = 0x347EDCu;
label_347edc:
    // 0x347edc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x347edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_347ee0:
    // 0x347ee0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_347ee4:
    if (ctx->pc == 0x347EE4u) {
        ctx->pc = 0x347EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EE0u;
        // 0x347ee4: 0xc6430000  lwc1        $f3, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x347EE8u;
        goto label_347ee8;
    }
    ctx->pc = 0x347EE0u;
    {
        const bool branch_taken_0x347ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x347ee0) {
            ctx->pc = 0x347EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EE0u;
            // 0x347ee4: 0xc6430000  lwc1        $f3, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x347F28u;
            goto label_347f28;
        }
    }
    ctx->pc = 0x347EE8u;
label_347ee8:
    // 0x347ee8: 0x924200f0  lbu         $v0, 0xF0($s2)
    ctx->pc = 0x347ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 240)));
label_347eec:
    // 0x347eec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_347ef0:
    if (ctx->pc == 0x347EF0u) {
        ctx->pc = 0x347EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EECu;
        // 0x347ef0: 0x264200e0  addiu       $v0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347EF4u;
        goto label_347ef4;
    }
    ctx->pc = 0x347EECu;
    {
        const bool branch_taken_0x347eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EECu;
        // 0x347ef0: 0x264200e0  addiu       $v0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347eec) {
            ctx->pc = 0x347F24u;
            goto label_347f24;
        }
    }
    ctx->pc = 0x347EF4u;
label_347ef4:
    // 0x347ef4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x347ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_347ef8:
    // 0x347ef8: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x347ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_347efc:
    // 0x347efc: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x347efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_347f00:
    // 0x347f00: 0xc0c48da  jal         func_312368
label_347f04:
    if (ctx->pc == 0x347F04u) {
        ctx->pc = 0x347F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F00u;
        // 0x347f04: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F08u;
        goto label_347f08;
    }
    ctx->pc = 0x347F00u;
    SET_GPR_U32(ctx, 31, 0x347F08u);
    ctx->pc = 0x347F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F00u;
    // 0x347f04: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x347F00u, 0x347F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F08u;
label_347f08:
    // 0x347f08: 0x100002d5  b           . + 4 + (0x2D5 << 2)
label_347f0c:
    if (ctx->pc == 0x347F0Cu) {
        ctx->pc = 0x347F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F08u;
        // 0x347f0c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F10u;
        goto label_347f10;
    }
    ctx->pc = 0x347F08u;
    {
        const bool branch_taken_0x347f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F08u;
        // 0x347f0c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347f08) {
            ctx->pc = 0x348A60u;
            goto label_348a60;
        }
    }
    ctx->pc = 0x347F10u;
label_347f10:
    // 0x347f10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x347f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_347f14:
    // 0x347f14: 0xc0d7a5e  jal         func_35E978
label_347f18:
    if (ctx->pc == 0x347F18u) {
        ctx->pc = 0x347F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F14u;
        // 0x347f18: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347F1Cu;
        goto label_347f1c;
    }
    ctx->pc = 0x347F14u;
    SET_GPR_U32(ctx, 31, 0x347F1Cu);
    ctx->pc = 0x347F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347F14u;
    // 0x347f18: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E978u, 0x347F14u, 0x347F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F1Cu;
label_347f1c:
    // 0x347f1c: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_347f20:
    if (ctx->pc == 0x347F20u) {
        ctx->pc = 0x347F24u;
        goto label_347f24;
    }
    ctx->pc = 0x347F1Cu;
    {
        const bool branch_taken_0x347f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f1c) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x347F24u;
label_347f24:
    // 0x347f24: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x347f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347f28:
    // 0x347f28: 0x26c30030  addiu       $v1, $s6, 0x30
    ctx->pc = 0x347f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_347f2c:
    // 0x347f2c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x347f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347f30:
    // 0x347f30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x347f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_347f34:
    // 0x347f34: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x347f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347f38:
    // 0x347f38: 0x4603d8c2  mul.s       $f3, $f27, $f3
    ctx->pc = 0x347f38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[27], ctx->f[3]);
label_347f3c:
    // 0x347f3c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x347f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347f40:
    // 0x347f40: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x347f40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
label_347f44:
    // 0x347f44: 0x4601d842  mul.s       $f1, $f27, $f1
    ctx->pc = 0x347f44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
label_347f48:
    // 0x347f48: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x347f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
label_347f4c:
    // 0x347f4c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x347f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_347f50:
    // 0x347f50: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x347f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_347f54:
    // 0x347f54: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x347f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_347f58:
    // 0x347f58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x347f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_347f5c:
    // 0x347f5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347f5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_347f60:
    // 0x347f60: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x347f60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_347f64:
    // 0x347f64: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x347f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_347f68:
    // 0x347f68: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x347f68u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_347f6c:
    // 0x347f6c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x347f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_347f70:
    // 0x347f70: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x347f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347f74:
    // 0x347f74: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x347f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347f78:
    // 0x347f78: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x347f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_347f7c:
    // 0x347f7c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x347f7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_347f80:
    // 0x347f80: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x347f80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_347f84:
    // 0x347f84: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x347f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_347f88:
    // 0x347f88: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x347f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_347f8c:
    // 0x347f8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x347f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347f90:
    // 0x347f90: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x347f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_347f94:
    // 0x347f94: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x347f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_347f98:
    // 0x347f98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x347f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347f9c:
    // 0x347f9c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x347f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_347fa0:
    // 0x347fa0: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_347fa4:
    if (ctx->pc == 0x347FA4u) {
        ctx->pc = 0x347FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FA0u;
        // 0x347fa4: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347FA8u;
        goto label_347fa8;
    }
    ctx->pc = 0x347FA0u;
    {
        const bool branch_taken_0x347fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x347FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FA0u;
        // 0x347fa4: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347fa0) {
            ctx->pc = 0x348090u;
            goto label_348090;
        }
    }
    ctx->pc = 0x347FA8u;
label_347fa8:
    // 0x347fa8: 0xc0b1488  jal         func_2C5220
label_347fac:
    if (ctx->pc == 0x347FACu) {
        ctx->pc = 0x347FB0u;
        goto label_347fb0;
    }
    ctx->pc = 0x347FA8u;
    SET_GPR_U32(ctx, 31, 0x347FB0u);
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x347FA8u, 0x347FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FB0u;
label_347fb0:
    // 0x347fb0: 0xc0b1488  jal         func_2C5220
label_347fb4:
    if (ctx->pc == 0x347FB4u) {
        ctx->pc = 0x347FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FB0u;
        // 0x347fb4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347FB8u;
        goto label_347fb8;
    }
    ctx->pc = 0x347FB0u;
    SET_GPR_U32(ctx, 31, 0x347FB8u);
    ctx->pc = 0x347FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FB0u;
    // 0x347fb4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x347FB0u, 0x347FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FB8u;
label_347fb8:
    // 0x347fb8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x347fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_347fbc:
    // 0x347fbc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x347fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_347fc0:
    // 0x347fc0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x347fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_347fc4:
    // 0x347fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347fc8:
    // 0x347fc8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x347fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_347fcc:
    // 0x347fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x347fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347fd0:
    // 0x347fd0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x347fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_347fd4:
    // 0x347fd4: 0x4603d8c2  mul.s       $f3, $f27, $f3
    ctx->pc = 0x347fd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[27], ctx->f[3]);
label_347fd8:
    // 0x347fd8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x347fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347fdc:
    // 0x347fdc: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x347fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
label_347fe0:
    // 0x347fe0: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x347fe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
label_347fe4:
    // 0x347fe4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x347fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_347fe8:
    // 0x347fe8: 0x4601d842  mul.s       $f1, $f27, $f1
    ctx->pc = 0x347fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
label_347fec:
    // 0x347fec: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x347fecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_347ff0:
    // 0x347ff0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x347ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_347ff4:
    // 0x347ff4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x347ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_347ff8:
    // 0x347ff8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x347ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_347ffc:
    // 0x347ffc: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x347ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_348000:
    // 0x348000: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x348000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_348004:
    // 0x348004: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x348004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348008:
    // 0x348008: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x348008u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_34800c:
    // 0x34800c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x34800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_348010:
    // 0x348010: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x348010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348014:
    // 0x348014: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x348014u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_348018:
    // 0x348018: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x348018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_34801c:
    // 0x34801c: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x34801cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_348020:
    // 0x348020: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x348020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348024:
    // 0x348024: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x348024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_348028:
    // 0x348028: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x348028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34802c:
    // 0x34802c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x34802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348030:
    // 0x348030: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x348030u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_348034:
    // 0x348034: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x348034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_348038:
    // 0x348038: 0xe6740008  swc1        $f20, 0x8($s3)
    ctx->pc = 0x348038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_34803c:
    // 0x34803c: 0xc0b163c  jal         func_2C58F0
label_348040:
    if (ctx->pc == 0x348040u) {
        ctx->pc = 0x348040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34803Cu;
        // 0x348040: 0xe6610004  swc1        $f1, 0x4($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348044u;
        goto label_348044;
    }
    ctx->pc = 0x34803Cu;
    SET_GPR_U32(ctx, 31, 0x348044u);
    ctx->pc = 0x348040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34803Cu;
    // 0x348040: 0xe6610004  swc1        $f1, 0x4($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x34803Cu, 0x348044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348044u;
label_348044:
    // 0x348044: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x348044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_348048:
    // 0x348048: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x348048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_34804c:
    // 0x34804c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x34804cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_348050:
    // 0x348050: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x348050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_348054:
    // 0x348054: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_348058:
    // 0x348058: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x348058u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_34805c:
    // 0x34805c: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x34805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_348060:
    // 0x348060: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x348060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_348064:
    // 0x348064: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x348064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_348068:
    // 0x348068: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34806c:
    // 0x34806c: 0xfac10010  sqc2        $vf1, 0x10($s6)
    ctx->pc = 0x34806cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_348070:
    // 0x348070: 0x26c30020  addiu       $v1, $s6, 0x20
    ctx->pc = 0x348070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_348074:
    // 0x348074: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x348074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_348078:
    // 0x348078: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x348078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_34807c:
    // 0x34807c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34807cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_348080:
    // 0x348080: 0xfac10020  sqc2        $vf1, 0x20($s6)
    ctx->pc = 0x348080u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_348084:
    // 0x348084: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x348084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_348088:
    // 0x348088: 0xc0b14ae  jal         func_2C52B8
label_34808c:
    if (ctx->pc == 0x34808Cu) {
        ctx->pc = 0x34808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348088u;
        // 0x34808c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348090u;
        goto label_348090;
    }
    ctx->pc = 0x348088u;
    SET_GPR_U32(ctx, 31, 0x348090u);
    ctx->pc = 0x34808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348088u;
    // 0x34808c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x348088u, 0x348090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348090u;
label_348090:
    // 0x348090: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x348090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_348094:
    // 0x348094: 0xc0f6a96  jal         func_3DAA58
label_348098:
    if (ctx->pc == 0x348098u) {
        ctx->pc = 0x348098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348094u;
        // 0x348098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34809Cu;
        goto label_34809c;
    }
    ctx->pc = 0x348094u;
    SET_GPR_U32(ctx, 31, 0x34809Cu);
    ctx->pc = 0x348098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348094u;
    // 0x348098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x348094u, 0x34809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34809Cu;
label_34809c:
    // 0x34809c: 0xc0f6a96  jal         func_3DAA58
label_3480a0:
    if (ctx->pc == 0x3480A0u) {
        ctx->pc = 0x3480A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34809Cu;
        // 0x3480a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3480A4u;
        goto label_3480a4;
    }
    ctx->pc = 0x34809Cu;
    SET_GPR_U32(ctx, 31, 0x3480A4u);
    ctx->pc = 0x3480A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34809Cu;
    // 0x3480a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34809Cu, 0x3480A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480A4u;
label_3480a4:
    // 0x3480a4: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x3480a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_3480a8:
    // 0x3480a8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3480a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3480ac:
    // 0x3480ac: 0x7ac30030  lq          $v1, 0x30($s6)
    ctx->pc = 0x3480acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_3480b0:
    // 0x3480b0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3480b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3480b4:
    // 0x3480b4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3480b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3480b8:
    // 0x3480b8: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x3480b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3480bc:
    // 0x3480bc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3480bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3480c0:
    // 0x3480c0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3480c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_3480c4:
    // 0x3480c4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3480c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3480c8:
    // 0x3480c8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3480c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3480cc:
    // 0x3480cc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x3480ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3480d0:
    // 0x3480d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3480d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_3480d4:
    // 0x3480d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3480d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_3480d8:
    // 0x3480d8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3480d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_3480dc:
    // 0x3480dc: 0x0  nop
    ctx->pc = 0x3480dcu;
    // NOP
label_3480e0:
    // 0x3480e0: 0x0  nop
    ctx->pc = 0x3480e0u;
    // NOP
label_3480e4:
    // 0x3480e4: 0x46000044  c1          0x44
    ctx->pc = 0x3480e4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_3480e8:
    // 0x3480e8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3480e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3480ec:
    // 0x3480ec: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3480ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3480f0:
    // 0x3480f0: 0x0  nop
    ctx->pc = 0x3480f0u;
    // NOP
label_3480f4:
    // 0x3480f4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3480f8:
    if (ctx->pc == 0x3480F8u) {
        ctx->pc = 0x3480F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480F4u;
        // 0x3480f8: 0xe6210050  swc1        $f1, 0x50($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3480FCu;
        goto label_3480fc;
    }
    ctx->pc = 0x3480F4u;
    {
        const bool branch_taken_0x3480f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3480F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480F4u;
        // 0x3480f8: 0xe6210050  swc1        $f1, 0x50($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480f4) {
            ctx->pc = 0x348120u;
            goto label_348120;
        }
    }
    ctx->pc = 0x3480FCu;
label_3480fc:
    // 0x3480fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3480fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_348100:
    // 0x348100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348104:
    // 0x348104: 0x0  nop
    ctx->pc = 0x348104u;
    // NOP
label_348108:
    // 0x348108: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x348108u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_34810c:
    // 0x34810c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34810cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_348110:
    // 0x348110: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x348110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_348114:
    // 0x348114: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x348114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_348118:
    // 0x348118: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x348118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34811c:
    // 0x34811c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_348120:
    // 0x348120: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_348124:
    // 0x348124: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x348124u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348128:
    // 0x348128: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x348128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_34812c:
    // 0x34812c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_348130:
    if (ctx->pc == 0x348130u) {
        ctx->pc = 0x348130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34812Cu;
        // 0x348130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348134u;
        goto label_348134;
    }
    ctx->pc = 0x34812Cu;
    {
        const bool branch_taken_0x34812c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34812Cu;
        // 0x348130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34812c) {
            ctx->pc = 0x348158u;
            goto label_348158;
        }
    }
    ctx->pc = 0x348134u;
label_348134:
    // 0x348134: 0x3c050404  lui         $a1, 0x404
    ctx->pc = 0x348134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1028 << 16));
label_348138:
    // 0x348138: 0x92420030  lbu         $v0, 0x30($s2)
    ctx->pc = 0x348138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_34813c:
    // 0x34813c: 0x34a50011  ori         $a1, $a1, 0x11
    ctx->pc = 0x34813cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17);
label_348140:
    // 0x348140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_348144:
    if (ctx->pc == 0x348144u) {
        ctx->pc = 0x348144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348140u;
        // 0x348144: 0x26430030  addiu       $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348148u;
        goto label_348148;
    }
    ctx->pc = 0x348140u;
    {
        const bool branch_taken_0x348140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348140u;
        // 0x348144: 0x26430030  addiu       $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348140) {
            ctx->pc = 0x348158u;
            goto label_348158;
        }
    }
    ctx->pc = 0x348148u;
label_348148:
    // 0x348148: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x348148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_34814c:
    // 0x34814c: 0x3c020404  lui         $v0, 0x404
    ctx->pc = 0x34814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1028 << 16));
label_348150:
    // 0x348150: 0x34420211  ori         $v0, $v0, 0x211
    ctx->pc = 0x348150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)529);
label_348154:
    // 0x348154: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x348154u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_348158:
    // 0x348158: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x348158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34815c:
    // 0x34815c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34815cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348160:
    // 0x348160: 0x0  nop
    ctx->pc = 0x348160u;
    // NOP
label_348164:
    // 0x348164: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x348164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348168:
    // 0x348168: 0x0  nop
    ctx->pc = 0x348168u;
    // NOP
label_34816c:
    // 0x34816c: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_348170:
    if (ctx->pc == 0x348170u) {
        ctx->pc = 0x348170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34816Cu;
        // 0x348170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348174u;
        goto label_348174;
    }
    ctx->pc = 0x34816Cu;
    {
        const bool branch_taken_0x34816c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34816Cu;
        // 0x348170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34816c) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x348174u;
label_348174:
    // 0x348174: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x348174u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_348178:
    // 0x348178: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34817c:
    // 0x34817c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348180:
    // 0x348180: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x348180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348184:
    // 0x348184: 0xc07797e  jal         func_1DE5F8
label_348188:
    if (ctx->pc == 0x348188u) {
        ctx->pc = 0x348188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348184u;
        // 0x348188: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34818Cu;
        goto label_34818c;
    }
    ctx->pc = 0x348184u;
    SET_GPR_U32(ctx, 31, 0x34818Cu);
    ctx->pc = 0x348188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348184u;
    // 0x348188: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x348184u, 0x34818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34818Cu;
label_34818c:
    // 0x34818c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_348190:
    if (ctx->pc == 0x348190u) {
        ctx->pc = 0x348194u;
        goto label_348194;
    }
    ctx->pc = 0x34818Cu;
    {
        const bool branch_taken_0x34818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34818c) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x348194u;
label_348194:
    // 0x348194: 0xc07a25c  jal         func_1E8970
label_348198:
    if (ctx->pc == 0x348198u) {
        ctx->pc = 0x348198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348194u;
        // 0x348198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34819Cu;
        goto label_34819c;
    }
    ctx->pc = 0x348194u;
    SET_GPR_U32(ctx, 31, 0x34819Cu);
    ctx->pc = 0x348198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348194u;
    // 0x348198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x348194u, 0x34819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34819Cu;
label_34819c:
    // 0x34819c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34819cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3481a0:
    // 0x3481a0: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x3481a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
label_3481a4:
    // 0x3481a4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_3481a8:
    if (ctx->pc == 0x3481A8u) {
        ctx->pc = 0x3481A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481A4u;
        // 0x3481a8: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3481ACu;
        goto label_3481ac;
    }
    ctx->pc = 0x3481A4u;
    {
        const bool branch_taken_0x3481a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481A4u;
        // 0x3481a8: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481a4) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x3481ACu;
label_3481ac:
    // 0x3481ac: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3481acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3481b0:
    // 0x3481b0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x3481b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_3481b4:
    // 0x3481b4: 0x24557ee0  addiu       $s5, $v0, 0x7EE0
    ctx->pc = 0x3481b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
label_3481b8:
    // 0x3481b8: 0x24742828  addiu       $s4, $v1, 0x2828
    ctx->pc = 0x3481b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
label_3481bc:
    // 0x3481bc: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x3481bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_3481c0:
    // 0x3481c0: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x3481c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
label_3481c4:
    // 0x3481c4: 0x0  nop
    ctx->pc = 0x3481c4u;
    // NOP
label_3481c8:
    // 0x3481c8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x3481c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3481cc:
    // 0x3481cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3481ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3481d0:
    // 0x3481d0: 0xc07a8e4  jal         func_1EA390
label_3481d4:
    if (ctx->pc == 0x3481D4u) {
        ctx->pc = 0x3481D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481D0u;
        // 0x3481d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3481D8u;
        goto label_3481d8;
    }
    ctx->pc = 0x3481D0u;
    SET_GPR_U32(ctx, 31, 0x3481D8u);
    ctx->pc = 0x3481D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481D0u;
    // 0x3481d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x3481D0u, 0x3481D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481D8u;
label_3481d8:
    // 0x3481d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3481d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3481dc:
    // 0x3481dc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3481dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3481e0:
    // 0x3481e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3481e4:
    if (ctx->pc == 0x3481E4u) {
        ctx->pc = 0x3481E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481E0u;
        // 0x3481e4: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3481E8u;
        goto label_3481e8;
    }
    ctx->pc = 0x3481E0u;
    {
        const bool branch_taken_0x3481e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3481e0) {
            ctx->pc = 0x3481E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3481E0u;
            // 0x3481e4: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3481FCu;
            goto label_3481fc;
        }
    }
    ctx->pc = 0x3481E8u;
label_3481e8:
    // 0x3481e8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3481e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3481ec:
    // 0x3481ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3481ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3481f0:
    // 0x3481f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3481f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3481f4:
    // 0x3481f4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_3481f8:
    if (ctx->pc == 0x3481F8u) {
        ctx->pc = 0x3481F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481F4u;
        // 0x3481f8: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3481FCu;
        goto label_3481fc;
    }
    ctx->pc = 0x3481F4u;
    {
        const bool branch_taken_0x3481f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481F4u;
        // 0x3481f8: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481f4) {
            ctx->pc = 0x3482ACu;
            goto label_3482ac;
        }
    }
    ctx->pc = 0x3481FCu;
label_3481fc:
    // 0x3481fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3481fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_348200:
    // 0x348200: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x348200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_348204:
    // 0x348204: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x348204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_348208:
    // 0x348208: 0x1464002d  bne         $v1, $a0, . + 4 + (0x2D << 2)
label_34820c:
    if (ctx->pc == 0x34820Cu) {
        ctx->pc = 0x34820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348208u;
        // 0x34820c: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348210u;
        goto label_348210;
    }
    ctx->pc = 0x348208u;
    {
        const bool branch_taken_0x348208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x34820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348208u;
        // 0x34820c: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348208) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x348210u;
label_348210:
    // 0x348210: 0x52e001fe  beql        $s7, $zero, . + 4 + (0x1FE << 2)
label_348214:
    if (ctx->pc == 0x348214u) {
        ctx->pc = 0x348214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348210u;
        // 0x348214: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348218u;
        goto label_348218;
    }
    ctx->pc = 0x348210u;
    {
        const bool branch_taken_0x348210 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x348210) {
            ctx->pc = 0x348214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348210u;
            // 0x348214: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x348218u;
label_348218:
    // 0x348218: 0x8ee20038  lw          $v0, 0x38($s7)
    ctx->pc = 0x348218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
label_34821c:
    // 0x34821c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x34821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_348220:
    // 0x348220: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_348224:
    if (ctx->pc == 0x348224u) {
        ctx->pc = 0x348224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348220u;
        // 0x348224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348228u;
        goto label_348228;
    }
    ctx->pc = 0x348220u;
    {
        const bool branch_taken_0x348220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348220u;
        // 0x348224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348220) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x348228u;
label_348228:
    // 0x348228: 0x8ef00034  lw          $s0, 0x34($s7)
    ctx->pc = 0x348228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
label_34822c:
    // 0x34822c: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
label_348230:
    if (ctx->pc == 0x348230u) {
        ctx->pc = 0x348230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34822Cu;
        // 0x348230: 0x8e4400f8  lw          $a0, 0xF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348234u;
        goto label_348234;
    }
    ctx->pc = 0x34822Cu;
    {
        const bool branch_taken_0x34822c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34822c) {
            ctx->pc = 0x348230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34822Cu;
            // 0x348230: 0x8e4400f8  lw          $a0, 0xF8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34823Cu;
            goto label_34823c;
        }
    }
    ctx->pc = 0x348234u;
label_348234:
    // 0x348234: 0x1000001d  b           . + 4 + (0x1D << 2)
label_348238:
    if (ctx->pc == 0x348238u) {
        ctx->pc = 0x348238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348234u;
        // 0x348238: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34823Cu;
        goto label_34823c;
    }
    ctx->pc = 0x348234u;
    {
        const bool branch_taken_0x348234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348234u;
        // 0x348238: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348234) {
            ctx->pc = 0x3482ACu;
            goto label_3482ac;
        }
    }
    ctx->pc = 0x34823Cu;
label_34823c:
    // 0x34823c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_348240:
    if (ctx->pc == 0x348240u) {
        ctx->pc = 0x348244u;
        goto label_348244;
    }
    ctx->pc = 0x34823Cu;
    {
        const bool branch_taken_0x34823c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34823c) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x348244u;
label_348244:
    // 0x348244: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x348244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_348248:
    // 0x348248: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x348248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_34824c:
    // 0x34824c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x34824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_348250:
    // 0x348250: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
label_348254:
    if (ctx->pc == 0x348254u) {
        ctx->pc = 0x348254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348250u;
        // 0x348254: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348258u;
        goto label_348258;
    }
    ctx->pc = 0x348250u;
    {
        const bool branch_taken_0x348250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348250u;
        // 0x348254: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348250) {
            ctx->pc = 0x347F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347f10;
        }
    }
    ctx->pc = 0x348258u;
label_348258:
    // 0x348258: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x348258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_34825c:
    // 0x34825c: 0x8c48bd50  lw          $t0, -0x42B0($v0)
    ctx->pc = 0x34825cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_348260:
    // 0x348260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348264:
    // 0x348264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348268:
    // 0x348268: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x348268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_34826c:
    // 0x34826c: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x34826cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_348270:
    // 0x348270: 0xc08a206  jal         func_228818
label_348274:
    if (ctx->pc == 0x348274u) {
        ctx->pc = 0x348274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348270u;
        // 0x348274: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348278u;
        goto label_348278;
    }
    ctx->pc = 0x348270u;
    SET_GPR_U32(ctx, 31, 0x348278u);
    ctx->pc = 0x348274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348270u;
    // 0x348274: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x348270u, 0x348278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348278u;
label_348278:
    // 0x348278: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_34827c:
    if (ctx->pc == 0x34827Cu) {
        ctx->pc = 0x34827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348278u;
        // 0x34827c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348280u;
        goto label_348280;
    }
    ctx->pc = 0x348278u;
    {
        const bool branch_taken_0x348278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348278u;
        // 0x34827c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348278) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x348280u;
label_348280:
    // 0x348280: 0x8e4400f8  lw          $a0, 0xF8($s2)
    ctx->pc = 0x348280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_348284:
    // 0x348284: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x348284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_348288:
    // 0x348288: 0xc0d77a8  jal         func_35DEA0
label_34828c:
    if (ctx->pc == 0x34828Cu) {
        ctx->pc = 0x34828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348288u;
        // 0x34828c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348290u;
        goto label_348290;
    }
    ctx->pc = 0x348288u;
    SET_GPR_U32(ctx, 31, 0x348290u);
    ctx->pc = 0x34828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348288u;
    // 0x34828c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x348288u, 0x348290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348290u;
label_348290:
    // 0x348290: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x348290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_348294:
    // 0x348294: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x348294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_348298:
    // 0x348298: 0x3863001f  xori        $v1, $v1, 0x1F
    ctx->pc = 0x348298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
label_34829c:
    // 0x34829c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3482a0:
    if (ctx->pc == 0x3482A0u) {
        ctx->pc = 0x3482A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34829Cu;
        // 0x3482a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482A4u;
        goto label_3482a4;
    }
    ctx->pc = 0x34829Cu;
    {
        const bool branch_taken_0x34829c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3482A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34829Cu;
        // 0x3482a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34829c) {
            ctx->pc = 0x3482C0u;
            goto label_3482c0;
        }
    }
    ctx->pc = 0x3482A4u;
label_3482a4:
    // 0x3482a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3482a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3482a8:
    // 0x3482a8: 0xa24200f1  sb          $v0, 0xF1($s2)
    ctx->pc = 0x3482a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 241), (uint8_t)GPR_U32(ctx, 2));
label_3482ac:
    // 0x3482ac: 0x8fc22b1c  lw          $v0, 0x2B1C($fp)
    ctx->pc = 0x3482acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
label_3482b0:
    // 0x3482b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3482b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3482b4:
    // 0x3482b4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3482b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3482b8:
    // 0x3482b8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_3482bc:
    if (ctx->pc == 0x3482BCu) {
        ctx->pc = 0x3482BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482B8u;
        // 0x3482bc: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482C0u;
        goto label_3482c0;
    }
    ctx->pc = 0x3482B8u;
    {
        const bool branch_taken_0x3482b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3482BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482B8u;
        // 0x3482bc: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482b8) {
            ctx->pc = 0x3481C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3481c8;
        }
    }
    ctx->pc = 0x3482C0u;
label_3482c0:
    // 0x3482c0: 0x52e001d2  beql        $s7, $zero, . + 4 + (0x1D2 << 2)
label_3482c4:
    if (ctx->pc == 0x3482C4u) {
        ctx->pc = 0x3482C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482C0u;
        // 0x3482c4: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482C8u;
        goto label_3482c8;
    }
    ctx->pc = 0x3482C0u;
    {
        const bool branch_taken_0x3482c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3482c0) {
            ctx->pc = 0x3482C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3482C0u;
            // 0x3482c4: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x3482C8u;
label_3482c8:
    // 0x3482c8: 0x8ee2002c  lw          $v0, 0x2C($s7)
    ctx->pc = 0x3482c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_3482cc:
    // 0x3482cc: 0x104001ce  beqz        $v0, . + 4 + (0x1CE << 2)
label_3482d0:
    if (ctx->pc == 0x3482D0u) {
        ctx->pc = 0x3482D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482CCu;
        // 0x3482d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482D4u;
        goto label_3482d4;
    }
    ctx->pc = 0x3482CCu;
    {
        const bool branch_taken_0x3482cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3482D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482CCu;
        // 0x3482d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482cc) {
            ctx->pc = 0x348A08u;
            goto label_348a08;
        }
    }
    ctx->pc = 0x3482D4u;
label_3482d4:
    // 0x3482d4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3482d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3482d8:
    // 0x3482d8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3482dc:
    // 0x3482dc: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x3482dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
label_3482e0:
    // 0x3482e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3482e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3482e4:
    // 0x3482e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3482e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3482e8:
    // 0x3482e8: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3482e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3482ec:
    // 0x3482ec: 0xc07a8e4  jal         func_1EA390
label_3482f0:
    if (ctx->pc == 0x3482F0u) {
        ctx->pc = 0x3482F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482ECu;
        // 0x3482f0: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3482F4u;
        goto label_3482f4;
    }
    ctx->pc = 0x3482ECu;
    SET_GPR_U32(ctx, 31, 0x3482F4u);
    ctx->pc = 0x3482F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482ECu;
    // 0x3482f0: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x3482ECu, 0x3482F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482F4u;
label_3482f4:
    // 0x3482f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3482f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3482f8:
    // 0x3482f8: 0x26107ee0  addiu       $s0, $s0, 0x7EE0
    ctx->pc = 0x3482f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32480));
label_3482fc:
    // 0x3482fc: 0xc0c3516  jal         func_30D458
label_348300:
    if (ctx->pc == 0x348300u) {
        ctx->pc = 0x348300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482FCu;
        // 0x348300: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348304u;
        goto label_348304;
    }
    ctx->pc = 0x3482FCu;
    SET_GPR_U32(ctx, 31, 0x348304u);
    ctx->pc = 0x348300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482FCu;
    // 0x348300: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D458u, 0x3482FCu, 0x348304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348304u;
label_348304:
    // 0x348304: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x348304u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_348308:
    // 0x348308: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x348308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_34830c:
    // 0x34830c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34830cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_348310:
    // 0x348310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x348310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348314:
    // 0x348314: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x348314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348318:
    // 0x348318: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x348318u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_34831c:
    // 0x34831c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34831cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348320:
    // 0x348320: 0x0  nop
    ctx->pc = 0x348320u;
    // NOP
label_348324:
    // 0x348324: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_348328:
    if (ctx->pc == 0x348328u) {
        ctx->pc = 0x348328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348324u;
        // 0x348328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34832Cu;
        goto label_34832c;
    }
    ctx->pc = 0x348324u;
    {
        const bool branch_taken_0x348324 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x348328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348324u;
        // 0x348328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348324) {
            ctx->pc = 0x348348u;
            goto label_348348;
        }
    }
    ctx->pc = 0x34832Cu;
label_34832c:
    // 0x34832c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x34832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_348330:
    // 0x348330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348334:
    // 0x348334: 0x0  nop
    ctx->pc = 0x348334u;
    // NOP
label_348338:
    // 0x348338: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x348338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34833c:
    // 0x34833c: 0x0  nop
    ctx->pc = 0x34833cu;
    // NOP
label_348340:
    // 0x348340: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_348344:
    if (ctx->pc == 0x348344u) {
        ctx->pc = 0x348344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348340u;
        // 0x348344: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348348u;
        goto label_348348;
    }
    ctx->pc = 0x348340u;
    {
        const bool branch_taken_0x348340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348340) {
            ctx->pc = 0x348344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348340u;
            // 0x348344: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348350u;
            goto label_348350;
        }
    }
    ctx->pc = 0x348348u;
label_348348:
    // 0x348348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34834c:
    // 0x34834c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x34834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_348350:
    // 0x348350: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x348350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_348354:
    // 0x348354: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x348354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_348358:
    // 0x348358: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x348358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_34835c:
    // 0x34835c: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x34835cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_348360:
    // 0x348360: 0x14640083  bne         $v1, $a0, . + 4 + (0x83 << 2)
label_348364:
    if (ctx->pc == 0x348364u) {
        ctx->pc = 0x348364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348360u;
        // 0x348364: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348368u;
        goto label_348368;
    }
    ctx->pc = 0x348360u;
    {
        const bool branch_taken_0x348360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x348364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348360u;
        // 0x348364: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348360) {
            ctx->pc = 0x348570u;
            goto label_348570;
        }
    }
    ctx->pc = 0x348368u;
label_348368:
    // 0x348368: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x348368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_34836c:
    // 0x34836c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_348370:
    // 0x348370: 0xc0b1488  jal         func_2C5220
label_348374:
    if (ctx->pc == 0x348374u) {
        ctx->pc = 0x348374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348370u;
        // 0x348374: 0x26f00010  addiu       $s0, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348378u;
        goto label_348378;
    }
    ctx->pc = 0x348370u;
    SET_GPR_U32(ctx, 31, 0x348378u);
    ctx->pc = 0x348374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348370u;
    // 0x348374: 0x26f00010  addiu       $s0, $s7, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x348370u, 0x348378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348378u;
label_348378:
    // 0x348378: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x348378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_34837c:
    // 0x34837c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34837cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_348380:
    // 0x348380: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x348380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_348384:
    // 0x348384: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x348384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_348388:
    // 0x348388: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x348388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_34838c:
    // 0x34838c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x34838cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_348390:
    // 0x348390: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x348390u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_348394:
    // 0x348394: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x348394u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_348398:
    // 0x348398: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x348398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_34839c:
    // 0x34839c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3483a0:
    // 0x3483a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3483a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3483a4:
    // 0x3483a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3483a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3483a8:
    // 0x3483a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3483a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3483ac:
    // 0x3483ac: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3483acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3483b0:
    // 0x3483b0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3483b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_3483b4:
    // 0x3483b4: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x3483b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3483b8:
    // 0x3483b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3483b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3483bc:
    // 0x3483bc: 0xc6e30010  lwc1        $f3, 0x10($s7)
    ctx->pc = 0x3483bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3483c0:
    // 0x3483c0: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x3483c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3483c4:
    // 0x3483c4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3483c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3483c8:
    // 0x3483c8: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x3483c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3483cc:
    // 0x3483cc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3483ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3483d0:
    // 0x3483d0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3483d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3483d4:
    // 0x3483d4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x3483d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3483d8:
    // 0x3483d8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3483d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3483dc:
    // 0x3483dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3483dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3483e0:
    // 0x3483e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3483e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3483e4:
    // 0x3483e4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x3483e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3483e8:
    // 0x3483e8: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x3483e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3483ec:
    // 0x3483ec: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x3483ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_3483f0:
    // 0x3483f0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3483f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3483f4:
    // 0x3483f4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x3483f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_3483f8:
    // 0x3483f8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x3483f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3483fc:
    // 0x3483fc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3483fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_348400:
    // 0x348400: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x348400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_348404:
    // 0x348404: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x348404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348408:
    // 0x348408: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x348408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34840c:
    // 0x34840c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x34840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348410:
    // 0x348410: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x348410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_348414:
    // 0x348414: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x348414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_348418:
    // 0x348418: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x348418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_34841c:
    // 0x34841c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x34841cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_348420:
    // 0x348420: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x348420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_348424:
    // 0x348424: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x348424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_348428:
    // 0x348428: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x348428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_34842c:
    // 0x34842c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_348430:
    // 0x348430: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x348430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_348434:
    // 0x348434: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x348434u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_348438:
    // 0x348438: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x348438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_34843c:
    // 0x34843c: 0xfac10010  sqc2        $vf1, 0x10($s6)
    ctx->pc = 0x34843cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_348440:
    // 0x348440: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x348440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_348444:
    // 0x348444: 0xfac10020  sqc2        $vf1, 0x20($s6)
    ctx->pc = 0x348444u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_348448:
    // 0x348448: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x348448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_34844c:
    // 0x34844c: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x34844cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_348450:
    // 0x348450: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x348450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_348454:
    // 0x348454: 0xc0b14ae  jal         func_2C52B8
label_348458:
    if (ctx->pc == 0x348458u) {
        ctx->pc = 0x348458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348454u;
        // 0x348458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34845Cu;
        goto label_34845c;
    }
    ctx->pc = 0x348454u;
    SET_GPR_U32(ctx, 31, 0x34845Cu);
    ctx->pc = 0x348458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348454u;
    // 0x348458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x348454u, 0x34845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34845Cu;
label_34845c:
    // 0x34845c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x34845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_348460:
    // 0x348460: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x348460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_348464:
    // 0x348464: 0x5462016a  bnel        $v1, $v0, . + 4 + (0x16A << 2)
label_348468:
    if (ctx->pc == 0x348468u) {
        ctx->pc = 0x348468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348464u;
        // 0x348468: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34846Cu;
        goto label_34846c;
    }
    ctx->pc = 0x348464u;
    {
        const bool branch_taken_0x348464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348464) {
            ctx->pc = 0x348468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348464u;
            // 0x348468: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x34846Cu;
label_34846c:
    // 0x34846c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x34846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_348470:
    // 0x348470: 0x54400167  bnel        $v0, $zero, . + 4 + (0x167 << 2)
label_348474:
    if (ctx->pc == 0x348474u) {
        ctx->pc = 0x348474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348470u;
        // 0x348474: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348478u;
        goto label_348478;
    }
    ctx->pc = 0x348470u;
    {
        const bool branch_taken_0x348470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348470) {
            ctx->pc = 0x348474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348470u;
            // 0x348474: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x348478u;
label_348478:
    // 0x348478: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x348478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_34847c:
    // 0x34847c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x34847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_348480:
    // 0x348480: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x348480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348484:
    // 0x348484: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x348484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_348488:
    // 0x348488: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x348488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34848c:
    // 0x34848c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x34848cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_348490:
    // 0x348490: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x348490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_348494:
    // 0x348494: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x348494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348498:
    // 0x348498: 0x0  nop
    ctx->pc = 0x348498u;
    // NOP
label_34849c:
    // 0x34849c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34849cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3484a0:
    // 0x3484a0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3484a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3484a4:
    // 0x3484a4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3484a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3484a8:
    // 0x3484a8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3484a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_3484ac:
    // 0x3484ac: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3484acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3484b0:
    // 0x3484b0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x3484b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3484b4:
    // 0x3484b4: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x3484b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3484b8:
    // 0x3484b8: 0xe7a400dc  swc1        $f4, 0xDC($sp)
    ctx->pc = 0x3484b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_3484bc:
    // 0x3484bc: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x3484bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_3484c0:
    // 0x3484c0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x3484c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3484c4:
    // 0x3484c4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3484c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3484c8:
    // 0x3484c8: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x3484c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_3484cc:
    // 0x3484cc: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x3484ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3484d0:
    // 0x3484d0: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x3484d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3484d4:
    // 0x3484d4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x3484d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3484d8:
    // 0x3484d8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x3484d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3484dc:
    // 0x3484dc: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x3484dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3484e0:
    // 0x3484e0: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x3484e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3484e4:
    // 0x3484e4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3484e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3484e8:
    // 0x3484e8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x3484e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3484ec:
    // 0x3484ec: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x3484ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_3484f0:
    // 0x3484f0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3484f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3484f4:
    // 0x3484f4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3484f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3484f8:
    // 0x3484f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3484f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3484fc:
    // 0x3484fc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3484fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_348500:
    // 0x348500: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x348500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_348504:
    // 0x348504: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x348504u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_348508:
    // 0x348508: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_34850c:
    // 0x34850c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x34850cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_348510:
    // 0x348510: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x348510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_348514:
    // 0x348514: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x348514u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_348518:
    // 0x348518: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x348518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_34851c:
    // 0x34851c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x34851cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_348520:
    // 0x348520: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x348520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_348524:
    // 0x348524: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x348524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_348528:
    // 0x348528: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34852c:
    // 0x34852c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x34852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_348530:
    // 0x348530: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x348530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348534:
    // 0x348534: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x348534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_348538:
    // 0x348538: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x348538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34853c:
    // 0x34853c: 0x24846530  addiu       $a0, $a0, 0x6530
    ctx->pc = 0x34853cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25904));
label_348540:
    // 0x348540: 0xc7a300f8  lwc1        $f3, 0xF8($sp)
    ctx->pc = 0x348540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_348544:
    // 0x348544: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x348544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_348548:
    // 0x348548: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x348548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34854c:
    // 0x34854c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348550:
    // 0x348550: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x348550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_348554:
    // 0x348554: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x348554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_348558:
    // 0x348558: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x348558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_34855c:
    // 0x34855c: 0xc083596  jal         func_20D658
label_348560:
    if (ctx->pc == 0x348560u) {
        ctx->pc = 0x348560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34855Cu;
        // 0x348560: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348564u;
        goto label_348564;
    }
    ctx->pc = 0x34855Cu;
    SET_GPR_U32(ctx, 31, 0x348564u);
    ctx->pc = 0x348560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34855Cu;
    // 0x348560: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D658u, 0x34855Cu, 0x348564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348564u;
label_348564:
    // 0x348564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348568:
    // 0x348568: 0x10000128  b           . + 4 + (0x128 << 2)
label_34856c:
    if (ctx->pc == 0x34856Cu) {
        ctx->pc = 0x34856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348568u;
        // 0x34856c: 0xa24300f1  sb          $v1, 0xF1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 241), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348570u;
        goto label_348570;
    }
    ctx->pc = 0x348568u;
    {
        const bool branch_taken_0x348568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348568u;
        // 0x34856c: 0xa24300f1  sb          $v1, 0xF1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 241), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348568) {
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x348570u;
label_348570:
    // 0x348570: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x348570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348574:
    // 0x348574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348578:
    // 0x348578: 0x0  nop
    ctx->pc = 0x348578u;
    // NOP
label_34857c:
    // 0x34857c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34857cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348580:
    // 0x348580: 0x0  nop
    ctx->pc = 0x348580u;
    // NOP
label_348584:
    // 0x348584: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_348588:
    if (ctx->pc == 0x348588u) {
        ctx->pc = 0x348588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348584u;
        // 0x348588: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34858Cu;
        goto label_34858c;
    }
    ctx->pc = 0x348584u;
    {
        const bool branch_taken_0x348584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348584) {
            ctx->pc = 0x348588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348584u;
            // 0x348588: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3485ECu;
            goto label_3485ec;
        }
    }
    ctx->pc = 0x34858Cu;
label_34858c:
    // 0x34858c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_348590:
    if (ctx->pc == 0x348590u) {
        ctx->pc = 0x348590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34858Cu;
        // 0x348590: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348594u;
        goto label_348594;
    }
    ctx->pc = 0x34858Cu;
    {
        const bool branch_taken_0x34858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34858c) {
            ctx->pc = 0x348590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34858Cu;
            // 0x348590: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3485ECu;
            goto label_3485ec;
        }
    }
    ctx->pc = 0x348594u;
label_348594:
    // 0x348594: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x348594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_348598:
    // 0x348598: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34859c:
    if (ctx->pc == 0x34859Cu) {
        ctx->pc = 0x3485A0u;
        goto label_3485a0;
    }
    ctx->pc = 0x348598u;
    {
        const bool branch_taken_0x348598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348598) {
            ctx->pc = 0x3485B4u;
            goto label_3485b4;
        }
    }
    ctx->pc = 0x3485A0u;
label_3485a0:
    // 0x3485a0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3485a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3485a4:
    // 0x3485a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3485a8:
    if (ctx->pc == 0x3485A8u) {
        ctx->pc = 0x3485A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A4u;
        // 0x3485a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485ACu;
        goto label_3485ac;
    }
    ctx->pc = 0x3485A4u;
    {
        const bool branch_taken_0x3485a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3485A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A4u;
        // 0x3485a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485a4) {
            ctx->pc = 0x3485B4u;
            goto label_3485b4;
        }
    }
    ctx->pc = 0x3485ACu;
label_3485ac:
    // 0x3485ac: 0x60f809  jalr        $v1
label_3485b0:
    if (ctx->pc == 0x3485B0u) {
        ctx->pc = 0x3485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485ACu;
        // 0x3485b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485B4u;
        goto label_3485b4;
    }
    ctx->pc = 0x3485ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3485B4u);
        ctx->pc = 0x3485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485ACu;
        // 0x3485b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3485ACu, 0x3485B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3485B4u;
label_3485b4:
    // 0x3485b4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x3485b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_3485b8:
    // 0x3485b8: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x3485b8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_3485bc:
    // 0x3485bc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3485bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3485c0:
    // 0x3485c0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3485c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3485c4:
    // 0x3485c4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3485c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3485c8:
    // 0x3485c8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3485c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3485cc:
    // 0x3485cc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3485ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3485d0:
    // 0x3485d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3485d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3485d4:
    // 0x3485d4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3485d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3485d8:
    // 0x3485d8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3485d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3485dc:
    // 0x3485dc: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x3485dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_3485e0:
    // 0x3485e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3485e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3485e4:
    // 0x3485e4: 0x10000109  b           . + 4 + (0x109 << 2)
label_3485e8:
    if (ctx->pc == 0x3485E8u) {
        ctx->pc = 0x3485E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485E4u;
        // 0x3485e8: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485ECu;
        goto label_3485ec;
    }
    ctx->pc = 0x3485E4u;
    {
        const bool branch_taken_0x3485e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485E4u;
        // 0x3485e8: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485e4) {
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x3485ECu;
label_3485ec:
    // 0x3485ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3485f0:
    if (ctx->pc == 0x3485F0u) {
        ctx->pc = 0x3485F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485ECu;
        // 0x3485f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485F4u;
        goto label_3485f4;
    }
    ctx->pc = 0x3485ECu;
    {
        const bool branch_taken_0x3485ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485ECu;
        // 0x3485f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485ec) {
            ctx->pc = 0x3485FCu;
            goto label_3485fc;
        }
    }
    ctx->pc = 0x3485F4u;
label_3485f4:
    // 0x3485f4: 0x40f809  jalr        $v0
label_3485f8:
    if (ctx->pc == 0x3485F8u) {
        ctx->pc = 0x3485F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F4u;
        // 0x3485f8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485FCu;
        goto label_3485fc;
    }
    ctx->pc = 0x3485F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3485FCu);
        ctx->pc = 0x3485F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F4u;
        // 0x3485f8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3485F4u, 0x3485FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3485FCu;
label_3485fc:
    // 0x3485fc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3485fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_348600:
    // 0x348600: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_348604:
    // 0x348604: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x348604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_348608:
    // 0x348608: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x348608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_34860c:
    // 0x34860c: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
label_348610:
    if (ctx->pc == 0x348610u) {
        ctx->pc = 0x348610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34860Cu;
        // 0x348610: 0x26f40010  addiu       $s4, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348614u;
        goto label_348614;
    }
    ctx->pc = 0x34860Cu;
    {
        const bool branch_taken_0x34860c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34860Cu;
        // 0x348610: 0x26f40010  addiu       $s4, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34860c) {
            ctx->pc = 0x348770u;
            goto label_348770;
        }
    }
    ctx->pc = 0x348614u;
label_348614:
    // 0x348614: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x348614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_348618:
    // 0x348618: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_34861c:
    if (ctx->pc == 0x34861Cu) {
        ctx->pc = 0x34861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348618u;
        // 0x34861c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348620u;
        goto label_348620;
    }
    ctx->pc = 0x348618u;
    {
        const bool branch_taken_0x348618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348618u;
        // 0x34861c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348618) {
            ctx->pc = 0x348770u;
            goto label_348770;
        }
    }
    ctx->pc = 0x348620u;
label_348620:
    // 0x348620: 0x8e5e0020  lw          $fp, 0x20($s2)
    ctx->pc = 0x348620u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_348624:
    // 0x348624: 0x57c20053  bnel        $fp, $v0, . + 4 + (0x53 << 2)
label_348628:
    if (ctx->pc == 0x348628u) {
        ctx->pc = 0x348628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348624u;
        // 0x348628: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34862Cu;
        goto label_34862c;
    }
    ctx->pc = 0x348624u;
    {
        const bool branch_taken_0x348624 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x348624) {
            ctx->pc = 0x348628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348624u;
            // 0x348628: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x348774u;
            goto label_348774;
        }
    }
    ctx->pc = 0x34862Cu;
label_34862c:
    // 0x34862c: 0xc6e40010  lwc1        $f4, 0x10($s7)
    ctx->pc = 0x34862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_348630:
    // 0x348630: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x348630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_348634:
    // 0x348634: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x348634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348638:
    // 0x348638: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x348638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34863c:
    // 0x34863c: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x34863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_348640:
    // 0x348640: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x348640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_348644:
    // 0x348644: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x348644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_348648:
    // 0x348648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34864c:
    // 0x34864c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x34864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_348650:
    // 0x348650: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x348650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_348654:
    // 0x348654: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x348654u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_348658:
    // 0x348658: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x348658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34865c:
    // 0x34865c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34865cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_348660:
    // 0x348660: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x348660u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_348664:
    // 0x348664: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x348664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_348668:
    // 0x348668: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x348668u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_34866c:
    // 0x34866c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x34866cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_348670:
    // 0x348670: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x348670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_348674:
    // 0x348674: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x348674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_348678:
    // 0x348678: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x348678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_34867c:
    // 0x34867c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x34867cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_348680:
    // 0x348680: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_348684:
    // 0x348684: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x348684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_348688:
    // 0x348688: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x348688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34868c:
    // 0x34868c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x34868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_348690:
    // 0x348690: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x348690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348694:
    // 0x348694: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x348694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348698:
    // 0x348698: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x348698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34869c:
    // 0x34869c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x34869cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3486a0:
    // 0x3486a0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3486a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3486a4:
    // 0x3486a4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3486a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3486a8:
    // 0x3486a8: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x3486a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3486ac:
    // 0x3486ac: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3486acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3486b0:
    // 0x3486b0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3486b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3486b4:
    // 0x3486b4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3486b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3486b8:
    // 0x3486b8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3486b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_3486bc:
    // 0x3486bc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3486bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3486c0:
    // 0x3486c0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3486c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3486c4:
    // 0x3486c4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x3486c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_3486c8:
    // 0x3486c8: 0xc0f5240  jal         func_3D4900
label_3486cc:
    if (ctx->pc == 0x3486CCu) {
        ctx->pc = 0x3486CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486C8u;
        // 0x3486cc: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3486D0u;
        goto label_3486d0;
    }
    ctx->pc = 0x3486C8u;
    SET_GPR_U32(ctx, 31, 0x3486D0u);
    ctx->pc = 0x3486CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486C8u;
    // 0x3486cc: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3486C8u, 0x3486D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486D0u;
label_3486d0:
    // 0x3486d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3486d4:
    // 0x3486d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3486d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3486d8:
    // 0x3486d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3486d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3486dc:
    // 0x3486dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3486dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3486e0:
    // 0x3486e0: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x3486e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3486e4:
    // 0x3486e4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x3486e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3486e8:
    // 0x3486e8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3486e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3486ec:
    // 0x3486ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3486ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3486f0:
    // 0x3486f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3486f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3486f4:
    // 0x3486f4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3486f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3486f8:
    // 0x3486f8: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x3486f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_3486fc:
    // 0x3486fc: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x3486fcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_348700:
    // 0x348700: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x348700u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348704:
    // 0x348704: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x348704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_348708:
    // 0x348708: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x348708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_34870c:
    // 0x34870c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x34870cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_348710:
    // 0x348710: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x348710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_348714:
    // 0x348714: 0xc0d1d7e  jal         func_3475F8
label_348718:
    if (ctx->pc == 0x348718u) {
        ctx->pc = 0x348718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348714u;
        // 0x348718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34871Cu;
        goto label_34871c;
    }
    ctx->pc = 0x348714u;
    SET_GPR_U32(ctx, 31, 0x34871Cu);
    ctx->pc = 0x348718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348714u;
    // 0x348718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x348714u, 0x34871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34871Cu;
label_34871c:
    // 0x34871c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34871cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_348720:
    // 0x348720: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x348720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_348724:
    // 0x348724: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x348724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348728:
    // 0x348728: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x348728u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_34872c:
    // 0x34872c: 0xc0d22de  jal         func_348B78
label_348730:
    if (ctx->pc == 0x348730u) {
        ctx->pc = 0x348730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34872Cu;
        // 0x348730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348734u;
        goto label_348734;
    }
    ctx->pc = 0x34872Cu;
    SET_GPR_U32(ctx, 31, 0x348734u);
    ctx->pc = 0x348730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34872Cu;
    // 0x348730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B78u, 0x34872Cu, 0x348734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348734u;
label_348734:
    // 0x348734: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x348734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_348738:
    // 0x348738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34873c:
    // 0x34873c: 0x24a56548  addiu       $a1, $a1, 0x6548
    ctx->pc = 0x34873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
label_348740:
    // 0x348740: 0xc0d276a  jal         func_349DA8
label_348744:
    if (ctx->pc == 0x348744u) {
        ctx->pc = 0x348744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348740u;
        // 0x348744: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348748u;
        goto label_348748;
    }
    ctx->pc = 0x348740u;
    SET_GPR_U32(ctx, 31, 0x348748u);
    ctx->pc = 0x348744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348740u;
    // 0x348744: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349DA8u, 0x348740u, 0x348748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348748u;
label_348748:
    // 0x348748: 0xae1e0028  sw          $fp, 0x28($s0)
    ctx->pc = 0x348748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 30));
label_34874c:
    // 0x34874c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348750:
    // 0x348750: 0xc0d438a  jal         func_350E28
label_348754:
    if (ctx->pc == 0x348754u) {
        ctx->pc = 0x348754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348750u;
        // 0x348754: 0xe6140064  swc1        $f20, 0x64($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348758u;
        goto label_348758;
    }
    ctx->pc = 0x348750u;
    SET_GPR_U32(ctx, 31, 0x348758u);
    ctx->pc = 0x348754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348750u;
    // 0x348754: 0xe6140064  swc1        $f20, 0x64($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x348750u, 0x348758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348758u;
label_348758:
    // 0x348758: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_34875c:
    if (ctx->pc == 0x34875Cu) {
        ctx->pc = 0x34875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348758u;
        // 0x34875c: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348760u;
        goto label_348760;
    }
    ctx->pc = 0x348758u;
    {
        const bool branch_taken_0x348758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348758) {
            ctx->pc = 0x34875Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348758u;
            // 0x34875c: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x348774u;
            goto label_348774;
        }
    }
    ctx->pc = 0x348760u;
label_348760:
    // 0x348760: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_348764:
    if (ctx->pc == 0x348764u) {
        ctx->pc = 0x348764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348760u;
        // 0x348764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348768u;
        goto label_348768;
    }
    ctx->pc = 0x348760u;
    {
        const bool branch_taken_0x348760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x348764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348760u;
        // 0x348764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348760) {
            ctx->pc = 0x348770u;
            goto label_348770;
        }
    }
    ctx->pc = 0x348768u;
label_348768:
    // 0x348768: 0xc0d1e40  jal         func_347900
label_34876c:
    if (ctx->pc == 0x34876Cu) {
        ctx->pc = 0x34876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348768u;
        // 0x34876c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348770u;
        goto label_348770;
    }
    ctx->pc = 0x348768u;
    SET_GPR_U32(ctx, 31, 0x348770u);
    ctx->pc = 0x34876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348768u;
    // 0x34876c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x348768u, 0x348770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348770u;
label_348770:
    // 0x348770: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x348770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348774:
    // 0x348774: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x348774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_348778:
    // 0x348778: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x348778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_34877c:
    // 0x34877c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34877cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_348780:
    // 0x348780: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x348780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_348784:
    // 0x348784: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x348784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_348788:
    // 0x348788: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x348788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34878c:
    // 0x34878c: 0x0  nop
    ctx->pc = 0x34878cu;
    // NOP
label_348790:
    // 0x348790: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_348794:
    if (ctx->pc == 0x348794u) {
        ctx->pc = 0x348794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348790u;
        // 0x348794: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348798u;
        goto label_348798;
    }
    ctx->pc = 0x348790u;
    {
        const bool branch_taken_0x348790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348790u;
        // 0x348794: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348790) {
            ctx->pc = 0x34879Cu;
            goto label_34879c;
        }
    }
    ctx->pc = 0x348798u;
label_348798:
    // 0x348798: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x348798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_34879c:
    // 0x34879c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x34879cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3487a0:
    // 0x3487a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3487a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3487a4:
    // 0x3487a4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3487a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3487a8:
    // 0x3487a8: 0x0  nop
    ctx->pc = 0x3487a8u;
    // NOP
label_3487ac:
    // 0x3487ac: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x3487acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3487b0:
    // 0x3487b0: 0x0  nop
    ctx->pc = 0x3487b0u;
    // NOP
label_3487b4:
    // 0x3487b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3487b8:
    if (ctx->pc == 0x3487B8u) {
        ctx->pc = 0x3487B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487B4u;
        // 0x3487b8: 0x4600d006  mov.s       $f0, $f26 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3487BCu;
        goto label_3487bc;
    }
    ctx->pc = 0x3487B4u;
    {
        const bool branch_taken_0x3487b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3487b4) {
            ctx->pc = 0x3487B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3487B4u;
            // 0x3487b8: 0x4600d006  mov.s       $f0, $f26 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3487BCu;
            goto label_3487bc;
        }
    }
    ctx->pc = 0x3487BCu;
label_3487bc:
    // 0x3487bc: 0xc0b12b0  jal         func_2C4AC0
label_3487c0:
    if (ctx->pc == 0x3487C0u) {
        ctx->pc = 0x3487C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487BCu;
        // 0x3487c0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3487C4u;
        goto label_3487c4;
    }
    ctx->pc = 0x3487BCu;
    SET_GPR_U32(ctx, 31, 0x3487C4u);
    ctx->pc = 0x3487C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3487BCu;
    // 0x3487c0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3487BCu, 0x3487C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487C4u;
label_3487c4:
    // 0x3487c4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3487c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3487c8:
    // 0x3487c8: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x3487c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3487cc:
    // 0x3487cc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3487ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3487d0:
    // 0x3487d0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3487d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3487d4:
    // 0x3487d4: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x3487d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3487d8:
    // 0x3487d8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3487d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_3487dc:
    // 0x3487dc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3487dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3487e0:
    // 0x3487e0: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x3487e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3487e4:
    // 0x3487e4: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x3487e4u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3487e8:
    // 0x3487e8: 0xc6e10010  lwc1        $f1, 0x10($s7)
    ctx->pc = 0x3487e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3487ec:
    // 0x3487ec: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x3487ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_3487f0:
    // 0x3487f0: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3487f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3487f4:
    // 0x3487f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3487f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3487f8:
    // 0x3487f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3487f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3487fc:
    // 0x3487fc: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x3487fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_348800:
    // 0x348800: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x348800u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_348804:
    // 0x348804: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x348804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_348808:
    // 0x348808: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x348808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_34880c:
    // 0x34880c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34880cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_348810:
    // 0x348810: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x348810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348814:
    // 0x348814: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x348814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_348818:
    // 0x348818: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x348818u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_34881c:
    // 0x34881c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x34881cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_348820:
    // 0x348820: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x348820u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_348824:
    // 0x348824: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x348824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348828:
    // 0x348828: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x348828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_34882c:
    // 0x34882c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x34882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_348830:
    // 0x348830: 0xc0b12b0  jal         func_2C4AC0
label_348834:
    if (ctx->pc == 0x348834u) {
        ctx->pc = 0x348834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348830u;
        // 0x348834: 0xe7a1007c  swc1        $f1, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348838u;
        goto label_348838;
    }
    ctx->pc = 0x348830u;
    SET_GPR_U32(ctx, 31, 0x348838u);
    ctx->pc = 0x348834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348830u;
    // 0x348834: 0xe7a1007c  swc1        $f1, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x348830u, 0x348838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348838u;
label_348838:
    // 0x348838: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x348838u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_34883c:
    // 0x34883c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x34883cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_348840:
    // 0x348840: 0xc0b12b0  jal         func_2C4AC0
label_348844:
    if (ctx->pc == 0x348844u) {
        ctx->pc = 0x348844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348840u;
        // 0x348844: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348848u;
        goto label_348848;
    }
    ctx->pc = 0x348840u;
    SET_GPR_U32(ctx, 31, 0x348848u);
    ctx->pc = 0x348844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348840u;
    // 0x348844: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x348840u, 0x348848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348848u;
label_348848:
    // 0x348848: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x348848u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_34884c:
    // 0x34884c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x34884cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_348850:
    // 0x348850: 0xc0b12b0  jal         func_2C4AC0
label_348854:
    if (ctx->pc == 0x348854u) {
        ctx->pc = 0x348854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348850u;
        // 0x348854: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348858u;
        goto label_348858;
    }
    ctx->pc = 0x348850u;
    SET_GPR_U32(ctx, 31, 0x348858u);
    ctx->pc = 0x348854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348850u;
    // 0x348854: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x348850u, 0x348858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348858u;
label_348858:
    // 0x348858: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x348858u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_34885c:
    // 0x34885c: 0xe7b70084  swc1        $f23, 0x84($sp)
    ctx->pc = 0x34885cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_348860:
    // 0x348860: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x348860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_348864:
    // 0x348864: 0xe7b9008c  swc1        $f25, 0x8C($sp)
    ctx->pc = 0x348864u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_348868:
    // 0x348868: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x348868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_34886c:
    // 0x34886c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x34886cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_348870:
    // 0x348870: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_348874:
    // 0x348874: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x348874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_348878:
    // 0x348878: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x348878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34887c:
    // 0x34887c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x34887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_348880:
    // 0x348880: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x348880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_348884:
    // 0x348884: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x348884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_348888:
    // 0x348888: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x348888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34888c:
    // 0x34888c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x34888cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_348890:
    // 0x348890: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x348890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_348894:
    // 0x348894: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x348894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_348898:
    // 0x348898: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x348898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_34889c:
    // 0x34889c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x34889cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3488a0:
    // 0x3488a0: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x3488a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3488a4:
    // 0x3488a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3488a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3488a8:
    // 0x3488a8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3488a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3488ac:
    // 0x3488ac: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x3488acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3488b0:
    // 0x3488b0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3488b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3488b4:
    // 0x3488b4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3488b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3488b8:
    // 0x3488b8: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3488b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3488bc:
    // 0x3488bc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3488bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3488c0:
    // 0x3488c0: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x3488c0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_3488c4:
    // 0x3488c4: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x3488c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3488c8:
    // 0x3488c8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x3488c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3488cc:
    // 0x3488cc: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x3488ccu;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_3488d0:
    // 0x3488d0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3488d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3488d4:
    // 0x3488d4: 0xc0b12b0  jal         func_2C4AC0
label_3488d8:
    if (ctx->pc == 0x3488D8u) {
        ctx->pc = 0x3488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488D4u;
        // 0x3488d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488DCu;
        goto label_3488dc;
    }
    ctx->pc = 0x3488D4u;
    SET_GPR_U32(ctx, 31, 0x3488DCu);
    ctx->pc = 0x3488D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488D4u;
    // 0x3488d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3488D4u, 0x3488DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488DCu;
label_3488dc:
    // 0x3488dc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3488dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3488e0:
    // 0x3488e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3488e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3488e4:
    // 0x3488e4: 0xc0b12b0  jal         func_2C4AC0
label_3488e8:
    if (ctx->pc == 0x3488E8u) {
        ctx->pc = 0x3488E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488E4u;
        // 0x3488e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488ECu;
        goto label_3488ec;
    }
    ctx->pc = 0x3488E4u;
    SET_GPR_U32(ctx, 31, 0x3488ECu);
    ctx->pc = 0x3488E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488E4u;
    // 0x3488e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3488E4u, 0x3488ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488ECu;
label_3488ec:
    // 0x3488ec: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3488ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3488f0:
    // 0x3488f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3488f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3488f4:
    // 0x3488f4: 0xc0b12b0  jal         func_2C4AC0
label_3488f8:
    if (ctx->pc == 0x3488F8u) {
        ctx->pc = 0x3488F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488F4u;
        // 0x3488f8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3488FCu;
        goto label_3488fc;
    }
    ctx->pc = 0x3488F4u;
    SET_GPR_U32(ctx, 31, 0x3488FCu);
    ctx->pc = 0x3488F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3488F4u;
    // 0x3488f8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3488F4u, 0x3488FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488FCu;
label_3488fc:
    // 0x3488fc: 0xe7b70080  swc1        $f23, 0x80($sp)
    ctx->pc = 0x3488fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_348900:
    // 0x348900: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x348900u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_348904:
    // 0x348904: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x348904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_348908:
    // 0x348908: 0xe7b9008c  swc1        $f25, 0x8C($sp)
    ctx->pc = 0x348908u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_34890c:
    // 0x34890c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x34890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_348910:
    // 0x348910: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x348910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_348914:
    // 0x348914: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x348914u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_348918:
    // 0x348918: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34891c:
    // 0x34891c: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x34891cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_348920:
    // 0x348920: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_348924:
    // 0x348924: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x348924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_348928:
    // 0x348928: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_34892c:
    if (ctx->pc == 0x34892Cu) {
        ctx->pc = 0x34892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348928u;
        // 0x34892c: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348930u;
        goto label_348930;
    }
    ctx->pc = 0x348928u;
    {
        const bool branch_taken_0x348928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348928u;
        // 0x34892c: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348928) {
            ctx->pc = 0x3489DCu;
            goto label_3489dc;
        }
    }
    ctx->pc = 0x348930u;
label_348930:
    // 0x348930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_348934:
    if (ctx->pc == 0x348934u) {
        ctx->pc = 0x348934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348930u;
        // 0x348934: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x348938u;
        goto label_348938;
    }
    ctx->pc = 0x348930u;
    {
        const bool branch_taken_0x348930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348930u;
        // 0x348934: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348930) {
            ctx->pc = 0x348950u;
            goto label_348950;
        }
    }
    ctx->pc = 0x348938u;
label_348938:
    // 0x348938: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_34893c:
    if (ctx->pc == 0x34893Cu) {
        ctx->pc = 0x34893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348938u;
        // 0x34893c: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348940u;
        goto label_348940;
    }
    ctx->pc = 0x348938u;
    {
        const bool branch_taken_0x348938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348938) {
            ctx->pc = 0x34893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348938u;
            // 0x34893c: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x348940u;
label_348940:
    // 0x348940: 0x4620033  bltzl       $v1, . + 4 + (0x33 << 2)
label_348944:
    if (ctx->pc == 0x348944u) {
        ctx->pc = 0x348944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348940u;
        // 0x348944: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348948u;
        goto label_348948;
    }
    ctx->pc = 0x348940u;
    {
        const bool branch_taken_0x348940 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x348940) {
            ctx->pc = 0x348944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348940u;
            // 0x348944: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x348948u;
label_348948:
    // 0x348948: 0x10000004  b           . + 4 + (0x4 << 2)
label_34894c:
    if (ctx->pc == 0x34894Cu) {
        ctx->pc = 0x348950u;
        goto label_348950;
    }
    ctx->pc = 0x348948u;
    {
        const bool branch_taken_0x348948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348948) {
            ctx->pc = 0x34895Cu;
            goto label_34895c;
        }
    }
    ctx->pc = 0x348950u;
label_348950:
    // 0x348950: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x348950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_348954:
    // 0x348954: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
label_348958:
    if (ctx->pc == 0x348958u) {
        ctx->pc = 0x348958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348954u;
        // 0x348958: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34895Cu;
        goto label_34895c;
    }
    ctx->pc = 0x348954u;
    {
        const bool branch_taken_0x348954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348954) {
            ctx->pc = 0x348958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348954u;
            // 0x348958: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x34895Cu;
label_34895c:
    // 0x34895c: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x34895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_348960:
    // 0x348960: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x348960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_348964:
    // 0x348964: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x348964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_348968:
    // 0x348968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34896c:
    // 0x34896c: 0x0  nop
    ctx->pc = 0x34896cu;
    // NOP
label_348970:
    // 0x348970: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x348970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_348974:
    // 0x348974: 0x0  nop
    ctx->pc = 0x348974u;
    // NOP
label_348978:
    // 0x348978: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_34897c:
    if (ctx->pc == 0x34897Cu) {
        ctx->pc = 0x34897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348978u;
        // 0x34897c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348980u;
        goto label_348980;
    }
    ctx->pc = 0x348978u;
    {
        const bool branch_taken_0x348978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348978u;
        // 0x34897c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348978) {
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x348980u;
label_348980:
    // 0x348980: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x348980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_348984:
    // 0x348984: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x348984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_348988:
    // 0x348988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_34898c:
    // 0x34898c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34898cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348990:
    // 0x348990: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x348990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_348994:
    // 0x348994: 0xc07a8e4  jal         func_1EA390
label_348998:
    if (ctx->pc == 0x348998u) {
        ctx->pc = 0x348998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348994u;
        // 0x348998: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34899Cu;
        goto label_34899c;
    }
    ctx->pc = 0x348994u;
    SET_GPR_U32(ctx, 31, 0x34899Cu);
    ctx->pc = 0x348998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348994u;
    // 0x348998: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x348994u, 0x34899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34899Cu;
label_34899c:
    // 0x34899c: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x34899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_3489a0:
    // 0x3489a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3489a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3489a4:
    // 0x3489a4: 0x24647ee0  addiu       $a0, $v1, 0x7EE0
    ctx->pc = 0x3489a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
label_3489a8:
    // 0x3489a8: 0xc0c3516  jal         func_30D458
label_3489ac:
    if (ctx->pc == 0x3489ACu) {
        ctx->pc = 0x3489ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489A8u;
        // 0x3489ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3489B0u;
        goto label_3489b0;
    }
    ctx->pc = 0x3489A8u;
    SET_GPR_U32(ctx, 31, 0x3489B0u);
    ctx->pc = 0x3489ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489A8u;
    // 0x3489ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D458u, 0x3489A8u, 0x3489B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489B0u;
label_3489b0:
    // 0x3489b0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3489b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3489b4:
    // 0x3489b4: 0x0  nop
    ctx->pc = 0x3489b4u;
    // NOP
label_3489b8:
    // 0x3489b8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_3489bc:
    if (ctx->pc == 0x3489BCu) {
        ctx->pc = 0x3489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489B8u;
        // 0x3489bc: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3489C0u;
        goto label_3489c0;
    }
    ctx->pc = 0x3489B8u;
    {
        const bool branch_taken_0x3489b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489B8u;
        // 0x3489bc: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489b8) {
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x3489C0u;
label_3489c0:
    // 0x3489c0: 0x4600ab02  mul.s       $f12, $f21, $f0
    ctx->pc = 0x3489c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3489c4:
    // 0x3489c4: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3489c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3489c8:
    // 0x3489c8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x3489c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_3489cc:
    // 0x3489cc: 0xc07f4c2  jal         func_1FD308
label_3489d0:
    if (ctx->pc == 0x3489D0u) {
        ctx->pc = 0x3489D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489CCu;
        // 0x3489d0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3489D4u;
        goto label_3489d4;
    }
    ctx->pc = 0x3489CCu;
    SET_GPR_U32(ctx, 31, 0x3489D4u);
    ctx->pc = 0x3489D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489CCu;
    // 0x3489d0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x3489CCu, 0x3489D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489D4u;
label_3489d4:
    // 0x3489d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3489d8:
    if (ctx->pc == 0x3489D8u) {
        ctx->pc = 0x3489D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489D4u;
        // 0x3489d8: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3489DCu;
        goto label_3489dc;
    }
    ctx->pc = 0x3489D4u;
    {
        const bool branch_taken_0x3489d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489D4u;
        // 0x3489d8: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489d4) {
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x3489DCu;
label_3489dc:
    // 0x3489dc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3489dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3489e0:
    // 0x3489e0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3489e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3489e4:
    // 0x3489e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3489e8:
    if (ctx->pc == 0x3489E8u) {
        ctx->pc = 0x3489E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489E4u;
        // 0x3489e8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3489ECu;
        goto label_3489ec;
    }
    ctx->pc = 0x3489E4u;
    {
        const bool branch_taken_0x3489e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489E4u;
        // 0x3489e8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489e4) {
            ctx->pc = 0x348A0Cu;
            goto label_348a0c;
        }
    }
    ctx->pc = 0x3489ECu;
label_3489ec:
    // 0x3489ec: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3489ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3489f0:
    // 0x3489f0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x3489f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_3489f4:
    // 0x3489f4: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3489f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3489f8:
    // 0x3489f8: 0xc07f4c2  jal         func_1FD308
label_3489fc:
    if (ctx->pc == 0x3489FCu) {
        ctx->pc = 0x3489FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489F8u;
        // 0x3489fc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A00u;
        goto label_348a00;
    }
    ctx->pc = 0x3489F8u;
    SET_GPR_U32(ctx, 31, 0x348A00u);
    ctx->pc = 0x3489FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3489F8u;
    // 0x3489fc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x3489F8u, 0x348A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A00u;
label_348a00:
    // 0x348a00: 0x10000003  b           . + 4 + (0x3 << 2)
label_348a04:
    if (ctx->pc == 0x348A04u) {
        ctx->pc = 0x348A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A00u;
        // 0x348a04: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A08u;
        goto label_348a08;
    }
    ctx->pc = 0x348A00u;
    {
        const bool branch_taken_0x348a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A00u;
        // 0x348a04: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a00) {
            ctx->pc = 0x348A10u;
            goto label_348a10;
        }
    }
    ctx->pc = 0x348A08u;
label_348a08:
    // 0x348a08: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x348a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_348a0c:
    // 0x348a0c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x348a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_348a10:
    // 0x348a10: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_348a14:
    if (ctx->pc == 0x348A14u) {
        ctx->pc = 0x348A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A10u;
        // 0x348a14: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A18u;
        goto label_348a18;
    }
    ctx->pc = 0x348A10u;
    {
        const bool branch_taken_0x348a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348a10) {
            ctx->pc = 0x348A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348A10u;
            // 0x348a14: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348A48u;
            goto label_348a48;
        }
    }
    ctx->pc = 0x348A18u;
label_348a18:
    // 0x348a18: 0x924200f2  lbu         $v0, 0xF2($s2)
    ctx->pc = 0x348a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 242)));
label_348a1c:
    // 0x348a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_348a20:
    if (ctx->pc == 0x348A20u) {
        ctx->pc = 0x348A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A1Cu;
        // 0x348a20: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A24u;
        goto label_348a24;
    }
    ctx->pc = 0x348A1Cu;
    {
        const bool branch_taken_0x348a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A1Cu;
        // 0x348a20: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a1c) {
            ctx->pc = 0x348A3Cu;
            goto label_348a3c;
        }
    }
    ctx->pc = 0x348A24u;
label_348a24:
    // 0x348a24: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x348a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_348a28:
    // 0x348a28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_348a2c:
    if (ctx->pc == 0x348A2Cu) {
        ctx->pc = 0x348A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A28u;
        // 0x348a2c: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A30u;
        goto label_348a30;
    }
    ctx->pc = 0x348A28u;
    {
        const bool branch_taken_0x348a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A28u;
        // 0x348a2c: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a28) {
            ctx->pc = 0x348A3Cu;
            goto label_348a3c;
        }
    }
    ctx->pc = 0x348A30u;
label_348a30:
    // 0x348a30: 0xc0d252a  jal         func_3494A8
label_348a34:
    if (ctx->pc == 0x348A34u) {
        ctx->pc = 0x348A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A30u;
        // 0x348a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A38u;
        goto label_348a38;
    }
    ctx->pc = 0x348A30u;
    SET_GPR_U32(ctx, 31, 0x348A38u);
    ctx->pc = 0x348A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A30u;
    // 0x348a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3494A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3494A8u, 0x348A30u, 0x348A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A38u;
label_348a38:
    // 0x348a38: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x348a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_348a3c:
    // 0x348a3c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x348a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_348a40:
    // 0x348a40: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x348a40u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_348a44:
    // 0x348a44: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x348a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_348a48:
    // 0x348a48: 0xc0c48da  jal         func_312368
label_348a4c:
    if (ctx->pc == 0x348A4Cu) {
        ctx->pc = 0x348A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A48u;
        // 0x348a4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348A50u;
        goto label_348a50;
    }
    ctx->pc = 0x348A48u;
    SET_GPR_U32(ctx, 31, 0x348A50u);
    ctx->pc = 0x348A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A48u;
    // 0x348a4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x348A48u, 0x348A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A50u;
label_348a50:
    // 0x348a50: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x348a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348a54:
    // 0x348a54: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x348a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_348a58:
    // 0x348a58: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x348a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_348a5c:
    // 0x348a5c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x348a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_348a60:
    // 0x348a60: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x348a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_348a64:
    // 0x348a64: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x348a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_348a68:
    // 0x348a68: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x348a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_348a6c:
    // 0x348a6c: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x348a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_348a70:
    // 0x348a70: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x348a70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_348a74:
    // 0x348a74: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x348a74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_348a78:
    // 0x348a78: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x348a78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_348a7c:
    // 0x348a7c: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x348a7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_348a80:
    // 0x348a80: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x348a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_348a84:
    // 0x348a84: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x348a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_348a88:
    // 0x348a88: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x348a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_348a8c:
    // 0x348a8c: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x348a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_348a90:
    // 0x348a90: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x348a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_348a94:
    // 0x348a94: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x348a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_348a98:
    // 0x348a98: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x348a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_348a9c:
    // 0x348a9c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x348a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_348aa0:
    // 0x348aa0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x348aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_348aa4:
    // 0x348aa4: 0x3e00008  jr          $ra
label_348aa8:
    if (ctx->pc == 0x348AA8u) {
        ctx->pc = 0x348AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AA4u;
        // 0x348aa8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348AACu;
        goto label_348aac;
    }
    ctx->pc = 0x348AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AA4u;
        // 0x348aa8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348AACu;
label_348aac:
    // 0x348aac: 0x0  nop
    ctx->pc = 0x348aacu;
    // NOP
    ctx->pc = 0x348ab0u;
}
