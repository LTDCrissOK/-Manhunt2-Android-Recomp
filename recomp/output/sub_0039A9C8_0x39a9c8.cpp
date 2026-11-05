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

// Function: sub_0039A9C8
// Address: 0x39a9c8 - 0x39a9e0
void sub_0039A9C8_0x39a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A9C8_0x39a9c8");
#endif

    ctx->pc = 0x39a9c8u;

    // 0x39a9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a9d4: 0x80ebe5c  j           func_3AF970
    ctx->pc = 0x39A9D4u;
    ctx->pc = 0x39A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A9D4u;
    // 0x39a9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    sub_003AF970_0x3af970(rdram, ctx, runtime); return;
    ctx->pc = 0x39A9DCu;
    // 0x39a9dc: 0x0  nop
    ctx->pc = 0x39a9dcu;
    // NOP
    ctx->pc = 0x39a9e0u;
}
