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

// Function: entry_00156328
// Address: 0x156328 - 0x156350
void entry_00156328_0x156328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156328_0x156328");
#endif

    switch (ctx->pc) {
        case 0x156338u: goto label_156338;
        default: break;
    }

    ctx->pc = 0x156328u;

    // 0x156328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15632c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156330: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x156330u;
    SET_GPR_U32(ctx, 31, 0x156338u);
    ctx->pc = 0x156334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156330u;
    // 0x156334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x156330u, 0x156338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156338u;
label_156338:
    // 0x156338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x156338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15633c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15633cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156340: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x156340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156344: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x156344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x156348: 0x3e00008  jr          $ra
    ctx->pc = 0x156348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156348u;
        // 0x15634c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156350u;
}
