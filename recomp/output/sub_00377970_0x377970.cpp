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

// Function: sub_00377970
// Address: 0x377970 - 0x377974
void sub_00377970_0x377970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377970_0x377970");
#endif

    ctx->pc = 0x377970u;

    // 0x377970: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x377970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    ctx->pc = 0x377974u;
}
