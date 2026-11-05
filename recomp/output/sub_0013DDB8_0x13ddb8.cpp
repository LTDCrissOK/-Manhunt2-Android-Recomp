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

// Function: sub_0013DDB8
// Address: 0x13ddb8 - 0x13de08
void sub_0013DDB8_0x13ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DDB8_0x13ddb8");
#endif

    switch (ctx->pc) {
        case 0x13ddd0u: goto label_13ddd0;
        default: break;
    }

    ctx->pc = 0x13ddb8u;

    // 0x13ddb8: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x13ddb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13ddbc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13DDBCu;
    {
        const bool branch_taken_0x13ddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDBCu;
        // 0x13ddc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddbc) {
            ctx->pc = 0x13DE00u;
            goto label_13de00;
        }
    }
    ctx->pc = 0x13DDC4u;
    // 0x13ddc4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x13ddc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ddc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13ddc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ddcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_13ddd0:
    // 0x13ddd0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13ddd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ddd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DDD8u;
    {
        const bool branch_taken_0x13ddd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDD8u;
        // 0x13dddc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddd8) {
            ctx->pc = 0x13DDE8u;
            goto label_13dde8;
        }
    }
    ctx->pc = 0x13DDE0u;
    // 0x13dde0: 0x3e00008  jr          $ra
    ctx->pc = 0x13DDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDE0u;
        // 0x13dde4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DDE8u;
label_13dde8:
    // 0x13dde8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13dde8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ddec: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x13ddecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13ddf0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13DDF0u;
    {
        const bool branch_taken_0x13ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDF0u;
        // 0x13ddf4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddf0) {
            ctx->pc = 0x13DDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ddd0;
        }
    }
    ctx->pc = 0x13DDF8u;
    // 0x13ddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x13DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDF8u;
        // 0x13ddfc: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE00u;
label_13de00:
    // 0x13de00: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE08u;
}
