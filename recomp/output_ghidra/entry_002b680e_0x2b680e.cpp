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

// Function: entry_002b680e
// Address: 0x2b680e - 0x2b6816
void entry_002b680e_0x2b680e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b680e_0x2b680e");
#endif

    ctx->pc = 0x2b680eu;

    // 0x2b680e: 0x232403  .word       0x00232403                   # sra         $a0, $v1, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b680eu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2b6812: 0x1a2402  srl         $a0, $k0, 16
    ctx->pc = 0x2b6812u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 26), 16));
    ctx->pc = 0x2b6816u;
}
