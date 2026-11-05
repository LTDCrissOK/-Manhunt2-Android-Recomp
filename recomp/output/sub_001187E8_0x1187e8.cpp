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

// Function: sub_001187E8
// Address: 0x1187e8 - 0x1187f0
void sub_001187E8_0x1187e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001187E8_0x1187e8");
#endif

    ctx->pc = 0x1187e8u;

    // 0x1187e8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1187e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1187ec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1187ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1187f0u;
}
