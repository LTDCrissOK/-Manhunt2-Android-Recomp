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

// Function: entry_002b6826
// Address: 0x2b6826 - 0x2b6828
void entry_002b6826_0x2b6826(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6826_0x2b6826");
#endif

    ctx->pc = 0x2b6826u;

    // 0x2b6826: 0x202dae03  addi        $t5, $at, -0x51FD
    ctx->pc = 0x2b6826u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294946307, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    ctx->pc = 0x2b6828u;
}
