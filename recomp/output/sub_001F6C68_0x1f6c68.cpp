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

// Function: sub_001F6C68
// Address: 0x1f6c68 - 0x1f6ca0
void sub_001F6C68_0x1f6c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6C68_0x1f6c68");
#endif

    ctx->pc = 0x1f6c68u;

    // 0x1f6c68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6c6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6C6Cu;
    {
        const bool branch_taken_0x1f6c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C6Cu;
        // 0x1f6c70: 0x2ca200e6  sltiu       $v0, $a1, 0xE6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)230) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c6c) {
            ctx->pc = 0x1F6C94u;
            goto label_1f6c94;
        }
    }
    ctx->pc = 0x1F6C74u;
    // 0x1f6c74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6C74u;
    {
        const bool branch_taken_0x1f6c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C74u;
        // 0x1f6c78: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c74) {
            ctx->pc = 0x1F6C94u;
            goto label_1f6c94;
        }
    }
    ctx->pc = 0x1F6C7Cu;
    // 0x1f6c7c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1f6c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f6c80: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1f6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f6c84: 0x8c624f98  lw          $v0, 0x4F98($v1)
    ctx->pc = 0x1f6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20376)));
    // 0x1f6c88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6C88u;
    {
        const bool branch_taken_0x1f6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C88u;
        // 0x1f6c8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c88) {
            ctx->pc = 0x1F6C94u;
            goto label_1f6c94;
        }
    }
    ctx->pc = 0x1F6C90u;
    // 0x1f6c90: 0xac464f9c  sw          $a2, 0x4F9C($v0)
    ctx->pc = 0x1f6c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20380), GPR_U32(ctx, 6));
label_1f6c94:
    // 0x1f6c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C9Cu;
    // 0x1f6c9c: 0x0  nop
    ctx->pc = 0x1f6c9cu;
    // NOP
    ctx->pc = 0x1f6ca0u;
}
