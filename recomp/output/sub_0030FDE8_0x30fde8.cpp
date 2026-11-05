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

// Function: sub_0030FDE8
// Address: 0x30fde8 - 0x30fe20
void sub_0030FDE8_0x30fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FDE8_0x30fde8");
#endif

    switch (ctx->pc) {
        case 0x30fdf8u: goto label_30fdf8;
        default: break;
    }

    ctx->pc = 0x30fde8u;

    // 0x30fde8: 0x8c86055c  lw          $a2, 0x55C($a0)
    ctx->pc = 0x30fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1372)));
    // 0x30fdec: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x30FDECu;
    {
        const bool branch_taken_0x30fdec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x30FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDECu;
        // 0x30fdf0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdec) {
            ctx->pc = 0x30FE18u;
            goto label_30fe18;
        }
    }
    ctx->pc = 0x30FDF4u;
    // 0x30fdf4: 0x24840534  addiu       $a0, $a0, 0x534
    ctx->pc = 0x30fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1332));
label_30fdf8:
    // 0x30fdf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30fdfc: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FDFCu;
    {
        const bool branch_taken_0x30fdfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDFCu;
        // 0x30fe00: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdfc) {
            ctx->pc = 0x30FE0Cu;
            goto label_30fe0c;
        }
    }
    ctx->pc = 0x30FE04u;
    // 0x30fe04: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE04u;
        // 0x30fe08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE0Cu;
label_30fe0c:
    // 0x30fe0c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x30fe0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30fe10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30FE10u;
    {
        const bool branch_taken_0x30fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE10u;
        // 0x30fe14: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe10) {
            ctx->pc = 0x30FDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fdf8;
        }
    }
    ctx->pc = 0x30FE18u;
label_30fe18:
    // 0x30fe18: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE18u;
        // 0x30fe1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE20u;
}
