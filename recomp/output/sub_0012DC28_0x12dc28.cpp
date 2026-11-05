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

// Function: sub_0012DC28
// Address: 0x12dc28 - 0x12dcb0
void sub_0012DC28_0x12dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DC28_0x12dc28");
#endif

    switch (ctx->pc) {
        case 0x12dc4cu: goto label_12dc4c;
        case 0x12dc5cu: goto label_12dc5c;
        case 0x12dc68u: goto label_12dc68;
        case 0x12dc78u: goto label_12dc78;
        case 0x12dc84u: goto label_12dc84;
        case 0x12dc98u: goto label_12dc98;
        default: break;
    }

    ctx->pc = 0x12dc28u;

    // 0x12dc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dc2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dc30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dc34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12dc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12dc38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dc40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dc44: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DC44u;
    SET_GPR_U32(ctx, 31, 0x12DC4Cu);
    ctx->pc = 0x12DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC44u;
    // 0x12dc48: 0x24050355  addiu       $a1, $zero, 0x355 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 853));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DC44u, 0x12DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC4Cu;
label_12dc4c:
    // 0x12dc4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12dc54: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DC54u;
    SET_GPR_U32(ctx, 31, 0x12DC5Cu);
    ctx->pc = 0x12DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC54u;
    // 0x12dc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DC54u, 0x12DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC5Cu;
label_12dc5c:
    // 0x12dc5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc60: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DC60u;
    SET_GPR_U32(ctx, 31, 0x12DC68u);
    ctx->pc = 0x12DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC60u;
    // 0x12dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DC60u, 0x12DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC68u;
label_12dc68:
    // 0x12dc68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12dc6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc70: 0xc046044  jal         func_118110
    ctx->pc = 0x12DC70u;
    SET_GPR_U32(ctx, 31, 0x12DC78u);
    ctx->pc = 0x12DC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC70u;
    // 0x12dc74: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12DC70u, 0x12DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC78u;
label_12dc78:
    // 0x12dc78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12dc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc7c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12DC7Cu;
    SET_GPR_U32(ctx, 31, 0x12DC84u);
    ctx->pc = 0x12DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC7Cu;
    // 0x12dc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12DC7Cu, 0x12DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC84u;
label_12dc84:
    // 0x12dc84: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12dc88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12dc88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc8c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12dc90: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DC90u;
    SET_GPR_U32(ctx, 31, 0x12DC98u);
    ctx->pc = 0x12DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC90u;
    // 0x12dc94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DC90u, 0x12DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC98u;
label_12dc98:
    // 0x12dc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dc9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12dca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dca8: 0x3e00008  jr          $ra
    ctx->pc = 0x12DCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA8u;
        // 0x12dcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DCB0u;
}
