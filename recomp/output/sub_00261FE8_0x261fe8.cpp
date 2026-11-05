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

// Function: sub_00261FE8
// Address: 0x261fe8 - 0x261ff0
void sub_00261FE8_0x261fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261FE8_0x261fe8");
#endif

    ctx->pc = 0x261fe8u;

    // 0x261fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x261FE8u;
    {
        const bool branch_taken_0x261fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FE8u;
        // 0x261fec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fe8) {
            ctx->pc = 0x261FF4u;
            return;
        }
    }
    ctx->pc = 0x261FF0u;
}
