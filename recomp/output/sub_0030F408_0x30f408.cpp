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

// Function: sub_0030F408
// Address: 0x30f408 - 0x30f428
void sub_0030F408_0x30f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F408_0x30f408");
#endif

    switch (ctx->pc) {
        case 0x30f41cu: goto label_30f41c;
        default: break;
    }

    ctx->pc = 0x30f408u;

    // 0x30f408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30f40c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f414: 0xc0c3cea  jal         func_30F3A8
    ctx->pc = 0x30F414u;
    SET_GPR_U32(ctx, 31, 0x30F41Cu);
    ctx->pc = 0x30F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F414u;
    // 0x30f418: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F3A8u, 0x30F414u, 0x30F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F41Cu;
label_30f41c:
    // 0x30f41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f420: 0x3e00008  jr          $ra
    ctx->pc = 0x30F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F420u;
        // 0x30f424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F428u;
}
