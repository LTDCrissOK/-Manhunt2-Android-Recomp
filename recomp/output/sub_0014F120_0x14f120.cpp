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

// Function: sub_0014F120
// Address: 0x14f120 - 0x14f138
void sub_0014F120_0x14f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F120_0x14f120");
#endif

    ctx->pc = 0x14f120u;

    // 0x14f120: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14f120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f124: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f128: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x14f128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f12c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14f130: 0x3e00008  jr          $ra
    ctx->pc = 0x14F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F130u;
        // 0x14f134: 0xaca604f8  sw          $a2, 0x4F8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F138u;
}
