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

// Function: sub_0013ADE8
// Address: 0x13ade8 - 0x13aee8
void sub_0013ADE8_0x13ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ADE8_0x13ade8");
#endif

    switch (ctx->pc) {
        case 0x13ae78u: goto label_13ae78;
        case 0x13ae88u: goto label_13ae88;
        case 0x13aea0u: goto label_13aea0;
        default: break;
    }

    ctx->pc = 0x13ade8u;

    // 0x13ade8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13adec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13adf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13adf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13adf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13adfc: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13adfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ae00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ae04: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ae08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13ae0c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13ae10: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x13ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13ae14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ae18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ae1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ae20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ae24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ae28: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x13ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x13ae2c: 0x8c700ff8  lw          $s0, 0xFF8($v1)
    ctx->pc = 0x13ae2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x13ae30: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13AE30u;
    {
        const bool branch_taken_0x13ae30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE30u;
        // 0x13ae34: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae30) {
            ctx->pc = 0x13AE78u;
            goto label_13ae78;
        }
    }
    ctx->pc = 0x13AE38u;
    // 0x13ae38: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13ae3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13ae40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AE40u;
    {
        const bool branch_taken_0x13ae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE40u;
        // 0x13ae44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae40) {
            ctx->pc = 0x13AE60u;
            goto label_13ae60;
        }
    }
    ctx->pc = 0x13AE48u;
    // 0x13ae48: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x13ae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13ae4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AE4Cu;
    {
        const bool branch_taken_0x13ae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ae4c) {
            ctx->pc = 0x13AE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AE4Cu;
            // 0x13ae50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AE64u;
            goto label_13ae64;
        }
    }
    ctx->pc = 0x13AE54u;
    // 0x13ae54: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x13ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13ae58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AE58u;
    {
        const bool branch_taken_0x13ae58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae58) {
            ctx->pc = 0x13AE64u;
            goto label_13ae64;
        }
    }
    ctx->pc = 0x13AE60u;
label_13ae60:
    // 0x13ae60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ae64:
    // 0x13ae64: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AE64u;
    {
        const bool branch_taken_0x13ae64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE64u;
        // 0x13ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae64) {
            ctx->pc = 0x13AE80u;
            goto label_13ae80;
        }
    }
    ctx->pc = 0x13AE6Cu;
    // 0x13ae6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13ae6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae70: 0xc04eb04  jal         func_13AC10
    ctx->pc = 0x13AE70u;
    SET_GPR_U32(ctx, 31, 0x13AE78u);
    ctx->pc = 0x13AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE70u;
    // 0x13ae74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC10u, 0x13AE70u, 0x13AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE78u;
label_13ae78:
    // 0x13ae78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13AE78u;
    {
        const bool branch_taken_0x13ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE78u;
        // 0x13ae7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae78) {
            ctx->pc = 0x13AECCu;
            goto label_13aecc;
        }
    }
    ctx->pc = 0x13AE80u;
label_13ae80:
    // 0x13ae80: 0xc04eb0a  jal         func_13AC28
    ctx->pc = 0x13AE80u;
    SET_GPR_U32(ctx, 31, 0x13AE88u);
    ctx->pc = 0x13AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE80u;
    // 0x13ae84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC28u, 0x13AE80u, 0x13AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE88u;
label_13ae88:
    // 0x13ae88: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13AE88u;
    {
        const bool branch_taken_0x13ae88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE88u;
        // 0x13ae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae88) {
            ctx->pc = 0x13AECCu;
            goto label_13aecc;
        }
    }
    ctx->pc = 0x13AE90u;
    // 0x13ae90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13ae94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae98: 0xc04eb04  jal         func_13AC10
    ctx->pc = 0x13AE98u;
    SET_GPR_U32(ctx, 31, 0x13AEA0u);
    ctx->pc = 0x13AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE98u;
    // 0x13ae9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC10u, 0x13AE98u, 0x13AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEA0u;
label_13aea0:
    // 0x13aea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13aea4: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x13aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13aea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AEA8u;
    {
        const bool branch_taken_0x13aea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEA8u;
        // 0x13aeac: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aea8) {
            ctx->pc = 0x13AEB8u;
            goto label_13aeb8;
        }
    }
    ctx->pc = 0x13AEB0u;
    // 0x13aeb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AEB0u;
    {
        const bool branch_taken_0x13aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEB0u;
        // 0x13aeb4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeb0) {
            ctx->pc = 0x13AEC8u;
            goto label_13aec8;
        }
    }
    ctx->pc = 0x13AEB8u;
label_13aeb8:
    // 0x13aeb8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AEB8u;
    {
        const bool branch_taken_0x13aeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEB8u;
        // 0x13aebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeb8) {
            ctx->pc = 0x13AEC4u;
            goto label_13aec4;
        }
    }
    ctx->pc = 0x13AEC0u;
    // 0x13aec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13aec4:
    // 0x13aec4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x13aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_13aec8:
    // 0x13aec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13aecc:
    // 0x13aecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13aeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13aed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13aed4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13aed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aed8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13aed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13aedc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13aedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aee0: 0x3e00008  jr          $ra
    ctx->pc = 0x13AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEE0u;
        // 0x13aee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AEE8u;
}
