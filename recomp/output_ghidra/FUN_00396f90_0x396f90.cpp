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

// Function: FUN_00396f90
// Address: 0x396f90 - 0x396f92
void FUN_00396f90_0x396f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00396f90_0x396f90");
#endif

    ctx->pc = 0x396f90u;

    // 0x396f90: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x396f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x396f92u;
}
