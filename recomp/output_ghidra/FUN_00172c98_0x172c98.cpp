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

// Function: FUN_00172c98
// Address: 0x172c98 - 0x172c99
void FUN_00172c98_0x172c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172c98_0x172c98");
#endif

    ctx->pc = 0x172c98u;

    // 0x172c98: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x172c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    ctx->pc = 0x172c99u;
}
