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

// Function: sub_001ED358
// Address: 0x1ed358 - 0x1ed368
void sub_001ED358_0x1ed358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED358_0x1ed358");
#endif

    ctx->pc = 0x1ed358u;

    // 0x1ed358: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed35c: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1ed35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1ed360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED360u;
    {
        const bool branch_taken_0x1ed360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED360u;
        // 0x1ed364: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed360) {
            ctx->pc = 0x1ED370u;
            return;
        }
    }
    ctx->pc = 0x1ED368u;
}
