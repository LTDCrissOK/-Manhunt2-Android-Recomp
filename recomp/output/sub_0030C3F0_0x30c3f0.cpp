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

// Function: sub_0030C3F0
// Address: 0x30c3f0 - 0x30c418
void sub_0030C3F0_0x30c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C3F0_0x30c3f0");
#endif

    switch (ctx->pc) {
        case 0x30c408u: goto label_30c408;
        default: break;
    }

    ctx->pc = 0x30c3f0u;

    // 0x30c3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c3f4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c3fc: 0x24a58ed8  addiu       $a1, $a1, -0x7128
    ctx->pc = 0x30c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938328));
    // 0x30c400: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C400u;
    SET_GPR_U32(ctx, 31, 0x30C408u);
    ctx->pc = 0x30C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C400u;
    // 0x30c404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C400u, 0x30C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C408u;
label_30c408:
    // 0x30c408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C40Cu;
        // 0x30c410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C414u;
    // 0x30c414: 0x0  nop
    ctx->pc = 0x30c414u;
    // NOP
    ctx->pc = 0x30c418u;
}
