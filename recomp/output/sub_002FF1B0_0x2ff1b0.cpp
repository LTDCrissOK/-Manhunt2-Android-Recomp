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

// Function: sub_002FF1B0
// Address: 0x2ff1b0 - 0x2ff200
void sub_002FF1B0_0x2ff1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF1B0_0x2ff1b0");
#endif

    switch (ctx->pc) {
        case 0x2ff1d8u: goto label_2ff1d8;
        case 0x2ff1e0u: goto label_2ff1e0;
        case 0x2ff1ecu: goto label_2ff1ec;
        default: break;
    }

    ctx->pc = 0x2ff1b0u;

    // 0x2ff1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ff1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ff1b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2ff1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2ff1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff1bc: 0x24424030  addiu       $v0, $v0, 0x4030
    ctx->pc = 0x2ff1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x2ff1c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ff1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ff1c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ff1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ff1cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ff1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1d0: 0xc0bfcae  jal         func_2FF2B8
    ctx->pc = 0x2FF1D0u;
    SET_GPR_U32(ctx, 31, 0x2FF1D8u);
    ctx->pc = 0x2FF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1D0u;
    // 0x2ff1d4: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF2B8u, 0x2FF1D0u, 0x2FF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1D8u;
label_2ff1d8:
    // 0x2ff1d8: 0xc0bfd1c  jal         func_2FF470
    ctx->pc = 0x2FF1D8u;
    SET_GPR_U32(ctx, 31, 0x2FF1E0u);
    ctx->pc = 0x2FF1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1D8u;
    // 0x2ff1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF470u, 0x2FF1D8u, 0x2FF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1E0u;
label_2ff1e0:
    // 0x2ff1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1e4: 0xc09c6d0  jal         func_271B40
    ctx->pc = 0x2FF1E4u;
    SET_GPR_U32(ctx, 31, 0x2FF1ECu);
    ctx->pc = 0x2FF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1E4u;
    // 0x2ff1e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271B40u, 0x2FF1E4u, 0x2FF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1ECu;
label_2ff1ec:
    // 0x2ff1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff1f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ff1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1F8u;
        // 0x2ff1fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF200u;
}
