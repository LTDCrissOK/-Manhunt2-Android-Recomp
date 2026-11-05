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

// Function: sub_003B1110
// Address: 0x3b1110 - 0x3b1138
void sub_003B1110_0x3b1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1110_0x3b1110");
#endif

    ctx->pc = 0x3b1110u;

    // 0x3b1110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b111c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3b111cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b1120: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3b1120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3b1124: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x3b1124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x3b1128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b112c: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3B112Cu;
    ctx->pc = 0x3B1130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B112Cu;
    // 0x3b1130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3B1134u;
    // 0x3b1134: 0x0  nop
    ctx->pc = 0x3b1134u;
    // NOP
    ctx->pc = 0x3b1138u;
}
