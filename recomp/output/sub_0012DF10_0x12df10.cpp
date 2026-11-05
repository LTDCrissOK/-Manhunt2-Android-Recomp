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

// Function: sub_0012DF10
// Address: 0x12df10 - 0x12dfb0
void sub_0012DF10_0x12df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DF10_0x12df10");
#endif

    switch (ctx->pc) {
        case 0x12df34u: goto label_12df34;
        case 0x12df44u: goto label_12df44;
        case 0x12df50u: goto label_12df50;
        case 0x12df60u: goto label_12df60;
        case 0x12df6cu: goto label_12df6c;
        case 0x12df74u: goto label_12df74;
        case 0x12df80u: goto label_12df80;
        case 0x12df94u: goto label_12df94;
        default: break;
    }

    ctx->pc = 0x12df10u;

    // 0x12df10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12df14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12df18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12df1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12df1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12df20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12df28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12df2c: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DF2Cu;
    SET_GPR_U32(ctx, 31, 0x12DF34u);
    ctx->pc = 0x12DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF2Cu;
    // 0x12df30: 0x240503ad  addiu       $a1, $zero, 0x3AD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 941));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DF2Cu, 0x12DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF34u;
label_12df34:
    // 0x12df34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12df34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12df3c: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DF3Cu;
    SET_GPR_U32(ctx, 31, 0x12DF44u);
    ctx->pc = 0x12DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF3Cu;
    // 0x12df40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DF3Cu, 0x12DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF44u;
label_12df44:
    // 0x12df44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12df44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df48: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DF48u;
    SET_GPR_U32(ctx, 31, 0x12DF50u);
    ctx->pc = 0x12DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF48u;
    // 0x12df4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DF48u, 0x12DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF50u;
label_12df50:
    // 0x12df50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12df54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df58: 0xc046044  jal         func_118110
    ctx->pc = 0x12DF58u;
    SET_GPR_U32(ctx, 31, 0x12DF60u);
    ctx->pc = 0x12DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF58u;
    // 0x12df5c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12DF58u, 0x12DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF60u;
label_12df60:
    // 0x12df60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12df60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df64: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12DF64u;
    SET_GPR_U32(ctx, 31, 0x12DF6Cu);
    ctx->pc = 0x12DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF64u;
    // 0x12df68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12DF64u, 0x12DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF6Cu;
label_12df6c:
    // 0x12df6c: 0xc046272  jal         func_1189C8
    ctx->pc = 0x12DF6Cu;
    SET_GPR_U32(ctx, 31, 0x12DF74u);
    ctx->pc = 0x12DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF6Cu;
    // 0x12df70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x12DF6Cu, 0x12DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF74u;
label_12df74:
    // 0x12df74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12df74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df78: 0xc046256  jal         func_118958
    ctx->pc = 0x12DF78u;
    SET_GPR_U32(ctx, 31, 0x12DF80u);
    ctx->pc = 0x12DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF78u;
    // 0x12df7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12DF78u, 0x12DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF80u;
label_12df80:
    // 0x12df80: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12df80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12df84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12df84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df88: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12df8c: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DF8Cu;
    SET_GPR_U32(ctx, 31, 0x12DF94u);
    ctx->pc = 0x12DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF8Cu;
    // 0x12df90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DF8Cu, 0x12DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF94u;
label_12df94:
    // 0x12df94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12df94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12df98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12df98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12df9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12df9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dfa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12dfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x12DFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFA4u;
        // 0x12dfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DFACu;
    // 0x12dfac: 0x0  nop
    ctx->pc = 0x12dfacu;
    // NOP
    ctx->pc = 0x12dfb0u;
}
