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

// Function: sub_00160438
// Address: 0x160438 - 0x160488
void sub_00160438_0x160438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160438_0x160438");
#endif

    switch (ctx->pc) {
        case 0x16047cu: goto label_16047c;
        default: break;
    }

    ctx->pc = 0x160438u;

    // 0x160438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16043c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x16043cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x160440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160444: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x160444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x160448: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x160448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16044c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x160450: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x160450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160454: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160454u;
    {
        const bool branch_taken_0x160454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160454u;
        // 0x160458: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160454) {
            ctx->pc = 0x16047Cu;
            goto label_16047c;
        }
    }
    ctx->pc = 0x16045Cu;
    // 0x16045c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16045cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x160460: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x160460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x160464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160468: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16046c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16046Cu;
    {
        const bool branch_taken_0x16046c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16046Cu;
        // 0x160470: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16046c) {
            ctx->pc = 0x160480u;
            goto label_160480;
        }
    }
    ctx->pc = 0x160474u;
    // 0x160474: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x160474u;
    SET_GPR_U32(ctx, 31, 0x16047Cu);
    ctx->pc = 0x160478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160474u;
    // 0x160478: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x160474u, 0x16047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16047Cu;
label_16047c:
    // 0x16047c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16047cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160480:
    // 0x160480: 0x3e00008  jr          $ra
    ctx->pc = 0x160480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160480u;
        // 0x160484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160488u;
}
