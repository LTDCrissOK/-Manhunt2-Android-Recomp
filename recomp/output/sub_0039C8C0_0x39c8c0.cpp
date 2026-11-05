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

// Function: sub_0039C8C0
// Address: 0x39c8c0 - 0x39c908
void sub_0039C8C0_0x39c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C8C0_0x39c8c0");
#endif

    switch (ctx->pc) {
        case 0x39c8d8u: goto label_39c8d8;
        default: break;
    }

    ctx->pc = 0x39c8c0u;

    // 0x39c8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c8c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C8C4u;
    {
        const bool branch_taken_0x39c8c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8C4u;
        // 0x39c8c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8c4) {
            ctx->pc = 0x39C8E0u;
            goto label_39c8e0;
        }
    }
    ctx->pc = 0x39C8CCu;
    // 0x39c8cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39c8d0: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39C8D0u;
    SET_GPR_U32(ctx, 31, 0x39C8D8u);
    ctx->pc = 0x39C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C8D0u;
    // 0x39c8d4: 0x2484b928  addiu       $a0, $a0, -0x46D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39C8D0u, 0x39C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C8D8u;
label_39c8d8:
    // 0x39c8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C8D8u;
    {
        const bool branch_taken_0x39c8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8D8u;
        // 0x39c8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8d8) {
            ctx->pc = 0x39C8E4u;
            goto label_39c8e4;
        }
    }
    ctx->pc = 0x39C8E0u;
label_39c8e0:
    // 0x39c8e0: 0x80820072  lb          $v0, 0x72($a0)
    ctx->pc = 0x39c8e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_39c8e4:
    // 0x39c8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x39C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8E8u;
        // 0x39c8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C8F0u;
    // 0x39c8f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c8f4: 0x0  nop
    ctx->pc = 0x39c8f4u;
    // NOP
    // 0x39c8f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c8fc: 0x0  nop
    ctx->pc = 0x39c8fcu;
    // NOP
    // 0x39c900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c904: 0x0  nop
    ctx->pc = 0x39c904u;
    // NOP
    ctx->pc = 0x39c908u;
}
