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

// Function: sub_001FAD00
// Address: 0x1fad00 - 0x1fad38
void sub_001FAD00_0x1fad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD00_0x1fad00");
#endif

    ctx->pc = 0x1fad00u;

    // 0x1fad00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fad00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fad04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fad04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fad08: 0x34028de0  ori         $v0, $zero, 0x8DE0
    ctx->pc = 0x1fad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fad0c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1fad10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fad14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fad18: 0xa08300fc  sb          $v1, 0xFC($a0)
    ctx->pc = 0x1fad18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fad1c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fad20: 0xac860124  sw          $a2, 0x124($a0)
    ctx->pc = 0x1fad20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 6));
    // 0x1fad24: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x1fad24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x1fad28: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x1fad28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x1fad2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fad30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD30u;
        // 0x1fad34: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD38u;
}
