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

// Function: FUN_00237fe8
// Address: 0x237fe8 - 0x237fea
void FUN_00237fe8_0x237fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237fe8_0x237fe8");
#endif

    ctx->pc = 0x237fe8u;

    // 0x237fe8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x237fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x237feau;
}
