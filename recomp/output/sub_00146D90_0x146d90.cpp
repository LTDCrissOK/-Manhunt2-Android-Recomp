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

// Function: sub_00146D90
// Address: 0x146d90 - 0x146dd0
void sub_00146D90_0x146d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146D90_0x146d90");
#endif

    switch (ctx->pc) {
        case 0x146dacu: goto label_146dac;
        case 0x146dbcu: goto label_146dbc;
        default: break;
    }

    ctx->pc = 0x146d90u;

    // 0x146d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146d98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146da4: 0xc051c20  jal         func_147080
    ctx->pc = 0x146DA4u;
    SET_GPR_U32(ctx, 31, 0x146DACu);
    ctx->pc = 0x146DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DA4u;
    // 0x146da8: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147080u, 0x146DA4u, 0x146DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DACu;
label_146dac:
    // 0x146dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146db0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x146db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146db4: 0xc051b74  jal         func_146DD0
    ctx->pc = 0x146DB4u;
    SET_GPR_U32(ctx, 31, 0x146DBCu);
    ctx->pc = 0x146DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DB4u;
    // 0x146db8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DD0u, 0x146DB4u, 0x146DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DBCu;
label_146dbc:
    // 0x146dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146dc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x146DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DC8u;
        // 0x146dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146DD0u;
}
