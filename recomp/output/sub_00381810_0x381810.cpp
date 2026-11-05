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

// Function: sub_00381810
// Address: 0x381810 - 0x3823c0
void sub_00381810_0x381810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381810_0x381810");
#endif

    switch (ctx->pc) {
        case 0x381810u: goto label_381810;
        case 0x381814u: goto label_381814;
        case 0x381818u: goto label_381818;
        case 0x38181cu: goto label_38181c;
        case 0x381820u: goto label_381820;
        case 0x381824u: goto label_381824;
        case 0x381828u: goto label_381828;
        case 0x38182cu: goto label_38182c;
        case 0x381830u: goto label_381830;
        case 0x381834u: goto label_381834;
        case 0x381838u: goto label_381838;
        case 0x38183cu: goto label_38183c;
        case 0x381840u: goto label_381840;
        case 0x381844u: goto label_381844;
        case 0x381848u: goto label_381848;
        case 0x38184cu: goto label_38184c;
        case 0x381850u: goto label_381850;
        case 0x381854u: goto label_381854;
        case 0x381858u: goto label_381858;
        case 0x38185cu: goto label_38185c;
        case 0x381860u: goto label_381860;
        case 0x381864u: goto label_381864;
        case 0x381868u: goto label_381868;
        case 0x38186cu: goto label_38186c;
        case 0x381870u: goto label_381870;
        case 0x381874u: goto label_381874;
        case 0x381878u: goto label_381878;
        case 0x38187cu: goto label_38187c;
        case 0x381880u: goto label_381880;
        case 0x381884u: goto label_381884;
        case 0x381888u: goto label_381888;
        case 0x38188cu: goto label_38188c;
        case 0x381890u: goto label_381890;
        case 0x381894u: goto label_381894;
        case 0x381898u: goto label_381898;
        case 0x38189cu: goto label_38189c;
        case 0x3818a0u: goto label_3818a0;
        case 0x3818a4u: goto label_3818a4;
        case 0x3818a8u: goto label_3818a8;
        case 0x3818acu: goto label_3818ac;
        case 0x3818b0u: goto label_3818b0;
        case 0x3818b4u: goto label_3818b4;
        case 0x3818b8u: goto label_3818b8;
        case 0x3818bcu: goto label_3818bc;
        case 0x3818c0u: goto label_3818c0;
        case 0x3818c4u: goto label_3818c4;
        case 0x3818c8u: goto label_3818c8;
        case 0x3818ccu: goto label_3818cc;
        case 0x3818d0u: goto label_3818d0;
        case 0x3818d4u: goto label_3818d4;
        case 0x3818d8u: goto label_3818d8;
        case 0x3818dcu: goto label_3818dc;
        case 0x3818e0u: goto label_3818e0;
        case 0x3818e4u: goto label_3818e4;
        case 0x3818e8u: goto label_3818e8;
        case 0x3818ecu: goto label_3818ec;
        case 0x3818f0u: goto label_3818f0;
        case 0x3818f4u: goto label_3818f4;
        case 0x3818f8u: goto label_3818f8;
        case 0x3818fcu: goto label_3818fc;
        case 0x381900u: goto label_381900;
        case 0x381904u: goto label_381904;
        case 0x381908u: goto label_381908;
        case 0x38190cu: goto label_38190c;
        case 0x381910u: goto label_381910;
        case 0x381914u: goto label_381914;
        case 0x381918u: goto label_381918;
        case 0x38191cu: goto label_38191c;
        case 0x381920u: goto label_381920;
        case 0x381924u: goto label_381924;
        case 0x381928u: goto label_381928;
        case 0x38192cu: goto label_38192c;
        case 0x381930u: goto label_381930;
        case 0x381934u: goto label_381934;
        case 0x381938u: goto label_381938;
        case 0x38193cu: goto label_38193c;
        case 0x381940u: goto label_381940;
        case 0x381944u: goto label_381944;
        case 0x381948u: goto label_381948;
        case 0x38194cu: goto label_38194c;
        case 0x381950u: goto label_381950;
        case 0x381954u: goto label_381954;
        case 0x381958u: goto label_381958;
        case 0x38195cu: goto label_38195c;
        case 0x381960u: goto label_381960;
        case 0x381964u: goto label_381964;
        case 0x381968u: goto label_381968;
        case 0x38196cu: goto label_38196c;
        case 0x381970u: goto label_381970;
        case 0x381974u: goto label_381974;
        case 0x381978u: goto label_381978;
        case 0x38197cu: goto label_38197c;
        case 0x381980u: goto label_381980;
        case 0x381984u: goto label_381984;
        case 0x381988u: goto label_381988;
        case 0x38198cu: goto label_38198c;
        case 0x381990u: goto label_381990;
        case 0x381994u: goto label_381994;
        case 0x381998u: goto label_381998;
        case 0x38199cu: goto label_38199c;
        case 0x3819a0u: goto label_3819a0;
        case 0x3819a4u: goto label_3819a4;
        case 0x3819a8u: goto label_3819a8;
        case 0x3819acu: goto label_3819ac;
        case 0x3819b0u: goto label_3819b0;
        case 0x3819b4u: goto label_3819b4;
        case 0x3819b8u: goto label_3819b8;
        case 0x3819bcu: goto label_3819bc;
        case 0x3819c0u: goto label_3819c0;
        case 0x3819c4u: goto label_3819c4;
        case 0x3819c8u: goto label_3819c8;
        case 0x3819ccu: goto label_3819cc;
        case 0x3819d0u: goto label_3819d0;
        case 0x3819d4u: goto label_3819d4;
        case 0x3819d8u: goto label_3819d8;
        case 0x3819dcu: goto label_3819dc;
        case 0x3819e0u: goto label_3819e0;
        case 0x3819e4u: goto label_3819e4;
        case 0x3819e8u: goto label_3819e8;
        case 0x3819ecu: goto label_3819ec;
        case 0x3819f0u: goto label_3819f0;
        case 0x3819f4u: goto label_3819f4;
        case 0x3819f8u: goto label_3819f8;
        case 0x3819fcu: goto label_3819fc;
        case 0x381a00u: goto label_381a00;
        case 0x381a04u: goto label_381a04;
        case 0x381a08u: goto label_381a08;
        case 0x381a0cu: goto label_381a0c;
        case 0x381a10u: goto label_381a10;
        case 0x381a14u: goto label_381a14;
        case 0x381a18u: goto label_381a18;
        case 0x381a1cu: goto label_381a1c;
        case 0x381a20u: goto label_381a20;
        case 0x381a24u: goto label_381a24;
        case 0x381a28u: goto label_381a28;
        case 0x381a2cu: goto label_381a2c;
        case 0x381a30u: goto label_381a30;
        case 0x381a34u: goto label_381a34;
        case 0x381a38u: goto label_381a38;
        case 0x381a3cu: goto label_381a3c;
        case 0x381a40u: goto label_381a40;
        case 0x381a44u: goto label_381a44;
        case 0x381a48u: goto label_381a48;
        case 0x381a4cu: goto label_381a4c;
        case 0x381a50u: goto label_381a50;
        case 0x381a54u: goto label_381a54;
        case 0x381a58u: goto label_381a58;
        case 0x381a5cu: goto label_381a5c;
        case 0x381a60u: goto label_381a60;
        case 0x381a64u: goto label_381a64;
        case 0x381a68u: goto label_381a68;
        case 0x381a6cu: goto label_381a6c;
        case 0x381a70u: goto label_381a70;
        case 0x381a74u: goto label_381a74;
        case 0x381a78u: goto label_381a78;
        case 0x381a7cu: goto label_381a7c;
        case 0x381a80u: goto label_381a80;
        case 0x381a84u: goto label_381a84;
        case 0x381a88u: goto label_381a88;
        case 0x381a8cu: goto label_381a8c;
        case 0x381a90u: goto label_381a90;
        case 0x381a94u: goto label_381a94;
        case 0x381a98u: goto label_381a98;
        case 0x381a9cu: goto label_381a9c;
        case 0x381aa0u: goto label_381aa0;
        case 0x381aa4u: goto label_381aa4;
        case 0x381aa8u: goto label_381aa8;
        case 0x381aacu: goto label_381aac;
        case 0x381ab0u: goto label_381ab0;
        case 0x381ab4u: goto label_381ab4;
        case 0x381ab8u: goto label_381ab8;
        case 0x381abcu: goto label_381abc;
        case 0x381ac0u: goto label_381ac0;
        case 0x381ac4u: goto label_381ac4;
        case 0x381ac8u: goto label_381ac8;
        case 0x381accu: goto label_381acc;
        case 0x381ad0u: goto label_381ad0;
        case 0x381ad4u: goto label_381ad4;
        case 0x381ad8u: goto label_381ad8;
        case 0x381adcu: goto label_381adc;
        case 0x381ae0u: goto label_381ae0;
        case 0x381ae4u: goto label_381ae4;
        case 0x381ae8u: goto label_381ae8;
        case 0x381aecu: goto label_381aec;
        case 0x381af0u: goto label_381af0;
        case 0x381af4u: goto label_381af4;
        case 0x381af8u: goto label_381af8;
        case 0x381afcu: goto label_381afc;
        case 0x381b00u: goto label_381b00;
        case 0x381b04u: goto label_381b04;
        case 0x381b08u: goto label_381b08;
        case 0x381b0cu: goto label_381b0c;
        case 0x381b10u: goto label_381b10;
        case 0x381b14u: goto label_381b14;
        case 0x381b18u: goto label_381b18;
        case 0x381b1cu: goto label_381b1c;
        case 0x381b20u: goto label_381b20;
        case 0x381b24u: goto label_381b24;
        case 0x381b28u: goto label_381b28;
        case 0x381b2cu: goto label_381b2c;
        case 0x381b30u: goto label_381b30;
        case 0x381b34u: goto label_381b34;
        case 0x381b38u: goto label_381b38;
        case 0x381b3cu: goto label_381b3c;
        case 0x381b40u: goto label_381b40;
        case 0x381b44u: goto label_381b44;
        case 0x381b48u: goto label_381b48;
        case 0x381b4cu: goto label_381b4c;
        case 0x381b50u: goto label_381b50;
        case 0x381b54u: goto label_381b54;
        case 0x381b58u: goto label_381b58;
        case 0x381b5cu: goto label_381b5c;
        case 0x381b60u: goto label_381b60;
        case 0x381b64u: goto label_381b64;
        case 0x381b68u: goto label_381b68;
        case 0x381b6cu: goto label_381b6c;
        case 0x381b70u: goto label_381b70;
        case 0x381b74u: goto label_381b74;
        case 0x381b78u: goto label_381b78;
        case 0x381b7cu: goto label_381b7c;
        case 0x381b80u: goto label_381b80;
        case 0x381b84u: goto label_381b84;
        case 0x381b88u: goto label_381b88;
        case 0x381b8cu: goto label_381b8c;
        case 0x381b90u: goto label_381b90;
        case 0x381b94u: goto label_381b94;
        case 0x381b98u: goto label_381b98;
        case 0x381b9cu: goto label_381b9c;
        case 0x381ba0u: goto label_381ba0;
        case 0x381ba4u: goto label_381ba4;
        case 0x381ba8u: goto label_381ba8;
        case 0x381bacu: goto label_381bac;
        case 0x381bb0u: goto label_381bb0;
        case 0x381bb4u: goto label_381bb4;
        case 0x381bb8u: goto label_381bb8;
        case 0x381bbcu: goto label_381bbc;
        case 0x381bc0u: goto label_381bc0;
        case 0x381bc4u: goto label_381bc4;
        case 0x381bc8u: goto label_381bc8;
        case 0x381bccu: goto label_381bcc;
        case 0x381bd0u: goto label_381bd0;
        case 0x381bd4u: goto label_381bd4;
        case 0x381bd8u: goto label_381bd8;
        case 0x381bdcu: goto label_381bdc;
        case 0x381be0u: goto label_381be0;
        case 0x381be4u: goto label_381be4;
        case 0x381be8u: goto label_381be8;
        case 0x381becu: goto label_381bec;
        case 0x381bf0u: goto label_381bf0;
        case 0x381bf4u: goto label_381bf4;
        case 0x381bf8u: goto label_381bf8;
        case 0x381bfcu: goto label_381bfc;
        case 0x381c00u: goto label_381c00;
        case 0x381c04u: goto label_381c04;
        case 0x381c08u: goto label_381c08;
        case 0x381c0cu: goto label_381c0c;
        case 0x381c10u: goto label_381c10;
        case 0x381c14u: goto label_381c14;
        case 0x381c18u: goto label_381c18;
        case 0x381c1cu: goto label_381c1c;
        case 0x381c20u: goto label_381c20;
        case 0x381c24u: goto label_381c24;
        case 0x381c28u: goto label_381c28;
        case 0x381c2cu: goto label_381c2c;
        case 0x381c30u: goto label_381c30;
        case 0x381c34u: goto label_381c34;
        case 0x381c38u: goto label_381c38;
        case 0x381c3cu: goto label_381c3c;
        case 0x381c40u: goto label_381c40;
        case 0x381c44u: goto label_381c44;
        case 0x381c48u: goto label_381c48;
        case 0x381c4cu: goto label_381c4c;
        case 0x381c50u: goto label_381c50;
        case 0x381c54u: goto label_381c54;
        case 0x381c58u: goto label_381c58;
        case 0x381c5cu: goto label_381c5c;
        case 0x381c60u: goto label_381c60;
        case 0x381c64u: goto label_381c64;
        case 0x381c68u: goto label_381c68;
        case 0x381c6cu: goto label_381c6c;
        case 0x381c70u: goto label_381c70;
        case 0x381c74u: goto label_381c74;
        case 0x381c78u: goto label_381c78;
        case 0x381c7cu: goto label_381c7c;
        case 0x381c80u: goto label_381c80;
        case 0x381c84u: goto label_381c84;
        case 0x381c88u: goto label_381c88;
        case 0x381c8cu: goto label_381c8c;
        case 0x381c90u: goto label_381c90;
        case 0x381c94u: goto label_381c94;
        case 0x381c98u: goto label_381c98;
        case 0x381c9cu: goto label_381c9c;
        case 0x381ca0u: goto label_381ca0;
        case 0x381ca4u: goto label_381ca4;
        case 0x381ca8u: goto label_381ca8;
        case 0x381cacu: goto label_381cac;
        case 0x381cb0u: goto label_381cb0;
        case 0x381cb4u: goto label_381cb4;
        case 0x381cb8u: goto label_381cb8;
        case 0x381cbcu: goto label_381cbc;
        case 0x381cc0u: goto label_381cc0;
        case 0x381cc4u: goto label_381cc4;
        case 0x381cc8u: goto label_381cc8;
        case 0x381cccu: goto label_381ccc;
        case 0x381cd0u: goto label_381cd0;
        case 0x381cd4u: goto label_381cd4;
        case 0x381cd8u: goto label_381cd8;
        case 0x381cdcu: goto label_381cdc;
        case 0x381ce0u: goto label_381ce0;
        case 0x381ce4u: goto label_381ce4;
        case 0x381ce8u: goto label_381ce8;
        case 0x381cecu: goto label_381cec;
        case 0x381cf0u: goto label_381cf0;
        case 0x381cf4u: goto label_381cf4;
        case 0x381cf8u: goto label_381cf8;
        case 0x381cfcu: goto label_381cfc;
        case 0x381d00u: goto label_381d00;
        case 0x381d04u: goto label_381d04;
        case 0x381d08u: goto label_381d08;
        case 0x381d0cu: goto label_381d0c;
        case 0x381d10u: goto label_381d10;
        case 0x381d14u: goto label_381d14;
        case 0x381d18u: goto label_381d18;
        case 0x381d1cu: goto label_381d1c;
        case 0x381d20u: goto label_381d20;
        case 0x381d24u: goto label_381d24;
        case 0x381d28u: goto label_381d28;
        case 0x381d2cu: goto label_381d2c;
        case 0x381d30u: goto label_381d30;
        case 0x381d34u: goto label_381d34;
        case 0x381d38u: goto label_381d38;
        case 0x381d3cu: goto label_381d3c;
        case 0x381d40u: goto label_381d40;
        case 0x381d44u: goto label_381d44;
        case 0x381d48u: goto label_381d48;
        case 0x381d4cu: goto label_381d4c;
        case 0x381d50u: goto label_381d50;
        case 0x381d54u: goto label_381d54;
        case 0x381d58u: goto label_381d58;
        case 0x381d5cu: goto label_381d5c;
        case 0x381d60u: goto label_381d60;
        case 0x381d64u: goto label_381d64;
        case 0x381d68u: goto label_381d68;
        case 0x381d6cu: goto label_381d6c;
        case 0x381d70u: goto label_381d70;
        case 0x381d74u: goto label_381d74;
        case 0x381d78u: goto label_381d78;
        case 0x381d7cu: goto label_381d7c;
        case 0x381d80u: goto label_381d80;
        case 0x381d84u: goto label_381d84;
        case 0x381d88u: goto label_381d88;
        case 0x381d8cu: goto label_381d8c;
        case 0x381d90u: goto label_381d90;
        case 0x381d94u: goto label_381d94;
        case 0x381d98u: goto label_381d98;
        case 0x381d9cu: goto label_381d9c;
        case 0x381da0u: goto label_381da0;
        case 0x381da4u: goto label_381da4;
        case 0x381da8u: goto label_381da8;
        case 0x381dacu: goto label_381dac;
        case 0x381db0u: goto label_381db0;
        case 0x381db4u: goto label_381db4;
        case 0x381db8u: goto label_381db8;
        case 0x381dbcu: goto label_381dbc;
        case 0x381dc0u: goto label_381dc0;
        case 0x381dc4u: goto label_381dc4;
        case 0x381dc8u: goto label_381dc8;
        case 0x381dccu: goto label_381dcc;
        case 0x381dd0u: goto label_381dd0;
        case 0x381dd4u: goto label_381dd4;
        case 0x381dd8u: goto label_381dd8;
        case 0x381ddcu: goto label_381ddc;
        case 0x381de0u: goto label_381de0;
        case 0x381de4u: goto label_381de4;
        case 0x381de8u: goto label_381de8;
        case 0x381decu: goto label_381dec;
        case 0x381df0u: goto label_381df0;
        case 0x381df4u: goto label_381df4;
        case 0x381df8u: goto label_381df8;
        case 0x381dfcu: goto label_381dfc;
        case 0x381e00u: goto label_381e00;
        case 0x381e04u: goto label_381e04;
        case 0x381e08u: goto label_381e08;
        case 0x381e0cu: goto label_381e0c;
        case 0x381e10u: goto label_381e10;
        case 0x381e14u: goto label_381e14;
        case 0x381e18u: goto label_381e18;
        case 0x381e1cu: goto label_381e1c;
        case 0x381e20u: goto label_381e20;
        case 0x381e24u: goto label_381e24;
        case 0x381e28u: goto label_381e28;
        case 0x381e2cu: goto label_381e2c;
        case 0x381e30u: goto label_381e30;
        case 0x381e34u: goto label_381e34;
        case 0x381e38u: goto label_381e38;
        case 0x381e3cu: goto label_381e3c;
        case 0x381e40u: goto label_381e40;
        case 0x381e44u: goto label_381e44;
        case 0x381e48u: goto label_381e48;
        case 0x381e4cu: goto label_381e4c;
        case 0x381e50u: goto label_381e50;
        case 0x381e54u: goto label_381e54;
        case 0x381e58u: goto label_381e58;
        case 0x381e5cu: goto label_381e5c;
        case 0x381e60u: goto label_381e60;
        case 0x381e64u: goto label_381e64;
        case 0x381e68u: goto label_381e68;
        case 0x381e6cu: goto label_381e6c;
        case 0x381e70u: goto label_381e70;
        case 0x381e74u: goto label_381e74;
        case 0x381e78u: goto label_381e78;
        case 0x381e7cu: goto label_381e7c;
        case 0x381e80u: goto label_381e80;
        case 0x381e84u: goto label_381e84;
        case 0x381e88u: goto label_381e88;
        case 0x381e8cu: goto label_381e8c;
        case 0x381e90u: goto label_381e90;
        case 0x381e94u: goto label_381e94;
        case 0x381e98u: goto label_381e98;
        case 0x381e9cu: goto label_381e9c;
        case 0x381ea0u: goto label_381ea0;
        case 0x381ea4u: goto label_381ea4;
        case 0x381ea8u: goto label_381ea8;
        case 0x381eacu: goto label_381eac;
        case 0x381eb0u: goto label_381eb0;
        case 0x381eb4u: goto label_381eb4;
        case 0x381eb8u: goto label_381eb8;
        case 0x381ebcu: goto label_381ebc;
        case 0x381ec0u: goto label_381ec0;
        case 0x381ec4u: goto label_381ec4;
        case 0x381ec8u: goto label_381ec8;
        case 0x381eccu: goto label_381ecc;
        case 0x381ed0u: goto label_381ed0;
        case 0x381ed4u: goto label_381ed4;
        case 0x381ed8u: goto label_381ed8;
        case 0x381edcu: goto label_381edc;
        case 0x381ee0u: goto label_381ee0;
        case 0x381ee4u: goto label_381ee4;
        case 0x381ee8u: goto label_381ee8;
        case 0x381eecu: goto label_381eec;
        case 0x381ef0u: goto label_381ef0;
        case 0x381ef4u: goto label_381ef4;
        case 0x381ef8u: goto label_381ef8;
        case 0x381efcu: goto label_381efc;
        case 0x381f00u: goto label_381f00;
        case 0x381f04u: goto label_381f04;
        case 0x381f08u: goto label_381f08;
        case 0x381f0cu: goto label_381f0c;
        case 0x381f10u: goto label_381f10;
        case 0x381f14u: goto label_381f14;
        case 0x381f18u: goto label_381f18;
        case 0x381f1cu: goto label_381f1c;
        case 0x381f20u: goto label_381f20;
        case 0x381f24u: goto label_381f24;
        case 0x381f28u: goto label_381f28;
        case 0x381f2cu: goto label_381f2c;
        case 0x381f30u: goto label_381f30;
        case 0x381f34u: goto label_381f34;
        case 0x381f38u: goto label_381f38;
        case 0x381f3cu: goto label_381f3c;
        case 0x381f40u: goto label_381f40;
        case 0x381f44u: goto label_381f44;
        case 0x381f48u: goto label_381f48;
        case 0x381f4cu: goto label_381f4c;
        case 0x381f50u: goto label_381f50;
        case 0x381f54u: goto label_381f54;
        case 0x381f58u: goto label_381f58;
        case 0x381f5cu: goto label_381f5c;
        case 0x381f60u: goto label_381f60;
        case 0x381f64u: goto label_381f64;
        case 0x381f68u: goto label_381f68;
        case 0x381f6cu: goto label_381f6c;
        case 0x381f70u: goto label_381f70;
        case 0x381f74u: goto label_381f74;
        case 0x381f78u: goto label_381f78;
        case 0x381f7cu: goto label_381f7c;
        case 0x381f80u: goto label_381f80;
        case 0x381f84u: goto label_381f84;
        case 0x381f88u: goto label_381f88;
        case 0x381f8cu: goto label_381f8c;
        case 0x381f90u: goto label_381f90;
        case 0x381f94u: goto label_381f94;
        case 0x381f98u: goto label_381f98;
        case 0x381f9cu: goto label_381f9c;
        case 0x381fa0u: goto label_381fa0;
        case 0x381fa4u: goto label_381fa4;
        case 0x381fa8u: goto label_381fa8;
        case 0x381facu: goto label_381fac;
        case 0x381fb0u: goto label_381fb0;
        case 0x381fb4u: goto label_381fb4;
        case 0x381fb8u: goto label_381fb8;
        case 0x381fbcu: goto label_381fbc;
        case 0x381fc0u: goto label_381fc0;
        case 0x381fc4u: goto label_381fc4;
        case 0x381fc8u: goto label_381fc8;
        case 0x381fccu: goto label_381fcc;
        case 0x381fd0u: goto label_381fd0;
        case 0x381fd4u: goto label_381fd4;
        case 0x381fd8u: goto label_381fd8;
        case 0x381fdcu: goto label_381fdc;
        case 0x381fe0u: goto label_381fe0;
        case 0x381fe4u: goto label_381fe4;
        case 0x381fe8u: goto label_381fe8;
        case 0x381fecu: goto label_381fec;
        case 0x381ff0u: goto label_381ff0;
        case 0x381ff4u: goto label_381ff4;
        case 0x381ff8u: goto label_381ff8;
        case 0x381ffcu: goto label_381ffc;
        case 0x382000u: goto label_382000;
        case 0x382004u: goto label_382004;
        case 0x382008u: goto label_382008;
        case 0x38200cu: goto label_38200c;
        case 0x382010u: goto label_382010;
        case 0x382014u: goto label_382014;
        case 0x382018u: goto label_382018;
        case 0x38201cu: goto label_38201c;
        case 0x382020u: goto label_382020;
        case 0x382024u: goto label_382024;
        case 0x382028u: goto label_382028;
        case 0x38202cu: goto label_38202c;
        case 0x382030u: goto label_382030;
        case 0x382034u: goto label_382034;
        case 0x382038u: goto label_382038;
        case 0x38203cu: goto label_38203c;
        case 0x382040u: goto label_382040;
        case 0x382044u: goto label_382044;
        case 0x382048u: goto label_382048;
        case 0x38204cu: goto label_38204c;
        case 0x382050u: goto label_382050;
        case 0x382054u: goto label_382054;
        case 0x382058u: goto label_382058;
        case 0x38205cu: goto label_38205c;
        case 0x382060u: goto label_382060;
        case 0x382064u: goto label_382064;
        case 0x382068u: goto label_382068;
        case 0x38206cu: goto label_38206c;
        case 0x382070u: goto label_382070;
        case 0x382074u: goto label_382074;
        case 0x382078u: goto label_382078;
        case 0x38207cu: goto label_38207c;
        case 0x382080u: goto label_382080;
        case 0x382084u: goto label_382084;
        case 0x382088u: goto label_382088;
        case 0x38208cu: goto label_38208c;
        case 0x382090u: goto label_382090;
        case 0x382094u: goto label_382094;
        case 0x382098u: goto label_382098;
        case 0x38209cu: goto label_38209c;
        case 0x3820a0u: goto label_3820a0;
        case 0x3820a4u: goto label_3820a4;
        case 0x3820a8u: goto label_3820a8;
        case 0x3820acu: goto label_3820ac;
        case 0x3820b0u: goto label_3820b0;
        case 0x3820b4u: goto label_3820b4;
        case 0x3820b8u: goto label_3820b8;
        case 0x3820bcu: goto label_3820bc;
        case 0x3820c0u: goto label_3820c0;
        case 0x3820c4u: goto label_3820c4;
        case 0x3820c8u: goto label_3820c8;
        case 0x3820ccu: goto label_3820cc;
        case 0x3820d0u: goto label_3820d0;
        case 0x3820d4u: goto label_3820d4;
        case 0x3820d8u: goto label_3820d8;
        case 0x3820dcu: goto label_3820dc;
        case 0x3820e0u: goto label_3820e0;
        case 0x3820e4u: goto label_3820e4;
        case 0x3820e8u: goto label_3820e8;
        case 0x3820ecu: goto label_3820ec;
        case 0x3820f0u: goto label_3820f0;
        case 0x3820f4u: goto label_3820f4;
        case 0x3820f8u: goto label_3820f8;
        case 0x3820fcu: goto label_3820fc;
        case 0x382100u: goto label_382100;
        case 0x382104u: goto label_382104;
        case 0x382108u: goto label_382108;
        case 0x38210cu: goto label_38210c;
        case 0x382110u: goto label_382110;
        case 0x382114u: goto label_382114;
        case 0x382118u: goto label_382118;
        case 0x38211cu: goto label_38211c;
        case 0x382120u: goto label_382120;
        case 0x382124u: goto label_382124;
        case 0x382128u: goto label_382128;
        case 0x38212cu: goto label_38212c;
        case 0x382130u: goto label_382130;
        case 0x382134u: goto label_382134;
        case 0x382138u: goto label_382138;
        case 0x38213cu: goto label_38213c;
        case 0x382140u: goto label_382140;
        case 0x382144u: goto label_382144;
        case 0x382148u: goto label_382148;
        case 0x38214cu: goto label_38214c;
        case 0x382150u: goto label_382150;
        case 0x382154u: goto label_382154;
        case 0x382158u: goto label_382158;
        case 0x38215cu: goto label_38215c;
        case 0x382160u: goto label_382160;
        case 0x382164u: goto label_382164;
        case 0x382168u: goto label_382168;
        case 0x38216cu: goto label_38216c;
        case 0x382170u: goto label_382170;
        case 0x382174u: goto label_382174;
        case 0x382178u: goto label_382178;
        case 0x38217cu: goto label_38217c;
        case 0x382180u: goto label_382180;
        case 0x382184u: goto label_382184;
        case 0x382188u: goto label_382188;
        case 0x38218cu: goto label_38218c;
        case 0x382190u: goto label_382190;
        case 0x382194u: goto label_382194;
        case 0x382198u: goto label_382198;
        case 0x38219cu: goto label_38219c;
        case 0x3821a0u: goto label_3821a0;
        case 0x3821a4u: goto label_3821a4;
        case 0x3821a8u: goto label_3821a8;
        case 0x3821acu: goto label_3821ac;
        case 0x3821b0u: goto label_3821b0;
        case 0x3821b4u: goto label_3821b4;
        case 0x3821b8u: goto label_3821b8;
        case 0x3821bcu: goto label_3821bc;
        case 0x3821c0u: goto label_3821c0;
        case 0x3821c4u: goto label_3821c4;
        case 0x3821c8u: goto label_3821c8;
        case 0x3821ccu: goto label_3821cc;
        case 0x3821d0u: goto label_3821d0;
        case 0x3821d4u: goto label_3821d4;
        case 0x3821d8u: goto label_3821d8;
        case 0x3821dcu: goto label_3821dc;
        case 0x3821e0u: goto label_3821e0;
        case 0x3821e4u: goto label_3821e4;
        case 0x3821e8u: goto label_3821e8;
        case 0x3821ecu: goto label_3821ec;
        case 0x3821f0u: goto label_3821f0;
        case 0x3821f4u: goto label_3821f4;
        case 0x3821f8u: goto label_3821f8;
        case 0x3821fcu: goto label_3821fc;
        case 0x382200u: goto label_382200;
        case 0x382204u: goto label_382204;
        case 0x382208u: goto label_382208;
        case 0x38220cu: goto label_38220c;
        case 0x382210u: goto label_382210;
        case 0x382214u: goto label_382214;
        case 0x382218u: goto label_382218;
        case 0x38221cu: goto label_38221c;
        case 0x382220u: goto label_382220;
        case 0x382224u: goto label_382224;
        case 0x382228u: goto label_382228;
        case 0x38222cu: goto label_38222c;
        case 0x382230u: goto label_382230;
        case 0x382234u: goto label_382234;
        case 0x382238u: goto label_382238;
        case 0x38223cu: goto label_38223c;
        case 0x382240u: goto label_382240;
        case 0x382244u: goto label_382244;
        case 0x382248u: goto label_382248;
        case 0x38224cu: goto label_38224c;
        case 0x382250u: goto label_382250;
        case 0x382254u: goto label_382254;
        case 0x382258u: goto label_382258;
        case 0x38225cu: goto label_38225c;
        case 0x382260u: goto label_382260;
        case 0x382264u: goto label_382264;
        case 0x382268u: goto label_382268;
        case 0x38226cu: goto label_38226c;
        case 0x382270u: goto label_382270;
        case 0x382274u: goto label_382274;
        case 0x382278u: goto label_382278;
        case 0x38227cu: goto label_38227c;
        case 0x382280u: goto label_382280;
        case 0x382284u: goto label_382284;
        case 0x382288u: goto label_382288;
        case 0x38228cu: goto label_38228c;
        case 0x382290u: goto label_382290;
        case 0x382294u: goto label_382294;
        case 0x382298u: goto label_382298;
        case 0x38229cu: goto label_38229c;
        case 0x3822a0u: goto label_3822a0;
        case 0x3822a4u: goto label_3822a4;
        case 0x3822a8u: goto label_3822a8;
        case 0x3822acu: goto label_3822ac;
        case 0x3822b0u: goto label_3822b0;
        case 0x3822b4u: goto label_3822b4;
        case 0x3822b8u: goto label_3822b8;
        case 0x3822bcu: goto label_3822bc;
        case 0x3822c0u: goto label_3822c0;
        case 0x3822c4u: goto label_3822c4;
        case 0x3822c8u: goto label_3822c8;
        case 0x3822ccu: goto label_3822cc;
        case 0x3822d0u: goto label_3822d0;
        case 0x3822d4u: goto label_3822d4;
        case 0x3822d8u: goto label_3822d8;
        case 0x3822dcu: goto label_3822dc;
        case 0x3822e0u: goto label_3822e0;
        case 0x3822e4u: goto label_3822e4;
        case 0x3822e8u: goto label_3822e8;
        case 0x3822ecu: goto label_3822ec;
        case 0x3822f0u: goto label_3822f0;
        case 0x3822f4u: goto label_3822f4;
        case 0x3822f8u: goto label_3822f8;
        case 0x3822fcu: goto label_3822fc;
        case 0x382300u: goto label_382300;
        case 0x382304u: goto label_382304;
        case 0x382308u: goto label_382308;
        case 0x38230cu: goto label_38230c;
        case 0x382310u: goto label_382310;
        case 0x382314u: goto label_382314;
        case 0x382318u: goto label_382318;
        case 0x38231cu: goto label_38231c;
        case 0x382320u: goto label_382320;
        case 0x382324u: goto label_382324;
        case 0x382328u: goto label_382328;
        case 0x38232cu: goto label_38232c;
        case 0x382330u: goto label_382330;
        case 0x382334u: goto label_382334;
        case 0x382338u: goto label_382338;
        case 0x38233cu: goto label_38233c;
        case 0x382340u: goto label_382340;
        case 0x382344u: goto label_382344;
        case 0x382348u: goto label_382348;
        case 0x38234cu: goto label_38234c;
        case 0x382350u: goto label_382350;
        case 0x382354u: goto label_382354;
        case 0x382358u: goto label_382358;
        case 0x38235cu: goto label_38235c;
        case 0x382360u: goto label_382360;
        case 0x382364u: goto label_382364;
        case 0x382368u: goto label_382368;
        case 0x38236cu: goto label_38236c;
        case 0x382370u: goto label_382370;
        case 0x382374u: goto label_382374;
        case 0x382378u: goto label_382378;
        case 0x38237cu: goto label_38237c;
        case 0x382380u: goto label_382380;
        case 0x382384u: goto label_382384;
        case 0x382388u: goto label_382388;
        case 0x38238cu: goto label_38238c;
        case 0x382390u: goto label_382390;
        case 0x382394u: goto label_382394;
        case 0x382398u: goto label_382398;
        case 0x38239cu: goto label_38239c;
        case 0x3823a0u: goto label_3823a0;
        case 0x3823a4u: goto label_3823a4;
        case 0x3823a8u: goto label_3823a8;
        case 0x3823acu: goto label_3823ac;
        case 0x3823b0u: goto label_3823b0;
        case 0x3823b4u: goto label_3823b4;
        case 0x3823b8u: goto label_3823b8;
        case 0x3823bcu: goto label_3823bc;
        default: break;
    }

    ctx->pc = 0x381810u;

label_381810:
    // 0x381810: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x381810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_381814:
    // 0x381814: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x381814u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_381818:
    // 0x381818: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x381818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_38181c:
    // 0x38181c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x38181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_381820:
    // 0x381820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x381820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381824:
    // 0x381824: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x381824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_381828:
    // 0x381828: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x381828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38182c:
    // 0x38182c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x38182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_381830:
    // 0x381830: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x381830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_381834:
    // 0x381834: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x381834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_381838:
    // 0x381838: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x381838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38183c:
    // 0x38183c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x38183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_381840:
    // 0x381840: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x381840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_381844:
    // 0x381844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x381844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_381848:
    // 0x381848: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x381848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_38184c:
    // 0x38184c: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x38184cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_381850:
    // 0x381850: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x381850u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_381854:
    // 0x381854: 0x8e560004  lw          $s6, 0x4($s2)
    ctx->pc = 0x381854u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_381858:
    // 0x381858: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x381858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38185c:
    // 0x38185c: 0xde340020  ld          $s4, 0x20($s1)
    ctx->pc = 0x38185cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_381860:
    // 0x381860: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_381864:
    if (ctx->pc == 0x381864u) {
        ctx->pc = 0x381864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381860u;
        // 0x381864: 0x8e33001c  lw          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381868u;
        goto label_381868;
    }
    ctx->pc = 0x381860u;
    {
        const bool branch_taken_0x381860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381860u;
        // 0x381864: 0x8e33001c  lw          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381860) {
            ctx->pc = 0x381874u;
            goto label_381874;
        }
    }
    ctx->pc = 0x381868u;
label_381868:
    // 0x381868: 0x7e1023  subu        $v0, $v1, $fp
    ctx->pc = 0x381868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_38186c:
    // 0x38186c: 0x10000004  b           . + 4 + (0x4 << 2)
label_381870:
    if (ctx->pc == 0x381870u) {
        ctx->pc = 0x381870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38186Cu;
        // 0x381870: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381874u;
        goto label_381874;
    }
    ctx->pc = 0x38186Cu;
    {
        const bool branch_taken_0x38186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38186Cu;
        // 0x381870: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38186c) {
            ctx->pc = 0x381880u;
            goto label_381880;
        }
    }
    ctx->pc = 0x381874u;
label_381874:
    // 0x381874: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x381874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_381878:
    // 0x381878: 0x5eb823  subu        $s7, $v0, $fp
    ctx->pc = 0x381878u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_38187c:
    // 0x38187c: 0x0  nop
    ctx->pc = 0x38187cu;
    // NOP
label_381880:
    // 0x381880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x381880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_381884:
    // 0x381884: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x381884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_381888:
    // 0x381888: 0x104002b1  beqz        $v0, . + 4 + (0x2B1 << 2)
label_38188c:
    if (ctx->pc == 0x38188Cu) {
        ctx->pc = 0x38188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381888u;
        // 0x38188c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381890u;
        goto label_381890;
    }
    ctx->pc = 0x381888u;
    {
        const bool branch_taken_0x381888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381888u;
        // 0x38188c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381888) {
            ctx->pc = 0x382350u;
            goto label_382350;
        }
    }
    ctx->pc = 0x381890u;
label_381890:
    // 0x381890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x381890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_381894:
    // 0x381894: 0x24428450  addiu       $v0, $v0, -0x7BB0
    ctx->pc = 0x381894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935632));
label_381898:
    // 0x381898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38189c:
    // 0x38189c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3818a0:
    // 0x3818a0: 0x800008  jr          $a0
label_3818a4:
    if (ctx->pc == 0x3818A4u) {
        ctx->pc = 0x3818A8u;
        goto label_3818a8;
    }
    ctx->pc = 0x3818A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3818C8u: goto label_3818c8;
            case 0x381A08u: goto label_381a08;
            case 0x381A8Cu: goto label_381a8c;
            case 0x381C10u: goto label_381c10;
            case 0x381CD0u: goto label_381cd0;
            case 0x381E44u: goto label_381e44;
            case 0x382164u: goto label_382164;
            case 0x38221Cu: goto label_38221c;
            case 0x382270u: goto label_382270;
            case 0x38228Cu: goto label_38228c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3818A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3818A8u;
label_3818a8:
    // 0x3818a8: 0x12c0027f  beqz        $s6, . + 4 + (0x27F << 2)
label_3818ac:
    if (ctx->pc == 0x3818ACu) {
        ctx->pc = 0x3818ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818A8u;
        // 0x3818ac: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3818B0u;
        goto label_3818b0;
    }
    ctx->pc = 0x3818A8u;
    {
        const bool branch_taken_0x3818a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3818ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818A8u;
        // 0x3818ac: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818a8) {
            ctx->pc = 0x3822A8u;
            goto label_3822a8;
        }
    }
    ctx->pc = 0x3818B0u;
label_3818b0:
    // 0x3818b0: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x3818b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3818b4:
    // 0x3818b4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3818b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3818b8:
    // 0x3818b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3818b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3818bc:
    // 0x3818bc: 0x2631814  dsllv       $v1, $v1, $s3
    ctx->pc = 0x3818bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 19) & 0x3F));
label_3818c0:
    // 0x3818c0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3818c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3818c4:
    // 0x3818c4: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x3818c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_3818c8:
    // 0x3818c8: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x3818c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3818cc:
    // 0x3818cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3818d0:
    if (ctx->pc == 0x3818D0u) {
        ctx->pc = 0x3818D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818CCu;
        // 0x3818d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3818D4u;
        goto label_3818d4;
    }
    ctx->pc = 0x3818CCu;
    {
        const bool branch_taken_0x3818cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3818D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818CCu;
        // 0x3818d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818cc) {
            ctx->pc = 0x3818A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3818a8;
        }
    }
    ctx->pc = 0x3818D4u;
label_3818d4:
    // 0x3818d4: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x3818d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_3818d8:
    // 0x3818d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3818d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3818dc:
    // 0x3818dc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3818dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3818e0:
    // 0x3818e0: 0x30500007  andi        $s0, $v0, 0x7
    ctx->pc = 0x3818e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3818e4:
    // 0x3818e4: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x3818e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_3818e8:
    // 0x3818e8: 0x10850010  beq         $a0, $a1, . + 4 + (0x10 << 2)
label_3818ec:
    if (ctx->pc == 0x3818ECu) {
        ctx->pc = 0x3818ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818E8u;
        // 0x3818ec: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3818F0u;
        goto label_3818f0;
    }
    ctx->pc = 0x3818E8u;
    {
        const bool branch_taken_0x3818e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x3818ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818E8u;
        // 0x3818ec: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818e8) {
            ctx->pc = 0x38192Cu;
            goto label_38192c;
        }
    }
    ctx->pc = 0x3818F0u;
label_3818f0:
    // 0x3818f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3818f4:
    if (ctx->pc == 0x3818F4u) {
        ctx->pc = 0x3818F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818F0u;
        // 0x3818f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3818F8u;
        goto label_3818f8;
    }
    ctx->pc = 0x3818F0u;
    {
        const bool branch_taken_0x3818f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3818F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818F0u;
        // 0x3818f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818f0) {
            ctx->pc = 0x381910u;
            goto label_381910;
        }
    }
    ctx->pc = 0x3818F8u;
label_3818f8:
    // 0x3818f8: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
label_3818fc:
    if (ctx->pc == 0x3818FCu) {
        ctx->pc = 0x3818FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818F8u;
        // 0x3818fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381900u;
        goto label_381900;
    }
    ctx->pc = 0x3818F8u;
    {
        const bool branch_taken_0x3818f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3818FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3818F8u;
        // 0x3818fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3818f8) {
            ctx->pc = 0x38198Cu;
            goto label_38198c;
        }
    }
    ctx->pc = 0x381900u;
label_381900:
    // 0x381900: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
label_381904:
    if (ctx->pc == 0x381904u) {
        ctx->pc = 0x381904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381900u;
        // 0x381904: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381908u;
        goto label_381908;
    }
    ctx->pc = 0x381900u;
    {
        const bool branch_taken_0x381900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x381904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381900u;
        // 0x381904: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381900) {
            ctx->pc = 0x38199Cu;
            goto label_38199c;
        }
    }
    ctx->pc = 0x381908u;
label_381908:
    // 0x381908: 0x1000ffde  b           . + 4 + (-0x22 << 2)
label_38190c:
    if (ctx->pc == 0x38190Cu) {
        ctx->pc = 0x38190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381908u;
        // 0x38190c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381910u;
        goto label_381910;
    }
    ctx->pc = 0x381908u;
    {
        const bool branch_taken_0x381908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381908u;
        // 0x38190c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381908) {
            ctx->pc = 0x381884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381884;
        }
    }
    ctx->pc = 0x381910u;
label_381910:
    // 0x381910: 0x2673fffd  addiu       $s3, $s3, -0x3
    ctx->pc = 0x381910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
label_381914:
    // 0x381914: 0x14a0fa  dsrl        $s4, $s4, 3
    ctx->pc = 0x381914u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
label_381918:
    // 0x381918: 0x32700007  andi        $s0, $s3, 0x7
    ctx->pc = 0x381918u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_38191c:
    // 0x38191c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x38191cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_381920:
    // 0x381920: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x381920u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_381924:
    // 0x381924: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
label_381928:
    if (ctx->pc == 0x381928u) {
        ctx->pc = 0x381928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381924u;
        // 0x381928: 0x214a016  dsrlv       $s4, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38192Cu;
        goto label_38192c;
    }
    ctx->pc = 0x381924u;
    {
        const bool branch_taken_0x381924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381924u;
        // 0x381928: 0x214a016  dsrlv       $s4, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381924) {
            ctx->pc = 0x381880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381880;
        }
    }
    ctx->pc = 0x38192Cu;
label_38192c:
    // 0x38192c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_381930:
    // 0x381930: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x381930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_381934:
    // 0x381934: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x381934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_381938:
    // 0x381938: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x381938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_38193c:
    // 0x38193c: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x38193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_381940:
    // 0x381940: 0xc0e0ed2  jal         func_383B48
label_381944:
    if (ctx->pc == 0x381944u) {
        ctx->pc = 0x381944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381940u;
        // 0x381944: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381948u;
        goto label_381948;
    }
    ctx->pc = 0x381940u;
    SET_GPR_U32(ctx, 31, 0x381948u);
    ctx->pc = 0x381944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381940u;
    // 0x381944: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B48u, 0x381940u, 0x381948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381948u;
label_381948:
    // 0x381948: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x381948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38194c:
    // 0x38194c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x38194cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381950:
    // 0x381950: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x381950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_381954:
    // 0x381954: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x381954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_381958:
    // 0x381958: 0xc0e0b5a  jal         func_382D68
label_38195c:
    if (ctx->pc == 0x38195Cu) {
        ctx->pc = 0x38195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381958u;
        // 0x38195c: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381960u;
        goto label_381960;
    }
    ctx->pc = 0x381958u;
    SET_GPR_U32(ctx, 31, 0x381960u);
    ctx->pc = 0x38195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381958u;
    // 0x38195c: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382D68u, 0x381958u, 0x381960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381960u;
label_381960:
    // 0x381960: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x381960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_381964:
    // 0x381964: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_381968:
    if (ctx->pc == 0x381968u) {
        ctx->pc = 0x381968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381964u;
        // 0x381968: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38196Cu;
        goto label_38196c;
    }
    ctx->pc = 0x381964u;
    {
        const bool branch_taken_0x381964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381964u;
        // 0x381968: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381964) {
            ctx->pc = 0x381988u;
            goto label_381988;
        }
    }
    ctx->pc = 0x38196Cu;
label_38196c:
    // 0x38196c: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x38196cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381970:
    // 0x381970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381974:
    // 0x381974: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381978:
    // 0x381978: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38197c:
    // 0x38197c: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x38197cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_381980:
    // 0x381980: 0x10000279  b           . + 4 + (0x279 << 2)
label_381984:
    if (ctx->pc == 0x381984u) {
        ctx->pc = 0x381984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381980u;
        // 0x381984: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381988u;
        goto label_381988;
    }
    ctx->pc = 0x381980u;
    {
        const bool branch_taken_0x381980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381980u;
        // 0x381984: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381980) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381988u;
label_381988:
    // 0x381988: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x381988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38198c:
    // 0x38198c: 0x14a0fa  dsrl        $s4, $s4, 3
    ctx->pc = 0x38198cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
label_381990:
    // 0x381990: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x381990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_381994:
    // 0x381994: 0x1000ffba  b           . + 4 + (-0x46 << 2)
label_381998:
    if (ctx->pc == 0x381998u) {
        ctx->pc = 0x381998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381994u;
        // 0x381998: 0x2673fffd  addiu       $s3, $s3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38199Cu;
        goto label_38199c;
    }
    ctx->pc = 0x381994u;
    {
        const bool branch_taken_0x381994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381994u;
        // 0x381998: 0x2673fffd  addiu       $s3, $s3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381994) {
            ctx->pc = 0x381880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381880;
        }
    }
    ctx->pc = 0x38199Cu;
label_38199c:
    // 0x38199c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x38199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3819a0:
    // 0x3819a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3819a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3819a4:
    // 0x3819a4: 0x244283d0  addiu       $v0, $v0, -0x7C30
    ctx->pc = 0x3819a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935504));
label_3819a8:
    // 0x3819a8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3819a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3819ac:
    // 0x3819ac: 0x14a0fa  dsrl        $s4, $s4, 3
    ctx->pc = 0x3819acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
label_3819b0:
    // 0x3819b0: 0x2673fffd  addiu       $s3, $s3, -0x3
    ctx->pc = 0x3819b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
label_3819b4:
    // 0x3819b4: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x3819b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_3819b8:
    // 0x3819b8: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x3819b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_3819bc:
    // 0x3819bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3819bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3819c0:
    // 0x3819c0: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x3819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_3819c4:
    // 0x3819c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3819c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3819c8:
    // 0x3819c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3819c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3819cc:
    // 0x3819cc: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x3819ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3819d0:
    // 0x3819d0: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x3819d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_3819d4:
    // 0x3819d4: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x3819d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3819d8:
    // 0x3819d8: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x3819d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_3819dc:
    // 0x3819dc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3819dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3819e0:
    // 0x3819e0: 0x10000267  b           . + 4 + (0x267 << 2)
label_3819e4:
    if (ctx->pc == 0x3819E4u) {
        ctx->pc = 0x3819E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819E0u;
        // 0x3819e4: 0xfe420008  sd          $v0, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3819E8u;
        goto label_3819e8;
    }
    ctx->pc = 0x3819E0u;
    {
        const bool branch_taken_0x3819e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819E0u;
        // 0x3819e4: 0xfe420008  sd          $v0, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819e0) {
            ctx->pc = 0x382380u;
            goto label_382380;
        }
    }
    ctx->pc = 0x3819E8u;
label_3819e8:
    // 0x3819e8: 0x12c00236  beqz        $s6, . + 4 + (0x236 << 2)
label_3819ec:
    if (ctx->pc == 0x3819ECu) {
        ctx->pc = 0x3819ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819E8u;
        // 0x3819ec: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3819F0u;
        goto label_3819f0;
    }
    ctx->pc = 0x3819E8u;
    {
        const bool branch_taken_0x3819e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819E8u;
        // 0x3819ec: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819e8) {
            ctx->pc = 0x3822C4u;
            goto label_3822c4;
        }
    }
    ctx->pc = 0x3819F0u;
label_3819f0:
    // 0x3819f0: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x3819f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3819f4:
    // 0x3819f4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3819f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3819f8:
    // 0x3819f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3819f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3819fc:
    // 0x3819fc: 0x2631814  dsllv       $v1, $v1, $s3
    ctx->pc = 0x3819fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 19) & 0x3F));
label_381a00:
    // 0x381a00: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x381a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_381a04:
    // 0x381a04: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x381a04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_381a08:
    // 0x381a08: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x381a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_381a0c:
    // 0x381a0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_381a10:
    if (ctx->pc == 0x381A10u) {
        ctx->pc = 0x381A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A0Cu;
        // 0x381a10: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A14u;
        goto label_381a14;
    }
    ctx->pc = 0x381A0Cu;
    {
        const bool branch_taken_0x381a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A0Cu;
        // 0x381a10: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a0c) {
            ctx->pc = 0x3819E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3819e8;
        }
    }
    ctx->pc = 0x381A14u;
label_381a14:
    // 0x381a14: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x381a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_381a18:
    // 0x381a18: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x381a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_381a1c:
    // 0x381a1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x381a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_381a20:
    // 0x381a20: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_381a24:
    if (ctx->pc == 0x381A24u) {
        ctx->pc = 0x381A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A20u;
        // 0x381a24: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A28u;
        goto label_381a28;
    }
    ctx->pc = 0x381A20u;
    {
        const bool branch_taken_0x381a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x381A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A20u;
        // 0x381a24: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a20) {
            ctx->pc = 0x381A54u;
            goto label_381a54;
        }
    }
    ctx->pc = 0x381A28u;
label_381a28:
    // 0x381a28: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x381a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_381a2c:
    // 0x381a2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x381a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_381a30:
    // 0x381a30: 0x244283e8  addiu       $v0, $v0, -0x7C18
    ctx->pc = 0x381a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935528));
label_381a34:
    // 0x381a34: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x381a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_381a38:
    // 0x381a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381a3c:
    // 0x381a3c: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381a40:
    // 0x381a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381a44:
    // 0x381a44: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381a48:
    // 0x381a48: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x381a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_381a4c:
    // 0x381a4c: 0x10000246  b           . + 4 + (0x246 << 2)
label_381a50:
    if (ctx->pc == 0x381A50u) {
        ctx->pc = 0x381A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A4Cu;
        // 0x381a50: 0xae560004  sw          $s6, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A54u;
        goto label_381a54;
    }
    ctx->pc = 0x381A4Cu;
    {
        const bool branch_taken_0x381a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A4Cu;
        // 0x381a50: 0xae560004  sw          $s6, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a4c) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381A54u;
label_381a54:
    // 0x381a54: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x381a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_381a58:
    // 0x381a58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x381a58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_381a5c:
    // 0x381a5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x381a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381a60:
    // 0x381a60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x381a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_381a64:
    // 0x381a64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x381a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381a68:
    // 0x381a68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_381a6c:
    if (ctx->pc == 0x381A6Cu) {
        ctx->pc = 0x381A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A68u;
        // 0x381a6c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A70u;
        goto label_381a70;
    }
    ctx->pc = 0x381A68u;
    {
        const bool branch_taken_0x381a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A68u;
        // 0x381a6c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a68) {
            ctx->pc = 0x381A80u;
            goto label_381a80;
        }
    }
    ctx->pc = 0x381A70u;
label_381a70:
    // 0x381a70: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x381a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_381a74:
    // 0x381a74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x381a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_381a78:
    // 0x381a78: 0x10000002  b           . + 4 + (0x2 << 2)
label_381a7c:
    if (ctx->pc == 0x381A7Cu) {
        ctx->pc = 0x381A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A78u;
        // 0x381a7c: 0x2180a  movz        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A80u;
        goto label_381a80;
    }
    ctx->pc = 0x381A78u;
    {
        const bool branch_taken_0x381a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A78u;
        // 0x381a7c: 0x2180a  movz        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a78) {
            ctx->pc = 0x381A84u;
            goto label_381a84;
        }
    }
    ctx->pc = 0x381A80u;
label_381a80:
    // 0x381a80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x381a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_381a84:
    // 0x381a84: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
label_381a88:
    if (ctx->pc == 0x381A88u) {
        ctx->pc = 0x381A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A84u;
        // 0x381a88: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A8Cu;
        goto label_381a8c;
    }
    ctx->pc = 0x381A84u;
    {
        const bool branch_taken_0x381a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A84u;
        // 0x381a88: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a84) {
            ctx->pc = 0x381880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381880;
        }
    }
    ctx->pc = 0x381A8Cu;
label_381a8c:
    // 0x381a8c: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_381a90:
    if (ctx->pc == 0x381A90u) {
        ctx->pc = 0x381A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A8Cu;
        // 0x381a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381A94u;
        goto label_381a94;
    }
    ctx->pc = 0x381A8Cu;
    {
        const bool branch_taken_0x381a8c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x381A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A8Cu;
        // 0x381a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a8c) {
            ctx->pc = 0x381AACu;
            goto label_381aac;
        }
    }
    ctx->pc = 0x381A94u;
label_381a94:
    // 0x381a94: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381a94u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381a98:
    // 0x381a98: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381a9c:
    // 0x381a9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381aa0:
    // 0x381aa0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x381aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_381aa4:
    // 0x381aa4: 0x10000230  b           . + 4 + (0x230 << 2)
label_381aa8:
    if (ctx->pc == 0x381AA8u) {
        ctx->pc = 0x381AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AA4u;
        // 0x381aa8: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381AACu;
        goto label_381aac;
    }
    ctx->pc = 0x381AA4u;
    {
        const bool branch_taken_0x381aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AA4u;
        // 0x381aa8: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381aa4) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381AACu;
label_381aac:
    // 0x381aac: 0x56e00038  bnel        $s7, $zero, . + 4 + (0x38 << 2)
label_381ab0:
    if (ctx->pc == 0x381AB0u) {
        ctx->pc = 0x381AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AACu;
        // 0x381ab0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381AB4u;
        goto label_381ab4;
    }
    ctx->pc = 0x381AACu;
    {
        const bool branch_taken_0x381aac = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x381aac) {
            ctx->pc = 0x381AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381AACu;
            // 0x381ab0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381B90u;
            goto label_381b90;
        }
    }
    ctx->pc = 0x381AB4u;
label_381ab4:
    // 0x381ab4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x381ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_381ab8:
    // 0x381ab8: 0x17c4000c  bne         $fp, $a0, . + 4 + (0xC << 2)
label_381abc:
    if (ctx->pc == 0x381ABCu) {
        ctx->pc = 0x381AC0u;
        goto label_381ac0;
    }
    ctx->pc = 0x381AB8u;
    {
        const bool branch_taken_0x381ab8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        if (branch_taken_0x381ab8) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381AC0u;
label_381ac0:
    // 0x381ac0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x381ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_381ac4:
    // 0x381ac4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x381ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_381ac8:
    // 0x381ac8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_381acc:
    if (ctx->pc == 0x381ACCu) {
        ctx->pc = 0x381AD0u;
        goto label_381ad0;
    }
    ctx->pc = 0x381AC8u;
    {
        const bool branch_taken_0x381ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x381ac8) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381AD0u;
label_381ad0:
    // 0x381ad0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x381ad0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381ad4:
    // 0x381ad4: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x381ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_381ad8:
    // 0x381ad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_381adc:
    if (ctx->pc == 0x381ADCu) {
        ctx->pc = 0x381ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AD8u;
        // 0x381adc: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381AE0u;
        goto label_381ae0;
    }
    ctx->pc = 0x381AD8u;
    {
        const bool branch_taken_0x381ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AD8u;
        // 0x381adc: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ad8) {
            ctx->pc = 0x381AE8u;
            goto label_381ae8;
        }
    }
    ctx->pc = 0x381AE0u;
label_381ae0:
    // 0x381ae0: 0x10000002  b           . + 4 + (0x2 << 2)
label_381ae4:
    if (ctx->pc == 0x381AE4u) {
        ctx->pc = 0x381AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AE0u;
        // 0x381ae4: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381AE8u;
        goto label_381ae8;
    }
    ctx->pc = 0x381AE0u;
    {
        const bool branch_taken_0x381ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AE0u;
        // 0x381ae4: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ae0) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381AE8u;
label_381ae8:
    // 0x381ae8: 0x9eb823  subu        $s7, $a0, $fp
    ctx->pc = 0x381ae8u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_381aec:
    // 0x381aec: 0x56e00028  bnel        $s7, $zero, . + 4 + (0x28 << 2)
label_381af0:
    if (ctx->pc == 0x381AF0u) {
        ctx->pc = 0x381AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AECu;
        // 0x381af0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381AF4u;
        goto label_381af4;
    }
    ctx->pc = 0x381AECu;
    {
        const bool branch_taken_0x381aec = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x381aec) {
            ctx->pc = 0x381AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381AECu;
            // 0x381af0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381B90u;
            goto label_381b90;
        }
    }
    ctx->pc = 0x381AF4u;
label_381af4:
    // 0x381af4: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x381af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_381af8:
    // 0x381af8: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x381af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_381afc:
    // 0x381afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381b00:
    // 0x381b00: 0xc0e0ede  jal         func_383B78
label_381b04:
    if (ctx->pc == 0x381B04u) {
        ctx->pc = 0x381B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B00u;
        // 0x381b04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B08u;
        goto label_381b08;
    }
    ctx->pc = 0x381B00u;
    SET_GPR_U32(ctx, 31, 0x381B08u);
    ctx->pc = 0x381B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B00u;
    // 0x381b04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x381B00u, 0x381B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B08u;
label_381b08:
    // 0x381b08: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x381b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_381b0c:
    // 0x381b0c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x381b0cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381b10:
    // 0x381b10: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x381b10u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_381b14:
    // 0x381b14: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x381b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_381b18:
    // 0x381b18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_381b1c:
    if (ctx->pc == 0x381B1Cu) {
        ctx->pc = 0x381B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B18u;
        // 0x381b1c: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B20u;
        goto label_381b20;
    }
    ctx->pc = 0x381B18u;
    {
        const bool branch_taken_0x381b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B18u;
        // 0x381b1c: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b18) {
            ctx->pc = 0x381B2Cu;
            goto label_381b2c;
        }
    }
    ctx->pc = 0x381B20u;
label_381b20:
    // 0x381b20: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x381b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_381b24:
    // 0x381b24: 0x10000004  b           . + 4 + (0x4 << 2)
label_381b28:
    if (ctx->pc == 0x381B28u) {
        ctx->pc = 0x381B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B24u;
        // 0x381b28: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B2Cu;
        goto label_381b2c;
    }
    ctx->pc = 0x381B24u;
    {
        const bool branch_taken_0x381b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B24u;
        // 0x381b28: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b24) {
            ctx->pc = 0x381B38u;
            goto label_381b38;
        }
    }
    ctx->pc = 0x381B2Cu;
label_381b2c:
    // 0x381b2c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x381b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_381b30:
    // 0x381b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x381b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381b34:
    // 0x381b34: 0x5eb823  subu        $s7, $v0, $fp
    ctx->pc = 0x381b34u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_381b38:
    // 0x381b38: 0x17c4000c  bne         $fp, $a0, . + 4 + (0xC << 2)
label_381b3c:
    if (ctx->pc == 0x381B3Cu) {
        ctx->pc = 0x381B40u;
        goto label_381b40;
    }
    ctx->pc = 0x381B38u;
    {
        const bool branch_taken_0x381b38 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        if (branch_taken_0x381b38) {
            ctx->pc = 0x381B6Cu;
            goto label_381b6c;
        }
    }
    ctx->pc = 0x381B40u;
label_381b40:
    // 0x381b40: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x381b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_381b44:
    // 0x381b44: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x381b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_381b48:
    // 0x381b48: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_381b4c:
    if (ctx->pc == 0x381B4Cu) {
        ctx->pc = 0x381B50u;
        goto label_381b50;
    }
    ctx->pc = 0x381B48u;
    {
        const bool branch_taken_0x381b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x381b48) {
            ctx->pc = 0x381B6Cu;
            goto label_381b6c;
        }
    }
    ctx->pc = 0x381B50u;
label_381b50:
    // 0x381b50: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x381b50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381b54:
    // 0x381b54: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x381b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_381b58:
    // 0x381b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_381b5c:
    if (ctx->pc == 0x381B5Cu) {
        ctx->pc = 0x381B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B58u;
        // 0x381b5c: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B60u;
        goto label_381b60;
    }
    ctx->pc = 0x381B58u;
    {
        const bool branch_taken_0x381b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B58u;
        // 0x381b5c: 0x7e1023  subu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b58) {
            ctx->pc = 0x381B68u;
            goto label_381b68;
        }
    }
    ctx->pc = 0x381B60u;
label_381b60:
    // 0x381b60: 0x10000002  b           . + 4 + (0x2 << 2)
label_381b64:
    if (ctx->pc == 0x381B64u) {
        ctx->pc = 0x381B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B60u;
        // 0x381b64: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B68u;
        goto label_381b68;
    }
    ctx->pc = 0x381B60u;
    {
        const bool branch_taken_0x381b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B60u;
        // 0x381b64: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b60) {
            ctx->pc = 0x381B6Cu;
            goto label_381b6c;
        }
    }
    ctx->pc = 0x381B68u;
label_381b68:
    // 0x381b68: 0x9eb823  subu        $s7, $a0, $fp
    ctx->pc = 0x381b68u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_381b6c:
    // 0x381b6c: 0x56e00008  bnel        $s7, $zero, . + 4 + (0x8 << 2)
label_381b70:
    if (ctx->pc == 0x381B70u) {
        ctx->pc = 0x381B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B6Cu;
        // 0x381b70: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B74u;
        goto label_381b74;
    }
    ctx->pc = 0x381B6Cu;
    {
        const bool branch_taken_0x381b6c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x381b6c) {
            ctx->pc = 0x381B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381B6Cu;
            // 0x381b70: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381B90u;
            goto label_381b90;
        }
    }
    ctx->pc = 0x381B74u;
label_381b74:
    // 0x381b74: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381b74u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381b78:
    // 0x381b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381b7c:
    // 0x381b7c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381b80:
    // 0x381b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381b84:
    // 0x381b84: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x381b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_381b88:
    // 0x381b88: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_381b8c:
    if (ctx->pc == 0x381B8Cu) {
        ctx->pc = 0x381B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B88u;
        // 0x381b8c: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381B90u;
        goto label_381b90;
    }
    ctx->pc = 0x381B88u;
    {
        const bool branch_taken_0x381b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B88u;
        // 0x381b8c: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b88) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381B90u;
label_381b90:
    // 0x381b90: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x381b90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381b94:
    // 0x381b94: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x381b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_381b98:
    // 0x381b98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x381b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_381b9c:
    // 0x381b9c: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x381b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_381ba0:
    // 0x381ba0: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x381ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_381ba4:
    // 0x381ba4: 0x2c2800b  movn        $s0, $s6, $v0
    ctx->pc = 0x381ba4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
label_381ba8:
    // 0x381ba8: 0x2f0182b  sltu        $v1, $s7, $s0
    ctx->pc = 0x381ba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_381bac:
    // 0x381bac: 0x2e3800b  movn        $s0, $s7, $v1
    ctx->pc = 0x381bacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
label_381bb0:
    // 0x381bb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x381bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381bb4:
    // 0x381bb4: 0xc0efa49  jal         func_3BE924
label_381bb8:
    if (ctx->pc == 0x381BB8u) {
        ctx->pc = 0x381BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BB4u;
        // 0x381bb8: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381BBCu;
        goto label_381bbc;
    }
    ctx->pc = 0x381BB4u;
    SET_GPR_U32(ctx, 31, 0x381BBCu);
    ctx->pc = 0x381BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381BB4u;
    // 0x381bb8: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x381BB4u, 0x381BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BBCu;
label_381bbc:
    // 0x381bbc: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x381bbcu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_381bc0:
    // 0x381bc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x381bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_381bc4:
    // 0x381bc4: 0x3d0f021  addu        $fp, $fp, $s0
    ctx->pc = 0x381bc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_381bc8:
    // 0x381bc8: 0x2f0b823  subu        $s7, $s7, $s0
    ctx->pc = 0x381bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_381bcc:
    // 0x381bcc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x381bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_381bd0:
    // 0x381bd0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x381bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_381bd4:
    // 0x381bd4: 0x1440ff2a  bnez        $v0, . + 4 + (-0xD6 << 2)
label_381bd8:
    if (ctx->pc == 0x381BD8u) {
        ctx->pc = 0x381BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BD4u;
        // 0x381bd8: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381BDCu;
        goto label_381bdc;
    }
    ctx->pc = 0x381BD4u;
    {
        const bool branch_taken_0x381bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BD4u;
        // 0x381bd8: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381bd4) {
            ctx->pc = 0x381880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381880;
        }
    }
    ctx->pc = 0x381BDCu;
label_381bdc:
    // 0x381bdc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x381bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_381be0:
    // 0x381be0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x381be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_381be4:
    // 0x381be4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x381be4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_381be8:
    // 0x381be8: 0x1000ff25  b           . + 4 + (-0xDB << 2)
label_381bec:
    if (ctx->pc == 0x381BECu) {
        ctx->pc = 0x381BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BE8u;
        // 0x381bec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381BF0u;
        goto label_381bf0;
    }
    ctx->pc = 0x381BE8u;
    {
        const bool branch_taken_0x381be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BE8u;
        // 0x381bec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381be8) {
            ctx->pc = 0x381880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381880;
        }
    }
    ctx->pc = 0x381BF0u;
label_381bf0:
    // 0x381bf0: 0x12c001bb  beqz        $s6, . + 4 + (0x1BB << 2)
label_381bf4:
    if (ctx->pc == 0x381BF4u) {
        ctx->pc = 0x381BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BF0u;
        // 0x381bf4: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381BF8u;
        goto label_381bf8;
    }
    ctx->pc = 0x381BF0u;
    {
        const bool branch_taken_0x381bf0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x381BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BF0u;
        // 0x381bf4: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381bf0) {
            ctx->pc = 0x3822E0u;
            goto label_3822e0;
        }
    }
    ctx->pc = 0x381BF8u;
label_381bf8:
    // 0x381bf8: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x381bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_381bfc:
    // 0x381bfc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x381bfcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381c00:
    // 0x381c00: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x381c00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_381c04:
    // 0x381c04: 0x2631814  dsllv       $v1, $v1, $s3
    ctx->pc = 0x381c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 19) & 0x3F));
label_381c08:
    // 0x381c08: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x381c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_381c0c:
    // 0x381c0c: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x381c0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_381c10:
    // 0x381c10: 0x2e62000e  sltiu       $v0, $s3, 0xE
    ctx->pc = 0x381c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_381c14:
    // 0x381c14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_381c18:
    if (ctx->pc == 0x381C18u) {
        ctx->pc = 0x381C1Cu;
        goto label_381c1c;
    }
    ctx->pc = 0x381C14u;
    {
        const bool branch_taken_0x381c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381c14) {
            ctx->pc = 0x381BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381bf0;
        }
    }
    ctx->pc = 0x381C1Cu;
label_381c1c:
    // 0x381c1c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x381c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_381c20:
    // 0x381c20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x381c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_381c24:
    // 0x381c24: 0x30503fff  andi        $s0, $v0, 0x3FFF
    ctx->pc = 0x381c24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_381c28:
    // 0x381c28: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0x381c28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_381c2c:
    // 0x381c2c: 0x2cc2001e  sltiu       $v0, $a2, 0x1E
    ctx->pc = 0x381c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_381c30:
    // 0x381c30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_381c34:
    if (ctx->pc == 0x381C34u) {
        ctx->pc = 0x381C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C30u;
        // 0x381c34: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381C38u;
        goto label_381c38;
    }
    ctx->pc = 0x381C30u;
    {
        const bool branch_taken_0x381c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C30u;
        // 0x381c34: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c30) {
            ctx->pc = 0x381C4Cu;
            goto label_381c4c;
        }
    }
    ctx->pc = 0x381C38u;
label_381c38:
    // 0x381c38: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x381c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_381c3c:
    // 0x381c3c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x381c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_381c40:
    // 0x381c40: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x381c40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_381c44:
    // 0x381c44: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_381c48:
    if (ctx->pc == 0x381C48u) {
        ctx->pc = 0x381C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C44u;
        // 0x381c48: 0x24450102  addiu       $a1, $v0, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381C4Cu;
        goto label_381c4c;
    }
    ctx->pc = 0x381C44u;
    {
        const bool branch_taken_0x381c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C44u;
        // 0x381c48: 0x24450102  addiu       $a1, $v0, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c44) {
            ctx->pc = 0x381C7Cu;
            goto label_381c7c;
        }
    }
    ctx->pc = 0x381C4Cu;
label_381c4c:
    // 0x381c4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x381c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_381c50:
    // 0x381c50: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x381c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_381c54:
    // 0x381c54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x381c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_381c58:
    // 0x381c58: 0x24428408  addiu       $v0, $v0, -0x7BF8
    ctx->pc = 0x381c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935560));
label_381c5c:
    // 0x381c5c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x381c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_381c60:
    // 0x381c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381c64:
    // 0x381c64: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381c64u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381c68:
    // 0x381c68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381c6c:
    // 0x381c6c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381c70:
    // 0x381c70: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x381c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_381c74:
    // 0x381c74: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_381c78:
    if (ctx->pc == 0x381C78u) {
        ctx->pc = 0x381C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C74u;
        // 0x381c78: 0xae560004  sw          $s6, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381C7Cu;
        goto label_381c7c;
    }
    ctx->pc = 0x381C74u;
    {
        const bool branch_taken_0x381c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C74u;
        // 0x381c78: 0xae560004  sw          $s6, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c74) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381C7Cu;
label_381c7c:
    // 0x381c7c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x381c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_381c80:
    // 0x381c80: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x381c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_381c84:
    // 0x381c84: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x381c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_381c88:
    // 0x381c88: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x381c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_381c8c:
    // 0x381c8c: 0x40f809  jalr        $v0
label_381c90:
    if (ctx->pc == 0x381C90u) {
        ctx->pc = 0x381C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C8Cu;
        // 0x381c90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381C94u;
        goto label_381c94;
    }
    ctx->pc = 0x381C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381C94u);
        ctx->pc = 0x381C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C8Cu;
        // 0x381c90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381C8Cu, 0x381C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381C94u;
label_381c94:
    // 0x381c94: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x381c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_381c98:
    // 0x381c98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_381c9c:
    if (ctx->pc == 0x381C9Cu) {
        ctx->pc = 0x381C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C98u;
        // 0x381c9c: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381CA0u;
        goto label_381ca0;
    }
    ctx->pc = 0x381C98u;
    {
        const bool branch_taken_0x381c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C98u;
        // 0x381c9c: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c98) {
            ctx->pc = 0x381CBCu;
            goto label_381cbc;
        }
    }
    ctx->pc = 0x381CA0u;
label_381ca0:
    // 0x381ca0: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381ca4:
    // 0x381ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381ca8:
    // 0x381ca8: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381cac:
    // 0x381cac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381cb0:
    // 0x381cb0: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x381cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_381cb4:
    // 0x381cb4: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_381cb8:
    if (ctx->pc == 0x381CB8u) {
        ctx->pc = 0x381CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CB4u;
        // 0x381cb8: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381CBCu;
        goto label_381cbc;
    }
    ctx->pc = 0x381CB4u;
    {
        const bool branch_taken_0x381cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CB4u;
        // 0x381cb8: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381cb4) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381CBCu;
label_381cbc:
    // 0x381cbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x381cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_381cc0:
    // 0x381cc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x381cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_381cc4:
    // 0x381cc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x381cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_381cc8:
    // 0x381cc8: 0x14a3ba  dsrl        $s4, $s4, 14
    ctx->pc = 0x381cc8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 14);
label_381ccc:
    // 0x381ccc: 0x2673fff2  addiu       $s3, $s3, -0xE
    ctx->pc = 0x381cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967282));
label_381cd0:
    // 0x381cd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x381cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_381cd4:
    // 0x381cd4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x381cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_381cd8:
    // 0x381cd8: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x381cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_381cdc:
    // 0x381cdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x381cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_381ce0:
    // 0x381ce0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x381ce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_381ce4:
    // 0x381ce4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_381ce8:
    if (ctx->pc == 0x381CE8u) {
        ctx->pc = 0x381CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CE4u;
        // 0x381ce8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381CECu;
        goto label_381cec;
    }
    ctx->pc = 0x381CE4u;
    {
        const bool branch_taken_0x381ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CE4u;
        // 0x381ce8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ce4) {
            ctx->pc = 0x381D74u;
            goto label_381d74;
        }
    }
    ctx->pc = 0x381CECu;
label_381cec:
    // 0x381cec: 0x1000000a  b           . + 4 + (0xA << 2)
label_381cf0:
    if (ctx->pc == 0x381CF0u) {
        ctx->pc = 0x381CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CECu;
        // 0x381cf0: 0x24478380  addiu       $a3, $v0, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381CF4u;
        goto label_381cf4;
    }
    ctx->pc = 0x381CECu;
    {
        const bool branch_taken_0x381cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CECu;
        // 0x381cf0: 0x24478380  addiu       $a3, $v0, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381cec) {
            ctx->pc = 0x381D18u;
            goto label_381d18;
        }
    }
    ctx->pc = 0x381CF4u;
label_381cf4:
    // 0x381cf4: 0x0  nop
    ctx->pc = 0x381cf4u;
    // NOP
label_381cf8:
    // 0x381cf8: 0x12c00180  beqz        $s6, . + 4 + (0x180 << 2)
label_381cfc:
    if (ctx->pc == 0x381CFCu) {
        ctx->pc = 0x381CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CF8u;
        // 0x381cfc: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381D00u;
        goto label_381d00;
    }
    ctx->pc = 0x381CF8u;
    {
        const bool branch_taken_0x381cf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x381CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CF8u;
        // 0x381cfc: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381cf8) {
            ctx->pc = 0x3822FCu;
            goto label_3822fc;
        }
    }
    ctx->pc = 0x381D00u;
label_381d00:
    // 0x381d00: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x381d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_381d04:
    // 0x381d04: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x381d04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381d08:
    // 0x381d08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x381d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_381d0c:
    // 0x381d0c: 0x2631814  dsllv       $v1, $v1, $s3
    ctx->pc = 0x381d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 19) & 0x3F));
label_381d10:
    // 0x381d10: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x381d10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_381d14:
    // 0x381d14: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x381d14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_381d18:
    // 0x381d18: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x381d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_381d1c:
    // 0x381d1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_381d20:
    if (ctx->pc == 0x381D20u) {
        ctx->pc = 0x381D24u;
        goto label_381d24;
    }
    ctx->pc = 0x381D1Cu;
    {
        const bool branch_taken_0x381d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381d1c) {
            ctx->pc = 0x381CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381cf8;
        }
    }
    ctx->pc = 0x381D24u;
label_381d24:
    // 0x381d24: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x381d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_381d28:
    // 0x381d28: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x381d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
label_381d2c:
    // 0x381d2c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x381d2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_381d30:
    // 0x381d30: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x381d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_381d34:
    // 0x381d34: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x381d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_381d38:
    // 0x381d38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x381d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_381d3c:
    // 0x381d3c: 0x14a0fa  dsrl        $s4, $s4, 3
    ctx->pc = 0x381d3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
label_381d40:
    // 0x381d40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x381d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_381d44:
    // 0x381d44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x381d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_381d48:
    // 0x381d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x381d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_381d4c:
    // 0x381d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x381d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_381d50:
    // 0x381d50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x381d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_381d54:
    // 0x381d54: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x381d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_381d58:
    // 0x381d58: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x381d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_381d5c:
    // 0x381d5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x381d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_381d60:
    // 0x381d60: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x381d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_381d64:
    // 0x381d64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x381d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_381d68:
    // 0x381d68: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x381d68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_381d6c:
    // 0x381d6c: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_381d70:
    if (ctx->pc == 0x381D70u) {
        ctx->pc = 0x381D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D6Cu;
        // 0x381d70: 0x2673fffd  addiu       $s3, $s3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381D74u;
        goto label_381d74;
    }
    ctx->pc = 0x381D6Cu;
    {
        const bool branch_taken_0x381d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x381D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D6Cu;
        // 0x381d70: 0x2673fffd  addiu       $s3, $s3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d6c) {
            ctx->pc = 0x381D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381d18;
        }
    }
    ctx->pc = 0x381D74u;
label_381d74:
    // 0x381d74: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x381d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_381d78:
    // 0x381d78: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x381d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_381d7c:
    // 0x381d7c: 0x2ce20013  sltiu       $v0, $a3, 0x13
    ctx->pc = 0x381d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_381d80:
    // 0x381d80: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_381d84:
    if (ctx->pc == 0x381D84u) {
        ctx->pc = 0x381D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D80u;
        // 0x381d84: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381D88u;
        goto label_381d88;
    }
    ctx->pc = 0x381D80u;
    {
        const bool branch_taken_0x381d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D80u;
        // 0x381d84: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d80) {
            ctx->pc = 0x381DC0u;
            goto label_381dc0;
        }
    }
    ctx->pc = 0x381D88u;
label_381d88:
    // 0x381d88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x381d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_381d8c:
    // 0x381d8c: 0x24488380  addiu       $t0, $v0, -0x7C80
    ctx->pc = 0x381d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935424));
label_381d90:
    // 0x381d90: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x381d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_381d94:
    // 0x381d94: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x381d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_381d98:
    // 0x381d98: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x381d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_381d9c:
    // 0x381d9c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x381d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_381da0:
    // 0x381da0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x381da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_381da4:
    // 0x381da4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x381da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381da8:
    // 0x381da8: 0x2ce30013  sltiu       $v1, $a3, 0x13
    ctx->pc = 0x381da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_381dac:
    // 0x381dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x381dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_381db0:
    // 0x381db0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x381db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_381db4:
    // 0x381db4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x381db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_381db8:
    // 0x381db8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_381dbc:
    if (ctx->pc == 0x381DBCu) {
        ctx->pc = 0x381DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DB8u;
        // 0x381dbc: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381DC0u;
        goto label_381dc0;
    }
    ctx->pc = 0x381DB8u;
    {
        const bool branch_taken_0x381db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DB8u;
        // 0x381dbc: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381db8) {
            ctx->pc = 0x381D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381d90;
        }
    }
    ctx->pc = 0x381DC0u;
label_381dc0:
    // 0x381dc0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x381dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_381dc4:
    // 0x381dc4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x381dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_381dc8:
    // 0x381dc8: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x381dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_381dcc:
    // 0x381dcc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x381dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_381dd0:
    // 0x381dd0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x381dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_381dd4:
    // 0x381dd4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x381dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381dd8:
    // 0x381dd8: 0xc0e0e16  jal         func_383858
label_381ddc:
    if (ctx->pc == 0x381DDCu) {
        ctx->pc = 0x381DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DD8u;
        // 0x381ddc: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381DE0u;
        goto label_381de0;
    }
    ctx->pc = 0x381DD8u;
    SET_GPR_U32(ctx, 31, 0x381DE0u);
    ctx->pc = 0x381DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381DD8u;
    // 0x381ddc: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383858u, 0x381DD8u, 0x381DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381DE0u;
label_381de0:
    // 0x381de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x381de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381de4:
    // 0x381de4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_381de8:
    if (ctx->pc == 0x381DE8u) {
        ctx->pc = 0x381DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DE4u;
        // 0x381de8: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381DECu;
        goto label_381dec;
    }
    ctx->pc = 0x381DE4u;
    {
        const bool branch_taken_0x381de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DE4u;
        // 0x381de8: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381de4) {
            ctx->pc = 0x381E38u;
            goto label_381e38;
        }
    }
    ctx->pc = 0x381DECu;
label_381dec:
    // 0x381dec: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x381decu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381df0:
    // 0x381df0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x381df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_381df4:
    // 0x381df4: 0x5582000a  bnel        $t4, $v0, . + 4 + (0xA << 2)
label_381df8:
    if (ctx->pc == 0x381DF8u) {
        ctx->pc = 0x381DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DF4u;
        // 0x381df8: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381DFCu;
        goto label_381dfc;
    }
    ctx->pc = 0x381DF4u;
    {
        const bool branch_taken_0x381df4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x381df4) {
            ctx->pc = 0x381DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381DF4u;
            // 0x381df8: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381E20u;
            goto label_381e20;
        }
    }
    ctx->pc = 0x381DFCu;
label_381dfc:
    // 0x381dfc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x381dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_381e00:
    // 0x381e00: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x381e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_381e04:
    // 0x381e04: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x381e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_381e08:
    // 0x381e08: 0x60f809  jalr        $v1
label_381e0c:
    if (ctx->pc == 0x381E0Cu) {
        ctx->pc = 0x381E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E08u;
        // 0x381e0c: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381E10u;
        goto label_381e10;
    }
    ctx->pc = 0x381E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x381E10u);
        ctx->pc = 0x381E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E08u;
        // 0x381e0c: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381E08u, 0x381E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381E10u;
label_381e10:
    // 0x381e10: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x381e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_381e14:
    // 0x381e14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x381e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_381e18:
    // 0x381e18: 0x7bac0030  lq          $t4, 0x30($sp)
    ctx->pc = 0x381e18u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_381e1c:
    // 0x381e1c: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381e20:
    // 0x381e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381e24:
    // 0x381e24: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_381e28:
    // 0x381e28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381e2c:
    // 0x381e2c: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x381e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_381e30:
    // 0x381e30: 0x1000014d  b           . + 4 + (0x14D << 2)
label_381e34:
    if (ctx->pc == 0x381E34u) {
        ctx->pc = 0x381E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E30u;
        // 0x381e34: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381E38u;
        goto label_381e38;
    }
    ctx->pc = 0x381E30u;
    {
        const bool branch_taken_0x381e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E30u;
        // 0x381e34: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e30) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x381E38u;
label_381e38:
    // 0x381e38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x381e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_381e3c:
    // 0x381e3c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x381e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_381e40:
    // 0x381e40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x381e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_381e44:
    // 0x381e44: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x381e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_381e48:
    // 0x381e48: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x381e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_381e4c:
    // 0x381e4c: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x381e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_381e50:
    // 0x381e50: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x381e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_381e54:
    // 0x381e54: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x381e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_381e58:
    // 0x381e58: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x381e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_381e5c:
    // 0x381e5c: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x381e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_381e60:
    // 0x381e60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x381e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_381e64:
    // 0x381e64: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x381e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_381e68:
    // 0x381e68: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_381e6c:
    if (ctx->pc == 0x381E6Cu) {
        ctx->pc = 0x381E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E68u;
        // 0x381e6c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381E70u;
        goto label_381e70;
    }
    ctx->pc = 0x381E68u;
    {
        const bool branch_taken_0x381e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E68u;
        // 0x381e6c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e68) {
            ctx->pc = 0x382068u;
            goto label_382068;
        }
    }
    ctx->pc = 0x381E70u;
label_381e70:
    // 0x381e70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x381e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_381e74:
    // 0x381e74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x381e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_381e78:
    // 0x381e78: 0x244bdf60  addiu       $t3, $v0, -0x20A0
    ctx->pc = 0x381e78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
label_381e7c:
    // 0x381e7c: 0x24778430  addiu       $s7, $v1, -0x7BD0
    ctx->pc = 0x381e7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935600));
label_381e80:
    // 0x381e80: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x381e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_381e84:
    // 0x381e84: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x381e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_381e88:
    // 0x381e88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_381e8c:
    if (ctx->pc == 0x381E8Cu) {
        ctx->pc = 0x381E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E88u;
        // 0x381e8c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381E90u;
        goto label_381e90;
    }
    ctx->pc = 0x381E88u;
    {
        const bool branch_taken_0x381e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E88u;
        // 0x381e8c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e88) {
            ctx->pc = 0x381EBCu;
            goto label_381ebc;
        }
    }
    ctx->pc = 0x381E90u;
label_381e90:
    // 0x381e90: 0x12c00121  beqz        $s6, . + 4 + (0x121 << 2)
label_381e94:
    if (ctx->pc == 0x381E94u) {
        ctx->pc = 0x381E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E90u;
        // 0x381e94: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381E98u;
        goto label_381e98;
    }
    ctx->pc = 0x381E90u;
    {
        const bool branch_taken_0x381e90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x381E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E90u;
        // 0x381e94: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e90) {
            ctx->pc = 0x382318u;
            goto label_382318;
        }
    }
    ctx->pc = 0x381E98u;
label_381e98:
    // 0x381e98: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x381e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_381e9c:
    // 0x381e9c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x381e9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381ea0:
    // 0x381ea0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x381ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_381ea4:
    // 0x381ea4: 0x2631814  dsllv       $v1, $v1, $s3
    ctx->pc = 0x381ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 19) & 0x3F));
label_381ea8:
    // 0x381ea8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x381ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_381eac:
    // 0x381eac: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x381eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_381eb0:
    // 0x381eb0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_381eb4:
    if (ctx->pc == 0x381EB4u) {
        ctx->pc = 0x381EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EB0u;
        // 0x381eb4: 0x283a025  or          $s4, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381EB8u;
        goto label_381eb8;
    }
    ctx->pc = 0x381EB0u;
    {
        const bool branch_taken_0x381eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EB0u;
        // 0x381eb4: 0x283a025  or          $s4, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381eb0) {
            ctx->pc = 0x381E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381e90;
        }
    }
    ctx->pc = 0x381EB8u;
label_381eb8:
    // 0x381eb8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x381eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_381ebc:
    // 0x381ebc: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x381ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_381ec0:
    // 0x381ec0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x381ec0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_381ec4:
    // 0x381ec4: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x381ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_381ec8:
    // 0x381ec8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x381ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_381ecc:
    // 0x381ecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x381eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_381ed0:
    // 0x381ed0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x381ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_381ed4:
    // 0x381ed4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x381ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_381ed8:
    // 0x381ed8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x381ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_381edc:
    // 0x381edc: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x381edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_381ee0:
    // 0x381ee0: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x381ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_381ee4:
    // 0x381ee4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_381ee8:
    if (ctx->pc == 0x381EE8u) {
        ctx->pc = 0x381EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EE4u;
        // 0x381ee8: 0x90b00001  lbu         $s0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381EECu;
        goto label_381eec;
    }
    ctx->pc = 0x381EE4u;
    {
        const bool branch_taken_0x381ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EE4u;
        // 0x381ee8: 0x90b00001  lbu         $s0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ee4) {
            ctx->pc = 0x381F14u;
            goto label_381f14;
        }
    }
    ctx->pc = 0x381EECu;
label_381eec:
    // 0x381eec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x381eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_381ef0:
    // 0x381ef0: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x381ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_381ef4:
    // 0x381ef4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x381ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_381ef8:
    // 0x381ef8: 0x214a016  dsrlv       $s4, $s4, $s0
    ctx->pc = 0x381ef8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_381efc:
    // 0x381efc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x381efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_381f00:
    // 0x381f00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x381f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_381f04:
    // 0x381f04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x381f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_381f08:
    // 0x381f08: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x381f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_381f0c:
    // 0x381f0c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_381f10:
    if (ctx->pc == 0x381F10u) {
        ctx->pc = 0x381F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F0Cu;
        // 0x381f10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381F14u;
        goto label_381f14;
    }
    ctx->pc = 0x381F0Cu;
    {
        const bool branch_taken_0x381f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F0Cu;
        // 0x381f10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f0c) {
            ctx->pc = 0x382038u;
            goto label_382038;
        }
    }
    ctx->pc = 0x381F14u;
label_381f14:
    // 0x381f14: 0x38e40012  xori        $a0, $a3, 0x12
    ctx->pc = 0x381f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)18);
label_381f18:
    // 0x381f18: 0x24e2fff2  addiu       $v0, $a3, -0xE
    ctx->pc = 0x381f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967282));
label_381f1c:
    // 0x381f1c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x381f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_381f20:
    // 0x381f20: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x381f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_381f24:
    // 0x381f24: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x381f24u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_381f28:
    // 0x381f28: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x381f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_381f2c:
    // 0x381f2c: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x381f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_381f30:
    // 0x381f30: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x381f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_381f34:
    // 0x381f34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_381f38:
    if (ctx->pc == 0x381F38u) {
        ctx->pc = 0x381F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F34u;
        // 0x381f38: 0x64400a  movz        $t0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381F3Cu;
        goto label_381f3c;
    }
    ctx->pc = 0x381F34u;
    {
        const bool branch_taken_0x381f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F34u;
        // 0x381f38: 0x64400a  movz        $t0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f34) {
            ctx->pc = 0x381F68u;
            goto label_381f68;
        }
    }
    ctx->pc = 0x381F3Cu;
label_381f3c:
    // 0x381f3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x381f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_381f40:
    // 0x381f40: 0x12c000fc  beqz        $s6, . + 4 + (0xFC << 2)
label_381f44:
    if (ctx->pc == 0x381F44u) {
        ctx->pc = 0x381F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F40u;
        // 0x381f44: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381F48u;
        goto label_381f48;
    }
    ctx->pc = 0x381F40u;
    {
        const bool branch_taken_0x381f40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F40u;
        // 0x381f44: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f40) {
            ctx->pc = 0x382334u;
            goto label_382334;
        }
    }
    ctx->pc = 0x381F48u;
label_381f48:
    // 0x381f48: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x381f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_381f4c:
    // 0x381f4c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x381f4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381f50:
    // 0x381f50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x381f50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_381f54:
    // 0x381f54: 0x2631814  dsllv       $v1, $v1, $s3
    ctx->pc = 0x381f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 19) & 0x3F));
label_381f58:
    // 0x381f58: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x381f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_381f5c:
    // 0x381f5c: 0x264102b  sltu        $v0, $s3, $a0
    ctx->pc = 0x381f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_381f60:
    // 0x381f60: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_381f64:
    if (ctx->pc == 0x381F64u) {
        ctx->pc = 0x381F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F60u;
        // 0x381f64: 0x283a025  or          $s4, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381F68u;
        goto label_381f68;
    }
    ctx->pc = 0x381F60u;
    {
        const bool branch_taken_0x381f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F60u;
        // 0x381f64: 0x283a025  or          $s4, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f60) {
            ctx->pc = 0x381F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381f40;
        }
    }
    ctx->pc = 0x381F68u;
label_381f68:
    // 0x381f68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x381f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_381f6c:
    // 0x381f6c: 0x214a016  dsrlv       $s4, $s4, $s0
    ctx->pc = 0x381f6cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_381f70:
    // 0x381f70: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x381f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_381f74:
    // 0x381f74: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x381f74u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_381f78:
    // 0x381f78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x381f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_381f7c:
    // 0x381f7c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x381f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_381f80:
    // 0x381f80: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x381f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_381f84:
    // 0x381f84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x381f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_381f88:
    // 0x381f88: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x381f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_381f8c:
    // 0x381f8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x381f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_381f90:
    // 0x381f90: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x381f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_381f94:
    // 0x381f94: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x381f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_381f98:
    // 0x381f98: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x381f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_381f9c:
    // 0x381f9c: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x381f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_381fa0:
    // 0x381fa0: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x381fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_381fa4:
    // 0x381fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x381fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_381fa8:
    // 0x381fa8: 0xd4a016  dsrlv       $s4, $s4, $a2
    ctx->pc = 0x381fa8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 6) & 0x3F));
label_381fac:
    // 0x381fac: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x381facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_381fb0:
    // 0x381fb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x381fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_381fb4:
    // 0x381fb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_381fb8:
    if (ctx->pc == 0x381FB8u) {
        ctx->pc = 0x381FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FB4u;
        // 0x381fb8: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FBCu;
        goto label_381fbc;
    }
    ctx->pc = 0x381FB4u;
    {
        const bool branch_taken_0x381fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FB4u;
        // 0x381fb8: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fb4) {
            ctx->pc = 0x381FD0u;
            goto label_381fd0;
        }
    }
    ctx->pc = 0x381FBCu;
label_381fbc:
    // 0x381fbc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x381fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_381fc0:
    // 0x381fc0: 0x14e20015  bne         $a3, $v0, . + 4 + (0x15 << 2)
label_381fc4:
    if (ctx->pc == 0x381FC4u) {
        ctx->pc = 0x381FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FC0u;
        // 0x381fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FC8u;
        goto label_381fc8;
    }
    ctx->pc = 0x381FC0u;
    {
        const bool branch_taken_0x381fc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x381FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FC0u;
        // 0x381fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fc0) {
            ctx->pc = 0x382018u;
            goto label_382018;
        }
    }
    ctx->pc = 0x381FC8u;
label_381fc8:
    // 0x381fc8: 0x5520000f  bnel        $t1, $zero, . + 4 + (0xF << 2)
label_381fcc:
    if (ctx->pc == 0x381FCCu) {
        ctx->pc = 0x381FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FC8u;
        // 0x381fcc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FD0u;
        goto label_381fd0;
    }
    ctx->pc = 0x381FC8u;
    {
        const bool branch_taken_0x381fc8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x381fc8) {
            ctx->pc = 0x381FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381FC8u;
            // 0x381fcc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382008u;
            goto label_382008;
        }
    }
    ctx->pc = 0x381FD0u;
label_381fd0:
    // 0x381fd0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x381fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_381fd4:
    // 0x381fd4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x381fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_381fd8:
    // 0x381fd8: 0x40f809  jalr        $v0
label_381fdc:
    if (ctx->pc == 0x381FDCu) {
        ctx->pc = 0x381FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FD8u;
        // 0x381fdc: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381FE0u;
        goto label_381fe0;
    }
    ctx->pc = 0x381FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381FE0u);
        ctx->pc = 0x381FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FD8u;
        // 0x381fdc: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381FD8u, 0x381FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381FE0u;
label_381fe0:
    // 0x381fe0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x381fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_381fe4:
    // 0x381fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_381fe8:
    // 0x381fe8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x381fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_381fec:
    // 0x381fec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_381ff0:
    // 0x381ff0: 0xae570020  sw          $s7, 0x20($s2)
    ctx->pc = 0x381ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 23));
label_381ff4:
    // 0x381ff4: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x381ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_381ff8:
    // 0x381ff8: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x381ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_381ffc:
    // 0x381ffc: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x381ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382000:
    // 0x382000: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_382004:
    if (ctx->pc == 0x382004u) {
        ctx->pc = 0x382004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382000u;
        // 0x382004: 0xae560004  sw          $s6, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382008u;
        goto label_382008;
    }
    ctx->pc = 0x382000u;
    {
        const bool branch_taken_0x382000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382000u;
        // 0x382004: 0xae560004  sw          $s6, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382000) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382008u;
label_382008:
    // 0x382008: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x382008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_38200c:
    // 0x38200c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_382010:
    // 0x382010: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x382010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_382014:
    // 0x382014: 0x0  nop
    ctx->pc = 0x382014u;
    // NOP
label_382018:
    // 0x382018: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x382018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_38201c:
    // 0x38201c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x38201cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_382020:
    // 0x382020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x382020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_382024:
    // 0x382024: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x382024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_382028:
    // 0x382028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x382028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38202c:
    // 0x38202c: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
label_382030:
    if (ctx->pc == 0x382030u) {
        ctx->pc = 0x382030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38202Cu;
        // 0x382030: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382034u;
        goto label_382034;
    }
    ctx->pc = 0x38202Cu;
    {
        const bool branch_taken_0x38202c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x382030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38202Cu;
        // 0x382030: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38202c) {
            ctx->pc = 0x382018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382018;
        }
    }
    ctx->pc = 0x382034u;
label_382034:
    // 0x382034: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x382034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_382038:
    // 0x382038: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x382038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38203c:
    // 0x38203c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382040:
    // 0x382040: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x382040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_382044:
    // 0x382044: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x382044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_382048:
    // 0x382048: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x382048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_38204c:
    // 0x38204c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38204cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_382050:
    // 0x382050: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x382050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_382054:
    // 0x382054: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x382054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_382058:
    // 0x382058: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x382058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_38205c:
    // 0x38205c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_382060:
    if (ctx->pc == 0x382060u) {
        ctx->pc = 0x382060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38205Cu;
        // 0x382060: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382064u;
        goto label_382064;
    }
    ctx->pc = 0x38205Cu;
    {
        const bool branch_taken_0x38205c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38205Cu;
        // 0x382060: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38205c) {
            ctx->pc = 0x381E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381e80;
        }
    }
    ctx->pc = 0x382064u;
label_382064:
    // 0x382064: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x382064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_382068:
    // 0x382068: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x382068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38206c:
    // 0x38206c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x38206cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_382070:
    // 0x382070: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x382070u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_382074:
    // 0x382074: 0x102942  srl         $a1, $s0, 5
    ctx->pc = 0x382074u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_382078:
    // 0x382078: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x382078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_38207c:
    // 0x38207c: 0x8e2b0028  lw          $t3, 0x28($s1)
    ctx->pc = 0x38207cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_382080:
    // 0x382080: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x382080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_382084:
    // 0x382084: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x382084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_382088:
    // 0x382088: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x382088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_38208c:
    // 0x38208c: 0x24840101  addiu       $a0, $a0, 0x101
    ctx->pc = 0x38208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 257));
label_382090:
    // 0x382090: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x382090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_382094:
    // 0x382094: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x382094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
label_382098:
    // 0x382098: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x382098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38209c:
    // 0x38209c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x38209cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3820a0:
    // 0x3820a0: 0x27a80024  addiu       $t0, $sp, 0x24
    ctx->pc = 0x3820a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_3820a4:
    // 0x3820a4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x3820a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_3820a8:
    // 0x3820a8: 0x27a90028  addiu       $t1, $sp, 0x28
    ctx->pc = 0x3820a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_3820ac:
    // 0x3820ac: 0xc0e0e56  jal         func_383958
label_3820b0:
    if (ctx->pc == 0x3820B0u) {
        ctx->pc = 0x3820B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820ACu;
        // 0x3820b0: 0x27aa002c  addiu       $t2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820B4u;
        goto label_3820b4;
    }
    ctx->pc = 0x3820ACu;
    SET_GPR_U32(ctx, 31, 0x3820B4u);
    ctx->pc = 0x3820B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3820ACu;
    // 0x3820b0: 0x27aa002c  addiu       $t2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383958u, 0x3820ACu, 0x3820B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3820B4u;
label_3820b4:
    // 0x3820b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3820b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3820b8:
    // 0x3820b8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_3820bc:
    if (ctx->pc == 0x3820BCu) {
        ctx->pc = 0x3820BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820B8u;
        // 0x3820bc: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820C0u;
        goto label_3820c0;
    }
    ctx->pc = 0x3820B8u;
    {
        const bool branch_taken_0x3820b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3820BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820B8u;
        // 0x3820bc: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3820b8) {
            ctx->pc = 0x382100u;
            goto label_382100;
        }
    }
    ctx->pc = 0x3820C0u;
label_3820c0:
    // 0x3820c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3820c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3820c4:
    // 0x3820c4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3820c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_3820c8:
    // 0x3820c8: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_3820cc:
    if (ctx->pc == 0x3820CCu) {
        ctx->pc = 0x3820CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820C8u;
        // 0x3820cc: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820D0u;
        goto label_3820d0;
    }
    ctx->pc = 0x3820C8u;
    {
        const bool branch_taken_0x3820c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3820c8) {
            ctx->pc = 0x3820CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3820C8u;
            // 0x3820cc: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3820E8u;
            goto label_3820e8;
        }
    }
    ctx->pc = 0x3820D0u;
label_3820d0:
    // 0x3820d0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3820d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3820d4:
    // 0x3820d4: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3820d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3820d8:
    // 0x3820d8: 0x40f809  jalr        $v0
label_3820dc:
    if (ctx->pc == 0x3820DCu) {
        ctx->pc = 0x3820DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820D8u;
        // 0x3820dc: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3820E0u;
        goto label_3820e0;
    }
    ctx->pc = 0x3820D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3820E0u);
        ctx->pc = 0x3820DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820D8u;
        // 0x3820dc: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3820D8u, 0x3820E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3820E0u;
label_3820e0:
    // 0x3820e0: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x3820e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
label_3820e4:
    // 0x3820e4: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x3820e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_3820e8:
    // 0x3820e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3820e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3820ec:
    // 0x3820ec: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x3820ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_3820f0:
    // 0x3820f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3820f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3820f4:
    // 0x3820f4: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x3820f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_3820f8:
    // 0x3820f8: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3820fc:
    if (ctx->pc == 0x3820FCu) {
        ctx->pc = 0x3820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820F8u;
        // 0x3820fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382100u;
        goto label_382100;
    }
    ctx->pc = 0x3820F8u;
    {
        const bool branch_taken_0x3820f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820F8u;
        // 0x3820fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3820f8) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382100u;
label_382100:
    // 0x382100: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x382100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_382104:
    // 0x382104: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x382104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382108:
    // 0x382108: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x382108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_38210c:
    // 0x38210c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x38210cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_382110:
    // 0x382110: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x382110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_382114:
    // 0x382114: 0xc0e0b5a  jal         func_382D68
label_382118:
    if (ctx->pc == 0x382118u) {
        ctx->pc = 0x382118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382114u;
        // 0x382118: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38211Cu;
        goto label_38211c;
    }
    ctx->pc = 0x382114u;
    SET_GPR_U32(ctx, 31, 0x38211Cu);
    ctx->pc = 0x382118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382114u;
    // 0x382118: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382D68u, 0x382114u, 0x38211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38211Cu;
label_38211c:
    // 0x38211c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_382120:
    if (ctx->pc == 0x382120u) {
        ctx->pc = 0x382120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38211Cu;
        // 0x382120: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382124u;
        goto label_382124;
    }
    ctx->pc = 0x38211Cu;
    {
        const bool branch_taken_0x38211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38211Cu;
        // 0x382120: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38211c) {
            ctx->pc = 0x382140u;
            goto label_382140;
        }
    }
    ctx->pc = 0x382124u;
label_382124:
    // 0x382124: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382124u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382128:
    // 0x382128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38212c:
    // 0x38212c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x38212cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382130:
    // 0x382130: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382134:
    // 0x382134: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x382134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_382138:
    // 0x382138: 0x1000008b  b           . + 4 + (0x8B << 2)
label_38213c:
    if (ctx->pc == 0x38213Cu) {
        ctx->pc = 0x38213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382138u;
        // 0x38213c: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382140u;
        goto label_382140;
    }
    ctx->pc = 0x382138u;
    {
        const bool branch_taken_0x382138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382138u;
        // 0x38213c: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382138) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382140u;
label_382140:
    // 0x382140: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x382140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_382144:
    // 0x382144: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x382144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_382148:
    // 0x382148: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x382148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_38214c:
    // 0x38214c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x38214cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_382150:
    // 0x382150: 0x40f809  jalr        $v0
label_382154:
    if (ctx->pc == 0x382154u) {
        ctx->pc = 0x382154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382150u;
        // 0x382154: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382158u;
        goto label_382158;
    }
    ctx->pc = 0x382150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382158u);
        ctx->pc = 0x382154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382150u;
        // 0x382154: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382150u, 0x382158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382158u;
label_382158:
    // 0x382158: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x382158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38215c:
    // 0x38215c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38215cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_382160:
    // 0x382160: 0x7bac0030  lq          $t4, 0x30($sp)
    ctx->pc = 0x382160u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382164:
    // 0x382164: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382164u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382168:
    // 0x382168: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x382168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_38216c:
    // 0x38216c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x38216cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382170:
    // 0x382170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382174:
    // 0x382174: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x382174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_382178:
    // 0x382178: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38217c:
    // 0x38217c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_382180:
    // 0x382180: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x382180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_382184:
    // 0x382184: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x382184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_382188:
    // 0x382188: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x382188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_38218c:
    // 0x38218c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x38218cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_382190:
    // 0x382190: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x382190u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
label_382194:
    // 0x382194: 0xc0e0954  jal         func_382550
label_382198:
    if (ctx->pc == 0x382198u) {
        ctx->pc = 0x382198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382194u;
        // 0x382198: 0xae3e0038  sw          $fp, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38219Cu;
        goto label_38219c;
    }
    ctx->pc = 0x382194u;
    SET_GPR_U32(ctx, 31, 0x38219Cu);
    ctx->pc = 0x382198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382194u;
    // 0x382198: 0xae3e0038  sw          $fp, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382550u, 0x382194u, 0x38219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38219Cu;
label_38219c:
    // 0x38219c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x38219cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3821a0:
    // 0x3821a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3821a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3821a4:
    // 0x3821a4: 0x11820004  beq         $t4, $v0, . + 4 + (0x4 << 2)
label_3821a8:
    if (ctx->pc == 0x3821A8u) {
        ctx->pc = 0x3821A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821A4u;
        // 0x3821a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821ACu;
        goto label_3821ac;
    }
    ctx->pc = 0x3821A4u;
    {
        const bool branch_taken_0x3821a4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x3821A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821A4u;
        // 0x3821a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821a4) {
            ctx->pc = 0x3821B8u;
            goto label_3821b8;
        }
    }
    ctx->pc = 0x3821ACu;
label_3821ac:
    // 0x3821ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3821acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3821b0:
    // 0x3821b0: 0x10000074  b           . + 4 + (0x74 << 2)
label_3821b4:
    if (ctx->pc == 0x3821B4u) {
        ctx->pc = 0x3821B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821B0u;
        // 0x3821b4: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821B8u;
        goto label_3821b8;
    }
    ctx->pc = 0x3821B0u;
    {
        const bool branch_taken_0x3821b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3821B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821B0u;
        // 0x3821b4: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821b0) {
            ctx->pc = 0x382384u;
            goto label_382384;
        }
    }
    ctx->pc = 0x3821B8u;
label_3821b8:
    // 0x3821b8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3821b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3821bc:
    // 0x3821bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3821bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3821c0:
    // 0x3821c0: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x3821c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_3821c4:
    // 0x3821c4: 0xc0e0b78  jal         func_382DE0
label_3821c8:
    if (ctx->pc == 0x3821C8u) {
        ctx->pc = 0x3821C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821C4u;
        // 0x3821c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821CCu;
        goto label_3821cc;
    }
    ctx->pc = 0x3821C4u;
    SET_GPR_U32(ctx, 31, 0x3821CCu);
    ctx->pc = 0x3821C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3821C4u;
    // 0x3821c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382DE0u, 0x3821C4u, 0x3821CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3821CCu;
label_3821cc:
    // 0x3821cc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3821ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3821d0:
    // 0x3821d0: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x3821d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3821d4:
    // 0x3821d4: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x3821d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3821d8:
    // 0x3821d8: 0x8e560004  lw          $s6, 0x4($s2)
    ctx->pc = 0x3821d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3821dc:
    // 0x3821dc: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x3821dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3821e0:
    // 0x3821e0: 0xde340020  ld          $s4, 0x20($s1)
    ctx->pc = 0x3821e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_3821e4:
    // 0x3821e4: 0x8e33001c  lw          $s3, 0x1C($s1)
    ctx->pc = 0x3821e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3821e8:
    // 0x3821e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3821ec:
    if (ctx->pc == 0x3821ECu) {
        ctx->pc = 0x3821ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821E8u;
        // 0x3821ec: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821F0u;
        goto label_3821f0;
    }
    ctx->pc = 0x3821E8u;
    {
        const bool branch_taken_0x3821e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3821ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821E8u;
        // 0x3821ec: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821e8) {
            ctx->pc = 0x3821FCu;
            goto label_3821fc;
        }
    }
    ctx->pc = 0x3821F0u;
label_3821f0:
    // 0x3821f0: 0x7e1023  subu        $v0, $v1, $fp
    ctx->pc = 0x3821f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_3821f4:
    // 0x3821f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3821f8:
    if (ctx->pc == 0x3821F8u) {
        ctx->pc = 0x3821F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821F4u;
        // 0x3821f8: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3821FCu;
        goto label_3821fc;
    }
    ctx->pc = 0x3821F4u;
    {
        const bool branch_taken_0x3821f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3821F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821F4u;
        // 0x3821f8: 0x2457ffff  addiu       $s7, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821f4) {
            ctx->pc = 0x382204u;
            goto label_382204;
        }
    }
    ctx->pc = 0x3821FCu;
label_3821fc:
    // 0x3821fc: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3821fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_382200:
    // 0x382200: 0x5eb823  subu        $s7, $v0, $fp
    ctx->pc = 0x382200u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_382204:
    // 0x382204: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x382204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_382208:
    // 0x382208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38220c:
    if (ctx->pc == 0x38220Cu) {
        ctx->pc = 0x38220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382208u;
        // 0x38220c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382210u;
        goto label_382210;
    }
    ctx->pc = 0x382208u;
    {
        const bool branch_taken_0x382208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382208u;
        // 0x38220c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382208) {
            ctx->pc = 0x382218u;
            goto label_382218;
        }
    }
    ctx->pc = 0x382210u;
label_382210:
    // 0x382210: 0x1000fd9b  b           . + 4 + (-0x265 << 2)
label_382214:
    if (ctx->pc == 0x382214u) {
        ctx->pc = 0x382214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382210u;
        // 0x382214: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382218u;
        goto label_382218;
    }
    ctx->pc = 0x382210u;
    {
        const bool branch_taken_0x382210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382210u;
        // 0x382214: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382210) {
            ctx->pc = 0x381880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381880;
        }
    }
    ctx->pc = 0x382218u;
label_382218:
    // 0x382218: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x382218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38221c:
    // 0x38221c: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x38221cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_382220:
    // 0x382220: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x382220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_382224:
    // 0x382224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382228:
    // 0x382228: 0xc0e0ede  jal         func_383B78
label_38222c:
    if (ctx->pc == 0x38222Cu) {
        ctx->pc = 0x38222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382228u;
        // 0x38222c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382230u;
        goto label_382230;
    }
    ctx->pc = 0x382228u;
    SET_GPR_U32(ctx, 31, 0x382230u);
    ctx->pc = 0x38222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382228u;
    // 0x38222c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x382228u, 0x382230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382230u;
label_382230:
    // 0x382230: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x382230u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_382234:
    // 0x382234: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x382234u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_382238:
    // 0x382238: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x382238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_38223c:
    // 0x38223c: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x38223cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_382240:
    // 0x382240: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x382240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_382244:
    // 0x382244: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x382244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_382248:
    // 0x382248: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_38224c:
    if (ctx->pc == 0x38224Cu) {
        ctx->pc = 0x38224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382248u;
        // 0x38224c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382250u;
        goto label_382250;
    }
    ctx->pc = 0x382248u;
    {
        const bool branch_taken_0x382248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382248u;
        // 0x38224c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382248) {
            ctx->pc = 0x382268u;
            goto label_382268;
        }
    }
    ctx->pc = 0x382250u;
label_382250:
    // 0x382250: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382250u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382254:
    // 0x382254: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x382254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382258:
    // 0x382258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38225c:
    // 0x38225c: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x38225cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_382260:
    // 0x382260: 0x10000041  b           . + 4 + (0x41 << 2)
label_382264:
    if (ctx->pc == 0x382264u) {
        ctx->pc = 0x382264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382260u;
        // 0x382264: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382268u;
        goto label_382268;
    }
    ctx->pc = 0x382260u;
    {
        const bool branch_taken_0x382260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382260u;
        // 0x382264: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382260) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382268u;
label_382268:
    // 0x382268: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x382268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38226c:
    // 0x38226c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38226cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_382270:
    // 0x382270: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382270u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382274:
    // 0x382274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382278:
    // 0x382278: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x382278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_38227c:
    // 0x38227c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382280:
    // 0x382280: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x382280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_382284:
    // 0x382284: 0x10000038  b           . + 4 + (0x38 << 2)
label_382288:
    if (ctx->pc == 0x382288u) {
        ctx->pc = 0x382288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382284u;
        // 0x382288: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38228Cu;
        goto label_38228c;
    }
    ctx->pc = 0x382284u;
    {
        const bool branch_taken_0x382284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382284u;
        // 0x382288: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382284) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x38228Cu;
label_38228c:
    // 0x38228c: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x38228cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382290:
    // 0x382290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382294:
    // 0x382294: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x382294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382298:
    // 0x382298: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38229c:
    // 0x38229c: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x38229cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_3822a0:
    // 0x3822a0: 0x10000031  b           . + 4 + (0x31 << 2)
label_3822a4:
    if (ctx->pc == 0x3822A4u) {
        ctx->pc = 0x3822A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822A0u;
        // 0x3822a4: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822A8u;
        goto label_3822a8;
    }
    ctx->pc = 0x3822A0u;
    {
        const bool branch_taken_0x3822a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822A0u;
        // 0x3822a4: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822a0) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x3822A8u;
label_3822a8:
    // 0x3822a8: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x3822a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_3822ac:
    // 0x3822ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3822acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3822b0:
    // 0x3822b0: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x3822b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_3822b4:
    // 0x3822b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3822b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3822b8:
    // 0x3822b8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3822b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3822bc:
    // 0x3822bc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3822c0:
    if (ctx->pc == 0x3822C0u) {
        ctx->pc = 0x3822C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822BCu;
        // 0x3822c0: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822C4u;
        goto label_3822c4;
    }
    ctx->pc = 0x3822BCu;
    {
        const bool branch_taken_0x3822bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822BCu;
        // 0x3822c0: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822bc) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x3822C4u;
label_3822c4:
    // 0x3822c4: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x3822c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_3822c8:
    // 0x3822c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3822c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3822cc:
    // 0x3822cc: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x3822ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_3822d0:
    // 0x3822d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3822d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3822d4:
    // 0x3822d4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3822d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3822d8:
    // 0x3822d8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3822dc:
    if (ctx->pc == 0x3822DCu) {
        ctx->pc = 0x3822DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822D8u;
        // 0x3822dc: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822E0u;
        goto label_3822e0;
    }
    ctx->pc = 0x3822D8u;
    {
        const bool branch_taken_0x3822d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822D8u;
        // 0x3822dc: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822d8) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x3822E0u;
label_3822e0:
    // 0x3822e0: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x3822e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_3822e4:
    // 0x3822e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3822e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3822e8:
    // 0x3822e8: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x3822e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_3822ec:
    // 0x3822ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3822ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3822f0:
    // 0x3822f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3822f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3822f4:
    // 0x3822f4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3822f8:
    if (ctx->pc == 0x3822F8u) {
        ctx->pc = 0x3822F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822F4u;
        // 0x3822f8: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3822FCu;
        goto label_3822fc;
    }
    ctx->pc = 0x3822F4u;
    {
        const bool branch_taken_0x3822f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822F4u;
        // 0x3822f8: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822f4) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x3822FCu;
label_3822fc:
    // 0x3822fc: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x3822fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382300:
    // 0x382300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382304:
    // 0x382304: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x382304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382308:
    // 0x382308: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38230c:
    // 0x38230c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x38230cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_382310:
    // 0x382310: 0x10000015  b           . + 4 + (0x15 << 2)
label_382314:
    if (ctx->pc == 0x382314u) {
        ctx->pc = 0x382314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382310u;
        // 0x382314: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382318u;
        goto label_382318;
    }
    ctx->pc = 0x382310u;
    {
        const bool branch_taken_0x382310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382310u;
        // 0x382314: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382310) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382318u;
label_382318:
    // 0x382318: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382318u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_38231c:
    // 0x38231c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382320:
    // 0x382320: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x382320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382324:
    // 0x382324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382328:
    // 0x382328: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x382328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_38232c:
    // 0x38232c: 0x1000000e  b           . + 4 + (0xE << 2)
label_382330:
    if (ctx->pc == 0x382330u) {
        ctx->pc = 0x382330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38232Cu;
        // 0x382330: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382334u;
        goto label_382334;
    }
    ctx->pc = 0x38232Cu;
    {
        const bool branch_taken_0x38232c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38232Cu;
        // 0x382330: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38232c) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382334u;
label_382334:
    // 0x382334: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382334u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382338:
    // 0x382338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38233c:
    // 0x38233c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x38233cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_382340:
    // 0x382340: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382344:
    // 0x382344: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x382344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_382348:
    // 0x382348: 0x10000007  b           . + 4 + (0x7 << 2)
label_38234c:
    if (ctx->pc == 0x38234Cu) {
        ctx->pc = 0x38234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382348u;
        // 0x38234c: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382350u;
        goto label_382350;
    }
    ctx->pc = 0x382348u;
    {
        const bool branch_taken_0x382348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382348u;
        // 0x38234c: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382348) {
            ctx->pc = 0x382368u;
            goto label_382368;
        }
    }
    ctx->pc = 0x382350u;
label_382350:
    // 0x382350: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x382350u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_382354:
    // 0x382354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382358:
    // 0x382358: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x382358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_38235c:
    // 0x38235c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382360:
    // 0x382360: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x382360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
label_382364:
    // 0x382364: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x382364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_382368:
    // 0x382368: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x382368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38236c:
    // 0x38236c: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x38236cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_382370:
    // 0x382370: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x382370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_382374:
    // 0x382374: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x382374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_382378:
    // 0x382378: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x382378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_38237c:
    // 0x38237c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x38237cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
label_382380:
    // 0x382380: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x382380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_382384:
    // 0x382384: 0xc0e0ede  jal         func_383B78
label_382388:
    if (ctx->pc == 0x382388u) {
        ctx->pc = 0x38238Cu;
        goto label_38238c;
    }
    ctx->pc = 0x382384u;
    SET_GPR_U32(ctx, 31, 0x38238Cu);
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x382384u, 0x38238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38238Cu;
label_38238c:
    // 0x38238c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x38238cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_382390:
    // 0x382390: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x382390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_382394:
    // 0x382394: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x382394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_382398:
    // 0x382398: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x382398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38239c:
    // 0x38239c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x38239cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3823a0:
    // 0x3823a0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3823a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3823a4:
    // 0x3823a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3823a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3823a8:
    // 0x3823a8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3823a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3823ac:
    // 0x3823ac: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3823acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3823b0:
    // 0x3823b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3823b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3823b4:
    // 0x3823b4: 0x3e00008  jr          $ra
label_3823b8:
    if (ctx->pc == 0x3823B8u) {
        ctx->pc = 0x3823B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823B4u;
        // 0x3823b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823BCu;
        goto label_3823bc;
    }
    ctx->pc = 0x3823B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3823B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823B4u;
        // 0x3823b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3823B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3823BCu;
label_3823bc:
    // 0x3823bc: 0x0  nop
    ctx->pc = 0x3823bcu;
    // NOP
    ctx->pc = 0x3823c0u;
}
