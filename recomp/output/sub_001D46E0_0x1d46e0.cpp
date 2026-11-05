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

// Function: sub_001D46E0
// Address: 0x1d46e0 - 0x1d4758
void sub_001D46E0_0x1d46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D46E0_0x1d46e0");
#endif

    switch (ctx->pc) {
        case 0x1d46f0u: goto label_1d46f0;
        case 0x1d46fcu: goto label_1d46fc;
        case 0x1d470cu: goto label_1d470c;
        case 0x1d471cu: goto label_1d471c;
        case 0x1d4724u: goto label_1d4724;
        case 0x1d4734u: goto label_1d4734;
        case 0x1d4744u: goto label_1d4744;
        default: break;
    }

    ctx->pc = 0x1d46e0u;

    // 0x1d46e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d46e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d46e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d46e8: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x1D46E8u;
    SET_GPR_U32(ctx, 31, 0x1D46F0u);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x1D46E8u, 0x1D46F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46F0u;
label_1d46f0:
    // 0x1d46f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d46f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46f4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x1D46F4u;
    SET_GPR_U32(ctx, 31, 0x1D46FCu);
    ctx->pc = 0x1D46F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46F4u;
    // 0x1d46f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x1D46F4u, 0x1D46FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46FCu;
label_1d46fc:
    // 0x1d46fc: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x1d4700: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4704: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x1D4704u;
    SET_GPR_U32(ctx, 31, 0x1D470Cu);
    ctx->pc = 0x1D4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4704u;
    // 0x1d4708: 0x24a5ef08  addiu       $a1, $a1, -0x10F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x1D4704u, 0x1D470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D470Cu;
label_1d470c:
    // 0x1d470c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1d470cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x1d4710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4714: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x1D4714u;
    SET_GPR_U32(ctx, 31, 0x1D471Cu);
    ctx->pc = 0x1D4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4714u;
    // 0x1d4718: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x1D4714u, 0x1D471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D471Cu;
label_1d471c:
    // 0x1d471c: 0xc0753f6  jal         func_1D4FD8
    ctx->pc = 0x1D471Cu;
    SET_GPR_U32(ctx, 31, 0x1D4724u);
    ctx->pc = 0x1D4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D471Cu;
    // 0x1d4720: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4FD8u, 0x1D471Cu, 0x1D4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4724u;
label_1d4724:
    // 0x1d4724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4724u;
    {
        const bool branch_taken_0x1d4724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4724u;
        // 0x1d4728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4724) {
            ctx->pc = 0x1D473Cu;
            goto label_1d473c;
        }
    }
    ctx->pc = 0x1D472Cu;
    // 0x1d472c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D472Cu;
    SET_GPR_U32(ctx, 31, 0x1D4734u);
    ctx->pc = 0x1D4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D472Cu;
    // 0x1d4730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D472Cu, 0x1D4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4734u;
label_1d4734:
    // 0x1d4734: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4734u;
    {
        const bool branch_taken_0x1d4734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4734u;
        // 0x1d4738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4734) {
            ctx->pc = 0x1D4748u;
            goto label_1d4748;
        }
    }
    ctx->pc = 0x1D473Cu;
label_1d473c:
    // 0x1d473c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D473Cu;
    SET_GPR_U32(ctx, 31, 0x1D4744u);
    ctx->pc = 0x1D4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D473Cu;
    // 0x1d4740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D473Cu, 0x1D4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4744u;
label_1d4744:
    // 0x1d4744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4748:
    // 0x1d4748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d474c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D474Cu;
        // 0x1d4750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4754u;
    // 0x1d4754: 0x0  nop
    ctx->pc = 0x1d4754u;
    // NOP
    ctx->pc = 0x1d4758u;
}
