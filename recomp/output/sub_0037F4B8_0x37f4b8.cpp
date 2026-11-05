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

// Function: sub_0037F4B8
// Address: 0x37f4b8 - 0x37f4c8
void sub_0037F4B8_0x37f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F4B8_0x37f4b8");
#endif

    ctx->pc = 0x37f4b8u;

    // 0x37f4b8: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f4b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37f4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f4c0: 0x1004780c  beq         $zero, $a0, . + 4 + (0x780C << 2)
    ctx->pc = 0x37F4C0u;
    {
        const bool branch_taken_0x37f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4C0u;
        // 0x37f4c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4c0) {
            ctx->pc = 0x39D4F4u;
            return;
        }
    }
    ctx->pc = 0x37F4C8u;
}
