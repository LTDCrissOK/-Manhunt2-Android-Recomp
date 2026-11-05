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

// Function: sub_0015CF40
// Address: 0x15cf40 - 0x15cf70
void sub_0015CF40_0x15cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF40_0x15cf40");
#endif

    switch (ctx->pc) {
        case 0x15cf58u: goto label_15cf58;
        default: break;
    }

    ctx->pc = 0x15cf40u;

    // 0x15cf40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cf44: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15cf44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cf48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15cf4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15cf50: 0xc0573a2  jal         func_15CE88
    ctx->pc = 0x15CF50u;
    SET_GPR_U32(ctx, 31, 0x15CF58u);
    ctx->pc = 0x15CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF50u;
    // 0x15cf54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CE88u, 0x15CF50u, 0x15CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF58u;
label_15cf58:
    // 0x15cf58: 0xae000b70  sw          $zero, 0xB70($s0)
    ctx->pc = 0x15cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 0));
    // 0x15cf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15cf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cf60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15cf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15cf64: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF64u;
        // 0x15cf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CF6Cu;
    // 0x15cf6c: 0x0  nop
    ctx->pc = 0x15cf6cu;
    // NOP
    ctx->pc = 0x15cf70u;
}
