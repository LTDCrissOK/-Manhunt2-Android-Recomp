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

// Function: sub_00135728
// Address: 0x135728 - 0x135730
void sub_00135728_0x135728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135728_0x135728");
#endif

    ctx->pc = 0x135728u;

    // 0x135728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x135728u;
    {
        const bool branch_taken_0x135728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135728u;
        // 0x13572c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135728) {
            ctx->pc = 0x135734u;
            return;
        }
    }
    ctx->pc = 0x135730u;
}
