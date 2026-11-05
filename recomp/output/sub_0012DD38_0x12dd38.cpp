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

// Function: sub_0012DD38
// Address: 0x12dd38 - 0x12ddd8
void sub_0012DD38_0x12dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD38_0x12dd38");
#endif

    switch (ctx->pc) {
        case 0x12dd5cu: goto label_12dd5c;
        case 0x12dd6cu: goto label_12dd6c;
        case 0x12dd78u: goto label_12dd78;
        case 0x12dd88u: goto label_12dd88;
        case 0x12dd94u: goto label_12dd94;
        case 0x12dd9cu: goto label_12dd9c;
        case 0x12dda8u: goto label_12dda8;
        case 0x12ddbcu: goto label_12ddbc;
        default: break;
    }

    ctx->pc = 0x12dd38u;

    // 0x12dd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dd3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dd40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dd44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12dd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12dd48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dd50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dd54: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DD54u;
    SET_GPR_U32(ctx, 31, 0x12DD5Cu);
    ctx->pc = 0x12DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD54u;
    // 0x12dd58: 0x24050377  addiu       $a1, $zero, 0x377 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 887));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DD54u, 0x12DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD5Cu;
label_12dd5c:
    // 0x12dd5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd60: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12dd64: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DD64u;
    SET_GPR_U32(ctx, 31, 0x12DD6Cu);
    ctx->pc = 0x12DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD64u;
    // 0x12dd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DD64u, 0x12DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD6Cu;
label_12dd6c:
    // 0x12dd6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12dd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd70: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DD70u;
    SET_GPR_U32(ctx, 31, 0x12DD78u);
    ctx->pc = 0x12DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD70u;
    // 0x12dd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DD70u, 0x12DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD78u;
label_12dd78:
    // 0x12dd78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x12dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12dd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd80: 0xc046044  jal         func_118110
    ctx->pc = 0x12DD80u;
    SET_GPR_U32(ctx, 31, 0x12DD88u);
    ctx->pc = 0x12DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD80u;
    // 0x12dd84: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12DD80u, 0x12DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD88u;
label_12dd88:
    // 0x12dd88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12dd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd8c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12DD8Cu;
    SET_GPR_U32(ctx, 31, 0x12DD94u);
    ctx->pc = 0x12DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD8Cu;
    // 0x12dd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12DD8Cu, 0x12DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD94u;
label_12dd94:
    // 0x12dd94: 0xc04611e  jal         func_118478
    ctx->pc = 0x12DD94u;
    SET_GPR_U32(ctx, 31, 0x12DD9Cu);
    ctx->pc = 0x12DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD94u;
    // 0x12dd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x12DD94u, 0x12DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD9Cu;
label_12dd9c:
    // 0x12dd9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12dd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dda0: 0xc046104  jal         func_118410
    ctx->pc = 0x12DDA0u;
    SET_GPR_U32(ctx, 31, 0x12DDA8u);
    ctx->pc = 0x12DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDA0u;
    // 0x12dda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x12DDA0u, 0x12DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDA8u;
label_12dda8:
    // 0x12dda8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12ddac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12ddacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddb0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12ddb4: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DDB4u;
    SET_GPR_U32(ctx, 31, 0x12DDBCu);
    ctx->pc = 0x12DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDB4u;
    // 0x12ddb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DDB4u, 0x12DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDBCu;
label_12ddbc:
    // 0x12ddbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ddbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ddc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ddc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ddc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12ddc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ddc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12ddc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ddcc: 0x3e00008  jr          $ra
    ctx->pc = 0x12DDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDCCu;
        // 0x12ddd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DDD4u;
    // 0x12ddd4: 0x0  nop
    ctx->pc = 0x12ddd4u;
    // NOP
    ctx->pc = 0x12ddd8u;
}
