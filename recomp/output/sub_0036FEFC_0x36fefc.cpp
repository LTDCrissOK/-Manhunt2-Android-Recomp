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

// Function: sub_0036FEFC
// Address: 0x36fefc - 0x36ff04
void sub_0036FEFC_0x36fefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FEFC_0x36fefc");
#endif

    ctx->pc = 0x36fefcu;

    // 0x36fefc: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x36FEFCu;
    {
        const bool branch_taken_0x36fefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEFCu;
        // 0x36ff00: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fefc) {
            ctx->pc = 0x3702F8u;
            return;
        }
    }
    ctx->pc = 0x36FF04u;
}
