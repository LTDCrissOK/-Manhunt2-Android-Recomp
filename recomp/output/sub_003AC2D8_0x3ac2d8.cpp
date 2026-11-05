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

// Function: sub_003AC2D8
// Address: 0x3ac2d8 - 0x3ac320
void sub_003AC2D8_0x3ac2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC2D8_0x3ac2d8");
#endif

    ctx->pc = 0x3ac2d8u;

    // 0x3ac2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ac2dc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3ac2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3ac2e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ac2e4: 0x24a58d00  addiu       $a1, $a1, -0x7300
    ctx->pc = 0x3ac2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
    // 0x3ac2e8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3ac2e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x658D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x658D00u, _value); } while (0);
    // 0x3ac2ec: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x3ac2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3ac2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac2f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ac2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac2fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ac2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac300: 0x80e8f8a  j           func_3A3E28
    ctx->pc = 0x3AC300u;
    ctx->pc = 0x3AC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC300u;
    // 0x3ac304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    sub_003A3E28_0x3a3e28(rdram, ctx, runtime); return;
    ctx->pc = 0x3AC308u;
    // 0x3ac308: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ac308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ac30c: 0x0  nop
    ctx->pc = 0x3ac30cu;
    // NOP
    // 0x3ac310: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ac310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ac314: 0x0  nop
    ctx->pc = 0x3ac314u;
    // NOP
    // 0x3ac318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ac318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ac31c: 0x0  nop
    ctx->pc = 0x3ac31cu;
    // NOP
    ctx->pc = 0x3ac320u;
}
