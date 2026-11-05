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

// Function: sub_002C7B18
// Address: 0x2c7b18 - 0x2c80a8
void sub_002C7B18_0x2c7b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7B18_0x2c7b18");
#endif

    switch (ctx->pc) {
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7d10u: goto label_2c7d10;
        case 0x2c7d2cu: goto label_2c7d2c;
        case 0x2c7dacu: goto label_2c7dac;
        case 0x2c7e04u: goto label_2c7e04;
        case 0x2c7e10u: goto label_2c7e10;
        case 0x2c7e9cu: goto label_2c7e9c;
        case 0x2c7ebcu: goto label_2c7ebc;
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c7f84u: goto label_2c7f84;
        case 0x2c7fb8u: goto label_2c7fb8;
        case 0x2c8018u: goto label_2c8018;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c8074u: goto label_2c8074;
        default: break;
    }

    ctx->pc = 0x2c7b18u;

    // 0x2c7b18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c7b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c7b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c7b20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c7b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c7b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c7b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c7b2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c7b2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b30: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c7b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c7b34: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x2c7b34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7b38: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c7b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2c7b3c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2c7b3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x2c7b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7b44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c7b44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c7b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c7b4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c7b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c7b50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c7b54: 0xc0b1bc2  jal         func_2C6F08
    ctx->pc = 0x2C7B54u;
    SET_GPR_U32(ctx, 31, 0x2C7B5Cu);
    ctx->pc = 0x2C7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B54u;
    // 0x2c7b58: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F08u, 0x2C7B54u, 0x2C7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B5Cu;
label_2c7b5c:
    // 0x2c7b5c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x2c7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x2c7b60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c7b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c7b64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C7B64u;
    {
        const bool branch_taken_0x2c7b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B64u;
        // 0x2c7b68: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b64) {
            ctx->pc = 0x2C7B90u;
            goto label_2c7b90;
        }
    }
    ctx->pc = 0x2C7B6Cu;
    // 0x2c7b6c: 0x8c625b7c  lw          $v0, 0x5B7C($v1)
    ctx->pc = 0x2c7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23420)));
    // 0x2c7b70: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2c7b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7b74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7B74u;
    {
        const bool branch_taken_0x2c7b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b74) {
            ctx->pc = 0x2C7B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7B74u;
            // 0x2c7b78: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7B94u;
            goto label_2c7b94;
        }
    }
    ctx->pc = 0x2C7B7Cu;
    // 0x2c7b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b80: 0xc0b1c44  jal         func_2C7110
    ctx->pc = 0x2C7B80u;
    SET_GPR_U32(ctx, 31, 0x2C7B88u);
    ctx->pc = 0x2C7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B80u;
    // 0x2c7b84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7110u, 0x2C7B80u, 0x2C7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B88u;
label_2c7b88:
    // 0x2c7b88: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x2C7B88u;
    {
        const bool branch_taken_0x2c7b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B88u;
        // 0x2c7b8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b88) {
            ctx->pc = 0x2C807Cu;
            goto label_2c807c;
        }
    }
    ctx->pc = 0x2C7B90u;
label_2c7b90:
    // 0x2c7b90: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x2c7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_2c7b94:
    // 0x2c7b94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2c7b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c7b98: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C7B98u;
    {
        const bool branch_taken_0x2c7b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b98) {
            ctx->pc = 0x2C7D58u;
            goto label_2c7d58;
        }
    }
    ctx->pc = 0x2C7BA0u;
    // 0x2c7ba0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2c7ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7ba4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2c7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c7ba8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7BA8u;
    {
        const bool branch_taken_0x2c7ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BA8u;
        // 0x2c7bac: 0x3673ffff  ori         $s3, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ba8) {
            ctx->pc = 0x2C7BC0u;
            goto label_2c7bc0;
        }
    }
    ctx->pc = 0x2C7BB0u;
    // 0x2c7bb0: 0xc0b1ba0  jal         func_2C6E80
    ctx->pc = 0x2C7BB0u;
    SET_GPR_U32(ctx, 31, 0x2C7BB8u);
    ctx->pc = 0x2C7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7BB0u;
    // 0x2c7bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6E80u, 0x2C7BB0u, 0x2C7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BB8u;
label_2c7bb8:
    // 0x2c7bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7BB8u;
    {
        const bool branch_taken_0x2c7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BB8u;
        // 0x2c7bbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bb8) {
            ctx->pc = 0x2C7BC4u;
            goto label_2c7bc4;
        }
    }
    ctx->pc = 0x2C7BC0u;
label_2c7bc0:
    // 0x2c7bc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c7bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7bc4:
    // 0x2c7bc4: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C7BC4u;
    {
        const bool branch_taken_0x2c7bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BC4u;
        // 0x2c7bc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7bc4) {
            ctx->pc = 0x2C7C54u;
            goto label_2c7c54;
        }
    }
    ctx->pc = 0x2C7BCCu;
    // 0x2c7bcc: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7BCCu;
    SET_GPR_U32(ctx, 31, 0x2C7BD4u);
    ctx->pc = 0x2C7BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7BCCu;
    // 0x2c7bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7BCCu, 0x2C7BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BD4u;
label_2c7bd4:
    // 0x2c7bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7bd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7be0: 0x12020033  beq         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C7BE0u;
    {
        const bool branch_taken_0x2c7be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BE0u;
        // 0x2c7be4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7be0) {
            ctx->pc = 0x2C7CB0u;
            goto label_2c7cb0;
        }
    }
    ctx->pc = 0x2C7BE8u;
    // 0x2c7be8: 0x24425b70  addiu       $v0, $v0, 0x5B70
    ctx->pc = 0x2c7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23408));
    // 0x2c7bec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c7bf0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2c7bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c7bf4: 0x24620039  addiu       $v0, $v1, 0x39
    ctx->pc = 0x2c7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 57));
    // 0x2c7bf8: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2c7bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2c7bfc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c7c00: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2c7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c7c04: 0x2052024  and         $a0, $s0, $a1
    ctx->pc = 0x2c7c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x2c7c08: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7C08u;
    {
        const bool branch_taken_0x2c7c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C08u;
        // 0x2c7c0c: 0x439024  and         $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c08) {
            ctx->pc = 0x2C7C24u;
            goto label_2c7c24;
        }
    }
    ctx->pc = 0x2C7C10u;
    // 0x2c7c10: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x2c7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2c7c14: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x2c7c14u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x2c7c18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c7c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c7c1c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c7c20: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2c7c24:
    // 0x2c7c24: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2c7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2c7c28: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2c7c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2c7c2c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2c7c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c7c30: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C7C30u;
    {
        const bool branch_taken_0x2c7c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c30) {
            ctx->pc = 0x2C7CB0u;
            goto label_2c7cb0;
        }
    }
    ctx->pc = 0x2C7C38u;
    // 0x2c7c38: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7C38u;
    SET_GPR_U32(ctx, 31, 0x2C7C40u);
    ctx->pc = 0x2C7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C38u;
    // 0x2c7c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7C38u, 0x2C7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C40u;
label_2c7c40:
    // 0x2c7c40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c7c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c44: 0x1670001a  bne         $s3, $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7C44u;
    {
        const bool branch_taken_0x2c7c44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c7c44) {
            ctx->pc = 0x2C7CB0u;
            goto label_2c7cb0;
        }
    }
    ctx->pc = 0x2C7C4Cu;
    // 0x2c7c4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C7C4Cu;
    {
        const bool branch_taken_0x2c7c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C4Cu;
        // 0x2c7c50: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c4c) {
            ctx->pc = 0x2C7CACu;
            goto label_2c7cac;
        }
    }
    ctx->pc = 0x2C7C54u;
label_2c7c54:
    // 0x2c7c54: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2c7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2c7c58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c7c5c: 0x8ca45b78  lw          $a0, 0x5B78($a1)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x575B78u));
    // 0x2c7c60: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2c7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2c7c64: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x2c7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c7c68: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x2c7c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x2c7c6c: 0x24850039  addiu       $a1, $a0, 0x39
    ctx->pc = 0x2c7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 57));
    // 0x2c7c70: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2c7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2c7c74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c7c78: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x2c7c78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c7c7c: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x2c7c7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c7c80: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7C80u;
    {
        const bool branch_taken_0x2c7c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c80) {
            ctx->pc = 0x2C7CB0u;
            goto label_2c7cb0;
        }
    }
    ctx->pc = 0x2C7C88u;
    // 0x2c7c88: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7C88u;
    SET_GPR_U32(ctx, 31, 0x2C7C90u);
    ctx->pc = 0x2C7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C88u;
    // 0x2c7c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7C88u, 0x2C7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C90u;
label_2c7c90:
    // 0x2c7c90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c7c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c7c98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c7c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7ca0: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7CA0u;
    {
        const bool branch_taken_0x2c7ca0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7ca0) {
            ctx->pc = 0x2C7CB0u;
            goto label_2c7cb0;
        }
    }
    ctx->pc = 0x2C7CA8u;
    // 0x2c7ca8: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2c7ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cac:
    // 0x2c7cac: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2c7cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cb0:
    // 0x2c7cb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7cb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7cb8: 0x56820066  bnel        $s4, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2C7CB8u;
    {
        const bool branch_taken_0x2c7cb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7cb8) {
            ctx->pc = 0x2C7CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7CB8u;
            // 0x2c7cbc: 0x8e2301ac  lw          $v1, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7E54u;
            goto label_2c7e54;
        }
    }
    ctx->pc = 0x2C7CC0u;
    // 0x2c7cc0: 0x12740022  beq         $s3, $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C7CC0u;
    {
        const bool branch_taken_0x2c7cc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x2C7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CC0u;
        // 0x2c7cc4: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cc0) {
            ctx->pc = 0x2C7D4Cu;
            goto label_2c7d4c;
        }
    }
    ctx->pc = 0x2C7CC8u;
    // 0x2c7cc8: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2c7cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x2c7ccc: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x2c7cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c7cd0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C7CD0u;
    {
        const bool branch_taken_0x2c7cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CD0u;
        // 0x2c7cd4: 0x26a20039  addiu       $v0, $s5, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cd0) {
            ctx->pc = 0x2C7D30u;
            goto label_2c7d30;
        }
    }
    ctx->pc = 0x2C7CD8u;
    // 0x2c7cd8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2c7cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7cdc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C7CDCu;
    {
        const bool branch_taken_0x2c7cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CDCu;
        // 0x2c7ce0: 0x2643ffc7  addiu       $v1, $s2, -0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967239));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cdc) {
            ctx->pc = 0x2C7D30u;
            goto label_2c7d30;
        }
    }
    ctx->pc = 0x2C7CE4u;
    // 0x2c7ce4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c7ce8: 0x8c825b78  lw          $v0, 0x5B78($a0)
    ctx->pc = 0x2c7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x575B78u));
    // 0x2c7cec: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x2c7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2c7cf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7cf4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c7cf8: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x2c7cf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7cfc: 0xb0202b  sltu        $a0, $a1, $s0
    ctx->pc = 0x2c7cfcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c7d00: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7D00u;
    {
        const bool branch_taken_0x2c7d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d00) {
            ctx->pc = 0x2C7D30u;
            goto label_2c7d30;
        }
    }
    ctx->pc = 0x2C7D08u;
    // 0x2c7d08: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7D08u;
    SET_GPR_U32(ctx, 31, 0x2C7D10u);
    ctx->pc = 0x2C7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D08u;
    // 0x2c7d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7D08u, 0x2C7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D10u;
label_2c7d10:
    // 0x2c7d10: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7D10u;
    {
        const bool branch_taken_0x2c7d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2c7d10) {
            ctx->pc = 0x2C7D20u;
            goto label_2c7d20;
        }
    }
    ctx->pc = 0x2C7D18u;
    // 0x2c7d18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7D18u;
    {
        const bool branch_taken_0x2c7d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D18u;
        // 0x2c7d1c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d18) {
            ctx->pc = 0x2C7D30u;
            goto label_2c7d30;
        }
    }
    ctx->pc = 0x2C7D20u;
label_2c7d20:
    // 0x2c7d20: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2c7d20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7d24: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7D24u;
    SET_GPR_U32(ctx, 31, 0x2C7D2Cu);
    ctx->pc = 0x2C7D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D24u;
    // 0x2c7d28: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7D24u, 0x2C7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D2Cu;
label_2c7d2c:
    // 0x2c7d2c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2c7d2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_2c7d30:
    // 0x2c7d30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7d38: 0x52620005  beql        $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7D38u;
    {
        const bool branch_taken_0x2c7d38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c7d38) {
            ctx->pc = 0x2C7D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7D38u;
            // 0x2c7d3c: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7D50u;
            goto label_2c7d50;
        }
    }
    ctx->pc = 0x2C7D40u;
    // 0x2c7d40: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2c7d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7D44u;
    {
        const bool branch_taken_0x2c7d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D44u;
        // 0x2c7d48: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d44) {
            ctx->pc = 0x2C7D58u;
            goto label_2c7d58;
        }
    }
    ctx->pc = 0x2C7D4Cu;
label_2c7d4c:
    // 0x2c7d4c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x2c7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_2c7d50:
    // 0x2c7d50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2c7d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2c7d54: 0xae2201b4  sw          $v0, 0x1B4($s1)
    ctx->pc = 0x2c7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
label_2c7d58:
    // 0x2c7d58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7d5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7d60: 0x5682003c  bnel        $s4, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C7D60u;
    {
        const bool branch_taken_0x2c7d60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7d60) {
            ctx->pc = 0x2C7D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7D60u;
            // 0x2c7d64: 0x8e2301ac  lw          $v1, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7E54u;
            goto label_2c7e54;
        }
    }
    ctx->pc = 0x2C7D68u;
    // 0x2c7d68: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c7d6c: 0x26a40039  addiu       $a0, $s5, 0x39
    ctx->pc = 0x2c7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 57));
    // 0x2c7d70: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2c7d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d74: 0x24635b70  addiu       $v1, $v1, 0x5B70
    ctx->pc = 0x2c7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23408));
    // 0x2c7d78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x575B78u));
    // 0x2c7d7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c7d80: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c7d84: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x2c7d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c7d88: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x2c7d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c7d8c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C7D8Cu;
    {
        const bool branch_taken_0x2c7d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D8Cu;
        // 0x2c7d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d8c) {
            ctx->pc = 0x2C7DC0u;
            goto label_2c7dc0;
        }
    }
    ctx->pc = 0x2C7D94u;
    // 0x2c7d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c7d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7d9c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2c7d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c7da0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7da4: 0xc0b27c4  jal         func_2C9F10
    ctx->pc = 0x2C7DA4u;
    SET_GPR_U32(ctx, 31, 0x2C7DACu);
    ctx->pc = 0x2C7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7DA4u;
    // 0x2c7da8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F10u, 0x2C7DA4u, 0x2C7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DACu;
label_2c7dac:
    // 0x2c7dac: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7DACu;
    {
        const bool branch_taken_0x2c7dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2c7dac) {
            ctx->pc = 0x2C7DC0u;
            goto label_2c7dc0;
        }
    }
    ctx->pc = 0x2C7DB4u;
    // 0x2c7db4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c7db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7db8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2c7db8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dbc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2c7dbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7dc0:
    // 0x2c7dc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7dc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7dc8: 0x56820022  bnel        $s4, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C7DC8u;
    {
        const bool branch_taken_0x2c7dc8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7dc8) {
            ctx->pc = 0x2C7DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7DC8u;
            // 0x2c7dcc: 0x8e2301ac  lw          $v1, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7E54u;
            goto label_2c7e54;
        }
    }
    ctx->pc = 0x2C7DD0u;
    // 0x2c7dd0: 0x26425b70  addiu       $v0, $s2, 0x5B70
    ctx->pc = 0x2c7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 23408));
    // 0x2c7dd4: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x2c7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x2c7dd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c7ddc: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x2c7ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x2c7de0: 0x24620039  addiu       $v0, $v1, 0x39
    ctx->pc = 0x2c7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 57));
    // 0x2c7de4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c7de8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2c7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c7dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c7decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c7df0: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2c7df0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7df4: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C7DF4u;
    {
        const bool branch_taken_0x2c7df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7df4) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7DFCu;
    // 0x2c7dfc: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7DFCu;
    SET_GPR_U32(ctx, 31, 0x2C7E04u);
    ctx->pc = 0x2C7E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7DFCu;
    // 0x2c7e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7DFCu, 0x2C7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E04u;
label_2c7e04:
    // 0x2c7e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e08: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C7E08u;
    SET_GPR_U32(ctx, 31, 0x2C7E10u);
    ctx->pc = 0x2C7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E08u;
    // 0x2c7e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C7E08u, 0x2C7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E10u;
label_2c7e10:
    // 0x2c7e10: 0x1214000b  beq         $s0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7E10u;
    {
        const bool branch_taken_0x2c7e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2C7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E10u;
        // 0x2c7e14: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e10) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E18u;
    // 0x2c7e18: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C7E18u;
    {
        const bool branch_taken_0x2c7e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2C7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E18u;
        // 0x2c7e1c: 0x203102b  sltu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e18) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E20u;
    // 0x2c7e20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7E20u;
    {
        const bool branch_taken_0x2c7e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E20u;
        // 0x2c7e24: 0x701823  subu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e20) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E28u;
    // 0x2c7e28: 0x26a20038  addiu       $v0, $s5, 0x38
    ctx->pc = 0x2c7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    // 0x2c7e2c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c7e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c7e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7E30u;
    {
        const bool branch_taken_0x2c7e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e30) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E38u;
    // 0x2c7e38: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2c7e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e3c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2c7e3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e40:
    // 0x2c7e40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7e48: 0x12820088  beq         $s4, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2C7E48u;
    {
        const bool branch_taken_0x2c7e48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c7e48) {
            ctx->pc = 0x2C806Cu;
            goto label_2c806c;
        }
    }
    ctx->pc = 0x2C7E50u;
    // 0x2c7e50: 0x8e2301ac  lw          $v1, 0x1AC($s1)
    ctx->pc = 0x2c7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_2c7e54:
    // 0x2c7e54: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x2c7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2c7e58: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2c7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2c7e5c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c7e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c7e60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7E60u;
    {
        const bool branch_taken_0x2c7e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E60u;
        // 0x2c7e64: 0xae2301ac  sw          $v1, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e60) {
            ctx->pc = 0x2C7E6Cu;
            goto label_2c7e6c;
        }
    }
    ctx->pc = 0x2C7E68u;
    // 0x2c7e68: 0xae2301b0  sw          $v1, 0x1B0($s1)
    ctx->pc = 0x2c7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 3));
label_2c7e6c:
    // 0x2c7e6c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2c7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c7e70: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C7E70u;
    {
        const bool branch_taken_0x2c7e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E70u;
        // 0x2c7e74: 0x262801b8  addiu       $t0, $s1, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e70) {
            ctx->pc = 0x2C7EF4u;
            goto label_2c7ef4;
        }
    }
    ctx->pc = 0x2C7E78u;
    // 0x2c7e78: 0xae3701c4  sw          $s7, 0x1C4($s1)
    ctx->pc = 0x2c7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 23));
    // 0x2c7e7c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c7e80: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x2c7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x2c7e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e88: 0xae3401b8  sw          $s4, 0x1B8($s1)
    ctx->pc = 0x2c7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 20));
    // 0x2c7e8c: 0xae3601bc  sw          $s6, 0x1BC($s1)
    ctx->pc = 0x2c7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 22));
    // 0x2c7e90: 0x8c625b70  lw          $v0, 0x5B70($v1)
    ctx->pc = 0x2c7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x575B70u));
    // 0x2c7e94: 0xc0b1c98  jal         func_2C7260
    ctx->pc = 0x2C7E94u;
    SET_GPR_U32(ctx, 31, 0x2C7E9Cu);
    ctx->pc = 0x2C7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E94u;
    // 0x2c7e98: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7260u, 0x2C7E94u, 0x2C7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E9Cu;
label_2c7e9c:
    // 0x2c7e9c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c7ea0: 0x24425b88  addiu       $v0, $v0, 0x5B88
    ctx->pc = 0x2c7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23432));
    // 0x2c7ea4: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7EA4u;
    {
        const bool branch_taken_0x2c7ea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7ea4) {
            ctx->pc = 0x2C7EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7EA4u;
            // 0x2c7ea8: 0x8e25fffc  lw          $a1, -0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7EC4u;
            goto label_2c7ec4;
        }
    }
    ctx->pc = 0x2C7EACu;
    // 0x2c7eac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c7eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7eb0: 0x26c6ffc8  addiu       $a2, $s6, -0x38
    ctx->pc = 0x2c7eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967240));
    // 0x2c7eb4: 0xc0b1c82  jal         func_2C7208
    ctx->pc = 0x2C7EB4u;
    SET_GPR_U32(ctx, 31, 0x2C7EBCu);
    ctx->pc = 0x2C7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7EB4u;
    // 0x2c7eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7208u, 0x2C7EB4u, 0x2C7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EBCu;
label_2c7ebc:
    // 0x2c7ebc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2C7EBCu;
    {
        const bool branch_taken_0x2c7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EBCu;
        // 0x2c7ec0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ebc) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C7EC4u;
label_2c7ec4:
    // 0x2c7ec4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7ec8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c7ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c7ecc: 0x2963021  addu        $a2, $s4, $s6
    ctx->pc = 0x2c7eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x2c7ed0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2c7ed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2c7ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ed8: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x2c7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x2c7edc: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2c7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c7ee0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2c7ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c7ee4: 0xc0b1c82  jal         func_2C7208
    ctx->pc = 0x2C7EE4u;
    SET_GPR_U32(ctx, 31, 0x2C7EECu);
    ctx->pc = 0x2C7EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7EE4u;
    // 0x2c7ee8: 0x24c6ffc8  addiu       $a2, $a2, -0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7208u, 0x2C7EE4u, 0x2C7EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EECu;
label_2c7eec:
    // 0x2c7eec: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2C7EECu;
    {
        const bool branch_taken_0x2c7eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EECu;
        // 0x2c7ef0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7eec) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C7EF4u;
label_2c7ef4:
    // 0x2c7ef4: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C7EF4u;
    {
        const bool branch_taken_0x2c7ef4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EF4u;
        // 0x2c7ef8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ef4) {
            ctx->pc = 0x2C7F8Cu;
            goto label_2c7f8c;
        }
    }
    ctx->pc = 0x2C7EFCu;
    // 0x2c7efc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2c7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c7f00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7F00u;
    {
        const bool branch_taken_0x2c7f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F00u;
        // 0x2c7f04: 0x8e2201b8  lw          $v0, 0x1B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f00) {
            ctx->pc = 0x2C7F1Cu;
            goto label_2c7f1c;
        }
    }
    ctx->pc = 0x2C7F08u;
label_2c7f08:
    // 0x2c7f08: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x2c7f08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c7f0c: 0x51000020  beql        $t0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C7F0Cu;
    {
        const bool branch_taken_0x2c7f0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f0c) {
            ctx->pc = 0x2C7F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F0Cu;
            // 0x2c7f10: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7F90u;
            goto label_2c7f90;
        }
    }
    ctx->pc = 0x2C7F14u;
    // 0x2c7f14: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2c7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c7f18: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2c7f1c:
    // 0x2c7f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7f20: 0x1682fff9  bne         $s4, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C7F20u;
    {
        const bool branch_taken_0x2c7f20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F20u;
        // 0x2c7f24: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f20) {
            ctx->pc = 0x2C7F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7f08;
        }
    }
    ctx->pc = 0x2C7F28u;
    // 0x2c7f28: 0x51000019  beql        $t0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C7F28u;
    {
        const bool branch_taken_0x2c7f28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f28) {
            ctx->pc = 0x2C7F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F28u;
            // 0x2c7f2c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7F90u;
            goto label_2c7f90;
        }
    }
    ctx->pc = 0x2C7F30u;
    // 0x2c7f30: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x2c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2c7f34: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c7f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c7f38: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C7F38u;
    {
        const bool branch_taken_0x2c7f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f38) {
            ctx->pc = 0x2C7F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F38u;
            // 0x2c7f3c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7F90u;
            goto label_2c7f90;
        }
    }
    ctx->pc = 0x2C7F40u;
    // 0x2c7f40: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2c7f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c7f44: 0x54570012  bnel        $v0, $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C7F44u;
    {
        const bool branch_taken_0x2c7f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2c7f44) {
            ctx->pc = 0x2C7F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F44u;
            // 0x2c7f48: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7F90u;
            goto label_2c7f90;
        }
    }
    ctx->pc = 0x2C7F4Cu;
    // 0x2c7f4c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2c7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c7f50: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2c7f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c7f54: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C7F54u;
    {
        const bool branch_taken_0x2c7f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f54) {
            ctx->pc = 0x2C7F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F54u;
            // 0x2c7f58: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7F90u;
            goto label_2c7f90;
        }
    }
    ctx->pc = 0x2C7F5Cu;
    // 0x2c7f5c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2c7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c7f60: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c7f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7f64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C7F64u;
    {
        const bool branch_taken_0x2c7f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F64u;
        // 0x2c7f68: 0x961021  addu        $v0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f64) {
            ctx->pc = 0x2C7F8Cu;
            goto label_2c7f8c;
        }
    }
    ctx->pc = 0x2C7F6Cu;
    // 0x2c7f6c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2c7f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f74: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c7f78: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2c7f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c7f7c: 0xc0b1c82  jal         func_2C7208
    ctx->pc = 0x2C7F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F84u);
    ctx->pc = 0x2C7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F7Cu;
    // 0x2c7f80: 0xd63021  addu        $a2, $a2, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7208u, 0x2C7F7Cu, 0x2C7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F84u;
label_2c7f84:
    // 0x2c7f84: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C7F84u;
    {
        const bool branch_taken_0x2c7f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F84u;
        // 0x2c7f88: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f84) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C7F8Cu;
label_2c7f8c:
    // 0x2c7f8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c7f90:
    // 0x2c7f90: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2c7f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7f94: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C7F94u;
    {
        const bool branch_taken_0x2c7f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7f94) {
            ctx->pc = 0x2C7F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7F94u;
            // 0x2c7f98: 0xae340010  sw          $s4, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7F9Cu;
            goto label_2c7f9c;
        }
    }
    ctx->pc = 0x2C7F9Cu;
label_2c7f9c:
    // 0x2c7f9c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2c7f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7fa0: 0x1100001f  beqz        $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C7FA0u;
    {
        const bool branch_taken_0x2c7fa0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FA0u;
        // 0x2c7fa4: 0x2961821  addu        $v1, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fa0) {
            ctx->pc = 0x2C8020u;
            goto label_2c8020;
        }
    }
    ctx->pc = 0x2C7FA8u;
    // 0x2c7fa8: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x2c7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x2c7fac: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7FACu;
    {
        const bool branch_taken_0x2c7fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c7fac) {
            ctx->pc = 0x2C7FD0u;
            goto label_2c7fd0;
        }
    }
    ctx->pc = 0x2C7FB4u;
    // 0x2c7fb4: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x2c7fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2c7fb8:
    // 0x2c7fb8: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7FB8u;
    {
        const bool branch_taken_0x2c7fb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FB8u;
        // 0x2c7fbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fb8) {
            ctx->pc = 0x2C8024u;
            goto label_2c8024;
        }
    }
    ctx->pc = 0x2C7FC0u;
    // 0x2c7fc0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2c7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c7fc4: 0x0  nop
    ctx->pc = 0x2c7fc4u;
    // NOP
    // 0x2c7fc8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C7FC8u;
    {
        const bool branch_taken_0x2c7fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7fc8) {
            ctx->pc = 0x2C7FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7FC8u;
            // 0x2c7fcc: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7fb8;
        }
    }
    ctx->pc = 0x2C7FD0u;
label_2c7fd0:
    // 0x2c7fd0: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C7FD0u;
    {
        const bool branch_taken_0x2c7fd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FD0u;
        // 0x2c7fd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fd0) {
            ctx->pc = 0x2C8024u;
            goto label_2c8024;
        }
    }
    ctx->pc = 0x2C7FD8u;
    // 0x2c7fd8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x2c7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2c7fdc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c7fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c7fe0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C7FE0u;
    {
        const bool branch_taken_0x2c7fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FE0u;
        // 0x2c7fe4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fe0) {
            ctx->pc = 0x2C8028u;
            goto label_2c8028;
        }
    }
    ctx->pc = 0x2C7FE8u;
    // 0x2c7fe8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2c7fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c7fec: 0x1457000f  bne         $v0, $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x2C7FECu;
    {
        const bool branch_taken_0x2c7fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2C7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FECu;
        // 0x2c7ff0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fec) {
            ctx->pc = 0x2C802Cu;
            goto label_2c802c;
        }
    }
    ctx->pc = 0x2C7FF4u;
    // 0x2c7ff4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2c7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c7ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ffc: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2c7ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c8000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c8000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8004: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2c8004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2c8008: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c8008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c800c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c800cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2c8010: 0xc0b1ca2  jal         func_2C7288
    ctx->pc = 0x2C8010u;
    SET_GPR_U32(ctx, 31, 0x2C8018u);
    ctx->pc = 0x2C8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8010u;
    // 0x2c8014: 0xad140000  sw          $s4, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7288u, 0x2C8010u, 0x2C8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8018u;
label_2c8018:
    // 0x2c8018: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C8018u;
    {
        const bool branch_taken_0x2c8018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8018u;
        // 0x2c801c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8018) {
            ctx->pc = 0x2C807Cu;
            goto label_2c807c;
        }
    }
    ctx->pc = 0x2C8020u;
label_2c8020:
    // 0x2c8020: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c8020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c8024:
    // 0x2c8024: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c8024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c8028:
    // 0x2c8028: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2c8028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c802c:
    // 0x2c802c: 0xc0b1df2  jal         func_2C77C8
    ctx->pc = 0x2C802Cu;
    SET_GPR_U32(ctx, 31, 0x2C8034u);
    ctx->pc = 0x2C8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C802Cu;
    // 0x2c8030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C77C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77C8u, 0x2C802Cu, 0x2C8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8034u;
label_2c8034:
    // 0x2c8034: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c8034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c8038:
    // 0x2c8038: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x2c8038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c803c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C803Cu;
    {
        const bool branch_taken_0x2c803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C803Cu;
        // 0x2c8040: 0x951023  subu        $v0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c803c) {
            ctx->pc = 0x2C806Cu;
            goto label_2c806c;
        }
    }
    ctx->pc = 0x2C8044u;
    // 0x2c8044: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2c8044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c8048: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2c8048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2c804c: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x2c804cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c8050: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x2c8050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2c8054: 0x36a50003  ori         $a1, $s5, 0x3
    ctx->pc = 0x2c8054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)3);
    // 0x2c8058: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2c8058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x2c805c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2c8060: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2c8060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2c8064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8064u;
    {
        const bool branch_taken_0x2c8064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8064u;
        // 0x2c8068: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8064) {
            ctx->pc = 0x2C8078u;
            goto label_2c8078;
        }
    }
    ctx->pc = 0x2C806Cu;
label_2c806c:
    // 0x2c806c: 0xc0b284c  jal         func_2CA130
    ctx->pc = 0x2C806Cu;
    SET_GPR_U32(ctx, 31, 0x2C8074u);
    ctx->pc = 0x2CA130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA130u, 0x2C806Cu, 0x2C8074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8074u;
label_2c8074:
    // 0x2c8074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8078:
    // 0x2c8078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c807c:
    // 0x2c807c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c807cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c8080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c8084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c8088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c8088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c808c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c808cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8090: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c8090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8094: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c8094u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c8098: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c809c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C809Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C809Cu;
        // 0x2c80a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C809Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C80A4u;
    // 0x2c80a4: 0x0  nop
    ctx->pc = 0x2c80a4u;
    // NOP
    ctx->pc = 0x2c80a8u;
}
