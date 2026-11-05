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

// Function: sub_001F4AC4
// Address: 0x1f4ac4 - 0x1f4ad4
void sub_001F4AC4_0x1f4ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4AC4_0x1f4ac4");
#endif

    ctx->pc = 0x1f4ac4u;

    // 0x1f4ac4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4ac8: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x1f4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x1f4acc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4ACCu;
    {
        const bool branch_taken_0x1f4acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ACCu;
        // 0x1f4ad0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4acc) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4AD4u;
}
