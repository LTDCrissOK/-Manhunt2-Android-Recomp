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

// Function: sub_002AC3C0
// Address: 0x2ac3c0 - 0x2ac438
void sub_002AC3C0_0x2ac3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC3C0_0x2ac3c0");
#endif

    switch (ctx->pc) {
        case 0x2ac408u: goto label_2ac408;
        case 0x2ac414u: goto label_2ac414;
        case 0x2ac420u: goto label_2ac420;
        default: break;
    }

    ctx->pc = 0x2ac3c0u;

    // 0x2ac3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac3c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2ac3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac3cc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2ac3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2ac3d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ac3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ac3d4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x2ac3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x2ac3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3e0: 0x24423820  addiu       $v0, $v0, 0x3820
    ctx->pc = 0x2ac3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14368));
    // 0x2ac3e4: 0x24633810  addiu       $v1, $v1, 0x3810
    ctx->pc = 0x2ac3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14352));
    // 0x2ac3e8: 0x24c63830  addiu       $a2, $a2, 0x3830
    ctx->pc = 0x2ac3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14384));
    // 0x2ac3ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ac3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3f0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ac3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ac3f4: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2ac3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2ac3f8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2ac3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2ac3fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac400: 0xc0f8dc0  jal         func_3E3700
    ctx->pc = 0x2AC400u;
    SET_GPR_U32(ctx, 31, 0x2AC408u);
    ctx->pc = 0x2AC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC400u;
    // 0x2ac404: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3700u, 0x2AC400u, 0x2AC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC408u;
label_2ac408:
    // 0x2ac408: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2ac408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ac40c: 0xc0f8da2  jal         func_3E3688
    ctx->pc = 0x2AC40Cu;
    SET_GPR_U32(ctx, 31, 0x2AC414u);
    ctx->pc = 0x2AC410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC40Cu;
    // 0x2ac410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3688u, 0x2AC40Cu, 0x2AC414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC414u;
label_2ac414:
    // 0x2ac414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac418: 0xc0ab420  jal         func_2AD080
    ctx->pc = 0x2AC418u;
    SET_GPR_U32(ctx, 31, 0x2AC420u);
    ctx->pc = 0x2AC41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC418u;
    // 0x2ac41c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD080u, 0x2AC418u, 0x2AC420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC420u;
label_2ac420:
    // 0x2ac420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ac424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac42c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC42Cu;
        // 0x2ac430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC434u;
    // 0x2ac434: 0x0  nop
    ctx->pc = 0x2ac434u;
    // NOP
    ctx->pc = 0x2ac438u;
}
