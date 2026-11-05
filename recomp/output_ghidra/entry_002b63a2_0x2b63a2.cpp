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

// Function: entry_002b63a2
// Address: 0x2b63a2 - 0x2b63c0
void entry_002b63a2_0x2b63a2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b63a2_0x2b63a2");
#endif

    ctx->pc = 0x2b63a2u;

    // 0x2b63a2: 0x882d0c07  lwl         $t5, 0xC07($at)
    ctx->pc = 0x2b63a2u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 3079); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x2b63a6: 0x60080  sll         $zero, $a2, 2
    ctx->pc = 0x2b63a6u;
    
    // 0x2b63aa: 0x18420440  .word       0x18420440                   # blez        $v0, . + 4 + (0x440 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2B63AAu;
    {
        const bool branch_taken_0x2b63aa = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B63AEu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63AAu;
        // 0x2b63ae: 0x18000002  blez        $zero, . + 4 + (0x2 << 2) (Delay Slot)
        // Likely branch instruction at 0x2B63AE - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63aa) {
            ctx->pc = 0x2B74AEu;
            return;
        }
    }
    ctx->pc = 0x2B63B2u;
    // 0x2b63b2: 0x4482  srl         $t0, $zero, 18
    ctx->pc = 0x2b63b2u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
    // 0x2b63b6: 0x18e00000  blez        $a3, . + 4 + (0x0 << 2)
label_2b63ba:
    if (ctx->pc == 0x2B63BAu) {
        ctx->pc = 0x2B63BAu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63B6u;
        // 0x2b63ba: 0x74680  sll         $t0, $a3, 26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63BEu;
        goto label_fallthrough_0x2b63b6;
    }
    ctx->pc = 0x2B63B6u;
    {
        const bool branch_taken_0x2b63b6 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2B63BAu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63B6u;
        // 0x2b63ba: 0x74680  sll         $t0, $a3, 26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63b6) {
            ctx->pc = 0x2B63BAu;
            goto label_2b63ba;
        }
    }
label_fallthrough_0x2b63b6:
    ctx->pc = 0x2B63BEu;
    // 0x2b63be: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b63beu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x2b63c0u;
}
