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

// Function: sub_0014A3E8
// Address: 0x14a3e8 - 0x14a430
void sub_0014A3E8_0x14a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A3E8_0x14a3e8");
#endif

    switch (ctx->pc) {
        case 0x14a40cu: goto label_14a40c;
        case 0x14a41cu: goto label_14a41c;
        default: break;
    }

    ctx->pc = 0x14a3e8u;

    // 0x14a3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a3ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a3f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3fc: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14a3fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14a400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a404: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14A404u;
    SET_GPR_U32(ctx, 31, 0x14A40Cu);
    ctx->pc = 0x14A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A404u;
    // 0x14a408: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14A404u, 0x14A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A40Cu;
label_14a40c:
    // 0x14a40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a414: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14A414u;
    SET_GPR_U32(ctx, 31, 0x14A41Cu);
    ctx->pc = 0x14A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A414u;
    // 0x14a418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14A414u, 0x14A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A41Cu;
label_14a41c:
    // 0x14a41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a428: 0x3e00008  jr          $ra
    ctx->pc = 0x14A428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A428u;
        // 0x14a42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A430u;
}
