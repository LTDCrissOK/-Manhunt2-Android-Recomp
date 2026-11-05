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

// Function: entry_001560ce
// Address: 0x1560ce - 0x1560d6
void entry_001560ce_0x1560ce(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560ce_0x1560ce");
#endif

    ctx->pc = 0x1560ceu;

    // 0x1560ce: 0xffff8e02  sd          $ra, -0x71FE($ra)
    ctx->pc = 0x1560ceu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294938114), GPR_U64(ctx, 31));
    // 0x1560d2: 0x62444  .word       0x00062444                   # sllv        $a0, $a2, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x1560d2u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x1560d6u;
}
