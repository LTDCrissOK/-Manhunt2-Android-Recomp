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

// Function: sub_002ABF78
// Address: 0x2abf78 - 0x2abf84
void sub_002ABF78_0x2abf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF78_0x2abf78");
#endif

    ctx->pc = 0x2abf78u;

    // 0x2abf78: 0x28a2fffa  slti        $v0, $a1, -0x6
    ctx->pc = 0x2abf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967290) ? 1 : 0);
    // 0x2abf7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABF7Cu;
    {
        const bool branch_taken_0x2abf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF7Cu;
        // 0x2abf80: 0x24a30006  addiu       $v1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf7c) {
            ctx->pc = 0x2ABF8Cu;
            return;
        }
    }
    ctx->pc = 0x2ABF84u;
}
