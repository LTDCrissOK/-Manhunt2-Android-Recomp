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

// Function: sub_0030B940
// Address: 0x30b940 - 0x30b968
void sub_0030B940_0x30b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B940_0x30b940");
#endif

    ctx->pc = 0x30b940u;

    // 0x30b940: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x30b940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x30b944: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x30b944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x30b948: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x30b948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x30b94c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30b94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b950: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x30b950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x30b954: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x30b954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x30b958: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x30b958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x30b95c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x30b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x30b960: 0x3e00008  jr          $ra
    ctx->pc = 0x30B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B960u;
        // 0x30b964: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B968u;
}
