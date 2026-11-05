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

// Function: sub_00252A20
// Address: 0x252a20 - 0x252e98
void sub_00252A20_0x252a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252A20_0x252a20");
#endif

    switch (ctx->pc) {
        case 0x252a20u: goto label_252a20;
        case 0x252a24u: goto label_252a24;
        case 0x252a28u: goto label_252a28;
        case 0x252a2cu: goto label_252a2c;
        case 0x252a30u: goto label_252a30;
        case 0x252a34u: goto label_252a34;
        case 0x252a38u: goto label_252a38;
        case 0x252a3cu: goto label_252a3c;
        case 0x252a40u: goto label_252a40;
        case 0x252a44u: goto label_252a44;
        case 0x252a48u: goto label_252a48;
        case 0x252a4cu: goto label_252a4c;
        case 0x252a50u: goto label_252a50;
        case 0x252a54u: goto label_252a54;
        case 0x252a58u: goto label_252a58;
        case 0x252a5cu: goto label_252a5c;
        case 0x252a60u: goto label_252a60;
        case 0x252a64u: goto label_252a64;
        case 0x252a68u: goto label_252a68;
        case 0x252a6cu: goto label_252a6c;
        case 0x252a70u: goto label_252a70;
        case 0x252a74u: goto label_252a74;
        case 0x252a78u: goto label_252a78;
        case 0x252a7cu: goto label_252a7c;
        case 0x252a80u: goto label_252a80;
        case 0x252a84u: goto label_252a84;
        case 0x252a88u: goto label_252a88;
        case 0x252a8cu: goto label_252a8c;
        case 0x252a90u: goto label_252a90;
        case 0x252a94u: goto label_252a94;
        case 0x252a98u: goto label_252a98;
        case 0x252a9cu: goto label_252a9c;
        case 0x252aa0u: goto label_252aa0;
        case 0x252aa4u: goto label_252aa4;
        case 0x252aa8u: goto label_252aa8;
        case 0x252aacu: goto label_252aac;
        case 0x252ab0u: goto label_252ab0;
        case 0x252ab4u: goto label_252ab4;
        case 0x252ab8u: goto label_252ab8;
        case 0x252abcu: goto label_252abc;
        case 0x252ac0u: goto label_252ac0;
        case 0x252ac4u: goto label_252ac4;
        case 0x252ac8u: goto label_252ac8;
        case 0x252accu: goto label_252acc;
        case 0x252ad0u: goto label_252ad0;
        case 0x252ad4u: goto label_252ad4;
        case 0x252ad8u: goto label_252ad8;
        case 0x252adcu: goto label_252adc;
        case 0x252ae0u: goto label_252ae0;
        case 0x252ae4u: goto label_252ae4;
        case 0x252ae8u: goto label_252ae8;
        case 0x252aecu: goto label_252aec;
        case 0x252af0u: goto label_252af0;
        case 0x252af4u: goto label_252af4;
        case 0x252af8u: goto label_252af8;
        case 0x252afcu: goto label_252afc;
        case 0x252b00u: goto label_252b00;
        case 0x252b04u: goto label_252b04;
        case 0x252b08u: goto label_252b08;
        case 0x252b0cu: goto label_252b0c;
        case 0x252b10u: goto label_252b10;
        case 0x252b14u: goto label_252b14;
        case 0x252b18u: goto label_252b18;
        case 0x252b1cu: goto label_252b1c;
        case 0x252b20u: goto label_252b20;
        case 0x252b24u: goto label_252b24;
        case 0x252b28u: goto label_252b28;
        case 0x252b2cu: goto label_252b2c;
        case 0x252b30u: goto label_252b30;
        case 0x252b34u: goto label_252b34;
        case 0x252b38u: goto label_252b38;
        case 0x252b3cu: goto label_252b3c;
        case 0x252b40u: goto label_252b40;
        case 0x252b44u: goto label_252b44;
        case 0x252b48u: goto label_252b48;
        case 0x252b4cu: goto label_252b4c;
        case 0x252b50u: goto label_252b50;
        case 0x252b54u: goto label_252b54;
        case 0x252b58u: goto label_252b58;
        case 0x252b5cu: goto label_252b5c;
        case 0x252b60u: goto label_252b60;
        case 0x252b64u: goto label_252b64;
        case 0x252b68u: goto label_252b68;
        case 0x252b6cu: goto label_252b6c;
        case 0x252b70u: goto label_252b70;
        case 0x252b74u: goto label_252b74;
        case 0x252b78u: goto label_252b78;
        case 0x252b7cu: goto label_252b7c;
        case 0x252b80u: goto label_252b80;
        case 0x252b84u: goto label_252b84;
        case 0x252b88u: goto label_252b88;
        case 0x252b8cu: goto label_252b8c;
        case 0x252b90u: goto label_252b90;
        case 0x252b94u: goto label_252b94;
        case 0x252b98u: goto label_252b98;
        case 0x252b9cu: goto label_252b9c;
        case 0x252ba0u: goto label_252ba0;
        case 0x252ba4u: goto label_252ba4;
        case 0x252ba8u: goto label_252ba8;
        case 0x252bacu: goto label_252bac;
        case 0x252bb0u: goto label_252bb0;
        case 0x252bb4u: goto label_252bb4;
        case 0x252bb8u: goto label_252bb8;
        case 0x252bbcu: goto label_252bbc;
        case 0x252bc0u: goto label_252bc0;
        case 0x252bc4u: goto label_252bc4;
        case 0x252bc8u: goto label_252bc8;
        case 0x252bccu: goto label_252bcc;
        case 0x252bd0u: goto label_252bd0;
        case 0x252bd4u: goto label_252bd4;
        case 0x252bd8u: goto label_252bd8;
        case 0x252bdcu: goto label_252bdc;
        case 0x252be0u: goto label_252be0;
        case 0x252be4u: goto label_252be4;
        case 0x252be8u: goto label_252be8;
        case 0x252becu: goto label_252bec;
        case 0x252bf0u: goto label_252bf0;
        case 0x252bf4u: goto label_252bf4;
        case 0x252bf8u: goto label_252bf8;
        case 0x252bfcu: goto label_252bfc;
        case 0x252c00u: goto label_252c00;
        case 0x252c04u: goto label_252c04;
        case 0x252c08u: goto label_252c08;
        case 0x252c0cu: goto label_252c0c;
        case 0x252c10u: goto label_252c10;
        case 0x252c14u: goto label_252c14;
        case 0x252c18u: goto label_252c18;
        case 0x252c1cu: goto label_252c1c;
        case 0x252c20u: goto label_252c20;
        case 0x252c24u: goto label_252c24;
        case 0x252c28u: goto label_252c28;
        case 0x252c2cu: goto label_252c2c;
        case 0x252c30u: goto label_252c30;
        case 0x252c34u: goto label_252c34;
        case 0x252c38u: goto label_252c38;
        case 0x252c3cu: goto label_252c3c;
        case 0x252c40u: goto label_252c40;
        case 0x252c44u: goto label_252c44;
        case 0x252c48u: goto label_252c48;
        case 0x252c4cu: goto label_252c4c;
        case 0x252c50u: goto label_252c50;
        case 0x252c54u: goto label_252c54;
        case 0x252c58u: goto label_252c58;
        case 0x252c5cu: goto label_252c5c;
        case 0x252c60u: goto label_252c60;
        case 0x252c64u: goto label_252c64;
        case 0x252c68u: goto label_252c68;
        case 0x252c6cu: goto label_252c6c;
        case 0x252c70u: goto label_252c70;
        case 0x252c74u: goto label_252c74;
        case 0x252c78u: goto label_252c78;
        case 0x252c7cu: goto label_252c7c;
        case 0x252c80u: goto label_252c80;
        case 0x252c84u: goto label_252c84;
        case 0x252c88u: goto label_252c88;
        case 0x252c8cu: goto label_252c8c;
        case 0x252c90u: goto label_252c90;
        case 0x252c94u: goto label_252c94;
        case 0x252c98u: goto label_252c98;
        case 0x252c9cu: goto label_252c9c;
        case 0x252ca0u: goto label_252ca0;
        case 0x252ca4u: goto label_252ca4;
        case 0x252ca8u: goto label_252ca8;
        case 0x252cacu: goto label_252cac;
        case 0x252cb0u: goto label_252cb0;
        case 0x252cb4u: goto label_252cb4;
        case 0x252cb8u: goto label_252cb8;
        case 0x252cbcu: goto label_252cbc;
        case 0x252cc0u: goto label_252cc0;
        case 0x252cc4u: goto label_252cc4;
        case 0x252cc8u: goto label_252cc8;
        case 0x252cccu: goto label_252ccc;
        case 0x252cd0u: goto label_252cd0;
        case 0x252cd4u: goto label_252cd4;
        case 0x252cd8u: goto label_252cd8;
        case 0x252cdcu: goto label_252cdc;
        case 0x252ce0u: goto label_252ce0;
        case 0x252ce4u: goto label_252ce4;
        case 0x252ce8u: goto label_252ce8;
        case 0x252cecu: goto label_252cec;
        case 0x252cf0u: goto label_252cf0;
        case 0x252cf4u: goto label_252cf4;
        case 0x252cf8u: goto label_252cf8;
        case 0x252cfcu: goto label_252cfc;
        case 0x252d00u: goto label_252d00;
        case 0x252d04u: goto label_252d04;
        case 0x252d08u: goto label_252d08;
        case 0x252d0cu: goto label_252d0c;
        case 0x252d10u: goto label_252d10;
        case 0x252d14u: goto label_252d14;
        case 0x252d18u: goto label_252d18;
        case 0x252d1cu: goto label_252d1c;
        case 0x252d20u: goto label_252d20;
        case 0x252d24u: goto label_252d24;
        case 0x252d28u: goto label_252d28;
        case 0x252d2cu: goto label_252d2c;
        case 0x252d30u: goto label_252d30;
        case 0x252d34u: goto label_252d34;
        case 0x252d38u: goto label_252d38;
        case 0x252d3cu: goto label_252d3c;
        case 0x252d40u: goto label_252d40;
        case 0x252d44u: goto label_252d44;
        case 0x252d48u: goto label_252d48;
        case 0x252d4cu: goto label_252d4c;
        case 0x252d50u: goto label_252d50;
        case 0x252d54u: goto label_252d54;
        case 0x252d58u: goto label_252d58;
        case 0x252d5cu: goto label_252d5c;
        case 0x252d60u: goto label_252d60;
        case 0x252d64u: goto label_252d64;
        case 0x252d68u: goto label_252d68;
        case 0x252d6cu: goto label_252d6c;
        case 0x252d70u: goto label_252d70;
        case 0x252d74u: goto label_252d74;
        case 0x252d78u: goto label_252d78;
        case 0x252d7cu: goto label_252d7c;
        case 0x252d80u: goto label_252d80;
        case 0x252d84u: goto label_252d84;
        case 0x252d88u: goto label_252d88;
        case 0x252d8cu: goto label_252d8c;
        case 0x252d90u: goto label_252d90;
        case 0x252d94u: goto label_252d94;
        case 0x252d98u: goto label_252d98;
        case 0x252d9cu: goto label_252d9c;
        case 0x252da0u: goto label_252da0;
        case 0x252da4u: goto label_252da4;
        case 0x252da8u: goto label_252da8;
        case 0x252dacu: goto label_252dac;
        case 0x252db0u: goto label_252db0;
        case 0x252db4u: goto label_252db4;
        case 0x252db8u: goto label_252db8;
        case 0x252dbcu: goto label_252dbc;
        case 0x252dc0u: goto label_252dc0;
        case 0x252dc4u: goto label_252dc4;
        case 0x252dc8u: goto label_252dc8;
        case 0x252dccu: goto label_252dcc;
        case 0x252dd0u: goto label_252dd0;
        case 0x252dd4u: goto label_252dd4;
        case 0x252dd8u: goto label_252dd8;
        case 0x252ddcu: goto label_252ddc;
        case 0x252de0u: goto label_252de0;
        case 0x252de4u: goto label_252de4;
        case 0x252de8u: goto label_252de8;
        case 0x252decu: goto label_252dec;
        case 0x252df0u: goto label_252df0;
        case 0x252df4u: goto label_252df4;
        case 0x252df8u: goto label_252df8;
        case 0x252dfcu: goto label_252dfc;
        case 0x252e00u: goto label_252e00;
        case 0x252e04u: goto label_252e04;
        case 0x252e08u: goto label_252e08;
        case 0x252e0cu: goto label_252e0c;
        case 0x252e10u: goto label_252e10;
        case 0x252e14u: goto label_252e14;
        case 0x252e18u: goto label_252e18;
        case 0x252e1cu: goto label_252e1c;
        case 0x252e20u: goto label_252e20;
        case 0x252e24u: goto label_252e24;
        case 0x252e28u: goto label_252e28;
        case 0x252e2cu: goto label_252e2c;
        case 0x252e30u: goto label_252e30;
        case 0x252e34u: goto label_252e34;
        case 0x252e38u: goto label_252e38;
        case 0x252e3cu: goto label_252e3c;
        case 0x252e40u: goto label_252e40;
        case 0x252e44u: goto label_252e44;
        case 0x252e48u: goto label_252e48;
        case 0x252e4cu: goto label_252e4c;
        case 0x252e50u: goto label_252e50;
        case 0x252e54u: goto label_252e54;
        case 0x252e58u: goto label_252e58;
        case 0x252e5cu: goto label_252e5c;
        case 0x252e60u: goto label_252e60;
        case 0x252e64u: goto label_252e64;
        case 0x252e68u: goto label_252e68;
        case 0x252e6cu: goto label_252e6c;
        case 0x252e70u: goto label_252e70;
        case 0x252e74u: goto label_252e74;
        case 0x252e78u: goto label_252e78;
        case 0x252e7cu: goto label_252e7c;
        case 0x252e80u: goto label_252e80;
        case 0x252e84u: goto label_252e84;
        case 0x252e88u: goto label_252e88;
        case 0x252e8cu: goto label_252e8c;
        case 0x252e90u: goto label_252e90;
        case 0x252e94u: goto label_252e94;
        default: break;
    }

    ctx->pc = 0x252a20u;

label_252a20:
    // 0x252a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_252a24:
    // 0x252a24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x252a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_252a28:
    // 0x252a28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x252a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_252a2c:
    // 0x252a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252a30:
    // 0x252a30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_252a34:
    // 0x252a34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x252a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_252a38:
    // 0x252a38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_252a3c:
    // 0x252a3c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x252a3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_252a40:
    // 0x252a40: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x252a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_252a44:
    // 0x252a44: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x252a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_252a48:
    // 0x252a48: 0x5460010c  bnel        $v1, $zero, . + 4 + (0x10C << 2)
label_252a4c:
    if (ctx->pc == 0x252A4Cu) {
        ctx->pc = 0x252A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A48u;
        // 0x252a4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A50u;
        goto label_252a50;
    }
    ctx->pc = 0x252A48u;
    {
        const bool branch_taken_0x252a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252a48) {
            ctx->pc = 0x252A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A48u;
            // 0x252a4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252A50u;
label_252a50:
    // 0x252a50: 0xc095280  jal         func_254A00
label_252a54:
    if (ctx->pc == 0x252A54u) {
        ctx->pc = 0x252A58u;
        goto label_252a58;
    }
    ctx->pc = 0x252A50u;
    SET_GPR_U32(ctx, 31, 0x252A58u);
    ctx->pc = 0x254A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A00u, 0x252A50u, 0x252A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A58u;
label_252a58:
    // 0x252a58: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_252a5c:
    if (ctx->pc == 0x252A5Cu) {
        ctx->pc = 0x252A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A58u;
        // 0x252a5c: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A60u;
        goto label_252a60;
    }
    ctx->pc = 0x252A58u;
    {
        const bool branch_taken_0x252a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a58) {
            ctx->pc = 0x252A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A58u;
            // 0x252a5c: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AECu;
            goto label_252aec;
        }
    }
    ctx->pc = 0x252A60u;
label_252a60:
    // 0x252a60: 0x8e020fe0  lw          $v0, 0xFE0($s0)
    ctx->pc = 0x252a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4064)));
label_252a64:
    // 0x252a64: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_252a68:
    if (ctx->pc == 0x252A68u) {
        ctx->pc = 0x252A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A64u;
        // 0x252a68: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A6Cu;
        goto label_252a6c;
    }
    ctx->pc = 0x252A64u;
    {
        const bool branch_taken_0x252a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a64) {
            ctx->pc = 0x252A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A64u;
            // 0x252a68: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AECu;
            goto label_252aec;
        }
    }
    ctx->pc = 0x252A6Cu;
label_252a6c:
    // 0x252a6c: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x252a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_252a70:
    // 0x252a70: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_252a74:
    if (ctx->pc == 0x252A74u) {
        ctx->pc = 0x252A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A70u;
        // 0x252a74: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A78u;
        goto label_252a78;
    }
    ctx->pc = 0x252A70u;
    {
        const bool branch_taken_0x252a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252a70) {
            ctx->pc = 0x252A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A70u;
            // 0x252a74: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AECu;
            goto label_252aec;
        }
    }
    ctx->pc = 0x252A78u;
label_252a78:
    // 0x252a78: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x252a78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_252a7c:
    // 0x252a7c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x252a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_252a80:
    // 0x252a80: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x252a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
label_252a84:
    // 0x252a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_252a88:
    // 0x252a88: 0x504000f7  beql        $v0, $zero, . + 4 + (0xF7 << 2)
label_252a8c:
    if (ctx->pc == 0x252A8Cu) {
        ctx->pc = 0x252A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A88u;
        // 0x252a8c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A90u;
        goto label_252a90;
    }
    ctx->pc = 0x252A88u;
    {
        const bool branch_taken_0x252a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252a88) {
            ctx->pc = 0x252A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A88u;
            // 0x252a8c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E68u;
            goto label_252e68;
        }
    }
    ctx->pc = 0x252A90u;
label_252a90:
    // 0x252a90: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x252a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_252a94:
    // 0x252a94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x252a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252a98:
    // 0x252a98: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x252a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252a9c:
    // 0x252a9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252aa0:
    // 0x252aa0: 0x0  nop
    ctx->pc = 0x252aa0u;
    // NOP
label_252aa4:
    // 0x252aa4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_252aa8:
    if (ctx->pc == 0x252AA8u) {
        ctx->pc = 0x252AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AA4u;
        // 0x252aa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AACu;
        goto label_252aac;
    }
    ctx->pc = 0x252AA4u;
    {
        const bool branch_taken_0x252aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AA4u;
        // 0x252aa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252aa4) {
            ctx->pc = 0x252AB0u;
            goto label_252ab0;
        }
    }
    ctx->pc = 0x252AACu;
label_252aac:
    // 0x252aac: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x252aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_252ab0:
    // 0x252ab0: 0x506000ed  beql        $v1, $zero, . + 4 + (0xED << 2)
label_252ab4:
    if (ctx->pc == 0x252AB4u) {
        ctx->pc = 0x252AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AB0u;
        // 0x252ab4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AB8u;
        goto label_252ab8;
    }
    ctx->pc = 0x252AB0u;
    {
        const bool branch_taken_0x252ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ab0) {
            ctx->pc = 0x252AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AB0u;
            // 0x252ab4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E68u;
            goto label_252e68;
        }
    }
    ctx->pc = 0x252AB8u;
label_252ab8:
    // 0x252ab8: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252abc:
    // 0x252abc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_252ac0:
    // 0x252ac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252ac4:
    // 0x252ac4: 0xc44c00a4  lwc1        $f12, 0xA4($v0)
    ctx->pc = 0x252ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_252ac8:
    // 0x252ac8: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x252ac8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
label_252acc:
    // 0x252acc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252ad0:
    // 0x252ad0: 0x0  nop
    ctx->pc = 0x252ad0u;
    // NOP
label_252ad4:
    // 0x252ad4: 0x450200e4  bc1fl       . + 4 + (0xE4 << 2)
label_252ad8:
    if (ctx->pc == 0x252AD8u) {
        ctx->pc = 0x252AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AD4u;
        // 0x252ad8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252ADCu;
        goto label_252adc;
    }
    ctx->pc = 0x252AD4u;
    {
        const bool branch_taken_0x252ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252ad4) {
            ctx->pc = 0x252AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AD4u;
            // 0x252ad8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E68u;
            goto label_252e68;
        }
    }
    ctx->pc = 0x252ADCu;
label_252adc:
    // 0x252adc: 0xc08bcbe  jal         func_22F2F8
label_252ae0:
    if (ctx->pc == 0x252AE0u) {
        ctx->pc = 0x252AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ADCu;
        // 0x252ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AE4u;
        goto label_252ae4;
    }
    ctx->pc = 0x252ADCu;
    SET_GPR_U32(ctx, 31, 0x252AE4u);
    ctx->pc = 0x252AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252ADCu;
    // 0x252ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F2F8u, 0x252ADCu, 0x252AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AE4u;
label_252ae4:
    // 0x252ae4: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_252ae8:
    if (ctx->pc == 0x252AE8u) {
        ctx->pc = 0x252AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AE4u;
        // 0x252ae8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AECu;
        goto label_252aec;
    }
    ctx->pc = 0x252AE4u;
    {
        const bool branch_taken_0x252ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AE4u;
        // 0x252ae8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ae4) {
            ctx->pc = 0x252E68u;
            goto label_252e68;
        }
    }
    ctx->pc = 0x252AECu;
label_252aec:
    // 0x252aec: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x252aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_252af0:
    // 0x252af0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_252af4:
    // 0x252af4: 0x504300e1  beql        $v0, $v1, . + 4 + (0xE1 << 2)
label_252af8:
    if (ctx->pc == 0x252AF8u) {
        ctx->pc = 0x252AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF4u;
        // 0x252af8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AFCu;
        goto label_252afc;
    }
    ctx->pc = 0x252AF4u;
    {
        const bool branch_taken_0x252af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x252af4) {
            ctx->pc = 0x252AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AF4u;
            // 0x252af8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252AFCu;
label_252afc:
    // 0x252afc: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x252afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_252b00:
    // 0x252b00: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_252b04:
    // 0x252b04: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x252b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
label_252b08:
    // 0x252b08: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x252b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_252b0c:
    // 0x252b0c: 0x544000db  bnel        $v0, $zero, . + 4 + (0xDB << 2)
label_252b10:
    if (ctx->pc == 0x252B10u) {
        ctx->pc = 0x252B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B0Cu;
        // 0x252b10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B14u;
        goto label_252b14;
    }
    ctx->pc = 0x252B0Cu;
    {
        const bool branch_taken_0x252b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252b0c) {
            ctx->pc = 0x252B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252B0Cu;
            // 0x252b10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252B14u;
label_252b14:
    // 0x252b14: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x252b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_252b18:
    // 0x252b18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x252b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252b1c:
    // 0x252b1c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x252b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252b20:
    // 0x252b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252b24:
    // 0x252b24: 0x0  nop
    ctx->pc = 0x252b24u;
    // NOP
label_252b28:
    // 0x252b28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_252b2c:
    if (ctx->pc == 0x252B2Cu) {
        ctx->pc = 0x252B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B28u;
        // 0x252b2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B30u;
        goto label_252b30;
    }
    ctx->pc = 0x252B28u;
    {
        const bool branch_taken_0x252b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B28u;
        // 0x252b2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b28) {
            ctx->pc = 0x252B34u;
            goto label_252b34;
        }
    }
    ctx->pc = 0x252B30u;
label_252b30:
    // 0x252b30: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x252b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_252b34:
    // 0x252b34: 0x506000cc  beql        $v1, $zero, . + 4 + (0xCC << 2)
label_252b38:
    if (ctx->pc == 0x252B38u) {
        ctx->pc = 0x252B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B34u;
        // 0x252b38: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B3Cu;
        goto label_252b3c;
    }
    ctx->pc = 0x252B34u;
    {
        const bool branch_taken_0x252b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b34) {
            ctx->pc = 0x252B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252B34u;
            // 0x252b38: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E68u;
            goto label_252e68;
        }
    }
    ctx->pc = 0x252B3Cu;
label_252b3c:
    // 0x252b3c: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x252b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252b40:
    // 0x252b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_252b44:
    // 0x252b44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252b48:
    // 0x252b48: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x252b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252b4c:
    // 0x252b4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x252b4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_252b50:
    // 0x252b50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252b54:
    // 0x252b54: 0x0  nop
    ctx->pc = 0x252b54u;
    // NOP
label_252b58:
    // 0x252b58: 0x450200c3  bc1fl       . + 4 + (0xC3 << 2)
label_252b5c:
    if (ctx->pc == 0x252B5Cu) {
        ctx->pc = 0x252B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B58u;
        // 0x252b5c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B60u;
        goto label_252b60;
    }
    ctx->pc = 0x252B58u;
    {
        const bool branch_taken_0x252b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252b58) {
            ctx->pc = 0x252B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252B58u;
            // 0x252b5c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E68u;
            goto label_252e68;
        }
    }
    ctx->pc = 0x252B60u;
label_252b60:
    // 0x252b60: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x252b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252b64:
    // 0x252b64: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x252b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_252b68:
    // 0x252b68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252b6c:
    // 0x252b6c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x252b6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_252b70:
    // 0x252b70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x252b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252b74:
    // 0x252b74: 0x0  nop
    ctx->pc = 0x252b74u;
    // NOP
label_252b78:
    // 0x252b78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_252b7c:
    if (ctx->pc == 0x252B7Cu) {
        ctx->pc = 0x252B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B78u;
        // 0x252b7c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B80u;
        goto label_252b80;
    }
    ctx->pc = 0x252B78u;
    {
        const bool branch_taken_0x252b78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B78u;
        // 0x252b7c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b78) {
            ctx->pc = 0x252B84u;
            goto label_252b84;
        }
    }
    ctx->pc = 0x252B80u;
label_252b80:
    // 0x252b80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x252b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252b84:
    // 0x252b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252b88:
    // 0x252b88: 0xc0899bc  jal         func_2266F0
label_252b8c:
    if (ctx->pc == 0x252B8Cu) {
        ctx->pc = 0x252B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B88u;
        // 0x252b8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B90u;
        goto label_252b90;
    }
    ctx->pc = 0x252B88u;
    SET_GPR_U32(ctx, 31, 0x252B90u);
    ctx->pc = 0x252B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B88u;
    // 0x252b8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x252B88u, 0x252B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B90u;
label_252b90:
    // 0x252b90: 0xc097f76  jal         func_25FDD8
label_252b94:
    if (ctx->pc == 0x252B94u) {
        ctx->pc = 0x252B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B90u;
        // 0x252b94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B98u;
        goto label_252b98;
    }
    ctx->pc = 0x252B90u;
    SET_GPR_U32(ctx, 31, 0x252B98u);
    ctx->pc = 0x252B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B90u;
    // 0x252b94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x252B90u, 0x252B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B98u;
label_252b98:
    // 0x252b98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_252b9c:
    if (ctx->pc == 0x252B9Cu) {
        ctx->pc = 0x252B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B98u;
        // 0x252b9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BA0u;
        goto label_252ba0;
    }
    ctx->pc = 0x252B98u;
    {
        const bool branch_taken_0x252b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B98u;
        // 0x252b9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b98) {
            ctx->pc = 0x252BC0u;
            goto label_252bc0;
        }
    }
    ctx->pc = 0x252BA0u;
label_252ba0:
    // 0x252ba0: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x252ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252ba4:
    // 0x252ba4: 0xc06e0f0  jal         func_1B83C0
label_252ba8:
    if (ctx->pc == 0x252BA8u) {
        ctx->pc = 0x252BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BA4u;
        // 0x252ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BACu;
        goto label_252bac;
    }
    ctx->pc = 0x252BA4u;
    SET_GPR_U32(ctx, 31, 0x252BACu);
    ctx->pc = 0x252BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BA4u;
    // 0x252ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x252BA4u, 0x252BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BACu;
label_252bac:
    // 0x252bac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_252bb0:
    if (ctx->pc == 0x252BB0u) {
        ctx->pc = 0x252BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BACu;
        // 0x252bb0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BB4u;
        goto label_252bb4;
    }
    ctx->pc = 0x252BACu;
    {
        const bool branch_taken_0x252bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252bac) {
            ctx->pc = 0x252BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252BACu;
            // 0x252bb0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252BC0u;
            goto label_252bc0;
        }
    }
    ctx->pc = 0x252BB4u;
label_252bb4:
    // 0x252bb4: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x252bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_252bb8:
    // 0x252bb8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x252bb8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_252bbc:
    // 0x252bbc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x252bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_252bc0:
    // 0x252bc0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x252bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_252bc4:
    // 0x252bc4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x252bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_252bc8:
    // 0x252bc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_252bcc:
    if (ctx->pc == 0x252BCCu) {
        ctx->pc = 0x252BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BC8u;
        // 0x252bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BD0u;
        goto label_252bd0;
    }
    ctx->pc = 0x252BC8u;
    {
        const bool branch_taken_0x252bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BC8u;
        // 0x252bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bc8) {
            ctx->pc = 0x252BE8u;
            goto label_252be8;
        }
    }
    ctx->pc = 0x252BD0u;
label_252bd0:
    // 0x252bd0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_252bd4:
    if (ctx->pc == 0x252BD4u) {
        ctx->pc = 0x252BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BD0u;
        // 0x252bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BD8u;
        goto label_252bd8;
    }
    ctx->pc = 0x252BD0u;
    {
        const bool branch_taken_0x252bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BD0u;
        // 0x252bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bd0) {
            ctx->pc = 0x252BE4u;
            goto label_252be4;
        }
    }
    ctx->pc = 0x252BD8u;
label_252bd8:
    // 0x252bd8: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x252bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
label_252bdc:
    // 0x252bdc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x252bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_252be0:
    // 0x252be0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x252be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_252be4:
    // 0x252be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x252be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252be8:
    // 0x252be8: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
label_252bec:
    if (ctx->pc == 0x252BECu) {
        ctx->pc = 0x252BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BE8u;
        // 0x252bec: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BF0u;
        goto label_252bf0;
    }
    ctx->pc = 0x252BE8u;
    {
        const bool branch_taken_0x252be8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x252be8) {
            ctx->pc = 0x252BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252BE8u;
            // 0x252bec: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252BFCu;
            goto label_252bfc;
        }
    }
    ctx->pc = 0x252BF0u;
label_252bf0:
    // 0x252bf0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_252bf4:
    if (ctx->pc == 0x252BF4u) {
        ctx->pc = 0x252BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF0u;
        // 0x252bf4: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BF8u;
        goto label_252bf8;
    }
    ctx->pc = 0x252BF0u;
    {
        const bool branch_taken_0x252bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x252bf0) {
            ctx->pc = 0x252BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252BF0u;
            // 0x252bf4: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252C18u;
            goto label_252c18;
        }
    }
    ctx->pc = 0x252BF8u;
label_252bf8:
    // 0x252bf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x252bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_252bfc:
    // 0x252bfc: 0x26020524  addiu       $v0, $s0, 0x524
    ctx->pc = 0x252bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1316));
label_252c00:
    // 0x252c00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x252c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_252c04:
    // 0x252c04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252c08:
    // 0x252c08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x252c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252c0c:
    // 0x252c0c: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x252c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
label_252c10:
    // 0x252c10: 0x1000002e  b           . + 4 + (0x2E << 2)
label_252c14:
    if (ctx->pc == 0x252C14u) {
        ctx->pc = 0x252C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C10u;
        // 0x252c14: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C18u;
        goto label_252c18;
    }
    ctx->pc = 0x252C10u;
    {
        const bool branch_taken_0x252c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C10u;
        // 0x252c14: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c10) {
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252C18u;
label_252c18:
    // 0x252c18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x252c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_252c1c:
    // 0x252c1c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x252c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252c20:
    // 0x252c20: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x252c20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252c24:
    // 0x252c24: 0x0  nop
    ctx->pc = 0x252c24u;
    // NOP
label_252c28:
    // 0x252c28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_252c2c:
    if (ctx->pc == 0x252C2Cu) {
        ctx->pc = 0x252C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C28u;
        // 0x252c2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C30u;
        goto label_252c30;
    }
    ctx->pc = 0x252C28u;
    {
        const bool branch_taken_0x252c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C28u;
        // 0x252c2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c28) {
            ctx->pc = 0x252C34u;
            goto label_252c34;
        }
    }
    ctx->pc = 0x252C30u;
label_252c30:
    // 0x252c30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x252c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252c34:
    // 0x252c34: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_252c38:
    if (ctx->pc == 0x252C38u) {
        ctx->pc = 0x252C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C34u;
        // 0x252c38: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C3Cu;
        goto label_252c3c;
    }
    ctx->pc = 0x252C34u;
    {
        const bool branch_taken_0x252c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c34) {
            ctx->pc = 0x252C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252C34u;
            // 0x252c38: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CB4u;
            goto label_252cb4;
        }
    }
    ctx->pc = 0x252C3Cu;
label_252c3c:
    // 0x252c3c: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x252c3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_252c40:
    // 0x252c40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x252c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_252c44:
    // 0x252c44: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x252c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_252c48:
    // 0x252c48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_252c4c:
    // 0x252c4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_252c50:
    if (ctx->pc == 0x252C50u) {
        ctx->pc = 0x252C54u;
        goto label_252c54;
    }
    ctx->pc = 0x252C4Cu;
    {
        const bool branch_taken_0x252c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c4c) {
            ctx->pc = 0x252C6Cu;
            goto label_252c6c;
        }
    }
    ctx->pc = 0x252C54u;
label_252c54:
    // 0x252c54: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x252c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_252c58:
    // 0x252c58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x252c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_252c5c:
    // 0x252c5c: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x252c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
label_252c60:
    // 0x252c60: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x252c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
label_252c64:
    // 0x252c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_252c68:
    // 0x252c68: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x252c68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_252c6c:
    // 0x252c6c: 0xc09470c  jal         func_251C30
label_252c70:
    if (ctx->pc == 0x252C70u) {
        ctx->pc = 0x252C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C6Cu;
        // 0x252c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C74u;
        goto label_252c74;
    }
    ctx->pc = 0x252C6Cu;
    SET_GPR_U32(ctx, 31, 0x252C74u);
    ctx->pc = 0x252C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C6Cu;
    // 0x252c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C30u, 0x252C6Cu, 0x252C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C74u;
label_252c74:
    // 0x252c74: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_252c78:
    if (ctx->pc == 0x252C78u) {
        ctx->pc = 0x252C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C74u;
        // 0x252c78: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C7Cu;
        goto label_252c7c;
    }
    ctx->pc = 0x252C74u;
    {
        const bool branch_taken_0x252c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c74) {
            ctx->pc = 0x252C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252C74u;
            // 0x252c78: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CB4u;
            goto label_252cb4;
        }
    }
    ctx->pc = 0x252C7Cu;
label_252c7c:
    // 0x252c7c: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x252c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_252c80:
    // 0x252c80: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x252c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_252c84:
    // 0x252c84: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x252c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_252c88:
    // 0x252c88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x252c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_252c8c:
    // 0x252c8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_252c90:
    if (ctx->pc == 0x252C90u) {
        ctx->pc = 0x252C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C8Cu;
        // 0x252c90: 0xe6140528  swc1        $f20, 0x528($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C94u;
        goto label_252c94;
    }
    ctx->pc = 0x252C8Cu;
    {
        const bool branch_taken_0x252c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c8c) {
            ctx->pc = 0x252C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252C8Cu;
            // 0x252c90: 0xe6140528  swc1        $f20, 0x528($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CA4u;
            goto label_252ca4;
        }
    }
    ctx->pc = 0x252C94u;
label_252c94:
    // 0x252c94: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x252c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_252c98:
    // 0x252c98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_252c9c:
    if (ctx->pc == 0x252C9Cu) {
        ctx->pc = 0x252C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C98u;
        // 0x252c9c: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CA0u;
        goto label_252ca0;
    }
    ctx->pc = 0x252C98u;
    {
        const bool branch_taken_0x252c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c98) {
            ctx->pc = 0x252C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252C98u;
            // 0x252c9c: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CB4u;
            goto label_252cb4;
        }
    }
    ctx->pc = 0x252CA0u;
label_252ca0:
    // 0x252ca0: 0xe6140528  swc1        $f20, 0x528($s0)
    ctx->pc = 0x252ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
label_252ca4:
    // 0x252ca4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x252ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_252ca8:
    // 0x252ca8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x252ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_252cac:
    // 0x252cac: 0x10000072  b           . + 4 + (0x72 << 2)
label_252cb0:
    if (ctx->pc == 0x252CB0u) {
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0xe6140524  swc1        $f20, 0x524($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CB4u;
        goto label_252cb4;
    }
    ctx->pc = 0x252CACu;
    {
        const bool branch_taken_0x252cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0xe6140524  swc1        $f20, 0x524($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cac) {
            ctx->pc = 0x252E78u;
            goto label_252e78;
        }
    }
    ctx->pc = 0x252CB4u;
label_252cb4:
    // 0x252cb4: 0x26030524  addiu       $v1, $s0, 0x524
    ctx->pc = 0x252cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1316));
label_252cb8:
    // 0x252cb8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x252cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_252cbc:
    // 0x252cbc: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x252cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252cc0:
    // 0x252cc0: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x252cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
label_252cc4:
    // 0x252cc4: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x252cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252cc8:
    // 0x252cc8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x252cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_252ccc:
    // 0x252ccc: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x252cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_252cd0:
    // 0x252cd0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x252cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_252cd4:
    // 0x252cd4: 0x2462fff3  addiu       $v0, $v1, -0xD
    ctx->pc = 0x252cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
label_252cd8:
    // 0x252cd8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x252cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_252cdc:
    // 0x252cdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_252ce0:
    if (ctx->pc == 0x252CE0u) {
        ctx->pc = 0x252CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CDCu;
        // 0x252ce0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CE4u;
        goto label_252ce4;
    }
    ctx->pc = 0x252CDCu;
    {
        const bool branch_taken_0x252cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CDCu;
        // 0x252ce0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cdc) {
            ctx->pc = 0x252CF0u;
            goto label_252cf0;
        }
    }
    ctx->pc = 0x252CE4u;
label_252ce4:
    // 0x252ce4: 0x2462ffd9  addiu       $v0, $v1, -0x27
    ctx->pc = 0x252ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
label_252ce8:
    // 0x252ce8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x252ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_252cec:
    // 0x252cec: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x252cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_252cf0:
    // 0x252cf0: 0x50800062  beql        $a0, $zero, . + 4 + (0x62 << 2)
label_252cf4:
    if (ctx->pc == 0x252CF4u) {
        ctx->pc = 0x252CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CF0u;
        // 0x252cf4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CF8u;
        goto label_252cf8;
    }
    ctx->pc = 0x252CF0u;
    {
        const bool branch_taken_0x252cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cf0) {
            ctx->pc = 0x252CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252CF0u;
            // 0x252cf4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252CF8u;
label_252cf8:
    // 0x252cf8: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x252cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_252cfc:
    // 0x252cfc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x252cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_252d00:
    // 0x252d00: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x252d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
label_252d04:
    // 0x252d04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_252d08:
    // 0x252d08: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_252d0c:
    if (ctx->pc == 0x252D0Cu) {
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0x26021030  addiu       $v0, $s0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D10u;
        goto label_252d10;
    }
    ctx->pc = 0x252D08u;
    {
        const bool branch_taken_0x252d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0x26021030  addiu       $v0, $s0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d08) {
            ctx->pc = 0x252D84u;
            goto label_252d84;
        }
    }
    ctx->pc = 0x252D10u;
label_252d10:
    // 0x252d10: 0xc6001030  lwc1        $f0, 0x1030($s0)
    ctx->pc = 0x252d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252d14:
    // 0x252d14: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x252d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_252d18:
    // 0x252d18: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x252d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_252d1c:
    // 0x252d1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252d20:
    // 0x252d20: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x252d20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_252d24:
    // 0x252d24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252d24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252d28:
    // 0x252d28: 0x0  nop
    ctx->pc = 0x252d28u;
    // NOP
label_252d2c:
    // 0x252d2c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_252d30:
    if (ctx->pc == 0x252D30u) {
        ctx->pc = 0x252D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D2Cu;
        // 0x252d30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D34u;
        goto label_252d34;
    }
    ctx->pc = 0x252D2Cu;
    {
        const bool branch_taken_0x252d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D2Cu;
        // 0x252d30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d2c) {
            ctx->pc = 0x252D64u;
            goto label_252d64;
        }
    }
    ctx->pc = 0x252D34u;
label_252d34:
    // 0x252d34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x252d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252d38:
    // 0x252d38: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x252d38u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_252d3c:
    // 0x252d3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252d40:
    // 0x252d40: 0x0  nop
    ctx->pc = 0x252d40u;
    // NOP
label_252d44:
    // 0x252d44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_252d48:
    if (ctx->pc == 0x252D48u) {
        ctx->pc = 0x252D4Cu;
        goto label_252d4c;
    }
    ctx->pc = 0x252D44u;
    {
        const bool branch_taken_0x252d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252d44) {
            ctx->pc = 0x252D64u;
            goto label_252d64;
        }
    }
    ctx->pc = 0x252D4Cu;
label_252d4c:
    // 0x252d4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252d50:
    // 0x252d50: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x252d50u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_252d54:
    // 0x252d54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252d58:
    // 0x252d58: 0x0  nop
    ctx->pc = 0x252d58u;
    // NOP
label_252d5c:
    // 0x252d5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_252d60:
    if (ctx->pc == 0x252D60u) {
        ctx->pc = 0x252D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D5Cu;
        // 0x252d60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D64u;
        goto label_252d64;
    }
    ctx->pc = 0x252D5Cu;
    {
        const bool branch_taken_0x252d5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252d5c) {
            ctx->pc = 0x252D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252D5Cu;
            // 0x252d60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252D64u;
            goto label_252d64;
        }
    }
    ctx->pc = 0x252D64u;
label_252d64:
    // 0x252d64: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_252d68:
    if (ctx->pc == 0x252D68u) {
        ctx->pc = 0x252D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D64u;
        // 0x252d68: 0x8e030ff8  lw          $v1, 0xFF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D6Cu;
        goto label_252d6c;
    }
    ctx->pc = 0x252D64u;
    {
        const bool branch_taken_0x252d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252d64) {
            ctx->pc = 0x252D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252D64u;
            // 0x252d68: 0x8e030ff8  lw          $v1, 0xFF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252D88u;
            goto label_252d88;
        }
    }
    ctx->pc = 0x252D6Cu;
label_252d6c:
    // 0x252d6c: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252d70:
    // 0x252d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252d74:
    // 0x252d74: 0xc08bcbe  jal         func_22F2F8
label_252d78:
    if (ctx->pc == 0x252D78u) {
        ctx->pc = 0x252D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D74u;
        // 0x252d78: 0xc44c00a0  lwc1        $f12, 0xA0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D7Cu;
        goto label_252d7c;
    }
    ctx->pc = 0x252D74u;
    SET_GPR_U32(ctx, 31, 0x252D7Cu);
    ctx->pc = 0x252D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D74u;
    // 0x252d78: 0xc44c00a0  lwc1        $f12, 0xA0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F2F8u, 0x252D74u, 0x252D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D7Cu;
label_252d7c:
    // 0x252d7c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_252d80:
    if (ctx->pc == 0x252D80u) {
        ctx->pc = 0x252D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D7Cu;
        // 0x252d80: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D84u;
        goto label_252d84;
    }
    ctx->pc = 0x252D7Cu;
    {
        const bool branch_taken_0x252d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D7Cu;
        // 0x252d80: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d7c) {
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252D84u;
label_252d84:
    // 0x252d84: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x252d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
label_252d88:
    // 0x252d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_252d8c:
    // 0x252d8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x252d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_252d90:
    // 0x252d90: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_252d94:
    if (ctx->pc == 0x252D94u) {
        ctx->pc = 0x252D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D90u;
        // 0x252d94: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D98u;
        goto label_252d98;
    }
    ctx->pc = 0x252D90u;
    {
        const bool branch_taken_0x252d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252d90) {
            ctx->pc = 0x252D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252D90u;
            // 0x252d94: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E54u;
            goto label_252e54;
        }
    }
    ctx->pc = 0x252D98u;
label_252d98:
    // 0x252d98: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x252d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252d9c:
    // 0x252d9c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_252da0:
    // 0x252da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_252da4:
    // 0x252da4: 0xc45400a0  lwc1        $f20, 0xA0($v0)
    ctx->pc = 0x252da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_252da8:
    // 0x252da8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x252da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252dac:
    // 0x252dac: 0x0  nop
    ctx->pc = 0x252dacu;
    // NOP
label_252db0:
    // 0x252db0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_252db4:
    if (ctx->pc == 0x252DB4u) {
        ctx->pc = 0x252DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB0u;
        // 0x252db4: 0x8c4200ac  lw          $v0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DB8u;
        goto label_252db8;
    }
    ctx->pc = 0x252DB0u;
    {
        const bool branch_taken_0x252db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252db0) {
            ctx->pc = 0x252DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252DB0u;
            // 0x252db4: 0x8c4200ac  lw          $v0, 0xAC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252DD8u;
            goto label_252dd8;
        }
    }
    ctx->pc = 0x252DB8u;
label_252db8:
    // 0x252db8: 0x3c01c28c  lui         $at, 0xC28C
    ctx->pc = 0x252db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49804 << 16));
label_252dbc:
    // 0x252dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_252dc0:
    // 0x252dc0: 0x0  nop
    ctx->pc = 0x252dc0u;
    // NOP
label_252dc4:
    // 0x252dc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x252dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252dc8:
    // 0x252dc8: 0x0  nop
    ctx->pc = 0x252dc8u;
    // NOP
label_252dcc:
    // 0x252dcc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_252dd0:
    if (ctx->pc == 0x252DD0u) {
        ctx->pc = 0x252DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DCCu;
        // 0x252dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DD4u;
        goto label_252dd4;
    }
    ctx->pc = 0x252DCCu;
    {
        const bool branch_taken_0x252dcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DCCu;
        // 0x252dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dcc) {
            ctx->pc = 0x252E44u;
            goto label_252e44;
        }
    }
    ctx->pc = 0x252DD4u;
label_252dd4:
    // 0x252dd4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x252dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_252dd8:
    // 0x252dd8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_252ddc:
    if (ctx->pc == 0x252DDCu) {
        ctx->pc = 0x252DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DD8u;
        // 0x252ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DE0u;
        goto label_252de0;
    }
    ctx->pc = 0x252DD8u;
    {
        const bool branch_taken_0x252dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DD8u;
        // 0x252ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dd8) {
            ctx->pc = 0x252E3Cu;
            goto label_252e3c;
        }
    }
    ctx->pc = 0x252DE0u;
label_252de0:
    // 0x252de0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x252de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_252de4:
    // 0x252de4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x252de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252de8:
    // 0x252de8: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x252de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_252dec:
    // 0x252dec: 0x40f809  jalr        $v0
label_252df0:
    if (ctx->pc == 0x252DF0u) {
        ctx->pc = 0x252DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DECu;
        // 0x252df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DF4u;
        goto label_252df4;
    }
    ctx->pc = 0x252DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252DF4u);
        ctx->pc = 0x252DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DECu;
        // 0x252df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252DECu, 0x252DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252DF4u;
label_252df4:
    // 0x252df4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_252df8:
    if (ctx->pc == 0x252DF8u) {
        ctx->pc = 0x252DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DF4u;
        // 0x252df8: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DFCu;
        goto label_252dfc;
    }
    ctx->pc = 0x252DF4u;
    {
        const bool branch_taken_0x252df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252df4) {
            ctx->pc = 0x252DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252DF4u;
            // 0x252df8: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E40u;
            goto label_252e40;
        }
    }
    ctx->pc = 0x252DFCu;
label_252dfc:
    // 0x252dfc: 0xc0619d2  jal         func_186748
label_252e00:
    if (ctx->pc == 0x252E00u) {
        ctx->pc = 0x252E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DFCu;
        // 0x252e00: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E04u;
        goto label_252e04;
    }
    ctx->pc = 0x252DFCu;
    SET_GPR_U32(ctx, 31, 0x252E04u);
    ctx->pc = 0x252E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DFCu;
    // 0x252e00: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x252DFCu, 0x252E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E04u;
label_252e04:
    // 0x252e04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_252e08:
    if (ctx->pc == 0x252E08u) {
        ctx->pc = 0x252E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E04u;
        // 0x252e08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E0Cu;
        goto label_252e0c;
    }
    ctx->pc = 0x252E04u;
    {
        const bool branch_taken_0x252e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E04u;
        // 0x252e08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e04) {
            ctx->pc = 0x252E24u;
            goto label_252e24;
        }
    }
    ctx->pc = 0x252E0Cu;
label_252e0c:
    // 0x252e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252e10:
    // 0x252e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x252e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252e14:
    // 0x252e14: 0xc08eb12  jal         func_23AC48
label_252e18:
    if (ctx->pc == 0x252E18u) {
        ctx->pc = 0x252E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E14u;
        // 0x252e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E1Cu;
        goto label_252e1c;
    }
    ctx->pc = 0x252E14u;
    SET_GPR_U32(ctx, 31, 0x252E1Cu);
    ctx->pc = 0x252E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E14u;
    // 0x252e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC48u, 0x252E14u, 0x252E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E1Cu;
label_252e1c:
    // 0x252e1c: 0x1000000d  b           . + 4 + (0xD << 2)
label_252e20:
    if (ctx->pc == 0x252E20u) {
        ctx->pc = 0x252E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E1Cu;
        // 0x252e20: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E24u;
        goto label_252e24;
    }
    ctx->pc = 0x252E1Cu;
    {
        const bool branch_taken_0x252e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E1Cu;
        // 0x252e20: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e1c) {
            ctx->pc = 0x252E54u;
            goto label_252e54;
        }
    }
    ctx->pc = 0x252E24u;
label_252e24:
    // 0x252e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252e28:
    // 0x252e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252e2c:
    // 0x252e2c: 0xc08eb12  jal         func_23AC48
label_252e30:
    if (ctx->pc == 0x252E30u) {
        ctx->pc = 0x252E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E2Cu;
        // 0x252e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E34u;
        goto label_252e34;
    }
    ctx->pc = 0x252E2Cu;
    SET_GPR_U32(ctx, 31, 0x252E34u);
    ctx->pc = 0x252E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E2Cu;
    // 0x252e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC48u, 0x252E2Cu, 0x252E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E34u;
label_252e34:
    // 0x252e34: 0x10000007  b           . + 4 + (0x7 << 2)
label_252e38:
    if (ctx->pc == 0x252E38u) {
        ctx->pc = 0x252E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E34u;
        // 0x252e38: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E3Cu;
        goto label_252e3c;
    }
    ctx->pc = 0x252E34u;
    {
        const bool branch_taken_0x252e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E34u;
        // 0x252e38: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e34) {
            ctx->pc = 0x252E54u;
            goto label_252e54;
        }
    }
    ctx->pc = 0x252E3Cu;
label_252e3c:
    // 0x252e3c: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x252e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252e40:
    // 0x252e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252e44:
    // 0x252e44: 0xc08bcbe  jal         func_22F2F8
label_252e48:
    if (ctx->pc == 0x252E48u) {
        ctx->pc = 0x252E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E44u;
        // 0x252e48: 0xc44c00a4  lwc1        $f12, 0xA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E4Cu;
        goto label_252e4c;
    }
    ctx->pc = 0x252E44u;
    SET_GPR_U32(ctx, 31, 0x252E4Cu);
    ctx->pc = 0x252E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E44u;
    // 0x252e48: 0xc44c00a4  lwc1        $f12, 0xA4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F2F8u, 0x252E44u, 0x252E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E4Cu;
label_252e4c:
    // 0x252e4c: 0x1000000b  b           . + 4 + (0xB << 2)
label_252e50:
    if (ctx->pc == 0x252E50u) {
        ctx->pc = 0x252E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E4Cu;
        // 0x252e50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E54u;
        goto label_252e54;
    }
    ctx->pc = 0x252E4Cu;
    {
        const bool branch_taken_0x252e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E4Cu;
        // 0x252e50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e4c) {
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252E54u;
label_252e54:
    // 0x252e54: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x252e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_252e58:
    // 0x252e58: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x252e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252e5c:
    // 0x252e5c: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x252e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
label_252e60:
    // 0x252e60: 0x10000005  b           . + 4 + (0x5 << 2)
label_252e64:
    if (ctx->pc == 0x252E64u) {
        ctx->pc = 0x252E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E60u;
        // 0x252e64: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E68u;
        goto label_252e68;
    }
    ctx->pc = 0x252E60u;
    {
        const bool branch_taken_0x252e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E60u;
        // 0x252e64: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e60) {
            ctx->pc = 0x252E78u;
            goto label_252e78;
        }
    }
    ctx->pc = 0x252E68u;
label_252e68:
    // 0x252e68: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x252e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_252e6c:
    // 0x252e6c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x252e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252e70:
    // 0x252e70: 0xe6000528  swc1        $f0, 0x528($s0)
    ctx->pc = 0x252e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
label_252e74:
    // 0x252e74: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x252e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
label_252e78:
    // 0x252e78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252e7c:
    // 0x252e7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x252e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_252e80:
    // 0x252e80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_252e84:
    // 0x252e84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x252e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_252e88:
    // 0x252e88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_252e8c:
    // 0x252e8c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x252e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_252e90:
    // 0x252e90: 0x3e00008  jr          $ra
label_252e94:
    if (ctx->pc == 0x252E94u) {
        ctx->pc = 0x252E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E90u;
        // 0x252e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E98u;
        goto label_fallthrough_0x252e90;
    }
    ctx->pc = 0x252E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E90u;
        // 0x252e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252e90:
    ctx->pc = 0x252E98u;
}
