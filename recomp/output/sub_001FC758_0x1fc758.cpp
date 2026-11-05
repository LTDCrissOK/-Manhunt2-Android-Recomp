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

// Function: sub_001FC758
// Address: 0x1fc758 - 0x1fc7e8
void sub_001FC758_0x1fc758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC758_0x1fc758");
#endif

    switch (ctx->pc) {
        case 0x1fc79cu: goto label_1fc79c;
        case 0x1fc7b8u: goto label_1fc7b8;
        default: break;
    }

    ctx->pc = 0x1fc758u;

    // 0x1fc758: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc75c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC75Cu;
    {
        const bool branch_taken_0x1fc75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC75Cu;
        // 0x1fc760: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc75c) {
            ctx->pc = 0x1FC794u;
            goto label_1fc794;
        }
    }
    ctx->pc = 0x1FC764u;
    // 0x1fc764: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fc764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fc768: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x1fc76c: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC76Cu;
    {
        const bool branch_taken_0x1fc76c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fc76c) {
            ctx->pc = 0x1FC794u;
            goto label_1fc794;
        }
    }
    ctx->pc = 0x1FC774u;
    // 0x1fc774: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC774u;
    {
        const bool branch_taken_0x1fc774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc774) {
            ctx->pc = 0x1FC794u;
            goto label_1fc794;
        }
    }
    ctx->pc = 0x1FC77Cu;
    // 0x1fc77c: 0x90430371  lbu         $v1, 0x371($v0)
    ctx->pc = 0x1fc77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 881)));
    // 0x1fc780: 0x90420370  lbu         $v0, 0x370($v0)
    ctx->pc = 0x1fc780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x1fc784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc788: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1fc788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc78c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC78Cu;
    {
        const bool branch_taken_0x1fc78c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc78c) {
            ctx->pc = 0x1FC7A4u;
            goto label_1fc7a4;
        }
    }
    ctx->pc = 0x1FC794u;
label_1fc794:
    // 0x1fc794: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC794u;
        // 0x1fc798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC79Cu;
label_1fc79c:
    // 0x1fc79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC79Cu;
        // 0x1fc7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC7A4u;
label_1fc7a4:
    // 0x1fc7a4: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC7A4u;
    {
        const bool branch_taken_0x1fc7a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7A4u;
        // 0x1fc7a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7a4) {
            ctx->pc = 0x1FC7DCu;
            goto label_1fc7dc;
        }
    }
    ctx->pc = 0x1FC7ACu;
    // 0x1fc7ac: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1fc7acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc7b0: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1fc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1fc7b4: 0x0  nop
    ctx->pc = 0x1fc7b4u;
    // NOP
label_1fc7b8:
    // 0x1fc7b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fc7bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fc7c0: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x1fc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1fc7c4: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FC7C4u;
    {
        const bool branch_taken_0x1fc7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7C4u;
        // 0x1fc7c8: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7c4) {
            ctx->pc = 0x1FC79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc79c;
        }
    }
    ctx->pc = 0x1FC7CCu;
    // 0x1fc7cc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1fc7ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc7d0: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x1fc7d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1fc7d4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FC7D4u;
    {
        const bool branch_taken_0x1fc7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7D4u;
        // 0x1fc7d8: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7d4) {
            ctx->pc = 0x1FC7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc7b8;
        }
    }
    ctx->pc = 0x1FC7DCu;
label_1fc7dc:
    // 0x1fc7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7DCu;
        // 0x1fc7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC7E4u;
    // 0x1fc7e4: 0x0  nop
    ctx->pc = 0x1fc7e4u;
    // NOP
    ctx->pc = 0x1fc7e8u;
}
