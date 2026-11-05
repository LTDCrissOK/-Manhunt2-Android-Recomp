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

// Function: sub_00285D90
// Address: 0x285d90 - 0x285df0
void sub_00285D90_0x285d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285D90_0x285d90");
#endif

    switch (ctx->pc) {
        case 0x285da0u: goto label_285da0;
        default: break;
    }

    ctx->pc = 0x285d90u;

    // 0x285d90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x285d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x285d94: 0x8c43b5f8  lw          $v1, -0x4A08($v0)
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB5F8u));
    // 0x285d98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285D98u;
    {
        const bool branch_taken_0x285d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D98u;
        // 0x285d9c: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d98) {
            ctx->pc = 0x285DA8u;
            goto label_285da8;
        }
    }
    ctx->pc = 0x285DA0u;
label_285da0:
    // 0x285da0: 0x3e00008  jr          $ra
    ctx->pc = 0x285DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DA0u;
        // 0x285da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285DA8u;
label_285da8:
    // 0x285da8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x285da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x285dac: 0x8cc4a41c  lw          $a0, -0x5BE4($a2)
    ctx->pc = 0x285dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943772)));
    // 0x285db0: 0x2445cb28  addiu       $a1, $v0, -0x34D8
    ctx->pc = 0x285db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x285db4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x285db4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66CB34u));
    // 0x285db8: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x285dbc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x285dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285dc0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x285dc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CB34u, _value); } while (0);
    // 0x285dc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x285dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x285dc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x285dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285dcc: 0xa0e2f12c  sb          $v0, -0xED4($a3)
    ctx->pc = 0x285dccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294963500), (uint8_t)GPR_U32(ctx, 2));
    // 0x285dd0: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x285dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x285dd4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x285DD4u;
    {
        const bool branch_taken_0x285dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DD4u;
        // 0x285dd8: 0xacc4a41c  sw          $a0, -0x5BE4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294943772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dd4) {
            ctx->pc = 0x285DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285da0;
        }
    }
    ctx->pc = 0x285DDCu;
    // 0x285ddc: 0x90e3f12c  lbu         $v1, -0xED4($a3)
    ctx->pc = 0x285ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294963500)));
    // 0x285de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285de4: 0xacc0a41c  sw          $zero, -0x5BE4($a2)
    ctx->pc = 0x285de4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943772), GPR_U32(ctx, 0));
    // 0x285de8: 0x3e00008  jr          $ra
    ctx->pc = 0x285DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DE8u;
        // 0x285dec: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285DF0u;
}
