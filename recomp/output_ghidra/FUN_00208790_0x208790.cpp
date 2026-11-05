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

// Function: FUN_00208790
// Address: 0x208790 - 0x208791
void FUN_00208790_0x208790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208790_0x208790");
#endif

    ctx->pc = 0x208790u;

    // 0x208790: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    ctx->pc = 0x208791u;
}
