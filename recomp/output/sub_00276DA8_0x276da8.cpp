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

// Function: sub_00276DA8
// Address: 0x276da8 - 0x276df8
void sub_00276DA8_0x276da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276DA8_0x276da8");
#endif

    switch (ctx->pc) {
        case 0x276dc0u: goto label_276dc0;
        case 0x276dd4u: goto label_276dd4;
        case 0x276de4u: goto label_276de4;
        default: break;
    }

    ctx->pc = 0x276da8u;

    // 0x276da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276dac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x276dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x276db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276db4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x276db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x276db8: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x276DB8u;
    SET_GPR_U32(ctx, 31, 0x276DC0u);
    ctx->pc = 0x276DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DB8u;
    // 0x276dbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x276DB8u, 0x276DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DC0u;
label_276dc0:
    // 0x276dc0: 0x8e060220  lw          $a2, 0x220($s0)
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x276dc4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x276dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x276dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dcc: 0xc0b5ed6  jal         func_2D7B58
    ctx->pc = 0x276DCCu;
    SET_GPR_U32(ctx, 31, 0x276DD4u);
    ctx->pc = 0x276DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DCCu;
    // 0x276dd0: 0x24a58218  addiu       $a1, $a1, -0x7DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B58u, 0x276DCCu, 0x276DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DD4u;
label_276dd4:
    // 0x276dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ddc: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x276DDCu;
    SET_GPR_U32(ctx, 31, 0x276DE4u);
    ctx->pc = 0x276DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DDCu;
    // 0x276de0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x276DDCu, 0x276DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DE4u;
label_276de4:
    // 0x276de4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x276de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276de8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x276de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276dec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x276decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276df0: 0x3e00008  jr          $ra
    ctx->pc = 0x276DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DF0u;
        // 0x276df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276DF8u;
}
