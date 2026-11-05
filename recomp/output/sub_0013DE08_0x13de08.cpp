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

// Function: sub_0013DE08
// Address: 0x13de08 - 0x13de50
void sub_0013DE08_0x13de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DE08_0x13de08");
#endif

    switch (ctx->pc) {
        case 0x13de20u: goto label_13de20;
        default: break;
    }

    ctx->pc = 0x13de08u;

    // 0x13de08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13de08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de0c: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x13de0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13de10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13DE10u;
    {
        const bool branch_taken_0x13de10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE10u;
        // 0x13de14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de10) {
            ctx->pc = 0x13DE44u;
            goto label_13de44;
        }
    }
    ctx->pc = 0x13DE18u;
    // 0x13de18: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13de1c: 0x0  nop
    ctx->pc = 0x13de1cu;
    // NOP
label_13de20:
    // 0x13de20: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13de20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13de24: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13de28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13de2c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13de2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13de30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x13de30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x13de34: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x13de34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13de38: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x13de38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13de3c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13DE3Cu;
    {
        const bool branch_taken_0x13de3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de3c) {
            ctx->pc = 0x13DE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DE3Cu;
            // 0x13de40: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13de20;
        }
    }
    ctx->pc = 0x13DE44u;
label_13de44:
    // 0x13de44: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE4Cu;
    // 0x13de4c: 0x0  nop
    ctx->pc = 0x13de4cu;
    // NOP
    ctx->pc = 0x13de50u;
}
