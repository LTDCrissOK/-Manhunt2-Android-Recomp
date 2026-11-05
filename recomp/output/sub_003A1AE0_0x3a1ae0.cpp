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

// Function: sub_003A1AE0
// Address: 0x3a1ae0 - 0x3a1bb8
void sub_003A1AE0_0x3a1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1AE0_0x3a1ae0");
#endif

    switch (ctx->pc) {
        case 0x3a1ae0u: goto label_3a1ae0;
        case 0x3a1ae4u: goto label_3a1ae4;
        case 0x3a1ae8u: goto label_3a1ae8;
        case 0x3a1aecu: goto label_3a1aec;
        case 0x3a1af0u: goto label_3a1af0;
        case 0x3a1af4u: goto label_3a1af4;
        case 0x3a1af8u: goto label_3a1af8;
        case 0x3a1afcu: goto label_3a1afc;
        case 0x3a1b00u: goto label_3a1b00;
        case 0x3a1b04u: goto label_3a1b04;
        case 0x3a1b08u: goto label_3a1b08;
        case 0x3a1b0cu: goto label_3a1b0c;
        case 0x3a1b10u: goto label_3a1b10;
        case 0x3a1b14u: goto label_3a1b14;
        case 0x3a1b18u: goto label_3a1b18;
        case 0x3a1b1cu: goto label_3a1b1c;
        case 0x3a1b20u: goto label_3a1b20;
        case 0x3a1b24u: goto label_3a1b24;
        case 0x3a1b28u: goto label_3a1b28;
        case 0x3a1b2cu: goto label_3a1b2c;
        case 0x3a1b30u: goto label_3a1b30;
        case 0x3a1b34u: goto label_3a1b34;
        case 0x3a1b38u: goto label_3a1b38;
        case 0x3a1b3cu: goto label_3a1b3c;
        case 0x3a1b40u: goto label_3a1b40;
        case 0x3a1b44u: goto label_3a1b44;
        case 0x3a1b48u: goto label_3a1b48;
        case 0x3a1b4cu: goto label_3a1b4c;
        case 0x3a1b50u: goto label_3a1b50;
        case 0x3a1b54u: goto label_3a1b54;
        case 0x3a1b58u: goto label_3a1b58;
        case 0x3a1b5cu: goto label_3a1b5c;
        case 0x3a1b60u: goto label_3a1b60;
        case 0x3a1b64u: goto label_3a1b64;
        case 0x3a1b68u: goto label_3a1b68;
        case 0x3a1b6cu: goto label_3a1b6c;
        case 0x3a1b70u: goto label_3a1b70;
        case 0x3a1b74u: goto label_3a1b74;
        case 0x3a1b78u: goto label_3a1b78;
        case 0x3a1b7cu: goto label_3a1b7c;
        case 0x3a1b80u: goto label_3a1b80;
        case 0x3a1b84u: goto label_3a1b84;
        case 0x3a1b88u: goto label_3a1b88;
        case 0x3a1b8cu: goto label_3a1b8c;
        case 0x3a1b90u: goto label_3a1b90;
        case 0x3a1b94u: goto label_3a1b94;
        case 0x3a1b98u: goto label_3a1b98;
        case 0x3a1b9cu: goto label_3a1b9c;
        case 0x3a1ba0u: goto label_3a1ba0;
        case 0x3a1ba4u: goto label_3a1ba4;
        case 0x3a1ba8u: goto label_3a1ba8;
        case 0x3a1bacu: goto label_3a1bac;
        case 0x3a1bb0u: goto label_3a1bb0;
        case 0x3a1bb4u: goto label_3a1bb4;
        default: break;
    }

    ctx->pc = 0x3a1ae0u;

label_3a1ae0:
    // 0x3a1ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a1ae4:
    // 0x3a1ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a1ae8:
    // 0x3a1ae8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a1ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a1aec:
    // 0x3a1aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a1af0:
    // 0x3a1af0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3a1af4:
    // 0x3a1af4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3a1af8:
    // 0x3a1af8: 0xc0e8714  jal         func_3A1C50
label_3a1afc:
    if (ctx->pc == 0x3A1AFCu) {
        ctx->pc = 0x3A1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AF8u;
        // 0x3a1afc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B00u;
        goto label_3a1b00;
    }
    ctx->pc = 0x3A1AF8u;
    SET_GPR_U32(ctx, 31, 0x3A1B00u);
    ctx->pc = 0x3A1AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1AF8u;
    // 0x3a1afc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1C50u, 0x3A1AF8u, 0x3A1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B00u;
label_3a1b00:
    // 0x3a1b00: 0x200f809  jalr        $s0
label_3a1b04:
    if (ctx->pc == 0x3A1B04u) {
        ctx->pc = 0x3A1B08u;
        goto label_3a1b08;
    }
    ctx->pc = 0x3A1B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x3A1B08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1B00u, 0x3A1B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1B08u;
label_3a1b08:
    // 0x3a1b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b0c:
    // 0x3a1b0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a1b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b10:
    // 0x3a1b10: 0xc0e86ee  jal         func_3A1BB8
label_3a1b14:
    if (ctx->pc == 0x3A1B14u) {
        ctx->pc = 0x3A1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B10u;
        // 0x3a1b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B18u;
        goto label_3a1b18;
    }
    ctx->pc = 0x3A1B10u;
    SET_GPR_U32(ctx, 31, 0x3A1B18u);
    ctx->pc = 0x3A1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B10u;
    // 0x3a1b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1BB8u, 0x3A1B10u, 0x3A1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B18u;
label_3a1b18:
    // 0x3a1b18: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_3a1b1c:
    if (ctx->pc == 0x3A1B1Cu) {
        ctx->pc = 0x3A1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B18u;
        // 0x3a1b1c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B20u;
        goto label_3a1b20;
    }
    ctx->pc = 0x3A1B18u;
    {
        const bool branch_taken_0x3a1b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B18u;
        // 0x3a1b1c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b18) {
            ctx->pc = 0x3A1B9Cu;
            goto label_3a1b9c;
        }
    }
    ctx->pc = 0x3A1B20u;
label_3a1b20:
    // 0x3a1b20: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3a1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3a1b24:
    // 0x3a1b24: 0x24836768  addiu       $v1, $a0, 0x6768
    ctx->pc = 0x3a1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 26472));
label_3a1b28:
    // 0x3a1b28: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x3a1b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3a1b2c:
    // 0x3a1b2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a1b30:
    if (ctx->pc == 0x3A1B30u) {
        ctx->pc = 0x3A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B2Cu;
        // 0x3a1b30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B34u;
        goto label_3a1b34;
    }
    ctx->pc = 0x3A1B2Cu;
    {
        const bool branch_taken_0x3a1b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B2Cu;
        // 0x3a1b30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b2c) {
            ctx->pc = 0x3A1B5Cu;
            goto label_3a1b5c;
        }
    }
    ctx->pc = 0x3A1B34u;
label_3a1b34:
    // 0x3a1b34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a1b38:
    // 0x3a1b38: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x3a1b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_3a1b3c:
    // 0x3a1b3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a1b40:
    if (ctx->pc == 0x3A1B40u) {
        ctx->pc = 0x3A1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B3Cu;
        // 0x3a1b40: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B44u;
        goto label_3a1b44;
    }
    ctx->pc = 0x3A1B3Cu;
    {
        const bool branch_taken_0x3a1b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B3Cu;
        // 0x3a1b40: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b3c) {
            ctx->pc = 0x3A1B5Cu;
            goto label_3a1b5c;
        }
    }
    ctx->pc = 0x3A1B44u;
label_3a1b44:
    // 0x3a1b44: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a1b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3a1b48:
    // 0x3a1b48: 0x0  nop
    ctx->pc = 0x3a1b48u;
    // NOP
label_3a1b4c:
    // 0x3a1b4c: 0x0  nop
    ctx->pc = 0x3a1b4cu;
    // NOP
label_3a1b50:
    // 0x3a1b50: 0x0  nop
    ctx->pc = 0x3a1b50u;
    // NOP
label_3a1b54:
    // 0x3a1b54: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a1b58:
    if (ctx->pc == 0x3A1B58u) {
        ctx->pc = 0x3A1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B54u;
        // 0x3a1b58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B5Cu;
        goto label_3a1b5c;
    }
    ctx->pc = 0x3A1B54u;
    {
        const bool branch_taken_0x3a1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1b54) {
            ctx->pc = 0x3A1B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1B54u;
            // 0x3a1b58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1b38;
        }
    }
    ctx->pc = 0x3A1B5Cu;
label_3a1b5c:
    // 0x3a1b5c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3a1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3a1b60:
    // 0x3a1b60: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_3a1b64:
    if (ctx->pc == 0x3A1B64u) {
        ctx->pc = 0x3A1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B60u;
        // 0x3a1b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B68u;
        goto label_3a1b68;
    }
    ctx->pc = 0x3A1B60u;
    {
        const bool branch_taken_0x3a1b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B60u;
        // 0x3a1b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b60) {
            ctx->pc = 0x3A1B9Cu;
            goto label_3a1b9c;
        }
    }
    ctx->pc = 0x3A1B68u;
label_3a1b68:
    // 0x3a1b68: 0x24826768  addiu       $v0, $a0, 0x6768
    ctx->pc = 0x3a1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 26472));
label_3a1b6c:
    // 0x3a1b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b70:
    // 0x3a1b70: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3a1b70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3a1b74:
    // 0x3a1b74: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3a1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a1b78:
    // 0x3a1b78: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a1b7c:
    // 0x3a1b7c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3a1b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3a1b80:
    // 0x3a1b80: 0xc0efc2e  jal         func_3BF0B8
label_3a1b84:
    if (ctx->pc == 0x3A1B84u) {
        ctx->pc = 0x3A1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B80u;
        // 0x3a1b84: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B88u;
        goto label_3a1b88;
    }
    ctx->pc = 0x3A1B80u;
    SET_GPR_U32(ctx, 31, 0x3A1B88u);
    ctx->pc = 0x3A1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B80u;
    // 0x3a1b84: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A1B80u, 0x3A1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B88u;
label_3a1b88:
    // 0x3a1b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b8c:
    // 0x3a1b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a1b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b90:
    // 0x3a1b90: 0xc0efa49  jal         func_3BE924
label_3a1b94:
    if (ctx->pc == 0x3A1B94u) {
        ctx->pc = 0x3A1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B90u;
        // 0x3a1b94: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B98u;
        goto label_3a1b98;
    }
    ctx->pc = 0x3A1B90u;
    SET_GPR_U32(ctx, 31, 0x3A1B98u);
    ctx->pc = 0x3A1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B90u;
    // 0x3a1b94: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3A1B90u, 0x3A1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B98u;
label_3a1b98:
    // 0x3a1b98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a1b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b9c:
    // 0x3a1b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1ba0:
    // 0x3a1ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a1ba4:
    // 0x3a1ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a1ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1ba8:
    // 0x3a1ba8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a1ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a1bac:
    // 0x3a1bac: 0x3e00008  jr          $ra
label_3a1bb0:
    if (ctx->pc == 0x3A1BB0u) {
        ctx->pc = 0x3A1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BACu;
        // 0x3a1bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1BB4u;
        goto label_3a1bb4;
    }
    ctx->pc = 0x3A1BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BACu;
        // 0x3a1bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1BB4u;
label_3a1bb4:
    // 0x3a1bb4: 0x0  nop
    ctx->pc = 0x3a1bb4u;
    // NOP
    ctx->pc = 0x3a1bb8u;
}
