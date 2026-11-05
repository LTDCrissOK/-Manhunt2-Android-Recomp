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

// Function: sub_0013FAA0
// Address: 0x13faa0 - 0x13fac0
void sub_0013FAA0_0x13faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FAA0_0x13faa0");
#endif

    ctx->pc = 0x13faa0u;

    // 0x13faa0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13faa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13faa4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x13faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13faa8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x13faa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13faac: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x13faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13fab0: 0x8ca204e4  lw          $v0, 0x4E4($a1)
    ctx->pc = 0x13fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1252)));
    // 0x13fab4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAB4u;
        // 0x13fab8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FABCu;
    // 0x13fabc: 0x0  nop
    ctx->pc = 0x13fabcu;
    // NOP
    ctx->pc = 0x13fac0u;
}
