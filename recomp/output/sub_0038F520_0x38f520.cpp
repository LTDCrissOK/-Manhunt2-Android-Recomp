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

// Function: sub_0038F520
// Address: 0x38f520 - 0x38f548
void sub_0038F520_0x38f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F520_0x38f520");
#endif

    ctx->pc = 0x38f520u;

    // 0x38f520: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f524: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x38f524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x38f528: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x38f528u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x38f52c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x38f52cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x38f530: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38f530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x38f534: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x38f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x38f538: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x38f538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x38f53c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x38f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x38f540: 0x3e00008  jr          $ra
    ctx->pc = 0x38F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F540u;
        // 0x38f544: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F548u;
}
