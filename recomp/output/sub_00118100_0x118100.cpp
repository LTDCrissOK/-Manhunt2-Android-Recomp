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

// Function: sub_00118100
// Address: 0x118100 - 0x118108
void sub_00118100_0x118100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118100_0x118100");
#endif

    ctx->pc = 0x118100u;

    // 0x118100: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x118104: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x118104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    ctx->pc = 0x118108u;
}
