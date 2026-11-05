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

// Function: sub_003B2FD0
// Address: 0x3b2fd0 - 0x3b2ff0
void sub_003B2FD0_0x3b2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2FD0_0x3b2fd0");
#endif

    ctx->pc = 0x3b2fd0u;

    // 0x3b2fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b2fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2fdc: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x3B2FDCu;
    ctx->pc = 0x3B2FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FDCu;
    // 0x3b2fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x3B2FE4u;
    // 0x3b2fe4: 0x0  nop
    ctx->pc = 0x3b2fe4u;
    // NOP
    // 0x3b2fe8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3b2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3b2fec: 0x0  nop
    ctx->pc = 0x3b2fecu;
    // NOP
    ctx->pc = 0x3b2ff0u;
}
