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

// Function: sub_00108DA0
// Address: 0x108da0 - 0x108dd8
void sub_00108DA0_0x108da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108DA0_0x108da0");
#endif

    switch (ctx->pc) {
        case 0x108db8u: goto label_108db8;
        case 0x108dc4u: goto label_108dc4;
        default: break;
    }

    ctx->pc = 0x108da0u;

    // 0x108da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108da4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x108da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108dac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x108dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x108db0: 0xc0456b0  jal         func_115AC0
    ctx->pc = 0x108DB0u;
    SET_GPR_U32(ctx, 31, 0x108DB8u);
    ctx->pc = 0x108DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DB0u;
    // 0x108db4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC0u, 0x108DB0u, 0x108DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DB8u;
label_108db8:
    // 0x108db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dbc: 0xc046226  jal         func_118898
    ctx->pc = 0x108DBCu;
    SET_GPR_U32(ctx, 31, 0x108DC4u);
    ctx->pc = 0x108DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DBCu;
    // 0x108dc0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x108DBCu, 0x108DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DC4u;
label_108dc4:
    // 0x108dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108dc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x108dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x108DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DCCu;
        // 0x108dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108DD4u;
    // 0x108dd4: 0x0  nop
    ctx->pc = 0x108dd4u;
    // NOP
    ctx->pc = 0x108dd8u;
}
