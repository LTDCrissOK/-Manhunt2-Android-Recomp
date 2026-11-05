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

// Function: sub_001B0B40
// Address: 0x1b0b40 - 0x1b0b48
void sub_001B0B40_0x1b0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0B40_0x1b0b40");
#endif

    ctx->pc = 0x1b0b40u;

    // 0x1b0b40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0B40u;
    {
        const bool branch_taken_0x1b0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B40u;
        // 0x1b0b44: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b40) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0B48u;
}
