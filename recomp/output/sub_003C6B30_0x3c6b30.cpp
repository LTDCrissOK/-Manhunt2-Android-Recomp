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

// Function: sub_003C6B30
// Address: 0x3c6b30 - 0x3c6ef8
void sub_003C6B30_0x3c6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6B30_0x3c6b30");
#endif

    switch (ctx->pc) {
        case 0x3c6b30u: goto label_3c6b30;
        case 0x3c6b34u: goto label_3c6b34;
        case 0x3c6b38u: goto label_3c6b38;
        case 0x3c6b3cu: goto label_3c6b3c;
        case 0x3c6b40u: goto label_3c6b40;
        case 0x3c6b44u: goto label_3c6b44;
        case 0x3c6b48u: goto label_3c6b48;
        case 0x3c6b4cu: goto label_3c6b4c;
        case 0x3c6b50u: goto label_3c6b50;
        case 0x3c6b54u: goto label_3c6b54;
        case 0x3c6b58u: goto label_3c6b58;
        case 0x3c6b5cu: goto label_3c6b5c;
        case 0x3c6b60u: goto label_3c6b60;
        case 0x3c6b64u: goto label_3c6b64;
        case 0x3c6b68u: goto label_3c6b68;
        case 0x3c6b6cu: goto label_3c6b6c;
        case 0x3c6b70u: goto label_3c6b70;
        case 0x3c6b74u: goto label_3c6b74;
        case 0x3c6b78u: goto label_3c6b78;
        case 0x3c6b7cu: goto label_3c6b7c;
        case 0x3c6b80u: goto label_3c6b80;
        case 0x3c6b84u: goto label_3c6b84;
        case 0x3c6b88u: goto label_3c6b88;
        case 0x3c6b8cu: goto label_3c6b8c;
        case 0x3c6b90u: goto label_3c6b90;
        case 0x3c6b94u: goto label_3c6b94;
        case 0x3c6b98u: goto label_3c6b98;
        case 0x3c6b9cu: goto label_3c6b9c;
        case 0x3c6ba0u: goto label_3c6ba0;
        case 0x3c6ba4u: goto label_3c6ba4;
        case 0x3c6ba8u: goto label_3c6ba8;
        case 0x3c6bacu: goto label_3c6bac;
        case 0x3c6bb0u: goto label_3c6bb0;
        case 0x3c6bb4u: goto label_3c6bb4;
        case 0x3c6bb8u: goto label_3c6bb8;
        case 0x3c6bbcu: goto label_3c6bbc;
        case 0x3c6bc0u: goto label_3c6bc0;
        case 0x3c6bc4u: goto label_3c6bc4;
        case 0x3c6bc8u: goto label_3c6bc8;
        case 0x3c6bccu: goto label_3c6bcc;
        case 0x3c6bd0u: goto label_3c6bd0;
        case 0x3c6bd4u: goto label_3c6bd4;
        case 0x3c6bd8u: goto label_3c6bd8;
        case 0x3c6bdcu: goto label_3c6bdc;
        case 0x3c6be0u: goto label_3c6be0;
        case 0x3c6be4u: goto label_3c6be4;
        case 0x3c6be8u: goto label_3c6be8;
        case 0x3c6becu: goto label_3c6bec;
        case 0x3c6bf0u: goto label_3c6bf0;
        case 0x3c6bf4u: goto label_3c6bf4;
        case 0x3c6bf8u: goto label_3c6bf8;
        case 0x3c6bfcu: goto label_3c6bfc;
        case 0x3c6c00u: goto label_3c6c00;
        case 0x3c6c04u: goto label_3c6c04;
        case 0x3c6c08u: goto label_3c6c08;
        case 0x3c6c0cu: goto label_3c6c0c;
        case 0x3c6c10u: goto label_3c6c10;
        case 0x3c6c14u: goto label_3c6c14;
        case 0x3c6c18u: goto label_3c6c18;
        case 0x3c6c1cu: goto label_3c6c1c;
        case 0x3c6c20u: goto label_3c6c20;
        case 0x3c6c24u: goto label_3c6c24;
        case 0x3c6c28u: goto label_3c6c28;
        case 0x3c6c2cu: goto label_3c6c2c;
        case 0x3c6c30u: goto label_3c6c30;
        case 0x3c6c34u: goto label_3c6c34;
        case 0x3c6c38u: goto label_3c6c38;
        case 0x3c6c3cu: goto label_3c6c3c;
        case 0x3c6c40u: goto label_3c6c40;
        case 0x3c6c44u: goto label_3c6c44;
        case 0x3c6c48u: goto label_3c6c48;
        case 0x3c6c4cu: goto label_3c6c4c;
        case 0x3c6c50u: goto label_3c6c50;
        case 0x3c6c54u: goto label_3c6c54;
        case 0x3c6c58u: goto label_3c6c58;
        case 0x3c6c5cu: goto label_3c6c5c;
        case 0x3c6c60u: goto label_3c6c60;
        case 0x3c6c64u: goto label_3c6c64;
        case 0x3c6c68u: goto label_3c6c68;
        case 0x3c6c6cu: goto label_3c6c6c;
        case 0x3c6c70u: goto label_3c6c70;
        case 0x3c6c74u: goto label_3c6c74;
        case 0x3c6c78u: goto label_3c6c78;
        case 0x3c6c7cu: goto label_3c6c7c;
        case 0x3c6c80u: goto label_3c6c80;
        case 0x3c6c84u: goto label_3c6c84;
        case 0x3c6c88u: goto label_3c6c88;
        case 0x3c6c8cu: goto label_3c6c8c;
        case 0x3c6c90u: goto label_3c6c90;
        case 0x3c6c94u: goto label_3c6c94;
        case 0x3c6c98u: goto label_3c6c98;
        case 0x3c6c9cu: goto label_3c6c9c;
        case 0x3c6ca0u: goto label_3c6ca0;
        case 0x3c6ca4u: goto label_3c6ca4;
        case 0x3c6ca8u: goto label_3c6ca8;
        case 0x3c6cacu: goto label_3c6cac;
        case 0x3c6cb0u: goto label_3c6cb0;
        case 0x3c6cb4u: goto label_3c6cb4;
        case 0x3c6cb8u: goto label_3c6cb8;
        case 0x3c6cbcu: goto label_3c6cbc;
        case 0x3c6cc0u: goto label_3c6cc0;
        case 0x3c6cc4u: goto label_3c6cc4;
        case 0x3c6cc8u: goto label_3c6cc8;
        case 0x3c6cccu: goto label_3c6ccc;
        case 0x3c6cd0u: goto label_3c6cd0;
        case 0x3c6cd4u: goto label_3c6cd4;
        case 0x3c6cd8u: goto label_3c6cd8;
        case 0x3c6cdcu: goto label_3c6cdc;
        case 0x3c6ce0u: goto label_3c6ce0;
        case 0x3c6ce4u: goto label_3c6ce4;
        case 0x3c6ce8u: goto label_3c6ce8;
        case 0x3c6cecu: goto label_3c6cec;
        case 0x3c6cf0u: goto label_3c6cf0;
        case 0x3c6cf4u: goto label_3c6cf4;
        case 0x3c6cf8u: goto label_3c6cf8;
        case 0x3c6cfcu: goto label_3c6cfc;
        case 0x3c6d00u: goto label_3c6d00;
        case 0x3c6d04u: goto label_3c6d04;
        case 0x3c6d08u: goto label_3c6d08;
        case 0x3c6d0cu: goto label_3c6d0c;
        case 0x3c6d10u: goto label_3c6d10;
        case 0x3c6d14u: goto label_3c6d14;
        case 0x3c6d18u: goto label_3c6d18;
        case 0x3c6d1cu: goto label_3c6d1c;
        case 0x3c6d20u: goto label_3c6d20;
        case 0x3c6d24u: goto label_3c6d24;
        case 0x3c6d28u: goto label_3c6d28;
        case 0x3c6d2cu: goto label_3c6d2c;
        case 0x3c6d30u: goto label_3c6d30;
        case 0x3c6d34u: goto label_3c6d34;
        case 0x3c6d38u: goto label_3c6d38;
        case 0x3c6d3cu: goto label_3c6d3c;
        case 0x3c6d40u: goto label_3c6d40;
        case 0x3c6d44u: goto label_3c6d44;
        case 0x3c6d48u: goto label_3c6d48;
        case 0x3c6d4cu: goto label_3c6d4c;
        case 0x3c6d50u: goto label_3c6d50;
        case 0x3c6d54u: goto label_3c6d54;
        case 0x3c6d58u: goto label_3c6d58;
        case 0x3c6d5cu: goto label_3c6d5c;
        case 0x3c6d60u: goto label_3c6d60;
        case 0x3c6d64u: goto label_3c6d64;
        case 0x3c6d68u: goto label_3c6d68;
        case 0x3c6d6cu: goto label_3c6d6c;
        case 0x3c6d70u: goto label_3c6d70;
        case 0x3c6d74u: goto label_3c6d74;
        case 0x3c6d78u: goto label_3c6d78;
        case 0x3c6d7cu: goto label_3c6d7c;
        case 0x3c6d80u: goto label_3c6d80;
        case 0x3c6d84u: goto label_3c6d84;
        case 0x3c6d88u: goto label_3c6d88;
        case 0x3c6d8cu: goto label_3c6d8c;
        case 0x3c6d90u: goto label_3c6d90;
        case 0x3c6d94u: goto label_3c6d94;
        case 0x3c6d98u: goto label_3c6d98;
        case 0x3c6d9cu: goto label_3c6d9c;
        case 0x3c6da0u: goto label_3c6da0;
        case 0x3c6da4u: goto label_3c6da4;
        case 0x3c6da8u: goto label_3c6da8;
        case 0x3c6dacu: goto label_3c6dac;
        case 0x3c6db0u: goto label_3c6db0;
        case 0x3c6db4u: goto label_3c6db4;
        case 0x3c6db8u: goto label_3c6db8;
        case 0x3c6dbcu: goto label_3c6dbc;
        case 0x3c6dc0u: goto label_3c6dc0;
        case 0x3c6dc4u: goto label_3c6dc4;
        case 0x3c6dc8u: goto label_3c6dc8;
        case 0x3c6dccu: goto label_3c6dcc;
        case 0x3c6dd0u: goto label_3c6dd0;
        case 0x3c6dd4u: goto label_3c6dd4;
        case 0x3c6dd8u: goto label_3c6dd8;
        case 0x3c6ddcu: goto label_3c6ddc;
        case 0x3c6de0u: goto label_3c6de0;
        case 0x3c6de4u: goto label_3c6de4;
        case 0x3c6de8u: goto label_3c6de8;
        case 0x3c6decu: goto label_3c6dec;
        case 0x3c6df0u: goto label_3c6df0;
        case 0x3c6df4u: goto label_3c6df4;
        case 0x3c6df8u: goto label_3c6df8;
        case 0x3c6dfcu: goto label_3c6dfc;
        case 0x3c6e00u: goto label_3c6e00;
        case 0x3c6e04u: goto label_3c6e04;
        case 0x3c6e08u: goto label_3c6e08;
        case 0x3c6e0cu: goto label_3c6e0c;
        case 0x3c6e10u: goto label_3c6e10;
        case 0x3c6e14u: goto label_3c6e14;
        case 0x3c6e18u: goto label_3c6e18;
        case 0x3c6e1cu: goto label_3c6e1c;
        case 0x3c6e20u: goto label_3c6e20;
        case 0x3c6e24u: goto label_3c6e24;
        case 0x3c6e28u: goto label_3c6e28;
        case 0x3c6e2cu: goto label_3c6e2c;
        case 0x3c6e30u: goto label_3c6e30;
        case 0x3c6e34u: goto label_3c6e34;
        case 0x3c6e38u: goto label_3c6e38;
        case 0x3c6e3cu: goto label_3c6e3c;
        case 0x3c6e40u: goto label_3c6e40;
        case 0x3c6e44u: goto label_3c6e44;
        case 0x3c6e48u: goto label_3c6e48;
        case 0x3c6e4cu: goto label_3c6e4c;
        case 0x3c6e50u: goto label_3c6e50;
        case 0x3c6e54u: goto label_3c6e54;
        case 0x3c6e58u: goto label_3c6e58;
        case 0x3c6e5cu: goto label_3c6e5c;
        case 0x3c6e60u: goto label_3c6e60;
        case 0x3c6e64u: goto label_3c6e64;
        case 0x3c6e68u: goto label_3c6e68;
        case 0x3c6e6cu: goto label_3c6e6c;
        case 0x3c6e70u: goto label_3c6e70;
        case 0x3c6e74u: goto label_3c6e74;
        case 0x3c6e78u: goto label_3c6e78;
        case 0x3c6e7cu: goto label_3c6e7c;
        case 0x3c6e80u: goto label_3c6e80;
        case 0x3c6e84u: goto label_3c6e84;
        case 0x3c6e88u: goto label_3c6e88;
        case 0x3c6e8cu: goto label_3c6e8c;
        case 0x3c6e90u: goto label_3c6e90;
        case 0x3c6e94u: goto label_3c6e94;
        case 0x3c6e98u: goto label_3c6e98;
        case 0x3c6e9cu: goto label_3c6e9c;
        case 0x3c6ea0u: goto label_3c6ea0;
        case 0x3c6ea4u: goto label_3c6ea4;
        case 0x3c6ea8u: goto label_3c6ea8;
        case 0x3c6eacu: goto label_3c6eac;
        case 0x3c6eb0u: goto label_3c6eb0;
        case 0x3c6eb4u: goto label_3c6eb4;
        case 0x3c6eb8u: goto label_3c6eb8;
        case 0x3c6ebcu: goto label_3c6ebc;
        case 0x3c6ec0u: goto label_3c6ec0;
        case 0x3c6ec4u: goto label_3c6ec4;
        case 0x3c6ec8u: goto label_3c6ec8;
        case 0x3c6eccu: goto label_3c6ecc;
        case 0x3c6ed0u: goto label_3c6ed0;
        case 0x3c6ed4u: goto label_3c6ed4;
        case 0x3c6ed8u: goto label_3c6ed8;
        case 0x3c6edcu: goto label_3c6edc;
        case 0x3c6ee0u: goto label_3c6ee0;
        case 0x3c6ee4u: goto label_3c6ee4;
        case 0x3c6ee8u: goto label_3c6ee8;
        case 0x3c6eecu: goto label_3c6eec;
        case 0x3c6ef0u: goto label_3c6ef0;
        case 0x3c6ef4u: goto label_3c6ef4;
        default: break;
    }

    ctx->pc = 0x3c6b30u;

label_3c6b30:
    // 0x3c6b30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c6b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3c6b34:
    // 0x3c6b34: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c6b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c6b38:
    // 0x3c6b38: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3c6b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3c6b3c:
    // 0x3c6b3c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c6b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c6b40:
    // 0x3c6b40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c6b40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c6b44:
    // 0x3c6b44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c6b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c6b48:
    // 0x3c6b48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c6b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c6b4c:
    // 0x3c6b4c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3c6b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3c6b50:
    // 0x3c6b50: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3c6b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3c6b54:
    // 0x3c6b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c6b58:
    // 0x3c6b58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c6b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c6b5c:
    // 0x3c6b5c: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x3c6b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3c6b60:
    // 0x3c6b60: 0x124000d3  beqz        $s2, . + 4 + (0xD3 << 2)
label_3c6b64:
    if (ctx->pc == 0x3C6B64u) {
        ctx->pc = 0x3C6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B60u;
        // 0x3c6b64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B68u;
        goto label_3c6b68;
    }
    ctx->pc = 0x3C6B60u;
    {
        const bool branch_taken_0x3c6b60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B60u;
        // 0x3c6b64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b60) {
            ctx->pc = 0x3C6EB0u;
            goto label_3c6eb0;
        }
    }
    ctx->pc = 0x3C6B68u;
label_3c6b68:
    // 0x3c6b68: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c6b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c6b6c:
    // 0x3c6b6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c6b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3c6b70:
    // 0x3c6b70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c6b74:
    if (ctx->pc == 0x3C6B74u) {
        ctx->pc = 0x3C6B78u;
        goto label_3c6b78;
    }
    ctx->pc = 0x3C6B70u;
    {
        const bool branch_taken_0x3c6b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6b70) {
            ctx->pc = 0x3C6B84u;
            goto label_3c6b84;
        }
    }
    ctx->pc = 0x3C6B78u;
label_3c6b78:
    // 0x3c6b78: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3c6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c6b7c:
    // 0x3c6b7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3c6b80:
    if (ctx->pc == 0x3C6B80u) {
        ctx->pc = 0x3C6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B7Cu;
        // 0x3c6b80: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B84u;
        goto label_3c6b84;
    }
    ctx->pc = 0x3C6B7Cu;
    {
        const bool branch_taken_0x3c6b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6b7c) {
            ctx->pc = 0x3C6B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6B7Cu;
            // 0x3c6b80: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6B98u;
            goto label_3c6b98;
        }
    }
    ctx->pc = 0x3C6B84u;
label_3c6b84:
    // 0x3c6b84: 0xc0f1cd8  jal         func_3C7360
label_3c6b88:
    if (ctx->pc == 0x3C6B88u) {
        ctx->pc = 0x3C6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B84u;
        // 0x3c6b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B8Cu;
        goto label_3c6b8c;
    }
    ctx->pc = 0x3C6B84u;
    SET_GPR_U32(ctx, 31, 0x3C6B8Cu);
    ctx->pc = 0x3C6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6B84u;
    // 0x3c6b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7360u, 0x3C6B84u, 0x3C6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6B8Cu;
label_3c6b8c:
    // 0x3c6b8c: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
label_3c6b90:
    if (ctx->pc == 0x3C6B90u) {
        ctx->pc = 0x3C6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B8Cu;
        // 0x3c6b90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6B94u;
        goto label_3c6b94;
    }
    ctx->pc = 0x3C6B8Cu;
    {
        const bool branch_taken_0x3c6b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B8Cu;
        // 0x3c6b90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b8c) {
            ctx->pc = 0x3C6EC8u;
            goto label_3c6ec8;
        }
    }
    ctx->pc = 0x3C6B94u;
label_3c6b94:
    // 0x3c6b94: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c6b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c6b98:
    // 0x3c6b98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c6b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6b9c:
    // 0x3c6b9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c6b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6ba0:
    // 0x3c6ba0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3c6ba4:
    // 0x3c6ba4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3c6ba8:
    if (ctx->pc == 0x3C6BA8u) {
        ctx->pc = 0x3C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BA4u;
        // 0x3c6ba8: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6BACu;
        goto label_3c6bac;
    }
    ctx->pc = 0x3C6BA4u;
    {
        const bool branch_taken_0x3c6ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BA4u;
        // 0x3c6ba8: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ba4) {
            ctx->pc = 0x3C6C10u;
            goto label_3c6c10;
        }
    }
    ctx->pc = 0x3C6BACu;
label_3c6bac:
    // 0x3c6bac: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x3c6bacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3c6bb0:
    // 0x3c6bb0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_3c6bb4:
    if (ctx->pc == 0x3C6BB4u) {
        ctx->pc = 0x3C6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BB0u;
        // 0x3c6bb4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6BB8u;
        goto label_3c6bb8;
    }
    ctx->pc = 0x3C6BB0u;
    {
        const bool branch_taken_0x3c6bb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BB0u;
        // 0x3c6bb4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bb0) {
            ctx->pc = 0x3C6BD0u;
            goto label_3c6bd0;
        }
    }
    ctx->pc = 0x3C6BB8u;
label_3c6bb8:
    // 0x3c6bb8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3c6bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c6bbc:
    // 0x3c6bbc: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x3c6bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3c6bc0:
    // 0x3c6bc0: 0x0  nop
    ctx->pc = 0x3c6bc0u;
    // NOP
label_3c6bc4:
    // 0x3c6bc4: 0x0  nop
    ctx->pc = 0x3c6bc4u;
    // NOP
label_3c6bc8:
    // 0x3c6bc8: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_3c6bcc:
    if (ctx->pc == 0x3C6BCCu) {
        ctx->pc = 0x3C6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BC8u;
        // 0x3c6bcc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6BD0u;
        goto label_3c6bd0;
    }
    ctx->pc = 0x3C6BC8u;
    {
        const bool branch_taken_0x3c6bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BC8u;
        // 0x3c6bcc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bc8) {
            ctx->pc = 0x3C6BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6bb8;
        }
    }
    ctx->pc = 0x3C6BD0u;
label_3c6bd0:
    // 0x3c6bd0: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x3c6bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_3c6bd4:
    // 0x3c6bd4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3c6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c6bd8:
    // 0x3c6bd8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3c6bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c6bdc:
    // 0x3c6bdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6be0:
    // 0x3c6be0: 0x60f809  jalr        $v1
label_3c6be4:
    if (ctx->pc == 0x3C6BE4u) {
        ctx->pc = 0x3C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BE0u;
        // 0x3c6be4: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6BE8u;
        goto label_3c6be8;
    }
    ctx->pc = 0x3C6BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C6BE8u);
        ctx->pc = 0x3C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BE0u;
        // 0x3c6be4: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6BE0u, 0x3C6BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6BE8u;
label_3c6be8:
    // 0x3c6be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6bec:
    // 0x3c6bec: 0x1a0000b2  blez        $s0, . + 4 + (0xB2 << 2)
label_3c6bf0:
    if (ctx->pc == 0x3C6BF0u) {
        ctx->pc = 0x3C6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BECu;
        // 0x3c6bf0: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6BF4u;
        goto label_3c6bf4;
    }
    ctx->pc = 0x3C6BECu;
    {
        const bool branch_taken_0x3c6bec = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BECu;
        // 0x3c6bf0: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bec) {
            ctx->pc = 0x3C6EB8u;
            goto label_3c6eb8;
        }
    }
    ctx->pc = 0x3C6BF4u;
label_3c6bf4:
    // 0x3c6bf4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3c6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3c6bf8:
    // 0x3c6bf8: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3c6bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3c6bfc:
    // 0x3c6bfc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6c00:
    // 0x3c6c00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3c6c04:
    if (ctx->pc == 0x3C6C04u) {
        ctx->pc = 0x3C6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C00u;
        // 0x3c6c04: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C08u;
        goto label_3c6c08;
    }
    ctx->pc = 0x3C6C00u;
    {
        const bool branch_taken_0x3c6c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C00u;
        // 0x3c6c04: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c00) {
            ctx->pc = 0x3C6BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6bb0;
        }
    }
    ctx->pc = 0x3C6C08u;
label_3c6c08:
    // 0x3c6c08: 0x100000af  b           . + 4 + (0xAF << 2)
label_3c6c0c:
    if (ctx->pc == 0x3C6C0Cu) {
        ctx->pc = 0x3C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C08u;
        // 0x3c6c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C10u;
        goto label_3c6c10;
    }
    ctx->pc = 0x3C6C08u;
    {
        const bool branch_taken_0x3c6c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C08u;
        // 0x3c6c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c08) {
            ctx->pc = 0x3C6EC8u;
            goto label_3c6ec8;
        }
    }
    ctx->pc = 0x3C6C10u;
label_3c6c10:
    // 0x3c6c10: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3c6c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c6c14:
    // 0x3c6c14: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_3c6c18:
    if (ctx->pc == 0x3C6C18u) {
        ctx->pc = 0x3C6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C14u;
        // 0x3c6c18: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C1Cu;
        goto label_3c6c1c;
    }
    ctx->pc = 0x3C6C14u;
    {
        const bool branch_taken_0x3c6c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C14u;
        // 0x3c6c18: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c14) {
            ctx->pc = 0x3C6D58u;
            goto label_3c6d58;
        }
    }
    ctx->pc = 0x3C6C1Cu;
label_3c6c1c:
    // 0x3c6c1c: 0x0  nop
    ctx->pc = 0x3c6c1cu;
    // NOP
label_3c6c20:
    // 0x3c6c20: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3c6c20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c6c24:
    // 0x3c6c24: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_3c6c28:
    if (ctx->pc == 0x3C6C28u) {
        ctx->pc = 0x3C6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C24u;
        // 0x3c6c28: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C2Cu;
        goto label_3c6c2c;
    }
    ctx->pc = 0x3C6C24u;
    {
        const bool branch_taken_0x3c6c24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C24u;
        // 0x3c6c28: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c24) {
            ctx->pc = 0x3C6C48u;
            goto label_3c6c48;
        }
    }
    ctx->pc = 0x3C6C2Cu;
label_3c6c2c:
    // 0x3c6c2c: 0x0  nop
    ctx->pc = 0x3c6c2cu;
    // NOP
label_3c6c30:
    // 0x3c6c30: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3c6c30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c6c34:
    // 0x3c6c34: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x3c6c34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3c6c38:
    // 0x3c6c38: 0x0  nop
    ctx->pc = 0x3c6c38u;
    // NOP
label_3c6c3c:
    // 0x3c6c3c: 0x0  nop
    ctx->pc = 0x3c6c3cu;
    // NOP
label_3c6c40:
    // 0x3c6c40: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_3c6c44:
    if (ctx->pc == 0x3C6C44u) {
        ctx->pc = 0x3C6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C40u;
        // 0x3c6c44: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C48u;
        goto label_3c6c48;
    }
    ctx->pc = 0x3C6C40u;
    {
        const bool branch_taken_0x3c6c40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C40u;
        // 0x3c6c44: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c40) {
            ctx->pc = 0x3C6C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6c30;
        }
    }
    ctx->pc = 0x3C6C48u;
label_3c6c48:
    // 0x3c6c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c4c:
    // 0x3c6c4c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x3c6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_3c6c50:
    // 0x3c6c50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3c6c54:
    if (ctx->pc == 0x3C6C54u) {
        ctx->pc = 0x3C6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C50u;
        // 0x3c6c54: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C58u;
        goto label_3c6c58;
    }
    ctx->pc = 0x3C6C50u;
    {
        const bool branch_taken_0x3c6c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C50u;
        // 0x3c6c54: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c50) {
            ctx->pc = 0x3C6C8Cu;
            goto label_3c6c8c;
        }
    }
    ctx->pc = 0x3C6C58u;
label_3c6c58:
    // 0x3c6c58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6c5c:
    // 0x3c6c5c: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x3c6c5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_3c6c60:
    // 0x3c6c60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c64:
    // 0x3c6c64: 0xc0efa74  jal         func_3BE9D0
label_3c6c68:
    if (ctx->pc == 0x3C6C68u) {
        ctx->pc = 0x3C6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C64u;
        // 0x3c6c68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C6Cu;
        goto label_3c6c6c;
    }
    ctx->pc = 0x3C6C64u;
    SET_GPR_U32(ctx, 31, 0x3C6C6Cu);
    ctx->pc = 0x3C6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6C64u;
    // 0x3c6c68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3C6C64u, 0x3C6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6C6Cu;
label_3c6c6c:
    // 0x3c6c6c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c6c70:
    // 0x3c6c70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6c74:
    // 0x3c6c74: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3c6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c6c78:
    // 0x3c6c78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6c7c:
    // 0x3c6c7c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3c6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3c6c80:
    // 0x3c6c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c6c84:
    // 0x3c6c84: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3c6c88:
    if (ctx->pc == 0x3C6C88u) {
        ctx->pc = 0x3C6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C84u;
        // 0x3c6c88: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C8Cu;
        goto label_3c6c8c;
    }
    ctx->pc = 0x3C6C84u;
    {
        const bool branch_taken_0x3c6c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C84u;
        // 0x3c6c88: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c84) {
            ctx->pc = 0x3C6D34u;
            goto label_3c6d34;
        }
    }
    ctx->pc = 0x3C6C8Cu;
label_3c6c8c:
    // 0x3c6c8c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6c90:
    // 0x3c6c90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3c6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c6c94:
    // 0x3c6c94: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3c6c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3c6c98:
    // 0x3c6c98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3c6c9c:
    if (ctx->pc == 0x3C6C9Cu) {
        ctx->pc = 0x3C6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C98u;
        // 0x3c6c9c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CA0u;
        goto label_3c6ca0;
    }
    ctx->pc = 0x3C6C98u;
    {
        const bool branch_taken_0x3c6c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C98u;
        // 0x3c6c9c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c98) {
            ctx->pc = 0x3C6CD4u;
            goto label_3c6cd4;
        }
    }
    ctx->pc = 0x3C6CA0u;
label_3c6ca0:
    // 0x3c6ca0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3c6ca4:
    if (ctx->pc == 0x3C6CA4u) {
        ctx->pc = 0x3C6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CA0u;
        // 0x3c6ca4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CA8u;
        goto label_3c6ca8;
    }
    ctx->pc = 0x3C6CA0u;
    {
        const bool branch_taken_0x3c6ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CA0u;
        // 0x3c6ca4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ca0) {
            ctx->pc = 0x3C6CD4u;
            goto label_3c6cd4;
        }
    }
    ctx->pc = 0x3C6CA8u;
label_3c6ca8:
    // 0x3c6ca8: 0xc0efa74  jal         func_3BE9D0
label_3c6cac:
    if (ctx->pc == 0x3C6CACu) {
        ctx->pc = 0x3C6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CA8u;
        // 0x3c6cac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CB0u;
        goto label_3c6cb0;
    }
    ctx->pc = 0x3C6CA8u;
    SET_GPR_U32(ctx, 31, 0x3C6CB0u);
    ctx->pc = 0x3C6CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CA8u;
    // 0x3c6cac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3C6CA8u, 0x3C6CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CB0u;
label_3c6cb0:
    // 0x3c6cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6cb4:
    // 0x3c6cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6cb8:
    // 0x3c6cb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c6cbc:
    // 0x3c6cbc: 0xc0f1a3a  jal         func_3C68E8
label_3c6cc0:
    if (ctx->pc == 0x3C6CC0u) {
        ctx->pc = 0x3C6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CBCu;
        // 0x3c6cc0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CC4u;
        goto label_3c6cc4;
    }
    ctx->pc = 0x3C6CBCu;
    SET_GPR_U32(ctx, 31, 0x3C6CC4u);
    ctx->pc = 0x3C6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CBCu;
    // 0x3c6cc0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E8u, 0x3C6CBCu, 0x3C6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CC4u;
label_3c6cc4:
    // 0x3c6cc4: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_3c6cc8:
    if (ctx->pc == 0x3C6CC8u) {
        ctx->pc = 0x3C6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CC4u;
        // 0x3c6cc8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CCCu;
        goto label_3c6ccc;
    }
    ctx->pc = 0x3C6CC4u;
    {
        const bool branch_taken_0x3c6cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6cc4) {
            ctx->pc = 0x3C6CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6CC4u;
            // 0x3c6cc8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6EBCu;
            goto label_3c6ebc;
        }
    }
    ctx->pc = 0x3C6CCCu;
label_3c6ccc:
    // 0x3c6ccc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c6cd0:
    if (ctx->pc == 0x3C6CD0u) {
        ctx->pc = 0x3C6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CCCu;
        // 0x3c6cd0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CD4u;
        goto label_3c6cd4;
    }
    ctx->pc = 0x3C6CCCu;
    {
        const bool branch_taken_0x3c6ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CCCu;
        // 0x3c6cd0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ccc) {
            ctx->pc = 0x3C6D38u;
            goto label_3c6d38;
        }
    }
    ctx->pc = 0x3C6CD4u;
label_3c6cd4:
    // 0x3c6cd4: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x3c6cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c6cd8:
    // 0x3c6cd8: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3c6cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3c6cdc:
    // 0x3c6cdc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3c6ce0:
    if (ctx->pc == 0x3C6CE0u) {
        ctx->pc = 0x3C6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CDCu;
        // 0x3c6ce0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CE4u;
        goto label_3c6ce4;
    }
    ctx->pc = 0x3C6CDCu;
    {
        const bool branch_taken_0x3c6cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6cdc) {
            ctx->pc = 0x3C6CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6CDCu;
            // 0x3c6ce0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6D0Cu;
            goto label_3c6d0c;
        }
    }
    ctx->pc = 0x3C6CE4u;
label_3c6ce4:
    // 0x3c6ce4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3c6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3c6ce8:
    // 0x3c6ce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c6ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6cec:
    // 0x3c6cec: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3c6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c6cf0:
    // 0x3c6cf0: 0x40f809  jalr        $v0
label_3c6cf4:
    if (ctx->pc == 0x3C6CF4u) {
        ctx->pc = 0x3C6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CF0u;
        // 0x3c6cf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CF8u;
        goto label_3c6cf8;
    }
    ctx->pc = 0x3C6CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6CF8u);
        ctx->pc = 0x3C6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CF0u;
        // 0x3c6cf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6CF0u, 0x3C6CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6CF8u;
label_3c6cf8:
    // 0x3c6cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6cfc:
    // 0x3c6cfc: 0x5a00006f  blezl       $s0, . + 4 + (0x6F << 2)
label_3c6d00:
    if (ctx->pc == 0x3C6D00u) {
        ctx->pc = 0x3C6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CFCu;
        // 0x3c6d00: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D04u;
        goto label_3c6d04;
    }
    ctx->pc = 0x3C6CFCu;
    {
        const bool branch_taken_0x3c6cfc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3c6cfc) {
            ctx->pc = 0x3C6D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6CFCu;
            // 0x3c6d00: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6EBCu;
            goto label_3c6ebc;
        }
    }
    ctx->pc = 0x3C6D04u;
label_3c6d04:
    // 0x3c6d04: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c6d08:
    if (ctx->pc == 0x3C6D08u) {
        ctx->pc = 0x3C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D04u;
        // 0x3c6d08: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D0Cu;
        goto label_3c6d0c;
    }
    ctx->pc = 0x3C6D04u;
    {
        const bool branch_taken_0x3c6d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D04u;
        // 0x3c6d08: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d04) {
            ctx->pc = 0x3C6D38u;
            goto label_3c6d38;
        }
    }
    ctx->pc = 0x3C6D0Cu;
label_3c6d0c:
    // 0x3c6d0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6d10:
    // 0x3c6d10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d14:
    // 0x3c6d14: 0xc0efa74  jal         func_3BE9D0
label_3c6d18:
    if (ctx->pc == 0x3C6D18u) {
        ctx->pc = 0x3C6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D14u;
        // 0x3c6d18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D1Cu;
        goto label_3c6d1c;
    }
    ctx->pc = 0x3C6D14u;
    SET_GPR_U32(ctx, 31, 0x3C6D1Cu);
    ctx->pc = 0x3C6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6D14u;
    // 0x3c6d18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3C6D14u, 0x3C6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6D1Cu;
label_3c6d1c:
    // 0x3c6d1c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c6d20:
    // 0x3c6d20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6d24:
    // 0x3c6d24: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3c6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c6d28:
    // 0x3c6d28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6d2c:
    // 0x3c6d2c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3c6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3c6d30:
    // 0x3c6d30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c6d34:
    // 0x3c6d34: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3c6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3c6d38:
    // 0x3c6d38: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3c6d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3c6d3c:
    // 0x3c6d3c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3c6d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3c6d40:
    // 0x3c6d40: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6d44:
    // 0x3c6d44: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_3c6d48:
    if (ctx->pc == 0x3C6D48u) {
        ctx->pc = 0x3C6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D44u;
        // 0x3c6d48: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D4Cu;
        goto label_3c6d4c;
    }
    ctx->pc = 0x3C6D44u;
    {
        const bool branch_taken_0x3c6d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D44u;
        // 0x3c6d48: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d44) {
            ctx->pc = 0x3C6C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6c20;
        }
    }
    ctx->pc = 0x3C6D4Cu;
label_3c6d4c:
    // 0x3c6d4c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3c6d50:
    if (ctx->pc == 0x3C6D50u) {
        ctx->pc = 0x3C6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D4Cu;
        // 0x3c6d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D54u;
        goto label_3c6d54;
    }
    ctx->pc = 0x3C6D4Cu;
    {
        const bool branch_taken_0x3c6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D4Cu;
        // 0x3c6d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d4c) {
            ctx->pc = 0x3C6EC8u;
            goto label_3c6ec8;
        }
    }
    ctx->pc = 0x3C6D54u;
label_3c6d54:
    // 0x3c6d54: 0x0  nop
    ctx->pc = 0x3c6d54u;
    // NOP
label_3c6d58:
    // 0x3c6d58: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_3c6d5c:
    if (ctx->pc == 0x3C6D5Cu) {
        ctx->pc = 0x3C6D60u;
        goto label_3c6d60;
    }
    ctx->pc = 0x3C6D58u;
    {
        const bool branch_taken_0x3c6d58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6d58) {
            ctx->pc = 0x3C6D80u;
            goto label_3c6d80;
        }
    }
    ctx->pc = 0x3C6D60u;
label_3c6d60:
    // 0x3c6d60: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3c6d60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d64:
    // 0x3c6d64: 0x0  nop
    ctx->pc = 0x3c6d64u;
    // NOP
label_3c6d68:
    // 0x3c6d68: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x3c6d68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c6d6c:
    // 0x3c6d6c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x3c6d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3c6d70:
    // 0x3c6d70: 0x0  nop
    ctx->pc = 0x3c6d70u;
    // NOP
label_3c6d74:
    // 0x3c6d74: 0x0  nop
    ctx->pc = 0x3c6d74u;
    // NOP
label_3c6d78:
    // 0x3c6d78: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_3c6d7c:
    if (ctx->pc == 0x3C6D7Cu) {
        ctx->pc = 0x3C6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D78u;
        // 0x3c6d7c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D80u;
        goto label_3c6d80;
    }
    ctx->pc = 0x3C6D78u;
    {
        const bool branch_taken_0x3c6d78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D78u;
        // 0x3c6d7c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d78) {
            ctx->pc = 0x3C6D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6d68;
        }
    }
    ctx->pc = 0x3C6D80u;
label_3c6d80:
    // 0x3c6d80: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_3c6d84:
    if (ctx->pc == 0x3C6D84u) {
        ctx->pc = 0x3C6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D80u;
        // 0x3c6d84: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D88u;
        goto label_3c6d88;
    }
    ctx->pc = 0x3C6D80u;
    {
        const bool branch_taken_0x3c6d80 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6d80) {
            ctx->pc = 0x3C6D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6D80u;
            // 0x3c6d84: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6DB8u;
            goto label_3c6db8;
        }
    }
    ctx->pc = 0x3C6D88u;
label_3c6d88:
    // 0x3c6d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c6d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d8c:
    // 0x3c6d8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c6d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c6d90:
    // 0x3c6d90: 0xc0f1680  jal         func_3C5A00
label_3c6d94:
    if (ctx->pc == 0x3C6D94u) {
        ctx->pc = 0x3C6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D90u;
        // 0x3c6d94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D98u;
        goto label_3c6d98;
    }
    ctx->pc = 0x3C6D90u;
    SET_GPR_U32(ctx, 31, 0x3C6D98u);
    ctx->pc = 0x3C6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6D90u;
    // 0x3c6d94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A00u, 0x3C6D90u, 0x3C6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6D98u;
label_3c6d98:
    // 0x3c6d98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c6d98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d9c:
    // 0x3c6d9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c6da0:
    if (ctx->pc == 0x3C6DA0u) {
        ctx->pc = 0x3C6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D9Cu;
        // 0x3c6da0: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DA4u;
        goto label_3c6da4;
    }
    ctx->pc = 0x3C6D9Cu;
    {
        const bool branch_taken_0x3c6d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D9Cu;
        // 0x3c6da0: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d9c) {
            ctx->pc = 0x3C6DACu;
            goto label_3c6dac;
        }
    }
    ctx->pc = 0x3C6DA4u;
label_3c6da4:
    // 0x3c6da4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c6da8:
    if (ctx->pc == 0x3C6DA8u) {
        ctx->pc = 0x3C6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DA4u;
        // 0x3c6da8: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DACu;
        goto label_3c6dac;
    }
    ctx->pc = 0x3C6DA4u;
    {
        const bool branch_taken_0x3c6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DA4u;
        // 0x3c6da8: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6da4) {
            ctx->pc = 0x3C6DB0u;
            goto label_3c6db0;
        }
    }
    ctx->pc = 0x3C6DACu;
label_3c6dac:
    // 0x3c6dac: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x3c6dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c6db0:
    // 0x3c6db0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3c6db0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6db4:
    // 0x3c6db4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3c6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c6db8:
    // 0x3c6db8: 0x255202b  sltu        $a0, $s2, $s5
    ctx->pc = 0x3c6db8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3c6dbc:
    // 0x3c6dbc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3c6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c6dc0:
    // 0x3c6dc0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c6dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6dc4:
    // 0x3c6dc4: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x3c6dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6dc8:
    // 0x3c6dc8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3c6dc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c6dcc:
    // 0x3c6dcc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3c6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c6dd0:
    // 0x3c6dd0: 0x2a4380a  movz        $a3, $s5, $a0
    ctx->pc = 0x3c6dd0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 21));
label_3c6dd4:
    // 0x3c6dd4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3c6dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3c6dd8:
    // 0x3c6dd8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3c6ddc:
    if (ctx->pc == 0x3C6DDCu) {
        ctx->pc = 0x3C6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DD8u;
        // 0x3c6ddc: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DE0u;
        goto label_3c6de0;
    }
    ctx->pc = 0x3C6DD8u;
    {
        const bool branch_taken_0x3c6dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DD8u;
        // 0x3c6ddc: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6dd8) {
            ctx->pc = 0x3C6E1Cu;
            goto label_3c6e1c;
        }
    }
    ctx->pc = 0x3C6DE0u;
label_3c6de0:
    // 0x3c6de0: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x3c6de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3c6de4:
    // 0x3c6de4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3c6de8:
    if (ctx->pc == 0x3C6DE8u) {
        ctx->pc = 0x3C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DE4u;
        // 0x3c6de8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DECu;
        goto label_3c6dec;
    }
    ctx->pc = 0x3C6DE4u;
    {
        const bool branch_taken_0x3c6de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DE4u;
        // 0x3c6de8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6de4) {
            ctx->pc = 0x3C6E1Cu;
            goto label_3c6e1c;
        }
    }
    ctx->pc = 0x3C6DECu;
label_3c6dec:
    // 0x3c6dec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6df0:
    // 0x3c6df0: 0xc0efa74  jal         func_3BE9D0
label_3c6df4:
    if (ctx->pc == 0x3C6DF4u) {
        ctx->pc = 0x3C6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DF0u;
        // 0x3c6df4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DF8u;
        goto label_3c6df8;
    }
    ctx->pc = 0x3C6DF0u;
    SET_GPR_U32(ctx, 31, 0x3C6DF8u);
    ctx->pc = 0x3C6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6DF0u;
    // 0x3c6df4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3C6DF0u, 0x3C6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DF8u;
label_3c6df8:
    // 0x3c6df8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6dfc:
    // 0x3c6dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6e00:
    // 0x3c6e00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c6e04:
    // 0x3c6e04: 0xc0f1a3a  jal         func_3C68E8
label_3c6e08:
    if (ctx->pc == 0x3C6E08u) {
        ctx->pc = 0x3C6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E04u;
        // 0x3c6e08: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E0Cu;
        goto label_3c6e0c;
    }
    ctx->pc = 0x3C6E04u;
    SET_GPR_U32(ctx, 31, 0x3C6E0Cu);
    ctx->pc = 0x3C6E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6E04u;
    // 0x3c6e08: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E8u, 0x3C6E04u, 0x3C6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6E0Cu;
label_3c6e0c:
    // 0x3c6e0c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_3c6e10:
    if (ctx->pc == 0x3C6E10u) {
        ctx->pc = 0x3C6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E0Cu;
        // 0x3c6e10: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E14u;
        goto label_3c6e14;
    }
    ctx->pc = 0x3C6E0Cu;
    {
        const bool branch_taken_0x3c6e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E0Cu;
        // 0x3c6e10: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e0c) {
            ctx->pc = 0x3C6EB8u;
            goto label_3c6eb8;
        }
    }
    ctx->pc = 0x3C6E14u;
label_3c6e14:
    // 0x3c6e14: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c6e18:
    if (ctx->pc == 0x3C6E18u) {
        ctx->pc = 0x3C6E1Cu;
        goto label_3c6e1c;
    }
    ctx->pc = 0x3C6E14u;
    {
        const bool branch_taken_0x3c6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e14) {
            ctx->pc = 0x3C6E80u;
            goto label_3c6e80;
        }
    }
    ctx->pc = 0x3C6E1Cu;
label_3c6e1c:
    // 0x3c6e1c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3c6e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3c6e20:
    // 0x3c6e20: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3c6e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3c6e24:
    // 0x3c6e24: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3c6e28:
    if (ctx->pc == 0x3C6E28u) {
        ctx->pc = 0x3C6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E24u;
        // 0x3c6e28: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E2Cu;
        goto label_3c6e2c;
    }
    ctx->pc = 0x3C6E24u;
    {
        const bool branch_taken_0x3c6e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e24) {
            ctx->pc = 0x3C6E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6E24u;
            // 0x3c6e28: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6E54u;
            goto label_3c6e54;
        }
    }
    ctx->pc = 0x3C6E2Cu;
label_3c6e2c:
    // 0x3c6e2c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3c6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3c6e30:
    // 0x3c6e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c6e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6e34:
    // 0x3c6e34: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3c6e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c6e38:
    // 0x3c6e38: 0x40f809  jalr        $v0
label_3c6e3c:
    if (ctx->pc == 0x3C6E3Cu) {
        ctx->pc = 0x3C6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E38u;
        // 0x3c6e3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E40u;
        goto label_3c6e40;
    }
    ctx->pc = 0x3C6E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6E40u);
        ctx->pc = 0x3C6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E38u;
        // 0x3c6e3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6E38u, 0x3C6E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6E40u;
label_3c6e40:
    // 0x3c6e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6e44:
    // 0x3c6e44: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_3c6e48:
    if (ctx->pc == 0x3C6E48u) {
        ctx->pc = 0x3C6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E44u;
        // 0x3c6e48: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E4Cu;
        goto label_3c6e4c;
    }
    ctx->pc = 0x3C6E44u;
    {
        const bool branch_taken_0x3c6e44 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E44u;
        // 0x3c6e48: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e44) {
            ctx->pc = 0x3C6EB8u;
            goto label_3c6eb8;
        }
    }
    ctx->pc = 0x3C6E4Cu;
label_3c6e4c:
    // 0x3c6e4c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c6e50:
    if (ctx->pc == 0x3C6E50u) {
        ctx->pc = 0x3C6E54u;
        goto label_3c6e54;
    }
    ctx->pc = 0x3C6E4Cu;
    {
        const bool branch_taken_0x3c6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e4c) {
            ctx->pc = 0x3C6E80u;
            goto label_3c6e80;
        }
    }
    ctx->pc = 0x3C6E54u;
label_3c6e54:
    // 0x3c6e54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6e58:
    // 0x3c6e58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6e5c:
    // 0x3c6e5c: 0xc0efa74  jal         func_3BE9D0
label_3c6e60:
    if (ctx->pc == 0x3C6E60u) {
        ctx->pc = 0x3C6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E5Cu;
        // 0x3c6e60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E64u;
        goto label_3c6e64;
    }
    ctx->pc = 0x3C6E5Cu;
    SET_GPR_U32(ctx, 31, 0x3C6E64u);
    ctx->pc = 0x3C6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6E5Cu;
    // 0x3c6e60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3C6E5Cu, 0x3C6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6E64u;
label_3c6e64:
    // 0x3c6e64: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c6e68:
    // 0x3c6e68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6e6c:
    // 0x3c6e6c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3c6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c6e70:
    // 0x3c6e70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6e74:
    // 0x3c6e74: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3c6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3c6e78:
    // 0x3c6e78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c6e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c6e7c:
    // 0x3c6e7c: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x3c6e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_3c6e80:
    // 0x3c6e80: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_3c6e84:
    if (ctx->pc == 0x3C6E84u) {
        ctx->pc = 0x3C6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E80u;
        // 0x3c6e84: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E88u;
        goto label_3c6e88;
    }
    ctx->pc = 0x3C6E80u;
    {
        const bool branch_taken_0x3c6e80 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6e80) {
            ctx->pc = 0x3C6E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6E80u;
            // 0x3c6e84: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6E9Cu;
            goto label_3c6e9c;
        }
    }
    ctx->pc = 0x3C6E88u;
label_3c6e88:
    // 0x3c6e88: 0xc0f1a3a  jal         func_3C68E8
label_3c6e8c:
    if (ctx->pc == 0x3C6E8Cu) {
        ctx->pc = 0x3C6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E88u;
        // 0x3c6e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E90u;
        goto label_3c6e90;
    }
    ctx->pc = 0x3C6E88u;
    SET_GPR_U32(ctx, 31, 0x3C6E90u);
    ctx->pc = 0x3C6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6E88u;
    // 0x3c6e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E8u, 0x3C6E88u, 0x3C6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6E90u;
label_3c6e90:
    // 0x3c6e90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3c6e94:
    if (ctx->pc == 0x3C6E94u) {
        ctx->pc = 0x3C6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E90u;
        // 0x3c6e94: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6E98u;
        goto label_3c6e98;
    }
    ctx->pc = 0x3C6E90u;
    {
        const bool branch_taken_0x3c6e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E90u;
        // 0x3c6e94: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e90) {
            ctx->pc = 0x3C6EB8u;
            goto label_3c6eb8;
        }
    }
    ctx->pc = 0x3C6E98u;
label_3c6e98:
    // 0x3c6e98: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x3c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3c6e9c:
    // 0x3c6e9c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3c6e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3c6ea0:
    // 0x3c6ea0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3c6ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3c6ea4:
    // 0x3c6ea4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6ea8:
    // 0x3c6ea8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_3c6eac:
    if (ctx->pc == 0x3C6EACu) {
        ctx->pc = 0x3C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EA8u;
        // 0x3c6eac: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6EB0u;
        goto label_3c6eb0;
    }
    ctx->pc = 0x3C6EA8u;
    {
        const bool branch_taken_0x3c6ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EA8u;
        // 0x3c6eac: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ea8) {
            ctx->pc = 0x3C6D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6d58;
        }
    }
    ctx->pc = 0x3C6EB0u;
label_3c6eb0:
    // 0x3c6eb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c6eb4:
    if (ctx->pc == 0x3C6EB4u) {
        ctx->pc = 0x3C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EB0u;
        // 0x3c6eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6EB8u;
        goto label_3c6eb8;
    }
    ctx->pc = 0x3C6EB0u;
    {
        const bool branch_taken_0x3c6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EB0u;
        // 0x3c6eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6eb0) {
            ctx->pc = 0x3C6EC8u;
            goto label_3c6ec8;
        }
    }
    ctx->pc = 0x3C6EB8u;
label_3c6eb8:
    // 0x3c6eb8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3c6eb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c6ebc:
    // 0x3c6ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c6ec0:
    // 0x3c6ec0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3c6ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3c6ec4:
    // 0x3c6ec4: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x3c6ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_3c6ec8:
    // 0x3c6ec8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c6ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c6ecc:
    // 0x3c6ecc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c6eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c6ed0:
    // 0x3c6ed0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c6ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c6ed4:
    // 0x3c6ed4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c6ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c6ed8:
    // 0x3c6ed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c6ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6edc:
    // 0x3c6edc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3c6edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6ee0:
    // 0x3c6ee0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3c6ee0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c6ee4:
    // 0x3c6ee4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3c6ee4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6ee8:
    // 0x3c6ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c6ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6eec:
    // 0x3c6eec: 0x3e00008  jr          $ra
label_3c6ef0:
    if (ctx->pc == 0x3C6EF0u) {
        ctx->pc = 0x3C6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EECu;
        // 0x3c6ef0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6EF4u;
        goto label_3c6ef4;
    }
    ctx->pc = 0x3C6EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6EECu;
        // 0x3c6ef0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6EF4u;
label_3c6ef4:
    // 0x3c6ef4: 0x0  nop
    ctx->pc = 0x3c6ef4u;
    // NOP
    ctx->pc = 0x3c6ef8u;
}
