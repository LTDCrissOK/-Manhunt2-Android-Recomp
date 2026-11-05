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

// Function: sub_00180C30
// Address: 0x180c30 - 0x180c58
void sub_00180C30_0x180c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C30_0x180c30");
#endif

    switch (ctx->pc) {
        case 0x180c48u: goto label_180c48;
        default: break;
    }

    ctx->pc = 0x180c30u;

    // 0x180c30: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180c38: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x180c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180c40: 0xc060316  jal         func_180C58
    ctx->pc = 0x180C40u;
    SET_GPR_U32(ctx, 31, 0x180C48u);
    ctx->pc = 0x180C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C40u;
    // 0x180c44: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C58u, 0x180C40u, 0x180C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C48u;
label_180c48:
    // 0x180c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x180C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C4Cu;
        // 0x180c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180C54u;
    // 0x180c54: 0x0  nop
    ctx->pc = 0x180c54u;
    // NOP
    ctx->pc = 0x180c58u;
}
