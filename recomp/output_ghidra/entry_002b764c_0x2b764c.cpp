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

// Function: entry_002b764c
// Address: 0x2b764c - 0x2b7678
void entry_002b764c_0x2b764c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b764c_0x2b764c");
#endif

    switch (ctx->pc) {
        case 0x2b7660u: goto label_2b7660;
        default: break;
    }

    ctx->pc = 0x2b764cu;

    // 0x2b764c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2b764cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2b7650: 0x24c6fb98  addiu       $a2, $a2, -0x468
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966168));
    // 0x2b7654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7658: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x2B7658u;
    SET_GPR_U32(ctx, 31, 0x2B7660u);
    ctx->pc = 0x2B765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7658u;
    // 0x2b765c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2B7658u, 0x2B7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7660u;
label_2b7660:
    // 0x2b7660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7664: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b7664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b7668: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x2b7668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2b766c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B766Cu;
        // 0x2b7670: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7674u;
    // 0x2b7674: 0x0  nop
    ctx->pc = 0x2b7674u;
    // NOP
    ctx->pc = 0x2b7678u;
}
