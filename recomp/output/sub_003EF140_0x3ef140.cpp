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

// Function: sub_003EF140
// Address: 0x3ef140 - 0x3ef1d0
void sub_003EF140_0x3ef140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF140_0x3ef140");
#endif

    switch (ctx->pc) {
        case 0x3ef1c4u: goto label_3ef1c4;
        default: break;
    }

    ctx->pc = 0x3ef140u;

    // 0x3ef140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef14c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ef14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef150: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef154: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF154u;
    {
        const bool branch_taken_0x3ef154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF154u;
        // 0x3ef158: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef154) {
            ctx->pc = 0x3EF164u;
            goto label_3ef164;
        }
    }
    ctx->pc = 0x3EF15Cu;
    // 0x3ef15c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef160: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ef164:
    // 0x3ef164: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ef164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ef168: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF168u;
    {
        const bool branch_taken_0x3ef168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef168) {
            ctx->pc = 0x3EF16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF168u;
            // 0x3ef16c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF17Cu;
            goto label_3ef17c;
        }
    }
    ctx->pc = 0x3EF170u;
    // 0x3ef170: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef174: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ef174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ef178: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ef178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ef17c:
    // 0x3ef17c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF17Cu;
    {
        const bool branch_taken_0x3ef17c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef17c) {
            ctx->pc = 0x3EF180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF17Cu;
            // 0x3ef180: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF190u;
            goto label_3ef190;
        }
    }
    ctx->pc = 0x3EF184u;
    // 0x3ef184: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef188: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ef188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ef18c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ef18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ef190:
    // 0x3ef190: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF190u;
    {
        const bool branch_taken_0x3ef190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef190) {
            ctx->pc = 0x3EF194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF190u;
            // 0x3ef194: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF1A4u;
            goto label_3ef1a4;
        }
    }
    ctx->pc = 0x3EF198u;
    // 0x3ef198: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef19c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ef19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ef1a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ef1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ef1a4:
    // 0x3ef1a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF1A4u;
    {
        const bool branch_taken_0x3ef1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef1a4) {
            ctx->pc = 0x3EF1B4u;
            goto label_3ef1b4;
        }
    }
    ctx->pc = 0x3EF1ACu;
    // 0x3ef1ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef1b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ef1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ef1b4:
    // 0x3ef1b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF1B4u;
    {
        const bool branch_taken_0x3ef1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1B4u;
        // 0x3ef1b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1b4) {
            ctx->pc = 0x3EF1C8u;
            goto label_3ef1c8;
        }
    }
    ctx->pc = 0x3EF1BCu;
    // 0x3ef1bc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EF1BCu;
    SET_GPR_U32(ctx, 31, 0x3EF1C4u);
    ctx->pc = 0x3EF1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF1BCu;
    // 0x3ef1c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EF1BCu, 0x3EF1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF1C4u;
label_3ef1c4:
    // 0x3ef1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef1c8:
    // 0x3ef1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1C8u;
        // 0x3ef1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF1D0u;
}
