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

// Function: sub_00217D88
// Address: 0x217d88 - 0x217e50
void sub_00217D88_0x217d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217D88_0x217d88");
#endif

    switch (ctx->pc) {
        case 0x217d9cu: goto label_217d9c;
        case 0x217da8u: goto label_217da8;
        case 0x217db8u: goto label_217db8;
        case 0x217dc0u: goto label_217dc0;
        case 0x217dccu: goto label_217dcc;
        case 0x217df0u: goto label_217df0;
        case 0x217e00u: goto label_217e00;
        case 0x217e14u: goto label_217e14;
        case 0x217e24u: goto label_217e24;
        case 0x217e30u: goto label_217e30;
        case 0x217e3cu: goto label_217e3c;
        default: break;
    }

    ctx->pc = 0x217d88u;

    // 0x217d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217d8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x217d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x217d90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x217d94: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x217D94u;
    SET_GPR_U32(ctx, 31, 0x217D9Cu);
    ctx->pc = 0x217D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D94u;
    // 0x217d98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x217D94u, 0x217D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D9Cu;
label_217d9c:
    // 0x217d9c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x217d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x217da0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x217DA0u;
    SET_GPR_U32(ctx, 31, 0x217DA8u);
    ctx->pc = 0x217DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DA0u;
    // 0x217da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x217DA0u, 0x217DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DA8u;
label_217da8:
    // 0x217da8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x217da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x217dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217db0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x217DB0u;
    SET_GPR_U32(ctx, 31, 0x217DB8u);
    ctx->pc = 0x217DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DB0u;
    // 0x217db4: 0x24a51628  addiu       $a1, $a1, 0x1628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x217DB0u, 0x217DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DB8u;
label_217db8:
    // 0x217db8: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x217DB8u;
    SET_GPR_U32(ctx, 31, 0x217DC0u);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x217DB8u, 0x217DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DC0u;
label_217dc0:
    // 0x217dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dc4: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x217DC4u;
    SET_GPR_U32(ctx, 31, 0x217DCCu);
    ctx->pc = 0x217DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DC4u;
    // 0x217dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x217DC4u, 0x217DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DCCu;
label_217dcc:
    // 0x217dcc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x217dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x217dd0: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x217dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x217dd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x217dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x217dd8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217DD8u;
    {
        const bool branch_taken_0x217dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217dd8) {
            ctx->pc = 0x217DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217DD8u;
            // 0x217ddc: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217DF4u;
            goto label_217df4;
        }
    }
    ctx->pc = 0x217DE0u;
    // 0x217de0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x217de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x217de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217de8: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x217DE8u;
    SET_GPR_U32(ctx, 31, 0x217DF0u);
    ctx->pc = 0x217DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DE8u;
    // 0x217dec: 0x24a51638  addiu       $a1, $a1, 0x1638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x217DE8u, 0x217DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DF0u;
label_217df0:
    // 0x217df0: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x217df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_217df4:
    // 0x217df4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217df8: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x217DF8u;
    SET_GPR_U32(ctx, 31, 0x217E00u);
    ctx->pc = 0x217DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DF8u;
    // 0x217dfc: 0x24a5ef28  addiu       $a1, $a1, -0x10D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x217DF8u, 0x217E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E00u;
label_217e00:
    // 0x217e00: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x217e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x217e04: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x217e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217e08: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x217e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e0c: 0xc0c3346  jal         func_30CD18
    ctx->pc = 0x217E0Cu;
    SET_GPR_U32(ctx, 31, 0x217E14u);
    ctx->pc = 0x217E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E0Cu;
    // 0x217e10: 0x24843578  addiu       $a0, $a0, 0x3578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CD18u, 0x217E0Cu, 0x217E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E14u;
label_217e14:
    // 0x217e14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217E14u;
    {
        const bool branch_taken_0x217e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E14u;
        // 0x217e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e14) {
            ctx->pc = 0x217E28u;
            goto label_217e28;
        }
    }
    ctx->pc = 0x217E1Cu;
    // 0x217e1c: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x217E1Cu;
    SET_GPR_U32(ctx, 31, 0x217E24u);
    ctx->pc = 0x217E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E1Cu;
    // 0x217e20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x217E1Cu, 0x217E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E24u;
label_217e24:
    // 0x217e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217e28:
    // 0x217e28: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x217E28u;
    SET_GPR_U32(ctx, 31, 0x217E30u);
    ctx->pc = 0x217E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E28u;
    // 0x217e2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217E28u, 0x217E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E30u;
label_217e30:
    // 0x217e30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e34: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x217E34u;
    SET_GPR_U32(ctx, 31, 0x217E3Cu);
    ctx->pc = 0x217E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E34u;
    // 0x217e38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217E34u, 0x217E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E3Cu;
label_217e3c:
    // 0x217e3c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x217e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217e40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x217e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217e44: 0x3e00008  jr          $ra
    ctx->pc = 0x217E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E44u;
        // 0x217e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E4Cu;
    // 0x217e4c: 0x0  nop
    ctx->pc = 0x217e4cu;
    // NOP
    ctx->pc = 0x217e50u;
}
