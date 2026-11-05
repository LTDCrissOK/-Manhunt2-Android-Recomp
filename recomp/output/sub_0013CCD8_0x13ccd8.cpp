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

// Function: sub_0013CCD8
// Address: 0x13ccd8 - 0x13ccf8
void sub_0013CCD8_0x13ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CCD8_0x13ccd8");
#endif

    ctx->pc = 0x13ccd8u;

    // 0x13ccd8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13ccd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ccdc: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x13ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13cce0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x13cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13cce4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x13cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13cce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ccec: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x13ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    // 0x13ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x13CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCF0u;
        // 0x13ccf4: 0xac83022c  sw          $v1, 0x22C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CCF8u;
}
