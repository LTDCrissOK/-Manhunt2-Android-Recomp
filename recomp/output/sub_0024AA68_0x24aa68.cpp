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

// Function: sub_0024AA68
// Address: 0x24aa68 - 0x24aa88
void sub_0024AA68_0x24aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AA68_0x24aa68");
#endif

    switch (ctx->pc) {
        case 0x24aa7cu: goto label_24aa7c;
        default: break;
    }

    ctx->pc = 0x24aa68u;

    // 0x24aa68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24aa6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24aa6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24aa74: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24AA74u;
    SET_GPR_U32(ctx, 31, 0x24AA7Cu);
    ctx->pc = 0x24AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA74u;
    // 0x24aa78: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24AA74u, 0x24AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA7Cu;
label_24aa7c:
    // 0x24aa7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aa80: 0x3e00008  jr          $ra
    ctx->pc = 0x24AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA80u;
        // 0x24aa84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AA88u;
}
