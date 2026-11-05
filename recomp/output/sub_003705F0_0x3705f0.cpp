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

// Function: sub_003705F0
// Address: 0x3705f0 - 0x370610
void sub_003705F0_0x3705f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003705F0_0x3705f0");
#endif

    ctx->pc = 0x3705f0u;

    // 0x3705f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3705f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3705f4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3705F4u;
    {
        const bool branch_taken_0x3705f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3705f4) {
            ctx->pc = 0x370608u;
            goto label_370608;
        }
    }
    ctx->pc = 0x3705FCu;
    // 0x3705fc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3705FCu;
    {
        const bool branch_taken_0x3705fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x370600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705FCu;
        // 0x370600: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3705fc) {
            ctx->pc = 0x370608u;
            goto label_370608;
        }
    }
    ctx->pc = 0x370604u;
    // 0x370604: 0xa040f708  sb          $zero, -0x8F8($v0)
    ctx->pc = 0x370604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294965000), (uint8_t)GPR_U32(ctx, 0));
label_370608:
    // 0x370608: 0x3e00008  jr          $ra
    ctx->pc = 0x370608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370610u;
}
