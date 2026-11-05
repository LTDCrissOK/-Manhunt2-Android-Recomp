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

// Function: FUN_00259b00
// Address: 0x259b00 - 0x259b01
void FUN_00259b00_0x259b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00259b00_0x259b00");
#endif

    ctx->pc = 0x259b00u;

    // 0x259b00: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x259b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    ctx->pc = 0x259b01u;
}
