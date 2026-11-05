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

// Function: sub_00385B00
// Address: 0x385b00 - 0x385c70
void sub_00385B00_0x385b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385B00_0x385b00");
#endif

    switch (ctx->pc) {
        case 0x385b00u: goto label_385b00;
        case 0x385b04u: goto label_385b04;
        case 0x385b08u: goto label_385b08;
        case 0x385b0cu: goto label_385b0c;
        case 0x385b10u: goto label_385b10;
        case 0x385b14u: goto label_385b14;
        case 0x385b18u: goto label_385b18;
        case 0x385b1cu: goto label_385b1c;
        case 0x385b20u: goto label_385b20;
        case 0x385b24u: goto label_385b24;
        case 0x385b28u: goto label_385b28;
        case 0x385b2cu: goto label_385b2c;
        case 0x385b30u: goto label_385b30;
        case 0x385b34u: goto label_385b34;
        case 0x385b38u: goto label_385b38;
        case 0x385b3cu: goto label_385b3c;
        case 0x385b40u: goto label_385b40;
        case 0x385b44u: goto label_385b44;
        case 0x385b48u: goto label_385b48;
        case 0x385b4cu: goto label_385b4c;
        case 0x385b50u: goto label_385b50;
        case 0x385b54u: goto label_385b54;
        case 0x385b58u: goto label_385b58;
        case 0x385b5cu: goto label_385b5c;
        case 0x385b60u: goto label_385b60;
        case 0x385b64u: goto label_385b64;
        case 0x385b68u: goto label_385b68;
        case 0x385b6cu: goto label_385b6c;
        case 0x385b70u: goto label_385b70;
        case 0x385b74u: goto label_385b74;
        case 0x385b78u: goto label_385b78;
        case 0x385b7cu: goto label_385b7c;
        case 0x385b80u: goto label_385b80;
        case 0x385b84u: goto label_385b84;
        case 0x385b88u: goto label_385b88;
        case 0x385b8cu: goto label_385b8c;
        case 0x385b90u: goto label_385b90;
        case 0x385b94u: goto label_385b94;
        case 0x385b98u: goto label_385b98;
        case 0x385b9cu: goto label_385b9c;
        case 0x385ba0u: goto label_385ba0;
        case 0x385ba4u: goto label_385ba4;
        case 0x385ba8u: goto label_385ba8;
        case 0x385bacu: goto label_385bac;
        case 0x385bb0u: goto label_385bb0;
        case 0x385bb4u: goto label_385bb4;
        case 0x385bb8u: goto label_385bb8;
        case 0x385bbcu: goto label_385bbc;
        case 0x385bc0u: goto label_385bc0;
        case 0x385bc4u: goto label_385bc4;
        case 0x385bc8u: goto label_385bc8;
        case 0x385bccu: goto label_385bcc;
        case 0x385bd0u: goto label_385bd0;
        case 0x385bd4u: goto label_385bd4;
        case 0x385bd8u: goto label_385bd8;
        case 0x385bdcu: goto label_385bdc;
        case 0x385be0u: goto label_385be0;
        case 0x385be4u: goto label_385be4;
        case 0x385be8u: goto label_385be8;
        case 0x385becu: goto label_385bec;
        case 0x385bf0u: goto label_385bf0;
        case 0x385bf4u: goto label_385bf4;
        case 0x385bf8u: goto label_385bf8;
        case 0x385bfcu: goto label_385bfc;
        case 0x385c00u: goto label_385c00;
        case 0x385c04u: goto label_385c04;
        case 0x385c08u: goto label_385c08;
        case 0x385c0cu: goto label_385c0c;
        case 0x385c10u: goto label_385c10;
        case 0x385c14u: goto label_385c14;
        case 0x385c18u: goto label_385c18;
        case 0x385c1cu: goto label_385c1c;
        case 0x385c20u: goto label_385c20;
        case 0x385c24u: goto label_385c24;
        case 0x385c28u: goto label_385c28;
        case 0x385c2cu: goto label_385c2c;
        case 0x385c30u: goto label_385c30;
        case 0x385c34u: goto label_385c34;
        case 0x385c38u: goto label_385c38;
        case 0x385c3cu: goto label_385c3c;
        case 0x385c40u: goto label_385c40;
        case 0x385c44u: goto label_385c44;
        case 0x385c48u: goto label_385c48;
        case 0x385c4cu: goto label_385c4c;
        case 0x385c50u: goto label_385c50;
        case 0x385c54u: goto label_385c54;
        case 0x385c58u: goto label_385c58;
        case 0x385c5cu: goto label_385c5c;
        case 0x385c60u: goto label_385c60;
        case 0x385c64u: goto label_385c64;
        case 0x385c68u: goto label_385c68;
        case 0x385c6cu: goto label_385c6c;
        default: break;
    }

    ctx->pc = 0x385b00u;

label_385b00:
    // 0x385b00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x385b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_385b04:
    // 0x385b04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_385b08:
    // 0x385b08: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x385b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_385b0c:
    // 0x385b0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x385b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_385b10:
    // 0x385b10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x385b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385b14:
    // 0x385b14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x385b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_385b18:
    // 0x385b18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x385b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385b1c:
    // 0x385b1c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x385b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_385b20:
    // 0x385b20: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x385b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_385b24:
    // 0x385b24: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_385b28:
    if (ctx->pc == 0x385B28u) {
        ctx->pc = 0x385B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B24u;
        // 0x385b28: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B2Cu;
        goto label_385b2c;
    }
    ctx->pc = 0x385B24u;
    {
        const bool branch_taken_0x385b24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x385B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B24u;
        // 0x385b28: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b24) {
            ctx->pc = 0x385B38u;
            goto label_385b38;
        }
    }
    ctx->pc = 0x385B2Cu;
label_385b2c:
    // 0x385b2c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x385b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_385b30:
    // 0x385b30: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_385b34:
    if (ctx->pc == 0x385B34u) {
        ctx->pc = 0x385B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B30u;
        // 0x385b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B38u;
        goto label_385b38;
    }
    ctx->pc = 0x385B30u;
    {
        const bool branch_taken_0x385b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B30u;
        // 0x385b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b30) {
            ctx->pc = 0x385B74u;
            goto label_385b74;
        }
    }
    ctx->pc = 0x385B38u;
label_385b38:
    // 0x385b38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x385b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_385b3c:
    // 0x385b3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_385b40:
    if (ctx->pc == 0x385B40u) {
        ctx->pc = 0x385B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B3Cu;
        // 0x385b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B44u;
        goto label_385b44;
    }
    ctx->pc = 0x385B3Cu;
    {
        const bool branch_taken_0x385b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B3Cu;
        // 0x385b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b3c) {
            ctx->pc = 0x385B50u;
            goto label_385b50;
        }
    }
    ctx->pc = 0x385B44u;
label_385b44:
    // 0x385b44: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x385b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_385b48:
    // 0x385b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x385b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385b4c:
    // 0x385b4c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x385b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_385b50:
    // 0x385b50: 0xc0e1612  jal         func_385848
label_385b54:
    if (ctx->pc == 0x385B54u) {
        ctx->pc = 0x385B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B50u;
        // 0x385b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B58u;
        goto label_385b58;
    }
    ctx->pc = 0x385B50u;
    SET_GPR_U32(ctx, 31, 0x385B58u);
    ctx->pc = 0x385B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B50u;
    // 0x385b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385848u, 0x385B50u, 0x385B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B58u;
label_385b58:
    // 0x385b58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_385b5c:
    if (ctx->pc == 0x385B5Cu) {
        ctx->pc = 0x385B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B58u;
        // 0x385b5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B60u;
        goto label_385b60;
    }
    ctx->pc = 0x385B58u;
    {
        const bool branch_taken_0x385b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B58u;
        // 0x385b5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b58) {
            ctx->pc = 0x385B6Cu;
            goto label_385b6c;
        }
    }
    ctx->pc = 0x385B60u;
label_385b60:
    // 0x385b60: 0xc0e187c  jal         func_3861F0
label_385b64:
    if (ctx->pc == 0x385B64u) {
        ctx->pc = 0x385B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B60u;
        // 0x385b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B68u;
        goto label_385b68;
    }
    ctx->pc = 0x385B60u;
    SET_GPR_U32(ctx, 31, 0x385B68u);
    ctx->pc = 0x385B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B60u;
    // 0x385b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3861F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3861F0u, 0x385B60u, 0x385B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B68u;
label_385b68:
    // 0x385b68: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x385b68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_385b6c:
    // 0x385b6c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_385b70:
    if (ctx->pc == 0x385B70u) {
        ctx->pc = 0x385B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B6Cu;
        // 0x385b70: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B74u;
        goto label_385b74;
    }
    ctx->pc = 0x385B6Cu;
    {
        const bool branch_taken_0x385b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B6Cu;
        // 0x385b70: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b6c) {
            ctx->pc = 0x385BDCu;
            goto label_385bdc;
        }
    }
    ctx->pc = 0x385B74u;
label_385b74:
    // 0x385b74: 0xc0e1612  jal         func_385848
label_385b78:
    if (ctx->pc == 0x385B78u) {
        ctx->pc = 0x385B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B74u;
        // 0x385b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B7Cu;
        goto label_385b7c;
    }
    ctx->pc = 0x385B74u;
    SET_GPR_U32(ctx, 31, 0x385B7Cu);
    ctx->pc = 0x385B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B74u;
    // 0x385b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385848u, 0x385B74u, 0x385B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B7Cu;
label_385b7c:
    // 0x385b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385b80:
    // 0x385b80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x385b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385b84:
    // 0x385b84: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_385b88:
    if (ctx->pc == 0x385B88u) {
        ctx->pc = 0x385B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B84u;
        // 0x385b88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B8Cu;
        goto label_385b8c;
    }
    ctx->pc = 0x385B84u;
    {
        const bool branch_taken_0x385b84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B84u;
        // 0x385b88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b84) {
            ctx->pc = 0x385BD8u;
            goto label_385bd8;
        }
    }
    ctx->pc = 0x385B8Cu;
label_385b8c:
    // 0x385b8c: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x385b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_385b90:
    // 0x385b90: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_385b94:
    if (ctx->pc == 0x385B94u) {
        ctx->pc = 0x385B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B90u;
        // 0x385b94: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B98u;
        goto label_385b98;
    }
    ctx->pc = 0x385B90u;
    {
        const bool branch_taken_0x385b90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B90u;
        // 0x385b94: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b90) {
            ctx->pc = 0x385BDCu;
            goto label_385bdc;
        }
    }
    ctx->pc = 0x385B98u;
label_385b98:
    // 0x385b98: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x385b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_385b9c:
    // 0x385b9c: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_385ba0:
    if (ctx->pc == 0x385BA0u) {
        ctx->pc = 0x385BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B9Cu;
        // 0x385ba0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BA4u;
        goto label_385ba4;
    }
    ctx->pc = 0x385B9Cu;
    {
        const bool branch_taken_0x385b9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x385b9c) {
            ctx->pc = 0x385BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385B9Cu;
            // 0x385ba0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385BE0u;
            goto label_385be0;
        }
    }
    ctx->pc = 0x385BA4u;
label_385ba4:
    // 0x385ba4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x385ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_385ba8:
    // 0x385ba8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x385ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_385bac:
    // 0x385bac: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x385bacu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385bb0:
    // 0x385bb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x385bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_385bb4:
    // 0x385bb4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x385bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_385bb8:
    // 0x385bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_385bbc:
    // 0x385bbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385bc0:
    // 0x385bc0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x385bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_385bc4:
    // 0x385bc4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x385bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_385bc8:
    // 0x385bc8: 0xe0f809  jalr        $a3
label_385bcc:
    if (ctx->pc == 0x385BCCu) {
        ctx->pc = 0x385BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BC8u;
        // 0x385bcc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BD0u;
        goto label_385bd0;
    }
    ctx->pc = 0x385BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x385BD0u);
        ctx->pc = 0x385BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BC8u;
        // 0x385bcc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385BC8u, 0x385BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385BD0u;
label_385bd0:
    // 0x385bd0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x385bd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_385bd4:
    // 0x385bd4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x385bd4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385bd8:
    // 0x385bd8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x385bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385bdc:
    // 0x385bdc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x385bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_385be0:
    // 0x385be0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_385be4:
    if (ctx->pc == 0x385BE4u) {
        ctx->pc = 0x385BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BE0u;
        // 0x385be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BE8u;
        goto label_385be8;
    }
    ctx->pc = 0x385BE0u;
    {
        const bool branch_taken_0x385be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BE0u;
        // 0x385be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385be0) {
            ctx->pc = 0x385C54u;
            goto label_385c54;
        }
    }
    ctx->pc = 0x385BE8u;
label_385be8:
    // 0x385be8: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x385be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_385bec:
    // 0x385bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_385bf0:
    // 0x385bf0: 0xc0e1b7a  jal         func_386DE8
label_385bf4:
    if (ctx->pc == 0x385BF4u) {
        ctx->pc = 0x385BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BF0u;
        // 0x385bf4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BF8u;
        goto label_385bf8;
    }
    ctx->pc = 0x385BF0u;
    SET_GPR_U32(ctx, 31, 0x385BF8u);
    ctx->pc = 0x385BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385BF0u;
    // 0x385bf4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386DE8u, 0x385BF0u, 0x385BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385BF8u;
label_385bf8:
    // 0x385bf8: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x385bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_385bfc:
    // 0x385bfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x385bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_385c00:
    // 0x385c00: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_385c04:
    if (ctx->pc == 0x385C04u) {
        ctx->pc = 0x385C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C00u;
        // 0x385c04: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C08u;
        goto label_385c08;
    }
    ctx->pc = 0x385C00u;
    {
        const bool branch_taken_0x385c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x385c00) {
            ctx->pc = 0x385C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385C00u;
            // 0x385c04: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385C20u;
            goto label_385c20;
        }
    }
    ctx->pc = 0x385C08u;
label_385c08:
    // 0x385c08: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_385c0c:
    if (ctx->pc == 0x385C0Cu) {
        ctx->pc = 0x385C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C08u;
        // 0x385c0c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C10u;
        goto label_385c10;
    }
    ctx->pc = 0x385C08u;
    {
        const bool branch_taken_0x385c08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x385c08) {
            ctx->pc = 0x385C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385C08u;
            // 0x385c0c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385C20u;
            goto label_385c20;
        }
    }
    ctx->pc = 0x385C10u;
label_385c10:
    // 0x385c10: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x385c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_385c14:
    // 0x385c14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x385c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_385c18:
    // 0x385c18: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x385c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_385c1c:
    // 0x385c1c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x385c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_385c20:
    // 0x385c20: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x385c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_385c24:
    // 0x385c24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x385c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_385c28:
    // 0x385c28: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x385c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_385c2c:
    // 0x385c2c: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x385c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_385c30:
    // 0x385c30: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_385c34:
    if (ctx->pc == 0x385C34u) {
        ctx->pc = 0x385C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C30u;
        // 0x385c34: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C38u;
        goto label_385c38;
    }
    ctx->pc = 0x385C30u;
    {
        const bool branch_taken_0x385c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x385C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C30u;
        // 0x385c34: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c30) {
            ctx->pc = 0x385C54u;
            goto label_385c54;
        }
    }
    ctx->pc = 0x385C38u;
label_385c38:
    // 0x385c38: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x385c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_385c3c:
    // 0x385c3c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x385c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_385c40:
    // 0x385c40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_385c44:
    // 0x385c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x385c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_385c48:
    // 0x385c48: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x385c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_385c4c:
    // 0x385c4c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x385c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_385c50:
    // 0x385c50: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x385c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_385c54:
    // 0x385c54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x385c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_385c58:
    // 0x385c58: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x385c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_385c5c:
    // 0x385c5c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x385c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_385c60:
    // 0x385c60: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x385c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_385c64:
    // 0x385c64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x385c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_385c68:
    // 0x385c68: 0x3e00008  jr          $ra
label_385c6c:
    if (ctx->pc == 0x385C6Cu) {
        ctx->pc = 0x385C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C68u;
        // 0x385c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C70u;
        goto label_fallthrough_0x385c68;
    }
    ctx->pc = 0x385C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C68u;
        // 0x385c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x385c68:
    ctx->pc = 0x385C70u;
}
