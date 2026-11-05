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

// Function: sub_0020A038
// Address: 0x20a038 - 0x20a090
void sub_0020A038_0x20a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A038_0x20a038");
#endif

    switch (ctx->pc) {
        case 0x20a058u: goto label_20a058;
        default: break;
    }

    ctx->pc = 0x20a038u;

    // 0x20a038: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x20a038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x20a03c: 0x8cc22b7c  lw          $v0, 0x2B7C($a2)
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B7Cu));
    // 0x20a040: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A040u;
    {
        const bool branch_taken_0x20a040 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A040u;
        // 0x20a044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a040) {
            ctx->pc = 0x20A084u;
            goto label_20a084;
        }
    }
    ctx->pc = 0x20A048u;
    // 0x20a048: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x20a048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x20a04c: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20a04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20a050: 0x8ca22b78  lw          $v0, 0x2B78($a1)
    ctx->pc = 0x20a050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B78u));
    // 0x20a054: 0x0  nop
    ctx->pc = 0x20a054u;
    // NOP
label_20a058:
    // 0x20a058: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x20a058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20a05c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a060: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x20a060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x20a064: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20a068: 0x8ca22b78  lw          $v0, 0x2B78($a1)
    ctx->pc = 0x20a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11128)));
    // 0x20a06c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a070: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x20a070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x20a074: 0x8cc22b7c  lw          $v0, 0x2B7C($a2)
    ctx->pc = 0x20a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11132)));
    // 0x20a078: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20a078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20a07c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20A07Cu;
    {
        const bool branch_taken_0x20a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A07Cu;
        // 0x20a080: 0x8ca22b78  lw          $v0, 0x2B78($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a07c) {
            ctx->pc = 0x20A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a058;
        }
    }
    ctx->pc = 0x20A084u;
label_20a084:
    // 0x20a084: 0x3e00008  jr          $ra
    ctx->pc = 0x20A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A08Cu;
    // 0x20a08c: 0x0  nop
    ctx->pc = 0x20a08cu;
    // NOP
    ctx->pc = 0x20a090u;
}
