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

// Function: sub_003CCEB0
// Address: 0x3cceb0 - 0x3ccf00
void sub_003CCEB0_0x3cceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCEB0_0x3cceb0");
#endif

    switch (ctx->pc) {
        case 0x3ccec0u: goto label_3ccec0;
        case 0x3cced0u: goto label_3cced0;
        default: break;
    }

    ctx->pc = 0x3cceb0u;

    // 0x3cceb0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x3cceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3cceb4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3CCEB4u;
    {
        const bool branch_taken_0x3cceb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cceb4) {
            ctx->pc = 0x3CCEF4u;
            goto label_3ccef4;
        }
    }
    ctx->pc = 0x3CCEBCu;
    // 0x3ccebc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ccebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ccec0:
    // 0x3ccec0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3CCEC0u;
    {
        const bool branch_taken_0x3ccec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccec0) {
            ctx->pc = 0x3CCEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCEC0u;
            // 0x3ccec4: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCEECu;
            goto label_3cceec;
        }
    }
    ctx->pc = 0x3CCEC8u;
    // 0x3ccec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ccec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ccecc: 0x0  nop
    ctx->pc = 0x3cceccu;
    // NOP
label_3cced0:
    // 0x3cced0: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CCED0u;
    {
        const bool branch_taken_0x3cced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3cced0) {
            ctx->pc = 0x3CCED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCED0u;
            // 0x3cced4: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCEE0u;
            goto label_3ccee0;
        }
    }
    ctx->pc = 0x3CCED8u;
    // 0x3cced8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCED8u;
        // 0x3ccedc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCEE0u;
label_3ccee0:
    // 0x3ccee0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3CCEE0u;
    {
        const bool branch_taken_0x3ccee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccee0) {
            ctx->pc = 0x3CCEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCEE0u;
            // 0x3ccee4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cced0;
        }
    }
    ctx->pc = 0x3CCEE8u;
    // 0x3ccee8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3ccee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3cceec:
    // 0x3cceec: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3CCEECu;
    {
        const bool branch_taken_0x3cceec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cceec) {
            ctx->pc = 0x3CCEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCEECu;
            // 0x3ccef0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ccec0;
        }
    }
    ctx->pc = 0x3CCEF4u;
label_3ccef4:
    // 0x3ccef4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCEF4u;
        // 0x3ccef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCEFCu;
    // 0x3ccefc: 0x0  nop
    ctx->pc = 0x3ccefcu;
    // NOP
    ctx->pc = 0x3ccf00u;
}
