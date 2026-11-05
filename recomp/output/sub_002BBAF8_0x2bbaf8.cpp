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

// Function: sub_002BBAF8
// Address: 0x2bbaf8 - 0x2bbb78
void sub_002BBAF8_0x2bbaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBAF8_0x2bbaf8");
#endif

    switch (ctx->pc) {
        case 0x2bbb28u: goto label_2bbb28;
        case 0x2bbb38u: goto label_2bbb38;
        case 0x2bbb48u: goto label_2bbb48;
        case 0x2bbb58u: goto label_2bbb58;
        default: break;
    }

    ctx->pc = 0x2bbaf8u;

    // 0x2bbaf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbafc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bbafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bbb00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2bbb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2bbb04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bbb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bbb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbb0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bbb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2bbb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2bbb18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bbb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb20: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2BBB20u;
    SET_GPR_U32(ctx, 31, 0x2BBB28u);
    ctx->pc = 0x2BBB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB20u;
    // 0x2bbb24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2BBB20u, 0x2BBB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB28u;
label_2bbb28:
    // 0x2bbb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb2c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2bbb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2bbb30: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2BBB30u;
    SET_GPR_U32(ctx, 31, 0x2BBB38u);
    ctx->pc = 0x2BBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB30u;
    // 0x2bbb34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2BBB30u, 0x2BBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB38u;
label_2bbb38:
    // 0x2bbb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb3c: 0x26250042  addiu       $a1, $s1, 0x42
    ctx->pc = 0x2bbb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
    // 0x2bbb40: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2BBB40u;
    SET_GPR_U32(ctx, 31, 0x2BBB48u);
    ctx->pc = 0x2BBB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB40u;
    // 0x2bbb44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2BBB40u, 0x2BBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB48u;
label_2bbb48:
    // 0x2bbb48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bbb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bbb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb50: 0xc0b0c1a  jal         func_2C3068
    ctx->pc = 0x2BBB50u;
    SET_GPR_U32(ctx, 31, 0x2BBB58u);
    ctx->pc = 0x2BBB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB50u;
    // 0x2bbb54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3068u, 0x2BBB50u, 0x2BBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB58u;
label_2bbb58:
    // 0x2bbb58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bbb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbb60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2bbb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bbb64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbb68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2bbb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2bbb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB6Cu;
        // 0x2bbb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBB74u;
    // 0x2bbb74: 0x0  nop
    ctx->pc = 0x2bbb74u;
    // NOP
    ctx->pc = 0x2bbb78u;
}
