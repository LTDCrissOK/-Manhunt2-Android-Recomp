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

// Function: sub_001AB3D0
// Address: 0x1ab3d0 - 0x1ab440
void sub_001AB3D0_0x1ab3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB3D0_0x1ab3d0");
#endif

    switch (ctx->pc) {
        case 0x1ab3ecu: goto label_1ab3ec;
        default: break;
    }

    ctx->pc = 0x1ab3d0u;

    // 0x1ab3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab3d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab3dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab3e4: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB3E4u;
    SET_GPR_U32(ctx, 31, 0x1AB3ECu);
    ctx->pc = 0x1AB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3E4u;
    // 0x1ab3e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB3E4u, 0x1AB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3ECu;
label_1ab3ec:
    // 0x1ab3ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab3f0: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1ab3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ab3f4: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1ab3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ab3f8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB3F8u;
    {
        const bool branch_taken_0x1ab3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3F8u;
        // 0x1ab3fc: 0xae0201c8  sw          $v0, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3f8) {
            ctx->pc = 0x1AB430u;
            goto label_1ab430;
        }
    }
    ctx->pc = 0x1AB400u;
    // 0x1ab400: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1ab400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1ab404: 0x2842054b  slti        $v0, $v0, 0x54B
    ctx->pc = 0x1ab404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1355) ? 1 : 0);
    // 0x1ab408: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB408u;
    {
        const bool branch_taken_0x1ab408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab408) {
            ctx->pc = 0x1AB40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB408u;
            // 0x1ab40c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB434u;
            goto label_1ab434;
        }
    }
    ctx->pc = 0x1AB410u;
    // 0x1ab410: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1ab410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ab414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab418: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1ab418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1ab41c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ab41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1ab420: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1ab420u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ab424: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1ab424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1ab428: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1ab428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1ab42c: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x1ab42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
label_1ab430:
    // 0x1ab430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab434:
    // 0x1ab434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab438: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB438u;
        // 0x1ab43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB440u;
}
