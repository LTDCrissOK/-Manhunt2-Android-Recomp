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

// Function: sub_002F5A38
// Address: 0x2f5a38 - 0x2f69b0
void sub_002F5A38_0x2f5a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5A38_0x2f5a38");
#endif

    switch (ctx->pc) {
        case 0x2f5a38u: goto label_2f5a38;
        case 0x2f5a3cu: goto label_2f5a3c;
        case 0x2f5a40u: goto label_2f5a40;
        case 0x2f5a44u: goto label_2f5a44;
        case 0x2f5a48u: goto label_2f5a48;
        case 0x2f5a4cu: goto label_2f5a4c;
        case 0x2f5a50u: goto label_2f5a50;
        case 0x2f5a54u: goto label_2f5a54;
        case 0x2f5a58u: goto label_2f5a58;
        case 0x2f5a5cu: goto label_2f5a5c;
        case 0x2f5a60u: goto label_2f5a60;
        case 0x2f5a64u: goto label_2f5a64;
        case 0x2f5a68u: goto label_2f5a68;
        case 0x2f5a6cu: goto label_2f5a6c;
        case 0x2f5a70u: goto label_2f5a70;
        case 0x2f5a74u: goto label_2f5a74;
        case 0x2f5a78u: goto label_2f5a78;
        case 0x2f5a7cu: goto label_2f5a7c;
        case 0x2f5a80u: goto label_2f5a80;
        case 0x2f5a84u: goto label_2f5a84;
        case 0x2f5a88u: goto label_2f5a88;
        case 0x2f5a8cu: goto label_2f5a8c;
        case 0x2f5a90u: goto label_2f5a90;
        case 0x2f5a94u: goto label_2f5a94;
        case 0x2f5a98u: goto label_2f5a98;
        case 0x2f5a9cu: goto label_2f5a9c;
        case 0x2f5aa0u: goto label_2f5aa0;
        case 0x2f5aa4u: goto label_2f5aa4;
        case 0x2f5aa8u: goto label_2f5aa8;
        case 0x2f5aacu: goto label_2f5aac;
        case 0x2f5ab0u: goto label_2f5ab0;
        case 0x2f5ab4u: goto label_2f5ab4;
        case 0x2f5ab8u: goto label_2f5ab8;
        case 0x2f5abcu: goto label_2f5abc;
        case 0x2f5ac0u: goto label_2f5ac0;
        case 0x2f5ac4u: goto label_2f5ac4;
        case 0x2f5ac8u: goto label_2f5ac8;
        case 0x2f5accu: goto label_2f5acc;
        case 0x2f5ad0u: goto label_2f5ad0;
        case 0x2f5ad4u: goto label_2f5ad4;
        case 0x2f5ad8u: goto label_2f5ad8;
        case 0x2f5adcu: goto label_2f5adc;
        case 0x2f5ae0u: goto label_2f5ae0;
        case 0x2f5ae4u: goto label_2f5ae4;
        case 0x2f5ae8u: goto label_2f5ae8;
        case 0x2f5aecu: goto label_2f5aec;
        case 0x2f5af0u: goto label_2f5af0;
        case 0x2f5af4u: goto label_2f5af4;
        case 0x2f5af8u: goto label_2f5af8;
        case 0x2f5afcu: goto label_2f5afc;
        case 0x2f5b00u: goto label_2f5b00;
        case 0x2f5b04u: goto label_2f5b04;
        case 0x2f5b08u: goto label_2f5b08;
        case 0x2f5b0cu: goto label_2f5b0c;
        case 0x2f5b10u: goto label_2f5b10;
        case 0x2f5b14u: goto label_2f5b14;
        case 0x2f5b18u: goto label_2f5b18;
        case 0x2f5b1cu: goto label_2f5b1c;
        case 0x2f5b20u: goto label_2f5b20;
        case 0x2f5b24u: goto label_2f5b24;
        case 0x2f5b28u: goto label_2f5b28;
        case 0x2f5b2cu: goto label_2f5b2c;
        case 0x2f5b30u: goto label_2f5b30;
        case 0x2f5b34u: goto label_2f5b34;
        case 0x2f5b38u: goto label_2f5b38;
        case 0x2f5b3cu: goto label_2f5b3c;
        case 0x2f5b40u: goto label_2f5b40;
        case 0x2f5b44u: goto label_2f5b44;
        case 0x2f5b48u: goto label_2f5b48;
        case 0x2f5b4cu: goto label_2f5b4c;
        case 0x2f5b50u: goto label_2f5b50;
        case 0x2f5b54u: goto label_2f5b54;
        case 0x2f5b58u: goto label_2f5b58;
        case 0x2f5b5cu: goto label_2f5b5c;
        case 0x2f5b60u: goto label_2f5b60;
        case 0x2f5b64u: goto label_2f5b64;
        case 0x2f5b68u: goto label_2f5b68;
        case 0x2f5b6cu: goto label_2f5b6c;
        case 0x2f5b70u: goto label_2f5b70;
        case 0x2f5b74u: goto label_2f5b74;
        case 0x2f5b78u: goto label_2f5b78;
        case 0x2f5b7cu: goto label_2f5b7c;
        case 0x2f5b80u: goto label_2f5b80;
        case 0x2f5b84u: goto label_2f5b84;
        case 0x2f5b88u: goto label_2f5b88;
        case 0x2f5b8cu: goto label_2f5b8c;
        case 0x2f5b90u: goto label_2f5b90;
        case 0x2f5b94u: goto label_2f5b94;
        case 0x2f5b98u: goto label_2f5b98;
        case 0x2f5b9cu: goto label_2f5b9c;
        case 0x2f5ba0u: goto label_2f5ba0;
        case 0x2f5ba4u: goto label_2f5ba4;
        case 0x2f5ba8u: goto label_2f5ba8;
        case 0x2f5bacu: goto label_2f5bac;
        case 0x2f5bb0u: goto label_2f5bb0;
        case 0x2f5bb4u: goto label_2f5bb4;
        case 0x2f5bb8u: goto label_2f5bb8;
        case 0x2f5bbcu: goto label_2f5bbc;
        case 0x2f5bc0u: goto label_2f5bc0;
        case 0x2f5bc4u: goto label_2f5bc4;
        case 0x2f5bc8u: goto label_2f5bc8;
        case 0x2f5bccu: goto label_2f5bcc;
        case 0x2f5bd0u: goto label_2f5bd0;
        case 0x2f5bd4u: goto label_2f5bd4;
        case 0x2f5bd8u: goto label_2f5bd8;
        case 0x2f5bdcu: goto label_2f5bdc;
        case 0x2f5be0u: goto label_2f5be0;
        case 0x2f5be4u: goto label_2f5be4;
        case 0x2f5be8u: goto label_2f5be8;
        case 0x2f5becu: goto label_2f5bec;
        case 0x2f5bf0u: goto label_2f5bf0;
        case 0x2f5bf4u: goto label_2f5bf4;
        case 0x2f5bf8u: goto label_2f5bf8;
        case 0x2f5bfcu: goto label_2f5bfc;
        case 0x2f5c00u: goto label_2f5c00;
        case 0x2f5c04u: goto label_2f5c04;
        case 0x2f5c08u: goto label_2f5c08;
        case 0x2f5c0cu: goto label_2f5c0c;
        case 0x2f5c10u: goto label_2f5c10;
        case 0x2f5c14u: goto label_2f5c14;
        case 0x2f5c18u: goto label_2f5c18;
        case 0x2f5c1cu: goto label_2f5c1c;
        case 0x2f5c20u: goto label_2f5c20;
        case 0x2f5c24u: goto label_2f5c24;
        case 0x2f5c28u: goto label_2f5c28;
        case 0x2f5c2cu: goto label_2f5c2c;
        case 0x2f5c30u: goto label_2f5c30;
        case 0x2f5c34u: goto label_2f5c34;
        case 0x2f5c38u: goto label_2f5c38;
        case 0x2f5c3cu: goto label_2f5c3c;
        case 0x2f5c40u: goto label_2f5c40;
        case 0x2f5c44u: goto label_2f5c44;
        case 0x2f5c48u: goto label_2f5c48;
        case 0x2f5c4cu: goto label_2f5c4c;
        case 0x2f5c50u: goto label_2f5c50;
        case 0x2f5c54u: goto label_2f5c54;
        case 0x2f5c58u: goto label_2f5c58;
        case 0x2f5c5cu: goto label_2f5c5c;
        case 0x2f5c60u: goto label_2f5c60;
        case 0x2f5c64u: goto label_2f5c64;
        case 0x2f5c68u: goto label_2f5c68;
        case 0x2f5c6cu: goto label_2f5c6c;
        case 0x2f5c70u: goto label_2f5c70;
        case 0x2f5c74u: goto label_2f5c74;
        case 0x2f5c78u: goto label_2f5c78;
        case 0x2f5c7cu: goto label_2f5c7c;
        case 0x2f5c80u: goto label_2f5c80;
        case 0x2f5c84u: goto label_2f5c84;
        case 0x2f5c88u: goto label_2f5c88;
        case 0x2f5c8cu: goto label_2f5c8c;
        case 0x2f5c90u: goto label_2f5c90;
        case 0x2f5c94u: goto label_2f5c94;
        case 0x2f5c98u: goto label_2f5c98;
        case 0x2f5c9cu: goto label_2f5c9c;
        case 0x2f5ca0u: goto label_2f5ca0;
        case 0x2f5ca4u: goto label_2f5ca4;
        case 0x2f5ca8u: goto label_2f5ca8;
        case 0x2f5cacu: goto label_2f5cac;
        case 0x2f5cb0u: goto label_2f5cb0;
        case 0x2f5cb4u: goto label_2f5cb4;
        case 0x2f5cb8u: goto label_2f5cb8;
        case 0x2f5cbcu: goto label_2f5cbc;
        case 0x2f5cc0u: goto label_2f5cc0;
        case 0x2f5cc4u: goto label_2f5cc4;
        case 0x2f5cc8u: goto label_2f5cc8;
        case 0x2f5cccu: goto label_2f5ccc;
        case 0x2f5cd0u: goto label_2f5cd0;
        case 0x2f5cd4u: goto label_2f5cd4;
        case 0x2f5cd8u: goto label_2f5cd8;
        case 0x2f5cdcu: goto label_2f5cdc;
        case 0x2f5ce0u: goto label_2f5ce0;
        case 0x2f5ce4u: goto label_2f5ce4;
        case 0x2f5ce8u: goto label_2f5ce8;
        case 0x2f5cecu: goto label_2f5cec;
        case 0x2f5cf0u: goto label_2f5cf0;
        case 0x2f5cf4u: goto label_2f5cf4;
        case 0x2f5cf8u: goto label_2f5cf8;
        case 0x2f5cfcu: goto label_2f5cfc;
        case 0x2f5d00u: goto label_2f5d00;
        case 0x2f5d04u: goto label_2f5d04;
        case 0x2f5d08u: goto label_2f5d08;
        case 0x2f5d0cu: goto label_2f5d0c;
        case 0x2f5d10u: goto label_2f5d10;
        case 0x2f5d14u: goto label_2f5d14;
        case 0x2f5d18u: goto label_2f5d18;
        case 0x2f5d1cu: goto label_2f5d1c;
        case 0x2f5d20u: goto label_2f5d20;
        case 0x2f5d24u: goto label_2f5d24;
        case 0x2f5d28u: goto label_2f5d28;
        case 0x2f5d2cu: goto label_2f5d2c;
        case 0x2f5d30u: goto label_2f5d30;
        case 0x2f5d34u: goto label_2f5d34;
        case 0x2f5d38u: goto label_2f5d38;
        case 0x2f5d3cu: goto label_2f5d3c;
        case 0x2f5d40u: goto label_2f5d40;
        case 0x2f5d44u: goto label_2f5d44;
        case 0x2f5d48u: goto label_2f5d48;
        case 0x2f5d4cu: goto label_2f5d4c;
        case 0x2f5d50u: goto label_2f5d50;
        case 0x2f5d54u: goto label_2f5d54;
        case 0x2f5d58u: goto label_2f5d58;
        case 0x2f5d5cu: goto label_2f5d5c;
        case 0x2f5d60u: goto label_2f5d60;
        case 0x2f5d64u: goto label_2f5d64;
        case 0x2f5d68u: goto label_2f5d68;
        case 0x2f5d6cu: goto label_2f5d6c;
        case 0x2f5d70u: goto label_2f5d70;
        case 0x2f5d74u: goto label_2f5d74;
        case 0x2f5d78u: goto label_2f5d78;
        case 0x2f5d7cu: goto label_2f5d7c;
        case 0x2f5d80u: goto label_2f5d80;
        case 0x2f5d84u: goto label_2f5d84;
        case 0x2f5d88u: goto label_2f5d88;
        case 0x2f5d8cu: goto label_2f5d8c;
        case 0x2f5d90u: goto label_2f5d90;
        case 0x2f5d94u: goto label_2f5d94;
        case 0x2f5d98u: goto label_2f5d98;
        case 0x2f5d9cu: goto label_2f5d9c;
        case 0x2f5da0u: goto label_2f5da0;
        case 0x2f5da4u: goto label_2f5da4;
        case 0x2f5da8u: goto label_2f5da8;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5db0u: goto label_2f5db0;
        case 0x2f5db4u: goto label_2f5db4;
        case 0x2f5db8u: goto label_2f5db8;
        case 0x2f5dbcu: goto label_2f5dbc;
        case 0x2f5dc0u: goto label_2f5dc0;
        case 0x2f5dc4u: goto label_2f5dc4;
        case 0x2f5dc8u: goto label_2f5dc8;
        case 0x2f5dccu: goto label_2f5dcc;
        case 0x2f5dd0u: goto label_2f5dd0;
        case 0x2f5dd4u: goto label_2f5dd4;
        case 0x2f5dd8u: goto label_2f5dd8;
        case 0x2f5ddcu: goto label_2f5ddc;
        case 0x2f5de0u: goto label_2f5de0;
        case 0x2f5de4u: goto label_2f5de4;
        case 0x2f5de8u: goto label_2f5de8;
        case 0x2f5decu: goto label_2f5dec;
        case 0x2f5df0u: goto label_2f5df0;
        case 0x2f5df4u: goto label_2f5df4;
        case 0x2f5df8u: goto label_2f5df8;
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e00u: goto label_2f5e00;
        case 0x2f5e04u: goto label_2f5e04;
        case 0x2f5e08u: goto label_2f5e08;
        case 0x2f5e0cu: goto label_2f5e0c;
        case 0x2f5e10u: goto label_2f5e10;
        case 0x2f5e14u: goto label_2f5e14;
        case 0x2f5e18u: goto label_2f5e18;
        case 0x2f5e1cu: goto label_2f5e1c;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e24u: goto label_2f5e24;
        case 0x2f5e28u: goto label_2f5e28;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e30u: goto label_2f5e30;
        case 0x2f5e34u: goto label_2f5e34;
        case 0x2f5e38u: goto label_2f5e38;
        case 0x2f5e3cu: goto label_2f5e3c;
        case 0x2f5e40u: goto label_2f5e40;
        case 0x2f5e44u: goto label_2f5e44;
        case 0x2f5e48u: goto label_2f5e48;
        case 0x2f5e4cu: goto label_2f5e4c;
        case 0x2f5e50u: goto label_2f5e50;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5e58u: goto label_2f5e58;
        case 0x2f5e5cu: goto label_2f5e5c;
        case 0x2f5e60u: goto label_2f5e60;
        case 0x2f5e64u: goto label_2f5e64;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e6cu: goto label_2f5e6c;
        case 0x2f5e70u: goto label_2f5e70;
        case 0x2f5e74u: goto label_2f5e74;
        case 0x2f5e78u: goto label_2f5e78;
        case 0x2f5e7cu: goto label_2f5e7c;
        case 0x2f5e80u: goto label_2f5e80;
        case 0x2f5e84u: goto label_2f5e84;
        case 0x2f5e88u: goto label_2f5e88;
        case 0x2f5e8cu: goto label_2f5e8c;
        case 0x2f5e90u: goto label_2f5e90;
        case 0x2f5e94u: goto label_2f5e94;
        case 0x2f5e98u: goto label_2f5e98;
        case 0x2f5e9cu: goto label_2f5e9c;
        case 0x2f5ea0u: goto label_2f5ea0;
        case 0x2f5ea4u: goto label_2f5ea4;
        case 0x2f5ea8u: goto label_2f5ea8;
        case 0x2f5eacu: goto label_2f5eac;
        case 0x2f5eb0u: goto label_2f5eb0;
        case 0x2f5eb4u: goto label_2f5eb4;
        case 0x2f5eb8u: goto label_2f5eb8;
        case 0x2f5ebcu: goto label_2f5ebc;
        case 0x2f5ec0u: goto label_2f5ec0;
        case 0x2f5ec4u: goto label_2f5ec4;
        case 0x2f5ec8u: goto label_2f5ec8;
        case 0x2f5eccu: goto label_2f5ecc;
        case 0x2f5ed0u: goto label_2f5ed0;
        case 0x2f5ed4u: goto label_2f5ed4;
        case 0x2f5ed8u: goto label_2f5ed8;
        case 0x2f5edcu: goto label_2f5edc;
        case 0x2f5ee0u: goto label_2f5ee0;
        case 0x2f5ee4u: goto label_2f5ee4;
        case 0x2f5ee8u: goto label_2f5ee8;
        case 0x2f5eecu: goto label_2f5eec;
        case 0x2f5ef0u: goto label_2f5ef0;
        case 0x2f5ef4u: goto label_2f5ef4;
        case 0x2f5ef8u: goto label_2f5ef8;
        case 0x2f5efcu: goto label_2f5efc;
        case 0x2f5f00u: goto label_2f5f00;
        case 0x2f5f04u: goto label_2f5f04;
        case 0x2f5f08u: goto label_2f5f08;
        case 0x2f5f0cu: goto label_2f5f0c;
        case 0x2f5f10u: goto label_2f5f10;
        case 0x2f5f14u: goto label_2f5f14;
        case 0x2f5f18u: goto label_2f5f18;
        case 0x2f5f1cu: goto label_2f5f1c;
        case 0x2f5f20u: goto label_2f5f20;
        case 0x2f5f24u: goto label_2f5f24;
        case 0x2f5f28u: goto label_2f5f28;
        case 0x2f5f2cu: goto label_2f5f2c;
        case 0x2f5f30u: goto label_2f5f30;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f38u: goto label_2f5f38;
        case 0x2f5f3cu: goto label_2f5f3c;
        case 0x2f5f40u: goto label_2f5f40;
        case 0x2f5f44u: goto label_2f5f44;
        case 0x2f5f48u: goto label_2f5f48;
        case 0x2f5f4cu: goto label_2f5f4c;
        case 0x2f5f50u: goto label_2f5f50;
        case 0x2f5f54u: goto label_2f5f54;
        case 0x2f5f58u: goto label_2f5f58;
        case 0x2f5f5cu: goto label_2f5f5c;
        case 0x2f5f60u: goto label_2f5f60;
        case 0x2f5f64u: goto label_2f5f64;
        case 0x2f5f68u: goto label_2f5f68;
        case 0x2f5f6cu: goto label_2f5f6c;
        case 0x2f5f70u: goto label_2f5f70;
        case 0x2f5f74u: goto label_2f5f74;
        case 0x2f5f78u: goto label_2f5f78;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f5f80u: goto label_2f5f80;
        case 0x2f5f84u: goto label_2f5f84;
        case 0x2f5f88u: goto label_2f5f88;
        case 0x2f5f8cu: goto label_2f5f8c;
        case 0x2f5f90u: goto label_2f5f90;
        case 0x2f5f94u: goto label_2f5f94;
        case 0x2f5f98u: goto label_2f5f98;
        case 0x2f5f9cu: goto label_2f5f9c;
        case 0x2f5fa0u: goto label_2f5fa0;
        case 0x2f5fa4u: goto label_2f5fa4;
        case 0x2f5fa8u: goto label_2f5fa8;
        case 0x2f5facu: goto label_2f5fac;
        case 0x2f5fb0u: goto label_2f5fb0;
        case 0x2f5fb4u: goto label_2f5fb4;
        case 0x2f5fb8u: goto label_2f5fb8;
        case 0x2f5fbcu: goto label_2f5fbc;
        case 0x2f5fc0u: goto label_2f5fc0;
        case 0x2f5fc4u: goto label_2f5fc4;
        case 0x2f5fc8u: goto label_2f5fc8;
        case 0x2f5fccu: goto label_2f5fcc;
        case 0x2f5fd0u: goto label_2f5fd0;
        case 0x2f5fd4u: goto label_2f5fd4;
        case 0x2f5fd8u: goto label_2f5fd8;
        case 0x2f5fdcu: goto label_2f5fdc;
        case 0x2f5fe0u: goto label_2f5fe0;
        case 0x2f5fe4u: goto label_2f5fe4;
        case 0x2f5fe8u: goto label_2f5fe8;
        case 0x2f5fecu: goto label_2f5fec;
        case 0x2f5ff0u: goto label_2f5ff0;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f5ff8u: goto label_2f5ff8;
        case 0x2f5ffcu: goto label_2f5ffc;
        case 0x2f6000u: goto label_2f6000;
        case 0x2f6004u: goto label_2f6004;
        case 0x2f6008u: goto label_2f6008;
        case 0x2f600cu: goto label_2f600c;
        case 0x2f6010u: goto label_2f6010;
        case 0x2f6014u: goto label_2f6014;
        case 0x2f6018u: goto label_2f6018;
        case 0x2f601cu: goto label_2f601c;
        case 0x2f6020u: goto label_2f6020;
        case 0x2f6024u: goto label_2f6024;
        case 0x2f6028u: goto label_2f6028;
        case 0x2f602cu: goto label_2f602c;
        case 0x2f6030u: goto label_2f6030;
        case 0x2f6034u: goto label_2f6034;
        case 0x2f6038u: goto label_2f6038;
        case 0x2f603cu: goto label_2f603c;
        case 0x2f6040u: goto label_2f6040;
        case 0x2f6044u: goto label_2f6044;
        case 0x2f6048u: goto label_2f6048;
        case 0x2f604cu: goto label_2f604c;
        case 0x2f6050u: goto label_2f6050;
        case 0x2f6054u: goto label_2f6054;
        case 0x2f6058u: goto label_2f6058;
        case 0x2f605cu: goto label_2f605c;
        case 0x2f6060u: goto label_2f6060;
        case 0x2f6064u: goto label_2f6064;
        case 0x2f6068u: goto label_2f6068;
        case 0x2f606cu: goto label_2f606c;
        case 0x2f6070u: goto label_2f6070;
        case 0x2f6074u: goto label_2f6074;
        case 0x2f6078u: goto label_2f6078;
        case 0x2f607cu: goto label_2f607c;
        case 0x2f6080u: goto label_2f6080;
        case 0x2f6084u: goto label_2f6084;
        case 0x2f6088u: goto label_2f6088;
        case 0x2f608cu: goto label_2f608c;
        case 0x2f6090u: goto label_2f6090;
        case 0x2f6094u: goto label_2f6094;
        case 0x2f6098u: goto label_2f6098;
        case 0x2f609cu: goto label_2f609c;
        case 0x2f60a0u: goto label_2f60a0;
        case 0x2f60a4u: goto label_2f60a4;
        case 0x2f60a8u: goto label_2f60a8;
        case 0x2f60acu: goto label_2f60ac;
        case 0x2f60b0u: goto label_2f60b0;
        case 0x2f60b4u: goto label_2f60b4;
        case 0x2f60b8u: goto label_2f60b8;
        case 0x2f60bcu: goto label_2f60bc;
        case 0x2f60c0u: goto label_2f60c0;
        case 0x2f60c4u: goto label_2f60c4;
        case 0x2f60c8u: goto label_2f60c8;
        case 0x2f60ccu: goto label_2f60cc;
        case 0x2f60d0u: goto label_2f60d0;
        case 0x2f60d4u: goto label_2f60d4;
        case 0x2f60d8u: goto label_2f60d8;
        case 0x2f60dcu: goto label_2f60dc;
        case 0x2f60e0u: goto label_2f60e0;
        case 0x2f60e4u: goto label_2f60e4;
        case 0x2f60e8u: goto label_2f60e8;
        case 0x2f60ecu: goto label_2f60ec;
        case 0x2f60f0u: goto label_2f60f0;
        case 0x2f60f4u: goto label_2f60f4;
        case 0x2f60f8u: goto label_2f60f8;
        case 0x2f60fcu: goto label_2f60fc;
        case 0x2f6100u: goto label_2f6100;
        case 0x2f6104u: goto label_2f6104;
        case 0x2f6108u: goto label_2f6108;
        case 0x2f610cu: goto label_2f610c;
        case 0x2f6110u: goto label_2f6110;
        case 0x2f6114u: goto label_2f6114;
        case 0x2f6118u: goto label_2f6118;
        case 0x2f611cu: goto label_2f611c;
        case 0x2f6120u: goto label_2f6120;
        case 0x2f6124u: goto label_2f6124;
        case 0x2f6128u: goto label_2f6128;
        case 0x2f612cu: goto label_2f612c;
        case 0x2f6130u: goto label_2f6130;
        case 0x2f6134u: goto label_2f6134;
        case 0x2f6138u: goto label_2f6138;
        case 0x2f613cu: goto label_2f613c;
        case 0x2f6140u: goto label_2f6140;
        case 0x2f6144u: goto label_2f6144;
        case 0x2f6148u: goto label_2f6148;
        case 0x2f614cu: goto label_2f614c;
        case 0x2f6150u: goto label_2f6150;
        case 0x2f6154u: goto label_2f6154;
        case 0x2f6158u: goto label_2f6158;
        case 0x2f615cu: goto label_2f615c;
        case 0x2f6160u: goto label_2f6160;
        case 0x2f6164u: goto label_2f6164;
        case 0x2f6168u: goto label_2f6168;
        case 0x2f616cu: goto label_2f616c;
        case 0x2f6170u: goto label_2f6170;
        case 0x2f6174u: goto label_2f6174;
        case 0x2f6178u: goto label_2f6178;
        case 0x2f617cu: goto label_2f617c;
        case 0x2f6180u: goto label_2f6180;
        case 0x2f6184u: goto label_2f6184;
        case 0x2f6188u: goto label_2f6188;
        case 0x2f618cu: goto label_2f618c;
        case 0x2f6190u: goto label_2f6190;
        case 0x2f6194u: goto label_2f6194;
        case 0x2f6198u: goto label_2f6198;
        case 0x2f619cu: goto label_2f619c;
        case 0x2f61a0u: goto label_2f61a0;
        case 0x2f61a4u: goto label_2f61a4;
        case 0x2f61a8u: goto label_2f61a8;
        case 0x2f61acu: goto label_2f61ac;
        case 0x2f61b0u: goto label_2f61b0;
        case 0x2f61b4u: goto label_2f61b4;
        case 0x2f61b8u: goto label_2f61b8;
        case 0x2f61bcu: goto label_2f61bc;
        case 0x2f61c0u: goto label_2f61c0;
        case 0x2f61c4u: goto label_2f61c4;
        case 0x2f61c8u: goto label_2f61c8;
        case 0x2f61ccu: goto label_2f61cc;
        case 0x2f61d0u: goto label_2f61d0;
        case 0x2f61d4u: goto label_2f61d4;
        case 0x2f61d8u: goto label_2f61d8;
        case 0x2f61dcu: goto label_2f61dc;
        case 0x2f61e0u: goto label_2f61e0;
        case 0x2f61e4u: goto label_2f61e4;
        case 0x2f61e8u: goto label_2f61e8;
        case 0x2f61ecu: goto label_2f61ec;
        case 0x2f61f0u: goto label_2f61f0;
        case 0x2f61f4u: goto label_2f61f4;
        case 0x2f61f8u: goto label_2f61f8;
        case 0x2f61fcu: goto label_2f61fc;
        case 0x2f6200u: goto label_2f6200;
        case 0x2f6204u: goto label_2f6204;
        case 0x2f6208u: goto label_2f6208;
        case 0x2f620cu: goto label_2f620c;
        case 0x2f6210u: goto label_2f6210;
        case 0x2f6214u: goto label_2f6214;
        case 0x2f6218u: goto label_2f6218;
        case 0x2f621cu: goto label_2f621c;
        case 0x2f6220u: goto label_2f6220;
        case 0x2f6224u: goto label_2f6224;
        case 0x2f6228u: goto label_2f6228;
        case 0x2f622cu: goto label_2f622c;
        case 0x2f6230u: goto label_2f6230;
        case 0x2f6234u: goto label_2f6234;
        case 0x2f6238u: goto label_2f6238;
        case 0x2f623cu: goto label_2f623c;
        case 0x2f6240u: goto label_2f6240;
        case 0x2f6244u: goto label_2f6244;
        case 0x2f6248u: goto label_2f6248;
        case 0x2f624cu: goto label_2f624c;
        case 0x2f6250u: goto label_2f6250;
        case 0x2f6254u: goto label_2f6254;
        case 0x2f6258u: goto label_2f6258;
        case 0x2f625cu: goto label_2f625c;
        case 0x2f6260u: goto label_2f6260;
        case 0x2f6264u: goto label_2f6264;
        case 0x2f6268u: goto label_2f6268;
        case 0x2f626cu: goto label_2f626c;
        case 0x2f6270u: goto label_2f6270;
        case 0x2f6274u: goto label_2f6274;
        case 0x2f6278u: goto label_2f6278;
        case 0x2f627cu: goto label_2f627c;
        case 0x2f6280u: goto label_2f6280;
        case 0x2f6284u: goto label_2f6284;
        case 0x2f6288u: goto label_2f6288;
        case 0x2f628cu: goto label_2f628c;
        case 0x2f6290u: goto label_2f6290;
        case 0x2f6294u: goto label_2f6294;
        case 0x2f6298u: goto label_2f6298;
        case 0x2f629cu: goto label_2f629c;
        case 0x2f62a0u: goto label_2f62a0;
        case 0x2f62a4u: goto label_2f62a4;
        case 0x2f62a8u: goto label_2f62a8;
        case 0x2f62acu: goto label_2f62ac;
        case 0x2f62b0u: goto label_2f62b0;
        case 0x2f62b4u: goto label_2f62b4;
        case 0x2f62b8u: goto label_2f62b8;
        case 0x2f62bcu: goto label_2f62bc;
        case 0x2f62c0u: goto label_2f62c0;
        case 0x2f62c4u: goto label_2f62c4;
        case 0x2f62c8u: goto label_2f62c8;
        case 0x2f62ccu: goto label_2f62cc;
        case 0x2f62d0u: goto label_2f62d0;
        case 0x2f62d4u: goto label_2f62d4;
        case 0x2f62d8u: goto label_2f62d8;
        case 0x2f62dcu: goto label_2f62dc;
        case 0x2f62e0u: goto label_2f62e0;
        case 0x2f62e4u: goto label_2f62e4;
        case 0x2f62e8u: goto label_2f62e8;
        case 0x2f62ecu: goto label_2f62ec;
        case 0x2f62f0u: goto label_2f62f0;
        case 0x2f62f4u: goto label_2f62f4;
        case 0x2f62f8u: goto label_2f62f8;
        case 0x2f62fcu: goto label_2f62fc;
        case 0x2f6300u: goto label_2f6300;
        case 0x2f6304u: goto label_2f6304;
        case 0x2f6308u: goto label_2f6308;
        case 0x2f630cu: goto label_2f630c;
        case 0x2f6310u: goto label_2f6310;
        case 0x2f6314u: goto label_2f6314;
        case 0x2f6318u: goto label_2f6318;
        case 0x2f631cu: goto label_2f631c;
        case 0x2f6320u: goto label_2f6320;
        case 0x2f6324u: goto label_2f6324;
        case 0x2f6328u: goto label_2f6328;
        case 0x2f632cu: goto label_2f632c;
        case 0x2f6330u: goto label_2f6330;
        case 0x2f6334u: goto label_2f6334;
        case 0x2f6338u: goto label_2f6338;
        case 0x2f633cu: goto label_2f633c;
        case 0x2f6340u: goto label_2f6340;
        case 0x2f6344u: goto label_2f6344;
        case 0x2f6348u: goto label_2f6348;
        case 0x2f634cu: goto label_2f634c;
        case 0x2f6350u: goto label_2f6350;
        case 0x2f6354u: goto label_2f6354;
        case 0x2f6358u: goto label_2f6358;
        case 0x2f635cu: goto label_2f635c;
        case 0x2f6360u: goto label_2f6360;
        case 0x2f6364u: goto label_2f6364;
        case 0x2f6368u: goto label_2f6368;
        case 0x2f636cu: goto label_2f636c;
        case 0x2f6370u: goto label_2f6370;
        case 0x2f6374u: goto label_2f6374;
        case 0x2f6378u: goto label_2f6378;
        case 0x2f637cu: goto label_2f637c;
        case 0x2f6380u: goto label_2f6380;
        case 0x2f6384u: goto label_2f6384;
        case 0x2f6388u: goto label_2f6388;
        case 0x2f638cu: goto label_2f638c;
        case 0x2f6390u: goto label_2f6390;
        case 0x2f6394u: goto label_2f6394;
        case 0x2f6398u: goto label_2f6398;
        case 0x2f639cu: goto label_2f639c;
        case 0x2f63a0u: goto label_2f63a0;
        case 0x2f63a4u: goto label_2f63a4;
        case 0x2f63a8u: goto label_2f63a8;
        case 0x2f63acu: goto label_2f63ac;
        case 0x2f63b0u: goto label_2f63b0;
        case 0x2f63b4u: goto label_2f63b4;
        case 0x2f63b8u: goto label_2f63b8;
        case 0x2f63bcu: goto label_2f63bc;
        case 0x2f63c0u: goto label_2f63c0;
        case 0x2f63c4u: goto label_2f63c4;
        case 0x2f63c8u: goto label_2f63c8;
        case 0x2f63ccu: goto label_2f63cc;
        case 0x2f63d0u: goto label_2f63d0;
        case 0x2f63d4u: goto label_2f63d4;
        case 0x2f63d8u: goto label_2f63d8;
        case 0x2f63dcu: goto label_2f63dc;
        case 0x2f63e0u: goto label_2f63e0;
        case 0x2f63e4u: goto label_2f63e4;
        case 0x2f63e8u: goto label_2f63e8;
        case 0x2f63ecu: goto label_2f63ec;
        case 0x2f63f0u: goto label_2f63f0;
        case 0x2f63f4u: goto label_2f63f4;
        case 0x2f63f8u: goto label_2f63f8;
        case 0x2f63fcu: goto label_2f63fc;
        case 0x2f6400u: goto label_2f6400;
        case 0x2f6404u: goto label_2f6404;
        case 0x2f6408u: goto label_2f6408;
        case 0x2f640cu: goto label_2f640c;
        case 0x2f6410u: goto label_2f6410;
        case 0x2f6414u: goto label_2f6414;
        case 0x2f6418u: goto label_2f6418;
        case 0x2f641cu: goto label_2f641c;
        case 0x2f6420u: goto label_2f6420;
        case 0x2f6424u: goto label_2f6424;
        case 0x2f6428u: goto label_2f6428;
        case 0x2f642cu: goto label_2f642c;
        case 0x2f6430u: goto label_2f6430;
        case 0x2f6434u: goto label_2f6434;
        case 0x2f6438u: goto label_2f6438;
        case 0x2f643cu: goto label_2f643c;
        case 0x2f6440u: goto label_2f6440;
        case 0x2f6444u: goto label_2f6444;
        case 0x2f6448u: goto label_2f6448;
        case 0x2f644cu: goto label_2f644c;
        case 0x2f6450u: goto label_2f6450;
        case 0x2f6454u: goto label_2f6454;
        case 0x2f6458u: goto label_2f6458;
        case 0x2f645cu: goto label_2f645c;
        case 0x2f6460u: goto label_2f6460;
        case 0x2f6464u: goto label_2f6464;
        case 0x2f6468u: goto label_2f6468;
        case 0x2f646cu: goto label_2f646c;
        case 0x2f6470u: goto label_2f6470;
        case 0x2f6474u: goto label_2f6474;
        case 0x2f6478u: goto label_2f6478;
        case 0x2f647cu: goto label_2f647c;
        case 0x2f6480u: goto label_2f6480;
        case 0x2f6484u: goto label_2f6484;
        case 0x2f6488u: goto label_2f6488;
        case 0x2f648cu: goto label_2f648c;
        case 0x2f6490u: goto label_2f6490;
        case 0x2f6494u: goto label_2f6494;
        case 0x2f6498u: goto label_2f6498;
        case 0x2f649cu: goto label_2f649c;
        case 0x2f64a0u: goto label_2f64a0;
        case 0x2f64a4u: goto label_2f64a4;
        case 0x2f64a8u: goto label_2f64a8;
        case 0x2f64acu: goto label_2f64ac;
        case 0x2f64b0u: goto label_2f64b0;
        case 0x2f64b4u: goto label_2f64b4;
        case 0x2f64b8u: goto label_2f64b8;
        case 0x2f64bcu: goto label_2f64bc;
        case 0x2f64c0u: goto label_2f64c0;
        case 0x2f64c4u: goto label_2f64c4;
        case 0x2f64c8u: goto label_2f64c8;
        case 0x2f64ccu: goto label_2f64cc;
        case 0x2f64d0u: goto label_2f64d0;
        case 0x2f64d4u: goto label_2f64d4;
        case 0x2f64d8u: goto label_2f64d8;
        case 0x2f64dcu: goto label_2f64dc;
        case 0x2f64e0u: goto label_2f64e0;
        case 0x2f64e4u: goto label_2f64e4;
        case 0x2f64e8u: goto label_2f64e8;
        case 0x2f64ecu: goto label_2f64ec;
        case 0x2f64f0u: goto label_2f64f0;
        case 0x2f64f4u: goto label_2f64f4;
        case 0x2f64f8u: goto label_2f64f8;
        case 0x2f64fcu: goto label_2f64fc;
        case 0x2f6500u: goto label_2f6500;
        case 0x2f6504u: goto label_2f6504;
        case 0x2f6508u: goto label_2f6508;
        case 0x2f650cu: goto label_2f650c;
        case 0x2f6510u: goto label_2f6510;
        case 0x2f6514u: goto label_2f6514;
        case 0x2f6518u: goto label_2f6518;
        case 0x2f651cu: goto label_2f651c;
        case 0x2f6520u: goto label_2f6520;
        case 0x2f6524u: goto label_2f6524;
        case 0x2f6528u: goto label_2f6528;
        case 0x2f652cu: goto label_2f652c;
        case 0x2f6530u: goto label_2f6530;
        case 0x2f6534u: goto label_2f6534;
        case 0x2f6538u: goto label_2f6538;
        case 0x2f653cu: goto label_2f653c;
        case 0x2f6540u: goto label_2f6540;
        case 0x2f6544u: goto label_2f6544;
        case 0x2f6548u: goto label_2f6548;
        case 0x2f654cu: goto label_2f654c;
        case 0x2f6550u: goto label_2f6550;
        case 0x2f6554u: goto label_2f6554;
        case 0x2f6558u: goto label_2f6558;
        case 0x2f655cu: goto label_2f655c;
        case 0x2f6560u: goto label_2f6560;
        case 0x2f6564u: goto label_2f6564;
        case 0x2f6568u: goto label_2f6568;
        case 0x2f656cu: goto label_2f656c;
        case 0x2f6570u: goto label_2f6570;
        case 0x2f6574u: goto label_2f6574;
        case 0x2f6578u: goto label_2f6578;
        case 0x2f657cu: goto label_2f657c;
        case 0x2f6580u: goto label_2f6580;
        case 0x2f6584u: goto label_2f6584;
        case 0x2f6588u: goto label_2f6588;
        case 0x2f658cu: goto label_2f658c;
        case 0x2f6590u: goto label_2f6590;
        case 0x2f6594u: goto label_2f6594;
        case 0x2f6598u: goto label_2f6598;
        case 0x2f659cu: goto label_2f659c;
        case 0x2f65a0u: goto label_2f65a0;
        case 0x2f65a4u: goto label_2f65a4;
        case 0x2f65a8u: goto label_2f65a8;
        case 0x2f65acu: goto label_2f65ac;
        case 0x2f65b0u: goto label_2f65b0;
        case 0x2f65b4u: goto label_2f65b4;
        case 0x2f65b8u: goto label_2f65b8;
        case 0x2f65bcu: goto label_2f65bc;
        case 0x2f65c0u: goto label_2f65c0;
        case 0x2f65c4u: goto label_2f65c4;
        case 0x2f65c8u: goto label_2f65c8;
        case 0x2f65ccu: goto label_2f65cc;
        case 0x2f65d0u: goto label_2f65d0;
        case 0x2f65d4u: goto label_2f65d4;
        case 0x2f65d8u: goto label_2f65d8;
        case 0x2f65dcu: goto label_2f65dc;
        case 0x2f65e0u: goto label_2f65e0;
        case 0x2f65e4u: goto label_2f65e4;
        case 0x2f65e8u: goto label_2f65e8;
        case 0x2f65ecu: goto label_2f65ec;
        case 0x2f65f0u: goto label_2f65f0;
        case 0x2f65f4u: goto label_2f65f4;
        case 0x2f65f8u: goto label_2f65f8;
        case 0x2f65fcu: goto label_2f65fc;
        case 0x2f6600u: goto label_2f6600;
        case 0x2f6604u: goto label_2f6604;
        case 0x2f6608u: goto label_2f6608;
        case 0x2f660cu: goto label_2f660c;
        case 0x2f6610u: goto label_2f6610;
        case 0x2f6614u: goto label_2f6614;
        case 0x2f6618u: goto label_2f6618;
        case 0x2f661cu: goto label_2f661c;
        case 0x2f6620u: goto label_2f6620;
        case 0x2f6624u: goto label_2f6624;
        case 0x2f6628u: goto label_2f6628;
        case 0x2f662cu: goto label_2f662c;
        case 0x2f6630u: goto label_2f6630;
        case 0x2f6634u: goto label_2f6634;
        case 0x2f6638u: goto label_2f6638;
        case 0x2f663cu: goto label_2f663c;
        case 0x2f6640u: goto label_2f6640;
        case 0x2f6644u: goto label_2f6644;
        case 0x2f6648u: goto label_2f6648;
        case 0x2f664cu: goto label_2f664c;
        case 0x2f6650u: goto label_2f6650;
        case 0x2f6654u: goto label_2f6654;
        case 0x2f6658u: goto label_2f6658;
        case 0x2f665cu: goto label_2f665c;
        case 0x2f6660u: goto label_2f6660;
        case 0x2f6664u: goto label_2f6664;
        case 0x2f6668u: goto label_2f6668;
        case 0x2f666cu: goto label_2f666c;
        case 0x2f6670u: goto label_2f6670;
        case 0x2f6674u: goto label_2f6674;
        case 0x2f6678u: goto label_2f6678;
        case 0x2f667cu: goto label_2f667c;
        case 0x2f6680u: goto label_2f6680;
        case 0x2f6684u: goto label_2f6684;
        case 0x2f6688u: goto label_2f6688;
        case 0x2f668cu: goto label_2f668c;
        case 0x2f6690u: goto label_2f6690;
        case 0x2f6694u: goto label_2f6694;
        case 0x2f6698u: goto label_2f6698;
        case 0x2f669cu: goto label_2f669c;
        case 0x2f66a0u: goto label_2f66a0;
        case 0x2f66a4u: goto label_2f66a4;
        case 0x2f66a8u: goto label_2f66a8;
        case 0x2f66acu: goto label_2f66ac;
        case 0x2f66b0u: goto label_2f66b0;
        case 0x2f66b4u: goto label_2f66b4;
        case 0x2f66b8u: goto label_2f66b8;
        case 0x2f66bcu: goto label_2f66bc;
        case 0x2f66c0u: goto label_2f66c0;
        case 0x2f66c4u: goto label_2f66c4;
        case 0x2f66c8u: goto label_2f66c8;
        case 0x2f66ccu: goto label_2f66cc;
        case 0x2f66d0u: goto label_2f66d0;
        case 0x2f66d4u: goto label_2f66d4;
        case 0x2f66d8u: goto label_2f66d8;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f66e0u: goto label_2f66e0;
        case 0x2f66e4u: goto label_2f66e4;
        case 0x2f66e8u: goto label_2f66e8;
        case 0x2f66ecu: goto label_2f66ec;
        case 0x2f66f0u: goto label_2f66f0;
        case 0x2f66f4u: goto label_2f66f4;
        case 0x2f66f8u: goto label_2f66f8;
        case 0x2f66fcu: goto label_2f66fc;
        case 0x2f6700u: goto label_2f6700;
        case 0x2f6704u: goto label_2f6704;
        case 0x2f6708u: goto label_2f6708;
        case 0x2f670cu: goto label_2f670c;
        case 0x2f6710u: goto label_2f6710;
        case 0x2f6714u: goto label_2f6714;
        case 0x2f6718u: goto label_2f6718;
        case 0x2f671cu: goto label_2f671c;
        case 0x2f6720u: goto label_2f6720;
        case 0x2f6724u: goto label_2f6724;
        case 0x2f6728u: goto label_2f6728;
        case 0x2f672cu: goto label_2f672c;
        case 0x2f6730u: goto label_2f6730;
        case 0x2f6734u: goto label_2f6734;
        case 0x2f6738u: goto label_2f6738;
        case 0x2f673cu: goto label_2f673c;
        case 0x2f6740u: goto label_2f6740;
        case 0x2f6744u: goto label_2f6744;
        case 0x2f6748u: goto label_2f6748;
        case 0x2f674cu: goto label_2f674c;
        case 0x2f6750u: goto label_2f6750;
        case 0x2f6754u: goto label_2f6754;
        case 0x2f6758u: goto label_2f6758;
        case 0x2f675cu: goto label_2f675c;
        case 0x2f6760u: goto label_2f6760;
        case 0x2f6764u: goto label_2f6764;
        case 0x2f6768u: goto label_2f6768;
        case 0x2f676cu: goto label_2f676c;
        case 0x2f6770u: goto label_2f6770;
        case 0x2f6774u: goto label_2f6774;
        case 0x2f6778u: goto label_2f6778;
        case 0x2f677cu: goto label_2f677c;
        case 0x2f6780u: goto label_2f6780;
        case 0x2f6784u: goto label_2f6784;
        case 0x2f6788u: goto label_2f6788;
        case 0x2f678cu: goto label_2f678c;
        case 0x2f6790u: goto label_2f6790;
        case 0x2f6794u: goto label_2f6794;
        case 0x2f6798u: goto label_2f6798;
        case 0x2f679cu: goto label_2f679c;
        case 0x2f67a0u: goto label_2f67a0;
        case 0x2f67a4u: goto label_2f67a4;
        case 0x2f67a8u: goto label_2f67a8;
        case 0x2f67acu: goto label_2f67ac;
        case 0x2f67b0u: goto label_2f67b0;
        case 0x2f67b4u: goto label_2f67b4;
        case 0x2f67b8u: goto label_2f67b8;
        case 0x2f67bcu: goto label_2f67bc;
        case 0x2f67c0u: goto label_2f67c0;
        case 0x2f67c4u: goto label_2f67c4;
        case 0x2f67c8u: goto label_2f67c8;
        case 0x2f67ccu: goto label_2f67cc;
        case 0x2f67d0u: goto label_2f67d0;
        case 0x2f67d4u: goto label_2f67d4;
        case 0x2f67d8u: goto label_2f67d8;
        case 0x2f67dcu: goto label_2f67dc;
        case 0x2f67e0u: goto label_2f67e0;
        case 0x2f67e4u: goto label_2f67e4;
        case 0x2f67e8u: goto label_2f67e8;
        case 0x2f67ecu: goto label_2f67ec;
        case 0x2f67f0u: goto label_2f67f0;
        case 0x2f67f4u: goto label_2f67f4;
        case 0x2f67f8u: goto label_2f67f8;
        case 0x2f67fcu: goto label_2f67fc;
        case 0x2f6800u: goto label_2f6800;
        case 0x2f6804u: goto label_2f6804;
        case 0x2f6808u: goto label_2f6808;
        case 0x2f680cu: goto label_2f680c;
        case 0x2f6810u: goto label_2f6810;
        case 0x2f6814u: goto label_2f6814;
        case 0x2f6818u: goto label_2f6818;
        case 0x2f681cu: goto label_2f681c;
        case 0x2f6820u: goto label_2f6820;
        case 0x2f6824u: goto label_2f6824;
        case 0x2f6828u: goto label_2f6828;
        case 0x2f682cu: goto label_2f682c;
        case 0x2f6830u: goto label_2f6830;
        case 0x2f6834u: goto label_2f6834;
        case 0x2f6838u: goto label_2f6838;
        case 0x2f683cu: goto label_2f683c;
        case 0x2f6840u: goto label_2f6840;
        case 0x2f6844u: goto label_2f6844;
        case 0x2f6848u: goto label_2f6848;
        case 0x2f684cu: goto label_2f684c;
        case 0x2f6850u: goto label_2f6850;
        case 0x2f6854u: goto label_2f6854;
        case 0x2f6858u: goto label_2f6858;
        case 0x2f685cu: goto label_2f685c;
        case 0x2f6860u: goto label_2f6860;
        case 0x2f6864u: goto label_2f6864;
        case 0x2f6868u: goto label_2f6868;
        case 0x2f686cu: goto label_2f686c;
        case 0x2f6870u: goto label_2f6870;
        case 0x2f6874u: goto label_2f6874;
        case 0x2f6878u: goto label_2f6878;
        case 0x2f687cu: goto label_2f687c;
        case 0x2f6880u: goto label_2f6880;
        case 0x2f6884u: goto label_2f6884;
        case 0x2f6888u: goto label_2f6888;
        case 0x2f688cu: goto label_2f688c;
        case 0x2f6890u: goto label_2f6890;
        case 0x2f6894u: goto label_2f6894;
        case 0x2f6898u: goto label_2f6898;
        case 0x2f689cu: goto label_2f689c;
        case 0x2f68a0u: goto label_2f68a0;
        case 0x2f68a4u: goto label_2f68a4;
        case 0x2f68a8u: goto label_2f68a8;
        case 0x2f68acu: goto label_2f68ac;
        case 0x2f68b0u: goto label_2f68b0;
        case 0x2f68b4u: goto label_2f68b4;
        case 0x2f68b8u: goto label_2f68b8;
        case 0x2f68bcu: goto label_2f68bc;
        case 0x2f68c0u: goto label_2f68c0;
        case 0x2f68c4u: goto label_2f68c4;
        case 0x2f68c8u: goto label_2f68c8;
        case 0x2f68ccu: goto label_2f68cc;
        case 0x2f68d0u: goto label_2f68d0;
        case 0x2f68d4u: goto label_2f68d4;
        case 0x2f68d8u: goto label_2f68d8;
        case 0x2f68dcu: goto label_2f68dc;
        case 0x2f68e0u: goto label_2f68e0;
        case 0x2f68e4u: goto label_2f68e4;
        case 0x2f68e8u: goto label_2f68e8;
        case 0x2f68ecu: goto label_2f68ec;
        case 0x2f68f0u: goto label_2f68f0;
        case 0x2f68f4u: goto label_2f68f4;
        case 0x2f68f8u: goto label_2f68f8;
        case 0x2f68fcu: goto label_2f68fc;
        case 0x2f6900u: goto label_2f6900;
        case 0x2f6904u: goto label_2f6904;
        case 0x2f6908u: goto label_2f6908;
        case 0x2f690cu: goto label_2f690c;
        case 0x2f6910u: goto label_2f6910;
        case 0x2f6914u: goto label_2f6914;
        case 0x2f6918u: goto label_2f6918;
        case 0x2f691cu: goto label_2f691c;
        case 0x2f6920u: goto label_2f6920;
        case 0x2f6924u: goto label_2f6924;
        case 0x2f6928u: goto label_2f6928;
        case 0x2f692cu: goto label_2f692c;
        case 0x2f6930u: goto label_2f6930;
        case 0x2f6934u: goto label_2f6934;
        case 0x2f6938u: goto label_2f6938;
        case 0x2f693cu: goto label_2f693c;
        case 0x2f6940u: goto label_2f6940;
        case 0x2f6944u: goto label_2f6944;
        case 0x2f6948u: goto label_2f6948;
        case 0x2f694cu: goto label_2f694c;
        case 0x2f6950u: goto label_2f6950;
        case 0x2f6954u: goto label_2f6954;
        case 0x2f6958u: goto label_2f6958;
        case 0x2f695cu: goto label_2f695c;
        case 0x2f6960u: goto label_2f6960;
        case 0x2f6964u: goto label_2f6964;
        case 0x2f6968u: goto label_2f6968;
        case 0x2f696cu: goto label_2f696c;
        case 0x2f6970u: goto label_2f6970;
        case 0x2f6974u: goto label_2f6974;
        case 0x2f6978u: goto label_2f6978;
        case 0x2f697cu: goto label_2f697c;
        case 0x2f6980u: goto label_2f6980;
        case 0x2f6984u: goto label_2f6984;
        case 0x2f6988u: goto label_2f6988;
        case 0x2f698cu: goto label_2f698c;
        case 0x2f6990u: goto label_2f6990;
        case 0x2f6994u: goto label_2f6994;
        case 0x2f6998u: goto label_2f6998;
        case 0x2f699cu: goto label_2f699c;
        case 0x2f69a0u: goto label_2f69a0;
        case 0x2f69a4u: goto label_2f69a4;
        case 0x2f69a8u: goto label_2f69a8;
        case 0x2f69acu: goto label_2f69ac;
        default: break;
    }

    ctx->pc = 0x2f5a38u;

label_2f5a38:
    // 0x2f5a38: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2f5a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2f5a3c:
    // 0x2f5a3c: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x2f5a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_2f5a40:
    // 0x2f5a40: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x2f5a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_2f5a44:
    // 0x2f5a44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f5a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a48:
    // 0x2f5a48: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x2f5a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
label_2f5a4c:
    // 0x2f5a4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a50:
    // 0x2f5a50: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x2f5a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
label_2f5a54:
    // 0x2f5a54: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x2f5a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_2f5a58:
    // 0x2f5a58: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x2f5a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
label_2f5a5c:
    // 0x2f5a5c: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x2f5a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
label_2f5a60:
    // 0x2f5a60: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x2f5a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
label_2f5a64:
    // 0x2f5a64: 0xe7ba01a0  swc1        $f26, 0x1A0($sp)
    ctx->pc = 0x2f5a64u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2f5a68:
    // 0x2f5a68: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x2f5a68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2f5a6c:
    // 0x2f5a6c: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x2f5a6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2f5a70:
    // 0x2f5a70: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x2f5a70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2f5a74:
    // 0x2f5a74: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x2f5a74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2f5a78:
    // 0x2f5a78: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2f5a78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2f5a7c:
    // 0x2f5a7c: 0xc0899bc  jal         func_2266F0
label_2f5a80:
    if (ctx->pc == 0x2F5A80u) {
        ctx->pc = 0x2F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A7Cu;
        // 0x2f5a80: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A84u;
        goto label_2f5a84;
    }
    ctx->pc = 0x2F5A7Cu;
    SET_GPR_U32(ctx, 31, 0x2F5A84u);
    ctx->pc = 0x2F5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A7Cu;
    // 0x2f5a80: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F5A7Cu, 0x2F5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A84u;
label_2f5a84:
    // 0x2f5a84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f5a88:
    if (ctx->pc == 0x2F5A88u) {
        ctx->pc = 0x2F5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A84u;
        // 0x2f5a88: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A8Cu;
        goto label_2f5a8c;
    }
    ctx->pc = 0x2F5A84u;
    {
        const bool branch_taken_0x2f5a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A84u;
        // 0x2f5a88: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a84) {
            ctx->pc = 0x2F5AA8u;
            goto label_2f5aa8;
        }
    }
    ctx->pc = 0x2F5A8Cu;
label_2f5a8c:
    // 0x2f5a8c: 0xc0899bc  jal         func_2266F0
label_2f5a90:
    if (ctx->pc == 0x2F5A90u) {
        ctx->pc = 0x2F5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A8Cu;
        // 0x2f5a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A94u;
        goto label_2f5a94;
    }
    ctx->pc = 0x2F5A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F5A94u);
    ctx->pc = 0x2F5A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A8Cu;
    // 0x2f5a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F5A8Cu, 0x2F5A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A94u;
label_2f5a94:
    // 0x2f5a94: 0xc097f26  jal         func_25FC98
label_2f5a98:
    if (ctx->pc == 0x2F5A98u) {
        ctx->pc = 0x2F5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A94u;
        // 0x2f5a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A9Cu;
        goto label_2f5a9c;
    }
    ctx->pc = 0x2F5A94u;
    SET_GPR_U32(ctx, 31, 0x2F5A9Cu);
    ctx->pc = 0x2F5A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A94u;
    // 0x2f5a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F5A94u, 0x2F5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A9Cu;
label_2f5a9c:
    // 0x2f5a9c: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x2f5a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
label_2f5aa0:
    // 0x2f5aa0: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2f5aa0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f5aa4:
    // 0x2f5aa4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f5aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5aa8:
    // 0x2f5aa8: 0xc08da92  jal         func_236A48
label_2f5aac:
    if (ctx->pc == 0x2F5AACu) {
        ctx->pc = 0x2F5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AA8u;
        // 0x2f5aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AB0u;
        goto label_2f5ab0;
    }
    ctx->pc = 0x2F5AA8u;
    SET_GPR_U32(ctx, 31, 0x2F5AB0u);
    ctx->pc = 0x2F5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5AA8u;
    // 0x2f5aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F5AA8u, 0x2F5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5AB0u;
label_2f5ab0:
    // 0x2f5ab0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f5ab4:
    if (ctx->pc == 0x2F5AB4u) {
        ctx->pc = 0x2F5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AB0u;
        // 0x2f5ab4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AB8u;
        goto label_2f5ab8;
    }
    ctx->pc = 0x2F5AB0u;
    {
        const bool branch_taken_0x2f5ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ab0) {
            ctx->pc = 0x2F5AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5AB0u;
            // 0x2f5ab4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5AC4u;
            goto label_2f5ac4;
        }
    }
    ctx->pc = 0x2F5AB8u;
label_2f5ab8:
    // 0x2f5ab8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2f5abc:
    if (ctx->pc == 0x2F5ABCu) {
        ctx->pc = 0x2F5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AB8u;
        // 0x2f5abc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AC0u;
        goto label_2f5ac0;
    }
    ctx->pc = 0x2F5AB8u;
    {
        const bool branch_taken_0x2f5ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AB8u;
        // 0x2f5abc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ab8) {
            ctx->pc = 0x2F5AC8u;
            goto label_2f5ac8;
        }
    }
    ctx->pc = 0x2F5AC0u;
label_2f5ac0:
    // 0x2f5ac0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2f5ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5ac4:
    // 0x2f5ac4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f5ac4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ac8:
    // 0x2f5ac8: 0xc08dab6  jal         func_236AD8
label_2f5acc:
    if (ctx->pc == 0x2F5ACCu) {
        ctx->pc = 0x2F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AC8u;
        // 0x2f5acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AD0u;
        goto label_2f5ad0;
    }
    ctx->pc = 0x2F5AC8u;
    SET_GPR_U32(ctx, 31, 0x2F5AD0u);
    ctx->pc = 0x2F5ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5AC8u;
    // 0x2f5acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F5AC8u, 0x2F5AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5AD0u;
label_2f5ad0:
    // 0x2f5ad0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f5ad4:
    if (ctx->pc == 0x2F5AD4u) {
        ctx->pc = 0x2F5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AD0u;
        // 0x2f5ad4: 0x3a160001  xori        $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AD8u;
        goto label_2f5ad8;
    }
    ctx->pc = 0x2F5AD0u;
    {
        const bool branch_taken_0x2f5ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ad0) {
            ctx->pc = 0x2F5AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5AD0u;
            // 0x2f5ad4: 0x3a160001  xori        $s6, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5AD8u;
            goto label_2f5ad8;
        }
    }
    ctx->pc = 0x2F5AD8u;
label_2f5ad8:
    // 0x2f5ad8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f5adc:
    // 0x2f5adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ae0:
    // 0x2f5ae0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ae4:
    // 0x2f5ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ae8:
    // 0x2f5ae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5aec:
    // 0x2f5aec: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2f5aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5af0:
    // 0x2f5af0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f5af4:
    // 0x2f5af4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2f5af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f5af8:
    // 0x2f5af8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f5af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5afc:
    // 0x2f5afc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f5afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f5b00:
    // 0x2f5b00: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f5b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5b04:
    // 0x2f5b04: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f5b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f5b08:
    // 0x2f5b08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5b0c:
    // 0x2f5b0c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f5b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f5b10:
    // 0x2f5b10: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f5b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5b14:
    // 0x2f5b14: 0xc0bff58  jal         func_2FFD60
label_2f5b18:
    if (ctx->pc == 0x2F5B18u) {
        ctx->pc = 0x2F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B14u;
        // 0x2f5b18: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B1Cu;
        goto label_2f5b1c;
    }
    ctx->pc = 0x2F5B14u;
    SET_GPR_U32(ctx, 31, 0x2F5B1Cu);
    ctx->pc = 0x2F5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B14u;
    // 0x2f5b18: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD60u, 0x2F5B14u, 0x2F5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B1Cu;
label_2f5b1c:
    // 0x2f5b1c: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5b20:
    // 0x2f5b20: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2f5b24:
    if (ctx->pc == 0x2F5B24u) {
        ctx->pc = 0x2F5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B20u;
        // 0x2f5b24: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B28u;
        goto label_2f5b28;
    }
    ctx->pc = 0x2F5B20u;
    {
        const bool branch_taken_0x2f5b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b20) {
            ctx->pc = 0x2F5B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B20u;
            // 0x2f5b24: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B84u;
            goto label_2f5b84;
        }
    }
    ctx->pc = 0x2F5B28u;
label_2f5b28:
    // 0x2f5b28: 0x8e421220  lw          $v0, 0x1220($s2)
    ctx->pc = 0x2f5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4640)));
label_2f5b2c:
    // 0x2f5b2c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2f5b30:
    if (ctx->pc == 0x2F5B30u) {
        ctx->pc = 0x2F5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B2Cu;
        // 0x2f5b30: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B34u;
        goto label_2f5b34;
    }
    ctx->pc = 0x2F5B2Cu;
    {
        const bool branch_taken_0x2f5b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b2c) {
            ctx->pc = 0x2F5B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B2Cu;
            // 0x2f5b30: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B84u;
            goto label_2f5b84;
        }
    }
    ctx->pc = 0x2F5B34u;
label_2f5b34:
    // 0x2f5b34: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2f5b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5b38:
    // 0x2f5b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5b3c:
    // 0x2f5b3c: 0x0  nop
    ctx->pc = 0x2f5b3cu;
    // NOP
label_2f5b40:
    // 0x2f5b40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f5b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5b44:
    // 0x2f5b44: 0x0  nop
    ctx->pc = 0x2f5b44u;
    // NOP
label_2f5b48:
    // 0x2f5b48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f5b4c:
    if (ctx->pc == 0x2F5B4Cu) {
        ctx->pc = 0x2F5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B48u;
        // 0x2f5b4c: 0xae401220  sw          $zero, 0x1220($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B50u;
        goto label_2f5b50;
    }
    ctx->pc = 0x2F5B48u;
    {
        const bool branch_taken_0x2f5b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5b48) {
            ctx->pc = 0x2F5B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B48u;
            // 0x2f5b4c: 0xae401220  sw          $zero, 0x1220($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4640), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B50u;
            goto label_2f5b50;
        }
    }
    ctx->pc = 0x2F5B50u;
label_2f5b50:
    // 0x2f5b50: 0x8e451220  lw          $a1, 0x1220($s2)
    ctx->pc = 0x2f5b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4640)));
label_2f5b54:
    // 0x2f5b54: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2f5b58:
    if (ctx->pc == 0x2F5B58u) {
        ctx->pc = 0x2F5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B54u;
        // 0x2f5b58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B5Cu;
        goto label_2f5b5c;
    }
    ctx->pc = 0x2F5B54u;
    {
        const bool branch_taken_0x2f5b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B54u;
        // 0x2f5b58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b54) {
            ctx->pc = 0x2F5B80u;
            goto label_2f5b80;
        }
    }
    ctx->pc = 0x2F5B5Cu;
label_2f5b5c:
    // 0x2f5b5c: 0xc64c1240  lwc1        $f12, 0x1240($s2)
    ctx->pc = 0x2f5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f5b60:
    // 0x2f5b60: 0xc44db7a8  lwc1        $f13, -0x4858($v0)
    ctx->pc = 0x2f5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f5b64:
    // 0x2f5b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b68:
    // 0x2f5b68: 0xc0bcea8  jal         func_2F3AA0
label_2f5b6c:
    if (ctx->pc == 0x2F5B6Cu) {
        ctx->pc = 0x2F5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B68u;
        // 0x2f5b6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B70u;
        goto label_2f5b70;
    }
    ctx->pc = 0x2F5B68u;
    SET_GPR_U32(ctx, 31, 0x2F5B70u);
    ctx->pc = 0x2F5B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B68u;
    // 0x2f5b6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3AA0u, 0x2F5B68u, 0x2F5B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B70u;
label_2f5b70:
    // 0x2f5b70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f5b74:
    if (ctx->pc == 0x2F5B74u) {
        ctx->pc = 0x2F5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B70u;
        // 0x2f5b74: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B78u;
        goto label_2f5b78;
    }
    ctx->pc = 0x2F5B70u;
    {
        const bool branch_taken_0x2f5b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b70) {
            ctx->pc = 0x2F5B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B70u;
            // 0x2f5b74: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B84u;
            goto label_2f5b84;
        }
    }
    ctx->pc = 0x2F5B78u;
label_2f5b78:
    // 0x2f5b78: 0x8e421220  lw          $v0, 0x1220($s2)
    ctx->pc = 0x2f5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4640)));
label_2f5b7c:
    // 0x2f5b7c: 0xae42121c  sw          $v0, 0x121C($s2)
    ctx->pc = 0x2f5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4636), GPR_U32(ctx, 2));
label_2f5b80:
    // 0x2f5b80: 0x9242047d  lbu         $v0, 0x47D($s2)
    ctx->pc = 0x2f5b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
label_2f5b84:
    // 0x2f5b84: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_2f5b88:
    if (ctx->pc == 0x2F5B88u) {
        ctx->pc = 0x2F5B8Cu;
        goto label_2f5b8c;
    }
    ctx->pc = 0x2F5B84u;
    {
        const bool branch_taken_0x2f5b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b84) {
            ctx->pc = 0x2F5E24u;
            goto label_2f5e24;
        }
    }
    ctx->pc = 0x2F5B8Cu;
label_2f5b8c:
    // 0x2f5b8c: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5b90:
    // 0x2f5b90: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_2f5b94:
    if (ctx->pc == 0x2F5B94u) {
        ctx->pc = 0x2F5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B90u;
        // 0x2f5b94: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B98u;
        goto label_2f5b98;
    }
    ctx->pc = 0x2F5B90u;
    {
        const bool branch_taken_0x2f5b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B90u;
        // 0x2f5b94: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b90) {
            ctx->pc = 0x2F5C10u;
            goto label_2f5c10;
        }
    }
    ctx->pc = 0x2F5B98u;
label_2f5b98:
    // 0x2f5b98: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x2f5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_2f5b9c:
    // 0x2f5b9c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2f5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2f5ba0:
    // 0x2f5ba0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2f5ba4:
    if (ctx->pc == 0x2F5BA4u) {
        ctx->pc = 0x2F5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BA0u;
        // 0x2f5ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BA8u;
        goto label_2f5ba8;
    }
    ctx->pc = 0x2F5BA0u;
    {
        const bool branch_taken_0x2f5ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BA0u;
        // 0x2f5ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ba0) {
            ctx->pc = 0x2F5BBCu;
            goto label_2f5bbc;
        }
    }
    ctx->pc = 0x2F5BA8u;
label_2f5ba8:
    // 0x2f5ba8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2f5bac:
    // 0x2f5bac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f5bb0:
    if (ctx->pc == 0x2F5BB0u) {
        ctx->pc = 0x2F5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BACu;
        // 0x2f5bb0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BB4u;
        goto label_2f5bb4;
    }
    ctx->pc = 0x2F5BACu;
    {
        const bool branch_taken_0x2f5bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BACu;
        // 0x2f5bb0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bac) {
            ctx->pc = 0x2F5BBCu;
            goto label_2f5bbc;
        }
    }
    ctx->pc = 0x2F5BB4u;
label_2f5bb4:
    // 0x2f5bb4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f5bb8:
    if (ctx->pc == 0x2F5BB8u) {
        ctx->pc = 0x2F5BBCu;
        goto label_2f5bbc;
    }
    ctx->pc = 0x2F5BB4u;
    {
        const bool branch_taken_0x2f5bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5bb4) {
            ctx->pc = 0x2F5BC0u;
            goto label_2f5bc0;
        }
    }
    ctx->pc = 0x2F5BBCu;
label_2f5bbc:
    // 0x2f5bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5bc0:
    // 0x2f5bc0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_2f5bc4:
    if (ctx->pc == 0x2F5BC4u) {
        ctx->pc = 0x2F5BC8u;
        goto label_2f5bc8;
    }
    ctx->pc = 0x2F5BC0u;
    {
        const bool branch_taken_0x2f5bc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bc0) {
            ctx->pc = 0x2F5BF4u;
            goto label_2f5bf4;
        }
    }
    ctx->pc = 0x2F5BC8u;
label_2f5bc8:
    // 0x2f5bc8: 0xc06b640  jal         func_1AD900
label_2f5bcc:
    if (ctx->pc == 0x2F5BCCu) {
        ctx->pc = 0x2F5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BC8u;
        // 0x2f5bcc: 0x8c840334  lw          $a0, 0x334($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BD0u;
        goto label_2f5bd0;
    }
    ctx->pc = 0x2F5BC8u;
    SET_GPR_U32(ctx, 31, 0x2F5BD0u);
    ctx->pc = 0x2F5BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BC8u;
    // 0x2f5bcc: 0x8c840334  lw          $a0, 0x334($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x2F5BC8u, 0x2F5BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BD0u;
label_2f5bd0:
    // 0x2f5bd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f5bd4:
    if (ctx->pc == 0x2F5BD4u) {
        ctx->pc = 0x2F5BD8u;
        goto label_2f5bd8;
    }
    ctx->pc = 0x2F5BD0u;
    {
        const bool branch_taken_0x2f5bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bd0) {
            ctx->pc = 0x2F5BF4u;
            goto label_2f5bf4;
        }
    }
    ctx->pc = 0x2F5BD8u;
label_2f5bd8:
    // 0x2f5bd8: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5bdc:
    // 0x2f5bdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f5bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5be0:
    // 0x2f5be0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2f5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5be4:
    // 0x2f5be4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f5be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5be8:
    // 0x2f5be8: 0x0  nop
    ctx->pc = 0x2f5be8u;
    // NOP
label_2f5bec:
    // 0x2f5bec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2f5bf0:
    if (ctx->pc == 0x2F5BF0u) {
        ctx->pc = 0x2F5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BECu;
        // 0x2f5bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BF4u;
        goto label_2f5bf4;
    }
    ctx->pc = 0x2F5BECu;
    {
        const bool branch_taken_0x2f5bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BECu;
        // 0x2f5bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bec) {
            ctx->pc = 0x2F5C10u;
            goto label_2f5c10;
        }
    }
    ctx->pc = 0x2F5BF4u;
label_2f5bf4:
    // 0x2f5bf4: 0xc0bd62c  jal         func_2F58B0
label_2f5bf8:
    if (ctx->pc == 0x2F5BF8u) {
        ctx->pc = 0x2F5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BF4u;
        // 0x2f5bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BFCu;
        goto label_2f5bfc;
    }
    ctx->pc = 0x2F5BF4u;
    SET_GPR_U32(ctx, 31, 0x2F5BFCu);
    ctx->pc = 0x2F5BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BF4u;
    // 0x2f5bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F5BF4u, 0x2F5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BFCu;
label_2f5bfc:
    // 0x2f5bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c00:
    // 0x2f5c00: 0xc0bd0e2  jal         func_2F4388
label_2f5c04:
    if (ctx->pc == 0x2F5C04u) {
        ctx->pc = 0x2F5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C00u;
        // 0x2f5c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C08u;
        goto label_2f5c08;
    }
    ctx->pc = 0x2F5C00u;
    SET_GPR_U32(ctx, 31, 0x2F5C08u);
    ctx->pc = 0x2F5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C00u;
    // 0x2f5c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4388u, 0x2F5C00u, 0x2F5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C08u;
label_2f5c08:
    // 0x2f5c08: 0x10000359  b           . + 4 + (0x359 << 2)
label_2f5c0c:
    if (ctx->pc == 0x2F5C0Cu) {
        ctx->pc = 0x2F5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C08u;
        // 0x2f5c0c: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C10u;
        goto label_2f5c10;
    }
    ctx->pc = 0x2F5C08u;
    {
        const bool branch_taken_0x2f5c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C08u;
        // 0x2f5c0c: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c08) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F5C10u;
label_2f5c10:
    // 0x2f5c10: 0x8e431208  lw          $v1, 0x1208($s2)
    ctx->pc = 0x2f5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
label_2f5c14:
    // 0x2f5c14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f5c18:
    // 0x2f5c18: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2f5c1c:
    if (ctx->pc == 0x2F5C1Cu) {
        ctx->pc = 0x2F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C18u;
        // 0x2f5c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C20u;
        goto label_2f5c20;
    }
    ctx->pc = 0x2F5C18u;
    {
        const bool branch_taken_0x2f5c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C18u;
        // 0x2f5c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c18) {
            ctx->pc = 0x2F5C34u;
            goto label_2f5c34;
        }
    }
    ctx->pc = 0x2F5C20u;
label_2f5c20:
    // 0x2f5c20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2f5c24:
    if (ctx->pc == 0x2F5C24u) {
        ctx->pc = 0x2F5C28u;
        goto label_2f5c28;
    }
    ctx->pc = 0x2F5C20u;
    {
        const bool branch_taken_0x2f5c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c20) {
            ctx->pc = 0x2F5C34u;
            goto label_2f5c34;
        }
    }
    ctx->pc = 0x2F5C28u;
label_2f5c28:
    // 0x2f5c28: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x2f5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_2f5c2c:
    // 0x2f5c2c: 0x1052007d  beq         $v0, $s2, . + 4 + (0x7D << 2)
label_2f5c30:
    if (ctx->pc == 0x2F5C30u) {
        ctx->pc = 0x2F5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C2Cu;
        // 0x2f5c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C34u;
        goto label_2f5c34;
    }
    ctx->pc = 0x2F5C2Cu;
    {
        const bool branch_taken_0x2f5c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C2Cu;
        // 0x2f5c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c2c) {
            ctx->pc = 0x2F5E24u;
            goto label_2f5e24;
        }
    }
    ctx->pc = 0x2F5C34u;
label_2f5c34:
    // 0x2f5c34: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_2f5c38:
    if (ctx->pc == 0x2F5C38u) {
        ctx->pc = 0x2F5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C34u;
        // 0x2f5c38: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C3Cu;
        goto label_2f5c3c;
    }
    ctx->pc = 0x2F5C34u;
    {
        const bool branch_taken_0x2f5c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5c34) {
            ctx->pc = 0x2F5C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C34u;
            // 0x2f5c38: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CC8u;
            goto label_2f5cc8;
        }
    }
    ctx->pc = 0x2F5C3Cu;
label_2f5c3c:
    // 0x2f5c3c: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x2f5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_2f5c40:
    // 0x2f5c40: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f5c44:
    // 0x2f5c44: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2f5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2f5c48:
    // 0x2f5c48: 0x5064001f  beql        $v1, $a0, . + 4 + (0x1F << 2)
label_2f5c4c:
    if (ctx->pc == 0x2F5C4Cu) {
        ctx->pc = 0x2F5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C48u;
        // 0x2f5c4c: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C50u;
        goto label_2f5c50;
    }
    ctx->pc = 0x2F5C48u;
    {
        const bool branch_taken_0x2f5c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f5c48) {
            ctx->pc = 0x2F5C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C48u;
            // 0x2f5c4c: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CC8u;
            goto label_2f5cc8;
        }
    }
    ctx->pc = 0x2F5C50u;
label_2f5c50:
    // 0x2f5c50: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x2f5c50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f5c54:
    // 0x2f5c54: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f5c58:
    // 0x2f5c58: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2f5c5c:
    // 0x2f5c5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f5c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f5c60:
    // 0x2f5c60: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2f5c64:
    if (ctx->pc == 0x2F5C64u) {
        ctx->pc = 0x2F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C60u;
        // 0x2f5c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C68u;
        goto label_2f5c68;
    }
    ctx->pc = 0x2F5C60u;
    {
        const bool branch_taken_0x2f5c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C60u;
        // 0x2f5c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c60) {
            ctx->pc = 0x2F5C9Cu;
            goto label_2f5c9c;
        }
    }
    ctx->pc = 0x2F5C68u;
label_2f5c68:
    // 0x2f5c68: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2f5c6c:
    // 0x2f5c6c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2f5c70:
    if (ctx->pc == 0x2F5C70u) {
        ctx->pc = 0x2F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C6Cu;
        // 0x2f5c70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C74u;
        goto label_2f5c74;
    }
    ctx->pc = 0x2F5C6Cu;
    {
        const bool branch_taken_0x2f5c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5c6c) {
            ctx->pc = 0x2F5C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C6Cu;
            // 0x2f5c70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5C74u;
label_2f5c74:
    // 0x2f5c74: 0xc0924a8  jal         func_2492A0
label_2f5c78:
    if (ctx->pc == 0x2F5C78u) {
        ctx->pc = 0x2F5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C74u;
        // 0x2f5c78: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C7Cu;
        goto label_2f5c7c;
    }
    ctx->pc = 0x2F5C74u;
    SET_GPR_U32(ctx, 31, 0x2F5C7Cu);
    ctx->pc = 0x2F5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C74u;
    // 0x2f5c78: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F5C74u, 0x2F5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C7Cu;
label_2f5c7c:
    // 0x2f5c7c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2f5c80:
    if (ctx->pc == 0x2F5C80u) {
        ctx->pc = 0x2F5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C7Cu;
        // 0x2f5c80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C84u;
        goto label_2f5c84;
    }
    ctx->pc = 0x2F5C7Cu;
    {
        const bool branch_taken_0x2f5c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c7c) {
            ctx->pc = 0x2F5C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C7Cu;
            // 0x2f5c80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5C84u;
label_2f5c84:
    // 0x2f5c84: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f5c88:
    // 0x2f5c88: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2f5c8c:
    // 0x2f5c8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f5c90:
    if (ctx->pc == 0x2F5C90u) {
        ctx->pc = 0x2F5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C8Cu;
        // 0x2f5c90: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C94u;
        goto label_2f5c94;
    }
    ctx->pc = 0x2F5C8Cu;
    {
        const bool branch_taken_0x2f5c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C8Cu;
        // 0x2f5c90: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c8c) {
            ctx->pc = 0x2F5C9Cu;
            goto label_2f5c9c;
        }
    }
    ctx->pc = 0x2F5C94u;
label_2f5c94:
    // 0x2f5c94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f5c98:
    if (ctx->pc == 0x2F5C98u) {
        ctx->pc = 0x2F5C9Cu;
        goto label_2f5c9c;
    }
    ctx->pc = 0x2F5C94u;
    {
        const bool branch_taken_0x2f5c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5c94) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5C9Cu;
label_2f5c9c:
    // 0x2f5c9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f5c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5ca0:
    // 0x2f5ca0: 0x16200060  bnez        $s1, . + 4 + (0x60 << 2)
label_2f5ca4:
    if (ctx->pc == 0x2F5CA4u) {
        ctx->pc = 0x2F5CA8u;
        goto label_2f5ca8;
    }
    ctx->pc = 0x2F5CA0u;
    {
        const bool branch_taken_0x2f5ca0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ca0) {
            ctx->pc = 0x2F5E24u;
            goto label_2f5e24;
        }
    }
    ctx->pc = 0x2F5CA8u;
label_2f5ca8:
    // 0x2f5ca8: 0xc6410524  lwc1        $f1, 0x524($s2)
    ctx->pc = 0x2f5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5cac:
    // 0x2f5cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5cb0:
    // 0x2f5cb0: 0x0  nop
    ctx->pc = 0x2f5cb0u;
    // NOP
label_2f5cb4:
    // 0x2f5cb4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f5cb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5cb8:
    // 0x2f5cb8: 0x0  nop
    ctx->pc = 0x2f5cb8u;
    // NOP
label_2f5cbc:
    // 0x2f5cbc: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_2f5cc0:
    if (ctx->pc == 0x2F5CC0u) {
        ctx->pc = 0x2F5CC4u;
        goto label_2f5cc4;
    }
    ctx->pc = 0x2F5CBCu;
    {
        const bool branch_taken_0x2f5cbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5cbc) {
            ctx->pc = 0x2F5E24u;
            goto label_2f5e24;
        }
    }
    ctx->pc = 0x2F5CC4u;
label_2f5cc4:
    // 0x2f5cc4: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x2f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_2f5cc8:
    // 0x2f5cc8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2f5cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2f5ccc:
    // 0x2f5ccc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2f5cd0:
    if (ctx->pc == 0x2F5CD0u) {
        ctx->pc = 0x2F5CD4u;
        goto label_2f5cd4;
    }
    ctx->pc = 0x2F5CCCu;
    {
        const bool branch_taken_0x2f5ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ccc) {
            ctx->pc = 0x2F5D24u;
            goto label_2f5d24;
        }
    }
    ctx->pc = 0x2F5CD4u;
label_2f5cd4:
    // 0x2f5cd4: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5cd8:
    // 0x2f5cd8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_2f5cdc:
    if (ctx->pc == 0x2F5CDCu) {
        ctx->pc = 0x2F5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CD8u;
        // 0x2f5cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CE0u;
        goto label_2f5ce0;
    }
    ctx->pc = 0x2F5CD8u;
    {
        const bool branch_taken_0x2f5cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CD8u;
        // 0x2f5cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cd8) {
            ctx->pc = 0x2F5D1Cu;
            goto label_2f5d1c;
        }
    }
    ctx->pc = 0x2F5CE0u;
label_2f5ce0:
    // 0x2f5ce0: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x2f5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f5ce4:
    // 0x2f5ce4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2f5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_2f5ce8:
    // 0x2f5ce8: 0x60f809  jalr        $v1
label_2f5cec:
    if (ctx->pc == 0x2F5CECu) {
        ctx->pc = 0x2F5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CE8u;
        // 0x2f5cec: 0x26501230  addiu       $s0, $s2, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CF0u;
        goto label_2f5cf0;
    }
    ctx->pc = 0x2F5CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F5CF0u);
        ctx->pc = 0x2F5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CE8u;
        // 0x2f5cec: 0x26501230  addiu       $s0, $s2, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5CE8u, 0x2F5CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5CF0u;
label_2f5cf0:
    // 0x2f5cf0: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f5cf4:
    // 0x2f5cf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f5cf8:
    // 0x2f5cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f5cfc:
    if (ctx->pc == 0x2F5CFCu) {
        ctx->pc = 0x2F5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CF8u;
        // 0x2f5cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D00u;
        goto label_2f5d00;
    }
    ctx->pc = 0x2F5CF8u;
    {
        const bool branch_taken_0x2f5cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CF8u;
        // 0x2f5cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cf8) {
            ctx->pc = 0x2F5D0Cu;
            goto label_2f5d0c;
        }
    }
    ctx->pc = 0x2F5D00u;
label_2f5d00:
    // 0x2f5d00: 0xc08dab6  jal         func_236AD8
label_2f5d04:
    if (ctx->pc == 0x2F5D04u) {
        ctx->pc = 0x2F5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D00u;
        // 0x2f5d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D08u;
        goto label_2f5d08;
    }
    ctx->pc = 0x2F5D00u;
    SET_GPR_U32(ctx, 31, 0x2F5D08u);
    ctx->pc = 0x2F5D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D00u;
    // 0x2f5d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F5D00u, 0x2F5D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D08u;
label_2f5d08:
    // 0x2f5d08: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2f5d08u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f5d0c:
    // 0x2f5d0c: 0x8e45121c  lw          $a1, 0x121C($s2)
    ctx->pc = 0x2f5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5d10:
    // 0x2f5d10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f5d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d14:
    // 0x2f5d14: 0xc0bcd58  jal         func_2F3560
label_2f5d18:
    if (ctx->pc == 0x2F5D18u) {
        ctx->pc = 0x2F5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D14u;
        // 0x2f5d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D1Cu;
        goto label_2f5d1c;
    }
    ctx->pc = 0x2F5D14u;
    SET_GPR_U32(ctx, 31, 0x2F5D1Cu);
    ctx->pc = 0x2F5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D14u;
    // 0x2f5d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F5D14u, 0x2F5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D1Cu;
label_2f5d1c:
    // 0x2f5d1c: 0xc0bd62c  jal         func_2F58B0
label_2f5d20:
    if (ctx->pc == 0x2F5D20u) {
        ctx->pc = 0x2F5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D1Cu;
        // 0x2f5d20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D24u;
        goto label_2f5d24;
    }
    ctx->pc = 0x2F5D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F5D24u);
    ctx->pc = 0x2F5D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D1Cu;
    // 0x2f5d20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F5D1Cu, 0x2F5D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D24u;
label_2f5d24:
    // 0x2f5d24: 0xc0f6a96  jal         func_3DAA58
label_2f5d28:
    if (ctx->pc == 0x2F5D28u) {
        ctx->pc = 0x2F5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D24u;
        // 0x2f5d28: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D2Cu;
        goto label_2f5d2c;
    }
    ctx->pc = 0x2F5D24u;
    SET_GPR_U32(ctx, 31, 0x2F5D2Cu);
    ctx->pc = 0x2F5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D24u;
    // 0x2f5d28: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5D24u, 0x2F5D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D2Cu;
label_2f5d2c:
    // 0x2f5d2c: 0xc0f6a96  jal         func_3DAA58
label_2f5d30:
    if (ctx->pc == 0x2F5D30u) {
        ctx->pc = 0x2F5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D2Cu;
        // 0x2f5d30: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D34u;
        goto label_2f5d34;
    }
    ctx->pc = 0x2F5D2Cu;
    SET_GPR_U32(ctx, 31, 0x2F5D34u);
    ctx->pc = 0x2F5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D2Cu;
    // 0x2f5d30: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5D2Cu, 0x2F5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D34u;
label_2f5d34:
    // 0x2f5d34: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5d38:
    // 0x2f5d38: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2f5d3c:
    if (ctx->pc == 0x2F5D3Cu) {
        ctx->pc = 0x2F5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D38u;
        // 0x2f5d3c: 0x26421230  addiu       $v0, $s2, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D40u;
        goto label_2f5d40;
    }
    ctx->pc = 0x2F5D38u;
    {
        const bool branch_taken_0x2f5d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D38u;
        // 0x2f5d3c: 0x26421230  addiu       $v0, $s2, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d38) {
            ctx->pc = 0x2F5D88u;
            goto label_2f5d88;
        }
    }
    ctx->pc = 0x2F5D40u;
label_2f5d40:
    // 0x2f5d40: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x2f5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f5d44:
    // 0x2f5d44: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2f5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_2f5d48:
    // 0x2f5d48: 0x60f809  jalr        $v1
label_2f5d4c:
    if (ctx->pc == 0x2F5D4Cu) {
        ctx->pc = 0x2F5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D48u;
        // 0x2f5d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D50u;
        goto label_2f5d50;
    }
    ctx->pc = 0x2F5D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F5D50u);
        ctx->pc = 0x2F5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D48u;
        // 0x2f5d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D48u, 0x2F5D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5D50u;
label_2f5d50:
    // 0x2f5d50: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f5d54:
    // 0x2f5d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d58:
    // 0x2f5d58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f5d5c:
    // 0x2f5d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f5d60:
    if (ctx->pc == 0x2F5D60u) {
        ctx->pc = 0x2F5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D5Cu;
        // 0x2f5d60: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D64u;
        goto label_2f5d64;
    }
    ctx->pc = 0x2F5D5Cu;
    {
        const bool branch_taken_0x2f5d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D5Cu;
        // 0x2f5d60: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d5c) {
            ctx->pc = 0x2F5D70u;
            goto label_2f5d70;
        }
    }
    ctx->pc = 0x2F5D64u;
label_2f5d64:
    // 0x2f5d64: 0xc08dab6  jal         func_236AD8
label_2f5d68:
    if (ctx->pc == 0x2F5D68u) {
        ctx->pc = 0x2F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D64u;
        // 0x2f5d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D6Cu;
        goto label_2f5d6c;
    }
    ctx->pc = 0x2F5D64u;
    SET_GPR_U32(ctx, 31, 0x2F5D6Cu);
    ctx->pc = 0x2F5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D64u;
    // 0x2f5d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F5D64u, 0x2F5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D6Cu;
label_2f5d6c:
    // 0x2f5d6c: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2f5d6cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f5d70:
    // 0x2f5d70: 0x8e45121c  lw          $a1, 0x121C($s2)
    ctx->pc = 0x2f5d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5d74:
    // 0x2f5d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d78:
    // 0x2f5d78: 0xc0bcd58  jal         func_2F3560
label_2f5d7c:
    if (ctx->pc == 0x2F5D7Cu) {
        ctx->pc = 0x2F5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D78u;
        // 0x2f5d7c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D80u;
        goto label_2f5d80;
    }
    ctx->pc = 0x2F5D78u;
    SET_GPR_U32(ctx, 31, 0x2F5D80u);
    ctx->pc = 0x2F5D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D78u;
    // 0x2f5d7c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F5D78u, 0x2F5D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D80u;
label_2f5d80:
    // 0x2f5d80: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f5d84:
    if (ctx->pc == 0x2F5D84u) {
        ctx->pc = 0x2F5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D80u;
        // 0x2f5d84: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D88u;
        goto label_2f5d88;
    }
    ctx->pc = 0x2F5D80u;
    {
        const bool branch_taken_0x2f5d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D80u;
        // 0x2f5d84: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d80) {
            ctx->pc = 0x2F5D98u;
            goto label_2f5d98;
        }
    }
    ctx->pc = 0x2F5D88u;
label_2f5d88:
    // 0x2f5d88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f5d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5d8c:
    // 0x2f5d8c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5d90:
    // 0x2f5d90: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2f5d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f5d94:
    // 0x2f5d94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2f5d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f5d98:
    // 0x2f5d98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d9c:
    // 0x2f5d9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5da0:
    // 0x2f5da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f5da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5da4:
    // 0x2f5da4: 0xc0bcd58  jal         func_2F3560
label_2f5da8:
    if (ctx->pc == 0x2F5DA8u) {
        ctx->pc = 0x2F5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DA4u;
        // 0x2f5da8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DACu;
        goto label_2f5dac;
    }
    ctx->pc = 0x2F5DA4u;
    SET_GPR_U32(ctx, 31, 0x2F5DACu);
    ctx->pc = 0x2F5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DA4u;
    // 0x2f5da8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F5DA4u, 0x2F5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DACu;
label_2f5dac:
    // 0x2f5dac: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f5db0:
    // 0x2f5db0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f5db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f5db4:
    // 0x2f5db4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2f5db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f5db8:
    // 0x2f5db8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f5db8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5dbc:
    // 0x2f5dbc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5dc0:
    // 0x2f5dc0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2f5dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5dc4:
    // 0x2f5dc4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f5dc8:
    // 0x2f5dc8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2f5dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5dcc:
    // 0x2f5dcc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2f5dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5dd0:
    // 0x2f5dd0: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x2f5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f5dd4:
    // 0x2f5dd4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2f5dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2f5dd8:
    // 0x2f5dd8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f5dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2f5ddc:
    // 0x2f5ddc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2f5ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2f5de0:
    // 0x2f5de0: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x2f5de0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2f5de4:
    // 0x2f5de4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5de8:
    // 0x2f5de8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5dec:
    // 0x2f5dec: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2f5decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f5df0:
    // 0x2f5df0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f5df0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f5df4:
    // 0x2f5df4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f5df4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f5df8:
    // 0x2f5df8: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x2f5df8u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f5dfc:
    // 0x2f5dfc: 0x46060184  c1          0x60184
    ctx->pc = 0x2f5dfcu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
label_2f5e00:
    // 0x2f5e00: 0xc6401240  lwc1        $f0, 0x1240($s2)
    ctx->pc = 0x2f5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5e04:
    // 0x2f5e04: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f5e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f5e08:
    // 0x2f5e08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f5e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5e0c:
    // 0x2f5e0c: 0x0  nop
    ctx->pc = 0x2f5e0cu;
    // NOP
label_2f5e10:
    // 0x2f5e10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f5e14:
    // 0x2f5e14: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2f5e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5e18:
    // 0x2f5e18: 0x0  nop
    ctx->pc = 0x2f5e18u;
    // NOP
label_2f5e1c:
    // 0x2f5e1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f5e20:
    if (ctx->pc == 0x2F5E20u) {
        ctx->pc = 0x2F5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E1Cu;
        // 0x2f5e20: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E24u;
        goto label_2f5e24;
    }
    ctx->pc = 0x2F5E1Cu;
    {
        const bool branch_taken_0x2f5e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E1Cu;
        // 0x2f5e20: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e1c) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5E24u;
label_2f5e24:
    // 0x2f5e24: 0xc0bd62c  jal         func_2F58B0
label_2f5e28:
    if (ctx->pc == 0x2F5E28u) {
        ctx->pc = 0x2F5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E24u;
        // 0x2f5e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E2Cu;
        goto label_2f5e2c;
    }
    ctx->pc = 0x2F5E24u;
    SET_GPR_U32(ctx, 31, 0x2F5E2Cu);
    ctx->pc = 0x2F5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E24u;
    // 0x2f5e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F5E24u, 0x2F5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E2Cu;
label_2f5e2c:
    // 0x2f5e2c: 0x100002d0  b           . + 4 + (0x2D0 << 2)
label_2f5e30:
    if (ctx->pc == 0x2F5E30u) {
        ctx->pc = 0x2F5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E2Cu;
        // 0x2f5e30: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E34u;
        goto label_2f5e34;
    }
    ctx->pc = 0x2F5E2Cu;
    {
        const bool branch_taken_0x2f5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E2Cu;
        // 0x2f5e30: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e2c) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F5E34u;
label_2f5e34:
    // 0x2f5e34: 0x56a000a5  bnel        $s5, $zero, . + 4 + (0xA5 << 2)
label_2f5e38:
    if (ctx->pc == 0x2F5E38u) {
        ctx->pc = 0x2F5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E34u;
        // 0x2f5e38: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E3Cu;
        goto label_2f5e3c;
    }
    ctx->pc = 0x2F5E34u;
    {
        const bool branch_taken_0x2f5e34 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e34) {
            ctx->pc = 0x2F5E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E34u;
            // 0x2f5e38: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60CCu;
            goto label_2f60cc;
        }
    }
    ctx->pc = 0x2F5E3Cu;
label_2f5e3c:
    // 0x2f5e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e40:
    // 0x2f5e40: 0xc08a1f2  jal         func_2287C8
label_2f5e44:
    if (ctx->pc == 0x2F5E44u) {
        ctx->pc = 0x2F5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E40u;
        // 0x2f5e44: 0x24050446  addiu       $a1, $zero, 0x446 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E48u;
        goto label_2f5e48;
    }
    ctx->pc = 0x2F5E40u;
    SET_GPR_U32(ctx, 31, 0x2F5E48u);
    ctx->pc = 0x2F5E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E40u;
    // 0x2f5e44: 0x24050446  addiu       $a1, $zero, 0x446 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F5E40u, 0x2F5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E48u;
label_2f5e48:
    // 0x2f5e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e4c:
    // 0x2f5e4c: 0xc0f70ce  jal         func_3DC338
label_2f5e50:
    if (ctx->pc == 0x2F5E50u) {
        ctx->pc = 0x2F5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E4Cu;
        // 0x2f5e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E54u;
        goto label_2f5e54;
    }
    ctx->pc = 0x2F5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E54u);
    ctx->pc = 0x2F5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E4Cu;
    // 0x2f5e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F5E4Cu, 0x2F5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E54u;
label_2f5e54:
    // 0x2f5e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f5e58:
    if (ctx->pc == 0x2F5E58u) {
        ctx->pc = 0x2F5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E54u;
        // 0x2f5e58: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E5Cu;
        goto label_2f5e5c;
    }
    ctx->pc = 0x2F5E54u;
    {
        const bool branch_taken_0x2f5e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E54u;
        // 0x2f5e58: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e54) {
            ctx->pc = 0x2F5E68u;
            goto label_2f5e68;
        }
    }
    ctx->pc = 0x2F5E5Cu;
label_2f5e5c:
    // 0x2f5e5c: 0xc0c4900  jal         func_312400
label_2f5e60:
    if (ctx->pc == 0x2F5E60u) {
        ctx->pc = 0x2F5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E5Cu;
        // 0x2f5e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E64u;
        goto label_2f5e64;
    }
    ctx->pc = 0x2F5E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E64u);
    ctx->pc = 0x2F5E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E5Cu;
    // 0x2f5e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F5E5Cu, 0x2F5E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E64u;
label_2f5e64:
    // 0x2f5e64: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2f5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2f5e68:
    // 0x2f5e68: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f5e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f5e6c:
    // 0x2f5e6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f5e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5e70:
    // 0x2f5e70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f5e70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5e74:
    // 0x2f5e74: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5e78:
    // 0x2f5e78: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2f5e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5e7c:
    // 0x2f5e7c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2f5e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5e80:
    // 0x2f5e80: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2f5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5e84:
    // 0x2f5e84: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2f5e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5e88:
    // 0x2f5e88: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f5e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f5e8c:
    // 0x2f5e8c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2f5e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f5e90:
    // 0x2f5e90: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2f5e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2f5e94:
    // 0x2f5e94: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2f5e94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f5e98:
    // 0x2f5e98: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f5e98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f5e9c:
    // 0x2f5e9c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f5e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5ea0:
    // 0x2f5ea0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f5ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5ea4:
    // 0x2f5ea4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f5ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5ea8:
    // 0x2f5ea8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f5ea8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f5eac:
    // 0x2f5eac: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f5eacu;
    // VWAITQ (Q already resolved in this runtime)
label_2f5eb0:
    // 0x2f5eb0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f5eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5eb4:
    // 0x2f5eb4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f5eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5eb8:
    // 0x2f5eb8: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2f5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f5ebc:
    // 0x2f5ebc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f5ec0:
    // 0x2f5ec0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f5ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f5ec4:
    // 0x2f5ec4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2f5ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2f5ec8:
    // 0x2f5ec8: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2f5ec8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_2f5ecc:
    // 0x2f5ecc: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2f5eccu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_2f5ed0:
    // 0x2f5ed0: 0xc0e404c  jal         func_390130
label_2f5ed4:
    if (ctx->pc == 0x2F5ED4u) {
        ctx->pc = 0x2F5ED8u;
        goto label_2f5ed8;
    }
    ctx->pc = 0x2F5ED0u;
    SET_GPR_U32(ctx, 31, 0x2F5ED8u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F5ED0u, 0x2F5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5ED8u;
label_2f5ed8:
    // 0x2f5ed8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f5edc:
    // 0x2f5edc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2f5edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_2f5ee0:
    // 0x2f5ee0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f5ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f5ee4:
    // 0x2f5ee4: 0xc44196b4  lwc1        $f1, -0x694C($v0)
    ctx->pc = 0x2f5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5ee8:
    // 0x2f5ee8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f5eec:
    // 0x2f5eec: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f5eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f5ef0:
    // 0x2f5ef0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f5ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f5ef4:
    // 0x2f5ef4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2f5ef4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2f5ef8:
    // 0x2f5ef8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2f5ef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2f5efc:
    // 0x2f5efc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2f5efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5f00:
    // 0x2f5f00: 0x0  nop
    ctx->pc = 0x2f5f00u;
    // NOP
label_2f5f04:
    // 0x2f5f04: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2f5f08:
    if (ctx->pc == 0x2F5F08u) {
        ctx->pc = 0x2F5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F04u;
        // 0x2f5f08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F0Cu;
        goto label_2f5f0c;
    }
    ctx->pc = 0x2F5F04u;
    {
        const bool branch_taken_0x2f5f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F04u;
        // 0x2f5f08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f04) {
            ctx->pc = 0x2F5F24u;
            goto label_2f5f24;
        }
    }
    ctx->pc = 0x2F5F0Cu;
label_2f5f0c:
    // 0x2f5f0c: 0xc44096b8  lwc1        $f0, -0x6948($v0)
    ctx->pc = 0x2f5f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5f10:
    // 0x2f5f10: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2f5f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2f5f14:
    // 0x2f5f14: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f5f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5f18:
    // 0x2f5f18: 0x0  nop
    ctx->pc = 0x2f5f18u;
    // NOP
label_2f5f1c:
    // 0x2f5f1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f5f20:
    if (ctx->pc == 0x2F5F20u) {
        ctx->pc = 0x2F5F24u;
        goto label_2f5f24;
    }
    ctx->pc = 0x2F5F1Cu;
    {
        const bool branch_taken_0x2f5f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5f1c) {
            ctx->pc = 0x2F5F2Cu;
            goto label_2f5f2c;
        }
    }
    ctx->pc = 0x2F5F24u;
label_2f5f24:
    // 0x2f5f24: 0xc0bd62c  jal         func_2F58B0
label_2f5f28:
    if (ctx->pc == 0x2F5F28u) {
        ctx->pc = 0x2F5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F24u;
        // 0x2f5f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F2Cu;
        goto label_2f5f2c;
    }
    ctx->pc = 0x2F5F24u;
    SET_GPR_U32(ctx, 31, 0x2F5F2Cu);
    ctx->pc = 0x2F5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F24u;
    // 0x2f5f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F5F24u, 0x2F5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F2Cu;
label_2f5f2c:
    // 0x2f5f2c: 0xc0f6a96  jal         func_3DAA58
label_2f5f30:
    if (ctx->pc == 0x2F5F30u) {
        ctx->pc = 0x2F5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F2Cu;
        // 0x2f5f30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F34u;
        goto label_2f5f34;
    }
    ctx->pc = 0x2F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F5F34u);
    ctx->pc = 0x2F5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F2Cu;
    // 0x2f5f30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5F2Cu, 0x2F5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F34u;
label_2f5f34:
    // 0x2f5f34: 0xc0f6a96  jal         func_3DAA58
label_2f5f38:
    if (ctx->pc == 0x2F5F38u) {
        ctx->pc = 0x2F5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F34u;
        // 0x2f5f38: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F3Cu;
        goto label_2f5f3c;
    }
    ctx->pc = 0x2F5F34u;
    SET_GPR_U32(ctx, 31, 0x2F5F3Cu);
    ctx->pc = 0x2F5F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F34u;
    // 0x2f5f38: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5F34u, 0x2F5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F3Cu;
label_2f5f3c:
    // 0x2f5f3c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2f5f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5f40:
    // 0x2f5f40: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f5f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f5f44:
    // 0x2f5f44: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2f5f44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5f48:
    // 0x2f5f48: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f5f4c:
    // 0x2f5f4c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2f5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2f5f50:
    // 0x2f5f50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f5f54:
    // 0x2f5f54: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2f5f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2f5f58:
    // 0x2f5f58: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f5f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f5f5c:
    // 0x2f5f5c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f5f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5f60:
    // 0x2f5f60: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f5f60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5f64:
    // 0x2f5f64: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5f68:
    // 0x2f5f68: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5f6c:
    // 0x2f5f6c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5f70:
    // 0x2f5f70: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f5f74:
    // 0x2f5f74: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f5f74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f5f78:
    // 0x2f5f78: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f5f78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f5f7c:
    // 0x2f5f7c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f5f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f5f80:
    // 0x2f5f80: 0x0  nop
    ctx->pc = 0x2f5f80u;
    // NOP
label_2f5f84:
    // 0x2f5f84: 0x0  nop
    ctx->pc = 0x2f5f84u;
    // NOP
label_2f5f88:
    // 0x2f5f88: 0x46000044  c1          0x44
    ctx->pc = 0x2f5f88u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2f5f8c:
    // 0x2f5f8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2f5f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2f5f90:
    // 0x2f5f90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f5f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f5f94:
    // 0x2f5f94: 0x0  nop
    ctx->pc = 0x2f5f94u;
    // NOP
label_2f5f98:
    // 0x2f5f98: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f5f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5f9c:
    // 0x2f5f9c: 0x0  nop
    ctx->pc = 0x2f5f9cu;
    // NOP
label_2f5fa0:
    // 0x2f5fa0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f5fa4:
    if (ctx->pc == 0x2F5FA4u) {
        ctx->pc = 0x2F5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FA0u;
        // 0x2f5fa4: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FA8u;
        goto label_2f5fa8;
    }
    ctx->pc = 0x2F5FA0u;
    {
        const bool branch_taken_0x2f5fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FA0u;
        // 0x2f5fa4: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fa0) {
            ctx->pc = 0x2F5FCCu;
            goto label_2f5fcc;
        }
    }
    ctx->pc = 0x2F5FA8u;
label_2f5fa8:
    // 0x2f5fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f5fac:
    // 0x2f5fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5fb0:
    // 0x2f5fb0: 0x0  nop
    ctx->pc = 0x2f5fb0u;
    // NOP
label_2f5fb4:
    // 0x2f5fb4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f5fb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2f5fb8:
    // 0x2f5fb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f5fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f5fbc:
    // 0x2f5fbc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f5fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f5fc0:
    // 0x2f5fc0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f5fc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f5fc4:
    // 0x2f5fc4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f5fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5fc8:
    // 0x2f5fc8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5fcc:
    // 0x2f5fcc: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2f5fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f5fd0:
    // 0x2f5fd0: 0xc07a8b2  jal         func_1EA2C8
label_2f5fd4:
    if (ctx->pc == 0x2F5FD4u) {
        ctx->pc = 0x2F5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD0u;
        // 0x2f5fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FD8u;
        goto label_2f5fd8;
    }
    ctx->pc = 0x2F5FD0u;
    SET_GPR_U32(ctx, 31, 0x2F5FD8u);
    ctx->pc = 0x2F5FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FD0u;
    // 0x2f5fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F5FD0u, 0x2F5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FD8u;
label_2f5fd8:
    // 0x2f5fd8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2f5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2f5fdc:
    // 0x2f5fdc: 0x8e45121c  lw          $a1, 0x121C($s2)
    ctx->pc = 0x2f5fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f5fe0:
    // 0x2f5fe0: 0xc4401b78  lwc1        $f0, 0x1B78($v0)
    ctx->pc = 0x2f5fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5fe4:
    // 0x2f5fe4: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2f5fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f5fe8:
    // 0x2f5fe8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2f5fec:
    if (ctx->pc == 0x2F5FECu) {
        ctx->pc = 0x2F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FE8u;
        // 0x2f5fec: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FF0u;
        goto label_2f5ff0;
    }
    ctx->pc = 0x2F5FE8u;
    {
        const bool branch_taken_0x2f5fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FE8u;
        // 0x2f5fec: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fe8) {
            ctx->pc = 0x2F5FF8u;
            goto label_2f5ff8;
        }
    }
    ctx->pc = 0x2F5FF0u;
label_2f5ff0:
    // 0x2f5ff0: 0xc076e46  jal         func_1DB918
label_2f5ff4:
    if (ctx->pc == 0x2F5FF4u) {
        ctx->pc = 0x2F5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF0u;
        // 0x2f5ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FF8u;
        goto label_2f5ff8;
    }
    ctx->pc = 0x2F5FF0u;
    SET_GPR_U32(ctx, 31, 0x2F5FF8u);
    ctx->pc = 0x2F5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FF0u;
    // 0x2f5ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F5FF0u, 0x2F5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FF8u;
label_2f5ff8:
    // 0x2f5ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ffc:
    // 0x2f5ffc: 0xc076e46  jal         func_1DB918
label_2f6000:
    if (ctx->pc == 0x2F6000u) {
        ctx->pc = 0x2F6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FFCu;
        // 0x2f6000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6004u;
        goto label_2f6004;
    }
    ctx->pc = 0x2F5FFCu;
    SET_GPR_U32(ctx, 31, 0x2F6004u);
    ctx->pc = 0x2F6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FFCu;
    // 0x2f6000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x2F5FFCu, 0x2F6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6004u;
label_2f6004:
    // 0x2f6004: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x2f6004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
label_2f6008:
    // 0x2f6008: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f6008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f600c:
    // 0x2f600c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f6010:
    // 0x2f6010: 0x34a5ffea  ori         $a1, $a1, 0xFFEA
    ctx->pc = 0x2f6010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65514);
label_2f6014:
    // 0x2f6014: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f6014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6018:
    // 0x2f6018: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f6018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f601c:
    // 0x2f601c: 0x27a90124  addiu       $t1, $sp, 0x124
    ctx->pc = 0x2f601cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_2f6020:
    // 0x2f6020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f6020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6024:
    // 0x2f6024: 0xc077940  jal         func_1DE500
label_2f6028:
    if (ctx->pc == 0x2F6028u) {
        ctx->pc = 0x2F6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6024u;
        // 0x2f6028: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F602Cu;
        goto label_2f602c;
    }
    ctx->pc = 0x2F6024u;
    SET_GPR_U32(ctx, 31, 0x2F602Cu);
    ctx->pc = 0x2F6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6024u;
    // 0x2f6028: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2F6024u, 0x2F602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F602Cu;
label_2f602c:
    // 0x2f602c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2f6030:
    if (ctx->pc == 0x2F6030u) {
        ctx->pc = 0x2F6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F602Cu;
        // 0x2f6030: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6034u;
        goto label_2f6034;
    }
    ctx->pc = 0x2F602Cu;
    {
        const bool branch_taken_0x2f602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F602Cu;
        // 0x2f6030: 0x8fa200f8  lw          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f602c) {
            ctx->pc = 0x2F60A8u;
            goto label_2f60a8;
        }
    }
    ctx->pc = 0x2F6034u;
label_2f6034:
    // 0x2f6034: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2f6034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2f6038:
    // 0x2f6038: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2f603c:
    if (ctx->pc == 0x2F603Cu) {
        ctx->pc = 0x2F603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6038u;
        // 0x2f603c: 0x8e42121c  lw          $v0, 0x121C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6040u;
        goto label_2f6040;
    }
    ctx->pc = 0x2F6038u;
    {
        const bool branch_taken_0x2f6038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6038) {
            ctx->pc = 0x2F603Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6038u;
            // 0x2f603c: 0x8e42121c  lw          $v0, 0x121C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F6040u;
label_2f6040:
    // 0x2f6040: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2f6040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2f6044:
    // 0x2f6044: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2f6048:
    // 0x2f6048: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2f6048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2f604c:
    // 0x2f604c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2f604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_2f6050:
    // 0x2f6050: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2f6054:
    if (ctx->pc == 0x2F6054u) {
        ctx->pc = 0x2F6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6050u;
        // 0x2f6054: 0x8e42121c  lw          $v0, 0x121C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6058u;
        goto label_2f6058;
    }
    ctx->pc = 0x2F6050u;
    {
        const bool branch_taken_0x2f6050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6050) {
            ctx->pc = 0x2F6054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6050u;
            // 0x2f6054: 0x8e42121c  lw          $v0, 0x121C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6090u;
            goto label_2f6090;
        }
    }
    ctx->pc = 0x2F6058u;
label_2f6058:
    // 0x2f6058: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f6058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f605c:
    // 0x2f605c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2f6060:
    // 0x2f6060: 0xc44eb788  lwc1        $f14, -0x4878($v0)
    ctx->pc = 0x2f6060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f6064:
    // 0x2f6064: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x2f6064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f6068:
    // 0x2f6068: 0xc46db7a8  lwc1        $f13, -0x4858($v1)
    ctx->pc = 0x2f6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f606c:
    // 0x2f606c: 0x8e451208  lw          $a1, 0x1208($s2)
    ctx->pc = 0x2f606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
label_2f6070:
    // 0x2f6070: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2f6070u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2f6074:
    // 0x2f6074: 0xc64c1240  lwc1        $f12, 0x1240($s2)
    ctx->pc = 0x2f6074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f6078:
    // 0x2f6078: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f6078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f607c:
    // 0x2f607c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2f607cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2f6080:
    // 0x2f6080: 0xc0bd346  jal         func_2F4D18
label_2f6084:
    if (ctx->pc == 0x2F6084u) {
        ctx->pc = 0x2F6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6080u;
        // 0x2f6084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6088u;
        goto label_2f6088;
    }
    ctx->pc = 0x2F6080u;
    SET_GPR_U32(ctx, 31, 0x2F6088u);
    ctx->pc = 0x2F6084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6080u;
    // 0x2f6084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D18u, 0x2F6080u, 0x2F6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6088u;
label_2f6088:
    // 0x2f6088: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f608c:
    if (ctx->pc == 0x2F608Cu) {
        ctx->pc = 0x2F608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6088u;
        // 0x2f608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6090u;
        goto label_2f6090;
    }
    ctx->pc = 0x2F6088u;
    {
        const bool branch_taken_0x2f6088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6088u;
        // 0x2f608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6088) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F6090u;
label_2f6090:
    // 0x2f6090: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f6094:
    if (ctx->pc == 0x2F6094u) {
        ctx->pc = 0x2F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6090u;
        // 0x2f6094: 0xae40121c  sw          $zero, 0x121C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6098u;
        goto label_2f6098;
    }
    ctx->pc = 0x2F6090u;
    {
        const bool branch_taken_0x2f6090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6090) {
            ctx->pc = 0x2F6094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6090u;
            // 0x2f6094: 0xae40121c  sw          $zero, 0x121C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4636), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F6098u;
label_2f6098:
    // 0x2f6098: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f6098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f609c:
    // 0x2f609c: 0xfa411230  sqc2        $vf1, 0x1230($s2)
    ctx->pc = 0x2f609cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4656), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f60a0:
    // 0x2f60a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f60a4:
    if (ctx->pc == 0x2F60A4u) {
        ctx->pc = 0x2F60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60A0u;
        // 0x2f60a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60A8u;
        goto label_2f60a8;
    }
    ctx->pc = 0x2F60A0u;
    {
        const bool branch_taken_0x2f60a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60A0u;
        // 0x2f60a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60a0) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F60A8u;
label_2f60a8:
    // 0x2f60a8: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f60ac:
    // 0x2f60ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f60b0:
    if (ctx->pc == 0x2F60B0u) {
        ctx->pc = 0x2F60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60ACu;
        // 0x2f60b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60B4u;
        goto label_2f60b4;
    }
    ctx->pc = 0x2F60ACu;
    {
        const bool branch_taken_0x2f60ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60ACu;
        // 0x2f60b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60ac) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F60B4u;
label_2f60b4:
    // 0x2f60b4: 0xc0bd62c  jal         func_2F58B0
label_2f60b8:
    if (ctx->pc == 0x2F60B8u) {
        ctx->pc = 0x2F60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60B4u;
        // 0x2f60b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60BCu;
        goto label_2f60bc;
    }
    ctx->pc = 0x2F60B4u;
    SET_GPR_U32(ctx, 31, 0x2F60BCu);
    ctx->pc = 0x2F60B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F60B4u;
    // 0x2f60b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F60B4u, 0x2F60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60BCu;
label_2f60bc:
    // 0x2f60bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f60bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f60c0:
    // 0x2f60c0: 0xc076e38  jal         func_1DB8E0
label_2f60c4:
    if (ctx->pc == 0x2F60C4u) {
        ctx->pc = 0x2F60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60C0u;
        // 0x2f60c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60C8u;
        goto label_2f60c8;
    }
    ctx->pc = 0x2F60C0u;
    SET_GPR_U32(ctx, 31, 0x2F60C8u);
    ctx->pc = 0x2F60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F60C0u;
    // 0x2f60c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x2F60C0u, 0x2F60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60C8u;
label_2f60c8:
    // 0x2f60c8: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f60cc:
    // 0x2f60cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f60ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f60d0:
    // 0x2f60d0: 0x10400227  beqz        $v0, . + 4 + (0x227 << 2)
label_2f60d4:
    if (ctx->pc == 0x2F60D4u) {
        ctx->pc = 0x2F60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60D0u;
        // 0x2f60d4: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60D8u;
        goto label_2f60d8;
    }
    ctx->pc = 0x2F60D0u;
    {
        const bool branch_taken_0x2f60d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60D0u;
        // 0x2f60d4: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60d0) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F60D8u;
label_2f60d8:
    // 0x2f60d8: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f60dc:
    // 0x2f60dc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2f60e0:
    if (ctx->pc == 0x2F60E0u) {
        ctx->pc = 0x2F60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60DCu;
        // 0x2f60e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60E4u;
        goto label_2f60e4;
    }
    ctx->pc = 0x2F60DCu;
    {
        const bool branch_taken_0x2f60dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60DCu;
        // 0x2f60e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60dc) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F60E4u;
label_2f60e4:
    // 0x2f60e4: 0xc06b600  jal         func_1AD800
label_2f60e8:
    if (ctx->pc == 0x2F60E8u) {
        ctx->pc = 0x2F60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60E4u;
        // 0x2f60e8: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F60ECu;
        goto label_2f60ec;
    }
    ctx->pc = 0x2F60E4u;
    SET_GPR_U32(ctx, 31, 0x2F60ECu);
    ctx->pc = 0x2F60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F60E4u;
    // 0x2f60e8: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2F60E4u, 0x2F60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60ECu;
label_2f60ec:
    // 0x2f60ec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f60f0:
    if (ctx->pc == 0x2F60F0u) {
        ctx->pc = 0x2F60F4u;
        goto label_2f60f4;
    }
    ctx->pc = 0x2F60ECu;
    {
        const bool branch_taken_0x2f60ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f60ec) {
            ctx->pc = 0x2F6160u;
            goto label_2f6160;
        }
    }
    ctx->pc = 0x2F60F4u;
label_2f60f4:
    // 0x2f60f4: 0x12a00025  beqz        $s5, . + 4 + (0x25 << 2)
label_2f60f8:
    if (ctx->pc == 0x2F60F8u) {
        ctx->pc = 0x2F60FCu;
        goto label_2f60fc;
    }
    ctx->pc = 0x2F60F4u;
    {
        const bool branch_taken_0x2f60f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f60f4) {
            ctx->pc = 0x2F618Cu;
            goto label_2f618c;
        }
    }
    ctx->pc = 0x2F60FCu;
label_2f60fc:
    // 0x2f60fc: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f6100:
    // 0x2f6100: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x2f6100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_2f6104:
    // 0x2f6104: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2f6104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2f6108:
    // 0x2f6108: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f610c:
    // 0x2f610c: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2f610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f6110:
    // 0x2f6110: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6114:
    // 0x2f6114: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2f6114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2f6118:
    // 0x2f6118: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2f6118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2f611c:
    // 0x2f611c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f6120:
    // 0x2f6120: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2f6120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_2f6124:
    // 0x2f6124: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2f6124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_2f6128:
    // 0x2f6128: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f6128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f612c:
    // 0x2f612c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2f612cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f6130:
    // 0x2f6130: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f6130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f6134:
    // 0x2f6134: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f6134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f6138:
    // 0x2f6138: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2f6138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f613c:
    // 0x2f613c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6140:
    // 0x2f6140: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2f6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f6144:
    // 0x2f6144: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2f6144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f6148:
    // 0x2f6148: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f6148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f614c:
    // 0x2f614c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2f614cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f6150:
    // 0x2f6150: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2f6150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2f6154:
    // 0x2f6154: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2f6154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f6158:
    // 0x2f6158: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f6158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f615c:
    // 0x2f615c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f6160:
    // 0x2f6160: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_2f6164:
    if (ctx->pc == 0x2F6164u) {
        ctx->pc = 0x2F6168u;
        goto label_2f6168;
    }
    ctx->pc = 0x2F6160u;
    {
        const bool branch_taken_0x2f6160 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6160) {
            ctx->pc = 0x2F618Cu;
            goto label_2f618c;
        }
    }
    ctx->pc = 0x2F6168u;
label_2f6168:
    // 0x2f6168: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f6168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f616c:
    // 0x2f616c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f6170:
    // 0x2f6170: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f6170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f6174:
    // 0x2f6174: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f6174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6178:
    // 0x2f6178: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f6178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f617c:
    // 0x2f617c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f617cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f6180:
    // 0x2f6180: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f6180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f6184:
    // 0x2f6184: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f6188:
    if (ctx->pc == 0x2F6188u) {
        ctx->pc = 0x2F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6184u;
        // 0x2f6188: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F618Cu;
        goto label_2f618c;
    }
    ctx->pc = 0x2F6184u;
    {
        const bool branch_taken_0x2f6184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6184u;
        // 0x2f6188: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6184) {
            ctx->pc = 0x2F61A0u;
            goto label_2f61a0;
        }
    }
    ctx->pc = 0x2F618Cu;
label_2f618c:
    // 0x2f618c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f618cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6190:
    // 0x2f6190: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2f6190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6194:
    // 0x2f6194: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f6194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f6198:
    // 0x2f6198: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f6198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f619c:
    // 0x2f619c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2f619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f61a0:
    // 0x2f61a0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2f61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f61a4:
    // 0x2f61a4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2f61a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f61a8:
    // 0x2f61a8: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2f61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f61ac:
    // 0x2f61ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f61acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f61b0:
    // 0x2f61b0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2f61b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f61b4:
    // 0x2f61b4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2f61b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2f61b8:
    // 0x2f61b8: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2f61b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f61bc:
    // 0x2f61bc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f61bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f61c0:
    // 0x2f61c0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f61c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f61c4:
    // 0x2f61c4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2f61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f61c8:
    // 0x2f61c8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f61cc:
    // 0x2f61cc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2f61ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2f61d0:
    // 0x2f61d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f61d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f61d4:
    // 0x2f61d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f61d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f61d8:
    // 0x2f61d8: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x2f61d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f61dc:
    // 0x2f61dc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2f61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2f61e0:
    // 0x2f61e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f61e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f61e4:
    // 0x2f61e4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2f61e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2f61e8:
    // 0x2f61e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f61e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2f61ec:
    // 0x2f61ec: 0x0  nop
    ctx->pc = 0x2f61ecu;
    // NOP
label_2f61f0:
    // 0x2f61f0: 0x0  nop
    ctx->pc = 0x2f61f0u;
    // NOP
label_2f61f4:
    // 0x2f61f4: 0x46002016  rsqrt.s     $f0, $f4, $f0
    ctx->pc = 0x2f61f4u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[4], ctx->f[0]);
label_2f61f8:
    // 0x2f61f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f61f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f61fc:
    // 0x2f61fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f61fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f6200:
    // 0x2f6200: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2f6200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f6204:
    // 0x2f6204: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2f6204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f6208:
    // 0x2f6208: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x2f6208u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2f620c:
    // 0x2f620c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2f620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6210:
    // 0x2f6210: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2f6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f6214:
    // 0x2f6214: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6218:
    // 0x2f6218: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2f6218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f621c:
    // 0x2f621c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f621cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2f6220:
    // 0x2f6220: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f6220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2f6224:
    // 0x2f6224: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x2f6224u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f6228:
    // 0x2f6228: 0x46056834  c.lt.s      $f13, $f5
    ctx->pc = 0x2f6228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f622c:
    // 0x2f622c: 0x0  nop
    ctx->pc = 0x2f622cu;
    // NOP
label_2f6230:
    // 0x2f6230: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f6234:
    if (ctx->pc == 0x2F6234u) {
        ctx->pc = 0x2F6238u;
        goto label_2f6238;
    }
    ctx->pc = 0x2F6230u;
    {
        const bool branch_taken_0x2f6230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6230) {
            ctx->pc = 0x2F6240u;
            goto label_2f6240;
        }
    }
    ctx->pc = 0x2F6238u;
label_2f6238:
    // 0x2f6238: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f623c:
    if (ctx->pc == 0x2F623Cu) {
        ctx->pc = 0x2F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6238u;
        // 0x2f623c: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6240u;
        goto label_2f6240;
    }
    ctx->pc = 0x2F6238u;
    {
        const bool branch_taken_0x2f6238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6238u;
        // 0x2f623c: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6238) {
            ctx->pc = 0x2F6250u;
            goto label_2f6250;
        }
    }
    ctx->pc = 0x2F6240u;
label_2f6240:
    // 0x2f6240: 0x460d2034  c.lt.s      $f4, $f13
    ctx->pc = 0x2f6240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6244:
    // 0x2f6244: 0x0  nop
    ctx->pc = 0x2f6244u;
    // NOP
label_2f6248:
    // 0x2f6248: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f624c:
    if (ctx->pc == 0x2F624Cu) {
        ctx->pc = 0x2F624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6248u;
        // 0x2f624c: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6250u;
        goto label_2f6250;
    }
    ctx->pc = 0x2F6248u;
    {
        const bool branch_taken_0x2f6248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6248) {
            ctx->pc = 0x2F624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6248u;
            // 0x2f624c: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6250u;
            goto label_2f6250;
        }
    }
    ctx->pc = 0x2F6250u;
label_2f6250:
    // 0x2f6250: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x2f6250u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_2f6254:
    // 0x2f6254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f6258:
    // 0x2f6258: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f6258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f625c:
    // 0x2f625c: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2f625cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2f6260:
    // 0x2f6260: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2f6260u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_2f6264:
    // 0x2f6264: 0x0  nop
    ctx->pc = 0x2f6264u;
    // NOP
label_2f6268:
    // 0x2f6268: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f6268u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2f626c:
    // 0x2f626c: 0xc0e404c  jal         func_390130
label_2f6270:
    if (ctx->pc == 0x2F6270u) {
        ctx->pc = 0x2F6274u;
        goto label_2f6274;
    }
    ctx->pc = 0x2F626Cu;
    SET_GPR_U32(ctx, 31, 0x2F6274u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F626Cu, 0x2F6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6274u;
label_2f6274:
    // 0x2f6274: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6278:
    // 0x2f6278: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f6278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f627c:
    // 0x2f627c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f627cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f6280:
    // 0x2f6280: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f6280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f6284:
    // 0x2f6284: 0x46180834  c.lt.s      $f1, $f24
    ctx->pc = 0x2f6284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6288:
    // 0x2f6288: 0x0  nop
    ctx->pc = 0x2f6288u;
    // NOP
label_2f628c:
    // 0x2f628c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f6290:
    if (ctx->pc == 0x2F6290u) {
        ctx->pc = 0x2F6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F628Cu;
        // 0x2f6290: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6294u;
        goto label_2f6294;
    }
    ctx->pc = 0x2F628Cu;
    {
        const bool branch_taken_0x2f628c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F628Cu;
        // 0x2f6290: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f628c) {
            ctx->pc = 0x2F62A4u;
            goto label_2f62a4;
        }
    }
    ctx->pc = 0x2F6294u;
label_2f6294:
    // 0x2f6294: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f6294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f6298:
    // 0x2f6298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f629c:
    // 0x2f629c: 0x0  nop
    ctx->pc = 0x2f629cu;
    // NOP
label_2f62a0:
    // 0x2f62a0: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x2f62a0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_2f62a4:
    // 0x2f62a4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f62a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f62a8:
    // 0x2f62a8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2f62a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f62ac:
    // 0x2f62ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f62acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f62b0:
    // 0x2f62b0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f62b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f62b4:
    // 0x2f62b4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2f62b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f62b8:
    // 0x2f62b8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2f62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f62bc:
    // 0x2f62bc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f62bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f62c0:
    // 0x2f62c0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f62c4:
    // 0x2f62c4: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x2f62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f62c8:
    // 0x2f62c8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2f62c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2f62cc:
    // 0x2f62cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f62ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2f62d0:
    // 0x2f62d0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2f62d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2f62d4:
    // 0x2f62d4: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x2f62d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2f62d8:
    // 0x2f62d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f62d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f62dc:
    // 0x2f62dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f62dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f62e0:
    // 0x2f62e0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f62e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f62e4:
    // 0x2f62e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f62e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f62e8:
    // 0x2f62e8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f62ec:
    // 0x2f62ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2f62ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f62f0:
    // 0x2f62f0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2f62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f62f4:
    // 0x2f62f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f62f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2f62f8:
    // 0x2f62f8: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2f62f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2f62fc:
    // 0x2f62fc: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2f62fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2f6300:
    // 0x2f6300: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f6300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f6304:
    // 0x2f6304: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x2f6304u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2f6308:
    // 0x2f6308: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f6308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f630c:
    // 0x2f630c: 0x0  nop
    ctx->pc = 0x2f630cu;
    // NOP
label_2f6310:
    // 0x2f6310: 0x0  nop
    ctx->pc = 0x2f6310u;
    // NOP
label_2f6314:
    // 0x2f6314: 0x46010044  c1          0x10044
    ctx->pc = 0x2f6314u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2f6318:
    // 0x2f6318: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2f6318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2f631c:
    // 0x2f631c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f631cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2f6320:
    // 0x2f6320: 0x0  nop
    ctx->pc = 0x2f6320u;
    // NOP
label_2f6324:
    // 0x2f6324: 0x0  nop
    ctx->pc = 0x2f6324u;
    // NOP
label_2f6328:
    // 0x2f6328: 0x4600a016  rsqrt.s     $f0, $f20, $f0
    ctx->pc = 0x2f6328u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[20], ctx->f[0]);
label_2f632c:
    // 0x2f632c: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x2f632cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f6330:
    // 0x2f6330: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f6334:
    // 0x2f6334: 0x46001885  abs.s       $f2, $f3
    ctx->pc = 0x2f6334u;
    ctx->f[2] = FPU_ABS_S(ctx->f[3]);
label_2f6338:
    // 0x2f6338: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2f6338u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f633c:
    // 0x2f633c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2f633cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6340:
    // 0x2f6340: 0x0  nop
    ctx->pc = 0x2f6340u;
    // NOP
label_2f6344:
    // 0x2f6344: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_2f6348:
    if (ctx->pc == 0x2F6348u) {
        ctx->pc = 0x2F6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6344u;
        // 0x2f6348: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F634Cu;
        goto label_2f634c;
    }
    ctx->pc = 0x2F6344u;
    {
        const bool branch_taken_0x2f6344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6344u;
        // 0x2f6348: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6344) {
            ctx->pc = 0x2F63B8u;
            goto label_2f63b8;
        }
    }
    ctx->pc = 0x2F634Cu;
label_2f634c:
    // 0x2f634c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f6350:
    // 0x2f6350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6354:
    // 0x2f6354: 0x0  nop
    ctx->pc = 0x2f6354u;
    // NOP
label_2f6358:
    // 0x2f6358: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2f6358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f635c:
    // 0x2f635c: 0x0  nop
    ctx->pc = 0x2f635cu;
    // NOP
label_2f6360:
    // 0x2f6360: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f6364:
    if (ctx->pc == 0x2F6364u) {
        ctx->pc = 0x2F6368u;
        goto label_2f6368;
    }
    ctx->pc = 0x2F6360u;
    {
        const bool branch_taken_0x2f6360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6360) {
            ctx->pc = 0x2F6370u;
            goto label_2f6370;
        }
    }
    ctx->pc = 0x2F6368u;
label_2f6368:
    // 0x2f6368: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f636c:
    if (ctx->pc == 0x2F636Cu) {
        ctx->pc = 0x2F636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6368u;
        // 0x2f636c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6370u;
        goto label_2f6370;
    }
    ctx->pc = 0x2F6368u;
    {
        const bool branch_taken_0x2f6368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6368u;
        // 0x2f636c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6368) {
            ctx->pc = 0x2F6380u;
            goto label_2f6380;
        }
    }
    ctx->pc = 0x2F6370u;
label_2f6370:
    // 0x2f6370: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x2f6370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6374:
    // 0x2f6374: 0x0  nop
    ctx->pc = 0x2f6374u;
    // NOP
label_2f6378:
    // 0x2f6378: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f637c:
    if (ctx->pc == 0x2F637Cu) {
        ctx->pc = 0x2F637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6378u;
        // 0x2f637c: 0xe7b40044  swc1        $f20, 0x44($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6380u;
        goto label_2f6380;
    }
    ctx->pc = 0x2F6378u;
    {
        const bool branch_taken_0x2f6378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6378) {
            ctx->pc = 0x2F637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6378u;
            // 0x2f637c: 0xe7b40044  swc1        $f20, 0x44($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6380u;
            goto label_2f6380;
        }
    }
    ctx->pc = 0x2F6380u;
label_2f6380:
    // 0x2f6380: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2f6380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f6384:
    // 0x2f6384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f6388:
    // 0x2f6388: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f6388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f638c:
    // 0x2f638c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2f638cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2f6390:
    // 0x2f6390: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2f6390u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_2f6394:
    // 0x2f6394: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2f6394u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_2f6398:
    // 0x2f6398: 0xc0e404c  jal         func_390130
label_2f639c:
    if (ctx->pc == 0x2F639Cu) {
        ctx->pc = 0x2F63A0u;
        goto label_2f63a0;
    }
    ctx->pc = 0x2F6398u;
    SET_GPR_U32(ctx, 31, 0x2F63A0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F6398u, 0x2F63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63A0u;
label_2f63a0:
    // 0x2f63a0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f63a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f63a4:
    // 0x2f63a4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f63a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f63a8:
    // 0x2f63a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f63a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f63ac:
    // 0x2f63ac: 0x0  nop
    ctx->pc = 0x2f63acu;
    // NOP
label_2f63b0:
    // 0x2f63b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f63b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f63b4:
    // 0x2f63b4: 0x46000607  neg.s       $f24, $f0
    ctx->pc = 0x2f63b4u;
    ctx->f[24] = FPU_NEG_S(ctx->f[0]);
label_2f63b8:
    // 0x2f63b8: 0x8e441258  lw          $a0, 0x1258($s2)
    ctx->pc = 0x2f63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4696)));
label_2f63bc:
    // 0x2f63bc: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x2f63bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_2f63c0:
    // 0x2f63c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f63c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f63c4:
    // 0x2f63c4: 0x0  nop
    ctx->pc = 0x2f63c4u;
    // NOP
label_2f63c8:
    // 0x2f63c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f63c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f63cc:
    // 0x2f63cc: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2f63ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f63d0:
    // 0x2f63d0: 0x0  nop
    ctx->pc = 0x2f63d0u;
    // NOP
label_2f63d4:
    // 0x2f63d4: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_2f63d8:
    if (ctx->pc == 0x2F63D8u) {
        ctx->pc = 0x2F63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D4u;
        // 0x2f63d8: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F63DCu;
        goto label_2f63dc;
    }
    ctx->pc = 0x2F63D4u;
    {
        const bool branch_taken_0x2f63d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D4u;
        // 0x2f63d8: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63d4) {
            ctx->pc = 0x2F6560u;
            goto label_2f6560;
        }
    }
    ctx->pc = 0x2F63DCu;
label_2f63dc:
    // 0x2f63dc: 0x8c622b40  lw          $v0, 0x2B40($v1)
    ctx->pc = 0x2f63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11072)));
label_2f63e0:
    // 0x2f63e0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2f63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2f63e4:
    // 0x2f63e4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_2f63e8:
    if (ctx->pc == 0x2F63E8u) {
        ctx->pc = 0x2F63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63E4u;
        // 0x2f63e8: 0xae421258  sw          $v0, 0x1258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F63ECu;
        goto label_2f63ec;
    }
    ctx->pc = 0x2F63E4u;
    {
        const bool branch_taken_0x2f63e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63E4u;
        // 0x2f63e8: 0xae421258  sw          $v0, 0x1258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63e4) {
            ctx->pc = 0x2F63F0u;
            goto label_2f63f0;
        }
    }
    ctx->pc = 0x2F63ECu;
label_2f63ec:
    // 0x2f63ec: 0xae401258  sw          $zero, 0x1258($s2)
    ctx->pc = 0x2f63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4696), GPR_U32(ctx, 0));
label_2f63f0:
    // 0x2f63f0: 0xc641124c  lwc1        $f1, 0x124C($s2)
    ctx->pc = 0x2f63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f63f4:
    // 0x2f63f4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f63f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f63f8:
    // 0x2f63f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2f63f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2f63fc:
    // 0x2f63fc: 0x4601ad01  sub.s       $f20, $f21, $f1
    ctx->pc = 0x2f63fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_2f6400:
    // 0x2f6400: 0xc6401250  lwc1        $f0, 0x1250($s2)
    ctx->pc = 0x2f6400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6404:
    // 0x2f6404: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x2f6404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6408:
    // 0x2f6408: 0x0  nop
    ctx->pc = 0x2f6408u;
    // NOP
label_2f640c:
    // 0x2f640c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f6410:
    if (ctx->pc == 0x2F6410u) {
        ctx->pc = 0x2F6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F640Cu;
        // 0x2f6410: 0x4600c581  sub.s       $f22, $f24, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6414u;
        goto label_2f6414;
    }
    ctx->pc = 0x2F640Cu;
    {
        const bool branch_taken_0x2f640c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F640Cu;
        // 0x2f6410: 0x4600c581  sub.s       $f22, $f24, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f640c) {
            ctx->pc = 0x2F6424u;
            goto label_2f6424;
        }
    }
    ctx->pc = 0x2F6414u;
label_2f6414:
    // 0x2f6414: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f6414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f6418:
    // 0x2f6418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f641c:
    // 0x2f641c: 0x0  nop
    ctx->pc = 0x2f641cu;
    // NOP
label_2f6420:
    // 0x2f6420: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2f6420u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2f6424:
    // 0x2f6424: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x2f6424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
label_2f6428:
    // 0x2f6428: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2f6428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_2f642c:
    // 0x2f642c: 0x0  nop
    ctx->pc = 0x2f642cu;
    // NOP
label_2f6430:
    // 0x2f6430: 0x461aa034  c.lt.s      $f20, $f26
    ctx->pc = 0x2f6430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6434:
    // 0x2f6434: 0x0  nop
    ctx->pc = 0x2f6434u;
    // NOP
label_2f6438:
    // 0x2f6438: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f643c:
    if (ctx->pc == 0x2F643Cu) {
        ctx->pc = 0x2F6440u;
        goto label_2f6440;
    }
    ctx->pc = 0x2F6438u;
    {
        const bool branch_taken_0x2f6438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6438) {
            ctx->pc = 0x2F6450u;
            goto label_2f6450;
        }
    }
    ctx->pc = 0x2F6440u;
label_2f6440:
    // 0x2f6440: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f6440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f6444:
    // 0x2f6444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6448:
    // 0x2f6448: 0x0  nop
    ctx->pc = 0x2f6448u;
    // NOP
label_2f644c:
    // 0x2f644c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2f644cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2f6450:
    // 0x2f6450: 0xc64c1258  lwc1        $f12, 0x1258($s2)
    ctx->pc = 0x2f6450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f6454:
    // 0x2f6454: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2f6454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f6458:
    // 0x2f6458: 0xc6401254  lwc1        $f0, 0x1254($s2)
    ctx->pc = 0x2f6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f645c:
    // 0x2f645c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f645cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f6460:
    // 0x2f6460: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2f6460u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_2f6464:
    // 0x2f6464: 0xc0e3f5e  jal         func_38FD78
label_2f6468:
    if (ctx->pc == 0x2F6468u) {
        ctx->pc = 0x2F6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6464u;
        // 0x2f6468: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F646Cu;
        goto label_2f646c;
    }
    ctx->pc = 0x2F6464u;
    SET_GPR_U32(ctx, 31, 0x2F646Cu);
    ctx->pc = 0x2F6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6464u;
    // 0x2f6468: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2F6464u, 0x2F646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F646Cu;
label_2f646c:
    // 0x2f646c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f646cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f6470:
    // 0x2f6470: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f6470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2f6474:
    // 0x2f6474: 0xc0b1250  jal         func_2C4940
label_2f6478:
    if (ctx->pc == 0x2F6478u) {
        ctx->pc = 0x2F6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6474u;
        // 0x2f6478: 0x2484005a  addiu       $a0, $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F647Cu;
        goto label_2f647c;
    }
    ctx->pc = 0x2F6474u;
    SET_GPR_U32(ctx, 31, 0x2F647Cu);
    ctx->pc = 0x2F6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6474u;
    // 0x2f6478: 0x2484005a  addiu       $a0, $a0, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2F6474u, 0x2F647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F647Cu;
label_2f647c:
    // 0x2f647c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f647cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f6480:
    // 0x2f6480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6484:
    // 0x2f6484: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f6488:
    // 0x2f6488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f6488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f648c:
    // 0x2f648c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f648cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f6490:
    // 0x2f6490: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f6490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f6494:
    // 0x2f6494: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x2f6494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2f6498:
    // 0x2f6498: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x2f6498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_2f649c:
    // 0x2f649c: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x2f649cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2f64a0:
    // 0x2f64a0: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x2f64a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f64a4:
    // 0x2f64a4: 0x0  nop
    ctx->pc = 0x2f64a4u;
    // NOP
label_2f64a8:
    // 0x2f64a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f64ac:
    if (ctx->pc == 0x2F64ACu) {
        ctx->pc = 0x2F64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64A8u;
        // 0x2f64ac: 0x4601c581  sub.s       $f22, $f24, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64B0u;
        goto label_2f64b0;
    }
    ctx->pc = 0x2F64A8u;
    {
        const bool branch_taken_0x2f64a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64A8u;
        // 0x2f64ac: 0x4601c581  sub.s       $f22, $f24, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64a8) {
            ctx->pc = 0x2F64C0u;
            goto label_2f64c0;
        }
    }
    ctx->pc = 0x2F64B0u;
label_2f64b0:
    // 0x2f64b0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f64b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f64b4:
    // 0x2f64b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f64b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f64b8:
    // 0x2f64b8: 0x0  nop
    ctx->pc = 0x2f64b8u;
    // NOP
label_2f64bc:
    // 0x2f64bc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2f64bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2f64c0:
    // 0x2f64c0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f64c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f64c4:
    // 0x2f64c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f64c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f64c8:
    // 0x2f64c8: 0x0  nop
    ctx->pc = 0x2f64c8u;
    // NOP
label_2f64cc:
    // 0x2f64cc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2f64ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f64d0:
    // 0x2f64d0: 0x0  nop
    ctx->pc = 0x2f64d0u;
    // NOP
label_2f64d4:
    // 0x2f64d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f64d8:
    if (ctx->pc == 0x2F64D8u) {
        ctx->pc = 0x2F64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64D4u;
        // 0x2f64d8: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64DCu;
        goto label_2f64dc;
    }
    ctx->pc = 0x2F64D4u;
    {
        const bool branch_taken_0x2f64d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f64d4) {
            ctx->pc = 0x2F64D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F64D4u;
            // 0x2f64d8: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F64DCu;
            goto label_2f64dc;
        }
    }
    ctx->pc = 0x2F64DCu;
label_2f64dc:
    // 0x2f64dc: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f64e0:
    // 0x2f64e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f64e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f64e4:
    // 0x2f64e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f64e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f64e8:
    // 0x2f64e8: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2f64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2f64ec:
    // 0x2f64ec: 0x40f809  jalr        $v0
label_2f64f0:
    if (ctx->pc == 0x2F64F0u) {
        ctx->pc = 0x2F64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64ECu;
        // 0x2f64f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F64F4u;
        goto label_2f64f4;
    }
    ctx->pc = 0x2F64ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F64F4u);
        ctx->pc = 0x2F64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64ECu;
        // 0x2f64f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F64ECu, 0x2F64F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F64F4u;
label_2f64f4:
    // 0x2f64f4: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f64f8:
    // 0x2f64f8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2f64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2f64fc:
    // 0x2f64fc: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2f64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_2f6500:
    // 0x2f6500: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2f6500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2f6504:
    // 0x2f6504: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2f6508:
    if (ctx->pc == 0x2F6508u) {
        ctx->pc = 0x2F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6504u;
        // 0x2f6508: 0x8e431208  lw          $v1, 0x1208($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F650Cu;
        goto label_2f650c;
    }
    ctx->pc = 0x2F6504u;
    {
        const bool branch_taken_0x2f6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6504) {
            ctx->pc = 0x2F6508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6504u;
            // 0x2f6508: 0x8e431208  lw          $v1, 0x1208($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F654Cu;
            goto label_2f654c;
        }
    }
    ctx->pc = 0x2F650Cu;
label_2f650c:
    // 0x2f650c: 0xc6400400  lwc1        $f0, 0x400($s2)
    ctx->pc = 0x2f650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6510:
    // 0x2f6510: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2f6510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2f6514:
    // 0x2f6514: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2f6514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6518:
    // 0x2f6518: 0x0  nop
    ctx->pc = 0x2f6518u;
    // NOP
label_2f651c:
    // 0x2f651c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f6520:
    if (ctx->pc == 0x2F6520u) {
        ctx->pc = 0x2F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F651Cu;
        // 0x2f6520: 0xe6400404  swc1        $f0, 0x404($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1028), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6524u;
        goto label_2f6524;
    }
    ctx->pc = 0x2F651Cu;
    {
        const bool branch_taken_0x2f651c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F651Cu;
        // 0x2f6520: 0xe6400404  swc1        $f0, 0x404($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f651c) {
            ctx->pc = 0x2F652Cu;
            goto label_2f652c;
        }
    }
    ctx->pc = 0x2F6524u;
label_2f6524:
    // 0x2f6524: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f6528:
    if (ctx->pc == 0x2F6528u) {
        ctx->pc = 0x2F6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6524u;
        // 0x2f6528: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F652Cu;
        goto label_2f652c;
    }
    ctx->pc = 0x2F6524u;
    {
        const bool branch_taken_0x2f6524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6524u;
        // 0x2f6528: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6524) {
            ctx->pc = 0x2F6540u;
            goto label_2f6540;
        }
    }
    ctx->pc = 0x2F652Cu;
label_2f652c:
    // 0x2f652c: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x2f652cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6530:
    // 0x2f6530: 0x0  nop
    ctx->pc = 0x2f6530u;
    // NOP
label_2f6534:
    // 0x2f6534: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2f6538:
    if (ctx->pc == 0x2F6538u) {
        ctx->pc = 0x2F6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6534u;
        // 0x2f6538: 0xae400408  sw          $zero, 0x408($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F653Cu;
        goto label_2f653c;
    }
    ctx->pc = 0x2F6534u;
    {
        const bool branch_taken_0x2f6534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6534) {
            ctx->pc = 0x2F6538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6534u;
            // 0x2f6538: 0xae400408  sw          $zero, 0x408($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6548u;
            goto label_2f6548;
        }
    }
    ctx->pc = 0x2F653Cu;
label_2f653c:
    // 0x2f653c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2f653cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2f6540:
    // 0x2f6540: 0xe6400404  swc1        $f0, 0x404($s2)
    ctx->pc = 0x2f6540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1028), bits); }
label_2f6544:
    // 0x2f6544: 0xae400408  sw          $zero, 0x408($s2)
    ctx->pc = 0x2f6544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 0));
label_2f6548:
    // 0x2f6548: 0x8e431208  lw          $v1, 0x1208($s2)
    ctx->pc = 0x2f6548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
label_2f654c:
    // 0x2f654c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6550:
    // 0x2f6550: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_2f6554:
    if (ctx->pc == 0x2F6554u) {
        ctx->pc = 0x2F6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6550u;
        // 0x2f6554: 0xe65611d4  swc1        $f22, 0x11D4($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6558u;
        goto label_2f6558;
    }
    ctx->pc = 0x2F6550u;
    {
        const bool branch_taken_0x2f6550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6550) {
            ctx->pc = 0x2F6554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6550u;
            // 0x2f6554: 0xe65611d4  swc1        $f22, 0x11D4($s2) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F65B8u;
            goto label_2f65b8;
        }
    }
    ctx->pc = 0x2F6558u;
label_2f6558:
    // 0x2f6558: 0x10000018  b           . + 4 + (0x18 << 2)
label_2f655c:
    if (ctx->pc == 0x2F655Cu) {
        ctx->pc = 0x2F655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6558u;
        // 0x2f655c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6560u;
        goto label_2f6560;
    }
    ctx->pc = 0x2F6558u;
    {
        const bool branch_taken_0x2f6558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6558u;
        // 0x2f655c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6558) {
            ctx->pc = 0x2F65BCu;
            goto label_2f65bc;
        }
    }
    ctx->pc = 0x2F6560u;
label_2f6560:
    // 0x2f6560: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x2f6560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f6564:
    // 0x2f6564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f6564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f6568:
    // 0x2f6568: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f6568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2f656c:
    // 0x2f656c: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x2f656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
label_2f6570:
    // 0x2f6570: 0x60f809  jalr        $v1
label_2f6574:
    if (ctx->pc == 0x2F6574u) {
        ctx->pc = 0x2F6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6570u;
        // 0x2f6574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6578u;
        goto label_2f6578;
    }
    ctx->pc = 0x2F6570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F6578u);
        ctx->pc = 0x2F6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6570u;
        // 0x2f6574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6570u, 0x2F6578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6578u;
label_2f6578:
    // 0x2f6578: 0x8e421208  lw          $v0, 0x1208($s2)
    ctx->pc = 0x2f6578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
label_2f657c:
    // 0x2f657c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6580:
    // 0x2f6580: 0x54440001  bnel        $v0, $a0, . + 4 + (0x1 << 2)
label_2f6584:
    if (ctx->pc == 0x2F6584u) {
        ctx->pc = 0x2F6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6580u;
        // 0x2f6584: 0xe65811d4  swc1        $f24, 0x11D4($s2) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6588u;
        goto label_2f6588;
    }
    ctx->pc = 0x2F6580u;
    {
        const bool branch_taken_0x2f6580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f6580) {
            ctx->pc = 0x2F6584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6580u;
            // 0x2f6584: 0xe65811d4  swc1        $f24, 0x11D4($s2) (Delay Slot)
            { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6588u;
            goto label_2f6588;
        }
    }
    ctx->pc = 0x2F6588u;
label_2f6588:
    // 0x2f6588: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f6588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f658c:
    // 0x2f658c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f6590:
    // 0x2f6590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f6594:
    if (ctx->pc == 0x2F6594u) {
        ctx->pc = 0x2F6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6590u;
        // 0x2f6594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6598u;
        goto label_2f6598;
    }
    ctx->pc = 0x2F6590u;
    {
        const bool branch_taken_0x2f6590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6590u;
        // 0x2f6594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6590) {
            ctx->pc = 0x2F65A8u;
            goto label_2f65a8;
        }
    }
    ctx->pc = 0x2F6598u;
label_2f6598:
    // 0x2f6598: 0x8e421208  lw          $v0, 0x1208($s2)
    ctx->pc = 0x2f6598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
label_2f659c:
    // 0x2f659c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f659cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f65a0:
    // 0x2f65a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f65a4:
    // 0x2f65a4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f65a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2f65a8:
    // 0x2f65a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2f65ac:
    if (ctx->pc == 0x2F65ACu) {
        ctx->pc = 0x2F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A8u;
        // 0x2f65ac: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65B0u;
        goto label_2f65b0;
    }
    ctx->pc = 0x2F65A8u;
    {
        const bool branch_taken_0x2f65a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A8u;
        // 0x2f65ac: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65a8) {
            ctx->pc = 0x2F65BCu;
            goto label_2f65bc;
        }
    }
    ctx->pc = 0x2F65B0u;
label_2f65b0:
    // 0x2f65b0: 0xc0bd62c  jal         func_2F58B0
label_2f65b4:
    if (ctx->pc == 0x2F65B4u) {
        ctx->pc = 0x2F65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65B0u;
        // 0x2f65b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65B8u;
        goto label_2f65b8;
    }
    ctx->pc = 0x2F65B0u;
    SET_GPR_U32(ctx, 31, 0x2F65B8u);
    ctx->pc = 0x2F65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65B0u;
    // 0x2f65b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F65B0u, 0x2F65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65B8u;
label_2f65b8:
    // 0x2f65b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2f65bc:
    // 0x2f65bc: 0xc64211d4  lwc1        $f2, 0x11D4($s2)
    ctx->pc = 0x2f65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f65c0:
    // 0x2f65c0: 0xc46096b4  lwc1        $f0, -0x694C($v1)
    ctx->pc = 0x2f65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f65c4:
    // 0x2f65c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f65c8:
    // 0x2f65c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2f65c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f65cc:
    // 0x2f65cc: 0x0  nop
    ctx->pc = 0x2f65ccu;
    // NOP
label_2f65d0:
    // 0x2f65d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f65d4:
    if (ctx->pc == 0x2F65D4u) {
        ctx->pc = 0x2F65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D0u;
        // 0x2f65d4: 0xc44196b8  lwc1        $f1, -0x6948($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65D8u;
        goto label_2f65d8;
    }
    ctx->pc = 0x2F65D0u;
    {
        const bool branch_taken_0x2f65d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D0u;
        // 0x2f65d4: 0xc44196b8  lwc1        $f1, -0x6948($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65d0) {
            ctx->pc = 0x2F65E0u;
            goto label_2f65e0;
        }
    }
    ctx->pc = 0x2F65D8u;
label_2f65d8:
    // 0x2f65d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f65dc:
    if (ctx->pc == 0x2F65DCu) {
        ctx->pc = 0x2F65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D8u;
        // 0x2f65dc: 0xe64011d4  swc1        $f0, 0x11D4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65E0u;
        goto label_2f65e0;
    }
    ctx->pc = 0x2F65D8u;
    {
        const bool branch_taken_0x2f65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D8u;
        // 0x2f65dc: 0xe64011d4  swc1        $f0, 0x11D4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65d8) {
            ctx->pc = 0x2F65F0u;
            goto label_2f65f0;
        }
    }
    ctx->pc = 0x2F65E0u;
label_2f65e0:
    // 0x2f65e0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2f65e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f65e4:
    // 0x2f65e4: 0x0  nop
    ctx->pc = 0x2f65e4u;
    // NOP
label_2f65e8:
    // 0x2f65e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f65ec:
    if (ctx->pc == 0x2F65ECu) {
        ctx->pc = 0x2F65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65E8u;
        // 0x2f65ec: 0xe64111d4  swc1        $f1, 0x11D4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65F0u;
        goto label_2f65f0;
    }
    ctx->pc = 0x2F65E8u;
    {
        const bool branch_taken_0x2f65e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f65e8) {
            ctx->pc = 0x2F65ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F65E8u;
            // 0x2f65ec: 0xe64111d4  swc1        $f1, 0x11D4($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F65F0u;
            goto label_2f65f0;
        }
    }
    ctx->pc = 0x2F65F0u;
label_2f65f0:
    // 0x2f65f0: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f65f4:
    // 0x2f65f4: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_2f65f8:
    if (ctx->pc == 0x2F65F8u) {
        ctx->pc = 0x2F65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F4u;
        // 0x2f65f8: 0x26501230  addiu       $s0, $s2, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65FCu;
        goto label_2f65fc;
    }
    ctx->pc = 0x2F65F4u;
    {
        const bool branch_taken_0x2f65f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F4u;
        // 0x2f65f8: 0x26501230  addiu       $s0, $s2, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65f4) {
            ctx->pc = 0x2F696Cu;
            goto label_2f696c;
        }
    }
    ctx->pc = 0x2F65FCu;
label_2f65fc:
    // 0x2f65fc: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f6600:
    // 0x2f6600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f6604:
    // 0x2f6604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f6608:
    if (ctx->pc == 0x2F6608u) {
        ctx->pc = 0x2F6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6604u;
        // 0x2f6608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F660Cu;
        goto label_2f660c;
    }
    ctx->pc = 0x2F6604u;
    {
        const bool branch_taken_0x2f6604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6604u;
        // 0x2f6608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6604) {
            ctx->pc = 0x2F6618u;
            goto label_2f6618;
        }
    }
    ctx->pc = 0x2F660Cu;
label_2f660c:
    // 0x2f660c: 0xc08dab6  jal         func_236AD8
label_2f6610:
    if (ctx->pc == 0x2F6610u) {
        ctx->pc = 0x2F6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F660Cu;
        // 0x2f6610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6614u;
        goto label_2f6614;
    }
    ctx->pc = 0x2F660Cu;
    SET_GPR_U32(ctx, 31, 0x2F6614u);
    ctx->pc = 0x2F6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F660Cu;
    // 0x2f6610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F660Cu, 0x2F6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6614u;
label_2f6614:
    // 0x2f6614: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2f6614u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f6618:
    // 0x2f6618: 0x8e45121c  lw          $a1, 0x121C($s2)
    ctx->pc = 0x2f6618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f661c:
    // 0x2f661c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f661cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6620:
    // 0x2f6620: 0xc0bcd58  jal         func_2F3560
label_2f6624:
    if (ctx->pc == 0x2F6624u) {
        ctx->pc = 0x2F6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6620u;
        // 0x2f6624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6628u;
        goto label_2f6628;
    }
    ctx->pc = 0x2F6620u;
    SET_GPR_U32(ctx, 31, 0x2F6628u);
    ctx->pc = 0x2F6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6620u;
    // 0x2f6624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F6620u, 0x2F6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6628u;
label_2f6628:
    // 0x2f6628: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f662c:
    // 0x2f662c: 0x90430fb8  lbu         $v1, 0xFB8($v0)
    ctx->pc = 0x2f662cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4024)));
label_2f6630:
    // 0x2f6630: 0x50600064  beql        $v1, $zero, . + 4 + (0x64 << 2)
label_2f6634:
    if (ctx->pc == 0x2F6634u) {
        ctx->pc = 0x2F6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6630u;
        // 0x2f6634: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6638u;
        goto label_2f6638;
    }
    ctx->pc = 0x2F6630u;
    {
        const bool branch_taken_0x2f6630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6630) {
            ctx->pc = 0x2F6634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6630u;
            // 0x2f6634: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F67C4u;
            goto label_2f67c4;
        }
    }
    ctx->pc = 0x2F6638u;
label_2f6638:
    // 0x2f6638: 0x52c00062  beql        $s6, $zero, . + 4 + (0x62 << 2)
label_2f663c:
    if (ctx->pc == 0x2F663Cu) {
        ctx->pc = 0x2F663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6638u;
        // 0x2f663c: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6640u;
        goto label_2f6640;
    }
    ctx->pc = 0x2F6638u;
    {
        const bool branch_taken_0x2f6638 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6638) {
            ctx->pc = 0x2F663Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6638u;
            // 0x2f663c: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F67C4u;
            goto label_2f67c4;
        }
    }
    ctx->pc = 0x2F6640u;
label_2f6640:
    // 0x2f6640: 0xc0899bc  jal         func_2266F0
label_2f6644:
    if (ctx->pc == 0x2F6644u) {
        ctx->pc = 0x2F6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6640u;
        // 0x2f6644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6648u;
        goto label_2f6648;
    }
    ctx->pc = 0x2F6640u;
    SET_GPR_U32(ctx, 31, 0x2F6648u);
    ctx->pc = 0x2F6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6640u;
    // 0x2f6644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F6640u, 0x2F6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6648u;
label_2f6648:
    // 0x2f6648: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_2f664c:
    // 0x2f664c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f6650:
    // 0x2f6650: 0xc0f6a96  jal         func_3DAA58
label_2f6654:
    if (ctx->pc == 0x2F6654u) {
        ctx->pc = 0x2F6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6650u;
        // 0x2f6654: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6658u;
        goto label_2f6658;
    }
    ctx->pc = 0x2F6650u;
    SET_GPR_U32(ctx, 31, 0x2F6658u);
    ctx->pc = 0x2F6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6650u;
    // 0x2f6654: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F6650u, 0x2F6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6658u;
label_2f6658:
    // 0x2f6658: 0xc0f6a96  jal         func_3DAA58
label_2f665c:
    if (ctx->pc == 0x2F665Cu) {
        ctx->pc = 0x2F665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6658u;
        // 0x2f665c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6660u;
        goto label_2f6660;
    }
    ctx->pc = 0x2F6658u;
    SET_GPR_U32(ctx, 31, 0x2F6660u);
    ctx->pc = 0x2F665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6658u;
    // 0x2f665c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F6658u, 0x2F6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6660u;
label_2f6660:
    // 0x2f6660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f6660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f6664:
    // 0x2f6664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f6668:
    // 0x2f6668: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f6668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f666c:
    // 0x2f666c: 0xc0bcd58  jal         func_2F3560
label_2f6670:
    if (ctx->pc == 0x2F6670u) {
        ctx->pc = 0x2F6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F666Cu;
        // 0x2f6670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6674u;
        goto label_2f6674;
    }
    ctx->pc = 0x2F666Cu;
    SET_GPR_U32(ctx, 31, 0x2F6674u);
    ctx->pc = 0x2F6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F666Cu;
    // 0x2f6670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F666Cu, 0x2F6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6674u;
label_2f6674:
    // 0x2f6674: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f6674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f6678:
    // 0x2f6678: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2f6678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_2f667c:
    // 0x2f667c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2f667cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_2f6680:
    // 0x2f6680: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f6680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6684:
    // 0x2f6684: 0x8c90036c  lw          $s0, 0x36C($a0)
    ctx->pc = 0x2f6684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
label_2f6688:
    // 0x2f6688: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2f6688u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_2f668c:
    // 0x2f668c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x2f668cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2f6690:
    // 0x2f6690: 0xc08fed2  jal         func_23FB48
label_2f6694:
    if (ctx->pc == 0x2F6694u) {
        ctx->pc = 0x2F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6690u;
        // 0x2f6694: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6698u;
        goto label_2f6698;
    }
    ctx->pc = 0x2F6690u;
    SET_GPR_U32(ctx, 31, 0x2F6698u);
    ctx->pc = 0x2F6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6690u;
    // 0x2f6694: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F6690u, 0x2F6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6698u;
label_2f6698:
    // 0x2f6698: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2f6698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f669c:
    // 0x2f669c: 0x8e45121c  lw          $a1, 0x121C($s2)
    ctx->pc = 0x2f669cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f66a0:
    // 0x2f66a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f66a4:
    // 0x2f66a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f66a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f66a8:
    // 0x2f66a8: 0xc0bcd58  jal         func_2F3560
label_2f66ac:
    if (ctx->pc == 0x2F66ACu) {
        ctx->pc = 0x2F66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66A8u;
        // 0x2f66ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66B0u;
        goto label_2f66b0;
    }
    ctx->pc = 0x2F66A8u;
    SET_GPR_U32(ctx, 31, 0x2F66B0u);
    ctx->pc = 0x2F66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66A8u;
    // 0x2f66ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F66A8u, 0x2F66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66B0u;
label_2f66b0:
    // 0x2f66b0: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f66b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f66b4:
    // 0x2f66b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f66b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f66b8:
    // 0x2f66b8: 0xc08fed2  jal         func_23FB48
label_2f66bc:
    if (ctx->pc == 0x2F66BCu) {
        ctx->pc = 0x2F66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B8u;
        // 0x2f66bc: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66C0u;
        goto label_2f66c0;
    }
    ctx->pc = 0x2F66B8u;
    SET_GPR_U32(ctx, 31, 0x2F66C0u);
    ctx->pc = 0x2F66BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66B8u;
    // 0x2f66bc: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F66B8u, 0x2F66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66C0u;
label_2f66c0:
    // 0x2f66c0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f66c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f66c4:
    // 0x2f66c4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2f66c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f66c8:
    // 0x2f66c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f66c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f66cc:
    // 0x2f66cc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f66ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f66d0:
    // 0x2f66d0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x2f66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f66d4:
    // 0x2f66d4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2f66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f66d8:
    // 0x2f66d8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2f66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f66dc:
    // 0x2f66dc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2f66dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f66e0:
    // 0x2f66e0: 0xc7a5009c  lwc1        $f5, 0x9C($sp)
    ctx->pc = 0x2f66e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f66e4:
    // 0x2f66e4: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2f66e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2f66e8:
    // 0x2f66e8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2f66e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2f66ec:
    // 0x2f66ec: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2f66ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2f66f0:
    // 0x2f66f0: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x2f66f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2f66f4:
    // 0x2f66f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f66f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f66f8:
    // 0x2f66f8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f66f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f66fc:
    // 0x2f66fc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2f66fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f6700:
    // 0x2f6700: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f6700u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f6704:
    // 0x2f6704: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f6704u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f6708:
    // 0x2f6708: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f6708u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f670c:
    // 0x2f670c: 0x46140504  c1          0x140504
    ctx->pc = 0x2f670cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2f6710:
    // 0x2f6710: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x2f6710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6714:
    // 0x2f6714: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f6714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6718:
    // 0x2f6718: 0x0  nop
    ctx->pc = 0x2f6718u;
    // NOP
label_2f671c:
    // 0x2f671c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_2f6720:
    if (ctx->pc == 0x2F6720u) {
        ctx->pc = 0x2F6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F671Cu;
        // 0x2f6720: 0xc6610064  lwc1        $f1, 0x64($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6724u;
        goto label_2f6724;
    }
    ctx->pc = 0x2F671Cu;
    {
        const bool branch_taken_0x2f671c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f671c) {
            ctx->pc = 0x2F6720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F671Cu;
            // 0x2f6720: 0xc6610064  lwc1        $f1, 0x64($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6750u;
            goto label_2f6750;
        }
    }
    ctx->pc = 0x2F6724u;
label_2f6724:
    // 0x2f6724: 0xc6401244  lwc1        $f0, 0x1244($s2)
    ctx->pc = 0x2f6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6728:
    // 0x2f6728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f6728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f672c:
    // 0x2f672c: 0x0  nop
    ctx->pc = 0x2f672cu;
    // NOP
label_2f6730:
    // 0x2f6730: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f6734:
    if (ctx->pc == 0x2F6734u) {
        ctx->pc = 0x2F6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6730u;
        // 0x2f6734: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6738u;
        goto label_2f6738;
    }
    ctx->pc = 0x2F6730u;
    {
        const bool branch_taken_0x2f6730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6730u;
        // 0x2f6734: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6730) {
            ctx->pc = 0x2F674Cu;
            goto label_2f674c;
        }
    }
    ctx->pc = 0x2F6738u;
label_2f6738:
    // 0x2f6738: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f6738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f673c:
    // 0x2f673c: 0xc08fed2  jal         func_23FB48
label_2f6740:
    if (ctx->pc == 0x2F6740u) {
        ctx->pc = 0x2F6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F673Cu;
        // 0x2f6740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6744u;
        goto label_2f6744;
    }
    ctx->pc = 0x2F673Cu;
    SET_GPR_U32(ctx, 31, 0x2F6744u);
    ctx->pc = 0x2F6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F673Cu;
    // 0x2f6740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F673Cu, 0x2F6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6744u;
label_2f6744:
    // 0x2f6744: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f6748:
    if (ctx->pc == 0x2F6748u) {
        ctx->pc = 0x2F6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6744u;
        // 0x2f6748: 0xe6541244  swc1        $f20, 0x1244($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F674Cu;
        goto label_2f674c;
    }
    ctx->pc = 0x2F6744u;
    {
        const bool branch_taken_0x2f6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6744u;
        // 0x2f6748: 0xe6541244  swc1        $f20, 0x1244($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6744) {
            ctx->pc = 0x2F6794u;
            goto label_2f6794;
        }
    }
    ctx->pc = 0x2F674Cu;
label_2f674c:
    // 0x2f674c: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x2f674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6750:
    // 0x2f6750: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f6754:
    // 0x2f6754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6758:
    // 0x2f6758: 0x0  nop
    ctx->pc = 0x2f6758u;
    // NOP
label_2f675c:
    // 0x2f675c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f675cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f6760:
    // 0x2f6760: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x2f6760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6764:
    // 0x2f6764: 0x0  nop
    ctx->pc = 0x2f6764u;
    // NOP
label_2f6768:
    // 0x2f6768: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_2f676c:
    if (ctx->pc == 0x2F676Cu) {
        ctx->pc = 0x2F676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6768u;
        // 0x2f676c: 0xe6541244  swc1        $f20, 0x1244($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6770u;
        goto label_2f6770;
    }
    ctx->pc = 0x2F6768u;
    {
        const bool branch_taken_0x2f6768 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6768) {
            ctx->pc = 0x2F676Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6768u;
            // 0x2f676c: 0xe6541244  swc1        $f20, 0x1244($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4676), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6794u;
            goto label_2f6794;
        }
    }
    ctx->pc = 0x2F6770u;
label_2f6770:
    // 0x2f6770: 0xc6401244  lwc1        $f0, 0x1244($s2)
    ctx->pc = 0x2f6770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6774:
    // 0x2f6774: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f6774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6778:
    // 0x2f6778: 0x0  nop
    ctx->pc = 0x2f6778u;
    // NOP
label_2f677c:
    // 0x2f677c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2f6780:
    if (ctx->pc == 0x2F6780u) {
        ctx->pc = 0x2F6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F677Cu;
        // 0x2f6780: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6784u;
        goto label_2f6784;
    }
    ctx->pc = 0x2F677Cu;
    {
        const bool branch_taken_0x2f677c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F677Cu;
        // 0x2f6780: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f677c) {
            ctx->pc = 0x2F6790u;
            goto label_2f6790;
        }
    }
    ctx->pc = 0x2F6784u;
label_2f6784:
    // 0x2f6784: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f6784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f6788:
    // 0x2f6788: 0xc08fed2  jal         func_23FB48
label_2f678c:
    if (ctx->pc == 0x2F678Cu) {
        ctx->pc = 0x2F678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6788u;
        // 0x2f678c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6790u;
        goto label_2f6790;
    }
    ctx->pc = 0x2F6788u;
    SET_GPR_U32(ctx, 31, 0x2F6790u);
    ctx->pc = 0x2F678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6788u;
    // 0x2f678c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F6788u, 0x2F6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6790u;
label_2f6790:
    // 0x2f6790: 0xe6541244  swc1        $f20, 0x1244($s2)
    ctx->pc = 0x2f6790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4676), bits); }
label_2f6794:
    // 0x2f6794: 0xc0899bc  jal         func_2266F0
label_2f6798:
    if (ctx->pc == 0x2F6798u) {
        ctx->pc = 0x2F6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6794u;
        // 0x2f6798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F679Cu;
        goto label_2f679c;
    }
    ctx->pc = 0x2F6794u;
    SET_GPR_U32(ctx, 31, 0x2F679Cu);
    ctx->pc = 0x2F6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6794u;
    // 0x2f6798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F6794u, 0x2F679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F679Cu;
label_2f679c:
    // 0x2f679c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2f679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2f67a0:
    // 0x2f67a0: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2f67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2f67a4:
    // 0x2f67a4: 0x8c620220  lw          $v0, 0x220($v1)
    ctx->pc = 0x2f67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
label_2f67a8:
    // 0x2f67a8: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
label_2f67ac:
    if (ctx->pc == 0x2F67ACu) {
        ctx->pc = 0x2F67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67A8u;
        // 0x2f67ac: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67B0u;
        goto label_2f67b0;
    }
    ctx->pc = 0x2F67A8u;
    {
        const bool branch_taken_0x2f67a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f67a8) {
            ctx->pc = 0x2F67ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F67A8u;
            // 0x2f67ac: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F67C4u;
            goto label_2f67c4;
        }
    }
    ctx->pc = 0x2F67B0u;
label_2f67b0:
    // 0x2f67b0: 0x8e44121c  lw          $a0, 0x121C($s2)
    ctx->pc = 0x2f67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f67b4:
    // 0x2f67b4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2f67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_2f67b8:
    // 0x2f67b8: 0xc08fed2  jal         func_23FB48
label_2f67bc:
    if (ctx->pc == 0x2F67BCu) {
        ctx->pc = 0x2F67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67B8u;
        // 0x2f67bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67C0u;
        goto label_2f67c0;
    }
    ctx->pc = 0x2F67B8u;
    SET_GPR_U32(ctx, 31, 0x2F67C0u);
    ctx->pc = 0x2F67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67B8u;
    // 0x2f67bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F67B8u, 0x2F67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67C0u;
label_2f67c0:
    // 0x2f67c0: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2f67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f67c4:
    // 0x2f67c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f67c8:
    // 0x2f67c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f67cc:
    if (ctx->pc == 0x2F67CCu) {
        ctx->pc = 0x2F67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67C8u;
        // 0x2f67cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67D0u;
        goto label_2f67d0;
    }
    ctx->pc = 0x2F67C8u;
    {
        const bool branch_taken_0x2f67c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67C8u;
        // 0x2f67cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67c8) {
            ctx->pc = 0x2F67D8u;
            goto label_2f67d8;
        }
    }
    ctx->pc = 0x2F67D0u;
label_2f67d0:
    // 0x2f67d0: 0x8e421208  lw          $v0, 0x1208($s2)
    ctx->pc = 0x2f67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
label_2f67d4:
    // 0x2f67d4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2f67d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f67d8:
    // 0x2f67d8: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_2f67dc:
    if (ctx->pc == 0x2F67DCu) {
        ctx->pc = 0x2F67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67D8u;
        // 0x2f67dc: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67E0u;
        goto label_2f67e0;
    }
    ctx->pc = 0x2F67D8u;
    {
        const bool branch_taken_0x2f67d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67D8u;
        // 0x2f67dc: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67d8) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F67E0u;
label_2f67e0:
    // 0x2f67e0: 0x12a00064  beqz        $s5, . + 4 + (0x64 << 2)
label_2f67e4:
    if (ctx->pc == 0x2F67E4u) {
        ctx->pc = 0x2F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67E0u;
        // 0x2f67e4: 0xdfb10138  ld          $s1, 0x138($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F67E8u;
        goto label_2f67e8;
    }
    ctx->pc = 0x2F67E0u;
    {
        const bool branch_taken_0x2f67e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67E0u;
        // 0x2f67e4: 0xdfb10138  ld          $s1, 0x138($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67e0) {
            ctx->pc = 0x2F6974u;
            goto label_2f6974;
        }
    }
    ctx->pc = 0x2F67E8u;
label_2f67e8:
    // 0x2f67e8: 0x8e45121c  lw          $a1, 0x121C($s2)
    ctx->pc = 0x2f67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f67ec:
    // 0x2f67ec: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f67f0:
    // 0x2f67f0: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x2f67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_2f67f4:
    // 0x2f67f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f67f8:
    // 0x2f67f8: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x2f67f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f67fc:
    // 0x2f67fc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f6800:
    // 0x2f6800: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2f6800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2f6804:
    // 0x2f6804: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6808:
    // 0x2f6808: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f6808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2f680c:
    // 0x2f680c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6810:
    // 0x2f6810: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2f6810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2f6814:
    // 0x2f6814: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f6814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6818:
    // 0x2f6818: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f6818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2f681c:
    // 0x2f681c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6820:
    // 0x2f6820: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f6824:
    // 0x2f6824: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f6824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6828:
    // 0x2f6828: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2f6828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f682c:
    // 0x2f682c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f682cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f6830:
    // 0x2f6830: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2f6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f6834:
    // 0x2f6834: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x2f6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f6838:
    // 0x2f6838: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2f6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f683c:
    // 0x2f683c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6840:
    // 0x2f6840: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x2f6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f6844:
    // 0x2f6844: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f6844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2f6848:
    // 0x2f6848: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2f6848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2f684c:
    // 0x2f684c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2f684cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2f6850:
    // 0x2f6850: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x2f6850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2f6854:
    // 0x2f6854: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6858:
    // 0x2f6858: 0xc4540074  lwc1        $f20, 0x74($v0)
    ctx->pc = 0x2f6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f685c:
    // 0x2f685c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2f685cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_2f6860:
    // 0x2f6860: 0xc06b600  jal         func_1AD800
label_2f6864:
    if (ctx->pc == 0x2F6864u) {
        ctx->pc = 0x2F6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6860u;
        // 0x2f6864: 0x8ca40334  lw          $a0, 0x334($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6868u;
        goto label_2f6868;
    }
    ctx->pc = 0x2F6860u;
    SET_GPR_U32(ctx, 31, 0x2F6868u);
    ctx->pc = 0x2F6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6860u;
    // 0x2f6864: 0x8ca40334  lw          $a0, 0x334($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2F6860u, 0x2F6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6868u;
label_2f6868:
    // 0x2f6868: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f686c:
    if (ctx->pc == 0x2F686Cu) {
        ctx->pc = 0x2F6870u;
        goto label_2f6870;
    }
    ctx->pc = 0x2F6868u;
    {
        const bool branch_taken_0x2f6868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6868) {
            ctx->pc = 0x2F688Cu;
            goto label_2f688c;
        }
    }
    ctx->pc = 0x2F6870u;
label_2f6870:
    // 0x2f6870: 0xc0899bc  jal         func_2266F0
label_2f6874:
    if (ctx->pc == 0x2F6874u) {
        ctx->pc = 0x2F6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6870u;
        // 0x2f6874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6878u;
        goto label_2f6878;
    }
    ctx->pc = 0x2F6870u;
    SET_GPR_U32(ctx, 31, 0x2F6878u);
    ctx->pc = 0x2F6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6870u;
    // 0x2f6874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F6870u, 0x2F6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6878u;
label_2f6878:
    // 0x2f6878: 0xc097f26  jal         func_25FC98
label_2f687c:
    if (ctx->pc == 0x2F687Cu) {
        ctx->pc = 0x2F687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6878u;
        // 0x2f687c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6880u;
        goto label_2f6880;
    }
    ctx->pc = 0x2F6878u;
    SET_GPR_U32(ctx, 31, 0x2F6880u);
    ctx->pc = 0x2F687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6878u;
    // 0x2f687c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F6878u, 0x2F6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6880u;
label_2f6880:
    // 0x2f6880: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2f6880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2f6884:
    // 0x2f6884: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
label_2f6888:
    if (ctx->pc == 0x2F6888u) {
        ctx->pc = 0x2F6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6884u;
        // 0x2f6888: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F688Cu;
        goto label_2f688c;
    }
    ctx->pc = 0x2F6884u;
    {
        const bool branch_taken_0x2f6884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6884u;
        // 0x2f6888: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6884) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F688Cu;
label_2f688c:
    // 0x2f688c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2f688cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2f6890:
    // 0x2f6890: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f6890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f6894:
    // 0x2f6894: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2f6894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2f6898:
    // 0x2f6898: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f6898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f689c:
    // 0x2f689c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f68a0:
    // 0x2f68a0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f68a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f68a4:
    // 0x2f68a4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2f68a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f68a8:
    // 0x2f68a8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f68a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f68ac:
    // 0x2f68ac: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f68acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f68b0:
    // 0x2f68b0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f68b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f68b4:
    // 0x2f68b4: 0x46000004  c1          0x4
    ctx->pc = 0x2f68b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2f68b8:
    // 0x2f68b8: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2f68b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f68bc:
    // 0x2f68bc: 0x0  nop
    ctx->pc = 0x2f68bcu;
    // NOP
label_2f68c0:
    // 0x2f68c0: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_2f68c4:
    if (ctx->pc == 0x2F68C4u) {
        ctx->pc = 0x2F68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68C0u;
        // 0x2f68c4: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F68C8u;
        goto label_2f68c8;
    }
    ctx->pc = 0x2F68C0u;
    {
        const bool branch_taken_0x2f68c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68C0u;
        // 0x2f68c4: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68c0) {
            ctx->pc = 0x2F6970u;
            goto label_2f6970;
        }
    }
    ctx->pc = 0x2F68C8u;
label_2f68c8:
    // 0x2f68c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f68c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f68cc:
    // 0x2f68cc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f68ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f68d0:
    // 0x2f68d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f68d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f68d4:
    // 0x2f68d4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f68d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f68d8:
    // 0x2f68d8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f68d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f68dc:
    // 0x2f68dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f68dcu;
    // VWAITQ (Q already resolved in this runtime)
label_2f68e0:
    // 0x2f68e0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f68e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f68e4:
    // 0x2f68e4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f68e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f68e8:
    // 0x2f68e8: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2f68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f68ec:
    // 0x2f68ec: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f68f0:
    // 0x2f68f0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2f68f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f68f4:
    // 0x2f68f4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2f68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f68f8:
    // 0x2f68f8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2f68f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2f68fc:
    // 0x2f68fc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f68fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6900:
    // 0x2f6900: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2f6900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2f6904:
    // 0x2f6904: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f6908:
    // 0x2f6908: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2f6908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_2f690c:
    // 0x2f690c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2f690cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2f6910:
    // 0x2f6910: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f6910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6914:
    // 0x2f6914: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2f6914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2f6918:
    // 0x2f6918: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2f6918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2f691c:
    // 0x2f691c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2f691cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2f6920:
    // 0x2f6920: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f6920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2f6924:
    // 0x2f6924: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f6924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f6928:
    // 0x2f6928: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2f6928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f692c:
    // 0x2f692c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f692cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f6930:
    // 0x2f6930: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f6930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f6934:
    // 0x2f6934: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2f6934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f6938:
    // 0x2f6938: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2f6938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f693c:
    // 0x2f693c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6940:
    // 0x2f6940: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2f6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6944:
    // 0x2f6944: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x2f6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f6948:
    // 0x2f6948: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2f6948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2f694c:
    // 0x2f694c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2f694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2f6950:
    // 0x2f6950: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2f6950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2f6954:
    // 0x2f6954: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x2f6954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2f6958:
    // 0x2f6958: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f6958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f695c:
    // 0x2f695c: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2f695cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f6960:
    // 0x2f6960: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f6964:
    // 0x2f6964: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6968:
    // 0x2f6968: 0xe4740074  swc1        $f20, 0x74($v1)
    ctx->pc = 0x2f6968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_2f696c:
    // 0x2f696c: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x2f696cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2f6970:
    // 0x2f6970: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x2f6970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_2f6974:
    // 0x2f6974: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x2f6974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2f6978:
    // 0x2f6978: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x2f6978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_2f697c:
    // 0x2f697c: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x2f697cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2f6980:
    // 0x2f6980: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x2f6980u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_2f6984:
    // 0x2f6984: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x2f6984u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2f6988:
    // 0x2f6988: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x2f6988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_2f698c:
    // 0x2f698c: 0xc7ba01a0  lwc1        $f26, 0x1A0($sp)
    ctx->pc = 0x2f698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2f6990:
    // 0x2f6990: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x2f6990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2f6994:
    // 0x2f6994: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x2f6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2f6998:
    // 0x2f6998: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x2f6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f699c:
    // 0x2f699c: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x2f699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f69a0:
    // 0x2f69a0: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2f69a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f69a4:
    // 0x2f69a4: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2f69a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f69a8:
    // 0x2f69a8: 0x3e00008  jr          $ra
label_2f69ac:
    if (ctx->pc == 0x2F69ACu) {
        ctx->pc = 0x2F69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69A8u;
        // 0x2f69ac: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F69B0u;
        goto label_fallthrough_0x2f69a8;
    }
    ctx->pc = 0x2F69A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69A8u;
        // 0x2f69ac: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F69A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f69a8:
    ctx->pc = 0x2F69B0u;
}
