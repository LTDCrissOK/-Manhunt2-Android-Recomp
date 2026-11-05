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

// Function: sub_002722E8
// Address: 0x2722e8 - 0x272368
void sub_002722E8_0x2722e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002722E8_0x2722e8");
#endif

    switch (ctx->pc) {
        case 0x272320u: goto label_272320;
        default: break;
    }

    ctx->pc = 0x2722e8u;

    // 0x2722e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2722e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2722ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2722ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x2722f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2722f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2722f4: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x2722f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x2722f8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2722f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2722fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2722fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B477Cu));
    // 0x272300: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x272300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x272304: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x272304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x272308: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x272308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x27230c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x27230cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x272310: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x272310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x272314: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x272314u;
    {
        const bool branch_taken_0x272314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272314u;
        // 0x272318: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272314) {
            ctx->pc = 0x272360u;
            goto label_272360;
        }
    }
    ctx->pc = 0x27231Cu;
    // 0x27231c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_272320:
    // 0x272320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x272320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272324: 0xa06002d4  sb          $zero, 0x2D4($v1)
    ctx->pc = 0x272324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 724), (uint8_t)GPR_U32(ctx, 0));
    // 0x272328: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x272328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27232c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27232Cu;
    {
        const bool branch_taken_0x27232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27232c) {
            ctx->pc = 0x272330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27232Cu;
            // 0x272330: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272340u;
            goto label_272340;
        }
    }
    ctx->pc = 0x272334u;
    // 0x272334: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x272338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x272338u;
    {
        const bool branch_taken_0x272338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272338u;
        // 0x27233c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272338) {
            ctx->pc = 0x272350u;
            goto label_272350;
        }
    }
    ctx->pc = 0x272340u;
label_272340:
    // 0x272340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272340u;
    {
        const bool branch_taken_0x272340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272340u;
        // 0x272344: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272340) {
            ctx->pc = 0x272354u;
            goto label_272354;
        }
    }
    ctx->pc = 0x272348u;
    // 0x272348: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x272348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x27234c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x27234cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_272350:
    // 0x272350: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_272354:
    // 0x272354: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x272354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x272358: 0x1462fff1  bne         $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x272358u;
    {
        const bool branch_taken_0x272358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272358u;
        // 0x27235c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272358) {
            ctx->pc = 0x272320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272320;
        }
    }
    ctx->pc = 0x272360u;
label_272360:
    // 0x272360: 0x3e00008  jr          $ra
    ctx->pc = 0x272360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272360u;
        // 0x272364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272368u;
}
