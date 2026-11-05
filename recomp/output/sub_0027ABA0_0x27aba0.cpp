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

// Function: sub_0027ABA0
// Address: 0x27aba0 - 0x27abd0
void sub_0027ABA0_0x27aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ABA0_0x27aba0");
#endif

    switch (ctx->pc) {
        case 0x27abbcu: goto label_27abbc;
        default: break;
    }

    ctx->pc = 0x27aba0u;

    // 0x27aba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27aba4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x27aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x27aba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27abac: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x27abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
    // 0x27abb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27abb4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x27ABB4u;
    SET_GPR_U32(ctx, 31, 0x27ABBCu);
    ctx->pc = 0x27ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ABB4u;
    // 0x27abb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x27ABB4u, 0x27ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ABBCu;
label_27abbc:
    // 0x27abbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27abbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27abc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27abc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x27ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABC8u;
        // 0x27abcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ABD0u;
}
