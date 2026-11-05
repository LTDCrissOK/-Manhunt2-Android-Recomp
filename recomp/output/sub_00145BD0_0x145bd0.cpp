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

// Function: sub_00145BD0
// Address: 0x145bd0 - 0x145bf0
void sub_00145BD0_0x145bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145BD0_0x145bd0");
#endif

    switch (ctx->pc) {
        case 0x145be0u: goto label_145be0;
        default: break;
    }

    ctx->pc = 0x145bd0u;

    // 0x145bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145bd8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x145BD8u;
    SET_GPR_U32(ctx, 31, 0x145BE0u);
    ctx->pc = 0x145BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145BD8u;
    // 0x145bdc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x145BD8u, 0x145BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BE0u;
label_145be0:
    // 0x145be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145be4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x145be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x145be8: 0x3e00008  jr          $ra
    ctx->pc = 0x145BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BE8u;
        // 0x145bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BF0u;
}
