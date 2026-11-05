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

// Function: sub_00287CA8
// Address: 0x287ca8 - 0x287cf8
void sub_00287CA8_0x287ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287CA8_0x287ca8");
#endif

    ctx->pc = 0x287ca8u;

    // 0x287ca8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x287ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287cac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x287CACu;
    {
        const bool branch_taken_0x287cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287cac) {
            ctx->pc = 0x287CF0u;
            goto label_287cf0;
        }
    }
    ctx->pc = 0x287CB4u;
    // 0x287cb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x287cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x287cb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x287CB8u;
    {
        const bool branch_taken_0x287cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CB8u;
        // 0x287cbc: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cb8) {
            ctx->pc = 0x287CD0u;
            goto label_287cd0;
        }
    }
    ctx->pc = 0x287CC0u;
    // 0x287cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287cc4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x287cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x287cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x287CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CC8u;
        // 0x287ccc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287CD0u;
label_287cd0:
    // 0x287cd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287CD0u;
    {
        const bool branch_taken_0x287cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CD0u;
        // 0x287cd4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cd0) {
            ctx->pc = 0x287CE4u;
            goto label_287ce4;
        }
    }
    ctx->pc = 0x287CD8u;
    // 0x287cd8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x287cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x287cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x287CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CDCu;
        // 0x287ce0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287CE4u;
label_287ce4:
    // 0x287ce4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x287ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x287ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x287CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CE8u;
        // 0x287cec: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287CF0u;
label_287cf0:
    // 0x287cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x287CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CF0u;
        // 0x287cf4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287CF8u;
}
