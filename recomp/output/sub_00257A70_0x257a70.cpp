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

// Function: sub_00257A70
// Address: 0x257a70 - 0x257ae8
void sub_00257A70_0x257a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257A70_0x257a70");
#endif

    switch (ctx->pc) {
        case 0x257a90u: goto label_257a90;
        case 0x257aa0u: goto label_257aa0;
        case 0x257ab0u: goto label_257ab0;
        case 0x257ac0u: goto label_257ac0;
        default: break;
    }

    ctx->pc = 0x257a70u;

    // 0x257a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x257a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x257a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x257a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257a84: 0x8c900334  lw          $s0, 0x334($a0)
    ctx->pc = 0x257a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x257a88: 0xc0f7d10  jal         func_3DF440
    ctx->pc = 0x257A88u;
    SET_GPR_U32(ctx, 31, 0x257A90u);
    ctx->pc = 0x257A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A88u;
    // 0x257a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x257A88u, 0x257A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A90u;
label_257a90:
    // 0x257a90: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x257A90u;
    {
        const bool branch_taken_0x257a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257a90) {
            ctx->pc = 0x257A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257A90u;
            // 0x257a94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257ACCu;
            goto label_257acc;
        }
    }
    ctx->pc = 0x257A98u;
    // 0x257a98: 0xc0f7d1a  jal         func_3DF468
    ctx->pc = 0x257A98u;
    SET_GPR_U32(ctx, 31, 0x257AA0u);
    ctx->pc = 0x257A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A98u;
    // 0x257a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x257A98u, 0x257AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AA0u;
label_257aa0:
    // 0x257aa0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x257AA0u;
    {
        const bool branch_taken_0x257aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257aa0) {
            ctx->pc = 0x257AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257AA0u;
            // 0x257aa4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257ACCu;
            goto label_257acc;
        }
    }
    ctx->pc = 0x257AA8u;
    // 0x257aa8: 0xc0f7d24  jal         func_3DF490
    ctx->pc = 0x257AA8u;
    SET_GPR_U32(ctx, 31, 0x257AB0u);
    ctx->pc = 0x257AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257AA8u;
    // 0x257aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x257AA8u, 0x257AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AB0u;
label_257ab0:
    // 0x257ab0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x257AB0u;
    {
        const bool branch_taken_0x257ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ab0) {
            ctx->pc = 0x257AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257AB0u;
            // 0x257ab4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257ACCu;
            goto label_257acc;
        }
    }
    ctx->pc = 0x257AB8u;
    // 0x257ab8: 0xc0f7d32  jal         func_3DF4C8
    ctx->pc = 0x257AB8u;
    SET_GPR_U32(ctx, 31, 0x257AC0u);
    ctx->pc = 0x257ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257AB8u;
    // 0x257abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x257AB8u, 0x257AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AC0u;
label_257ac0:
    // 0x257ac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257AC0u;
    {
        const bool branch_taken_0x257ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AC0u;
        // 0x257ac4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ac0) {
            ctx->pc = 0x257AD0u;
            goto label_257ad0;
        }
    }
    ctx->pc = 0x257AC8u;
    // 0x257ac8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x257ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257acc:
    // 0x257acc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257ad0:
    // 0x257ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x257ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257adc: 0x3e00008  jr          $ra
    ctx->pc = 0x257ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257ADCu;
        // 0x257ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257AE4u;
    // 0x257ae4: 0x0  nop
    ctx->pc = 0x257ae4u;
    // NOP
    ctx->pc = 0x257ae8u;
}
