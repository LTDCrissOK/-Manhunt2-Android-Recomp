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

// Function: sub_00235DB0
// Address: 0x235db0 - 0x235e38
void sub_00235DB0_0x235db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235DB0_0x235db0");
#endif

    switch (ctx->pc) {
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd8u: goto label_235dd8;
        case 0x235de4u: goto label_235de4;
        case 0x235decu: goto label_235dec;
        case 0x235e18u: goto label_235e18;
        case 0x235e24u: goto label_235e24;
        default: break;
    }

    ctx->pc = 0x235db0u;

    // 0x235db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235db8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235dbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235dc8: 0xc08e3b2  jal         func_238EC8
    ctx->pc = 0x235DC8u;
    SET_GPR_U32(ctx, 31, 0x235DD0u);
    ctx->pc = 0x235DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DC8u;
    // 0x235dcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x235DC8u, 0x235DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DD0u;
label_235dd0:
    // 0x235dd0: 0xc08e528  jal         func_2394A0
    ctx->pc = 0x235DD0u;
    SET_GPR_U32(ctx, 31, 0x235DD8u);
    ctx->pc = 0x235DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DD0u;
    // 0x235dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x235DD0u, 0x235DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DD8u;
label_235dd8:
    // 0x235dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ddc: 0xc0894fa  jal         func_2253E8
    ctx->pc = 0x235DDCu;
    SET_GPR_U32(ctx, 31, 0x235DE4u);
    ctx->pc = 0x235DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DDCu;
    // 0x235de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253E8u, 0x235DDCu, 0x235DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DE4u;
label_235de4:
    // 0x235de4: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x235DE4u;
    SET_GPR_U32(ctx, 31, 0x235DECu);
    ctx->pc = 0x235DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DE4u;
    // 0x235de8: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x235DE4u, 0x235DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DECu;
label_235dec:
    // 0x235dec: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x235df0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x235DF0u;
    {
        const bool branch_taken_0x235df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DF0u;
        // 0x235df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235df0) {
            ctx->pc = 0x235E28u;
            goto label_235e28;
        }
    }
    ctx->pc = 0x235DF8u;
    // 0x235df8: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x235df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x235dfc: 0x482000b  bltzl       $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x235DFCu;
    {
        const bool branch_taken_0x235dfc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x235dfc) {
            ctx->pc = 0x235E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DFCu;
            // 0x235e00: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E2Cu;
            goto label_235e2c;
        }
    }
    ctx->pc = 0x235E04u;
    // 0x235e04: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x235e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x235e08: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235E08u;
    {
        const bool branch_taken_0x235e08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x235e08) {
            ctx->pc = 0x235E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E08u;
            // 0x235e0c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E2Cu;
            goto label_235e2c;
        }
    }
    ctx->pc = 0x235E10u;
    // 0x235e10: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x235E10u;
    SET_GPR_U32(ctx, 31, 0x235E18u);
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x235E10u, 0x235E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E18u;
label_235e18:
    // 0x235e18: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x235e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x235e1c: 0xc084492  jal         func_211248
    ctx->pc = 0x235E1Cu;
    SET_GPR_U32(ctx, 31, 0x235E24u);
    ctx->pc = 0x235E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E1Cu;
    // 0x235e20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x235E1Cu, 0x235E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E24u;
label_235e24:
    // 0x235e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235e28:
    // 0x235e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235e2c:
    // 0x235e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235e30: 0x3e00008  jr          $ra
    ctx->pc = 0x235E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E30u;
        // 0x235e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235E38u;
}
