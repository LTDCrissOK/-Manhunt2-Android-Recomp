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

// Function: sub_001BF320
// Address: 0x1bf320 - 0x1bf398
void sub_001BF320_0x1bf320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF320_0x1bf320");
#endif

    switch (ctx->pc) {
        case 0x1bf350u: goto label_1bf350;
        case 0x1bf380u: goto label_1bf380;
        default: break;
    }

    ctx->pc = 0x1bf320u;

    // 0x1bf320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bf324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bf328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bf32c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf330: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bf330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf334: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bf338: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BF338u;
    {
        const bool branch_taken_0x1bf338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf338) {
            ctx->pc = 0x1BF33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF338u;
            // 0x1bf33c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF388u;
            goto label_1bf388;
        }
    }
    ctx->pc = 0x1BF340u;
    // 0x1bf340: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1bf344: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf348: 0xc072596  jal         func_1C9658
    ctx->pc = 0x1BF348u;
    SET_GPR_U32(ctx, 31, 0x1BF350u);
    ctx->pc = 0x1BF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF348u;
    // 0x1bf34c: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x1BF348u, 0x1BF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF350u;
label_1bf350:
    // 0x1bf350: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bf350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf354: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1bf354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1bf358: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bf35c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bf35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bf360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF360u;
    {
        const bool branch_taken_0x1bf360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF360u;
        // 0x1bf364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf360) {
            ctx->pc = 0x1BF370u;
            goto label_1bf370;
        }
    }
    ctx->pc = 0x1BF368u;
    // 0x1bf368: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1bf36c: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1bf370:
    // 0x1bf370: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bf370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf374: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1bf374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1bf378: 0xc0725e0  jal         func_1C9780
    ctx->pc = 0x1BF378u;
    SET_GPR_U32(ctx, 31, 0x1BF380u);
    ctx->pc = 0x1BF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF378u;
    // 0x1bf37c: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x1BF378u, 0x1BF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF380u;
label_1bf380:
    // 0x1bf380: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1bf380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1bf384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf388:
    // 0x1bf388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bf388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf38c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF38Cu;
        // 0x1bf390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF394u;
    // 0x1bf394: 0x0  nop
    ctx->pc = 0x1bf394u;
    // NOP
    ctx->pc = 0x1bf398u;
}
