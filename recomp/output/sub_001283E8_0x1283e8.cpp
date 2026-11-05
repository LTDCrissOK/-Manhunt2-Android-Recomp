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

// Function: sub_001283E8
// Address: 0x1283e8 - 0x128430
void sub_001283E8_0x1283e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001283E8_0x1283e8");
#endif

    switch (ctx->pc) {
        case 0x128400u: goto label_128400;
        case 0x12840cu: goto label_12840c;
        case 0x12841cu: goto label_12841c;
        default: break;
    }

    ctx->pc = 0x1283e8u;

    // 0x1283e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1283e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1283ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1283ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1283f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1283f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1283f8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1283F8u;
    SET_GPR_U32(ctx, 31, 0x128400u);
    ctx->pc = 0x1283FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283F8u;
    // 0x1283fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1283F8u, 0x128400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128400u;
label_128400:
    // 0x128400: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128404: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x128404u;
    SET_GPR_U32(ctx, 31, 0x12840Cu);
    ctx->pc = 0x128408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128404u;
    // 0x128408: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x128404u, 0x12840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12840Cu;
label_12840c:
    // 0x12840c: 0xae020e84  sw          $v0, 0xE84($s0)
    ctx->pc = 0x12840cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3716), GPR_U32(ctx, 2));
    // 0x128410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128414: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128414u;
    SET_GPR_U32(ctx, 31, 0x12841Cu);
    ctx->pc = 0x128418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128414u;
    // 0x128418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128414u, 0x12841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12841Cu;
label_12841c:
    // 0x12841c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12841cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128420: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x128420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128424: 0x3e00008  jr          $ra
    ctx->pc = 0x128424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128424u;
        // 0x128428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12842Cu;
    // 0x12842c: 0x0  nop
    ctx->pc = 0x12842cu;
    // NOP
    ctx->pc = 0x128430u;
}
