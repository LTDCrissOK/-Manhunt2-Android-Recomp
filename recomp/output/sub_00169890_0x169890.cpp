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

// Function: sub_00169890
// Address: 0x169890 - 0x1698b0
void sub_00169890_0x169890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169890_0x169890");
#endif

    ctx->pc = 0x169890u;

    // 0x169890: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x169890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x169894: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169894u;
    {
        const bool branch_taken_0x169894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169894u;
        // 0x169898: 0x24820050  addiu       $v0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169894) {
            ctx->pc = 0x1698A4u;
            goto label_1698a4;
        }
    }
    ctx->pc = 0x16989Cu;
    // 0x16989c: 0x3e00008  jr          $ra
    ctx->pc = 0x16989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16989Cu;
        // 0x1698a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698A4u;
label_1698a4:
    // 0x1698a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1698A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698ACu;
    // 0x1698ac: 0x0  nop
    ctx->pc = 0x1698acu;
    // NOP
    ctx->pc = 0x1698b0u;
}
