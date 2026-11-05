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

// Function: sub_002A3834
// Address: 0x2a3834 - 0x2a383c
void sub_002A3834_0x2a3834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3834_0x2a3834");
#endif

    ctx->pc = 0x2a3834u;

    // 0x2a3834: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3834u;
    {
        const bool branch_taken_0x2a3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3834u;
        // 0x2a3838: 0x8cc402a4  lw          $a0, 0x2A4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3834) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A383Cu;
}
