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

// Function: sub_003AF940
// Address: 0x3af940 - 0x3af958
void sub_003AF940_0x3af940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF940_0x3af940");
#endif

    ctx->pc = 0x3af940u;

    // 0x3af940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3af940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3af944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3af948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af94c: 0x80eb26e  j           func_3AC9B8
    ctx->pc = 0x3AF94Cu;
    ctx->pc = 0x3AF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF94Cu;
    // 0x3af950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    sub_003AC9B8_0x3ac9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AF954u;
    // 0x3af954: 0x0  nop
    ctx->pc = 0x3af954u;
    // NOP
    ctx->pc = 0x3af958u;
}
