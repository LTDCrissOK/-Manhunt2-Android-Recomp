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

// Function: sub_0017ABA0
// Address: 0x17aba0 - 0x17abb8
void sub_0017ABA0_0x17aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ABA0_0x17aba0");
#endif

    ctx->pc = 0x17aba0u;

    // 0x17aba0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17aba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17aba4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17aba8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x17aba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17abac: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABB0u;
        // 0x17abb4: 0xaca60090  sw          $a2, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABB8u;
}
