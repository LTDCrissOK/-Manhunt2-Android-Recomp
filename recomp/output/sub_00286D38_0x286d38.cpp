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

// Function: sub_00286D38
// Address: 0x286d38 - 0x286d58
void sub_00286D38_0x286d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286D38_0x286d38");
#endif

    ctx->pc = 0x286d38u;

    // 0x286d38: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286D38u;
    {
        const bool branch_taken_0x286d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D38u;
        // 0x286d3c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d38) {
            ctx->pc = 0x286D4Cu;
            goto label_286d4c;
        }
    }
    ctx->pc = 0x286D40u;
    // 0x286d40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286d44: 0x8c44a458  lw          $a0, -0x5BA8($v0)
    ctx->pc = 0x286d44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA458u));
    // 0x286d48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_286d4c:
    // 0x286d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x286D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D4Cu;
        // 0x286d50: 0xac44a450  sw          $a0, -0x5BB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943824), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286D54u;
    // 0x286d54: 0x0  nop
    ctx->pc = 0x286d54u;
    // NOP
    ctx->pc = 0x286d58u;
}
