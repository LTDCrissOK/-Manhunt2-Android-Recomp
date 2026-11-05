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

// Function: sub_003AC9E8
// Address: 0x3ac9e8 - 0x3aca00
void sub_003AC9E8_0x3ac9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC9E8_0x3ac9e8");
#endif

    ctx->pc = 0x3ac9e8u;

    // 0x3ac9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ac9ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ac9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ac9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ac9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac9f8: 0x80eb232  j           func_3AC8C8
    ctx->pc = 0x3AC9F8u;
    ctx->pc = 0x3AC9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9F8u;
    // 0x3ac9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC8C8u, 0x3AC9F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACA00u;
}
