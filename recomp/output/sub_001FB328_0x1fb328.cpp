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

// Function: sub_001FB328
// Address: 0x1fb328 - 0x1fb390
void sub_001FB328_0x1fb328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB328_0x1fb328");
#endif

    switch (ctx->pc) {
        case 0x1fb350u: goto label_1fb350;
        default: break;
    }

    ctx->pc = 0x1fb328u;

    // 0x1fb328: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fb32c: 0x8c629324  lw          $v0, -0x6CDC($v1)
    ctx->pc = 0x1fb32cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9324u));
    // 0x1fb330: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB330u;
    {
        const bool branch_taken_0x1fb330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB330u;
        // 0x1fb334: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb330) {
            ctx->pc = 0x1FB384u;
            goto label_1fb384;
        }
    }
    ctx->pc = 0x1FB338u;
    // 0x1fb338: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1fb338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1fb33c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x1fb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x1fb340: 0x2447d050  addiu       $a3, $v0, -0x2FB0
    ctx->pc = 0x1fb340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955088));
    // 0x1fb344: 0x2466d078  addiu       $a2, $v1, -0x2F88
    ctx->pc = 0x1fb344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955128));
    // 0x1fb348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb34c: 0x0  nop
    ctx->pc = 0x1fb34cu;
    // NOP
label_1fb350:
    // 0x1fb350: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fb350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fb354: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1fb354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fb358: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1fb358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fb35c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb360: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fb360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fb364: 0x2ca3000a  sltiu       $v1, $a1, 0xA
    ctx->pc = 0x1fb364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fb368: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FB368u;
    {
        const bool branch_taken_0x1fb368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB368u;
        // 0x1fb36c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb368) {
            ctx->pc = 0x1FB350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb350;
        }
    }
    ctx->pc = 0x1FB370u;
    // 0x1fb370: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fb374: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb378: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fb378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fb37c: 0xad049324  sw          $a0, -0x6CDC($t0)
    ctx->pc = 0x1fb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294939428), GPR_U32(ctx, 4));
    // 0x1fb380: 0xa0629320  sb          $v0, -0x6CE0($v1)
    ctx->pc = 0x1fb380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9320u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9320u, _value); } while (0);
label_1fb384:
    // 0x1fb384: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB38Cu;
    // 0x1fb38c: 0x0  nop
    ctx->pc = 0x1fb38cu;
    // NOP
    ctx->pc = 0x1fb390u;
}
