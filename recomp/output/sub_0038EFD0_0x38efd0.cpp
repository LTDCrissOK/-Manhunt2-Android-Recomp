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

// Function: sub_0038EFD0
// Address: 0x38efd0 - 0x38efd8
void sub_0038EFD0_0x38efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EFD0_0x38efd0");
#endif

    ctx->pc = 0x38efd0u;

    // 0x38efd0: 0x80e3b9c  j           func_38EE70
    ctx->pc = 0x38EFD0u;
    ctx->pc = 0x38EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EFD0u;
    // 0x38efd4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    sub_0038EE70_0x38ee70(rdram, ctx, runtime); return;
    ctx->pc = 0x38EFD8u;
}
