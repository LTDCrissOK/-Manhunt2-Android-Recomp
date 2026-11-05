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

// Function: sub_003ADAA8
// Address: 0x3adaa8 - 0x3adae0
void sub_003ADAA8_0x3adaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADAA8_0x3adaa8");
#endif

    ctx->pc = 0x3adaa8u;

    // 0x3adaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3adaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3adaac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3adaacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3adab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3adab4: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x3adab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x3adab8: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x3adab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x3adabc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3adabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3adac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3adac4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3adac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3adac8: 0xa44300e4  sh          $v1, 0xE4($v0)
    ctx->pc = 0x3adac8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 228), (uint16_t)GPR_U32(ctx, 3));
    // 0x3adacc: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x3adaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x3adad0: 0xa44000e0  sh          $zero, 0xE0($v0)
    ctx->pc = 0x3adad0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 0));
    // 0x3adad4: 0xa44300e2  sh          $v1, 0xE2($v0)
    ctx->pc = 0x3adad4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 226), (uint16_t)GPR_U32(ctx, 3));
    // 0x3adad8: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3ADAD8u;
    ctx->pc = 0x3ADADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAD8u;
    // 0x3adadc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3ADAE0u;
}
