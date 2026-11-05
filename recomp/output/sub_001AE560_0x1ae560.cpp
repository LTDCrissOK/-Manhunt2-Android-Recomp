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

// Function: sub_001AE560
// Address: 0x1ae560 - 0x1ae590
void sub_001AE560_0x1ae560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE560_0x1ae560");
#endif

    switch (ctx->pc) {
        case 0x1ae578u: goto label_1ae578;
        default: break;
    }

    ctx->pc = 0x1ae560u;

    // 0x1ae560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae564: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ae564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae56c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ae56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae570: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE570u;
    SET_GPR_U32(ctx, 31, 0x1AE578u);
    ctx->pc = 0x1AE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE570u;
    // 0x1ae574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE570u, 0x1AE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE578u;
label_1ae578:
    // 0x1ae578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae57c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE57Cu;
        // 0x1ae580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE584u;
    // 0x1ae584: 0x0  nop
    ctx->pc = 0x1ae584u;
    // NOP
    // 0x1ae588: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ae588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ae58c: 0x0  nop
    ctx->pc = 0x1ae58cu;
    // NOP
    ctx->pc = 0x1ae590u;
}
