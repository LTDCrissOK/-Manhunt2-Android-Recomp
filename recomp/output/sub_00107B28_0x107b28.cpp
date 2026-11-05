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

// Function: sub_00107B28
// Address: 0x107b28 - 0x107b50
void sub_00107B28_0x107b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B28_0x107b28");
#endif

    switch (ctx->pc) {
        case 0x107b40u: goto label_107b40;
        default: break;
    }

    ctx->pc = 0x107b28u;

    // 0x107b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107b2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107B30u;
    {
        const bool branch_taken_0x107b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B30u;
        // 0x107b34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b30) {
            ctx->pc = 0x107B40u;
            goto label_107b40;
        }
    }
    ctx->pc = 0x107B38u;
    // 0x107b38: 0xc042406  jal         func_109018
    ctx->pc = 0x107B38u;
    SET_GPR_U32(ctx, 31, 0x107B40u);
    ctx->pc = 0x107B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B38u;
    // 0x107b3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109018u, 0x107B38u, 0x107B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B40u;
label_107b40:
    // 0x107b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107b44: 0x3e00008  jr          $ra
    ctx->pc = 0x107B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B44u;
        // 0x107b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107B4Cu;
    // 0x107b4c: 0x0  nop
    ctx->pc = 0x107b4cu;
    // NOP
    ctx->pc = 0x107b50u;
}
