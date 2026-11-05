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

// Function: sub_002AF51C
// Address: 0x2af51c - 0x2af528
void sub_002AF51C_0x2af51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF51C_0x2af51c");
#endif

    ctx->pc = 0x2af51cu;

    // 0x2af51c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2af51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2af520: 0xc0abe3e  jal         func_2AF8F8
    ctx->pc = 0x2AF520u;
    SET_GPR_U32(ctx, 31, 0x2AF528u);
    ctx->pc = 0x2AF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF520u;
    // 0x2af524: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x2AF520u, 0x2AF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF528u;
}
