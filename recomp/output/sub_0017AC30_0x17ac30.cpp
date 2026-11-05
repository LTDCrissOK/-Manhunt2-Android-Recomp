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

// Function: sub_0017AC30
// Address: 0x17ac30 - 0x17ac48
void sub_0017AC30_0x17ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AC30_0x17ac30");
#endif

    ctx->pc = 0x17ac30u;

    // 0x17ac30: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17ac30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17ac34: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17ac38: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x17ac38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17ac3c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC40u;
        // 0x17ac44: 0xaca6009c  sw          $a2, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC48u;
}
