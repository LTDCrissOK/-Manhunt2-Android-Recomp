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

// Function: sub_0011B1D8
// Address: 0x11b1d8 - 0x11b250
void sub_0011B1D8_0x11b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B1D8_0x11b1d8");
#endif

    ctx->pc = 0x11b1d8u;

    // 0x11b1d8: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B1D8u;
    {
        const bool branch_taken_0x11b1d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b1d8) {
            ctx->pc = 0x11B1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B1D8u;
            // 0x11b1dc: 0x8cc300bc  lw          $v1, 0xBC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B1E8u;
            goto label_11b1e8;
        }
    }
    ctx->pc = 0x11B1E0u;
    // 0x11b1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1E0u;
        // 0x11b1e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B1E8u;
label_11b1e8:
    // 0x11b1e8: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x11b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x11b1ec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x11b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x11b1f0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B1F0u;
    {
        const bool branch_taken_0x11b1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1F0u;
        // 0x11b1f4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1f0) {
            ctx->pc = 0x11B21Cu;
            goto label_11b21c;
        }
    }
    ctx->pc = 0x11B1F8u;
    // 0x11b1f8: 0x8cc302d8  lw          $v1, 0x2D8($a2)
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x11b1fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B1FCu;
    {
        const bool branch_taken_0x11b1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1FCu;
        // 0x11b200: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1fc) {
            ctx->pc = 0x11B21Cu;
            goto label_11b21c;
        }
    }
    ctx->pc = 0x11B204u;
    // 0x11b204: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11b204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11b208: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x11b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x11b20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b210: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x11b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x11b214: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B214u;
    {
        const bool branch_taken_0x11b214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b214) {
            ctx->pc = 0x11B248u;
            goto label_11b248;
        }
    }
    ctx->pc = 0x11B21Cu;
label_11b21c:
    // 0x11b21c: 0x3882001f  xori        $v0, $a0, 0x1F
    ctx->pc = 0x11b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x11b220: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B220u;
    {
        const bool branch_taken_0x11b220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B220u;
        // 0x11b224: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b220) {
            ctx->pc = 0x11B234u;
            goto label_11b234;
        }
    }
    ctx->pc = 0x11B228u;
    // 0x11b228: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x11b22c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B22Cu;
    {
        const bool branch_taken_0x11b22c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B22Cu;
        // 0x11b230: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b22c) {
            ctx->pc = 0x11B23Cu;
            goto label_11b23c;
        }
    }
    ctx->pc = 0x11B234u;
label_11b234:
    // 0x11b234: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B234u;
    {
        const bool branch_taken_0x11b234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B234u;
        // 0x11b238: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b234) {
            ctx->pc = 0x11B248u;
            goto label_11b248;
        }
    }
    ctx->pc = 0x11B23Cu;
label_11b23c:
    // 0x11b23c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x11b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x11b240: 0x3e00008  jr          $ra
    ctx->pc = 0x11B240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B240u;
        // 0x11b244: 0x8c629b18  lw          $v0, -0x64E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941464)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B248u;
label_11b248:
    // 0x11b248: 0x3e00008  jr          $ra
    ctx->pc = 0x11B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B250u;
}
