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

// Function: sub_001189B8
// Address: 0x1189b8 - 0x1189c0
void sub_001189B8_0x1189b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001189B8_0x1189b8");
#endif

    ctx->pc = 0x1189b8u;

    // 0x1189b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1189b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1189bc: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x1189bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    ctx->pc = 0x1189c0u;
}
