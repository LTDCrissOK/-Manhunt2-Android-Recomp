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

// Function: sub_002AF8B0
// Address: 0x2af8b0 - 0x2af8f8
void sub_002AF8B0_0x2af8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF8B0_0x2af8b0");
#endif

    switch (ctx->pc) {
        case 0x2af8d4u: goto label_2af8d4;
        default: break;
    }

    ctx->pc = 0x2af8b0u;

    // 0x2af8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2af8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2af8c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2af8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2af8c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2af8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2af8c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2af8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2af8cc: 0xc0abe3e  jal         func_2AF8F8
    ctx->pc = 0x2AF8CCu;
    SET_GPR_U32(ctx, 31, 0x2AF8D4u);
    ctx->pc = 0x2AF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8CCu;
    // 0x2af8d0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x2AF8CCu, 0x2AF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8D4u;
label_2af8d4:
    // 0x2af8d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2af8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2af8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2af8dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2af8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2af8e0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2af8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2af8e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af8e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2af8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8ECu;
        // 0x2af8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF8F4u;
    // 0x2af8f4: 0x0  nop
    ctx->pc = 0x2af8f4u;
    // NOP
    ctx->pc = 0x2af8f8u;
}
