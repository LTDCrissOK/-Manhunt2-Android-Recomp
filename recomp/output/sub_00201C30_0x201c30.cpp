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

// Function: sub_00201C30
// Address: 0x201c30 - 0x201c60
void sub_00201C30_0x201c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C30_0x201c30");
#endif

    switch (ctx->pc) {
        case 0x201c54u: goto label_201c54;
        default: break;
    }

    ctx->pc = 0x201c30u;

    // 0x201c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201c34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201c40: 0x8c8401f4  lw          $a0, 0x1F4($a0)
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x201c44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201C44u;
    {
        const bool branch_taken_0x201c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C44u;
        // 0x201c48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c44) {
            ctx->pc = 0x201C58u;
            goto label_201c58;
        }
    }
    ctx->pc = 0x201C4Cu;
    // 0x201c4c: 0xc082874  jal         func_20A1D0
    ctx->pc = 0x201C4Cu;
    SET_GPR_U32(ctx, 31, 0x201C54u);
    ctx->pc = 0x20A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A1D0u, 0x201C4Cu, 0x201C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C54u;
label_201c54:
    // 0x201c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201c58:
    // 0x201c58: 0x3e00008  jr          $ra
    ctx->pc = 0x201C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C58u;
        // 0x201c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C60u;
}
