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

// Function: sub_003ACBD8
// Address: 0x3acbd8 - 0x3acc98
void sub_003ACBD8_0x3acbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACBD8_0x3acbd8");
#endif

    switch (ctx->pc) {
        case 0x3acbf8u: goto label_3acbf8;
        case 0x3acc38u: goto label_3acc38;
        case 0x3acc88u: goto label_3acc88;
        default: break;
    }

    ctx->pc = 0x3acbd8u;

    // 0x3acbd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3acbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3acbdc: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x3acbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3acbe0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ACBE0u;
    {
        const bool branch_taken_0x3acbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBE0u;
        // 0x3acbe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbe0) {
            ctx->pc = 0x3ACC00u;
            goto label_3acc00;
        }
    }
    ctx->pc = 0x3ACBE8u;
    // 0x3acbe8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3acbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3acbec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3ACBECu;
    {
        const bool branch_taken_0x3acbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBECu;
        // 0x3acbf0: 0x2484f388  addiu       $a0, $a0, -0xC78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbec) {
            ctx->pc = 0x3ACC80u;
            goto label_3acc80;
        }
    }
    ctx->pc = 0x3ACBF4u;
    // 0x3acbf4: 0x0  nop
    ctx->pc = 0x3acbf4u;
    // NOP
label_3acbf8:
    // 0x3acbf8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3ACBF8u;
    {
        const bool branch_taken_0x3acbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBF8u;
        // 0x3acbfc: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbf8) {
            ctx->pc = 0x3ACC6Cu;
            goto label_3acc6c;
        }
    }
    ctx->pc = 0x3ACC00u;
label_3acc00:
    // 0x3acc00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3acc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3acc04: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3acc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3acc08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3acc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3acc0c: 0x246af3b0  addiu       $t2, $v1, -0xC50
    ctx->pc = 0x3acc0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964144));
    // 0x3acc10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3acc14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3acc14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acc18: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3acc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3acc1c: 0x24848f20  addiu       $a0, $a0, -0x70E0
    ctx->pc = 0x3acc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x3acc20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3acc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3acc24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3acc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3acc28: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3ACC28u;
    {
        const bool branch_taken_0x3acc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC28u;
        // 0x3acc2c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc28) {
            ctx->pc = 0x3ACC5Cu;
            goto label_3acc5c;
        }
    }
    ctx->pc = 0x3ACC30u;
    // 0x3acc30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3acc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3acc34: 0x0  nop
    ctx->pc = 0x3acc34u;
    // NOP
label_3acc38:
    // 0x3acc38: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x3acc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3acc3c: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x3acc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3acc40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3ACC40u;
    {
        const bool branch_taken_0x3acc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC40u;
        // 0x3acc44: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc40) {
            ctx->pc = 0x3ACC6Cu;
            goto label_3acc6c;
        }
    }
    ctx->pc = 0x3ACC48u;
    // 0x3acc48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3acc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3acc4c: 0x0  nop
    ctx->pc = 0x3acc4cu;
    // NOP
    // 0x3acc50: 0x0  nop
    ctx->pc = 0x3acc50u;
    // NOP
    // 0x3acc54: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3ACC54u;
    {
        const bool branch_taken_0x3acc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acc54) {
            ctx->pc = 0x3ACC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACC54u;
            // 0x3acc58: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acc38;
        }
    }
    ctx->pc = 0x3ACC5Cu;
label_3acc5c:
    // 0x3acc5c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3acc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3acc60: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3ACC60u;
    {
        const bool branch_taken_0x3acc60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC60u;
        // 0x3acc64: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc60) {
            ctx->pc = 0x3ACBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acbf8;
        }
    }
    ctx->pc = 0x3ACC68u;
    // 0x3acc68: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x3acc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_3acc6c:
    // 0x3acc6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3acc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3acc70: 0x55220006  bnel        $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ACC70u;
    {
        const bool branch_taken_0x3acc70 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x3acc70) {
            ctx->pc = 0x3ACC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACC70u;
            // 0x3acc74: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACC8Cu;
            goto label_3acc8c;
        }
    }
    ctx->pc = 0x3ACC78u;
    // 0x3acc78: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3acc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3acc7c: 0x2484f3b8  addiu       $a0, $a0, -0xC48
    ctx->pc = 0x3acc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964152));
label_3acc80:
    // 0x3acc80: 0xc0eb2bc  jal         func_3ACAF0
    ctx->pc = 0x3ACC80u;
    SET_GPR_U32(ctx, 31, 0x3ACC88u);
    ctx->pc = 0x3ACAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACAF0u, 0x3ACC80u, 0x3ACC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC88u;
label_3acc88:
    // 0x3acc88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3acc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3acc8c:
    // 0x3acc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acc90: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC90u;
        // 0x3acc94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACC98u;
}
