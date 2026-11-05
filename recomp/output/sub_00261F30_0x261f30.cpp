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

// Function: sub_00261F30
// Address: 0x261f30 - 0x261f38
void sub_00261F30_0x261f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261F30_0x261f30");
#endif

    ctx->pc = 0x261f30u;

    // 0x261f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x261F30u;
    {
        const bool branch_taken_0x261f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F30u;
        // 0x261f34: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f30) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F38u;
}
