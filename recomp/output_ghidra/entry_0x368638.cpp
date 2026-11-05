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

// Function: entry
// Address: 0x368638 - 0x36863e
void entry_0x368638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0x368638");
#endif

    ctx->pc = 0x368638u;

    // 0x368638: 0x70000c28  padduw      $at, $zero, $zero
    ctx->pc = 0x368638u;
    SET_GPR_VEC(ctx, 1, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36863c: 0x70001428  padduw      $v0, $zero, $zero
    ctx->pc = 0x36863cu;
    SET_GPR_VEC(ctx, 2, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x36863eu;
}
