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

// Function: sub_00294690
// Address: 0x294690 - 0x2946c0
void sub_00294690_0x294690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294690_0x294690");
#endif

    switch (ctx->pc) {
        case 0x2946b4u: goto label_2946b4;
        default: break;
    }

    ctx->pc = 0x294690u;

    // 0x294690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294694: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x294694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29469c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2946a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2946a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2946a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2946A4u;
    {
        const bool branch_taken_0x2946a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946A4u;
        // 0x2946a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946a4) {
            ctx->pc = 0x2946B8u;
            goto label_2946b8;
        }
    }
    ctx->pc = 0x2946ACu;
    // 0x2946ac: 0xc0a52a4  jal         func_294A90
    ctx->pc = 0x2946ACu;
    SET_GPR_U32(ctx, 31, 0x2946B4u);
    ctx->pc = 0x2946B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946ACu;
    // 0x2946b0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A90u, 0x2946ACu, 0x2946B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946B4u;
label_2946b4:
    // 0x2946b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2946b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2946b8:
    // 0x2946b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2946B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946B8u;
        // 0x2946bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946C0u;
}
