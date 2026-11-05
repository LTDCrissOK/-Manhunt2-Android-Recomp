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

// Function: sub_003EF6D8
// Address: 0x3ef6d8 - 0x3ef768
void sub_003EF6D8_0x3ef6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF6D8_0x3ef6d8");
#endif

    switch (ctx->pc) {
        case 0x3ef75cu: goto label_3ef75c;
        default: break;
    }

    ctx->pc = 0x3ef6d8u;

    // 0x3ef6d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef6e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ef6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef6e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ef6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef6e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef6ec: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF6ECu;
    {
        const bool branch_taken_0x3ef6ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6ECu;
        // 0x3ef6f0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6ec) {
            ctx->pc = 0x3EF6FCu;
            goto label_3ef6fc;
        }
    }
    ctx->pc = 0x3EF6F4u;
    // 0x3ef6f4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef6f8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ef6fc:
    // 0x3ef6fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ef6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ef700: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF700u;
    {
        const bool branch_taken_0x3ef700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef700) {
            ctx->pc = 0x3EF704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF700u;
            // 0x3ef704: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF714u;
            goto label_3ef714;
        }
    }
    ctx->pc = 0x3EF708u;
    // 0x3ef708: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef70c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ef70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ef710: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ef710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ef714:
    // 0x3ef714: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF714u;
    {
        const bool branch_taken_0x3ef714 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef714) {
            ctx->pc = 0x3EF718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF714u;
            // 0x3ef718: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF728u;
            goto label_3ef728;
        }
    }
    ctx->pc = 0x3EF71Cu;
    // 0x3ef71c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef720: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ef720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ef724: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ef724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ef728:
    // 0x3ef728: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF728u;
    {
        const bool branch_taken_0x3ef728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef728) {
            ctx->pc = 0x3EF72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF728u;
            // 0x3ef72c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF73Cu;
            goto label_3ef73c;
        }
    }
    ctx->pc = 0x3EF730u;
    // 0x3ef730: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef734: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ef734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ef738: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ef738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ef73c:
    // 0x3ef73c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF73Cu;
    {
        const bool branch_taken_0x3ef73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef73c) {
            ctx->pc = 0x3EF74Cu;
            goto label_3ef74c;
        }
    }
    ctx->pc = 0x3EF744u;
    // 0x3ef744: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef748: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ef748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ef74c:
    // 0x3ef74c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF74Cu;
    {
        const bool branch_taken_0x3ef74c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF74Cu;
        // 0x3ef750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef74c) {
            ctx->pc = 0x3EF760u;
            goto label_3ef760;
        }
    }
    ctx->pc = 0x3EF754u;
    // 0x3ef754: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EF754u;
    SET_GPR_U32(ctx, 31, 0x3EF75Cu);
    ctx->pc = 0x3EF758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF754u;
    // 0x3ef758: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EF754u, 0x3EF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF75Cu;
label_3ef75c:
    // 0x3ef75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef760:
    // 0x3ef760: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF760u;
        // 0x3ef764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF768u;
}
