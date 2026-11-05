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

// Function: sub_003A9A20
// Address: 0x3a9a20 - 0x3a9e60
void sub_003A9A20_0x3a9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9A20_0x3a9a20");
#endif

    switch (ctx->pc) {
        case 0x3a9a20u: goto label_3a9a20;
        case 0x3a9a24u: goto label_3a9a24;
        case 0x3a9a28u: goto label_3a9a28;
        case 0x3a9a2cu: goto label_3a9a2c;
        case 0x3a9a30u: goto label_3a9a30;
        case 0x3a9a34u: goto label_3a9a34;
        case 0x3a9a38u: goto label_3a9a38;
        case 0x3a9a3cu: goto label_3a9a3c;
        case 0x3a9a40u: goto label_3a9a40;
        case 0x3a9a44u: goto label_3a9a44;
        case 0x3a9a48u: goto label_3a9a48;
        case 0x3a9a4cu: goto label_3a9a4c;
        case 0x3a9a50u: goto label_3a9a50;
        case 0x3a9a54u: goto label_3a9a54;
        case 0x3a9a58u: goto label_3a9a58;
        case 0x3a9a5cu: goto label_3a9a5c;
        case 0x3a9a60u: goto label_3a9a60;
        case 0x3a9a64u: goto label_3a9a64;
        case 0x3a9a68u: goto label_3a9a68;
        case 0x3a9a6cu: goto label_3a9a6c;
        case 0x3a9a70u: goto label_3a9a70;
        case 0x3a9a74u: goto label_3a9a74;
        case 0x3a9a78u: goto label_3a9a78;
        case 0x3a9a7cu: goto label_3a9a7c;
        case 0x3a9a80u: goto label_3a9a80;
        case 0x3a9a84u: goto label_3a9a84;
        case 0x3a9a88u: goto label_3a9a88;
        case 0x3a9a8cu: goto label_3a9a8c;
        case 0x3a9a90u: goto label_3a9a90;
        case 0x3a9a94u: goto label_3a9a94;
        case 0x3a9a98u: goto label_3a9a98;
        case 0x3a9a9cu: goto label_3a9a9c;
        case 0x3a9aa0u: goto label_3a9aa0;
        case 0x3a9aa4u: goto label_3a9aa4;
        case 0x3a9aa8u: goto label_3a9aa8;
        case 0x3a9aacu: goto label_3a9aac;
        case 0x3a9ab0u: goto label_3a9ab0;
        case 0x3a9ab4u: goto label_3a9ab4;
        case 0x3a9ab8u: goto label_3a9ab8;
        case 0x3a9abcu: goto label_3a9abc;
        case 0x3a9ac0u: goto label_3a9ac0;
        case 0x3a9ac4u: goto label_3a9ac4;
        case 0x3a9ac8u: goto label_3a9ac8;
        case 0x3a9accu: goto label_3a9acc;
        case 0x3a9ad0u: goto label_3a9ad0;
        case 0x3a9ad4u: goto label_3a9ad4;
        case 0x3a9ad8u: goto label_3a9ad8;
        case 0x3a9adcu: goto label_3a9adc;
        case 0x3a9ae0u: goto label_3a9ae0;
        case 0x3a9ae4u: goto label_3a9ae4;
        case 0x3a9ae8u: goto label_3a9ae8;
        case 0x3a9aecu: goto label_3a9aec;
        case 0x3a9af0u: goto label_3a9af0;
        case 0x3a9af4u: goto label_3a9af4;
        case 0x3a9af8u: goto label_3a9af8;
        case 0x3a9afcu: goto label_3a9afc;
        case 0x3a9b00u: goto label_3a9b00;
        case 0x3a9b04u: goto label_3a9b04;
        case 0x3a9b08u: goto label_3a9b08;
        case 0x3a9b0cu: goto label_3a9b0c;
        case 0x3a9b10u: goto label_3a9b10;
        case 0x3a9b14u: goto label_3a9b14;
        case 0x3a9b18u: goto label_3a9b18;
        case 0x3a9b1cu: goto label_3a9b1c;
        case 0x3a9b20u: goto label_3a9b20;
        case 0x3a9b24u: goto label_3a9b24;
        case 0x3a9b28u: goto label_3a9b28;
        case 0x3a9b2cu: goto label_3a9b2c;
        case 0x3a9b30u: goto label_3a9b30;
        case 0x3a9b34u: goto label_3a9b34;
        case 0x3a9b38u: goto label_3a9b38;
        case 0x3a9b3cu: goto label_3a9b3c;
        case 0x3a9b40u: goto label_3a9b40;
        case 0x3a9b44u: goto label_3a9b44;
        case 0x3a9b48u: goto label_3a9b48;
        case 0x3a9b4cu: goto label_3a9b4c;
        case 0x3a9b50u: goto label_3a9b50;
        case 0x3a9b54u: goto label_3a9b54;
        case 0x3a9b58u: goto label_3a9b58;
        case 0x3a9b5cu: goto label_3a9b5c;
        case 0x3a9b60u: goto label_3a9b60;
        case 0x3a9b64u: goto label_3a9b64;
        case 0x3a9b68u: goto label_3a9b68;
        case 0x3a9b6cu: goto label_3a9b6c;
        case 0x3a9b70u: goto label_3a9b70;
        case 0x3a9b74u: goto label_3a9b74;
        case 0x3a9b78u: goto label_3a9b78;
        case 0x3a9b7cu: goto label_3a9b7c;
        case 0x3a9b80u: goto label_3a9b80;
        case 0x3a9b84u: goto label_3a9b84;
        case 0x3a9b88u: goto label_3a9b88;
        case 0x3a9b8cu: goto label_3a9b8c;
        case 0x3a9b90u: goto label_3a9b90;
        case 0x3a9b94u: goto label_3a9b94;
        case 0x3a9b98u: goto label_3a9b98;
        case 0x3a9b9cu: goto label_3a9b9c;
        case 0x3a9ba0u: goto label_3a9ba0;
        case 0x3a9ba4u: goto label_3a9ba4;
        case 0x3a9ba8u: goto label_3a9ba8;
        case 0x3a9bacu: goto label_3a9bac;
        case 0x3a9bb0u: goto label_3a9bb0;
        case 0x3a9bb4u: goto label_3a9bb4;
        case 0x3a9bb8u: goto label_3a9bb8;
        case 0x3a9bbcu: goto label_3a9bbc;
        case 0x3a9bc0u: goto label_3a9bc0;
        case 0x3a9bc4u: goto label_3a9bc4;
        case 0x3a9bc8u: goto label_3a9bc8;
        case 0x3a9bccu: goto label_3a9bcc;
        case 0x3a9bd0u: goto label_3a9bd0;
        case 0x3a9bd4u: goto label_3a9bd4;
        case 0x3a9bd8u: goto label_3a9bd8;
        case 0x3a9bdcu: goto label_3a9bdc;
        case 0x3a9be0u: goto label_3a9be0;
        case 0x3a9be4u: goto label_3a9be4;
        case 0x3a9be8u: goto label_3a9be8;
        case 0x3a9becu: goto label_3a9bec;
        case 0x3a9bf0u: goto label_3a9bf0;
        case 0x3a9bf4u: goto label_3a9bf4;
        case 0x3a9bf8u: goto label_3a9bf8;
        case 0x3a9bfcu: goto label_3a9bfc;
        case 0x3a9c00u: goto label_3a9c00;
        case 0x3a9c04u: goto label_3a9c04;
        case 0x3a9c08u: goto label_3a9c08;
        case 0x3a9c0cu: goto label_3a9c0c;
        case 0x3a9c10u: goto label_3a9c10;
        case 0x3a9c14u: goto label_3a9c14;
        case 0x3a9c18u: goto label_3a9c18;
        case 0x3a9c1cu: goto label_3a9c1c;
        case 0x3a9c20u: goto label_3a9c20;
        case 0x3a9c24u: goto label_3a9c24;
        case 0x3a9c28u: goto label_3a9c28;
        case 0x3a9c2cu: goto label_3a9c2c;
        case 0x3a9c30u: goto label_3a9c30;
        case 0x3a9c34u: goto label_3a9c34;
        case 0x3a9c38u: goto label_3a9c38;
        case 0x3a9c3cu: goto label_3a9c3c;
        case 0x3a9c40u: goto label_3a9c40;
        case 0x3a9c44u: goto label_3a9c44;
        case 0x3a9c48u: goto label_3a9c48;
        case 0x3a9c4cu: goto label_3a9c4c;
        case 0x3a9c50u: goto label_3a9c50;
        case 0x3a9c54u: goto label_3a9c54;
        case 0x3a9c58u: goto label_3a9c58;
        case 0x3a9c5cu: goto label_3a9c5c;
        case 0x3a9c60u: goto label_3a9c60;
        case 0x3a9c64u: goto label_3a9c64;
        case 0x3a9c68u: goto label_3a9c68;
        case 0x3a9c6cu: goto label_3a9c6c;
        case 0x3a9c70u: goto label_3a9c70;
        case 0x3a9c74u: goto label_3a9c74;
        case 0x3a9c78u: goto label_3a9c78;
        case 0x3a9c7cu: goto label_3a9c7c;
        case 0x3a9c80u: goto label_3a9c80;
        case 0x3a9c84u: goto label_3a9c84;
        case 0x3a9c88u: goto label_3a9c88;
        case 0x3a9c8cu: goto label_3a9c8c;
        case 0x3a9c90u: goto label_3a9c90;
        case 0x3a9c94u: goto label_3a9c94;
        case 0x3a9c98u: goto label_3a9c98;
        case 0x3a9c9cu: goto label_3a9c9c;
        case 0x3a9ca0u: goto label_3a9ca0;
        case 0x3a9ca4u: goto label_3a9ca4;
        case 0x3a9ca8u: goto label_3a9ca8;
        case 0x3a9cacu: goto label_3a9cac;
        case 0x3a9cb0u: goto label_3a9cb0;
        case 0x3a9cb4u: goto label_3a9cb4;
        case 0x3a9cb8u: goto label_3a9cb8;
        case 0x3a9cbcu: goto label_3a9cbc;
        case 0x3a9cc0u: goto label_3a9cc0;
        case 0x3a9cc4u: goto label_3a9cc4;
        case 0x3a9cc8u: goto label_3a9cc8;
        case 0x3a9cccu: goto label_3a9ccc;
        case 0x3a9cd0u: goto label_3a9cd0;
        case 0x3a9cd4u: goto label_3a9cd4;
        case 0x3a9cd8u: goto label_3a9cd8;
        case 0x3a9cdcu: goto label_3a9cdc;
        case 0x3a9ce0u: goto label_3a9ce0;
        case 0x3a9ce4u: goto label_3a9ce4;
        case 0x3a9ce8u: goto label_3a9ce8;
        case 0x3a9cecu: goto label_3a9cec;
        case 0x3a9cf0u: goto label_3a9cf0;
        case 0x3a9cf4u: goto label_3a9cf4;
        case 0x3a9cf8u: goto label_3a9cf8;
        case 0x3a9cfcu: goto label_3a9cfc;
        case 0x3a9d00u: goto label_3a9d00;
        case 0x3a9d04u: goto label_3a9d04;
        case 0x3a9d08u: goto label_3a9d08;
        case 0x3a9d0cu: goto label_3a9d0c;
        case 0x3a9d10u: goto label_3a9d10;
        case 0x3a9d14u: goto label_3a9d14;
        case 0x3a9d18u: goto label_3a9d18;
        case 0x3a9d1cu: goto label_3a9d1c;
        case 0x3a9d20u: goto label_3a9d20;
        case 0x3a9d24u: goto label_3a9d24;
        case 0x3a9d28u: goto label_3a9d28;
        case 0x3a9d2cu: goto label_3a9d2c;
        case 0x3a9d30u: goto label_3a9d30;
        case 0x3a9d34u: goto label_3a9d34;
        case 0x3a9d38u: goto label_3a9d38;
        case 0x3a9d3cu: goto label_3a9d3c;
        case 0x3a9d40u: goto label_3a9d40;
        case 0x3a9d44u: goto label_3a9d44;
        case 0x3a9d48u: goto label_3a9d48;
        case 0x3a9d4cu: goto label_3a9d4c;
        case 0x3a9d50u: goto label_3a9d50;
        case 0x3a9d54u: goto label_3a9d54;
        case 0x3a9d58u: goto label_3a9d58;
        case 0x3a9d5cu: goto label_3a9d5c;
        case 0x3a9d60u: goto label_3a9d60;
        case 0x3a9d64u: goto label_3a9d64;
        case 0x3a9d68u: goto label_3a9d68;
        case 0x3a9d6cu: goto label_3a9d6c;
        case 0x3a9d70u: goto label_3a9d70;
        case 0x3a9d74u: goto label_3a9d74;
        case 0x3a9d78u: goto label_3a9d78;
        case 0x3a9d7cu: goto label_3a9d7c;
        case 0x3a9d80u: goto label_3a9d80;
        case 0x3a9d84u: goto label_3a9d84;
        case 0x3a9d88u: goto label_3a9d88;
        case 0x3a9d8cu: goto label_3a9d8c;
        case 0x3a9d90u: goto label_3a9d90;
        case 0x3a9d94u: goto label_3a9d94;
        case 0x3a9d98u: goto label_3a9d98;
        case 0x3a9d9cu: goto label_3a9d9c;
        case 0x3a9da0u: goto label_3a9da0;
        case 0x3a9da4u: goto label_3a9da4;
        case 0x3a9da8u: goto label_3a9da8;
        case 0x3a9dacu: goto label_3a9dac;
        case 0x3a9db0u: goto label_3a9db0;
        case 0x3a9db4u: goto label_3a9db4;
        case 0x3a9db8u: goto label_3a9db8;
        case 0x3a9dbcu: goto label_3a9dbc;
        case 0x3a9dc0u: goto label_3a9dc0;
        case 0x3a9dc4u: goto label_3a9dc4;
        case 0x3a9dc8u: goto label_3a9dc8;
        case 0x3a9dccu: goto label_3a9dcc;
        case 0x3a9dd0u: goto label_3a9dd0;
        case 0x3a9dd4u: goto label_3a9dd4;
        case 0x3a9dd8u: goto label_3a9dd8;
        case 0x3a9ddcu: goto label_3a9ddc;
        case 0x3a9de0u: goto label_3a9de0;
        case 0x3a9de4u: goto label_3a9de4;
        case 0x3a9de8u: goto label_3a9de8;
        case 0x3a9decu: goto label_3a9dec;
        case 0x3a9df0u: goto label_3a9df0;
        case 0x3a9df4u: goto label_3a9df4;
        case 0x3a9df8u: goto label_3a9df8;
        case 0x3a9dfcu: goto label_3a9dfc;
        case 0x3a9e00u: goto label_3a9e00;
        case 0x3a9e04u: goto label_3a9e04;
        case 0x3a9e08u: goto label_3a9e08;
        case 0x3a9e0cu: goto label_3a9e0c;
        case 0x3a9e10u: goto label_3a9e10;
        case 0x3a9e14u: goto label_3a9e14;
        case 0x3a9e18u: goto label_3a9e18;
        case 0x3a9e1cu: goto label_3a9e1c;
        case 0x3a9e20u: goto label_3a9e20;
        case 0x3a9e24u: goto label_3a9e24;
        case 0x3a9e28u: goto label_3a9e28;
        case 0x3a9e2cu: goto label_3a9e2c;
        case 0x3a9e30u: goto label_3a9e30;
        case 0x3a9e34u: goto label_3a9e34;
        case 0x3a9e38u: goto label_3a9e38;
        case 0x3a9e3cu: goto label_3a9e3c;
        case 0x3a9e40u: goto label_3a9e40;
        case 0x3a9e44u: goto label_3a9e44;
        case 0x3a9e48u: goto label_3a9e48;
        case 0x3a9e4cu: goto label_3a9e4c;
        case 0x3a9e50u: goto label_3a9e50;
        case 0x3a9e54u: goto label_3a9e54;
        case 0x3a9e58u: goto label_3a9e58;
        case 0x3a9e5cu: goto label_3a9e5c;
        default: break;
    }

    ctx->pc = 0x3a9a20u;

label_3a9a20:
    // 0x3a9a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a9a24:
    // 0x3a9a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9a28:
    // 0x3a9a28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3a9a2c:
    // 0x3a9a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a9a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a30:
    // 0x3a9a30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a9a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3a9a34:
    // 0x3a9a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a9a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3a9a38:
    // 0x3a9a38: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3a9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3a9a3c:
    // 0x3a9a3c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3a9a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_3a9a40:
    // 0x3a9a40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3a9a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_3a9a44:
    // 0x3a9a44: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x3a9a44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_3a9a48:
    // 0x3a9a48: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_3a9a4c:
    if (ctx->pc == 0x3A9A4Cu) {
        ctx->pc = 0x3A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A48u;
        // 0x3a9a4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A50u;
        goto label_3a9a50;
    }
    ctx->pc = 0x3A9A48u;
    {
        const bool branch_taken_0x3a9a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A48u;
        // 0x3a9a4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a48) {
            ctx->pc = 0x3A9BC0u;
            goto label_3a9bc0;
        }
    }
    ctx->pc = 0x3A9A50u;
label_3a9a50:
    // 0x3a9a50: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x3a9a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_3a9a54:
    // 0x3a9a54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a9a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a58:
    // 0x3a9a58: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x3a9a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_3a9a5c:
    // 0x3a9a5c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_3a9a60:
    if (ctx->pc == 0x3A9A60u) {
        ctx->pc = 0x3A9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A5Cu;
        // 0x3a9a60: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A64u;
        goto label_3a9a64;
    }
    ctx->pc = 0x3A9A5Cu;
    {
        const bool branch_taken_0x3a9a5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A5Cu;
        // 0x3a9a60: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a5c) {
            ctx->pc = 0x3A9AC0u;
            goto label_3a9ac0;
        }
    }
    ctx->pc = 0x3A9A64u;
label_3a9a64:
    // 0x3a9a64: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3a9a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9a68:
    // 0x3a9a68: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3a9a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3a9a6c:
    // 0x3a9a6c: 0x0  nop
    ctx->pc = 0x3a9a6cu;
    // NOP
label_3a9a70:
    // 0x3a9a70: 0xc0ecd12  jal         func_3B3448
label_3a9a74:
    if (ctx->pc == 0x3A9A74u) {
        ctx->pc = 0x3A9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A70u;
        // 0x3a9a74: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A78u;
        goto label_3a9a78;
    }
    ctx->pc = 0x3A9A70u;
    SET_GPR_U32(ctx, 31, 0x3A9A78u);
    ctx->pc = 0x3A9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A70u;
    // 0x3a9a74: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3448u, 0x3A9A70u, 0x3A9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A78u;
label_3a9a78:
    // 0x3a9a78: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
label_3a9a7c:
    if (ctx->pc == 0x3A9A7Cu) {
        ctx->pc = 0x3A9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A78u;
        // 0x3a9a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A80u;
        goto label_3a9a80;
    }
    ctx->pc = 0x3A9A78u;
    {
        const bool branch_taken_0x3a9a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3A9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A78u;
        // 0x3a9a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a78) {
            ctx->pc = 0x3A9AA8u;
            goto label_3a9aa8;
        }
    }
    ctx->pc = 0x3A9A80u;
label_3a9a80:
    // 0x3a9a80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9a84:
    // 0x3a9a84: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a9a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a9a88:
    // 0x3a9a88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9a8c:
    // 0x3a9a8c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a9a90:
    // 0x3a9a90: 0x40f809  jalr        $v0
label_3a9a94:
    if (ctx->pc == 0x3A9A94u) {
        ctx->pc = 0x3A9A98u;
        goto label_3a9a98;
    }
    ctx->pc = 0x3A9A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9A98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9A90u, 0x3A9A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9A98u;
label_3a9a98:
    // 0x3a9a98: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x3a9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3a9a9c:
    // 0x3a9a9c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x3a9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a9aa0:
    // 0x3a9aa0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3a9aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3a9aa4:
    // 0x3a9aa4: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x3a9aa4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_3a9aa8:
    // 0x3a9aa8: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x3a9aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_3a9aac:
    // 0x3a9aac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a9aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a9ab0:
    // 0x3a9ab0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3a9ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3a9ab4:
    // 0x3a9ab4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a9ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a9ab8:
    // 0x3a9ab8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_3a9abc:
    if (ctx->pc == 0x3A9ABCu) {
        ctx->pc = 0x3A9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AB8u;
        // 0x3a9abc: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AC0u;
        goto label_3a9ac0;
    }
    ctx->pc = 0x3A9AB8u;
    {
        const bool branch_taken_0x3a9ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AB8u;
        // 0x3a9abc: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ab8) {
            ctx->pc = 0x3A9A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9a70;
        }
    }
    ctx->pc = 0x3A9AC0u;
label_3a9ac0:
    // 0x3a9ac0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3a9ac4:
    // 0x3a9ac4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a9ac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3a9ac8:
    // 0x3a9ac8: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
label_3a9acc:
    if (ctx->pc == 0x3A9ACCu) {
        ctx->pc = 0x3A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AC8u;
        // 0x3a9acc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AD0u;
        goto label_3a9ad0;
    }
    ctx->pc = 0x3A9AC8u;
    {
        const bool branch_taken_0x3a9ac8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AC8u;
        // 0x3a9acc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ac8) {
            ctx->pc = 0x3A9BC0u;
            goto label_3a9bc0;
        }
    }
    ctx->pc = 0x3A9AD0u;
label_3a9ad0:
    // 0x3a9ad0: 0x1a40003b  blez        $s2, . + 4 + (0x3B << 2)
label_3a9ad4:
    if (ctx->pc == 0x3A9AD4u) {
        ctx->pc = 0x3A9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AD0u;
        // 0x3a9ad4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AD8u;
        goto label_3a9ad8;
    }
    ctx->pc = 0x3A9AD0u;
    {
        const bool branch_taken_0x3a9ad0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3A9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AD0u;
        // 0x3a9ad4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ad0) {
            ctx->pc = 0x3A9BC0u;
            goto label_3a9bc0;
        }
    }
    ctx->pc = 0x3A9AD8u;
label_3a9ad8:
    // 0x3a9ad8: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x3a9ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3a9adc:
    // 0x3a9adc: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3a9adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3a9ae0:
    // 0x3a9ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9ae4:
    // 0x3a9ae4: 0x0  nop
    ctx->pc = 0x3a9ae4u;
    // NOP
label_3a9ae8:
    // 0x3a9ae8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3a9ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3a9aec:
    // 0x3a9aec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3a9aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9af0:
    // 0x3a9af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9af4:
    // 0x3a9af4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a9af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a9af8:
    // 0x3a9af8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9afc:
    // 0x3a9afc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a9b00:
    // 0x3a9b00: 0x40f809  jalr        $v0
label_3a9b04:
    if (ctx->pc == 0x3A9B04u) {
        ctx->pc = 0x3A9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B00u;
        // 0x3a9b04: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B08u;
        goto label_3a9b08;
    }
    ctx->pc = 0x3A9B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9B08u);
        ctx->pc = 0x3A9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B00u;
        // 0x3a9b04: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9B00u, 0x3A9B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9B08u;
label_3a9b08:
    // 0x3a9b08: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3a9b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9b0c:
    // 0x3a9b0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a9b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a9b10:
    // 0x3a9b10: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x3a9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3a9b14:
    // 0x3a9b14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9b18:
    // 0x3a9b18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a9b1c:
    // 0x3a9b1c: 0x40f809  jalr        $v0
label_3a9b20:
    if (ctx->pc == 0x3A9B20u) {
        ctx->pc = 0x3A9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B1Cu;
        // 0x3a9b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B24u;
        goto label_3a9b24;
    }
    ctx->pc = 0x3A9B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9B24u);
        ctx->pc = 0x3A9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B1Cu;
        // 0x3a9b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9B1Cu, 0x3A9B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9B24u;
label_3a9b24:
    // 0x3a9b24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9b28:
    // 0x3a9b28: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3a9b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3a9b2c:
    // 0x3a9b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9b30:
    // 0x3a9b30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3a9b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3a9b34:
    // 0x3a9b34: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a9b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3a9b38:
    // 0x3a9b38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9b3c:
    // 0x3a9b3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a9b40:
    // 0x3a9b40: 0x40f809  jalr        $v0
label_3a9b44:
    if (ctx->pc == 0x3A9B44u) {
        ctx->pc = 0x3A9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B40u;
        // 0x3a9b44: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B48u;
        goto label_3a9b48;
    }
    ctx->pc = 0x3A9B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9B48u);
        ctx->pc = 0x3A9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B40u;
        // 0x3a9b44: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9B40u, 0x3A9B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9B48u;
label_3a9b48:
    // 0x3a9b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9b4c:
    // 0x3a9b4c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3a9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a9b50:
    // 0x3a9b50: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3a9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3a9b54:
    // 0x3a9b54: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3a9b58:
    if (ctx->pc == 0x3A9B58u) {
        ctx->pc = 0x3A9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B54u;
        // 0x3a9b58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B5Cu;
        goto label_3a9b5c;
    }
    ctx->pc = 0x3A9B54u;
    {
        const bool branch_taken_0x3a9b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B54u;
        // 0x3a9b58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b54) {
            ctx->pc = 0x3A9B80u;
            goto label_3a9b80;
        }
    }
    ctx->pc = 0x3A9B5Cu;
label_3a9b5c:
    // 0x3a9b5c: 0x0  nop
    ctx->pc = 0x3a9b5cu;
    // NOP
label_3a9b60:
    // 0x3a9b60: 0x0  nop
    ctx->pc = 0x3a9b60u;
    // NOP
label_3a9b64:
    // 0x3a9b64: 0x0  nop
    ctx->pc = 0x3a9b64u;
    // NOP
label_3a9b68:
    // 0x3a9b68: 0x0  nop
    ctx->pc = 0x3a9b68u;
    // NOP
label_3a9b6c:
    // 0x3a9b6c: 0x0  nop
    ctx->pc = 0x3a9b6cu;
    // NOP
label_3a9b70:
    // 0x3a9b70: 0x0  nop
    ctx->pc = 0x3a9b70u;
    // NOP
label_3a9b74:
    // 0x3a9b74: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a9b78:
    if (ctx->pc == 0x3A9B78u) {
        ctx->pc = 0x3A9B7Cu;
        goto label_3a9b7c;
    }
    ctx->pc = 0x3A9B74u;
    {
        const bool branch_taken_0x3a9b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9b74) {
            ctx->pc = 0x3A9B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9b60;
        }
    }
    ctx->pc = 0x3A9B7Cu;
label_3a9b7c:
    // 0x3a9b7c: 0x0  nop
    ctx->pc = 0x3a9b7cu;
    // NOP
label_3a9b80:
    // 0x3a9b80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9b84:
    // 0x3a9b84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3a9b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3a9b88:
    // 0x3a9b88: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a9b8c:
    // 0x3a9b8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a9b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a9b90:
    // 0x3a9b90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a9b94:
    // 0x3a9b94: 0x40f809  jalr        $v0
label_3a9b98:
    if (ctx->pc == 0x3A9B98u) {
        ctx->pc = 0x3A9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B94u;
        // 0x3a9b98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B9Cu;
        goto label_3a9b9c;
    }
    ctx->pc = 0x3A9B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9B9Cu);
        ctx->pc = 0x3A9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B94u;
        // 0x3a9b98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9B94u, 0x3A9B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9B9Cu;
label_3a9b9c:
    // 0x3a9b9c: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x3a9b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
label_3a9ba0:
    // 0x3a9ba0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a9ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a9ba4:
    // 0x3a9ba4: 0xc0ecd8a  jal         func_3B3628
label_3a9ba8:
    if (ctx->pc == 0x3A9BA8u) {
        ctx->pc = 0x3A9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BA4u;
        // 0x3a9ba8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BACu;
        goto label_3a9bac;
    }
    ctx->pc = 0x3A9BA4u;
    SET_GPR_U32(ctx, 31, 0x3A9BACu);
    ctx->pc = 0x3A9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9BA4u;
    // 0x3a9ba8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3628u, 0x3A9BA4u, 0x3A9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9BACu;
label_3a9bac:
    // 0x3a9bac: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x3a9bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_3a9bb0:
    // 0x3a9bb0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a9bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a9bb4:
    // 0x3a9bb4: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_3a9bb8:
    if (ctx->pc == 0x3A9BB8u) {
        ctx->pc = 0x3A9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BB4u;
        // 0x3a9bb8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BBCu;
        goto label_3a9bbc;
    }
    ctx->pc = 0x3A9BB4u;
    {
        const bool branch_taken_0x3a9bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9bb4) {
            ctx->pc = 0x3A9BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9BB4u;
            // 0x3a9bb8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9ae8;
        }
    }
    ctx->pc = 0x3A9BBCu;
label_3a9bbc:
    // 0x3a9bbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a9bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9bc0:
    // 0x3a9bc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a9bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a9bc4:
    // 0x3a9bc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a9bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9bc8:
    // 0x3a9bc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a9bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3a9bcc:
    // 0x3a9bcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3a9bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a9bd0:
    // 0x3a9bd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a9bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3a9bd4:
    // 0x3a9bd4: 0x3e00008  jr          $ra
label_3a9bd8:
    if (ctx->pc == 0x3A9BD8u) {
        ctx->pc = 0x3A9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BD4u;
        // 0x3a9bd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BDCu;
        goto label_3a9bdc;
    }
    ctx->pc = 0x3A9BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BD4u;
        // 0x3a9bd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9BDCu;
label_3a9bdc:
    // 0x3a9bdc: 0x0  nop
    ctx->pc = 0x3a9bdcu;
    // NOP
label_3a9be0:
    // 0x3a9be0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9be4:
    // 0x3a9be4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a9be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a9be8:
    // 0x3a9be8: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9bec:
    // 0x3a9bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9bf0:
    // 0x3a9bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a9bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a9bf4:
    // 0x3a9bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a9bf8:
    // 0x3a9bf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a9bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3a9bfc:
    // 0x3a9bfc: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_3a9c00:
    if (ctx->pc == 0x3A9C00u) {
        ctx->pc = 0x3A9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BFCu;
        // 0x3a9c00: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C04u;
        goto label_3a9c04;
    }
    ctx->pc = 0x3A9BFCu;
    {
        const bool branch_taken_0x3a9bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BFCu;
        // 0x3a9c00: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bfc) {
            ctx->pc = 0x3A9C14u;
            goto label_3a9c14;
        }
    }
    ctx->pc = 0x3A9C04u;
label_3a9c04:
    // 0x3a9c04: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9c08:
    // 0x3a9c08: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9c0c:
    // 0x3a9c0c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_3a9c10:
    if (ctx->pc == 0x3A9C10u) {
        ctx->pc = 0x3A9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C0Cu;
        // 0x3a9c10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C14u;
        goto label_3a9c14;
    }
    ctx->pc = 0x3A9C0Cu;
    {
        const bool branch_taken_0x3a9c0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C0Cu;
        // 0x3a9c10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c0c) {
            ctx->pc = 0x3A9C70u;
            goto label_3a9c70;
        }
    }
    ctx->pc = 0x3A9C14u;
label_3a9c14:
    // 0x3a9c14: 0xc0ea7b2  jal         func_3A9EC8
label_3a9c18:
    if (ctx->pc == 0x3A9C18u) {
        ctx->pc = 0x3A9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C14u;
        // 0x3a9c18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C1Cu;
        goto label_3a9c1c;
    }
    ctx->pc = 0x3A9C14u;
    SET_GPR_U32(ctx, 31, 0x3A9C1Cu);
    ctx->pc = 0x3A9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9C14u;
    // 0x3a9c18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9EC8u, 0x3A9C14u, 0x3A9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9C1Cu;
label_3a9c1c:
    // 0x3a9c1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9c20:
    // 0x3a9c20: 0x2450c528  addiu       $s0, $v0, -0x3AD8
    ctx->pc = 0x3a9c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952232));
label_3a9c24:
    // 0x3a9c24: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x3a9c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a9c28:
    // 0x3a9c28: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a9c28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3a9c2c:
    // 0x3a9c2c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_3a9c30:
    if (ctx->pc == 0x3A9C30u) {
        ctx->pc = 0x3A9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C2Cu;
        // 0x3a9c30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C34u;
        goto label_3a9c34;
    }
    ctx->pc = 0x3A9C2Cu;
    {
        const bool branch_taken_0x3a9c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a9c2c) {
            ctx->pc = 0x3A9C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9C2Cu;
            // 0x3a9c30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9C40u;
            goto label_3a9c40;
        }
    }
    ctx->pc = 0x3A9C34u;
label_3a9c34:
    // 0x3a9c34: 0xc0ea688  jal         func_3A9A20
label_3a9c38:
    if (ctx->pc == 0x3A9C38u) {
        ctx->pc = 0x3A9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C34u;
        // 0x3a9c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C3Cu;
        goto label_3a9c3c;
    }
    ctx->pc = 0x3A9C34u;
    SET_GPR_U32(ctx, 31, 0x3A9C3Cu);
    ctx->pc = 0x3A9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9C34u;
    // 0x3a9c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9A20u;
    goto label_3a9a20;
    ctx->pc = 0x3A9C3Cu;
label_3a9c3c:
    // 0x3a9c3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a9c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a9c40:
    // 0x3a9c40: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_3a9c44:
    if (ctx->pc == 0x3A9C44u) {
        ctx->pc = 0x3A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C40u;
        // 0x3a9c44: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C48u;
        goto label_3a9c48;
    }
    ctx->pc = 0x3A9C40u;
    {
        const bool branch_taken_0x3a9c40 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C40u;
        // 0x3a9c44: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c40) {
            ctx->pc = 0x3A9C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9c28;
        }
    }
    ctx->pc = 0x3A9C48u;
label_3a9c48:
    // 0x3a9c48: 0xc0ea7b8  jal         func_3A9EE0
label_3a9c4c:
    if (ctx->pc == 0x3A9C4Cu) {
        ctx->pc = 0x3A9C50u;
        goto label_3a9c50;
    }
    ctx->pc = 0x3A9C48u;
    SET_GPR_U32(ctx, 31, 0x3A9C50u);
    ctx->pc = 0x3A9EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9EE0u, 0x3A9C48u, 0x3A9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9C50u;
label_3a9c50:
    // 0x3a9c50: 0xc0ecd14  jal         func_3B3450
label_3a9c54:
    if (ctx->pc == 0x3A9C54u) {
        ctx->pc = 0x3A9C58u;
        goto label_3a9c58;
    }
    ctx->pc = 0x3A9C50u;
    SET_GPR_U32(ctx, 31, 0x3A9C58u);
    ctx->pc = 0x3B3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3450u, 0x3A9C50u, 0x3A9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9C58u;
label_3a9c58:
    // 0x3a9c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a9c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9c5c:
    // 0x3a9c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a9c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a9c60:
    // 0x3a9c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a9c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9c64:
    // 0x3a9c64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a9c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a9c68:
    // 0x3a9c68: 0x80eb158  j           func_3AC560
label_3a9c6c:
    if (ctx->pc == 0x3A9C6Cu) {
        ctx->pc = 0x3A9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C68u;
        // 0x3a9c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C70u;
        goto label_3a9c70;
    }
    ctx->pc = 0x3A9C68u;
    ctx->pc = 0x3A9C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9C68u;
    // 0x3a9c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC560u, 0x3A9C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A9C70u;
label_3a9c70:
    // 0x3a9c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a9c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a9c74:
    // 0x3a9c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a9c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9c78:
    // 0x3a9c78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a9c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a9c7c:
    // 0x3a9c7c: 0x3e00008  jr          $ra
label_3a9c80:
    if (ctx->pc == 0x3A9C80u) {
        ctx->pc = 0x3A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C7Cu;
        // 0x3a9c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C84u;
        goto label_3a9c84;
    }
    ctx->pc = 0x3A9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C7Cu;
        // 0x3a9c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9C84u;
label_3a9c84:
    // 0x3a9c84: 0x0  nop
    ctx->pc = 0x3a9c84u;
    // NOP
label_3a9c88:
    // 0x3a9c88: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9c8c:
    // 0x3a9c8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a9c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9c90:
    // 0x3a9c90: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9c94:
    // 0x3a9c94: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_3a9c98:
    if (ctx->pc == 0x3A9C98u) {
        ctx->pc = 0x3A9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C94u;
        // 0x3a9c98: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C9Cu;
        goto label_3a9c9c;
    }
    ctx->pc = 0x3A9C94u;
    {
        const bool branch_taken_0x3a9c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3a9c94) {
            ctx->pc = 0x3A9C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9C94u;
            // 0x3a9c98: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9CACu;
            goto label_3a9cac;
        }
    }
    ctx->pc = 0x3A9C9Cu;
label_3a9c9c:
    // 0x3a9c9c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9ca0:
    // 0x3a9ca0: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9ca4:
    // 0x3a9ca4: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_3a9ca8:
    if (ctx->pc == 0x3A9CA8u) {
        ctx->pc = 0x3A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CA4u;
        // 0x3a9ca8: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CACu;
        goto label_3a9cac;
    }
    ctx->pc = 0x3A9CA4u;
    {
        const bool branch_taken_0x3a9ca4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3a9ca4) {
            ctx->pc = 0x3A9CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9CA4u;
            // 0x3a9ca8: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9CACu;
            goto label_3a9cac;
        }
    }
    ctx->pc = 0x3A9CACu;
label_3a9cac:
    // 0x3a9cac: 0x3e00008  jr          $ra
label_3a9cb0:
    if (ctx->pc == 0x3A9CB0u) {
        ctx->pc = 0x3A9CB4u;
        goto label_3a9cb4;
    }
    ctx->pc = 0x3A9CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9CB4u;
label_3a9cb4:
    // 0x3a9cb4: 0x0  nop
    ctx->pc = 0x3a9cb4u;
    // NOP
label_3a9cb8:
    // 0x3a9cb8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9cbc:
    // 0x3a9cbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a9cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a9cc0:
    // 0x3a9cc0: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9cc4:
    // 0x3a9cc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a9cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9cc8:
    // 0x3a9cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a9cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a9ccc:
    // 0x3a9ccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a9cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9cd0:
    // 0x3a9cd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a9cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a9cd4:
    // 0x3a9cd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a9cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9cd8:
    // 0x3a9cd8: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_3a9cdc:
    if (ctx->pc == 0x3A9CDCu) {
        ctx->pc = 0x3A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CD8u;
        // 0x3a9cdc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CE0u;
        goto label_3a9ce0;
    }
    ctx->pc = 0x3A9CD8u;
    {
        const bool branch_taken_0x3a9cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CD8u;
        // 0x3a9cdc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cd8) {
            ctx->pc = 0x3A9CF0u;
            goto label_3a9cf0;
        }
    }
    ctx->pc = 0x3A9CE0u;
label_3a9ce0:
    // 0x3a9ce0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9ce4:
    // 0x3a9ce4: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9ce8:
    // 0x3a9ce8: 0x5860000d  blezl       $v1, . + 4 + (0xD << 2)
label_3a9cec:
    if (ctx->pc == 0x3A9CECu) {
        ctx->pc = 0x3A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CE8u;
        // 0x3a9cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CF0u;
        goto label_3a9cf0;
    }
    ctx->pc = 0x3A9CE8u;
    {
        const bool branch_taken_0x3a9ce8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3a9ce8) {
            ctx->pc = 0x3A9CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9CE8u;
            // 0x3a9cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9D20u;
            goto label_3a9d20;
        }
    }
    ctx->pc = 0x3A9CF0u;
label_3a9cf0:
    // 0x3a9cf0: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x3a9cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_3a9cf4:
    // 0x3a9cf4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_3a9cf8:
    if (ctx->pc == 0x3A9CF8u) {
        ctx->pc = 0x3A9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CF4u;
        // 0x3a9cf8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CFCu;
        goto label_3a9cfc;
    }
    ctx->pc = 0x3A9CF4u;
    {
        const bool branch_taken_0x3a9cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9cf4) {
            ctx->pc = 0x3A9CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9CF4u;
            // 0x3a9cf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9CFCu;
            goto label_3a9cfc;
        }
    }
    ctx->pc = 0x3A9CFCu;
label_3a9cfc:
    // 0x3a9cfc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x3a9cfcu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3a9d00:
    // 0x3a9d00: 0x1810  mfhi        $v1
    ctx->pc = 0x3a9d00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3a9d04:
    // 0x3a9d04: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3a9d08:
    if (ctx->pc == 0x3A9D08u) {
        ctx->pc = 0x3A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D04u;
        // 0x3a9d08: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D0Cu;
        goto label_3a9d0c;
    }
    ctx->pc = 0x3A9D04u;
    {
        const bool branch_taken_0x3a9d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9d04) {
            ctx->pc = 0x3A9D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9D04u;
            // 0x3a9d08: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9D1Cu;
            goto label_3a9d1c;
        }
    }
    ctx->pc = 0x3A9D0Cu;
label_3a9d0c:
    // 0x3a9d0c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a9d10:
    // 0x3a9d10: 0xc0e5ea0  jal         func_397A80
label_3a9d14:
    if (ctx->pc == 0x3A9D14u) {
        ctx->pc = 0x3A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D10u;
        // 0x3a9d14: 0x2484ebf8  addiu       $a0, $a0, -0x1408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D18u;
        goto label_3a9d18;
    }
    ctx->pc = 0x3A9D10u;
    SET_GPR_U32(ctx, 31, 0x3A9D18u);
    ctx->pc = 0x3A9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D10u;
    // 0x3a9d14: 0x2484ebf8  addiu       $a0, $a0, -0x1408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A9D10u, 0x3A9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D18u;
label_3a9d18:
    // 0x3a9d18: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x3a9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_3a9d1c:
    // 0x3a9d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a9d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9d20:
    // 0x3a9d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a9d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a9d24:
    // 0x3a9d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9d28:
    // 0x3a9d28: 0x3e00008  jr          $ra
label_3a9d2c:
    if (ctx->pc == 0x3A9D2Cu) {
        ctx->pc = 0x3A9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D28u;
        // 0x3a9d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D30u;
        goto label_3a9d30;
    }
    ctx->pc = 0x3A9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D28u;
        // 0x3a9d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9D30u;
label_3a9d30:
    // 0x3a9d30: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9d34:
    // 0x3a9d34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a9d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9d38:
    // 0x3a9d38: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9d3c:
    // 0x3a9d3c: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x3a9d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3a9d40:
    // 0x3a9d40: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_3a9d44:
    if (ctx->pc == 0x3A9D44u) {
        ctx->pc = 0x3A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D40u;
        // 0x3a9d44: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D48u;
        goto label_3a9d48;
    }
    ctx->pc = 0x3A9D40u;
    {
        const bool branch_taken_0x3a9d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D40u;
        // 0x3a9d44: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d40) {
            ctx->pc = 0x3A9D58u;
            goto label_3a9d58;
        }
    }
    ctx->pc = 0x3A9D48u;
label_3a9d48:
    // 0x3a9d48: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9d4c:
    // 0x3a9d4c: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9d50:
    // 0x3a9d50: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9d54:
    if (ctx->pc == 0x3A9D54u) {
        ctx->pc = 0x3A9D58u;
        goto label_3a9d58;
    }
    ctx->pc = 0x3A9D50u;
    {
        const bool branch_taken_0x3a9d50 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3a9d50) {
            ctx->pc = 0x3A9D68u;
            goto label_3a9d68;
        }
    }
    ctx->pc = 0x3A9D58u;
label_3a9d58:
    // 0x3a9d58: 0x28a3fc19  slti        $v1, $a1, -0x3E7
    ctx->pc = 0x3a9d58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966297) ? 1 : 0);
label_3a9d5c:
    // 0x3a9d5c: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x3a9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
label_3a9d60:
    // 0x3a9d60: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3a9d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3a9d64:
    // 0x3a9d64: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x3a9d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
label_3a9d68:
    // 0x3a9d68: 0x3e00008  jr          $ra
label_3a9d6c:
    if (ctx->pc == 0x3A9D6Cu) {
        ctx->pc = 0x3A9D70u;
        goto label_3a9d70;
    }
    ctx->pc = 0x3A9D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9D70u;
label_3a9d70:
    // 0x3a9d70: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9d74:
    // 0x3a9d74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a9d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9d78:
    // 0x3a9d78: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9d7c:
    // 0x3a9d7c: 0x28c9fff1  slti        $t1, $a2, -0xF
    ctx->pc = 0x3a9d7cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967281) ? 1 : 0);
label_3a9d80:
    // 0x3a9d80: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
label_3a9d84:
    if (ctx->pc == 0x3A9D84u) {
        ctx->pc = 0x3A9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D80u;
        // 0x3a9d84: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D88u;
        goto label_3a9d88;
    }
    ctx->pc = 0x3A9D80u;
    {
        const bool branch_taken_0x3a9d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3A9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D80u;
        // 0x3a9d84: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d80) {
            ctx->pc = 0x3A9D98u;
            goto label_3a9d98;
        }
    }
    ctx->pc = 0x3A9D88u;
label_3a9d88:
    // 0x3a9d88: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9d8c:
    // 0x3a9d8c: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9d90:
    // 0x3a9d90: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_3a9d94:
    if (ctx->pc == 0x3A9D94u) {
        ctx->pc = 0x3A9D98u;
        goto label_3a9d98;
    }
    ctx->pc = 0x3A9D90u;
    {
        const bool branch_taken_0x3a9d90 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3a9d90) {
            ctx->pc = 0x3A9DB8u;
            goto label_3a9db8;
        }
    }
    ctx->pc = 0x3A9D98u;
label_3a9d98:
    // 0x3a9d98: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x3a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_3a9d9c:
    // 0x3a9d9c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3a9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3a9da0:
    // 0x3a9da0: 0xc9100a  movz        $v0, $a2, $t1
    ctx->pc = 0x3a9da0u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_3a9da4:
    // 0x3a9da4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a9da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a9da8:
    // 0x3a9da8: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x3a9da8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_3a9dac:
    // 0x3a9dac: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3a9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_3a9db0:
    // 0x3a9db0: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x3a9db0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_3a9db4:
    // 0x3a9db4: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3a9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3a9db8:
    // 0x3a9db8: 0x3e00008  jr          $ra
label_3a9dbc:
    if (ctx->pc == 0x3A9DBCu) {
        ctx->pc = 0x3A9DC0u;
        goto label_3a9dc0;
    }
    ctx->pc = 0x3A9DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9DC0u;
label_3a9dc0:
    // 0x3a9dc0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9dc4:
    // 0x3a9dc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a9dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9dc8:
    // 0x3a9dc8: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9dcc:
    // 0x3a9dcc: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_3a9dd0:
    if (ctx->pc == 0x3A9DD0u) {
        ctx->pc = 0x3A9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DCCu;
        // 0x3a9dd0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9DD4u;
        goto label_3a9dd4;
    }
    ctx->pc = 0x3A9DCCu;
    {
        const bool branch_taken_0x3a9dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3a9dcc) {
            ctx->pc = 0x3A9DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9DCCu;
            // 0x3a9dd0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9DE4u;
            goto label_3a9de4;
        }
    }
    ctx->pc = 0x3A9DD4u;
label_3a9dd4:
    // 0x3a9dd4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9dd8:
    // 0x3a9dd8: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9ddc:
    // 0x3a9ddc: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_3a9de0:
    if (ctx->pc == 0x3A9DE0u) {
        ctx->pc = 0x3A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DDCu;
        // 0x3a9de0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9DE4u;
        goto label_3a9de4;
    }
    ctx->pc = 0x3A9DDCu;
    {
        const bool branch_taken_0x3a9ddc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3a9ddc) {
            ctx->pc = 0x3A9DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9DDCu;
            // 0x3a9de0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9DE4u;
            goto label_3a9de4;
        }
    }
    ctx->pc = 0x3A9DE4u;
label_3a9de4:
    // 0x3a9de4: 0x3e00008  jr          $ra
label_3a9de8:
    if (ctx->pc == 0x3A9DE8u) {
        ctx->pc = 0x3A9DECu;
        goto label_3a9dec;
    }
    ctx->pc = 0x3A9DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9DECu;
label_3a9dec:
    // 0x3a9dec: 0x0  nop
    ctx->pc = 0x3a9decu;
    // NOP
label_3a9df0:
    // 0x3a9df0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9df4:
    // 0x3a9df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a9df8:
    // 0x3a9df8: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a9dfc:
    // 0x3a9dfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9e00:
    // 0x3a9e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a9e04:
    // 0x3a9e04: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_3a9e08:
    if (ctx->pc == 0x3A9E08u) {
        ctx->pc = 0x3A9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E04u;
        // 0x3a9e08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E0Cu;
        goto label_3a9e0c;
    }
    ctx->pc = 0x3A9E04u;
    {
        const bool branch_taken_0x3a9e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E04u;
        // 0x3a9e08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e04) {
            ctx->pc = 0x3A9E1Cu;
            goto label_3a9e1c;
        }
    }
    ctx->pc = 0x3A9E0Cu;
label_3a9e0c:
    // 0x3a9e0c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a9e10:
    // 0x3a9e10: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942920)));
label_3a9e14:
    // 0x3a9e14: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_3a9e18:
    if (ctx->pc == 0x3A9E18u) {
        ctx->pc = 0x3A9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E14u;
        // 0x3a9e18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E1Cu;
        goto label_3a9e1c;
    }
    ctx->pc = 0x3A9E14u;
    {
        const bool branch_taken_0x3a9e14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E14u;
        // 0x3a9e18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e14) {
            ctx->pc = 0x3A9E38u;
            goto label_3a9e38;
        }
    }
    ctx->pc = 0x3A9E1Cu;
label_3a9e1c:
    // 0x3a9e1c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a9e20:
    // 0x3a9e20: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_3a9e24:
    if (ctx->pc == 0x3A9E24u) {
        ctx->pc = 0x3A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E20u;
        // 0x3a9e24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E28u;
        goto label_3a9e28;
    }
    ctx->pc = 0x3A9E20u;
    {
        const bool branch_taken_0x3a9e20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E20u;
        // 0x3a9e24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e20) {
            ctx->pc = 0x3A9E38u;
            goto label_3a9e38;
        }
    }
    ctx->pc = 0x3A9E28u;
label_3a9e28:
    // 0x3a9e28: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a9e2c:
    // 0x3a9e2c: 0xc0e5ebe  jal         func_397AF8
label_3a9e30:
    if (ctx->pc == 0x3A9E30u) {
        ctx->pc = 0x3A9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E2Cu;
        // 0x3a9e30: 0x2484ec38  addiu       $a0, $a0, -0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E34u;
        goto label_3a9e34;
    }
    ctx->pc = 0x3A9E2Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E34u);
    ctx->pc = 0x3A9E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E2Cu;
    // 0x3a9e30: 0x2484ec38  addiu       $a0, $a0, -0x13C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A9E2Cu, 0x3A9E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E34u;
label_3a9e34:
    // 0x3a9e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9e38:
    // 0x3a9e38: 0x3e00008  jr          $ra
label_3a9e3c:
    if (ctx->pc == 0x3A9E3Cu) {
        ctx->pc = 0x3A9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E38u;
        // 0x3a9e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9E40u;
        goto label_3a9e40;
    }
    ctx->pc = 0x3A9E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E38u;
        // 0x3a9e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9E40u;
label_3a9e40:
    // 0x3a9e40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9e44:
    // 0x3a9e44: 0x0  nop
    ctx->pc = 0x3a9e44u;
    // NOP
label_3a9e48:
    // 0x3a9e48: 0x0  nop
    ctx->pc = 0x3a9e48u;
    // NOP
label_3a9e4c:
    // 0x3a9e4c: 0x0  nop
    ctx->pc = 0x3a9e4cu;
    // NOP
label_3a9e50:
    // 0x3a9e50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a9e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9e54:
    // 0x3a9e54: 0x0  nop
    ctx->pc = 0x3a9e54u;
    // NOP
label_3a9e58:
    // 0x3a9e58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a9e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a9e5c:
    // 0x3a9e5c: 0x0  nop
    ctx->pc = 0x3a9e5cu;
    // NOP
    ctx->pc = 0x3a9e60u;
}
