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

// Function: entry_002b6344
// Address: 0x2b6344 - 0x2b635c
void entry_002b6344_0x2b6344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6344_0x2b6344");
#endif

    ctx->pc = 0x2b6344u;

    // 0x2b6344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6348: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6348u;
    {
        const bool branch_taken_0x2b6348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6348) {
            ctx->pc = 0x2B634Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6348u;
            // 0x2b634c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6380u;
            return;
        }
    }
    ctx->pc = 0x2B6350u;
    // 0x2b6350: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b6354: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b6354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b6358: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6358u;
    {
        const bool branch_taken_0x2b6358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b6358) {
            ctx->pc = 0x2B6380u;
            return;
        }
    }
    ctx->pc = 0x2B6360u;
}
