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

// Function: sub_00350CA8
// Address: 0x350ca8 - 0x350ce0
void sub_00350CA8_0x350ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350CA8_0x350ca8");
#endif

    switch (ctx->pc) {
        case 0x350cb8u: goto label_350cb8;
        case 0x350cc8u: goto label_350cc8;
        default: break;
    }

    ctx->pc = 0x350ca8u;

    // 0x350ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350cb0: 0xc0d4306  jal         func_350C18
    ctx->pc = 0x350CB0u;
    SET_GPR_U32(ctx, 31, 0x350CB8u);
    ctx->pc = 0x350C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C18u, 0x350CB0u, 0x350CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CB8u;
label_350cb8:
    // 0x350cb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x350CB8u;
    {
        const bool branch_taken_0x350cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350cb8) {
            ctx->pc = 0x350CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350CB8u;
            // 0x350cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CD0u;
            goto label_350cd0;
        }
    }
    ctx->pc = 0x350CC0u;
    // 0x350cc0: 0xc0d4338  jal         func_350CE0
    ctx->pc = 0x350CC0u;
    SET_GPR_U32(ctx, 31, 0x350CC8u);
    ctx->pc = 0x350CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CC0u;
    // 0x350cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CE0u, 0x350CC0u, 0x350CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CC8u;
label_350cc8:
    // 0x350cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x350CC8u;
    {
        const bool branch_taken_0x350cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CC8u;
        // 0x350ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350cc8) {
            ctx->pc = 0x350CD4u;
            goto label_350cd4;
        }
    }
    ctx->pc = 0x350CD0u;
label_350cd0:
    // 0x350cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350cd4:
    // 0x350cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x350CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CD4u;
        // 0x350cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350CDCu;
    // 0x350cdc: 0x0  nop
    ctx->pc = 0x350cdcu;
    // NOP
    ctx->pc = 0x350ce0u;
}
