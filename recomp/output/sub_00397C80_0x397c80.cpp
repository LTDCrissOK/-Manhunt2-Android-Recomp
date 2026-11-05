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

// Function: sub_00397C80
// Address: 0x397c80 - 0x397c98
void sub_00397C80_0x397c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397C80_0x397c80");
#endif

    ctx->pc = 0x397c80u;

    // 0x397c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397c8c: 0x80ea612  j           func_3A9848
    ctx->pc = 0x397C8Cu;
    ctx->pc = 0x397C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C8Cu;
    // 0x397c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9848u;
    sub_003A9848_0x3a9848(rdram, ctx, runtime); return;
    ctx->pc = 0x397C94u;
    // 0x397c94: 0x0  nop
    ctx->pc = 0x397c94u;
    // NOP
    ctx->pc = 0x397c98u;
}
