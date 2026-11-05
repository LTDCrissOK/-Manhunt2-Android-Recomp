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

// Function: sub_001186AC
// Address: 0x1186ac - 0x1186b4
void sub_001186AC_0x1186ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001186AC_0x1186ac");
#endif

    ctx->pc = 0x1186acu;

    // 0x1186ac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1186acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1186b0: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x1186b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    ctx->pc = 0x1186b4u;
}
