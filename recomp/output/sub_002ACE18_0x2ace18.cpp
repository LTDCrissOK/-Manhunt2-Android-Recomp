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

// Function: sub_002ACE18
// Address: 0x2ace18 - 0x2ace78
void sub_002ACE18_0x2ace18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACE18_0x2ace18");
#endif

    switch (ctx->pc) {
        case 0x2ace34u: goto label_2ace34;
        case 0x2ace44u: goto label_2ace44;
        case 0x2ace50u: goto label_2ace50;
        case 0x2ace58u: goto label_2ace58;
        case 0x2ace60u: goto label_2ace60;
        default: break;
    }

    ctx->pc = 0x2ace18u;

    // 0x2ace18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ace18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ace1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ace1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ace20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ace20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ace24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ace24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ace28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ace2c: 0xc0ab334  jal         func_2ACCD0
    ctx->pc = 0x2ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE34u);
    ctx->pc = 0x2ACE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE2Cu;
    // 0x2ace30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCD0u, 0x2ACE2Cu, 0x2ACE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE34u;
label_2ace34:
    // 0x2ace34: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x2ace34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ace38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ace38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace3c: 0xc0ab34a  jal         func_2ACD28
    ctx->pc = 0x2ACE3Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE44u);
    ctx->pc = 0x2ACE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE3Cu;
    // 0x2ace40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD28u, 0x2ACE3Cu, 0x2ACE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE44u;
label_2ace44:
    // 0x2ace44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ace44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace48: 0xc0ab3ba  jal         func_2ACEE8
    ctx->pc = 0x2ACE48u;
    SET_GPR_U32(ctx, 31, 0x2ACE50u);
    ctx->pc = 0x2ACE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE48u;
    // 0x2ace4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACEE8u, 0x2ACE48u, 0x2ACE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE50u;
label_2ace50:
    // 0x2ace50: 0xc0ab3ae  jal         func_2ACEB8
    ctx->pc = 0x2ACE50u;
    SET_GPR_U32(ctx, 31, 0x2ACE58u);
    ctx->pc = 0x2ACE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE50u;
    // 0x2ace54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACEB8u, 0x2ACE50u, 0x2ACE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE58u;
label_2ace58:
    // 0x2ace58: 0xc0ab342  jal         func_2ACD08
    ctx->pc = 0x2ACE58u;
    SET_GPR_U32(ctx, 31, 0x2ACE60u);
    ctx->pc = 0x2ACE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE58u;
    // 0x2ace5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD08u, 0x2ACE58u, 0x2ACE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE60u;
label_2ace60:
    // 0x2ace60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ace60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ace64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ace64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ace68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ace68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ace6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE6Cu;
        // 0x2ace70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACE74u;
    // 0x2ace74: 0x0  nop
    ctx->pc = 0x2ace74u;
    // NOP
    ctx->pc = 0x2ace78u;
}
