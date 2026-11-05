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

// Function: sub_002079D0
// Address: 0x2079d0 - 0x207a10
void sub_002079D0_0x2079d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002079D0_0x2079d0");
#endif

    switch (ctx->pc) {
        case 0x2079e0u: goto label_2079e0;
        default: break;
    }

    ctx->pc = 0x2079d0u;

    // 0x2079d0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2079d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2079d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2079d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2079dc: 0x0  nop
    ctx->pc = 0x2079dcu;
    // NOP
label_2079e0:
    // 0x2079e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2079e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2079e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2079E4u;
    {
        const bool branch_taken_0x2079e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2079e4) {
            ctx->pc = 0x2079E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2079E4u;
            // 0x2079e8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2079F8u;
            goto label_2079f8;
        }
    }
    ctx->pc = 0x2079ECu;
    // 0x2079ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2079ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2079f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2079F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2079F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079F0u;
        // 0x2079f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2079F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2079F8u;
label_2079f8:
    // 0x2079f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2079f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2079fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2079FCu;
    {
        const bool branch_taken_0x2079fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079FCu;
        // 0x207a00: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079fc) {
            ctx->pc = 0x2079E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2079e0;
        }
    }
    ctx->pc = 0x207A04u;
    // 0x207a04: 0x3e00008  jr          $ra
    ctx->pc = 0x207A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A04u;
        // 0x207a08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A0Cu;
    // 0x207a0c: 0x0  nop
    ctx->pc = 0x207a0cu;
    // NOP
    ctx->pc = 0x207a10u;
}
