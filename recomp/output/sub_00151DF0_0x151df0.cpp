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

// Function: sub_00151DF0
// Address: 0x151df0 - 0x151e40
void sub_00151DF0_0x151df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151DF0_0x151df0");
#endif

    switch (ctx->pc) {
        case 0x151e00u: goto label_151e00;
        default: break;
    }

    ctx->pc = 0x151df0u;

    // 0x151df0: 0x24870918  addiu       $a3, $a0, 0x918
    ctx->pc = 0x151df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2328));
    // 0x151df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151df8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x151df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x151dfc: 0x0  nop
    ctx->pc = 0x151dfcu;
    // NOP
label_151e00:
    // 0x151e00: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x151e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x151e04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e08: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151E08u;
    {
        const bool branch_taken_0x151e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x151e08) {
            ctx->pc = 0x151E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E08u;
            // 0x151e0c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151E24u;
            goto label_151e24;
        }
    }
    ctx->pc = 0x151E10u;
    // 0x151e10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x151e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x151e14: 0x90820938  lbu         $v0, 0x938($a0)
    ctx->pc = 0x151e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2360)));
    // 0x151e18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x151E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E1Cu;
        // 0x151e20: 0xa0820938  sb          $v0, 0x938($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2360), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151E24u;
label_151e24:
    // 0x151e24: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x151e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151e28: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x151e28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x151e2c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x151E2Cu;
    {
        const bool branch_taken_0x151e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E2Cu;
        // 0x151e30: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e2c) {
            ctx->pc = 0x151E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151e00;
        }
    }
    ctx->pc = 0x151E34u;
    // 0x151e34: 0x3e00008  jr          $ra
    ctx->pc = 0x151E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151E3Cu;
    // 0x151e3c: 0x0  nop
    ctx->pc = 0x151e3cu;
    // NOP
    ctx->pc = 0x151e40u;
}
