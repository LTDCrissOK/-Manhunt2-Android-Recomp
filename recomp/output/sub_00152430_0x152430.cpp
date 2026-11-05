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

// Function: sub_00152430
// Address: 0x152430 - 0x152480
void sub_00152430_0x152430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152430_0x152430");
#endif

    switch (ctx->pc) {
        case 0x152474u: goto label_152474;
        default: break;
    }

    ctx->pc = 0x152430u;

    // 0x152430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152434: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x152434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15243c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15243cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152440: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x152440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152444: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x152444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x152448: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x152448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15244c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15244Cu;
    {
        const bool branch_taken_0x15244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15244Cu;
        // 0x152450: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15244c) {
            ctx->pc = 0x152474u;
            goto label_152474;
        }
    }
    ctx->pc = 0x152454u;
    // 0x152454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152458: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x152458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15245c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152460: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x152460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x152464: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152464u;
    {
        const bool branch_taken_0x152464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152464u;
        // 0x152468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152464) {
            ctx->pc = 0x152478u;
            goto label_152478;
        }
    }
    ctx->pc = 0x15246Cu;
    // 0x15246c: 0xc044394  jal         func_110E50
    ctx->pc = 0x15246Cu;
    SET_GPR_U32(ctx, 31, 0x152474u);
    ctx->pc = 0x152470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15246Cu;
    // 0x152470: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E50u, 0x15246Cu, 0x152474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152474u;
label_152474:
    // 0x152474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152478:
    // 0x152478: 0x3e00008  jr          $ra
    ctx->pc = 0x152478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152478u;
        // 0x15247c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152480u;
}
