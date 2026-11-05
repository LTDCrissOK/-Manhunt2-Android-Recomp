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

// Function: sub_003C7AF0
// Address: 0x3c7af0 - 0x3c7bf0
void sub_003C7AF0_0x3c7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7AF0_0x3c7af0");
#endif

    switch (ctx->pc) {
        case 0x3c7b3cu: goto label_3c7b3c;
        case 0x3c7b64u: goto label_3c7b64;
        case 0x3c7b78u: goto label_3c7b78;
        case 0x3c7b90u: goto label_3c7b90;
        case 0x3c7bb4u: goto label_3c7bb4;
        case 0x3c7bc4u: goto label_3c7bc4;
        default: break;
    }

    ctx->pc = 0x3c7af0u;

    // 0x3c7af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c7af4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c7af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c7af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c7af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c7afc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c7afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c7b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3c7b04: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3c7b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x3c7b08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c7b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c7b0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c7b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7b14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C7B14u;
    {
        const bool branch_taken_0x3c7b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B14u;
        // 0x3c7b18: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b14) {
            ctx->pc = 0x3C7B40u;
            goto label_3c7b40;
        }
    }
    ctx->pc = 0x3C7B1Cu;
    // 0x3c7b1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c7b20: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c7b24: 0x24421888  addiu       $v0, $v0, 0x1888
    ctx->pc = 0x3c7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6280));
    // 0x3c7b28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c7b2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c7b30: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3c7b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c7b34: 0xc0f1d4a  jal         func_3C7528
    ctx->pc = 0x3C7B34u;
    SET_GPR_U32(ctx, 31, 0x3C7B3Cu);
    ctx->pc = 0x3C7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B34u;
    // 0x3c7b38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7528u, 0x3C7B34u, 0x3C7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7B3Cu;
label_3c7b3c:
    // 0x3c7b3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c7b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7b40:
    // 0x3c7b40: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x3c7b40u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x3c7b44: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3C7B44u;
    {
        const bool branch_taken_0x3c7b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B44u;
        // 0x3c7b48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b44) {
            ctx->pc = 0x3C7BD4u;
            goto label_3c7bd4;
        }
    }
    ctx->pc = 0x3C7B4Cu;
    // 0x3c7b4c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x3c7b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3c7b50: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C7B50u;
    {
        const bool branch_taken_0x3c7b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B50u;
        // 0x3c7b54: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b50) {
            ctx->pc = 0x3C7BA0u;
            goto label_3c7ba0;
        }
    }
    ctx->pc = 0x3C7B58u;
    // 0x3c7b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c7b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b5c: 0xc0f1e2c  jal         func_3C78B0
    ctx->pc = 0x3C7B5Cu;
    SET_GPR_U32(ctx, 31, 0x3C7B64u);
    ctx->pc = 0x3C7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B5Cu;
    // 0x3c7b60: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78B0u, 0x3C7B5Cu, 0x3C7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7B64u;
label_3c7b64:
    // 0x3c7b64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c7b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b68: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x3c7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x3c7b6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C7B6Cu;
    {
        const bool branch_taken_0x3c7b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B6Cu;
        // 0x3c7b70: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b6c) {
            ctx->pc = 0x3C7B9Cu;
            goto label_3c7b9c;
        }
    }
    ctx->pc = 0x3C7B74u;
    // 0x3c7b74: 0x0  nop
    ctx->pc = 0x3c7b74u;
    // NOP
label_3c7b78:
    // 0x3c7b78: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7B78u;
    {
        const bool branch_taken_0x3c7b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7b78) {
            ctx->pc = 0x3C7B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7B78u;
            // 0x3c7b7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7B9Cu;
            goto label_3c7b9c;
        }
    }
    ctx->pc = 0x3C7B80u;
    // 0x3c7b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c7b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c7b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b88: 0xc0f1e3a  jal         func_3C78E8
    ctx->pc = 0x3C7B88u;
    SET_GPR_U32(ctx, 31, 0x3C7B90u);
    ctx->pc = 0x3C7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B88u;
    // 0x3c7b8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78E8u, 0x3C7B88u, 0x3C7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7B90u;
label_3c7b90:
    // 0x3c7b90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c7b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3c7b94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3c7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3c7b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c7b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7b9c:
    // 0x3c7b9c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3c7b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3c7ba0:
    // 0x3c7ba0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7BA0u;
    {
        const bool branch_taken_0x3c7ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BA0u;
        // 0x3c7ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ba0) {
            ctx->pc = 0x3C7BC4u;
            goto label_3c7bc4;
        }
    }
    ctx->pc = 0x3C7BA8u;
    // 0x3c7ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c7ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7bac: 0xc0f1e3a  jal         func_3C78E8
    ctx->pc = 0x3C7BACu;
    SET_GPR_U32(ctx, 31, 0x3C7BB4u);
    ctx->pc = 0x3C7BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BACu;
    // 0x3c7bb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78E8u, 0x3C7BACu, 0x3C7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BB4u;
label_3c7bb4:
    // 0x3c7bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c7bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c7bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7bbc: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C7BBCu;
    SET_GPR_U32(ctx, 31, 0x3C7BC4u);
    ctx->pc = 0x3C7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BBCu;
    // 0x3c7bc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C7BBCu, 0x3C7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BC4u;
label_3c7bc4:
    // 0x3c7bc4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x3c7bc4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x3c7bc8: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3C7BC8u;
    {
        const bool branch_taken_0x3c7bc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7bc8) {
            ctx->pc = 0x3C7BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7BC8u;
            // 0x3c7bcc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7b78;
        }
    }
    ctx->pc = 0x3C7BD0u;
    // 0x3c7bd0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c7bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c7bd4:
    // 0x3c7bd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c7bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7bd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c7bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7bdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7be0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c7be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7be8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BE8u;
        // 0x3c7bec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7BF0u;
}
