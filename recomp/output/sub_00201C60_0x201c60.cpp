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

// Function: sub_00201C60
// Address: 0x201c60 - 0x201c90
void sub_00201C60_0x201c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C60_0x201c60");
#endif

    switch (ctx->pc) {
        case 0x201c84u: goto label_201c84;
        default: break;
    }

    ctx->pc = 0x201c60u;

    // 0x201c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201c70: 0x8c8401f4  lw          $a0, 0x1F4($a0)
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x201c74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201C74u;
    {
        const bool branch_taken_0x201c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C74u;
        // 0x201c78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c74) {
            ctx->pc = 0x201C88u;
            goto label_201c88;
        }
    }
    ctx->pc = 0x201C7Cu;
    // 0x201c7c: 0xc082880  jal         func_20A200
    ctx->pc = 0x201C7Cu;
    SET_GPR_U32(ctx, 31, 0x201C84u);
    ctx->pc = 0x20A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A200u, 0x201C7Cu, 0x201C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C84u;
label_201c84:
    // 0x201c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201c88:
    // 0x201c88: 0x3e00008  jr          $ra
    ctx->pc = 0x201C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C88u;
        // 0x201c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C90u;
}
