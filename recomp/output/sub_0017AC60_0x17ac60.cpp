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

// Function: sub_0017AC60
// Address: 0x17ac60 - 0x17ac78
void sub_0017AC60_0x17ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AC60_0x17ac60");
#endif

    ctx->pc = 0x17ac60u;

    // 0x17ac60: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17ac60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17ac64: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17ac68: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x17ac68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17ac6c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC70u;
        // 0x17ac74: 0xaca600a0  sw          $a2, 0xA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC78u;
}
