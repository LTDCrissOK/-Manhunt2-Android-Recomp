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

// Function: FUN_00269c58
// Address: 0x269c58 - 0x269c5c
void FUN_00269c58_0x269c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00269c58_0x269c58");
#endif

    ctx->pc = 0x269c58u;

    // 0x269c58: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x269c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    ctx->pc = 0x269c5cu;
}
