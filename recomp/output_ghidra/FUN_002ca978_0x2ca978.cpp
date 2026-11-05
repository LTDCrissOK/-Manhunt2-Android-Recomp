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

// Function: FUN_002ca978
// Address: 0x2ca978 - 0x2ca97a
void FUN_002ca978_0x2ca978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002ca978_0x2ca978");
#endif

    ctx->pc = 0x2ca978u;

    // 0x2ca978: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ca978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x2ca97au;
}
