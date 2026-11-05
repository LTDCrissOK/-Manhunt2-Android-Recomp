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

// Function: sub_0030B8C8
// Address: 0x30b8c8 - 0x30b8f8
void sub_0030B8C8_0x30b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B8C8_0x30b8c8");
#endif

    switch (ctx->pc) {
        case 0x30b8e0u: goto label_30b8e0;
        default: break;
    }

    ctx->pc = 0x30b8c8u;

    // 0x30b8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30b8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30b8cc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x30b8ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30b8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30b8d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30b8d8: 0xc0c23da  jal         func_308F68
    ctx->pc = 0x30B8D8u;
    SET_GPR_U32(ctx, 31, 0x30B8E0u);
    ctx->pc = 0x30B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B8D8u;
    // 0x30b8dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F68u, 0x30B8D8u, 0x30B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8E0u;
label_30b8e0:
    // 0x30b8e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30b8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8ECu;
        // 0x30b8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B8F4u;
    // 0x30b8f4: 0x0  nop
    ctx->pc = 0x30b8f4u;
    // NOP
    ctx->pc = 0x30b8f8u;
}
