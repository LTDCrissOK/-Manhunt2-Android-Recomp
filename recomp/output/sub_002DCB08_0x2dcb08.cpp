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

// Function: sub_002DCB08
// Address: 0x2dcb08 - 0x2dcb38
void sub_002DCB08_0x2dcb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCB08_0x2dcb08");
#endif

    switch (ctx->pc) {
        case 0x2dcb28u: goto label_2dcb28;
        default: break;
    }

    ctx->pc = 0x2dcb08u;

    // 0x2dcb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dcb0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dcb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dcb10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dcb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2dcb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2dcb18: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2dcb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2dcb1c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2dcb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2dcb20: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2DCB20u;
    SET_GPR_U32(ctx, 31, 0x2DCB28u);
    ctx->pc = 0x2DCB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB20u;
    // 0x2dcb24: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2DCB20u, 0x2DCB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB28u;
label_2dcb28:
    // 0x2dcb28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dcb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB2Cu;
        // 0x2dcb30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCB34u;
    // 0x2dcb34: 0x0  nop
    ctx->pc = 0x2dcb34u;
    // NOP
    ctx->pc = 0x2dcb38u;
}
