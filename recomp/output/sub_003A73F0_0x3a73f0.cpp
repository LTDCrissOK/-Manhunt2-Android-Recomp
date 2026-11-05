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

// Function: sub_003A73F0
// Address: 0x3a73f0 - 0x3a7428
void sub_003A73F0_0x3a73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A73F0_0x3a73f0");
#endif

    switch (ctx->pc) {
        case 0x3a73f0u: goto label_3a73f0;
        case 0x3a73f4u: goto label_3a73f4;
        case 0x3a73f8u: goto label_3a73f8;
        case 0x3a73fcu: goto label_3a73fc;
        case 0x3a7400u: goto label_3a7400;
        case 0x3a7404u: goto label_3a7404;
        case 0x3a7408u: goto label_3a7408;
        case 0x3a740cu: goto label_3a740c;
        case 0x3a7410u: goto label_3a7410;
        case 0x3a7414u: goto label_3a7414;
        case 0x3a7418u: goto label_3a7418;
        case 0x3a741cu: goto label_3a741c;
        case 0x3a7420u: goto label_3a7420;
        case 0x3a7424u: goto label_3a7424;
        default: break;
    }

    ctx->pc = 0x3a73f0u;

label_3a73f0:
    // 0x3a73f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a73f4:
    // 0x3a73f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a73f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a73f8:
    // 0x3a73f8: 0x8c463e84  lw          $a2, 0x3E84($v0)
    ctx->pc = 0x3a73f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16004)));
label_3a73fc:
    // 0x3a73fc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_3a7400:
    if (ctx->pc == 0x3A7400u) {
        ctx->pc = 0x3A7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73FCu;
        // 0x3a7400: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7404u;
        goto label_3a7404;
    }
    ctx->pc = 0x3A73FCu;
    {
        const bool branch_taken_0x3a73fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73FCu;
        // 0x3a7400: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73fc) {
            ctx->pc = 0x3A7418u;
            goto label_3a7418;
        }
    }
    ctx->pc = 0x3A7404u;
label_3a7404:
    // 0x3a7404: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a7404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a7408:
    // 0x3a7408: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a7408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_3a740c:
    // 0x3a740c: 0x8c443e88  lw          $a0, 0x3E88($v0)
    ctx->pc = 0x3a740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16008)));
label_3a7410:
    // 0x3a7410: 0xc0f809  jalr        $a2
label_3a7414:
    if (ctx->pc == 0x3A7414u) {
        ctx->pc = 0x3A7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7410u;
        // 0x3a7414: 0x8c653e8c  lw          $a1, 0x3E8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7418u;
        goto label_3a7418;
    }
    ctx->pc = 0x3A7410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3A7418u);
        ctx->pc = 0x3A7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7410u;
        // 0x3a7414: 0x8c653e8c  lw          $a1, 0x3E8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16012)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7410u, 0x3A7418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7418u;
label_3a7418:
    // 0x3a7418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a741c:
    // 0x3a741c: 0x3e00008  jr          $ra
label_3a7420:
    if (ctx->pc == 0x3A7420u) {
        ctx->pc = 0x3A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A741Cu;
        // 0x3a7420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7424u;
        goto label_3a7424;
    }
    ctx->pc = 0x3A741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A741Cu;
        // 0x3a7420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7424u;
label_3a7424:
    // 0x3a7424: 0x0  nop
    ctx->pc = 0x3a7424u;
    // NOP
    ctx->pc = 0x3a7428u;
}
