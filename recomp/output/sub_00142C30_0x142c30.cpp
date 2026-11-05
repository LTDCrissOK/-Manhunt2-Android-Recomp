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

// Function: sub_00142C30
// Address: 0x142c30 - 0x142ce0
void sub_00142C30_0x142c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142C30_0x142c30");
#endif

    switch (ctx->pc) {
        case 0x142c70u: goto label_142c70;
        case 0x142c94u: goto label_142c94;
        default: break;
    }

    ctx->pc = 0x142c30u;

    // 0x142c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x142c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142c44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x142c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x142c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x142c4c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x142c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x142c50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142C50u;
    {
        const bool branch_taken_0x142c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C50u;
        // 0x142c54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c50) {
            ctx->pc = 0x142C60u;
            goto label_142c60;
        }
    }
    ctx->pc = 0x142C58u;
    // 0x142c58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x142C58u;
    {
        const bool branch_taken_0x142c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C58u;
        // 0x142c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c58) {
            ctx->pc = 0x142CC0u;
            goto label_142cc0;
        }
    }
    ctx->pc = 0x142C60u;
label_142c60:
    // 0x142c60: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142c64: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x142c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x142c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x142c6c: 0x0  nop
    ctx->pc = 0x142c6cu;
    // NOP
label_142c70:
    // 0x142c70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x142c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x142c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142c7c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142C7Cu;
    {
        const bool branch_taken_0x142c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C7Cu;
        // 0x142c80: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c7c) {
            ctx->pc = 0x142C9Cu;
            goto label_142c9c;
        }
    }
    ctx->pc = 0x142C84u;
    // 0x142c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c88: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x142c88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142c8c: 0xc04e866  jal         func_13A198
    ctx->pc = 0x142C8Cu;
    SET_GPR_U32(ctx, 31, 0x142C94u);
    ctx->pc = 0x142C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C8Cu;
    // 0x142c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x142C8Cu, 0x142C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C94u;
label_142c94:
    // 0x142c94: 0x1453000a  bne         $v0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x142C94u;
    {
        const bool branch_taken_0x142c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x142C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C94u;
        // 0x142c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c94) {
            ctx->pc = 0x142CC0u;
            goto label_142cc0;
        }
    }
    ctx->pc = 0x142C9Cu;
label_142c9c:
    // 0x142c9c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x142c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x142ca0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x142ca0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142ca4: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x142ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x142ca8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142CA8u;
    {
        const bool branch_taken_0x142ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA8u;
        // 0x142cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ca8) {
            ctx->pc = 0x142CC0u;
            goto label_142cc0;
        }
    }
    ctx->pc = 0x142CB0u;
    // 0x142cb0: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x142cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x142cb4: 0x5642ffee  bnel        $s2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x142CB4u;
    {
        const bool branch_taken_0x142cb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x142cb4) {
            ctx->pc = 0x142CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CB4u;
            // 0x142cb8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142c70;
        }
    }
    ctx->pc = 0x142CBCu;
    // 0x142cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142cc0:
    // 0x142cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142ccc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x142cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x142CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CD4u;
        // 0x142cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142CDCu;
    // 0x142cdc: 0x0  nop
    ctx->pc = 0x142cdcu;
    // NOP
    ctx->pc = 0x142ce0u;
}
