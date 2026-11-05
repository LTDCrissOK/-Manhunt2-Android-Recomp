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

// Function: sub_002B60E8
// Address: 0x2b60e8 - 0x2b6110
void sub_002B60E8_0x2b60e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B60E8_0x2b60e8");
#endif

    switch (ctx->pc) {
        case 0x2b60f8u: goto label_2b60f8;
        default: break;
    }

    ctx->pc = 0x2b60e8u;

    // 0x2b60e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b60ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b60ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b60f0: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B60F0u;
    SET_GPR_U32(ctx, 31, 0x2B60F8u);
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B60F0u, 0x2B60F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60F8u;
label_2b60f8:
    // 0x2b60f8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2b60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b60fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b60fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6100: 0x2842014d  slti        $v0, $v0, 0x14D
    ctx->pc = 0x2b6100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)333) ? 1 : 0);
    // 0x2b6104: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b6104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b6108: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6110u;
}
