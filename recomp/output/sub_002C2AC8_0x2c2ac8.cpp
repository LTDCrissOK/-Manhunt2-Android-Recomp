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

// Function: sub_002C2AC8
// Address: 0x2c2ac8 - 0x2c2d10
void sub_002C2AC8_0x2c2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2AC8_0x2c2ac8");
#endif

    switch (ctx->pc) {
        case 0x2c2b08u: goto label_2c2b08;
        case 0x2c2b30u: goto label_2c2b30;
        case 0x2c2b54u: goto label_2c2b54;
        case 0x2c2b60u: goto label_2c2b60;
        case 0x2c2b90u: goto label_2c2b90;
        case 0x2c2bb0u: goto label_2c2bb0;
        case 0x2c2bb8u: goto label_2c2bb8;
        case 0x2c2bd8u: goto label_2c2bd8;
        case 0x2c2c18u: goto label_2c2c18;
        case 0x2c2c20u: goto label_2c2c20;
        case 0x2c2c40u: goto label_2c2c40;
        case 0x2c2c80u: goto label_2c2c80;
        case 0x2c2c88u: goto label_2c2c88;
        case 0x2c2ca8u: goto label_2c2ca8;
        case 0x2c2cd8u: goto label_2c2cd8;
        case 0x2c2ce8u: goto label_2c2ce8;
        default: break;
    }

    ctx->pc = 0x2c2ac8u;

    // 0x2c2ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c2ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c2acc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c2accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c2ad0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c2ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c2ad4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2adc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2c2adcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c2ae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c2ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c2ae8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c2aec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c2aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c2af0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2c2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2c2af4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2c2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c2af8: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c2af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c2afc: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C2AFCu;
    {
        const bool branch_taken_0x2c2afc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AFCu;
        // 0x2c2b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2afc) {
            ctx->pc = 0x2C2B84u;
            goto label_2c2b84;
        }
    }
    ctx->pc = 0x2C2B04u;
    // 0x2c2b04: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2c2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c2b08:
    // 0x2c2b08: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c2b0c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2c2b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c2b14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2b18: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x2c2b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c2b1c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C2B1Cu;
    {
        const bool branch_taken_0x2c2b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B1Cu;
        // 0x2c2b20: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b1c) {
            ctx->pc = 0x2C2B6Cu;
            goto label_2c2b6c;
        }
    }
    ctx->pc = 0x2C2B24u;
    // 0x2c2b24: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x2c2b24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x2c2b28: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c2b2c: 0x0  nop
    ctx->pc = 0x2c2b2cu;
    // NOP
label_2c2b30:
    // 0x2c2b30: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2c2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c2b34: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2c2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c2b38: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x2c2b38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c2b3c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2c2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2c2b40: 0x14930007  bne         $a0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2B40u;
    {
        const bool branch_taken_0x2c2b40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B40u;
        // 0x2c2b44: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b40) {
            ctx->pc = 0x2C2B60u;
            goto label_2c2b60;
        }
    }
    ctx->pc = 0x2C2B48u;
    // 0x2c2b48: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x2c2b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2c2b4c: 0xc0b05a4  jal         func_2C1690
    ctx->pc = 0x2C2B4Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B54u);
    ctx->pc = 0x2C2B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B4Cu;
    // 0x2c2b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1690u, 0x2C2B4Cu, 0x2C2B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B54u;
label_2c2b54:
    // 0x2c2b54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b58: 0xc0b0b98  jal         func_2C2E60
    ctx->pc = 0x2C2B58u;
    SET_GPR_U32(ctx, 31, 0x2C2B60u);
    ctx->pc = 0x2C2B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B58u;
    // 0x2c2b5c: 0x26a44f20  addiu       $a0, $s5, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E60u, 0x2C2B58u, 0x2C2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B60u;
label_2c2b60:
    // 0x2c2b60: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c2b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b64: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C2B64u;
    {
        const bool branch_taken_0x2c2b64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b64) {
            ctx->pc = 0x2C2B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B64u;
            // 0x2c2b68: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2b30;
        }
    }
    ctx->pc = 0x2C2B6Cu;
label_2c2b6c:
    // 0x2c2b6c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2c2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c2b70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c2b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b74: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c2b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c2b78: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2c2b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c2b7c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2C2B7Cu;
    {
        const bool branch_taken_0x2c2b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b7c) {
            ctx->pc = 0x2C2B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B7Cu;
            // 0x2c2b80: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2b08;
        }
    }
    ctx->pc = 0x2C2B84u;
label_2c2b84:
    // 0x2c2b84: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2c2b88: 0xc0b05a4  jal         func_2C1690
    ctx->pc = 0x2C2B88u;
    SET_GPR_U32(ctx, 31, 0x2C2B90u);
    ctx->pc = 0x2C2B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B88u;
    // 0x2c2b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1690u, 0x2C2B88u, 0x2C2B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B90u;
label_2c2b90:
    // 0x2c2b90: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c2b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b94: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2c2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2c2b98: 0x24423500  addiu       $v0, $v0, 0x3500
    ctx->pc = 0x2c2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x2c2b9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x2c2ba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c2ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ba4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C2BA4u;
    {
        const bool branch_taken_0x2c2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BA4u;
        // 0x2c2ba8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ba4) {
            ctx->pc = 0x2C2BD8u;
            goto label_2c2bd8;
        }
    }
    ctx->pc = 0x2C2BACu;
    // 0x2c2bac: 0x0  nop
    ctx->pc = 0x2c2bacu;
    // NOP
label_2c2bb0:
    // 0x2c2bb0: 0xc083796  jal         func_20DE58
    ctx->pc = 0x2C2BB0u;
    SET_GPR_U32(ctx, 31, 0x2C2BB8u);
    ctx->pc = 0x2C2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BB0u;
    // 0x2c2bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE58u, 0x2C2BB0u, 0x2C2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BB8u;
label_2c2bb8:
    // 0x2c2bb8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2c2bbc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c2bc0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2c2bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2c2bc4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2BC4u;
    {
        const bool branch_taken_0x2c2bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2bc4) {
            ctx->pc = 0x2C2BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2BC4u;
            // 0x2c2bc8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2BDCu;
            goto label_2c2bdc;
        }
    }
    ctx->pc = 0x2C2BCCu;
    // 0x2c2bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bd0: 0xc08fae2  jal         func_23EB88
    ctx->pc = 0x2C2BD0u;
    SET_GPR_U32(ctx, 31, 0x2C2BD8u);
    ctx->pc = 0x2C2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BD0u;
    // 0x2c2bd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB88u, 0x2C2BD0u, 0x2C2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BD8u;
label_2c2bd8:
    // 0x2c2bd8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2c2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c2bdc:
    // 0x2c2bdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2BDCu;
    {
        const bool branch_taken_0x2c2bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BDCu;
        // 0x2c2be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bdc) {
            ctx->pc = 0x2C2BE8u;
            goto label_2c2be8;
        }
    }
    ctx->pc = 0x2C2BE4u;
    // 0x2c2be4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c2be8:
    // 0x2c2be8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2BE8u;
    {
        const bool branch_taken_0x2c2be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BE8u;
        // 0x2c2bec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2be8) {
            ctx->pc = 0x2C2BF8u;
            goto label_2c2bf8;
        }
    }
    ctx->pc = 0x2C2BF0u;
    // 0x2c2bf0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c2bf4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2c2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2c2bf8:
    // 0x2c2bf8: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C2BF8u;
    {
        const bool branch_taken_0x2c2bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BF8u;
        // 0x2c2bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bf8) {
            ctx->pc = 0x2C2BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2bb0;
        }
    }
    ctx->pc = 0x2C2C00u;
    // 0x2c2c00: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2c2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2c2c04: 0x24423510  addiu       $v0, $v0, 0x3510
    ctx->pc = 0x2c2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x2c2c08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3514u));
    // 0x2c2c0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c2c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C2C10u;
    {
        const bool branch_taken_0x2c2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C10u;
        // 0x2c2c14: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c10) {
            ctx->pc = 0x2C2C40u;
            goto label_2c2c40;
        }
    }
    ctx->pc = 0x2C2C18u;
label_2c2c18:
    // 0x2c2c18: 0xc083796  jal         func_20DE58
    ctx->pc = 0x2C2C18u;
    SET_GPR_U32(ctx, 31, 0x2C2C20u);
    ctx->pc = 0x2C2C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C18u;
    // 0x2c2c1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE58u, 0x2C2C18u, 0x2C2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C20u;
label_2c2c20:
    // 0x2c2c20: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2c2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2c2c24: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c2c28: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2c2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2c2c2c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2C2Cu;
    {
        const bool branch_taken_0x2c2c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c2c) {
            ctx->pc = 0x2C2C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2C2Cu;
            // 0x2c2c30: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C44u;
            goto label_2c2c44;
        }
    }
    ctx->pc = 0x2C2C34u;
    // 0x2c2c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c38: 0xc08fae2  jal         func_23EB88
    ctx->pc = 0x2C2C38u;
    SET_GPR_U32(ctx, 31, 0x2C2C40u);
    ctx->pc = 0x2C2C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C38u;
    // 0x2c2c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB88u, 0x2C2C38u, 0x2C2C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C40u;
label_2c2c40:
    // 0x2c2c40: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2c2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c2c44:
    // 0x2c2c44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2C44u;
    {
        const bool branch_taken_0x2c2c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C44u;
        // 0x2c2c48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c44) {
            ctx->pc = 0x2C2C50u;
            goto label_2c2c50;
        }
    }
    ctx->pc = 0x2C2C4Cu;
    // 0x2c2c4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c2c50:
    // 0x2c2c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2C50u;
    {
        const bool branch_taken_0x2c2c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C50u;
        // 0x2c2c54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c50) {
            ctx->pc = 0x2C2C60u;
            goto label_2c2c60;
        }
    }
    ctx->pc = 0x2C2C58u;
    // 0x2c2c58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c2c5c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2c2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2c2c60:
    // 0x2c2c60: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C2C60u;
    {
        const bool branch_taken_0x2c2c60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C60u;
        // 0x2c2c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c60) {
            ctx->pc = 0x2C2C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2c18;
        }
    }
    ctx->pc = 0x2C2C68u;
    // 0x2c2c68: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2c2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2c2c6c: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x2c2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
    // 0x2c2c70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3534u));
    // 0x2c2c74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c2c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C2C78u;
    {
        const bool branch_taken_0x2c2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C78u;
        // 0x2c2c7c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c78) {
            ctx->pc = 0x2C2CA8u;
            goto label_2c2ca8;
        }
    }
    ctx->pc = 0x2C2C80u;
label_2c2c80:
    // 0x2c2c80: 0xc083796  jal         func_20DE58
    ctx->pc = 0x2C2C80u;
    SET_GPR_U32(ctx, 31, 0x2C2C88u);
    ctx->pc = 0x2C2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C80u;
    // 0x2c2c84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE58u, 0x2C2C80u, 0x2C2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C88u;
label_2c2c88:
    // 0x2c2c88: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2c2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2c2c8c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c2c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c2c90: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2c2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2c2c94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2C94u;
    {
        const bool branch_taken_0x2c2c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c94) {
            ctx->pc = 0x2C2C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2C94u;
            // 0x2c2c98: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CACu;
            goto label_2c2cac;
        }
    }
    ctx->pc = 0x2C2C9Cu;
    // 0x2c2c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ca0: 0xc08fae2  jal         func_23EB88
    ctx->pc = 0x2C2CA0u;
    SET_GPR_U32(ctx, 31, 0x2C2CA8u);
    ctx->pc = 0x2C2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CA0u;
    // 0x2c2ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB88u, 0x2C2CA0u, 0x2C2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CA8u;
label_2c2ca8:
    // 0x2c2ca8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2c2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c2cac:
    // 0x2c2cac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2CACu;
    {
        const bool branch_taken_0x2c2cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CACu;
        // 0x2c2cb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cac) {
            ctx->pc = 0x2C2CB8u;
            goto label_2c2cb8;
        }
    }
    ctx->pc = 0x2C2CB4u;
    // 0x2c2cb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c2cb8:
    // 0x2c2cb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2CB8u;
    {
        const bool branch_taken_0x2c2cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CB8u;
        // 0x2c2cbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cb8) {
            ctx->pc = 0x2C2CC8u;
            goto label_2c2cc8;
        }
    }
    ctx->pc = 0x2C2CC0u;
    // 0x2c2cc0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c2cc4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2c2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2c2cc8:
    // 0x2c2cc8: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C2CC8u;
    {
        const bool branch_taken_0x2c2cc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CC8u;
        // 0x2c2ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cc8) {
            ctx->pc = 0x2C2C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2c80;
        }
    }
    ctx->pc = 0x2C2CD0u;
    // 0x2c2cd0: 0xc0b0fce  jal         func_2C3F38
    ctx->pc = 0x2C2CD0u;
    SET_GPR_U32(ctx, 31, 0x2C2CD8u);
    ctx->pc = 0x2C2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CD0u;
    // 0x2c2cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F38u, 0x2C2CD0u, 0x2C2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CD8u;
label_2c2cd8:
    // 0x2c2cd8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2CD8u;
    {
        const bool branch_taken_0x2c2cd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CD8u;
        // 0x2c2cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cd8) {
            ctx->pc = 0x2C2CE8u;
            goto label_2c2ce8;
        }
    }
    ctx->pc = 0x2C2CE0u;
    // 0x2c2ce0: 0xc0b0e8e  jal         func_2C3A38
    ctx->pc = 0x2C2CE0u;
    SET_GPR_U32(ctx, 31, 0x2C2CE8u);
    ctx->pc = 0x2C2CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CE0u;
    // 0x2c2ce4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3A38u, 0x2C2CE0u, 0x2C2CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CE8u;
label_2c2ce8:
    // 0x2c2ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2cec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c2cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2cf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c2cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2cf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c2cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2cf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c2cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2cfc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c2cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c2d00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c2d00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2d04: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2c2d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c2d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D08u;
        // 0x2c2d0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D10u;
}
