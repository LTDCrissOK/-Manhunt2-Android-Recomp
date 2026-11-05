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

// Function: sub_003EF648
// Address: 0x3ef648 - 0x3ef6d8
void sub_003EF648_0x3ef648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF648_0x3ef648");
#endif

    switch (ctx->pc) {
        case 0x3ef6ccu: goto label_3ef6cc;
        default: break;
    }

    ctx->pc = 0x3ef648u;

    // 0x3ef648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef650: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ef650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef654: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ef654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef658: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef65c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF65Cu;
    {
        const bool branch_taken_0x3ef65c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF65Cu;
        // 0x3ef660: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef65c) {
            ctx->pc = 0x3EF66Cu;
            goto label_3ef66c;
        }
    }
    ctx->pc = 0x3EF664u;
    // 0x3ef664: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef668: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ef66c:
    // 0x3ef66c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ef670: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF670u;
    {
        const bool branch_taken_0x3ef670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef670) {
            ctx->pc = 0x3EF674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF670u;
            // 0x3ef674: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF684u;
            goto label_3ef684;
        }
    }
    ctx->pc = 0x3EF678u;
    // 0x3ef678: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef67c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ef67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ef680: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ef680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ef684:
    // 0x3ef684: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF684u;
    {
        const bool branch_taken_0x3ef684 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef684) {
            ctx->pc = 0x3EF688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF684u;
            // 0x3ef688: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF698u;
            goto label_3ef698;
        }
    }
    ctx->pc = 0x3EF68Cu;
    // 0x3ef68c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef690: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ef690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ef694: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ef694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ef698:
    // 0x3ef698: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF698u;
    {
        const bool branch_taken_0x3ef698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef698) {
            ctx->pc = 0x3EF69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF698u;
            // 0x3ef69c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF6ACu;
            goto label_3ef6ac;
        }
    }
    ctx->pc = 0x3EF6A0u;
    // 0x3ef6a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef6a4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ef6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ef6a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ef6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ef6ac:
    // 0x3ef6ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF6ACu;
    {
        const bool branch_taken_0x3ef6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef6ac) {
            ctx->pc = 0x3EF6BCu;
            goto label_3ef6bc;
        }
    }
    ctx->pc = 0x3EF6B4u;
    // 0x3ef6b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef6b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ef6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ef6bc:
    // 0x3ef6bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF6BCu;
    {
        const bool branch_taken_0x3ef6bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6BCu;
        // 0x3ef6c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6bc) {
            ctx->pc = 0x3EF6D0u;
            goto label_3ef6d0;
        }
    }
    ctx->pc = 0x3EF6C4u;
    // 0x3ef6c4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EF6C4u;
    SET_GPR_U32(ctx, 31, 0x3EF6CCu);
    ctx->pc = 0x3EF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF6C4u;
    // 0x3ef6c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EF6C4u, 0x3EF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF6CCu;
label_3ef6cc:
    // 0x3ef6cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef6d0:
    // 0x3ef6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6D0u;
        // 0x3ef6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF6D8u;
}
