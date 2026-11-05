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

// Function: sub_001CA498
// Address: 0x1ca498 - 0x1ca4c0
void sub_001CA498_0x1ca498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA498_0x1ca498");
#endif

    ctx->pc = 0x1ca498u;

    // 0x1ca498: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1ca498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ca49c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA49Cu;
    {
        const bool branch_taken_0x1ca49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA49Cu;
        // 0x1ca4a0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca49c) {
            ctx->pc = 0x1CA4B4u;
            goto label_1ca4b4;
        }
    }
    ctx->pc = 0x1CA4A4u;
    // 0x1ca4a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ca4a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ca4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ca4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4ACu;
        // 0x1ca4b0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4B4u;
label_1ca4b4:
    // 0x1ca4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4B4u;
        // 0x1ca4b8: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4BCu;
    // 0x1ca4bc: 0x0  nop
    ctx->pc = 0x1ca4bcu;
    // NOP
    ctx->pc = 0x1ca4c0u;
}
