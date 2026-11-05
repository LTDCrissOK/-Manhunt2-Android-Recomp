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

// Function: sub_00399A90
// Address: 0x399a90 - 0x399ab0
void sub_00399A90_0x399a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399A90_0x399a90");
#endif

    ctx->pc = 0x399a90u;

    // 0x399a90: 0xdc820048  ld          $v0, 0x48($a0)
    ctx->pc = 0x399a90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x399a94: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x399a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x399a98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x399a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x399a9c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x399a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x399aa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x399aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x399aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x399AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AA4u;
        // 0x399aa8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399AACu;
    // 0x399aac: 0x0  nop
    ctx->pc = 0x399aacu;
    // NOP
    ctx->pc = 0x399ab0u;
}
