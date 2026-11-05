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

// Function: entry_00156184
// Address: 0x156184 - 0x156190
void entry_00156184_0x156184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156184_0x156184");
#endif

    ctx->pc = 0x156184u;

    // 0x156184: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x156184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x156188: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x156188u;
    {
        const bool branch_taken_0x156188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156188u;
        // 0x15618c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156188) {
            ctx->pc = 0x1561CCu;
            return;
        }
    }
    ctx->pc = 0x156190u;
}
