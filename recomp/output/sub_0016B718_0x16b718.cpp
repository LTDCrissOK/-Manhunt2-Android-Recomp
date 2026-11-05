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

// Function: sub_0016B718
// Address: 0x16b718 - 0x16b768
void sub_0016B718_0x16b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B718_0x16b718");
#endif

    switch (ctx->pc) {
        case 0x16b72cu: goto label_16b72c;
        case 0x16b740u: goto label_16b740;
        default: break;
    }

    ctx->pc = 0x16b718u;

    // 0x16b718: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x16b718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x16b71c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B71Cu;
    {
        const bool branch_taken_0x16b71c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B71Cu;
        // 0x16b720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b71c) {
            ctx->pc = 0x16B734u;
            goto label_16b734;
        }
    }
    ctx->pc = 0x16B724u;
    // 0x16b724: 0x3e00008  jr          $ra
    ctx->pc = 0x16B724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B72Cu;
label_16b72c:
    // 0x16b72c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B72Cu;
        // 0x16b730: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B734u;
label_16b734:
    // 0x16b734: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B734u;
    {
        const bool branch_taken_0x16b734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B734u;
        // 0x16b738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b734) {
            ctx->pc = 0x16B75Cu;
            goto label_16b75c;
        }
    }
    ctx->pc = 0x16B73Cu;
    // 0x16b73c: 0x8c840140  lw          $a0, 0x140($a0)
    ctx->pc = 0x16b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_16b740:
    // 0x16b740: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b744: 0x1045fff9  beq         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B744u;
    {
        const bool branch_taken_0x16b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x16b744) {
            ctx->pc = 0x16B72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b72c;
        }
    }
    ctx->pc = 0x16B74Cu;
    // 0x16b74c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16b750: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x16b750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x16b754: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B754u;
    {
        const bool branch_taken_0x16b754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B754u;
        // 0x16b758: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b754) {
            ctx->pc = 0x16B740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b740;
        }
    }
    ctx->pc = 0x16B75Cu;
label_16b75c:
    // 0x16b75c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B75Cu;
        // 0x16b760: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B764u;
    // 0x16b764: 0x0  nop
    ctx->pc = 0x16b764u;
    // NOP
    ctx->pc = 0x16b768u;
}
