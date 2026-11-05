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

// Function: sub_003EE020
// Address: 0x3ee020 - 0x3ee0b0
void sub_003EE020_0x3ee020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE020_0x3ee020");
#endif

    switch (ctx->pc) {
        case 0x3ee0a4u: goto label_3ee0a4;
        default: break;
    }

    ctx->pc = 0x3ee020u;

    // 0x3ee020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee028: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ee028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee02c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ee02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ee030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee034: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE034u;
    {
        const bool branch_taken_0x3ee034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE034u;
        // 0x3ee038: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee034) {
            ctx->pc = 0x3EE044u;
            goto label_3ee044;
        }
    }
    ctx->pc = 0x3EE03Cu;
    // 0x3ee03c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee040: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ee040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ee044:
    // 0x3ee044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ee044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee048: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE048u;
    {
        const bool branch_taken_0x3ee048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee048) {
            ctx->pc = 0x3EE04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE048u;
            // 0x3ee04c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE05Cu;
            goto label_3ee05c;
        }
    }
    ctx->pc = 0x3EE050u;
    // 0x3ee050: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee054: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ee054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ee058: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ee05c:
    // 0x3ee05c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE05Cu;
    {
        const bool branch_taken_0x3ee05c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee05c) {
            ctx->pc = 0x3EE060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE05Cu;
            // 0x3ee060: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE070u;
            goto label_3ee070;
        }
    }
    ctx->pc = 0x3EE064u;
    // 0x3ee064: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee068: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ee068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ee06c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ee06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ee070:
    // 0x3ee070: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE070u;
    {
        const bool branch_taken_0x3ee070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee070) {
            ctx->pc = 0x3EE074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE070u;
            // 0x3ee074: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE084u;
            goto label_3ee084;
        }
    }
    ctx->pc = 0x3EE078u;
    // 0x3ee078: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee07c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ee07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ee080: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ee080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ee084:
    // 0x3ee084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE084u;
    {
        const bool branch_taken_0x3ee084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee084) {
            ctx->pc = 0x3EE094u;
            goto label_3ee094;
        }
    }
    ctx->pc = 0x3EE08Cu;
    // 0x3ee08c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee090: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ee090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ee094:
    // 0x3ee094: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE094u;
    {
        const bool branch_taken_0x3ee094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE094u;
        // 0x3ee098: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee094) {
            ctx->pc = 0x3EE0A8u;
            goto label_3ee0a8;
        }
    }
    ctx->pc = 0x3EE09Cu;
    // 0x3ee09c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE09Cu;
    SET_GPR_U32(ctx, 31, 0x3EE0A4u);
    ctx->pc = 0x3EE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE09Cu;
    // 0x3ee0a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE09Cu, 0x3EE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE0A4u;
label_3ee0a4:
    // 0x3ee0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee0a8:
    // 0x3ee0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0A8u;
        // 0x3ee0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE0B0u;
}
