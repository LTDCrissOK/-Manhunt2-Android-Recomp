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

// Function: entry_002b6266
// Address: 0x2b6266 - 0x2b627a
void entry_002b6266_0x2b6266(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6266_0x2b6266");
#endif

    ctx->pc = 0x2b6266u;

    // 0x2b6266: 0x802d0c0a  lb          $t5, 0xC0A($at)
    ctx->pc = 0x2b6266u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 3082)));
    // 0x2b626a: 0xce7c0080  pref        0x1C, 0x80($s3)
    ctx->pc = 0x2b626au;
    // PREF instruction (ignored)
    // 0x2b626e: 0x202d0c0a  addi        $t5, $at, 0xC0A
    ctx->pc = 0x2b626eu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3082, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b6272: 0x182d0040  .word       0x182D0040                   # blez        $at, . + 4 + (0x40 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2B6272u;
    {
        const bool branch_taken_0x2b6272 = (GPR_S32(ctx, 1) <= 0);
        ctx->pc = 0x2B6276u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6272u;
        // 0x2b6276: 0x10040  sll         $zero, $at, 1 (Delay Slot)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6272) {
            ctx->pc = 0x2B6376u;
            return;
        }
    }
    ctx->pc = 0x2B627Au;
}
