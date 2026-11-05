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

// Function: sub_00164B28
// Address: 0x164b28 - 0x164c08
void sub_00164B28_0x164b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164B28_0x164b28");
#endif

    switch (ctx->pc) {
        case 0x164b68u: goto label_164b68;
        case 0x164b84u: goto label_164b84;
        case 0x164b98u: goto label_164b98;
        case 0x164ba0u: goto label_164ba0;
        case 0x164bbcu: goto label_164bbc;
        default: break;
    }

    ctx->pc = 0x164b28u;

    // 0x164b28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x164b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x164b2c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x164b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x164b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164b38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x164b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x164b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x164b48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x164b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b4c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x164b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x164b50: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x164b50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x164b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164b58: 0x24559b10  addiu       $s5, $v0, -0x64F0
    ctx->pc = 0x164b58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x164b5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164b60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x164b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x164b64: 0x0  nop
    ctx->pc = 0x164b64u;
    // NOP
label_164b68:
    // 0x164b68: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x164b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164b70: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164b74: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x164B74u;
    {
        const bool branch_taken_0x164b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B74u;
        // 0x164b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b74) {
            ctx->pc = 0x164BD0u;
            goto label_164bd0;
        }
    }
    ctx->pc = 0x164B7Cu;
    // 0x164b7c: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x164B7Cu;
    SET_GPR_U32(ctx, 31, 0x164B84u);
    ctx->pc = 0x164B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B7Cu;
    // 0x164b80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x164B7Cu, 0x164B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B84u;
label_164b84:
    // 0x164b84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x164B84u;
    {
        const bool branch_taken_0x164b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B84u;
        // 0x164b88: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b84) {
            ctx->pc = 0x164BC0u;
            goto label_164bc0;
        }
    }
    ctx->pc = 0x164B8Cu;
    // 0x164b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b90: 0xc04f452  jal         func_13D148
    ctx->pc = 0x164B90u;
    SET_GPR_U32(ctx, 31, 0x164B98u);
    ctx->pc = 0x164B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B90u;
    // 0x164b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x164B90u, 0x164B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B98u;
label_164b98:
    // 0x164b98: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x164B98u;
    SET_GPR_U32(ctx, 31, 0x164BA0u);
    ctx->pc = 0x164B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B98u;
    // 0x164b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x164B98u, 0x164BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164BA0u;
label_164ba0:
    // 0x164ba0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x164ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x164ba4: 0x8e0702e0  lw          $a3, 0x2E0($s0)
    ctx->pc = 0x164ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x164ba8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x164ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x164bac: 0x268487a0  addiu       $a0, $s4, -0x7860
    ctx->pc = 0x164bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936480));
    // 0x164bb0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164bb4: 0xc04668a  jal         func_119A28
    ctx->pc = 0x164BB4u;
    SET_GPR_U32(ctx, 31, 0x164BBCu);
    ctx->pc = 0x164BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164BB4u;
    // 0x164bb8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x164BB4u, 0x164BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164BBCu;
label_164bbc:
    // 0x164bbc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_164bc0:
    // 0x164bc0: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x164bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x164bc4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x164bc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164bc8: 0x52630007  beql        $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x164BC8u;
    {
        const bool branch_taken_0x164bc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x164bc8) {
            ctx->pc = 0x164BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164BC8u;
            // 0x164bcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164BE8u;
            goto label_164be8;
        }
    }
    ctx->pc = 0x164BD0u;
label_164bd0:
    // 0x164bd0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x164bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x164bd4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x164bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164bd8: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x164bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x164bdc: 0x5460ffe2  bnel        $v1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x164BDCu;
    {
        const bool branch_taken_0x164bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164bdc) {
            ctx->pc = 0x164BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164BDCu;
            // 0x164be0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164b68;
        }
    }
    ctx->pc = 0x164BE4u;
    // 0x164be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164be8:
    // 0x164be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164bec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164bf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164bf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164bf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x164bf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164bfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164c00: 0x3e00008  jr          $ra
    ctx->pc = 0x164C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C00u;
        // 0x164c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164C08u;
}
