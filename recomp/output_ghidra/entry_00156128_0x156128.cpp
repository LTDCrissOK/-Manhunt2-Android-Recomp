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

// Function: entry_00156128
// Address: 0x156128 - 0x156140
void entry_00156128_0x156128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156128_0x156128");
#endif

    switch (ctx->pc) {
        case 0x156134u: goto label_156134;
        default: break;
    }

    ctx->pc = 0x156128u;

    // 0x156128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15612c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x15612Cu;
    SET_GPR_U32(ctx, 31, 0x156134u);
    ctx->pc = 0x156130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15612Cu;
    // 0x156130: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15612Cu, 0x156134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156134u;
label_156134:
    // 0x156134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156138: 0xc055bc4  jal         func_156F10
    ctx->pc = 0x156138u;
    SET_GPR_U32(ctx, 31, 0x156140u);
    ctx->pc = 0x15613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156138u;
    // 0x15613c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F10u, 0x156138u, 0x156140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156140u;
}
