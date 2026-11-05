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

// Function: sub_003A6350
// Address: 0x3a6350 - 0x3a6370
void sub_003A6350_0x3a6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6350_0x3a6350");
#endif

    ctx->pc = 0x3a6350u;

    // 0x3a6350: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3a6350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3a6354: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x3a6354u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6358: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x3a6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x3a635c: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x3a635cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a6360: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3a6360u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3a6364: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6364u;
        // 0x3a6368: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A636Cu;
    // 0x3a636c: 0x0  nop
    ctx->pc = 0x3a636cu;
    // NOP
    ctx->pc = 0x3a6370u;
}
