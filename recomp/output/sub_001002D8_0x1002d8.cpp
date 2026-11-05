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

// Function: sub_001002D8
// Address: 0x1002d8 - 0x1002f8
void sub_001002D8_0x1002d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002D8_0x1002d8");
#endif

    ctx->pc = 0x1002d8u;

    // 0x1002d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1002dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1002DCu;
    {
        const bool branch_taken_0x1002dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002DCu;
        // 0x1002e0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002dc) {
            ctx->pc = 0x1002E8u;
            goto label_1002e8;
        }
    }
    ctx->pc = 0x1002E4u;
    // 0x1002e4: 0xa4850010  sh          $a1, 0x10($a0)
    ctx->pc = 0x1002e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 5));
label_1002e8:
    // 0x1002e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1002E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1002E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1002F0u;
    // 0x1002f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1002f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f4: 0x0  nop
    ctx->pc = 0x1002f4u;
    // NOP
    ctx->pc = 0x1002f8u;
}
