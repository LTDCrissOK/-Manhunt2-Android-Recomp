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

// Function: sub_00126AA8
// Address: 0x126aa8 - 0x126af8
void sub_00126AA8_0x126aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126AA8_0x126aa8");
#endif

    switch (ctx->pc) {
        case 0x126ac8u: goto label_126ac8;
        case 0x126ad8u: goto label_126ad8;
        default: break;
    }

    ctx->pc = 0x126aa8u;

    // 0x126aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126ab4: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x126ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ac0: 0x2605fffa  addiu       $a1, $s0, -0x6
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x126ac4: 0x0  nop
    ctx->pc = 0x126ac4u;
    // NOP
label_126ac8:
    // 0x126ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126acc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x126accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126ad0: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x126AD0u;
    SET_GPR_U32(ctx, 31, 0x126AD8u);
    ctx->pc = 0x126AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AD0u;
    // 0x126ad4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x126AD0u, 0x126AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AD8u;
label_126ad8:
    // 0x126ad8: 0x2a020036  slti        $v0, $s0, 0x36
    ctx->pc = 0x126ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)54) ? 1 : 0);
    // 0x126adc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126ADCu;
    {
        const bool branch_taken_0x126adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ADCu;
        // 0x126ae0: 0x2605fffa  addiu       $a1, $s0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126adc) {
            ctx->pc = 0x126AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126ac8;
        }
    }
    ctx->pc = 0x126AE4u;
    // 0x126ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126af0: 0x3e00008  jr          $ra
    ctx->pc = 0x126AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF0u;
        // 0x126af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126AF8u;
}
