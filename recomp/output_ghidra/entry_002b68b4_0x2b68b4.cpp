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

// Function: entry_002b68b4
// Address: 0x2b68b4 - 0x2b68ce
void entry_002b68b4_0x2b68b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b68b4_0x2b68b4");
#endif

    ctx->pc = 0x2b68b4u;

    // 0x2b68b4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B68B4u;
    {
        const bool branch_taken_0x2b68b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68B4u;
        // 0x2b68b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68b4) {
            ctx->pc = 0x2B6980u;
            return;
        }
    }
    ctx->pc = 0x2B68BCu;
    // 0x2b68bc: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b68c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b68c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68c4: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B68C4u;
    {
        const bool branch_taken_0x2b68c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C4u;
        // 0x2b68c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68c4) {
            ctx->pc = 0x2B68DCu;
            return;
        }
    }
    ctx->pc = 0x2B68CCu;
    // 0x2b68cc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B68CCu;
    {
        const bool branch_taken_0x2b68cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b68cc) {
            ctx->pc = 0x2B6908u;
            return;
        }
    }
    ctx->pc = 0x2B68D4u;
}
