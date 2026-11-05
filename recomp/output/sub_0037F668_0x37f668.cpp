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

// Function: sub_0037F668
// Address: 0x37f668 - 0x37f688
void sub_0037F668_0x37f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F668_0x37f668");
#endif

    ctx->pc = 0x37f668u;

    // 0x37f668: 0x10017800  beq         $zero, $at, . + 4 + (0x7800 << 2)
    ctx->pc = 0x37F668u;
    {
        const bool branch_taken_0x37f668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F668u;
        // 0x37f66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f668) {
            ctx->pc = 0x39D66Cu;
            return;
        }
    }
    ctx->pc = 0x37F670u;
    // 0x37f670: 0x1002780c  beq         $zero, $v0, . + 4 + (0x780C << 2)
    ctx->pc = 0x37F670u;
    {
        const bool branch_taken_0x37f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F670u;
        // 0x37f674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f670) {
            ctx->pc = 0x39D6A4u;
            return;
        }
    }
    ctx->pc = 0x37F678u;
    // 0x37f678: 0x40000004  .word       0x40000004                   # mfc0        $zero, Index # 00000004 <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f678u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37f67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f680: 0x10030003  beq         $zero, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F680u;
    {
        const bool branch_taken_0x37f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F680u;
        // 0x37f684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f680) {
            ctx->pc = 0x37F690u;
            return;
        }
    }
    ctx->pc = 0x37F688u;
}
