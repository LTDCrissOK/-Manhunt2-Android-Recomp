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

// Function: sub_00145D30
// Address: 0x145d30 - 0x145d50
void sub_00145D30_0x145d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145D30_0x145d30");
#endif

    ctx->pc = 0x145d30u;

    // 0x145d30: 0x8c820520  lw          $v0, 0x520($a0)
    ctx->pc = 0x145d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1312)));
    // 0x145d34: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x145d38: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x145d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x145d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x145d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x145d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145d44: 0x3e00008  jr          $ra
    ctx->pc = 0x145D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D44u;
        // 0x145d48: 0x8c620108  lw          $v0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145D4Cu;
    // 0x145d4c: 0x0  nop
    ctx->pc = 0x145d4cu;
    // NOP
    ctx->pc = 0x145d50u;
}
