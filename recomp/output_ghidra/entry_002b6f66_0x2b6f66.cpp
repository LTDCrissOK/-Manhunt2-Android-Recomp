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

// Function: entry_002b6f66
// Address: 0x2b6f66 - 0x2b6f6e
void entry_002b6f66_0x2b6f66(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6f66_0x2b6f66");
#endif

    ctx->pc = 0x2b6f66u;

    // 0x2b6f66: 0x292403  .word       0x00292403                   # sra         $a0, $t1, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f66u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2b6f6a: 0x3e2402  .word       0x003E2402                   # srl         $a0, $fp, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f6au;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 16));
    ctx->pc = 0x2b6f6eu;
}
