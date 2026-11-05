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

// Function: sub_0025AA1C
// Address: 0x25aa1c - 0x25aa24
void sub_0025AA1C_0x25aa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA1C_0x25aa1c");
#endif

    ctx->pc = 0x25aa1cu;

    // 0x25aa1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25AA1Cu;
    {
        const bool branch_taken_0x25aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA1Cu;
        // 0x25aa20: 0x90a70001  lbu         $a3, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa1c) {
            ctx->pc = 0x25AA28u;
            return;
        }
    }
    ctx->pc = 0x25AA24u;
}
