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

// Function: sub_002A382C
// Address: 0x2a382c - 0x2a3834
void sub_002A382C_0x2a382c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A382C_0x2a382c");
#endif

    ctx->pc = 0x2a382cu;

    // 0x2a382c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A382Cu;
    {
        const bool branch_taken_0x2a382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A382Cu;
        // 0x2a3830: 0x8cc402a0  lw          $a0, 0x2A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a382c) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A3834u;
}
