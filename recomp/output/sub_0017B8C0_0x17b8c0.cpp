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

// Function: sub_0017B8C0
// Address: 0x17b8c0 - 0x17b8f8
void sub_0017B8C0_0x17b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8C0_0x17b8c0");
#endif

    switch (ctx->pc) {
        case 0x17b8d8u: goto label_17b8d8;
        case 0x17b8e4u: goto label_17b8e4;
        default: break;
    }

    ctx->pc = 0x17b8c0u;

    // 0x17b8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b8c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17b8c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b8cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b8d0: 0xc041e04  jal         func_107810
    ctx->pc = 0x17B8D0u;
    SET_GPR_U32(ctx, 31, 0x17B8D8u);
    ctx->pc = 0x17B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8D0u;
    // 0x17b8d4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107810u, 0x17B8D0u, 0x17B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8D8u;
label_17b8d8:
    // 0x17b8d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8dc: 0xc05a5e2  jal         func_169788
    ctx->pc = 0x17B8DCu;
    SET_GPR_U32(ctx, 31, 0x17B8E4u);
    ctx->pc = 0x17B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8DCu;
    // 0x17b8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169788u, 0x17B8DCu, 0x17B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8E4u;
label_17b8e4:
    // 0x17b8e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8F0u;
        // 0x17b8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8F8u;
}
