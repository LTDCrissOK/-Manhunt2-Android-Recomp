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

// Function: sub_00145638
// Address: 0x145638 - 0x145658
void sub_00145638_0x145638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145638_0x145638");
#endif

    ctx->pc = 0x145638u;

    // 0x145638: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x145638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14563c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x145640: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x145640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x145644: 0x3e00008  jr          $ra
    ctx->pc = 0x145644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145644u;
        // 0x145648: 0xac8604e0  sw          $a2, 0x4E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1248), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14564Cu;
    // 0x14564c: 0x0  nop
    ctx->pc = 0x14564cu;
    // NOP
    // 0x145650: 0x8c8204e0  lw          $v0, 0x4E0($a0)
    ctx->pc = 0x145650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1248)));
    // 0x145654: 0x0  nop
    ctx->pc = 0x145654u;
    // NOP
    ctx->pc = 0x145658u;
}
