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

// Function: sub_0012DA18
// Address: 0x12da18 - 0x12da88
void sub_0012DA18_0x12da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DA18_0x12da18");
#endif

    switch (ctx->pc) {
        case 0x12da3cu: goto label_12da3c;
        case 0x12da4cu: goto label_12da4c;
        case 0x12da58u: goto label_12da58;
        case 0x12da70u: goto label_12da70;
        default: break;
    }

    ctx->pc = 0x12da18u;

    // 0x12da18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12da1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12da20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12da24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12da24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12da28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12da30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12da34: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DA34u;
    SET_GPR_U32(ctx, 31, 0x12DA3Cu);
    ctx->pc = 0x12DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA34u;
    // 0x12da38: 0x2405030c  addiu       $a1, $zero, 0x30C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DA34u, 0x12DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA3Cu;
label_12da3c:
    // 0x12da3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12da3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da44: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DA44u;
    SET_GPR_U32(ctx, 31, 0x12DA4Cu);
    ctx->pc = 0x12DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA44u;
    // 0x12da48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DA44u, 0x12DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA4Cu;
label_12da4c:
    // 0x12da4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da50: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DA50u;
    SET_GPR_U32(ctx, 31, 0x12DA58u);
    ctx->pc = 0x12DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA50u;
    // 0x12da54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DA50u, 0x12DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA58u;
label_12da58:
    // 0x12da58: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x12da58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x12da5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12da60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da64: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12da68: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DA68u;
    SET_GPR_U32(ctx, 31, 0x12DA70u);
    ctx->pc = 0x12DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA68u;
    // 0x12da6c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DA68u, 0x12DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA70u;
label_12da70:
    // 0x12da70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12da70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12da74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12da74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12da78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12da7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12da7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12da80: 0x3e00008  jr          $ra
    ctx->pc = 0x12DA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA80u;
        // 0x12da84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DA88u;
}
