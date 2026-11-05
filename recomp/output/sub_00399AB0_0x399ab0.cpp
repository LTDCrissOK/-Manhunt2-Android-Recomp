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

// Function: sub_00399AB0
// Address: 0x399ab0 - 0x399ae8
void sub_00399AB0_0x399ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399AB0_0x399ab0");
#endif

    switch (ctx->pc) {
        case 0x399ac4u: goto label_399ac4;
        case 0x399accu: goto label_399acc;
        case 0x399ad4u: goto label_399ad4;
        default: break;
    }

    ctx->pc = 0x399ab0u;

    // 0x399ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399ab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399abc: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399ABCu;
    SET_GPR_U32(ctx, 31, 0x399AC4u);
    ctx->pc = 0x399AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399ABCu;
    // 0x399ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399ABCu, 0x399AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AC4u;
label_399ac4:
    // 0x399ac4: 0xc0e66ba  jal         func_399AE8
    ctx->pc = 0x399AC4u;
    SET_GPR_U32(ctx, 31, 0x399ACCu);
    ctx->pc = 0x399AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AC4u;
    // 0x399ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AE8u, 0x399AC4u, 0x399ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399ACCu;
label_399acc:
    // 0x399acc: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x399ACCu;
    SET_GPR_U32(ctx, 31, 0x399AD4u);
    ctx->pc = 0x399AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399ACCu;
    // 0x399ad0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x399ACCu, 0x399AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AD4u;
label_399ad4:
    // 0x399ad4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399ad8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x399AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AE0u;
        // 0x399ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399AE8u;
}
