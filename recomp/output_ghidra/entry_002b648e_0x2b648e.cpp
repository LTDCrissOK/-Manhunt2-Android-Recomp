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

// Function: entry_002b648e
// Address: 0x2b648e - 0x2b6490
void entry_002b648e_0x2b648e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b648e_0x2b648e");
#endif

    ctx->pc = 0x2b648eu;

    // 0x2b648e: 0xae23  .word       0x0000AE23                   # negu        $s5, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b648eu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    ctx->pc = 0x2b6490u;
}
