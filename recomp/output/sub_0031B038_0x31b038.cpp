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

// Function: sub_0031B038
// Address: 0x31b038 - 0x31b080
void sub_0031B038_0x31b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B038_0x31b038");
#endif

    switch (ctx->pc) {
        case 0x31b04cu: goto label_31b04c;
        case 0x31b054u: goto label_31b054;
        case 0x31b060u: goto label_31b060;
        case 0x31b06cu: goto label_31b06c;
        default: break;
    }

    ctx->pc = 0x31b038u;

    // 0x31b038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b044: 0xc0c77ee  jal         func_31DFB8
    ctx->pc = 0x31B044u;
    SET_GPR_U32(ctx, 31, 0x31B04Cu);
    ctx->pc = 0x31B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B044u;
    // 0x31b048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFB8u, 0x31B044u, 0x31B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B04Cu;
label_31b04c:
    // 0x31b04c: 0xc0d51c8  jal         func_354720
    ctx->pc = 0x31B04Cu;
    SET_GPR_U32(ctx, 31, 0x31B054u);
    ctx->pc = 0x354720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354720u, 0x31B04Cu, 0x31B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B054u;
label_31b054:
    // 0x31b054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b058: 0xc0c6c20  jal         func_31B080
    ctx->pc = 0x31B058u;
    SET_GPR_U32(ctx, 31, 0x31B060u);
    ctx->pc = 0x31B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B058u;
    // 0x31b05c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B080u, 0x31B058u, 0x31B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B060u;
label_31b060:
    // 0x31b060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b064: 0xc0c6c20  jal         func_31B080
    ctx->pc = 0x31B064u;
    SET_GPR_U32(ctx, 31, 0x31B06Cu);
    ctx->pc = 0x31B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B064u;
    // 0x31b068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B080u, 0x31B064u, 0x31B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B06Cu;
label_31b06c:
    // 0x31b06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b074: 0x3e00008  jr          $ra
    ctx->pc = 0x31B074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B074u;
        // 0x31b078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B07Cu;
    // 0x31b07c: 0x0  nop
    ctx->pc = 0x31b07cu;
    // NOP
    ctx->pc = 0x31b080u;
}
