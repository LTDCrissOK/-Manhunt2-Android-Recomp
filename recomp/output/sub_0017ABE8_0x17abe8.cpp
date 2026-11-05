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

// Function: sub_0017ABE8
// Address: 0x17abe8 - 0x17ac00
void sub_0017ABE8_0x17abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ABE8_0x17abe8");
#endif

    ctx->pc = 0x17abe8u;

    // 0x17abe8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17abe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17abec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17abf0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x17abf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17abf4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABF8u;
        // 0x17abfc: 0xaca60098  sw          $a2, 0x98($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC00u;
}
