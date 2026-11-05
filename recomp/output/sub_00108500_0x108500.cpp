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

// Function: sub_00108500
// Address: 0x108500 - 0x108528
void sub_00108500_0x108500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108500_0x108500");
#endif

    switch (ctx->pc) {
        case 0x108518u: goto label_108518;
        default: break;
    }

    ctx->pc = 0x108500u;

    // 0x108500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108504: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108508u;
    {
        const bool branch_taken_0x108508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108508u;
        // 0x10850c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108508) {
            ctx->pc = 0x108518u;
            goto label_108518;
        }
    }
    ctx->pc = 0x108510u;
    // 0x108510: 0xc05fd24  jal         func_17F490
    ctx->pc = 0x108510u;
    SET_GPR_U32(ctx, 31, 0x108518u);
    ctx->pc = 0x108514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108510u;
    // 0x108514: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F490u, 0x108510u, 0x108518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108518u;
label_108518:
    // 0x108518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10851c: 0x3e00008  jr          $ra
    ctx->pc = 0x10851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10851Cu;
        // 0x108520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108524u;
    // 0x108524: 0x0  nop
    ctx->pc = 0x108524u;
    // NOP
    ctx->pc = 0x108528u;
}
