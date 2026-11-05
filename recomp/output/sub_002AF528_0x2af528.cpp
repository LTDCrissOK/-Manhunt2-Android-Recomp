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

// Function: sub_002AF528
// Address: 0x2af528 - 0x2af540
void sub_002AF528_0x2af528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF528_0x2af528");
#endif

    switch (ctx->pc) {
        case 0x2af52cu: goto label_2af52c;
        default: break;
    }

    ctx->pc = 0x2af528u;

    // 0x2af528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2af52c:
    // 0x2af52c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2af52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af534: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF534u;
        // 0x2af538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF53Cu;
    // 0x2af53c: 0x0  nop
    ctx->pc = 0x2af53cu;
    // NOP
    ctx->pc = 0x2af540u;
}
