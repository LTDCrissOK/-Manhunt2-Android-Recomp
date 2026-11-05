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

// Function: sub_00216B00
// Address: 0x216b00 - 0x216ec0
void sub_00216B00_0x216b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216B00_0x216b00");
#endif

    switch (ctx->pc) {
        case 0x216b00u: goto label_216b00;
        case 0x216b04u: goto label_216b04;
        case 0x216b08u: goto label_216b08;
        case 0x216b0cu: goto label_216b0c;
        case 0x216b10u: goto label_216b10;
        case 0x216b14u: goto label_216b14;
        case 0x216b18u: goto label_216b18;
        case 0x216b1cu: goto label_216b1c;
        case 0x216b20u: goto label_216b20;
        case 0x216b24u: goto label_216b24;
        case 0x216b28u: goto label_216b28;
        case 0x216b2cu: goto label_216b2c;
        case 0x216b30u: goto label_216b30;
        case 0x216b34u: goto label_216b34;
        case 0x216b38u: goto label_216b38;
        case 0x216b3cu: goto label_216b3c;
        case 0x216b40u: goto label_216b40;
        case 0x216b44u: goto label_216b44;
        case 0x216b48u: goto label_216b48;
        case 0x216b4cu: goto label_216b4c;
        case 0x216b50u: goto label_216b50;
        case 0x216b54u: goto label_216b54;
        case 0x216b58u: goto label_216b58;
        case 0x216b5cu: goto label_216b5c;
        case 0x216b60u: goto label_216b60;
        case 0x216b64u: goto label_216b64;
        case 0x216b68u: goto label_216b68;
        case 0x216b6cu: goto label_216b6c;
        case 0x216b70u: goto label_216b70;
        case 0x216b74u: goto label_216b74;
        case 0x216b78u: goto label_216b78;
        case 0x216b7cu: goto label_216b7c;
        case 0x216b80u: goto label_216b80;
        case 0x216b84u: goto label_216b84;
        case 0x216b88u: goto label_216b88;
        case 0x216b8cu: goto label_216b8c;
        case 0x216b90u: goto label_216b90;
        case 0x216b94u: goto label_216b94;
        case 0x216b98u: goto label_216b98;
        case 0x216b9cu: goto label_216b9c;
        case 0x216ba0u: goto label_216ba0;
        case 0x216ba4u: goto label_216ba4;
        case 0x216ba8u: goto label_216ba8;
        case 0x216bacu: goto label_216bac;
        case 0x216bb0u: goto label_216bb0;
        case 0x216bb4u: goto label_216bb4;
        case 0x216bb8u: goto label_216bb8;
        case 0x216bbcu: goto label_216bbc;
        case 0x216bc0u: goto label_216bc0;
        case 0x216bc4u: goto label_216bc4;
        case 0x216bc8u: goto label_216bc8;
        case 0x216bccu: goto label_216bcc;
        case 0x216bd0u: goto label_216bd0;
        case 0x216bd4u: goto label_216bd4;
        case 0x216bd8u: goto label_216bd8;
        case 0x216bdcu: goto label_216bdc;
        case 0x216be0u: goto label_216be0;
        case 0x216be4u: goto label_216be4;
        case 0x216be8u: goto label_216be8;
        case 0x216becu: goto label_216bec;
        case 0x216bf0u: goto label_216bf0;
        case 0x216bf4u: goto label_216bf4;
        case 0x216bf8u: goto label_216bf8;
        case 0x216bfcu: goto label_216bfc;
        case 0x216c00u: goto label_216c00;
        case 0x216c04u: goto label_216c04;
        case 0x216c08u: goto label_216c08;
        case 0x216c0cu: goto label_216c0c;
        case 0x216c10u: goto label_216c10;
        case 0x216c14u: goto label_216c14;
        case 0x216c18u: goto label_216c18;
        case 0x216c1cu: goto label_216c1c;
        case 0x216c20u: goto label_216c20;
        case 0x216c24u: goto label_216c24;
        case 0x216c28u: goto label_216c28;
        case 0x216c2cu: goto label_216c2c;
        case 0x216c30u: goto label_216c30;
        case 0x216c34u: goto label_216c34;
        case 0x216c38u: goto label_216c38;
        case 0x216c3cu: goto label_216c3c;
        case 0x216c40u: goto label_216c40;
        case 0x216c44u: goto label_216c44;
        case 0x216c48u: goto label_216c48;
        case 0x216c4cu: goto label_216c4c;
        case 0x216c50u: goto label_216c50;
        case 0x216c54u: goto label_216c54;
        case 0x216c58u: goto label_216c58;
        case 0x216c5cu: goto label_216c5c;
        case 0x216c60u: goto label_216c60;
        case 0x216c64u: goto label_216c64;
        case 0x216c68u: goto label_216c68;
        case 0x216c6cu: goto label_216c6c;
        case 0x216c70u: goto label_216c70;
        case 0x216c74u: goto label_216c74;
        case 0x216c78u: goto label_216c78;
        case 0x216c7cu: goto label_216c7c;
        case 0x216c80u: goto label_216c80;
        case 0x216c84u: goto label_216c84;
        case 0x216c88u: goto label_216c88;
        case 0x216c8cu: goto label_216c8c;
        case 0x216c90u: goto label_216c90;
        case 0x216c94u: goto label_216c94;
        case 0x216c98u: goto label_216c98;
        case 0x216c9cu: goto label_216c9c;
        case 0x216ca0u: goto label_216ca0;
        case 0x216ca4u: goto label_216ca4;
        case 0x216ca8u: goto label_216ca8;
        case 0x216cacu: goto label_216cac;
        case 0x216cb0u: goto label_216cb0;
        case 0x216cb4u: goto label_216cb4;
        case 0x216cb8u: goto label_216cb8;
        case 0x216cbcu: goto label_216cbc;
        case 0x216cc0u: goto label_216cc0;
        case 0x216cc4u: goto label_216cc4;
        case 0x216cc8u: goto label_216cc8;
        case 0x216cccu: goto label_216ccc;
        case 0x216cd0u: goto label_216cd0;
        case 0x216cd4u: goto label_216cd4;
        case 0x216cd8u: goto label_216cd8;
        case 0x216cdcu: goto label_216cdc;
        case 0x216ce0u: goto label_216ce0;
        case 0x216ce4u: goto label_216ce4;
        case 0x216ce8u: goto label_216ce8;
        case 0x216cecu: goto label_216cec;
        case 0x216cf0u: goto label_216cf0;
        case 0x216cf4u: goto label_216cf4;
        case 0x216cf8u: goto label_216cf8;
        case 0x216cfcu: goto label_216cfc;
        case 0x216d00u: goto label_216d00;
        case 0x216d04u: goto label_216d04;
        case 0x216d08u: goto label_216d08;
        case 0x216d0cu: goto label_216d0c;
        case 0x216d10u: goto label_216d10;
        case 0x216d14u: goto label_216d14;
        case 0x216d18u: goto label_216d18;
        case 0x216d1cu: goto label_216d1c;
        case 0x216d20u: goto label_216d20;
        case 0x216d24u: goto label_216d24;
        case 0x216d28u: goto label_216d28;
        case 0x216d2cu: goto label_216d2c;
        case 0x216d30u: goto label_216d30;
        case 0x216d34u: goto label_216d34;
        case 0x216d38u: goto label_216d38;
        case 0x216d3cu: goto label_216d3c;
        case 0x216d40u: goto label_216d40;
        case 0x216d44u: goto label_216d44;
        case 0x216d48u: goto label_216d48;
        case 0x216d4cu: goto label_216d4c;
        case 0x216d50u: goto label_216d50;
        case 0x216d54u: goto label_216d54;
        case 0x216d58u: goto label_216d58;
        case 0x216d5cu: goto label_216d5c;
        case 0x216d60u: goto label_216d60;
        case 0x216d64u: goto label_216d64;
        case 0x216d68u: goto label_216d68;
        case 0x216d6cu: goto label_216d6c;
        case 0x216d70u: goto label_216d70;
        case 0x216d74u: goto label_216d74;
        case 0x216d78u: goto label_216d78;
        case 0x216d7cu: goto label_216d7c;
        case 0x216d80u: goto label_216d80;
        case 0x216d84u: goto label_216d84;
        case 0x216d88u: goto label_216d88;
        case 0x216d8cu: goto label_216d8c;
        case 0x216d90u: goto label_216d90;
        case 0x216d94u: goto label_216d94;
        case 0x216d98u: goto label_216d98;
        case 0x216d9cu: goto label_216d9c;
        case 0x216da0u: goto label_216da0;
        case 0x216da4u: goto label_216da4;
        case 0x216da8u: goto label_216da8;
        case 0x216dacu: goto label_216dac;
        case 0x216db0u: goto label_216db0;
        case 0x216db4u: goto label_216db4;
        case 0x216db8u: goto label_216db8;
        case 0x216dbcu: goto label_216dbc;
        case 0x216dc0u: goto label_216dc0;
        case 0x216dc4u: goto label_216dc4;
        case 0x216dc8u: goto label_216dc8;
        case 0x216dccu: goto label_216dcc;
        case 0x216dd0u: goto label_216dd0;
        case 0x216dd4u: goto label_216dd4;
        case 0x216dd8u: goto label_216dd8;
        case 0x216ddcu: goto label_216ddc;
        case 0x216de0u: goto label_216de0;
        case 0x216de4u: goto label_216de4;
        case 0x216de8u: goto label_216de8;
        case 0x216decu: goto label_216dec;
        case 0x216df0u: goto label_216df0;
        case 0x216df4u: goto label_216df4;
        case 0x216df8u: goto label_216df8;
        case 0x216dfcu: goto label_216dfc;
        case 0x216e00u: goto label_216e00;
        case 0x216e04u: goto label_216e04;
        case 0x216e08u: goto label_216e08;
        case 0x216e0cu: goto label_216e0c;
        case 0x216e10u: goto label_216e10;
        case 0x216e14u: goto label_216e14;
        case 0x216e18u: goto label_216e18;
        case 0x216e1cu: goto label_216e1c;
        case 0x216e20u: goto label_216e20;
        case 0x216e24u: goto label_216e24;
        case 0x216e28u: goto label_216e28;
        case 0x216e2cu: goto label_216e2c;
        case 0x216e30u: goto label_216e30;
        case 0x216e34u: goto label_216e34;
        case 0x216e38u: goto label_216e38;
        case 0x216e3cu: goto label_216e3c;
        case 0x216e40u: goto label_216e40;
        case 0x216e44u: goto label_216e44;
        case 0x216e48u: goto label_216e48;
        case 0x216e4cu: goto label_216e4c;
        case 0x216e50u: goto label_216e50;
        case 0x216e54u: goto label_216e54;
        case 0x216e58u: goto label_216e58;
        case 0x216e5cu: goto label_216e5c;
        case 0x216e60u: goto label_216e60;
        case 0x216e64u: goto label_216e64;
        case 0x216e68u: goto label_216e68;
        case 0x216e6cu: goto label_216e6c;
        case 0x216e70u: goto label_216e70;
        case 0x216e74u: goto label_216e74;
        case 0x216e78u: goto label_216e78;
        case 0x216e7cu: goto label_216e7c;
        case 0x216e80u: goto label_216e80;
        case 0x216e84u: goto label_216e84;
        case 0x216e88u: goto label_216e88;
        case 0x216e8cu: goto label_216e8c;
        case 0x216e90u: goto label_216e90;
        case 0x216e94u: goto label_216e94;
        case 0x216e98u: goto label_216e98;
        case 0x216e9cu: goto label_216e9c;
        case 0x216ea0u: goto label_216ea0;
        case 0x216ea4u: goto label_216ea4;
        case 0x216ea8u: goto label_216ea8;
        case 0x216eacu: goto label_216eac;
        case 0x216eb0u: goto label_216eb0;
        case 0x216eb4u: goto label_216eb4;
        case 0x216eb8u: goto label_216eb8;
        case 0x216ebcu: goto label_216ebc;
        default: break;
    }

    ctx->pc = 0x216b00u;

label_216b00:
    // 0x216b00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x216b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_216b04:
    // 0x216b04: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x216b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_216b08:
    // 0x216b08: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x216b08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_216b0c:
    // 0x216b0c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x216b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_216b10:
    // 0x216b10: 0x8e0495cc  lw          $a0, -0x6A34($s0)
    ctx->pc = 0x216b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940108)));
label_216b14:
    // 0x216b14: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x216b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_216b18:
    // 0x216b18: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x216b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_216b1c:
    // 0x216b1c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x216b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_216b20:
    // 0x216b20: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x216b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_216b24:
    // 0x216b24: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x216b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_216b28:
    // 0x216b28: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x216b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_216b2c:
    // 0x216b2c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x216b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_216b30:
    // 0x216b30: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_216b34:
    if (ctx->pc == 0x216B34u) {
        ctx->pc = 0x216B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B30u;
        // 0x216b34: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B38u;
        goto label_216b38;
    }
    ctx->pc = 0x216B30u;
    {
        const bool branch_taken_0x216b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B30u;
        // 0x216b34: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b30) {
            ctx->pc = 0x216B4Cu;
            goto label_216b4c;
        }
    }
    ctx->pc = 0x216B38u;
label_216b38:
    // 0x216b38: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x216b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_216b3c:
    // 0x216b3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x216b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_216b40:
    // 0x216b40: 0x40f809  jalr        $v0
label_216b44:
    if (ctx->pc == 0x216B44u) {
        ctx->pc = 0x216B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B40u;
        // 0x216b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B48u;
        goto label_216b48;
    }
    ctx->pc = 0x216B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216B48u);
        ctx->pc = 0x216B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B40u;
        // 0x216b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B40u, 0x216B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216B48u;
label_216b48:
    // 0x216b48: 0xae0095cc  sw          $zero, -0x6A34($s0)
    ctx->pc = 0x216b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940108), GPR_U32(ctx, 0));
label_216b4c:
    // 0x216b4c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x216b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_216b50:
    // 0x216b50: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x216b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
label_216b54:
    // 0x216b54: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x216b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_216b58:
    // 0x216b58: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x216b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_216b5c:
    // 0x216b5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x216b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216b60:
    // 0x216b60: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x216b60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
label_216b64:
    // 0x216b64: 0x3c17004a  lui         $s7, 0x4A
    ctx->pc = 0x216b64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)74 << 16));
label_216b68:
    // 0x216b68: 0x3c1e004a  lui         $fp, 0x4A
    ctx->pc = 0x216b68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)74 << 16));
label_216b6c:
    // 0x216b6c: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x216b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_216b70:
    // 0x216b70: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x216b70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_216b74:
    // 0x216b74: 0x1000000e  b           . + 4 + (0xE << 2)
label_216b78:
    if (ctx->pc == 0x216B78u) {
        ctx->pc = 0x216B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B74u;
        // 0x216b78: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B7Cu;
        goto label_216b7c;
    }
    ctx->pc = 0x216B74u;
    {
        const bool branch_taken_0x216b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B74u;
        // 0x216b78: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b74) {
            ctx->pc = 0x216BB0u;
            goto label_216bb0;
        }
    }
    ctx->pc = 0x216B7Cu;
label_216b7c:
    // 0x216b7c: 0x0  nop
    ctx->pc = 0x216b7cu;
    // NOP
label_216b80:
    // 0x216b80: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x216b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_216b84:
    // 0x216b84: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x216b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_216b88:
    // 0x216b88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_216b8c:
    if (ctx->pc == 0x216B8Cu) {
        ctx->pc = 0x216B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B88u;
        // 0x216b8c: 0x26433500  addiu       $v1, $s2, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B90u;
        goto label_216b90;
    }
    ctx->pc = 0x216B88u;
    {
        const bool branch_taken_0x216b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B88u;
        // 0x216b8c: 0x26433500  addiu       $v1, $s2, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b88) {
            ctx->pc = 0x216BB4u;
            goto label_216bb4;
        }
    }
    ctx->pc = 0x216B90u;
label_216b90:
    // 0x216b90: 0x8ca40388  lw          $a0, 0x388($a1)
    ctx->pc = 0x216b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 904)));
label_216b94:
    // 0x216b94: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_216b98:
    if (ctx->pc == 0x216B98u) {
        ctx->pc = 0x216B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B94u;
        // 0x216b98: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216B9Cu;
        goto label_216b9c;
    }
    ctx->pc = 0x216B94u;
    {
        const bool branch_taken_0x216b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b94) {
            ctx->pc = 0x216B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216B94u;
            // 0x216b98: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BB8u;
            goto label_216bb8;
        }
    }
    ctx->pc = 0x216B9Cu;
label_216b9c:
    // 0x216b9c: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x216b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_216ba0:
    // 0x216ba0: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
label_216ba4:
    if (ctx->pc == 0x216BA4u) {
        ctx->pc = 0x216BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA0u;
        // 0x216ba4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BA8u;
        goto label_216ba8;
    }
    ctx->pc = 0x216BA0u;
    {
        const bool branch_taken_0x216ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x216ba0) {
            ctx->pc = 0x216BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BA0u;
            // 0x216ba4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BB8u;
            goto label_216bb8;
        }
    }
    ctx->pc = 0x216BA8u;
label_216ba8:
    // 0x216ba8: 0xc09bf28  jal         func_26FCA0
label_216bac:
    if (ctx->pc == 0x216BACu) {
        ctx->pc = 0x216BB0u;
        goto label_216bb0;
    }
    ctx->pc = 0x216BA8u;
    SET_GPR_U32(ctx, 31, 0x216BB0u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x216BA8u, 0x216BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BB0u;
label_216bb0:
    // 0x216bb0: 0x26433500  addiu       $v1, $s2, 0x3500
    ctx->pc = 0x216bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
label_216bb4:
    // 0x216bb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x216bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_216bb8:
    // 0x216bb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216bbc:
    if (ctx->pc == 0x216BBCu) {
        ctx->pc = 0x216BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BB8u;
        // 0x216bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BC0u;
        goto label_216bc0;
    }
    ctx->pc = 0x216BB8u;
    {
        const bool branch_taken_0x216bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BB8u;
        // 0x216bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bb8) {
            ctx->pc = 0x216BC4u;
            goto label_216bc4;
        }
    }
    ctx->pc = 0x216BC0u;
label_216bc0:
    // 0x216bc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x216bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216bc4:
    // 0x216bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_216bc8:
    if (ctx->pc == 0x216BC8u) {
        ctx->pc = 0x216BCCu;
        goto label_216bcc;
    }
    ctx->pc = 0x216BC4u;
    {
        const bool branch_taken_0x216bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216bc4) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216BCCu;
label_216bcc:
    // 0x216bcc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x216bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_216bd0:
    // 0x216bd0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x216bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_216bd4:
    // 0x216bd4: 0x54a0ffea  bnel        $a1, $zero, . + 4 + (-0x16 << 2)
label_216bd8:
    if (ctx->pc == 0x216BD8u) {
        ctx->pc = 0x216BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BD4u;
        // 0x216bd8: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BDCu;
        goto label_216bdc;
    }
    ctx->pc = 0x216BD4u;
    {
        const bool branch_taken_0x216bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x216bd4) {
            ctx->pc = 0x216BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BD4u;
            // 0x216bd8: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216b80;
        }
    }
    ctx->pc = 0x216BDCu;
label_216bdc:
    // 0x216bdc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_216be0:
    // 0x216be0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x216be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_216be4:
    // 0x216be4: 0x10000012  b           . + 4 + (0x12 << 2)
label_216be8:
    if (ctx->pc == 0x216BE8u) {
        ctx->pc = 0x216BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BE4u;
        // 0x216be8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BECu;
        goto label_216bec;
    }
    ctx->pc = 0x216BE4u;
    {
        const bool branch_taken_0x216be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BE4u;
        // 0x216be8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216be4) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216BECu;
label_216bec:
    // 0x216bec: 0x0  nop
    ctx->pc = 0x216becu;
    // NOP
label_216bf0:
    // 0x216bf0: 0xc085aa8  jal         func_216AA0
label_216bf4:
    if (ctx->pc == 0x216BF4u) {
        ctx->pc = 0x216BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BF0u;
        // 0x216bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216BF8u;
        goto label_216bf8;
    }
    ctx->pc = 0x216BF0u;
    SET_GPR_U32(ctx, 31, 0x216BF8u);
    ctx->pc = 0x216BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BF0u;
    // 0x216bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216AA0u, 0x216BF0u, 0x216BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BF8u;
label_216bf8:
    // 0x216bf8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_216bfc:
    if (ctx->pc == 0x216BFCu) {
        ctx->pc = 0x216BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BF8u;
        // 0x216bfc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C00u;
        goto label_216c00;
    }
    ctx->pc = 0x216BF8u;
    {
        const bool branch_taken_0x216bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216bf8) {
            ctx->pc = 0x216BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BF8u;
            // 0x216bfc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C20u;
            goto label_216c20;
        }
    }
    ctx->pc = 0x216C00u;
label_216c00:
    // 0x216c00: 0x26433500  addiu       $v1, $s2, 0x3500
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
label_216c04:
    // 0x216c04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x216c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_216c08:
    // 0x216c08: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_216c0c:
    if (ctx->pc == 0x216C0Cu) {
        ctx->pc = 0x216C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C08u;
        // 0x216c0c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C10u;
        goto label_216c10;
    }
    ctx->pc = 0x216C08u;
    {
        const bool branch_taken_0x216c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216c08) {
            ctx->pc = 0x216C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C08u;
            // 0x216c0c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216C10u;
label_216c10:
    // 0x216c10: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x216c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_216c14:
    // 0x216c14: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x216c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_216c18:
    // 0x216c18: 0x10000005  b           . + 4 + (0x5 << 2)
label_216c1c:
    if (ctx->pc == 0x216C1Cu) {
        ctx->pc = 0x216C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C18u;
        // 0x216c1c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C20u;
        goto label_216c20;
    }
    ctx->pc = 0x216C18u;
    {
        const bool branch_taken_0x216c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C18u;
        // 0x216c1c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c18) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216C20u;
label_216c20:
    // 0x216c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216c24:
    // 0x216c24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_216c28:
    // 0x216c28: 0x40f809  jalr        $v0
label_216c2c:
    if (ctx->pc == 0x216C2Cu) {
        ctx->pc = 0x216C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C28u;
        // 0x216c2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C30u;
        goto label_216c30;
    }
    ctx->pc = 0x216C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216C30u);
        ctx->pc = 0x216C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C28u;
        // 0x216c2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C28u, 0x216C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216C30u;
label_216c30:
    // 0x216c30: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x216c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_216c34:
    // 0x216c34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216c38:
    if (ctx->pc == 0x216C38u) {
        ctx->pc = 0x216C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C34u;
        // 0x216c38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C3Cu;
        goto label_216c3c;
    }
    ctx->pc = 0x216C34u;
    {
        const bool branch_taken_0x216c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C34u;
        // 0x216c38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c34) {
            ctx->pc = 0x216C40u;
            goto label_216c40;
        }
    }
    ctx->pc = 0x216C3Cu;
label_216c3c:
    // 0x216c3c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216c40:
    // 0x216c40: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_216c44:
    if (ctx->pc == 0x216C44u) {
        ctx->pc = 0x216C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C40u;
        // 0x216c44: 0x26623510  addiu       $v0, $s3, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C48u;
        goto label_216c48;
    }
    ctx->pc = 0x216C40u;
    {
        const bool branch_taken_0x216c40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x216C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C40u;
        // 0x216c44: 0x26623510  addiu       $v0, $s3, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c40) {
            ctx->pc = 0x216BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216bf0;
        }
    }
    ctx->pc = 0x216C48u;
label_216c48:
    // 0x216c48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_216c4c:
    // 0x216c4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x216c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216c50:
    // 0x216c50: 0x10000010  b           . + 4 + (0x10 << 2)
label_216c54:
    if (ctx->pc == 0x216C54u) {
        ctx->pc = 0x216C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C50u;
        // 0x216c54: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C58u;
        goto label_216c58;
    }
    ctx->pc = 0x216C50u;
    {
        const bool branch_taken_0x216c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C50u;
        // 0x216c54: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c50) {
            ctx->pc = 0x216C94u;
            goto label_216c94;
        }
    }
    ctx->pc = 0x216C58u;
label_216c58:
    // 0x216c58: 0xc085aa8  jal         func_216AA0
label_216c5c:
    if (ctx->pc == 0x216C5Cu) {
        ctx->pc = 0x216C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C58u;
        // 0x216c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C60u;
        goto label_216c60;
    }
    ctx->pc = 0x216C58u;
    SET_GPR_U32(ctx, 31, 0x216C60u);
    ctx->pc = 0x216C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C58u;
    // 0x216c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216AA0u, 0x216C58u, 0x216C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C60u;
label_216c60:
    // 0x216c60: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_216c64:
    if (ctx->pc == 0x216C64u) {
        ctx->pc = 0x216C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C60u;
        // 0x216c64: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C68u;
        goto label_216c68;
    }
    ctx->pc = 0x216C60u;
    {
        const bool branch_taken_0x216c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c60) {
            ctx->pc = 0x216C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C60u;
            // 0x216c64: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C84u;
            goto label_216c84;
        }
    }
    ctx->pc = 0x216C68u;
label_216c68:
    // 0x216c68: 0x26633510  addiu       $v1, $s3, 0x3510
    ctx->pc = 0x216c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13584));
label_216c6c:
    // 0x216c6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x216c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_216c70:
    // 0x216c70: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_216c74:
    if (ctx->pc == 0x216C74u) {
        ctx->pc = 0x216C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C70u;
        // 0x216c74: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C78u;
        goto label_216c78;
    }
    ctx->pc = 0x216C70u;
    {
        const bool branch_taken_0x216c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216c70) {
            ctx->pc = 0x216C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C70u;
            // 0x216c74: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C98u;
            goto label_216c98;
        }
    }
    ctx->pc = 0x216C78u;
label_216c78:
    // 0x216c78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_216c7c:
    // 0x216c7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_216c80:
    if (ctx->pc == 0x216C80u) {
        ctx->pc = 0x216C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C7Cu;
        // 0x216c80: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C84u;
        goto label_216c84;
    }
    ctx->pc = 0x216C7Cu;
    {
        const bool branch_taken_0x216c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C7Cu;
        // 0x216c80: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c7c) {
            ctx->pc = 0x216C94u;
            goto label_216c94;
        }
    }
    ctx->pc = 0x216C84u;
label_216c84:
    // 0x216c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216c88:
    // 0x216c88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_216c8c:
    // 0x216c8c: 0x40f809  jalr        $v0
label_216c90:
    if (ctx->pc == 0x216C90u) {
        ctx->pc = 0x216C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C8Cu;
        // 0x216c90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216C94u;
        goto label_216c94;
    }
    ctx->pc = 0x216C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216C94u);
        ctx->pc = 0x216C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C8Cu;
        // 0x216c90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C8Cu, 0x216C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216C94u;
label_216c94:
    // 0x216c94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x216c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_216c98:
    // 0x216c98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216c9c:
    if (ctx->pc == 0x216C9Cu) {
        ctx->pc = 0x216C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C98u;
        // 0x216c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CA0u;
        goto label_216ca0;
    }
    ctx->pc = 0x216C98u;
    {
        const bool branch_taken_0x216c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C98u;
        // 0x216c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c98) {
            ctx->pc = 0x216CA4u;
            goto label_216ca4;
        }
    }
    ctx->pc = 0x216CA0u;
label_216ca0:
    // 0x216ca0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216ca4:
    // 0x216ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216ca8:
    // 0x216ca8: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_216cac:
    if (ctx->pc == 0x216CACu) {
        ctx->pc = 0x216CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CA8u;
        // 0x216cac: 0x26e23520  addiu       $v0, $s7, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 13600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CB0u;
        goto label_216cb0;
    }
    ctx->pc = 0x216CA8u;
    {
        const bool branch_taken_0x216ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x216CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CA8u;
        // 0x216cac: 0x26e23520  addiu       $v0, $s7, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 13600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ca8) {
            ctx->pc = 0x216C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216c58;
        }
    }
    ctx->pc = 0x216CB0u;
label_216cb0:
    // 0x216cb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_216cb4:
    // 0x216cb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x216cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216cb8:
    // 0x216cb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_216cbc:
    if (ctx->pc == 0x216CBCu) {
        ctx->pc = 0x216CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CB8u;
        // 0x216cbc: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CC0u;
        goto label_216cc0;
    }
    ctx->pc = 0x216CB8u;
    {
        const bool branch_taken_0x216cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CB8u;
        // 0x216cbc: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cb8) {
            ctx->pc = 0x216CD0u;
            goto label_216cd0;
        }
    }
    ctx->pc = 0x216CC0u;
label_216cc0:
    // 0x216cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216cc4:
    // 0x216cc4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_216cc8:
    // 0x216cc8: 0x40f809  jalr        $v0
label_216ccc:
    if (ctx->pc == 0x216CCCu) {
        ctx->pc = 0x216CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CC8u;
        // 0x216ccc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CD0u;
        goto label_216cd0;
    }
    ctx->pc = 0x216CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216CD0u);
        ctx->pc = 0x216CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CC8u;
        // 0x216ccc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216CC8u, 0x216CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216CD0u;
label_216cd0:
    // 0x216cd0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x216cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_216cd4:
    // 0x216cd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216cd8:
    if (ctx->pc == 0x216CD8u) {
        ctx->pc = 0x216CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CD4u;
        // 0x216cd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CDCu;
        goto label_216cdc;
    }
    ctx->pc = 0x216CD4u;
    {
        const bool branch_taken_0x216cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CD4u;
        // 0x216cd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cd4) {
            ctx->pc = 0x216CE0u;
            goto label_216ce0;
        }
    }
    ctx->pc = 0x216CDCu;
label_216cdc:
    // 0x216cdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x216cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216ce0:
    // 0x216ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216ce4:
    // 0x216ce4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_216ce8:
    if (ctx->pc == 0x216CE8u) {
        ctx->pc = 0x216CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CE4u;
        // 0x216ce8: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CECu;
        goto label_216cec;
    }
    ctx->pc = 0x216CE4u;
    {
        const bool branch_taken_0x216ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x216ce4) {
            ctx->pc = 0x216CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216CE4u;
            // 0x216ce8: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216cc0;
        }
    }
    ctx->pc = 0x216CECu;
label_216cec:
    // 0x216cec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_216cf0:
    // 0x216cf0: 0x8c4495a8  lw          $a0, -0x6A58($v0)
    ctx->pc = 0x216cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940072)));
label_216cf4:
    // 0x216cf4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_216cf8:
    if (ctx->pc == 0x216CF8u) {
        ctx->pc = 0x216CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CF4u;
        // 0x216cf8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216CFCu;
        goto label_216cfc;
    }
    ctx->pc = 0x216CF4u;
    {
        const bool branch_taken_0x216cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216cf4) {
            ctx->pc = 0x216CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216CF4u;
            // 0x216cf8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D08u;
            goto label_216d08;
        }
    }
    ctx->pc = 0x216CFCu;
label_216cfc:
    // 0x216cfc: 0xc0f528a  jal         func_3D4A28
label_216d00:
    if (ctx->pc == 0x216D00u) {
        ctx->pc = 0x216D04u;
        goto label_216d04;
    }
    ctx->pc = 0x216CFCu;
    SET_GPR_U32(ctx, 31, 0x216D04u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x216CFCu, 0x216D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216D04u;
label_216d04:
    // 0x216d04: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x216d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_216d08:
    // 0x216d08: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x216d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_216d0c:
    // 0x216d0c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x216d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_216d10:
    // 0x216d10: 0xac8095ac  sw          $zero, -0x6A54($a0)
    ctx->pc = 0x216d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294940076), GPR_U32(ctx, 0));
label_216d14:
    // 0x216d14: 0xaca095b4  sw          $zero, -0x6A4C($a1)
    ctx->pc = 0x216d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294940084), GPR_U32(ctx, 0));
label_216d18:
    // 0x216d18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_216d1c:
    // 0x216d1c: 0xacc095b8  sw          $zero, -0x6A48($a2)
    ctx->pc = 0x216d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294940088), GPR_U32(ctx, 0));
label_216d20:
    // 0x216d20: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x216d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_216d24:
    // 0x216d24: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x216d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_216d28:
    // 0x216d28: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x216d28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_216d2c:
    // 0x216d2c: 0xac4095bc  sw          $zero, -0x6A44($v0)
    ctx->pc = 0x216d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940092), GPR_U32(ctx, 0));
label_216d30:
    // 0x216d30: 0x27d23598  addiu       $s2, $fp, 0x3598
    ctx->pc = 0x216d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 13720));
label_216d34:
    // 0x216d34: 0xac8095c0  sw          $zero, -0x6A40($a0)
    ctx->pc = 0x216d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294940096), GPR_U32(ctx, 0));
label_216d38:
    // 0x216d38: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x216d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_216d3c:
    // 0x216d3c: 0xaca095c4  sw          $zero, -0x6A3C($a1)
    ctx->pc = 0x216d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294940100), GPR_U32(ctx, 0));
label_216d40:
    // 0x216d40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x216d40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d44:
    // 0x216d44: 0xacc095c8  sw          $zero, -0x6A38($a2)
    ctx->pc = 0x216d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294940104), GPR_U32(ctx, 0));
label_216d48:
    // 0x216d48: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x216d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_216d4c:
    // 0x216d4c: 0x0  nop
    ctx->pc = 0x216d4cu;
    // NOP
label_216d50:
    // 0x216d50: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x216d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_216d54:
    // 0x216d54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x216d54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216d58:
    // 0x216d58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x216d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216d5c:
    // 0x216d5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x216d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216d60:
    // 0x216d60: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x216d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_216d64:
    // 0x216d64: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
label_216d68:
    if (ctx->pc == 0x216D68u) {
        ctx->pc = 0x216D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D64u;
        // 0x216d68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D6Cu;
        goto label_216d6c;
    }
    ctx->pc = 0x216D64u;
    {
        const bool branch_taken_0x216d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x216D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D64u;
        // 0x216d68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d64) {
            ctx->pc = 0x216D88u;
            goto label_216d88;
        }
    }
    ctx->pc = 0x216D6Cu;
label_216d6c:
    // 0x216d6c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x216d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_216d70:
    // 0x216d70: 0x0  nop
    ctx->pc = 0x216d70u;
    // NOP
label_216d74:
    // 0x216d74: 0x0  nop
    ctx->pc = 0x216d74u;
    // NOP
label_216d78:
    // 0x216d78: 0x0  nop
    ctx->pc = 0x216d78u;
    // NOP
label_216d7c:
    // 0x216d7c: 0x0  nop
    ctx->pc = 0x216d7cu;
    // NOP
label_216d80:
    // 0x216d80: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
label_216d84:
    if (ctx->pc == 0x216D84u) {
        ctx->pc = 0x216D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D80u;
        // 0x216d84: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D88u;
        goto label_216d88;
    }
    ctx->pc = 0x216D80u;
    {
        const bool branch_taken_0x216d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x216D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D80u;
        // 0x216d84: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d80) {
            ctx->pc = 0x216D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216d70;
        }
    }
    ctx->pc = 0x216D88u;
label_216d88:
    // 0x216d88: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x216d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_216d8c:
    // 0x216d8c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_216d90:
    // 0x216d90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_216d94:
    // 0x216d94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x216d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_216d98:
    // 0x216d98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x216d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_216d9c:
    // 0x216d9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216da0:
    // 0x216da0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x216da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_216da4:
    // 0x216da4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_216da8:
    // 0x216da8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x216da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_216dac:
    // 0x216dac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x216dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_216db0:
    // 0x216db0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x216db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_216db4:
    // 0x216db4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x216db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_216db8:
    // 0x216db8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x216db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_216dbc:
    // 0x216dbc: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x216dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_216dc0:
    // 0x216dc0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x216dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_216dc4:
    // 0x216dc4: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x216dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_216dc8:
    // 0x216dc8: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x216dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_216dcc:
    // 0x216dcc: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x216dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_216dd0:
    // 0x216dd0: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x216dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_216dd4:
    // 0x216dd4: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x216dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_216dd8:
    // 0x216dd8: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x216dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_216ddc:
    // 0x216ddc: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x216ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_216de0:
    // 0x216de0: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x216de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_216de4:
    // 0x216de4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x216de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_216de8:
    // 0x216de8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_216dec:
    // 0x216dec: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_216df0:
    if (ctx->pc == 0x216DF0u) {
        ctx->pc = 0x216DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DECu;
        // 0x216df0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216DF4u;
        goto label_216df4;
    }
    ctx->pc = 0x216DECu;
    {
        const bool branch_taken_0x216dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DECu;
        // 0x216df0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dec) {
            ctx->pc = 0x216E10u;
            goto label_216e10;
        }
    }
    ctx->pc = 0x216DF4u;
label_216df4:
    // 0x216df4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x216df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_216df8:
    // 0x216df8: 0x0  nop
    ctx->pc = 0x216df8u;
    // NOP
label_216dfc:
    // 0x216dfc: 0x0  nop
    ctx->pc = 0x216dfcu;
    // NOP
label_216e00:
    // 0x216e00: 0x0  nop
    ctx->pc = 0x216e00u;
    // NOP
label_216e04:
    // 0x216e04: 0x0  nop
    ctx->pc = 0x216e04u;
    // NOP
label_216e08:
    // 0x216e08: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_216e0c:
    if (ctx->pc == 0x216E0Cu) {
        ctx->pc = 0x216E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E08u;
        // 0x216e0c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E10u;
        goto label_216e10;
    }
    ctx->pc = 0x216E08u;
    {
        const bool branch_taken_0x216e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E08u;
        // 0x216e0c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e08) {
            ctx->pc = 0x216DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216df8;
        }
    }
    ctx->pc = 0x216E10u;
label_216e10:
    // 0x216e10: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_216e14:
    // 0x216e14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_216e18:
    if (ctx->pc == 0x216E18u) {
        ctx->pc = 0x216E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E14u;
        // 0x216e18: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E1Cu;
        goto label_216e1c;
    }
    ctx->pc = 0x216E14u;
    {
        const bool branch_taken_0x216e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E14u;
        // 0x216e18: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e14) {
            ctx->pc = 0x216E28u;
            goto label_216e28;
        }
    }
    ctx->pc = 0x216E1Cu;
label_216e1c:
    // 0x216e1c: 0xc0f5222  jal         func_3D4888
label_216e20:
    if (ctx->pc == 0x216E20u) {
        ctx->pc = 0x216E24u;
        goto label_216e24;
    }
    ctx->pc = 0x216E1Cu;
    SET_GPR_U32(ctx, 31, 0x216E24u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x216E1Cu, 0x216E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E24u;
label_216e24:
    // 0x216e24: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x216e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216e28:
    // 0x216e28: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x216e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_216e2c:
    // 0x216e2c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_216e30:
    if (ctx->pc == 0x216E30u) {
        ctx->pc = 0x216E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E2Cu;
        // 0x216e30: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E34u;
        goto label_216e34;
    }
    ctx->pc = 0x216E2Cu;
    {
        const bool branch_taken_0x216e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E2Cu;
        // 0x216e30: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e2c) {
            ctx->pc = 0x216D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216d50;
        }
    }
    ctx->pc = 0x216E34u;
label_216e34:
    // 0x216e34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_216e38:
    // 0x216e38: 0x8ed095d8  lw          $s0, -0x6A28($s6)
    ctx->pc = 0x216e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940120)));
label_216e3c:
    // 0x216e3c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_216e40:
    if (ctx->pc == 0x216E40u) {
        ctx->pc = 0x216E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E3Cu;
        // 0x216e40: 0xfc4095e0  sd          $zero, -0x6A20($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294940128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E44u;
        goto label_216e44;
    }
    ctx->pc = 0x216E3Cu;
    {
        const bool branch_taken_0x216e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E3Cu;
        // 0x216e40: 0xfc4095e0  sd          $zero, -0x6A20($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294940128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e3c) {
            ctx->pc = 0x216E90u;
            goto label_216e90;
        }
    }
    ctx->pc = 0x216E44u;
label_216e44:
    // 0x216e44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x216e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_216e48:
    // 0x216e48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x216e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_216e4c:
    // 0x216e4c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_216e50:
    if (ctx->pc == 0x216E50u) {
        ctx->pc = 0x216E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E4Cu;
        // 0x216e50: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E54u;
        goto label_216e54;
    }
    ctx->pc = 0x216E4Cu;
    {
        const bool branch_taken_0x216e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x216E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E4Cu;
        // 0x216e50: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e4c) {
            ctx->pc = 0x216E70u;
            goto label_216e70;
        }
    }
    ctx->pc = 0x216E54u;
label_216e54:
    // 0x216e54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x216e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_216e58:
    // 0x216e58: 0x0  nop
    ctx->pc = 0x216e58u;
    // NOP
label_216e5c:
    // 0x216e5c: 0x0  nop
    ctx->pc = 0x216e5cu;
    // NOP
label_216e60:
    // 0x216e60: 0x0  nop
    ctx->pc = 0x216e60u;
    // NOP
label_216e64:
    // 0x216e64: 0x0  nop
    ctx->pc = 0x216e64u;
    // NOP
label_216e68:
    // 0x216e68: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_216e6c:
    if (ctx->pc == 0x216E6Cu) {
        ctx->pc = 0x216E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E68u;
        // 0x216e6c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E70u;
        goto label_216e70;
    }
    ctx->pc = 0x216E68u;
    {
        const bool branch_taken_0x216e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E68u;
        // 0x216e6c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e68) {
            ctx->pc = 0x216E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216e58;
        }
    }
    ctx->pc = 0x216E70u;
label_216e70:
    // 0x216e70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_216e74:
    if (ctx->pc == 0x216E74u) {
        ctx->pc = 0x216E78u;
        goto label_216e78;
    }
    ctx->pc = 0x216E70u;
    {
        const bool branch_taken_0x216e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e70) {
            ctx->pc = 0x216E80u;
            goto label_216e80;
        }
    }
    ctx->pc = 0x216E78u;
label_216e78:
    // 0x216e78: 0xc0f5222  jal         func_3D4888
label_216e7c:
    if (ctx->pc == 0x216E7Cu) {
        ctx->pc = 0x216E80u;
        goto label_216e80;
    }
    ctx->pc = 0x216E78u;
    SET_GPR_U32(ctx, 31, 0x216E80u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x216E78u, 0x216E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E80u;
label_216e80:
    // 0x216e80: 0xc0f5222  jal         func_3D4888
label_216e84:
    if (ctx->pc == 0x216E84u) {
        ctx->pc = 0x216E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E80u;
        // 0x216e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E88u;
        goto label_216e88;
    }
    ctx->pc = 0x216E80u;
    SET_GPR_U32(ctx, 31, 0x216E88u);
    ctx->pc = 0x216E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E80u;
    // 0x216e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x216E80u, 0x216E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E88u;
label_216e88:
    // 0x216e88: 0xc087282  jal         func_21CA08
label_216e8c:
    if (ctx->pc == 0x216E8Cu) {
        ctx->pc = 0x216E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E88u;
        // 0x216e8c: 0xaec095d8  sw          $zero, -0x6A28($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294940120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E90u;
        goto label_216e90;
    }
    ctx->pc = 0x216E88u;
    SET_GPR_U32(ctx, 31, 0x216E90u);
    ctx->pc = 0x216E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E88u;
    // 0x216e8c: 0xaec095d8  sw          $zero, -0x6A28($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294940120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA08u, 0x216E88u, 0x216E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E90u;
label_216e90:
    // 0x216e90: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x216e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_216e94:
    // 0x216e94: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x216e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_216e98:
    // 0x216e98: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x216e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_216e9c:
    // 0x216e9c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x216e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_216ea0:
    // 0x216ea0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x216ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_216ea4:
    // 0x216ea4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x216ea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_216ea8:
    // 0x216ea8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x216ea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_216eac:
    // 0x216eac: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x216eacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_216eb0:
    // 0x216eb0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x216eb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_216eb4:
    // 0x216eb4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x216eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_216eb8:
    // 0x216eb8: 0x3e00008  jr          $ra
label_216ebc:
    if (ctx->pc == 0x216EBCu) {
        ctx->pc = 0x216EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EB8u;
        // 0x216ebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216EC0u;
        goto label_fallthrough_0x216eb8;
    }
    ctx->pc = 0x216EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EB8u;
        // 0x216ebc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x216eb8:
    ctx->pc = 0x216EC0u;
}
