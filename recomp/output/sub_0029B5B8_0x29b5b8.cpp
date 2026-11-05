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

// Function: sub_0029B5B8
// Address: 0x29b5b8 - 0x29b608
void sub_0029B5B8_0x29b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B5B8_0x29b5b8");
#endif

    switch (ctx->pc) {
        case 0x29b5d8u: goto label_29b5d8;
        case 0x29b5f0u: goto label_29b5f0;
        default: break;
    }

    ctx->pc = 0x29b5b8u;

    // 0x29b5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b5c8: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x29b5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b5cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b5d0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29B5D0u;
    SET_GPR_U32(ctx, 31, 0x29B5D8u);
    ctx->pc = 0x29B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B5D0u;
    // 0x29b5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29B5D0u, 0x29B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B5D8u;
label_29b5d8:
    // 0x29b5d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b5dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29b5e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29b5e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5e8: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x29B5E8u;
    SET_GPR_U32(ctx, 31, 0x29B5F0u);
    ctx->pc = 0x29B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B5E8u;
    // 0x29b5ec: 0x24a5bed8  addiu       $a1, $a1, -0x4128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29B5E8u, 0x29B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B5F0u;
label_29b5f0:
    // 0x29b5f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29b5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b5fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b600: 0x3e00008  jr          $ra
    ctx->pc = 0x29B600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B600u;
        // 0x29b604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B608u;
}
