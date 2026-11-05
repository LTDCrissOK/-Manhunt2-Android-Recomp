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

// Function: FUN_00303370
// Address: 0x303370 - 0x303371
void FUN_00303370_0x303370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00303370_0x303370");
#endif

    ctx->pc = 0x303370u;

    // 0x303370: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x303370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    ctx->pc = 0x303371u;
}
