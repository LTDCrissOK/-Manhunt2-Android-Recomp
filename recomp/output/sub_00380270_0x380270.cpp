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

// Function: sub_00380270
// Address: 0x380270 - 0x3802a8
void sub_00380270_0x380270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380270_0x380270");
#endif

    switch (ctx->pc) {
        case 0x380280u: goto label_380280;
        case 0x380290u: goto label_380290;
        default: break;
    }

    ctx->pc = 0x380270u;

    // 0x380270: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x380270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380274: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x380274u;
    {
        const bool branch_taken_0x380274 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x380278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380274u;
        // 0x380278: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380274) {
            ctx->pc = 0x3802A0u;
            goto label_3802a0;
        }
    }
    ctx->pc = 0x38027Cu;
    // 0x38027c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x38027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_380280:
    // 0x380280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x380280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x380284: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x380284u;
    {
        const bool branch_taken_0x380284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x380288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380284u;
        // 0x380288: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380284) {
            ctx->pc = 0x380294u;
            goto label_380294;
        }
    }
    ctx->pc = 0x38028Cu;
    // 0x38028c: 0x3e00008  jr          $ra
label_380290:
    if (ctx->pc == 0x380290u) {
        ctx->pc = 0x380290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38028Cu;
        // 0x380290: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380294u;
        goto label_380294;
    }
    ctx->pc = 0x38028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38028Cu;
        // 0x380290: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380294u;
label_380294:
    // 0x380294: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x380294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x380298: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x380298u;
    {
        const bool branch_taken_0x380298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380298u;
        // 0x38029c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380298) {
            ctx->pc = 0x380280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380280;
        }
    }
    ctx->pc = 0x3802A0u;
label_3802a0:
    // 0x3802a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3802A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3802A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802A0u;
        // 0x3802a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3802A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3802A8u;
}
