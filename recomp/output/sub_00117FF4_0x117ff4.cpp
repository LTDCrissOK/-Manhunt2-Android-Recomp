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

// Function: sub_00117FF4
// Address: 0x117ff4 - 0x117ffc
void sub_00117FF4_0x117ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117FF4_0x117ff4");
#endif

    ctx->pc = 0x117ff4u;

    // 0x117ff4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x117ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x117ff8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x117ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x117ffcu;
}
