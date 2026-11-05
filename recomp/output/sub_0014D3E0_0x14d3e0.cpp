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

// Function: sub_0014D3E0
// Address: 0x14d3e0 - 0x14d428
void sub_0014D3E0_0x14d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D3E0_0x14d3e0");
#endif

    switch (ctx->pc) {
        case 0x14d404u: goto label_14d404;
        case 0x14d414u: goto label_14d414;
        default: break;
    }

    ctx->pc = 0x14d3e0u;

    // 0x14d3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d3e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d3ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3f4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14d3f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14d3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d3fc: 0xc053690  jal         func_14DA40
    ctx->pc = 0x14D3FCu;
    SET_GPR_U32(ctx, 31, 0x14D404u);
    ctx->pc = 0x14D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3FCu;
    // 0x14d400: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA40u, 0x14D3FCu, 0x14D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D404u;
label_14d404:
    // 0x14d404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d40c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14D40Cu;
    SET_GPR_U32(ctx, 31, 0x14D414u);
    ctx->pc = 0x14D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D40Cu;
    // 0x14d410: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14D40Cu, 0x14D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D414u;
label_14d414:
    // 0x14d414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d420: 0x3e00008  jr          $ra
    ctx->pc = 0x14D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D420u;
        // 0x14d424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D428u;
}
