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

// Function: sub_0011E198
// Address: 0x11e198 - 0x11e1b8
void sub_0011E198_0x11e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E198_0x11e198");
#endif

    ctx->pc = 0x11e198u;

    // 0x11e198: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E198u;
    {
        const bool branch_taken_0x11e198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E198u;
        // 0x11e19c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e198) {
            ctx->pc = 0x11E1A4u;
            goto label_11e1a4;
        }
    }
    ctx->pc = 0x11E1A0u;
    // 0x11e1a0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x11e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_11e1a4:
    // 0x11e1a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11e1a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11e1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1ACu;
        // 0x11e1b0: 0x8c620108  lw          $v0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1B4u;
    // 0x11e1b4: 0x0  nop
    ctx->pc = 0x11e1b4u;
    // NOP
    ctx->pc = 0x11e1b8u;
}
