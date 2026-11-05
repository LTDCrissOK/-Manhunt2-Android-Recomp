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

// Function: sub_00203A80
// Address: 0x203a80 - 0x203af8
void sub_00203A80_0x203a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203A80_0x203a80");
#endif

    switch (ctx->pc) {
        case 0x203aa0u: goto label_203aa0;
        case 0x203ab8u: goto label_203ab8;
        case 0x203aecu: goto label_203aec;
        default: break;
    }

    ctx->pc = 0x203a80u;

    // 0x203a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203a84: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x203a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x203a88: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x203A88u;
    {
        const bool branch_taken_0x203a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A88u;
        // 0x203a8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a88) {
            ctx->pc = 0x203AD8u;
            goto label_203ad8;
        }
    }
    ctx->pc = 0x203A90u;
    // 0x203a90: 0x24861b90  addiu       $a2, $a0, 0x1B90
    ctx->pc = 0x203a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 7056));
    // 0x203a94: 0x10660011  beq         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x203A94u;
    {
        const bool branch_taken_0x203a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x203A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A94u;
        // 0x203a98: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a94) {
            ctx->pc = 0x203ADCu;
            goto label_203adc;
        }
    }
    ctx->pc = 0x203A9Cu;
    // 0x203a9c: 0x24c6ff50  addiu       $a2, $a2, -0xB0
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967120));
label_203aa0:
    // 0x203aa0: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x203aa4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x203AA4u;
    {
        const bool branch_taken_0x203aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0x24c30040  addiu       $v1, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aa4) {
            ctx->pc = 0x203AD0u;
            goto label_203ad0;
        }
    }
    ctx->pc = 0x203AACu;
    // 0x203aac: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AD0u;
            goto label_203ad0;
        }
    }
    ctx->pc = 0x203AB4u;
    // 0x203ab4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_203ab8:
    // 0x203ab8: 0x0  nop
    ctx->pc = 0x203ab8u;
    // NOP
    // 0x203abc: 0x0  nop
    ctx->pc = 0x203abcu;
    // NOP
    // 0x203ac0: 0x0  nop
    ctx->pc = 0x203ac0u;
    // NOP
    // 0x203ac4: 0x0  nop
    ctx->pc = 0x203ac4u;
    // NOP
    // 0x203ac8: 0x54c3fffb  bnel        $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203AC8u;
    {
        const bool branch_taken_0x203ac8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x203ac8) {
            ctx->pc = 0x203ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203AC8u;
            // 0x203acc: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203ab8;
        }
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0x54e6fff3  bnel        $a3, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x203AD0u;
    {
        const bool branch_taken_0x203ad0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x203ad0) {
            ctx->pc = 0x203AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203AD0u;
            // 0x203ad4: 0x24c6ff50  addiu       $a2, $a2, -0xB0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203aa0;
        }
    }
    ctx->pc = 0x203AD8u;
label_203ad8:
    // 0x203ad8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x203ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_203adc:
    // 0x203adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203ADCu;
    {
        const bool branch_taken_0x203adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ADCu;
        // 0x203ae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203adc) {
            ctx->pc = 0x203AF0u;
            goto label_203af0;
        }
    }
    ctx->pc = 0x203AE4u;
    // 0x203ae4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x203AE4u;
    SET_GPR_U32(ctx, 31, 0x203AECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x203AE4u, 0x203AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AECu;
label_203aec:
    // 0x203aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203af0:
    // 0x203af0: 0x3e00008  jr          $ra
    ctx->pc = 0x203AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF0u;
        // 0x203af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203AF8u;
}
