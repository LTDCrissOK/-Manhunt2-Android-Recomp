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

// Function: sub_0035D1A0
// Address: 0x35d1a0 - 0x35d1e8
void sub_0035D1A0_0x35d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D1A0_0x35d1a0");
#endif

    switch (ctx->pc) {
        case 0x35d1c0u: goto label_35d1c0;
        case 0x35d1d0u: goto label_35d1d0;
        default: break;
    }

    ctx->pc = 0x35d1a0u;

    // 0x35d1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d1a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d1ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35d1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d1b8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x35D1B8u;
    SET_GPR_U32(ctx, 31, 0x35D1C0u);
    ctx->pc = 0x35D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1B8u;
    // 0x35d1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x35D1B8u, 0x35D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1C0u;
label_35d1c0:
    // 0x35d1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1c8: 0xc0d743c  jal         func_35D0F0
    ctx->pc = 0x35D1C8u;
    SET_GPR_U32(ctx, 31, 0x35D1D0u);
    ctx->pc = 0x35D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1C8u;
    // 0x35d1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0F0u, 0x35D1C8u, 0x35D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1D0u;
label_35d1d0:
    // 0x35d1d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x35d1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d1d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D1E0u;
        // 0x35d1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D1E8u;
}
