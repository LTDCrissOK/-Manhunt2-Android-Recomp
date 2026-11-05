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

// Function: sub_0015AC78
// Address: 0x15ac78 - 0x15ac98
void sub_0015AC78_0x15ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC78_0x15ac78");
#endif

    ctx->pc = 0x15ac78u;

    // 0x15ac78: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15ac78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ac7c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ac80: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15ac80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ac84: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ac88: 0x8ca20a28  lw          $v0, 0xA28($a1)
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2600)));
    // 0x15ac8c: 0x3e00008  jr          $ra
    ctx->pc = 0x15AC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC8Cu;
        // 0x15ac90: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AC94u;
    // 0x15ac94: 0x0  nop
    ctx->pc = 0x15ac94u;
    // NOP
    ctx->pc = 0x15ac98u;
}
