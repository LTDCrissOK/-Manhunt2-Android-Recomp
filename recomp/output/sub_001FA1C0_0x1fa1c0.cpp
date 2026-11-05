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

// Function: sub_001FA1C0
// Address: 0x1fa1c0 - 0x1fa228
void sub_001FA1C0_0x1fa1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA1C0_0x1fa1c0");
#endif

    switch (ctx->pc) {
        case 0x1fa1e8u: goto label_1fa1e8;
        default: break;
    }

    ctx->pc = 0x1fa1c0u;

    // 0x1fa1c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fa1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fa1c4: 0x8c629314  lw          $v0, -0x6CEC($v1)
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9314u));
    // 0x1fa1c8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA1C8u;
    {
        const bool branch_taken_0x1fa1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1C8u;
        // 0x1fa1cc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1c8) {
            ctx->pc = 0x1FA21Cu;
            goto label_1fa21c;
        }
    }
    ctx->pc = 0x1FA1D0u;
    // 0x1fa1d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1fa1d4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x1fa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x1fa1d8: 0x2447cfb0  addiu       $a3, $v0, -0x3050
    ctx->pc = 0x1fa1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x1fa1dc: 0x2466d000  addiu       $a2, $v1, -0x3000
    ctx->pc = 0x1fa1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955008));
    // 0x1fa1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1e4: 0x0  nop
    ctx->pc = 0x1fa1e4u;
    // NOP
label_1fa1e8:
    // 0x1fa1e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fa1ec: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fa1f0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fa1f4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fa1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa1f8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fa1fc: 0x2ca30014  sltiu       $v1, $a1, 0x14
    ctx->pc = 0x1fa1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fa200: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FA200u;
    {
        const bool branch_taken_0x1fa200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA200u;
        // 0x1fa204: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa200) {
            ctx->pc = 0x1FA1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa1e8;
        }
    }
    ctx->pc = 0x1FA208u;
    // 0x1fa208: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1fa208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1fa20c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa210: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fa214: 0xad049314  sw          $a0, -0x6CEC($t0)
    ctx->pc = 0x1fa214u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294939412), GPR_U32(ctx, 4));
    // 0x1fa218: 0xa0629310  sb          $v0, -0x6CF0($v1)
    ctx->pc = 0x1fa218u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9310u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9310u, _value); } while (0);
label_1fa21c:
    // 0x1fa21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA224u;
    // 0x1fa224: 0x0  nop
    ctx->pc = 0x1fa224u;
    // NOP
    ctx->pc = 0x1fa228u;
}
