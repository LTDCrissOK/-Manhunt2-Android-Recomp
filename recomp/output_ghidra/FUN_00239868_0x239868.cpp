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

// Function: FUN_00239868
// Address: 0x239868 - 0x239869
void FUN_00239868_0x239868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239868_0x239868");
#endif

    ctx->pc = 0x239868u;

    // 0x239868: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    ctx->pc = 0x239869u;
}
