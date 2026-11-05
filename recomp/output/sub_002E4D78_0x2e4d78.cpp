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

// Function: sub_002E4D78
// Address: 0x2e4d78 - 0x2e4e00
void sub_002E4D78_0x2e4d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4D78_0x2e4d78");
#endif

    switch (ctx->pc) {
        case 0x2e4d98u: goto label_2e4d98;
        case 0x2e4da0u: goto label_2e4da0;
        case 0x2e4dd0u: goto label_2e4dd0;
        case 0x2e4de8u: goto label_2e4de8;
        default: break;
    }

    ctx->pc = 0x2e4d78u;

    // 0x2e4d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4d80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d88: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2e4d88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e4d8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e4d90: 0xc08a15a  jal         func_228568
    ctx->pc = 0x2E4D90u;
    SET_GPR_U32(ctx, 31, 0x2E4D98u);
    ctx->pc = 0x2E4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D90u;
    // 0x2e4d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2E4D90u, 0x2E4D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D98u;
label_2e4d98:
    // 0x2e4d98: 0xc0bbf2a  jal         func_2EFCA8
    ctx->pc = 0x2E4D98u;
    SET_GPR_U32(ctx, 31, 0x2E4DA0u);
    ctx->pc = 0x2E4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D98u;
    // 0x2e4d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCA8u, 0x2E4D98u, 0x2E4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DA0u;
label_2e4da0:
    // 0x2e4da0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4da4: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4DA4u;
    {
        const bool branch_taken_0x2e4da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DA4u;
        // 0x2e4da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4da4) {
            ctx->pc = 0x2E4DE0u;
            goto label_2e4de0;
        }
    }
    ctx->pc = 0x2E4DACu;
    // 0x2e4dac: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2e4db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4db4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E4DB4u;
    {
        const bool branch_taken_0x2e4db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4db4) {
            ctx->pc = 0x2E4DE0u;
            goto label_2e4de0;
        }
    }
    ctx->pc = 0x2E4DBCu;
    // 0x2e4dbc: 0x8e02121c  lw          $v0, 0x121C($s0)
    ctx->pc = 0x2e4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2e4dc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4DC0u;
    {
        const bool branch_taken_0x2e4dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4dc0) {
            ctx->pc = 0x2E4DE0u;
            goto label_2e4de0;
        }
    }
    ctx->pc = 0x2E4DC8u;
    // 0x2e4dc8: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2E4DC8u;
    SET_GPR_U32(ctx, 31, 0x2E4DD0u);
    ctx->pc = 0x2E4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DC8u;
    // 0x2e4dcc: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2E4DC8u, 0x2E4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DD0u;
label_2e4dd0:
    // 0x2e4dd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4DD0u;
    {
        const bool branch_taken_0x2e4dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DD0u;
        // 0x2e4dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4dd0) {
            ctx->pc = 0x2E4DE0u;
            goto label_2e4de0;
        }
    }
    ctx->pc = 0x2E4DD8u;
    // 0x2e4dd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4DD8u;
    {
        const bool branch_taken_0x2e4dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DD8u;
        // 0x2e4ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4dd8) {
            ctx->pc = 0x2E4DE8u;
            goto label_2e4de8;
        }
    }
    ctx->pc = 0x2E4DE0u;
label_2e4de0:
    // 0x2e4de0: 0xc08d944  jal         func_236510
    ctx->pc = 0x2E4DE0u;
    SET_GPR_U32(ctx, 31, 0x2E4DE8u);
    ctx->pc = 0x2E4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DE0u;
    // 0x2e4de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236510u, 0x2E4DE0u, 0x2E4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DE8u;
label_2e4de8:
    // 0x2e4de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4dec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DF4u;
        // 0x2e4df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4DFCu;
    // 0x2e4dfc: 0x0  nop
    ctx->pc = 0x2e4dfcu;
    // NOP
    ctx->pc = 0x2e4e00u;
}
