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

// Function: sub_00201C00
// Address: 0x201c00 - 0x201c30
void sub_00201C00_0x201c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C00_0x201c00");
#endif

    switch (ctx->pc) {
        case 0x201c24u: goto label_201c24;
        default: break;
    }

    ctx->pc = 0x201c00u;

    // 0x201c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c04: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201c04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201c10: 0x8c8401f4  lw          $a0, 0x1F4($a0)
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x201c14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201C14u;
    {
        const bool branch_taken_0x201c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C14u;
        // 0x201c18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c14) {
            ctx->pc = 0x201C28u;
            goto label_201c28;
        }
    }
    ctx->pc = 0x201C1Cu;
    // 0x201c1c: 0xc08288c  jal         func_20A230
    ctx->pc = 0x201C1Cu;
    SET_GPR_U32(ctx, 31, 0x201C24u);
    ctx->pc = 0x20A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A230u, 0x201C1Cu, 0x201C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C24u;
label_201c24:
    // 0x201c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201c28:
    // 0x201c28: 0x3e00008  jr          $ra
    ctx->pc = 0x201C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C28u;
        // 0x201c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C30u;
}
