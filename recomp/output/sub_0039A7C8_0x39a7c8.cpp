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

// Function: sub_0039A7C8
// Address: 0x39a7c8 - 0x39a800
void sub_0039A7C8_0x39a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A7C8_0x39a7c8");
#endif

    switch (ctx->pc) {
        case 0x39a7dcu: goto label_39a7dc;
        case 0x39a7e4u: goto label_39a7e4;
        case 0x39a7ecu: goto label_39a7ec;
        default: break;
    }

    ctx->pc = 0x39a7c8u;

    // 0x39a7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a7d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39a7d4: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39A7D4u;
    SET_GPR_U32(ctx, 31, 0x39A7DCu);
    ctx->pc = 0x39A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A7D4u;
    // 0x39a7d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39A7D4u, 0x39A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7DCu;
label_39a7dc:
    // 0x39a7dc: 0xc0e6a00  jal         func_39A800
    ctx->pc = 0x39A7DCu;
    SET_GPR_U32(ctx, 31, 0x39A7E4u);
    ctx->pc = 0x39A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A7DCu;
    // 0x39a7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A800u, 0x39A7DCu, 0x39A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7E4u;
label_39a7e4:
    // 0x39a7e4: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x39A7E4u;
    SET_GPR_U32(ctx, 31, 0x39A7ECu);
    ctx->pc = 0x39A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A7E4u;
    // 0x39a7e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x39A7E4u, 0x39A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7ECu;
label_39a7ec:
    // 0x39a7ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39a7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a7f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x39A7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7F8u;
        // 0x39a7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A800u;
}
