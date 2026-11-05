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

// Function: sub_00190A10
// Address: 0x190a10 - 0x191168
void sub_00190A10_0x190a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190A10_0x190a10");
#endif

    switch (ctx->pc) {
        case 0x190a10u: goto label_190a10;
        case 0x190a14u: goto label_190a14;
        case 0x190a18u: goto label_190a18;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a20u: goto label_190a20;
        case 0x190a24u: goto label_190a24;
        case 0x190a28u: goto label_190a28;
        case 0x190a2cu: goto label_190a2c;
        case 0x190a30u: goto label_190a30;
        case 0x190a34u: goto label_190a34;
        case 0x190a38u: goto label_190a38;
        case 0x190a3cu: goto label_190a3c;
        case 0x190a40u: goto label_190a40;
        case 0x190a44u: goto label_190a44;
        case 0x190a48u: goto label_190a48;
        case 0x190a4cu: goto label_190a4c;
        case 0x190a50u: goto label_190a50;
        case 0x190a54u: goto label_190a54;
        case 0x190a58u: goto label_190a58;
        case 0x190a5cu: goto label_190a5c;
        case 0x190a60u: goto label_190a60;
        case 0x190a64u: goto label_190a64;
        case 0x190a68u: goto label_190a68;
        case 0x190a6cu: goto label_190a6c;
        case 0x190a70u: goto label_190a70;
        case 0x190a74u: goto label_190a74;
        case 0x190a78u: goto label_190a78;
        case 0x190a7cu: goto label_190a7c;
        case 0x190a80u: goto label_190a80;
        case 0x190a84u: goto label_190a84;
        case 0x190a88u: goto label_190a88;
        case 0x190a8cu: goto label_190a8c;
        case 0x190a90u: goto label_190a90;
        case 0x190a94u: goto label_190a94;
        case 0x190a98u: goto label_190a98;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa0u: goto label_190aa0;
        case 0x190aa4u: goto label_190aa4;
        case 0x190aa8u: goto label_190aa8;
        case 0x190aacu: goto label_190aac;
        case 0x190ab0u: goto label_190ab0;
        case 0x190ab4u: goto label_190ab4;
        case 0x190ab8u: goto label_190ab8;
        case 0x190abcu: goto label_190abc;
        case 0x190ac0u: goto label_190ac0;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ac8u: goto label_190ac8;
        case 0x190accu: goto label_190acc;
        case 0x190ad0u: goto label_190ad0;
        case 0x190ad4u: goto label_190ad4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190adcu: goto label_190adc;
        case 0x190ae0u: goto label_190ae0;
        case 0x190ae4u: goto label_190ae4;
        case 0x190ae8u: goto label_190ae8;
        case 0x190aecu: goto label_190aec;
        case 0x190af0u: goto label_190af0;
        case 0x190af4u: goto label_190af4;
        case 0x190af8u: goto label_190af8;
        case 0x190afcu: goto label_190afc;
        case 0x190b00u: goto label_190b00;
        case 0x190b04u: goto label_190b04;
        case 0x190b08u: goto label_190b08;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b10u: goto label_190b10;
        case 0x190b14u: goto label_190b14;
        case 0x190b18u: goto label_190b18;
        case 0x190b1cu: goto label_190b1c;
        case 0x190b20u: goto label_190b20;
        case 0x190b24u: goto label_190b24;
        case 0x190b28u: goto label_190b28;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b30u: goto label_190b30;
        case 0x190b34u: goto label_190b34;
        case 0x190b38u: goto label_190b38;
        case 0x190b3cu: goto label_190b3c;
        case 0x190b40u: goto label_190b40;
        case 0x190b44u: goto label_190b44;
        case 0x190b48u: goto label_190b48;
        case 0x190b4cu: goto label_190b4c;
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b60u: goto label_190b60;
        case 0x190b64u: goto label_190b64;
        case 0x190b68u: goto label_190b68;
        case 0x190b6cu: goto label_190b6c;
        case 0x190b70u: goto label_190b70;
        case 0x190b74u: goto label_190b74;
        case 0x190b78u: goto label_190b78;
        case 0x190b7cu: goto label_190b7c;
        case 0x190b80u: goto label_190b80;
        case 0x190b84u: goto label_190b84;
        case 0x190b88u: goto label_190b88;
        case 0x190b8cu: goto label_190b8c;
        case 0x190b90u: goto label_190b90;
        case 0x190b94u: goto label_190b94;
        case 0x190b98u: goto label_190b98;
        case 0x190b9cu: goto label_190b9c;
        case 0x190ba0u: goto label_190ba0;
        case 0x190ba4u: goto label_190ba4;
        case 0x190ba8u: goto label_190ba8;
        case 0x190bacu: goto label_190bac;
        case 0x190bb0u: goto label_190bb0;
        case 0x190bb4u: goto label_190bb4;
        case 0x190bb8u: goto label_190bb8;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc4u: goto label_190bc4;
        case 0x190bc8u: goto label_190bc8;
        case 0x190bccu: goto label_190bcc;
        case 0x190bd0u: goto label_190bd0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190bd8u: goto label_190bd8;
        case 0x190bdcu: goto label_190bdc;
        case 0x190be0u: goto label_190be0;
        case 0x190be4u: goto label_190be4;
        case 0x190be8u: goto label_190be8;
        case 0x190becu: goto label_190bec;
        case 0x190bf0u: goto label_190bf0;
        case 0x190bf4u: goto label_190bf4;
        case 0x190bf8u: goto label_190bf8;
        case 0x190bfcu: goto label_190bfc;
        case 0x190c00u: goto label_190c00;
        case 0x190c04u: goto label_190c04;
        case 0x190c08u: goto label_190c08;
        case 0x190c0cu: goto label_190c0c;
        case 0x190c10u: goto label_190c10;
        case 0x190c14u: goto label_190c14;
        case 0x190c18u: goto label_190c18;
        case 0x190c1cu: goto label_190c1c;
        case 0x190c20u: goto label_190c20;
        case 0x190c24u: goto label_190c24;
        case 0x190c28u: goto label_190c28;
        case 0x190c2cu: goto label_190c2c;
        case 0x190c30u: goto label_190c30;
        case 0x190c34u: goto label_190c34;
        case 0x190c38u: goto label_190c38;
        case 0x190c3cu: goto label_190c3c;
        case 0x190c40u: goto label_190c40;
        case 0x190c44u: goto label_190c44;
        case 0x190c48u: goto label_190c48;
        case 0x190c4cu: goto label_190c4c;
        case 0x190c50u: goto label_190c50;
        case 0x190c54u: goto label_190c54;
        case 0x190c58u: goto label_190c58;
        case 0x190c5cu: goto label_190c5c;
        case 0x190c60u: goto label_190c60;
        case 0x190c64u: goto label_190c64;
        case 0x190c68u: goto label_190c68;
        case 0x190c6cu: goto label_190c6c;
        case 0x190c70u: goto label_190c70;
        case 0x190c74u: goto label_190c74;
        case 0x190c78u: goto label_190c78;
        case 0x190c7cu: goto label_190c7c;
        case 0x190c80u: goto label_190c80;
        case 0x190c84u: goto label_190c84;
        case 0x190c88u: goto label_190c88;
        case 0x190c8cu: goto label_190c8c;
        case 0x190c90u: goto label_190c90;
        case 0x190c94u: goto label_190c94;
        case 0x190c98u: goto label_190c98;
        case 0x190c9cu: goto label_190c9c;
        case 0x190ca0u: goto label_190ca0;
        case 0x190ca4u: goto label_190ca4;
        case 0x190ca8u: goto label_190ca8;
        case 0x190cacu: goto label_190cac;
        case 0x190cb0u: goto label_190cb0;
        case 0x190cb4u: goto label_190cb4;
        case 0x190cb8u: goto label_190cb8;
        case 0x190cbcu: goto label_190cbc;
        case 0x190cc0u: goto label_190cc0;
        case 0x190cc4u: goto label_190cc4;
        case 0x190cc8u: goto label_190cc8;
        case 0x190cccu: goto label_190ccc;
        case 0x190cd0u: goto label_190cd0;
        case 0x190cd4u: goto label_190cd4;
        case 0x190cd8u: goto label_190cd8;
        case 0x190cdcu: goto label_190cdc;
        case 0x190ce0u: goto label_190ce0;
        case 0x190ce4u: goto label_190ce4;
        case 0x190ce8u: goto label_190ce8;
        case 0x190cecu: goto label_190cec;
        case 0x190cf0u: goto label_190cf0;
        case 0x190cf4u: goto label_190cf4;
        case 0x190cf8u: goto label_190cf8;
        case 0x190cfcu: goto label_190cfc;
        case 0x190d00u: goto label_190d00;
        case 0x190d04u: goto label_190d04;
        case 0x190d08u: goto label_190d08;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d10u: goto label_190d10;
        case 0x190d14u: goto label_190d14;
        case 0x190d18u: goto label_190d18;
        case 0x190d1cu: goto label_190d1c;
        case 0x190d20u: goto label_190d20;
        case 0x190d24u: goto label_190d24;
        case 0x190d28u: goto label_190d28;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d30u: goto label_190d30;
        case 0x190d34u: goto label_190d34;
        case 0x190d38u: goto label_190d38;
        case 0x190d3cu: goto label_190d3c;
        case 0x190d40u: goto label_190d40;
        case 0x190d44u: goto label_190d44;
        case 0x190d48u: goto label_190d48;
        case 0x190d4cu: goto label_190d4c;
        case 0x190d50u: goto label_190d50;
        case 0x190d54u: goto label_190d54;
        case 0x190d58u: goto label_190d58;
        case 0x190d5cu: goto label_190d5c;
        case 0x190d60u: goto label_190d60;
        case 0x190d64u: goto label_190d64;
        case 0x190d68u: goto label_190d68;
        case 0x190d6cu: goto label_190d6c;
        case 0x190d70u: goto label_190d70;
        case 0x190d74u: goto label_190d74;
        case 0x190d78u: goto label_190d78;
        case 0x190d7cu: goto label_190d7c;
        case 0x190d80u: goto label_190d80;
        case 0x190d84u: goto label_190d84;
        case 0x190d88u: goto label_190d88;
        case 0x190d8cu: goto label_190d8c;
        case 0x190d90u: goto label_190d90;
        case 0x190d94u: goto label_190d94;
        case 0x190d98u: goto label_190d98;
        case 0x190d9cu: goto label_190d9c;
        case 0x190da0u: goto label_190da0;
        case 0x190da4u: goto label_190da4;
        case 0x190da8u: goto label_190da8;
        case 0x190dacu: goto label_190dac;
        case 0x190db0u: goto label_190db0;
        case 0x190db4u: goto label_190db4;
        case 0x190db8u: goto label_190db8;
        case 0x190dbcu: goto label_190dbc;
        case 0x190dc0u: goto label_190dc0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190dc8u: goto label_190dc8;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd0u: goto label_190dd0;
        case 0x190dd4u: goto label_190dd4;
        case 0x190dd8u: goto label_190dd8;
        case 0x190ddcu: goto label_190ddc;
        case 0x190de0u: goto label_190de0;
        case 0x190de4u: goto label_190de4;
        case 0x190de8u: goto label_190de8;
        case 0x190decu: goto label_190dec;
        case 0x190df0u: goto label_190df0;
        case 0x190df4u: goto label_190df4;
        case 0x190df8u: goto label_190df8;
        case 0x190dfcu: goto label_190dfc;
        case 0x190e00u: goto label_190e00;
        case 0x190e04u: goto label_190e04;
        case 0x190e08u: goto label_190e08;
        case 0x190e0cu: goto label_190e0c;
        case 0x190e10u: goto label_190e10;
        case 0x190e14u: goto label_190e14;
        case 0x190e18u: goto label_190e18;
        case 0x190e1cu: goto label_190e1c;
        case 0x190e20u: goto label_190e20;
        case 0x190e24u: goto label_190e24;
        case 0x190e28u: goto label_190e28;
        case 0x190e2cu: goto label_190e2c;
        case 0x190e30u: goto label_190e30;
        case 0x190e34u: goto label_190e34;
        case 0x190e38u: goto label_190e38;
        case 0x190e3cu: goto label_190e3c;
        case 0x190e40u: goto label_190e40;
        case 0x190e44u: goto label_190e44;
        case 0x190e48u: goto label_190e48;
        case 0x190e4cu: goto label_190e4c;
        case 0x190e50u: goto label_190e50;
        case 0x190e54u: goto label_190e54;
        case 0x190e58u: goto label_190e58;
        case 0x190e5cu: goto label_190e5c;
        case 0x190e60u: goto label_190e60;
        case 0x190e64u: goto label_190e64;
        case 0x190e68u: goto label_190e68;
        case 0x190e6cu: goto label_190e6c;
        case 0x190e70u: goto label_190e70;
        case 0x190e74u: goto label_190e74;
        case 0x190e78u: goto label_190e78;
        case 0x190e7cu: goto label_190e7c;
        case 0x190e80u: goto label_190e80;
        case 0x190e84u: goto label_190e84;
        case 0x190e88u: goto label_190e88;
        case 0x190e8cu: goto label_190e8c;
        case 0x190e90u: goto label_190e90;
        case 0x190e94u: goto label_190e94;
        case 0x190e98u: goto label_190e98;
        case 0x190e9cu: goto label_190e9c;
        case 0x190ea0u: goto label_190ea0;
        case 0x190ea4u: goto label_190ea4;
        case 0x190ea8u: goto label_190ea8;
        case 0x190eacu: goto label_190eac;
        case 0x190eb0u: goto label_190eb0;
        case 0x190eb4u: goto label_190eb4;
        case 0x190eb8u: goto label_190eb8;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ec0u: goto label_190ec0;
        case 0x190ec4u: goto label_190ec4;
        case 0x190ec8u: goto label_190ec8;
        case 0x190eccu: goto label_190ecc;
        case 0x190ed0u: goto label_190ed0;
        case 0x190ed4u: goto label_190ed4;
        case 0x190ed8u: goto label_190ed8;
        case 0x190edcu: goto label_190edc;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ee4u: goto label_190ee4;
        case 0x190ee8u: goto label_190ee8;
        case 0x190eecu: goto label_190eec;
        case 0x190ef0u: goto label_190ef0;
        case 0x190ef4u: goto label_190ef4;
        case 0x190ef8u: goto label_190ef8;
        case 0x190efcu: goto label_190efc;
        case 0x190f00u: goto label_190f00;
        case 0x190f04u: goto label_190f04;
        case 0x190f08u: goto label_190f08;
        case 0x190f0cu: goto label_190f0c;
        case 0x190f10u: goto label_190f10;
        case 0x190f14u: goto label_190f14;
        case 0x190f18u: goto label_190f18;
        case 0x190f1cu: goto label_190f1c;
        case 0x190f20u: goto label_190f20;
        case 0x190f24u: goto label_190f24;
        case 0x190f28u: goto label_190f28;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f30u: goto label_190f30;
        case 0x190f34u: goto label_190f34;
        case 0x190f38u: goto label_190f38;
        case 0x190f3cu: goto label_190f3c;
        case 0x190f40u: goto label_190f40;
        case 0x190f44u: goto label_190f44;
        case 0x190f48u: goto label_190f48;
        case 0x190f4cu: goto label_190f4c;
        case 0x190f50u: goto label_190f50;
        case 0x190f54u: goto label_190f54;
        case 0x190f58u: goto label_190f58;
        case 0x190f5cu: goto label_190f5c;
        case 0x190f60u: goto label_190f60;
        case 0x190f64u: goto label_190f64;
        case 0x190f68u: goto label_190f68;
        case 0x190f6cu: goto label_190f6c;
        case 0x190f70u: goto label_190f70;
        case 0x190f74u: goto label_190f74;
        case 0x190f78u: goto label_190f78;
        case 0x190f7cu: goto label_190f7c;
        case 0x190f80u: goto label_190f80;
        case 0x190f84u: goto label_190f84;
        case 0x190f88u: goto label_190f88;
        case 0x190f8cu: goto label_190f8c;
        case 0x190f90u: goto label_190f90;
        case 0x190f94u: goto label_190f94;
        case 0x190f98u: goto label_190f98;
        case 0x190f9cu: goto label_190f9c;
        case 0x190fa0u: goto label_190fa0;
        case 0x190fa4u: goto label_190fa4;
        case 0x190fa8u: goto label_190fa8;
        case 0x190facu: goto label_190fac;
        case 0x190fb0u: goto label_190fb0;
        case 0x190fb4u: goto label_190fb4;
        case 0x190fb8u: goto label_190fb8;
        case 0x190fbcu: goto label_190fbc;
        case 0x190fc0u: goto label_190fc0;
        case 0x190fc4u: goto label_190fc4;
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        default: break;
    }

    ctx->pc = 0x190a10u;

label_190a10:
    // 0x190a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x190a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_190a14:
    // 0x190a14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x190a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_190a18:
    // 0x190a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190a1c:
    // 0x190a1c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x190a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_190a20:
    // 0x190a20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190a24:
    // 0x190a24: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x190a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_190a28:
    // 0x190a28: 0xc061a22  jal         func_186888
label_190a2c:
    if (ctx->pc == 0x190A2Cu) {
        ctx->pc = 0x190A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A28u;
        // 0x190a2c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A30u;
        goto label_190a30;
    }
    ctx->pc = 0x190A28u;
    SET_GPR_U32(ctx, 31, 0x190A30u);
    ctx->pc = 0x190A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A28u;
    // 0x190a2c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x190A28u, 0x190A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A30u;
label_190a30:
    // 0x190a30: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x190a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190a34:
    // 0x190a34: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x190a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190a38:
    // 0x190a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190a3c:
    // 0x190a3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x190a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_190a40:
    // 0x190a40: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x190a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_190a44:
    // 0x190a44: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_190a48:
    if (ctx->pc == 0x190A48u) {
        ctx->pc = 0x190A4Cu;
        goto label_190a4c;
    }
    ctx->pc = 0x190A44u;
    {
        const bool branch_taken_0x190a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x190a44) {
            ctx->pc = 0x190A60u;
            goto label_190a60;
        }
    }
    ctx->pc = 0x190A4Cu;
label_190a4c:
    // 0x190a4c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x190a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_190a50:
    // 0x190a50: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_190a54:
    // 0x190a54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x190a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_190a58:
    // 0x190a58: 0x1000000a  b           . + 4 + (0xA << 2)
label_190a5c:
    if (ctx->pc == 0x190A5Cu) {
        ctx->pc = 0x190A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A58u;
        // 0x190a5c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A60u;
        goto label_190a60;
    }
    ctx->pc = 0x190A58u;
    {
        const bool branch_taken_0x190a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A58u;
        // 0x190a5c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a58) {
            ctx->pc = 0x190A84u;
            goto label_190a84;
        }
    }
    ctx->pc = 0x190A60u;
label_190a60:
    // 0x190a60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_190a64:
    if (ctx->pc == 0x190A64u) {
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A60u;
        // 0x190a64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A68u;
        goto label_190a68;
    }
    ctx->pc = 0x190A60u;
    {
        const bool branch_taken_0x190a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A60u;
        // 0x190a64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a60) {
            ctx->pc = 0x190A7Cu;
            goto label_190a7c;
        }
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_190a6c:
    // 0x190a6c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_190a70:
    if (ctx->pc == 0x190A70u) {
        ctx->pc = 0x190A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A6Cu;
        // 0x190a70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A74u;
        goto label_190a74;
    }
    ctx->pc = 0x190A6Cu;
    {
        const bool branch_taken_0x190a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x190A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A6Cu;
        // 0x190a70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a6c) {
            ctx->pc = 0x190A7Cu;
            goto label_190a7c;
        }
    }
    ctx->pc = 0x190A74u;
label_190a74:
    // 0x190a74: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_190a78:
    if (ctx->pc == 0x190A78u) {
        ctx->pc = 0x190A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A74u;
        // 0x190a78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A7Cu;
        goto label_190a7c;
    }
    ctx->pc = 0x190A74u;
    {
        const bool branch_taken_0x190a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x190A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A74u;
        // 0x190a78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a74) {
            ctx->pc = 0x190A84u;
            goto label_190a84;
        }
    }
    ctx->pc = 0x190A7Cu;
label_190a7c:
    // 0x190a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190a80:
    // 0x190a80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x190a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_190a84:
    // 0x190a84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_190a88:
    if (ctx->pc == 0x190A88u) {
        ctx->pc = 0x190A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A84u;
        // 0x190a88: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A8Cu;
        goto label_190a8c;
    }
    ctx->pc = 0x190A84u;
    {
        const bool branch_taken_0x190a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A84u;
        // 0x190a88: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a84) {
            ctx->pc = 0x190AD4u;
            goto label_190ad4;
        }
    }
    ctx->pc = 0x190A8Cu;
label_190a8c:
    // 0x190a8c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x190a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_190a90:
    // 0x190a90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_190a94:
    if (ctx->pc == 0x190A94u) {
        ctx->pc = 0x190A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A90u;
        // 0x190a94: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A98u;
        goto label_190a98;
    }
    ctx->pc = 0x190A90u;
    {
        const bool branch_taken_0x190a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a90) {
            ctx->pc = 0x190A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A90u;
            // 0x190a94: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190AA4u;
            goto label_190aa4;
        }
    }
    ctx->pc = 0x190A98u;
label_190a98:
    // 0x190a98: 0xc06423e  jal         func_1908F8
label_190a9c:
    if (ctx->pc == 0x190A9Cu) {
        ctx->pc = 0x190A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A98u;
        // 0x190a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AA0u;
        goto label_190aa0;
    }
    ctx->pc = 0x190A98u;
    SET_GPR_U32(ctx, 31, 0x190AA0u);
    ctx->pc = 0x190A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A98u;
    // 0x190a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908F8u, 0x190A98u, 0x190AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AA0u;
label_190aa0:
    // 0x190aa0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_190aa4:
    // 0x190aa4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_190aa8:
    if (ctx->pc == 0x190AA8u) {
        ctx->pc = 0x190AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AA4u;
        // 0x190aa8: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AACu;
        goto label_190aac;
    }
    ctx->pc = 0x190AA4u;
    {
        const bool branch_taken_0x190aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AA4u;
        // 0x190aa8: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190aa4) {
            ctx->pc = 0x190AC0u;
            goto label_190ac0;
        }
    }
    ctx->pc = 0x190AACu;
label_190aac:
    // 0x190aac: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_190ab0:
    // 0x190ab0: 0xc06fb64  jal         func_1BED90
label_190ab4:
    if (ctx->pc == 0x190AB4u) {
        ctx->pc = 0x190AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AB0u;
        // 0x190ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AB8u;
        goto label_190ab8;
    }
    ctx->pc = 0x190AB0u;
    SET_GPR_U32(ctx, 31, 0x190AB8u);
    ctx->pc = 0x190AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AB0u;
    // 0x190ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x190AB0u, 0x190AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AB8u;
label_190ab8:
    // 0x190ab8: 0x10000006  b           . + 4 + (0x6 << 2)
label_190abc:
    if (ctx->pc == 0x190ABCu) {
        ctx->pc = 0x190AC0u;
        goto label_190ac0;
    }
    ctx->pc = 0x190AB8u;
    {
        const bool branch_taken_0x190ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ab8) {
            ctx->pc = 0x190AD4u;
            goto label_190ad4;
        }
    }
    ctx->pc = 0x190AC0u;
label_190ac0:
    // 0x190ac0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_190ac4:
    if (ctx->pc == 0x190AC4u) {
        ctx->pc = 0x190AC8u;
        goto label_190ac8;
    }
    ctx->pc = 0x190AC0u;
    {
        const bool branch_taken_0x190ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ac0) {
            ctx->pc = 0x190AD4u;
            goto label_190ad4;
        }
    }
    ctx->pc = 0x190AC8u;
label_190ac8:
    // 0x190ac8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_190acc:
    // 0x190acc: 0xc06fb1e  jal         func_1BEC78
label_190ad0:
    if (ctx->pc == 0x190AD0u) {
        ctx->pc = 0x190AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ACCu;
        // 0x190ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AD4u;
        goto label_190ad4;
    }
    ctx->pc = 0x190ACCu;
    SET_GPR_U32(ctx, 31, 0x190AD4u);
    ctx->pc = 0x190AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190ACCu;
    // 0x190ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x190ACCu, 0x190AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AD4u;
label_190ad4:
    // 0x190ad4: 0xc061a12  jal         func_186848
label_190ad8:
    if (ctx->pc == 0x190AD8u) {
        ctx->pc = 0x190AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AD4u;
        // 0x190ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190ADCu;
        goto label_190adc;
    }
    ctx->pc = 0x190AD4u;
    SET_GPR_U32(ctx, 31, 0x190ADCu);
    ctx->pc = 0x190AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AD4u;
    // 0x190ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190AD4u, 0x190ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190ADCu;
label_190adc:
    // 0x190adc: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x190adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_190ae0:
    // 0x190ae0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x190ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_190ae4:
    // 0x190ae4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x190ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190ae8:
    // 0x190ae8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x190ae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_190aec:
    // 0x190aec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x190aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_190af0:
    // 0x190af0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x190af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190af4:
    // 0x190af4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x190af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190af8:
    // 0x190af8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x190af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190afc:
    // 0x190afc: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x190afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_190b00:
    // 0x190b00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x190b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_190b04:
    // 0x190b04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x190b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_190b08:
    // 0x190b08: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x190b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_190b0c:
    // 0x190b0c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x190b0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_190b10:
    // 0x190b10: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x190b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190b14:
    // 0x190b14: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x190b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190b18:
    // 0x190b18: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x190b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_190b1c:
    // 0x190b1c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x190b1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_190b20:
    // 0x190b20: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x190b20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_190b24:
    // 0x190b24: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x190b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_190b28:
    // 0x190b28: 0x46000004  c1          0x4
    ctx->pc = 0x190b28u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_190b2c:
    // 0x190b2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_190b30:
    // 0x190b30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x190b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_190b34:
    // 0x190b34: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x190b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_190b38:
    // 0x190b38: 0x0  nop
    ctx->pc = 0x190b38u;
    // NOP
label_190b3c:
    // 0x190b3c: 0x0  nop
    ctx->pc = 0x190b3cu;
    // NOP
label_190b40:
    // 0x190b40: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x190b40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_190b44:
    // 0x190b44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x190b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_190b48:
    // 0x190b48: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x190b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190b4c:
    // 0x190b4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_190b50:
    // 0x190b50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x190b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_190b54:
    // 0x190b54: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x190b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_190b58:
    // 0x190b58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x190b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_190b5c:
    // 0x190b5c: 0xc061a12  jal         func_186848
label_190b60:
    if (ctx->pc == 0x190B60u) {
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B64u;
        goto label_190b64;
    }
    ctx->pc = 0x190B5Cu;
    SET_GPR_U32(ctx, 31, 0x190B64u);
    ctx->pc = 0x190B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B5Cu;
    // 0x190b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190B5Cu, 0x190B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B64u;
label_190b64:
    // 0x190b64: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x190b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190b68:
    // 0x190b68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x190b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190b6c:
    // 0x190b6c: 0x0  nop
    ctx->pc = 0x190b6cu;
    // NOP
label_190b70:
    // 0x190b70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190b74:
    if (ctx->pc == 0x190B74u) {
        ctx->pc = 0x190B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B70u;
        // 0x190b74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B78u;
        goto label_190b78;
    }
    ctx->pc = 0x190B70u;
    {
        const bool branch_taken_0x190b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B70u;
        // 0x190b74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b70) {
            ctx->pc = 0x190B7Cu;
            goto label_190b7c;
        }
    }
    ctx->pc = 0x190B78u;
label_190b78:
    // 0x190b78: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_190b7c:
    // 0x190b7c: 0x5060003e  beql        $v1, $zero, . + 4 + (0x3E << 2)
label_190b80:
    if (ctx->pc == 0x190B80u) {
        ctx->pc = 0x190B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B7Cu;
        // 0x190b80: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B84u;
        goto label_190b84;
    }
    ctx->pc = 0x190B7Cu;
    {
        const bool branch_taken_0x190b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b7c) {
            ctx->pc = 0x190B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190B7Cu;
            // 0x190b80: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C78u;
            goto label_190c78;
        }
    }
    ctx->pc = 0x190B84u;
label_190b84:
    // 0x190b84: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x190b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190b88:
    // 0x190b88: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x190b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190b8c:
    // 0x190b8c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x190b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_190b90:
    // 0x190b90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190b94:
    // 0x190b94: 0x0  nop
    ctx->pc = 0x190b94u;
    // NOP
label_190b98:
    // 0x190b98: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_190b9c:
    if (ctx->pc == 0x190B9Cu) {
        ctx->pc = 0x190B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B98u;
        // 0x190b9c: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BA0u;
        goto label_190ba0;
    }
    ctx->pc = 0x190B98u;
    {
        const bool branch_taken_0x190b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190b98) {
            ctx->pc = 0x190B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190B98u;
            // 0x190b9c: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x190BF8u;
            goto label_190bf8;
        }
    }
    ctx->pc = 0x190BA0u;
label_190ba0:
    // 0x190ba0: 0xc061a12  jal         func_186848
label_190ba4:
    if (ctx->pc == 0x190BA4u) {
        ctx->pc = 0x190BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BA0u;
        // 0x190ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BA8u;
        goto label_190ba8;
    }
    ctx->pc = 0x190BA0u;
    SET_GPR_U32(ctx, 31, 0x190BA8u);
    ctx->pc = 0x190BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BA0u;
    // 0x190ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190BA0u, 0x190BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BA8u;
label_190ba8:
    // 0x190ba8: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x190ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190bac:
    // 0x190bac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x190bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190bb0:
    // 0x190bb0: 0x0  nop
    ctx->pc = 0x190bb0u;
    // NOP
label_190bb4:
    // 0x190bb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190bb8:
    if (ctx->pc == 0x190BB8u) {
        ctx->pc = 0x190BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BB4u;
        // 0x190bb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BBCu;
        goto label_190bbc;
    }
    ctx->pc = 0x190BB4u;
    {
        const bool branch_taken_0x190bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BB4u;
        // 0x190bb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bb4) {
            ctx->pc = 0x190BC0u;
            goto label_190bc0;
        }
    }
    ctx->pc = 0x190BBCu;
label_190bbc:
    // 0x190bbc: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_190bc0:
    // 0x190bc0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x190bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190bc4:
    // 0x190bc4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x190bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190bc8:
    // 0x190bc8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x190bc8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190bcc:
    // 0x190bcc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x190bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190bd0:
    // 0x190bd0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x190bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190bd4:
    // 0x190bd4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x190bd4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_190bd8:
    // 0x190bd8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x190bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190bdc:
    // 0x190bdc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x190bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190be0:
    // 0x190be0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x190be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190be4:
    // 0x190be4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x190be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190be8:
    // 0x190be8: 0x0  nop
    ctx->pc = 0x190be8u;
    // NOP
label_190bec:
    // 0x190bec: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
label_190bf0:
    if (ctx->pc == 0x190BF0u) {
        ctx->pc = 0x190BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BECu;
        // 0x190bf0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BF4u;
        goto label_190bf4;
    }
    ctx->pc = 0x190BECu;
    {
        const bool branch_taken_0x190bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190bec) {
            ctx->pc = 0x190BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190BECu;
            // 0x190bf0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C74u;
            goto label_190c74;
        }
    }
    ctx->pc = 0x190BF4u;
label_190bf4:
    // 0x190bf4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x190bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190bf8:
    // 0x190bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_190bfc:
    // 0x190bfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190c00:
    // 0x190c00: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x190c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190c04:
    // 0x190c04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_190c08:
    // 0x190c08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x190c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190c0c:
    // 0x190c0c: 0x0  nop
    ctx->pc = 0x190c0cu;
    // NOP
label_190c10:
    // 0x190c10: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_190c14:
    if (ctx->pc == 0x190C14u) {
        ctx->pc = 0x190C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C10u;
        // 0x190c14: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C18u;
        goto label_190c18;
    }
    ctx->pc = 0x190C10u;
    {
        const bool branch_taken_0x190c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190c10) {
            ctx->pc = 0x190C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C10u;
            // 0x190c14: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C78u;
            goto label_190c78;
        }
    }
    ctx->pc = 0x190C18u;
label_190c18:
    // 0x190c18: 0xc061a12  jal         func_186848
label_190c1c:
    if (ctx->pc == 0x190C1Cu) {
        ctx->pc = 0x190C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C18u;
        // 0x190c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C20u;
        goto label_190c20;
    }
    ctx->pc = 0x190C18u;
    SET_GPR_U32(ctx, 31, 0x190C20u);
    ctx->pc = 0x190C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C18u;
    // 0x190c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190C18u, 0x190C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C20u;
label_190c20:
    // 0x190c20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x190c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190c24:
    // 0x190c24: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x190c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190c28:
    // 0x190c28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190c2c:
    // 0x190c2c: 0x0  nop
    ctx->pc = 0x190c2cu;
    // NOP
label_190c30:
    // 0x190c30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190c34:
    if (ctx->pc == 0x190C34u) {
        ctx->pc = 0x190C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C30u;
        // 0x190c34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C38u;
        goto label_190c38;
    }
    ctx->pc = 0x190C30u;
    {
        const bool branch_taken_0x190c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C30u;
        // 0x190c34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c30) {
            ctx->pc = 0x190C3Cu;
            goto label_190c3c;
        }
    }
    ctx->pc = 0x190C38u;
label_190c38:
    // 0x190c38: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x190c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_190c3c:
    // 0x190c3c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x190c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190c40:
    // 0x190c40: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x190c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190c44:
    // 0x190c44: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x190c44u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190c48:
    // 0x190c48: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x190c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190c4c:
    // 0x190c4c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x190c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190c50:
    // 0x190c50: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x190c50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_190c54:
    // 0x190c54: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x190c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190c58:
    // 0x190c58: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x190c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190c5c:
    // 0x190c5c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x190c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190c60:
    // 0x190c60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190c64:
    // 0x190c64: 0x0  nop
    ctx->pc = 0x190c64u;
    // NOP
label_190c68:
    // 0x190c68: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_190c6c:
    if (ctx->pc == 0x190C6Cu) {
        ctx->pc = 0x190C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C68u;
        // 0x190c6c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C70u;
        goto label_190c70;
    }
    ctx->pc = 0x190C68u;
    {
        const bool branch_taken_0x190c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190c68) {
            ctx->pc = 0x190C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C68u;
            // 0x190c6c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C78u;
            goto label_190c78;
        }
    }
    ctx->pc = 0x190C70u;
label_190c70:
    // 0x190c70: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x190c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_190c74:
    // 0x190c74: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x190c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_190c78:
    // 0x190c78: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x190c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_190c7c:
    // 0x190c7c: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
label_190c80:
    if (ctx->pc == 0x190C80u) {
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C84u;
        goto label_190c84;
    }
    ctx->pc = 0x190C7Cu;
    {
        const bool branch_taken_0x190c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c7c) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190C84u;
label_190c84:
    // 0x190c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x190c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_190c88:
    // 0x190c88: 0x2442fd50  addiu       $v0, $v0, -0x2B0
    ctx->pc = 0x190c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966608));
label_190c8c:
    // 0x190c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_190c90:
    // 0x190c90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_190c94:
    // 0x190c94: 0x800008  jr          $a0
label_190c98:
    if (ctx->pc == 0x190C98u) {
        ctx->pc = 0x190C9Cu;
        goto label_190c9c;
    }
    ctx->pc = 0x190C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190C9Cu: goto label_190c9c;
            case 0x190D98u: goto label_190d98;
            case 0x190E80u: goto label_190e80;
            case 0x190FA0u: goto label_190fa0;
            case 0x190FD0u: goto label_190fd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x190C9Cu;
label_190c9c:
    // 0x190c9c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x190c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190ca0:
    // 0x190ca0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x190ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190ca4:
    // 0x190ca4: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x190ca4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_190ca8:
    // 0x190ca8: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x190ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190cac:
    // 0x190cac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190cb0:
    // 0x190cb0: 0x0  nop
    ctx->pc = 0x190cb0u;
    // NOP
label_190cb4:
    // 0x190cb4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_190cb8:
    if (ctx->pc == 0x190CB8u) {
        ctx->pc = 0x190CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CB4u;
        // 0x190cb8: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CBCu;
        goto label_190cbc;
    }
    ctx->pc = 0x190CB4u;
    {
        const bool branch_taken_0x190cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CB4u;
        // 0x190cb8: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cb4) {
            ctx->pc = 0x190CCCu;
            goto label_190ccc;
        }
    }
    ctx->pc = 0x190CBCu;
label_190cbc:
    // 0x190cbc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x190cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190cc0:
    // 0x190cc0: 0x0  nop
    ctx->pc = 0x190cc0u;
    // NOP
label_190cc4:
    // 0x190cc4: 0x450300ce  bc1tl       . + 4 + (0xCE << 2)
label_190cc8:
    if (ctx->pc == 0x190CC8u) {
        ctx->pc = 0x190CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC4u;
        // 0x190cc8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CCCu;
        goto label_190ccc;
    }
    ctx->pc = 0x190CC4u;
    {
        const bool branch_taken_0x190cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190cc4) {
            ctx->pc = 0x190CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190CC4u;
            // 0x190cc8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191000u;
            goto label_191000;
        }
    }
    ctx->pc = 0x190CCCu;
label_190ccc:
    // 0x190ccc: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x190cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190cd0:
    // 0x190cd0: 0x0  nop
    ctx->pc = 0x190cd0u;
    // NOP
label_190cd4:
    // 0x190cd4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_190cd8:
    if (ctx->pc == 0x190CD8u) {
        ctx->pc = 0x190CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CD4u;
        // 0x190cd8: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CDCu;
        goto label_190cdc;
    }
    ctx->pc = 0x190CD4u;
    {
        const bool branch_taken_0x190cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CD4u;
        // 0x190cd8: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190cd4) {
            ctx->pc = 0x190D20u;
            goto label_190d20;
        }
    }
    ctx->pc = 0x190CDCu;
label_190cdc:
    // 0x190cdc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x190cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190ce0:
    // 0x190ce0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x190ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190ce4:
    // 0x190ce4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x190ce4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190ce8:
    // 0x190ce8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x190ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190cec:
    // 0x190cec: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x190cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190cf0:
    // 0x190cf0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x190cf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_190cf4:
    // 0x190cf4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x190cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190cf8:
    // 0x190cf8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x190cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190cfc:
    // 0x190cfc: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x190cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190d00:
    // 0x190d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d04:
    // 0x190d04: 0x0  nop
    ctx->pc = 0x190d04u;
    // NOP
label_190d08:
    // 0x190d08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d0c:
    // 0x190d0c: 0x0  nop
    ctx->pc = 0x190d0cu;
    // NOP
label_190d10:
    // 0x190d10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_190d14:
    if (ctx->pc == 0x190D14u) {
        ctx->pc = 0x190D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D10u;
        // 0x190d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D18u;
        goto label_190d18;
    }
    ctx->pc = 0x190D10u;
    {
        const bool branch_taken_0x190d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D10u;
        // 0x190d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d10) {
            ctx->pc = 0x190D20u;
            goto label_190d20;
        }
    }
    ctx->pc = 0x190D18u;
label_190d18:
    // 0x190d18: 0x100000bb  b           . + 4 + (0xBB << 2)
label_190d1c:
    if (ctx->pc == 0x190D1Cu) {
        ctx->pc = 0x190D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D18u;
        // 0x190d1c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D20u;
        goto label_190d20;
    }
    ctx->pc = 0x190D18u;
    {
        const bool branch_taken_0x190d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D18u;
        // 0x190d1c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d18) {
            ctx->pc = 0x191008u;
            goto label_191008;
        }
    }
    ctx->pc = 0x190D20u;
label_190d20:
    // 0x190d20: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x190d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d24:
    // 0x190d24: 0x0  nop
    ctx->pc = 0x190d24u;
    // NOP
label_190d28:
    // 0x190d28: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_190d2c:
    if (ctx->pc == 0x190D2Cu) {
        ctx->pc = 0x190D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D28u;
        // 0x190d2c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D30u;
        goto label_190d30;
    }
    ctx->pc = 0x190D28u;
    {
        const bool branch_taken_0x190d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D28u;
        // 0x190d2c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d28) {
            ctx->pc = 0x190D74u;
            goto label_190d74;
        }
    }
    ctx->pc = 0x190D30u;
label_190d30:
    // 0x190d30: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x190d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190d34:
    // 0x190d34: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x190d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190d38:
    // 0x190d38: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x190d38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190d3c:
    // 0x190d3c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x190d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190d40:
    // 0x190d40: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x190d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190d44:
    // 0x190d44: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x190d44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_190d48:
    // 0x190d48: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x190d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190d4c:
    // 0x190d4c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x190d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190d50:
    // 0x190d50: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x190d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190d54:
    // 0x190d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d58:
    // 0x190d58: 0x0  nop
    ctx->pc = 0x190d58u;
    // NOP
label_190d5c:
    // 0x190d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d60:
    // 0x190d60: 0x0  nop
    ctx->pc = 0x190d60u;
    // NOP
label_190d64:
    // 0x190d64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_190d68:
    if (ctx->pc == 0x190D68u) {
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D6Cu;
        goto label_190d6c;
    }
    ctx->pc = 0x190D64u;
    {
        const bool branch_taken_0x190d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d64) {
            ctx->pc = 0x190D74u;
            goto label_190d74;
        }
    }
    ctx->pc = 0x190D6Cu;
label_190d6c:
    // 0x190d6c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_190d70:
    if (ctx->pc == 0x190D70u) {
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D74u;
        goto label_190d74;
    }
    ctx->pc = 0x190D6Cu;
    {
        const bool branch_taken_0x190d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d6c) {
            ctx->pc = 0x191008u;
            goto label_191008;
        }
    }
    ctx->pc = 0x190D74u;
label_190d74:
    // 0x190d74: 0xc061a12  jal         func_186848
label_190d78:
    if (ctx->pc == 0x190D78u) {
        ctx->pc = 0x190D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D74u;
        // 0x190d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D7Cu;
        goto label_190d7c;
    }
    ctx->pc = 0x190D74u;
    SET_GPR_U32(ctx, 31, 0x190D7Cu);
    ctx->pc = 0x190D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D74u;
    // 0x190d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190D74u, 0x190D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D7Cu;
label_190d7c:
    // 0x190d7c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_190d80:
    // 0x190d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190d84:
    // 0x190d84: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x190d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_190d88:
    // 0x190d88: 0x40f809  jalr        $v0
label_190d8c:
    if (ctx->pc == 0x190D8Cu) {
        ctx->pc = 0x190D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D88u;
        // 0x190d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D90u;
        goto label_190d90;
    }
    ctx->pc = 0x190D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190D90u);
        ctx->pc = 0x190D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D88u;
        // 0x190d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D88u, 0x190D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190D90u;
label_190d90:
    // 0x190d90: 0x100000ee  b           . + 4 + (0xEE << 2)
label_190d94:
    if (ctx->pc == 0x190D94u) {
        ctx->pc = 0x190D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D90u;
        // 0x190d94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D98u;
        goto label_190d98;
    }
    ctx->pc = 0x190D90u;
    {
        const bool branch_taken_0x190d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D90u;
        // 0x190d94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d90) {
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x190D98u;
label_190d98:
    // 0x190d98: 0xc061a12  jal         func_186848
label_190d9c:
    if (ctx->pc == 0x190D9Cu) {
        ctx->pc = 0x190D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D98u;
        // 0x190d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DA0u;
        goto label_190da0;
    }
    ctx->pc = 0x190D98u;
    SET_GPR_U32(ctx, 31, 0x190DA0u);
    ctx->pc = 0x190D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D98u;
    // 0x190d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190D98u, 0x190DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DA0u;
label_190da0:
    // 0x190da0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x190da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_190da4:
    // 0x190da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190da8:
    // 0x190da8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x190da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_190dac:
    // 0x190dac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x190dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190db0:
    // 0x190db0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x190db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_190db4:
    // 0x190db4: 0x40f809  jalr        $v0
label_190db8:
    if (ctx->pc == 0x190DB8u) {
        ctx->pc = 0x190DBCu;
        goto label_190dbc;
    }
    ctx->pc = 0x190DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190DBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DB4u, 0x190DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190DBCu;
label_190dbc:
    // 0x190dbc: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
label_190dc0:
    if (ctx->pc == 0x190DC0u) {
        ctx->pc = 0x190DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DBCu;
        // 0x190dc0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DC4u;
        goto label_190dc4;
    }
    ctx->pc = 0x190DBCu;
    {
        const bool branch_taken_0x190dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190dbc) {
            ctx->pc = 0x190DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190DBCu;
            // 0x190dc0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191000u;
            goto label_191000;
        }
    }
    ctx->pc = 0x190DC4u;
label_190dc4:
    // 0x190dc4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x190dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_190dc8:
    // 0x190dc8: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_190dcc:
    if (ctx->pc == 0x190DCCu) {
        ctx->pc = 0x190DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC8u;
        // 0x190dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DD0u;
        goto label_190dd0;
    }
    ctx->pc = 0x190DC8u;
    {
        const bool branch_taken_0x190dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC8u;
        // 0x190dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dc8) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190DD0u;
label_190dd0:
    // 0x190dd0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x190dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_190dd4:
    // 0x190dd4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_190dd8:
    if (ctx->pc == 0x190DD8u) {
        ctx->pc = 0x190DDCu;
        goto label_190ddc;
    }
    ctx->pc = 0x190DD4u;
    {
        const bool branch_taken_0x190dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190dd4) {
            ctx->pc = 0x190DF0u;
            goto label_190df0;
        }
    }
    ctx->pc = 0x190DDCu;
label_190ddc:
    // 0x190ddc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x190ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_190de0:
    // 0x190de0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x190de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_190de4:
    // 0x190de4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x190de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_190de8:
    // 0x190de8: 0x1000000a  b           . + 4 + (0xA << 2)
label_190dec:
    if (ctx->pc == 0x190DECu) {
        ctx->pc = 0x190DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DE8u;
        // 0x190dec: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DF0u;
        goto label_190df0;
    }
    ctx->pc = 0x190DE8u;
    {
        const bool branch_taken_0x190de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DE8u;
        // 0x190dec: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190de8) {
            ctx->pc = 0x190E14u;
            goto label_190e14;
        }
    }
    ctx->pc = 0x190DF0u;
label_190df0:
    // 0x190df0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_190df4:
    if (ctx->pc == 0x190DF4u) {
        ctx->pc = 0x190DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF0u;
        // 0x190df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DF8u;
        goto label_190df8;
    }
    ctx->pc = 0x190DF0u;
    {
        const bool branch_taken_0x190df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF0u;
        // 0x190df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190df0) {
            ctx->pc = 0x190E0Cu;
            goto label_190e0c;
        }
    }
    ctx->pc = 0x190DF8u;
label_190df8:
    // 0x190df8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_190dfc:
    // 0x190dfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_190e00:
    if (ctx->pc == 0x190E00u) {
        ctx->pc = 0x190E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DFCu;
        // 0x190e00: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E04u;
        goto label_190e04;
    }
    ctx->pc = 0x190DFCu;
    {
        const bool branch_taken_0x190dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DFCu;
        // 0x190e00: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dfc) {
            ctx->pc = 0x190E0Cu;
            goto label_190e0c;
        }
    }
    ctx->pc = 0x190E04u;
label_190e04:
    // 0x190e04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_190e08:
    if (ctx->pc == 0x190E08u) {
        ctx->pc = 0x190E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E04u;
        // 0x190e08: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E0Cu;
        goto label_190e0c;
    }
    ctx->pc = 0x190E04u;
    {
        const bool branch_taken_0x190e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x190E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E04u;
        // 0x190e08: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e04) {
            ctx->pc = 0x190E14u;
            goto label_190e14;
        }
    }
    ctx->pc = 0x190E0Cu;
label_190e0c:
    // 0x190e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x190e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190e10:
    // 0x190e10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x190e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190e14:
    // 0x190e14: 0x504000cd  beql        $v0, $zero, . + 4 + (0xCD << 2)
label_190e18:
    if (ctx->pc == 0x190E18u) {
        ctx->pc = 0x190E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E14u;
        // 0x190e18: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E1Cu;
        goto label_190e1c;
    }
    ctx->pc = 0x190E14u;
    {
        const bool branch_taken_0x190e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e14) {
            ctx->pc = 0x190E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190E14u;
            // 0x190e18: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x190E1Cu;
label_190e1c:
    // 0x190e1c: 0xc061a12  jal         func_186848
label_190e20:
    if (ctx->pc == 0x190E20u) {
        ctx->pc = 0x190E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E1Cu;
        // 0x190e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E24u;
        goto label_190e24;
    }
    ctx->pc = 0x190E1Cu;
    SET_GPR_U32(ctx, 31, 0x190E24u);
    ctx->pc = 0x190E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E1Cu;
    // 0x190e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190E1Cu, 0x190E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E24u;
label_190e24:
    // 0x190e24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x190e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190e28:
    // 0x190e28: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x190e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e2c:
    // 0x190e2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190e30:
    // 0x190e30: 0x0  nop
    ctx->pc = 0x190e30u;
    // NOP
label_190e34:
    // 0x190e34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190e38:
    if (ctx->pc == 0x190E38u) {
        ctx->pc = 0x190E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E34u;
        // 0x190e38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E3Cu;
        goto label_190e3c;
    }
    ctx->pc = 0x190E34u;
    {
        const bool branch_taken_0x190e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E34u;
        // 0x190e38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e34) {
            ctx->pc = 0x190E40u;
            goto label_190e40;
        }
    }
    ctx->pc = 0x190E3Cu;
label_190e3c:
    // 0x190e3c: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_190e40:
    // 0x190e40: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x190e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_190e44:
    // 0x190e44: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x190e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190e48:
    // 0x190e48: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x190e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190e4c:
    // 0x190e4c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x190e4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190e50:
    // 0x190e50: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x190e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190e54:
    // 0x190e54: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x190e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190e58:
    // 0x190e58: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x190e58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_190e5c:
    // 0x190e5c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x190e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190e60:
    // 0x190e60: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x190e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190e64:
    // 0x190e64: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x190e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190e68:
    // 0x190e68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190e6c:
    // 0x190e6c: 0x0  nop
    ctx->pc = 0x190e6cu;
    // NOP
label_190e70:
    // 0x190e70: 0x450000b5  bc1f        . + 4 + (0xB5 << 2)
label_190e74:
    if (ctx->pc == 0x190E74u) {
        ctx->pc = 0x190E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E70u;
        // 0x190e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E78u;
        goto label_190e78;
    }
    ctx->pc = 0x190E70u;
    {
        const bool branch_taken_0x190e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E70u;
        // 0x190e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e70) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190E78u;
label_190e78:
    // 0x190e78: 0x10000063  b           . + 4 + (0x63 << 2)
label_190e7c:
    if (ctx->pc == 0x190E7Cu) {
        ctx->pc = 0x190E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E78u;
        // 0x190e7c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E80u;
        goto label_190e80;
    }
    ctx->pc = 0x190E78u;
    {
        const bool branch_taken_0x190e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E78u;
        // 0x190e7c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e78) {
            ctx->pc = 0x191008u;
            goto label_191008;
        }
    }
    ctx->pc = 0x190E80u;
label_190e80:
    // 0x190e80: 0xc061a12  jal         func_186848
label_190e84:
    if (ctx->pc == 0x190E84u) {
        ctx->pc = 0x190E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E80u;
        // 0x190e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E88u;
        goto label_190e88;
    }
    ctx->pc = 0x190E80u;
    SET_GPR_U32(ctx, 31, 0x190E88u);
    ctx->pc = 0x190E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E80u;
    // 0x190e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190E80u, 0x190E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E88u;
label_190e88:
    // 0x190e88: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x190e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_190e8c:
    // 0x190e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190e90:
    // 0x190e90: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x190e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_190e94:
    // 0x190e94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x190e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190e98:
    // 0x190e98: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x190e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_190e9c:
    // 0x190e9c: 0x40f809  jalr        $v0
label_190ea0:
    if (ctx->pc == 0x190EA0u) {
        ctx->pc = 0x190EA4u;
        goto label_190ea4;
    }
    ctx->pc = 0x190E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190EA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190E9Cu, 0x190EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190EA4u;
label_190ea4:
    // 0x190ea4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_190ea8:
    if (ctx->pc == 0x190EA8u) {
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EACu;
        goto label_190eac;
    }
    ctx->pc = 0x190EA4u;
    {
        const bool branch_taken_0x190ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea4) {
            ctx->pc = 0x190EB4u;
            goto label_190eb4;
        }
    }
    ctx->pc = 0x190EACu;
label_190eac:
    // 0x190eac: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_190eb0:
    if (ctx->pc == 0x190EB0u) {
        ctx->pc = 0x190EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EACu;
        // 0x190eb0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EB4u;
        goto label_190eb4;
    }
    ctx->pc = 0x190EACu;
    {
        const bool branch_taken_0x190eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EACu;
        // 0x190eb0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190eac) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190EB4u;
label_190eb4:
    // 0x190eb4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x190eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190eb8:
    // 0x190eb8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x190eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_190ebc:
    // 0x190ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190ec0:
    // 0x190ec0: 0x0  nop
    ctx->pc = 0x190ec0u;
    // NOP
label_190ec4:
    // 0x190ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190ec8:
    // 0x190ec8: 0x0  nop
    ctx->pc = 0x190ec8u;
    // NOP
label_190ecc:
    // 0x190ecc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_190ed0:
    if (ctx->pc == 0x190ED0u) {
        ctx->pc = 0x190ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ECCu;
        // 0x190ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190ED4u;
        goto label_190ed4;
    }
    ctx->pc = 0x190ECCu;
    {
        const bool branch_taken_0x190ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ECCu;
        // 0x190ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ecc) {
            ctx->pc = 0x190EE4u;
            goto label_190ee4;
        }
    }
    ctx->pc = 0x190ED4u;
label_190ed4:
    // 0x190ed4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x190ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_190ed8:
    // 0x190ed8: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_190edc:
    // 0x190edc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_190ee0:
    if (ctx->pc == 0x190EE0u) {
        ctx->pc = 0x190EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EDCu;
        // 0x190ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EE4u;
        goto label_190ee4;
    }
    ctx->pc = 0x190EDCu;
    {
        const bool branch_taken_0x190edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EDCu;
        // 0x190ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190edc) {
            ctx->pc = 0x19100Cu;
            goto label_19100c;
        }
    }
    ctx->pc = 0x190EE4u;
label_190ee4:
    // 0x190ee4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_190ee8:
    // 0x190ee8: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_190eec:
    if (ctx->pc == 0x190EECu) {
        ctx->pc = 0x190EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EE8u;
        // 0x190eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EF0u;
        goto label_190ef0;
    }
    ctx->pc = 0x190EE8u;
    {
        const bool branch_taken_0x190ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EE8u;
        // 0x190eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ee8) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190EF0u;
label_190ef0:
    // 0x190ef0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x190ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_190ef4:
    // 0x190ef4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_190ef8:
    if (ctx->pc == 0x190EF8u) {
        ctx->pc = 0x190EFCu;
        goto label_190efc;
    }
    ctx->pc = 0x190EF4u;
    {
        const bool branch_taken_0x190ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190ef4) {
            ctx->pc = 0x190F10u;
            goto label_190f10;
        }
    }
    ctx->pc = 0x190EFCu;
label_190efc:
    // 0x190efc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_190f00:
    // 0x190f00: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_190f04:
    // 0x190f04: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x190f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_190f08:
    // 0x190f08: 0x1000000a  b           . + 4 + (0xA << 2)
label_190f0c:
    if (ctx->pc == 0x190F0Cu) {
        ctx->pc = 0x190F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F08u;
        // 0x190f0c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F10u;
        goto label_190f10;
    }
    ctx->pc = 0x190F08u;
    {
        const bool branch_taken_0x190f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F08u;
        // 0x190f0c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f08) {
            ctx->pc = 0x190F34u;
            goto label_190f34;
        }
    }
    ctx->pc = 0x190F10u;
label_190f10:
    // 0x190f10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_190f14:
    if (ctx->pc == 0x190F14u) {
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F18u;
        goto label_190f18;
    }
    ctx->pc = 0x190F10u;
    {
        const bool branch_taken_0x190f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f10) {
            ctx->pc = 0x190F2Cu;
            goto label_190f2c;
        }
    }
    ctx->pc = 0x190F18u;
label_190f18:
    // 0x190f18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_190f1c:
    // 0x190f1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_190f20:
    if (ctx->pc == 0x190F20u) {
        ctx->pc = 0x190F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F1Cu;
        // 0x190f20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F24u;
        goto label_190f24;
    }
    ctx->pc = 0x190F1Cu;
    {
        const bool branch_taken_0x190f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F1Cu;
        // 0x190f20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f1c) {
            ctx->pc = 0x190F2Cu;
            goto label_190f2c;
        }
    }
    ctx->pc = 0x190F24u;
label_190f24:
    // 0x190f24: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_190f28:
    if (ctx->pc == 0x190F28u) {
        ctx->pc = 0x190F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F24u;
        // 0x190f28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F2Cu;
        goto label_190f2c;
    }
    ctx->pc = 0x190F24u;
    {
        const bool branch_taken_0x190f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x190F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F24u;
        // 0x190f28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f24) {
            ctx->pc = 0x190F34u;
            goto label_190f34;
        }
    }
    ctx->pc = 0x190F2Cu;
label_190f2c:
    // 0x190f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190f30:
    // 0x190f30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x190f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190f34:
    // 0x190f34: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
label_190f38:
    if (ctx->pc == 0x190F38u) {
        ctx->pc = 0x190F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F34u;
        // 0x190f38: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F3Cu;
        goto label_190f3c;
    }
    ctx->pc = 0x190F34u;
    {
        const bool branch_taken_0x190f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f34) {
            ctx->pc = 0x190F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190F34u;
            // 0x190f38: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x190F3Cu;
label_190f3c:
    // 0x190f3c: 0xc061a12  jal         func_186848
label_190f40:
    if (ctx->pc == 0x190F40u) {
        ctx->pc = 0x190F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F3Cu;
        // 0x190f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F44u;
        goto label_190f44;
    }
    ctx->pc = 0x190F3Cu;
    SET_GPR_U32(ctx, 31, 0x190F44u);
    ctx->pc = 0x190F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F3Cu;
    // 0x190f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190F3Cu, 0x190F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F44u;
label_190f44:
    // 0x190f44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x190f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190f48:
    // 0x190f48: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x190f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190f4c:
    // 0x190f4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190f50:
    // 0x190f50: 0x0  nop
    ctx->pc = 0x190f50u;
    // NOP
label_190f54:
    // 0x190f54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190f58:
    if (ctx->pc == 0x190F58u) {
        ctx->pc = 0x190F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F54u;
        // 0x190f58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F5Cu;
        goto label_190f5c;
    }
    ctx->pc = 0x190F54u;
    {
        const bool branch_taken_0x190f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F54u;
        // 0x190f58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f54) {
            ctx->pc = 0x190F60u;
            goto label_190f60;
        }
    }
    ctx->pc = 0x190F5Cu;
label_190f5c:
    // 0x190f5c: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_190f60:
    // 0x190f60: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_190f64:
    // 0x190f64: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x190f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190f68:
    // 0x190f68: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x190f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190f6c:
    // 0x190f6c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x190f6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190f70:
    // 0x190f70: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x190f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190f74:
    // 0x190f74: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x190f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190f78:
    // 0x190f78: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x190f78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_190f7c:
    // 0x190f7c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x190f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190f80:
    // 0x190f80: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x190f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_190f84:
    // 0x190f84: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x190f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_190f88:
    // 0x190f88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190f88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190f8c:
    // 0x190f8c: 0x0  nop
    ctx->pc = 0x190f8cu;
    // NOP
label_190f90:
    // 0x190f90: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
label_190f94:
    if (ctx->pc == 0x190F94u) {
        ctx->pc = 0x190F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F90u;
        // 0x190f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F98u;
        goto label_190f98;
    }
    ctx->pc = 0x190F90u;
    {
        const bool branch_taken_0x190f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F90u;
        // 0x190f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f90) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190F98u;
label_190f98:
    // 0x190f98: 0x1000001b  b           . + 4 + (0x1B << 2)
label_190f9c:
    if (ctx->pc == 0x190F9Cu) {
        ctx->pc = 0x190F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F98u;
        // 0x190f9c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FA0u;
        goto label_190fa0;
    }
    ctx->pc = 0x190F98u;
    {
        const bool branch_taken_0x190f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F98u;
        // 0x190f9c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f98) {
            ctx->pc = 0x191008u;
            goto label_191008;
        }
    }
    ctx->pc = 0x190FA0u;
label_190fa0:
    // 0x190fa0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x190fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190fa4:
    // 0x190fa4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x190fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_190fa8:
    // 0x190fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190fac:
    // 0x190fac: 0x0  nop
    ctx->pc = 0x190facu;
    // NOP
label_190fb0:
    // 0x190fb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190fb4:
    // 0x190fb4: 0x0  nop
    ctx->pc = 0x190fb4u;
    // NOP
label_190fb8:
    // 0x190fb8: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_190fbc:
    if (ctx->pc == 0x190FBCu) {
        ctx->pc = 0x190FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FB8u;
        // 0x190fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FC0u;
        goto label_190fc0;
    }
    ctx->pc = 0x190FB8u;
    {
        const bool branch_taken_0x190fb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FB8u;
        // 0x190fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fb8) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x190FC0u;
label_190fc0:
    // 0x190fc0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_190fc4:
    // 0x190fc4: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x190fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_190fc8:
    // 0x190fc8: 0x10000010  b           . + 4 + (0x10 << 2)
label_190fcc:
    if (ctx->pc == 0x190FCCu) {
        ctx->pc = 0x190FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC8u;
        // 0x190fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FD0u;
        goto label_190fd0;
    }
    ctx->pc = 0x190FC8u;
    {
        const bool branch_taken_0x190fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC8u;
        // 0x190fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fc8) {
            ctx->pc = 0x19100Cu;
            goto label_19100c;
        }
    }
    ctx->pc = 0x190FD0u;
label_190fd0:
    // 0x190fd0: 0xc061a12  jal         func_186848
label_190fd4:
    if (ctx->pc == 0x190FD4u) {
        ctx->pc = 0x190FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FD0u;
        // 0x190fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FD8u;
        goto label_190fd8;
    }
    ctx->pc = 0x190FD0u;
    SET_GPR_U32(ctx, 31, 0x190FD8u);
    ctx->pc = 0x190FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190FD0u;
    // 0x190fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190FD0u, 0x190FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190FD8u;
label_190fd8:
    // 0x190fd8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_190fdc:
    // 0x190fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190fe0:
    // 0x190fe0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_190fe4:
    // 0x190fe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x190fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190fe8:
    // 0x190fe8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_190fec:
    // 0x190fec: 0x40f809  jalr        $v0
label_190ff0:
    if (ctx->pc == 0x190FF0u) {
        ctx->pc = 0x190FF4u;
        goto label_190ff4;
    }
    ctx->pc = 0x190FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190FF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190FECu, 0x190FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190FF4u;
label_190ff4:
    // 0x190ff4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_190ff8:
    if (ctx->pc == 0x190FF8u) {
        ctx->pc = 0x190FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FF4u;
        // 0x190ff8: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FFCu;
        goto label_190ffc;
    }
    ctx->pc = 0x190FF4u;
    {
        const bool branch_taken_0x190ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ff4) {
            ctx->pc = 0x190FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190FF4u;
            // 0x190ff8: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191020u;
            goto label_191020;
        }
    }
    ctx->pc = 0x190FFCu;
label_190ffc:
    // 0x190ffc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x190ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_191000:
    // 0x191000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191004:
    // 0x191004: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x191004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_191008:
    // 0x191008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x191008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19100c:
    // 0x19100c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_191010:
    // 0x191010: 0x40f809  jalr        $v0
label_191014:
    if (ctx->pc == 0x191014u) {
        ctx->pc = 0x191018u;
        goto label_191018;
    }
    ctx->pc = 0x191010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191010u, 0x191018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191018u;
label_191018:
    // 0x191018: 0x1000004c  b           . + 4 + (0x4C << 2)
label_19101c:
    if (ctx->pc == 0x19101Cu) {
        ctx->pc = 0x19101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191018u;
        // 0x19101c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191020u;
        goto label_191020;
    }
    ctx->pc = 0x191018u;
    {
        const bool branch_taken_0x191018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191018u;
        // 0x19101c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191018) {
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191020u;
label_191020:
    // 0x191020: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_191024:
    if (ctx->pc == 0x191024u) {
        ctx->pc = 0x191024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191020u;
        // 0x191024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191028u;
        goto label_191028;
    }
    ctx->pc = 0x191020u;
    {
        const bool branch_taken_0x191020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191020u;
        // 0x191024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191020) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x191028u;
label_191028:
    // 0x191028: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x191028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19102c:
    // 0x19102c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_191030:
    if (ctx->pc == 0x191030u) {
        ctx->pc = 0x191034u;
        goto label_191034;
    }
    ctx->pc = 0x19102Cu;
    {
        const bool branch_taken_0x19102c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19102c) {
            ctx->pc = 0x191048u;
            goto label_191048;
        }
    }
    ctx->pc = 0x191034u;
label_191034:
    // 0x191034: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_191038:
    // 0x191038: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_19103c:
    // 0x19103c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_191040:
    // 0x191040: 0x1000000a  b           . + 4 + (0xA << 2)
label_191044:
    if (ctx->pc == 0x191044u) {
        ctx->pc = 0x191044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191040u;
        // 0x191044: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191048u;
        goto label_191048;
    }
    ctx->pc = 0x191040u;
    {
        const bool branch_taken_0x191040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191040u;
        // 0x191044: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191040) {
            ctx->pc = 0x19106Cu;
            goto label_19106c;
        }
    }
    ctx->pc = 0x191048u;
label_191048:
    // 0x191048: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19104c:
    if (ctx->pc == 0x19104Cu) {
        ctx->pc = 0x19104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191048u;
        // 0x19104c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191050u;
        goto label_191050;
    }
    ctx->pc = 0x191048u;
    {
        const bool branch_taken_0x191048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191048u;
        // 0x19104c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191048) {
            ctx->pc = 0x191064u;
            goto label_191064;
        }
    }
    ctx->pc = 0x191050u;
label_191050:
    // 0x191050: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_191054:
    // 0x191054: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_191058:
    if (ctx->pc == 0x191058u) {
        ctx->pc = 0x191058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191054u;
        // 0x191058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19105Cu;
        goto label_19105c;
    }
    ctx->pc = 0x191054u;
    {
        const bool branch_taken_0x191054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191054u;
        // 0x191058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191054) {
            ctx->pc = 0x191064u;
            goto label_191064;
        }
    }
    ctx->pc = 0x19105Cu;
label_19105c:
    // 0x19105c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_191060:
    if (ctx->pc == 0x191060u) {
        ctx->pc = 0x191060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19105Cu;
        // 0x191060: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191064u;
        goto label_191064;
    }
    ctx->pc = 0x19105Cu;
    {
        const bool branch_taken_0x19105c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19105Cu;
        // 0x191060: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19105c) {
            ctx->pc = 0x19106Cu;
            goto label_19106c;
        }
    }
    ctx->pc = 0x191064u;
label_191064:
    // 0x191064: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x191064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191068:
    // 0x191068: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x191068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19106c:
    // 0x19106c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
label_191070:
    if (ctx->pc == 0x191070u) {
        ctx->pc = 0x191070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19106Cu;
        // 0x191070: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191074u;
        goto label_191074;
    }
    ctx->pc = 0x19106Cu;
    {
        const bool branch_taken_0x19106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19106c) {
            ctx->pc = 0x191070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19106Cu;
            // 0x191070: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191074u;
label_191074:
    // 0x191074: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x191074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_191078:
    // 0x191078: 0xc061a12  jal         func_186848
label_19107c:
    if (ctx->pc == 0x19107Cu) {
        ctx->pc = 0x19107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191078u;
        // 0x19107c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191080u;
        goto label_191080;
    }
    ctx->pc = 0x191078u;
    SET_GPR_U32(ctx, 31, 0x191080u);
    ctx->pc = 0x19107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191078u;
    // 0x19107c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191078u, 0x191080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191080u;
label_191080:
    // 0x191080: 0xc4400290  lwc1        $f0, 0x290($v0)
    ctx->pc = 0x191080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191084:
    // 0x191084: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x191084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191088:
    // 0x191088: 0x0  nop
    ctx->pc = 0x191088u;
    // NOP
label_19108c:
    // 0x19108c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_191090:
    if (ctx->pc == 0x191090u) {
        ctx->pc = 0x191090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19108Cu;
        // 0x191090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191094u;
        goto label_191094;
    }
    ctx->pc = 0x19108Cu;
    {
        const bool branch_taken_0x19108c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19108Cu;
        // 0x191090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19108c) {
            ctx->pc = 0x191098u;
            goto label_191098;
        }
    }
    ctx->pc = 0x191094u;
label_191094:
    // 0x191094: 0x24430270  addiu       $v1, $v0, 0x270
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
label_191098:
    // 0x191098: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x191098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19109c:
    // 0x19109c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x19109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1910a0:
    // 0x1910a0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1910a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1910a4:
    // 0x1910a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1910a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1910a8:
    // 0x1910a8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1910a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1910ac:
    // 0x1910ac: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1910acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1910b0:
    // 0x1910b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1910b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1910b4:
    // 0x1910b4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1910b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1910b8:
    // 0x1910b8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1910b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1910bc:
    // 0x1910bc: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x1910bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1910c0:
    // 0x1910c0: 0xc061a12  jal         func_186848
label_1910c4:
    if (ctx->pc == 0x1910C4u) {
        ctx->pc = 0x1910C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910C0u;
        // 0x1910c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910C8u;
        goto label_1910c8;
    }
    ctx->pc = 0x1910C0u;
    SET_GPR_U32(ctx, 31, 0x1910C8u);
    ctx->pc = 0x1910C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910C0u;
    // 0x1910c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1910C0u, 0x1910C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910C8u;
label_1910c8:
    // 0x1910c8: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1910c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1910cc:
    // 0x1910cc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1910ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910d0:
    // 0x1910d0: 0x0  nop
    ctx->pc = 0x1910d0u;
    // NOP
label_1910d4:
    // 0x1910d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1910d8:
    if (ctx->pc == 0x1910D8u) {
        ctx->pc = 0x1910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D4u;
        // 0x1910d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910DCu;
        goto label_1910dc;
    }
    ctx->pc = 0x1910D4u;
    {
        const bool branch_taken_0x1910d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D4u;
        // 0x1910d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910d4) {
            ctx->pc = 0x1910E0u;
            goto label_1910e0;
        }
    }
    ctx->pc = 0x1910DCu;
label_1910dc:
    // 0x1910dc: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1910e0:
    // 0x1910e0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1910e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1910e4:
    // 0x1910e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1910e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1910e8:
    // 0x1910e8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1910e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1910ec:
    // 0x1910ec: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1910ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1910f0:
    // 0x1910f0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1910f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1910f4:
    // 0x1910f4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1910f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1910f8:
    // 0x1910f8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1910f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1910fc:
    // 0x1910fc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1910fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191100:
    // 0x191100: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x191100u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_191104:
    // 0x191104: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_191108:
    // 0x191108: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x191108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_19110c:
    // 0x19110c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19110cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191110:
    // 0x191110: 0x0  nop
    ctx->pc = 0x191110u;
    // NOP
label_191114:
    // 0x191114: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x191114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191118:
    // 0x191118: 0x0  nop
    ctx->pc = 0x191118u;
    // NOP
label_19111c:
    // 0x19111c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_191120:
    if (ctx->pc == 0x191120u) {
        ctx->pc = 0x191120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19111Cu;
        // 0x191120: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191124u;
        goto label_191124;
    }
    ctx->pc = 0x19111Cu;
    {
        const bool branch_taken_0x19111c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19111c) {
            ctx->pc = 0x191120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19111Cu;
            // 0x191120: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191124u;
label_191124:
    // 0x191124: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191128:
    // 0x191128: 0x0  nop
    ctx->pc = 0x191128u;
    // NOP
label_19112c:
    // 0x19112c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191130:
    if (ctx->pc == 0x191130u) {
        ctx->pc = 0x191130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19112Cu;
        // 0x191130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191134u;
        goto label_191134;
    }
    ctx->pc = 0x19112Cu;
    {
        const bool branch_taken_0x19112c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19112Cu;
        // 0x191130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19112c) {
            ctx->pc = 0x191148u;
            goto label_191148;
        }
    }
    ctx->pc = 0x191134u;
label_191134:
    // 0x191134: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x191134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_191138:
    // 0x191138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19113c:
    // 0x19113c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_191140:
    // 0x191140: 0x40f809  jalr        $v0
label_191144:
    if (ctx->pc == 0x191144u) {
        ctx->pc = 0x191144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191140u;
        // 0x191144: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191148u;
        goto label_191148;
    }
    ctx->pc = 0x191140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191148u);
        ctx->pc = 0x191144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191140u;
        // 0x191144: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191140u, 0x191148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191148u;
label_191148:
    // 0x191148: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x191148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19114c:
    // 0x19114c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19114cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_191150:
    // 0x191150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x191150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_191154:
    // 0x191154: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x191154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_191158:
    // 0x191158: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x191158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19115c:
    // 0x19115c: 0x3e00008  jr          $ra
label_191160:
    if (ctx->pc == 0x191160u) {
        ctx->pc = 0x191160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19115Cu;
        // 0x191160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191164u;
        goto label_191164;
    }
    ctx->pc = 0x19115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19115Cu;
        // 0x191160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19115Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191164u;
label_191164:
    // 0x191164: 0x0  nop
    ctx->pc = 0x191164u;
    // NOP
    ctx->pc = 0x191168u;
}
