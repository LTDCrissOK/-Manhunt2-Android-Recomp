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

// Function: entry_001560d6
// Address: 0x1560d6 - 0x1560d8
void entry_001560d6_0x1560d6(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560d6_0x1560d6");
#endif

    ctx->pc = 0x1560d6u;

    // 0x1560d6: 0x192c83  sra         $a1, $t9, 18
    ctx->pc = 0x1560d6u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 25), 18));
    ctx->pc = 0x1560d8u;
}
