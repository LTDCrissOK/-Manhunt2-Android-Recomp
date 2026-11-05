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

// Function: sub_00371660
// Address: 0x371660 - 0x371670
void sub_00371660_0x371660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371660_0x371660");
#endif

    ctx->pc = 0x371660u;

    // 0x371660: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x371660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x371664: 0x0  nop
    ctx->pc = 0x371664u;
    // NOP
    // 0x371668: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x371668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37166c: 0x0  nop
    ctx->pc = 0x37166cu;
    // NOP
    ctx->pc = 0x371670u;
}
