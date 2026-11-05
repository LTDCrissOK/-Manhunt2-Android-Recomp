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

// Function: entry_002b6328
// Address: 0x2b6328 - 0x2b6338
void entry_002b6328_0x2b6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6328_0x2b6328");
#endif

    ctx->pc = 0x2b6328u;

    // 0x2b6328: 0xa040a930  sb          $zero, -0x56D0($v0)
    ctx->pc = 0x2b6328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b632c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2b632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6330: 0xa060a928  sb          $zero, -0x56D8($v1)
    ctx->pc = 0x2b6330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6334: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x2b6338u;
}
