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

// Function: sub_0012D610
// Address: 0x12d610 - 0x12d618
void sub_0012D610_0x12d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D610_0x12d610");
#endif

    ctx->pc = 0x12d610u;

    // 0x12d610: 0xc04b67e  jal         func_12D9F8
    ctx->pc = 0x12D610u;
    SET_GPR_U32(ctx, 31, 0x12D618u);
    ctx->pc = 0x12D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D610u;
    // 0x12d614: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F8u, 0x12D610u, 0x12D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D618u;
}
