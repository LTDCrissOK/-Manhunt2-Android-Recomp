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

// Function: sub_003C77F0
// Address: 0x3c77f0 - 0x3c78b0
void sub_003C77F0_0x3c77f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C77F0_0x3c77f0");
#endif

    ctx->pc = 0x3c77f0u;

    // 0x3c77f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c77f4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3c77f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3c77f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C77F8u;
    {
        const bool branch_taken_0x3c77f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77F8u;
        // 0x3c77fc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77f8) {
            ctx->pc = 0x3C7834u;
            goto label_3c7834;
        }
    }
    ctx->pc = 0x3C7800u;
    // 0x3c7800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7800u;
    {
        const bool branch_taken_0x3c7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7800u;
        // 0x3c7804: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7800) {
            ctx->pc = 0x3C7810u;
            goto label_3c7810;
        }
    }
    ctx->pc = 0x3C7808u;
    // 0x3c7808: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7808u;
        // 0x3c780c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7810u;
label_3c7810:
    // 0x3c7810: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7810u;
    {
        const bool branch_taken_0x3c7810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7810) {
            ctx->pc = 0x3C7814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7810u;
            // 0x3c7814: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7828u;
            goto label_3c7828;
        }
    }
    ctx->pc = 0x3C7818u;
    // 0x3c7818: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3c7818u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3c781c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7820: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7820u;
        // 0x3c7824: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7828u;
label_3c7828:
    // 0x3c7828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c782c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C782Cu;
        // 0x3c7830: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C782Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7834u;
label_3c7834:
    // 0x3c7834: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3c7834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3c7838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7838u;
    {
        const bool branch_taken_0x3c7838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7838u;
        // 0x3c783c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7838) {
            ctx->pc = 0x3C7848u;
            goto label_3c7848;
        }
    }
    ctx->pc = 0x3C7840u;
    // 0x3c7840: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3c7840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c7844: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3c7844u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_3c7848:
    // 0x3c7848: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3c7848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3c784c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C784Cu;
    {
        const bool branch_taken_0x3c784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C784Cu;
        // 0x3c7850: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c784c) {
            ctx->pc = 0x3C7860u;
            goto label_3c7860;
        }
    }
    ctx->pc = 0x3C7854u;
    // 0x3c7854: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3c7854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3c7858: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3c785c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x3c785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3c7860:
    // 0x3c7860: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7860u;
    {
        const bool branch_taken_0x3c7860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7860u;
        // 0x3c7864: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7860) {
            ctx->pc = 0x3C7874u;
            goto label_3c7874;
        }
    }
    ctx->pc = 0x3C7868u;
    // 0x3c7868: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3c7868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3c786c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3c786cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3c7870: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x3c7870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3c7874:
    // 0x3c7874: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7874u;
    {
        const bool branch_taken_0x3c7874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7874u;
        // 0x3c7878: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7874) {
            ctx->pc = 0x3C7888u;
            goto label_3c7888;
        }
    }
    ctx->pc = 0x3C787Cu;
    // 0x3c787c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3c787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3c7880: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x3c7880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x3c7884: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3c7884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c7888:
    // 0x3c7888: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7888u;
    {
        const bool branch_taken_0x3c7888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7888) {
            ctx->pc = 0x3C788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7888u;
            // 0x3c788c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C78A8u;
            goto label_3c78a8;
        }
    }
    ctx->pc = 0x3C7890u;
    // 0x3c7890: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3c7890u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3c7894: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7894u;
    {
        const bool branch_taken_0x3c7894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7894u;
        // 0x3c7898: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7894) {
            ctx->pc = 0x3C78A4u;
            goto label_3c78a4;
        }
    }
    ctx->pc = 0x3C789Cu;
    // 0x3c789c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C789Cu;
        // 0x3c78a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C78A4u;
label_3c78a4:
    // 0x3c78a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3c78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3c78a8:
    // 0x3c78a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C78A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C78A8u;
        // 0x3c78ac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C78A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C78B0u;
}
