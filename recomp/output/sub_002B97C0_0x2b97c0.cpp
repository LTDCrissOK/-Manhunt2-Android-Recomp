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

// Function: sub_002B97C0
// Address: 0x2b97c0 - 0x2b97f0
void sub_002B97C0_0x2b97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97C0_0x2b97c0");
#endif

    ctx->pc = 0x2b97c0u;

    // 0x2b97c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b97c4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B97C4u;
    {
        const bool branch_taken_0x2b97c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97C4u;
        // 0x2b97c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97c4) {
            ctx->pc = 0x2B97DCu;
            goto label_2b97dc;
        }
    }
    ctx->pc = 0x2B97CCu;
    // 0x2b97cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B97CCu;
    {
        const bool branch_taken_0x2b97cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97CCu;
        // 0x2b97d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97cc) {
            ctx->pc = 0x2B97DCu;
            goto label_2b97dc;
        }
    }
    ctx->pc = 0x2B97D4u;
    // 0x2b97d4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B97D4u;
    {
        const bool branch_taken_0x2b97d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b97d4) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B97DCu;
label_2b97dc:
    // 0x2b97dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B97DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97DCu;
        // 0x2b97e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B97E4u;
label_2b97e4:
    // 0x2b97e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B97E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97E4u;
        // 0x2b97e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B97ECu;
    // 0x2b97ec: 0x0  nop
    ctx->pc = 0x2b97ecu;
    // NOP
    ctx->pc = 0x2b97f0u;
}
