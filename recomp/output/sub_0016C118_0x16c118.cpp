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

// Function: sub_0016C118
// Address: 0x16c118 - 0x16c168
void sub_0016C118_0x16c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C118_0x16c118");
#endif

    switch (ctx->pc) {
        case 0x16c12cu: goto label_16c12c;
        case 0x16c140u: goto label_16c140;
        default: break;
    }

    ctx->pc = 0x16c118u;

    // 0x16c118: 0x8c86019c  lw          $a2, 0x19C($a0)
    ctx->pc = 0x16c118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x16c11c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C11Cu;
    {
        const bool branch_taken_0x16c11c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C11Cu;
        // 0x16c120: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c11c) {
            ctx->pc = 0x16C134u;
            goto label_16c134;
        }
    }
    ctx->pc = 0x16C124u;
    // 0x16c124: 0x3e00008  jr          $ra
    ctx->pc = 0x16C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C12Cu;
label_16c12c:
    // 0x16c12c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C12Cu;
        // 0x16c130: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C134u;
label_16c134:
    // 0x16c134: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x16C134u;
    {
        const bool branch_taken_0x16c134 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C134u;
        // 0x16c138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c134) {
            ctx->pc = 0x16C15Cu;
            goto label_16c15c;
        }
    }
    ctx->pc = 0x16C13Cu;
    // 0x16c13c: 0x8c840198  lw          $a0, 0x198($a0)
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_16c140:
    // 0x16c140: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c144: 0x1045fff9  beq         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C144u;
    {
        const bool branch_taken_0x16c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x16c144) {
            ctx->pc = 0x16C12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c12c;
        }
    }
    ctx->pc = 0x16C14Cu;
    // 0x16c14c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c150: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x16c150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x16c154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16C154u;
    {
        const bool branch_taken_0x16c154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C154u;
        // 0x16c158: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c154) {
            ctx->pc = 0x16C140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c140;
        }
    }
    ctx->pc = 0x16C15Cu;
label_16c15c:
    // 0x16c15c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C15Cu;
        // 0x16c160: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C164u;
    // 0x16c164: 0x0  nop
    ctx->pc = 0x16c164u;
    // NOP
    ctx->pc = 0x16c168u;
}
