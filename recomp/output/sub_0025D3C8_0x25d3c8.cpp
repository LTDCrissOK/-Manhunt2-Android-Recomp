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

// Function: sub_0025D3C8
// Address: 0x25d3c8 - 0x25d410
void sub_0025D3C8_0x25d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D3C8_0x25d3c8");
#endif

    switch (ctx->pc) {
        case 0x25d3f0u: goto label_25d3f0;
        case 0x25d3fcu: goto label_25d3fc;
        default: break;
    }

    ctx->pc = 0x25d3c8u;

    // 0x25d3c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d3cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x25d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x25d3d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d3d4: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x25d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x25d3d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25d3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25d3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3e8: 0xc097342  jal         func_25CD08
    ctx->pc = 0x25D3E8u;
    SET_GPR_U32(ctx, 31, 0x25D3F0u);
    ctx->pc = 0x25D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3E8u;
    // 0x25d3ec: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD08u, 0x25D3E8u, 0x25D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3F0u;
label_25d3f0:
    // 0x25d3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3f4: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x25D3F4u;
    SET_GPR_U32(ctx, 31, 0x25D3FCu);
    ctx->pc = 0x25D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3F4u;
    // 0x25d3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x25D3F4u, 0x25D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3FCu;
label_25d3fc:
    // 0x25d3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25d400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25d404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d408: 0x3e00008  jr          $ra
    ctx->pc = 0x25D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D408u;
        // 0x25d40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D410u;
}
