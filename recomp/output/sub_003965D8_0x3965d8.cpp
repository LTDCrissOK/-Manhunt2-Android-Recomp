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

// Function: sub_003965D8
// Address: 0x3965d8 - 0x396608
void sub_003965D8_0x3965d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003965D8_0x3965d8");
#endif

    ctx->pc = 0x3965d8u;

    // 0x3965d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3965d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3965dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3965DCu;
    {
        const bool branch_taken_0x3965dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3965E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965DCu;
        // 0x3965e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3965dc) {
            ctx->pc = 0x3965F8u;
            goto label_3965f8;
        }
    }
    ctx->pc = 0x3965E4u;
    // 0x3965e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3965e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3965e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3965e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3965ec: 0x2484aef0  addiu       $a0, $a0, -0x5110
    ctx->pc = 0x3965ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946544));
    // 0x3965f0: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x3965F0u;
    ctx->pc = 0x3965F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965F0u;
    // 0x3965f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x3965F8u;
label_3965f8:
    // 0x3965f8: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x3965f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x3965fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3965fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396600: 0x80e9d0a  j           func_3A7428
    ctx->pc = 0x396600u;
    ctx->pc = 0x396604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396600u;
    // 0x396604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7428u;
    sub_003A7428_0x3a7428(rdram, ctx, runtime); return;
    ctx->pc = 0x396608u;
}
