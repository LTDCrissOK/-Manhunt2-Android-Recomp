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

// Function: sub_00119268
// Address: 0x119268 - 0x119270
void sub_00119268_0x119268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119268_0x119268");
#endif

    ctx->pc = 0x119268u;

    // 0x119268: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11926c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11926cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x119270u;
}
