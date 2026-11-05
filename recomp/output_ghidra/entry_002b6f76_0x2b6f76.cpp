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

// Function: entry_002b6f76
// Address: 0x2b6f76 - 0x2b6f94
void entry_002b6f76_0x2b6f76(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6f76_0x2b6f76");
#endif

    ctx->pc = 0x2b6f76u;

    // 0x2b6f76: 0xc07  .word       0x00000C07                   # srav        $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f76u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x2b6f7a: 0x60000  sll         $zero, $a2, 0
    ctx->pc = 0x2b6f7au;
    
    // 0x2b6f7e: 0x18420440  .word       0x18420440                   # blez        $v0, . + 4 + (0x440 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2B6F7Eu;
    {
        const bool branch_taken_0x2b6f7e = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6F82u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F7Eu;
        // 0x2b6f82: 0x8000002  j           func_000008 (Delay Slot)
        // J 0x8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f7e) {
            ctx->pc = 0x2B8082u;
            return;
        }
    }
    ctx->pc = 0x2B6F86u;
    // 0x2b6f86: 0x4482  srl         $t0, $zero, 18
    ctx->pc = 0x2b6f86u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
    // 0x2b6f8a: 0x8600000  j           func_1800000
    ctx->pc = 0x2B6F8Au;
    ctx->pc = 0x2B6F8Eu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F8Au;
    // 0x2b6f8e: 0x74680  sll         $t0, $a3, 26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800000u, 0x2B6F8Au, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6F92u;
    // 0x2b6f92: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6f92u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x2b6f94u;
}
