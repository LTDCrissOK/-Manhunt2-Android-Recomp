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

// Function: sub_002F9AB8
// Address: 0x2f9ab8 - 0x2fa188
void sub_002F9AB8_0x2f9ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9AB8_0x2f9ab8");
#endif

    switch (ctx->pc) {
        case 0x2f9ab8u: goto label_2f9ab8;
        case 0x2f9abcu: goto label_2f9abc;
        case 0x2f9ac0u: goto label_2f9ac0;
        case 0x2f9ac4u: goto label_2f9ac4;
        case 0x2f9ac8u: goto label_2f9ac8;
        case 0x2f9accu: goto label_2f9acc;
        case 0x2f9ad0u: goto label_2f9ad0;
        case 0x2f9ad4u: goto label_2f9ad4;
        case 0x2f9ad8u: goto label_2f9ad8;
        case 0x2f9adcu: goto label_2f9adc;
        case 0x2f9ae0u: goto label_2f9ae0;
        case 0x2f9ae4u: goto label_2f9ae4;
        case 0x2f9ae8u: goto label_2f9ae8;
        case 0x2f9aecu: goto label_2f9aec;
        case 0x2f9af0u: goto label_2f9af0;
        case 0x2f9af4u: goto label_2f9af4;
        case 0x2f9af8u: goto label_2f9af8;
        case 0x2f9afcu: goto label_2f9afc;
        case 0x2f9b00u: goto label_2f9b00;
        case 0x2f9b04u: goto label_2f9b04;
        case 0x2f9b08u: goto label_2f9b08;
        case 0x2f9b0cu: goto label_2f9b0c;
        case 0x2f9b10u: goto label_2f9b10;
        case 0x2f9b14u: goto label_2f9b14;
        case 0x2f9b18u: goto label_2f9b18;
        case 0x2f9b1cu: goto label_2f9b1c;
        case 0x2f9b20u: goto label_2f9b20;
        case 0x2f9b24u: goto label_2f9b24;
        case 0x2f9b28u: goto label_2f9b28;
        case 0x2f9b2cu: goto label_2f9b2c;
        case 0x2f9b30u: goto label_2f9b30;
        case 0x2f9b34u: goto label_2f9b34;
        case 0x2f9b38u: goto label_2f9b38;
        case 0x2f9b3cu: goto label_2f9b3c;
        case 0x2f9b40u: goto label_2f9b40;
        case 0x2f9b44u: goto label_2f9b44;
        case 0x2f9b48u: goto label_2f9b48;
        case 0x2f9b4cu: goto label_2f9b4c;
        case 0x2f9b50u: goto label_2f9b50;
        case 0x2f9b54u: goto label_2f9b54;
        case 0x2f9b58u: goto label_2f9b58;
        case 0x2f9b5cu: goto label_2f9b5c;
        case 0x2f9b60u: goto label_2f9b60;
        case 0x2f9b64u: goto label_2f9b64;
        case 0x2f9b68u: goto label_2f9b68;
        case 0x2f9b6cu: goto label_2f9b6c;
        case 0x2f9b70u: goto label_2f9b70;
        case 0x2f9b74u: goto label_2f9b74;
        case 0x2f9b78u: goto label_2f9b78;
        case 0x2f9b7cu: goto label_2f9b7c;
        case 0x2f9b80u: goto label_2f9b80;
        case 0x2f9b84u: goto label_2f9b84;
        case 0x2f9b88u: goto label_2f9b88;
        case 0x2f9b8cu: goto label_2f9b8c;
        case 0x2f9b90u: goto label_2f9b90;
        case 0x2f9b94u: goto label_2f9b94;
        case 0x2f9b98u: goto label_2f9b98;
        case 0x2f9b9cu: goto label_2f9b9c;
        case 0x2f9ba0u: goto label_2f9ba0;
        case 0x2f9ba4u: goto label_2f9ba4;
        case 0x2f9ba8u: goto label_2f9ba8;
        case 0x2f9bacu: goto label_2f9bac;
        case 0x2f9bb0u: goto label_2f9bb0;
        case 0x2f9bb4u: goto label_2f9bb4;
        case 0x2f9bb8u: goto label_2f9bb8;
        case 0x2f9bbcu: goto label_2f9bbc;
        case 0x2f9bc0u: goto label_2f9bc0;
        case 0x2f9bc4u: goto label_2f9bc4;
        case 0x2f9bc8u: goto label_2f9bc8;
        case 0x2f9bccu: goto label_2f9bcc;
        case 0x2f9bd0u: goto label_2f9bd0;
        case 0x2f9bd4u: goto label_2f9bd4;
        case 0x2f9bd8u: goto label_2f9bd8;
        case 0x2f9bdcu: goto label_2f9bdc;
        case 0x2f9be0u: goto label_2f9be0;
        case 0x2f9be4u: goto label_2f9be4;
        case 0x2f9be8u: goto label_2f9be8;
        case 0x2f9becu: goto label_2f9bec;
        case 0x2f9bf0u: goto label_2f9bf0;
        case 0x2f9bf4u: goto label_2f9bf4;
        case 0x2f9bf8u: goto label_2f9bf8;
        case 0x2f9bfcu: goto label_2f9bfc;
        case 0x2f9c00u: goto label_2f9c00;
        case 0x2f9c04u: goto label_2f9c04;
        case 0x2f9c08u: goto label_2f9c08;
        case 0x2f9c0cu: goto label_2f9c0c;
        case 0x2f9c10u: goto label_2f9c10;
        case 0x2f9c14u: goto label_2f9c14;
        case 0x2f9c18u: goto label_2f9c18;
        case 0x2f9c1cu: goto label_2f9c1c;
        case 0x2f9c20u: goto label_2f9c20;
        case 0x2f9c24u: goto label_2f9c24;
        case 0x2f9c28u: goto label_2f9c28;
        case 0x2f9c2cu: goto label_2f9c2c;
        case 0x2f9c30u: goto label_2f9c30;
        case 0x2f9c34u: goto label_2f9c34;
        case 0x2f9c38u: goto label_2f9c38;
        case 0x2f9c3cu: goto label_2f9c3c;
        case 0x2f9c40u: goto label_2f9c40;
        case 0x2f9c44u: goto label_2f9c44;
        case 0x2f9c48u: goto label_2f9c48;
        case 0x2f9c4cu: goto label_2f9c4c;
        case 0x2f9c50u: goto label_2f9c50;
        case 0x2f9c54u: goto label_2f9c54;
        case 0x2f9c58u: goto label_2f9c58;
        case 0x2f9c5cu: goto label_2f9c5c;
        case 0x2f9c60u: goto label_2f9c60;
        case 0x2f9c64u: goto label_2f9c64;
        case 0x2f9c68u: goto label_2f9c68;
        case 0x2f9c6cu: goto label_2f9c6c;
        case 0x2f9c70u: goto label_2f9c70;
        case 0x2f9c74u: goto label_2f9c74;
        case 0x2f9c78u: goto label_2f9c78;
        case 0x2f9c7cu: goto label_2f9c7c;
        case 0x2f9c80u: goto label_2f9c80;
        case 0x2f9c84u: goto label_2f9c84;
        case 0x2f9c88u: goto label_2f9c88;
        case 0x2f9c8cu: goto label_2f9c8c;
        case 0x2f9c90u: goto label_2f9c90;
        case 0x2f9c94u: goto label_2f9c94;
        case 0x2f9c98u: goto label_2f9c98;
        case 0x2f9c9cu: goto label_2f9c9c;
        case 0x2f9ca0u: goto label_2f9ca0;
        case 0x2f9ca4u: goto label_2f9ca4;
        case 0x2f9ca8u: goto label_2f9ca8;
        case 0x2f9cacu: goto label_2f9cac;
        case 0x2f9cb0u: goto label_2f9cb0;
        case 0x2f9cb4u: goto label_2f9cb4;
        case 0x2f9cb8u: goto label_2f9cb8;
        case 0x2f9cbcu: goto label_2f9cbc;
        case 0x2f9cc0u: goto label_2f9cc0;
        case 0x2f9cc4u: goto label_2f9cc4;
        case 0x2f9cc8u: goto label_2f9cc8;
        case 0x2f9cccu: goto label_2f9ccc;
        case 0x2f9cd0u: goto label_2f9cd0;
        case 0x2f9cd4u: goto label_2f9cd4;
        case 0x2f9cd8u: goto label_2f9cd8;
        case 0x2f9cdcu: goto label_2f9cdc;
        case 0x2f9ce0u: goto label_2f9ce0;
        case 0x2f9ce4u: goto label_2f9ce4;
        case 0x2f9ce8u: goto label_2f9ce8;
        case 0x2f9cecu: goto label_2f9cec;
        case 0x2f9cf0u: goto label_2f9cf0;
        case 0x2f9cf4u: goto label_2f9cf4;
        case 0x2f9cf8u: goto label_2f9cf8;
        case 0x2f9cfcu: goto label_2f9cfc;
        case 0x2f9d00u: goto label_2f9d00;
        case 0x2f9d04u: goto label_2f9d04;
        case 0x2f9d08u: goto label_2f9d08;
        case 0x2f9d0cu: goto label_2f9d0c;
        case 0x2f9d10u: goto label_2f9d10;
        case 0x2f9d14u: goto label_2f9d14;
        case 0x2f9d18u: goto label_2f9d18;
        case 0x2f9d1cu: goto label_2f9d1c;
        case 0x2f9d20u: goto label_2f9d20;
        case 0x2f9d24u: goto label_2f9d24;
        case 0x2f9d28u: goto label_2f9d28;
        case 0x2f9d2cu: goto label_2f9d2c;
        case 0x2f9d30u: goto label_2f9d30;
        case 0x2f9d34u: goto label_2f9d34;
        case 0x2f9d38u: goto label_2f9d38;
        case 0x2f9d3cu: goto label_2f9d3c;
        case 0x2f9d40u: goto label_2f9d40;
        case 0x2f9d44u: goto label_2f9d44;
        case 0x2f9d48u: goto label_2f9d48;
        case 0x2f9d4cu: goto label_2f9d4c;
        case 0x2f9d50u: goto label_2f9d50;
        case 0x2f9d54u: goto label_2f9d54;
        case 0x2f9d58u: goto label_2f9d58;
        case 0x2f9d5cu: goto label_2f9d5c;
        case 0x2f9d60u: goto label_2f9d60;
        case 0x2f9d64u: goto label_2f9d64;
        case 0x2f9d68u: goto label_2f9d68;
        case 0x2f9d6cu: goto label_2f9d6c;
        case 0x2f9d70u: goto label_2f9d70;
        case 0x2f9d74u: goto label_2f9d74;
        case 0x2f9d78u: goto label_2f9d78;
        case 0x2f9d7cu: goto label_2f9d7c;
        case 0x2f9d80u: goto label_2f9d80;
        case 0x2f9d84u: goto label_2f9d84;
        case 0x2f9d88u: goto label_2f9d88;
        case 0x2f9d8cu: goto label_2f9d8c;
        case 0x2f9d90u: goto label_2f9d90;
        case 0x2f9d94u: goto label_2f9d94;
        case 0x2f9d98u: goto label_2f9d98;
        case 0x2f9d9cu: goto label_2f9d9c;
        case 0x2f9da0u: goto label_2f9da0;
        case 0x2f9da4u: goto label_2f9da4;
        case 0x2f9da8u: goto label_2f9da8;
        case 0x2f9dacu: goto label_2f9dac;
        case 0x2f9db0u: goto label_2f9db0;
        case 0x2f9db4u: goto label_2f9db4;
        case 0x2f9db8u: goto label_2f9db8;
        case 0x2f9dbcu: goto label_2f9dbc;
        case 0x2f9dc0u: goto label_2f9dc0;
        case 0x2f9dc4u: goto label_2f9dc4;
        case 0x2f9dc8u: goto label_2f9dc8;
        case 0x2f9dccu: goto label_2f9dcc;
        case 0x2f9dd0u: goto label_2f9dd0;
        case 0x2f9dd4u: goto label_2f9dd4;
        case 0x2f9dd8u: goto label_2f9dd8;
        case 0x2f9ddcu: goto label_2f9ddc;
        case 0x2f9de0u: goto label_2f9de0;
        case 0x2f9de4u: goto label_2f9de4;
        case 0x2f9de8u: goto label_2f9de8;
        case 0x2f9decu: goto label_2f9dec;
        case 0x2f9df0u: goto label_2f9df0;
        case 0x2f9df4u: goto label_2f9df4;
        case 0x2f9df8u: goto label_2f9df8;
        case 0x2f9dfcu: goto label_2f9dfc;
        case 0x2f9e00u: goto label_2f9e00;
        case 0x2f9e04u: goto label_2f9e04;
        case 0x2f9e08u: goto label_2f9e08;
        case 0x2f9e0cu: goto label_2f9e0c;
        case 0x2f9e10u: goto label_2f9e10;
        case 0x2f9e14u: goto label_2f9e14;
        case 0x2f9e18u: goto label_2f9e18;
        case 0x2f9e1cu: goto label_2f9e1c;
        case 0x2f9e20u: goto label_2f9e20;
        case 0x2f9e24u: goto label_2f9e24;
        case 0x2f9e28u: goto label_2f9e28;
        case 0x2f9e2cu: goto label_2f9e2c;
        case 0x2f9e30u: goto label_2f9e30;
        case 0x2f9e34u: goto label_2f9e34;
        case 0x2f9e38u: goto label_2f9e38;
        case 0x2f9e3cu: goto label_2f9e3c;
        case 0x2f9e40u: goto label_2f9e40;
        case 0x2f9e44u: goto label_2f9e44;
        case 0x2f9e48u: goto label_2f9e48;
        case 0x2f9e4cu: goto label_2f9e4c;
        case 0x2f9e50u: goto label_2f9e50;
        case 0x2f9e54u: goto label_2f9e54;
        case 0x2f9e58u: goto label_2f9e58;
        case 0x2f9e5cu: goto label_2f9e5c;
        case 0x2f9e60u: goto label_2f9e60;
        case 0x2f9e64u: goto label_2f9e64;
        case 0x2f9e68u: goto label_2f9e68;
        case 0x2f9e6cu: goto label_2f9e6c;
        case 0x2f9e70u: goto label_2f9e70;
        case 0x2f9e74u: goto label_2f9e74;
        case 0x2f9e78u: goto label_2f9e78;
        case 0x2f9e7cu: goto label_2f9e7c;
        case 0x2f9e80u: goto label_2f9e80;
        case 0x2f9e84u: goto label_2f9e84;
        case 0x2f9e88u: goto label_2f9e88;
        case 0x2f9e8cu: goto label_2f9e8c;
        case 0x2f9e90u: goto label_2f9e90;
        case 0x2f9e94u: goto label_2f9e94;
        case 0x2f9e98u: goto label_2f9e98;
        case 0x2f9e9cu: goto label_2f9e9c;
        case 0x2f9ea0u: goto label_2f9ea0;
        case 0x2f9ea4u: goto label_2f9ea4;
        case 0x2f9ea8u: goto label_2f9ea8;
        case 0x2f9eacu: goto label_2f9eac;
        case 0x2f9eb0u: goto label_2f9eb0;
        case 0x2f9eb4u: goto label_2f9eb4;
        case 0x2f9eb8u: goto label_2f9eb8;
        case 0x2f9ebcu: goto label_2f9ebc;
        case 0x2f9ec0u: goto label_2f9ec0;
        case 0x2f9ec4u: goto label_2f9ec4;
        case 0x2f9ec8u: goto label_2f9ec8;
        case 0x2f9eccu: goto label_2f9ecc;
        case 0x2f9ed0u: goto label_2f9ed0;
        case 0x2f9ed4u: goto label_2f9ed4;
        case 0x2f9ed8u: goto label_2f9ed8;
        case 0x2f9edcu: goto label_2f9edc;
        case 0x2f9ee0u: goto label_2f9ee0;
        case 0x2f9ee4u: goto label_2f9ee4;
        case 0x2f9ee8u: goto label_2f9ee8;
        case 0x2f9eecu: goto label_2f9eec;
        case 0x2f9ef0u: goto label_2f9ef0;
        case 0x2f9ef4u: goto label_2f9ef4;
        case 0x2f9ef8u: goto label_2f9ef8;
        case 0x2f9efcu: goto label_2f9efc;
        case 0x2f9f00u: goto label_2f9f00;
        case 0x2f9f04u: goto label_2f9f04;
        case 0x2f9f08u: goto label_2f9f08;
        case 0x2f9f0cu: goto label_2f9f0c;
        case 0x2f9f10u: goto label_2f9f10;
        case 0x2f9f14u: goto label_2f9f14;
        case 0x2f9f18u: goto label_2f9f18;
        case 0x2f9f1cu: goto label_2f9f1c;
        case 0x2f9f20u: goto label_2f9f20;
        case 0x2f9f24u: goto label_2f9f24;
        case 0x2f9f28u: goto label_2f9f28;
        case 0x2f9f2cu: goto label_2f9f2c;
        case 0x2f9f30u: goto label_2f9f30;
        case 0x2f9f34u: goto label_2f9f34;
        case 0x2f9f38u: goto label_2f9f38;
        case 0x2f9f3cu: goto label_2f9f3c;
        case 0x2f9f40u: goto label_2f9f40;
        case 0x2f9f44u: goto label_2f9f44;
        case 0x2f9f48u: goto label_2f9f48;
        case 0x2f9f4cu: goto label_2f9f4c;
        case 0x2f9f50u: goto label_2f9f50;
        case 0x2f9f54u: goto label_2f9f54;
        case 0x2f9f58u: goto label_2f9f58;
        case 0x2f9f5cu: goto label_2f9f5c;
        case 0x2f9f60u: goto label_2f9f60;
        case 0x2f9f64u: goto label_2f9f64;
        case 0x2f9f68u: goto label_2f9f68;
        case 0x2f9f6cu: goto label_2f9f6c;
        case 0x2f9f70u: goto label_2f9f70;
        case 0x2f9f74u: goto label_2f9f74;
        case 0x2f9f78u: goto label_2f9f78;
        case 0x2f9f7cu: goto label_2f9f7c;
        case 0x2f9f80u: goto label_2f9f80;
        case 0x2f9f84u: goto label_2f9f84;
        case 0x2f9f88u: goto label_2f9f88;
        case 0x2f9f8cu: goto label_2f9f8c;
        case 0x2f9f90u: goto label_2f9f90;
        case 0x2f9f94u: goto label_2f9f94;
        case 0x2f9f98u: goto label_2f9f98;
        case 0x2f9f9cu: goto label_2f9f9c;
        case 0x2f9fa0u: goto label_2f9fa0;
        case 0x2f9fa4u: goto label_2f9fa4;
        case 0x2f9fa8u: goto label_2f9fa8;
        case 0x2f9facu: goto label_2f9fac;
        case 0x2f9fb0u: goto label_2f9fb0;
        case 0x2f9fb4u: goto label_2f9fb4;
        case 0x2f9fb8u: goto label_2f9fb8;
        case 0x2f9fbcu: goto label_2f9fbc;
        case 0x2f9fc0u: goto label_2f9fc0;
        case 0x2f9fc4u: goto label_2f9fc4;
        case 0x2f9fc8u: goto label_2f9fc8;
        case 0x2f9fccu: goto label_2f9fcc;
        case 0x2f9fd0u: goto label_2f9fd0;
        case 0x2f9fd4u: goto label_2f9fd4;
        case 0x2f9fd8u: goto label_2f9fd8;
        case 0x2f9fdcu: goto label_2f9fdc;
        case 0x2f9fe0u: goto label_2f9fe0;
        case 0x2f9fe4u: goto label_2f9fe4;
        case 0x2f9fe8u: goto label_2f9fe8;
        case 0x2f9fecu: goto label_2f9fec;
        case 0x2f9ff0u: goto label_2f9ff0;
        case 0x2f9ff4u: goto label_2f9ff4;
        case 0x2f9ff8u: goto label_2f9ff8;
        case 0x2f9ffcu: goto label_2f9ffc;
        case 0x2fa000u: goto label_2fa000;
        case 0x2fa004u: goto label_2fa004;
        case 0x2fa008u: goto label_2fa008;
        case 0x2fa00cu: goto label_2fa00c;
        case 0x2fa010u: goto label_2fa010;
        case 0x2fa014u: goto label_2fa014;
        case 0x2fa018u: goto label_2fa018;
        case 0x2fa01cu: goto label_2fa01c;
        case 0x2fa020u: goto label_2fa020;
        case 0x2fa024u: goto label_2fa024;
        case 0x2fa028u: goto label_2fa028;
        case 0x2fa02cu: goto label_2fa02c;
        case 0x2fa030u: goto label_2fa030;
        case 0x2fa034u: goto label_2fa034;
        case 0x2fa038u: goto label_2fa038;
        case 0x2fa03cu: goto label_2fa03c;
        case 0x2fa040u: goto label_2fa040;
        case 0x2fa044u: goto label_2fa044;
        case 0x2fa048u: goto label_2fa048;
        case 0x2fa04cu: goto label_2fa04c;
        case 0x2fa050u: goto label_2fa050;
        case 0x2fa054u: goto label_2fa054;
        case 0x2fa058u: goto label_2fa058;
        case 0x2fa05cu: goto label_2fa05c;
        case 0x2fa060u: goto label_2fa060;
        case 0x2fa064u: goto label_2fa064;
        case 0x2fa068u: goto label_2fa068;
        case 0x2fa06cu: goto label_2fa06c;
        case 0x2fa070u: goto label_2fa070;
        case 0x2fa074u: goto label_2fa074;
        case 0x2fa078u: goto label_2fa078;
        case 0x2fa07cu: goto label_2fa07c;
        case 0x2fa080u: goto label_2fa080;
        case 0x2fa084u: goto label_2fa084;
        case 0x2fa088u: goto label_2fa088;
        case 0x2fa08cu: goto label_2fa08c;
        case 0x2fa090u: goto label_2fa090;
        case 0x2fa094u: goto label_2fa094;
        case 0x2fa098u: goto label_2fa098;
        case 0x2fa09cu: goto label_2fa09c;
        case 0x2fa0a0u: goto label_2fa0a0;
        case 0x2fa0a4u: goto label_2fa0a4;
        case 0x2fa0a8u: goto label_2fa0a8;
        case 0x2fa0acu: goto label_2fa0ac;
        case 0x2fa0b0u: goto label_2fa0b0;
        case 0x2fa0b4u: goto label_2fa0b4;
        case 0x2fa0b8u: goto label_2fa0b8;
        case 0x2fa0bcu: goto label_2fa0bc;
        case 0x2fa0c0u: goto label_2fa0c0;
        case 0x2fa0c4u: goto label_2fa0c4;
        case 0x2fa0c8u: goto label_2fa0c8;
        case 0x2fa0ccu: goto label_2fa0cc;
        case 0x2fa0d0u: goto label_2fa0d0;
        case 0x2fa0d4u: goto label_2fa0d4;
        case 0x2fa0d8u: goto label_2fa0d8;
        case 0x2fa0dcu: goto label_2fa0dc;
        case 0x2fa0e0u: goto label_2fa0e0;
        case 0x2fa0e4u: goto label_2fa0e4;
        case 0x2fa0e8u: goto label_2fa0e8;
        case 0x2fa0ecu: goto label_2fa0ec;
        case 0x2fa0f0u: goto label_2fa0f0;
        case 0x2fa0f4u: goto label_2fa0f4;
        case 0x2fa0f8u: goto label_2fa0f8;
        case 0x2fa0fcu: goto label_2fa0fc;
        case 0x2fa100u: goto label_2fa100;
        case 0x2fa104u: goto label_2fa104;
        case 0x2fa108u: goto label_2fa108;
        case 0x2fa10cu: goto label_2fa10c;
        case 0x2fa110u: goto label_2fa110;
        case 0x2fa114u: goto label_2fa114;
        case 0x2fa118u: goto label_2fa118;
        case 0x2fa11cu: goto label_2fa11c;
        case 0x2fa120u: goto label_2fa120;
        case 0x2fa124u: goto label_2fa124;
        case 0x2fa128u: goto label_2fa128;
        case 0x2fa12cu: goto label_2fa12c;
        case 0x2fa130u: goto label_2fa130;
        case 0x2fa134u: goto label_2fa134;
        case 0x2fa138u: goto label_2fa138;
        case 0x2fa13cu: goto label_2fa13c;
        case 0x2fa140u: goto label_2fa140;
        case 0x2fa144u: goto label_2fa144;
        case 0x2fa148u: goto label_2fa148;
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa150u: goto label_2fa150;
        case 0x2fa154u: goto label_2fa154;
        case 0x2fa158u: goto label_2fa158;
        case 0x2fa15cu: goto label_2fa15c;
        case 0x2fa160u: goto label_2fa160;
        case 0x2fa164u: goto label_2fa164;
        case 0x2fa168u: goto label_2fa168;
        case 0x2fa16cu: goto label_2fa16c;
        case 0x2fa170u: goto label_2fa170;
        case 0x2fa174u: goto label_2fa174;
        case 0x2fa178u: goto label_2fa178;
        case 0x2fa17cu: goto label_2fa17c;
        case 0x2fa180u: goto label_2fa180;
        case 0x2fa184u: goto label_2fa184;
        default: break;
    }

    ctx->pc = 0x2f9ab8u;

label_2f9ab8:
    // 0x2f9ab8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f9ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2f9abc:
    // 0x2f9abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9ac0:
    // 0x2f9ac0: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2f9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2f9ac4:
    // 0x2f9ac4: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2f9ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_2f9ac8:
    // 0x2f9ac8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f9ac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9acc:
    // 0x2f9acc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2f9accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_2f9ad0:
    // 0x2f9ad0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2f9ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_2f9ad4:
    // 0x2f9ad4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2f9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_2f9ad8:
    // 0x2f9ad8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2f9ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_2f9adc:
    // 0x2f9adc: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2f9adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_2f9ae0:
    // 0x2f9ae0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2f9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_2f9ae4:
    // 0x2f9ae4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2f9ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_2f9ae8:
    // 0x2f9ae8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2f9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_2f9aec:
    // 0x2f9aec: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2f9aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_2f9af0:
    // 0x2f9af0: 0x92c21371  lbu         $v0, 0x1371($s6)
    ctx->pc = 0x2f9af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4977)));
label_2f9af4:
    // 0x2f9af4: 0x8ec31364  lw          $v1, 0x1364($s6)
    ctx->pc = 0x2f9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4964)));
label_2f9af8:
    // 0x2f9af8: 0xaec211fc  sw          $v0, 0x11FC($s6)
    ctx->pc = 0x2f9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4604), GPR_U32(ctx, 2));
label_2f9afc:
    // 0x2f9afc: 0xc0899bc  jal         func_2266F0
label_2f9b00:
    if (ctx->pc == 0x2F9B00u) {
        ctx->pc = 0x2F9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AFCu;
        // 0x2f9b00: 0xaec311e8  sw          $v1, 0x11E8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B04u;
        goto label_2f9b04;
    }
    ctx->pc = 0x2F9AFCu;
    SET_GPR_U32(ctx, 31, 0x2F9B04u);
    ctx->pc = 0x2F9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AFCu;
    // 0x2f9b00: 0xaec311e8  sw          $v1, 0x11E8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4584), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F9AFCu, 0x2F9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B04u;
label_2f9b04:
    // 0x2f9b04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f9b04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b08:
    // 0x2f9b08: 0xc09876c  jal         func_261DB0
label_2f9b0c:
    if (ctx->pc == 0x2F9B0Cu) {
        ctx->pc = 0x2F9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B08u;
        // 0x2f9b0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B10u;
        goto label_2f9b10;
    }
    ctx->pc = 0x2F9B08u;
    SET_GPR_U32(ctx, 31, 0x2F9B10u);
    ctx->pc = 0x2F9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B08u;
    // 0x2f9b0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2F9B08u, 0x2F9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B10u;
label_2f9b10:
    // 0x2f9b10: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2f9b10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b14:
    // 0x2f9b14: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x2f9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_2f9b18:
    // 0x2f9b18: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
label_2f9b1c:
    if (ctx->pc == 0x2F9B1Cu) {
        ctx->pc = 0x2F9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B18u;
        // 0x2f9b1c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B20u;
        goto label_2f9b20;
    }
    ctx->pc = 0x2F9B18u;
    {
        const bool branch_taken_0x2f9b18 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B18u;
        // 0x2f9b1c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b18) {
            ctx->pc = 0x2F9B28u;
            goto label_2f9b28;
        }
    }
    ctx->pc = 0x2F9B20u;
label_2f9b20:
    // 0x2f9b20: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2f9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2f9b24:
    // 0x2f9b24: 0x241e002d  addiu       $fp, $zero, 0x2D
    ctx->pc = 0x2f9b24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2f9b28:
    // 0x2f9b28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f9b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f9b2c:
    // 0x2f9b2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f9b30:
    // 0x2f9b30: 0x8c45cd60  lw          $a1, -0x32A0($v0)
    ctx->pc = 0x2f9b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954336)));
label_2f9b34:
    // 0x2f9b34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f9b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9b38:
    // 0x2f9b38: 0xc0d9cc2  jal         func_367308
label_2f9b3c:
    if (ctx->pc == 0x2F9B3Cu) {
        ctx->pc = 0x2F9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B38u;
        // 0x2f9b3c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B40u;
        goto label_2f9b40;
    }
    ctx->pc = 0x2F9B38u;
    SET_GPR_U32(ctx, 31, 0x2F9B40u);
    ctx->pc = 0x2F9B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B38u;
    // 0x2f9b3c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2F9B38u, 0x2F9B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B40u;
label_2f9b40:
    // 0x2f9b40: 0x8ec411e8  lw          $a0, 0x11E8($s6)
    ctx->pc = 0x2f9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9b44:
    // 0x2f9b44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f9b48:
    // 0x2f9b48: 0x8c50bd30  lw          $s0, -0x42D0($v0)
    ctx->pc = 0x2f9b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f9b4c:
    // 0x2f9b4c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f9b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b50:
    // 0x2f9b50: 0x8ec30334  lw          $v1, 0x334($s6)
    ctx->pc = 0x2f9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
label_2f9b54:
    // 0x2f9b54: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x2f9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_2f9b58:
    // 0x2f9b58: 0x8ec51380  lw          $a1, 0x1380($s6)
    ctx->pc = 0x2f9b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4992)));
label_2f9b5c:
    // 0x2f9b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b60:
    // 0x2f9b60: 0x8c710150  lw          $s1, 0x150($v1)
    ctx->pc = 0x2f9b60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2f9b64:
    // 0x2f9b64: 0xc0b5bc0  jal         func_2D6F00
label_2f9b68:
    if (ctx->pc == 0x2F9B68u) {
        ctx->pc = 0x2F9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B64u;
        // 0x2f9b68: 0x8c520150  lw          $s2, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B6Cu;
        goto label_2f9b6c;
    }
    ctx->pc = 0x2F9B64u;
    SET_GPR_U32(ctx, 31, 0x2F9B6Cu);
    ctx->pc = 0x2F9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B64u;
    // 0x2f9b68: 0x8c520150  lw          $s2, 0x150($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2F9B64u, 0x2F9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B6Cu;
label_2f9b6c:
    // 0x2f9b6c: 0x8ec51380  lw          $a1, 0x1380($s6)
    ctx->pc = 0x2f9b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4992)));
label_2f9b70:
    // 0x2f9b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b74:
    // 0x2f9b74: 0xc0b5bc0  jal         func_2D6F00
label_2f9b78:
    if (ctx->pc == 0x2F9B78u) {
        ctx->pc = 0x2F9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B74u;
        // 0x2f9b78: 0x8ec611e8  lw          $a2, 0x11E8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B7Cu;
        goto label_2f9b7c;
    }
    ctx->pc = 0x2F9B74u;
    SET_GPR_U32(ctx, 31, 0x2F9B7Cu);
    ctx->pc = 0x2F9B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B74u;
    // 0x2f9b78: 0x8ec611e8  lw          $a2, 0x11E8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2F9B74u, 0x2F9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B7Cu;
label_2f9b7c:
    // 0x2f9b7c: 0x8ec40334  lw          $a0, 0x334($s6)
    ctx->pc = 0x2f9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
label_2f9b80:
    // 0x2f9b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b84:
    // 0x2f9b84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f9b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b88:
    // 0x2f9b88: 0xc069bc8  jal         func_1A6F20
label_2f9b8c:
    if (ctx->pc == 0x2F9B8Cu) {
        ctx->pc = 0x2F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B88u;
        // 0x2f9b8c: 0x8ef000b8  lw          $s0, 0xB8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B90u;
        goto label_2f9b90;
    }
    ctx->pc = 0x2F9B88u;
    SET_GPR_U32(ctx, 31, 0x2F9B90u);
    ctx->pc = 0x2F9B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B88u;
    // 0x2f9b8c: 0x8ef000b8  lw          $s0, 0xB8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F20u, 0x2F9B88u, 0x2F9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B90u;
label_2f9b90:
    // 0x2f9b90: 0x8ec40334  lw          $a0, 0x334($s6)
    ctx->pc = 0x2f9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
label_2f9b94:
    // 0x2f9b94: 0xc06a05e  jal         func_1A8178
label_2f9b98:
    if (ctx->pc == 0x2F9B98u) {
        ctx->pc = 0x2F9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B94u;
        // 0x2f9b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9B9Cu;
        goto label_2f9b9c;
    }
    ctx->pc = 0x2F9B94u;
    SET_GPR_U32(ctx, 31, 0x2F9B9Cu);
    ctx->pc = 0x2F9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B94u;
    // 0x2f9b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2F9B94u, 0x2F9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B9Cu;
label_2f9b9c:
    // 0x2f9b9c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2f9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2f9ba0:
    // 0x2f9ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ba4:
    // 0x2f9ba4: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x2f9ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
label_2f9ba8:
    // 0x2f9ba8: 0xc07f8de  jal         func_1FE378
label_2f9bac:
    if (ctx->pc == 0x2F9BACu) {
        ctx->pc = 0x2F9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BA8u;
        // 0x2f9bac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9BB0u;
        goto label_2f9bb0;
    }
    ctx->pc = 0x2F9BA8u;
    SET_GPR_U32(ctx, 31, 0x2F9BB0u);
    ctx->pc = 0x2F9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BA8u;
    // 0x2f9bac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE378u, 0x2F9BA8u, 0x2F9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9BB0u;
label_2f9bb0:
    // 0x2f9bb0: 0x8ec40334  lw          $a0, 0x334($s6)
    ctx->pc = 0x2f9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
label_2f9bb4:
    // 0x2f9bb4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f9bb8:
    // 0x2f9bb8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2f9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2f9bbc:
    // 0x2f9bbc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2f9bc0:
    if (ctx->pc == 0x2F9BC0u) {
        ctx->pc = 0x2F9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BBCu;
        // 0x2f9bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9BC4u;
        goto label_2f9bc4;
    }
    ctx->pc = 0x2F9BBCu;
    {
        const bool branch_taken_0x2f9bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BBCu;
        // 0x2f9bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bbc) {
            ctx->pc = 0x2F9BD4u;
            goto label_2f9bd4;
        }
    }
    ctx->pc = 0x2F9BC4u;
label_2f9bc4:
    // 0x2f9bc4: 0xc069712  jal         func_1A5C48
label_2f9bc8:
    if (ctx->pc == 0x2F9BC8u) {
        ctx->pc = 0x2F9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BC4u;
        // 0x2f9bc8: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9BCCu;
        goto label_2f9bcc;
    }
    ctx->pc = 0x2F9BC4u;
    SET_GPR_U32(ctx, 31, 0x2F9BCCu);
    ctx->pc = 0x2F9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BC4u;
    // 0x2f9bc8: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2F9BC4u, 0x2F9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9BCCu;
label_2f9bcc:
    // 0x2f9bcc: 0x10000162  b           . + 4 + (0x162 << 2)
label_2f9bd0:
    if (ctx->pc == 0x2F9BD0u) {
        ctx->pc = 0x2F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BCCu;
        // 0x2f9bd0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9BD4u;
        goto label_2f9bd4;
    }
    ctx->pc = 0x2F9BCCu;
    {
        const bool branch_taken_0x2f9bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BCCu;
        // 0x2f9bd0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bcc) {
            ctx->pc = 0x2FA158u;
            goto label_2fa158;
        }
    }
    ctx->pc = 0x2F9BD4u;
label_2f9bd4:
    // 0x2f9bd4: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9bd8:
    // 0x2f9bd8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f9bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f9bdc:
    // 0x2f9bdc: 0x9207047c  lbu         $a3, 0x47C($s0)
    ctx->pc = 0x2f9bdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1148)));
label_2f9be0:
    // 0x2f9be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9be4:
    // 0x2f9be4: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x2f9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_2f9be8:
    // 0x2f9be8: 0xc069900  jal         func_1A6400
label_2f9bec:
    if (ctx->pc == 0x2F9BECu) {
        ctx->pc = 0x2F9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BE8u;
        // 0x2f9bec: 0xc60c046c  lwc1        $f12, 0x46C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9BF0u;
        goto label_2f9bf0;
    }
    ctx->pc = 0x2F9BE8u;
    SET_GPR_U32(ctx, 31, 0x2F9BF0u);
    ctx->pc = 0x2F9BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BE8u;
    // 0x2f9bec: 0xc60c046c  lwc1        $f12, 0x46C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6400u, 0x2F9BE8u, 0x2F9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9BF0u;
label_2f9bf0:
    // 0x2f9bf0: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9bf4:
    // 0x2f9bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f9bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9bf8:
    // 0x2f9bf8: 0xc06a05e  jal         func_1A8178
label_2f9bfc:
    if (ctx->pc == 0x2F9BFCu) {
        ctx->pc = 0x2F9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BF8u;
        // 0x2f9bfc: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C00u;
        goto label_2f9c00;
    }
    ctx->pc = 0x2F9BF8u;
    SET_GPR_U32(ctx, 31, 0x2F9C00u);
    ctx->pc = 0x2F9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BF8u;
    // 0x2f9bfc: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2F9BF8u, 0x2F9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C00u;
label_2f9c00:
    // 0x2f9c00: 0x8ec511e8  lw          $a1, 0x11E8($s6)
    ctx->pc = 0x2f9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9c04:
    // 0x2f9c04: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2f9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2f9c08:
    // 0x2f9c08: 0x8ca20334  lw          $v0, 0x334($a1)
    ctx->pc = 0x2f9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_2f9c0c:
    // 0x2f9c0c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2f9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2f9c10:
    // 0x2f9c10: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
label_2f9c14:
    if (ctx->pc == 0x2F9C14u) {
        ctx->pc = 0x2F9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C10u;
        // 0x2f9c14: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C18u;
        goto label_2f9c18;
    }
    ctx->pc = 0x2F9C10u;
    {
        const bool branch_taken_0x2f9c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C10u;
        // 0x2f9c14: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c10) {
            ctx->pc = 0x2F9C44u;
            goto label_2f9c44;
        }
    }
    ctx->pc = 0x2F9C18u;
label_2f9c18:
    // 0x2f9c18: 0x8ec40334  lw          $a0, 0x334($s6)
    ctx->pc = 0x2f9c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
label_2f9c1c:
    // 0x2f9c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f9c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c20:
    // 0x2f9c20: 0xc069712  jal         func_1A5C48
label_2f9c24:
    if (ctx->pc == 0x2F9C24u) {
        ctx->pc = 0x2F9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C20u;
        // 0x2f9c24: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C28u;
        goto label_2f9c28;
    }
    ctx->pc = 0x2F9C20u;
    SET_GPR_U32(ctx, 31, 0x2F9C28u);
    ctx->pc = 0x2F9C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C20u;
    // 0x2f9c24: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2F9C20u, 0x2F9C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C28u;
label_2f9c28:
    // 0x2f9c28: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9c2c:
    // 0x2f9c2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c30:
    // 0x2f9c30: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x2f9c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_2f9c34:
    // 0x2f9c34: 0xc069712  jal         func_1A5C48
label_2f9c38:
    if (ctx->pc == 0x2F9C38u) {
        ctx->pc = 0x2F9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C34u;
        // 0x2f9c38: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C3Cu;
        goto label_2f9c3c;
    }
    ctx->pc = 0x2F9C34u;
    SET_GPR_U32(ctx, 31, 0x2F9C3Cu);
    ctx->pc = 0x2F9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C34u;
    // 0x2f9c38: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2F9C34u, 0x2F9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C3Cu;
label_2f9c3c:
    // 0x2f9c3c: 0x10000146  b           . + 4 + (0x146 << 2)
label_2f9c40:
    if (ctx->pc == 0x2F9C40u) {
        ctx->pc = 0x2F9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C3Cu;
        // 0x2f9c40: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C44u;
        goto label_2f9c44;
    }
    ctx->pc = 0x2F9C3Cu;
    {
        const bool branch_taken_0x2f9c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C3Cu;
        // 0x2f9c40: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c3c) {
            ctx->pc = 0x2FA158u;
            goto label_2fa158;
        }
    }
    ctx->pc = 0x2F9C44u;
label_2f9c44:
    // 0x2f9c44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2f9c48:
    if (ctx->pc == 0x2F9C48u) {
        ctx->pc = 0x2F9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C44u;
        // 0x2f9c48: 0xc4ac00d0  lwc1        $f12, 0xD0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C4Cu;
        goto label_2f9c4c;
    }
    ctx->pc = 0x2F9C44u;
    {
        const bool branch_taken_0x2f9c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C44u;
        // 0x2f9c48: 0xc4ac00d0  lwc1        $f12, 0xD0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c44) {
            ctx->pc = 0x2F9C5Cu;
            goto label_2f9c5c;
        }
    }
    ctx->pc = 0x2F9C4Cu;
label_2f9c4c:
    // 0x2f9c4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f9c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f9c50:
    // 0x2f9c50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f9c54:
    // 0x2f9c54: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f9c58:
    if (ctx->pc == 0x2F9C58u) {
        ctx->pc = 0x2F9C5Cu;
        goto label_2f9c5c;
    }
    ctx->pc = 0x2F9C54u;
    {
        const bool branch_taken_0x2f9c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c54) {
            ctx->pc = 0x2F9C6Cu;
            goto label_2f9c6c;
        }
    }
    ctx->pc = 0x2F9C5Cu;
label_2f9c5c:
    // 0x2f9c5c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f9c60:
    // 0x2f9c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f9c64:
    // 0x2f9c64: 0x0  nop
    ctx->pc = 0x2f9c64u;
    // NOP
label_2f9c68:
    // 0x2f9c68: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f9c68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f9c6c:
    // 0x2f9c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f9c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f9c70:
    // 0x2f9c70: 0x0  nop
    ctx->pc = 0x2f9c70u;
    // NOP
label_2f9c74:
    // 0x2f9c74: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f9c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f9c78:
    // 0x2f9c78: 0x0  nop
    ctx->pc = 0x2f9c78u;
    // NOP
label_2f9c7c:
    // 0x2f9c7c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f9c80:
    if (ctx->pc == 0x2F9C80u) {
        ctx->pc = 0x2F9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C7Cu;
        // 0x2f9c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C84u;
        goto label_2f9c84;
    }
    ctx->pc = 0x2F9C7Cu;
    {
        const bool branch_taken_0x2f9c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C7Cu;
        // 0x2f9c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c7c) {
            ctx->pc = 0x2F9C94u;
            goto label_2f9c94;
        }
    }
    ctx->pc = 0x2F9C84u;
label_2f9c84:
    // 0x2f9c84: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9c88:
    // 0x2f9c88: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2f9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2f9c8c:
    // 0x2f9c8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f9c90:
    if (ctx->pc == 0x2F9C90u) {
        ctx->pc = 0x2F9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C8Cu;
        // 0x2f9c90: 0xac560394  sw          $s6, 0x394($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 916), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C94u;
        goto label_2f9c94;
    }
    ctx->pc = 0x2F9C8Cu;
    {
        const bool branch_taken_0x2f9c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C8Cu;
        // 0x2f9c90: 0xac560394  sw          $s6, 0x394($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 916), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c8c) {
            ctx->pc = 0x2F9C9Cu;
            goto label_2f9c9c;
        }
    }
    ctx->pc = 0x2F9C94u;
label_2f9c94:
    // 0x2f9c94: 0xc083976  jal         func_20E5D8
label_2f9c98:
    if (ctx->pc == 0x2F9C98u) {
        ctx->pc = 0x2F9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C94u;
        // 0x2f9c98: 0x8ec411e8  lw          $a0, 0x11E8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9C9Cu;
        goto label_2f9c9c;
    }
    ctx->pc = 0x2F9C94u;
    SET_GPR_U32(ctx, 31, 0x2F9C9Cu);
    ctx->pc = 0x2F9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C94u;
    // 0x2f9c98: 0x8ec411e8  lw          $a0, 0x11E8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2F9C94u, 0x2F9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C9Cu;
label_2f9c9c:
    // 0x2f9c9c: 0xc0bd62c  jal         func_2F58B0
label_2f9ca0:
    if (ctx->pc == 0x2F9CA0u) {
        ctx->pc = 0x2F9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C9Cu;
        // 0x2f9ca0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CA4u;
        goto label_2f9ca4;
    }
    ctx->pc = 0x2F9C9Cu;
    SET_GPR_U32(ctx, 31, 0x2F9CA4u);
    ctx->pc = 0x2F9CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C9Cu;
    // 0x2f9ca0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F9C9Cu, 0x2F9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CA4u;
label_2f9ca4:
    // 0x2f9ca4: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9ca8:
    // 0x2f9ca8: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x2f9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
label_2f9cac:
    // 0x2f9cac: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x2f9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2f9cb0:
    // 0x2f9cb0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f9cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9cb4:
    // 0x2f9cb4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9cb8:
    // 0x2f9cb8: 0x8ec211fc  lw          $v0, 0x11FC($s6)
    ctx->pc = 0x2f9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4604)));
label_2f9cbc:
    // 0x2f9cbc: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x2f9cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2f9cc0:
    // 0x2f9cc0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2f9cc4:
    if (ctx->pc == 0x2F9CC4u) {
        ctx->pc = 0x2F9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CC0u;
        // 0x2f9cc4: 0x24b10040  addiu       $s1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CC8u;
        goto label_2f9cc8;
    }
    ctx->pc = 0x2F9CC0u;
    {
        const bool branch_taken_0x2f9cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CC0u;
        // 0x2f9cc4: 0x24b10040  addiu       $s1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9cc0) {
            ctx->pc = 0x2F9D58u;
            goto label_2f9d58;
        }
    }
    ctx->pc = 0x2F9CC8u;
label_2f9cc8:
    // 0x2f9cc8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2f9cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2f9ccc:
    // 0x2f9ccc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f9cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cd0:
    // 0x2f9cd0: 0xc60c96ac  lwc1        $f12, -0x6954($s0)
    ctx->pc = 0x2f9cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f9cd4:
    // 0x2f9cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f9cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cd8:
    // 0x2f9cd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9cdc:
    // 0x2f9cdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ce0:
    // 0x2f9ce0: 0xc08e23a  jal         func_2388E8
label_2f9ce4:
    if (ctx->pc == 0x2F9CE4u) {
        ctx->pc = 0x2F9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CE0u;
        // 0x2f9ce4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CE8u;
        goto label_2f9ce8;
    }
    ctx->pc = 0x2F9CE0u;
    SET_GPR_U32(ctx, 31, 0x2F9CE8u);
    ctx->pc = 0x2F9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9CE0u;
    // 0x2f9ce4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2F9CE0u, 0x2F9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CE8u;
label_2f9ce8:
    // 0x2f9ce8: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9cec:
    // 0x2f9cec: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2f9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2f9cf0:
    // 0x2f9cf0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9cf4:
    // 0x2f9cf4: 0x24a40070  addiu       $a0, $a1, 0x70
    ctx->pc = 0x2f9cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2f9cf8:
    // 0x2f9cf8: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2f9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2f9cfc:
    // 0x2f9cfc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f9cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9d00:
    // 0x2f9d00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f9d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9d04:
    // 0x2f9d04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f9d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f9d08:
    // 0x2f9d08: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9d0c:
    // 0x2f9d0c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f9d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9d10:
    // 0x2f9d10: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f9d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f9d14:
    // 0x2f9d14: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f9d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9d18:
    // 0x2f9d18: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9d1c:
    // 0x2f9d1c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f9d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f9d20:
    // 0x2f9d20: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f9d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f9d24:
    // 0x2f9d24: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f9d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f9d28:
    // 0x2f9d28: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f9d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f9d2c:
    // 0x2f9d2c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f9d2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9d30:
    // 0x2f9d30: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x2f9d30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9d34:
    // 0x2f9d34: 0xc60c96ac  lwc1        $f12, -0x6954($s0)
    ctx->pc = 0x2f9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f9d38:
    // 0x2f9d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f9d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d3c:
    // 0x2f9d3c: 0x8ec411e8  lw          $a0, 0x11E8($s6)
    ctx->pc = 0x2f9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9d40:
    // 0x2f9d40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9d44:
    // 0x2f9d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d48:
    // 0x2f9d48: 0xc08e23a  jal         func_2388E8
label_2f9d4c:
    if (ctx->pc == 0x2F9D4Cu) {
        ctx->pc = 0x2F9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D48u;
        // 0x2f9d4c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D50u;
        goto label_2f9d50;
    }
    ctx->pc = 0x2F9D48u;
    SET_GPR_U32(ctx, 31, 0x2F9D50u);
    ctx->pc = 0x2F9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D48u;
    // 0x2f9d4c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2F9D48u, 0x2F9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D50u;
label_2f9d50:
    // 0x2f9d50: 0x10000051  b           . + 4 + (0x51 << 2)
label_2f9d54:
    if (ctx->pc == 0x2F9D54u) {
        ctx->pc = 0x2F9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D50u;
        // 0x2f9d54: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D58u;
        goto label_2f9d58;
    }
    ctx->pc = 0x2F9D50u;
    {
        const bool branch_taken_0x2f9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D50u;
        // 0x2f9d54: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d50) {
            ctx->pc = 0x2F9E98u;
            goto label_2f9e98;
        }
    }
    ctx->pc = 0x2F9D58u;
label_2f9d58:
    // 0x2f9d58: 0xc0b1488  jal         func_2C5220
label_2f9d5c:
    if (ctx->pc == 0x2F9D5Cu) {
        ctx->pc = 0x2F9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D58u;
        // 0x2f9d5c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D60u;
        goto label_2f9d60;
    }
    ctx->pc = 0x2F9D58u;
    SET_GPR_U32(ctx, 31, 0x2F9D60u);
    ctx->pc = 0x2F9D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D58u;
    // 0x2f9d5c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2F9D58u, 0x2F9D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D60u;
label_2f9d60:
    // 0x2f9d60: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f9d64:
    // 0x2f9d64: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2f9d64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9d68:
    // 0x2f9d68: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9d6c:
    // 0x2f9d6c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2f9d6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f9d70:
    // 0x2f9d70: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2f9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2f9d74:
    // 0x2f9d74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f9d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9d78:
    // 0x2f9d78: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9d7c:
    // 0x2f9d7c: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x2f9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_2f9d80:
    // 0x2f9d80: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2f9d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f9d84:
    // 0x2f9d84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f9d84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9d88:
    // 0x2f9d88: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f9d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9d8c:
    // 0x2f9d8c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2f9d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9d90:
    // 0x2f9d90: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2f9d90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f9d94:
    // 0x2f9d94: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2f9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9d98:
    // 0x2f9d98: 0x26d31350  addiu       $s3, $s6, 0x1350
    ctx->pc = 0x2f9d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4944));
label_2f9d9c:
    // 0x2f9d9c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2f9d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f9da0:
    // 0x2f9da0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2f9da0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2f9da4:
    // 0x2f9da4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f9da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9da8:
    // 0x2f9da8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2f9da8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2f9dac:
    // 0x2f9dac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f9dacu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2f9db0:
    // 0x2f9db0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f9db4:
    // 0x2f9db4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f9db4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2f9db8:
    // 0x2f9db8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2f9db8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f9dbc:
    // 0x2f9dbc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2f9dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f9dc0:
    // 0x2f9dc0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2f9dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f9dc4:
    // 0x2f9dc4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f9dc8:
    // 0x2f9dc8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f9dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f9dcc:
    // 0x2f9dcc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f9dccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9dd0:
    // 0x2f9dd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f9dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f9dd4:
    // 0x2f9dd4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f9dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9dd8:
    // 0x2f9dd8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2f9dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9ddc:
    // 0x2f9ddc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f9ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f9de0:
    // 0x2f9de0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2f9de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9de4:
    // 0x2f9de4: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2f9de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9de8:
    // 0x2f9de8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f9de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f9dec:
    // 0x2f9dec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f9decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f9df0:
    // 0x2f9df0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f9df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f9df4:
    // 0x2f9df4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f9df4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f9df8:
    // 0x2f9df8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f9df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9dfc:
    // 0x2f9dfc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f9dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e00:
    // 0x2f9e00: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x2f9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
label_2f9e04:
    // 0x2f9e04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9e08:
    // 0x2f9e08: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f9e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f9e0c:
    // 0x2f9e0c: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x2f9e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e10:
    // 0x2f9e10: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f9e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f9e14:
    // 0x2f9e14: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x2f9e14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e18:
    // 0x2f9e18: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f9e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9e1c:
    // 0x2f9e1c: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2f9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e20:
    // 0x2f9e20: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f9e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f9e24:
    // 0x2f9e24: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x2f9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e28:
    // 0x2f9e28: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2f9e28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_2f9e2c:
    // 0x2f9e2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f9e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e30:
    // 0x2f9e30: 0xc64c96ac  lwc1        $f12, -0x6954($s2)
    ctx->pc = 0x2f9e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f9e34:
    // 0x2f9e34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f9e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e38:
    // 0x2f9e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9e3c:
    // 0x2f9e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e40:
    // 0x2f9e40: 0xc08e23a  jal         func_2388E8
label_2f9e44:
    if (ctx->pc == 0x2F9E44u) {
        ctx->pc = 0x2F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E40u;
        // 0x2f9e44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E48u;
        goto label_2f9e48;
    }
    ctx->pc = 0x2F9E40u;
    SET_GPR_U32(ctx, 31, 0x2F9E48u);
    ctx->pc = 0x2F9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E40u;
    // 0x2f9e44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2F9E40u, 0x2F9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E48u;
label_2f9e48:
    // 0x2f9e48: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f9e48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f9e4c:
    // 0x2f9e4c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f9e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e50:
    // 0x2f9e50: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9e54:
    // 0x2f9e54: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2f9e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2f9e58:
    // 0x2f9e58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9e5c:
    // 0x2f9e5c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f9e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f9e60:
    // 0x2f9e60: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x2f9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e64:
    // 0x2f9e64: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f9e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f9e68:
    // 0x2f9e68: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x2f9e68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e6c:
    // 0x2f9e6c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f9e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9e70:
    // 0x2f9e70: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2f9e70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e74:
    // 0x2f9e74: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f9e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f9e78:
    // 0x2f9e78: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x2f9e78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9e7c:
    // 0x2f9e7c: 0xc64c96ac  lwc1        $f12, -0x6954($s2)
    ctx->pc = 0x2f9e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f9e80:
    // 0x2f9e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f9e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e84:
    // 0x2f9e84: 0x8ec411e8  lw          $a0, 0x11E8($s6)
    ctx->pc = 0x2f9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9e88:
    // 0x2f9e88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9e8c:
    // 0x2f9e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e90:
    // 0x2f9e90: 0xc08e23a  jal         func_2388E8
label_2f9e94:
    if (ctx->pc == 0x2F9E94u) {
        ctx->pc = 0x2F9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E90u;
        // 0x2f9e94: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E98u;
        goto label_2f9e98;
    }
    ctx->pc = 0x2F9E90u;
    SET_GPR_U32(ctx, 31, 0x2F9E98u);
    ctx->pc = 0x2F9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E90u;
    // 0x2f9e94: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2F9E90u, 0x2F9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E98u;
label_2f9e98:
    // 0x2f9e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e9c:
    // 0x2f9e9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ea0:
    // 0x2f9ea0: 0xc0bf28c  jal         func_2FCA30
label_2f9ea4:
    if (ctx->pc == 0x2F9EA4u) {
        ctx->pc = 0x2F9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EA0u;
        // 0x2f9ea4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EA8u;
        goto label_2f9ea8;
    }
    ctx->pc = 0x2F9EA0u;
    SET_GPR_U32(ctx, 31, 0x2F9EA8u);
    ctx->pc = 0x2F9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9EA0u;
    // 0x2f9ea4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCA30u, 0x2F9EA0u, 0x2F9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EA8u;
label_2f9ea8:
    // 0x2f9ea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9eac:
    // 0x2f9eac: 0xc08961e  jal         func_225878
label_2f9eb0:
    if (ctx->pc == 0x2F9EB0u) {
        ctx->pc = 0x2F9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EACu;
        // 0x2f9eb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EB4u;
        goto label_2f9eb4;
    }
    ctx->pc = 0x2F9EACu;
    SET_GPR_U32(ctx, 31, 0x2F9EB4u);
    ctx->pc = 0x2F9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9EACu;
    // 0x2f9eb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x2F9EACu, 0x2F9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EB4u;
label_2f9eb4:
    // 0x2f9eb4: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2f9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9eb8:
    // 0x2f9eb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f9eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9ebc:
    // 0x2f9ebc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2f9ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f9ec0:
    // 0x2f9ec0: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2f9ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_2f9ec4:
    // 0x2f9ec4: 0xac450430  sw          $a1, 0x430($v0)
    ctx->pc = 0x2f9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 5));
label_2f9ec8:
    // 0x2f9ec8: 0x8ec411e8  lw          $a0, 0x11E8($s6)
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9ecc:
    // 0x2f9ecc: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x2f9eccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_2f9ed0:
    // 0x2f9ed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f9ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f9ed4:
    // 0x2f9ed4: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x2f9ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_2f9ed8:
    // 0x2f9ed8: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9edc:
    // 0x2f9edc: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2f9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2f9ee0:
    // 0x2f9ee0: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x2f9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_2f9ee4:
    // 0x2f9ee4: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9ee8:
    // 0x2f9ee8: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2f9ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2f9eec:
    // 0x2f9eec: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2f9eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f9ef0:
    // 0x2f9ef0: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2f9ef4:
    // 0x2f9ef4: 0x40f809  jalr        $v0
label_2f9ef8:
    if (ctx->pc == 0x2F9EF8u) {
        ctx->pc = 0x2F9EFCu;
        goto label_2f9efc;
    }
    ctx->pc = 0x2F9EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9EFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9EF4u, 0x2F9EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9EFCu;
label_2f9efc:
    // 0x2f9efc: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9f00:
    // 0x2f9f00: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2f9f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2f9f04:
    // 0x2f9f04: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2f9f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f9f08:
    // 0x2f9f08: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2f9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2f9f0c:
    // 0x2f9f0c: 0x40f809  jalr        $v0
label_2f9f10:
    if (ctx->pc == 0x2F9F10u) {
        ctx->pc = 0x2F9F14u;
        goto label_2f9f14;
    }
    ctx->pc = 0x2F9F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9F14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9F0Cu, 0x2F9F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9F14u;
label_2f9f14:
    // 0x2f9f14: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9f18:
    // 0x2f9f18: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2f9f1c:
    // 0x2f9f1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9f20:
    // 0x2f9f20: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2f9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2f9f24:
    // 0x2f9f24: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2f9f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2f9f28:
    // 0x2f9f28: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2f9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_2f9f2c:
    // 0x2f9f2c: 0xc08fed2  jal         func_23FB48
label_2f9f30:
    if (ctx->pc == 0x2F9F30u) {
        ctx->pc = 0x2F9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F2Cu;
        // 0x2f9f30: 0x8ec411e8  lw          $a0, 0x11E8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F34u;
        goto label_2f9f34;
    }
    ctx->pc = 0x2F9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F34u);
    ctx->pc = 0x2F9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F2Cu;
    // 0x2f9f30: 0x8ec411e8  lw          $a0, 0x11E8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F9F2Cu, 0x2F9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F34u;
label_2f9f34:
    // 0x2f9f34: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9f38:
    // 0x2f9f38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f9f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f3c:
    // 0x2f9f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f40:
    // 0x2f9f40: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2f9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2f9f44:
    // 0x2f9f44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f9f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f9f48:
    // 0x2f9f48: 0xc098fae  jal         func_263EB8
label_2f9f4c:
    if (ctx->pc == 0x2F9F4Cu) {
        ctx->pc = 0x2F9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F48u;
        // 0x2f9f4c: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F50u;
        goto label_2f9f50;
    }
    ctx->pc = 0x2F9F48u;
    SET_GPR_U32(ctx, 31, 0x2F9F50u);
    ctx->pc = 0x2F9F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F48u;
    // 0x2f9f4c: 0xac6200c0  sw          $v0, 0xC0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x2F9F48u, 0x2F9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F50u;
label_2f9f50:
    // 0x2f9f50: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2f9f54:
    if (ctx->pc == 0x2F9F54u) {
        ctx->pc = 0x2F9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F50u;
        // 0x2f9f54: 0x8ec311e8  lw          $v1, 0x11E8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F58u;
        goto label_2f9f58;
    }
    ctx->pc = 0x2F9F50u;
    {
        const bool branch_taken_0x2f9f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f50) {
            ctx->pc = 0x2F9F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F50u;
            // 0x2f9f54: 0x8ec311e8  lw          $v1, 0x11E8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F84u;
            goto label_2f9f84;
        }
    }
    ctx->pc = 0x2F9F58u;
label_2f9f58:
    // 0x2f9f58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f9f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f5c:
    // 0x2f9f5c: 0xc098fc6  jal         func_263F18
label_2f9f60:
    if (ctx->pc == 0x2F9F60u) {
        ctx->pc = 0x2F9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F5Cu;
        // 0x2f9f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F64u;
        goto label_2f9f64;
    }
    ctx->pc = 0x2F9F5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F64u);
    ctx->pc = 0x2F9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F5Cu;
    // 0x2f9f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263F18u, 0x2F9F5Cu, 0x2F9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F64u;
label_2f9f64:
    // 0x2f9f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f68:
    // 0x2f9f68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f9f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f6c:
    // 0x2f9f6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f9f70:
    // 0x2f9f70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9f74:
    // 0x2f9f74: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2f9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2f9f78:
    // 0x2f9f78: 0xc0984bc  jal         func_2612F0
label_2f9f7c:
    if (ctx->pc == 0x2F9F7Cu) {
        ctx->pc = 0x2F9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F78u;
        // 0x2f9f7c: 0x8c4502bc  lw          $a1, 0x2BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F80u;
        goto label_2f9f80;
    }
    ctx->pc = 0x2F9F78u;
    SET_GPR_U32(ctx, 31, 0x2F9F80u);
    ctx->pc = 0x2F9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F78u;
    // 0x2f9f7c: 0x8c4502bc  lw          $a1, 0x2BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x2F9F78u, 0x2F9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F80u;
label_2f9f80:
    // 0x2f9f80: 0x8ec311e8  lw          $v1, 0x11E8($s6)
    ctx->pc = 0x2f9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2f9f84:
    // 0x2f9f84: 0x8c640388  lw          $a0, 0x388($v1)
    ctx->pc = 0x2f9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 904)));
label_2f9f88:
    // 0x2f9f88: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2f9f8c:
    if (ctx->pc == 0x2F9F8Cu) {
        ctx->pc = 0x2F9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F88u;
        // 0x2f9f8c: 0x8ec60334  lw          $a2, 0x334($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F90u;
        goto label_2f9f90;
    }
    ctx->pc = 0x2F9F88u;
    {
        const bool branch_taken_0x2f9f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f88) {
            ctx->pc = 0x2F9F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F88u;
            // 0x2f9f8c: 0x8ec60334  lw          $a2, 0x334($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9FA8u;
            goto label_2f9fa8;
        }
    }
    ctx->pc = 0x2F9F90u;
label_2f9f90:
    // 0x2f9f90: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x2f9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_2f9f94:
    // 0x2f9f94: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2f9f98:
    if (ctx->pc == 0x2F9F98u) {
        ctx->pc = 0x2F9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F94u;
        // 0x2f9f98: 0x8ec60334  lw          $a2, 0x334($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F9Cu;
        goto label_2f9f9c;
    }
    ctx->pc = 0x2F9F94u;
    {
        const bool branch_taken_0x2f9f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9f94) {
            ctx->pc = 0x2F9F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F94u;
            // 0x2f9f98: 0x8ec60334  lw          $a2, 0x334($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9FA8u;
            goto label_2f9fa8;
        }
    }
    ctx->pc = 0x2F9F9Cu;
label_2f9f9c:
    // 0x2f9f9c: 0xc09c07c  jal         func_2701F0
label_2f9fa0:
    if (ctx->pc == 0x2F9FA0u) {
        ctx->pc = 0x2F9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F9Cu;
        // 0x2f9fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9FA4u;
        goto label_2f9fa4;
    }
    ctx->pc = 0x2F9F9Cu;
    SET_GPR_U32(ctx, 31, 0x2F9FA4u);
    ctx->pc = 0x2F9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F9Cu;
    // 0x2f9fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x2F9F9Cu, 0x2F9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FA4u;
label_2f9fa4:
    // 0x2f9fa4: 0x8ec60334  lw          $a2, 0x334($s6)
    ctx->pc = 0x2f9fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
label_2f9fa8:
    // 0x2f9fa8: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2f9fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2f9fac:
    // 0x2f9fac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2f9fb0:
    if (ctx->pc == 0x2F9FB0u) {
        ctx->pc = 0x2F9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FACu;
        // 0x2f9fb0: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9FB4u;
        goto label_2f9fb4;
    }
    ctx->pc = 0x2F9FACu;
    {
        const bool branch_taken_0x2f9fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FACu;
        // 0x2f9fb0: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fac) {
            ctx->pc = 0x2F9FC4u;
            goto label_2f9fc4;
        }
    }
    ctx->pc = 0x2F9FB4u;
label_2f9fb4:
    // 0x2f9fb4: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x2f9fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
label_2f9fb8:
    // 0x2f9fb8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2f9fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_2f9fbc:
    // 0x2f9fbc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f9fc0:
    if (ctx->pc == 0x2F9FC0u) {
        ctx->pc = 0x2F9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FBCu;
        // 0x2f9fc0: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9FC4u;
        goto label_2f9fc4;
    }
    ctx->pc = 0x2F9FBCu;
    {
        const bool branch_taken_0x2f9fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FBCu;
        // 0x2f9fc0: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fbc) {
            ctx->pc = 0x2F9FF4u;
            goto label_2f9ff4;
        }
    }
    ctx->pc = 0x2F9FC4u;
label_2f9fc4:
    // 0x2f9fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9fc8:
    // 0x2f9fc8: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x2f9fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
label_2f9fcc:
    // 0x2f9fcc: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2f9fccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_2f9fd0:
    // 0x2f9fd0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2f9fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2f9fd4:
    // 0x2f9fd4: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2f9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2f9fd8:
    // 0x2f9fd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f9fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9fdc:
    // 0x2f9fdc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2f9fe0:
    if (ctx->pc == 0x2F9FE0u) {
        ctx->pc = 0x2F9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FDCu;
        // 0x2f9fe0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9FE4u;
        goto label_2f9fe4;
    }
    ctx->pc = 0x2F9FDCu;
    {
        const bool branch_taken_0x2f9fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FDCu;
        // 0x2f9fe0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fdc) {
            ctx->pc = 0x2F9FF4u;
            goto label_2f9ff4;
        }
    }
    ctx->pc = 0x2F9FE4u;
label_2f9fe4:
    // 0x2f9fe4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2f9fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f9fe8:
    // 0x2f9fe8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2f9fec:
    if (ctx->pc == 0x2F9FECu) {
        ctx->pc = 0x2F9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FE8u;
        // 0x2f9fec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9FF0u;
        goto label_2f9ff0;
    }
    ctx->pc = 0x2F9FE8u;
    {
        const bool branch_taken_0x2f9fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FE8u;
        // 0x2f9fec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fe8) {
            ctx->pc = 0x2F9FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9fd8;
        }
    }
    ctx->pc = 0x2F9FF0u;
label_2f9ff0:
    // 0x2f9ff0: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2f9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2f9ff4:
    // 0x2f9ff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f9ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f9ff8:
    // 0x2f9ff8: 0xc073e86  jal         func_1CFA18
label_2f9ffc:
    if (ctx->pc == 0x2F9FFCu) {
        ctx->pc = 0x2FA000u;
        goto label_2fa000;
    }
    ctx->pc = 0x2F9FF8u;
    SET_GPR_U32(ctx, 31, 0x2FA000u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2F9FF8u, 0x2FA000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA000u;
label_2fa000:
    // 0x2fa000: 0x8ec211e8  lw          $v0, 0x11E8($s6)
    ctx->pc = 0x2fa000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2fa004:
    // 0x2fa004: 0x8c460334  lw          $a2, 0x334($v0)
    ctx->pc = 0x2fa004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_2fa008:
    // 0x2fa008: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fa008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2fa00c:
    // 0x2fa00c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_2fa010:
    if (ctx->pc == 0x2FA010u) {
        ctx->pc = 0x2FA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA00Cu;
        // 0x2fa010: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA014u;
        goto label_2fa014;
    }
    ctx->pc = 0x2FA00Cu;
    {
        const bool branch_taken_0x2fa00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA00Cu;
        // 0x2fa010: 0x24c301ec  addiu       $v1, $a2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa00c) {
            ctx->pc = 0x2FA038u;
            goto label_2fa038;
        }
    }
    ctx->pc = 0x2FA014u;
label_2fa014:
    // 0x2fa014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa018:
    // 0x2fa018: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fa018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fa01c:
    // 0x2fa01c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2fa020:
    if (ctx->pc == 0x2FA020u) {
        ctx->pc = 0x2FA024u;
        goto label_2fa024;
    }
    ctx->pc = 0x2FA01Cu;
    {
        const bool branch_taken_0x2fa01c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa01c) {
            ctx->pc = 0x2FA038u;
            goto label_2fa038;
        }
    }
    ctx->pc = 0x2FA024u;
label_2fa024:
    // 0x2fa024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fa024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2fa028:
    // 0x2fa028: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fa028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fa02c:
    // 0x2fa02c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2fa030:
    if (ctx->pc == 0x2FA030u) {
        ctx->pc = 0x2FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA02Cu;
        // 0x2fa030: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA034u;
        goto label_2fa034;
    }
    ctx->pc = 0x2FA02Cu;
    {
        const bool branch_taken_0x2fa02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA02Cu;
        // 0x2fa030: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa02c) {
            ctx->pc = 0x2FA018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa018;
        }
    }
    ctx->pc = 0x2FA034u;
label_2fa034:
    // 0x2fa034: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fa034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fa038:
    // 0x2fa038: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa03c:
    // 0x2fa03c: 0xc073e86  jal         func_1CFA18
label_2fa040:
    if (ctx->pc == 0x2FA040u) {
        ctx->pc = 0x2FA044u;
        goto label_2fa044;
    }
    ctx->pc = 0x2FA03Cu;
    SET_GPR_U32(ctx, 31, 0x2FA044u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FA03Cu, 0x2FA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA044u;
label_2fa044:
    // 0x2fa044: 0xc0c092e  jal         func_3024B8
label_2fa048:
    if (ctx->pc == 0x2FA048u) {
        ctx->pc = 0x2FA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA044u;
        // 0x2fa048: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA04Cu;
        goto label_2fa04c;
    }
    ctx->pc = 0x2FA044u;
    SET_GPR_U32(ctx, 31, 0x2FA04Cu);
    ctx->pc = 0x2FA048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA044u;
    // 0x2fa048: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024B8u, 0x2FA044u, 0x2FA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA04Cu;
label_2fa04c:
    // 0x2fa04c: 0x26051b98  addiu       $a1, $s0, 0x1B98
    ctx->pc = 0x2fa04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7064));
label_2fa050:
    // 0x2fa050: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x2fa050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2fa054:
    // 0x2fa054: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x2fa054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2fa058:
    // 0x2fa058: 0x68a2000f  ldl         $v0, 0xF($a1)
    ctx->pc = 0x2fa058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2fa05c:
    // 0x2fa05c: 0x6ca20008  ldr         $v0, 0x8($a1)
    ctx->pc = 0x2fa05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2fa060:
    // 0x2fa060: 0x88a30013  lwl         $v1, 0x13($a1)
    ctx->pc = 0x2fa060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_2fa064:
    // 0x2fa064: 0x98a30010  lwr         $v1, 0x10($a1)
    ctx->pc = 0x2fa064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_2fa068:
    // 0x2fa068: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2fa068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fa06c:
    // 0x2fa06c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2fa06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fa070:
    // 0x2fa070: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2fa070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fa074:
    // 0x2fa074: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2fa074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fa078:
    // 0x2fa078: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x2fa078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2fa07c:
    // 0x2fa07c: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x2fa07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2fa080:
    // 0x2fa080: 0xc0efc2e  jal         func_3BF0B8
label_2fa084:
    if (ctx->pc == 0x2FA084u) {
        ctx->pc = 0x2FA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA080u;
        // 0x2fa084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA088u;
        goto label_2fa088;
    }
    ctx->pc = 0x2FA080u;
    SET_GPR_U32(ctx, 31, 0x2FA088u);
    ctx->pc = 0x2FA084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA080u;
    // 0x2fa084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2FA080u, 0x2FA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA088u;
label_2fa088:
    // 0x2fa088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa08c:
    // 0x2fa08c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa090:
    // 0x2fa090: 0xc069664  jal         func_1A5990
label_2fa094:
    if (ctx->pc == 0x2FA094u) {
        ctx->pc = 0x2FA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA090u;
        // 0x2fa094: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA098u;
        goto label_2fa098;
    }
    ctx->pc = 0x2FA090u;
    SET_GPR_U32(ctx, 31, 0x2FA098u);
    ctx->pc = 0x2FA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA090u;
    // 0x2fa094: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5990u, 0x2FA090u, 0x2FA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA098u;
label_2fa098:
    // 0x2fa098: 0xc069e04  jal         func_1A7810
label_2fa09c:
    if (ctx->pc == 0x2FA09Cu) {
        ctx->pc = 0x2FA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA098u;
        // 0x2fa09c: 0x24440292  addiu       $a0, $v0, 0x292 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0A0u;
        goto label_2fa0a0;
    }
    ctx->pc = 0x2FA098u;
    SET_GPR_U32(ctx, 31, 0x2FA0A0u);
    ctx->pc = 0x2FA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA098u;
    // 0x2fa09c: 0x24440292  addiu       $a0, $v0, 0x292 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x2FA098u, 0x2FA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0A0u;
label_2fa0a0:
    // 0x2fa0a0: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x2fa0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2fa0a4:
    // 0x2fa0a4: 0x26461bb0  addiu       $a2, $s2, 0x1BB0
    ctx->pc = 0x2fa0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 7088));
label_2fa0a8:
    // 0x2fa0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0ac:
    // 0x2fa0ac: 0xc0efed0  jal         func_3BFB40
label_2fa0b0:
    if (ctx->pc == 0x2FA0B0u) {
        ctx->pc = 0x2FA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0ACu;
        // 0x2fa0b0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0B4u;
        goto label_2fa0b4;
    }
    ctx->pc = 0x2FA0ACu;
    SET_GPR_U32(ctx, 31, 0x2FA0B4u);
    ctx->pc = 0x2FA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0ACu;
    // 0x2fa0b0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2FA0ACu, 0x2FA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0B4u;
label_2fa0b4:
    // 0x2fa0b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa0b8:
    // 0x2fa0b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fa0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0bc:
    // 0x2fa0bc: 0x8e64bd48  lw          $a0, -0x42B8($s3)
    ctx->pc = 0x2fa0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
label_2fa0c0:
    // 0x2fa0c0: 0xc0c7f22  jal         func_31FC88
label_2fa0c4:
    if (ctx->pc == 0x2FA0C4u) {
        ctx->pc = 0x2FA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0C0u;
        // 0x2fa0c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0C8u;
        goto label_2fa0c8;
    }
    ctx->pc = 0x2FA0C0u;
    SET_GPR_U32(ctx, 31, 0x2FA0C8u);
    ctx->pc = 0x2FA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0C0u;
    // 0x2fa0c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC88u, 0x2FA0C0u, 0x2FA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0C8u;
label_2fa0c8:
    // 0x2fa0c8: 0xc0c0922  jal         func_302488
label_2fa0cc:
    if (ctx->pc == 0x2FA0CCu) {
        ctx->pc = 0x2FA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0C8u;
        // 0x2fa0cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0D0u;
        goto label_2fa0d0;
    }
    ctx->pc = 0x2FA0C8u;
    SET_GPR_U32(ctx, 31, 0x2FA0D0u);
    ctx->pc = 0x2FA0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0C8u;
    // 0x2fa0cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x2FA0C8u, 0x2FA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0D0u;
label_2fa0d0:
    // 0x2fa0d0: 0x8ec200c0  lw          $v0, 0xC0($s6)
    ctx->pc = 0x2fa0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
label_2fa0d4:
    // 0x2fa0d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fa0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0d8:
    // 0x2fa0d8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2fa0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2fa0dc:
    // 0x2fa0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0e0:
    // 0x2fa0e0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2fa0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2fa0e4:
    // 0x2fa0e4: 0xc08fed2  jal         func_23FB48
label_2fa0e8:
    if (ctx->pc == 0x2FA0E8u) {
        ctx->pc = 0x2FA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0E4u;
        // 0x2fa0e8: 0xaec200c0  sw          $v0, 0xC0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0ECu;
        goto label_2fa0ec;
    }
    ctx->pc = 0x2FA0E4u;
    SET_GPR_U32(ctx, 31, 0x2FA0ECu);
    ctx->pc = 0x2FA0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0E4u;
    // 0x2fa0e8: 0xaec200c0  sw          $v0, 0xC0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FA0E4u, 0x2FA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0ECu;
label_2fa0ec:
    // 0x2fa0ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fa0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa0f0:
    // 0x2fa0f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fa0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0f4:
    // 0x2fa0f4: 0xc08fed2  jal         func_23FB48
label_2fa0f8:
    if (ctx->pc == 0x2FA0F8u) {
        ctx->pc = 0x2FA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0F4u;
        // 0x2fa0f8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0FCu;
        goto label_2fa0fc;
    }
    ctx->pc = 0x2FA0F4u;
    SET_GPR_U32(ctx, 31, 0x2FA0FCu);
    ctx->pc = 0x2FA0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0F4u;
    // 0x2fa0f8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FA0F4u, 0x2FA0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0FCu;
label_2fa0fc:
    // 0x2fa0fc: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2fa0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2fa100:
    // 0x2fa100: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_2fa104:
    if (ctx->pc == 0x2FA104u) {
        ctx->pc = 0x2FA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA100u;
        // 0x2fa104: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA108u;
        goto label_2fa108;
    }
    ctx->pc = 0x2FA100u;
    {
        const bool branch_taken_0x2fa100 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA100u;
        // 0x2fa104: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa100) {
            ctx->pc = 0x2FA138u;
            goto label_2fa138;
        }
    }
    ctx->pc = 0x2FA108u;
label_2fa108:
    // 0x2fa108: 0x8ec511e8  lw          $a1, 0x11E8($s6)
    ctx->pc = 0x2fa108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2fa10c:
    // 0x2fa10c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa110:
    // 0x2fa110: 0xc0494fa  jal         func_1253E8
label_2fa114:
    if (ctx->pc == 0x2FA114u) {
        ctx->pc = 0x2FA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA110u;
        // 0x2fa114: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA118u;
        goto label_2fa118;
    }
    ctx->pc = 0x2FA110u;
    SET_GPR_U32(ctx, 31, 0x2FA118u);
    ctx->pc = 0x2FA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA110u;
    // 0x2fa114: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253E8u, 0x2FA110u, 0x2FA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA118u;
label_2fa118:
    // 0x2fa118: 0xc0be5e2  jal         func_2F9788
label_2fa11c:
    if (ctx->pc == 0x2FA11Cu) {
        ctx->pc = 0x2FA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA118u;
        // 0x2fa11c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA120u;
        goto label_2fa120;
    }
    ctx->pc = 0x2FA118u;
    SET_GPR_U32(ctx, 31, 0x2FA120u);
    ctx->pc = 0x2FA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA118u;
    // 0x2fa11c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FA118u, 0x2FA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA120u;
label_2fa120:
    // 0x2fa120: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fa120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fa124:
    // 0x2fa124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fa124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa128:
    // 0x2fa128: 0xc0be60a  jal         func_2F9828
label_2fa12c:
    if (ctx->pc == 0x2FA12Cu) {
        ctx->pc = 0x2FA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA128u;
        // 0x2fa12c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA130u;
        goto label_2fa130;
    }
    ctx->pc = 0x2FA128u;
    SET_GPR_U32(ctx, 31, 0x2FA130u);
    ctx->pc = 0x2FA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA128u;
    // 0x2fa12c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9828u, 0x2FA128u, 0x2FA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA130u;
label_2fa130:
    // 0x2fa130: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fa134:
    if (ctx->pc == 0x2FA134u) {
        ctx->pc = 0x2FA138u;
        goto label_2fa138;
    }
    ctx->pc = 0x2FA130u;
    {
        const bool branch_taken_0x2fa130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa130) {
            ctx->pc = 0x2FA144u;
            goto label_2fa144;
        }
    }
    ctx->pc = 0x2FA138u;
label_2fa138:
    // 0x2fa138: 0x8ec411e8  lw          $a0, 0x11E8($s6)
    ctx->pc = 0x2fa138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4584)));
label_2fa13c:
    // 0x2fa13c: 0xc0cda26  jal         func_336898
label_2fa140:
    if (ctx->pc == 0x2FA140u) {
        ctx->pc = 0x2FA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA13Cu;
        // 0x2fa140: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA144u;
        goto label_2fa144;
    }
    ctx->pc = 0x2FA13Cu;
    SET_GPR_U32(ctx, 31, 0x2FA144u);
    ctx->pc = 0x2FA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA13Cu;
    // 0x2fa140: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2FA13Cu, 0x2FA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA144u;
label_2fa144:
    // 0x2fa144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fa144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fa148:
    // 0x2fa148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fa148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fa14c:
    // 0x2fa14c: 0x0  nop
    ctx->pc = 0x2fa14cu;
    // NOP
label_2fa150:
    // 0x2fa150: 0xe6802c48  swc1        $f0, 0x2C48($s4)
    ctx->pc = 0x2fa150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 11336), bits); }
label_2fa154:
    // 0x2fa154: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2fa154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fa158:
    // 0x2fa158: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2fa158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2fa15c:
    // 0x2fa15c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2fa15cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2fa160:
    // 0x2fa160: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2fa160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2fa164:
    // 0x2fa164: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2fa164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2fa168:
    // 0x2fa168: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2fa168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2fa16c:
    // 0x2fa16c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2fa16cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2fa170:
    // 0x2fa170: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2fa170u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2fa174:
    // 0x2fa174: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2fa174u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2fa178:
    // 0x2fa178: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2fa178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_2fa17c:
    // 0x2fa17c: 0x3e00008  jr          $ra
label_2fa180:
    if (ctx->pc == 0x2FA180u) {
        ctx->pc = 0x2FA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA17Cu;
        // 0x2fa180: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA184u;
        goto label_2fa184;
    }
    ctx->pc = 0x2FA17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA17Cu;
        // 0x2fa180: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA184u;
label_2fa184:
    // 0x2fa184: 0x0  nop
    ctx->pc = 0x2fa184u;
    // NOP
    ctx->pc = 0x2fa188u;
}
