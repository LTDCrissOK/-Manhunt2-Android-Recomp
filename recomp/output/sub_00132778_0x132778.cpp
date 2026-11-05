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

// Function: sub_00132778
// Address: 0x132778 - 0x1327c8
void sub_00132778_0x132778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132778_0x132778");
#endif

    switch (ctx->pc) {
        case 0x1327a8u: goto label_1327a8;
        case 0x1327b8u: goto label_1327b8;
        default: break;
    }

    ctx->pc = 0x132778u;

    // 0x132778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13277c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x132784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132788: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x132788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x13278c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13278Cu;
    {
        const bool branch_taken_0x13278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13278c) {
            ctx->pc = 0x132790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13278Cu;
            // 0x132790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1327BCu;
            goto label_1327bc;
        }
    }
    ctx->pc = 0x132794u;
    // 0x132794: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x132794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x132798: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132798u;
    {
        const bool branch_taken_0x132798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132798u;
        // 0x13279c: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132798) {
            ctx->pc = 0x1327B8u;
            goto label_1327b8;
        }
    }
    ctx->pc = 0x1327A0u;
    // 0x1327a0: 0xc04b39e  jal         func_12CE78
    ctx->pc = 0x1327A0u;
    SET_GPR_U32(ctx, 31, 0x1327A8u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x1327A0u, 0x1327A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1327A8u;
label_1327a8:
    // 0x1327a8: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1327A8u;
    {
        const bool branch_taken_0x1327a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1327ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327A8u;
        // 0x1327ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327a8) {
            ctx->pc = 0x1327BCu;
            goto label_1327bc;
        }
    }
    ctx->pc = 0x1327B0u;
    // 0x1327b0: 0xc04cf84  jal         func_133E10
    ctx->pc = 0x1327B0u;
    SET_GPR_U32(ctx, 31, 0x1327B8u);
    ctx->pc = 0x1327B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1327B0u;
    // 0x1327b4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133E10u, 0x1327B0u, 0x1327B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1327B8u;
label_1327b8:
    // 0x1327b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1327b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1327bc:
    // 0x1327bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1327bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1327c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1327C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1327C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327C0u;
        // 0x1327c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1327C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1327C8u;
}
