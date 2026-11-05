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

// Function: sub_0036FF04
// Address: 0x36ff04 - 0x36ff0c
void sub_0036FF04_0x36ff04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FF04_0x36ff04");
#endif

    ctx->pc = 0x36ff04u;

    // 0x36ff04: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x36FF04u;
    {
        const bool branch_taken_0x36ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF04u;
        // 0x36ff08: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff04) {
            ctx->pc = 0x3702F8u;
            return;
        }
    }
    ctx->pc = 0x36FF0Cu;
}
