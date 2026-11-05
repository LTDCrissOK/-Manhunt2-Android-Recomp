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

// Function: sub_003DD730
// Address: 0x3dd730 - 0x3dd7c0
void sub_003DD730_0x3dd730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD730_0x3dd730");
#endif

    switch (ctx->pc) {
        case 0x3dd7b4u: goto label_3dd7b4;
        default: break;
    }

    ctx->pc = 0x3dd730u;

    // 0x3dd730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dd730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dd734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dd734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dd738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dd738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd73c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dd740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dd740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dd744: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD744u;
    {
        const bool branch_taken_0x3dd744 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD744u;
        // 0x3dd748: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd744) {
            ctx->pc = 0x3DD754u;
            goto label_3dd754;
        }
    }
    ctx->pc = 0x3DD74Cu;
    // 0x3dd74c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dd750: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dd750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dd754:
    // 0x3dd754: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dd758: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD758u;
    {
        const bool branch_taken_0x3dd758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dd758) {
            ctx->pc = 0x3DD75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD758u;
            // 0x3dd75c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD76Cu;
            goto label_3dd76c;
        }
    }
    ctx->pc = 0x3DD760u;
    // 0x3dd760: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dd760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dd764: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dd764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dd768: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dd768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dd76c:
    // 0x3dd76c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD76Cu;
    {
        const bool branch_taken_0x3dd76c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dd76c) {
            ctx->pc = 0x3DD770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD76Cu;
            // 0x3dd770: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD780u;
            goto label_3dd780;
        }
    }
    ctx->pc = 0x3DD774u;
    // 0x3dd774: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dd778: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dd778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dd77c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dd780:
    // 0x3dd780: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD780u;
    {
        const bool branch_taken_0x3dd780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd780) {
            ctx->pc = 0x3DD784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD780u;
            // 0x3dd784: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD794u;
            goto label_3dd794;
        }
    }
    ctx->pc = 0x3DD788u;
    // 0x3dd788: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dd788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dd78c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dd790: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dd790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dd794:
    // 0x3dd794: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD794u;
    {
        const bool branch_taken_0x3dd794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd794) {
            ctx->pc = 0x3DD7A4u;
            goto label_3dd7a4;
        }
    }
    ctx->pc = 0x3DD79Cu;
    // 0x3dd79c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dd7a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dd7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dd7a4:
    // 0x3dd7a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD7A4u;
    {
        const bool branch_taken_0x3dd7a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7A4u;
        // 0x3dd7a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd7a4) {
            ctx->pc = 0x3DD7B8u;
            goto label_3dd7b8;
        }
    }
    ctx->pc = 0x3DD7ACu;
    // 0x3dd7ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DD7ACu;
    SET_GPR_U32(ctx, 31, 0x3DD7B4u);
    ctx->pc = 0x3DD7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD7ACu;
    // 0x3dd7b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DD7ACu, 0x3DD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD7B4u;
label_3dd7b4:
    // 0x3dd7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dd7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd7b8:
    // 0x3dd7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7B8u;
        // 0x3dd7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD7C0u;
}
