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

// Function: sub_002D5D98
// Address: 0x2d5d98 - 0x2d5e50
void sub_002D5D98_0x2d5d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5D98_0x2d5d98");
#endif

    switch (ctx->pc) {
        case 0x2d5dc0u: goto label_2d5dc0;
        case 0x2d5e3cu: goto label_2d5e3c;
        default: break;
    }

    ctx->pc = 0x2d5d98u;

    // 0x2d5d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5d9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d5d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5da4: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2d5da4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5da8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d5da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5dac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d5dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d5db0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2d5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d5db4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5DB4u;
    {
        const bool branch_taken_0x2d5db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DB4u;
        // 0x2d5db8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5db4) {
            ctx->pc = 0x2D5DC4u;
            goto label_2d5dc4;
        }
    }
    ctx->pc = 0x2D5DBCu;
    // 0x2d5dbc: 0x0  nop
    ctx->pc = 0x2d5dbcu;
    // NOP
label_2d5dc0:
    // 0x2d5dc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d5dc4:
    // 0x2d5dc4: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2d5dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d5dc8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5DC8u;
    {
        const bool branch_taken_0x2d5dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5dc8) {
            ctx->pc = 0x2D5DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5DC8u;
            // 0x2d5dcc: 0x8d030028  lw          $v1, 0x28($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5E04u;
            goto label_2d5e04;
        }
    }
    ctx->pc = 0x2D5DD0u;
    // 0x2d5dd0: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x2d5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x2d5dd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d5dd8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2d5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d5ddc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5DDCu;
    {
        const bool branch_taken_0x2d5ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ddc) {
            ctx->pc = 0x2D5DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5DDCu;
            // 0x2d5de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5DF0u;
            goto label_2d5df0;
        }
    }
    ctx->pc = 0x2D5DE4u;
    // 0x2d5de4: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5DE4u;
    {
        const bool branch_taken_0x2d5de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DE4u;
        // 0x2d5de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5de4) {
            ctx->pc = 0x2D5DF0u;
            goto label_2d5df0;
        }
    }
    ctx->pc = 0x2D5DECu;
    // 0x2d5dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5df0:
    // 0x2d5df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5df4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D5DF4u;
    {
        const bool branch_taken_0x2d5df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DF4u;
        // 0x2d5df8: 0x248401c4  addiu       $a0, $a0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5df4) {
            ctx->pc = 0x2D5DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5dc0;
        }
    }
    ctx->pc = 0x2D5DFCu;
    // 0x2d5dfc: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2d5dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e00: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x2d5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_2d5e04:
    // 0x2d5e04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5e08: 0x240401c4  addiu       $a0, $zero, 0x1C4
    ctx->pc = 0x2d5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d5e0c: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x2d5e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5e14: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x2d5e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d5e18: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2d5e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2d5e1c: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x2d5e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d5e20: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d5e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e24: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x2d5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x2d5e28: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2d5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2d5e2c: 0x8d050038  lw          $a1, 0x38($t0)
    ctx->pc = 0x2d5e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x2d5e30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5e34: 0xc0b5280  jal         func_2D4A00
    ctx->pc = 0x2D5E34u;
    SET_GPR_U32(ctx, 31, 0x2D5E3Cu);
    ctx->pc = 0x2D5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E34u;
    // 0x2d5e38: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4A00u, 0x2D5E34u, 0x2D5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E3Cu;
label_2d5e3c:
    // 0x2d5e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E40u;
        // 0x2d5e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5E48u;
    // 0x2d5e48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d5e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5e4c: 0x0  nop
    ctx->pc = 0x2d5e4cu;
    // NOP
    ctx->pc = 0x2d5e50u;
}
