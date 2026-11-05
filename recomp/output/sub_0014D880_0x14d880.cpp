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

// Function: sub_0014D880
// Address: 0x14d880 - 0x14d8a0
void sub_0014D880_0x14d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D880_0x14d880");
#endif

    switch (ctx->pc) {
        case 0x14d890u: goto label_14d890;
        default: break;
    }

    ctx->pc = 0x14d880u;

    // 0x14d880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d888: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14D888u;
    SET_GPR_U32(ctx, 31, 0x14D890u);
    ctx->pc = 0x14D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D888u;
    // 0x14d88c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14D888u, 0x14D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D890u;
label_14d890:
    // 0x14d890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d894: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14d894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14d898: 0x3e00008  jr          $ra
    ctx->pc = 0x14D898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D898u;
        // 0x14d89c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D8A0u;
}
