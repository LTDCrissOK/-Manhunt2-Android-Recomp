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

// Function: sub_00261F28
// Address: 0x261f28 - 0x261f30
void sub_00261F28_0x261f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261F28_0x261f28");
#endif

    ctx->pc = 0x261f28u;

    // 0x261f28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x261F28u;
    {
        const bool branch_taken_0x261f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F28u;
        // 0x261f2c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f28) {
            ctx->pc = 0x261F3Cu;
            return;
        }
    }
    ctx->pc = 0x261F30u;
}
