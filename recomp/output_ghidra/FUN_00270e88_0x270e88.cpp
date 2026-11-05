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

// Function: FUN_00270e88
// Address: 0x270e88 - 0x270e8c
void FUN_00270e88_0x270e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00270e88_0x270e88");
#endif

    ctx->pc = 0x270e88u;

    // 0x270e88: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x270e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    ctx->pc = 0x270e8cu;
}
