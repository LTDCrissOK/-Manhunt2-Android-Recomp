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

// Function: sub_00131D88
// Address: 0x131d88 - 0x131de8
void sub_00131D88_0x131d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131D88_0x131d88");
#endif

    switch (ctx->pc) {
        case 0x131dacu: goto label_131dac;
        case 0x131dc0u: goto label_131dc0;
        case 0x131dd4u: goto label_131dd4;
        default: break;
    }

    ctx->pc = 0x131d88u;

    // 0x131d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x131d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x131d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131d98: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x131d9c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131D9Cu;
    {
        const bool branch_taken_0x131d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d9c) {
            ctx->pc = 0x131DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D9Cu;
            // 0x131da0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DB0u;
            goto label_131db0;
        }
    }
    ctx->pc = 0x131DA4u;
    // 0x131da4: 0xc04b386  jal         func_12CE18
    ctx->pc = 0x131DA4u;
    SET_GPR_U32(ctx, 31, 0x131DACu);
    ctx->pc = 0x131DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131DA4u;
    // 0x131da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE18u, 0x131DA4u, 0x131DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131DACu;
label_131dac:
    // 0x131dac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x131dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_131db0:
    // 0x131db0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131DB0u;
    {
        const bool branch_taken_0x131db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131db0) {
            ctx->pc = 0x131DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DB0u;
            // 0x131db4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x131DB8u;
    // 0x131db8: 0xc04b386  jal         func_12CE18
    ctx->pc = 0x131DB8u;
    SET_GPR_U32(ctx, 31, 0x131DC0u);
    ctx->pc = 0x131DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131DB8u;
    // 0x131dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE18u, 0x131DB8u, 0x131DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131DC0u;
label_131dc0:
    // 0x131dc0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x131dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131dc4:
    // 0x131dc4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131DC4u;
    {
        const bool branch_taken_0x131dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dc4) {
            ctx->pc = 0x131DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DC4u;
            // 0x131dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DD8u;
            goto label_131dd8;
        }
    }
    ctx->pc = 0x131DCCu;
    // 0x131dcc: 0xc04b386  jal         func_12CE18
    ctx->pc = 0x131DCCu;
    SET_GPR_U32(ctx, 31, 0x131DD4u);
    ctx->pc = 0x131DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131DCCu;
    // 0x131dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE18u, 0x131DCCu, 0x131DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131DD4u;
label_131dd4:
    // 0x131dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131dd8:
    // 0x131dd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x131dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x131DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DDCu;
        // 0x131de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131DE4u;
    // 0x131de4: 0x0  nop
    ctx->pc = 0x131de4u;
    // NOP
    ctx->pc = 0x131de8u;
}
