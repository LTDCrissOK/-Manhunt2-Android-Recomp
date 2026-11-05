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

// Function: sub_001FBEB8
// Address: 0x1fbeb8 - 0x1fbee8
void sub_001FBEB8_0x1fbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBEB8_0x1fbeb8");
#endif

    ctx->pc = 0x1fbeb8u;

    // 0x1fbeb8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fbeb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fbebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbec0: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1fbec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fbec4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fbec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1fbec8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fbec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fbecc: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x1fbeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
    // 0x1fbed0: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1fbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1fbed4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1fbed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fbed8: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x1fbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x1fbedc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fbee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEE0u;
        // 0x1fbee4: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEE8u;
}
