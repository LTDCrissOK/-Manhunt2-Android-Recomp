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

// Function: sub_00283A40
// Address: 0x283a40 - 0x283f78
void sub_00283A40_0x283a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283A40_0x283a40");
#endif

    switch (ctx->pc) {
        case 0x283a40u: goto label_283a40;
        case 0x283a44u: goto label_283a44;
        case 0x283a48u: goto label_283a48;
        case 0x283a4cu: goto label_283a4c;
        case 0x283a50u: goto label_283a50;
        case 0x283a54u: goto label_283a54;
        case 0x283a58u: goto label_283a58;
        case 0x283a5cu: goto label_283a5c;
        case 0x283a60u: goto label_283a60;
        case 0x283a64u: goto label_283a64;
        case 0x283a68u: goto label_283a68;
        case 0x283a6cu: goto label_283a6c;
        case 0x283a70u: goto label_283a70;
        case 0x283a74u: goto label_283a74;
        case 0x283a78u: goto label_283a78;
        case 0x283a7cu: goto label_283a7c;
        case 0x283a80u: goto label_283a80;
        case 0x283a84u: goto label_283a84;
        case 0x283a88u: goto label_283a88;
        case 0x283a8cu: goto label_283a8c;
        case 0x283a90u: goto label_283a90;
        case 0x283a94u: goto label_283a94;
        case 0x283a98u: goto label_283a98;
        case 0x283a9cu: goto label_283a9c;
        case 0x283aa0u: goto label_283aa0;
        case 0x283aa4u: goto label_283aa4;
        case 0x283aa8u: goto label_283aa8;
        case 0x283aacu: goto label_283aac;
        case 0x283ab0u: goto label_283ab0;
        case 0x283ab4u: goto label_283ab4;
        case 0x283ab8u: goto label_283ab8;
        case 0x283abcu: goto label_283abc;
        case 0x283ac0u: goto label_283ac0;
        case 0x283ac4u: goto label_283ac4;
        case 0x283ac8u: goto label_283ac8;
        case 0x283accu: goto label_283acc;
        case 0x283ad0u: goto label_283ad0;
        case 0x283ad4u: goto label_283ad4;
        case 0x283ad8u: goto label_283ad8;
        case 0x283adcu: goto label_283adc;
        case 0x283ae0u: goto label_283ae0;
        case 0x283ae4u: goto label_283ae4;
        case 0x283ae8u: goto label_283ae8;
        case 0x283aecu: goto label_283aec;
        case 0x283af0u: goto label_283af0;
        case 0x283af4u: goto label_283af4;
        case 0x283af8u: goto label_283af8;
        case 0x283afcu: goto label_283afc;
        case 0x283b00u: goto label_283b00;
        case 0x283b04u: goto label_283b04;
        case 0x283b08u: goto label_283b08;
        case 0x283b0cu: goto label_283b0c;
        case 0x283b10u: goto label_283b10;
        case 0x283b14u: goto label_283b14;
        case 0x283b18u: goto label_283b18;
        case 0x283b1cu: goto label_283b1c;
        case 0x283b20u: goto label_283b20;
        case 0x283b24u: goto label_283b24;
        case 0x283b28u: goto label_283b28;
        case 0x283b2cu: goto label_283b2c;
        case 0x283b30u: goto label_283b30;
        case 0x283b34u: goto label_283b34;
        case 0x283b38u: goto label_283b38;
        case 0x283b3cu: goto label_283b3c;
        case 0x283b40u: goto label_283b40;
        case 0x283b44u: goto label_283b44;
        case 0x283b48u: goto label_283b48;
        case 0x283b4cu: goto label_283b4c;
        case 0x283b50u: goto label_283b50;
        case 0x283b54u: goto label_283b54;
        case 0x283b58u: goto label_283b58;
        case 0x283b5cu: goto label_283b5c;
        case 0x283b60u: goto label_283b60;
        case 0x283b64u: goto label_283b64;
        case 0x283b68u: goto label_283b68;
        case 0x283b6cu: goto label_283b6c;
        case 0x283b70u: goto label_283b70;
        case 0x283b74u: goto label_283b74;
        case 0x283b78u: goto label_283b78;
        case 0x283b7cu: goto label_283b7c;
        case 0x283b80u: goto label_283b80;
        case 0x283b84u: goto label_283b84;
        case 0x283b88u: goto label_283b88;
        case 0x283b8cu: goto label_283b8c;
        case 0x283b90u: goto label_283b90;
        case 0x283b94u: goto label_283b94;
        case 0x283b98u: goto label_283b98;
        case 0x283b9cu: goto label_283b9c;
        case 0x283ba0u: goto label_283ba0;
        case 0x283ba4u: goto label_283ba4;
        case 0x283ba8u: goto label_283ba8;
        case 0x283bacu: goto label_283bac;
        case 0x283bb0u: goto label_283bb0;
        case 0x283bb4u: goto label_283bb4;
        case 0x283bb8u: goto label_283bb8;
        case 0x283bbcu: goto label_283bbc;
        case 0x283bc0u: goto label_283bc0;
        case 0x283bc4u: goto label_283bc4;
        case 0x283bc8u: goto label_283bc8;
        case 0x283bccu: goto label_283bcc;
        case 0x283bd0u: goto label_283bd0;
        case 0x283bd4u: goto label_283bd4;
        case 0x283bd8u: goto label_283bd8;
        case 0x283bdcu: goto label_283bdc;
        case 0x283be0u: goto label_283be0;
        case 0x283be4u: goto label_283be4;
        case 0x283be8u: goto label_283be8;
        case 0x283becu: goto label_283bec;
        case 0x283bf0u: goto label_283bf0;
        case 0x283bf4u: goto label_283bf4;
        case 0x283bf8u: goto label_283bf8;
        case 0x283bfcu: goto label_283bfc;
        case 0x283c00u: goto label_283c00;
        case 0x283c04u: goto label_283c04;
        case 0x283c08u: goto label_283c08;
        case 0x283c0cu: goto label_283c0c;
        case 0x283c10u: goto label_283c10;
        case 0x283c14u: goto label_283c14;
        case 0x283c18u: goto label_283c18;
        case 0x283c1cu: goto label_283c1c;
        case 0x283c20u: goto label_283c20;
        case 0x283c24u: goto label_283c24;
        case 0x283c28u: goto label_283c28;
        case 0x283c2cu: goto label_283c2c;
        case 0x283c30u: goto label_283c30;
        case 0x283c34u: goto label_283c34;
        case 0x283c38u: goto label_283c38;
        case 0x283c3cu: goto label_283c3c;
        case 0x283c40u: goto label_283c40;
        case 0x283c44u: goto label_283c44;
        case 0x283c48u: goto label_283c48;
        case 0x283c4cu: goto label_283c4c;
        case 0x283c50u: goto label_283c50;
        case 0x283c54u: goto label_283c54;
        case 0x283c58u: goto label_283c58;
        case 0x283c5cu: goto label_283c5c;
        case 0x283c60u: goto label_283c60;
        case 0x283c64u: goto label_283c64;
        case 0x283c68u: goto label_283c68;
        case 0x283c6cu: goto label_283c6c;
        case 0x283c70u: goto label_283c70;
        case 0x283c74u: goto label_283c74;
        case 0x283c78u: goto label_283c78;
        case 0x283c7cu: goto label_283c7c;
        case 0x283c80u: goto label_283c80;
        case 0x283c84u: goto label_283c84;
        case 0x283c88u: goto label_283c88;
        case 0x283c8cu: goto label_283c8c;
        case 0x283c90u: goto label_283c90;
        case 0x283c94u: goto label_283c94;
        case 0x283c98u: goto label_283c98;
        case 0x283c9cu: goto label_283c9c;
        case 0x283ca0u: goto label_283ca0;
        case 0x283ca4u: goto label_283ca4;
        case 0x283ca8u: goto label_283ca8;
        case 0x283cacu: goto label_283cac;
        case 0x283cb0u: goto label_283cb0;
        case 0x283cb4u: goto label_283cb4;
        case 0x283cb8u: goto label_283cb8;
        case 0x283cbcu: goto label_283cbc;
        case 0x283cc0u: goto label_283cc0;
        case 0x283cc4u: goto label_283cc4;
        case 0x283cc8u: goto label_283cc8;
        case 0x283cccu: goto label_283ccc;
        case 0x283cd0u: goto label_283cd0;
        case 0x283cd4u: goto label_283cd4;
        case 0x283cd8u: goto label_283cd8;
        case 0x283cdcu: goto label_283cdc;
        case 0x283ce0u: goto label_283ce0;
        case 0x283ce4u: goto label_283ce4;
        case 0x283ce8u: goto label_283ce8;
        case 0x283cecu: goto label_283cec;
        case 0x283cf0u: goto label_283cf0;
        case 0x283cf4u: goto label_283cf4;
        case 0x283cf8u: goto label_283cf8;
        case 0x283cfcu: goto label_283cfc;
        case 0x283d00u: goto label_283d00;
        case 0x283d04u: goto label_283d04;
        case 0x283d08u: goto label_283d08;
        case 0x283d0cu: goto label_283d0c;
        case 0x283d10u: goto label_283d10;
        case 0x283d14u: goto label_283d14;
        case 0x283d18u: goto label_283d18;
        case 0x283d1cu: goto label_283d1c;
        case 0x283d20u: goto label_283d20;
        case 0x283d24u: goto label_283d24;
        case 0x283d28u: goto label_283d28;
        case 0x283d2cu: goto label_283d2c;
        case 0x283d30u: goto label_283d30;
        case 0x283d34u: goto label_283d34;
        case 0x283d38u: goto label_283d38;
        case 0x283d3cu: goto label_283d3c;
        case 0x283d40u: goto label_283d40;
        case 0x283d44u: goto label_283d44;
        case 0x283d48u: goto label_283d48;
        case 0x283d4cu: goto label_283d4c;
        case 0x283d50u: goto label_283d50;
        case 0x283d54u: goto label_283d54;
        case 0x283d58u: goto label_283d58;
        case 0x283d5cu: goto label_283d5c;
        case 0x283d60u: goto label_283d60;
        case 0x283d64u: goto label_283d64;
        case 0x283d68u: goto label_283d68;
        case 0x283d6cu: goto label_283d6c;
        case 0x283d70u: goto label_283d70;
        case 0x283d74u: goto label_283d74;
        case 0x283d78u: goto label_283d78;
        case 0x283d7cu: goto label_283d7c;
        case 0x283d80u: goto label_283d80;
        case 0x283d84u: goto label_283d84;
        case 0x283d88u: goto label_283d88;
        case 0x283d8cu: goto label_283d8c;
        case 0x283d90u: goto label_283d90;
        case 0x283d94u: goto label_283d94;
        case 0x283d98u: goto label_283d98;
        case 0x283d9cu: goto label_283d9c;
        case 0x283da0u: goto label_283da0;
        case 0x283da4u: goto label_283da4;
        case 0x283da8u: goto label_283da8;
        case 0x283dacu: goto label_283dac;
        case 0x283db0u: goto label_283db0;
        case 0x283db4u: goto label_283db4;
        case 0x283db8u: goto label_283db8;
        case 0x283dbcu: goto label_283dbc;
        case 0x283dc0u: goto label_283dc0;
        case 0x283dc4u: goto label_283dc4;
        case 0x283dc8u: goto label_283dc8;
        case 0x283dccu: goto label_283dcc;
        case 0x283dd0u: goto label_283dd0;
        case 0x283dd4u: goto label_283dd4;
        case 0x283dd8u: goto label_283dd8;
        case 0x283ddcu: goto label_283ddc;
        case 0x283de0u: goto label_283de0;
        case 0x283de4u: goto label_283de4;
        case 0x283de8u: goto label_283de8;
        case 0x283decu: goto label_283dec;
        case 0x283df0u: goto label_283df0;
        case 0x283df4u: goto label_283df4;
        case 0x283df8u: goto label_283df8;
        case 0x283dfcu: goto label_283dfc;
        case 0x283e00u: goto label_283e00;
        case 0x283e04u: goto label_283e04;
        case 0x283e08u: goto label_283e08;
        case 0x283e0cu: goto label_283e0c;
        case 0x283e10u: goto label_283e10;
        case 0x283e14u: goto label_283e14;
        case 0x283e18u: goto label_283e18;
        case 0x283e1cu: goto label_283e1c;
        case 0x283e20u: goto label_283e20;
        case 0x283e24u: goto label_283e24;
        case 0x283e28u: goto label_283e28;
        case 0x283e2cu: goto label_283e2c;
        case 0x283e30u: goto label_283e30;
        case 0x283e34u: goto label_283e34;
        case 0x283e38u: goto label_283e38;
        case 0x283e3cu: goto label_283e3c;
        case 0x283e40u: goto label_283e40;
        case 0x283e44u: goto label_283e44;
        case 0x283e48u: goto label_283e48;
        case 0x283e4cu: goto label_283e4c;
        case 0x283e50u: goto label_283e50;
        case 0x283e54u: goto label_283e54;
        case 0x283e58u: goto label_283e58;
        case 0x283e5cu: goto label_283e5c;
        case 0x283e60u: goto label_283e60;
        case 0x283e64u: goto label_283e64;
        case 0x283e68u: goto label_283e68;
        case 0x283e6cu: goto label_283e6c;
        case 0x283e70u: goto label_283e70;
        case 0x283e74u: goto label_283e74;
        case 0x283e78u: goto label_283e78;
        case 0x283e7cu: goto label_283e7c;
        case 0x283e80u: goto label_283e80;
        case 0x283e84u: goto label_283e84;
        case 0x283e88u: goto label_283e88;
        case 0x283e8cu: goto label_283e8c;
        case 0x283e90u: goto label_283e90;
        case 0x283e94u: goto label_283e94;
        case 0x283e98u: goto label_283e98;
        case 0x283e9cu: goto label_283e9c;
        case 0x283ea0u: goto label_283ea0;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ea8u: goto label_283ea8;
        case 0x283eacu: goto label_283eac;
        case 0x283eb0u: goto label_283eb0;
        case 0x283eb4u: goto label_283eb4;
        case 0x283eb8u: goto label_283eb8;
        case 0x283ebcu: goto label_283ebc;
        case 0x283ec0u: goto label_283ec0;
        case 0x283ec4u: goto label_283ec4;
        case 0x283ec8u: goto label_283ec8;
        case 0x283eccu: goto label_283ecc;
        case 0x283ed0u: goto label_283ed0;
        case 0x283ed4u: goto label_283ed4;
        case 0x283ed8u: goto label_283ed8;
        case 0x283edcu: goto label_283edc;
        case 0x283ee0u: goto label_283ee0;
        case 0x283ee4u: goto label_283ee4;
        case 0x283ee8u: goto label_283ee8;
        case 0x283eecu: goto label_283eec;
        case 0x283ef0u: goto label_283ef0;
        case 0x283ef4u: goto label_283ef4;
        case 0x283ef8u: goto label_283ef8;
        case 0x283efcu: goto label_283efc;
        case 0x283f00u: goto label_283f00;
        case 0x283f04u: goto label_283f04;
        case 0x283f08u: goto label_283f08;
        case 0x283f0cu: goto label_283f0c;
        case 0x283f10u: goto label_283f10;
        case 0x283f14u: goto label_283f14;
        case 0x283f18u: goto label_283f18;
        case 0x283f1cu: goto label_283f1c;
        case 0x283f20u: goto label_283f20;
        case 0x283f24u: goto label_283f24;
        case 0x283f28u: goto label_283f28;
        case 0x283f2cu: goto label_283f2c;
        case 0x283f30u: goto label_283f30;
        case 0x283f34u: goto label_283f34;
        case 0x283f38u: goto label_283f38;
        case 0x283f3cu: goto label_283f3c;
        case 0x283f40u: goto label_283f40;
        case 0x283f44u: goto label_283f44;
        case 0x283f48u: goto label_283f48;
        case 0x283f4cu: goto label_283f4c;
        case 0x283f50u: goto label_283f50;
        case 0x283f54u: goto label_283f54;
        case 0x283f58u: goto label_283f58;
        case 0x283f5cu: goto label_283f5c;
        case 0x283f60u: goto label_283f60;
        case 0x283f64u: goto label_283f64;
        case 0x283f68u: goto label_283f68;
        case 0x283f6cu: goto label_283f6c;
        case 0x283f70u: goto label_283f70;
        case 0x283f74u: goto label_283f74;
        default: break;
    }

    ctx->pc = 0x283a40u;

label_283a40:
    // 0x283a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x283a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_283a44:
    // 0x283a44: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x283a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283a48:
    // 0x283a48: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x283a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_283a4c:
    // 0x283a4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x283a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_283a50:
    // 0x283a50: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x283a50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_283a54:
    // 0x283a54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x283a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_283a58:
    // 0x283a58: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x283a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_283a5c:
    // 0x283a5c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x283a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_283a60:
    // 0x283a60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283a64:
    // 0x283a64: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x283a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_283a68:
    // 0x283a68: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x283a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_283a6c:
    // 0x283a6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x283a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_283a70:
    // 0x283a70: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x283a70u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_283a74:
    // 0x283a74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x283a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_283a78:
    // 0x283a78: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x283a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_283a7c:
    // 0x283a7c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x283a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_283a80:
    // 0x283a80: 0xc09dcc6  jal         func_277318
label_283a84:
    if (ctx->pc == 0x283A84u) {
        ctx->pc = 0x283A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A80u;
        // 0x283a84: 0xac432bc0  sw          $v1, 0x2BC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283A88u;
        goto label_283a88;
    }
    ctx->pc = 0x283A80u;
    SET_GPR_U32(ctx, 31, 0x283A88u);
    ctx->pc = 0x283A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283A80u;
    // 0x283a84: 0xac432bc0  sw          $v1, 0x2BC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11200), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x283A80u, 0x283A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A88u;
label_283a88:
    // 0x283a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283a8c:
    // 0x283a8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x283a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_283a90:
    // 0x283a90: 0xc0f52a8  jal         func_3D4AA0
label_283a94:
    if (ctx->pc == 0x283A94u) {
        ctx->pc = 0x283A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A90u;
        // 0x283a94: 0x3404c350  ori         $a0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x283A98u;
        goto label_283a98;
    }
    ctx->pc = 0x283A90u;
    SET_GPR_U32(ctx, 31, 0x283A98u);
    ctx->pc = 0x283A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283A90u;
    // 0x283a94: 0x3404c350  ori         $a0, $zero, 0xC350 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x283A90u, 0x283A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A98u;
label_283a98:
    // 0x283a98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x283a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_283a9c:
    // 0x283a9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x283a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283aa0:
    // 0x283aa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283aa4:
    // 0x283aa4: 0x3406c350  ori         $a2, $zero, 0xC350
    ctx->pc = 0x283aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_283aa8:
    // 0x283aa8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x283aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_283aac:
    // 0x283aac: 0x40f809  jalr        $v0
label_283ab0:
    if (ctx->pc == 0x283AB0u) {
        ctx->pc = 0x283AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AACu;
        // 0x283ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AB4u;
        goto label_283ab4;
    }
    ctx->pc = 0x283AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283AB4u);
        ctx->pc = 0x283AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AACu;
        // 0x283ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283AACu, 0x283AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283AB4u;
label_283ab4:
    // 0x283ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x283ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_283ab8:
    // 0x283ab8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x283ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283abc:
    // 0x283abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283ac0:
    // 0x283ac0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x283ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_283ac4:
    // 0x283ac4: 0x40f809  jalr        $v0
label_283ac8:
    if (ctx->pc == 0x283AC8u) {
        ctx->pc = 0x283AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AC4u;
        // 0x283ac8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283ACCu;
        goto label_283acc;
    }
    ctx->pc = 0x283AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283ACCu);
        ctx->pc = 0x283AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AC4u;
        // 0x283ac8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283AC4u, 0x283ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283ACCu;
label_283acc:
    // 0x283acc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x283accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_283ad0:
    // 0x283ad0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x283ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_283ad4:
    // 0x283ad4: 0x40f809  jalr        $v0
label_283ad8:
    if (ctx->pc == 0x283AD8u) {
        ctx->pc = 0x283AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AD4u;
        // 0x283ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283ADCu;
        goto label_283adc;
    }
    ctx->pc = 0x283AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283ADCu);
        ctx->pc = 0x283AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AD4u;
        // 0x283ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283AD4u, 0x283ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283ADCu;
label_283adc:
    // 0x283adc: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x283adcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_283ae0:
    // 0x283ae0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x283ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_283ae4:
    // 0x283ae4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x283ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_283ae8:
    // 0x283ae8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x283ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_283aec:
    // 0x283aec: 0xac532bc8  sw          $s3, 0x2BC8($v0)
    ctx->pc = 0x283aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11208), GPR_U32(ctx, 19));
label_283af0:
    // 0x283af0: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_283af4:
    if (ctx->pc == 0x283AF4u) {
        ctx->pc = 0x283AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AF0u;
        // 0x283af4: 0xacb32bc4  sw          $s3, 0x2BC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11204), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AF8u;
        goto label_283af8;
    }
    ctx->pc = 0x283AF0u;
    {
        const bool branch_taken_0x283af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x283AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AF0u;
        // 0x283af4: 0xacb32bc4  sw          $s3, 0x2BC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11204), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283af0) {
            ctx->pc = 0x283BA8u;
            goto label_283ba8;
        }
    }
    ctx->pc = 0x283AF8u;
label_283af8:
    // 0x283af8: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x283af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_283afc:
    // 0x283afc: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x283afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_283b00:
    // 0x283b00: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_283b04:
    if (ctx->pc == 0x283B04u) {
        ctx->pc = 0x283B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B00u;
        // 0x283b04: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B08u;
        goto label_283b08;
    }
    ctx->pc = 0x283B00u;
    {
        const bool branch_taken_0x283b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B00u;
        // 0x283b04: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b00) {
            ctx->pc = 0x283BACu;
            goto label_283bac;
        }
    }
    ctx->pc = 0x283B08u;
label_283b08:
    // 0x283b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283b0c:
    // 0x283b0c: 0x3404c350  ori         $a0, $zero, 0xC350
    ctx->pc = 0x283b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_283b10:
    // 0x283b10: 0xaee2a328  sw          $v0, -0x5CD8($s7)
    ctx->pc = 0x283b10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294943528), GPR_U32(ctx, 2));
label_283b14:
    // 0x283b14: 0xc0b241a  jal         func_2C9068
label_283b18:
    if (ctx->pc == 0x283B18u) {
        ctx->pc = 0x283B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B14u;
        // 0x283b18: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B1Cu;
        goto label_283b1c;
    }
    ctx->pc = 0x283B14u;
    SET_GPR_U32(ctx, 31, 0x283B1Cu);
    ctx->pc = 0x283B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B14u;
    // 0x283b18: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x283B14u, 0x283B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B1Cu;
label_283b1c:
    // 0x283b1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x283b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283b20:
    // 0x283b20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x283b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283b24:
    // 0x283b24: 0x26a5fffa  addiu       $a1, $s5, -0x6
    ctx->pc = 0x283b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
label_283b28:
    // 0x283b28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x283b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_283b2c:
    // 0x283b2c: 0xae062bcc  sw          $a2, 0x2BCC($s0)
    ctx->pc = 0x283b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11212), GPR_U32(ctx, 6));
label_283b30:
    // 0x283b30: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
label_283b34:
    if (ctx->pc == 0x283B34u) {
        ctx->pc = 0x283B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B30u;
        // 0x283b34: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B38u;
        goto label_283b38;
    }
    ctx->pc = 0x283B30u;
    {
        const bool branch_taken_0x283b30 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x283B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B30u;
        // 0x283b34: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b30) {
            ctx->pc = 0x283B54u;
            goto label_283b54;
        }
    }
    ctx->pc = 0x283B38u;
label_283b38:
    // 0x283b38: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x283b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_283b3c:
    // 0x283b3c: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x283b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_283b40:
    // 0x283b40: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x283b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_283b44:
    // 0x283b44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_283b48:
    // 0x283b48: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x283b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_283b4c:
    // 0x283b4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_283b50:
    if (ctx->pc == 0x283B50u) {
        ctx->pc = 0x283B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B4Cu;
        // 0x283b50: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B54u;
        goto label_283b54;
    }
    ctx->pc = 0x283B4Cu;
    {
        const bool branch_taken_0x283b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B4Cu;
        // 0x283b50: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b4c) {
            ctx->pc = 0x283B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283b38;
        }
    }
    ctx->pc = 0x283B54u;
label_283b54:
    // 0x283b54: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x283b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_283b58:
    // 0x283b58: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x283b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_283b5c:
    // 0x283b5c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x283b5cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_283b60:
    // 0x283b60: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
label_283b64:
    if (ctx->pc == 0x283B64u) {
        ctx->pc = 0x283B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B60u;
        // 0x283b64: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B68u;
        goto label_283b68;
    }
    ctx->pc = 0x283B60u;
    {
        const bool branch_taken_0x283b60 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x283B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B60u;
        // 0x283b64: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b60) {
            ctx->pc = 0x283BACu;
            goto label_283bac;
        }
    }
    ctx->pc = 0x283B68u;
label_283b68:
    // 0x283b68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x283b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_283b6c:
    // 0x283b6c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x283b6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283b70:
    // 0x283b70: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x283b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283b74:
    // 0x283b74: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x283b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_283b78:
    // 0x283b78: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x283b78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_283b7c:
    // 0x283b7c: 0xc0a0c3a  jal         func_2830E8
label_283b80:
    if (ctx->pc == 0x283B80u) {
        ctx->pc = 0x283B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B7Cu;
        // 0x283b80: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B84u;
        goto label_283b84;
    }
    ctx->pc = 0x283B7Cu;
    SET_GPR_U32(ctx, 31, 0x283B84u);
    ctx->pc = 0x283B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B7Cu;
    // 0x283b80: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E8u, 0x283B7Cu, 0x283B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B84u;
label_283b84:
    // 0x283b84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x283b84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283b88:
    // 0x283b88: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x283b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_283b8c:
    // 0x283b8c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_283b90:
    if (ctx->pc == 0x283B90u) {
        ctx->pc = 0x283B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B8Cu;
        // 0x283b90: 0xa2160000  sb          $s6, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B94u;
        goto label_283b94;
    }
    ctx->pc = 0x283B8Cu;
    {
        const bool branch_taken_0x283b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b8c) {
            ctx->pc = 0x283B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283B8Cu;
            // 0x283b90: 0xa2160000  sb          $s6, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283B98u;
            goto label_283b98;
        }
    }
    ctx->pc = 0x283B94u;
label_283b94:
    // 0x283b94: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x283b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_283b98:
    // 0x283b98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x283b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_283b9c:
    // 0x283b9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x283b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_283ba0:
    // 0x283ba0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_283ba4:
    if (ctx->pc == 0x283BA4u) {
        ctx->pc = 0x283BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BA0u;
        // 0x283ba4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BA8u;
        goto label_283ba8;
    }
    ctx->pc = 0x283BA0u;
    {
        const bool branch_taken_0x283ba0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x283BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BA0u;
        // 0x283ba4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ba0) {
            ctx->pc = 0x283B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283b78;
        }
    }
    ctx->pc = 0x283BA8u;
label_283ba8:
    // 0x283ba8: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x283ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_283bac:
    // 0x283bac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x283bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_283bb0:
    // 0x283bb0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x283bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_283bb4:
    // 0x283bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283bb8:
    // 0x283bb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283bbc:
    // 0x283bbc: 0x1aa00028  blez        $s5, . + 4 + (0x28 << 2)
label_283bc0:
    if (ctx->pc == 0x283BC0u) {
        ctx->pc = 0x283BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BBCu;
        // 0x283bc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BC4u;
        goto label_283bc4;
    }
    ctx->pc = 0x283BBCu;
    {
        const bool branch_taken_0x283bbc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x283BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BBCu;
        // 0x283bc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bbc) {
            ctx->pc = 0x283C60u;
            goto label_283c60;
        }
    }
    ctx->pc = 0x283BC4u;
label_283bc4:
    // 0x283bc4: 0x240c0023  addiu       $t4, $zero, 0x23
    ctx->pc = 0x283bc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_283bc8:
    // 0x283bc8: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x283bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_283bcc:
    // 0x283bcc: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x283bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_283bd0:
    // 0x283bd0: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x283bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_283bd4:
    // 0x283bd4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x283bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283bd8:
    // 0x283bd8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x283bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_283bdc:
    // 0x283bdc: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x283bdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283be0:
    // 0x283be0: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_283be4:
    if (ctx->pc == 0x283BE4u) {
        ctx->pc = 0x283BE8u;
        goto label_283be8;
    }
    ctx->pc = 0x283BE0u;
    {
        const bool branch_taken_0x283be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x283be0) {
            ctx->pc = 0x283C24u;
            goto label_283c24;
        }
    }
    ctx->pc = 0x283BE8u;
label_283be8:
    // 0x283be8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x283be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_283bec:
    // 0x283bec: 0x144c0003  bne         $v0, $t4, . + 4 + (0x3 << 2)
label_283bf0:
    if (ctx->pc == 0x283BF0u) {
        ctx->pc = 0x283BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BECu;
        // 0x283bf0: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BF4u;
        goto label_283bf4;
    }
    ctx->pc = 0x283BECu;
    {
        const bool branch_taken_0x283bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x283BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BECu;
        // 0x283bf0: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bec) {
            ctx->pc = 0x283BFCu;
            goto label_283bfc;
        }
    }
    ctx->pc = 0x283BF4u;
label_283bf4:
    // 0x283bf4: 0x10000013  b           . + 4 + (0x13 << 2)
label_283bf8:
    if (ctx->pc == 0x283BF8u) {
        ctx->pc = 0x283BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BF4u;
        // 0x283bf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BFCu;
        goto label_283bfc;
    }
    ctx->pc = 0x283BF4u;
    {
        const bool branch_taken_0x283bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BF4u;
        // 0x283bf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bf4) {
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283BFCu;
label_283bfc:
    // 0x283bfc: 0x504b0011  beql        $v0, $t3, . + 4 + (0x11 << 2)
label_283c00:
    if (ctx->pc == 0x283C00u) {
        ctx->pc = 0x283C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BFCu;
        // 0x283c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C04u;
        goto label_283c04;
    }
    ctx->pc = 0x283BFCu;
    {
        const bool branch_taken_0x283bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x283bfc) {
            ctx->pc = 0x283C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283BFCu;
            // 0x283c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283C04u;
label_283c04:
    // 0x283c04: 0x544a0003  bnel        $v0, $t2, . + 4 + (0x3 << 2)
label_283c08:
    if (ctx->pc == 0x283C08u) {
        ctx->pc = 0x283C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C04u;
        // 0x283c08: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C0Cu;
        goto label_283c0c;
    }
    ctx->pc = 0x283C04u;
    {
        const bool branch_taken_0x283c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x283c04) {
            ctx->pc = 0x283C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283C04u;
            // 0x283c08: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283C14u;
            goto label_283c14;
        }
    }
    ctx->pc = 0x283C0Cu;
label_283c0c:
    // 0x283c0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_283c10:
    if (ctx->pc == 0x283C10u) {
        ctx->pc = 0x283C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C0Cu;
        // 0x283c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C14u;
        goto label_283c14;
    }
    ctx->pc = 0x283C0Cu;
    {
        const bool branch_taken_0x283c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C0Cu;
        // 0x283c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c0c) {
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283C14u;
label_283c14:
    // 0x283c14: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x283c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_283c18:
    // 0x283c18: 0x6200b  movn        $a0, $zero, $a2
    ctx->pc = 0x283c18u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_283c1c:
    // 0x283c1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_283c20:
    if (ctx->pc == 0x283C20u) {
        ctx->pc = 0x283C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C1Cu;
        // 0x283c20: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C24u;
        goto label_283c24;
    }
    ctx->pc = 0x283C1Cu;
    {
        const bool branch_taken_0x283c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C1Cu;
        // 0x283c20: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c1c) {
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283C24u;
label_283c24:
    // 0x283c24: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_283c28:
    if (ctx->pc == 0x283C28u) {
        ctx->pc = 0x283C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C24u;
        // 0x283c28: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C2Cu;
        goto label_283c2c;
    }
    ctx->pc = 0x283C24u;
    {
        const bool branch_taken_0x283c24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C24u;
        // 0x283c28: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c24) {
            ctx->pc = 0x283C4Cu;
            goto label_283c4c;
        }
    }
    ctx->pc = 0x283C2Cu;
label_283c2c:
    // 0x283c2c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x283c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_283c30:
    // 0x283c30: 0x14470004  bne         $v0, $a3, . + 4 + (0x4 << 2)
label_283c34:
    if (ctx->pc == 0x283C34u) {
        ctx->pc = 0x283C38u;
        goto label_283c38;
    }
    ctx->pc = 0x283C30u;
    {
        const bool branch_taken_0x283c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x283c30) {
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283C38u;
label_283c38:
    // 0x283c38: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x283c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_283c3c:
    // 0x283c3c: 0x3842005c  xori        $v0, $v0, 0x5C
    ctx->pc = 0x283c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)92);
label_283c40:
    // 0x283c40: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x283c40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_283c44:
    // 0x283c44: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_283c48:
    if (ctx->pc == 0x283C48u) {
        ctx->pc = 0x283C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C44u;
        // 0x283c48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C4Cu;
        goto label_283c4c;
    }
    ctx->pc = 0x283C44u;
    {
        const bool branch_taken_0x283c44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x283c44) {
            ctx->pc = 0x283C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283C44u;
            // 0x283c48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283C54u;
            goto label_283c54;
        }
    }
    ctx->pc = 0x283C4Cu;
label_283c4c:
    // 0x283c4c: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x283c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
label_283c50:
    // 0x283c50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_283c54:
    // 0x283c54: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x283c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_283c58:
    // 0x283c58: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_283c5c:
    if (ctx->pc == 0x283C5Cu) {
        ctx->pc = 0x283C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C58u;
        // 0x283c5c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C60u;
        goto label_283c60;
    }
    ctx->pc = 0x283C58u;
    {
        const bool branch_taken_0x283c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C58u;
        // 0x283c5c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c58) {
            ctx->pc = 0x283BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283be0;
        }
    }
    ctx->pc = 0x283C60u;
label_283c60:
    // 0x283c60: 0x1aa00013  blez        $s5, . + 4 + (0x13 << 2)
label_283c64:
    if (ctx->pc == 0x283C64u) {
        ctx->pc = 0x283C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C60u;
        // 0x283c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C68u;
        goto label_283c68;
    }
    ctx->pc = 0x283C60u;
    {
        const bool branch_taken_0x283c60 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x283C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C60u;
        // 0x283c64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c60) {
            ctx->pc = 0x283CB0u;
            goto label_283cb0;
        }
    }
    ctx->pc = 0x283C68u;
label_283c68:
    // 0x283c68: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x283c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_283c6c:
    // 0x283c6c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x283c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_283c70:
    // 0x283c70: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_283c74:
    // 0x283c74: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x283c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_283c78:
    // 0x283c78: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x283c78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283c7c:
    // 0x283c7c: 0x0  nop
    ctx->pc = 0x283c7cu;
    // NOP
label_283c80:
    // 0x283c80: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x283c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_283c84:
    // 0x283c84: 0x50470006  beql        $v0, $a3, . + 4 + (0x6 << 2)
label_283c88:
    if (ctx->pc == 0x283C88u) {
        ctx->pc = 0x283C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C84u;
        // 0x283c88: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C8Cu;
        goto label_283c8c;
    }
    ctx->pc = 0x283C84u;
    {
        const bool branch_taken_0x283c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x283c84) {
            ctx->pc = 0x283C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283C84u;
            // 0x283c88: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x283C8Cu;
label_283c8c:
    // 0x283c8c: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
label_283c90:
    if (ctx->pc == 0x283C90u) {
        ctx->pc = 0x283C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C8Cu;
        // 0x283c90: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C94u;
        goto label_283c94;
    }
    ctx->pc = 0x283C8Cu;
    {
        const bool branch_taken_0x283c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283c8c) {
            ctx->pc = 0x283C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283C8Cu;
            // 0x283c90: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x283C94u;
label_283c94:
    // 0x283c94: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_283c98:
    if (ctx->pc == 0x283C98u) {
        ctx->pc = 0x283C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C94u;
        // 0x283c98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C9Cu;
        goto label_283c9c;
    }
    ctx->pc = 0x283C94u;
    {
        const bool branch_taken_0x283c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x283c94) {
            ctx->pc = 0x283C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283C94u;
            // 0x283c98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283CA4u;
            goto label_283ca4;
        }
    }
    ctx->pc = 0x283C9Cu;
label_283c9c:
    // 0x283c9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x283c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_283ca0:
    // 0x283ca0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_283ca4:
    // 0x283ca4: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x283ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_283ca8:
    // 0x283ca8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_283cac:
    if (ctx->pc == 0x283CACu) {
        ctx->pc = 0x283CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA8u;
        // 0x283cac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CB0u;
        goto label_283cb0;
    }
    ctx->pc = 0x283CA8u;
    {
        const bool branch_taken_0x283ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA8u;
        // 0x283cac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ca8) {
            ctx->pc = 0x283C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283c80;
        }
    }
    ctx->pc = 0x283CB0u;
label_283cb0:
    // 0x283cb0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x283cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_283cb4:
    // 0x283cb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x283cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_283cb8:
    // 0x283cb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_283cbc:
    if (ctx->pc == 0x283CBCu) {
        ctx->pc = 0x283CC0u;
        goto label_283cc0;
    }
    ctx->pc = 0x283CB8u;
    {
        const bool branch_taken_0x283cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x283cb8) {
            ctx->pc = 0x283CC8u;
            goto label_283cc8;
        }
    }
    ctx->pc = 0x283CC0u;
label_283cc0:
    // 0x283cc0: 0xc0a173e  jal         func_285CF8
label_283cc4:
    if (ctx->pc == 0x283CC4u) {
        ctx->pc = 0x283CC8u;
        goto label_283cc8;
    }
    ctx->pc = 0x283CC0u;
    SET_GPR_U32(ctx, 31, 0x283CC8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x283CC0u, 0x283CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CC8u;
label_283cc8:
    // 0x283cc8: 0x3c0f809  jalr        $fp
label_283ccc:
    if (ctx->pc == 0x283CCCu) {
        ctx->pc = 0x283CD0u;
        goto label_283cd0;
    }
    ctx->pc = 0x283CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x283CD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283CC8u, 0x283CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283CD0u;
label_283cd0:
    // 0x283cd0: 0x8ee2a328  lw          $v0, -0x5CD8($s7)
    ctx->pc = 0x283cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294943528)));
label_283cd4:
    // 0x283cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_283cd8:
    if (ctx->pc == 0x283CD8u) {
        ctx->pc = 0x283CDCu;
        goto label_283cdc;
    }
    ctx->pc = 0x283CD4u;
    {
        const bool branch_taken_0x283cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283cd4) {
            ctx->pc = 0x283CE4u;
            goto label_283ce4;
        }
    }
    ctx->pc = 0x283CDCu;
label_283cdc:
    // 0x283cdc: 0xc0b2524  jal         func_2C9490
label_283ce0:
    if (ctx->pc == 0x283CE0u) {
        ctx->pc = 0x283CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CDCu;
        // 0x283ce0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CE4u;
        goto label_283ce4;
    }
    ctx->pc = 0x283CDCu;
    SET_GPR_U32(ctx, 31, 0x283CE4u);
    ctx->pc = 0x283CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CDCu;
    // 0x283ce0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x283CDCu, 0x283CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CE4u;
label_283ce4:
    // 0x283ce4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_283ce8:
    if (ctx->pc == 0x283CE8u) {
        ctx->pc = 0x283CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CE4u;
        // 0x283ce8: 0xaee0a328  sw          $zero, -0x5CD8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294943528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CECu;
        goto label_283cec;
    }
    ctx->pc = 0x283CE4u;
    {
        const bool branch_taken_0x283ce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ce4) {
            ctx->pc = 0x283CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283CE4u;
            // 0x283ce8: 0xaee0a328  sw          $zero, -0x5CD8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294943528), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283CF8u;
            goto label_283cf8;
        }
    }
    ctx->pc = 0x283CECu;
label_283cec:
    // 0x283cec: 0xc0f528a  jal         func_3D4A28
label_283cf0:
    if (ctx->pc == 0x283CF0u) {
        ctx->pc = 0x283CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CECu;
        // 0x283cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CF4u;
        goto label_283cf4;
    }
    ctx->pc = 0x283CECu;
    SET_GPR_U32(ctx, 31, 0x283CF4u);
    ctx->pc = 0x283CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CECu;
    // 0x283cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x283CECu, 0x283CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CF4u;
label_283cf4:
    // 0x283cf4: 0xaee0a328  sw          $zero, -0x5CD8($s7)
    ctx->pc = 0x283cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294943528), GPR_U32(ctx, 0));
label_283cf8:
    // 0x283cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283cfc:
    // 0x283cfc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x283cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_283d00:
    // 0x283d00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x283d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_283d04:
    // 0x283d04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_283d08:
    // 0x283d08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x283d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_283d0c:
    // 0x283d0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x283d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_283d10:
    // 0x283d10: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x283d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_283d14:
    // 0x283d14: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x283d14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_283d18:
    // 0x283d18: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x283d18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_283d1c:
    // 0x283d1c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x283d1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_283d20:
    // 0x283d20: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x283d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_283d24:
    // 0x283d24: 0x3e00008  jr          $ra
label_283d28:
    if (ctx->pc == 0x283D28u) {
        ctx->pc = 0x283D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D24u;
        // 0x283d28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D2Cu;
        goto label_283d2c;
    }
    ctx->pc = 0x283D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D24u;
        // 0x283d28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283D2Cu;
label_283d2c:
    // 0x283d2c: 0x0  nop
    ctx->pc = 0x283d2cu;
    // NOP
label_283d30:
    // 0x283d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_283d34:
    // 0x283d34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x283d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_283d38:
    // 0x283d38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x283d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_283d3c:
    // 0x283d3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x283d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_283d40:
    // 0x283d40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x283d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283d44:
    // 0x283d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_283d48:
    // 0x283d48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x283d48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283d4c:
    // 0x283d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x283d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_283d50:
    // 0x283d50: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x283d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_283d54:
    // 0x283d54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x283d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_283d58:
    // 0x283d58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x283d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_283d5c:
    // 0x283d5c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x283d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_283d60:
    // 0x283d60: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x283d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_283d64:
    // 0x283d64: 0x8c432bc8  lw          $v1, 0x2BC8($v0)
    ctx->pc = 0x283d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11208)));
label_283d68:
    // 0x283d68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x283d68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_283d6c:
    // 0x283d6c: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_283d70:
    if (ctx->pc == 0x283D70u) {
        ctx->pc = 0x283D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D6Cu;
        // 0x283d70: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D74u;
        goto label_283d74;
    }
    ctx->pc = 0x283D6Cu;
    {
        const bool branch_taken_0x283d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x283D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D6Cu;
        // 0x283d70: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d6c) {
            ctx->pc = 0x283D8Cu;
            goto label_283d8c;
        }
    }
    ctx->pc = 0x283D74u;
label_283d74:
    // 0x283d74: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x283d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_283d78:
    // 0x283d78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x283d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_283d7c:
    // 0x283d7c: 0x8c462bc0  lw          $a2, 0x2BC0($v0)
    ctx->pc = 0x283d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11200)));
label_283d80:
    // 0x283d80: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x283d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
label_283d84:
    // 0x283d84: 0xc0efefa  jal         func_3BFBE8
label_283d88:
    if (ctx->pc == 0x283D88u) {
        ctx->pc = 0x283D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D84u;
        // 0x283d88: 0x24a5a428  addiu       $a1, $a1, -0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D8Cu;
        goto label_283d8c;
    }
    ctx->pc = 0x283D84u;
    SET_GPR_U32(ctx, 31, 0x283D8Cu);
    ctx->pc = 0x283D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D84u;
    // 0x283d88: 0x24a5a428  addiu       $a1, $a1, -0x5BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x283D84u, 0x283D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D8Cu;
label_283d8c:
    // 0x283d8c: 0x8e422bc8  lw          $v0, 0x2BC8($s2)
    ctx->pc = 0x283d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_283d90:
    // 0x283d90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x283d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283d94:
    // 0x283d94: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x283d94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_283d98:
    // 0x283d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_283d9c:
    // 0x283d9c: 0xae422bc8  sw          $v0, 0x2BC8($s2)
    ctx->pc = 0x283d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11208), GPR_U32(ctx, 2));
label_283da0:
    // 0x283da0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x283da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_283da4:
    // 0x283da4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x283da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283da8:
    // 0x283da8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x283da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_283dac:
    // 0x283dac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x283dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_283db0:
    // 0x283db0: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
label_283db4:
    if (ctx->pc == 0x283DB4u) {
        ctx->pc = 0x283DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB0u;
        // 0x283db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DB8u;
        goto label_283db8;
    }
    ctx->pc = 0x283DB0u;
    {
        const bool branch_taken_0x283db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x283DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB0u;
        // 0x283db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283db0) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283DB8u;
label_283db8:
    // 0x283db8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x283db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_283dbc:
    // 0x283dbc: 0xae422bc8  sw          $v0, 0x2BC8($s2)
    ctx->pc = 0x283dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11208), GPR_U32(ctx, 2));
label_283dc0:
    // 0x283dc0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x283dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_283dc4:
    // 0x283dc4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x283dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_283dc8:
    // 0x283dc8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x283dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_283dcc:
    // 0x283dcc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x283dccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_283dd0:
    // 0x283dd0: 0x2c62003d  sltiu       $v0, $v1, 0x3D
    ctx->pc = 0x283dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_283dd4:
    // 0x283dd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_283dd8:
    if (ctx->pc == 0x283DD8u) {
        ctx->pc = 0x283DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DD4u;
        // 0x283dd8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DDCu;
        goto label_283ddc;
    }
    ctx->pc = 0x283DD4u;
    {
        const bool branch_taken_0x283dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DD4u;
        // 0x283dd8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dd4) {
            ctx->pc = 0x283E70u;
            goto label_283e70;
        }
    }
    ctx->pc = 0x283DDCu;
label_283ddc:
    // 0x283ddc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x283ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_283de0:
    // 0x283de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x283de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_283de4:
    // 0x283de4: 0x2442a4a0  addiu       $v0, $v0, -0x5B60
    ctx->pc = 0x283de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
label_283de8:
    // 0x283de8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_283dec:
    // 0x283dec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x283decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_283df0:
    // 0x283df0: 0x800008  jr          $a0
label_283df4:
    if (ctx->pc == 0x283DF4u) {
        ctx->pc = 0x283DF8u;
        goto label_283df8;
    }
    ctx->pc = 0x283DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283DF8u: goto label_283df8;
            case 0x283E00u: goto label_283e00;
            case 0x283E08u: goto label_283e08;
            case 0x283E10u: goto label_283e10;
            case 0x283E18u: goto label_283e18;
            case 0x283E20u: goto label_283e20;
            case 0x283E28u: goto label_283e28;
            case 0x283E30u: goto label_283e30;
            case 0x283E38u: goto label_283e38;
            case 0x283E40u: goto label_283e40;
            case 0x283E48u: goto label_283e48;
            case 0x283E50u: goto label_283e50;
            case 0x283E58u: goto label_283e58;
            case 0x283E60u: goto label_283e60;
            case 0x283E68u: goto label_283e68;
            case 0x283E70u: goto label_283e70;
            case 0x283E94u: goto label_283e94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283DF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x283DF8u;
label_283df8:
    // 0x283df8: 0x10000026  b           . + 4 + (0x26 << 2)
label_283dfc:
    if (ctx->pc == 0x283DFCu) {
        ctx->pc = 0x283DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DF8u;
        // 0x283dfc: 0x24110093  addiu       $s1, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E00u;
        goto label_283e00;
    }
    ctx->pc = 0x283DF8u;
    {
        const bool branch_taken_0x283df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DF8u;
        // 0x283dfc: 0x24110093  addiu       $s1, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283df8) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E00u;
label_283e00:
    // 0x283e00: 0x10000024  b           . + 4 + (0x24 << 2)
label_283e04:
    if (ctx->pc == 0x283E04u) {
        ctx->pc = 0x283E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E00u;
        // 0x283e04: 0x24110087  addiu       $s1, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E08u;
        goto label_283e08;
    }
    ctx->pc = 0x283E00u;
    {
        const bool branch_taken_0x283e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E00u;
        // 0x283e04: 0x24110087  addiu       $s1, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e00) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E08u;
label_283e08:
    // 0x283e08: 0x10000022  b           . + 4 + (0x22 << 2)
label_283e0c:
    if (ctx->pc == 0x283E0Cu) {
        ctx->pc = 0x283E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E08u;
        // 0x283e0c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E10u;
        goto label_283e10;
    }
    ctx->pc = 0x283E08u;
    {
        const bool branch_taken_0x283e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E08u;
        // 0x283e0c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e08) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E10u;
label_283e10:
    // 0x283e10: 0x10000020  b           . + 4 + (0x20 << 2)
label_283e14:
    if (ctx->pc == 0x283E14u) {
        ctx->pc = 0x283E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E10u;
        // 0x283e14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E18u;
        goto label_283e18;
    }
    ctx->pc = 0x283E10u;
    {
        const bool branch_taken_0x283e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E10u;
        // 0x283e14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e10) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E18u;
label_283e18:
    // 0x283e18: 0x1000001e  b           . + 4 + (0x1E << 2)
label_283e1c:
    if (ctx->pc == 0x283E1Cu) {
        ctx->pc = 0x283E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E18u;
        // 0x283e1c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E20u;
        goto label_283e20;
    }
    ctx->pc = 0x283E18u;
    {
        const bool branch_taken_0x283e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E18u;
        // 0x283e1c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e18) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E20u;
label_283e20:
    // 0x283e20: 0x1000001c  b           . + 4 + (0x1C << 2)
label_283e24:
    if (ctx->pc == 0x283E24u) {
        ctx->pc = 0x283E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E20u;
        // 0x283e24: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E28u;
        goto label_283e28;
    }
    ctx->pc = 0x283E20u;
    {
        const bool branch_taken_0x283e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E20u;
        // 0x283e24: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e20) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E28u;
label_283e28:
    // 0x283e28: 0x1000001a  b           . + 4 + (0x1A << 2)
label_283e2c:
    if (ctx->pc == 0x283E2Cu) {
        ctx->pc = 0x283E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E28u;
        // 0x283e2c: 0x2411008f  addiu       $s1, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E30u;
        goto label_283e30;
    }
    ctx->pc = 0x283E28u;
    {
        const bool branch_taken_0x283e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E28u;
        // 0x283e2c: 0x2411008f  addiu       $s1, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e28) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E30u;
label_283e30:
    // 0x283e30: 0x10000018  b           . + 4 + (0x18 << 2)
label_283e34:
    if (ctx->pc == 0x283E34u) {
        ctx->pc = 0x283E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E30u;
        // 0x283e34: 0x24110090  addiu       $s1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E38u;
        goto label_283e38;
    }
    ctx->pc = 0x283E30u;
    {
        const bool branch_taken_0x283e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E30u;
        // 0x283e34: 0x24110090  addiu       $s1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e30) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E38u;
label_283e38:
    // 0x283e38: 0x10000016  b           . + 4 + (0x16 << 2)
label_283e3c:
    if (ctx->pc == 0x283E3Cu) {
        ctx->pc = 0x283E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E38u;
        // 0x283e3c: 0x24110091  addiu       $s1, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E40u;
        goto label_283e40;
    }
    ctx->pc = 0x283E38u;
    {
        const bool branch_taken_0x283e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E38u;
        // 0x283e3c: 0x24110091  addiu       $s1, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e38) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E40u;
label_283e40:
    // 0x283e40: 0x10000014  b           . + 4 + (0x14 << 2)
label_283e44:
    if (ctx->pc == 0x283E44u) {
        ctx->pc = 0x283E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E40u;
        // 0x283e44: 0x24110092  addiu       $s1, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E48u;
        goto label_283e48;
    }
    ctx->pc = 0x283E40u;
    {
        const bool branch_taken_0x283e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E40u;
        // 0x283e44: 0x24110092  addiu       $s1, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e40) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E48u;
label_283e48:
    // 0x283e48: 0x10000012  b           . + 4 + (0x12 << 2)
label_283e4c:
    if (ctx->pc == 0x283E4Cu) {
        ctx->pc = 0x283E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E48u;
        // 0x283e4c: 0x24110088  addiu       $s1, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E50u;
        goto label_283e50;
    }
    ctx->pc = 0x283E48u;
    {
        const bool branch_taken_0x283e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E48u;
        // 0x283e4c: 0x24110088  addiu       $s1, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e48) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E50u;
label_283e50:
    // 0x283e50: 0x10000010  b           . + 4 + (0x10 << 2)
label_283e54:
    if (ctx->pc == 0x283E54u) {
        ctx->pc = 0x283E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E50u;
        // 0x283e54: 0x2411008a  addiu       $s1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E58u;
        goto label_283e58;
    }
    ctx->pc = 0x283E50u;
    {
        const bool branch_taken_0x283e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E50u;
        // 0x283e54: 0x2411008a  addiu       $s1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e50) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E58u;
label_283e58:
    // 0x283e58: 0x1000000e  b           . + 4 + (0xE << 2)
label_283e5c:
    if (ctx->pc == 0x283E5Cu) {
        ctx->pc = 0x283E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E58u;
        // 0x283e5c: 0x24110094  addiu       $s1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E60u;
        goto label_283e60;
    }
    ctx->pc = 0x283E58u;
    {
        const bool branch_taken_0x283e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E58u;
        // 0x283e5c: 0x24110094  addiu       $s1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e58) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E60u;
label_283e60:
    // 0x283e60: 0x1000000c  b           . + 4 + (0xC << 2)
label_283e64:
    if (ctx->pc == 0x283E64u) {
        ctx->pc = 0x283E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E60u;
        // 0x283e64: 0x24110095  addiu       $s1, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E68u;
        goto label_283e68;
    }
    ctx->pc = 0x283E60u;
    {
        const bool branch_taken_0x283e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E60u;
        // 0x283e64: 0x24110095  addiu       $s1, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e60) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E68u;
label_283e68:
    // 0x283e68: 0x1000000a  b           . + 4 + (0xA << 2)
label_283e6c:
    if (ctx->pc == 0x283E6Cu) {
        ctx->pc = 0x283E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E68u;
        // 0x283e6c: 0x24110096  addiu       $s1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E70u;
        goto label_283e70;
    }
    ctx->pc = 0x283E68u;
    {
        const bool branch_taken_0x283e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E68u;
        // 0x283e6c: 0x24110096  addiu       $s1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e68) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E70u;
label_283e70:
    // 0x283e70: 0x8e432bc8  lw          $v1, 0x2BC8($s2)
    ctx->pc = 0x283e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_283e74:
    // 0x283e74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x283e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_283e78:
    // 0x283e78: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x283e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_283e7c:
    // 0x283e7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_283e80:
    // 0x283e80: 0x8c462bc0  lw          $a2, 0x2BC0($v0)
    ctx->pc = 0x283e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11200)));
label_283e84:
    // 0x283e84: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x283e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
label_283e88:
    // 0x283e88: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x283e88u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_283e8c:
    // 0x283e8c: 0xc0efefa  jal         func_3BFBE8
label_283e90:
    if (ctx->pc == 0x283E90u) {
        ctx->pc = 0x283E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E8Cu;
        // 0x283e90: 0x24a5a450  addiu       $a1, $a1, -0x5BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E94u;
        goto label_283e94;
    }
    ctx->pc = 0x283E8Cu;
    SET_GPR_U32(ctx, 31, 0x283E94u);
    ctx->pc = 0x283E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E8Cu;
    // 0x283e90: 0x24a5a450  addiu       $a1, $a1, -0x5BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x283E8Cu, 0x283E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E94u;
label_283e94:
    // 0x283e94: 0x8ec2a328  lw          $v0, -0x5CD8($s6)
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943528)));
label_283e98:
    // 0x283e98: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_283e9c:
    if (ctx->pc == 0x283E9Cu) {
        ctx->pc = 0x283E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E98u;
        // 0x283e9c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EA0u;
        goto label_283ea0;
    }
    ctx->pc = 0x283E98u;
    {
        const bool branch_taken_0x283e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E98u;
        // 0x283e9c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e98) {
            ctx->pc = 0x283F14u;
            goto label_283f14;
        }
    }
    ctx->pc = 0x283EA0u;
label_283ea0:
    // 0x283ea0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x283ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_283ea4:
    // 0x283ea4: 0x8c452bc4  lw          $a1, 0x2BC4($v0)
    ctx->pc = 0x283ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11204)));
label_283ea8:
    // 0x283ea8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x283ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_283eac:
    // 0x283eac: 0x8cc32bcc  lw          $v1, 0x2BCC($a2)
    ctx->pc = 0x283eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11212)));
label_283eb0:
    // 0x283eb0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x283eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_283eb4:
    // 0x283eb4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x283eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_283eb8:
    // 0x283eb8: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x283eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_283ebc:
    // 0x283ebc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x283ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_283ec0:
    // 0x283ec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x283ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_283ec4:
    // 0x283ec4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x283ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_283ec8:
    // 0x283ec8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x283ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_283ecc:
    // 0x283ecc: 0x8cc32bcc  lw          $v1, 0x2BCC($a2)
    ctx->pc = 0x283eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11212)));
label_283ed0:
    // 0x283ed0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x283ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_283ed4:
    // 0x283ed4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x283ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_283ed8:
    // 0x283ed8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_283edc:
    if (ctx->pc == 0x283EDCu) {
        ctx->pc = 0x283EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ED8u;
        // 0x283edc: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EE0u;
        goto label_283ee0;
    }
    ctx->pc = 0x283ED8u;
    {
        const bool branch_taken_0x283ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ED8u;
        // 0x283edc: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ed8) {
            ctx->pc = 0x283EE8u;
            goto label_283ee8;
        }
    }
    ctx->pc = 0x283EE0u;
label_283ee0:
    // 0x283ee0: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x283ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
label_283ee4:
    // 0x283ee4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x283ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_283ee8:
    // 0x283ee8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x283ee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_283eec:
    // 0x283eec: 0xc0a0c3a  jal         func_2830E8
label_283ef0:
    if (ctx->pc == 0x283EF0u) {
        ctx->pc = 0x283EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EECu;
        // 0x283ef0: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EF4u;
        goto label_283ef4;
    }
    ctx->pc = 0x283EECu;
    SET_GPR_U32(ctx, 31, 0x283EF4u);
    ctx->pc = 0x283EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283EECu;
    // 0x283ef0: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E8u, 0x283EECu, 0x283EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EF4u;
label_283ef4:
    // 0x283ef4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x283ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_283ef8:
    // 0x283ef8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_283efc:
    if (ctx->pc == 0x283EFCu) {
        ctx->pc = 0x283EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EF8u;
        // 0x283efc: 0x8e422bc8  lw          $v0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F00u;
        goto label_283f00;
    }
    ctx->pc = 0x283EF8u;
    {
        const bool branch_taken_0x283ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x283EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EF8u;
        // 0x283efc: 0x8e422bc8  lw          $v0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ef8) {
            ctx->pc = 0x283F48u;
            goto label_283f48;
        }
    }
    ctx->pc = 0x283F00u;
label_283f00:
    // 0x283f00: 0x1680ffa5  bnez        $s4, . + 4 + (-0x5B << 2)
label_283f04:
    if (ctx->pc == 0x283F04u) {
        ctx->pc = 0x283F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F00u;
        // 0x283f04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F08u;
        goto label_283f08;
    }
    ctx->pc = 0x283F00u;
    {
        const bool branch_taken_0x283f00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F00u;
        // 0x283f04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f00) {
            ctx->pc = 0x283D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283d98;
        }
    }
    ctx->pc = 0x283F08u;
label_283f08:
    // 0x283f08: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x283f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_283f0c:
    // 0x283f0c: 0x10000010  b           . + 4 + (0x10 << 2)
label_283f10:
    if (ctx->pc == 0x283F10u) {
        ctx->pc = 0x283F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F0Cu;
        // 0x283f10: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F14u;
        goto label_283f14;
    }
    ctx->pc = 0x283F0Cu;
    {
        const bool branch_taken_0x283f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F0Cu;
        // 0x283f10: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f0c) {
            ctx->pc = 0x283F50u;
            goto label_283f50;
        }
    }
    ctx->pc = 0x283F14u;
label_283f14:
    // 0x283f14: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x283f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_283f18:
    // 0x283f18: 0x2b33021  addu        $a2, $s5, $s3
    ctx->pc = 0x283f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_283f1c:
    // 0x283f1c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x283f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_283f20:
    // 0x283f20: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x283f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_283f24:
    // 0x283f24: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x283f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_283f28:
    // 0x283f28: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x283f28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_283f2c:
    // 0x283f2c: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_283f30:
    if (ctx->pc == 0x283F30u) {
        ctx->pc = 0x283F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F2Cu;
        // 0x283f30: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F34u;
        goto label_283f34;
    }
    ctx->pc = 0x283F2Cu;
    {
        const bool branch_taken_0x283f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x283F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F2Cu;
        // 0x283f30: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f2c) {
            ctx->pc = 0x283F44u;
            goto label_283f44;
        }
    }
    ctx->pc = 0x283F34u;
label_283f34:
    // 0x283f34: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_283f38:
    if (ctx->pc == 0x283F38u) {
        ctx->pc = 0x283F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F34u;
        // 0x283f38: 0x8e422bc8  lw          $v0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F3Cu;
        goto label_283f3c;
    }
    ctx->pc = 0x283F34u;
    {
        const bool branch_taken_0x283f34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F34u;
        // 0x283f38: 0x8e422bc8  lw          $v0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f34) {
            ctx->pc = 0x283F48u;
            goto label_283f48;
        }
    }
    ctx->pc = 0x283F3Cu;
label_283f3c:
    // 0x283f3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_283f40:
    if (ctx->pc == 0x283F40u) {
        ctx->pc = 0x283F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F3Cu;
        // 0x283f40: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F44u;
        goto label_283f44;
    }
    ctx->pc = 0x283F3Cu;
    {
        const bool branch_taken_0x283f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F3Cu;
        // 0x283f40: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f3c) {
            ctx->pc = 0x283F50u;
            goto label_283f50;
        }
    }
    ctx->pc = 0x283F44u;
label_283f44:
    // 0x283f44: 0x8e422bc8  lw          $v0, 0x2BC8($s2)
    ctx->pc = 0x283f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_283f48:
    // 0x283f48: 0x1000ff93  b           . + 4 + (-0x6D << 2)
label_283f4c:
    if (ctx->pc == 0x283F4Cu) {
        ctx->pc = 0x283F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F48u;
        // 0x283f4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F50u;
        goto label_283f50;
    }
    ctx->pc = 0x283F48u;
    {
        const bool branch_taken_0x283f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F48u;
        // 0x283f4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f48) {
            ctx->pc = 0x283D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283d98;
        }
    }
    ctx->pc = 0x283F50u;
label_283f50:
    // 0x283f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_283f54:
    // 0x283f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x283f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_283f58:
    // 0x283f58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x283f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_283f5c:
    // 0x283f5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x283f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_283f60:
    // 0x283f60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x283f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_283f64:
    // 0x283f64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x283f64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_283f68:
    // 0x283f68: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x283f68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_283f6c:
    // 0x283f6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x283f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_283f70:
    // 0x283f70: 0x3e00008  jr          $ra
label_283f74:
    if (ctx->pc == 0x283F74u) {
        ctx->pc = 0x283F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F70u;
        // 0x283f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F78u;
        goto label_fallthrough_0x283f70;
    }
    ctx->pc = 0x283F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F70u;
        // 0x283f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283f70:
    ctx->pc = 0x283F78u;
}
