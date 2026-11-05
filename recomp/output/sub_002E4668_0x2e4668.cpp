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

// Function: sub_002E4668
// Address: 0x2e4668 - 0x2e4690
void sub_002E4668_0x2e4668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4668_0x2e4668");
#endif

    switch (ctx->pc) {
        case 0x2e4680u: goto label_2e4680;
        default: break;
    }

    ctx->pc = 0x2e4668u;

    // 0x2e4668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e466c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2e466cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e4670: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4670u;
    {
        const bool branch_taken_0x2e4670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4670u;
        // 0x2e4674: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4670) {
            ctx->pc = 0x2E4680u;
            goto label_2e4680;
        }
    }
    ctx->pc = 0x2E4678u;
    // 0x2e4678: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2E4678u;
    SET_GPR_U32(ctx, 31, 0x2E4680u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2E4678u, 0x2E4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4680u;
label_2e4680:
    // 0x2e4680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4684: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4684u;
        // 0x2e4688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E468Cu;
    // 0x2e468c: 0x0  nop
    ctx->pc = 0x2e468cu;
    // NOP
    ctx->pc = 0x2e4690u;
}
