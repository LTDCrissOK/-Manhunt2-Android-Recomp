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

// Function: sub_00396E08
// Address: 0x396e08 - 0x396e20
void sub_00396E08_0x396e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396E08_0x396e08");
#endif

    ctx->pc = 0x396e08u;

    // 0x396e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x396e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396e14: 0x80f2630  j           func_3C98C0
    ctx->pc = 0x396E14u;
    ctx->pc = 0x396E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E14u;
    // 0x396e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98C0u;
    sub_003C98C0_0x3c98c0(rdram, ctx, runtime); return;
    ctx->pc = 0x396E1Cu;
    // 0x396e1c: 0x0  nop
    ctx->pc = 0x396e1cu;
    // NOP
    ctx->pc = 0x396e20u;
}
