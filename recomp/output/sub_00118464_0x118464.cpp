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

// Function: sub_00118464
// Address: 0x118464 - 0x11846c
void sub_00118464_0x118464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118464_0x118464");
#endif

    ctx->pc = 0x118464u;

    // 0x118464: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x118464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x118468: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x118468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    ctx->pc = 0x11846cu;
}
