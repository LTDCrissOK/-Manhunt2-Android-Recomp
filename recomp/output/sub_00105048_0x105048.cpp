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

// Function: sub_00105048
// Address: 0x105048 - 0x1050b0
void sub_00105048_0x105048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105048_0x105048");
#endif

    switch (ctx->pc) {
        case 0x105080u: goto label_105080;
        case 0x10508cu: goto label_10508c;
        default: break;
    }

    ctx->pc = 0x105048u;

    // 0x105048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10504c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10504cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x105050: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x105050u;
    {
        const bool branch_taken_0x105050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x105054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105050u;
        // 0x105054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105050) {
            ctx->pc = 0x1050A4u;
            goto label_1050a4;
        }
    }
    ctx->pc = 0x105058u;
    // 0x105058: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x105058u;
    {
        const bool branch_taken_0x105058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105058u;
        // 0x10505c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105058) {
            ctx->pc = 0x1050A4u;
            goto label_1050a4;
        }
    }
    ctx->pc = 0x105060u;
    // 0x105060: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x105060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x105064: 0x24622d80  addiu       $v0, $v1, 0x2D80
    ctx->pc = 0x105064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
    // 0x105068: 0xac602d80  sw          $zero, 0x2D80($v1)
    ctx->pc = 0x105068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11648), GPR_U32(ctx, 0));
    // 0x10506c: 0x24842d90  addiu       $a0, $a0, 0x2D90
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11664));
    // 0x105070: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x105070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x105074: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x105074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x105078: 0xc0f6a8a  jal         func_3DAA28
    ctx->pc = 0x105078u;
    SET_GPR_U32(ctx, 31, 0x105080u);
    ctx->pc = 0x10507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105078u;
    // 0x10507c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA28u, 0x105078u, 0x105080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105080u;
label_105080:
    // 0x105080: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x105080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x105084: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x105084u;
    SET_GPR_U32(ctx, 31, 0x10508Cu);
    ctx->pc = 0x105088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105084u;
    // 0x105088: 0x24842db0  addiu       $a0, $a0, 0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x105084u, 0x10508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10508Cu;
label_10508c:
    // 0x10508c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x10508cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x105090: 0x24622dc0  addiu       $v0, $v1, 0x2DC0
    ctx->pc = 0x105090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x105094: 0xac602dc0  sw          $zero, 0x2DC0($v1)
    ctx->pc = 0x105094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482DC0u, _value); } while (0);
    // 0x105098: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x105098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482DCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482DCCu, _value); } while (0);
    // 0x10509c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10509cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482DC4u, _value); } while (0);
    // 0x1050a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1050a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482DC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482DC8u, _value); } while (0);
label_1050a4:
    // 0x1050a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1050a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1050a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1050A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1050ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050A8u;
        // 0x1050ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1050A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1050B0u;
}
