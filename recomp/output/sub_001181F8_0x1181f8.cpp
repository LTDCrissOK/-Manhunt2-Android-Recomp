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

// Function: sub_001181F8
// Address: 0x1181f8 - 0x118204
void sub_001181F8_0x1181f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001181F8_0x1181f8");
#endif

    ctx->pc = 0x1181f8u;

    // 0x1181f8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1181f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1181fc: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x1181fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x118200: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x118200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x118204u;
}
