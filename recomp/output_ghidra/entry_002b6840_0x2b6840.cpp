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

// Function: entry_002b6840
// Address: 0x2b6840 - 0x2b6850
void entry_002b6840_0x2b6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6840_0x2b6840");
#endif

    switch (ctx->pc) {
        case 0x2b684cu: goto label_2b684c;
        default: break;
    }

    ctx->pc = 0x2b6840u;

    // 0x2b6840: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b6840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b6844: 0xc0ada26  jal         func_2B6898
    ctx->pc = 0x2B6844u;
    SET_GPR_U32(ctx, 31, 0x2B684Cu);
    ctx->pc = 0x2B6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6844u;
    // 0x2b6848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6898u, 0x2B6844u, 0x2B684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B684Cu;
label_2b684c:
    // 0x2b684c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B684Cu;
    {
        const bool branch_taken_0x2b684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b684c) {
            ctx->pc = 0x2B6884u;
            return;
        }
    }
    ctx->pc = 0x2B6854u;
}
