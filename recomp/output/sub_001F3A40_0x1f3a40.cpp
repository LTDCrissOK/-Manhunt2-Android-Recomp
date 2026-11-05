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

// Function: sub_001F3A40
// Address: 0x1f3a40 - 0x1f40c8
void sub_001F3A40_0x1f3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3A40_0x1f3a40");
#endif

    switch (ctx->pc) {
        case 0x1f3a40u: goto label_1f3a40;
        case 0x1f3a44u: goto label_1f3a44;
        case 0x1f3a48u: goto label_1f3a48;
        case 0x1f3a4cu: goto label_1f3a4c;
        case 0x1f3a50u: goto label_1f3a50;
        case 0x1f3a54u: goto label_1f3a54;
        case 0x1f3a58u: goto label_1f3a58;
        case 0x1f3a5cu: goto label_1f3a5c;
        case 0x1f3a60u: goto label_1f3a60;
        case 0x1f3a64u: goto label_1f3a64;
        case 0x1f3a68u: goto label_1f3a68;
        case 0x1f3a6cu: goto label_1f3a6c;
        case 0x1f3a70u: goto label_1f3a70;
        case 0x1f3a74u: goto label_1f3a74;
        case 0x1f3a78u: goto label_1f3a78;
        case 0x1f3a7cu: goto label_1f3a7c;
        case 0x1f3a80u: goto label_1f3a80;
        case 0x1f3a84u: goto label_1f3a84;
        case 0x1f3a88u: goto label_1f3a88;
        case 0x1f3a8cu: goto label_1f3a8c;
        case 0x1f3a90u: goto label_1f3a90;
        case 0x1f3a94u: goto label_1f3a94;
        case 0x1f3a98u: goto label_1f3a98;
        case 0x1f3a9cu: goto label_1f3a9c;
        case 0x1f3aa0u: goto label_1f3aa0;
        case 0x1f3aa4u: goto label_1f3aa4;
        case 0x1f3aa8u: goto label_1f3aa8;
        case 0x1f3aacu: goto label_1f3aac;
        case 0x1f3ab0u: goto label_1f3ab0;
        case 0x1f3ab4u: goto label_1f3ab4;
        case 0x1f3ab8u: goto label_1f3ab8;
        case 0x1f3abcu: goto label_1f3abc;
        case 0x1f3ac0u: goto label_1f3ac0;
        case 0x1f3ac4u: goto label_1f3ac4;
        case 0x1f3ac8u: goto label_1f3ac8;
        case 0x1f3accu: goto label_1f3acc;
        case 0x1f3ad0u: goto label_1f3ad0;
        case 0x1f3ad4u: goto label_1f3ad4;
        case 0x1f3ad8u: goto label_1f3ad8;
        case 0x1f3adcu: goto label_1f3adc;
        case 0x1f3ae0u: goto label_1f3ae0;
        case 0x1f3ae4u: goto label_1f3ae4;
        case 0x1f3ae8u: goto label_1f3ae8;
        case 0x1f3aecu: goto label_1f3aec;
        case 0x1f3af0u: goto label_1f3af0;
        case 0x1f3af4u: goto label_1f3af4;
        case 0x1f3af8u: goto label_1f3af8;
        case 0x1f3afcu: goto label_1f3afc;
        case 0x1f3b00u: goto label_1f3b00;
        case 0x1f3b04u: goto label_1f3b04;
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b0cu: goto label_1f3b0c;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b14u: goto label_1f3b14;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b1cu: goto label_1f3b1c;
        case 0x1f3b20u: goto label_1f3b20;
        case 0x1f3b24u: goto label_1f3b24;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b2cu: goto label_1f3b2c;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b34u: goto label_1f3b34;
        case 0x1f3b38u: goto label_1f3b38;
        case 0x1f3b3cu: goto label_1f3b3c;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b44u: goto label_1f3b44;
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3b4cu: goto label_1f3b4c;
        case 0x1f3b50u: goto label_1f3b50;
        case 0x1f3b54u: goto label_1f3b54;
        case 0x1f3b58u: goto label_1f3b58;
        case 0x1f3b5cu: goto label_1f3b5c;
        case 0x1f3b60u: goto label_1f3b60;
        case 0x1f3b64u: goto label_1f3b64;
        case 0x1f3b68u: goto label_1f3b68;
        case 0x1f3b6cu: goto label_1f3b6c;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b74u: goto label_1f3b74;
        case 0x1f3b78u: goto label_1f3b78;
        case 0x1f3b7cu: goto label_1f3b7c;
        case 0x1f3b80u: goto label_1f3b80;
        case 0x1f3b84u: goto label_1f3b84;
        case 0x1f3b88u: goto label_1f3b88;
        case 0x1f3b8cu: goto label_1f3b8c;
        case 0x1f3b90u: goto label_1f3b90;
        case 0x1f3b94u: goto label_1f3b94;
        case 0x1f3b98u: goto label_1f3b98;
        case 0x1f3b9cu: goto label_1f3b9c;
        case 0x1f3ba0u: goto label_1f3ba0;
        case 0x1f3ba4u: goto label_1f3ba4;
        case 0x1f3ba8u: goto label_1f3ba8;
        case 0x1f3bacu: goto label_1f3bac;
        case 0x1f3bb0u: goto label_1f3bb0;
        case 0x1f3bb4u: goto label_1f3bb4;
        case 0x1f3bb8u: goto label_1f3bb8;
        case 0x1f3bbcu: goto label_1f3bbc;
        case 0x1f3bc0u: goto label_1f3bc0;
        case 0x1f3bc4u: goto label_1f3bc4;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bccu: goto label_1f3bcc;
        case 0x1f3bd0u: goto label_1f3bd0;
        case 0x1f3bd4u: goto label_1f3bd4;
        case 0x1f3bd8u: goto label_1f3bd8;
        case 0x1f3bdcu: goto label_1f3bdc;
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3be4u: goto label_1f3be4;
        case 0x1f3be8u: goto label_1f3be8;
        case 0x1f3becu: goto label_1f3bec;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3bf4u: goto label_1f3bf4;
        case 0x1f3bf8u: goto label_1f3bf8;
        case 0x1f3bfcu: goto label_1f3bfc;
        case 0x1f3c00u: goto label_1f3c00;
        case 0x1f3c04u: goto label_1f3c04;
        case 0x1f3c08u: goto label_1f3c08;
        case 0x1f3c0cu: goto label_1f3c0c;
        case 0x1f3c10u: goto label_1f3c10;
        case 0x1f3c14u: goto label_1f3c14;
        case 0x1f3c18u: goto label_1f3c18;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c20u: goto label_1f3c20;
        case 0x1f3c24u: goto label_1f3c24;
        case 0x1f3c28u: goto label_1f3c28;
        case 0x1f3c2cu: goto label_1f3c2c;
        case 0x1f3c30u: goto label_1f3c30;
        case 0x1f3c34u: goto label_1f3c34;
        case 0x1f3c38u: goto label_1f3c38;
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3c40u: goto label_1f3c40;
        case 0x1f3c44u: goto label_1f3c44;
        case 0x1f3c48u: goto label_1f3c48;
        case 0x1f3c4cu: goto label_1f3c4c;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c5cu: goto label_1f3c5c;
        case 0x1f3c60u: goto label_1f3c60;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c6cu: goto label_1f3c6c;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c74u: goto label_1f3c74;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c84u: goto label_1f3c84;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c90u: goto label_1f3c90;
        case 0x1f3c94u: goto label_1f3c94;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3c9cu: goto label_1f3c9c;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3cb0u: goto label_1f3cb0;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cc0u: goto label_1f3cc0;
        case 0x1f3cc4u: goto label_1f3cc4;
        case 0x1f3cc8u: goto label_1f3cc8;
        case 0x1f3cccu: goto label_1f3ccc;
        case 0x1f3cd0u: goto label_1f3cd0;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3cd8u: goto label_1f3cd8;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3ce0u: goto label_1f3ce0;
        case 0x1f3ce4u: goto label_1f3ce4;
        case 0x1f3ce8u: goto label_1f3ce8;
        case 0x1f3cecu: goto label_1f3cec;
        case 0x1f3cf0u: goto label_1f3cf0;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3cf8u: goto label_1f3cf8;
        case 0x1f3cfcu: goto label_1f3cfc;
        case 0x1f3d00u: goto label_1f3d00;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d08u: goto label_1f3d08;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d14u: goto label_1f3d14;
        case 0x1f3d18u: goto label_1f3d18;
        case 0x1f3d1cu: goto label_1f3d1c;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d28u: goto label_1f3d28;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d30u: goto label_1f3d30;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d38u: goto label_1f3d38;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d40u: goto label_1f3d40;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d48u: goto label_1f3d48;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d50u: goto label_1f3d50;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d68u: goto label_1f3d68;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d78u: goto label_1f3d78;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d80u: goto label_1f3d80;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d90u: goto label_1f3d90;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d98u: goto label_1f3d98;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3da4u: goto label_1f3da4;
        case 0x1f3da8u: goto label_1f3da8;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3db8u: goto label_1f3db8;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dc4u: goto label_1f3dc4;
        case 0x1f3dc8u: goto label_1f3dc8;
        case 0x1f3dccu: goto label_1f3dcc;
        case 0x1f3dd0u: goto label_1f3dd0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3dd8u: goto label_1f3dd8;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3de0u: goto label_1f3de0;
        case 0x1f3de4u: goto label_1f3de4;
        case 0x1f3de8u: goto label_1f3de8;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df0u: goto label_1f3df0;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3dfcu: goto label_1f3dfc;
        case 0x1f3e00u: goto label_1f3e00;
        case 0x1f3e04u: goto label_1f3e04;
        case 0x1f3e08u: goto label_1f3e08;
        case 0x1f3e0cu: goto label_1f3e0c;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e14u: goto label_1f3e14;
        case 0x1f3e18u: goto label_1f3e18;
        case 0x1f3e1cu: goto label_1f3e1c;
        case 0x1f3e20u: goto label_1f3e20;
        case 0x1f3e24u: goto label_1f3e24;
        case 0x1f3e28u: goto label_1f3e28;
        case 0x1f3e2cu: goto label_1f3e2c;
        case 0x1f3e30u: goto label_1f3e30;
        case 0x1f3e34u: goto label_1f3e34;
        case 0x1f3e38u: goto label_1f3e38;
        case 0x1f3e3cu: goto label_1f3e3c;
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3e44u: goto label_1f3e44;
        case 0x1f3e48u: goto label_1f3e48;
        case 0x1f3e4cu: goto label_1f3e4c;
        case 0x1f3e50u: goto label_1f3e50;
        case 0x1f3e54u: goto label_1f3e54;
        case 0x1f3e58u: goto label_1f3e58;
        case 0x1f3e5cu: goto label_1f3e5c;
        case 0x1f3e60u: goto label_1f3e60;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e68u: goto label_1f3e68;
        case 0x1f3e6cu: goto label_1f3e6c;
        case 0x1f3e70u: goto label_1f3e70;
        case 0x1f3e74u: goto label_1f3e74;
        case 0x1f3e78u: goto label_1f3e78;
        case 0x1f3e7cu: goto label_1f3e7c;
        case 0x1f3e80u: goto label_1f3e80;
        case 0x1f3e84u: goto label_1f3e84;
        case 0x1f3e88u: goto label_1f3e88;
        case 0x1f3e8cu: goto label_1f3e8c;
        case 0x1f3e90u: goto label_1f3e90;
        case 0x1f3e94u: goto label_1f3e94;
        case 0x1f3e98u: goto label_1f3e98;
        case 0x1f3e9cu: goto label_1f3e9c;
        case 0x1f3ea0u: goto label_1f3ea0;
        case 0x1f3ea4u: goto label_1f3ea4;
        case 0x1f3ea8u: goto label_1f3ea8;
        case 0x1f3eacu: goto label_1f3eac;
        case 0x1f3eb0u: goto label_1f3eb0;
        case 0x1f3eb4u: goto label_1f3eb4;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ebcu: goto label_1f3ebc;
        case 0x1f3ec0u: goto label_1f3ec0;
        case 0x1f3ec4u: goto label_1f3ec4;
        case 0x1f3ec8u: goto label_1f3ec8;
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3ed4u: goto label_1f3ed4;
        case 0x1f3ed8u: goto label_1f3ed8;
        case 0x1f3edcu: goto label_1f3edc;
        case 0x1f3ee0u: goto label_1f3ee0;
        case 0x1f3ee4u: goto label_1f3ee4;
        case 0x1f3ee8u: goto label_1f3ee8;
        case 0x1f3eecu: goto label_1f3eec;
        case 0x1f3ef0u: goto label_1f3ef0;
        case 0x1f3ef4u: goto label_1f3ef4;
        case 0x1f3ef8u: goto label_1f3ef8;
        case 0x1f3efcu: goto label_1f3efc;
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f04u: goto label_1f3f04;
        case 0x1f3f08u: goto label_1f3f08;
        case 0x1f3f0cu: goto label_1f3f0c;
        case 0x1f3f10u: goto label_1f3f10;
        case 0x1f3f14u: goto label_1f3f14;
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f1cu: goto label_1f3f1c;
        case 0x1f3f20u: goto label_1f3f20;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f28u: goto label_1f3f28;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f30u: goto label_1f3f30;
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f38u: goto label_1f3f38;
        case 0x1f3f3cu: goto label_1f3f3c;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f4cu: goto label_1f3f4c;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f54u: goto label_1f3f54;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f68u: goto label_1f3f68;
        case 0x1f3f6cu: goto label_1f3f6c;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3f74u: goto label_1f3f74;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3f80u: goto label_1f3f80;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3f88u: goto label_1f3f88;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3f90u: goto label_1f3f90;
        case 0x1f3f94u: goto label_1f3f94;
        case 0x1f3f98u: goto label_1f3f98;
        case 0x1f3f9cu: goto label_1f3f9c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f4090u: goto label_1f4090;
        case 0x1f4094u: goto label_1f4094;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f409cu: goto label_1f409c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a4u: goto label_1f40a4;
        case 0x1f40a8u: goto label_1f40a8;
        case 0x1f40acu: goto label_1f40ac;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40b4u: goto label_1f40b4;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40bcu: goto label_1f40bc;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40c4u: goto label_1f40c4;
        default: break;
    }

    ctx->pc = 0x1f3a40u;

label_1f3a40:
    // 0x1f3a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f3a44:
    // 0x1f3a44: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3a48:
    // 0x1f3a48: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1f3a4c:
    // 0x1f3a4c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f3a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3a50:
    // 0x1f3a50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1f3a54:
    // 0x1f3a54: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x1f3a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f3a58:
    // 0x1f3a58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f3a5c:
    // 0x1f3a5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1f3a60:
    // 0x1f3a60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f3a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3a64:
    // 0x1f3a64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1f3a68:
    // 0x1f3a68: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1f3a6c:
    // 0x1f3a6c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1f3a70:
    // 0x1f3a70: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3a74:
    // 0x1f3a74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f3a78:
    // 0x1f3a78: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f3a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f3a7c:
    // 0x1f3a7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1f3a80:
    // 0x1f3a80: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1f3a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1f3a84:
    // 0x1f3a84: 0x8c574f94  lw          $s7, 0x4F94($v0)
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
label_1f3a88:
    // 0x1f3a88: 0x12e00182  beqz        $s7, . + 4 + (0x182 << 2)
label_1f3a8c:
    if (ctx->pc == 0x1F3A8Cu) {
        ctx->pc = 0x1F3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A88u;
        // 0x1f3a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3A90u;
        goto label_1f3a90;
    }
    ctx->pc = 0x1F3A88u;
    {
        const bool branch_taken_0x1f3a88 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A88u;
        // 0x1f3a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a88) {
            ctx->pc = 0x1F4094u;
            goto label_1f4094;
        }
    }
    ctx->pc = 0x1F3A90u;
label_1f3a90:
    // 0x1f3a90: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1f3a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f3a94:
    // 0x1f3a94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f3a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3a98:
    // 0x1f3a98: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1f3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1f3a9c:
    // 0x1f3a9c: 0x8c8213c0  lw          $v0, 0x13C0($a0)
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5056)));
label_1f3aa0:
    // 0x1f3aa0: 0x8c8313c4  lw          $v1, 0x13C4($a0)
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5060)));
label_1f3aa4:
    // 0x1f3aa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f3aa8:
    // 0x1f3aa8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f3aac:
    // 0x1f3aac: 0xc2282a  slt         $a1, $a2, $v0
    ctx->pc = 0x1f3aacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f3ab0:
    // 0x1f3ab0: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1f3ab0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f3ab4:
    // 0x1f3ab4: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1f3ab4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f3ab8:
    // 0x1f3ab8: 0x6180a  movz        $v1, $zero, $a2
    ctx->pc = 0x1f3ab8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1f3abc:
    // 0x1f3abc: 0xac8213c0  sw          $v0, 0x13C0($a0)
    ctx->pc = 0x1f3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5056), GPR_U32(ctx, 2));
label_1f3ac0:
    // 0x1f3ac0: 0xac8313c4  sw          $v1, 0x13C4($a0)
    ctx->pc = 0x1f3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5060), GPR_U32(ctx, 3));
label_1f3ac4:
    // 0x1f3ac4: 0x90e24fb8  lbu         $v0, 0x4FB8($a3)
    ctx->pc = 0x1f3ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20408)));
label_1f3ac8:
    // 0x1f3ac8: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_1f3acc:
    if (ctx->pc == 0x1F3ACCu) {
        ctx->pc = 0x1F3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AC8u;
        // 0x1f3acc: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3AD0u;
        goto label_1f3ad0;
    }
    ctx->pc = 0x1F3AC8u;
    {
        const bool branch_taken_0x1f3ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AC8u;
        // 0x1f3acc: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ac8) {
            ctx->pc = 0x1F3EC0u;
            goto label_1f3ec0;
        }
    }
    ctx->pc = 0x1F3AD0u;
label_1f3ad0:
    // 0x1f3ad0: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
label_1f3ad4:
    if (ctx->pc == 0x1F3AD4u) {
        ctx->pc = 0x1F3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AD0u;
        // 0x1f3ad4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3AD8u;
        goto label_1f3ad8;
    }
    ctx->pc = 0x1F3AD0u;
    {
        const bool branch_taken_0x1f3ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AD0u;
        // 0x1f3ad4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ad0) {
            ctx->pc = 0x1F3EC0u;
            goto label_1f3ec0;
        }
    }
    ctx->pc = 0x1F3AD8u;
label_1f3ad8:
    // 0x1f3ad8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3adc:
    // 0x1f3adc: 0x0  nop
    ctx->pc = 0x1f3adcu;
    // NOP
label_1f3ae0:
    // 0x1f3ae0: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1f3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_1f3ae4:
    // 0x1f3ae4: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x1f3ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1f3ae8:
    // 0x1f3ae8: 0x26634fa0  addiu       $v1, $s3, 0x4FA0
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20384));
label_1f3aec:
    // 0x1f3aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f3aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3af0:
    // 0x1f3af0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1f3af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f3af4:
    // 0x1f3af4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f3af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f3af8:
    // 0x1f3af8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1f3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1f3afc:
    // 0x1f3afc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f3b00:
    // 0x1f3b00: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1f3b00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3b04:
    // 0x1f3b04: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_1f3b08:
    if (ctx->pc == 0x1F3B08u) {
        ctx->pc = 0x1F3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B04u;
        // 0x1f3b08: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B0Cu;
        goto label_1f3b0c;
    }
    ctx->pc = 0x1F3B04u;
    {
        const bool branch_taken_0x1f3b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B04u;
        // 0x1f3b08: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b04) {
            ctx->pc = 0x1F3B18u;
            goto label_1f3b18;
        }
    }
    ctx->pc = 0x1F3B0Cu;
label_1f3b0c:
    // 0x1f3b0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f3b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b10:
    // 0x1f3b10: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f3b14:
    if (ctx->pc == 0x1F3B14u) {
        ctx->pc = 0x1F3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B10u;
        // 0x1f3b14: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B18u;
        goto label_1f3b18;
    }
    ctx->pc = 0x1F3B10u;
    {
        const bool branch_taken_0x1f3b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B10u;
        // 0x1f3b14: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b10) {
            ctx->pc = 0x1F3B4Cu;
            goto label_1f3b4c;
        }
    }
    ctx->pc = 0x1F3B18u;
label_1f3b18:
    // 0x1f3b18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f3b1c:
    // 0x1f3b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3b20:
    // 0x1f3b20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f3b24:
    // 0x1f3b24: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1f3b28:
    // 0x1f3b28: 0xc4404fa8  lwc1        $f0, 0x4FA8($v0)
    ctx->pc = 0x1f3b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3b2c:
    // 0x1f3b2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f3b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f3b30:
    // 0x1f3b30: 0x0  nop
    ctx->pc = 0x1f3b30u;
    // NOP
label_1f3b34:
    // 0x1f3b34: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f3b38:
    if (ctx->pc == 0x1F3B38u) {
        ctx->pc = 0x1F3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B34u;
        // 0x1f3b38: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B3Cu;
        goto label_1f3b3c;
    }
    ctx->pc = 0x1F3B34u;
    {
        const bool branch_taken_0x1f3b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B34u;
        // 0x1f3b38: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b34) {
            ctx->pc = 0x1F3B44u;
            goto label_1f3b44;
        }
    }
    ctx->pc = 0x1F3B3Cu;
label_1f3b3c:
    // 0x1f3b3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f3b40:
    if (ctx->pc == 0x1F3B40u) {
        ctx->pc = 0x1F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B3Cu;
        // 0x1f3b40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B44u;
        goto label_1f3b44;
    }
    ctx->pc = 0x1F3B3Cu;
    {
        const bool branch_taken_0x1f3b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B3Cu;
        // 0x1f3b40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b3c) {
            ctx->pc = 0x1F3B4Cu;
            goto label_1f3b4c;
        }
    }
    ctx->pc = 0x1F3B44u;
label_1f3b44:
    // 0x1f3b44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f3b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b48:
    // 0x1f3b48: 0x24050431  addiu       $a1, $zero, 0x431
    ctx->pc = 0x1f3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
label_1f3b4c:
    // 0x1f3b4c: 0xc08a1f2  jal         func_2287C8
label_1f3b50:
    if (ctx->pc == 0x1F3B50u) {
        ctx->pc = 0x1F3B54u;
        goto label_1f3b54;
    }
    ctx->pc = 0x1F3B4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B54u);
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1F3B4Cu, 0x1F3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B54u;
label_1f3b54:
    // 0x1f3b54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b58:
    // 0x1f3b58: 0xc0f70ce  jal         func_3DC338
label_1f3b5c:
    if (ctx->pc == 0x1F3B5Cu) {
        ctx->pc = 0x1F3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B58u;
        // 0x1f3b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B60u;
        goto label_1f3b60;
    }
    ctx->pc = 0x1F3B58u;
    SET_GPR_U32(ctx, 31, 0x1F3B60u);
    ctx->pc = 0x1F3B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B58u;
    // 0x1f3b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1F3B58u, 0x1F3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B60u;
label_1f3b60:
    // 0x1f3b60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f3b64:
    if (ctx->pc == 0x1F3B64u) {
        ctx->pc = 0x1F3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B60u;
        // 0x1f3b64: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B68u;
        goto label_1f3b68;
    }
    ctx->pc = 0x1F3B60u;
    {
        const bool branch_taken_0x1f3b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B60u;
        // 0x1f3b64: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b60) {
            ctx->pc = 0x1F3B74u;
            goto label_1f3b74;
        }
    }
    ctx->pc = 0x1F3B68u;
label_1f3b68:
    // 0x1f3b68: 0xc0c4900  jal         func_312400
label_1f3b6c:
    if (ctx->pc == 0x1F3B6Cu) {
        ctx->pc = 0x1F3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B68u;
        // 0x1f3b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B70u;
        goto label_1f3b70;
    }
    ctx->pc = 0x1F3B68u;
    SET_GPR_U32(ctx, 31, 0x1F3B70u);
    ctx->pc = 0x1F3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B68u;
    // 0x1f3b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1F3B68u, 0x1F3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B70u;
label_1f3b70:
    // 0x1f3b70: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1f3b74:
    // 0x1f3b74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f3b74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3b78:
    // 0x1f3b78: 0xfa610130  sqc2        $vf1, 0x130($s3)
    ctx->pc = 0x1f3b78u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f3b7c:
    // 0x1f3b7c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3b80:
    // 0x1f3b80: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x1f3b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f3b84:
    // 0x1f3b84: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1f3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f3b88:
    // 0x1f3b88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3b8c:
    // 0x1f3b8c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f3b8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3b90:
    // 0x1f3b90: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x1f3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
label_1f3b94:
    // 0x1f3b94: 0x2c620043  sltiu       $v0, $v1, 0x43
    ctx->pc = 0x1f3b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
label_1f3b98:
    // 0x1f3b98: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
label_1f3b9c:
    if (ctx->pc == 0x1F3B9Cu) {
        ctx->pc = 0x1F3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B98u;
        // 0x1f3b9c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BA0u;
        goto label_1f3ba0;
    }
    ctx->pc = 0x1F3B98u;
    {
        const bool branch_taken_0x1f3b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B98u;
        // 0x1f3b9c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b98) {
            ctx->pc = 0x1F3E9Cu;
            goto label_1f3e9c;
        }
    }
    ctx->pc = 0x1F3BA0u;
label_1f3ba0:
    // 0x1f3ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3ba4:
    // 0x1f3ba4: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x1f3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
label_1f3ba8:
    // 0x1f3ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3bac:
    // 0x1f3bac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3bb0:
    // 0x1f3bb0: 0x800008  jr          $a0
label_1f3bb4:
    if (ctx->pc == 0x1F3BB4u) {
        ctx->pc = 0x1F3BB8u;
        goto label_1f3bb8;
    }
    ctx->pc = 0x1F3BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3BB8u: goto label_1f3bb8;
            case 0x1F3BF4u: goto label_1f3bf4;
            case 0x1F3C48u: goto label_1f3c48;
            case 0x1F3C98u: goto label_1f3c98;
            case 0x1F3CCCu: goto label_1f3ccc;
            case 0x1F3D24u: goto label_1f3d24;
            case 0x1F3D78u: goto label_1f3d78;
            case 0x1F3DB4u: goto label_1f3db4;
            case 0x1F3E08u: goto label_1f3e08;
            case 0x1F3E4Cu: goto label_1f3e4c;
            case 0x1F3E78u: goto label_1f3e78;
            case 0x1F3E9Cu: goto label_1f3e9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F3BB8u;
label_1f3bb8:
    // 0x1f3bb8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3bbc:
    // 0x1f3bbc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3bc0:
    // 0x1f3bc0: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3bc4:
    // 0x1f3bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bc8:
    // 0x1f3bc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bcc:
    // 0x1f3bcc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3bd0:
    // 0x1f3bd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3bd4:
    // 0x1f3bd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3bd8:
    // 0x1f3bd8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3bdc:
    // 0x1f3bdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3be0:
    // 0x1f3be0: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1)
    ctx->pc = 0x1f3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f3be4:
    // 0x1f3be4: 0xc07d032  jal         func_1F40C8
label_1f3be8:
    if (ctx->pc == 0x1F3BE8u) {
        ctx->pc = 0x1F3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BE4u;
        // 0x1f3be8: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BECu;
        goto label_1f3bec;
    }
    ctx->pc = 0x1F3BE4u;
    SET_GPR_U32(ctx, 31, 0x1F3BECu);
    ctx->pc = 0x1F3BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BE4u;
    // 0x1f3be8: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F40C8u, 0x1F3BE4u, 0x1F3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BECu;
label_1f3bec:
    // 0x1f3bec: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1f3bf0:
    if (ctx->pc == 0x1F3BF0u) {
        ctx->pc = 0x1F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BECu;
        // 0x1f3bf0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3BF4u;
        goto label_1f3bf4;
    }
    ctx->pc = 0x1F3BECu;
    {
        const bool branch_taken_0x1f3bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BECu;
        // 0x1f3bf0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bec) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3BF4u;
label_1f3bf4:
    // 0x1f3bf4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3bf8:
    // 0x1f3bf8: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3bfc:
    // 0x1f3bfc: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3c00:
    // 0x1f3c00: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3c04:
    // 0x1f3c04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3c08:
    // 0x1f3c08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3c0c:
    // 0x1f3c0c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3c10:
    // 0x1f3c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c14:
    // 0x1f3c14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3c18:
    // 0x1f3c18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c1c:
    // 0x1f3c1c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c20:
    // 0x1f3c20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3c24:
    // 0x1f3c24: 0xe6600134  swc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
label_1f3c28:
    // 0x1f3c28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3c2c:
    // 0x1f3c2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3c30:
    // 0x1f3c30: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3c34:
    // 0x1f3c34: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f3c34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c38:
    // 0x1f3c38: 0xc07cc3e  jal         func_1F30F8
label_1f3c3c:
    if (ctx->pc == 0x1F3C3Cu) {
        ctx->pc = 0x1F3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C38u;
        // 0x1f3c3c: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C40u;
        goto label_1f3c40;
    }
    ctx->pc = 0x1F3C38u;
    SET_GPR_U32(ctx, 31, 0x1F3C40u);
    ctx->pc = 0x1F3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C38u;
    // 0x1f3c3c: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30F8u, 0x1F3C38u, 0x1F3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C40u;
label_1f3c40:
    // 0x1f3c40: 0x10000097  b           . + 4 + (0x97 << 2)
label_1f3c44:
    if (ctx->pc == 0x1F3C44u) {
        ctx->pc = 0x1F3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C40u;
        // 0x1f3c44: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C48u;
        goto label_1f3c48;
    }
    ctx->pc = 0x1F3C40u;
    {
        const bool branch_taken_0x1f3c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C40u;
        // 0x1f3c44: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c40) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3C48u;
label_1f3c48:
    // 0x1f3c48: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3c4c:
    // 0x1f3c4c: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3c50:
    // 0x1f3c50: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3c54:
    // 0x1f3c54: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1f3c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1f3c58:
    // 0x1f3c58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3c5c:
    // 0x1f3c5c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3c60:
    // 0x1f3c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c64:
    // 0x1f3c64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3c68:
    // 0x1f3c68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c6c:
    // 0x1f3c6c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c70:
    // 0x1f3c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3c74:
    // 0x1f3c74: 0xe6600134  swc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
label_1f3c78:
    // 0x1f3c78: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3c7c:
    // 0x1f3c7c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3c80:
    // 0x1f3c80: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3c84:
    // 0x1f3c84: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f3c84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c88:
    // 0x1f3c88: 0xc07cb9c  jal         func_1F2E70
label_1f3c8c:
    if (ctx->pc == 0x1F3C8Cu) {
        ctx->pc = 0x1F3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C88u;
        // 0x1f3c8c: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C90u;
        goto label_1f3c90;
    }
    ctx->pc = 0x1F3C88u;
    SET_GPR_U32(ctx, 31, 0x1F3C90u);
    ctx->pc = 0x1F3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C88u;
    // 0x1f3c8c: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2E70u, 0x1F3C88u, 0x1F3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C90u;
label_1f3c90:
    // 0x1f3c90: 0x10000083  b           . + 4 + (0x83 << 2)
label_1f3c94:
    if (ctx->pc == 0x1F3C94u) {
        ctx->pc = 0x1F3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C90u;
        // 0x1f3c94: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C98u;
        goto label_1f3c98;
    }
    ctx->pc = 0x1F3C90u;
    {
        const bool branch_taken_0x1f3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C90u;
        // 0x1f3c94: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c90) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3C98u;
label_1f3c98:
    // 0x1f3c98: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3c9c:
    // 0x1f3c9c: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ca0:
    // 0x1f3ca0: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3ca4:
    // 0x1f3ca4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3ca8:
    // 0x1f3ca8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3cac:
    // 0x1f3cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3cb0:
    // 0x1f3cb0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3cb4:
    // 0x1f3cb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cb8:
    // 0x1f3cb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3cbc:
    // 0x1f3cbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cc0:
    // 0x1f3cc0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cc4:
    // 0x1f3cc4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f3cc8:
    if (ctx->pc == 0x1F3CC8u) {
        ctx->pc = 0x1F3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CC4u;
        // 0x1f3cc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3CCCu;
        goto label_1f3ccc;
    }
    ctx->pc = 0x1F3CC4u;
    {
        const bool branch_taken_0x1f3cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CC4u;
        // 0x1f3cc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cc4) {
            ctx->pc = 0x1F3CFCu;
            goto label_1f3cfc;
        }
    }
    ctx->pc = 0x1F3CCCu;
label_1f3ccc:
    // 0x1f3ccc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3cd0:
    // 0x1f3cd0: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3cd4:
    // 0x1f3cd4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3cd8:
    // 0x1f3cd8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3cdc:
    // 0x1f3cdc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3ce0:
    // 0x1f3ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3ce4:
    // 0x1f3ce4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3ce8:
    // 0x1f3ce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cec:
    // 0x1f3cec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3cf0:
    // 0x1f3cf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cf4:
    // 0x1f3cf4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cf8:
    // 0x1f3cf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3cfc:
    // 0x1f3cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d00:
    // 0x1f3d00: 0xe6600134  swc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
label_1f3d04:
    // 0x1f3d04: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3d08:
    // 0x1f3d08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3d0c:
    // 0x1f3d0c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3d10:
    // 0x1f3d10: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f3d10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3d14:
    // 0x1f3d14: 0xc07caaa  jal         func_1F2AA8
label_1f3d18:
    if (ctx->pc == 0x1F3D18u) {
        ctx->pc = 0x1F3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D14u;
        // 0x1f3d18: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D1Cu;
        goto label_1f3d1c;
    }
    ctx->pc = 0x1F3D14u;
    SET_GPR_U32(ctx, 31, 0x1F3D1Cu);
    ctx->pc = 0x1F3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D14u;
    // 0x1f3d18: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AA8u, 0x1F3D14u, 0x1F3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D1Cu;
label_1f3d1c:
    // 0x1f3d1c: 0x10000060  b           . + 4 + (0x60 << 2)
label_1f3d20:
    if (ctx->pc == 0x1F3D20u) {
        ctx->pc = 0x1F3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D1Cu;
        // 0x1f3d20: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D24u;
        goto label_1f3d24;
    }
    ctx->pc = 0x1F3D1Cu;
    {
        const bool branch_taken_0x1f3d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D1Cu;
        // 0x1f3d20: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d1c) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3D24u;
label_1f3d24:
    // 0x1f3d24: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3d28:
    // 0x1f3d28: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d2c:
    // 0x1f3d2c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3d30:
    // 0x1f3d30: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1f3d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1f3d34:
    // 0x1f3d34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3d38:
    // 0x1f3d38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3d3c:
    // 0x1f3d3c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3d40:
    // 0x1f3d40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d44:
    // 0x1f3d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3d48:
    // 0x1f3d48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d4c:
    // 0x1f3d4c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d50:
    // 0x1f3d50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d54:
    // 0x1f3d54: 0xe6600134  swc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
label_1f3d58:
    // 0x1f3d58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3d5c:
    // 0x1f3d5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3d60:
    // 0x1f3d60: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3d64:
    // 0x1f3d64: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f3d64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3d68:
    // 0x1f3d68: 0xc07cb36  jal         func_1F2CD8
label_1f3d6c:
    if (ctx->pc == 0x1F3D6Cu) {
        ctx->pc = 0x1F3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D68u;
        // 0x1f3d6c: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D70u;
        goto label_1f3d70;
    }
    ctx->pc = 0x1F3D68u;
    SET_GPR_U32(ctx, 31, 0x1F3D70u);
    ctx->pc = 0x1F3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D68u;
    // 0x1f3d6c: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2CD8u, 0x1F3D68u, 0x1F3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D70u;
label_1f3d70:
    // 0x1f3d70: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1f3d74:
    if (ctx->pc == 0x1F3D74u) {
        ctx->pc = 0x1F3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D70u;
        // 0x1f3d74: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D78u;
        goto label_1f3d78;
    }
    ctx->pc = 0x1F3D70u;
    {
        const bool branch_taken_0x1f3d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D70u;
        // 0x1f3d74: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d70) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3D78u;
label_1f3d78:
    // 0x1f3d78: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3d7c:
    // 0x1f3d7c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3d80:
    // 0x1f3d80: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3d84:
    // 0x1f3d84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d88:
    // 0x1f3d88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d8c:
    // 0x1f3d8c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d90:
    // 0x1f3d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d94:
    // 0x1f3d94: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3d98:
    // 0x1f3d98: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3d9c:
    // 0x1f3d9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3da0:
    // 0x1f3da0: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1)
    ctx->pc = 0x1f3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f3da4:
    // 0x1f3da4: 0xc07cc5e  jal         func_1F3178
label_1f3da8:
    if (ctx->pc == 0x1F3DA8u) {
        ctx->pc = 0x1F3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DA4u;
        // 0x1f3da8: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DACu;
        goto label_1f3dac;
    }
    ctx->pc = 0x1F3DA4u;
    SET_GPR_U32(ctx, 31, 0x1F3DACu);
    ctx->pc = 0x1F3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DA4u;
    // 0x1f3da8: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3178u, 0x1F3DA4u, 0x1F3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DACu;
label_1f3dac:
    // 0x1f3dac: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1f3db0:
    if (ctx->pc == 0x1F3DB0u) {
        ctx->pc = 0x1F3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DACu;
        // 0x1f3db0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DB4u;
        goto label_1f3db4;
    }
    ctx->pc = 0x1F3DACu;
    {
        const bool branch_taken_0x1f3dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DACu;
        // 0x1f3db0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dac) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3DB4u;
label_1f3db4:
    // 0x1f3db4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3db8:
    // 0x1f3db8: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3dbc:
    // 0x1f3dbc: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1f3dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f3dc0:
    // 0x1f3dc0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3dc4:
    // 0x1f3dc4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3dc8:
    // 0x1f3dc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3dcc:
    // 0x1f3dcc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f3dd0:
    // 0x1f3dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3dd4:
    // 0x1f3dd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3dd8:
    // 0x1f3dd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ddc:
    // 0x1f3ddc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3de0:
    // 0x1f3de0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3de4:
    // 0x1f3de4: 0xe6600134  swc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
label_1f3de8:
    // 0x1f3de8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f3dec:
    // 0x1f3dec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3df0:
    // 0x1f3df0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1f3df4:
    // 0x1f3df4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f3df4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3df8:
    // 0x1f3df8: 0xc07cd18  jal         func_1F3460
label_1f3dfc:
    if (ctx->pc == 0x1F3DFCu) {
        ctx->pc = 0x1F3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DF8u;
        // 0x1f3dfc: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E00u;
        goto label_1f3e00;
    }
    ctx->pc = 0x1F3DF8u;
    SET_GPR_U32(ctx, 31, 0x1F3E00u);
    ctx->pc = 0x1F3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DF8u;
    // 0x1f3dfc: 0xc46c4fa8  lwc1        $f12, 0x4FA8($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3460u, 0x1F3DF8u, 0x1F3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E00u;
label_1f3e00:
    // 0x1f3e00: 0x10000027  b           . + 4 + (0x27 << 2)
label_1f3e04:
    if (ctx->pc == 0x1F3E04u) {
        ctx->pc = 0x1F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E00u;
        // 0x1f3e04: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E08u;
        goto label_1f3e08;
    }
    ctx->pc = 0x1F3E00u;
    {
        const bool branch_taken_0x1f3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E00u;
        // 0x1f3e04: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e00) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3E08u;
label_1f3e08:
    // 0x1f3e08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1f3e0c:
    // 0x1f3e0c: 0x8c44993c  lw          $a0, -0x66C4($v0)
    ctx->pc = 0x1f3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940988)));
label_1f3e10:
    // 0x1f3e10: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_1f3e14:
    if (ctx->pc == 0x1F3E14u) {
        ctx->pc = 0x1F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E10u;
        // 0x1f3e14: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E18u;
        goto label_1f3e18;
    }
    ctx->pc = 0x1F3E10u;
    {
        const bool branch_taken_0x1f3e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E10u;
        // 0x1f3e14: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e10) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3E18u;
label_1f3e18:
    // 0x1f3e18: 0xc089ee6  jal         func_227B98
label_1f3e1c:
    if (ctx->pc == 0x1F3E1Cu) {
        ctx->pc = 0x1F3E20u;
        goto label_1f3e20;
    }
    ctx->pc = 0x1F3E18u;
    SET_GPR_U32(ctx, 31, 0x1F3E20u);
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1F3E18u, 0x1F3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E20u;
label_1f3e20:
    // 0x1f3e20: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f3e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3e24:
    // 0x1f3e24: 0xfa610130  sqc2        $vf1, 0x130($s3)
    ctx->pc = 0x1f3e24u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f3e28:
    // 0x1f3e28: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3e2c:
    // 0x1f3e2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e30:
    // 0x1f3e30: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x1f3e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f3e34:
    // 0x1f3e34: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1f3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f3e38:
    // 0x1f3e38: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f3e3c:
    // 0x1f3e3c: 0xc07cc90  jal         func_1F3240
label_1f3e40:
    if (ctx->pc == 0x1F3E40u) {
        ctx->pc = 0x1F3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E3Cu;
        // 0x1f3e40: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E44u;
        goto label_1f3e44;
    }
    ctx->pc = 0x1F3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E44u);
    ctx->pc = 0x1F3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E3Cu;
    // 0x1f3e40: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3240u, 0x1F3E3Cu, 0x1F3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E44u;
label_1f3e44:
    // 0x1f3e44: 0x10000016  b           . + 4 + (0x16 << 2)
label_1f3e48:
    if (ctx->pc == 0x1F3E48u) {
        ctx->pc = 0x1F3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E44u;
        // 0x1f3e48: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E4Cu;
        goto label_1f3e4c;
    }
    ctx->pc = 0x1F3E44u;
    {
        const bool branch_taken_0x1f3e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E44u;
        // 0x1f3e48: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e44) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3E4Cu;
label_1f3e4c:
    // 0x1f3e4c: 0xc6610134  lwc1        $f1, 0x134($s3)
    ctx->pc = 0x1f3e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3e50:
    // 0x1f3e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e54:
    // 0x1f3e54: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3e58:
    // 0x1f3e58: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3e5c:
    // 0x1f3e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3e60:
    // 0x1f3e60: 0x0  nop
    ctx->pc = 0x1f3e60u;
    // NOP
label_1f3e64:
    // 0x1f3e64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f3e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f3e68:
    // 0x1f3e68: 0xc07ccc0  jal         func_1F3300
label_1f3e6c:
    if (ctx->pc == 0x1F3E6Cu) {
        ctx->pc = 0x1F3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E68u;
        // 0x1f3e6c: 0xe6610134  swc1        $f1, 0x134($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E70u;
        goto label_1f3e70;
    }
    ctx->pc = 0x1F3E68u;
    SET_GPR_U32(ctx, 31, 0x1F3E70u);
    ctx->pc = 0x1F3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E68u;
    // 0x1f3e6c: 0xe6610134  swc1        $f1, 0x134($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3300u, 0x1F3E68u, 0x1F3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E70u;
label_1f3e70:
    // 0x1f3e70: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f3e74:
    if (ctx->pc == 0x1F3E74u) {
        ctx->pc = 0x1F3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E70u;
        // 0x1f3e74: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E78u;
        goto label_1f3e78;
    }
    ctx->pc = 0x1F3E70u;
    {
        const bool branch_taken_0x1f3e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E70u;
        // 0x1f3e74: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e70) {
            ctx->pc = 0x1F3EA0u;
            goto label_1f3ea0;
        }
    }
    ctx->pc = 0x1F3E78u;
label_1f3e78:
    // 0x1f3e78: 0xc6610134  lwc1        $f1, 0x134($s3)
    ctx->pc = 0x1f3e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3e7c:
    // 0x1f3e7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e80:
    // 0x1f3e80: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3e84:
    // 0x1f3e84: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3e88:
    // 0x1f3e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3e8c:
    // 0x1f3e8c: 0x0  nop
    ctx->pc = 0x1f3e8cu;
    // NOP
label_1f3e90:
    // 0x1f3e90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f3e90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f3e94:
    // 0x1f3e94: 0xc07ccec  jal         func_1F33B0
label_1f3e98:
    if (ctx->pc == 0x1F3E98u) {
        ctx->pc = 0x1F3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E94u;
        // 0x1f3e98: 0xe6610134  swc1        $f1, 0x134($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E9Cu;
        goto label_1f3e9c;
    }
    ctx->pc = 0x1F3E94u;
    SET_GPR_U32(ctx, 31, 0x1F3E9Cu);
    ctx->pc = 0x1F3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E94u;
    // 0x1f3e98: 0xe6610134  swc1        $f1, 0x134($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33B0u, 0x1F3E94u, 0x1F3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E9Cu;
label_1f3e9c:
    // 0x1f3e9c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f3ea0:
    // 0x1f3ea0: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x1f3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f3ea4:
    // 0x1f3ea4: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x1f3ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f3ea8:
    // 0x1f3ea8: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x1f3ea8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1f3eac:
    // 0x1f3eac: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1f3eb0:
    // 0x1f3eb0: 0x90434fb8  lbu         $v1, 0x4FB8($v0)
    ctx->pc = 0x1f3eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20408)));
label_1f3eb4:
    // 0x1f3eb4: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1f3eb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f3eb8:
    // 0x1f3eb8: 0x1460ff09  bnez        $v1, . + 4 + (-0xF7 << 2)
label_1f3ebc:
    if (ctx->pc == 0x1F3EBCu) {
        ctx->pc = 0x1F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EB8u;
        // 0x1f3ebc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3EC0u;
        goto label_1f3ec0;
    }
    ctx->pc = 0x1F3EB8u;
    {
        const bool branch_taken_0x1f3eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EB8u;
        // 0x1f3ebc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3eb8) {
            ctx->pc = 0x1F3AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3ae0;
        }
    }
    ctx->pc = 0x1F3EC0u;
label_1f3ec0:
    // 0x1f3ec0: 0x8ee30104  lw          $v1, 0x104($s7)
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
label_1f3ec4:
    // 0x1f3ec4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3ec8:
    // 0x1f3ec8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1f3ecc:
    // 0x1f3ecc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f3eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3ed0:
    // 0x1f3ed0: 0xfa610130  sqc2        $vf1, 0x130($s3)
    ctx->pc = 0x1f3ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f3ed4:
    // 0x1f3ed4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1f3ed8:
    // 0x1f3ed8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1f3edc:
    // 0x1f3edc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3ee0:
    // 0x1f3ee0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f3ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ee4:
    // 0x1f3ee4: 0xc6600134  lwc1        $f0, 0x134($s3)
    ctx->pc = 0x1f3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ee8:
    // 0x1f3ee8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f3ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3eec:
    // 0x1f3eec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ef0:
    // 0x1f3ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ef4:
    // 0x1f3ef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f3ef8:
    // 0x1f3ef8: 0xc07c816  jal         func_1F2058
label_1f3efc:
    if (ctx->pc == 0x1F3EFCu) {
        ctx->pc = 0x1F3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EF8u;
        // 0x1f3efc: 0xe6600134  swc1        $f0, 0x134($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F00u;
        goto label_1f3f00;
    }
    ctx->pc = 0x1F3EF8u;
    SET_GPR_U32(ctx, 31, 0x1F3F00u);
    ctx->pc = 0x1F3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EF8u;
    // 0x1f3efc: 0xe6600134  swc1        $f0, 0x134($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2058u, 0x1F3EF8u, 0x1F3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F00u;
label_1f3f00:
    // 0x1f3f00: 0xc08fcf0  jal         func_23F3C0
label_1f3f04:
    if (ctx->pc == 0x1F3F04u) {
        ctx->pc = 0x1F3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F00u;
        // 0x1f3f04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F08u;
        goto label_1f3f08;
    }
    ctx->pc = 0x1F3F00u;
    SET_GPR_U32(ctx, 31, 0x1F3F08u);
    ctx->pc = 0x1F3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F00u;
    // 0x1f3f04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F3F00u, 0x1F3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F08u;
label_1f3f08:
    // 0x1f3f08: 0xc081d36  jal         func_2074D8
label_1f3f0c:
    if (ctx->pc == 0x1F3F0Cu) {
        ctx->pc = 0x1F3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F08u;
        // 0x1f3f0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F10u;
        goto label_1f3f10;
    }
    ctx->pc = 0x1F3F08u;
    SET_GPR_U32(ctx, 31, 0x1F3F10u);
    ctx->pc = 0x1F3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F08u;
    // 0x1f3f0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3F08u, 0x1F3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F10u;
label_1f3f10:
    // 0x1f3f10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f3f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f14:
    // 0x1f3f14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3f18:
    // 0x1f3f18: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1f3f1c:
    if (ctx->pc == 0x1F3F1Cu) {
        ctx->pc = 0x1F3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F18u;
        // 0x1f3f1c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F20u;
        goto label_1f3f20;
    }
    ctx->pc = 0x1F3F18u;
    {
        const bool branch_taken_0x1f3f18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F18u;
        // 0x1f3f1c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f18) {
            ctx->pc = 0x1F3F28u;
            goto label_1f3f28;
        }
    }
    ctx->pc = 0x1F3F20u;
label_1f3f20:
    // 0x1f3f20: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f3f24:
    if (ctx->pc == 0x1F3F24u) {
        ctx->pc = 0x1F3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F20u;
        // 0x1f3f24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F28u;
        goto label_1f3f28;
    }
    ctx->pc = 0x1F3F20u;
    {
        const bool branch_taken_0x1f3f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F20u;
        // 0x1f3f24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f20) {
            ctx->pc = 0x1F3F30u;
            goto label_1f3f30;
        }
    }
    ctx->pc = 0x1F3F28u;
label_1f3f28:
    // 0x1f3f28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3f2c:
    // 0x1f3f2c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f3f30:
    // 0x1f3f30: 0x52800054  beql        $s4, $zero, . + 4 + (0x54 << 2)
label_1f3f34:
    if (ctx->pc == 0x1F3F34u) {
        ctx->pc = 0x1F3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F30u;
        // 0x1f3f34: 0x8ee30104  lw          $v1, 0x104($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F38u;
        goto label_1f3f38;
    }
    ctx->pc = 0x1F3F30u;
    {
        const bool branch_taken_0x1f3f30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f30) {
            ctx->pc = 0x1F3F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F30u;
            // 0x1f3f34: 0x8ee30104  lw          $v1, 0x104($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4084u;
            goto label_1f4084;
        }
    }
    ctx->pc = 0x1F3F38u;
label_1f3f38:
    // 0x1f3f38: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f3f3c:
    // 0x1f3f3c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1f3f40:
    // 0x1f3f40: 0x40f809  jalr        $v0
label_1f3f44:
    if (ctx->pc == 0x1F3F44u) {
        ctx->pc = 0x1F3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F40u;
        // 0x1f3f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F48u;
        goto label_1f3f48;
    }
    ctx->pc = 0x1F3F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3F48u);
        ctx->pc = 0x1F3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F40u;
        // 0x1f3f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F40u, 0x1F3F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3F48u;
label_1f3f48:
    // 0x1f3f48: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1f3f4c:
    if (ctx->pc == 0x1F3F4Cu) {
        ctx->pc = 0x1F3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F48u;
        // 0x1f3f4c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F50u;
        goto label_1f3f50;
    }
    ctx->pc = 0x1F3F48u;
    {
        const bool branch_taken_0x1f3f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F48u;
        // 0x1f3f4c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f48) {
            ctx->pc = 0x1F3F88u;
            goto label_1f3f88;
        }
    }
    ctx->pc = 0x1F3F50u;
label_1f3f50:
    // 0x1f3f50: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f3f54:
    // 0x1f3f54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1f3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1f3f58:
    // 0x1f3f58: 0x40f809  jalr        $v0
label_1f3f5c:
    if (ctx->pc == 0x1F3F5Cu) {
        ctx->pc = 0x1F3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F58u;
        // 0x1f3f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F60u;
        goto label_1f3f60;
    }
    ctx->pc = 0x1F3F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3F60u);
        ctx->pc = 0x1F3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F58u;
        // 0x1f3f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F58u, 0x1F3F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3F60u;
label_1f3f60:
    // 0x1f3f60: 0xc081d36  jal         func_2074D8
label_1f3f64:
    if (ctx->pc == 0x1F3F64u) {
        ctx->pc = 0x1F3F68u;
        goto label_1f3f68;
    }
    ctx->pc = 0x1F3F60u;
    SET_GPR_U32(ctx, 31, 0x1F3F68u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3F60u, 0x1F3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F68u;
label_1f3f68:
    // 0x1f3f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f6c:
    // 0x1f3f6c: 0xc081e8e  jal         func_207A38
label_1f3f70:
    if (ctx->pc == 0x1F3F70u) {
        ctx->pc = 0x1F3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F6Cu;
        // 0x1f3f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F74u;
        goto label_1f3f74;
    }
    ctx->pc = 0x1F3F6Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F74u);
    ctx->pc = 0x1F3F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F6Cu;
    // 0x1f3f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x1F3F6Cu, 0x1F3F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F74u;
label_1f3f74:
    // 0x1f3f74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f3f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f78:
    // 0x1f3f78: 0xc08fcf2  jal         func_23F3C8
label_1f3f7c:
    if (ctx->pc == 0x1F3F7Cu) {
        ctx->pc = 0x1F3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F78u;
        // 0x1f3f7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F80u;
        goto label_1f3f80;
    }
    ctx->pc = 0x1F3F78u;
    SET_GPR_U32(ctx, 31, 0x1F3F80u);
    ctx->pc = 0x1F3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F78u;
    // 0x1f3f7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F3F78u, 0x1F3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F80u;
label_1f3f80:
    // 0x1f3f80: 0x10000040  b           . + 4 + (0x40 << 2)
label_1f3f84:
    if (ctx->pc == 0x1F3F84u) {
        ctx->pc = 0x1F3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F80u;
        // 0x1f3f84: 0x8ee30104  lw          $v1, 0x104($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F88u;
        goto label_1f3f88;
    }
    ctx->pc = 0x1F3F80u;
    {
        const bool branch_taken_0x1f3f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F80u;
        // 0x1f3f84: 0x8ee30104  lw          $v1, 0x104($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f80) {
            ctx->pc = 0x1F4084u;
            goto label_1f4084;
        }
    }
    ctx->pc = 0x1F3F88u;
label_1f3f88:
    // 0x1f3f88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1f3f8c:
    // 0x1f3f8c: 0x90519238  lbu         $s1, -0x6DC8($v0)
    ctx->pc = 0x1f3f8cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939192)));
label_1f3f90:
    // 0x1f3f90: 0x26700130  addiu       $s0, $s3, 0x130
    ctx->pc = 0x1f3f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_1f3f94:
    // 0x1f3f94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3f98:
    // 0x1f3f98: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1f3f9c:
    if (ctx->pc == 0x1F3F9Cu) {
        ctx->pc = 0x1F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F98u;
        // 0x1f3f9c: 0xc474923c  lwc1        $f20, -0x6DC4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FA0u;
        goto label_1f3fa0;
    }
    ctx->pc = 0x1F3F98u;
    {
        const bool branch_taken_0x1f3f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F98u;
        // 0x1f3f9c: 0xc474923c  lwc1        $f20, -0x6DC4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f98) {
            ctx->pc = 0x1F3FD0u;
            goto label_1f3fd0;
        }
    }
    ctx->pc = 0x1F3FA0u;
label_1f3fa0:
    // 0x1f3fa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fa4:
    // 0x1f3fa4: 0xc07bc7e  jal         func_1EF1F8
label_1f3fa8:
    if (ctx->pc == 0x1F3FA8u) {
        ctx->pc = 0x1F3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FA4u;
        // 0x1f3fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FACu;
        goto label_1f3fac;
    }
    ctx->pc = 0x1F3FA4u;
    SET_GPR_U32(ctx, 31, 0x1F3FACu);
    ctx->pc = 0x1F3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FA4u;
    // 0x1f3fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F3FA4u, 0x1F3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FACu;
label_1f3fac:
    // 0x1f3fac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f3facu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1f3fb0:
    // 0x1f3fb0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1f3fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1f3fb4:
    // 0x1f3fb4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f3fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f3fb8:
    // 0x1f3fb8: 0x0  nop
    ctx->pc = 0x1f3fb8u;
    // NOP
label_1f3fbc:
    // 0x1f3fbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f3fc0:
    if (ctx->pc == 0x1F3FC0u) {
        ctx->pc = 0x1F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FBCu;
        // 0x1f3fc0: 0xe7ac0004  swc1        $f12, 0x4($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FC4u;
        goto label_1f3fc4;
    }
    ctx->pc = 0x1F3FBCu;
    {
        const bool branch_taken_0x1f3fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FBCu;
        // 0x1f3fc0: 0xe7ac0004  swc1        $f12, 0x4($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fbc) {
            ctx->pc = 0x1F3FD0u;
            goto label_1f3fd0;
        }
    }
    ctx->pc = 0x1F3FC4u;
label_1f3fc4:
    // 0x1f3fc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fc8:
    // 0x1f3fc8: 0xc07bc8c  jal         func_1EF230
label_1f3fcc:
    if (ctx->pc == 0x1F3FCCu) {
        ctx->pc = 0x1F3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FC8u;
        // 0x1f3fcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FD0u;
        goto label_1f3fd0;
    }
    ctx->pc = 0x1F3FC8u;
    SET_GPR_U32(ctx, 31, 0x1F3FD0u);
    ctx->pc = 0x1F3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FC8u;
    // 0x1f3fcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F3FC8u, 0x1F3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FD0u;
label_1f3fd0:
    // 0x1f3fd0: 0xc66d0110  lwc1        $f13, 0x110($s3)
    ctx->pc = 0x1f3fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f3fd4:
    // 0x1f3fd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f3fd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f3fd8:
    // 0x1f3fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f3fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fdc:
    // 0x1f3fdc: 0xc07dc70  jal         func_1F71C0
label_1f3fe0:
    if (ctx->pc == 0x1F3FE0u) {
        ctx->pc = 0x1F3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FDCu;
        // 0x1f3fe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FE4u;
        goto label_1f3fe4;
    }
    ctx->pc = 0x1F3FDCu;
    SET_GPR_U32(ctx, 31, 0x1F3FE4u);
    ctx->pc = 0x1F3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FDCu;
    // 0x1f3fe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F3FDCu, 0x1F3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FE4u;
label_1f3fe4:
    // 0x1f3fe4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1f3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1f3fe8:
    // 0x1f3fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fec:
    // 0x1f3fec: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1f3fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_1f3ff0:
    // 0x1f3ff0: 0xc07dcdc  jal         func_1F7370
label_1f3ff4:
    if (ctx->pc == 0x1F3FF4u) {
        ctx->pc = 0x1F3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF0u;
        // 0x1f3ff4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FF8u;
        goto label_1f3ff8;
    }
    ctx->pc = 0x1F3FF0u;
    SET_GPR_U32(ctx, 31, 0x1F3FF8u);
    ctx->pc = 0x1F3FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FF0u;
    // 0x1f3ff4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7370u, 0x1F3FF0u, 0x1F3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FF8u;
label_1f3ff8:
    // 0x1f3ff8: 0xc081710  jal         func_205C40
label_1f3ffc:
    if (ctx->pc == 0x1F3FFCu) {
        ctx->pc = 0x1F3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF8u;
        // 0x1f3ffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4000u;
        goto label_1f4000;
    }
    ctx->pc = 0x1F3FF8u;
    SET_GPR_U32(ctx, 31, 0x1F4000u);
    ctx->pc = 0x1F3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FF8u;
    // 0x1f3ffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1F3FF8u, 0x1F4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4000u;
label_1f4000:
    // 0x1f4000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4004:
    // 0x1f4004: 0xc0817fa  jal         func_205FE8
label_1f4008:
    if (ctx->pc == 0x1F4008u) {
        ctx->pc = 0x1F4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4004u;
        // 0x1f4008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F400Cu;
        goto label_1f400c;
    }
    ctx->pc = 0x1F4004u;
    SET_GPR_U32(ctx, 31, 0x1F400Cu);
    ctx->pc = 0x1F4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4004u;
    // 0x1f4008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FE8u, 0x1F4004u, 0x1F400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F400Cu;
label_1f400c:
    // 0x1f400c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f400cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1f4010:
    // 0x1f4010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4014:
    // 0x1f4014: 0xc080616  jal         func_201858
label_1f4018:
    if (ctx->pc == 0x1F4018u) {
        ctx->pc = 0x1F4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4014u;
        // 0x1f4018: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F401Cu;
        goto label_1f401c;
    }
    ctx->pc = 0x1F4014u;
    SET_GPR_U32(ctx, 31, 0x1F401Cu);
    ctx->pc = 0x1F4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4014u;
    // 0x1f4018: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x1F4014u, 0x1F401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F401Cu;
label_1f401c:
    // 0x1f401c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f401cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4020:
    // 0x1f4020: 0x0  nop
    ctx->pc = 0x1f4020u;
    // NOP
label_1f4024:
    // 0x1f4024: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f4024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1f4028:
    // 0x1f4028: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1f4028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1f402c:
    // 0x1f402c: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1f402cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1f4030:
    // 0x1f4030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f4034:
    // 0x1f4034: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f4034u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4038:
    // 0x1f4038: 0x0  nop
    ctx->pc = 0x1f4038u;
    // NOP
label_1f403c:
    // 0x1f403c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f403cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f4040:
    // 0x1f4040: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1f4040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1f4044:
    // 0x1f4044: 0xc0e3f5e  jal         func_38FD78
label_1f4048:
    if (ctx->pc == 0x1F4048u) {
        ctx->pc = 0x1F4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4044u;
        // 0x1f4048: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F404Cu;
        goto label_1f404c;
    }
    ctx->pc = 0x1F4044u;
    SET_GPR_U32(ctx, 31, 0x1F404Cu);
    ctx->pc = 0x1F4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4044u;
    // 0x1f4048: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F4044u, 0x1F404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F404Cu;
label_1f404c:
    // 0x1f404c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f404cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f4050:
    // 0x1f4050: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1f4050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1f4054:
    // 0x1f4054: 0xc081710  jal         func_205C40
label_1f4058:
    if (ctx->pc == 0x1F4058u) {
        ctx->pc = 0x1F405Cu;
        goto label_1f405c;
    }
    ctx->pc = 0x1F4054u;
    SET_GPR_U32(ctx, 31, 0x1F405Cu);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1F4054u, 0x1F405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F405Cu;
label_1f405c:
    // 0x1f405c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4060:
    // 0x1f4060: 0xc0817d4  jal         func_205F50
label_1f4064:
    if (ctx->pc == 0x1F4064u) {
        ctx->pc = 0x1F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4060u;
        // 0x1f4064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4068u;
        goto label_1f4068;
    }
    ctx->pc = 0x1F4060u;
    SET_GPR_U32(ctx, 31, 0x1F4068u);
    ctx->pc = 0x1F4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4060u;
    // 0x1f4064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1F4060u, 0x1F4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4068u;
label_1f4068:
    // 0x1f4068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f406c:
    // 0x1f406c: 0xc081560  jal         func_205580
label_1f4070:
    if (ctx->pc == 0x1F4070u) {
        ctx->pc = 0x1F4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F406Cu;
        // 0x1f4070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4074u;
        goto label_1f4074;
    }
    ctx->pc = 0x1F406Cu;
    SET_GPR_U32(ctx, 31, 0x1F4074u);
    ctx->pc = 0x1F4070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F406Cu;
    // 0x1f4070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1F406Cu, 0x1F4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4074u;
label_1f4074:
    // 0x1f4074: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f4074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f4078:
    // 0x1f4078: 0xc08156c  jal         func_2055B0
label_1f407c:
    if (ctx->pc == 0x1F407Cu) {
        ctx->pc = 0x1F407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4078u;
        // 0x1f407c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4080u;
        goto label_1f4080;
    }
    ctx->pc = 0x1F4078u;
    SET_GPR_U32(ctx, 31, 0x1F4080u);
    ctx->pc = 0x1F407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4078u;
    // 0x1f407c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x1F4078u, 0x1F4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4080u;
label_1f4080:
    // 0x1f4080: 0x8ee30104  lw          $v1, 0x104($s7)
    ctx->pc = 0x1f4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
label_1f4084:
    // 0x1f4084: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f4084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4088:
    // 0x1f4088: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f4088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1f408c:
    // 0x1f408c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f408cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4090:
    // 0x1f4090: 0xfa610130  sqc2        $vf1, 0x130($s3)
    ctx->pc = 0x1f4090u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f4094:
    // 0x1f4094: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f4094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4098:
    // 0x1f4098: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f4098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f409c:
    // 0x1f409c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f409cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f40a0:
    // 0x1f40a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f40a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f40a4:
    // 0x1f40a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f40a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f40a8:
    // 0x1f40a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f40a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f40ac:
    // 0x1f40ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f40acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f40b0:
    // 0x1f40b0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1f40b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f40b4:
    // 0x1f40b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f40b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f40b8:
    // 0x1f40b8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f40bc:
    // 0x1f40bc: 0x3e00008  jr          $ra
label_1f40c0:
    if (ctx->pc == 0x1F40C0u) {
        ctx->pc = 0x1F40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40BCu;
        // 0x1f40c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F40C4u;
        goto label_1f40c4;
    }
    ctx->pc = 0x1F40BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40BCu;
        // 0x1f40c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F40BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F40C4u;
label_1f40c4:
    // 0x1f40c4: 0x0  nop
    ctx->pc = 0x1f40c4u;
    // NOP
    ctx->pc = 0x1f40c8u;
}
