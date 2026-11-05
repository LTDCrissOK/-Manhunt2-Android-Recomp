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

// Function: sub_00308440
// Address: 0x308440 - 0x308488
void sub_00308440_0x308440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308440_0x308440");
#endif

    switch (ctx->pc) {
        case 0x308440u: goto label_308440;
        case 0x308444u: goto label_308444;
        case 0x308448u: goto label_308448;
        case 0x30844cu: goto label_30844c;
        case 0x308450u: goto label_308450;
        case 0x308454u: goto label_308454;
        case 0x308458u: goto label_308458;
        case 0x30845cu: goto label_30845c;
        case 0x308460u: goto label_308460;
        case 0x308464u: goto label_308464;
        case 0x308468u: goto label_308468;
        case 0x30846cu: goto label_30846c;
        case 0x308470u: goto label_308470;
        case 0x308474u: goto label_308474;
        case 0x308478u: goto label_308478;
        case 0x30847cu: goto label_30847c;
        case 0x308480u: goto label_308480;
        case 0x308484u: goto label_308484;
        default: break;
    }

    ctx->pc = 0x308440u;

label_308440:
    // 0x308440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_308444:
    // 0x308444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_308448:
    // 0x308448: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x308448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_30844c:
    // 0x30844c: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x30844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_308450:
    // 0x308450: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x308450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_308454:
    // 0x308454: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_308458:
    if (ctx->pc == 0x308458u) {
        ctx->pc = 0x308458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308454u;
        // 0x308458: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30845Cu;
        goto label_30845c;
    }
    ctx->pc = 0x308454u;
    {
        const bool branch_taken_0x308454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x308458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308454u;
        // 0x308458: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308454) {
            ctx->pc = 0x308470u;
            goto label_308470;
        }
    }
    ctx->pc = 0x30845Cu;
label_30845c:
    // 0x30845c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x30845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_308460:
    // 0x308460: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x308460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_308464:
    // 0x308464: 0x40f809  jalr        $v0
label_308468:
    if (ctx->pc == 0x308468u) {
        ctx->pc = 0x308468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308464u;
        // 0x308468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30846Cu;
        goto label_30846c;
    }
    ctx->pc = 0x308464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30846Cu);
        ctx->pc = 0x308468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308464u;
        // 0x308468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308464u, 0x30846Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30846Cu;
label_30846c:
    // 0x30846c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30846cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308470:
    // 0x308470: 0x3e00008  jr          $ra
label_308474:
    if (ctx->pc == 0x308474u) {
        ctx->pc = 0x308474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308470u;
        // 0x308474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308478u;
        goto label_308478;
    }
    ctx->pc = 0x308470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308470u;
        // 0x308474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308478u;
label_308478:
    // 0x308478: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30847c:
    // 0x30847c: 0x0  nop
    ctx->pc = 0x30847cu;
    // NOP
label_308480:
    // 0x308480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_308484:
    // 0x308484: 0x0  nop
    ctx->pc = 0x308484u;
    // NOP
    ctx->pc = 0x308488u;
}
