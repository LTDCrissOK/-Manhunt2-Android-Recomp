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

// Function: sub_002BF3B0
// Address: 0x2bf3b0 - 0x2bf410
void sub_002BF3B0_0x2bf3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF3B0_0x2bf3b0");
#endif

    switch (ctx->pc) {
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3d8u: goto label_2bf3d8;
        case 0x2bf3f8u: goto label_2bf3f8;
        default: break;
    }

    ctx->pc = 0x2bf3b0u;

    // 0x2bf3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf3b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bf3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bf3bc: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BF3BCu;
    SET_GPR_U32(ctx, 31, 0x2BF3C4u);
    ctx->pc = 0x2BF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3BCu;
    // 0x2bf3c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BF3BCu, 0x2BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3C4u;
label_2bf3c4:
    // 0x2bf3c4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bf3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bf3c8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bf3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf3cc: 0x24633b28  addiu       $v1, $v1, 0x3B28
    ctx->pc = 0x2bf3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15144));
    // 0x2bf3d0: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BF3D0u;
    SET_GPR_U32(ctx, 31, 0x2BF3D8u);
    ctx->pc = 0x2BF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3D0u;
    // 0x2bf3d4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BF3D0u, 0x2BF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3D8u;
label_2bf3d8:
    // 0x2bf3d8: 0x24032010  addiu       $v1, $zero, 0x2010
    ctx->pc = 0x2bf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2bf3dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2bf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bf3e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf3e4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bf3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf3e8: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bf3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf3ec: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bf3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bf3f0: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BF3F0u;
    SET_GPR_U32(ctx, 31, 0x2BF3F8u);
    ctx->pc = 0x2BF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF3F0u;
    // 0x2bf3f4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BF3F0u, 0x2BF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3F8u;
label_2bf3f8:
    // 0x2bf3f8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bf3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bf3fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bf400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf408: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF408u;
        // 0x2bf40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF410u;
}
