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

// Function: sub_00110930
// Address: 0x110930 - 0x110960
void sub_00110930_0x110930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110930_0x110930");
#endif

    switch (ctx->pc) {
        case 0x11094cu: goto label_11094c;
        default: break;
    }

    ctx->pc = 0x110930u;

    // 0x110930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110938: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x110938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11093c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11093Cu;
    {
        const bool branch_taken_0x11093c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11093Cu;
        // 0x110940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11093c) {
            ctx->pc = 0x110954u;
            goto label_110954;
        }
    }
    ctx->pc = 0x110944u;
    // 0x110944: 0xc05fc56  jal         func_17F158
    ctx->pc = 0x110944u;
    SET_GPR_U32(ctx, 31, 0x11094Cu);
    ctx->pc = 0x17F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F158u, 0x110944u, 0x11094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11094Cu;
label_11094c:
    // 0x11094c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11094Cu;
    {
        const bool branch_taken_0x11094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11094Cu;
        // 0x110950: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11094c) {
            ctx->pc = 0x110958u;
            goto label_110958;
        }
    }
    ctx->pc = 0x110954u;
label_110954:
    // 0x110954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110958:
    // 0x110958: 0x3e00008  jr          $ra
    ctx->pc = 0x110958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110958u;
        // 0x11095c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110960u;
}
