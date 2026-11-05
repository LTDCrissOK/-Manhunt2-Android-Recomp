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

// Function: entry_002b62da
// Address: 0x2b62da - 0x2b62dc
void entry_002b62da_0x2b62da(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b62da_0x2b62da");
#endif

    ctx->pc = 0x2b62dau;

    // 0x2b62da: 0xae03  sra         $s5, $zero, 24
    ctx->pc = 0x2b62dau;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), 24));
    ctx->pc = 0x2b62dcu;
}
