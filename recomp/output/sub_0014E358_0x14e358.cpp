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

// Function: sub_0014E358
// Address: 0x14e358 - 0x14e360
void sub_0014E358_0x14e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E358_0x14e358");
#endif

    ctx->pc = 0x14e358u;

    // 0x14e358: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E358u;
    {
        const bool branch_taken_0x14e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E358u;
        // 0x14e35c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e358) {
            ctx->pc = 0x14E36Cu;
            return;
        }
    }
    ctx->pc = 0x14E360u;
}
