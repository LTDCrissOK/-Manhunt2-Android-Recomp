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

// Function: sub_002CBEE8
// Address: 0x2cbee8 - 0x2cbf50
void sub_002CBEE8_0x2cbee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBEE8_0x2cbee8");
#endif

    switch (ctx->pc) {
        case 0x2cbf00u: goto label_2cbf00;
        case 0x2cbf08u: goto label_2cbf08;
        default: break;
    }

    ctx->pc = 0x2cbee8u;

    // 0x2cbee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbeec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cbeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cbef0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cbef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cbef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cbefc: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2cbefcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2cbf00:
    // 0x2cbf00: 0xc0eeb1a  jal         func_3BAC68
    ctx->pc = 0x2CBF00u;
    SET_GPR_U32(ctx, 31, 0x2CBF08u);
    ctx->pc = 0x2CBF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF00u;
    // 0x2cbf04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAC68u, 0x2CBF00u, 0x2CBF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF08u;
label_2cbf08:
    // 0x2cbf08: 0x0  nop
    ctx->pc = 0x2cbf08u;
    // NOP
    // 0x2cbf0c: 0x0  nop
    ctx->pc = 0x2cbf0cu;
    // NOP
    // 0x2cbf10: 0x1050fffb  beq         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CBF10u;
    {
        const bool branch_taken_0x2cbf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF10u;
        // 0x2cbf14: 0x8e22b4a8  lw          $v0, -0x4B58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf10) {
            ctx->pc = 0x2CBF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbf00;
        }
    }
    ctx->pc = 0x2CBF18u;
    // 0x2cbf18: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cbf1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbf24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbf28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbf2c: 0xac4030a8  sw          $zero, 0x30A8($v0)
    ctx->pc = 0x2cbf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12456), GPR_U32(ctx, 0));
    // 0x2cbf30: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cbf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cbf34: 0xac640800  sw          $a0, 0x800($v1)
    ctx->pc = 0x2cbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 4));
    // 0x2cbf38: 0x8e22b4a8  lw          $v0, -0x4B58($s1)
    ctx->pc = 0x2cbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cbf3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cbf3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cbf40: 0xac400804  sw          $zero, 0x804($v0)
    ctx->pc = 0x2cbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2052), GPR_U32(ctx, 0));
    // 0x2cbf44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF44u;
        // 0x2cbf48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF4Cu;
    // 0x2cbf4c: 0x0  nop
    ctx->pc = 0x2cbf4cu;
    // NOP
    ctx->pc = 0x2cbf50u;
}
