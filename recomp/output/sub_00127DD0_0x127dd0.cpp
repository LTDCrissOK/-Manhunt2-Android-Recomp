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

// Function: sub_00127DD0
// Address: 0x127dd0 - 0x127e38
void sub_00127DD0_0x127dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127DD0_0x127dd0");
#endif

    switch (ctx->pc) {
        case 0x127df0u: goto label_127df0;
        default: break;
    }

    ctx->pc = 0x127dd0u;

    // 0x127dd0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x127DD0u;
    {
        const bool branch_taken_0x127dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x127dd0) {
            ctx->pc = 0x127E30u;
            goto label_127e30;
        }
    }
    ctx->pc = 0x127DD8u;
    // 0x127dd8: 0x90820a70  lbu         $v0, 0xA70($a0)
    ctx->pc = 0x127dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2672)));
    // 0x127ddc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x127DDCu;
    {
        const bool branch_taken_0x127ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ddc) {
            ctx->pc = 0x127E30u;
            goto label_127e30;
        }
    }
    ctx->pc = 0x127DE4u;
    // 0x127de4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x127DE4u;
    {
        const bool branch_taken_0x127de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE4u;
        // 0x127de8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127de4) {
            ctx->pc = 0x127E30u;
            goto label_127e30;
        }
    }
    ctx->pc = 0x127DECu;
    // 0x127dec: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_127df0:
    // 0x127df0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x127df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127df4: 0x8cc30894  lw          $v1, 0x894($a2)
    ctx->pc = 0x127df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2196)));
    // 0x127df8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x127DF8u;
    {
        const bool branch_taken_0x127df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DF8u;
        // 0x127dfc: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127df8) {
            ctx->pc = 0x127E1Cu;
            goto label_127e1c;
        }
    }
    ctx->pc = 0x127E00u;
    // 0x127e00: 0x8cc2089c  lw          $v0, 0x89C($a2)
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2204)));
    // 0x127e04: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x127E04u;
    {
        const bool branch_taken_0x127e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x127e04) {
            ctx->pc = 0x127E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E04u;
            // 0x127e08: 0x90820a70  lbu         $v0, 0xA70($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E20u;
            goto label_127e20;
        }
    }
    ctx->pc = 0x127E0Cu;
    // 0x127e0c: 0xacc008a4  sw          $zero, 0x8A4($a2)
    ctx->pc = 0x127e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2212), GPR_U32(ctx, 0));
    // 0x127e10: 0xacc0089c  sw          $zero, 0x89C($a2)
    ctx->pc = 0x127e10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2204), GPR_U32(ctx, 0));
    // 0x127e14: 0xacc008a0  sw          $zero, 0x8A0($a2)
    ctx->pc = 0x127e14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2208), GPR_U32(ctx, 0));
    // 0x127e18: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x127e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_127e1c:
    // 0x127e1c: 0x90820a70  lbu         $v0, 0xA70($a0)
    ctx->pc = 0x127e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2672)));
label_127e20:
    // 0x127e20: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x127e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127e24: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x127e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127e28: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x127E28u;
    {
        const bool branch_taken_0x127e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E28u;
        // 0x127e2c: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e28) {
            ctx->pc = 0x127DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127df0;
        }
    }
    ctx->pc = 0x127E30u;
label_127e30:
    // 0x127e30: 0x3e00008  jr          $ra
    ctx->pc = 0x127E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127E38u;
}
