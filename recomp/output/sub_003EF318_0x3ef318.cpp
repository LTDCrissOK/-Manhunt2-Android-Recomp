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

// Function: sub_003EF318
// Address: 0x3ef318 - 0x3ef3a8
void sub_003EF318_0x3ef318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF318_0x3ef318");
#endif

    switch (ctx->pc) {
        case 0x3ef39cu: goto label_3ef39c;
        default: break;
    }

    ctx->pc = 0x3ef318u;

    // 0x3ef318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ef320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef324: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ef324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef32c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF32Cu;
    {
        const bool branch_taken_0x3ef32c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF32Cu;
        // 0x3ef330: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef32c) {
            ctx->pc = 0x3EF33Cu;
            goto label_3ef33c;
        }
    }
    ctx->pc = 0x3EF334u;
    // 0x3ef334: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef338: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ef33c:
    // 0x3ef33c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ef33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ef340: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF340u;
    {
        const bool branch_taken_0x3ef340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef340) {
            ctx->pc = 0x3EF344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF340u;
            // 0x3ef344: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF354u;
            goto label_3ef354;
        }
    }
    ctx->pc = 0x3EF348u;
    // 0x3ef348: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef34c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ef34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ef350: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ef350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ef354:
    // 0x3ef354: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF354u;
    {
        const bool branch_taken_0x3ef354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef354) {
            ctx->pc = 0x3EF358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF354u;
            // 0x3ef358: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF368u;
            goto label_3ef368;
        }
    }
    ctx->pc = 0x3EF35Cu;
    // 0x3ef35c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef360: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ef360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ef364: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ef364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ef368:
    // 0x3ef368: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF368u;
    {
        const bool branch_taken_0x3ef368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef368) {
            ctx->pc = 0x3EF36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF368u;
            // 0x3ef36c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF37Cu;
            goto label_3ef37c;
        }
    }
    ctx->pc = 0x3EF370u;
    // 0x3ef370: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef374: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ef374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ef378: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ef378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ef37c:
    // 0x3ef37c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF37Cu;
    {
        const bool branch_taken_0x3ef37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef37c) {
            ctx->pc = 0x3EF38Cu;
            goto label_3ef38c;
        }
    }
    ctx->pc = 0x3EF384u;
    // 0x3ef384: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef388: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ef388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ef38c:
    // 0x3ef38c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF38Cu;
    {
        const bool branch_taken_0x3ef38c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF38Cu;
        // 0x3ef390: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef38c) {
            ctx->pc = 0x3EF3A0u;
            goto label_3ef3a0;
        }
    }
    ctx->pc = 0x3EF394u;
    // 0x3ef394: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EF394u;
    SET_GPR_U32(ctx, 31, 0x3EF39Cu);
    ctx->pc = 0x3EF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF394u;
    // 0x3ef398: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EF394u, 0x3EF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF39Cu;
label_3ef39c:
    // 0x3ef39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef3a0:
    // 0x3ef3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3A0u;
        // 0x3ef3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF3A8u;
}
