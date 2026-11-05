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

// Function: entry_0015617a
// Address: 0x15617a - 0x156184
void entry_0015617a_0x15617a(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015617a_0x15617a");
#endif

    ctx->pc = 0x15617au;

    // 0x15617a: 0x5200000  bltz        $t1, . + 4 + (0x0 << 2)
label_15617e:
    if (ctx->pc == 0x15617Eu) {
        ctx->pc = 0x15617Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15617Au;
        // 0x15617e: 0xffff8e02  sd          $ra, -0x71FE($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 4294938114), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156182u;
        goto label_fallthrough_0x15617a;
    }
    ctx->pc = 0x15617Au;
    {
        const bool branch_taken_0x15617a = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x15617Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15617Au;
        // 0x15617e: 0xffff8e02  sd          $ra, -0x71FE($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 4294938114), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15617a) {
            ctx->pc = 0x15617Eu;
            goto label_15617e;
        }
    }
label_fallthrough_0x15617a:
    ctx->pc = 0x156182u;
    // 0x156182: 0x62444  .word       0x00062444                   # sllv        $a0, $a2, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x156182u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x156184u;
}
