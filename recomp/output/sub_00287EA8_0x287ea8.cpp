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

// Function: sub_00287EA8
// Address: 0x287ea8 - 0x287ee8
void sub_00287EA8_0x287ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287EA8_0x287ea8");
#endif

    ctx->pc = 0x287ea8u;

    // 0x287ea8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287eac: 0x8c43a440  lw          $v1, -0x5BC0($v0)
    ctx->pc = 0x287eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA440u));
    // 0x287eb0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x287EB0u;
    {
        const bool branch_taken_0x287eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EB0u;
        // 0x287eb4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eb0) {
            ctx->pc = 0x287ED4u;
            goto label_287ed4;
        }
    }
    ctx->pc = 0x287EB8u;
    // 0x287eb8: 0x8c622b34  lw          $v0, 0x2B34($v1)
    ctx->pc = 0x287eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11060)));
    // 0x287ebc: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x287ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x287ec0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287EC0u;
    {
        const bool branch_taken_0x287ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EC0u;
        // 0x287ec4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ec0) {
            ctx->pc = 0x287ED4u;
            goto label_287ed4;
        }
    }
    ctx->pc = 0x287EC8u;
    // 0x287ec8: 0x8c43cb34  lw          $v1, -0x34CC($v0)
    ctx->pc = 0x287ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953780)));
    // 0x287ecc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x287ECCu;
    {
        const bool branch_taken_0x287ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ecc) {
            ctx->pc = 0x287EDCu;
            goto label_287edc;
        }
    }
    ctx->pc = 0x287ED4u;
label_287ed4:
    // 0x287ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x287ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287ED4u;
        // 0x287ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287EDCu;
label_287edc:
    // 0x287edc: 0x3e00008  jr          $ra
    ctx->pc = 0x287EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EDCu;
        // 0x287ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287EE4u;
    // 0x287ee4: 0x0  nop
    ctx->pc = 0x287ee4u;
    // NOP
    ctx->pc = 0x287ee8u;
}
