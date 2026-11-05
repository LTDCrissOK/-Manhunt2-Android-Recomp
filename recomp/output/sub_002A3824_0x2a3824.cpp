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

// Function: sub_002A3824
// Address: 0x2a3824 - 0x2a382c
void sub_002A3824_0x2a3824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3824_0x2a3824");
#endif

    ctx->pc = 0x2a3824u;

    // 0x2a3824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3824u;
    {
        const bool branch_taken_0x2a3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3824u;
        // 0x2a3828: 0x8cc4029c  lw          $a0, 0x29C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3824) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A382Cu;
}
