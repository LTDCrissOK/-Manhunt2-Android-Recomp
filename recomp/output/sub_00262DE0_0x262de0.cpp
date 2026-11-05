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

// Function: sub_00262DE0
// Address: 0x262de0 - 0x262e20
void sub_00262DE0_0x262de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262DE0_0x262de0");
#endif

    ctx->pc = 0x262de0u;

    // 0x262de0: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x262de4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x262de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x262de8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x262DE8u;
    {
        const bool branch_taken_0x262de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DE8u;
        // 0x262dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262de8) {
            ctx->pc = 0x262E14u;
            goto label_262e14;
        }
    }
    ctx->pc = 0x262DF0u;
    // 0x262df0: 0x8c840234  lw          $a0, 0x234($a0)
    ctx->pc = 0x262df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x262df4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262DF4u;
    {
        const bool branch_taken_0x262df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x262df4) {
            ctx->pc = 0x262E14u;
            goto label_262e14;
        }
    }
    ctx->pc = 0x262DFCu;
    // 0x262dfc: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x262dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x262e00: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x262e04: 0x2863045d  slti        $v1, $v1, 0x45D
    ctx->pc = 0x262e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1117) ? 1 : 0);
    // 0x262e08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x262E08u;
    {
        const bool branch_taken_0x262e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E08u;
        // 0x262e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e08) {
            ctx->pc = 0x262E14u;
            goto label_262e14;
        }
    }
    ctx->pc = 0x262E10u;
    // 0x262e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262e14:
    // 0x262e14: 0x3e00008  jr          $ra
    ctx->pc = 0x262E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E1Cu;
    // 0x262e1c: 0x0  nop
    ctx->pc = 0x262e1cu;
    // NOP
    ctx->pc = 0x262e20u;
}
