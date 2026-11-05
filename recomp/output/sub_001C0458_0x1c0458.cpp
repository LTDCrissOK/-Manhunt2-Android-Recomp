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

// Function: sub_001C0458
// Address: 0x1c0458 - 0x1c04a0
void sub_001C0458_0x1c0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0458_0x1c0458");
#endif

    switch (ctx->pc) {
        case 0x1c0464u: goto label_1c0464;
        default: break;
    }

    ctx->pc = 0x1c0458u;

    // 0x1c0458: 0x8c820338  lw          $v0, 0x338($a0)
    ctx->pc = 0x1c0458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x1c045c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C045Cu;
    {
        const bool branch_taken_0x1c045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c045c) {
            ctx->pc = 0x1C0460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C045Cu;
            // 0x1c0460: 0x8c8204d4  lw          $v0, 0x4D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C046Cu;
            goto label_1c046c;
        }
    }
    ctx->pc = 0x1C0464u;
label_1c0464:
    // 0x1c0464: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0464u;
        // 0x1c0468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C046Cu;
label_1c046c:
    // 0x1c046c: 0x0  nop
    ctx->pc = 0x1c046cu;
    // NOP
    // 0x1c0470: 0x0  nop
    ctx->pc = 0x1c0470u;
    // NOP
    // 0x1c0474: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C0474u;
    {
        const bool branch_taken_0x1c0474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0474u;
        // 0x1c0478: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0474) {
            ctx->pc = 0x1C0464u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0464;
        }
    }
    ctx->pc = 0x1C047Cu;
    // 0x1c047c: 0x8c8304b4  lw          $v1, 0x4B4($a0)
    ctx->pc = 0x1c047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1204)));
    // 0x1c0480: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0480u;
    {
        const bool branch_taken_0x1c0480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c0480) {
            ctx->pc = 0x1C0494u;
            goto label_1c0494;
        }
    }
    ctx->pc = 0x1C0488u;
    // 0x1c0488: 0x8c8204d0  lw          $v0, 0x4D0($a0)
    ctx->pc = 0x1c0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
    // 0x1c048c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C048Cu;
        // 0x1c0490: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C048Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0494u;
label_1c0494:
    // 0x1c0494: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0494u;
        // 0x1c0498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C049Cu;
    // 0x1c049c: 0x0  nop
    ctx->pc = 0x1c049cu;
    // NOP
    ctx->pc = 0x1c04a0u;
}
