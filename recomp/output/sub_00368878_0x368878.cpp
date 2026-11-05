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

// Function: sub_00368878
// Address: 0x368878 - 0x368880
void sub_00368878_0x368878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368878_0x368878");
#endif

    ctx->pc = 0x368878u;

    // 0x368878: 0x80f4126  j           func_3D0498
    ctx->pc = 0x368878u;
    ctx->pc = 0x3D0498u;
    sub_003D0498_0x3d0498(rdram, ctx, runtime); return;
    ctx->pc = 0x368880u;
}
