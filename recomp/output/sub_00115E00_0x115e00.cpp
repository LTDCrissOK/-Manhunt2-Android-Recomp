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

// Function: sub_00115E00
// Address: 0x115e00 - 0x115e40
void sub_00115E00_0x115e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115E00_0x115e00");
#endif

    switch (ctx->pc) {
        case 0x115e14u: goto label_115e14;
        case 0x115e28u: goto label_115e28;
        default: break;
    }

    ctx->pc = 0x115e00u;

    // 0x115e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115e08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115e0c: 0xc042376  jal         func_108DD8
    ctx->pc = 0x115E0Cu;
    SET_GPR_U32(ctx, 31, 0x115E14u);
    ctx->pc = 0x115E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E0Cu;
    // 0x115e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DD8u, 0x115E0Cu, 0x115E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E14u;
label_115e14:
    // 0x115e14: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x115e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x115e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e1c: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x115e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x115e20: 0xc045974  jal         func_1165D0
    ctx->pc = 0x115E20u;
    SET_GPR_U32(ctx, 31, 0x115E28u);
    ctx->pc = 0x115E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E20u;
    // 0x115e24: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1165D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1165D0u, 0x115E20u, 0x115E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E28u;
label_115e28:
    // 0x115e28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115e34: 0x3e00008  jr          $ra
    ctx->pc = 0x115E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E34u;
        // 0x115e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115E3Cu;
    // 0x115e3c: 0x0  nop
    ctx->pc = 0x115e3cu;
    // NOP
    ctx->pc = 0x115e40u;
}
