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

// Function: sub_00295DA8
// Address: 0x295da8 - 0x295e08
void sub_00295DA8_0x295da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295DA8_0x295da8");
#endif

    switch (ctx->pc) {
        case 0x295db8u: goto label_295db8;
        case 0x295df0u: goto label_295df0;
        default: break;
    }

    ctx->pc = 0x295da8u;

    // 0x295da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295db0: 0xc0a5646  jal         func_295918
    ctx->pc = 0x295DB0u;
    SET_GPR_U32(ctx, 31, 0x295DB8u);
    ctx->pc = 0x295918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295918u, 0x295DB0u, 0x295DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DB8u;
label_295db8:
    // 0x295db8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x295db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x295dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295dc0: 0x8ca3bd50  lw          $v1, -0x42B0($a1)
    ctx->pc = 0x295dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950224)));
    // 0x295dc4: 0x8c640224  lw          $a0, 0x224($v1)
    ctx->pc = 0x295dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x295dc8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x295dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x295dcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x295dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x295dd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x295dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295dd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x295DD4u;
    {
        const bool branch_taken_0x295dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295dd4) {
            ctx->pc = 0x295DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295DD4u;
            // 0x295dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295DF8u;
            goto label_295df8;
        }
    }
    ctx->pc = 0x295DDCu;
    // 0x295ddc: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x295ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x295de0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x295DE0u;
    {
        const bool branch_taken_0x295de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295de0) {
            ctx->pc = 0x295DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295DE0u;
            // 0x295de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295DF8u;
            goto label_295df8;
        }
    }
    ctx->pc = 0x295DE8u;
    // 0x295de8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x295DE8u;
    SET_GPR_U32(ctx, 31, 0x295DF0u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x295DE8u, 0x295DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DF0u;
label_295df0:
    // 0x295df0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x295df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x295df4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x295df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_295df8:
    // 0x295df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x295DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DFCu;
        // 0x295e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295E04u;
    // 0x295e04: 0x0  nop
    ctx->pc = 0x295e04u;
    // NOP
    ctx->pc = 0x295e08u;
}
