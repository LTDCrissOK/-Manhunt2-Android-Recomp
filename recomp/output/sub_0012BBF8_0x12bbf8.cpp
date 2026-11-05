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

// Function: sub_0012BBF8
// Address: 0x12bbf8 - 0x12bc58
void sub_0012BBF8_0x12bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BBF8_0x12bbf8");
#endif

    switch (ctx->pc) {
        case 0x12bc14u: goto label_12bc14;
        case 0x12bc44u: goto label_12bc44;
        default: break;
    }

    ctx->pc = 0x12bbf8u;

    // 0x12bbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bbfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bc00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bc04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bc0c: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BC0Cu;
    SET_GPR_U32(ctx, 31, 0x12BC14u);
    ctx->pc = 0x12BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC0Cu;
    // 0x12bc10: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BC0Cu, 0x12BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC14u;
label_12bc14:
    // 0x12bc14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc18: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bc1c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BC1Cu;
    {
        const bool branch_taken_0x12bc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC1Cu;
        // 0x12bc20: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc1c) {
            ctx->pc = 0x12BC44u;
            goto label_12bc44;
        }
    }
    ctx->pc = 0x12BC24u;
    // 0x12bc24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bc28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bc2c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12bc30: 0x90820085  lbu         $v0, 0x85($a0)
    ctx->pc = 0x12bc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
    // 0x12bc34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bc38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12bc3c: 0xc05f5a0  jal         func_17D680
    ctx->pc = 0x12BC3Cu;
    SET_GPR_U32(ctx, 31, 0x12BC44u);
    ctx->pc = 0x12BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC3Cu;
    // 0x12bc40: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D680u, 0x12BC3Cu, 0x12BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC44u;
label_12bc44:
    // 0x12bc44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bc4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bc50: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC50u;
        // 0x12bc54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BC58u;
}
