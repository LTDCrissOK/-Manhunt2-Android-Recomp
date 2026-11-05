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

// Function: sub_003B36E8
// Address: 0x3b36e8 - 0x3b3700
void sub_003B36E8_0x3b36e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B36E8_0x3b36e8");
#endif

    ctx->pc = 0x3b36e8u;

    // 0x3b36e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b36e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b36ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b36ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b36f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b36f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b36f4: 0x80eb26e  j           func_3AC9B8
    ctx->pc = 0x3B36F4u;
    ctx->pc = 0x3B36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36F4u;
    // 0x3b36f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    sub_003AC9B8_0x3ac9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3B36FCu;
    // 0x3b36fc: 0x0  nop
    ctx->pc = 0x3b36fcu;
    // NOP
    ctx->pc = 0x3b3700u;
}
