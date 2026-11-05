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

// Function: FUN_0014ce58
// Address: 0x14ce58 - 0x14ce59
void FUN_0014ce58_0x14ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ce58_0x14ce58");
#endif

    ctx->pc = 0x14ce58u;

    // 0x14ce58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    ctx->pc = 0x14ce59u;
}
