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

// Function: sub_00170460
// Address: 0x170460 - 0x170498
void sub_00170460_0x170460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170460_0x170460");
#endif

    switch (ctx->pc) {
        case 0x170460u: goto label_170460;
        case 0x170464u: goto label_170464;
        case 0x170468u: goto label_170468;
        case 0x17046cu: goto label_17046c;
        case 0x170470u: goto label_170470;
        case 0x170474u: goto label_170474;
        case 0x170478u: goto label_170478;
        case 0x17047cu: goto label_17047c;
        case 0x170480u: goto label_170480;
        case 0x170484u: goto label_170484;
        case 0x170488u: goto label_170488;
        case 0x17048cu: goto label_17048c;
        case 0x170490u: goto label_170490;
        case 0x170494u: goto label_170494;
        default: break;
    }

    ctx->pc = 0x170460u;

label_170460:
    // 0x170460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_170464:
    // 0x170464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170468:
    // 0x170468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17046c:
    // 0x17046c: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x17046cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_170470:
    // 0x170470: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_170474:
    if (ctx->pc == 0x170474u) {
        ctx->pc = 0x170474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170470u;
        // 0x170474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170478u;
        goto label_170478;
    }
    ctx->pc = 0x170470u;
    {
        const bool branch_taken_0x170470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x170474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170470u;
        // 0x170474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170470) {
            ctx->pc = 0x170490u;
            goto label_170490;
        }
    }
    ctx->pc = 0x170478u;
label_170478:
    // 0x170478: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x170478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_17047c:
    // 0x17047c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_170480:
    // 0x170480: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x170480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_170484:
    // 0x170484: 0x40f809  jalr        $v0
label_170488:
    if (ctx->pc == 0x170488u) {
        ctx->pc = 0x17048Cu;
        goto label_17048c;
    }
    ctx->pc = 0x170484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17048Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170484u, 0x17048Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17048Cu;
label_17048c:
    // 0x17048c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17048cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170490:
    // 0x170490: 0x3e00008  jr          $ra
label_170494:
    if (ctx->pc == 0x170494u) {
        ctx->pc = 0x170494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170490u;
        // 0x170494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170498u;
        goto label_fallthrough_0x170490;
    }
    ctx->pc = 0x170490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170490u;
        // 0x170494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170490:
    ctx->pc = 0x170498u;
}
