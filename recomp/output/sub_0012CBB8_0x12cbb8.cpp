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

// Function: sub_0012CBB8
// Address: 0x12cbb8 - 0x12cc58
void sub_0012CBB8_0x12cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CBB8_0x12cbb8");
#endif

    switch (ctx->pc) {
        case 0x12cbe0u: goto label_12cbe0;
        case 0x12cbfcu: goto label_12cbfc;
        case 0x12cc08u: goto label_12cc08;
        case 0x12cc28u: goto label_12cc28;
        default: break;
    }

    ctx->pc = 0x12cbb8u;

    // 0x12cbb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12cbbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12cbc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12cbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12cbc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12cbcc: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x12cbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x12cbd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12cbd4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cbd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12cbd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12cbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbdc: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x12cbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_12cbe0:
    // 0x12cbe0: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x12cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x12cbe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12cbe8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12CBE8u;
    {
        const bool branch_taken_0x12cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBE8u;
        // 0x12cbec: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe8) {
            ctx->pc = 0x12CC30u;
            goto label_12cc30;
        }
    }
    ctx->pc = 0x12CBF0u;
    // 0x12cbf0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12cbf4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12CBF4u;
    SET_GPR_U32(ctx, 31, 0x12CBFCu);
    ctx->pc = 0x12CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CBF4u;
    // 0x12cbf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12CBF4u, 0x12CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBFCu;
label_12cbfc:
    // 0x12cbfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc00: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x12CC00u;
    SET_GPR_U32(ctx, 31, 0x12CC08u);
    ctx->pc = 0x12CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC00u;
    // 0x12cc04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x12CC00u, 0x12CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC08u;
label_12cc08:
    // 0x12cc08: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x12cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x12cc0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12cc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12cc14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cc18: 0x922207fc  lbu         $v0, 0x7FC($s1)
    ctx->pc = 0x12cc18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2044)));
    // 0x12cc1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cc20: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12CC20u;
    SET_GPR_U32(ctx, 31, 0x12CC28u);
    ctx->pc = 0x12CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC20u;
    // 0x12cc24: 0xa22207fc  sb          $v0, 0x7FC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2044), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12CC20u, 0x12CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC28u;
label_12cc28:
    // 0x12cc28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CC28u;
    {
        const bool branch_taken_0x12cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC28u;
        // 0x12cc2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc28) {
            ctx->pc = 0x12CC44u;
            goto label_12cc44;
        }
    }
    ctx->pc = 0x12CC30u;
label_12cc30:
    // 0x12cc30: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12cc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cc34: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x12cc34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x12cc38: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12CC38u;
    {
        const bool branch_taken_0x12cc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC38u;
        // 0x12cc3c: 0x480c0  sll         $s0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc38) {
            ctx->pc = 0x12CBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cbe0;
        }
    }
    ctx->pc = 0x12CC40u;
    // 0x12cc40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cc40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12cc44:
    // 0x12cc44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cc48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12cc48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cc4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cc50: 0x3e00008  jr          $ra
    ctx->pc = 0x12CC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC50u;
        // 0x12cc54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CC58u;
}
