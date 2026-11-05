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

// Function: sub_00277D88
// Address: 0x277d88 - 0x277dd0
void sub_00277D88_0x277d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277D88_0x277d88");
#endif

    switch (ctx->pc) {
        case 0x277dbcu: goto label_277dbc;
        default: break;
    }

    ctx->pc = 0x277d88u;

    // 0x277d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277d8c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x277d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277d94: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x277d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d98: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x277d98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277da0: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277da4: 0x24a58308  addiu       $a1, $a1, -0x7CF8
    ctx->pc = 0x277da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935304));
    // 0x277da8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x277da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x277dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277db0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277db4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277DB4u;
    SET_GPR_U32(ctx, 31, 0x277DBCu);
    ctx->pc = 0x277DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277DB4u;
    // 0x277db8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277DB4u, 0x277DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DBCu;
label_277dbc:
    // 0x277dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277dc0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x277dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x277dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x277DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DC4u;
        // 0x277dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277DCCu;
    // 0x277dcc: 0x0  nop
    ctx->pc = 0x277dccu;
    // NOP
    ctx->pc = 0x277dd0u;
}
