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

// Function: FUN_0015e720
// Address: 0x15e720 - 0x15e721
void FUN_0015e720_0x15e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015e720_0x15e720");
#endif

    ctx->pc = 0x15e720u;

    // 0x15e720: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    ctx->pc = 0x15e721u;
}
