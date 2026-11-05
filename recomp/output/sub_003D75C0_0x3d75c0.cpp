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

// Function: sub_003D75C0
// Address: 0x3d75c0 - 0x3d7610
void sub_003D75C0_0x3d75c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D75C0_0x3d75c0");
#endif

    switch (ctx->pc) {
        case 0x3d75e4u: goto label_3d75e4;
        case 0x3d75fcu: goto label_3d75fc;
        default: break;
    }

    ctx->pc = 0x3d75c0u;

    // 0x3d75c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d75c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d75c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d75c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d75c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d75cc: 0x8c627168  lw          $v0, 0x7168($v1)
    ctx->pc = 0x3d75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7168u));
    // 0x3d75d0: 0x24707168  addiu       $s0, $v1, 0x7168
    ctx->pc = 0x3d75d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29032));
    // 0x3d75d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D75D4u;
    {
        const bool branch_taken_0x3d75d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75D4u;
        // 0x3d75d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d75d4) {
            ctx->pc = 0x3D75FCu;
            goto label_3d75fc;
        }
    }
    ctx->pc = 0x3D75DCu;
    // 0x3d75dc: 0xc0f5db6  jal         func_3D76D8
    ctx->pc = 0x3D75DCu;
    SET_GPR_U32(ctx, 31, 0x3D75E4u);
    ctx->pc = 0x3D76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D76D8u, 0x3D75DCu, 0x3D75E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D75E4u;
label_3d75e4:
    // 0x3d75e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d75e8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x3d75e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x3d75ec: 0x24a52658  addiu       $a1, $a1, 0x2658
    ctx->pc = 0x3d75ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9816));
    // 0x3d75f0: 0x24c67178  addiu       $a2, $a2, 0x7178
    ctx->pc = 0x3d75f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29048));
    // 0x3d75f4: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D75F4u;
    SET_GPR_U32(ctx, 31, 0x3D75FCu);
    ctx->pc = 0x3D75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D75F4u;
    // 0x3d75f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D75F4u, 0x3D75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D75FCu;
label_3d75fc:
    // 0x3d75fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d75fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d7604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7608: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7608u;
        // 0x3d760c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7610u;
}
