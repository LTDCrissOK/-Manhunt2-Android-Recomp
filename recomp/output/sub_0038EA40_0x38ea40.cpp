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

// Function: sub_0038EA40
// Address: 0x38ea40 - 0x38ea50
void sub_0038EA40_0x38ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EA40_0x38ea40");
#endif

    ctx->pc = 0x38ea40u;

    // 0x38ea40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38ea44: 0x80e28f8  j           func_38A3E0
    ctx->pc = 0x38EA44u;
    ctx->pc = 0x38EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA44u;
    // 0x38ea48: 0x24a596c0  addiu       $a1, $a1, -0x6940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    sub_0038A3E0_0x38a3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x38EA4Cu;
    // 0x38ea4c: 0x0  nop
    ctx->pc = 0x38ea4cu;
    // NOP
    ctx->pc = 0x38ea50u;
}
