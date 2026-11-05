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

// Function: sub_003A1A20
// Address: 0x3a1a20 - 0x3a1a58
void sub_003A1A20_0x3a1a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1A20_0x3a1a20");
#endif

    ctx->pc = 0x3a1a20u;

    // 0x3a1a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a1a24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a1a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a1a2c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a1a30: 0x24841dc0  addiu       $a0, $a0, 0x1DC0
    ctx->pc = 0x3a1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    // 0x3a1a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1a3c: 0x80e867c  j           func_3A19F0
    ctx->pc = 0x3A1A3Cu;
    ctx->pc = 0x3A1A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A3Cu;
    // 0x3a1a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F0u;
    sub_003A19F0_0x3a19f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1A44u;
    // 0x3a1a44: 0x0  nop
    ctx->pc = 0x3a1a44u;
    // NOP
    // 0x3a1a48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a1a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a1a4c: 0x0  nop
    ctx->pc = 0x3a1a4cu;
    // NOP
    // 0x3a1a50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a1a54: 0x0  nop
    ctx->pc = 0x3a1a54u;
    // NOP
    ctx->pc = 0x3a1a58u;
}
