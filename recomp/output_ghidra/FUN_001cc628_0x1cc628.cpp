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

// Function: FUN_001cc628
// Address: 0x1cc628 - 0x1cc629
void FUN_001cc628_0x1cc628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc628_0x1cc628");
#endif

    ctx->pc = 0x1cc628u;

    // 0x1cc628: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    ctx->pc = 0x1cc629u;
}
