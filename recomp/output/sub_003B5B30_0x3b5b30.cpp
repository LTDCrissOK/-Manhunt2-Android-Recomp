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

// Function: sub_003B5B30
// Address: 0x3b5b30 - 0x3b5bd0
void sub_003B5B30_0x3b5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5B30_0x3b5b30");
#endif

    switch (ctx->pc) {
        case 0x3b5ba0u: goto label_3b5ba0;
        default: break;
    }

    ctx->pc = 0x3b5b30u;

    // 0x3b5b30: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b5b34: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x3b5b34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x3b5b38: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x3b5b38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x3b5b3c: 0x8c437c48  lw          $v1, 0x7C48($v0)
    ctx->pc = 0x3b5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31816)));
    // 0x3b5b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b5b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b5b44: 0xa6403  sra         $t4, $t2, 16
    ctx->pc = 0x3b5b44u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 16));
    // 0x3b5b48: 0xb6c03  sra         $t5, $t3, 16
    ctx->pc = 0x3b5b48u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 11), 16));
    // 0x3b5b4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b5b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b5b50: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x3b5b50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b54: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x3b5b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b58: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x3b5b58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5b5c: 0x87af0038  lh          $t7, 0x38($sp)
    ctx->pc = 0x3b5b5cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b5b60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5B60u;
    {
        const bool branch_taken_0x3b5b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B60u;
        // 0x3b5b64: 0x87a20040  lh          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b60) {
            ctx->pc = 0x3B5B80u;
            goto label_3b5b80;
        }
    }
    ctx->pc = 0x3B5B68u;
    // 0x3b5b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b5b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5b6c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3b5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3b5b70: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x3b5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x3b5b74: 0x80ed5fa  j           func_3B57E8
    ctx->pc = 0x3B5B74u;
    ctx->pc = 0x3B5B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5B74u;
    // 0x3b5b78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B57E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B57E8u, 0x3B5B74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B5B7Cu;
    // 0x3b5b7c: 0x0  nop
    ctx->pc = 0x3b5b7cu;
    // NOP
label_3b5b80:
    // 0x3b5b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b5b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5b84: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x3b5b84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b88: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x3b5b88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b8c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3b5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3b5b90: 0xafae0030  sw          $t6, 0x30($sp)
    ctx->pc = 0x3b5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
    // 0x3b5b94: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x3b5b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x3b5b98: 0x80ed508  j           func_3B5420
    ctx->pc = 0x3B5B98u;
    ctx->pc = 0x3B5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5B98u;
    // 0x3b5b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5420u, 0x3B5B98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B5BA0u;
label_3b5ba0:
    // 0x3b5ba0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3b5ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b5ba4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x3b5ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b5ba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b5bac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b5bb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b5bb4: 0x8c427c50  lw          $v0, 0x7C50($v0)
    ctx->pc = 0x3b5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31824)));
    // 0x3b5bb8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3b5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x3b5bbc: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x3b5bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x3b5bc0: 0x24217c58  addiu       $at, $at, 0x7C58
    ctx->pc = 0x3b5bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31832));
    // 0x3b5bc4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x3b5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x3b5bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BC8u;
        // 0x3b5bcc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5BD0u;
}
