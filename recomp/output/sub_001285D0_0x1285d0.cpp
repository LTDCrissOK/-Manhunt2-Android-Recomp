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

// Function: sub_001285D0
// Address: 0x1285d0 - 0x128610
void sub_001285D0_0x1285d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001285D0_0x1285d0");
#endif

    switch (ctx->pc) {
        case 0x1285e8u: goto label_1285e8;
        default: break;
    }

    ctx->pc = 0x1285d0u;

    // 0x1285d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1285d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1285d4: 0xa0800fb0  sb          $zero, 0xFB0($a0)
    ctx->pc = 0x1285d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4016), (uint8_t)GPR_U32(ctx, 0));
    // 0x1285d8: 0xa4820fb8  sh          $v0, 0xFB8($a0)
    ctx->pc = 0x1285d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4024), (uint16_t)GPR_U32(ctx, 2));
    // 0x1285dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1285dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285e0: 0xac800fb4  sw          $zero, 0xFB4($a0)
    ctx->pc = 0x1285e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4020), GPR_U32(ctx, 0));
    // 0x1285e4: 0x0  nop
    ctx->pc = 0x1285e4u;
    // NOP
label_1285e8:
    // 0x1285e8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1285e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1285ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1285ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1285f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1285f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1285f4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1285f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1285f8: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x1285f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1285fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1285FCu;
    {
        const bool branch_taken_0x1285fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285FCu;
        // 0x128600: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285fc) {
            ctx->pc = 0x1285E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1285e8;
        }
    }
    ctx->pc = 0x128604u;
    // 0x128604: 0x3e00008  jr          $ra
    ctx->pc = 0x128604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12860Cu;
    // 0x12860c: 0x0  nop
    ctx->pc = 0x12860cu;
    // NOP
    ctx->pc = 0x128610u;
}
