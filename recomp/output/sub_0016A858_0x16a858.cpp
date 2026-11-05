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

// Function: sub_0016A858
// Address: 0x16a858 - 0x16a890
void sub_0016A858_0x16a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A858_0x16a858");
#endif

    switch (ctx->pc) {
        case 0x16a874u: goto label_16a874;
        default: break;
    }

    ctx->pc = 0x16a858u;

    // 0x16a858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a860: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x16a860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x16a864: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A864u;
    {
        const bool branch_taken_0x16a864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a864) {
            ctx->pc = 0x16A868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A864u;
            // 0x16a868: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A880u;
            goto label_16a880;
        }
    }
    ctx->pc = 0x16A86Cu;
    // 0x16a86c: 0xc05ab90  jal         func_16AE40
    ctx->pc = 0x16A86Cu;
    SET_GPR_U32(ctx, 31, 0x16A874u);
    ctx->pc = 0x16AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE40u, 0x16A86Cu, 0x16A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A874u;
label_16a874:
    // 0x16a874: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x16a874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x16a878: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A878u;
    {
        const bool branch_taken_0x16a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A878u;
        // 0x16a87c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a878) {
            ctx->pc = 0x16A884u;
            goto label_16a884;
        }
    }
    ctx->pc = 0x16A880u;
label_16a880:
    // 0x16a880: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16a880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16a884:
    // 0x16a884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a888: 0x3e00008  jr          $ra
    ctx->pc = 0x16A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A888u;
        // 0x16a88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A890u;
}
