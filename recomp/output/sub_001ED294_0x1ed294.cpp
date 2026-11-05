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

// Function: sub_001ED294
// Address: 0x1ed294 - 0x1ed2ac
void sub_001ED294_0x1ed294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED294_0x1ed294");
#endif

    switch (ctx->pc) {
        case 0x1ed2a0u: goto label_1ed2a0;
        default: break;
    }

    ctx->pc = 0x1ed294u;

    // 0x1ed294: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed298: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed29c: 0x2442da58  addiu       $v0, $v0, -0x25A8
    ctx->pc = 0x1ed29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957656));
label_1ed2a0:
    // 0x1ed2a0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ed2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1ed2a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED2A4u;
    {
        const bool branch_taken_0x1ed2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2A4u;
        // 0x1ed2a8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2a4) {
            ctx->pc = 0x1ED2B4u;
            return;
        }
    }
    ctx->pc = 0x1ED2ACu;
}
