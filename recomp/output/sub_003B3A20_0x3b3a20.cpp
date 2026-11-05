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

// Function: sub_003B3A20
// Address: 0x3b3a20 - 0x3b3ac0
void sub_003B3A20_0x3b3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3A20_0x3b3a20");
#endif

    switch (ctx->pc) {
        case 0x3b3a30u: goto label_3b3a30;
        case 0x3b3a60u: goto label_3b3a60;
        case 0x3b3a90u: goto label_3b3a90;
        case 0x3b3aa4u: goto label_3b3aa4;
        default: break;
    }

    ctx->pc = 0x3b3a20u;

    // 0x3b3a20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b3a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b3a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a28: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x3b3a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3b3a2c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x3b3a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3b3a30:
    // 0x3b3a30: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3b3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b3a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b3a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b3a38: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x3b3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3b3a3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3b3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3b3a40: 0x28a30060  slti        $v1, $a1, 0x60
    ctx->pc = 0x3b3a40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x3b3a44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b3a48: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B3A48u;
    {
        const bool branch_taken_0x3b3a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A48u;
        // 0x3b3a4c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a48) {
            ctx->pc = 0x3B3A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3a30;
        }
    }
    ctx->pc = 0x3B3A50u;
    // 0x3b3a50: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3b3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b3a54: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x3b3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x3b3a58: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A58u;
        // 0x3b3a5c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3A60u;
label_3b3a60:
    // 0x3b3a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b3a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3a68: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x3b3a68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3b3a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b3a78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b3a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b3a80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3b3a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b3a88: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B3A88u;
    SET_GPR_U32(ctx, 31, 0x3B3A90u);
    ctx->pc = 0x3B3A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A88u;
    // 0x3b3a8c: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B3A88u, 0x3B3A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A90u;
label_3b3a90:
    // 0x3b3a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b3a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b3a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3a9c: 0xc0eceb0  jal         func_3B3AC0
    ctx->pc = 0x3B3A9Cu;
    SET_GPR_U32(ctx, 31, 0x3B3AA4u);
    ctx->pc = 0x3B3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A9Cu;
    // 0x3b3aa0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3AC0u, 0x3B3A9Cu, 0x3B3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3AA4u;
label_3b3aa4:
    // 0x3b3aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b3aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3aac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b3aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3ab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b3ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b3ab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b3ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3ab8: 0x80ecdc0  j           func_3B3700
    ctx->pc = 0x3B3AB8u;
    ctx->pc = 0x3B3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AB8u;
    // 0x3b3abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    sub_003B3700_0x3b3700(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3AC0u;
}
