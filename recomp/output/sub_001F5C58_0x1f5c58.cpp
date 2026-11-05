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

// Function: sub_001F5C58
// Address: 0x1f5c58 - 0x1f5c90
void sub_001F5C58_0x1f5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C58_0x1f5c58");
#endif

    ctx->pc = 0x1f5c58u;

    // 0x1f5c58: 0x24a2ffd9  addiu       $v0, $a1, -0x27
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967257));
    // 0x1f5c5c: 0x2c42003b  sltiu       $v0, $v0, 0x3B
    ctx->pc = 0x1f5c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x1f5c60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C60u;
    {
        const bool branch_taken_0x1f5c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C60u;
        // 0x1f5c64: 0x24a3ffda  addiu       $v1, $a1, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c60) {
            ctx->pc = 0x1F5C74u;
            goto label_1f5c74;
        }
    }
    ctx->pc = 0x1F5C68u;
    // 0x1f5c68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f5c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C6Cu;
        // 0x1f5c70: 0x8c629238  lw          $v0, -0x6DC8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C74u;
label_1f5c74:
    // 0x1f5c74: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1f5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1f5c78: 0x2442c948  addiu       $v0, $v0, -0x36B8
    ctx->pc = 0x1f5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953288));
    // 0x1f5c7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f5c80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C84u;
        // 0x1f5c88: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C8Cu;
    // 0x1f5c8c: 0x0  nop
    ctx->pc = 0x1f5c8cu;
    // NOP
    ctx->pc = 0x1f5c90u;
}
