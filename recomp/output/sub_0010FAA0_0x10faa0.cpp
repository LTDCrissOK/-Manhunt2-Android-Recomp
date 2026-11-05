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

// Function: sub_0010FAA0
// Address: 0x10faa0 - 0x10fae8
void sub_0010FAA0_0x10faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FAA0_0x10faa0");
#endif

    switch (ctx->pc) {
        case 0x10fadcu: goto label_10fadc;
        default: break;
    }

    ctx->pc = 0x10faa0u;

    // 0x10faa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10faa4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10faa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10faac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10fab0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10fab4: 0xac860218  sw          $a2, 0x218($a0)
    ctx->pc = 0x10fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 6));
    // 0x10fab8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10fabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10fac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10fac4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10fac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAC8u;
    {
        const bool branch_taken_0x10fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC8u;
        // 0x10facc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fac8) {
            ctx->pc = 0x10FAE0u;
            goto label_10fae0;
        }
    }
    ctx->pc = 0x10FAD0u;
    // 0x10fad0: 0x8c420ff0  lw          $v0, 0xFF0($v0)
    ctx->pc = 0x10fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4080)));
    // 0x10fad4: 0xc043970  jal         func_10E5C0
    ctx->pc = 0x10FAD4u;
    SET_GPR_U32(ctx, 31, 0x10FADCu);
    ctx->pc = 0x10FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAD4u;
    // 0x10fad8: 0xac460220  sw          $a2, 0x220($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5C0u, 0x10FAD4u, 0x10FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FADCu;
label_10fadc:
    // 0x10fadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fae0:
    // 0x10fae0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAE0u;
        // 0x10fae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FAE8u;
}
