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

// Function: sub_00163188
// Address: 0x163188 - 0x163198
void sub_00163188_0x163188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163188_0x163188");
#endif

    ctx->pc = 0x163188u;

    // 0x163188: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16318c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163190: 0x3e00008  jr          $ra
    ctx->pc = 0x163190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163190u;
        // 0x163194: 0xac860364  sw          $a2, 0x364($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163198u;
}
