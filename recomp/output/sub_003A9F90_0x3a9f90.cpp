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

// Function: sub_003A9F90
// Address: 0x3a9f90 - 0x3a9fb0
void sub_003A9F90_0x3a9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9F90_0x3a9f90");
#endif

    ctx->pc = 0x3a9f90u;

    // 0x3a9f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9f94: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a9f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a9f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a9f9c: 0x2484ed70  addiu       $a0, $a0, -0x1290
    ctx->pc = 0x3a9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962544));
    // 0x3a9fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9fa4: 0x80ecf82  j           func_3B3E08
    ctx->pc = 0x3A9FA4u;
    ctx->pc = 0x3A9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9FA4u;
    // 0x3a9fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3E08u;
    sub_003B3E08_0x3b3e08(rdram, ctx, runtime); return;
    ctx->pc = 0x3A9FACu;
    // 0x3a9fac: 0x0  nop
    ctx->pc = 0x3a9facu;
    // NOP
    ctx->pc = 0x3a9fb0u;
}
