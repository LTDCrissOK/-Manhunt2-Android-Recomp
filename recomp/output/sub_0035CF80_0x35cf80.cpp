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

// Function: sub_0035CF80
// Address: 0x35cf80 - 0x35cfd0
void sub_0035CF80_0x35cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CF80_0x35cf80");
#endif

    switch (ctx->pc) {
        case 0x35cfa0u: goto label_35cfa0;
        default: break;
    }

    ctx->pc = 0x35cf80u;

    // 0x35cf80: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x35cf80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35cf84: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x35cf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x35cf88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35CF88u;
    {
        const bool branch_taken_0x35cf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF88u;
        // 0x35cf8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf88) {
            ctx->pc = 0x35CF98u;
            goto label_35cf98;
        }
    }
    ctx->pc = 0x35CF90u;
    // 0x35cf90: 0x3e00008  jr          $ra
    ctx->pc = 0x35CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF90u;
        // 0x35cf94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CF98u;
label_35cf98:
    // 0x35cf98: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x35cf98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35cf9c: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x35cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_35cfa0:
    // 0x35cfa0: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x35cfa0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35cfa4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x35cfa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35cfa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35cfac: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35CFACu;
    {
        const bool branch_taken_0x35cfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFACu;
        // 0x35cfb0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cfac) {
            ctx->pc = 0x35CFC8u;
            goto label_35cfc8;
        }
    }
    ctx->pc = 0x35CFB4u;
    // 0x35cfb4: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x35cfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x35cfb8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35CFB8u;
    {
        const bool branch_taken_0x35cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFB8u;
        // 0x35cfbc: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cfb8) {
            ctx->pc = 0x35CFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cfa0;
        }
    }
    ctx->pc = 0x35CFC0u;
    // 0x35cfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x35CFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFC0u;
        // 0x35cfc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CFC8u;
label_35cfc8:
    // 0x35cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35CFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFC8u;
        // 0x35cfcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CFD0u;
}
