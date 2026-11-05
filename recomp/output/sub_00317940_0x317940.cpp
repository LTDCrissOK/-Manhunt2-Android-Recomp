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

// Function: sub_00317940
// Address: 0x317940 - 0x318118
void sub_00317940_0x317940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317940_0x317940");
#endif

    switch (ctx->pc) {
        case 0x317940u: goto label_317940;
        case 0x317944u: goto label_317944;
        case 0x317948u: goto label_317948;
        case 0x31794cu: goto label_31794c;
        case 0x317950u: goto label_317950;
        case 0x317954u: goto label_317954;
        case 0x317958u: goto label_317958;
        case 0x31795cu: goto label_31795c;
        case 0x317960u: goto label_317960;
        case 0x317964u: goto label_317964;
        case 0x317968u: goto label_317968;
        case 0x31796cu: goto label_31796c;
        case 0x317970u: goto label_317970;
        case 0x317974u: goto label_317974;
        case 0x317978u: goto label_317978;
        case 0x31797cu: goto label_31797c;
        case 0x317980u: goto label_317980;
        case 0x317984u: goto label_317984;
        case 0x317988u: goto label_317988;
        case 0x31798cu: goto label_31798c;
        case 0x317990u: goto label_317990;
        case 0x317994u: goto label_317994;
        case 0x317998u: goto label_317998;
        case 0x31799cu: goto label_31799c;
        case 0x3179a0u: goto label_3179a0;
        case 0x3179a4u: goto label_3179a4;
        case 0x3179a8u: goto label_3179a8;
        case 0x3179acu: goto label_3179ac;
        case 0x3179b0u: goto label_3179b0;
        case 0x3179b4u: goto label_3179b4;
        case 0x3179b8u: goto label_3179b8;
        case 0x3179bcu: goto label_3179bc;
        case 0x3179c0u: goto label_3179c0;
        case 0x3179c4u: goto label_3179c4;
        case 0x3179c8u: goto label_3179c8;
        case 0x3179ccu: goto label_3179cc;
        case 0x3179d0u: goto label_3179d0;
        case 0x3179d4u: goto label_3179d4;
        case 0x3179d8u: goto label_3179d8;
        case 0x3179dcu: goto label_3179dc;
        case 0x3179e0u: goto label_3179e0;
        case 0x3179e4u: goto label_3179e4;
        case 0x3179e8u: goto label_3179e8;
        case 0x3179ecu: goto label_3179ec;
        case 0x3179f0u: goto label_3179f0;
        case 0x3179f4u: goto label_3179f4;
        case 0x3179f8u: goto label_3179f8;
        case 0x3179fcu: goto label_3179fc;
        case 0x317a00u: goto label_317a00;
        case 0x317a04u: goto label_317a04;
        case 0x317a08u: goto label_317a08;
        case 0x317a0cu: goto label_317a0c;
        case 0x317a10u: goto label_317a10;
        case 0x317a14u: goto label_317a14;
        case 0x317a18u: goto label_317a18;
        case 0x317a1cu: goto label_317a1c;
        case 0x317a20u: goto label_317a20;
        case 0x317a24u: goto label_317a24;
        case 0x317a28u: goto label_317a28;
        case 0x317a2cu: goto label_317a2c;
        case 0x317a30u: goto label_317a30;
        case 0x317a34u: goto label_317a34;
        case 0x317a38u: goto label_317a38;
        case 0x317a3cu: goto label_317a3c;
        case 0x317a40u: goto label_317a40;
        case 0x317a44u: goto label_317a44;
        case 0x317a48u: goto label_317a48;
        case 0x317a4cu: goto label_317a4c;
        case 0x317a50u: goto label_317a50;
        case 0x317a54u: goto label_317a54;
        case 0x317a58u: goto label_317a58;
        case 0x317a5cu: goto label_317a5c;
        case 0x317a60u: goto label_317a60;
        case 0x317a64u: goto label_317a64;
        case 0x317a68u: goto label_317a68;
        case 0x317a6cu: goto label_317a6c;
        case 0x317a70u: goto label_317a70;
        case 0x317a74u: goto label_317a74;
        case 0x317a78u: goto label_317a78;
        case 0x317a7cu: goto label_317a7c;
        case 0x317a80u: goto label_317a80;
        case 0x317a84u: goto label_317a84;
        case 0x317a88u: goto label_317a88;
        case 0x317a8cu: goto label_317a8c;
        case 0x317a90u: goto label_317a90;
        case 0x317a94u: goto label_317a94;
        case 0x317a98u: goto label_317a98;
        case 0x317a9cu: goto label_317a9c;
        case 0x317aa0u: goto label_317aa0;
        case 0x317aa4u: goto label_317aa4;
        case 0x317aa8u: goto label_317aa8;
        case 0x317aacu: goto label_317aac;
        case 0x317ab0u: goto label_317ab0;
        case 0x317ab4u: goto label_317ab4;
        case 0x317ab8u: goto label_317ab8;
        case 0x317abcu: goto label_317abc;
        case 0x317ac0u: goto label_317ac0;
        case 0x317ac4u: goto label_317ac4;
        case 0x317ac8u: goto label_317ac8;
        case 0x317accu: goto label_317acc;
        case 0x317ad0u: goto label_317ad0;
        case 0x317ad4u: goto label_317ad4;
        case 0x317ad8u: goto label_317ad8;
        case 0x317adcu: goto label_317adc;
        case 0x317ae0u: goto label_317ae0;
        case 0x317ae4u: goto label_317ae4;
        case 0x317ae8u: goto label_317ae8;
        case 0x317aecu: goto label_317aec;
        case 0x317af0u: goto label_317af0;
        case 0x317af4u: goto label_317af4;
        case 0x317af8u: goto label_317af8;
        case 0x317afcu: goto label_317afc;
        case 0x317b00u: goto label_317b00;
        case 0x317b04u: goto label_317b04;
        case 0x317b08u: goto label_317b08;
        case 0x317b0cu: goto label_317b0c;
        case 0x317b10u: goto label_317b10;
        case 0x317b14u: goto label_317b14;
        case 0x317b18u: goto label_317b18;
        case 0x317b1cu: goto label_317b1c;
        case 0x317b20u: goto label_317b20;
        case 0x317b24u: goto label_317b24;
        case 0x317b28u: goto label_317b28;
        case 0x317b2cu: goto label_317b2c;
        case 0x317b30u: goto label_317b30;
        case 0x317b34u: goto label_317b34;
        case 0x317b38u: goto label_317b38;
        case 0x317b3cu: goto label_317b3c;
        case 0x317b40u: goto label_317b40;
        case 0x317b44u: goto label_317b44;
        case 0x317b48u: goto label_317b48;
        case 0x317b4cu: goto label_317b4c;
        case 0x317b50u: goto label_317b50;
        case 0x317b54u: goto label_317b54;
        case 0x317b58u: goto label_317b58;
        case 0x317b5cu: goto label_317b5c;
        case 0x317b60u: goto label_317b60;
        case 0x317b64u: goto label_317b64;
        case 0x317b68u: goto label_317b68;
        case 0x317b6cu: goto label_317b6c;
        case 0x317b70u: goto label_317b70;
        case 0x317b74u: goto label_317b74;
        case 0x317b78u: goto label_317b78;
        case 0x317b7cu: goto label_317b7c;
        case 0x317b80u: goto label_317b80;
        case 0x317b84u: goto label_317b84;
        case 0x317b88u: goto label_317b88;
        case 0x317b8cu: goto label_317b8c;
        case 0x317b90u: goto label_317b90;
        case 0x317b94u: goto label_317b94;
        case 0x317b98u: goto label_317b98;
        case 0x317b9cu: goto label_317b9c;
        case 0x317ba0u: goto label_317ba0;
        case 0x317ba4u: goto label_317ba4;
        case 0x317ba8u: goto label_317ba8;
        case 0x317bacu: goto label_317bac;
        case 0x317bb0u: goto label_317bb0;
        case 0x317bb4u: goto label_317bb4;
        case 0x317bb8u: goto label_317bb8;
        case 0x317bbcu: goto label_317bbc;
        case 0x317bc0u: goto label_317bc0;
        case 0x317bc4u: goto label_317bc4;
        case 0x317bc8u: goto label_317bc8;
        case 0x317bccu: goto label_317bcc;
        case 0x317bd0u: goto label_317bd0;
        case 0x317bd4u: goto label_317bd4;
        case 0x317bd8u: goto label_317bd8;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be0u: goto label_317be0;
        case 0x317be4u: goto label_317be4;
        case 0x317be8u: goto label_317be8;
        case 0x317becu: goto label_317bec;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bf4u: goto label_317bf4;
        case 0x317bf8u: goto label_317bf8;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c00u: goto label_317c00;
        case 0x317c04u: goto label_317c04;
        case 0x317c08u: goto label_317c08;
        case 0x317c0cu: goto label_317c0c;
        case 0x317c10u: goto label_317c10;
        case 0x317c14u: goto label_317c14;
        case 0x317c18u: goto label_317c18;
        case 0x317c1cu: goto label_317c1c;
        case 0x317c20u: goto label_317c20;
        case 0x317c24u: goto label_317c24;
        case 0x317c28u: goto label_317c28;
        case 0x317c2cu: goto label_317c2c;
        case 0x317c30u: goto label_317c30;
        case 0x317c34u: goto label_317c34;
        case 0x317c38u: goto label_317c38;
        case 0x317c3cu: goto label_317c3c;
        case 0x317c40u: goto label_317c40;
        case 0x317c44u: goto label_317c44;
        case 0x317c48u: goto label_317c48;
        case 0x317c4cu: goto label_317c4c;
        case 0x317c50u: goto label_317c50;
        case 0x317c54u: goto label_317c54;
        case 0x317c58u: goto label_317c58;
        case 0x317c5cu: goto label_317c5c;
        case 0x317c60u: goto label_317c60;
        case 0x317c64u: goto label_317c64;
        case 0x317c68u: goto label_317c68;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c70u: goto label_317c70;
        case 0x317c74u: goto label_317c74;
        case 0x317c78u: goto label_317c78;
        case 0x317c7cu: goto label_317c7c;
        case 0x317c80u: goto label_317c80;
        case 0x317c84u: goto label_317c84;
        case 0x317c88u: goto label_317c88;
        case 0x317c8cu: goto label_317c8c;
        case 0x317c90u: goto label_317c90;
        case 0x317c94u: goto label_317c94;
        case 0x317c98u: goto label_317c98;
        case 0x317c9cu: goto label_317c9c;
        case 0x317ca0u: goto label_317ca0;
        case 0x317ca4u: goto label_317ca4;
        case 0x317ca8u: goto label_317ca8;
        case 0x317cacu: goto label_317cac;
        case 0x317cb0u: goto label_317cb0;
        case 0x317cb4u: goto label_317cb4;
        case 0x317cb8u: goto label_317cb8;
        case 0x317cbcu: goto label_317cbc;
        case 0x317cc0u: goto label_317cc0;
        case 0x317cc4u: goto label_317cc4;
        case 0x317cc8u: goto label_317cc8;
        case 0x317cccu: goto label_317ccc;
        case 0x317cd0u: goto label_317cd0;
        case 0x317cd4u: goto label_317cd4;
        case 0x317cd8u: goto label_317cd8;
        case 0x317cdcu: goto label_317cdc;
        case 0x317ce0u: goto label_317ce0;
        case 0x317ce4u: goto label_317ce4;
        case 0x317ce8u: goto label_317ce8;
        case 0x317cecu: goto label_317cec;
        case 0x317cf0u: goto label_317cf0;
        case 0x317cf4u: goto label_317cf4;
        case 0x317cf8u: goto label_317cf8;
        case 0x317cfcu: goto label_317cfc;
        case 0x317d00u: goto label_317d00;
        case 0x317d04u: goto label_317d04;
        case 0x317d08u: goto label_317d08;
        case 0x317d0cu: goto label_317d0c;
        case 0x317d10u: goto label_317d10;
        case 0x317d14u: goto label_317d14;
        case 0x317d18u: goto label_317d18;
        case 0x317d1cu: goto label_317d1c;
        case 0x317d20u: goto label_317d20;
        case 0x317d24u: goto label_317d24;
        case 0x317d28u: goto label_317d28;
        case 0x317d2cu: goto label_317d2c;
        case 0x317d30u: goto label_317d30;
        case 0x317d34u: goto label_317d34;
        case 0x317d38u: goto label_317d38;
        case 0x317d3cu: goto label_317d3c;
        case 0x317d40u: goto label_317d40;
        case 0x317d44u: goto label_317d44;
        case 0x317d48u: goto label_317d48;
        case 0x317d4cu: goto label_317d4c;
        case 0x317d50u: goto label_317d50;
        case 0x317d54u: goto label_317d54;
        case 0x317d58u: goto label_317d58;
        case 0x317d5cu: goto label_317d5c;
        case 0x317d60u: goto label_317d60;
        case 0x317d64u: goto label_317d64;
        case 0x317d68u: goto label_317d68;
        case 0x317d6cu: goto label_317d6c;
        case 0x317d70u: goto label_317d70;
        case 0x317d74u: goto label_317d74;
        case 0x317d78u: goto label_317d78;
        case 0x317d7cu: goto label_317d7c;
        case 0x317d80u: goto label_317d80;
        case 0x317d84u: goto label_317d84;
        case 0x317d88u: goto label_317d88;
        case 0x317d8cu: goto label_317d8c;
        case 0x317d90u: goto label_317d90;
        case 0x317d94u: goto label_317d94;
        case 0x317d98u: goto label_317d98;
        case 0x317d9cu: goto label_317d9c;
        case 0x317da0u: goto label_317da0;
        case 0x317da4u: goto label_317da4;
        case 0x317da8u: goto label_317da8;
        case 0x317dacu: goto label_317dac;
        case 0x317db0u: goto label_317db0;
        case 0x317db4u: goto label_317db4;
        case 0x317db8u: goto label_317db8;
        case 0x317dbcu: goto label_317dbc;
        case 0x317dc0u: goto label_317dc0;
        case 0x317dc4u: goto label_317dc4;
        case 0x317dc8u: goto label_317dc8;
        case 0x317dccu: goto label_317dcc;
        case 0x317dd0u: goto label_317dd0;
        case 0x317dd4u: goto label_317dd4;
        case 0x317dd8u: goto label_317dd8;
        case 0x317ddcu: goto label_317ddc;
        case 0x317de0u: goto label_317de0;
        case 0x317de4u: goto label_317de4;
        case 0x317de8u: goto label_317de8;
        case 0x317decu: goto label_317dec;
        case 0x317df0u: goto label_317df0;
        case 0x317df4u: goto label_317df4;
        case 0x317df8u: goto label_317df8;
        case 0x317dfcu: goto label_317dfc;
        case 0x317e00u: goto label_317e00;
        case 0x317e04u: goto label_317e04;
        case 0x317e08u: goto label_317e08;
        case 0x317e0cu: goto label_317e0c;
        case 0x317e10u: goto label_317e10;
        case 0x317e14u: goto label_317e14;
        case 0x317e18u: goto label_317e18;
        case 0x317e1cu: goto label_317e1c;
        case 0x317e20u: goto label_317e20;
        case 0x317e24u: goto label_317e24;
        case 0x317e28u: goto label_317e28;
        case 0x317e2cu: goto label_317e2c;
        case 0x317e30u: goto label_317e30;
        case 0x317e34u: goto label_317e34;
        case 0x317e38u: goto label_317e38;
        case 0x317e3cu: goto label_317e3c;
        case 0x317e40u: goto label_317e40;
        case 0x317e44u: goto label_317e44;
        case 0x317e48u: goto label_317e48;
        case 0x317e4cu: goto label_317e4c;
        case 0x317e50u: goto label_317e50;
        case 0x317e54u: goto label_317e54;
        case 0x317e58u: goto label_317e58;
        case 0x317e5cu: goto label_317e5c;
        case 0x317e60u: goto label_317e60;
        case 0x317e64u: goto label_317e64;
        case 0x317e68u: goto label_317e68;
        case 0x317e6cu: goto label_317e6c;
        case 0x317e70u: goto label_317e70;
        case 0x317e74u: goto label_317e74;
        case 0x317e78u: goto label_317e78;
        case 0x317e7cu: goto label_317e7c;
        case 0x317e80u: goto label_317e80;
        case 0x317e84u: goto label_317e84;
        case 0x317e88u: goto label_317e88;
        case 0x317e8cu: goto label_317e8c;
        case 0x317e90u: goto label_317e90;
        case 0x317e94u: goto label_317e94;
        case 0x317e98u: goto label_317e98;
        case 0x317e9cu: goto label_317e9c;
        case 0x317ea0u: goto label_317ea0;
        case 0x317ea4u: goto label_317ea4;
        case 0x317ea8u: goto label_317ea8;
        case 0x317eacu: goto label_317eac;
        case 0x317eb0u: goto label_317eb0;
        case 0x317eb4u: goto label_317eb4;
        case 0x317eb8u: goto label_317eb8;
        case 0x317ebcu: goto label_317ebc;
        case 0x317ec0u: goto label_317ec0;
        case 0x317ec4u: goto label_317ec4;
        case 0x317ec8u: goto label_317ec8;
        case 0x317eccu: goto label_317ecc;
        case 0x317ed0u: goto label_317ed0;
        case 0x317ed4u: goto label_317ed4;
        case 0x317ed8u: goto label_317ed8;
        case 0x317edcu: goto label_317edc;
        case 0x317ee0u: goto label_317ee0;
        case 0x317ee4u: goto label_317ee4;
        case 0x317ee8u: goto label_317ee8;
        case 0x317eecu: goto label_317eec;
        case 0x317ef0u: goto label_317ef0;
        case 0x317ef4u: goto label_317ef4;
        case 0x317ef8u: goto label_317ef8;
        case 0x317efcu: goto label_317efc;
        case 0x317f00u: goto label_317f00;
        case 0x317f04u: goto label_317f04;
        case 0x317f08u: goto label_317f08;
        case 0x317f0cu: goto label_317f0c;
        case 0x317f10u: goto label_317f10;
        case 0x317f14u: goto label_317f14;
        case 0x317f18u: goto label_317f18;
        case 0x317f1cu: goto label_317f1c;
        case 0x317f20u: goto label_317f20;
        case 0x317f24u: goto label_317f24;
        case 0x317f28u: goto label_317f28;
        case 0x317f2cu: goto label_317f2c;
        case 0x317f30u: goto label_317f30;
        case 0x317f34u: goto label_317f34;
        case 0x317f38u: goto label_317f38;
        case 0x317f3cu: goto label_317f3c;
        case 0x317f40u: goto label_317f40;
        case 0x317f44u: goto label_317f44;
        case 0x317f48u: goto label_317f48;
        case 0x317f4cu: goto label_317f4c;
        case 0x317f50u: goto label_317f50;
        case 0x317f54u: goto label_317f54;
        case 0x317f58u: goto label_317f58;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f60u: goto label_317f60;
        case 0x317f64u: goto label_317f64;
        case 0x317f68u: goto label_317f68;
        case 0x317f6cu: goto label_317f6c;
        case 0x317f70u: goto label_317f70;
        case 0x317f74u: goto label_317f74;
        case 0x317f78u: goto label_317f78;
        case 0x317f7cu: goto label_317f7c;
        case 0x317f80u: goto label_317f80;
        case 0x317f84u: goto label_317f84;
        case 0x317f88u: goto label_317f88;
        case 0x317f8cu: goto label_317f8c;
        case 0x317f90u: goto label_317f90;
        case 0x317f94u: goto label_317f94;
        case 0x317f98u: goto label_317f98;
        case 0x317f9cu: goto label_317f9c;
        case 0x317fa0u: goto label_317fa0;
        case 0x317fa4u: goto label_317fa4;
        case 0x317fa8u: goto label_317fa8;
        case 0x317facu: goto label_317fac;
        case 0x317fb0u: goto label_317fb0;
        case 0x317fb4u: goto label_317fb4;
        case 0x317fb8u: goto label_317fb8;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc0u: goto label_317fc0;
        case 0x317fc4u: goto label_317fc4;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fccu: goto label_317fcc;
        case 0x317fd0u: goto label_317fd0;
        case 0x317fd4u: goto label_317fd4;
        case 0x317fd8u: goto label_317fd8;
        case 0x317fdcu: goto label_317fdc;
        case 0x317fe0u: goto label_317fe0;
        case 0x317fe4u: goto label_317fe4;
        case 0x317fe8u: goto label_317fe8;
        case 0x317fecu: goto label_317fec;
        case 0x317ff0u: goto label_317ff0;
        case 0x317ff4u: goto label_317ff4;
        case 0x317ff8u: goto label_317ff8;
        case 0x317ffcu: goto label_317ffc;
        case 0x318000u: goto label_318000;
        case 0x318004u: goto label_318004;
        case 0x318008u: goto label_318008;
        case 0x31800cu: goto label_31800c;
        case 0x318010u: goto label_318010;
        case 0x318014u: goto label_318014;
        case 0x318018u: goto label_318018;
        case 0x31801cu: goto label_31801c;
        case 0x318020u: goto label_318020;
        case 0x318024u: goto label_318024;
        case 0x318028u: goto label_318028;
        case 0x31802cu: goto label_31802c;
        case 0x318030u: goto label_318030;
        case 0x318034u: goto label_318034;
        case 0x318038u: goto label_318038;
        case 0x31803cu: goto label_31803c;
        case 0x318040u: goto label_318040;
        case 0x318044u: goto label_318044;
        case 0x318048u: goto label_318048;
        case 0x31804cu: goto label_31804c;
        case 0x318050u: goto label_318050;
        case 0x318054u: goto label_318054;
        case 0x318058u: goto label_318058;
        case 0x31805cu: goto label_31805c;
        case 0x318060u: goto label_318060;
        case 0x318064u: goto label_318064;
        case 0x318068u: goto label_318068;
        case 0x31806cu: goto label_31806c;
        case 0x318070u: goto label_318070;
        case 0x318074u: goto label_318074;
        case 0x318078u: goto label_318078;
        case 0x31807cu: goto label_31807c;
        case 0x318080u: goto label_318080;
        case 0x318084u: goto label_318084;
        case 0x318088u: goto label_318088;
        case 0x31808cu: goto label_31808c;
        case 0x318090u: goto label_318090;
        case 0x318094u: goto label_318094;
        case 0x318098u: goto label_318098;
        case 0x31809cu: goto label_31809c;
        case 0x3180a0u: goto label_3180a0;
        case 0x3180a4u: goto label_3180a4;
        case 0x3180a8u: goto label_3180a8;
        case 0x3180acu: goto label_3180ac;
        case 0x3180b0u: goto label_3180b0;
        case 0x3180b4u: goto label_3180b4;
        case 0x3180b8u: goto label_3180b8;
        case 0x3180bcu: goto label_3180bc;
        case 0x3180c0u: goto label_3180c0;
        case 0x3180c4u: goto label_3180c4;
        case 0x3180c8u: goto label_3180c8;
        case 0x3180ccu: goto label_3180cc;
        case 0x3180d0u: goto label_3180d0;
        case 0x3180d4u: goto label_3180d4;
        case 0x3180d8u: goto label_3180d8;
        case 0x3180dcu: goto label_3180dc;
        case 0x3180e0u: goto label_3180e0;
        case 0x3180e4u: goto label_3180e4;
        case 0x3180e8u: goto label_3180e8;
        case 0x3180ecu: goto label_3180ec;
        case 0x3180f0u: goto label_3180f0;
        case 0x3180f4u: goto label_3180f4;
        case 0x3180f8u: goto label_3180f8;
        case 0x3180fcu: goto label_3180fc;
        case 0x318100u: goto label_318100;
        case 0x318104u: goto label_318104;
        case 0x318108u: goto label_318108;
        case 0x31810cu: goto label_31810c;
        case 0x318110u: goto label_318110;
        case 0x318114u: goto label_318114;
        default: break;
    }

    ctx->pc = 0x317940u;

label_317940:
    // 0x317940: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_317944:
    // 0x317944: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_317948:
    // 0x317948: 0x8c45bd70  lw          $a1, -0x4290($v0)
    ctx->pc = 0x317948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950256)));
label_31794c:
    // 0x31794c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x31794cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_317950:
    // 0x317950: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x317950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
label_317954:
    // 0x317954: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_317958:
    // 0x317958: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x317958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
label_31795c:
    // 0x31795c: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x31795cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
label_317960:
    // 0x317960: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x317960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
label_317964:
    // 0x317964: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x317964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317968:
    // 0x317968: 0x90425ccc  lbu         $v0, 0x5CCC($v0)
    ctx->pc = 0x317968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23756)));
label_31796c:
    // 0x31796c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x31796cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_317970:
    // 0x317970: 0x8ea822c0  lw          $t0, 0x22C0($s5)
    ctx->pc = 0x317970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8896)));
label_317974:
    // 0x317974: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x317974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_317978:
    // 0x317978: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x317978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31797c:
    // 0x31797c: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x31797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_317980:
    // 0x317980: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x317980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
label_317984:
    // 0x317984: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x317984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
label_317988:
    // 0x317988: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x317988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_31798c:
    // 0x31798c: 0x24c622d8  addiu       $a2, $a2, 0x22D8
    ctx->pc = 0x31798cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8920));
label_317990:
    // 0x317990: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x317990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
label_317994:
    // 0x317994: 0x246322f0  addiu       $v1, $v1, 0x22F0
    ctx->pc = 0x317994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8944));
label_317998:
    // 0x317998: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x317998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_31799c:
    // 0x31799c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x31799cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_3179a0:
    // 0x3179a0: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x3179a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
label_3179a4:
    // 0x3179a4: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x3179a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_3179a8:
    // 0x3179a8: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x3179a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3179ac:
    // 0x3179ac: 0x8ec922d8  lw          $t1, 0x22D8($s6)
    ctx->pc = 0x3179acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8920)));
label_3179b0:
    // 0x3179b0: 0x8ee722f0  lw          $a3, 0x22F0($s7)
    ctx->pc = 0x3179b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8944)));
label_3179b4:
    // 0x3179b4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3179b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_3179b8:
    // 0x3179b8: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x3179b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
label_3179bc:
    // 0x3179bc: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x3179bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
label_3179c0:
    // 0x3179c0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_3179c4:
    if (ctx->pc == 0x3179C4u) {
        ctx->pc = 0x3179C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179C0u;
        // 0x3179c4: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3179C8u;
        goto label_3179c8;
    }
    ctx->pc = 0x3179C0u;
    {
        const bool branch_taken_0x3179c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3179C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179C0u;
        // 0x3179c4: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179c0) {
            ctx->pc = 0x3179F8u;
            goto label_3179f8;
        }
    }
    ctx->pc = 0x3179C8u;
label_3179c8:
    // 0x3179c8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3179c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_3179cc:
    // 0x3179cc: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x3179ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
label_3179d0:
    // 0x3179d0: 0x24433838  addiu       $v1, $v0, 0x3838
    ctx->pc = 0x3179d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14392));
label_3179d4:
    // 0x3179d4: 0x9c473838  lwu         $a3, 0x3838($v0)
    ctx->pc = 0x3179d4u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 14392)));
label_3179d8:
    // 0x3179d8: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x3179d8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3179dc:
    // 0x3179dc: 0x24a568d0  addiu       $a1, $a1, 0x68D0
    ctx->pc = 0x3179dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26832));
label_3179e0:
    // 0x3179e0: 0x26a422c0  addiu       $a0, $s5, 0x22C0
    ctx->pc = 0x3179e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
label_3179e4:
    // 0x3179e4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3179e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_3179e8:
    // 0x3179e8: 0xc08560a  jal         func_215828
label_3179ec:
    if (ctx->pc == 0x3179ECu) {
        ctx->pc = 0x3179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179E8u;
        // 0x3179ec: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3179F0u;
        goto label_3179f0;
    }
    ctx->pc = 0x3179E8u;
    SET_GPR_U32(ctx, 31, 0x3179F0u);
    ctx->pc = 0x3179ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179E8u;
    // 0x3179ec: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215828u, 0x3179E8u, 0x3179F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3179F0u;
label_3179f0:
    // 0x3179f0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_3179f4:
    if (ctx->pc == 0x3179F4u) {
        ctx->pc = 0x3179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179F0u;
        // 0x3179f4: 0x26a222c0  addiu       $v0, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3179F8u;
        goto label_3179f8;
    }
    ctx->pc = 0x3179F0u;
    {
        const bool branch_taken_0x3179f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179F0u;
        // 0x3179f4: 0x26a222c0  addiu       $v0, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179f0) {
            ctx->pc = 0x317BA8u;
            goto label_317ba8;
        }
    }
    ctx->pc = 0x3179F8u;
label_3179f8:
    // 0x3179f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3179f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3179fc:
    // 0x3179fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3179fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317a00:
    // 0x317a00: 0x8c43bd3c  lw          $v1, -0x42C4($v0)
    ctx->pc = 0x317a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950204)));
label_317a04:
    // 0x317a04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x317a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317a08:
    // 0x317a08: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x317a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317a0c:
    // 0x317a0c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x317a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_317a10:
    // 0x317a10: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x317a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_317a14:
    // 0x317a14: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x317a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317a18:
    // 0x317a18: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x317a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317a1c:
    // 0x317a1c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317a20:
    // 0x317a20: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x317a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317a24:
    // 0x317a24: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x317a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317a28:
    // 0x317a28: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x317a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317a2c:
    // 0x317a2c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317a30:
    // 0x317a30: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x317a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317a34:
    // 0x317a34: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x317a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_317a38:
    // 0x317a38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x317a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317a3c:
    // 0x317a3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x317a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_317a40:
    // 0x317a40: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x317a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317a44:
    // 0x317a44: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x317a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_317a48:
    // 0x317a48: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x317a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317a4c:
    // 0x317a4c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x317a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_317a50:
    // 0x317a50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x317a50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_317a54:
    // 0x317a54: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x317a54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_317a58:
    // 0x317a58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x317a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_317a5c:
    // 0x317a5c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x317a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_317a60:
    // 0x317a60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x317a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_317a64:
    // 0x317a64: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x317a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_317a68:
    // 0x317a68: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x317a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317a6c:
    // 0x317a6c: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x317a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_317a70:
    // 0x317a70: 0xc7a80048  lwc1        $f8, 0x48($sp)
    ctx->pc = 0x317a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_317a74:
    // 0x317a74: 0x46060902  mul.s       $f4, $f1, $f6
    ctx->pc = 0x317a74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_317a78:
    // 0x317a78: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x317a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_317a7c:
    // 0x317a7c: 0x46063882  mul.s       $f2, $f7, $f6
    ctx->pc = 0x317a7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_317a80:
    // 0x317a80: 0x460640c2  mul.s       $f3, $f8, $f6
    ctx->pc = 0x317a80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_317a84:
    // 0x317a84: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x317a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_317a88:
    // 0x317a88: 0x46062802  mul.s       $f0, $f5, $f6
    ctx->pc = 0x317a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_317a8c:
    // 0x317a8c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x317a8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_317a90:
    // 0x317a90: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x317a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_317a94:
    // 0x317a94: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x317a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_317a98:
    // 0x317a98: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x317a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_317a9c:
    // 0x317a9c: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x317a9cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_317aa0:
    // 0x317aa0: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x317aa0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_317aa4:
    // 0x317aa4: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x317aa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_317aa8:
    // 0x317aa8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x317aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317aac:
    // 0x317aac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317ab0:
    // 0x317ab0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x317ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317ab4:
    // 0x317ab4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x317ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317ab8:
    // 0x317ab8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x317ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317abc:
    // 0x317abc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317ac0:
    // 0x317ac0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x317ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317ac4:
    // 0x317ac4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x317ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317ac8:
    // 0x317ac8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x317ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317acc:
    // 0x317acc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x317accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_317ad0:
    // 0x317ad0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x317ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317ad4:
    // 0x317ad4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x317ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_317ad8:
    // 0x317ad8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x317ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317adc:
    // 0x317adc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x317adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_317ae0:
    // 0x317ae0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x317ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317ae4:
    // 0x317ae4: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x317ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_317ae8:
    // 0x317ae8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x317ae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_317aec:
    // 0x317aec: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x317aecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_317af0:
    // 0x317af0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x317af0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_317af4:
    // 0x317af4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x317af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_317af8:
    // 0x317af8: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x317af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317afc:
    // 0x317afc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x317afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_317b00:
    // 0x317b00: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x317b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317b04:
    // 0x317b04: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x317b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317b08:
    // 0x317b08: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x317b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_317b0c:
    // 0x317b0c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x317b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_317b10:
    // 0x317b10: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x317b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_317b14:
    // 0x317b14: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x317b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_317b18:
    // 0x317b18: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x317b18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_317b1c:
    // 0x317b1c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x317b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317b20:
    // 0x317b20: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x317b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_317b24:
    // 0x317b24: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x317b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_317b28:
    // 0x317b28: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x317b28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_317b2c:
    // 0x317b2c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x317b2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_317b30:
    // 0x317b30: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x317b30u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_317b34:
    // 0x317b34: 0x46140504  c1          0x140504
    ctx->pc = 0x317b34u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_317b38:
    // 0x317b38: 0x4606a502  mul.s       $f20, $f20, $f6
    ctx->pc = 0x317b38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
label_317b3c:
    // 0x317b3c: 0xc0f6a96  jal         func_3DAA58
label_317b40:
    if (ctx->pc == 0x317B40u) {
        ctx->pc = 0x317B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B3Cu;
        // 0x317b40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B44u;
        goto label_317b44;
    }
    ctx->pc = 0x317B3Cu;
    SET_GPR_U32(ctx, 31, 0x317B44u);
    ctx->pc = 0x317B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B3Cu;
    // 0x317b40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x317B3Cu, 0x317B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B44u;
label_317b44:
    // 0x317b44: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x317b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_317b48:
    // 0x317b48: 0x4614a102  mul.s       $f4, $f20, $f20
    ctx->pc = 0x317b48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_317b4c:
    // 0x317b4c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x317b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_317b50:
    // 0x317b50: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x317b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_317b54:
    // 0x317b54: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x317b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317b58:
    // 0x317b58: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x317b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317b5c:
    // 0x317b5c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x317b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317b60:
    // 0x317b60: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x317b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_317b64:
    // 0x317b64: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x317b64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_317b68:
    // 0x317b68: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x317b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_317b6c:
    // 0x317b6c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x317b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_317b70:
    // 0x317b70: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x317b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_317b74:
    // 0x317b74: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x317b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_317b78:
    // 0x317b78: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x317b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_317b7c:
    // 0x317b7c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x317b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_317b80:
    // 0x317b80: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x317b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_317b84:
    // 0x317b84: 0x26a422c0  addiu       $a0, $s5, 0x22C0
    ctx->pc = 0x317b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
label_317b88:
    // 0x317b88: 0x24433838  addiu       $v1, $v0, 0x3838
    ctx->pc = 0x317b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14392));
label_317b8c:
    // 0x317b8c: 0x9c473838  lwu         $a3, 0x3838($v0)
    ctx->pc = 0x317b8cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 14392)));
label_317b90:
    // 0x317b90: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x317b90u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_317b94:
    // 0x317b94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x317b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_317b98:
    // 0x317b98: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x317b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_317b9c:
    // 0x317b9c: 0xc08560a  jal         func_215828
label_317ba0:
    if (ctx->pc == 0x317BA0u) {
        ctx->pc = 0x317BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B9Cu;
        // 0x317ba0: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BA4u;
        goto label_317ba4;
    }
    ctx->pc = 0x317B9Cu;
    SET_GPR_U32(ctx, 31, 0x317BA4u);
    ctx->pc = 0x317BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B9Cu;
    // 0x317ba0: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215828u, 0x317B9Cu, 0x317BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BA4u;
label_317ba4:
    // 0x317ba4: 0x26a222c0  addiu       $v0, $s5, 0x22C0
    ctx->pc = 0x317ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
label_317ba8:
    // 0x317ba8: 0x8ea422c0  lw          $a0, 0x22C0($s5)
    ctx->pc = 0x317ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8896)));
label_317bac:
    // 0x317bac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x317bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_317bb0:
    // 0x317bb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317bb4:
    // 0x317bb4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_317bb8:
    if (ctx->pc == 0x317BB8u) {
        ctx->pc = 0x317BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB4u;
        // 0x317bb8: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BBCu;
        goto label_317bbc;
    }
    ctx->pc = 0x317BB4u;
    {
        const bool branch_taken_0x317bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x317BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB4u;
        // 0x317bb8: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bb4) {
            ctx->pc = 0x317BC0u;
            goto label_317bc0;
        }
    }
    ctx->pc = 0x317BBCu;
label_317bbc:
    // 0x317bbc: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x317bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_317bc0:
    // 0x317bc0: 0x12200135  beqz        $s1, . + 4 + (0x135 << 2)
label_317bc4:
    if (ctx->pc == 0x317BC4u) {
        ctx->pc = 0x317BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BC0u;
        // 0x317bc4: 0x27a200a4  addiu       $v0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BC8u;
        goto label_317bc8;
    }
    ctx->pc = 0x317BC0u;
    {
        const bool branch_taken_0x317bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BC0u;
        // 0x317bc4: 0x27a200a4  addiu       $v0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bc0) {
            ctx->pc = 0x318098u;
            goto label_318098;
        }
    }
    ctx->pc = 0x317BC8u;
label_317bc8:
    // 0x317bc8: 0x27be00b4  addiu       $fp, $sp, 0xB4
    ctx->pc = 0x317bc8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_317bcc:
    // 0x317bcc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x317bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_317bd0:
    // 0x317bd0: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x317bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_317bd4:
    // 0x317bd4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x317bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_317bd8:
    // 0x317bd8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x317bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_317bdc:
    // 0x317bdc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x317bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_317be0:
    // 0x317be0: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x317be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_317be4:
    // 0x317be4: 0x0  nop
    ctx->pc = 0x317be4u;
    // NOP
label_317be8:
    // 0x317be8: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x317be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_317bec:
    // 0x317bec: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
label_317bf0:
    if (ctx->pc == 0x317BF0u) {
        ctx->pc = 0x317BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BECu;
        // 0x317bf0: 0x8fa200b8  lw          $v0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BF4u;
        goto label_317bf4;
    }
    ctx->pc = 0x317BECu;
    {
        const bool branch_taken_0x317bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BECu;
        // 0x317bf0: 0x8fa200b8  lw          $v0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bec) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x317BF4u;
label_317bf4:
    // 0x317bf4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_317bf8:
    if (ctx->pc == 0x317BF8u) {
        ctx->pc = 0x317BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BF4u;
        // 0x317bf8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BFCu;
        goto label_317bfc;
    }
    ctx->pc = 0x317BF4u;
    {
        const bool branch_taken_0x317bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BF4u;
        // 0x317bf8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bf4) {
            ctx->pc = 0x317CB0u;
            goto label_317cb0;
        }
    }
    ctx->pc = 0x317BFCu;
label_317bfc:
    // 0x317bfc: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x317bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_317c00:
    // 0x317c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_317c04:
    // 0x317c04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_317c08:
    if (ctx->pc == 0x317C08u) {
        ctx->pc = 0x317C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C04u;
        // 0x317c08: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C0Cu;
        goto label_317c0c;
    }
    ctx->pc = 0x317C04u;
    {
        const bool branch_taken_0x317c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317c04) {
            ctx->pc = 0x317C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317C04u;
            // 0x317c08: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317C14u;
            goto label_317c14;
        }
    }
    ctx->pc = 0x317C0Cu;
label_317c0c:
    // 0x317c0c: 0x10000028  b           . + 4 + (0x28 << 2)
label_317c10:
    if (ctx->pc == 0x317C10u) {
        ctx->pc = 0x317C14u;
        goto label_317c14;
    }
    ctx->pc = 0x317C0Cu;
    {
        const bool branch_taken_0x317c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317c0c) {
            ctx->pc = 0x317CB0u;
            goto label_317cb0;
        }
    }
    ctx->pc = 0x317C14u;
label_317c14:
    // 0x317c14: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x317c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_317c18:
    // 0x317c18: 0x24746830  addiu       $s4, $v1, 0x6830
    ctx->pc = 0x317c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 26672));
label_317c1c:
    // 0x317c1c: 0x263300b4  addiu       $s3, $s1, 0xB4
    ctx->pc = 0x317c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_317c20:
    // 0x317c20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x317c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317c24:
    // 0x317c24: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x317c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_317c28:
    // 0x317c28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x317c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_317c2c:
    // 0x317c2c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x317c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_317c30:
    // 0x317c30: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x317c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_317c34:
    // 0x317c34: 0xc077044  jal         func_1DC110
label_317c38:
    if (ctx->pc == 0x317C38u) {
        ctx->pc = 0x317C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C34u;
        // 0x317c38: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C3Cu;
        goto label_317c3c;
    }
    ctx->pc = 0x317C34u;
    SET_GPR_U32(ctx, 31, 0x317C3Cu);
    ctx->pc = 0x317C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C34u;
    // 0x317c38: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC110u, 0x317C34u, 0x317C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C3Cu;
label_317c3c:
    // 0x317c3c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x317c3cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_317c40:
    // 0x317c40: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
label_317c44:
    if (ctx->pc == 0x317C44u) {
        ctx->pc = 0x317C48u;
        goto label_317c48;
    }
    ctx->pc = 0x317C40u;
    {
        const bool branch_taken_0x317c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x317c40) {
            ctx->pc = 0x317CB8u;
            goto label_317cb8;
        }
    }
    ctx->pc = 0x317C48u;
label_317c48:
    // 0x317c48: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x317c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_317c4c:
    // 0x317c4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x317c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_317c50:
    // 0x317c50: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x317c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_317c54:
    // 0x317c54: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_317c58:
    if (ctx->pc == 0x317C58u) {
        ctx->pc = 0x317C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C54u;
        // 0x317c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C5Cu;
        goto label_317c5c;
    }
    ctx->pc = 0x317C54u;
    {
        const bool branch_taken_0x317c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C54u;
        // 0x317c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c54) {
            ctx->pc = 0x317CB0u;
            goto label_317cb0;
        }
    }
    ctx->pc = 0x317C5Cu;
label_317c5c:
    // 0x317c5c: 0xc08a1f2  jal         func_2287C8
label_317c60:
    if (ctx->pc == 0x317C60u) {
        ctx->pc = 0x317C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C5Cu;
        // 0x317c60: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C64u;
        goto label_317c64;
    }
    ctx->pc = 0x317C5Cu;
    SET_GPR_U32(ctx, 31, 0x317C64u);
    ctx->pc = 0x317C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C5Cu;
    // 0x317c60: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x317C5Cu, 0x317C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C64u;
label_317c64:
    // 0x317c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317c68:
    // 0x317c68: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_317c6c:
    if (ctx->pc == 0x317C6Cu) {
        ctx->pc = 0x317C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C68u;
        // 0x317c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C70u;
        goto label_317c70;
    }
    ctx->pc = 0x317C68u;
    {
        const bool branch_taken_0x317c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C68u;
        // 0x317c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c68) {
            ctx->pc = 0x317CB0u;
            goto label_317cb0;
        }
    }
    ctx->pc = 0x317C70u;
label_317c70:
    // 0x317c70: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x317c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_317c74:
    // 0x317c74: 0xc0f70ce  jal         func_3DC338
label_317c78:
    if (ctx->pc == 0x317C78u) {
        ctx->pc = 0x317C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C74u;
        // 0x317c78: 0x24520120  addiu       $s2, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C7Cu;
        goto label_317c7c;
    }
    ctx->pc = 0x317C74u;
    SET_GPR_U32(ctx, 31, 0x317C7Cu);
    ctx->pc = 0x317C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C74u;
    // 0x317c78: 0x24520120  addiu       $s2, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x317C74u, 0x317C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C7Cu;
label_317c7c:
    // 0x317c7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_317c80:
    if (ctx->pc == 0x317C80u) {
        ctx->pc = 0x317C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C7Cu;
        // 0x317c80: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C84u;
        goto label_317c84;
    }
    ctx->pc = 0x317C7Cu;
    {
        const bool branch_taken_0x317c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317c7c) {
            ctx->pc = 0x317C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317C7Cu;
            // 0x317c80: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317C90u;
            goto label_317c90;
        }
    }
    ctx->pc = 0x317C84u;
label_317c84:
    // 0x317c84: 0xc0c4900  jal         func_312400
label_317c88:
    if (ctx->pc == 0x317C88u) {
        ctx->pc = 0x317C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C84u;
        // 0x317c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C8Cu;
        goto label_317c8c;
    }
    ctx->pc = 0x317C84u;
    SET_GPR_U32(ctx, 31, 0x317C8Cu);
    ctx->pc = 0x317C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C84u;
    // 0x317c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x317C84u, 0x317C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C8Cu;
label_317c8c:
    // 0x317c8c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x317c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_317c90:
    // 0x317c90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x317c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_317c94:
    // 0x317c94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x317c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_317c98:
    // 0x317c98: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x317c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_317c9c:
    // 0x317c9c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x317c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317ca0:
    // 0x317ca0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x317ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_317ca4:
    // 0x317ca4: 0xc077044  jal         func_1DC110
label_317ca8:
    if (ctx->pc == 0x317CA8u) {
        ctx->pc = 0x317CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CA4u;
        // 0x317ca8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CACu;
        goto label_317cac;
    }
    ctx->pc = 0x317CA4u;
    SET_GPR_U32(ctx, 31, 0x317CACu);
    ctx->pc = 0x317CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CA4u;
    // 0x317ca8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC110u, 0x317CA4u, 0x317CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CACu;
label_317cac:
    // 0x317cac: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x317cacu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_317cb0:
    // 0x317cb0: 0x124000ef  beqz        $s2, . + 4 + (0xEF << 2)
label_317cb4:
    if (ctx->pc == 0x317CB4u) {
        ctx->pc = 0x317CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CB0u;
        // 0x317cb4: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CB8u;
        goto label_317cb8;
    }
    ctx->pc = 0x317CB0u;
    {
        const bool branch_taken_0x317cb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CB0u;
        // 0x317cb4: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cb0) {
            ctx->pc = 0x318070u;
            goto label_318070;
        }
    }
    ctx->pc = 0x317CB8u;
label_317cb8:
    // 0x317cb8: 0xc085900  jal         func_216400
label_317cbc:
    if (ctx->pc == 0x317CBCu) {
        ctx->pc = 0x317CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CB8u;
        // 0x317cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CC0u;
        goto label_317cc0;
    }
    ctx->pc = 0x317CB8u;
    SET_GPR_U32(ctx, 31, 0x317CC0u);
    ctx->pc = 0x317CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CB8u;
    // 0x317cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216400u, 0x317CB8u, 0x317CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CC0u;
label_317cc0:
    // 0x317cc0: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_317cc4:
    if (ctx->pc == 0x317CC4u) {
        ctx->pc = 0x317CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CC0u;
        // 0x317cc4: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CC8u;
        goto label_317cc8;
    }
    ctx->pc = 0x317CC0u;
    {
        const bool branch_taken_0x317cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CC0u;
        // 0x317cc4: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cc0) {
            ctx->pc = 0x318070u;
            goto label_318070;
        }
    }
    ctx->pc = 0x317CC8u;
label_317cc8:
    // 0x317cc8: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x317cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_317ccc:
    // 0x317ccc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x317cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_317cd0:
    // 0x317cd0: 0x60f809  jalr        $v1
label_317cd4:
    if (ctx->pc == 0x317CD4u) {
        ctx->pc = 0x317CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CD0u;
        // 0x317cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CD8u;
        goto label_317cd8;
    }
    ctx->pc = 0x317CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x317CD8u);
        ctx->pc = 0x317CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CD0u;
        // 0x317cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317CD0u, 0x317CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317CD8u;
label_317cd8:
    // 0x317cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317cdc:
    // 0x317cdc: 0xc084288  jal         func_210A20
label_317ce0:
    if (ctx->pc == 0x317CE0u) {
        ctx->pc = 0x317CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CDCu;
        // 0x317ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CE4u;
        goto label_317ce4;
    }
    ctx->pc = 0x317CDCu;
    SET_GPR_U32(ctx, 31, 0x317CE4u);
    ctx->pc = 0x317CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CDCu;
    // 0x317ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A20u, 0x317CDCu, 0x317CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CE4u;
label_317ce4:
    // 0x317ce4: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x317ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_317ce8:
    // 0x317ce8: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
label_317cec:
    if (ctx->pc == 0x317CECu) {
        ctx->pc = 0x317CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CE8u;
        // 0x317cec: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317CF0u;
        goto label_317cf0;
    }
    ctx->pc = 0x317CE8u;
    {
        const bool branch_taken_0x317ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CE8u;
        // 0x317cec: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ce8) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x317CF0u;
label_317cf0:
    // 0x317cf0: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_317cf4:
    // 0x317cf4: 0x8c8295a0  lw          $v0, -0x6A60($a0)
    ctx->pc = 0x317cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940064)));
label_317cf8:
    // 0x317cf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_317cfc:
    // 0x317cfc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x317cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317d00:
    // 0x317d00: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x317d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_317d04:
    // 0x317d04: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_317d08:
    if (ctx->pc == 0x317D08u) {
        ctx->pc = 0x317D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D04u;
        // 0x317d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D0Cu;
        goto label_317d0c;
    }
    ctx->pc = 0x317D04u;
    {
        const bool branch_taken_0x317d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D04u;
        // 0x317d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d04) {
            ctx->pc = 0x317D58u;
            goto label_317d58;
        }
    }
    ctx->pc = 0x317D0Cu;
label_317d0c:
    // 0x317d0c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x317d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_317d10:
    // 0x317d10: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_317d14:
    // 0x317d14: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x317d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_317d18:
    // 0x317d18: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x317d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_317d1c:
    // 0x317d1c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x317d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_317d20:
    // 0x317d20: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x317d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_317d24:
    // 0x317d24: 0x8e0295a0  lw          $v0, -0x6A60($s0)
    ctx->pc = 0x317d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940064)));
label_317d28:
    // 0x317d28: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_317d2c:
    if (ctx->pc == 0x317D2Cu) {
        ctx->pc = 0x317D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D28u;
        // 0x317d2c: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D30u;
        goto label_317d30;
    }
    ctx->pc = 0x317D28u;
    {
        const bool branch_taken_0x317d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D28u;
        // 0x317d2c: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d28) {
            ctx->pc = 0x317D3Cu;
            goto label_317d3c;
        }
    }
    ctx->pc = 0x317D30u;
label_317d30:
    // 0x317d30: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x317d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_317d34:
    // 0x317d34: 0xc0757d2  jal         func_1D5F48
label_317d38:
    if (ctx->pc == 0x317D38u) {
        ctx->pc = 0x317D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D34u;
        // 0x317d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D3Cu;
        goto label_317d3c;
    }
    ctx->pc = 0x317D34u;
    SET_GPR_U32(ctx, 31, 0x317D3Cu);
    ctx->pc = 0x317D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D34u;
    // 0x317d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x317D34u, 0x317D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D3Cu;
label_317d3c:
    // 0x317d3c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x317d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_317d40:
    // 0x317d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317d44:
    // 0x317d44: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x317d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_317d48:
    // 0x317d48: 0x40f809  jalr        $v0
label_317d4c:
    if (ctx->pc == 0x317D4Cu) {
        ctx->pc = 0x317D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D48u;
        // 0x317d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D50u;
        goto label_317d50;
    }
    ctx->pc = 0x317D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317D50u);
        ctx->pc = 0x317D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D48u;
        // 0x317d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317D48u, 0x317D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317D50u;
label_317d50:
    // 0x317d50: 0x10000007  b           . + 4 + (0x7 << 2)
label_317d54:
    if (ctx->pc == 0x317D54u) {
        ctx->pc = 0x317D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D50u;
        // 0x317d54: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D58u;
        goto label_317d58;
    }
    ctx->pc = 0x317D50u;
    {
        const bool branch_taken_0x317d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D50u;
        // 0x317d54: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d50) {
            ctx->pc = 0x317D70u;
            goto label_317d70;
        }
    }
    ctx->pc = 0x317D58u;
label_317d58:
    // 0x317d58: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x317d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_317d5c:
    // 0x317d5c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x317d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_317d60:
    // 0x317d60: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x317d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_317d64:
    // 0x317d64: 0x8e0395a0  lw          $v1, -0x6A60($s0)
    ctx->pc = 0x317d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940064)));
label_317d68:
    // 0x317d68: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x317d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_317d6c:
    // 0x317d6c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x317d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_317d70:
    // 0x317d70: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x317d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_317d74:
    // 0x317d74: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x317d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_317d78:
    // 0x317d78: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_317d7c:
    if (ctx->pc == 0x317D7Cu) {
        ctx->pc = 0x317D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D78u;
        // 0x317d7c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D80u;
        goto label_317d80;
    }
    ctx->pc = 0x317D78u;
    {
        const bool branch_taken_0x317d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317d78) {
            ctx->pc = 0x317D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D78u;
            // 0x317d7c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317DE8u;
            goto label_317de8;
        }
    }
    ctx->pc = 0x317D80u;
label_317d80:
    // 0x317d80: 0x8e27032c  lw          $a3, 0x32C($s1)
    ctx->pc = 0x317d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_317d84:
    // 0x317d84: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
label_317d88:
    if (ctx->pc == 0x317D88u) {
        ctx->pc = 0x317D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D84u;
        // 0x317d88: 0x8e0395a0  lw          $v1, -0x6A60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D8Cu;
        goto label_317d8c;
    }
    ctx->pc = 0x317D84u;
    {
        const bool branch_taken_0x317d84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D84u;
        // 0x317d88: 0x8e0395a0  lw          $v1, -0x6A60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d84) {
            ctx->pc = 0x317DE4u;
            goto label_317de4;
        }
    }
    ctx->pc = 0x317D8Cu;
label_317d8c:
    // 0x317d8c: 0x8ce200dc  lw          $v0, 0xDC($a3)
    ctx->pc = 0x317d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
label_317d90:
    // 0x317d90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x317d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_317d94:
    // 0x317d94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x317d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_317d98:
    // 0x317d98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317d9c:
    // 0x317d9c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_317da0:
    if (ctx->pc == 0x317DA0u) {
        ctx->pc = 0x317DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D9Cu;
        // 0x317da0: 0x8ce200c0  lw          $v0, 0xC0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DA4u;
        goto label_317da4;
    }
    ctx->pc = 0x317D9Cu;
    {
        const bool branch_taken_0x317d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317d9c) {
            ctx->pc = 0x317DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D9Cu;
            // 0x317da0: 0x8ce200c0  lw          $v0, 0xC0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317DA4u;
label_317da4:
    // 0x317da4: 0x8ce300c0  lw          $v1, 0xC0($a3)
    ctx->pc = 0x317da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
label_317da8:
    // 0x317da8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x317da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_317dac:
    // 0x317dac: 0x8ce60218  lw          $a2, 0x218($a3)
    ctx->pc = 0x317dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 536)));
label_317db0:
    // 0x317db0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x317db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_317db4:
    // 0x317db4: 0xace300c0  sw          $v1, 0xC0($a3)
    ctx->pc = 0x317db4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 192), GPR_U32(ctx, 3));
label_317db8:
    // 0x317db8: 0x8e0295a0  lw          $v0, -0x6A60($s0)
    ctx->pc = 0x317db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940064)));
label_317dbc:
    // 0x317dbc: 0xace200dc  sw          $v0, 0xDC($a3)
    ctx->pc = 0x317dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 2));
label_317dc0:
    // 0x317dc0: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x317dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_317dc4:
    // 0x317dc4: 0x60f809  jalr        $v1
label_317dc8:
    if (ctx->pc == 0x317DC8u) {
        ctx->pc = 0x317DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DC4u;
        // 0x317dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DCCu;
        goto label_317dcc;
    }
    ctx->pc = 0x317DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x317DCCu);
        ctx->pc = 0x317DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DC4u;
        // 0x317dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317DC4u, 0x317DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317DCCu;
label_317dcc:
    // 0x317dcc: 0x10000006  b           . + 4 + (0x6 << 2)
label_317dd0:
    if (ctx->pc == 0x317DD0u) {
        ctx->pc = 0x317DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DCCu;
        // 0x317dd0: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DD4u;
        goto label_317dd4;
    }
    ctx->pc = 0x317DCCu;
    {
        const bool branch_taken_0x317dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DCCu;
        // 0x317dd0: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dcc) {
            ctx->pc = 0x317DE8u;
            goto label_317de8;
        }
    }
    ctx->pc = 0x317DD4u;
label_317dd4:
    // 0x317dd4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x317dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_317dd8:
    // 0x317dd8: 0xace200c0  sw          $v0, 0xC0($a3)
    ctx->pc = 0x317dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 192), GPR_U32(ctx, 2));
label_317ddc:
    // 0x317ddc: 0x8e0395a0  lw          $v1, -0x6A60($s0)
    ctx->pc = 0x317ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940064)));
label_317de0:
    // 0x317de0: 0xace300dc  sw          $v1, 0xDC($a3)
    ctx->pc = 0x317de0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 3));
label_317de4:
    // 0x317de4: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x317de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_317de8:
    // 0x317de8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x317de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_317dec:
    // 0x317dec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_317df0:
    if (ctx->pc == 0x317DF0u) {
        ctx->pc = 0x317DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DECu;
        // 0x317df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DF4u;
        goto label_317df4;
    }
    ctx->pc = 0x317DECu;
    {
        const bool branch_taken_0x317dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DECu;
        // 0x317df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dec) {
            ctx->pc = 0x317E00u;
            goto label_317e00;
        }
    }
    ctx->pc = 0x317DF4u;
label_317df4:
    // 0x317df4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x317df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_317df8:
    // 0x317df8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_317dfc:
    if (ctx->pc == 0x317DFCu) {
        ctx->pc = 0x317E00u;
        goto label_317e00;
    }
    ctx->pc = 0x317DF8u;
    {
        const bool branch_taken_0x317df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317df8) {
            ctx->pc = 0x317E04u;
            goto label_317e04;
        }
    }
    ctx->pc = 0x317E00u;
label_317e00:
    // 0x317e00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x317e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317e04:
    // 0x317e04: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_317e08:
    if (ctx->pc == 0x317E08u) {
        ctx->pc = 0x317E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E04u;
        // 0x317e08: 0x8e2300bc  lw          $v1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E0Cu;
        goto label_317e0c;
    }
    ctx->pc = 0x317E04u;
    {
        const bool branch_taken_0x317e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E04u;
        // 0x317e08: 0x8e2300bc  lw          $v1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e04) {
            ctx->pc = 0x317E28u;
            goto label_317e28;
        }
    }
    ctx->pc = 0x317E0Cu;
label_317e0c:
    // 0x317e0c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x317e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_317e10:
    // 0x317e10: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x317e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_317e14:
    // 0x317e14: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_317e18:
    if (ctx->pc == 0x317E18u) {
        ctx->pc = 0x317E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E14u;
        // 0x317e18: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E1Cu;
        goto label_317e1c;
    }
    ctx->pc = 0x317E14u;
    {
        const bool branch_taken_0x317e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E14u;
        // 0x317e18: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e14) {
            ctx->pc = 0x318070u;
            goto label_318070;
        }
    }
    ctx->pc = 0x317E1Cu;
label_317e1c:
    // 0x317e1c: 0x8e2203a4  lw          $v0, 0x3A4($s1)
    ctx->pc = 0x317e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
label_317e20:
    // 0x317e20: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
label_317e24:
    if (ctx->pc == 0x317E24u) {
        ctx->pc = 0x317E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E20u;
        // 0x317e24: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E28u;
        goto label_317e28;
    }
    ctx->pc = 0x317E20u;
    {
        const bool branch_taken_0x317e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e20) {
            ctx->pc = 0x317E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317E20u;
            // 0x317e24: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318074u;
            goto label_318074;
        }
    }
    ctx->pc = 0x317E28u;
label_317e28:
    // 0x317e28: 0x30621001  andi        $v0, $v1, 0x1001
    ctx->pc = 0x317e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
label_317e2c:
    // 0x317e2c: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x317e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_317e30:
    // 0x317e30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_317e34:
    if (ctx->pc == 0x317E34u) {
        ctx->pc = 0x317E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E30u;
        // 0x317e34: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E38u;
        goto label_317e38;
    }
    ctx->pc = 0x317E30u;
    {
        const bool branch_taken_0x317e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E30u;
        // 0x317e34: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e30) {
            ctx->pc = 0x317E58u;
            goto label_317e58;
        }
    }
    ctx->pc = 0x317E38u;
label_317e38:
    // 0x317e38: 0x92230144  lbu         $v1, 0x144($s1)
    ctx->pc = 0x317e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 324)));
label_317e3c:
    // 0x317e3c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_317e40:
    if (ctx->pc == 0x317E40u) {
        ctx->pc = 0x317E44u;
        goto label_317e44;
    }
    ctx->pc = 0x317E3Cu;
    {
        const bool branch_taken_0x317e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x317e3c) {
            ctx->pc = 0x317EB0u;
            goto label_317eb0;
        }
    }
    ctx->pc = 0x317E44u;
label_317e44:
    // 0x317e44: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_317e48:
    // 0x317e48: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x317e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_317e4c:
    // 0x317e4c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x317e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_317e50:
    // 0x317e50: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_317e54:
    if (ctx->pc == 0x317E54u) {
        ctx->pc = 0x317E58u;
        goto label_317e58;
    }
    ctx->pc = 0x317E50u;
    {
        const bool branch_taken_0x317e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317e50) {
            ctx->pc = 0x317EB0u;
            goto label_317eb0;
        }
    }
    ctx->pc = 0x317E58u;
label_317e58:
    // 0x317e58: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x317e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_317e5c:
    // 0x317e5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x317e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_317e60:
    // 0x317e60: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x317e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_317e64:
    // 0x317e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x317e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_317e68:
    // 0x317e68: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_317e6c:
    if (ctx->pc == 0x317E6Cu) {
        ctx->pc = 0x317E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E68u;
        // 0x317e6c: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E70u;
        goto label_317e70;
    }
    ctx->pc = 0x317E68u;
    {
        const bool branch_taken_0x317e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x317E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E68u;
        // 0x317e6c: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e68) {
            ctx->pc = 0x317EB0u;
            goto label_317eb0;
        }
    }
    ctx->pc = 0x317E70u;
label_317e70:
    // 0x317e70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x317e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_317e74:
    // 0x317e74: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_317e78:
    if (ctx->pc == 0x317E78u) {
        ctx->pc = 0x317E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E74u;
        // 0x317e78: 0x2c621002  sltiu       $v0, $v1, 0x1002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4098) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E7Cu;
        goto label_317e7c;
    }
    ctx->pc = 0x317E74u;
    {
        const bool branch_taken_0x317e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E74u;
        // 0x317e78: 0x2c621002  sltiu       $v0, $v1, 0x1002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4098) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e74) {
            ctx->pc = 0x317EB0u;
            goto label_317eb0;
        }
    }
    ctx->pc = 0x317E7Cu;
label_317e7c:
    // 0x317e7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_317e80:
    if (ctx->pc == 0x317E80u) {
        ctx->pc = 0x317E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E7Cu;
        // 0x317e80: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E84u;
        goto label_317e84;
    }
    ctx->pc = 0x317E7Cu;
    {
        const bool branch_taken_0x317e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E7Cu;
        // 0x317e80: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e7c) {
            ctx->pc = 0x317E9Cu;
            goto label_317e9c;
        }
    }
    ctx->pc = 0x317E84u;
label_317e84:
    // 0x317e84: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_317e88:
    if (ctx->pc == 0x317E88u) {
        ctx->pc = 0x317E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E84u;
        // 0x317e88: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E8Cu;
        goto label_317e8c;
    }
    ctx->pc = 0x317E84u;
    {
        const bool branch_taken_0x317e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E84u;
        // 0x317e88: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e84) {
            ctx->pc = 0x317EC0u;
            goto label_317ec0;
        }
    }
    ctx->pc = 0x317E8Cu;
label_317e8c:
    // 0x317e8c: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
label_317e90:
    if (ctx->pc == 0x317E90u) {
        ctx->pc = 0x317E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E8Cu;
        // 0x317e90: 0x26f222f0  addiu       $s2, $s7, 0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E94u;
        goto label_317e94;
    }
    ctx->pc = 0x317E8Cu;
    {
        const bool branch_taken_0x317e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E8Cu;
        // 0x317e90: 0x26f222f0  addiu       $s2, $s7, 0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e8c) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x317E94u;
label_317e94:
    // 0x317e94: 0x1000003a  b           . + 4 + (0x3A << 2)
label_317e98:
    if (ctx->pc == 0x317E98u) {
        ctx->pc = 0x317E9Cu;
        goto label_317e9c;
    }
    ctx->pc = 0x317E94u;
    {
        const bool branch_taken_0x317e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e94) {
            ctx->pc = 0x317F80u;
            goto label_317f80;
        }
    }
    ctx->pc = 0x317E9Cu;
label_317e9c:
    // 0x317e9c: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x317e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
label_317ea0:
    // 0x317ea0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_317ea4:
    if (ctx->pc == 0x317EA4u) {
        ctx->pc = 0x317EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EA0u;
        // 0x317ea4: 0x24027001  addiu       $v0, $zero, 0x7001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EA8u;
        goto label_317ea8;
    }
    ctx->pc = 0x317EA0u;
    {
        const bool branch_taken_0x317ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EA0u;
        // 0x317ea4: 0x24027001  addiu       $v0, $zero, 0x7001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ea0) {
            ctx->pc = 0x317EB0u;
            goto label_317eb0;
        }
    }
    ctx->pc = 0x317EA8u;
label_317ea8:
    // 0x317ea8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_317eac:
    if (ctx->pc == 0x317EACu) {
        ctx->pc = 0x317EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EA8u;
        // 0x317eac: 0x26f222f0  addiu       $s2, $s7, 0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EB0u;
        goto label_317eb0;
    }
    ctx->pc = 0x317EA8u;
    {
        const bool branch_taken_0x317ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x317EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EA8u;
        // 0x317eac: 0x26f222f0  addiu       $s2, $s7, 0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ea8) {
            ctx->pc = 0x317F80u;
            goto label_317f80;
        }
    }
    ctx->pc = 0x317EB0u;
label_317eb0:
    // 0x317eb0: 0xc0c5ce6  jal         func_317398
label_317eb4:
    if (ctx->pc == 0x317EB4u) {
        ctx->pc = 0x317EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EB0u;
        // 0x317eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EB8u;
        goto label_317eb8;
    }
    ctx->pc = 0x317EB0u;
    SET_GPR_U32(ctx, 31, 0x317EB8u);
    ctx->pc = 0x317EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317EB0u;
    // 0x317eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317398u, 0x317EB0u, 0x317EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317EB8u;
label_317eb8:
    // 0x317eb8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_317ebc:
    if (ctx->pc == 0x317EBCu) {
        ctx->pc = 0x317EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EB8u;
        // 0x317ebc: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EC0u;
        goto label_317ec0;
    }
    ctx->pc = 0x317EB8u;
    {
        const bool branch_taken_0x317eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EB8u;
        // 0x317ebc: 0x26a522c0  addiu       $a1, $s5, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317eb8) {
            ctx->pc = 0x318070u;
            goto label_318070;
        }
    }
    ctx->pc = 0x317EC0u;
label_317ec0:
    // 0x317ec0: 0x26d222d8  addiu       $s2, $s6, 0x22D8
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 8920));
label_317ec4:
    // 0x317ec4: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
label_317ec8:
    if (ctx->pc == 0x317EC8u) {
        ctx->pc = 0x317EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EC4u;
        // 0x317ec8: 0xafb100a0  sw          $s1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317ECCu;
        goto label_317ecc;
    }
    ctx->pc = 0x317EC4u;
    {
        const bool branch_taken_0x317ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EC4u;
        // 0x317ec8: 0xafb100a0  sw          $s1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ec4) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x317ECCu;
label_317ecc:
    // 0x317ecc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x317eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_317ed0:
    // 0x317ed0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x317ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_317ed4:
    // 0x317ed4: 0x16020030  bne         $s0, $v0, . + 4 + (0x30 << 2)
label_317ed8:
    if (ctx->pc == 0x317ED8u) {
        ctx->pc = 0x317ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ED4u;
        // 0x317ed8: 0x27b400a0  addiu       $s4, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EDCu;
        goto label_317edc;
    }
    ctx->pc = 0x317ED4u;
    {
        const bool branch_taken_0x317ed4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x317ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ED4u;
        // 0x317ed8: 0x27b400a0  addiu       $s4, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ed4) {
            ctx->pc = 0x317F98u;
            goto label_317f98;
        }
    }
    ctx->pc = 0x317EDCu;
label_317edc:
    // 0x317edc: 0x8ec322d8  lw          $v1, 0x22D8($s6)
    ctx->pc = 0x317edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8920)));
label_317ee0:
    // 0x317ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317ee4:
    // 0x317ee4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x317ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_317ee8:
    // 0x317ee8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x317ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_317eec:
    // 0x317eec: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x317eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_317ef0:
    // 0x317ef0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x317ef0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_317ef4:
    // 0x317ef4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x317ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_317ef8:
    // 0x317ef8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x317ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_317efc:
    // 0x317efc: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x317efcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_317f00:
    // 0x317f00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_317f04:
    // 0x317f04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317f08:
    // 0x317f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_317f0c:
    if (ctx->pc == 0x317F0Cu) {
        ctx->pc = 0x317F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F08u;
        // 0x317f0c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F10u;
        goto label_317f10;
    }
    ctx->pc = 0x317F08u;
    {
        const bool branch_taken_0x317f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F08u;
        // 0x317f0c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f08) {
            ctx->pc = 0x317F24u;
            goto label_317f24;
        }
    }
    ctx->pc = 0x317F10u;
label_317f10:
    // 0x317f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317f14:
    // 0x317f14: 0xc0f5240  jal         func_3D4900
label_317f18:
    if (ctx->pc == 0x317F18u) {
        ctx->pc = 0x317F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F14u;
        // 0x317f18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F1Cu;
        goto label_317f1c;
    }
    ctx->pc = 0x317F14u;
    SET_GPR_U32(ctx, 31, 0x317F1Cu);
    ctx->pc = 0x317F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F14u;
    // 0x317f18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x317F14u, 0x317F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F1Cu;
label_317f1c:
    // 0x317f1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_317f20:
    if (ctx->pc == 0x317F20u) {
        ctx->pc = 0x317F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F1Cu;
        // 0x317f20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F24u;
        goto label_317f24;
    }
    ctx->pc = 0x317F1Cu;
    {
        const bool branch_taken_0x317f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F1Cu;
        // 0x317f20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f1c) {
            ctx->pc = 0x317F2Cu;
            goto label_317f2c;
        }
    }
    ctx->pc = 0x317F24u;
label_317f24:
    // 0x317f24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317f28:
    // 0x317f28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x317f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317f2c:
    // 0x317f2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x317f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_317f30:
    // 0x317f30: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
label_317f34:
    if (ctx->pc == 0x317F34u) {
        ctx->pc = 0x317F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F30u;
        // 0x317f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F38u;
        goto label_317f38;
    }
    ctx->pc = 0x317F30u;
    {
        const bool branch_taken_0x317f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x317F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F30u;
        // 0x317f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f30) {
            ctx->pc = 0x317F4Cu;
            goto label_317f4c;
        }
    }
    ctx->pc = 0x317F38u;
label_317f38:
    // 0x317f38: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x317f38u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_317f3c:
    // 0x317f3c: 0xc0efa74  jal         func_3BE9D0
label_317f40:
    if (ctx->pc == 0x317F40u) {
        ctx->pc = 0x317F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F3Cu;
        // 0x317f40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F44u;
        goto label_317f44;
    }
    ctx->pc = 0x317F3Cu;
    SET_GPR_U32(ctx, 31, 0x317F44u);
    ctx->pc = 0x317F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F3Cu;
    // 0x317f40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x317F3Cu, 0x317F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317F44u;
label_317f44:
    // 0x317f44: 0x10000002  b           . + 4 + (0x2 << 2)
label_317f48:
    if (ctx->pc == 0x317F48u) {
        ctx->pc = 0x317F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F44u;
        // 0x317f48: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F4Cu;
        goto label_317f4c;
    }
    ctx->pc = 0x317F44u;
    {
        const bool branch_taken_0x317f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F44u;
        // 0x317f48: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f44) {
            ctx->pc = 0x317F50u;
            goto label_317f50;
        }
    }
    ctx->pc = 0x317F4Cu;
label_317f4c:
    // 0x317f4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x317f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_317f50:
    // 0x317f50: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x317f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_317f54:
    // 0x317f54: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_317f58:
    if (ctx->pc == 0x317F58u) {
        ctx->pc = 0x317F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F54u;
        // 0x317f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F5Cu;
        goto label_317f5c;
    }
    ctx->pc = 0x317F54u;
    {
        const bool branch_taken_0x317f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F54u;
        // 0x317f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f54) {
            ctx->pc = 0x318048u;
            goto label_318048;
        }
    }
    ctx->pc = 0x317F5Cu;
label_317f5c:
    // 0x317f5c: 0x0  nop
    ctx->pc = 0x317f5cu;
    // NOP
label_317f60:
    // 0x317f60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x317f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_317f64:
    // 0x317f64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x317f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_317f68:
    // 0x317f68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x317f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_317f6c:
    // 0x317f6c: 0x0  nop
    ctx->pc = 0x317f6cu;
    // NOP
label_317f70:
    // 0x317f70: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_317f74:
    if (ctx->pc == 0x317F74u) {
        ctx->pc = 0x317F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F70u;
        // 0x317f74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F78u;
        goto label_317f78;
    }
    ctx->pc = 0x317F70u;
    {
        const bool branch_taken_0x317f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x317F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F70u;
        // 0x317f74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f70) {
            ctx->pc = 0x317F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317f60;
        }
    }
    ctx->pc = 0x317F78u;
label_317f78:
    // 0x317f78: 0x10000034  b           . + 4 + (0x34 << 2)
label_317f7c:
    if (ctx->pc == 0x317F7Cu) {
        ctx->pc = 0x317F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F78u;
        // 0x317f7c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F80u;
        goto label_317f80;
    }
    ctx->pc = 0x317F78u;
    {
        const bool branch_taken_0x317f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F78u;
        // 0x317f7c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f78) {
            ctx->pc = 0x31804Cu;
            goto label_31804c;
        }
    }
    ctx->pc = 0x317F80u;
label_317f80:
    // 0x317f80: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
label_317f84:
    if (ctx->pc == 0x317F84u) {
        ctx->pc = 0x317F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F80u;
        // 0x317f84: 0xafb100ac  sw          $s1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F88u;
        goto label_317f88;
    }
    ctx->pc = 0x317F80u;
    {
        const bool branch_taken_0x317f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F80u;
        // 0x317f84: 0xafb100ac  sw          $s1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f80) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x317F88u;
label_317f88:
    // 0x317f88: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x317f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_317f8c:
    // 0x317f8c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x317f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_317f90:
    // 0x317f90: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_317f94:
    if (ctx->pc == 0x317F94u) {
        ctx->pc = 0x317F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F90u;
        // 0x317f94: 0x27b400ac  addiu       $s4, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F98u;
        goto label_317f98;
    }
    ctx->pc = 0x317F90u;
    {
        const bool branch_taken_0x317f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x317F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F90u;
        // 0x317f94: 0x27b400ac  addiu       $s4, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f90) {
            ctx->pc = 0x317FB0u;
            goto label_317fb0;
        }
    }
    ctx->pc = 0x317F98u;
label_317f98:
    // 0x317f98: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_317f9c:
    if (ctx->pc == 0x317F9Cu) {
        ctx->pc = 0x317F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F98u;
        // 0x317f9c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FA0u;
        goto label_317fa0;
    }
    ctx->pc = 0x317F98u;
    {
        const bool branch_taken_0x317f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x317f98) {
            ctx->pc = 0x317F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317F98u;
            // 0x317f9c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317FA0u;
            goto label_317fa0;
        }
    }
    ctx->pc = 0x317FA0u;
label_317fa0:
    // 0x317fa0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x317fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_317fa4:
    // 0x317fa4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x317fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_317fa8:
    // 0x317fa8: 0x10000030  b           . + 4 + (0x30 << 2)
label_317fac:
    if (ctx->pc == 0x317FACu) {
        ctx->pc = 0x317FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FA8u;
        // 0x317fac: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FB0u;
        goto label_317fb0;
    }
    ctx->pc = 0x317FA8u;
    {
        const bool branch_taken_0x317fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FA8u;
        // 0x317fac: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fa8) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x317FB0u;
label_317fb0:
    // 0x317fb0: 0x8ee322f0  lw          $v1, 0x22F0($s7)
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8944)));
label_317fb4:
    // 0x317fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317fb8:
    // 0x317fb8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x317fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_317fbc:
    // 0x317fbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x317fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_317fc0:
    // 0x317fc0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x317fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_317fc4:
    // 0x317fc4: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_317fc8:
    // 0x317fc8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x317fc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_317fcc:
    // 0x317fcc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x317fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_317fd0:
    // 0x317fd0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x317fd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_317fd4:
    // 0x317fd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x317fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_317fd8:
    // 0x317fd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317fdc:
    // 0x317fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_317fe0:
    if (ctx->pc == 0x317FE0u) {
        ctx->pc = 0x317FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FDCu;
        // 0x317fe0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FE4u;
        goto label_317fe4;
    }
    ctx->pc = 0x317FDCu;
    {
        const bool branch_taken_0x317fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FDCu;
        // 0x317fe0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fdc) {
            ctx->pc = 0x317FF8u;
            goto label_317ff8;
        }
    }
    ctx->pc = 0x317FE4u;
label_317fe4:
    // 0x317fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317fe8:
    // 0x317fe8: 0xc0f5240  jal         func_3D4900
label_317fec:
    if (ctx->pc == 0x317FECu) {
        ctx->pc = 0x317FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FE8u;
        // 0x317fec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FF0u;
        goto label_317ff0;
    }
    ctx->pc = 0x317FE8u;
    SET_GPR_U32(ctx, 31, 0x317FF0u);
    ctx->pc = 0x317FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317FE8u;
    // 0x317fec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x317FE8u, 0x317FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FF0u;
label_317ff0:
    // 0x317ff0: 0x10000003  b           . + 4 + (0x3 << 2)
label_317ff4:
    if (ctx->pc == 0x317FF4u) {
        ctx->pc = 0x317FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FF0u;
        // 0x317ff4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FF8u;
        goto label_317ff8;
    }
    ctx->pc = 0x317FF0u;
    {
        const bool branch_taken_0x317ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FF0u;
        // 0x317ff4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ff0) {
            ctx->pc = 0x318000u;
            goto label_318000;
        }
    }
    ctx->pc = 0x317FF8u;
label_317ff8:
    // 0x317ff8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317ffc:
    // 0x317ffc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x317ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318000:
    // 0x318000: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x318000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_318004:
    // 0x318004: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
label_318008:
    if (ctx->pc == 0x318008u) {
        ctx->pc = 0x318008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318004u;
        // 0x318008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31800Cu;
        goto label_31800c;
    }
    ctx->pc = 0x318004u;
    {
        const bool branch_taken_0x318004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x318008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318004u;
        // 0x318008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318004) {
            ctx->pc = 0x318020u;
            goto label_318020;
        }
    }
    ctx->pc = 0x31800Cu;
label_31800c:
    // 0x31800c: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x31800cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_318010:
    // 0x318010: 0xc0efa74  jal         func_3BE9D0
label_318014:
    if (ctx->pc == 0x318014u) {
        ctx->pc = 0x318014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318010u;
        // 0x318014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318018u;
        goto label_318018;
    }
    ctx->pc = 0x318010u;
    SET_GPR_U32(ctx, 31, 0x318018u);
    ctx->pc = 0x318014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318010u;
    // 0x318014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x318010u, 0x318018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318018u;
label_318018:
    // 0x318018: 0x10000002  b           . + 4 + (0x2 << 2)
label_31801c:
    if (ctx->pc == 0x31801Cu) {
        ctx->pc = 0x31801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318018u;
        // 0x31801c: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318020u;
        goto label_318020;
    }
    ctx->pc = 0x318018u;
    {
        const bool branch_taken_0x318018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318018u;
        // 0x31801c: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318018) {
            ctx->pc = 0x318024u;
            goto label_318024;
        }
    }
    ctx->pc = 0x318020u;
label_318020:
    // 0x318020: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x318020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_318024:
    // 0x318024: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x318024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_318028:
    // 0x318028: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_31802c:
    if (ctx->pc == 0x31802Cu) {
        ctx->pc = 0x31802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318028u;
        // 0x31802c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318030u;
        goto label_318030;
    }
    ctx->pc = 0x318028u;
    {
        const bool branch_taken_0x318028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318028u;
        // 0x31802c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318028) {
            ctx->pc = 0x318048u;
            goto label_318048;
        }
    }
    ctx->pc = 0x318030u;
label_318030:
    // 0x318030: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x318030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_318034:
    // 0x318034: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x318034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_318038:
    // 0x318038: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x318038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31803c:
    // 0x31803c: 0x0  nop
    ctx->pc = 0x31803cu;
    // NOP
label_318040:
    // 0x318040: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_318044:
    if (ctx->pc == 0x318044u) {
        ctx->pc = 0x318044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318040u;
        // 0x318044: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318048u;
        goto label_318048;
    }
    ctx->pc = 0x318040u;
    {
        const bool branch_taken_0x318040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x318044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318040u;
        // 0x318044: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318040) {
            ctx->pc = 0x318030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318030;
        }
    }
    ctx->pc = 0x318048u;
label_318048:
    // 0x318048: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x318048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31804c:
    // 0x31804c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_318050:
    if (ctx->pc == 0x318050u) {
        ctx->pc = 0x318050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31804Cu;
        // 0x318050: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318054u;
        goto label_318054;
    }
    ctx->pc = 0x31804Cu;
    {
        const bool branch_taken_0x31804c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x318050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31804Cu;
        // 0x318050: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31804c) {
            ctx->pc = 0x318060u;
            goto label_318060;
        }
    }
    ctx->pc = 0x318054u;
label_318054:
    // 0x318054: 0xc0f5222  jal         func_3D4888
label_318058:
    if (ctx->pc == 0x318058u) {
        ctx->pc = 0x31805Cu;
        goto label_31805c;
    }
    ctx->pc = 0x318054u;
    SET_GPR_U32(ctx, 31, 0x31805Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x318054u, 0x31805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31805Cu;
label_31805c:
    // 0x31805c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x31805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_318060:
    // 0x318060: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x318060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_318064:
    // 0x318064: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x318064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_318068:
    // 0x318068: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x318068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_31806c:
    // 0x31806c: 0x26a522c0  addiu       $a1, $s5, 0x22C0
    ctx->pc = 0x31806cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8896));
label_318070:
    // 0x318070: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x318070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_318074:
    // 0x318074: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x318074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_318078:
    // 0x318078: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_31807c:
    if (ctx->pc == 0x31807Cu) {
        ctx->pc = 0x31807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318078u;
        // 0x31807c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318080u;
        goto label_318080;
    }
    ctx->pc = 0x318078u;
    {
        const bool branch_taken_0x318078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x31807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318078u;
        // 0x31807c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318078) {
            ctx->pc = 0x318090u;
            goto label_318090;
        }
    }
    ctx->pc = 0x318080u;
label_318080:
    // 0x318080: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x318080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_318084:
    // 0x318084: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_318088:
    if (ctx->pc == 0x318088u) {
        ctx->pc = 0x318088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318084u;
        // 0x318088: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31808Cu;
        goto label_31808c;
    }
    ctx->pc = 0x318084u;
    {
        const bool branch_taken_0x318084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x318088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318084u;
        // 0x318088: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318084) {
            ctx->pc = 0x318090u;
            goto label_318090;
        }
    }
    ctx->pc = 0x31808Cu;
label_31808c:
    // 0x31808c: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x31808cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_318090:
    // 0x318090: 0x5620fed5  bnel        $s1, $zero, . + 4 + (-0x12B << 2)
label_318094:
    if (ctx->pc == 0x318094u) {
        ctx->pc = 0x318094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318090u;
        // 0x318094: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318098u;
        goto label_318098;
    }
    ctx->pc = 0x318090u;
    {
        const bool branch_taken_0x318090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x318090) {
            ctx->pc = 0x318094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318090u;
            // 0x318094: 0x8e2500b8  lw          $a1, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317be8;
        }
    }
    ctx->pc = 0x318098u;
label_318098:
    // 0x318098: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x318098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_31809c:
    // 0x31809c: 0x26c422d8  addiu       $a0, $s6, 0x22D8
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8920));
label_3180a0:
    // 0x3180a0: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x3180a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_3180a4:
    // 0x3180a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3180a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3180a8:
    // 0x3180a8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3180a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3180ac:
    // 0x3180ac: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3180acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3180b0:
    // 0x3180b0: 0xc0c5dfc  jal         func_3177F0
label_3180b4:
    if (ctx->pc == 0x3180B4u) {
        ctx->pc = 0x3180B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180B0u;
        // 0x3180b4: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3180B8u;
        goto label_3180b8;
    }
    ctx->pc = 0x3180B0u;
    SET_GPR_U32(ctx, 31, 0x3180B8u);
    ctx->pc = 0x3180B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180B0u;
    // 0x3180b4: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3177F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3177F0u, 0x3180B0u, 0x3180B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180B8u;
label_3180b8:
    // 0x3180b8: 0x26e422f0  addiu       $a0, $s7, 0x22F0
    ctx->pc = 0x3180b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8944));
label_3180bc:
    // 0x3180bc: 0xc0c5dfc  jal         func_3177F0
label_3180c0:
    if (ctx->pc == 0x3180C0u) {
        ctx->pc = 0x3180C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180BCu;
        // 0x3180c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3180C4u;
        goto label_3180c4;
    }
    ctx->pc = 0x3180BCu;
    SET_GPR_U32(ctx, 31, 0x3180C4u);
    ctx->pc = 0x3180C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180BCu;
    // 0x3180c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3177F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3177F0u, 0x3180BCu, 0x3180C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180C4u;
label_3180c4:
    // 0x3180c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3180c8:
    // 0x3180c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3180c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3180cc:
    // 0x3180cc: 0x8c44bcf0  lw          $a0, -0x4310($v0)
    ctx->pc = 0x3180ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_3180d0:
    // 0x3180d0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3180d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_3180d4:
    // 0x3180d4: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x3180d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3180d8:
    // 0x3180d8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3180d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3180dc:
    // 0x3180dc: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x3180dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_3180e0:
    // 0x3180e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3180e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3180e4:
    // 0x3180e4: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x3180e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3180e8:
    // 0x3180e8: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x3180e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_3180ec:
    // 0x3180ec: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x3180ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_3180f0:
    // 0x3180f0: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x3180f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_3180f4:
    // 0x3180f4: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x3180f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3180f8:
    // 0x3180f8: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x3180f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_3180fc:
    // 0x3180fc: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x3180fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_318100:
    // 0x318100: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x318100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_318104:
    // 0x318104: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x318104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_318108:
    // 0x318108: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x318108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_31810c:
    // 0x31810c: 0x3e00008  jr          $ra
label_318110:
    if (ctx->pc == 0x318110u) {
        ctx->pc = 0x318110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31810Cu;
        // 0x318110: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318114u;
        goto label_318114;
    }
    ctx->pc = 0x31810Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31810Cu;
        // 0x318110: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31810Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318114u;
label_318114:
    // 0x318114: 0x0  nop
    ctx->pc = 0x318114u;
    // NOP
    ctx->pc = 0x318118u;
}
