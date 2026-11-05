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

// Function: sub_001FBF00
// Address: 0x1fbf00 - 0x1fbf30
void sub_001FBF00_0x1fbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBF00_0x1fbf00");
#endif

    ctx->pc = 0x1fbf00u;

    // 0x1fbf00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fbf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fbf04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbf08: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1fbf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fbf0c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1fbf10: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fbf14: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x1fbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
    // 0x1fbf18: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1fbf18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1fbf1c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fbf20: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x1fbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x1fbf24: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fbf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF28u;
        // 0x1fbf2c: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF30u;
}
