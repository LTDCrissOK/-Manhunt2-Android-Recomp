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

// Function: sub_00245A90
// Address: 0x245a90 - 0x246058
void sub_00245A90_0x245a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245A90_0x245a90");
#endif

    switch (ctx->pc) {
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        case 0x245b10u: goto label_245b10;
        case 0x245b14u: goto label_245b14;
        case 0x245b18u: goto label_245b18;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b20u: goto label_245b20;
        case 0x245b24u: goto label_245b24;
        case 0x245b28u: goto label_245b28;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b30u: goto label_245b30;
        case 0x245b34u: goto label_245b34;
        case 0x245b38u: goto label_245b38;
        case 0x245b3cu: goto label_245b3c;
        case 0x245b40u: goto label_245b40;
        case 0x245b44u: goto label_245b44;
        case 0x245b48u: goto label_245b48;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b50u: goto label_245b50;
        case 0x245b54u: goto label_245b54;
        case 0x245b58u: goto label_245b58;
        case 0x245b5cu: goto label_245b5c;
        case 0x245b60u: goto label_245b60;
        case 0x245b64u: goto label_245b64;
        case 0x245b68u: goto label_245b68;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b70u: goto label_245b70;
        case 0x245b74u: goto label_245b74;
        case 0x245b78u: goto label_245b78;
        case 0x245b7cu: goto label_245b7c;
        case 0x245b80u: goto label_245b80;
        case 0x245b84u: goto label_245b84;
        case 0x245b88u: goto label_245b88;
        case 0x245b8cu: goto label_245b8c;
        case 0x245b90u: goto label_245b90;
        case 0x245b94u: goto label_245b94;
        case 0x245b98u: goto label_245b98;
        case 0x245b9cu: goto label_245b9c;
        case 0x245ba0u: goto label_245ba0;
        case 0x245ba4u: goto label_245ba4;
        case 0x245ba8u: goto label_245ba8;
        case 0x245bacu: goto label_245bac;
        case 0x245bb0u: goto label_245bb0;
        case 0x245bb4u: goto label_245bb4;
        case 0x245bb8u: goto label_245bb8;
        case 0x245bbcu: goto label_245bbc;
        case 0x245bc0u: goto label_245bc0;
        case 0x245bc4u: goto label_245bc4;
        case 0x245bc8u: goto label_245bc8;
        case 0x245bccu: goto label_245bcc;
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        case 0x245f50u: goto label_245f50;
        case 0x245f54u: goto label_245f54;
        case 0x245f58u: goto label_245f58;
        case 0x245f5cu: goto label_245f5c;
        case 0x245f60u: goto label_245f60;
        case 0x245f64u: goto label_245f64;
        case 0x245f68u: goto label_245f68;
        case 0x245f6cu: goto label_245f6c;
        case 0x245f70u: goto label_245f70;
        case 0x245f74u: goto label_245f74;
        case 0x245f78u: goto label_245f78;
        case 0x245f7cu: goto label_245f7c;
        case 0x245f80u: goto label_245f80;
        case 0x245f84u: goto label_245f84;
        case 0x245f88u: goto label_245f88;
        case 0x245f8cu: goto label_245f8c;
        case 0x245f90u: goto label_245f90;
        case 0x245f94u: goto label_245f94;
        case 0x245f98u: goto label_245f98;
        case 0x245f9cu: goto label_245f9c;
        case 0x245fa0u: goto label_245fa0;
        case 0x245fa4u: goto label_245fa4;
        case 0x245fa8u: goto label_245fa8;
        case 0x245facu: goto label_245fac;
        case 0x245fb0u: goto label_245fb0;
        case 0x245fb4u: goto label_245fb4;
        case 0x245fb8u: goto label_245fb8;
        case 0x245fbcu: goto label_245fbc;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fc4u: goto label_245fc4;
        case 0x245fc8u: goto label_245fc8;
        case 0x245fccu: goto label_245fcc;
        case 0x245fd0u: goto label_245fd0;
        case 0x245fd4u: goto label_245fd4;
        case 0x245fd8u: goto label_245fd8;
        case 0x245fdcu: goto label_245fdc;
        case 0x245fe0u: goto label_245fe0;
        case 0x245fe4u: goto label_245fe4;
        case 0x245fe8u: goto label_245fe8;
        case 0x245fecu: goto label_245fec;
        case 0x245ff0u: goto label_245ff0;
        case 0x245ff4u: goto label_245ff4;
        case 0x245ff8u: goto label_245ff8;
        case 0x245ffcu: goto label_245ffc;
        case 0x246000u: goto label_246000;
        case 0x246004u: goto label_246004;
        case 0x246008u: goto label_246008;
        case 0x24600cu: goto label_24600c;
        case 0x246010u: goto label_246010;
        case 0x246014u: goto label_246014;
        case 0x246018u: goto label_246018;
        case 0x24601cu: goto label_24601c;
        case 0x246020u: goto label_246020;
        case 0x246024u: goto label_246024;
        case 0x246028u: goto label_246028;
        case 0x24602cu: goto label_24602c;
        case 0x246030u: goto label_246030;
        case 0x246034u: goto label_246034;
        case 0x246038u: goto label_246038;
        case 0x24603cu: goto label_24603c;
        case 0x246040u: goto label_246040;
        case 0x246044u: goto label_246044;
        case 0x246048u: goto label_246048;
        case 0x24604cu: goto label_24604c;
        case 0x246050u: goto label_246050;
        case 0x246054u: goto label_246054;
        default: break;
    }

    ctx->pc = 0x245a90u;

label_245a90:
    // 0x245a90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x245a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_245a94:
    // 0x245a94: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x245a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_245a98:
    // 0x245a98: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x245a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
label_245a9c:
    // 0x245a9c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x245a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_245aa0:
    // 0x245aa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x245aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245aa4:
    // 0x245aa4: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x245aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
label_245aa8:
    // 0x245aa8: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x245aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
label_245aac:
    // 0x245aac: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x245aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
label_245ab0:
    // 0x245ab0: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x245ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
label_245ab4:
    // 0x245ab4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x245ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_245ab8:
    // 0x245ab8: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x245ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
label_245abc:
    // 0x245abc: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x245abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_245ac0:
    // 0x245ac0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x245ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245ac4:
    // 0x245ac4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x245ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_245ac8:
    // 0x245ac8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_245acc:
    if (ctx->pc == 0x245ACCu) {
        ctx->pc = 0x245ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AC8u;
        // 0x245acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AD0u;
        goto label_245ad0;
    }
    ctx->pc = 0x245AC8u;
    {
        const bool branch_taken_0x245ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x245ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AC8u;
        // 0x245acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ac8) {
            ctx->pc = 0x245AE0u;
            goto label_245ae0;
        }
    }
    ctx->pc = 0x245AD0u;
label_245ad0:
    // 0x245ad0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x245ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_245ad4:
    // 0x245ad4: 0x2862033b  slti        $v0, $v1, 0x33B
    ctx->pc = 0x245ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)827) ? 1 : 0);
label_245ad8:
    // 0x245ad8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_245adc:
    if (ctx->pc == 0x245ADCu) {
        ctx->pc = 0x245ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AD8u;
        // 0x245adc: 0x2865035c  slti        $a1, $v1, 0x35C (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)860) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AE0u;
        goto label_245ae0;
    }
    ctx->pc = 0x245AD8u;
    {
        const bool branch_taken_0x245ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ad8) {
            ctx->pc = 0x245ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245AD8u;
            // 0x245adc: 0x2865035c  slti        $a1, $v1, 0x35C (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)860) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x245AE0u;
            goto label_245ae0;
        }
    }
    ctx->pc = 0x245AE0u;
label_245ae0:
    // 0x245ae0: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x245ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245ae4:
    // 0x245ae4: 0x5a82b  sltu        $s5, $zero, $a1
    ctx->pc = 0x245ae4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_245ae8:
    // 0x245ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245aec:
    // 0x245aec: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x245aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_245af0:
    // 0x245af0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x245af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_245af4:
    // 0x245af4: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
label_245af8:
    if (ctx->pc == 0x245AF8u) {
        ctx->pc = 0x245AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AF4u;
        // 0x245af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245AFCu;
        goto label_245afc;
    }
    ctx->pc = 0x245AF4u;
    {
        const bool branch_taken_0x245af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x245AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AF4u;
        // 0x245af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245af4) {
            ctx->pc = 0x245B08u;
            goto label_245b08;
        }
    }
    ctx->pc = 0x245AFCu;
label_245afc:
    // 0x245afc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x245afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_245b00:
    // 0x245b00: 0x3842033a  xori        $v0, $v0, 0x33A
    ctx->pc = 0x245b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)826);
label_245b04:
    // 0x245b04: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x245b04u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_245b08:
    // 0x245b08: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x245b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_245b0c:
    // 0x245b0c: 0x5b82b  sltu        $s7, $zero, $a1
    ctx->pc = 0x245b0cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_245b10:
    // 0x245b10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x245b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245b14:
    // 0x245b14: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x245b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_245b18:
    // 0x245b18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_245b1c:
    if (ctx->pc == 0x245B1Cu) {
        ctx->pc = 0x245B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B18u;
        // 0x245b1c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B20u;
        goto label_245b20;
    }
    ctx->pc = 0x245B18u;
    {
        const bool branch_taken_0x245b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B18u;
        // 0x245b1c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b18) {
            ctx->pc = 0x245B38u;
            goto label_245b38;
        }
    }
    ctx->pc = 0x245B20u;
label_245b20:
    // 0x245b20: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
label_245b24:
    if (ctx->pc == 0x245B24u) {
        ctx->pc = 0x245B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B20u;
        // 0x245b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B28u;
        goto label_245b28;
    }
    ctx->pc = 0x245B20u;
    {
        const bool branch_taken_0x245b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x245B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B20u;
        // 0x245b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b20) {
            ctx->pc = 0x245B34u;
            goto label_245b34;
        }
    }
    ctx->pc = 0x245B28u;
label_245b28:
    // 0x245b28: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x245b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_245b2c:
    // 0x245b2c: 0x2442fca4  addiu       $v0, $v0, -0x35C
    ctx->pc = 0x245b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966436));
label_245b30:
    // 0x245b30: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x245b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_245b34:
    // 0x245b34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x245b34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245b38:
    // 0x245b38: 0x38c2020f  xori        $v0, $a2, 0x20F
    ctx->pc = 0x245b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)527);
label_245b3c:
    // 0x245b3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_245b40:
    if (ctx->pc == 0x245B40u) {
        ctx->pc = 0x245B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B3Cu;
        // 0x245b40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B44u;
        goto label_245b44;
    }
    ctx->pc = 0x245B3Cu;
    {
        const bool branch_taken_0x245b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B3Cu;
        // 0x245b40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b3c) {
            ctx->pc = 0x245B68u;
            goto label_245b68;
        }
    }
    ctx->pc = 0x245B44u;
label_245b44:
    // 0x245b44: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x245b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_245b48:
    // 0x245b48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_245b4c:
    // 0x245b4c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_245b50:
    if (ctx->pc == 0x245B50u) {
        ctx->pc = 0x245B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B4Cu;
        // 0x245b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B54u;
        goto label_245b54;
    }
    ctx->pc = 0x245B4Cu;
    {
        const bool branch_taken_0x245b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x245B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B4Cu;
        // 0x245b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b4c) {
            ctx->pc = 0x245B60u;
            goto label_245b60;
        }
    }
    ctx->pc = 0x245B54u;
label_245b54:
    // 0x245b54: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x245b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_245b58:
    // 0x245b58: 0x2442fca0  addiu       $v0, $v0, -0x360
    ctx->pc = 0x245b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966432));
label_245b5c:
    // 0x245b5c: 0x2c450002  sltiu       $a1, $v0, 0x2
    ctx->pc = 0x245b5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_245b60:
    // 0x245b60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x245b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245b64:
    // 0x245b64: 0x38c2020f  xori        $v0, $a2, 0x20F
    ctx->pc = 0x245b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)527);
label_245b68:
    // 0x245b68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_245b6c:
    if (ctx->pc == 0x245B6Cu) {
        ctx->pc = 0x245B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B68u;
        // 0x245b6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B70u;
        goto label_245b70;
    }
    ctx->pc = 0x245B68u;
    {
        const bool branch_taken_0x245b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B68u;
        // 0x245b6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b68) {
            ctx->pc = 0x245B7Cu;
            goto label_245b7c;
        }
    }
    ctx->pc = 0x245B70u;
label_245b70:
    // 0x245b70: 0xc06b692  jal         func_1ADA48
label_245b74:
    if (ctx->pc == 0x245B74u) {
        ctx->pc = 0x245B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B70u;
        // 0x245b74: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B78u;
        goto label_245b78;
    }
    ctx->pc = 0x245B70u;
    SET_GPR_U32(ctx, 31, 0x245B78u);
    ctx->pc = 0x245B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B70u;
    // 0x245b74: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA48u, 0x245B70u, 0x245B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B78u;
label_245b78:
    // 0x245b78: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x245b78u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_245b7c:
    // 0x245b7c: 0xc06b640  jal         func_1AD900
label_245b80:
    if (ctx->pc == 0x245B80u) {
        ctx->pc = 0x245B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B7Cu;
        // 0x245b80: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245B84u;
        goto label_245b84;
    }
    ctx->pc = 0x245B7Cu;
    SET_GPR_U32(ctx, 31, 0x245B84u);
    ctx->pc = 0x245B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B7Cu;
    // 0x245b80: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x245B7Cu, 0x245B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B84u;
label_245b84:
    // 0x245b84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_245b88:
    if (ctx->pc == 0x245B88u) {
        ctx->pc = 0x245B8Cu;
        goto label_245b8c;
    }
    ctx->pc = 0x245B84u;
    {
        const bool branch_taken_0x245b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b84) {
            ctx->pc = 0x245BB8u;
            goto label_245bb8;
        }
    }
    ctx->pc = 0x245B8Cu;
label_245b8c:
    // 0x245b8c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x245b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_245b90:
    // 0x245b90: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x245b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_245b94:
    // 0x245b94: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x245b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_245b98:
    // 0x245b98: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_245b9c:
    // 0x245b9c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x245b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_245ba0:
    // 0x245ba0: 0x60f809  jalr        $v1
label_245ba4:
    if (ctx->pc == 0x245BA4u) {
        ctx->pc = 0x245BA8u;
        goto label_245ba8;
    }
    ctx->pc = 0x245BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245BA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245BA0u, 0x245BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245BA8u;
label_245ba8:
    // 0x245ba8: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_245bac:
    // 0x245bac: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x245bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_245bb0:
    // 0x245bb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x245bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_245bb4:
    // 0x245bb4: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x245bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_245bb8:
    // 0x245bb8: 0x52a00043  beql        $s5, $zero, . + 4 + (0x43 << 2)
label_245bbc:
    if (ctx->pc == 0x245BBCu) {
        ctx->pc = 0x245BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB8u;
        // 0x245bbc: 0x8e420394  lw          $v0, 0x394($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BC0u;
        goto label_245bc0;
    }
    ctx->pc = 0x245BB8u;
    {
        const bool branch_taken_0x245bb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x245bb8) {
            ctx->pc = 0x245BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245BB8u;
            // 0x245bbc: 0x8e420394  lw          $v0, 0x394($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245CC8u;
            goto label_245cc8;
        }
    }
    ctx->pc = 0x245BC0u;
label_245bc0:
    // 0x245bc0: 0xc0f6a96  jal         func_3DAA58
label_245bc4:
    if (ctx->pc == 0x245BC4u) {
        ctx->pc = 0x245BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BC0u;
        // 0x245bc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245BC8u;
        goto label_245bc8;
    }
    ctx->pc = 0x245BC0u;
    SET_GPR_U32(ctx, 31, 0x245BC8u);
    ctx->pc = 0x245BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BC0u;
    // 0x245bc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x245BC0u, 0x245BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BC8u;
label_245bc8:
    // 0x245bc8: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x245bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245bcc:
    // 0x245bcc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x245bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_245bd0:
    // 0x245bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245bd4:
    // 0x245bd4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x245bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245bd8:
    // 0x245bd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x245bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245bdc:
    // 0x245bdc: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x245bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245be0:
    // 0x245be0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x245be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_245be4:
    // 0x245be4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x245be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_245be8:
    // 0x245be8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x245be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245bec:
    // 0x245bec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x245becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_245bf0:
    // 0x245bf0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x245bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245bf4:
    // 0x245bf4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x245bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_245bf8:
    // 0x245bf8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x245bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245bfc:
    // 0x245bfc: 0xc0c3290  jal         func_30CA40
label_245c00:
    if (ctx->pc == 0x245C00u) {
        ctx->pc = 0x245C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BFCu;
        // 0x245c00: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C04u;
        goto label_245c04;
    }
    ctx->pc = 0x245BFCu;
    SET_GPR_U32(ctx, 31, 0x245C04u);
    ctx->pc = 0x245C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BFCu;
    // 0x245c00: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA40u, 0x245BFCu, 0x245C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C04u;
label_245c04:
    // 0x245c04: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x245c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245c08:
    // 0x245c08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x245c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_245c0c:
    // 0x245c0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_245c10:
    // 0x245c10: 0xc0b1488  jal         func_2C5220
label_245c14:
    if (ctx->pc == 0x245C14u) {
        ctx->pc = 0x245C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C10u;
        // 0x245c14: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C18u;
        goto label_245c18;
    }
    ctx->pc = 0x245C10u;
    SET_GPR_U32(ctx, 31, 0x245C18u);
    ctx->pc = 0x245C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C10u;
    // 0x245c14: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x245C10u, 0x245C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C18u;
label_245c18:
    // 0x245c18: 0xc0b1488  jal         func_2C5220
label_245c1c:
    if (ctx->pc == 0x245C1Cu) {
        ctx->pc = 0x245C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C18u;
        // 0x245c1c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C20u;
        goto label_245c20;
    }
    ctx->pc = 0x245C18u;
    SET_GPR_U32(ctx, 31, 0x245C20u);
    ctx->pc = 0x245C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C18u;
    // 0x245c1c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x245C18u, 0x245C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C20u;
label_245c20:
    // 0x245c20: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x245c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_245c24:
    // 0x245c24: 0xc0b1488  jal         func_2C5220
label_245c28:
    if (ctx->pc == 0x245C28u) {
        ctx->pc = 0x245C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C24u;
        // 0x245c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C2Cu;
        goto label_245c2c;
    }
    ctx->pc = 0x245C24u;
    SET_GPR_U32(ctx, 31, 0x245C2Cu);
    ctx->pc = 0x245C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C24u;
    // 0x245c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x245C24u, 0x245C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C2Cu;
label_245c2c:
    // 0x245c2c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x245c2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245c30:
    // 0x245c30: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x245c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_245c34:
    // 0x245c34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_245c38:
    // 0x245c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245c3c:
    // 0x245c3c: 0xc0b163c  jal         func_2C58F0
label_245c40:
    if (ctx->pc == 0x245C40u) {
        ctx->pc = 0x245C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C3Cu;
        // 0x245c40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C44u;
        goto label_245c44;
    }
    ctx->pc = 0x245C3Cu;
    SET_GPR_U32(ctx, 31, 0x245C44u);
    ctx->pc = 0x245C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C3Cu;
    // 0x245c40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x245C3Cu, 0x245C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C44u;
label_245c44:
    // 0x245c44: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x245c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245c48:
    // 0x245c48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x245c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_245c4c:
    // 0x245c4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245c50:
    // 0x245c50: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x245c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_245c54:
    // 0x245c54: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x245c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_245c58:
    // 0x245c58: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x245c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_245c5c:
    // 0x245c5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x245c5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_245c60:
    // 0x245c60: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x245c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_245c64:
    // 0x245c64: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x245c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245c68:
    // 0x245c68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_245c6c:
    // 0x245c6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x245c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245c70:
    // 0x245c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245c74:
    // 0x245c74: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x245c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245c78:
    // 0x245c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245c7c:
    // 0x245c7c: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x245c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_245c80:
    // 0x245c80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x245c80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_245c84:
    // 0x245c84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x245c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_245c88:
    // 0x245c88: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x245c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_245c8c:
    // 0x245c8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x245c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_245c90:
    // 0x245c90: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x245c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_245c94:
    // 0x245c94: 0xc08d78e  jal         func_235E38
label_245c98:
    if (ctx->pc == 0x245C98u) {
        ctx->pc = 0x245C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C94u;
        // 0x245c98: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245C9Cu;
        goto label_245c9c;
    }
    ctx->pc = 0x245C94u;
    SET_GPR_U32(ctx, 31, 0x245C9Cu);
    ctx->pc = 0x245C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C94u;
    // 0x245c98: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x245C94u, 0x245C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C9Cu;
label_245c9c:
    // 0x245c9c: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245ca0:
    // 0x245ca0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x245ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_245ca4:
    // 0x245ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245ca8:
    // 0x245ca8: 0xc0c32b4  jal         func_30CAD0
label_245cac:
    if (ctx->pc == 0x245CACu) {
        ctx->pc = 0x245CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CA8u;
        // 0x245cac: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CB0u;
        goto label_245cb0;
    }
    ctx->pc = 0x245CA8u;
    SET_GPR_U32(ctx, 31, 0x245CB0u);
    ctx->pc = 0x245CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CA8u;
    // 0x245cac: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAD0u, 0x245CA8u, 0x245CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CB0u;
label_245cb0:
    // 0x245cb0: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_245cb4:
    // 0x245cb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245cb8:
    // 0x245cb8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x245cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_245cbc:
    // 0x245cbc: 0x40f809  jalr        $v0
label_245cc0:
    if (ctx->pc == 0x245CC0u) {
        ctx->pc = 0x245CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CBCu;
        // 0x245cc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CC4u;
        goto label_245cc4;
    }
    ctx->pc = 0x245CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245CC4u);
        ctx->pc = 0x245CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CBCu;
        // 0x245cc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245CBCu, 0x245CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245CC4u;
label_245cc4:
    // 0x245cc4: 0x8e420394  lw          $v0, 0x394($s2)
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
label_245cc8:
    // 0x245cc8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_245ccc:
    if (ctx->pc == 0x245CCCu) {
        ctx->pc = 0x245CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CC8u;
        // 0x245ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CD0u;
        goto label_245cd0;
    }
    ctx->pc = 0x245CC8u;
    {
        const bool branch_taken_0x245cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CC8u;
        // 0x245ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cc8) {
            ctx->pc = 0x245D58u;
            goto label_245d58;
        }
    }
    ctx->pc = 0x245CD0u;
label_245cd0:
    // 0x245cd0: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_245cd4:
    // 0x245cd4: 0xae420484  sw          $v0, 0x484($s2)
    ctx->pc = 0x245cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1156), GPR_U32(ctx, 2));
label_245cd8:
    // 0x245cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245cdc:
    // 0x245cdc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x245cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_245ce0:
    // 0x245ce0: 0x40f809  jalr        $v0
label_245ce4:
    if (ctx->pc == 0x245CE4u) {
        ctx->pc = 0x245CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CE0u;
        // 0x245ce4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CE8u;
        goto label_245ce8;
    }
    ctx->pc = 0x245CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245CE8u);
        ctx->pc = 0x245CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CE0u;
        // 0x245ce4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245CE0u, 0x245CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245CE8u;
label_245ce8:
    // 0x245ce8: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_245cec:
    if (ctx->pc == 0x245CECu) {
        ctx->pc = 0x245CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CE8u;
        // 0x245cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CF0u;
        goto label_245cf0;
    }
    ctx->pc = 0x245CE8u;
    {
        const bool branch_taken_0x245ce8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CE8u;
        // 0x245cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ce8) {
            ctx->pc = 0x245D10u;
            goto label_245d10;
        }
    }
    ctx->pc = 0x245CF0u;
label_245cf0:
    // 0x245cf0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x245cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245cf4:
    // 0x245cf4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_245cf8:
    // 0x245cf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x245cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245cfc:
    // 0x245cfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x245cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_245d00:
    // 0x245d00: 0xc09c8da  jal         func_272368
label_245d04:
    if (ctx->pc == 0x245D04u) {
        ctx->pc = 0x245D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D00u;
        // 0x245d04: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D08u;
        goto label_245d08;
    }
    ctx->pc = 0x245D00u;
    SET_GPR_U32(ctx, 31, 0x245D08u);
    ctx->pc = 0x245D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D00u;
    // 0x245d04: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272368u, 0x245D00u, 0x245D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D08u;
label_245d08:
    // 0x245d08: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_245d0c:
    if (ctx->pc == 0x245D0Cu) {
        ctx->pc = 0x245D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D08u;
        // 0x245d0c: 0xa04002d5  sb          $zero, 0x2D5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 725), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D10u;
        goto label_245d10;
    }
    ctx->pc = 0x245D08u;
    {
        const bool branch_taken_0x245d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245d08) {
            ctx->pc = 0x245D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245D08u;
            // 0x245d0c: 0xa04002d5  sb          $zero, 0x2D5($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 725), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245D10u;
            goto label_245d10;
        }
    }
    ctx->pc = 0x245D10u;
label_245d10:
    // 0x245d10: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x245d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245d14:
    // 0x245d14: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x245d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_245d18:
    // 0x245d18: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_245d1c:
    if (ctx->pc == 0x245D1Cu) {
        ctx->pc = 0x245D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D18u;
        // 0x245d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D20u;
        goto label_245d20;
    }
    ctx->pc = 0x245D18u;
    {
        const bool branch_taken_0x245d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D18u;
        // 0x245d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d18) {
            ctx->pc = 0x245D44u;
            goto label_245d44;
        }
    }
    ctx->pc = 0x245D20u;
label_245d20:
    // 0x245d20: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x245d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_245d24:
    // 0x245d24: 0x0  nop
    ctx->pc = 0x245d24u;
    // NOP
label_245d28:
    // 0x245d28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245d2c:
    // 0x245d2c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_245d30:
    if (ctx->pc == 0x245D30u) {
        ctx->pc = 0x245D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D2Cu;
        // 0x245d30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D34u;
        goto label_245d34;
    }
    ctx->pc = 0x245D2Cu;
    {
        const bool branch_taken_0x245d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D2Cu;
        // 0x245d30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d2c) {
            ctx->pc = 0x245D44u;
            goto label_245d44;
        }
    }
    ctx->pc = 0x245D34u;
label_245d34:
    // 0x245d34: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x245d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_245d38:
    // 0x245d38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_245d3c:
    if (ctx->pc == 0x245D3Cu) {
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D40u;
        goto label_245d40;
    }
    ctx->pc = 0x245D38u;
    {
        const bool branch_taken_0x245d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d38) {
            ctx->pc = 0x245D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245d28;
        }
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x245d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_245d44:
    // 0x245d44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245d48:
    // 0x245d48: 0xc073e86  jal         func_1CFA18
label_245d4c:
    if (ctx->pc == 0x245D4Cu) {
        ctx->pc = 0x245D50u;
        goto label_245d50;
    }
    ctx->pc = 0x245D48u;
    SET_GPR_U32(ctx, 31, 0x245D50u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x245D48u, 0x245D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D50u;
label_245d50:
    // 0x245d50: 0x100000aa  b           . + 4 + (0xAA << 2)
label_245d54:
    if (ctx->pc == 0x245D54u) {
        ctx->pc = 0x245D58u;
        goto label_245d58;
    }
    ctx->pc = 0x245D50u;
    {
        const bool branch_taken_0x245d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d50) {
            ctx->pc = 0x245FFCu;
            goto label_245ffc;
        }
    }
    ctx->pc = 0x245D58u;
label_245d58:
    // 0x245d58: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x245d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
label_245d5c:
    // 0x245d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245d60:
    // 0x245d60: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x245d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_245d64:
    // 0x245d64: 0xc08fed2  jal         func_23FB48
label_245d68:
    if (ctx->pc == 0x245D68u) {
        ctx->pc = 0x245D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D64u;
        // 0x245d68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D6Cu;
        goto label_245d6c;
    }
    ctx->pc = 0x245D64u;
    SET_GPR_U32(ctx, 31, 0x245D6Cu);
    ctx->pc = 0x245D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D64u;
    // 0x245d68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x245D64u, 0x245D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D6Cu;
label_245d6c:
    // 0x245d6c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x245d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245d70:
    // 0x245d70: 0x24040339  addiu       $a0, $zero, 0x339
    ctx->pc = 0x245d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 825));
label_245d74:
    // 0x245d74: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_245d78:
    // 0x245d78: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_245d7c:
    if (ctx->pc == 0x245D7Cu) {
        ctx->pc = 0x245D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D78u;
        // 0x245d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D80u;
        goto label_245d80;
    }
    ctx->pc = 0x245D78u;
    {
        const bool branch_taken_0x245d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x245D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D78u;
        // 0x245d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d78) {
            ctx->pc = 0x245D94u;
            goto label_245d94;
        }
    }
    ctx->pc = 0x245D80u;
label_245d80:
    // 0x245d80: 0xc08bbf4  jal         func_22EFD0
label_245d84:
    if (ctx->pc == 0x245D84u) {
        ctx->pc = 0x245D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D80u;
        // 0x245d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D88u;
        goto label_245d88;
    }
    ctx->pc = 0x245D80u;
    SET_GPR_U32(ctx, 31, 0x245D88u);
    ctx->pc = 0x245D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D80u;
    // 0x245d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x245D80u, 0x245D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D88u;
label_245d88:
    // 0x245d88: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x245d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245d8c:
    // 0x245d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245d90:
    // 0x245d90: 0xac620190  sw          $v0, 0x190($v1)
    ctx->pc = 0x245d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 2));
label_245d94:
    // 0x245d94: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_245d98:
    if (ctx->pc == 0x245D98u) {
        ctx->pc = 0x245D9Cu;
        goto label_245d9c;
    }
    ctx->pc = 0x245D94u;
    {
        const bool branch_taken_0x245d94 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x245d94) {
            ctx->pc = 0x245DACu;
            goto label_245dac;
        }
    }
    ctx->pc = 0x245D9Cu;
label_245d9c:
    // 0x245d9c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_245da0:
    if (ctx->pc == 0x245DA0u) {
        ctx->pc = 0x245DA4u;
        goto label_245da4;
    }
    ctx->pc = 0x245D9Cu;
    {
        const bool branch_taken_0x245d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x245d9c) {
            ctx->pc = 0x245DB4u;
            goto label_245db4;
        }
    }
    ctx->pc = 0x245DA4u;
label_245da4:
    // 0x245da4: 0x1280008c  beqz        $s4, . + 4 + (0x8C << 2)
label_245da8:
    if (ctx->pc == 0x245DA8u) {
        ctx->pc = 0x245DACu;
        goto label_245dac;
    }
    ctx->pc = 0x245DA4u;
    {
        const bool branch_taken_0x245da4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x245da4) {
            ctx->pc = 0x245FD8u;
            goto label_245fd8;
        }
    }
    ctx->pc = 0x245DACu;
label_245dac:
    // 0x245dac: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_245db0:
    if (ctx->pc == 0x245DB0u) {
        ctx->pc = 0x245DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DACu;
        // 0x245db0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DB4u;
        goto label_245db4;
    }
    ctx->pc = 0x245DACu;
    {
        const bool branch_taken_0x245dac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DACu;
        // 0x245db0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245dac) {
            ctx->pc = 0x245DC8u;
            goto label_245dc8;
        }
    }
    ctx->pc = 0x245DB4u;
label_245db4:
    // 0x245db4: 0xc092590  jal         func_249640
label_245db8:
    if (ctx->pc == 0x245DB8u) {
        ctx->pc = 0x245DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB4u;
        // 0x245db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DBCu;
        goto label_245dbc;
    }
    ctx->pc = 0x245DB4u;
    SET_GPR_U32(ctx, 31, 0x245DBCu);
    ctx->pc = 0x245DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DB4u;
    // 0x245db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249640u, 0x245DB4u, 0x245DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DBCu;
label_245dbc:
    // 0x245dbc: 0xc092aa2  jal         func_24AA88
label_245dc0:
    if (ctx->pc == 0x245DC0u) {
        ctx->pc = 0x245DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DBCu;
        // 0x245dc0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DC4u;
        goto label_245dc4;
    }
    ctx->pc = 0x245DBCu;
    SET_GPR_U32(ctx, 31, 0x245DC4u);
    ctx->pc = 0x245DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DBCu;
    // 0x245dc0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x245DBCu, 0x245DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DC4u;
label_245dc4:
    // 0x245dc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_245dc8:
    // 0x245dc8: 0xc0c7c5a  jal         func_31F168
label_245dcc:
    if (ctx->pc == 0x245DCCu) {
        ctx->pc = 0x245DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DC8u;
        // 0x245dcc: 0x8c44bd48  lw          $a0, -0x42B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DD0u;
        goto label_245dd0;
    }
    ctx->pc = 0x245DC8u;
    SET_GPR_U32(ctx, 31, 0x245DD0u);
    ctx->pc = 0x245DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DC8u;
    // 0x245dcc: 0x8c44bd48  lw          $a0, -0x42B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F168u, 0x245DC8u, 0x245DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DD0u;
label_245dd0:
    // 0x245dd0: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x245dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_245dd4:
    // 0x245dd4: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x245dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_245dd8:
    // 0x245dd8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x245dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_245ddc:
    // 0x245ddc: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
label_245de0:
    if (ctx->pc == 0x245DE0u) {
        ctx->pc = 0x245DE4u;
        goto label_245de4;
    }
    ctx->pc = 0x245DDCu;
    {
        const bool branch_taken_0x245ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245ddc) {
            ctx->pc = 0x245FD8u;
            goto label_245fd8;
        }
    }
    ctx->pc = 0x245DE4u;
label_245de4:
    // 0x245de4: 0x12800051  beqz        $s4, . + 4 + (0x51 << 2)
label_245de8:
    if (ctx->pc == 0x245DE8u) {
        ctx->pc = 0x245DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DE4u;
        // 0x245de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DECu;
        goto label_245dec;
    }
    ctx->pc = 0x245DE4u;
    {
        const bool branch_taken_0x245de4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DE4u;
        // 0x245de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245de4) {
            ctx->pc = 0x245F2Cu;
            goto label_245f2c;
        }
    }
    ctx->pc = 0x245DECu;
label_245dec:
    // 0x245dec: 0xc08a1f2  jal         func_2287C8
label_245df0:
    if (ctx->pc == 0x245DF0u) {
        ctx->pc = 0x245DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DECu;
        // 0x245df0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DF4u;
        goto label_245df4;
    }
    ctx->pc = 0x245DECu;
    SET_GPR_U32(ctx, 31, 0x245DF4u);
    ctx->pc = 0x245DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DECu;
    // 0x245df0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x245DECu, 0x245DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245df8:
    // 0x245df8: 0xc0f70ce  jal         func_3DC338
label_245dfc:
    if (ctx->pc == 0x245DFCu) {
        ctx->pc = 0x245DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DF8u;
        // 0x245dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E00u;
        goto label_245e00;
    }
    ctx->pc = 0x245DF8u;
    SET_GPR_U32(ctx, 31, 0x245E00u);
    ctx->pc = 0x245DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DF8u;
    // 0x245dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x245DF8u, 0x245E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E00u;
label_245e00:
    // 0x245e00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_245e04:
    if (ctx->pc == 0x245E04u) {
        ctx->pc = 0x245E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E00u;
        // 0x245e04: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E08u;
        goto label_245e08;
    }
    ctx->pc = 0x245E00u;
    {
        const bool branch_taken_0x245e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e00) {
            ctx->pc = 0x245E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E00u;
            // 0x245e04: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x245E14u;
            goto label_245e14;
        }
    }
    ctx->pc = 0x245E08u;
label_245e08:
    // 0x245e08: 0xc0c4900  jal         func_312400
label_245e0c:
    if (ctx->pc == 0x245E0Cu) {
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E10u;
        goto label_245e10;
    }
    ctx->pc = 0x245E08u;
    SET_GPR_U32(ctx, 31, 0x245E10u);
    ctx->pc = 0x245E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E08u;
    // 0x245e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x245E08u, 0x245E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E10u;
label_245e10:
    // 0x245e10: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x245e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e14:
    // 0x245e14: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x245e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_245e18:
    // 0x245e18: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x245e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245e1c:
    // 0x245e1c: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x245e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_245e20:
    // 0x245e20: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x245e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_245e24:
    // 0x245e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245e28:
    // 0x245e28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x245e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e2c:
    // 0x245e2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x245e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_245e30:
    // 0x245e30: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x245e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245e34:
    // 0x245e34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x245e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_245e38:
    // 0x245e38: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x245e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e3c:
    // 0x245e3c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x245e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_245e40:
    // 0x245e40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245e44:
    // 0x245e44: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x245e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e48:
    // 0x245e48: 0xc0f70ce  jal         func_3DC338
label_245e4c:
    if (ctx->pc == 0x245E4Cu) {
        ctx->pc = 0x245E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E48u;
        // 0x245e4c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E50u;
        goto label_245e50;
    }
    ctx->pc = 0x245E48u;
    SET_GPR_U32(ctx, 31, 0x245E50u);
    ctx->pc = 0x245E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E48u;
    // 0x245e4c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x245E48u, 0x245E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E50u;
label_245e50:
    // 0x245e50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_245e54:
    if (ctx->pc == 0x245E54u) {
        ctx->pc = 0x245E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E50u;
        // 0x245e54: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E58u;
        goto label_245e58;
    }
    ctx->pc = 0x245E50u;
    {
        const bool branch_taken_0x245e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e50) {
            ctx->pc = 0x245E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245E50u;
            // 0x245e54: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x245E64u;
            goto label_245e64;
        }
    }
    ctx->pc = 0x245E58u;
label_245e58:
    // 0x245e58: 0xc0c4900  jal         func_312400
label_245e5c:
    if (ctx->pc == 0x245E5Cu) {
        ctx->pc = 0x245E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E58u;
        // 0x245e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E60u;
        goto label_245e60;
    }
    ctx->pc = 0x245E58u;
    SET_GPR_U32(ctx, 31, 0x245E60u);
    ctx->pc = 0x245E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E58u;
    // 0x245e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x245E58u, 0x245E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E60u;
label_245e60:
    // 0x245e60: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x245e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e64:
    // 0x245e64: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_245e68:
    // 0x245e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_245e6c:
    // 0x245e6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x245e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_245e70:
    // 0x245e70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_245e74:
    // 0x245e74: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x245e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_245e78:
    // 0x245e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245e7c:
    // 0x245e7c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x245e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245e80:
    // 0x245e80: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x245e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e84:
    // 0x245e84: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x245e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_245e88:
    // 0x245e88: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x245e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245e8c:
    // 0x245e8c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x245e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_245e90:
    // 0x245e90: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x245e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e94:
    // 0x245e94: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x245e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_245e98:
    // 0x245e98: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x245e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_245e9c:
    // 0x245e9c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x245e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_245ea0:
    // 0x245ea0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x245ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_245ea4:
    // 0x245ea4: 0xc0b1b16  jal         func_2C6C58
label_245ea8:
    if (ctx->pc == 0x245EA8u) {
        ctx->pc = 0x245EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EA4u;
        // 0x245ea8: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EACu;
        goto label_245eac;
    }
    ctx->pc = 0x245EA4u;
    SET_GPR_U32(ctx, 31, 0x245EACu);
    ctx->pc = 0x245EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EA4u;
    // 0x245ea8: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C58u, 0x245EA4u, 0x245EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EACu;
label_245eac:
    // 0x245eac: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x245eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245eb0:
    // 0x245eb0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x245eb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_245eb4:
    // 0x245eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245eb8:
    // 0x245eb8: 0xac730190  sw          $s3, 0x190($v1)
    ctx->pc = 0x245eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 19));
label_245ebc:
    // 0x245ebc: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x245ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_245ec0:
    // 0x245ec0: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
label_245ec4:
    // 0x245ec4: 0x60f809  jalr        $v1
label_245ec8:
    if (ctx->pc == 0x245EC8u) {
        ctx->pc = 0x245EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EC4u;
        // 0x245ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245ECCu;
        goto label_245ecc;
    }
    ctx->pc = 0x245EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245ECCu);
        ctx->pc = 0x245EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EC4u;
        // 0x245ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EC4u, 0x245ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245ECCu;
label_245ecc:
    // 0x245ecc: 0x8e470218  lw          $a3, 0x218($s2)
    ctx->pc = 0x245eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_245ed0:
    // 0x245ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245ed4:
    // 0x245ed4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245ed8:
    // 0x245ed8: 0x8ce201c0  lw          $v0, 0x1C0($a3)
    ctx->pc = 0x245ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
label_245edc:
    // 0x245edc: 0x40f809  jalr        $v0
label_245ee0:
    if (ctx->pc == 0x245EE0u) {
        ctx->pc = 0x245EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EDCu;
        // 0x245ee0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EE4u;
        goto label_245ee4;
    }
    ctx->pc = 0x245EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245EE4u);
        ctx->pc = 0x245EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EDCu;
        // 0x245ee0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EDCu, 0x245EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245EE4u;
label_245ee4:
    // 0x245ee4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x245ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_245ee8:
    // 0x245ee8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x245ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245eec:
    // 0x245eec: 0xc0f70ce  jal         func_3DC338
label_245ef0:
    if (ctx->pc == 0x245EF0u) {
        ctx->pc = 0x245EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EECu;
        // 0x245ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EF4u;
        goto label_245ef4;
    }
    ctx->pc = 0x245EECu;
    SET_GPR_U32(ctx, 31, 0x245EF4u);
    ctx->pc = 0x245EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EECu;
    // 0x245ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x245EECu, 0x245EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EF4u;
label_245ef4:
    // 0x245ef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_245ef8:
    if (ctx->pc == 0x245EF8u) {
        ctx->pc = 0x245EFCu;
        goto label_245efc;
    }
    ctx->pc = 0x245EF4u;
    {
        const bool branch_taken_0x245ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ef4) {
            ctx->pc = 0x245F04u;
            goto label_245f04;
        }
    }
    ctx->pc = 0x245EFCu;
label_245efc:
    // 0x245efc: 0xc0c4900  jal         func_312400
label_245f00:
    if (ctx->pc == 0x245F00u) {
        ctx->pc = 0x245F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EFCu;
        // 0x245f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F04u;
        goto label_245f04;
    }
    ctx->pc = 0x245EFCu;
    SET_GPR_U32(ctx, 31, 0x245F04u);
    ctx->pc = 0x245F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EFCu;
    // 0x245f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x245EFCu, 0x245F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F04u;
label_245f04:
    // 0x245f04: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x245f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245f08:
    // 0x245f08: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x245f08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_245f0c:
    // 0x245f0c: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_245f10:
    // 0x245f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245f14:
    // 0x245f14: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x245f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_245f18:
    // 0x245f18: 0x60f809  jalr        $v1
label_245f1c:
    if (ctx->pc == 0x245F1Cu) {
        ctx->pc = 0x245F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F18u;
        // 0x245f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F20u;
        goto label_245f20;
    }
    ctx->pc = 0x245F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245F20u);
        ctx->pc = 0x245F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F18u;
        // 0x245f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F18u, 0x245F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245F20u;
label_245f20:
    // 0x245f20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x245f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_245f24:
    // 0x245f24: 0xa053bb00  sb          $s3, -0x4500($v0)
    ctx->pc = 0x245f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949632), (uint8_t)GPR_U32(ctx, 19));
label_245f28:
    // 0x245f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245f2c:
    // 0x245f2c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_245f30:
    // 0x245f30: 0xc08fed2  jal         func_23FB48
label_245f34:
    if (ctx->pc == 0x245F34u) {
        ctx->pc = 0x245F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F30u;
        // 0x245f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F38u;
        goto label_245f38;
    }
    ctx->pc = 0x245F30u;
    SET_GPR_U32(ctx, 31, 0x245F38u);
    ctx->pc = 0x245F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F30u;
    // 0x245f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x245F30u, 0x245F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F38u;
label_245f38:
    // 0x245f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245f3c:
    // 0x245f3c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x245f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_245f40:
    // 0x245f40: 0xc08fed2  jal         func_23FB48
label_245f44:
    if (ctx->pc == 0x245F44u) {
        ctx->pc = 0x245F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F40u;
        // 0x245f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F48u;
        goto label_245f48;
    }
    ctx->pc = 0x245F40u;
    SET_GPR_U32(ctx, 31, 0x245F48u);
    ctx->pc = 0x245F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F40u;
    // 0x245f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x245F40u, 0x245F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F48u;
label_245f48:
    // 0x245f48: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x245f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_245f4c:
    // 0x245f4c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x245f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_245f50:
    // 0x245f50: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_245f54:
    // 0x245f54: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x245f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_245f58:
    // 0x245f58: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x245f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_245f5c:
    // 0x245f5c: 0x40f809  jalr        $v0
label_245f60:
    if (ctx->pc == 0x245F60u) {
        ctx->pc = 0x245F64u;
        goto label_245f64;
    }
    ctx->pc = 0x245F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245F64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F5Cu, 0x245F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245F64u;
label_245f64:
    // 0x245f64: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_245f68:
    // 0x245f68: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x245f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_245f6c:
    // 0x245f6c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x245f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_245f70:
    // 0x245f70: 0x40f809  jalr        $v0
label_245f74:
    if (ctx->pc == 0x245F74u) {
        ctx->pc = 0x245F78u;
        goto label_245f78;
    }
    ctx->pc = 0x245F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245F78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F70u, 0x245F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245F78u;
label_245f78:
    // 0x245f78: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_245f7c:
    // 0x245f7c: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x245f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_245f80:
    // 0x245f80: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x245f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_245f84:
    // 0x245f84: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x245f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_245f88:
    // 0x245f88: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x245f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_245f8c:
    // 0x245f8c: 0xc07682a  jal         func_1DA0A8
label_245f90:
    if (ctx->pc == 0x245F90u) {
        ctx->pc = 0x245F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F8Cu;
        // 0x245f90: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F94u;
        goto label_245f94;
    }
    ctx->pc = 0x245F8Cu;
    SET_GPR_U32(ctx, 31, 0x245F94u);
    ctx->pc = 0x245F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F8Cu;
    // 0x245f90: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x245F8Cu, 0x245F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F94u;
label_245f94:
    // 0x245f94: 0xae400fd0  sw          $zero, 0xFD0($s2)
    ctx->pc = 0x245f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4048), GPR_U32(ctx, 0));
label_245f98:
    // 0x245f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245f9c:
    // 0x245f9c: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x245f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_245fa0:
    // 0x245fa0: 0xc08999e  jal         func_226678
label_245fa4:
    if (ctx->pc == 0x245FA4u) {
        ctx->pc = 0x245FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FA0u;
        // 0x245fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FA8u;
        goto label_245fa8;
    }
    ctx->pc = 0x245FA0u;
    SET_GPR_U32(ctx, 31, 0x245FA8u);
    ctx->pc = 0x245FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FA0u;
    // 0x245fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226678u, 0x245FA0u, 0x245FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FA8u;
label_245fa8:
    // 0x245fa8: 0xc08bd98  jal         func_22F660
label_245fac:
    if (ctx->pc == 0x245FACu) {
        ctx->pc = 0x245FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FA8u;
        // 0x245fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FB0u;
        goto label_245fb0;
    }
    ctx->pc = 0x245FA8u;
    SET_GPR_U32(ctx, 31, 0x245FB0u);
    ctx->pc = 0x245FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FA8u;
    // 0x245fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x245FA8u, 0x245FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FB0u;
label_245fb0:
    // 0x245fb0: 0x8e440388  lw          $a0, 0x388($s2)
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
label_245fb4:
    // 0x245fb4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_245fb8:
    if (ctx->pc == 0x245FB8u) {
        ctx->pc = 0x245FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FB4u;
        // 0x245fb8: 0x8e4311c0  lw          $v1, 0x11C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FBCu;
        goto label_245fbc;
    }
    ctx->pc = 0x245FB4u;
    {
        const bool branch_taken_0x245fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fb4) {
            ctx->pc = 0x245FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FB4u;
            // 0x245fb8: 0x8e4311c0  lw          $v1, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245FC8u;
            goto label_245fc8;
        }
    }
    ctx->pc = 0x245FBCu;
label_245fbc:
    // 0x245fbc: 0xc09bf28  jal         func_26FCA0
label_245fc0:
    if (ctx->pc == 0x245FC0u) {
        ctx->pc = 0x245FC4u;
        goto label_245fc4;
    }
    ctx->pc = 0x245FBCu;
    SET_GPR_U32(ctx, 31, 0x245FC4u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x245FBCu, 0x245FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FC4u;
label_245fc4:
    // 0x245fc4: 0x8e4311c0  lw          $v1, 0x11C0($s2)
    ctx->pc = 0x245fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_245fc8:
    // 0x245fc8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x245fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_245fcc:
    // 0x245fcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x245fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_245fd0:
    // 0x245fd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x245fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_245fd4:
    // 0x245fd4: 0xae4311c0  sw          $v1, 0x11C0($s2)
    ctx->pc = 0x245fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 3));
label_245fd8:
    // 0x245fd8: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_245fdc:
    if (ctx->pc == 0x245FDCu) {
        ctx->pc = 0x245FE0u;
        goto label_245fe0;
    }
    ctx->pc = 0x245FD8u;
    {
        const bool branch_taken_0x245fd8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fd8) {
            ctx->pc = 0x245FFCu;
            goto label_245ffc;
        }
    }
    ctx->pc = 0x245FE0u;
label_245fe0:
    // 0x245fe0: 0x924206fc  lbu         $v0, 0x6FC($s2)
    ctx->pc = 0x245fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1788)));
label_245fe4:
    // 0x245fe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_245fe8:
    if (ctx->pc == 0x245FE8u) {
        ctx->pc = 0x245FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FE4u;
        // 0x245fe8: 0xae40037c  sw          $zero, 0x37C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FECu;
        goto label_245fec;
    }
    ctx->pc = 0x245FE4u;
    {
        const bool branch_taken_0x245fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FE4u;
        // 0x245fe8: 0xae40037c  sw          $zero, 0x37C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fe4) {
            ctx->pc = 0x245FFCu;
            goto label_245ffc;
        }
    }
    ctx->pc = 0x245FECu;
label_245fec:
    // 0x245fec: 0xc089faa  jal         func_227EA8
label_245ff0:
    if (ctx->pc == 0x245FF0u) {
        ctx->pc = 0x245FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FECu;
        // 0x245ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FF4u;
        goto label_245ff4;
    }
    ctx->pc = 0x245FECu;
    SET_GPR_U32(ctx, 31, 0x245FF4u);
    ctx->pc = 0x245FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FECu;
    // 0x245ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EA8u, 0x245FECu, 0x245FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FF4u;
label_245ff4:
    // 0x245ff4: 0xc089f68  jal         func_227DA0
label_245ff8:
    if (ctx->pc == 0x245FF8u) {
        ctx->pc = 0x245FFCu;
        goto label_245ffc;
    }
    ctx->pc = 0x245FF4u;
    SET_GPR_U32(ctx, 31, 0x245FFCu);
    ctx->pc = 0x227DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DA0u, 0x245FF4u, 0x245FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FFCu;
label_245ffc:
    // 0x245ffc: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
label_246000:
    if (ctx->pc == 0x246000u) {
        ctx->pc = 0x246000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FFCu;
        // 0x246000: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246004u;
        goto label_246004;
    }
    ctx->pc = 0x245FFCu;
    {
        const bool branch_taken_0x245ffc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FFCu;
        // 0x246000: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ffc) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x246004u;
label_246004:
    // 0x246004: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x246004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_246008:
    // 0x246008: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x246008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_24600c:
    // 0x24600c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x24600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_246010:
    // 0x246010: 0x40f809  jalr        $v0
label_246014:
    if (ctx->pc == 0x246014u) {
        ctx->pc = 0x246018u;
        goto label_246018;
    }
    ctx->pc = 0x246010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246010u, 0x246018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246018u;
label_246018:
    // 0x246018: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x246018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_24601c:
    // 0x24601c: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x24601cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_246020:
    // 0x246020: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x246020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_246024:
    // 0x246024: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x246024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_246028:
    // 0x246028: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x246028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_24602c:
    // 0x24602c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x24602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_246030:
    // 0x246030: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x246030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_246034:
    // 0x246034: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x246034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_246038:
    // 0x246038: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x246038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_24603c:
    // 0x24603c: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x24603cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_246040:
    // 0x246040: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x246040u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_246044:
    // 0x246044: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x246044u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_246048:
    // 0x246048: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x246048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_24604c:
    // 0x24604c: 0x3e00008  jr          $ra
label_246050:
    if (ctx->pc == 0x246050u) {
        ctx->pc = 0x246050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24604Cu;
        // 0x246050: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246054u;
        goto label_246054;
    }
    ctx->pc = 0x24604Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24604Cu;
        // 0x246050: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24604Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246054u;
label_246054:
    // 0x246054: 0x0  nop
    ctx->pc = 0x246054u;
    // NOP
    ctx->pc = 0x246058u;
}
