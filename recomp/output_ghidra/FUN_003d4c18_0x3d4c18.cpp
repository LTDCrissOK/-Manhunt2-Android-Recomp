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

// Function: FUN_003d4c18
// Address: 0x3d4c18 - 0x3d4c1a
void FUN_003d4c18_0x3d4c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_003d4c18_0x3d4c18");
#endif

    ctx->pc = 0x3d4c18u;

    // 0x3d4c18: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x3d4c1au;
}
