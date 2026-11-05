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

// Function: sub_003A52F8
// Address: 0x3a52f8 - 0x3a5320
void sub_003A52F8_0x3a52f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A52F8_0x3a52f8");
#endif

    ctx->pc = 0x3a52f8u;

    // 0x3a52f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a52f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a52fc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a52fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a5300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5308: 0x24843780  addiu       $a0, $a0, 0x3780
    ctx->pc = 0x3a5308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14208));
    // 0x3a530c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a530cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a5310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5314: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3A5314u;
    ctx->pc = 0x3A5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5314u;
    // 0x3a5318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3A531Cu;
    // 0x3a531c: 0x0  nop
    ctx->pc = 0x3a531cu;
    // NOP
    ctx->pc = 0x3a5320u;
}
