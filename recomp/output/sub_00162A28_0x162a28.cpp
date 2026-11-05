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

// Function: sub_00162A28
// Address: 0x162a28 - 0x162a98
void sub_00162A28_0x162a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162A28_0x162a28");
#endif

    switch (ctx->pc) {
        case 0x162a50u: goto label_162a50;
        case 0x162a64u: goto label_162a64;
        case 0x162a70u: goto label_162a70;
        case 0x162a80u: goto label_162a80;
        default: break;
    }

    ctx->pc = 0x162a28u;

    // 0x162a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162a30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x162a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162a3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162a40: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x162a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a44: 0xae220358  sw          $v0, 0x358($s1)
    ctx->pc = 0x162a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 2));
    // 0x162a48: 0xc058d2e  jal         func_1634B8
    ctx->pc = 0x162A48u;
    SET_GPR_U32(ctx, 31, 0x162A50u);
    ctx->pc = 0x162A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A48u;
    // 0x162a4c: 0xae220354  sw          $v0, 0x354($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1634B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1634B8u, 0x162A48u, 0x162A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A50u;
label_162a50:
    // 0x162a50: 0xae200334  sw          $zero, 0x334($s1)
    ctx->pc = 0x162a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 0));
    // 0x162a54: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x162A54u;
    {
        const bool branch_taken_0x162a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A54u;
        // 0x162a58: 0xae20034c  sw          $zero, 0x34C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a54) {
            ctx->pc = 0x162A80u;
            goto label_162a80;
        }
    }
    ctx->pc = 0x162A5Cu;
    // 0x162a5c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x162A5Cu;
    SET_GPR_U32(ctx, 31, 0x162A64u);
    ctx->pc = 0x162A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A5Cu;
    // 0x162a60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x162A5Cu, 0x162A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A64u;
label_162a64:
    // 0x162a64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a68: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x162A68u;
    SET_GPR_U32(ctx, 31, 0x162A70u);
    ctx->pc = 0x162A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A68u;
    // 0x162a6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x162A68u, 0x162A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A70u;
label_162a70:
    // 0x162a70: 0xae2203a0  sw          $v0, 0x3A0($s1)
    ctx->pc = 0x162a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 2));
    // 0x162a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a78: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x162A78u;
    SET_GPR_U32(ctx, 31, 0x162A80u);
    ctx->pc = 0x162A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A78u;
    // 0x162a7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x162A78u, 0x162A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A80u;
label_162a80:
    // 0x162a80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162a84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x162A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A8Cu;
        // 0x162a90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162A94u;
    // 0x162a94: 0x0  nop
    ctx->pc = 0x162a94u;
    // NOP
    ctx->pc = 0x162a98u;
}
