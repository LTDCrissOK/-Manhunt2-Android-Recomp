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

// Function: sub_0011837C
// Address: 0x11837c - 0x118384
void sub_0011837C_0x11837c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011837C_0x11837c");
#endif

    ctx->pc = 0x11837cu;

    // 0x11837c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x118380: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x118380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    ctx->pc = 0x118384u;
}
