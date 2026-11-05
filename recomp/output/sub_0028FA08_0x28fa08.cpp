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

// Function: sub_0028FA08
// Address: 0x28fa08 - 0x28fa48
void sub_0028FA08_0x28fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FA08_0x28fa08");
#endif

    switch (ctx->pc) {
        case 0x28fa1cu: goto label_28fa1c;
        default: break;
    }

    ctx->pc = 0x28fa08u;

    // 0x28fa08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fa0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fa10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28fa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28fa14: 0xc0a526c  jal         func_2949B0
    ctx->pc = 0x28FA14u;
    SET_GPR_U32(ctx, 31, 0x28FA1Cu);
    ctx->pc = 0x28FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA14u;
    // 0x28fa18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2949B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949B0u, 0x28FA14u, 0x28FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA1Cu;
label_28fa1c:
    // 0x28fa1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28fa20: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x28fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x28fa24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x28fa28: 0x24632cd8  addiu       $v1, $v1, 0x2CD8
    ctx->pc = 0x28fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11480));
    // 0x28fa2c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x28fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x28fa30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fa30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fa34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fa38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA3Cu;
        // 0x28fa40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FA44u;
    // 0x28fa44: 0x0  nop
    ctx->pc = 0x28fa44u;
    // NOP
    ctx->pc = 0x28fa48u;
}
