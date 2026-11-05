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

// Function: sub_00200D20
// Address: 0x200d20 - 0x200d40
void sub_00200D20_0x200d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200D20_0x200d20");
#endif

    switch (ctx->pc) {
        case 0x200d30u: goto label_200d30;
        default: break;
    }

    ctx->pc = 0x200d20u;

    // 0x200d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200d28: 0xc0818b6  jal         func_2062D8
    ctx->pc = 0x200D28u;
    SET_GPR_U32(ctx, 31, 0x200D30u);
    ctx->pc = 0x200D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D28u;
    // 0x200d2c: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062D8u, 0x200D28u, 0x200D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D30u;
label_200d30:
    // 0x200d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200d38: 0x3e00008  jr          $ra
    ctx->pc = 0x200D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D38u;
        // 0x200d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200D40u;
}
