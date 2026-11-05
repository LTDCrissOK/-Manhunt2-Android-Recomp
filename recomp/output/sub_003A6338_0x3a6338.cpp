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

// Function: sub_003A6338
// Address: 0x3a6338 - 0x3a6350
void sub_003A6338_0x3a6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6338_0x3a6338");
#endif

    ctx->pc = 0x3a6338u;

    // 0x3a6338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a633c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6344: 0x80e96cc  j           func_3A5B30
    ctx->pc = 0x3A6344u;
    ctx->pc = 0x3A6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6344u;
    // 0x3a6348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5B30u;
    sub_003A5B30_0x3a5b30(rdram, ctx, runtime); return;
    ctx->pc = 0x3A634Cu;
    // 0x3a634c: 0x0  nop
    ctx->pc = 0x3a634cu;
    // NOP
    ctx->pc = 0x3a6350u;
}
