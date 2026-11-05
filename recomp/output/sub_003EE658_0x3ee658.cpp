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

// Function: sub_003EE658
// Address: 0x3ee658 - 0x3ee6f8
void sub_003EE658_0x3ee658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE658_0x3ee658");
#endif

    switch (ctx->pc) {
        case 0x3ee6dcu: goto label_3ee6dc;
        default: break;
    }

    ctx->pc = 0x3ee658u;

    // 0x3ee658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee660: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee664: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ee664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ee668: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee66c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE66Cu;
    {
        const bool branch_taken_0x3ee66c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE66Cu;
        // 0x3ee670: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee66c) {
            ctx->pc = 0x3EE67Cu;
            goto label_3ee67c;
        }
    }
    ctx->pc = 0x3EE674u;
    // 0x3ee674: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee678: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ee678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ee67c:
    // 0x3ee67c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ee67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee680: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE680u;
    {
        const bool branch_taken_0x3ee680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee680) {
            ctx->pc = 0x3EE684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE680u;
            // 0x3ee684: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE694u;
            goto label_3ee694;
        }
    }
    ctx->pc = 0x3EE688u;
    // 0x3ee688: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee68c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ee68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ee690: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ee694:
    // 0x3ee694: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE694u;
    {
        const bool branch_taken_0x3ee694 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee694) {
            ctx->pc = 0x3EE698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE694u;
            // 0x3ee698: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE6A8u;
            goto label_3ee6a8;
        }
    }
    ctx->pc = 0x3EE69Cu;
    // 0x3ee69c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee6a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ee6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ee6a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ee6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ee6a8:
    // 0x3ee6a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE6A8u;
    {
        const bool branch_taken_0x3ee6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee6a8) {
            ctx->pc = 0x3EE6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE6A8u;
            // 0x3ee6ac: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE6BCu;
            goto label_3ee6bc;
        }
    }
    ctx->pc = 0x3EE6B0u;
    // 0x3ee6b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee6b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ee6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ee6b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ee6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ee6bc:
    // 0x3ee6bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE6BCu;
    {
        const bool branch_taken_0x3ee6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee6bc) {
            ctx->pc = 0x3EE6CCu;
            goto label_3ee6cc;
        }
    }
    ctx->pc = 0x3EE6C4u;
    // 0x3ee6c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee6c8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ee6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ee6cc:
    // 0x3ee6cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE6CCu;
    {
        const bool branch_taken_0x3ee6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6CCu;
        // 0x3ee6d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee6cc) {
            ctx->pc = 0x3EE6E0u;
            goto label_3ee6e0;
        }
    }
    ctx->pc = 0x3EE6D4u;
    // 0x3ee6d4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE6D4u;
    SET_GPR_U32(ctx, 31, 0x3EE6DCu);
    ctx->pc = 0x3EE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE6D4u;
    // 0x3ee6d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE6D4u, 0x3EE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE6DCu;
label_3ee6dc:
    // 0x3ee6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee6e0:
    // 0x3ee6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6E0u;
        // 0x3ee6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE6E8u;
    // 0x3ee6e8: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x3ee6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x3ee6ec: 0x0  nop
    ctx->pc = 0x3ee6ecu;
    // NOP
    // 0x3ee6f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee6f4: 0x0  nop
    ctx->pc = 0x3ee6f4u;
    // NOP
    ctx->pc = 0x3ee6f8u;
}
