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

// Function: sub_0017C0C0
// Address: 0x17c0c0 - 0x17c0f8
void sub_0017C0C0_0x17c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C0C0_0x17c0c0");
#endif

    ctx->pc = 0x17c0c0u;

    // 0x17c0c0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17c0c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C0C4u;
    {
        const bool branch_taken_0x17c0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c0c4) {
            ctx->pc = 0x17C0E4u;
            goto label_17c0e4;
        }
    }
    ctx->pc = 0x17C0CCu;
    // 0x17c0cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C0CCu;
    {
        const bool branch_taken_0x17c0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c0cc) {
            ctx->pc = 0x17C0DCu;
            goto label_17c0dc;
        }
    }
    ctx->pc = 0x17C0D4u;
    // 0x17c0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0D4u;
        // 0x17c0d8: 0x90820034  lbu         $v0, 0x34($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C0DCu;
label_17c0dc:
    // 0x17c0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0DCu;
        // 0x17c0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C0E4u;
label_17c0e4:
    // 0x17c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0E4u;
        // 0x17c0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C0ECu;
    // 0x17c0ec: 0x0  nop
    ctx->pc = 0x17c0ecu;
    // NOP
    // 0x17c0f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c0f4: 0x0  nop
    ctx->pc = 0x17c0f4u;
    // NOP
    ctx->pc = 0x17c0f8u;
}
