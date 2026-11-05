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

// Function: FUN_00394908
// Address: 0x394908 - 0x39490a
void FUN_00394908_0x394908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00394908_0x394908");
#endif

    ctx->pc = 0x394908u;

    // 0x394908: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x394908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x39490au;
}
