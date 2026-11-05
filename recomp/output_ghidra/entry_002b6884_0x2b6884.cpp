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

// Function: entry_002b6884
// Address: 0x2b6884 - 0x2b6898
void entry_002b6884_0x2b6884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6884_0x2b6884");
#endif

    ctx->pc = 0x2b6884u;

    // 0x2b6884: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2b6884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2b6888: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2b6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b688c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B688Cu;
        // 0x2b6890: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6894u;
    // 0x2b6894: 0x0  nop
    ctx->pc = 0x2b6894u;
    // NOP
    ctx->pc = 0x2b6898u;
}
