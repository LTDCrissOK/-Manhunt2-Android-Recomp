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

// Function: sub_001000D8
// Address: 0x1000d8 - 0x100138
void sub_001000D8_0x1000d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001000D8_0x1000d8");
#endif

    ctx->pc = 0x1000d8u;

    // 0x1000d8: 0x4a00015  bltz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1000D8u;
    {
        const bool branch_taken_0x1000d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1000DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1000D8u;
        // 0x1000dc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1000d8) {
            ctx->pc = 0x100130u;
            goto label_100130;
        }
    }
    ctx->pc = 0x1000E0u;
    // 0x1000e0: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x1000e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1000e4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1000e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1000e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1000E8u;
    {
        const bool branch_taken_0x1000e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1000e8) {
            ctx->pc = 0x100130u;
            goto label_100130;
        }
    }
    ctx->pc = 0x1000F0u;
    // 0x1000f0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1000F0u;
    {
        const bool branch_taken_0x1000f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1000F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1000F0u;
        // 0x1000f4: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1000f0) {
            ctx->pc = 0x100130u;
            goto label_100130;
        }
    }
    ctx->pc = 0x1000F8u;
    // 0x1000f8: 0x50a6000b  beql        $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1000F8u;
    {
        const bool branch_taken_0x1000f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1000f8) {
            ctx->pc = 0x1000FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1000F8u;
            // 0x1000fc: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100128u;
            goto label_100128;
        }
    }
    ctx->pc = 0x100100u;
    // 0x100100: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x100100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x100104: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x100104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x100108: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x100108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10010c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x100110: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x100110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100114: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x100114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x100118: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x100118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10011c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x100120: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x100120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x100124: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x100124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_100128:
    // 0x100128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x100128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10012c: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x10012cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
label_100130:
    // 0x100130: 0x3e00008  jr          $ra
    ctx->pc = 0x100130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100138u;
}
