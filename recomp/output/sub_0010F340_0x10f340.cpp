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

// Function: sub_0010F340
// Address: 0x10f340 - 0x10f388
void sub_0010F340_0x10f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F340_0x10f340");
#endif

    switch (ctx->pc) {
        case 0x10f34cu: goto label_10f34c;
        default: break;
    }

    ctx->pc = 0x10f340u;

    // 0x10f340: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x10f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x10f344: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F344u;
    {
        const bool branch_taken_0x10f344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f344) {
            ctx->pc = 0x10F348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F344u;
            // 0x10f348: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F354u;
            goto label_10f354;
        }
    }
    ctx->pc = 0x10F34Cu;
label_10f34c:
    // 0x10f34c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F34Cu;
        // 0x10f350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F354u;
label_10f354:
    // 0x10f354: 0x0  nop
    ctx->pc = 0x10f354u;
    // NOP
    // 0x10f358: 0x0  nop
    ctx->pc = 0x10f358u;
    // NOP
    // 0x10f35c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10F35Cu;
    {
        const bool branch_taken_0x10f35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f35c) {
            ctx->pc = 0x10F34Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f34c;
        }
    }
    ctx->pc = 0x10F364u;
    // 0x10f364: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x10f364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x10f368: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F368u;
    {
        const bool branch_taken_0x10f368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F368u;
        // 0x10f36c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f368) {
            ctx->pc = 0x10F37Cu;
            goto label_10f37c;
        }
    }
    ctx->pc = 0x10F370u;
    // 0x10f370: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f374: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10F374u;
    {
        const bool branch_taken_0x10f374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f374) {
            ctx->pc = 0x10F380u;
            goto label_10f380;
        }
    }
    ctx->pc = 0x10F37Cu;
label_10f37c:
    // 0x10f37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f380:
    // 0x10f380: 0x3e00008  jr          $ra
    ctx->pc = 0x10F380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F380u;
        // 0x10f384: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F388u;
}
