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

// Function: sub_0030D928
// Address: 0x30d928 - 0x30d940
void sub_0030D928_0x30d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D928_0x30d928");
#endif

    ctx->pc = 0x30d928u;

    // 0x30d928: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x30d928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x30d92c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x30d92cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x30d930: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x30d930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30d934: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30d938: 0x3e00008  jr          $ra
    ctx->pc = 0x30D938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D938u;
        // 0x30d93c: 0xa4850000  sh          $a1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D940u;
}
