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

// Function: FUN_0021e658
// Address: 0x21e658 - 0x21e659
void FUN_0021e658_0x21e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021e658_0x21e658");
#endif

    ctx->pc = 0x21e658u;

    // 0x21e658: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    ctx->pc = 0x21e659u;
}
