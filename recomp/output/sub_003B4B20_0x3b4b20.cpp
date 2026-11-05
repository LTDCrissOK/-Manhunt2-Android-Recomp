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

// Function: sub_003B4B20
// Address: 0x3b4b20 - 0x3b5200
void sub_003B4B20_0x3b4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4B20_0x3b4b20");
#endif

    switch (ctx->pc) {
        case 0x3b4b20u: goto label_3b4b20;
        case 0x3b4b24u: goto label_3b4b24;
        case 0x3b4b28u: goto label_3b4b28;
        case 0x3b4b2cu: goto label_3b4b2c;
        case 0x3b4b30u: goto label_3b4b30;
        case 0x3b4b34u: goto label_3b4b34;
        case 0x3b4b38u: goto label_3b4b38;
        case 0x3b4b3cu: goto label_3b4b3c;
        case 0x3b4b40u: goto label_3b4b40;
        case 0x3b4b44u: goto label_3b4b44;
        case 0x3b4b48u: goto label_3b4b48;
        case 0x3b4b4cu: goto label_3b4b4c;
        case 0x3b4b50u: goto label_3b4b50;
        case 0x3b4b54u: goto label_3b4b54;
        case 0x3b4b58u: goto label_3b4b58;
        case 0x3b4b5cu: goto label_3b4b5c;
        case 0x3b4b60u: goto label_3b4b60;
        case 0x3b4b64u: goto label_3b4b64;
        case 0x3b4b68u: goto label_3b4b68;
        case 0x3b4b6cu: goto label_3b4b6c;
        case 0x3b4b70u: goto label_3b4b70;
        case 0x3b4b74u: goto label_3b4b74;
        case 0x3b4b78u: goto label_3b4b78;
        case 0x3b4b7cu: goto label_3b4b7c;
        case 0x3b4b80u: goto label_3b4b80;
        case 0x3b4b84u: goto label_3b4b84;
        case 0x3b4b88u: goto label_3b4b88;
        case 0x3b4b8cu: goto label_3b4b8c;
        case 0x3b4b90u: goto label_3b4b90;
        case 0x3b4b94u: goto label_3b4b94;
        case 0x3b4b98u: goto label_3b4b98;
        case 0x3b4b9cu: goto label_3b4b9c;
        case 0x3b4ba0u: goto label_3b4ba0;
        case 0x3b4ba4u: goto label_3b4ba4;
        case 0x3b4ba8u: goto label_3b4ba8;
        case 0x3b4bacu: goto label_3b4bac;
        case 0x3b4bb0u: goto label_3b4bb0;
        case 0x3b4bb4u: goto label_3b4bb4;
        case 0x3b4bb8u: goto label_3b4bb8;
        case 0x3b4bbcu: goto label_3b4bbc;
        case 0x3b4bc0u: goto label_3b4bc0;
        case 0x3b4bc4u: goto label_3b4bc4;
        case 0x3b4bc8u: goto label_3b4bc8;
        case 0x3b4bccu: goto label_3b4bcc;
        case 0x3b4bd0u: goto label_3b4bd0;
        case 0x3b4bd4u: goto label_3b4bd4;
        case 0x3b4bd8u: goto label_3b4bd8;
        case 0x3b4bdcu: goto label_3b4bdc;
        case 0x3b4be0u: goto label_3b4be0;
        case 0x3b4be4u: goto label_3b4be4;
        case 0x3b4be8u: goto label_3b4be8;
        case 0x3b4becu: goto label_3b4bec;
        case 0x3b4bf0u: goto label_3b4bf0;
        case 0x3b4bf4u: goto label_3b4bf4;
        case 0x3b4bf8u: goto label_3b4bf8;
        case 0x3b4bfcu: goto label_3b4bfc;
        case 0x3b4c00u: goto label_3b4c00;
        case 0x3b4c04u: goto label_3b4c04;
        case 0x3b4c08u: goto label_3b4c08;
        case 0x3b4c0cu: goto label_3b4c0c;
        case 0x3b4c10u: goto label_3b4c10;
        case 0x3b4c14u: goto label_3b4c14;
        case 0x3b4c18u: goto label_3b4c18;
        case 0x3b4c1cu: goto label_3b4c1c;
        case 0x3b4c20u: goto label_3b4c20;
        case 0x3b4c24u: goto label_3b4c24;
        case 0x3b4c28u: goto label_3b4c28;
        case 0x3b4c2cu: goto label_3b4c2c;
        case 0x3b4c30u: goto label_3b4c30;
        case 0x3b4c34u: goto label_3b4c34;
        case 0x3b4c38u: goto label_3b4c38;
        case 0x3b4c3cu: goto label_3b4c3c;
        case 0x3b4c40u: goto label_3b4c40;
        case 0x3b4c44u: goto label_3b4c44;
        case 0x3b4c48u: goto label_3b4c48;
        case 0x3b4c4cu: goto label_3b4c4c;
        case 0x3b4c50u: goto label_3b4c50;
        case 0x3b4c54u: goto label_3b4c54;
        case 0x3b4c58u: goto label_3b4c58;
        case 0x3b4c5cu: goto label_3b4c5c;
        case 0x3b4c60u: goto label_3b4c60;
        case 0x3b4c64u: goto label_3b4c64;
        case 0x3b4c68u: goto label_3b4c68;
        case 0x3b4c6cu: goto label_3b4c6c;
        case 0x3b4c70u: goto label_3b4c70;
        case 0x3b4c74u: goto label_3b4c74;
        case 0x3b4c78u: goto label_3b4c78;
        case 0x3b4c7cu: goto label_3b4c7c;
        case 0x3b4c80u: goto label_3b4c80;
        case 0x3b4c84u: goto label_3b4c84;
        case 0x3b4c88u: goto label_3b4c88;
        case 0x3b4c8cu: goto label_3b4c8c;
        case 0x3b4c90u: goto label_3b4c90;
        case 0x3b4c94u: goto label_3b4c94;
        case 0x3b4c98u: goto label_3b4c98;
        case 0x3b4c9cu: goto label_3b4c9c;
        case 0x3b4ca0u: goto label_3b4ca0;
        case 0x3b4ca4u: goto label_3b4ca4;
        case 0x3b4ca8u: goto label_3b4ca8;
        case 0x3b4cacu: goto label_3b4cac;
        case 0x3b4cb0u: goto label_3b4cb0;
        case 0x3b4cb4u: goto label_3b4cb4;
        case 0x3b4cb8u: goto label_3b4cb8;
        case 0x3b4cbcu: goto label_3b4cbc;
        case 0x3b4cc0u: goto label_3b4cc0;
        case 0x3b4cc4u: goto label_3b4cc4;
        case 0x3b4cc8u: goto label_3b4cc8;
        case 0x3b4cccu: goto label_3b4ccc;
        case 0x3b4cd0u: goto label_3b4cd0;
        case 0x3b4cd4u: goto label_3b4cd4;
        case 0x3b4cd8u: goto label_3b4cd8;
        case 0x3b4cdcu: goto label_3b4cdc;
        case 0x3b4ce0u: goto label_3b4ce0;
        case 0x3b4ce4u: goto label_3b4ce4;
        case 0x3b4ce8u: goto label_3b4ce8;
        case 0x3b4cecu: goto label_3b4cec;
        case 0x3b4cf0u: goto label_3b4cf0;
        case 0x3b4cf4u: goto label_3b4cf4;
        case 0x3b4cf8u: goto label_3b4cf8;
        case 0x3b4cfcu: goto label_3b4cfc;
        case 0x3b4d00u: goto label_3b4d00;
        case 0x3b4d04u: goto label_3b4d04;
        case 0x3b4d08u: goto label_3b4d08;
        case 0x3b4d0cu: goto label_3b4d0c;
        case 0x3b4d10u: goto label_3b4d10;
        case 0x3b4d14u: goto label_3b4d14;
        case 0x3b4d18u: goto label_3b4d18;
        case 0x3b4d1cu: goto label_3b4d1c;
        case 0x3b4d20u: goto label_3b4d20;
        case 0x3b4d24u: goto label_3b4d24;
        case 0x3b4d28u: goto label_3b4d28;
        case 0x3b4d2cu: goto label_3b4d2c;
        case 0x3b4d30u: goto label_3b4d30;
        case 0x3b4d34u: goto label_3b4d34;
        case 0x3b4d38u: goto label_3b4d38;
        case 0x3b4d3cu: goto label_3b4d3c;
        case 0x3b4d40u: goto label_3b4d40;
        case 0x3b4d44u: goto label_3b4d44;
        case 0x3b4d48u: goto label_3b4d48;
        case 0x3b4d4cu: goto label_3b4d4c;
        case 0x3b4d50u: goto label_3b4d50;
        case 0x3b4d54u: goto label_3b4d54;
        case 0x3b4d58u: goto label_3b4d58;
        case 0x3b4d5cu: goto label_3b4d5c;
        case 0x3b4d60u: goto label_3b4d60;
        case 0x3b4d64u: goto label_3b4d64;
        case 0x3b4d68u: goto label_3b4d68;
        case 0x3b4d6cu: goto label_3b4d6c;
        case 0x3b4d70u: goto label_3b4d70;
        case 0x3b4d74u: goto label_3b4d74;
        case 0x3b4d78u: goto label_3b4d78;
        case 0x3b4d7cu: goto label_3b4d7c;
        case 0x3b4d80u: goto label_3b4d80;
        case 0x3b4d84u: goto label_3b4d84;
        case 0x3b4d88u: goto label_3b4d88;
        case 0x3b4d8cu: goto label_3b4d8c;
        case 0x3b4d90u: goto label_3b4d90;
        case 0x3b4d94u: goto label_3b4d94;
        case 0x3b4d98u: goto label_3b4d98;
        case 0x3b4d9cu: goto label_3b4d9c;
        case 0x3b4da0u: goto label_3b4da0;
        case 0x3b4da4u: goto label_3b4da4;
        case 0x3b4da8u: goto label_3b4da8;
        case 0x3b4dacu: goto label_3b4dac;
        case 0x3b4db0u: goto label_3b4db0;
        case 0x3b4db4u: goto label_3b4db4;
        case 0x3b4db8u: goto label_3b4db8;
        case 0x3b4dbcu: goto label_3b4dbc;
        case 0x3b4dc0u: goto label_3b4dc0;
        case 0x3b4dc4u: goto label_3b4dc4;
        case 0x3b4dc8u: goto label_3b4dc8;
        case 0x3b4dccu: goto label_3b4dcc;
        case 0x3b4dd0u: goto label_3b4dd0;
        case 0x3b4dd4u: goto label_3b4dd4;
        case 0x3b4dd8u: goto label_3b4dd8;
        case 0x3b4ddcu: goto label_3b4ddc;
        case 0x3b4de0u: goto label_3b4de0;
        case 0x3b4de4u: goto label_3b4de4;
        case 0x3b4de8u: goto label_3b4de8;
        case 0x3b4decu: goto label_3b4dec;
        case 0x3b4df0u: goto label_3b4df0;
        case 0x3b4df4u: goto label_3b4df4;
        case 0x3b4df8u: goto label_3b4df8;
        case 0x3b4dfcu: goto label_3b4dfc;
        case 0x3b4e00u: goto label_3b4e00;
        case 0x3b4e04u: goto label_3b4e04;
        case 0x3b4e08u: goto label_3b4e08;
        case 0x3b4e0cu: goto label_3b4e0c;
        case 0x3b4e10u: goto label_3b4e10;
        case 0x3b4e14u: goto label_3b4e14;
        case 0x3b4e18u: goto label_3b4e18;
        case 0x3b4e1cu: goto label_3b4e1c;
        case 0x3b4e20u: goto label_3b4e20;
        case 0x3b4e24u: goto label_3b4e24;
        case 0x3b4e28u: goto label_3b4e28;
        case 0x3b4e2cu: goto label_3b4e2c;
        case 0x3b4e30u: goto label_3b4e30;
        case 0x3b4e34u: goto label_3b4e34;
        case 0x3b4e38u: goto label_3b4e38;
        case 0x3b4e3cu: goto label_3b4e3c;
        case 0x3b4e40u: goto label_3b4e40;
        case 0x3b4e44u: goto label_3b4e44;
        case 0x3b4e48u: goto label_3b4e48;
        case 0x3b4e4cu: goto label_3b4e4c;
        case 0x3b4e50u: goto label_3b4e50;
        case 0x3b4e54u: goto label_3b4e54;
        case 0x3b4e58u: goto label_3b4e58;
        case 0x3b4e5cu: goto label_3b4e5c;
        case 0x3b4e60u: goto label_3b4e60;
        case 0x3b4e64u: goto label_3b4e64;
        case 0x3b4e68u: goto label_3b4e68;
        case 0x3b4e6cu: goto label_3b4e6c;
        case 0x3b4e70u: goto label_3b4e70;
        case 0x3b4e74u: goto label_3b4e74;
        case 0x3b4e78u: goto label_3b4e78;
        case 0x3b4e7cu: goto label_3b4e7c;
        case 0x3b4e80u: goto label_3b4e80;
        case 0x3b4e84u: goto label_3b4e84;
        case 0x3b4e88u: goto label_3b4e88;
        case 0x3b4e8cu: goto label_3b4e8c;
        case 0x3b4e90u: goto label_3b4e90;
        case 0x3b4e94u: goto label_3b4e94;
        case 0x3b4e98u: goto label_3b4e98;
        case 0x3b4e9cu: goto label_3b4e9c;
        case 0x3b4ea0u: goto label_3b4ea0;
        case 0x3b4ea4u: goto label_3b4ea4;
        case 0x3b4ea8u: goto label_3b4ea8;
        case 0x3b4eacu: goto label_3b4eac;
        case 0x3b4eb0u: goto label_3b4eb0;
        case 0x3b4eb4u: goto label_3b4eb4;
        case 0x3b4eb8u: goto label_3b4eb8;
        case 0x3b4ebcu: goto label_3b4ebc;
        case 0x3b4ec0u: goto label_3b4ec0;
        case 0x3b4ec4u: goto label_3b4ec4;
        case 0x3b4ec8u: goto label_3b4ec8;
        case 0x3b4eccu: goto label_3b4ecc;
        case 0x3b4ed0u: goto label_3b4ed0;
        case 0x3b4ed4u: goto label_3b4ed4;
        case 0x3b4ed8u: goto label_3b4ed8;
        case 0x3b4edcu: goto label_3b4edc;
        case 0x3b4ee0u: goto label_3b4ee0;
        case 0x3b4ee4u: goto label_3b4ee4;
        case 0x3b4ee8u: goto label_3b4ee8;
        case 0x3b4eecu: goto label_3b4eec;
        case 0x3b4ef0u: goto label_3b4ef0;
        case 0x3b4ef4u: goto label_3b4ef4;
        case 0x3b4ef8u: goto label_3b4ef8;
        case 0x3b4efcu: goto label_3b4efc;
        case 0x3b4f00u: goto label_3b4f00;
        case 0x3b4f04u: goto label_3b4f04;
        case 0x3b4f08u: goto label_3b4f08;
        case 0x3b4f0cu: goto label_3b4f0c;
        case 0x3b4f10u: goto label_3b4f10;
        case 0x3b4f14u: goto label_3b4f14;
        case 0x3b4f18u: goto label_3b4f18;
        case 0x3b4f1cu: goto label_3b4f1c;
        case 0x3b4f20u: goto label_3b4f20;
        case 0x3b4f24u: goto label_3b4f24;
        case 0x3b4f28u: goto label_3b4f28;
        case 0x3b4f2cu: goto label_3b4f2c;
        case 0x3b4f30u: goto label_3b4f30;
        case 0x3b4f34u: goto label_3b4f34;
        case 0x3b4f38u: goto label_3b4f38;
        case 0x3b4f3cu: goto label_3b4f3c;
        case 0x3b4f40u: goto label_3b4f40;
        case 0x3b4f44u: goto label_3b4f44;
        case 0x3b4f48u: goto label_3b4f48;
        case 0x3b4f4cu: goto label_3b4f4c;
        case 0x3b4f50u: goto label_3b4f50;
        case 0x3b4f54u: goto label_3b4f54;
        case 0x3b4f58u: goto label_3b4f58;
        case 0x3b4f5cu: goto label_3b4f5c;
        case 0x3b4f60u: goto label_3b4f60;
        case 0x3b4f64u: goto label_3b4f64;
        case 0x3b4f68u: goto label_3b4f68;
        case 0x3b4f6cu: goto label_3b4f6c;
        case 0x3b4f70u: goto label_3b4f70;
        case 0x3b4f74u: goto label_3b4f74;
        case 0x3b4f78u: goto label_3b4f78;
        case 0x3b4f7cu: goto label_3b4f7c;
        case 0x3b4f80u: goto label_3b4f80;
        case 0x3b4f84u: goto label_3b4f84;
        case 0x3b4f88u: goto label_3b4f88;
        case 0x3b4f8cu: goto label_3b4f8c;
        case 0x3b4f90u: goto label_3b4f90;
        case 0x3b4f94u: goto label_3b4f94;
        case 0x3b4f98u: goto label_3b4f98;
        case 0x3b4f9cu: goto label_3b4f9c;
        case 0x3b4fa0u: goto label_3b4fa0;
        case 0x3b4fa4u: goto label_3b4fa4;
        case 0x3b4fa8u: goto label_3b4fa8;
        case 0x3b4facu: goto label_3b4fac;
        case 0x3b4fb0u: goto label_3b4fb0;
        case 0x3b4fb4u: goto label_3b4fb4;
        case 0x3b4fb8u: goto label_3b4fb8;
        case 0x3b4fbcu: goto label_3b4fbc;
        case 0x3b4fc0u: goto label_3b4fc0;
        case 0x3b4fc4u: goto label_3b4fc4;
        case 0x3b4fc8u: goto label_3b4fc8;
        case 0x3b4fccu: goto label_3b4fcc;
        case 0x3b4fd0u: goto label_3b4fd0;
        case 0x3b4fd4u: goto label_3b4fd4;
        case 0x3b4fd8u: goto label_3b4fd8;
        case 0x3b4fdcu: goto label_3b4fdc;
        case 0x3b4fe0u: goto label_3b4fe0;
        case 0x3b4fe4u: goto label_3b4fe4;
        case 0x3b4fe8u: goto label_3b4fe8;
        case 0x3b4fecu: goto label_3b4fec;
        case 0x3b4ff0u: goto label_3b4ff0;
        case 0x3b4ff4u: goto label_3b4ff4;
        case 0x3b4ff8u: goto label_3b4ff8;
        case 0x3b4ffcu: goto label_3b4ffc;
        case 0x3b5000u: goto label_3b5000;
        case 0x3b5004u: goto label_3b5004;
        case 0x3b5008u: goto label_3b5008;
        case 0x3b500cu: goto label_3b500c;
        case 0x3b5010u: goto label_3b5010;
        case 0x3b5014u: goto label_3b5014;
        case 0x3b5018u: goto label_3b5018;
        case 0x3b501cu: goto label_3b501c;
        case 0x3b5020u: goto label_3b5020;
        case 0x3b5024u: goto label_3b5024;
        case 0x3b5028u: goto label_3b5028;
        case 0x3b502cu: goto label_3b502c;
        case 0x3b5030u: goto label_3b5030;
        case 0x3b5034u: goto label_3b5034;
        case 0x3b5038u: goto label_3b5038;
        case 0x3b503cu: goto label_3b503c;
        case 0x3b5040u: goto label_3b5040;
        case 0x3b5044u: goto label_3b5044;
        case 0x3b5048u: goto label_3b5048;
        case 0x3b504cu: goto label_3b504c;
        case 0x3b5050u: goto label_3b5050;
        case 0x3b5054u: goto label_3b5054;
        case 0x3b5058u: goto label_3b5058;
        case 0x3b505cu: goto label_3b505c;
        case 0x3b5060u: goto label_3b5060;
        case 0x3b5064u: goto label_3b5064;
        case 0x3b5068u: goto label_3b5068;
        case 0x3b506cu: goto label_3b506c;
        case 0x3b5070u: goto label_3b5070;
        case 0x3b5074u: goto label_3b5074;
        case 0x3b5078u: goto label_3b5078;
        case 0x3b507cu: goto label_3b507c;
        case 0x3b5080u: goto label_3b5080;
        case 0x3b5084u: goto label_3b5084;
        case 0x3b5088u: goto label_3b5088;
        case 0x3b508cu: goto label_3b508c;
        case 0x3b5090u: goto label_3b5090;
        case 0x3b5094u: goto label_3b5094;
        case 0x3b5098u: goto label_3b5098;
        case 0x3b509cu: goto label_3b509c;
        case 0x3b50a0u: goto label_3b50a0;
        case 0x3b50a4u: goto label_3b50a4;
        case 0x3b50a8u: goto label_3b50a8;
        case 0x3b50acu: goto label_3b50ac;
        case 0x3b50b0u: goto label_3b50b0;
        case 0x3b50b4u: goto label_3b50b4;
        case 0x3b50b8u: goto label_3b50b8;
        case 0x3b50bcu: goto label_3b50bc;
        case 0x3b50c0u: goto label_3b50c0;
        case 0x3b50c4u: goto label_3b50c4;
        case 0x3b50c8u: goto label_3b50c8;
        case 0x3b50ccu: goto label_3b50cc;
        case 0x3b50d0u: goto label_3b50d0;
        case 0x3b50d4u: goto label_3b50d4;
        case 0x3b50d8u: goto label_3b50d8;
        case 0x3b50dcu: goto label_3b50dc;
        case 0x3b50e0u: goto label_3b50e0;
        case 0x3b50e4u: goto label_3b50e4;
        case 0x3b50e8u: goto label_3b50e8;
        case 0x3b50ecu: goto label_3b50ec;
        case 0x3b50f0u: goto label_3b50f0;
        case 0x3b50f4u: goto label_3b50f4;
        case 0x3b50f8u: goto label_3b50f8;
        case 0x3b50fcu: goto label_3b50fc;
        case 0x3b5100u: goto label_3b5100;
        case 0x3b5104u: goto label_3b5104;
        case 0x3b5108u: goto label_3b5108;
        case 0x3b510cu: goto label_3b510c;
        case 0x3b5110u: goto label_3b5110;
        case 0x3b5114u: goto label_3b5114;
        case 0x3b5118u: goto label_3b5118;
        case 0x3b511cu: goto label_3b511c;
        case 0x3b5120u: goto label_3b5120;
        case 0x3b5124u: goto label_3b5124;
        case 0x3b5128u: goto label_3b5128;
        case 0x3b512cu: goto label_3b512c;
        case 0x3b5130u: goto label_3b5130;
        case 0x3b5134u: goto label_3b5134;
        case 0x3b5138u: goto label_3b5138;
        case 0x3b513cu: goto label_3b513c;
        case 0x3b5140u: goto label_3b5140;
        case 0x3b5144u: goto label_3b5144;
        case 0x3b5148u: goto label_3b5148;
        case 0x3b514cu: goto label_3b514c;
        case 0x3b5150u: goto label_3b5150;
        case 0x3b5154u: goto label_3b5154;
        case 0x3b5158u: goto label_3b5158;
        case 0x3b515cu: goto label_3b515c;
        case 0x3b5160u: goto label_3b5160;
        case 0x3b5164u: goto label_3b5164;
        case 0x3b5168u: goto label_3b5168;
        case 0x3b516cu: goto label_3b516c;
        case 0x3b5170u: goto label_3b5170;
        case 0x3b5174u: goto label_3b5174;
        case 0x3b5178u: goto label_3b5178;
        case 0x3b517cu: goto label_3b517c;
        case 0x3b5180u: goto label_3b5180;
        case 0x3b5184u: goto label_3b5184;
        case 0x3b5188u: goto label_3b5188;
        case 0x3b518cu: goto label_3b518c;
        case 0x3b5190u: goto label_3b5190;
        case 0x3b5194u: goto label_3b5194;
        case 0x3b5198u: goto label_3b5198;
        case 0x3b519cu: goto label_3b519c;
        case 0x3b51a0u: goto label_3b51a0;
        case 0x3b51a4u: goto label_3b51a4;
        case 0x3b51a8u: goto label_3b51a8;
        case 0x3b51acu: goto label_3b51ac;
        case 0x3b51b0u: goto label_3b51b0;
        case 0x3b51b4u: goto label_3b51b4;
        case 0x3b51b8u: goto label_3b51b8;
        case 0x3b51bcu: goto label_3b51bc;
        case 0x3b51c0u: goto label_3b51c0;
        case 0x3b51c4u: goto label_3b51c4;
        case 0x3b51c8u: goto label_3b51c8;
        case 0x3b51ccu: goto label_3b51cc;
        case 0x3b51d0u: goto label_3b51d0;
        case 0x3b51d4u: goto label_3b51d4;
        case 0x3b51d8u: goto label_3b51d8;
        case 0x3b51dcu: goto label_3b51dc;
        case 0x3b51e0u: goto label_3b51e0;
        case 0x3b51e4u: goto label_3b51e4;
        case 0x3b51e8u: goto label_3b51e8;
        case 0x3b51ecu: goto label_3b51ec;
        case 0x3b51f0u: goto label_3b51f0;
        case 0x3b51f4u: goto label_3b51f4;
        case 0x3b51f8u: goto label_3b51f8;
        case 0x3b51fcu: goto label_3b51fc;
        default: break;
    }

    ctx->pc = 0x3b4b20u;

label_3b4b20:
    // 0x3b4b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b4b24:
    // 0x3b4b24: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x3b4b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_3b4b28:
    // 0x3b4b28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b4b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3b4b2c:
    // 0x3b4b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b30:
    // 0x3b4b30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b4b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3b4b34:
    // 0x3b4b34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b4b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b38:
    // 0x3b4b38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b4b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b4b3c:
    // 0x3b4b3c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3b4b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b40:
    // 0x3b4b40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3b4b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3b4b44:
    // 0x3b4b44: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3b4b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b48:
    // 0x3b4b48: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3b4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_3b4b4c:
    // 0x3b4b4c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x3b4b4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b50:
    // 0x3b4b50: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3b4b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_3b4b54:
    // 0x3b4b54: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3b4b54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b58:
    // 0x3b4b58: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3b4b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_3b4b5c:
    // 0x3b4b5c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3b4b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b60:
    // 0x3b4b60: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3b4b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_3b4b64:
    // 0x3b4b64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b4b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b68:
    // 0x3b4b68: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x3b4b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3b4b6c:
    // 0x3b4b6c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x3b4b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_3b4b70:
    // 0x3b4b70: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x3b4b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_3b4b74:
    // 0x3b4b74: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x3b4b74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3b4b78:
    // 0x3b4b78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3b4b7c:
    // 0x3b4b7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3b4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3b4b80:
    // 0x3b4b80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3b4b84:
    // 0x3b4b84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b4b88:
    if (ctx->pc == 0x3B4B88u) {
        ctx->pc = 0x3B4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B84u;
        // 0x3b4b88: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B8Cu;
        goto label_3b4b8c;
    }
    ctx->pc = 0x3B4B84u;
    {
        const bool branch_taken_0x3b4b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B84u;
        // 0x3b4b88: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b84) {
            ctx->pc = 0x3B4B98u;
            goto label_3b4b98;
        }
    }
    ctx->pc = 0x3B4B8Cu;
label_3b4b8c:
    // 0x3b4b8c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3b4b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_3b4b90:
    // 0x3b4b90: 0x10000021  b           . + 4 + (0x21 << 2)
label_3b4b94:
    if (ctx->pc == 0x3B4B94u) {
        ctx->pc = 0x3B4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B90u;
        // 0x3b4b94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B98u;
        goto label_3b4b98;
    }
    ctx->pc = 0x3B4B90u;
    {
        const bool branch_taken_0x3b4b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B90u;
        // 0x3b4b94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b90) {
            ctx->pc = 0x3B4C18u;
            goto label_3b4c18;
        }
    }
    ctx->pc = 0x3B4B98u;
label_3b4b98:
    // 0x3b4b98: 0xc0ed1ec  jal         func_3B47B0
label_3b4b9c:
    if (ctx->pc == 0x3B4B9Cu) {
        ctx->pc = 0x3B4BA0u;
        goto label_3b4ba0;
    }
    ctx->pc = 0x3B4B98u;
    SET_GPR_U32(ctx, 31, 0x3B4BA0u);
    ctx->pc = 0x3B47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B47B0u, 0x3B4B98u, 0x3B4BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4BA0u;
label_3b4ba0:
    // 0x3b4ba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b4ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ba4:
    // 0x3b4ba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b4ba8:
    // 0x3b4ba8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3b4bac:
    if (ctx->pc == 0x3B4BACu) {
        ctx->pc = 0x3B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BA8u;
        // 0x3b4bac: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4BB0u;
        goto label_3b4bb0;
    }
    ctx->pc = 0x3B4BA8u;
    {
        const bool branch_taken_0x3b4ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BA8u;
        // 0x3b4bac: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ba8) {
            ctx->pc = 0x3B4C18u;
            goto label_3b4c18;
        }
    }
    ctx->pc = 0x3B4BB0u;
label_3b4bb0:
    // 0x3b4bb0: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x3b4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_3b4bb4:
    // 0x3b4bb4: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_3b4bb8:
    if (ctx->pc == 0x3B4BB8u) {
        ctx->pc = 0x3B4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BB4u;
        // 0x3b4bb8: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4BBCu;
        goto label_3b4bbc;
    }
    ctx->pc = 0x3B4BB4u;
    {
        const bool branch_taken_0x3b4bb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BB4u;
        // 0x3b4bb8: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4bb4) {
            ctx->pc = 0x3B4C18u;
            goto label_3b4c18;
        }
    }
    ctx->pc = 0x3B4BBCu;
label_3b4bbc:
    // 0x3b4bbc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3b4bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4bc0:
    // 0x3b4bc0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3b4bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b4bc4:
    // 0x3b4bc4: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x3b4bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_3b4bc8:
    // 0x3b4bc8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3b4bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4bcc:
    // 0x3b4bcc: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x3b4bccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_3b4bd0:
    // 0x3b4bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bd4:
    // 0x3b4bd4: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x3b4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_3b4bd8:
    // 0x3b4bd8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3b4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3b4bdc:
    // 0x3b4bdc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3b4bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_3b4be0:
    // 0x3b4be0: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x3b4be0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_3b4be4:
    // 0x3b4be4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3b4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b4be8:
    // 0x3b4be8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3b4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3b4bec:
    // 0x3b4bec: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x3b4becu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_3b4bf0:
    // 0x3b4bf0: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3b4bf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3b4bf4:
    // 0x3b4bf4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3b4bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3b4bf8:
    // 0x3b4bf8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3b4bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b4bfc:
    // 0x3b4bfc: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3b4bfcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_3b4c00:
    // 0x3b4c00: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x3b4c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3b4c04:
    // 0x3b4c04: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x3b4c04u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_3b4c08:
    // 0x3b4c08: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3b4c08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_3b4c0c:
    // 0x3b4c0c: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x3b4c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_3b4c10:
    // 0x3b4c10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b4c14:
    // 0x3b4c14: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3b4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_3b4c18:
    // 0x3b4c18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b4c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4c1c:
    // 0x3b4c1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b4c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b4c20:
    // 0x3b4c20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b4c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4c24:
    // 0x3b4c24: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3b4c24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3b4c28:
    // 0x3b4c28: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3b4c28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4c2c:
    // 0x3b4c2c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3b4c2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3b4c30:
    // 0x3b4c30: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3b4c30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b4c34:
    // 0x3b4c34: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3b4c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3b4c38:
    // 0x3b4c38: 0x3e00008  jr          $ra
label_3b4c3c:
    if (ctx->pc == 0x3B4C3Cu) {
        ctx->pc = 0x3B4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C38u;
        // 0x3b4c3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4C40u;
        goto label_3b4c40;
    }
    ctx->pc = 0x3B4C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C38u;
        // 0x3b4c3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4C40u;
label_3b4c40:
    // 0x3b4c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b4c44:
    // 0x3b4c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4c48:
    // 0x3b4c48: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3b4c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3b4c4c:
    // 0x3b4c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c50:
    // 0x3b4c50: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3b4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3b4c54:
    // 0x3b4c54: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x3b4c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_3b4c58:
    // 0x3b4c58: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b4c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3b4c5c:
    // 0x3b4c5c: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x3b4c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3b4c60:
    // 0x3b4c60: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3b4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_3b4c64:
    // 0x3b4c64: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x3b4c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3b4c68:
    // 0x3b4c68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b4c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3b4c6c:
    // 0x3b4c6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c70:
    // 0x3b4c70: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3b4c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_3b4c74:
    // 0x3b4c74: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3b4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3b4c78:
    // 0x3b4c78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3b4c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c7c:
    // 0x3b4c7c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b4c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4c80:
    // 0x3b4c80: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x3b4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_3b4c84:
    // 0x3b4c84: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x3b4c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3b4c88:
    // 0x3b4c88: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x3b4c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3b4c8c:
    // 0x3b4c8c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b4c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c90:
    // 0x3b4c90: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3b4c90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c94:
    // 0x3b4c94: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x3b4c94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3b4c98:
    // 0x3b4c98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3b4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3b4c9c:
    // 0x3b4c9c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3b4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3b4ca0:
    // 0x3b4ca0: 0xc0ed2c8  jal         func_3B4B20
label_3b4ca4:
    if (ctx->pc == 0x3B4CA4u) {
        ctx->pc = 0x3B4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CA0u;
        // 0x3b4ca4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4CA8u;
        goto label_3b4ca8;
    }
    ctx->pc = 0x3B4CA0u;
    SET_GPR_U32(ctx, 31, 0x3B4CA8u);
    ctx->pc = 0x3B4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CA0u;
    // 0x3b4ca4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4B20u;
    goto label_3b4b20;
    ctx->pc = 0x3B4CA8u;
label_3b4ca8:
    // 0x3b4ca8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3b4cac:
    if (ctx->pc == 0x3B4CACu) {
        ctx->pc = 0x3B4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CA8u;
        // 0x3b4cac: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4CB0u;
        goto label_3b4cb0;
    }
    ctx->pc = 0x3B4CA8u;
    {
        const bool branch_taken_0x3b4ca8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b4ca8) {
            ctx->pc = 0x3B4CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4CA8u;
            // 0x3b4cac: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4CB8u;
            goto label_3b4cb8;
        }
    }
    ctx->pc = 0x3B4CB0u;
label_3b4cb0:
    // 0x3b4cb0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3b4cb4:
    if (ctx->pc == 0x3B4CB4u) {
        ctx->pc = 0x3B4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CB0u;
        // 0x3b4cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4CB8u;
        goto label_3b4cb8;
    }
    ctx->pc = 0x3B4CB0u;
    {
        const bool branch_taken_0x3b4cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CB0u;
        // 0x3b4cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4cb0) {
            ctx->pc = 0x3B4D20u;
            goto label_3b4d20;
        }
    }
    ctx->pc = 0x3B4CB8u;
label_3b4cb8:
    // 0x3b4cb8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3b4cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3b4cbc:
    // 0x3b4cbc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3b4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3b4cc0:
    // 0x3b4cc0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3b4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3b4cc4:
    // 0x3b4cc4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3b4cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3b4cc8:
    // 0x3b4cc8: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x3b4cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_3b4ccc:
    // 0x3b4ccc: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3b4cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_3b4cd0:
    // 0x3b4cd0: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x3b4cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_3b4cd4:
    // 0x3b4cd4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x3b4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3b4cd8:
    // 0x3b4cd8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3b4cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b4cdc:
    // 0x3b4cdc: 0x97a40024  lhu         $a0, 0x24($sp)
    ctx->pc = 0x3b4cdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
label_3b4ce0:
    // 0x3b4ce0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3b4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_3b4ce4:
    // 0x3b4ce4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x3b4ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3b4ce8:
    // 0x3b4ce8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x3b4ce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3b4cec:
    // 0x3b4cec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x3b4cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4cf0:
    // 0x3b4cf0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b4cf4:
    // 0x3b4cf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b4cf8:
    // 0x3b4cf8: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x3b4cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3b4cfc:
    // 0x3b4cfc: 0xa604009c  sh          $a0, 0x9C($s0)
    ctx->pc = 0x3b4cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 4));
label_3b4d00:
    // 0x3b4d00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3b4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b4d04:
    // 0x3b4d04: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x3b4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_3b4d08:
    // 0x3b4d08: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x3b4d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
label_3b4d0c:
    // 0x3b4d0c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x3b4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_3b4d10:
    // 0x3b4d10: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3b4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_3b4d14:
    // 0x3b4d14: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3b4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_3b4d18:
    // 0x3b4d18: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3b4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_3b4d1c:
    // 0x3b4d1c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3b4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3b4d20:
    // 0x3b4d20: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3b4d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4d24:
    // 0x3b4d24: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3b4d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3b4d28:
    // 0x3b4d28: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b4d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b4d2c:
    // 0x3b4d2c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3b4d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3b4d30:
    // 0x3b4d30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b4d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b4d34:
    // 0x3b4d34: 0x3e00008  jr          $ra
label_3b4d38:
    if (ctx->pc == 0x3B4D38u) {
        ctx->pc = 0x3B4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D34u;
        // 0x3b4d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D3Cu;
        goto label_3b4d3c;
    }
    ctx->pc = 0x3B4D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D34u;
        // 0x3b4d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4D3Cu;
label_3b4d3c:
    // 0x3b4d3c: 0x0  nop
    ctx->pc = 0x3b4d3cu;
    // NOP
label_3b4d40:
    // 0x3b4d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b4d44:
    // 0x3b4d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4d48:
    // 0x3b4d48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b4d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b4d4c:
    // 0x3b4d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d50:
    // 0x3b4d50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b4d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b4d54:
    // 0x3b4d54: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3b4d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3b4d58:
    // 0x3b4d58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b4d5c:
    // 0x3b4d5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b4d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3b4d60:
    // 0x3b4d60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b4d64:
    // 0x3b4d64: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_3b4d68:
    if (ctx->pc == 0x3B4D68u) {
        ctx->pc = 0x3B4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D64u;
        // 0x3b4d68: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D6Cu;
        goto label_3b4d6c;
    }
    ctx->pc = 0x3B4D64u;
    {
        const bool branch_taken_0x3b4d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D64u;
        // 0x3b4d68: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d64) {
            ctx->pc = 0x3B4E98u;
            goto label_3b4e98;
        }
    }
    ctx->pc = 0x3B4D6Cu;
label_3b4d6c:
    // 0x3b4d6c: 0xc0ec416  jal         func_3B1058
label_3b4d70:
    if (ctx->pc == 0x3B4D70u) {
        ctx->pc = 0x3B4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D6Cu;
        // 0x3b4d70: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D74u;
        goto label_3b4d74;
    }
    ctx->pc = 0x3B4D6Cu;
    SET_GPR_U32(ctx, 31, 0x3B4D74u);
    ctx->pc = 0x3B4D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D6Cu;
    // 0x3b4d70: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3B4D6Cu, 0x3B4D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D74u;
label_3b4d74:
    // 0x3b4d74: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_3b4d78:
    if (ctx->pc == 0x3B4D78u) {
        ctx->pc = 0x3B4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D74u;
        // 0x3b4d78: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D7Cu;
        goto label_3b4d7c;
    }
    ctx->pc = 0x3B4D74u;
    {
        const bool branch_taken_0x3b4d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d74) {
            ctx->pc = 0x3B4D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4D74u;
            // 0x3b4d78: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4E98u;
            goto label_3b4e98;
        }
    }
    ctx->pc = 0x3B4D7Cu;
label_3b4d7c:
    // 0x3b4d7c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3b4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3b4d80:
    // 0x3b4d80: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3b4d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3b4d84:
    // 0x3b4d84: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3b4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3b4d88:
    // 0x3b4d88: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3b4d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3b4d8c:
    // 0x3b4d8c: 0x40f809  jalr        $v0
label_3b4d90:
    if (ctx->pc == 0x3B4D90u) {
        ctx->pc = 0x3B4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D8Cu;
        // 0x3b4d90: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D94u;
        goto label_3b4d94;
    }
    ctx->pc = 0x3B4D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4D94u);
        ctx->pc = 0x3B4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D8Cu;
        // 0x3b4d90: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4D8Cu, 0x3B4D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4D94u;
label_3b4d94:
    // 0x3b4d94: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b4d98:
    // 0x3b4d98: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3b4d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b4d9c:
    // 0x3b4d9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b4d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4da0:
    // 0x3b4da0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3b4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b4da4:
    // 0x3b4da4: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x3b4da4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3b4da8:
    // 0x3b4da8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3b4da8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b4dac:
    // 0x3b4dac: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x3b4dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b4db0:
    // 0x3b4db0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3b4db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b4db4:
    // 0x3b4db4: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x3b4db4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_3b4db8:
    // 0x3b4db8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b4dbc:
    // 0x3b4dbc: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x3b4dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b4dc0:
    // 0x3b4dc0: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3b4dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b4dc4:
    // 0x3b4dc4: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x3b4dc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_3b4dc8:
    // 0x3b4dc8: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x3b4dc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3b4dcc:
    // 0x3b4dcc: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_3b4dd0:
    if (ctx->pc == 0x3B4DD0u) {
        ctx->pc = 0x3B4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DCCu;
        // 0x3b4dd0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4DD4u;
        goto label_3b4dd4;
    }
    ctx->pc = 0x3B4DCCu;
    {
        const bool branch_taken_0x3b4dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3B4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DCCu;
        // 0x3b4dd0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4dcc) {
            ctx->pc = 0x3B4E40u;
            goto label_3b4e40;
        }
    }
    ctx->pc = 0x3B4DD4u;
label_3b4dd4:
    // 0x3b4dd4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b4dd8:
    // 0x3b4dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b4dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ddc:
    // 0x3b4ddc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3b4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3b4de0:
    // 0x3b4de0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b4de4:
    // 0x3b4de4: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_3b4de8:
    if (ctx->pc == 0x3B4DE8u) {
        ctx->pc = 0x3B4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DE4u;
        // 0x3b4de8: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4DECu;
        goto label_3b4dec;
    }
    ctx->pc = 0x3B4DE4u;
    {
        const bool branch_taken_0x3b4de4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3B4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DE4u;
        // 0x3b4de8: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4de4) {
            ctx->pc = 0x3B4E78u;
            goto label_3b4e78;
        }
    }
    ctx->pc = 0x3B4DECu;
label_3b4dec:
    // 0x3b4dec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b4decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4df0:
    // 0x3b4df0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3b4df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3b4df4:
    // 0x3b4df4: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x3b4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3b4df8:
    // 0x3b4df8: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x3b4df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3b4dfc:
    // 0x3b4dfc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3b4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_3b4e00:
    // 0x3b4e00: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3b4e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b4e04:
    // 0x3b4e04: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3b4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3b4e08:
    // 0x3b4e08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b4e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b4e0c:
    // 0x3b4e0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3b4e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3b4e10:
    // 0x3b4e10: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3b4e10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_3b4e14:
    // 0x3b4e14: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x3b4e14u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b4e18:
    // 0x3b4e18: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x3b4e18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_3b4e1c:
    // 0x3b4e1c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3b4e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3b4e20:
    // 0x3b4e20: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3b4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b4e24:
    // 0x3b4e24: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3b4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3b4e28:
    // 0x3b4e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b4e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b4e2c:
    // 0x3b4e2c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_3b4e30:
    if (ctx->pc == 0x3B4E30u) {
        ctx->pc = 0x3B4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E2Cu;
        // 0x3b4e30: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4E34u;
        goto label_3b4e34;
    }
    ctx->pc = 0x3B4E2Cu;
    {
        const bool branch_taken_0x3b4e2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E2Cu;
        // 0x3b4e30: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e2c) {
            ctx->pc = 0x3B4DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4df0;
        }
    }
    ctx->pc = 0x3B4E34u;
label_3b4e34:
    // 0x3b4e34: 0x10000010  b           . + 4 + (0x10 << 2)
label_3b4e38:
    if (ctx->pc == 0x3B4E38u) {
        ctx->pc = 0x3B4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E34u;
        // 0x3b4e38: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4E3Cu;
        goto label_3b4e3c;
    }
    ctx->pc = 0x3B4E34u;
    {
        const bool branch_taken_0x3b4e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E34u;
        // 0x3b4e38: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e34) {
            ctx->pc = 0x3B4E78u;
            goto label_3b4e78;
        }
    }
    ctx->pc = 0x3B4E3Cu;
label_3b4e3c:
    // 0x3b4e3c: 0x0  nop
    ctx->pc = 0x3b4e3cu;
    // NOP
label_3b4e40:
    // 0x3b4e40: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_3b4e44:
    if (ctx->pc == 0x3B4E44u) {
        ctx->pc = 0x3B4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E40u;
        // 0x3b4e44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4E48u;
        goto label_3b4e48;
    }
    ctx->pc = 0x3B4E40u;
    {
        const bool branch_taken_0x3b4e40 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3B4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E40u;
        // 0x3b4e44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e40) {
            ctx->pc = 0x3B4E78u;
            goto label_3b4e78;
        }
    }
    ctx->pc = 0x3B4E48u;
label_3b4e48:
    // 0x3b4e48: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x3b4e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3b4e4c:
    // 0x3b4e4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3b4e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3b4e50:
    // 0x3b4e50: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x3b4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3b4e54:
    // 0x3b4e54: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x3b4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3b4e58:
    // 0x3b4e58: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b4e58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3b4e5c:
    // 0x3b4e5c: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x3b4e5cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b4e60:
    // 0x3b4e60: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3b4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b4e64:
    // 0x3b4e64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3b4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3b4e68:
    // 0x3b4e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b4e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b4e6c:
    // 0x3b4e6c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_3b4e70:
    if (ctx->pc == 0x3B4E70u) {
        ctx->pc = 0x3B4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E6Cu;
        // 0x3b4e70: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4E74u;
        goto label_3b4e74;
    }
    ctx->pc = 0x3B4E6Cu;
    {
        const bool branch_taken_0x3b4e6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E6Cu;
        // 0x3b4e70: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e6c) {
            ctx->pc = 0x3B4E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4e48;
        }
    }
    ctx->pc = 0x3B4E74u;
label_3b4e74:
    // 0x3b4e74: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b4e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b4e78:
    // 0x3b4e78: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b4e7c:
    // 0x3b4e7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4e80:
    // 0x3b4e80: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3b4e80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3b4e84:
    // 0x3b4e84: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b4e88:
    // 0x3b4e88: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x3b4e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b4e8c:
    // 0x3b4e8c: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x3b4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_3b4e90:
    // 0x3b4e90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b4e94:
    // 0x3b4e94: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3b4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3b4e98:
    // 0x3b4e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4e9c:
    // 0x3b4e9c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3b4ea0:
    if (ctx->pc == 0x3B4EA0u) {
        ctx->pc = 0x3B4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E9Cu;
        // 0x3b4ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4EA4u;
        goto label_3b4ea4;
    }
    ctx->pc = 0x3B4E9Cu;
    {
        const bool branch_taken_0x3b4e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b4e9c) {
            ctx->pc = 0x3B4EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4E9Cu;
            // 0x3b4ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4EC4u;
            goto label_3b4ec4;
        }
    }
    ctx->pc = 0x3B4EA4u;
label_3b4ea4:
    // 0x3b4ea4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3b4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3b4ea8:
    // 0x3b4ea8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3b4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3b4eac:
    // 0x3b4eac: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3b4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3b4eb0:
    // 0x3b4eb0: 0x60f809  jalr        $v1
label_3b4eb4:
    if (ctx->pc == 0x3B4EB4u) {
        ctx->pc = 0x3B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EB0u;
        // 0x3b4eb4: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4EB8u;
        goto label_3b4eb8;
    }
    ctx->pc = 0x3B4EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B4EB8u);
        ctx->pc = 0x3B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EB0u;
        // 0x3b4eb4: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4EB0u, 0x3B4EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4EB8u;
label_3b4eb8:
    // 0x3b4eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4ebc:
    // 0x3b4ebc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b4ec0:
    // 0x3b4ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b4ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4ec4:
    // 0x3b4ec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b4ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b4ec8:
    // 0x3b4ec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b4ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4ecc:
    // 0x3b4ecc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b4eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b4ed0:
    // 0x3b4ed0: 0x3e00008  jr          $ra
label_3b4ed4:
    if (ctx->pc == 0x3B4ED4u) {
        ctx->pc = 0x3B4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ED0u;
        // 0x3b4ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4ED8u;
        goto label_3b4ed8;
    }
    ctx->pc = 0x3B4ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ED0u;
        // 0x3b4ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4ED8u;
label_3b4ed8:
    // 0x3b4ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b4edc:
    // 0x3b4edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4ee0:
    // 0x3b4ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b4ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b4ee4:
    // 0x3b4ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ee8:
    // 0x3b4ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b4ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b4eec:
    // 0x3b4eec: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3b4eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3b4ef0:
    // 0x3b4ef0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b4ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b4ef4:
    // 0x3b4ef4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b4ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3b4ef8:
    // 0x3b4ef8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b4efc:
    // 0x3b4efc: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_3b4f00:
    if (ctx->pc == 0x3B4F00u) {
        ctx->pc = 0x3B4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EFCu;
        // 0x3b4f00: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F04u;
        goto label_3b4f04;
    }
    ctx->pc = 0x3B4EFCu;
    {
        const bool branch_taken_0x3b4efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EFCu;
        // 0x3b4f00: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4efc) {
            ctx->pc = 0x3B5018u;
            goto label_3b5018;
        }
    }
    ctx->pc = 0x3B4F04u;
label_3b4f04:
    // 0x3b4f04: 0xc0ec416  jal         func_3B1058
label_3b4f08:
    if (ctx->pc == 0x3B4F08u) {
        ctx->pc = 0x3B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F04u;
        // 0x3b4f08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F0Cu;
        goto label_3b4f0c;
    }
    ctx->pc = 0x3B4F04u;
    SET_GPR_U32(ctx, 31, 0x3B4F0Cu);
    ctx->pc = 0x3B4F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F04u;
    // 0x3b4f08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3B4F04u, 0x3B4F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F0Cu;
label_3b4f0c:
    // 0x3b4f0c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_3b4f10:
    if (ctx->pc == 0x3B4F10u) {
        ctx->pc = 0x3B4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F0Cu;
        // 0x3b4f10: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F14u;
        goto label_3b4f14;
    }
    ctx->pc = 0x3B4F0Cu;
    {
        const bool branch_taken_0x3b4f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4f0c) {
            ctx->pc = 0x3B4F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4F0Cu;
            // 0x3b4f10: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5018u;
            goto label_3b5018;
        }
    }
    ctx->pc = 0x3B4F14u;
label_3b4f14:
    // 0x3b4f14: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3b4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3b4f18:
    // 0x3b4f18: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3b4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3b4f1c:
    // 0x3b4f1c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3b4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3b4f20:
    // 0x3b4f20: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3b4f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3b4f24:
    // 0x3b4f24: 0x40f809  jalr        $v0
label_3b4f28:
    if (ctx->pc == 0x3B4F28u) {
        ctx->pc = 0x3B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F24u;
        // 0x3b4f28: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F2Cu;
        goto label_3b4f2c;
    }
    ctx->pc = 0x3B4F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4F2Cu);
        ctx->pc = 0x3B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F24u;
        // 0x3b4f28: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4F24u, 0x3B4F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4F2Cu;
label_3b4f2c:
    // 0x3b4f2c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b4f30:
    // 0x3b4f30: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x3b4f30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b4f34:
    // 0x3b4f34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b4f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4f38:
    // 0x3b4f38: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3b4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b4f3c:
    // 0x3b4f3c: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x3b4f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_3b4f40:
    // 0x3b4f40: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3b4f40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b4f44:
    // 0x3b4f44: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x3b4f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b4f48:
    // 0x3b4f48: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3b4f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b4f4c:
    // 0x3b4f4c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x3b4f4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_3b4f50:
    // 0x3b4f50: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x3b4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3b4f54:
    // 0x3b4f54: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x3b4f54u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b4f58:
    // 0x3b4f58: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x3b4f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b4f5c:
    // 0x3b4f5c: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x3b4f5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_3b4f60:
    // 0x3b4f60: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x3b4f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3b4f64:
    // 0x3b4f64: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_3b4f68:
    if (ctx->pc == 0x3B4F68u) {
        ctx->pc = 0x3B4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F64u;
        // 0x3b4f68: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F6Cu;
        goto label_3b4f6c;
    }
    ctx->pc = 0x3B4F64u;
    {
        const bool branch_taken_0x3b4f64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3B4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F64u;
        // 0x3b4f68: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f64) {
            ctx->pc = 0x3B4FC8u;
            goto label_3b4fc8;
        }
    }
    ctx->pc = 0x3B4F6Cu;
label_3b4f6c:
    // 0x3b4f6c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b4f70:
    // 0x3b4f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b4f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f74:
    // 0x3b4f74: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3b4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3b4f78:
    // 0x3b4f78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b4f7c:
    // 0x3b4f7c: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_3b4f80:
    if (ctx->pc == 0x3B4F80u) {
        ctx->pc = 0x3B4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F7Cu;
        // 0x3b4f80: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F84u;
        goto label_3b4f84;
    }
    ctx->pc = 0x3B4F7Cu;
    {
        const bool branch_taken_0x3b4f7c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3B4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F7Cu;
        // 0x3b4f80: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f7c) {
            ctx->pc = 0x3B4FFCu;
            goto label_3b4ffc;
        }
    }
    ctx->pc = 0x3B4F84u;
label_3b4f84:
    // 0x3b4f84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b4f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f88:
    // 0x3b4f88: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b4f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3b4f8c:
    // 0x3b4f8c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3b4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b4f90:
    // 0x3b4f90: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x3b4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_3b4f94:
    // 0x3b4f94: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3b4f98:
    // 0x3b4f98: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b4f9c:
    // 0x3b4f9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b4f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b4fa0:
    // 0x3b4fa0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3b4fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_3b4fa4:
    // 0x3b4fa4: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x3b4fa4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b4fa8:
    // 0x3b4fa8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3b4fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3b4fac:
    // 0x3b4fac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3b4facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3b4fb0:
    // 0x3b4fb0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3b4fb4:
    // 0x3b4fb4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_3b4fb8:
    if (ctx->pc == 0x3B4FB8u) {
        ctx->pc = 0x3B4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FB4u;
        // 0x3b4fb8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FBCu;
        goto label_3b4fbc;
    }
    ctx->pc = 0x3B4FB4u;
    {
        const bool branch_taken_0x3b4fb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FB4u;
        // 0x3b4fb8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fb4) {
            ctx->pc = 0x3B4F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4f88;
        }
    }
    ctx->pc = 0x3B4FBCu;
label_3b4fbc:
    // 0x3b4fbc: 0x1000000f  b           . + 4 + (0xF << 2)
label_3b4fc0:
    if (ctx->pc == 0x3B4FC0u) {
        ctx->pc = 0x3B4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FBCu;
        // 0x3b4fc0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FC4u;
        goto label_3b4fc4;
    }
    ctx->pc = 0x3B4FBCu;
    {
        const bool branch_taken_0x3b4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FBCu;
        // 0x3b4fc0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fbc) {
            ctx->pc = 0x3B4FFCu;
            goto label_3b4ffc;
        }
    }
    ctx->pc = 0x3B4FC4u;
label_3b4fc4:
    // 0x3b4fc4: 0x0  nop
    ctx->pc = 0x3b4fc4u;
    // NOP
label_3b4fc8:
    // 0x3b4fc8: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3b4fcc:
    if (ctx->pc == 0x3B4FCCu) {
        ctx->pc = 0x3B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FC8u;
        // 0x3b4fcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FD0u;
        goto label_3b4fd0;
    }
    ctx->pc = 0x3B4FC8u;
    {
        const bool branch_taken_0x3b4fc8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FC8u;
        // 0x3b4fcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fc8) {
            ctx->pc = 0x3B4FFCu;
            goto label_3b4ffc;
        }
    }
    ctx->pc = 0x3B4FD0u;
label_3b4fd0:
    // 0x3b4fd0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3b4fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fd4:
    // 0x3b4fd4: 0x0  nop
    ctx->pc = 0x3b4fd4u;
    // NOP
label_3b4fd8:
    // 0x3b4fd8: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x3b4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_3b4fdc:
    // 0x3b4fdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b4fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b4fe0:
    // 0x3b4fe0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b4fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b4fe4:
    // 0x3b4fe4: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x3b4fe4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3b4fe8:
    // 0x3b4fe8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3b4fec:
    // 0x3b4fec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3b4fecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3b4ff0:
    // 0x3b4ff0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_3b4ff4:
    if (ctx->pc == 0x3B4FF4u) {
        ctx->pc = 0x3B4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FF0u;
        // 0x3b4ff4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FF8u;
        goto label_3b4ff8;
    }
    ctx->pc = 0x3B4FF0u;
    {
        const bool branch_taken_0x3b4ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FF0u;
        // 0x3b4ff4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ff0) {
            ctx->pc = 0x3B4FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4fd8;
        }
    }
    ctx->pc = 0x3B4FF8u;
label_3b4ff8:
    // 0x3b4ff8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b4ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b4ffc:
    // 0x3b4ffc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b5000:
    // 0x3b5000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b5000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b5004:
    // 0x3b5004: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3b5004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3b5008:
    // 0x3b5008: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b5008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b500c:
    // 0x3b500c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x3b500cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b5010:
    // 0x3b5010: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x3b5010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_3b5014:
    // 0x3b5014: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3b5014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3b5018:
    // 0x3b5018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b501c:
    // 0x3b501c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3b5020:
    if (ctx->pc == 0x3B5020u) {
        ctx->pc = 0x3B5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B501Cu;
        // 0x3b5020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5024u;
        goto label_3b5024;
    }
    ctx->pc = 0x3B501Cu;
    {
        const bool branch_taken_0x3b501c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b501c) {
            ctx->pc = 0x3B5020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B501Cu;
            // 0x3b5020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5044u;
            goto label_3b5044;
        }
    }
    ctx->pc = 0x3B5024u;
label_3b5024:
    // 0x3b5024: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3b5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3b5028:
    // 0x3b5028: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3b5028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3b502c:
    // 0x3b502c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3b502cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3b5030:
    // 0x3b5030: 0x60f809  jalr        $v1
label_3b5034:
    if (ctx->pc == 0x3B5034u) {
        ctx->pc = 0x3B5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5030u;
        // 0x3b5034: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5038u;
        goto label_3b5038;
    }
    ctx->pc = 0x3B5030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B5038u);
        ctx->pc = 0x3B5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5030u;
        // 0x3b5034: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5030u, 0x3B5038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5038u;
label_3b5038:
    // 0x3b5038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b503c:
    // 0x3b503c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b503cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b5040:
    // 0x3b5040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b5040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5044:
    // 0x3b5044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b5044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b5048:
    // 0x3b5048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b5048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b504c:
    // 0x3b504c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b5050:
    // 0x3b5050: 0x3e00008  jr          $ra
label_3b5054:
    if (ctx->pc == 0x3B5054u) {
        ctx->pc = 0x3B5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5050u;
        // 0x3b5054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5058u;
        goto label_3b5058;
    }
    ctx->pc = 0x3B5050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5050u;
        // 0x3b5054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5058u;
label_3b5058:
    // 0x3b5058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b505c:
    // 0x3b505c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b5060:
    // 0x3b5060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b5060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b5064:
    // 0x3b5064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b5064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5068:
    // 0x3b5068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b5068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b506c:
    // 0x3b506c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3b506cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3b5070:
    // 0x3b5070: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b5070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b5074:
    // 0x3b5074: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b5074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3b5078:
    // 0x3b5078: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b5078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b507c:
    // 0x3b507c: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_3b5080:
    if (ctx->pc == 0x3B5080u) {
        ctx->pc = 0x3B5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B507Cu;
        // 0x3b5080: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5084u;
        goto label_3b5084;
    }
    ctx->pc = 0x3B507Cu;
    {
        const bool branch_taken_0x3b507c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B507Cu;
        // 0x3b5080: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b507c) {
            ctx->pc = 0x3B51C0u;
            goto label_3b51c0;
        }
    }
    ctx->pc = 0x3B5084u;
label_3b5084:
    // 0x3b5084: 0xc0ec416  jal         func_3B1058
label_3b5088:
    if (ctx->pc == 0x3B5088u) {
        ctx->pc = 0x3B5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5084u;
        // 0x3b5088: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B508Cu;
        goto label_3b508c;
    }
    ctx->pc = 0x3B5084u;
    SET_GPR_U32(ctx, 31, 0x3B508Cu);
    ctx->pc = 0x3B5088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5084u;
    // 0x3b5088: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3B5084u, 0x3B508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B508Cu;
label_3b508c:
    // 0x3b508c: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_3b5090:
    if (ctx->pc == 0x3B5090u) {
        ctx->pc = 0x3B5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B508Cu;
        // 0x3b5090: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5094u;
        goto label_3b5094;
    }
    ctx->pc = 0x3B508Cu;
    {
        const bool branch_taken_0x3b508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b508c) {
            ctx->pc = 0x3B5090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B508Cu;
            // 0x3b5090: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B51C0u;
            goto label_3b51c0;
        }
    }
    ctx->pc = 0x3B5094u;
label_3b5094:
    // 0x3b5094: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3b5094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3b5098:
    // 0x3b5098: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3b5098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3b509c:
    // 0x3b509c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3b509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3b50a0:
    // 0x3b50a0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3b50a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3b50a4:
    // 0x3b50a4: 0x40f809  jalr        $v0
label_3b50a8:
    if (ctx->pc == 0x3B50A8u) {
        ctx->pc = 0x3B50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50A4u;
        // 0x3b50a8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50ACu;
        goto label_3b50ac;
    }
    ctx->pc = 0x3B50A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B50ACu);
        ctx->pc = 0x3B50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50A4u;
        // 0x3b50a8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B50A4u, 0x3B50ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B50ACu;
label_3b50ac:
    // 0x3b50ac: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b50acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b50b0:
    // 0x3b50b0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3b50b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b50b4:
    // 0x3b50b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b50b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b50b8:
    // 0x3b50b8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3b50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b50bc:
    // 0x3b50bc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x3b50bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3b50c0:
    // 0x3b50c0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3b50c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b50c4:
    // 0x3b50c4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x3b50c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b50c8:
    // 0x3b50c8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3b50c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b50cc:
    // 0x3b50cc: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x3b50ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_3b50d0:
    // 0x3b50d0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3b50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b50d4:
    // 0x3b50d4: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x3b50d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b50d8:
    // 0x3b50d8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3b50d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b50dc:
    // 0x3b50dc: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x3b50dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_3b50e0:
    // 0x3b50e0: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x3b50e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_3b50e4:
    // 0x3b50e4: 0x1486001e  bne         $a0, $a2, . + 4 + (0x1E << 2)
label_3b50e8:
    if (ctx->pc == 0x3B50E8u) {
        ctx->pc = 0x3B50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50E4u;
        // 0x3b50e8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50ECu;
        goto label_3b50ec;
    }
    ctx->pc = 0x3B50E4u;
    {
        const bool branch_taken_0x3b50e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3B50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50E4u;
        // 0x3b50e8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50e4) {
            ctx->pc = 0x3B5160u;
            goto label_3b5160;
        }
    }
    ctx->pc = 0x3B50ECu;
label_3b50ec:
    // 0x3b50ec: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b50f0:
    // 0x3b50f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b50f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b50f4:
    // 0x3b50f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3b50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3b50f8:
    // 0x3b50f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b50fc:
    // 0x3b50fc: 0x19200029  blez        $t1, . + 4 + (0x29 << 2)
label_3b5100:
    if (ctx->pc == 0x3B5100u) {
        ctx->pc = 0x3B5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50FCu;
        // 0x3b5100: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5104u;
        goto label_3b5104;
    }
    ctx->pc = 0x3B50FCu;
    {
        const bool branch_taken_0x3b50fc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3B5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50FCu;
        // 0x3b5100: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50fc) {
            ctx->pc = 0x3B51A4u;
            goto label_3b51a4;
        }
    }
    ctx->pc = 0x3B5104u;
label_3b5104:
    // 0x3b5104: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b5104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3b5108:
    // 0x3b5108: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b5108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b510c:
    // 0x3b510c: 0x244a6908  addiu       $t2, $v0, 0x6908
    ctx->pc = 0x3b510cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 26888));
label_3b5110:
    // 0x3b5110: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3b5110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b5114:
    // 0x3b5114: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x3b5114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3b5118:
    // 0x3b5118: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x3b5118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_3b511c:
    // 0x3b511c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x3b511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_3b5120:
    // 0x3b5120: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b5120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b5124:
    // 0x3b5124: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3b5124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3b5128:
    // 0x3b5128: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3b5128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3b512c:
    // 0x3b512c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x3b512cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b5130:
    // 0x3b5130: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3b5130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3b5134:
    // 0x3b5134: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3b5134u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3b5138:
    // 0x3b5138: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x3b5138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_3b513c:
    // 0x3b513c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3b513cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3b5140:
    // 0x3b5140: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b5140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b5144:
    // 0x3b5144: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3b5144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3b5148:
    // 0x3b5148: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3b5148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3b514c:
    // 0x3b514c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_3b5150:
    if (ctx->pc == 0x3B5150u) {
        ctx->pc = 0x3B5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B514Cu;
        // 0x3b5150: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5154u;
        goto label_3b5154;
    }
    ctx->pc = 0x3B514Cu;
    {
        const bool branch_taken_0x3b514c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B514Cu;
        // 0x3b5150: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b514c) {
            ctx->pc = 0x3B5110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5110;
        }
    }
    ctx->pc = 0x3B5154u;
label_3b5154:
    // 0x3b5154: 0x10000013  b           . + 4 + (0x13 << 2)
label_3b5158:
    if (ctx->pc == 0x3B5158u) {
        ctx->pc = 0x3B5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5154u;
        // 0x3b5158: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B515Cu;
        goto label_3b515c;
    }
    ctx->pc = 0x3B5154u;
    {
        const bool branch_taken_0x3b5154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5154u;
        // 0x3b5158: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5154) {
            ctx->pc = 0x3B51A4u;
            goto label_3b51a4;
        }
    }
    ctx->pc = 0x3B515Cu;
label_3b515c:
    // 0x3b515c: 0x0  nop
    ctx->pc = 0x3b515cu;
    // NOP
label_3b5160:
    // 0x3b5160: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
label_3b5164:
    if (ctx->pc == 0x3B5164u) {
        ctx->pc = 0x3B5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5160u;
        // 0x3b5164: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5168u;
        goto label_3b5168;
    }
    ctx->pc = 0x3B5160u;
    {
        const bool branch_taken_0x3b5160 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3B5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5160u;
        // 0x3b5164: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5160) {
            ctx->pc = 0x3B51A4u;
            goto label_3b51a4;
        }
    }
    ctx->pc = 0x3B5168u;
label_3b5168:
    // 0x3b5168: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b5168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3b516c:
    // 0x3b516c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3b516cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3b5170:
    // 0x3b5170: 0x24466908  addiu       $a2, $v0, 0x6908
    ctx->pc = 0x3b5170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26888));
label_3b5174:
    // 0x3b5174: 0x0  nop
    ctx->pc = 0x3b5174u;
    // NOP
label_3b5178:
    // 0x3b5178: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x3b5178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_3b517c:
    // 0x3b517c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3b517cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3b5180:
    // 0x3b5180: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3b5180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3b5184:
    // 0x3b5184: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x3b5184u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b5188:
    // 0x3b5188: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b5188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b518c:
    // 0x3b518c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3b5190:
    // 0x3b5190: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3b5190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3b5194:
    // 0x3b5194: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3b5194u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3b5198:
    // 0x3b5198: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_3b519c:
    if (ctx->pc == 0x3B519Cu) {
        ctx->pc = 0x3B519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5198u;
        // 0x3b519c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51A0u;
        goto label_3b51a0;
    }
    ctx->pc = 0x3B5198u;
    {
        const bool branch_taken_0x3b5198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5198u;
        // 0x3b519c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5198) {
            ctx->pc = 0x3B5178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5178;
        }
    }
    ctx->pc = 0x3B51A0u;
label_3b51a0:
    // 0x3b51a0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b51a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3b51a4:
    // 0x3b51a4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3b51a8:
    // 0x3b51a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b51ac:
    // 0x3b51ac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3b51acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3b51b0:
    // 0x3b51b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b51b4:
    // 0x3b51b4: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x3b51b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b51b8:
    // 0x3b51b8: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x3b51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_3b51bc:
    // 0x3b51bc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3b51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3b51c0:
    // 0x3b51c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b51c4:
    // 0x3b51c4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3b51c8:
    if (ctx->pc == 0x3B51C8u) {
        ctx->pc = 0x3B51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51C4u;
        // 0x3b51c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51CCu;
        goto label_3b51cc;
    }
    ctx->pc = 0x3B51C4u;
    {
        const bool branch_taken_0x3b51c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b51c4) {
            ctx->pc = 0x3B51C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B51C4u;
            // 0x3b51c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B51ECu;
            goto label_3b51ec;
        }
    }
    ctx->pc = 0x3B51CCu;
label_3b51cc:
    // 0x3b51cc: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3b51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3b51d0:
    // 0x3b51d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3b51d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3b51d4:
    // 0x3b51d4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3b51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3b51d8:
    // 0x3b51d8: 0x60f809  jalr        $v1
label_3b51dc:
    if (ctx->pc == 0x3B51DCu) {
        ctx->pc = 0x3B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51D8u;
        // 0x3b51dc: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51E0u;
        goto label_3b51e0;
    }
    ctx->pc = 0x3B51D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B51E0u);
        ctx->pc = 0x3B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51D8u;
        // 0x3b51dc: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B51D8u, 0x3B51E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B51E0u;
label_3b51e0:
    // 0x3b51e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b51e4:
    // 0x3b51e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b51e8:
    // 0x3b51e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b51e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b51ec:
    // 0x3b51ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b51ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b51f0:
    // 0x3b51f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b51f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b51f4:
    // 0x3b51f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b51f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b51f8:
    // 0x3b51f8: 0x3e00008  jr          $ra
label_3b51fc:
    if (ctx->pc == 0x3B51FCu) {
        ctx->pc = 0x3B51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51F8u;
        // 0x3b51fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5200u;
        goto label_fallthrough_0x3b51f8;
    }
    ctx->pc = 0x3B51F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51F8u;
        // 0x3b51fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B51F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b51f8:
    ctx->pc = 0x3B5200u;
}
