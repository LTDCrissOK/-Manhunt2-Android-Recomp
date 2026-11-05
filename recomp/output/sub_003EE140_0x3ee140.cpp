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

// Function: sub_003EE140
// Address: 0x3ee140 - 0x3ee1d0
void sub_003EE140_0x3ee140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE140_0x3ee140");
#endif

    switch (ctx->pc) {
        case 0x3ee1c4u: goto label_3ee1c4;
        default: break;
    }

    ctx->pc = 0x3ee140u;

    // 0x3ee140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ee148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee14c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ee14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ee150: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ee154: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE154u;
    {
        const bool branch_taken_0x3ee154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE154u;
        // 0x3ee158: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee154) {
            ctx->pc = 0x3EE164u;
            goto label_3ee164;
        }
    }
    ctx->pc = 0x3EE15Cu;
    // 0x3ee15c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee160: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ee160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ee164:
    // 0x3ee164: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ee164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee168: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE168u;
    {
        const bool branch_taken_0x3ee168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee168) {
            ctx->pc = 0x3EE16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE168u;
            // 0x3ee16c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE17Cu;
            goto label_3ee17c;
        }
    }
    ctx->pc = 0x3EE170u;
    // 0x3ee170: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee174: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ee174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ee178: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ee178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ee17c:
    // 0x3ee17c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE17Cu;
    {
        const bool branch_taken_0x3ee17c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee17c) {
            ctx->pc = 0x3EE180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE17Cu;
            // 0x3ee180: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE190u;
            goto label_3ee190;
        }
    }
    ctx->pc = 0x3EE184u;
    // 0x3ee184: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee188: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ee188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ee18c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ee18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ee190:
    // 0x3ee190: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE190u;
    {
        const bool branch_taken_0x3ee190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee190) {
            ctx->pc = 0x3EE194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE190u;
            // 0x3ee194: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE1A4u;
            goto label_3ee1a4;
        }
    }
    ctx->pc = 0x3EE198u;
    // 0x3ee198: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ee198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ee19c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ee19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ee1a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ee1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ee1a4:
    // 0x3ee1a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE1A4u;
    {
        const bool branch_taken_0x3ee1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee1a4) {
            ctx->pc = 0x3EE1B4u;
            goto label_3ee1b4;
        }
    }
    ctx->pc = 0x3EE1ACu;
    // 0x3ee1ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ee1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ee1b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ee1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ee1b4:
    // 0x3ee1b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE1B4u;
    {
        const bool branch_taken_0x3ee1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1B4u;
        // 0x3ee1b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee1b4) {
            ctx->pc = 0x3EE1C8u;
            goto label_3ee1c8;
        }
    }
    ctx->pc = 0x3EE1BCu;
    // 0x3ee1bc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE1BCu;
    SET_GPR_U32(ctx, 31, 0x3EE1C4u);
    ctx->pc = 0x3EE1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE1BCu;
    // 0x3ee1c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE1BCu, 0x3EE1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE1C4u;
label_3ee1c4:
    // 0x3ee1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee1c8:
    // 0x3ee1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1C8u;
        // 0x3ee1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE1D0u;
}
