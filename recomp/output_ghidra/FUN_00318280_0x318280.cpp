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

// Function: FUN_00318280
// Address: 0x318280 - 0x318282
void FUN_00318280_0x318280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00318280_0x318280");
#endif

    ctx->pc = 0x318280u;

    // 0x318280: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x318280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    ctx->pc = 0x318282u;
}
