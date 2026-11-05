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

// Function: FUN_00372730
// Address: 0x372730 - 0x372732
void FUN_00372730_0x372730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00372730_0x372730");
#endif

    ctx->pc = 0x372730u;

    // 0x372730: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x372730u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x372732u;
}
