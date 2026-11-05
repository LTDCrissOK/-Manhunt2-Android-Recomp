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

// Function: sub_001188E4
// Address: 0x1188e4 - 0x1188ec
void sub_001188E4_0x1188e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001188E4_0x1188e4");
#endif

    ctx->pc = 0x1188e4u;

    // 0x1188e4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1188e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1188e8: 0xa0450018  sb          $a1, 0x18($v0)
    ctx->pc = 0x1188e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1188ecu;
}
