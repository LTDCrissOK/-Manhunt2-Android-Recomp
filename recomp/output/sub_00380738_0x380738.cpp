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

// Function: sub_00380738
// Address: 0x380738 - 0x380760
void sub_00380738_0x380738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380738_0x380738");
#endif

    switch (ctx->pc) {
        case 0x380750u: goto label_380750;
        default: break;
    }

    ctx->pc = 0x380738u;

    // 0x380738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38073c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x38073cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x380740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380744: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x380744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x380748: 0xc0e0192  jal         func_380648
    ctx->pc = 0x380748u;
    SET_GPR_U32(ctx, 31, 0x380750u);
    ctx->pc = 0x38074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380748u;
    // 0x38074c: 0x24846040  addiu       $a0, $a0, 0x6040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380648u, 0x380748u, 0x380750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380750u;
label_380750:
    // 0x380750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380754: 0x3e00008  jr          $ra
    ctx->pc = 0x380754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380754u;
        // 0x380758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38075Cu;
    // 0x38075c: 0x0  nop
    ctx->pc = 0x38075cu;
    // NOP
    ctx->pc = 0x380760u;
}
