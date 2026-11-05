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

// Function: sub_001002C0
// Address: 0x1002c0 - 0x1002d8
void sub_001002C0_0x1002c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002C0_0x1002c0");
#endif

    ctx->pc = 0x1002c0u;

    // 0x1002c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1002c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1002c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1002c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1002c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1002C8u;
    {
        const bool branch_taken_0x1002c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002c8) {
            ctx->pc = 0x1002CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1002C8u;
            // 0x1002cc: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1002D0u;
            goto label_1002d0;
        }
    }
    ctx->pc = 0x1002D0u;
label_1002d0:
    // 0x1002d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1002D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1002D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1002D8u;
}
