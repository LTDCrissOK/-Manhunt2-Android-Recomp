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

// Function: sub_003D2E70
// Address: 0x3d2e70 - 0x3d2e78
void sub_003D2E70_0x3d2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2E70_0x3d2e70");
#endif

    ctx->pc = 0x3d2e70u;

    // 0x3d2e70: 0x80f52ce  j           func_3D4B38
    ctx->pc = 0x3D2E70u;
    ctx->pc = 0x3D4B38u;
    sub_003D4B38_0x3d4b38(rdram, ctx, runtime); return;
    ctx->pc = 0x3D2E78u;
}
