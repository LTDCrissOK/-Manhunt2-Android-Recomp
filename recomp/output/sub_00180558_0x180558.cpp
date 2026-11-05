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

// Function: sub_00180558
// Address: 0x180558 - 0x180590
void sub_00180558_0x180558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180558_0x180558");
#endif

    switch (ctx->pc) {
        case 0x180580u: goto label_180580;
        default: break;
    }

    ctx->pc = 0x180558u;

    // 0x180558: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x180558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18055c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180560: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x180564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180568: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18056c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x180570: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x180570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x180574: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x180574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x180578: 0xc060164  jal         func_180590
    ctx->pc = 0x180578u;
    SET_GPR_U32(ctx, 31, 0x180580u);
    ctx->pc = 0x18057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180578u;
    // 0x18057c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180590u, 0x180578u, 0x180580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180580u;
label_180580:
    // 0x180580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180584: 0x3e00008  jr          $ra
    ctx->pc = 0x180584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180584u;
        // 0x180588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18058Cu;
    // 0x18058c: 0x0  nop
    ctx->pc = 0x18058cu;
    // NOP
    ctx->pc = 0x180590u;
}
