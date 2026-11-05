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

// Function: sub_0035D868
// Address: 0x35d868 - 0x35d8b0
void sub_0035D868_0x35d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D868_0x35d868");
#endif

    switch (ctx->pc) {
        case 0x35d898u: goto label_35d898;
        default: break;
    }

    ctx->pc = 0x35d868u;

    // 0x35d868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d86c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x35d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x35d870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d874: 0x24424590  addiu       $v0, $v0, 0x4590
    ctx->pc = 0x35d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17808));
    // 0x35d878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d87c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35d880: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35d880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35d884: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x35d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35d888: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x35d888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x35d88c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x35d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x35d890: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35D890u;
    SET_GPR_U32(ctx, 31, 0x35D898u);
    ctx->pc = 0x35D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D890u;
    // 0x35d894: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35D890u, 0x35D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D898u;
label_35d898:
    // 0x35d898: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d89c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x35d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x35d8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d8a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35d8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35D8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8A8u;
        // 0x35d8ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D8B0u;
}
