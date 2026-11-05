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

// Function: entry_001562b8
// Address: 0x1562b8 - 0x1562c8
void entry_001562b8_0x1562b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001562b8_0x1562b8");
#endif

    ctx->pc = 0x1562b8u;

    // 0x1562b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1562b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1562c0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1562c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1562c4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1562C4u;
    {
        const bool branch_taken_0x1562c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1562c4) {
            ctx->pc = 0x156338u;
            return;
        }
    }
    ctx->pc = 0x1562CCu;
}
