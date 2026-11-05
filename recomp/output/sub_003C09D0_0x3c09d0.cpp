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

// Function: sub_003C09D0
// Address: 0x3c09d0 - 0x3c09e0
void sub_003C09D0_0x3c09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C09D0_0x3c09d0");
#endif

    ctx->pc = 0x3c09d0u;

    // 0x3c09d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c09d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c09d8: 0xc0da21e  jal         func_368878
    ctx->pc = 0x3C09D8u;
    SET_GPR_U32(ctx, 31, 0x3C09E0u);
    ctx->pc = 0x3C09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09D8u;
    // 0x3c09dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368878u, 0x3C09D8u, 0x3C09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09E0u;
}
