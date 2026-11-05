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

// Function: sub_001CA02C
// Address: 0x1ca02c - 0x1ca038
void sub_001CA02C_0x1ca02c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA02C_0x1ca02c");
#endif

    switch (ctx->pc) {
        case 0x1ca034u: goto label_1ca034;
        default: break;
    }

    ctx->pc = 0x1ca02cu;

    // 0x1ca02c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca030: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1ca030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1ca034:
    // 0x1ca034: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ca034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1ca038u;
}
