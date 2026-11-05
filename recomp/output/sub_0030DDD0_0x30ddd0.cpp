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

// Function: sub_0030DDD0
// Address: 0x30ddd0 - 0x30de20
void sub_0030DDD0_0x30ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DDD0_0x30ddd0");
#endif

    switch (ctx->pc) {
        case 0x30ddf0u: goto label_30ddf0;
        default: break;
    }

    ctx->pc = 0x30ddd0u;

    // 0x30ddd0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x30ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30ddd4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30ddd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30dddc: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30DDDCu;
    {
        const bool branch_taken_0x30dddc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDDCu;
        // 0x30dde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dddc) {
            ctx->pc = 0x30DE18u;
            goto label_30de18;
        }
    }
    ctx->pc = 0x30DDE4u;
    // 0x30dde4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x30dde4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x30dde8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30dde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ddec: 0x0  nop
    ctx->pc = 0x30ddecu;
    // NOP
label_30ddf0:
    // 0x30ddf0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x30ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30ddf4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30ddf8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x30ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30ddfc: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x30ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x30de00: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x30de00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30de04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30de04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30de08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30de0c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x30de0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30de10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30DE10u;
    {
        const bool branch_taken_0x30de10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE10u;
        // 0x30de14: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de10) {
            ctx->pc = 0x30DDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ddf0;
        }
    }
    ctx->pc = 0x30DE18u;
label_30de18:
    // 0x30de18: 0x3e00008  jr          $ra
    ctx->pc = 0x30DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DE20u;
}
