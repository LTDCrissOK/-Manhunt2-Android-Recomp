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

// Function: sub_0025AA14
// Address: 0x25aa14 - 0x25aa1c
void sub_0025AA14_0x25aa14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA14_0x25aa14");
#endif

    ctx->pc = 0x25aa14u;

    // 0x25aa14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25AA14u;
    {
        const bool branch_taken_0x25aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA14u;
        // 0x25aa18: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa14) {
            ctx->pc = 0x25AA28u;
            return;
        }
    }
    ctx->pc = 0x25AA1Cu;
}
