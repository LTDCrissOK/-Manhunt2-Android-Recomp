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

// Function: sub_00134008
// Address: 0x134008 - 0x134050
void sub_00134008_0x134008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134008_0x134008");
#endif

    switch (ctx->pc) {
        case 0x13401cu: goto label_13401c;
        case 0x134038u: goto label_134038;
        default: break;
    }

    ctx->pc = 0x134008u;

    // 0x134008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13400c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134014: 0xc04b378  jal         func_12CDE0
    ctx->pc = 0x134014u;
    SET_GPR_U32(ctx, 31, 0x13401Cu);
    ctx->pc = 0x134018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134014u;
    // 0x134018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CDE0u, 0x134014u, 0x13401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13401Cu;
label_13401c:
    // 0x13401c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x134020: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x134020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x134024: 0x246305a0  addiu       $v1, $v1, 0x5A0
    ctx->pc = 0x134024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x134028: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x134028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13402c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x13402cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x134030: 0xc04d080  jal         func_134200
    ctx->pc = 0x134030u;
    SET_GPR_U32(ctx, 31, 0x134038u);
    ctx->pc = 0x134034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134030u;
    // 0x134034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134200u, 0x134030u, 0x134038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134038u;
label_134038:
    // 0x134038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x134038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13403c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134044: 0x3e00008  jr          $ra
    ctx->pc = 0x134044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134044u;
        // 0x134048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13404Cu;
    // 0x13404c: 0x0  nop
    ctx->pc = 0x13404cu;
    // NOP
    ctx->pc = 0x134050u;
}
