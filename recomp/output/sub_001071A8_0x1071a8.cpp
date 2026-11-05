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

// Function: sub_001071A8
// Address: 0x1071a8 - 0x107210
void sub_001071A8_0x1071a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001071A8_0x1071a8");
#endif

    switch (ctx->pc) {
        case 0x1071d0u: goto label_1071d0;
        case 0x1071e0u: goto label_1071e0;
        default: break;
    }

    ctx->pc = 0x1071a8u;

    // 0x1071a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1071a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1071ac: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1071ACu;
    {
        const bool branch_taken_0x1071ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1071B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071ACu;
        // 0x1071b0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071ac) {
            ctx->pc = 0x107204u;
            goto label_107204;
        }
    }
    ctx->pc = 0x1071B4u;
    // 0x1071b4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1071B4u;
    {
        const bool branch_taken_0x1071b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1071b4) {
            ctx->pc = 0x107204u;
            goto label_107204;
        }
    }
    ctx->pc = 0x1071BCu;
    // 0x1071bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1071bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1071c0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1071c4: 0x24422dd0  addiu       $v0, $v0, 0x2DD0
    ctx->pc = 0x1071c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
    // 0x1071c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1071c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1071cc: 0x0  nop
    ctx->pc = 0x1071ccu;
    // NOP
label_1071d0:
    // 0x1071d0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1071d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1071d4: 0x24440280  addiu       $a0, $v0, 0x280
    ctx->pc = 0x1071d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1071d8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1071d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1071dc: 0x0  nop
    ctx->pc = 0x1071dcu;
    // NOP
label_1071e0:
    // 0x1071e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1071e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1071e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1071e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1071e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1071e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1071ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1071ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1071f0: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1071F0u;
    {
        const bool branch_taken_0x1071f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1071F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071F0u;
        // 0x1071f4: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071f0) {
            ctx->pc = 0x1071E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071e0;
        }
    }
    ctx->pc = 0x1071F8u;
    // 0x1071f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1071f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071fc: 0x1466fff4  bne         $v1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1071FCu;
    {
        const bool branch_taken_0x1071fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x107200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071FCu;
        // 0x107200: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071fc) {
            ctx->pc = 0x1071D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071d0;
        }
    }
    ctx->pc = 0x107204u;
label_107204:
    // 0x107204: 0x3e00008  jr          $ra
    ctx->pc = 0x107204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107204u;
        // 0x107208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10720Cu;
    // 0x10720c: 0x0  nop
    ctx->pc = 0x10720cu;
    // NOP
    ctx->pc = 0x107210u;
}
