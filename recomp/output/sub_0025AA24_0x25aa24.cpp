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

// Function: sub_0025AA24
// Address: 0x25aa24 - 0x25aa28
void sub_0025AA24_0x25aa24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA24_0x25aa24");
#endif

    ctx->pc = 0x25aa24u;

    // 0x25aa24: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x25aa24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    ctx->pc = 0x25aa28u;
}
