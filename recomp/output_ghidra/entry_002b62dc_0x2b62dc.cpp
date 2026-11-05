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

// Function: entry_002b62dc
// Address: 0x2b62dc - 0x2b62f0
void entry_002b62dc_0x2b62dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b62dc_0x2b62dc");
#endif

    ctx->pc = 0x2b62dcu;

    // 0x2b62dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b62dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b62e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b62e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62E4u;
        // 0x2b62e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62ECu;
    // 0x2b62ec: 0x0  nop
    ctx->pc = 0x2b62ecu;
    // NOP
    ctx->pc = 0x2b62f0u;
}
