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

// Function: sub_00341570
// Address: 0x341570 - 0x341598
void sub_00341570_0x341570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341570_0x341570");
#endif

    switch (ctx->pc) {
        case 0x341584u: goto label_341584;
        default: break;
    }

    ctx->pc = 0x341570u;

    // 0x341570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341574: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34157c: 0xc0d0544  jal         func_341510
    ctx->pc = 0x34157Cu;
    SET_GPR_U32(ctx, 31, 0x341584u);
    ctx->pc = 0x341580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34157Cu;
    // 0x341580: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341510u, 0x34157Cu, 0x341584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341584u;
label_341584:
    // 0x341584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341588: 0x3e00008  jr          $ra
    ctx->pc = 0x341588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341588u;
        // 0x34158c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341590u;
    // 0x341590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x341590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x341594: 0x0  nop
    ctx->pc = 0x341594u;
    // NOP
    ctx->pc = 0x341598u;
}
