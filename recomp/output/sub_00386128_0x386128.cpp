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

// Function: sub_00386128
// Address: 0x386128 - 0x386170
void sub_00386128_0x386128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386128_0x386128");
#endif

    switch (ctx->pc) {
        case 0x386150u: goto label_386150;
        case 0x386160u: goto label_386160;
        default: break;
    }

    ctx->pc = 0x386128u;

    // 0x386128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38612c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x38612cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x386134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386138: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x386138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x38613c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x38613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x386140: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x386140u;
    {
        const bool branch_taken_0x386140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x386140) {
            ctx->pc = 0x386158u;
            goto label_386158;
        }
    }
    ctx->pc = 0x386148u;
    // 0x386148: 0xc0e171c  jal         func_385C70
    ctx->pc = 0x386148u;
    SET_GPR_U32(ctx, 31, 0x386150u);
    ctx->pc = 0x38614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386148u;
    // 0x38614c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385C70u, 0x386148u, 0x386150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386150u;
label_386150:
    // 0x386150: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386150u;
    {
        const bool branch_taken_0x386150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386150u;
        // 0x386154: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386150) {
            ctx->pc = 0x386164u;
            goto label_386164;
        }
    }
    ctx->pc = 0x386158u;
label_386158:
    // 0x386158: 0xc0e16c0  jal         func_385B00
    ctx->pc = 0x386158u;
    SET_GPR_U32(ctx, 31, 0x386160u);
    ctx->pc = 0x38615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386158u;
    // 0x38615c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385B00u, 0x386158u, 0x386160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386160u;
label_386160:
    // 0x386160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_386164:
    // 0x386164: 0x3e00008  jr          $ra
    ctx->pc = 0x386164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386164u;
        // 0x386168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38616Cu;
    // 0x38616c: 0x0  nop
    ctx->pc = 0x38616cu;
    // NOP
    ctx->pc = 0x386170u;
}
