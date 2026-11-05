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

// Function: sub_00322178
// Address: 0x322178 - 0x322198
void sub_00322178_0x322178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322178_0x322178");
#endif

    switch (ctx->pc) {
        case 0x322188u: goto label_322188;
        default: break;
    }

    ctx->pc = 0x322178u;

    // 0x322178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32217c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322180: 0xc0c32da  jal         func_30CB68
    ctx->pc = 0x322180u;
    SET_GPR_U32(ctx, 31, 0x322188u);
    ctx->pc = 0x322184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322180u;
    // 0x322184: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CB68u, 0x322180u, 0x322188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322188u;
label_322188:
    // 0x322188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32218c: 0x3e00008  jr          $ra
    ctx->pc = 0x32218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32218Cu;
        // 0x322190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32218Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322194u;
    // 0x322194: 0x0  nop
    ctx->pc = 0x322194u;
    // NOP
    ctx->pc = 0x322198u;
}
