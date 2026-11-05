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

// Function: FUN_0026c868
// Address: 0x26c868 - 0x26c869
void FUN_0026c868_0x26c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026c868_0x26c868");
#endif

    ctx->pc = 0x26c868u;

    // 0x26c868: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x26c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    ctx->pc = 0x26c869u;
}
