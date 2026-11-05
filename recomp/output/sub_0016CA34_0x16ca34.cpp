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

// Function: sub_0016CA34
// Address: 0x16ca34 - 0x16ca40
void sub_0016CA34_0x16ca34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CA34_0x16ca34");
#endif

    ctx->pc = 0x16ca34u;

    // 0x16ca34: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ca38: 0xc04990a  jal         func_126428
    ctx->pc = 0x16CA38u;
    SET_GPR_U32(ctx, 31, 0x16CA40u);
    ctx->pc = 0x16CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA38u;
    // 0x16ca3c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126428u, 0x16CA38u, 0x16CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA40u;
}
