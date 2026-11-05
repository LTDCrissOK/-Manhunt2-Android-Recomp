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

// Function: sub_0013E3F0
// Address: 0x13e3f0 - 0x13e438
void sub_0013E3F0_0x13e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E3F0_0x13e3f0");
#endif

    switch (ctx->pc) {
        case 0x13e410u: goto label_13e410;
        case 0x13e420u: goto label_13e420;
        default: break;
    }

    ctx->pc = 0x13e3f0u;

    // 0x13e3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e3f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13e3f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e3fc: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x13e400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e408: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x13E408u;
    SET_GPR_U32(ctx, 31, 0x13E410u);
    ctx->pc = 0x13E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E408u;
    // 0x13e40c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x13E408u, 0x13E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E410u;
label_13e410:
    // 0x13e410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e418: 0xc045edc  jal         func_117B70
    ctx->pc = 0x13E418u;
    SET_GPR_U32(ctx, 31, 0x13E420u);
    ctx->pc = 0x13E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E418u;
    // 0x13e41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x13E418u, 0x13E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E420u;
label_13e420:
    // 0x13e420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e430: 0x3e00008  jr          $ra
    ctx->pc = 0x13E430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E430u;
        // 0x13e434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E438u;
}
