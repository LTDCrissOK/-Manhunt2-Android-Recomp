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

// Function: entry_002b6478
// Address: 0x2b6478 - 0x2b648e
void entry_002b6478_0x2b6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6478_0x2b6478");
#endif

    switch (ctx->pc) {
        case 0x2b6484u: goto label_2b6484;
        default: break;
    }

    ctx->pc = 0x2b6478u;

    // 0x2b6478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b647c: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x2B647Cu;
    SET_GPR_U32(ctx, 31, 0x2B6484u);
    ctx->pc = 0x2B6480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B647Cu;
    // 0x2b6480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x2B647Cu, 0x2B6484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6484u;
label_2b6484:
    // 0x2b6484: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2b6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b6488: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b648c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b648cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2b648eu;
}
