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

// Function: sub_00225940
// Address: 0x225940 - 0x225f30
void sub_00225940_0x225940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225940_0x225940");
#endif

    switch (ctx->pc) {
        case 0x225940u: goto label_225940;
        case 0x225944u: goto label_225944;
        case 0x225948u: goto label_225948;
        case 0x22594cu: goto label_22594c;
        case 0x225950u: goto label_225950;
        case 0x225954u: goto label_225954;
        case 0x225958u: goto label_225958;
        case 0x22595cu: goto label_22595c;
        case 0x225960u: goto label_225960;
        case 0x225964u: goto label_225964;
        case 0x225968u: goto label_225968;
        case 0x22596cu: goto label_22596c;
        case 0x225970u: goto label_225970;
        case 0x225974u: goto label_225974;
        case 0x225978u: goto label_225978;
        case 0x22597cu: goto label_22597c;
        case 0x225980u: goto label_225980;
        case 0x225984u: goto label_225984;
        case 0x225988u: goto label_225988;
        case 0x22598cu: goto label_22598c;
        case 0x225990u: goto label_225990;
        case 0x225994u: goto label_225994;
        case 0x225998u: goto label_225998;
        case 0x22599cu: goto label_22599c;
        case 0x2259a0u: goto label_2259a0;
        case 0x2259a4u: goto label_2259a4;
        case 0x2259a8u: goto label_2259a8;
        case 0x2259acu: goto label_2259ac;
        case 0x2259b0u: goto label_2259b0;
        case 0x2259b4u: goto label_2259b4;
        case 0x2259b8u: goto label_2259b8;
        case 0x2259bcu: goto label_2259bc;
        case 0x2259c0u: goto label_2259c0;
        case 0x2259c4u: goto label_2259c4;
        case 0x2259c8u: goto label_2259c8;
        case 0x2259ccu: goto label_2259cc;
        case 0x2259d0u: goto label_2259d0;
        case 0x2259d4u: goto label_2259d4;
        case 0x2259d8u: goto label_2259d8;
        case 0x2259dcu: goto label_2259dc;
        case 0x2259e0u: goto label_2259e0;
        case 0x2259e4u: goto label_2259e4;
        case 0x2259e8u: goto label_2259e8;
        case 0x2259ecu: goto label_2259ec;
        case 0x2259f0u: goto label_2259f0;
        case 0x2259f4u: goto label_2259f4;
        case 0x2259f8u: goto label_2259f8;
        case 0x2259fcu: goto label_2259fc;
        case 0x225a00u: goto label_225a00;
        case 0x225a04u: goto label_225a04;
        case 0x225a08u: goto label_225a08;
        case 0x225a0cu: goto label_225a0c;
        case 0x225a10u: goto label_225a10;
        case 0x225a14u: goto label_225a14;
        case 0x225a18u: goto label_225a18;
        case 0x225a1cu: goto label_225a1c;
        case 0x225a20u: goto label_225a20;
        case 0x225a24u: goto label_225a24;
        case 0x225a28u: goto label_225a28;
        case 0x225a2cu: goto label_225a2c;
        case 0x225a30u: goto label_225a30;
        case 0x225a34u: goto label_225a34;
        case 0x225a38u: goto label_225a38;
        case 0x225a3cu: goto label_225a3c;
        case 0x225a40u: goto label_225a40;
        case 0x225a44u: goto label_225a44;
        case 0x225a48u: goto label_225a48;
        case 0x225a4cu: goto label_225a4c;
        case 0x225a50u: goto label_225a50;
        case 0x225a54u: goto label_225a54;
        case 0x225a58u: goto label_225a58;
        case 0x225a5cu: goto label_225a5c;
        case 0x225a60u: goto label_225a60;
        case 0x225a64u: goto label_225a64;
        case 0x225a68u: goto label_225a68;
        case 0x225a6cu: goto label_225a6c;
        case 0x225a70u: goto label_225a70;
        case 0x225a74u: goto label_225a74;
        case 0x225a78u: goto label_225a78;
        case 0x225a7cu: goto label_225a7c;
        case 0x225a80u: goto label_225a80;
        case 0x225a84u: goto label_225a84;
        case 0x225a88u: goto label_225a88;
        case 0x225a8cu: goto label_225a8c;
        case 0x225a90u: goto label_225a90;
        case 0x225a94u: goto label_225a94;
        case 0x225a98u: goto label_225a98;
        case 0x225a9cu: goto label_225a9c;
        case 0x225aa0u: goto label_225aa0;
        case 0x225aa4u: goto label_225aa4;
        case 0x225aa8u: goto label_225aa8;
        case 0x225aacu: goto label_225aac;
        case 0x225ab0u: goto label_225ab0;
        case 0x225ab4u: goto label_225ab4;
        case 0x225ab8u: goto label_225ab8;
        case 0x225abcu: goto label_225abc;
        case 0x225ac0u: goto label_225ac0;
        case 0x225ac4u: goto label_225ac4;
        case 0x225ac8u: goto label_225ac8;
        case 0x225accu: goto label_225acc;
        case 0x225ad0u: goto label_225ad0;
        case 0x225ad4u: goto label_225ad4;
        case 0x225ad8u: goto label_225ad8;
        case 0x225adcu: goto label_225adc;
        case 0x225ae0u: goto label_225ae0;
        case 0x225ae4u: goto label_225ae4;
        case 0x225ae8u: goto label_225ae8;
        case 0x225aecu: goto label_225aec;
        case 0x225af0u: goto label_225af0;
        case 0x225af4u: goto label_225af4;
        case 0x225af8u: goto label_225af8;
        case 0x225afcu: goto label_225afc;
        case 0x225b00u: goto label_225b00;
        case 0x225b04u: goto label_225b04;
        case 0x225b08u: goto label_225b08;
        case 0x225b0cu: goto label_225b0c;
        case 0x225b10u: goto label_225b10;
        case 0x225b14u: goto label_225b14;
        case 0x225b18u: goto label_225b18;
        case 0x225b1cu: goto label_225b1c;
        case 0x225b20u: goto label_225b20;
        case 0x225b24u: goto label_225b24;
        case 0x225b28u: goto label_225b28;
        case 0x225b2cu: goto label_225b2c;
        case 0x225b30u: goto label_225b30;
        case 0x225b34u: goto label_225b34;
        case 0x225b38u: goto label_225b38;
        case 0x225b3cu: goto label_225b3c;
        case 0x225b40u: goto label_225b40;
        case 0x225b44u: goto label_225b44;
        case 0x225b48u: goto label_225b48;
        case 0x225b4cu: goto label_225b4c;
        case 0x225b50u: goto label_225b50;
        case 0x225b54u: goto label_225b54;
        case 0x225b58u: goto label_225b58;
        case 0x225b5cu: goto label_225b5c;
        case 0x225b60u: goto label_225b60;
        case 0x225b64u: goto label_225b64;
        case 0x225b68u: goto label_225b68;
        case 0x225b6cu: goto label_225b6c;
        case 0x225b70u: goto label_225b70;
        case 0x225b74u: goto label_225b74;
        case 0x225b78u: goto label_225b78;
        case 0x225b7cu: goto label_225b7c;
        case 0x225b80u: goto label_225b80;
        case 0x225b84u: goto label_225b84;
        case 0x225b88u: goto label_225b88;
        case 0x225b8cu: goto label_225b8c;
        case 0x225b90u: goto label_225b90;
        case 0x225b94u: goto label_225b94;
        case 0x225b98u: goto label_225b98;
        case 0x225b9cu: goto label_225b9c;
        case 0x225ba0u: goto label_225ba0;
        case 0x225ba4u: goto label_225ba4;
        case 0x225ba8u: goto label_225ba8;
        case 0x225bacu: goto label_225bac;
        case 0x225bb0u: goto label_225bb0;
        case 0x225bb4u: goto label_225bb4;
        case 0x225bb8u: goto label_225bb8;
        case 0x225bbcu: goto label_225bbc;
        case 0x225bc0u: goto label_225bc0;
        case 0x225bc4u: goto label_225bc4;
        case 0x225bc8u: goto label_225bc8;
        case 0x225bccu: goto label_225bcc;
        case 0x225bd0u: goto label_225bd0;
        case 0x225bd4u: goto label_225bd4;
        case 0x225bd8u: goto label_225bd8;
        case 0x225bdcu: goto label_225bdc;
        case 0x225be0u: goto label_225be0;
        case 0x225be4u: goto label_225be4;
        case 0x225be8u: goto label_225be8;
        case 0x225becu: goto label_225bec;
        case 0x225bf0u: goto label_225bf0;
        case 0x225bf4u: goto label_225bf4;
        case 0x225bf8u: goto label_225bf8;
        case 0x225bfcu: goto label_225bfc;
        case 0x225c00u: goto label_225c00;
        case 0x225c04u: goto label_225c04;
        case 0x225c08u: goto label_225c08;
        case 0x225c0cu: goto label_225c0c;
        case 0x225c10u: goto label_225c10;
        case 0x225c14u: goto label_225c14;
        case 0x225c18u: goto label_225c18;
        case 0x225c1cu: goto label_225c1c;
        case 0x225c20u: goto label_225c20;
        case 0x225c24u: goto label_225c24;
        case 0x225c28u: goto label_225c28;
        case 0x225c2cu: goto label_225c2c;
        case 0x225c30u: goto label_225c30;
        case 0x225c34u: goto label_225c34;
        case 0x225c38u: goto label_225c38;
        case 0x225c3cu: goto label_225c3c;
        case 0x225c40u: goto label_225c40;
        case 0x225c44u: goto label_225c44;
        case 0x225c48u: goto label_225c48;
        case 0x225c4cu: goto label_225c4c;
        case 0x225c50u: goto label_225c50;
        case 0x225c54u: goto label_225c54;
        case 0x225c58u: goto label_225c58;
        case 0x225c5cu: goto label_225c5c;
        case 0x225c60u: goto label_225c60;
        case 0x225c64u: goto label_225c64;
        case 0x225c68u: goto label_225c68;
        case 0x225c6cu: goto label_225c6c;
        case 0x225c70u: goto label_225c70;
        case 0x225c74u: goto label_225c74;
        case 0x225c78u: goto label_225c78;
        case 0x225c7cu: goto label_225c7c;
        case 0x225c80u: goto label_225c80;
        case 0x225c84u: goto label_225c84;
        case 0x225c88u: goto label_225c88;
        case 0x225c8cu: goto label_225c8c;
        case 0x225c90u: goto label_225c90;
        case 0x225c94u: goto label_225c94;
        case 0x225c98u: goto label_225c98;
        case 0x225c9cu: goto label_225c9c;
        case 0x225ca0u: goto label_225ca0;
        case 0x225ca4u: goto label_225ca4;
        case 0x225ca8u: goto label_225ca8;
        case 0x225cacu: goto label_225cac;
        case 0x225cb0u: goto label_225cb0;
        case 0x225cb4u: goto label_225cb4;
        case 0x225cb8u: goto label_225cb8;
        case 0x225cbcu: goto label_225cbc;
        case 0x225cc0u: goto label_225cc0;
        case 0x225cc4u: goto label_225cc4;
        case 0x225cc8u: goto label_225cc8;
        case 0x225cccu: goto label_225ccc;
        case 0x225cd0u: goto label_225cd0;
        case 0x225cd4u: goto label_225cd4;
        case 0x225cd8u: goto label_225cd8;
        case 0x225cdcu: goto label_225cdc;
        case 0x225ce0u: goto label_225ce0;
        case 0x225ce4u: goto label_225ce4;
        case 0x225ce8u: goto label_225ce8;
        case 0x225cecu: goto label_225cec;
        case 0x225cf0u: goto label_225cf0;
        case 0x225cf4u: goto label_225cf4;
        case 0x225cf8u: goto label_225cf8;
        case 0x225cfcu: goto label_225cfc;
        case 0x225d00u: goto label_225d00;
        case 0x225d04u: goto label_225d04;
        case 0x225d08u: goto label_225d08;
        case 0x225d0cu: goto label_225d0c;
        case 0x225d10u: goto label_225d10;
        case 0x225d14u: goto label_225d14;
        case 0x225d18u: goto label_225d18;
        case 0x225d1cu: goto label_225d1c;
        case 0x225d20u: goto label_225d20;
        case 0x225d24u: goto label_225d24;
        case 0x225d28u: goto label_225d28;
        case 0x225d2cu: goto label_225d2c;
        case 0x225d30u: goto label_225d30;
        case 0x225d34u: goto label_225d34;
        case 0x225d38u: goto label_225d38;
        case 0x225d3cu: goto label_225d3c;
        case 0x225d40u: goto label_225d40;
        case 0x225d44u: goto label_225d44;
        case 0x225d48u: goto label_225d48;
        case 0x225d4cu: goto label_225d4c;
        case 0x225d50u: goto label_225d50;
        case 0x225d54u: goto label_225d54;
        case 0x225d58u: goto label_225d58;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d60u: goto label_225d60;
        case 0x225d64u: goto label_225d64;
        case 0x225d68u: goto label_225d68;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d70u: goto label_225d70;
        case 0x225d74u: goto label_225d74;
        case 0x225d78u: goto label_225d78;
        case 0x225d7cu: goto label_225d7c;
        case 0x225d80u: goto label_225d80;
        case 0x225d84u: goto label_225d84;
        case 0x225d88u: goto label_225d88;
        case 0x225d8cu: goto label_225d8c;
        case 0x225d90u: goto label_225d90;
        case 0x225d94u: goto label_225d94;
        case 0x225d98u: goto label_225d98;
        case 0x225d9cu: goto label_225d9c;
        case 0x225da0u: goto label_225da0;
        case 0x225da4u: goto label_225da4;
        case 0x225da8u: goto label_225da8;
        case 0x225dacu: goto label_225dac;
        case 0x225db0u: goto label_225db0;
        case 0x225db4u: goto label_225db4;
        case 0x225db8u: goto label_225db8;
        case 0x225dbcu: goto label_225dbc;
        case 0x225dc0u: goto label_225dc0;
        case 0x225dc4u: goto label_225dc4;
        case 0x225dc8u: goto label_225dc8;
        case 0x225dccu: goto label_225dcc;
        case 0x225dd0u: goto label_225dd0;
        case 0x225dd4u: goto label_225dd4;
        case 0x225dd8u: goto label_225dd8;
        case 0x225ddcu: goto label_225ddc;
        case 0x225de0u: goto label_225de0;
        case 0x225de4u: goto label_225de4;
        case 0x225de8u: goto label_225de8;
        case 0x225decu: goto label_225dec;
        case 0x225df0u: goto label_225df0;
        case 0x225df4u: goto label_225df4;
        case 0x225df8u: goto label_225df8;
        case 0x225dfcu: goto label_225dfc;
        case 0x225e00u: goto label_225e00;
        case 0x225e04u: goto label_225e04;
        case 0x225e08u: goto label_225e08;
        case 0x225e0cu: goto label_225e0c;
        case 0x225e10u: goto label_225e10;
        case 0x225e14u: goto label_225e14;
        case 0x225e18u: goto label_225e18;
        case 0x225e1cu: goto label_225e1c;
        case 0x225e20u: goto label_225e20;
        case 0x225e24u: goto label_225e24;
        case 0x225e28u: goto label_225e28;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e30u: goto label_225e30;
        case 0x225e34u: goto label_225e34;
        case 0x225e38u: goto label_225e38;
        case 0x225e3cu: goto label_225e3c;
        case 0x225e40u: goto label_225e40;
        case 0x225e44u: goto label_225e44;
        case 0x225e48u: goto label_225e48;
        case 0x225e4cu: goto label_225e4c;
        case 0x225e50u: goto label_225e50;
        case 0x225e54u: goto label_225e54;
        case 0x225e58u: goto label_225e58;
        case 0x225e5cu: goto label_225e5c;
        case 0x225e60u: goto label_225e60;
        case 0x225e64u: goto label_225e64;
        case 0x225e68u: goto label_225e68;
        case 0x225e6cu: goto label_225e6c;
        case 0x225e70u: goto label_225e70;
        case 0x225e74u: goto label_225e74;
        case 0x225e78u: goto label_225e78;
        case 0x225e7cu: goto label_225e7c;
        case 0x225e80u: goto label_225e80;
        case 0x225e84u: goto label_225e84;
        case 0x225e88u: goto label_225e88;
        case 0x225e8cu: goto label_225e8c;
        case 0x225e90u: goto label_225e90;
        case 0x225e94u: goto label_225e94;
        case 0x225e98u: goto label_225e98;
        case 0x225e9cu: goto label_225e9c;
        case 0x225ea0u: goto label_225ea0;
        case 0x225ea4u: goto label_225ea4;
        case 0x225ea8u: goto label_225ea8;
        case 0x225eacu: goto label_225eac;
        case 0x225eb0u: goto label_225eb0;
        case 0x225eb4u: goto label_225eb4;
        case 0x225eb8u: goto label_225eb8;
        case 0x225ebcu: goto label_225ebc;
        case 0x225ec0u: goto label_225ec0;
        case 0x225ec4u: goto label_225ec4;
        case 0x225ec8u: goto label_225ec8;
        case 0x225eccu: goto label_225ecc;
        case 0x225ed0u: goto label_225ed0;
        case 0x225ed4u: goto label_225ed4;
        case 0x225ed8u: goto label_225ed8;
        case 0x225edcu: goto label_225edc;
        case 0x225ee0u: goto label_225ee0;
        case 0x225ee4u: goto label_225ee4;
        case 0x225ee8u: goto label_225ee8;
        case 0x225eecu: goto label_225eec;
        case 0x225ef0u: goto label_225ef0;
        case 0x225ef4u: goto label_225ef4;
        case 0x225ef8u: goto label_225ef8;
        case 0x225efcu: goto label_225efc;
        case 0x225f00u: goto label_225f00;
        case 0x225f04u: goto label_225f04;
        case 0x225f08u: goto label_225f08;
        case 0x225f0cu: goto label_225f0c;
        case 0x225f10u: goto label_225f10;
        case 0x225f14u: goto label_225f14;
        case 0x225f18u: goto label_225f18;
        case 0x225f1cu: goto label_225f1c;
        case 0x225f20u: goto label_225f20;
        case 0x225f24u: goto label_225f24;
        case 0x225f28u: goto label_225f28;
        case 0x225f2cu: goto label_225f2c;
        default: break;
    }

    ctx->pc = 0x225940u;

label_225940:
    // 0x225940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225944:
    // 0x225944: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x225944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_225948:
    // 0x225948: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x225948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_22594c:
    // 0x22594c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_225950:
    // 0x225950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225954:
    // 0x225954: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x225954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_225958:
    // 0x225958: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x225958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_22595c:
    // 0x22595c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_225960:
    // 0x225960: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x225960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_225964:
    // 0x225964: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x225964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
label_225968:
    // 0x225968: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x225968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
label_22596c:
    // 0x22596c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x22596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_225970:
    // 0x225970: 0x8c44bd70  lw          $a0, -0x4290($v0)
    ctx->pc = 0x225970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950256)));
label_225974:
    // 0x225974: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x225974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_225978:
    // 0x225978: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x225978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_22597c:
    // 0x22597c: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
label_225980:
    if (ctx->pc == 0x225980u) {
        ctx->pc = 0x225980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22597Cu;
        // 0x225980: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225984u;
        goto label_225984;
    }
    ctx->pc = 0x22597Cu;
    {
        const bool branch_taken_0x22597c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x225980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22597Cu;
        // 0x225980: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22597c) {
            ctx->pc = 0x2259BCu;
            goto label_2259bc;
        }
    }
    ctx->pc = 0x225984u;
label_225984:
    // 0x225984: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x225984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_225988:
    // 0x225988: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x225988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_22598c:
    // 0x22598c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_225990:
    if (ctx->pc == 0x225990u) {
        ctx->pc = 0x225990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22598Cu;
        // 0x225990: 0x8e130254  lw          $s3, 0x254($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225994u;
        goto label_225994;
    }
    ctx->pc = 0x22598Cu;
    {
        const bool branch_taken_0x22598c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22598c) {
            ctx->pc = 0x225990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22598Cu;
            // 0x225990: 0x8e130254  lw          $s3, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2259C0u;
            goto label_2259c0;
        }
    }
    ctx->pc = 0x225994u;
label_225994:
    // 0x225994: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x225994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225998:
    // 0x225998: 0xc6000238  lwc1        $f0, 0x238($s0)
    ctx->pc = 0x225998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22599c:
    // 0x22599c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22599cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2259a0:
    // 0x2259a0: 0x0  nop
    ctx->pc = 0x2259a0u;
    // NOP
label_2259a4:
    // 0x2259a4: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
label_2259a8:
    if (ctx->pc == 0x2259A8u) {
        ctx->pc = 0x2259A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259A4u;
        // 0x2259a8: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259ACu;
        goto label_2259ac;
    }
    ctx->pc = 0x2259A4u;
    {
        const bool branch_taken_0x2259a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2259a4) {
            ctx->pc = 0x2259A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2259A4u;
            // 0x2259a8: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B80u;
            goto label_225b80;
        }
    }
    ctx->pc = 0x2259ACu;
label_2259ac:
    // 0x2259ac: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2259b0:
    // 0x2259b0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2259b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2259b4:
    // 0x2259b4: 0x50600072  beql        $v1, $zero, . + 4 + (0x72 << 2)
label_2259b8:
    if (ctx->pc == 0x2259B8u) {
        ctx->pc = 0x2259B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259B4u;
        // 0x2259b8: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259BCu;
        goto label_2259bc;
    }
    ctx->pc = 0x2259B4u;
    {
        const bool branch_taken_0x2259b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2259b4) {
            ctx->pc = 0x2259B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2259B4u;
            // 0x2259b8: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B80u;
            goto label_225b80;
        }
    }
    ctx->pc = 0x2259BCu;
label_2259bc:
    // 0x2259bc: 0x8e130254  lw          $s3, 0x254($s0)
    ctx->pc = 0x2259bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_2259c0:
    // 0x2259c0: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
label_2259c4:
    if (ctx->pc == 0x2259C4u) {
        ctx->pc = 0x2259C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259C0u;
        // 0x2259c4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259C8u;
        goto label_2259c8;
    }
    ctx->pc = 0x2259C0u;
    {
        const bool branch_taken_0x2259c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259C0u;
        // 0x2259c4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259c0) {
            ctx->pc = 0x225AA4u;
            goto label_225aa4;
        }
    }
    ctx->pc = 0x2259C8u;
label_2259c8:
    // 0x2259c8: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2259c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2259cc:
    // 0x2259cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2259ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2259d0:
    // 0x2259d0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2259d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2259d4:
    // 0x2259d4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_2259d8:
    if (ctx->pc == 0x2259D8u) {
        ctx->pc = 0x2259D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D4u;
        // 0x2259d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259DCu;
        goto label_2259dc;
    }
    ctx->pc = 0x2259D4u;
    {
        const bool branch_taken_0x2259d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2259D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D4u;
        // 0x2259d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d4) {
            ctx->pc = 0x225A20u;
            goto label_225a20;
        }
    }
    ctx->pc = 0x2259DCu;
label_2259dc:
    // 0x2259dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2259e0:
    // 0x2259e0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2259e4:
    if (ctx->pc == 0x2259E4u) {
        ctx->pc = 0x2259E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259E0u;
        // 0x2259e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259E8u;
        goto label_2259e8;
    }
    ctx->pc = 0x2259E0u;
    {
        const bool branch_taken_0x2259e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2259E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259E0u;
        // 0x2259e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259e0) {
            ctx->pc = 0x225A20u;
            goto label_225a20;
        }
    }
    ctx->pc = 0x2259E8u;
label_2259e8:
    // 0x2259e8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2259ec:
    if (ctx->pc == 0x2259ECu) {
        ctx->pc = 0x2259ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259E8u;
        // 0x2259ec: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259F0u;
        goto label_2259f0;
    }
    ctx->pc = 0x2259E8u;
    {
        const bool branch_taken_0x2259e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2259ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259E8u;
        // 0x2259ec: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259e8) {
            ctx->pc = 0x225A20u;
            goto label_225a20;
        }
    }
    ctx->pc = 0x2259F0u;
label_2259f0:
    // 0x2259f0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2259f4:
    if (ctx->pc == 0x2259F4u) {
        ctx->pc = 0x2259F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259F0u;
        // 0x2259f4: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2259F8u;
        goto label_2259f8;
    }
    ctx->pc = 0x2259F0u;
    {
        const bool branch_taken_0x2259f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2259F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259F0u;
        // 0x2259f4: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259f0) {
            ctx->pc = 0x225A20u;
            goto label_225a20;
        }
    }
    ctx->pc = 0x2259F8u;
label_2259f8:
    // 0x2259f8: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_2259fc:
    if (ctx->pc == 0x2259FCu) {
        ctx->pc = 0x2259FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259F8u;
        // 0x2259fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A00u;
        goto label_225a00;
    }
    ctx->pc = 0x2259F8u;
    {
        const bool branch_taken_0x2259f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2259f8) {
            ctx->pc = 0x2259FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2259F8u;
            // 0x2259fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225A24u;
            goto label_225a24;
        }
    }
    ctx->pc = 0x225A00u;
label_225a00:
    // 0x225a00: 0xc0924a6  jal         func_249298
label_225a04:
    if (ctx->pc == 0x225A04u) {
        ctx->pc = 0x225A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A00u;
        // 0x225a04: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A08u;
        goto label_225a08;
    }
    ctx->pc = 0x225A00u;
    SET_GPR_U32(ctx, 31, 0x225A08u);
    ctx->pc = 0x225A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A00u;
    // 0x225a04: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249298u, 0x225A00u, 0x225A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A08u;
label_225a08:
    // 0x225a08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_225a0c:
    if (ctx->pc == 0x225A0Cu) {
        ctx->pc = 0x225A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A08u;
        // 0x225a0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A10u;
        goto label_225a10;
    }
    ctx->pc = 0x225A08u;
    {
        const bool branch_taken_0x225a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a08) {
            ctx->pc = 0x225A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225A08u;
            // 0x225a0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225A24u;
            goto label_225a24;
        }
    }
    ctx->pc = 0x225A10u;
label_225a10:
    // 0x225a10: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x225a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_225a14:
    // 0x225a14: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x225a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_225a18:
    // 0x225a18: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_225a1c:
    if (ctx->pc == 0x225A1Cu) {
        ctx->pc = 0x225A20u;
        goto label_225a20;
    }
    ctx->pc = 0x225A18u;
    {
        const bool branch_taken_0x225a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a18) {
            ctx->pc = 0x225A24u;
            goto label_225a24;
        }
    }
    ctx->pc = 0x225A20u;
label_225a20:
    // 0x225a20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x225a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a24:
    // 0x225a24: 0x56400056  bnel        $s2, $zero, . + 4 + (0x56 << 2)
label_225a28:
    if (ctx->pc == 0x225A28u) {
        ctx->pc = 0x225A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A24u;
        // 0x225a28: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A2Cu;
        goto label_225a2c;
    }
    ctx->pc = 0x225A24u;
    {
        const bool branch_taken_0x225a24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a24) {
            ctx->pc = 0x225A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225A24u;
            // 0x225a28: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B80u;
            goto label_225b80;
        }
    }
    ctx->pc = 0x225A2Cu;
label_225a2c:
    // 0x225a2c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x225a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_225a30:
    // 0x225a30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x225a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_225a34:
    // 0x225a34: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x225a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_225a38:
    // 0x225a38: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x225a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_225a3c:
    // 0x225a3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_225a40:
    if (ctx->pc == 0x225A40u) {
        ctx->pc = 0x225A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A3Cu;
        // 0x225a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A44u;
        goto label_225a44;
    }
    ctx->pc = 0x225A3Cu;
    {
        const bool branch_taken_0x225a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A3Cu;
        // 0x225a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a3c) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x225A44u;
label_225a44:
    // 0x225a44: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x225a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_225a48:
    // 0x225a48: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_225a4c:
    if (ctx->pc == 0x225A4Cu) {
        ctx->pc = 0x225A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A48u;
        // 0x225a4c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A50u;
        goto label_225a50;
    }
    ctx->pc = 0x225A48u;
    {
        const bool branch_taken_0x225a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A48u;
        // 0x225a4c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a48) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x225A50u;
label_225a50:
    // 0x225a50: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_225a54:
    if (ctx->pc == 0x225A54u) {
        ctx->pc = 0x225A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A50u;
        // 0x225a54: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A58u;
        goto label_225a58;
    }
    ctx->pc = 0x225A50u;
    {
        const bool branch_taken_0x225a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A50u;
        // 0x225a54: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a50) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x225A58u;
label_225a58:
    // 0x225a58: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_225a5c:
    if (ctx->pc == 0x225A5Cu) {
        ctx->pc = 0x225A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A58u;
        // 0x225a5c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A60u;
        goto label_225a60;
    }
    ctx->pc = 0x225A58u;
    {
        const bool branch_taken_0x225a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A58u;
        // 0x225a5c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a58) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x225A60u;
label_225a60:
    // 0x225a60: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_225a64:
    if (ctx->pc == 0x225A64u) {
        ctx->pc = 0x225A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A60u;
        // 0x225a64: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A68u;
        goto label_225a68;
    }
    ctx->pc = 0x225A60u;
    {
        const bool branch_taken_0x225a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A60u;
        // 0x225a64: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a60) {
            ctx->pc = 0x225A70u;
            goto label_225a70;
        }
    }
    ctx->pc = 0x225A68u;
label_225a68:
    // 0x225a68: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_225a6c:
    if (ctx->pc == 0x225A6Cu) {
        ctx->pc = 0x225A70u;
        goto label_225a70;
    }
    ctx->pc = 0x225A68u;
    {
        const bool branch_taken_0x225a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a68) {
            ctx->pc = 0x225A74u;
            goto label_225a74;
        }
    }
    ctx->pc = 0x225A70u;
label_225a70:
    // 0x225a70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a74:
    // 0x225a74: 0x54a00042  bnel        $a1, $zero, . + 4 + (0x42 << 2)
label_225a78:
    if (ctx->pc == 0x225A78u) {
        ctx->pc = 0x225A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A74u;
        // 0x225a78: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A7Cu;
        goto label_225a7c;
    }
    ctx->pc = 0x225A74u;
    {
        const bool branch_taken_0x225a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a74) {
            ctx->pc = 0x225A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225A74u;
            // 0x225a78: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B80u;
            goto label_225b80;
        }
    }
    ctx->pc = 0x225A7Cu;
label_225a7c:
    // 0x225a7c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_225a80:
    // 0x225a80: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_225a84:
    // 0x225a84: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_225a88:
    if (ctx->pc == 0x225A88u) {
        ctx->pc = 0x225A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A84u;
        // 0x225a88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A8Cu;
        goto label_225a8c;
    }
    ctx->pc = 0x225A84u;
    {
        const bool branch_taken_0x225a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A84u;
        // 0x225a88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a84) {
            ctx->pc = 0x225A98u;
            goto label_225a98;
        }
    }
    ctx->pc = 0x225A8Cu;
label_225a8c:
    // 0x225a8c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x225a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_225a90:
    // 0x225a90: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_225a94:
    if (ctx->pc == 0x225A94u) {
        ctx->pc = 0x225A98u;
        goto label_225a98;
    }
    ctx->pc = 0x225A90u;
    {
        const bool branch_taken_0x225a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a90) {
            ctx->pc = 0x225A9Cu;
            goto label_225a9c;
        }
    }
    ctx->pc = 0x225A98u;
label_225a98:
    // 0x225a98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a9c:
    // 0x225a9c: 0x54800038  bnel        $a0, $zero, . + 4 + (0x38 << 2)
label_225aa0:
    if (ctx->pc == 0x225AA0u) {
        ctx->pc = 0x225AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A9Cu;
        // 0x225aa0: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AA4u;
        goto label_225aa4;
    }
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225A9Cu;
            // 0x225aa0: 0xc6000244  lwc1        $f0, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B80u;
            goto label_225b80;
        }
    }
    ctx->pc = 0x225AA4u;
label_225aa4:
    // 0x225aa4: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x225aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_225aa8:
    // 0x225aa8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_225aac:
    if (ctx->pc == 0x225AACu) {
        ctx->pc = 0x225AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA8u;
        // 0x225aac: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AB0u;
        goto label_225ab0;
    }
    ctx->pc = 0x225AA8u;
    {
        const bool branch_taken_0x225aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225aa8) {
            ctx->pc = 0x225AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225AA8u;
            // 0x225aac: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B24u;
            goto label_225b24;
        }
    }
    ctx->pc = 0x225AB0u;
label_225ab0:
    // 0x225ab0: 0x662001c  bltzl       $s3, . + 4 + (0x1C << 2)
label_225ab4:
    if (ctx->pc == 0x225AB4u) {
        ctx->pc = 0x225AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AB0u;
        // 0x225ab4: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AB8u;
        goto label_225ab8;
    }
    ctx->pc = 0x225AB0u;
    {
        const bool branch_taken_0x225ab0 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x225ab0) {
            ctx->pc = 0x225AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225AB0u;
            // 0x225ab4: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B24u;
            goto label_225b24;
        }
    }
    ctx->pc = 0x225AB8u;
label_225ab8:
    // 0x225ab8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x225ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_225abc:
    // 0x225abc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x225abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225ac0:
    // 0x225ac0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_225ac4:
    if (ctx->pc == 0x225AC4u) {
        ctx->pc = 0x225AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC0u;
        // 0x225ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AC8u;
        goto label_225ac8;
    }
    ctx->pc = 0x225AC0u;
    {
        const bool branch_taken_0x225ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC0u;
        // 0x225ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ac0) {
            ctx->pc = 0x225B20u;
            goto label_225b20;
        }
    }
    ctx->pc = 0x225AC8u;
label_225ac8:
    // 0x225ac8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_225acc:
    // 0x225acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225ad0:
    // 0x225ad0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x225ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_225ad4:
    // 0x225ad4: 0x40f809  jalr        $v0
label_225ad8:
    if (ctx->pc == 0x225AD8u) {
        ctx->pc = 0x225AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AD4u;
        // 0x225ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225ADCu;
        goto label_225adc;
    }
    ctx->pc = 0x225AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225ADCu);
        ctx->pc = 0x225AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AD4u;
        // 0x225ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225AD4u, 0x225ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225ADCu;
label_225adc:
    // 0x225adc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x225adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_225ae0:
    // 0x225ae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x225ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_225ae4:
    // 0x225ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x225ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225ae8:
    // 0x225ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225aec:
    // 0x225aec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x225aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_225af0:
    // 0x225af0: 0xc0c4b92  jal         func_312E48
label_225af4:
    if (ctx->pc == 0x225AF4u) {
        ctx->pc = 0x225AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AF0u;
        // 0x225af4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225AF8u;
        goto label_225af8;
    }
    ctx->pc = 0x225AF0u;
    SET_GPR_U32(ctx, 31, 0x225AF8u);
    ctx->pc = 0x225AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AF0u;
    // 0x225af4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312E48u, 0x225AF0u, 0x225AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AF8u;
label_225af8:
    // 0x225af8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x225af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_225afc:
    // 0x225afc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x225afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_225b00:
    // 0x225b00: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x225b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_225b04:
    // 0x225b04: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x225b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_225b08:
    // 0x225b08: 0xb202024b  sdl         $v0, 0x24B($s0)
    ctx->pc = 0x225b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b0c:
    // 0x225b0c: 0xb6020244  sdr         $v0, 0x244($s0)
    ctx->pc = 0x225b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b10:
    // 0x225b10: 0xb2030253  sdl         $v1, 0x253($s0)
    ctx->pc = 0x225b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b14:
    // 0x225b14: 0xb603024c  sdr         $v1, 0x24C($s0)
    ctx->pc = 0x225b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b18:
    // 0x225b18: 0x10000018  b           . + 4 + (0x18 << 2)
label_225b1c:
    if (ctx->pc == 0x225B1Cu) {
        ctx->pc = 0x225B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B18u;
        // 0x225b1c: 0xae00019c  sw          $zero, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B20u;
        goto label_225b20;
    }
    ctx->pc = 0x225B18u;
    {
        const bool branch_taken_0x225b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B18u;
        // 0x225b1c: 0xae00019c  sw          $zero, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b18) {
            ctx->pc = 0x225B7Cu;
            goto label_225b7c;
        }
    }
    ctx->pc = 0x225B20u;
label_225b20:
    // 0x225b20: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x225b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_225b24:
    // 0x225b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225b28:
    // 0x225b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225b2c:
    // 0x225b2c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_225b30:
    // 0x225b30: 0x40f809  jalr        $v0
label_225b34:
    if (ctx->pc == 0x225B34u) {
        ctx->pc = 0x225B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B30u;
        // 0x225b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B38u;
        goto label_225b38;
    }
    ctx->pc = 0x225B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225B38u);
        ctx->pc = 0x225B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B30u;
        // 0x225b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B30u, 0x225B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225B38u;
label_225b38:
    // 0x225b38: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x225b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_225b3c:
    // 0x225b3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x225b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_225b40:
    // 0x225b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225b44:
    // 0x225b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225b48:
    // 0x225b48: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_225b4c:
    // 0x225b4c: 0xc0c4b92  jal         func_312E48
label_225b50:
    if (ctx->pc == 0x225B50u) {
        ctx->pc = 0x225B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B4Cu;
        // 0x225b50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B54u;
        goto label_225b54;
    }
    ctx->pc = 0x225B4Cu;
    SET_GPR_U32(ctx, 31, 0x225B54u);
    ctx->pc = 0x225B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B4Cu;
    // 0x225b50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312E48u, 0x225B4Cu, 0x225B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B54u;
label_225b54:
    // 0x225b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_225b58:
    // 0x225b58: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x225b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_225b5c:
    // 0x225b5c: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x225b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_225b60:
    // 0x225b60: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x225b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_225b64:
    // 0x225b64: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x225b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_225b68:
    // 0x225b68: 0xb206024b  sdl         $a2, 0x24B($s0)
    ctx->pc = 0x225b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b6c:
    // 0x225b6c: 0xb6060244  sdr         $a2, 0x244($s0)
    ctx->pc = 0x225b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b70:
    // 0x225b70: 0xb2030253  sdl         $v1, 0x253($s0)
    ctx->pc = 0x225b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b74:
    // 0x225b74: 0xb603024c  sdr         $v1, 0x24C($s0)
    ctx->pc = 0x225b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225b78:
    // 0x225b78: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x225b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
label_225b7c:
    // 0x225b7c: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x225b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225b80:
    // 0x225b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_225b84:
    // 0x225b84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225b88:
    // 0x225b88: 0x0  nop
    ctx->pc = 0x225b88u;
    // NOP
label_225b8c:
    // 0x225b8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225b90:
    // 0x225b90: 0x0  nop
    ctx->pc = 0x225b90u;
    // NOP
label_225b94:
    // 0x225b94: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_225b98:
    if (ctx->pc == 0x225B98u) {
        ctx->pc = 0x225B9Cu;
        goto label_225b9c;
    }
    ctx->pc = 0x225B94u;
    {
        const bool branch_taken_0x225b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x225b94) {
            ctx->pc = 0x225BC4u;
            goto label_225bc4;
        }
    }
    ctx->pc = 0x225B9Cu;
label_225b9c:
    // 0x225b9c: 0xc600024c  lwc1        $f0, 0x24C($s0)
    ctx->pc = 0x225b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225ba0:
    // 0x225ba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225ba4:
    // 0x225ba4: 0x0  nop
    ctx->pc = 0x225ba4u;
    // NOP
label_225ba8:
    // 0x225ba8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_225bac:
    if (ctx->pc == 0x225BACu) {
        ctx->pc = 0x225BB0u;
        goto label_225bb0;
    }
    ctx->pc = 0x225BA8u;
    {
        const bool branch_taken_0x225ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x225ba8) {
            ctx->pc = 0x225BC4u;
            goto label_225bc4;
        }
    }
    ctx->pc = 0x225BB0u;
label_225bb0:
    // 0x225bb0: 0xc6000248  lwc1        $f0, 0x248($s0)
    ctx->pc = 0x225bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225bb4:
    // 0x225bb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225bb8:
    // 0x225bb8: 0x0  nop
    ctx->pc = 0x225bb8u;
    // NOP
label_225bbc:
    // 0x225bbc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_225bc0:
    if (ctx->pc == 0x225BC0u) {
        ctx->pc = 0x225BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BBCu;
        // 0x225bc0: 0xc6010248  lwc1        $f1, 0x248($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225BC4u;
        goto label_225bc4;
    }
    ctx->pc = 0x225BBCu;
    {
        const bool branch_taken_0x225bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225bbc) {
            ctx->pc = 0x225BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225BBCu;
            // 0x225bc0: 0xc6010248  lwc1        $f1, 0x248($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225BE8u;
            goto label_225be8;
        }
    }
    ctx->pc = 0x225BC4u;
label_225bc4:
    // 0x225bc4: 0x6a060127  ldl         $a2, 0x127($s0)
    ctx->pc = 0x225bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_225bc8:
    // 0x225bc8: 0x6e060120  ldr         $a2, 0x120($s0)
    ctx->pc = 0x225bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_225bcc:
    // 0x225bcc: 0x6a02012f  ldl         $v0, 0x12F($s0)
    ctx->pc = 0x225bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_225bd0:
    // 0x225bd0: 0x6e020128  ldr         $v0, 0x128($s0)
    ctx->pc = 0x225bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_225bd4:
    // 0x225bd4: 0xb206024b  sdl         $a2, 0x24B($s0)
    ctx->pc = 0x225bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225bd8:
    // 0x225bd8: 0xb6060244  sdr         $a2, 0x244($s0)
    ctx->pc = 0x225bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225bdc:
    // 0x225bdc: 0xb2020253  sdl         $v0, 0x253($s0)
    ctx->pc = 0x225bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225be0:
    // 0x225be0: 0xb602024c  sdr         $v0, 0x24C($s0)
    ctx->pc = 0x225be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225be4:
    // 0x225be4: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x225be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225be8:
    // 0x225be8: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x225be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225bec:
    // 0x225bec: 0xc603024c  lwc1        $f3, 0x24C($s0)
    ctx->pc = 0x225becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_225bf0:
    // 0x225bf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_225bf4:
    // 0x225bf4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x225bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_225bf8:
    // 0x225bf8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x225bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_225bfc:
    // 0x225bfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x225bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_225c00:
    // 0x225c00: 0xc6040238  lwc1        $f4, 0x238($s0)
    ctx->pc = 0x225c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_225c04:
    // 0x225c04: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x225c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_225c08:
    // 0x225c08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x225c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_225c0c:
    // 0x225c0c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x225c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225c10:
    // 0x225c10: 0x0  nop
    ctx->pc = 0x225c10u;
    // NOP
label_225c14:
    // 0x225c14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_225c18:
    if (ctx->pc == 0x225C18u) {
        ctx->pc = 0x225C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C14u;
        // 0x225c18: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C1Cu;
        goto label_225c1c;
    }
    ctx->pc = 0x225C14u;
    {
        const bool branch_taken_0x225c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C14u;
        // 0x225c18: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c14) {
            ctx->pc = 0x225C20u;
            goto label_225c20;
        }
    }
    ctx->pc = 0x225C1Cu;
label_225c1c:
    // 0x225c1c: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x225c1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_225c20:
    // 0x225c20: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x225c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225c24:
    // 0x225c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x225c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225c28:
    // 0x225c28: 0x0  nop
    ctx->pc = 0x225c28u;
    // NOP
label_225c2c:
    // 0x225c2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_225c30:
    if (ctx->pc == 0x225C30u) {
        ctx->pc = 0x225C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C2Cu;
        // 0x225c30: 0xe6010238  swc1        $f1, 0x238($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C34u;
        goto label_225c34;
    }
    ctx->pc = 0x225C2Cu;
    {
        const bool branch_taken_0x225c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C2Cu;
        // 0x225c30: 0xe6010238  swc1        $f1, 0x238($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c2c) {
            ctx->pc = 0x225C38u;
            goto label_225c38;
        }
    }
    ctx->pc = 0x225C34u;
label_225c34:
    // 0x225c34: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x225c34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_225c38:
    // 0x225c38: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x225c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_225c3c:
    // 0x225c3c: 0xc0899bc  jal         func_2266F0
label_225c40:
    if (ctx->pc == 0x225C40u) {
        ctx->pc = 0x225C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C3Cu;
        // 0x225c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C44u;
        goto label_225c44;
    }
    ctx->pc = 0x225C3Cu;
    SET_GPR_U32(ctx, 31, 0x225C44u);
    ctx->pc = 0x225C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C3Cu;
    // 0x225c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x225C3Cu, 0x225C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C44u;
label_225c44:
    // 0x225c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225c48:
    // 0x225c48: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_225c4c:
    if (ctx->pc == 0x225C4Cu) {
        ctx->pc = 0x225C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C48u;
        // 0x225c4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C50u;
        goto label_225c50;
    }
    ctx->pc = 0x225C48u;
    {
        const bool branch_taken_0x225c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C48u;
        // 0x225c4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c48) {
            ctx->pc = 0x225C80u;
            goto label_225c80;
        }
    }
    ctx->pc = 0x225C50u;
label_225c50:
    // 0x225c50: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_225c54:
    // 0x225c54: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x225c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_225c58:
    // 0x225c58: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x225c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_225c5c:
    // 0x225c5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_225c60:
    if (ctx->pc == 0x225C60u) {
        ctx->pc = 0x225C64u;
        goto label_225c64;
    }
    ctx->pc = 0x225C5Cu;
    {
        const bool branch_taken_0x225c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225c5c) {
            ctx->pc = 0x225C70u;
            goto label_225c70;
        }
    }
    ctx->pc = 0x225C64u;
label_225c64:
    // 0x225c64: 0xc098998  jal         func_262660
label_225c68:
    if (ctx->pc == 0x225C68u) {
        ctx->pc = 0x225C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C64u;
        // 0x225c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C6Cu;
        goto label_225c6c;
    }
    ctx->pc = 0x225C64u;
    SET_GPR_U32(ctx, 31, 0x225C6Cu);
    ctx->pc = 0x225C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C64u;
    // 0x225c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262660u, 0x225C64u, 0x225C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C6Cu;
label_225c6c:
    // 0x225c6c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x225c6cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_225c70:
    // 0x225c70: 0xc09855c  jal         func_261570
label_225c74:
    if (ctx->pc == 0x225C74u) {
        ctx->pc = 0x225C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C70u;
        // 0x225c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C78u;
        goto label_225c78;
    }
    ctx->pc = 0x225C70u;
    SET_GPR_U32(ctx, 31, 0x225C78u);
    ctx->pc = 0x225C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C70u;
    // 0x225c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x225C70u, 0x225C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C78u;
label_225c78:
    // 0x225c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225c7c:
    // 0x225c7c: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x225c7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_225c80:
    // 0x225c80: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_225c84:
    if (ctx->pc == 0x225C84u) {
        ctx->pc = 0x225C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C80u;
        // 0x225c84: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C88u;
        goto label_225c88;
    }
    ctx->pc = 0x225C80u;
    {
        const bool branch_taken_0x225c80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C80u;
        // 0x225c84: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c80) {
            ctx->pc = 0x225CA0u;
            goto label_225ca0;
        }
    }
    ctx->pc = 0x225C88u;
label_225c88:
    // 0x225c88: 0xc62089d0  lwc1        $f0, -0x7630($s1)
    ctx->pc = 0x225c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225c8c:
    // 0x225c8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_225c90:
    // 0x225c90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225c94:
    // 0x225c94: 0x0  nop
    ctx->pc = 0x225c94u;
    // NOP
label_225c98:
    // 0x225c98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_225c9c:
    // 0x225c9c: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x225c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_225ca0:
    // 0x225ca0: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
label_225ca4:
    if (ctx->pc == 0x225CA4u) {
        ctx->pc = 0x225CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CA0u;
        // 0x225ca4: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CA8u;
        goto label_225ca8;
    }
    ctx->pc = 0x225CA0u;
    {
        const bool branch_taken_0x225ca0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CA0u;
        // 0x225ca4: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ca0) {
            ctx->pc = 0x225D68u;
            goto label_225d68;
        }
    }
    ctx->pc = 0x225CA8u;
label_225ca8:
    // 0x225ca8: 0xc6010230  lwc1        $f1, 0x230($s0)
    ctx->pc = 0x225ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225cac:
    // 0x225cac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225cb0:
    // 0x225cb0: 0x0  nop
    ctx->pc = 0x225cb0u;
    // NOP
label_225cb4:
    // 0x225cb4: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_225cb8:
    if (ctx->pc == 0x225CB8u) {
        ctx->pc = 0x225CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CB4u;
        // 0x225cb8: 0xc62189d0  lwc1        $f1, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CBCu;
        goto label_225cbc;
    }
    ctx->pc = 0x225CB4u;
    {
        const bool branch_taken_0x225cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CB4u;
        // 0x225cb8: 0xc62189d0  lwc1        $f1, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cb4) {
            ctx->pc = 0x225D6Cu;
            goto label_225d6c;
        }
    }
    ctx->pc = 0x225CBCu;
label_225cbc:
    // 0x225cbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_225cc0:
    // 0x225cc0: 0xc0d6246  jal         func_358918
label_225cc4:
    if (ctx->pc == 0x225CC4u) {
        ctx->pc = 0x225CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CC0u;
        // 0x225cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CC8u;
        goto label_225cc8;
    }
    ctx->pc = 0x225CC0u;
    SET_GPR_U32(ctx, 31, 0x225CC8u);
    ctx->pc = 0x225CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CC0u;
    // 0x225cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358918u, 0x225CC0u, 0x225CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CC8u;
label_225cc8:
    // 0x225cc8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_225ccc:
    if (ctx->pc == 0x225CCCu) {
        ctx->pc = 0x225CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CC8u;
        // 0x225ccc: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CD0u;
        goto label_225cd0;
    }
    ctx->pc = 0x225CC8u;
    {
        const bool branch_taken_0x225cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CC8u;
        // 0x225ccc: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cc8) {
            ctx->pc = 0x225D04u;
            goto label_225d04;
        }
    }
    ctx->pc = 0x225CD0u;
label_225cd0:
    // 0x225cd0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x225cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_225cd4:
    // 0x225cd4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x225cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_225cd8:
    // 0x225cd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x225cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_225cdc:
    // 0x225cdc: 0xc0d6246  jal         func_358918
label_225ce0:
    if (ctx->pc == 0x225CE0u) {
        ctx->pc = 0x225CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CDCu;
        // 0x225ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CE4u;
        goto label_225ce4;
    }
    ctx->pc = 0x225CDCu;
    SET_GPR_U32(ctx, 31, 0x225CE4u);
    ctx->pc = 0x225CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CDCu;
    // 0x225ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358918u, 0x225CDCu, 0x225CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CE4u;
label_225ce4:
    // 0x225ce4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_225ce8:
    if (ctx->pc == 0x225CE8u) {
        ctx->pc = 0x225CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE4u;
        // 0x225ce8: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CECu;
        goto label_225cec;
    }
    ctx->pc = 0x225CE4u;
    {
        const bool branch_taken_0x225ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE4u;
        // 0x225ce8: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ce4) {
            ctx->pc = 0x225D04u;
            goto label_225d04;
        }
    }
    ctx->pc = 0x225CECu;
label_225cec:
    // 0x225cec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x225cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_225cf0:
    // 0x225cf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x225cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_225cf4:
    // 0x225cf4: 0xc0d6246  jal         func_358918
label_225cf8:
    if (ctx->pc == 0x225CF8u) {
        ctx->pc = 0x225CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CF4u;
        // 0x225cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CFCu;
        goto label_225cfc;
    }
    ctx->pc = 0x225CF4u;
    SET_GPR_U32(ctx, 31, 0x225CFCu);
    ctx->pc = 0x225CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CF4u;
    // 0x225cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358918u, 0x225CF4u, 0x225CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CFCu;
label_225cfc:
    // 0x225cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_225d00:
    if (ctx->pc == 0x225D00u) {
        ctx->pc = 0x225D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CFCu;
        // 0x225d00: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D04u;
        goto label_225d04;
    }
    ctx->pc = 0x225CFCu;
    {
        const bool branch_taken_0x225cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CFCu;
        // 0x225d00: 0xc62089d0  lwc1        $f0, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cfc) {
            ctx->pc = 0x225D14u;
            goto label_225d14;
        }
    }
    ctx->pc = 0x225D04u;
label_225d04:
    // 0x225d04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_225d08:
    // 0x225d08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225d0c:
    // 0x225d0c: 0x10000015  b           . + 4 + (0x15 << 2)
label_225d10:
    if (ctx->pc == 0x225D10u) {
        ctx->pc = 0x225D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D0Cu;
        // 0x225d10: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D14u;
        goto label_225d14;
    }
    ctx->pc = 0x225D0Cu;
    {
        const bool branch_taken_0x225d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D0Cu;
        // 0x225d10: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d0c) {
            ctx->pc = 0x225D64u;
            goto label_225d64;
        }
    }
    ctx->pc = 0x225D14u;
label_225d14:
    // 0x225d14: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x225d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_225d18:
    // 0x225d18: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x225d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_225d1c:
    // 0x225d1c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_225d20:
    if (ctx->pc == 0x225D20u) {
        ctx->pc = 0x225D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D1Cu;
        // 0x225d20: 0xc62189d0  lwc1        $f1, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D24u;
        goto label_225d24;
    }
    ctx->pc = 0x225D1Cu;
    {
        const bool branch_taken_0x225d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D1Cu;
        // 0x225d20: 0xc62189d0  lwc1        $f1, -0x7630($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d1c) {
            ctx->pc = 0x225D6Cu;
            goto label_225d6c;
        }
    }
    ctx->pc = 0x225D24u;
label_225d24:
    // 0x225d24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x225d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_225d28:
    // 0x225d28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_225d2c:
    if (ctx->pc == 0x225D2Cu) {
        ctx->pc = 0x225D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D28u;
        // 0x225d2c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D30u;
        goto label_225d30;
    }
    ctx->pc = 0x225D28u;
    {
        const bool branch_taken_0x225d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D28u;
        // 0x225d2c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d28) {
            ctx->pc = 0x225D38u;
            goto label_225d38;
        }
    }
    ctx->pc = 0x225D30u;
label_225d30:
    // 0x225d30: 0x10000003  b           . + 4 + (0x3 << 2)
label_225d34:
    if (ctx->pc == 0x225D34u) {
        ctx->pc = 0x225D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D30u;
        // 0x225d34: 0xc4600030  lwc1        $f0, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D38u;
        goto label_225d38;
    }
    ctx->pc = 0x225D30u;
    {
        const bool branch_taken_0x225d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D30u;
        // 0x225d34: 0xc4600030  lwc1        $f0, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d30) {
            ctx->pc = 0x225D40u;
            goto label_225d40;
        }
    }
    ctx->pc = 0x225D38u;
label_225d38:
    // 0x225d38: 0xc440a568  lwc1        $f0, -0x5A98($v0)
    ctx->pc = 0x225d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225d3c:
    // 0x225d3c: 0xc62189d0  lwc1        $f1, -0x7630($s1)
    ctx->pc = 0x225d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225d40:
    // 0x225d40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x225d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225d44:
    // 0x225d44: 0x0  nop
    ctx->pc = 0x225d44u;
    // NOP
label_225d48:
    // 0x225d48: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_225d4c:
    if (ctx->pc == 0x225D4Cu) {
        ctx->pc = 0x225D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D48u;
        // 0x225d4c: 0xc6000230  lwc1        $f0, 0x230($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D50u;
        goto label_225d50;
    }
    ctx->pc = 0x225D48u;
    {
        const bool branch_taken_0x225d48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225d48) {
            ctx->pc = 0x225D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225D48u;
            // 0x225d4c: 0xc6000230  lwc1        $f0, 0x230($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225D70u;
            goto label_225d70;
        }
    }
    ctx->pc = 0x225D50u;
label_225d50:
    // 0x225d50: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x225d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_225d54:
    // 0x225d54: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x225d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_225d58:
    // 0x225d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_225d5c:
    // 0x225d5c: 0x0  nop
    ctx->pc = 0x225d5cu;
    // NOP
label_225d60:
    // 0x225d60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x225d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_225d64:
    // 0x225d64: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x225d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_225d68:
    // 0x225d68: 0xc62189d0  lwc1        $f1, -0x7630($s1)
    ctx->pc = 0x225d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225d6c:
    // 0x225d6c: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x225d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225d70:
    // 0x225d70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x225d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225d74:
    // 0x225d74: 0x0  nop
    ctx->pc = 0x225d74u;
    // NOP
label_225d78:
    // 0x225d78: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_225d7c:
    if (ctx->pc == 0x225D7Cu) {
        ctx->pc = 0x225D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D78u;
        // 0x225d7c: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D80u;
        goto label_225d80;
    }
    ctx->pc = 0x225D78u;
    {
        const bool branch_taken_0x225d78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D78u;
        // 0x225d7c: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d78) {
            ctx->pc = 0x225DE8u;
            goto label_225de8;
        }
    }
    ctx->pc = 0x225D80u;
label_225d80:
    // 0x225d80: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_225d84:
    if (ctx->pc == 0x225D84u) {
        ctx->pc = 0x225D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D80u;
        // 0x225d84: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D88u;
        goto label_225d88;
    }
    ctx->pc = 0x225D80u;
    {
        const bool branch_taken_0x225d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225d80) {
            ctx->pc = 0x225D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225D80u;
            // 0x225d84: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225D88u;
label_225d88:
    // 0x225d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225d8c:
    // 0x225d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225d90:
    // 0x225d90: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x225d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
label_225d94:
    // 0x225d94: 0xc0cda26  jal         func_336898
label_225d98:
    if (ctx->pc == 0x225D98u) {
        ctx->pc = 0x225D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D94u;
        // 0x225d98: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D9Cu;
        goto label_225d9c;
    }
    ctx->pc = 0x225D94u;
    SET_GPR_U32(ctx, 31, 0x225D9Cu);
    ctx->pc = 0x225D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D94u;
    // 0x225d98: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x225D94u, 0x225D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D9Cu;
label_225d9c:
    // 0x225d9c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x225d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_225da0:
    // 0x225da0: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x225da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_225da4:
    // 0x225da4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x225da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_225da8:
    // 0x225da8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_225dac:
    if (ctx->pc == 0x225DACu) {
        ctx->pc = 0x225DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DA8u;
        // 0x225dac: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DB0u;
        goto label_225db0;
    }
    ctx->pc = 0x225DA8u;
    {
        const bool branch_taken_0x225da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DA8u;
        // 0x225dac: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225da8) {
            ctx->pc = 0x225E28u;
            goto label_225e28;
        }
    }
    ctx->pc = 0x225DB0u;
label_225db0:
    // 0x225db0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x225db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_225db4:
    // 0x225db4: 0xc049696  jal         func_125A58
label_225db8:
    if (ctx->pc == 0x225DB8u) {
        ctx->pc = 0x225DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DB4u;
        // 0x225db8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DBCu;
        goto label_225dbc;
    }
    ctx->pc = 0x225DB4u;
    SET_GPR_U32(ctx, 31, 0x225DBCu);
    ctx->pc = 0x225DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DB4u;
    // 0x225db8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A58u, 0x225DB4u, 0x225DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DBCu;
label_225dbc:
    // 0x225dbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_225dc0:
    if (ctx->pc == 0x225DC0u) {
        ctx->pc = 0x225DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DBCu;
        // 0x225dc0: 0x8e229698  lw          $v0, -0x6968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DC4u;
        goto label_225dc4;
    }
    ctx->pc = 0x225DBCu;
    {
        const bool branch_taken_0x225dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DBCu;
        // 0x225dc0: 0x8e229698  lw          $v0, -0x6968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225dbc) {
            ctx->pc = 0x225DD8u;
            goto label_225dd8;
        }
    }
    ctx->pc = 0x225DC4u;
label_225dc4:
    // 0x225dc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_225dc8:
    if (ctx->pc == 0x225DC8u) {
        ctx->pc = 0x225DCCu;
        goto label_225dcc;
    }
    ctx->pc = 0x225DC4u;
    {
        const bool branch_taken_0x225dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225dc4) {
            ctx->pc = 0x225DD8u;
            goto label_225dd8;
        }
    }
    ctx->pc = 0x225DCCu;
label_225dcc:
    // 0x225dcc: 0xc0c136e  jal         func_304DB8
label_225dd0:
    if (ctx->pc == 0x225DD0u) {
        ctx->pc = 0x225DD4u;
        goto label_225dd4;
    }
    ctx->pc = 0x225DCCu;
    SET_GPR_U32(ctx, 31, 0x225DD4u);
    ctx->pc = 0x304DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304DB8u, 0x225DCCu, 0x225DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DD4u;
label_225dd4:
    // 0x225dd4: 0xae209698  sw          $zero, -0x6968($s1)
    ctx->pc = 0x225dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940312), GPR_U32(ctx, 0));
label_225dd8:
    // 0x225dd8: 0xc0a03e0  jal         func_280F80
label_225ddc:
    if (ctx->pc == 0x225DDCu) {
        ctx->pc = 0x225DE0u;
        goto label_225de0;
    }
    ctx->pc = 0x225DD8u;
    SET_GPR_U32(ctx, 31, 0x225DE0u);
    ctx->pc = 0x280F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F80u, 0x225DD8u, 0x225DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DE0u;
label_225de0:
    // 0x225de0: 0x10000012  b           . + 4 + (0x12 << 2)
label_225de4:
    if (ctx->pc == 0x225DE4u) {
        ctx->pc = 0x225DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE0u;
        // 0x225de4: 0x8e229698  lw          $v0, -0x6968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DE8u;
        goto label_225de8;
    }
    ctx->pc = 0x225DE0u;
    {
        const bool branch_taken_0x225de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE0u;
        // 0x225de4: 0x8e229698  lw          $v0, -0x6968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225de0) {
            ctx->pc = 0x225E2Cu;
            goto label_225e2c;
        }
    }
    ctx->pc = 0x225DE8u;
label_225de8:
    // 0x225de8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_225dec:
    if (ctx->pc == 0x225DECu) {
        ctx->pc = 0x225DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE8u;
        // 0x225dec: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DF0u;
        goto label_225df0;
    }
    ctx->pc = 0x225DE8u;
    {
        const bool branch_taken_0x225de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE8u;
        // 0x225dec: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225de8) {
            ctx->pc = 0x225E28u;
            goto label_225e28;
        }
    }
    ctx->pc = 0x225DF0u;
label_225df0:
    // 0x225df0: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x225df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_225df4:
    // 0x225df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225df8:
    // 0x225df8: 0xc0cda26  jal         func_336898
label_225dfc:
    if (ctx->pc == 0x225DFCu) {
        ctx->pc = 0x225DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DF8u;
        // 0x225dfc: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E00u;
        goto label_225e00;
    }
    ctx->pc = 0x225DF8u;
    SET_GPR_U32(ctx, 31, 0x225E00u);
    ctx->pc = 0x225DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DF8u;
    // 0x225dfc: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x225DF8u, 0x225E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E00u;
label_225e00:
    // 0x225e00: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x225e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_225e04:
    // 0x225e04: 0x3063020f  andi        $v1, $v1, 0x20F
    ctx->pc = 0x225e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)527);
label_225e08:
    // 0x225e08: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x225e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_225e0c:
    // 0x225e0c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_225e10:
    if (ctx->pc == 0x225E10u) {
        ctx->pc = 0x225E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E0Cu;
        // 0x225e10: 0x8e229698  lw          $v0, -0x6968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E14u;
        goto label_225e14;
    }
    ctx->pc = 0x225E0Cu;
    {
        const bool branch_taken_0x225e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E0Cu;
        // 0x225e10: 0x8e229698  lw          $v0, -0x6968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e0c) {
            ctx->pc = 0x225E2Cu;
            goto label_225e2c;
        }
    }
    ctx->pc = 0x225E14u;
label_225e14:
    // 0x225e14: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_225e18:
    if (ctx->pc == 0x225E18u) {
        ctx->pc = 0x225E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E14u;
        // 0x225e18: 0xc6010244  lwc1        $f1, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E1Cu;
        goto label_225e1c;
    }
    ctx->pc = 0x225E14u;
    {
        const bool branch_taken_0x225e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e14) {
            ctx->pc = 0x225E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225E14u;
            // 0x225e18: 0xc6010244  lwc1        $f1, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225E54u;
            goto label_225e54;
        }
    }
    ctx->pc = 0x225E1Cu;
label_225e1c:
    // 0x225e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225e20:
    // 0x225e20: 0xc0c1384  jal         func_304E10
label_225e24:
    if (ctx->pc == 0x225E24u) {
        ctx->pc = 0x225E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E20u;
        // 0x225e24: 0xae229698  sw          $v0, -0x6968($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294940312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E28u;
        goto label_225e28;
    }
    ctx->pc = 0x225E20u;
    SET_GPR_U32(ctx, 31, 0x225E28u);
    ctx->pc = 0x225E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E20u;
    // 0x225e24: 0xae229698  sw          $v0, -0x6968($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304E10u, 0x225E20u, 0x225E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E28u;
label_225e28:
    // 0x225e28: 0x8e229698  lw          $v0, -0x6968($s1)
    ctx->pc = 0x225e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940312)));
label_225e2c:
    // 0x225e2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_225e30:
    if (ctx->pc == 0x225E30u) {
        ctx->pc = 0x225E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E2Cu;
        // 0x225e30: 0xc6010244  lwc1        $f1, 0x244($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E34u;
        goto label_225e34;
    }
    ctx->pc = 0x225E2Cu;
    {
        const bool branch_taken_0x225e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e2c) {
            ctx->pc = 0x225E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225E2Cu;
            // 0x225e30: 0xc6010244  lwc1        $f1, 0x244($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225E54u;
            goto label_225e54;
        }
    }
    ctx->pc = 0x225E34u;
label_225e34:
    // 0x225e34: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x225e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_225e38:
    // 0x225e38: 0xc049696  jal         func_125A58
label_225e3c:
    if (ctx->pc == 0x225E3Cu) {
        ctx->pc = 0x225E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E38u;
        // 0x225e3c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E40u;
        goto label_225e40;
    }
    ctx->pc = 0x225E38u;
    SET_GPR_U32(ctx, 31, 0x225E40u);
    ctx->pc = 0x225E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E38u;
    // 0x225e3c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A58u, 0x225E38u, 0x225E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E40u;
label_225e40:
    // 0x225e40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_225e44:
    if (ctx->pc == 0x225E44u) {
        ctx->pc = 0x225E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E40u;
        // 0x225e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E48u;
        goto label_225e48;
    }
    ctx->pc = 0x225E40u;
    {
        const bool branch_taken_0x225e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E40u;
        // 0x225e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e40) {
            ctx->pc = 0x225E50u;
            goto label_225e50;
        }
    }
    ctx->pc = 0x225E48u;
label_225e48:
    // 0x225e48: 0xc0c1384  jal         func_304E10
label_225e4c:
    if (ctx->pc == 0x225E4Cu) {
        ctx->pc = 0x225E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E48u;
        // 0x225e4c: 0xae229698  sw          $v0, -0x6968($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294940312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E50u;
        goto label_225e50;
    }
    ctx->pc = 0x225E48u;
    SET_GPR_U32(ctx, 31, 0x225E50u);
    ctx->pc = 0x225E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E48u;
    // 0x225e4c: 0xae229698  sw          $v0, -0x6968($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304E10u, 0x225E48u, 0x225E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E50u;
label_225e50:
    // 0x225e50: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x225e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225e54:
    // 0x225e54: 0xc6020120  lwc1        $f2, 0x120($s0)
    ctx->pc = 0x225e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225e58:
    // 0x225e58: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x225e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_225e5c:
    // 0x225e5c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x225e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_225e60:
    // 0x225e60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x225e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_225e64:
    // 0x225e64: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x225e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_225e68:
    // 0x225e68: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x225e68u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_225e6c:
    // 0x225e6c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x225e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225e70:
    // 0x225e70: 0x0  nop
    ctx->pc = 0x225e70u;
    // NOP
label_225e74:
    // 0x225e74: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_225e78:
    if (ctx->pc == 0x225E78u) {
        ctx->pc = 0x225E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E74u;
        // 0x225e78: 0xc6010248  lwc1        $f1, 0x248($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E7Cu;
        goto label_225e7c;
    }
    ctx->pc = 0x225E74u;
    {
        const bool branch_taken_0x225e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225e74) {
            ctx->pc = 0x225E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225E74u;
            // 0x225e78: 0xc6010248  lwc1        $f1, 0x248($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225E9Cu;
            goto label_225e9c;
        }
    }
    ctx->pc = 0x225E7Cu;
label_225e7c:
    // 0x225e7c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x225e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_225e80:
    // 0x225e80: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_225e84:
    // 0x225e84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225e88:
    // 0x225e88: 0x0  nop
    ctx->pc = 0x225e88u;
    // NOP
label_225e8c:
    // 0x225e8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_225e90:
    // 0x225e90: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x225e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_225e94:
    // 0x225e94: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x225e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_225e98:
    // 0x225e98: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x225e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225e9c:
    // 0x225e9c: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x225e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225ea0:
    // 0x225ea0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x225ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_225ea4:
    // 0x225ea4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x225ea4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_225ea8:
    // 0x225ea8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x225ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225eac:
    // 0x225eac: 0x0  nop
    ctx->pc = 0x225eacu;
    // NOP
label_225eb0:
    // 0x225eb0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_225eb4:
    if (ctx->pc == 0x225EB4u) {
        ctx->pc = 0x225EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EB0u;
        // 0x225eb4: 0xc601024c  lwc1        $f1, 0x24C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x225EB8u;
        goto label_225eb8;
    }
    ctx->pc = 0x225EB0u;
    {
        const bool branch_taken_0x225eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225eb0) {
            ctx->pc = 0x225EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225EB0u;
            // 0x225eb4: 0xc601024c  lwc1        $f1, 0x24C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x225ED8u;
            goto label_225ed8;
        }
    }
    ctx->pc = 0x225EB8u;
label_225eb8:
    // 0x225eb8: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x225eb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_225ebc:
    // 0x225ebc: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x225ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_225ec0:
    // 0x225ec0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225ec4:
    // 0x225ec4: 0x0  nop
    ctx->pc = 0x225ec4u;
    // NOP
label_225ec8:
    // 0x225ec8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_225ecc:
    // 0x225ecc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x225eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_225ed0:
    // 0x225ed0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x225ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_225ed4:
    // 0x225ed4: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x225ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225ed8:
    // 0x225ed8: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x225ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_225edc:
    // 0x225edc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x225edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_225ee0:
    // 0x225ee0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x225ee0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_225ee4:
    // 0x225ee4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x225ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_225ee8:
    // 0x225ee8: 0x0  nop
    ctx->pc = 0x225ee8u;
    // NOP
label_225eec:
    // 0x225eec: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_225ef0:
    if (ctx->pc == 0x225EF0u) {
        ctx->pc = 0x225EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EECu;
        // 0x225ef0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225EF4u;
        goto label_225ef4;
    }
    ctx->pc = 0x225EECu;
    {
        const bool branch_taken_0x225eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225eec) {
            ctx->pc = 0x225EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225EECu;
            // 0x225ef0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225F14u;
            goto label_225f14;
        }
    }
    ctx->pc = 0x225EF4u;
label_225ef4:
    // 0x225ef4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x225ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_225ef8:
    // 0x225ef8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x225ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_225efc:
    // 0x225efc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_225f00:
    // 0x225f00: 0x0  nop
    ctx->pc = 0x225f00u;
    // NOP
label_225f04:
    // 0x225f04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_225f08:
    // 0x225f08: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x225f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_225f0c:
    // 0x225f0c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x225f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_225f10:
    // 0x225f10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x225f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225f14:
    // 0x225f14: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x225f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_225f18:
    // 0x225f18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x225f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225f1c:
    // 0x225f1c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x225f1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_225f20:
    // 0x225f20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x225f20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225f24:
    // 0x225f24: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x225f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_225f28:
    // 0x225f28: 0x3e00008  jr          $ra
label_225f2c:
    if (ctx->pc == 0x225F2Cu) {
        ctx->pc = 0x225F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F28u;
        // 0x225f2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F30u;
        goto label_fallthrough_0x225f28;
    }
    ctx->pc = 0x225F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F28u;
        // 0x225f2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225f28:
    ctx->pc = 0x225F30u;
}
