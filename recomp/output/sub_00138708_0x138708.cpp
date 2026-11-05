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

// Function: sub_00138708
// Address: 0x138708 - 0x138768
void sub_00138708_0x138708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138708_0x138708");
#endif

    switch (ctx->pc) {
        case 0x138718u: goto label_138718;
        default: break;
    }

    ctx->pc = 0x138708u;

    // 0x138708: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x138708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13870c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13870cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138710: 0x90e8046c  lbu         $t0, 0x46C($a3)
    ctx->pc = 0x138710u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1132)));
    // 0x138714: 0x24e60044  addiu       $a2, $a3, 0x44
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
label_138718:
    // 0x138718: 0x10a8000c  beq         $a1, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x138718u;
    {
        const bool branch_taken_0x138718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x13871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138718u;
        // 0x13871c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138718) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x138720u;
    // 0x138720: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x138720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x138724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138728: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x138728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13872c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138730: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138730u;
    {
        const bool branch_taken_0x138730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138730u;
        // 0x138734: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138730) {
            ctx->pc = 0x138750u;
            goto label_138750;
        }
    }
    ctx->pc = 0x138738u;
    // 0x138738: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13873c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13873Cu;
    {
        const bool branch_taken_0x13873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13873Cu;
        // 0x138740: 0x28a20010  slti        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13873c) {
            ctx->pc = 0x138754u;
            goto label_138754;
        }
    }
    ctx->pc = 0x138744u;
    // 0x138744: 0x3e00008  jr          $ra
    ctx->pc = 0x138744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138744u;
        // 0x138748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13874Cu;
label_13874c:
    // 0x13874c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_138750:
    // 0x138750: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x138750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_138754:
    // 0x138754: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x138754u;
    {
        const bool branch_taken_0x138754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138754u;
        // 0x138758: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138754) {
            ctx->pc = 0x138718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138718;
        }
    }
    ctx->pc = 0x13875Cu;
    // 0x13875c: 0x3e00008  jr          $ra
    ctx->pc = 0x13875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13875Cu;
        // 0x138760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13875Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138764u;
    // 0x138764: 0x0  nop
    ctx->pc = 0x138764u;
    // NOP
    ctx->pc = 0x138768u;
}
