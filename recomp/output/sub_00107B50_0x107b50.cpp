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

// Function: sub_00107B50
// Address: 0x107b50 - 0x107b78
void sub_00107B50_0x107b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B50_0x107b50");
#endif

    switch (ctx->pc) {
        case 0x107b68u: goto label_107b68;
        default: break;
    }

    ctx->pc = 0x107b50u;

    // 0x107b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107b54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107B58u;
    {
        const bool branch_taken_0x107b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B58u;
        // 0x107b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b58) {
            ctx->pc = 0x107B68u;
            goto label_107b68;
        }
    }
    ctx->pc = 0x107B60u;
    // 0x107b60: 0xc04b42a  jal         func_12D0A8
    ctx->pc = 0x107B60u;
    SET_GPR_U32(ctx, 31, 0x107B68u);
    ctx->pc = 0x107B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B60u;
    // 0x107b64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D0A8u, 0x107B60u, 0x107B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B68u;
label_107b68:
    // 0x107b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x107B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B6Cu;
        // 0x107b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107B74u;
    // 0x107b74: 0x0  nop
    ctx->pc = 0x107b74u;
    // NOP
    ctx->pc = 0x107b78u;
}
