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

// Function: sub_0039CDF8
// Address: 0x39cdf8 - 0x39ce20
void sub_0039CDF8_0x39cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CDF8_0x39cdf8");
#endif

    ctx->pc = 0x39cdf8u;

    // 0x39cdf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39cdfc: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x39cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x39ce00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ce04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ce04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x39ce08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x39ce0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ce10: 0x80e7340  j           func_39CD00
    ctx->pc = 0x39CE10u;
    ctx->pc = 0x39CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE10u;
    // 0x39ce14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CD00u, 0x39CE10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39CE18u;
    // 0x39ce18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39ce1c: 0x0  nop
    ctx->pc = 0x39ce1cu;
    // NOP
    ctx->pc = 0x39ce20u;
}
