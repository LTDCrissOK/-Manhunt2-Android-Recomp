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

// Function: sub_002BB060
// Address: 0x2bb060 - 0x2bb0b8
void sub_002BB060_0x2bb060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB060_0x2bb060");
#endif

    switch (ctx->pc) {
        case 0x2bb070u: goto label_2bb070;
        default: break;
    }

    ctx->pc = 0x2bb060u;

    // 0x2bb060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB064u;
    {
        const bool branch_taken_0x2bb064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB064u;
        // 0x2bb068: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb064) {
            ctx->pc = 0x2BB078u;
            goto label_2bb078;
        }
    }
    ctx->pc = 0x2BB06Cu;
    // 0x2bb06c: 0x0  nop
    ctx->pc = 0x2bb06cu;
    // NOP
label_2bb070:
    // 0x2bb070: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2bb070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2bb074: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2bb074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2bb078:
    // 0x2bb078: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2bb078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bb07c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB07Cu;
    {
        const bool branch_taken_0x2bb07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb07c) {
            ctx->pc = 0x2BB0ACu;
            goto label_2bb0ac;
        }
    }
    ctx->pc = 0x2BB084u;
    // 0x2bb084: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2bb084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb088: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb08c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB08Cu;
    {
        const bool branch_taken_0x2bb08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb08c) {
            ctx->pc = 0x2BB0A4u;
            goto label_2bb0a4;
        }
    }
    ctx->pc = 0x2BB094u;
    // 0x2bb094: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2bb094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB09Cu;
        // 0x2bb0a0: 0x103100b  movn        $v0, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB0A4u;
label_2bb0a4:
    // 0x2bb0a4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2BB0A4u;
    {
        const bool branch_taken_0x2bb0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A4u;
        // 0x2bb0a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0a4) {
            ctx->pc = 0x2BB070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb070;
        }
    }
    ctx->pc = 0x2BB0ACu;
label_2bb0ac:
    // 0x2bb0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0ACu;
        // 0x2bb0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB0B4u;
    // 0x2bb0b4: 0x0  nop
    ctx->pc = 0x2bb0b4u;
    // NOP
    ctx->pc = 0x2bb0b8u;
}
